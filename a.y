/* Reverse polish notation calculator.  */


%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  void push (int data);
  int pop (void);
  int bitwistop(int num1, int num2, char *op);
  int hextodec();
  int temp;
  int temp2;
  int acc;
  int r[26];
  int top;
  int size;
  int stack[1000];
  int topStack;

  //enum {RA=0, RB, RC, RD, RE, RF, RG, RH, RI, RJ, RK, RL, RM, RN, RO, RP, RQ, RR, RS, RT, RU, RV, RW, RX, RY, RZ};
  //enum {RA=0};
%}
%token SHOW
%token LOAD
%token POP
%token PUSH
%token ACC
%token RA
%token RB
%token RC
%token RD
%token RE
%token RF
%token RG
%token RH
%token RI
%token RJ
%token RK
%token RL
%token RM
%token RN
%token RO
%token RP
%token RQ
%token RR
%token RS
%token RT
%token RU
%token RV
%token RW
%token RX
%token RY
%token RZ
%token TOP
%token SIZE
%define api.value.type {double}
%token NUM
%token HEX
%token AND
%token OR
%token NOT
%precedence NEG   /* negation--unary minus */
%% /* Grammar rules and actions follow.  */

input: %empty
  | input line  { printf ("\n> "); }
  ;

line: '\n'    { printf ("acc = %d",acc);  }
  | exp '\n'  { printf ("= %.10g", $1); }
  | SHOW show '\n' 
  | LOAD load '\n'
  | PUSH reg '\n'   { temp = $2; push(r[temp-263]); }
  | PUSH nonEditReg '\n'   { temp = $2; push(temp); } 
  | POP reg '\n'    { temp = $2; r[temp-263] = pop(); }
 ;

exp:  NUM     { $$ = $1;
                acc = $$;
              }
  | HEX {
    $$ = $1;
                acc = $$;
  }
  | reg       { $$ = $1;
                acc = $$;
              }
  | exp '+' exp   { $$ = $1 + $3;      
                    acc = $$;
                  }
  | exp '-' exp   { $$ = $1 - $3;      
                    acc = $$;
                  }
  | exp '*' exp     { $$ = $1 * $3;         
                acc = $$;
              }
  | exp '/' exp     { $$ = $1 / $3;         
                acc = $$;
              }
  | exp '\\' exp      { $$ = fmod ($1, $3);         
                acc = $$;
              }
  | '-' exp  %prec NEG  { $$ = -$2;           
                acc = $$;
              }
  | exp '^' exp     { $$ = pow ($1, $3);        
                acc = $$;
              }
  | '(' exp ')'     { $$ = $2;            
                acc = $$;
              }
  | exp AND exp {
      temp = $1;
      temp2 = $3;
      $$ = bitwistop(temp, temp2, "and");
      acc = $$;
  }

  | exp OR exp {
      temp = $1;
      temp2 = $3;
      $$ = bitwistop(temp, temp2, "or");
      acc = $$;
  }

  | NOT exp {
      temp = $2;
      $$ = bitwistop(temp, 0, "not");
      acc = $$;
  }
  ;

show: reg     { temp = $1;  printf("= %d",r[temp-263]); }
  | nonEditReg { temp = $1;  printf("= %d",temp); }
;

<<<<<<< HEAD
load: ACC reg   { acc = $2; }
  | RA reg      { r[0] = $2; }  
  | RB reg     { r[1] = $2; } 
  | RC reg     { r[2] = $2; } 
  | RD reg     { r[3] = $2; } 
  | RE reg     { r[4] = $2; } 
  | RF reg     { r[5] = $2; } 
  | RG reg     { r[6] = $2; } 
  | RH reg     { r[7] = $2; } 
  | RI reg     { r[8] = $2; } 
  | RJ reg     { r[9] = $2; } 
  | RK reg     { r[10] = $2; } 
  | RL reg     { r[11] = $2; } 
  | RM reg     { r[12] = $2; } 
  | RN reg     { r[13] = $2; } 
  | RO reg     { r[14] = $2; } 
  | RP reg     { r[15] = $2; } 
  | RQ reg     { r[16] = $2; } 
  | RR reg     { r[17] = $2; } 
  | RS reg     { r[18] = $2; } 
  | RT reg     { r[19] = $2; } 
  | RU reg     { r[20] = $2; } 
  | RV reg     { r[21] = $2; } 
  | RW reg     { r[22] = $2; } 
  | RX reg     { r[23] = $2; } 
  | RY reg     { r[24] = $2; } 
  | RZ reg     { r[25] = $2; } 
=======
load: reg reg      { temp=$1; temp2=$2; r[temp-263] = r[temp2-263]; }  
  | reg nonEditReg { temp=$1; r[temp-263] = $2; }
>>>>>>> 13e3d95f5b852221a51779d308073e9526b41ff0
;

nonEditReg: ACC   { $$ = acc; }
  | TOP     { $$ = top;   }
  | SIZE    { $$ = size;  }
;

reg: RA      { $$ = RA; }
  | RB      { $$ = RB; }
  | RC      { $$ = RC; }
  | RD      { $$ = RD; }
  | RE      { $$ = RE; }
  | RF      { $$ = RF; }
  | RG      { $$ = RG; }
  | RH      { $$ = RH; }
  | RI      { $$ = RI; }
  | RJ      { $$ = RJ; }
  | RK      { $$ = RK; }
  | RL      { $$ = RL; }
  | RM      { $$ = RM; }
  | RN      { $$ = RN; }
  | RO      { $$ = RO; }
  | RP      { $$ = RP; }
  | RQ      { $$ = RQ; }
  | RR      { $$ = RR; }
  | RS      { $$ = RS; }
  | RT      { $$ = RT; }
  | RU      { $$ = RU; }
  | RV      { $$ = RV; }
  | RW      { $$ = RW; }
  | RX      { $$ = RX; }
  | RY      { $$ = RY; }
  | RZ      { $$ = RZ; }
;

%%
/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input.  */

#include <ctype.h>
int
yylex (void)
{
  int c;

  /* Skip white space.  */
  while ((c = getchar ()) == ' ' || c == '\t')
    continue;
  /* Process operation */
  if (c == 'S'){
    if(getchar () == 'H')
      if(getchar () == 'O')
        if(getchar () == 'W')
          return SHOW;
  }
  if (c == 'L'){
    if(getchar () == 'O')
      if(getchar () == 'A')
        if(getchar () == 'D')
          return LOAD;
  }
  if (c == 'P'){
    c = getchar ();
    if(c == 'U'){
      if(getchar () == 'S')
        if(getchar () == 'H')
          return PUSH;
    }
    else if(c == 'O')
      if(getchar () == 'P')
        return POP;
  }

  /* Process register */
  if (c == '$'){
    if((c = getchar ()) == 'a'){
      if(getchar () == 'c')
        if(getchar () == 'c')
          return ACC;
    }
    if(c == 'r'){
      c = getchar ();
      switch (c){
        case 'A' : return RA; break;
        case 'B' : return RB; break;
        case 'C' : return RC; break;
        case 'D' : return RD; break;
        case 'E' : return RE; break;
        case 'F' : return RF; break;
        case 'G' : return RG; break;
        case 'H' : return RH; break;
        case 'I' : return RI; break;
        case 'J' : return RJ; break;
        case 'K' : return RK; break;
        case 'L' : return RL; break;
        case 'M' : return RM; break;
        case 'N' : return RN; break;
        case 'O' : return RO; break;
        case 'P' : return RP; break;
        case 'Q' : return RQ; break;
        case 'R' : return RR; break;
        case 'S' : return RS; break;
        case 'T' : return RT; break;
        case 'U' : return RU; break;
        case 'V' : return RV; break;
        case 'W' : return RW; break;
        case 'X' : return RX; break;
        case 'Y' : return RY; break;
        case 'Z' : return RZ; break;
      }
    }
    if( c == 's'){
      if(getchar () == 'i')
        if(getchar () == 'z')
          if(getchar () == 'e')
            return SIZE;
    }
    if( c == 't'){
      if(getchar () == 'o')
        if(getchar () == 'p')
          return TOP;
    }
  }
  /* Process numbers.  */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      scanf ("%lf", &yylval); 
      return NUM;
    }
  /* Return end-of-input.  */
  if (c == EOF)
    return 0;
  /* Return a single char.  */
  return c;
}
void
push (int data)
{
  stack[topStack++] = data;
  top = data;
  size++;
}

int 
pop (void)
{
  acc = stack[--topStack];
  top = stack[topStack];
  size--;
  return acc;
}

int bitwistop(int num1, int num2, char *op){
  int ret;
  if(op == "and"){
    ret = num1 & num2;
  }
  else if(op == "or"){
    ret = num1 | num2;
  }
  else if(op == "not"){
    ret = ~num1;
  }
  return ret;
}

int hextodec(char *hex){
  int ret;
  return ret;
}

int
main (void)
{
  printf("> ");
  return yyparse ();
}
#include <stdio.h>

/* Called by yyparse on error.  */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}
