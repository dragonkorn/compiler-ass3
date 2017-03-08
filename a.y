/* Reverse polish notation calculator.  */


%{
  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  void push (int data);
  int pop (void);
  int temp;
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
%precedence NEG   /* negation--unary minus */
%% /* Grammar rules and actions follow.  */

input: %empty
  | input line  { printf ("\n> "); }
  ;

line: '\n'    { printf ("acc = %d",acc);  }
  | exp '\n'  { printf ("= %.10g", $1); }
  | SHOW show '\n' 
  | LOAD load '\n'
  | PUSH reg '\n'  { temp = $2; push(temp); }
  | POP  '\n'
  ;

exp:  NUM     { $$ = $1;
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
  ;

show: reg     { temp = $1;
                printf("= %d",temp); }
;

load: ACC reg   { acc = $2; }
  | RA reg      { r[$1-263] = $2; }  
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
;

reg: ACC    { $$ = acc; }
  | RA      { $$ = r[0]; }
  | RB      { $$ = r[1]; }
  | RC      { $$ = r[2]; }
  | RD      { $$ = r[3]; }
  | RE      { $$ = r[4]; }
  | RF      { $$ = r[5]; }
  | RG      { $$ = r[6]; }
  | RH      { $$ = r[7]; }
  | RI      { $$ = r[8]; }
  | RJ      { $$ = r[9]; }
  | RK      { $$ = r[10]; }
  | RL      { $$ = r[11]; }
  | RM      { $$ = r[12]; }
  | RN      { $$ = r[13]; }
  | RO      { $$ = r[14]; }
  | RP      { $$ = r[15]; }
  | RQ      { $$ = r[16]; }
  | RR      { $$ = r[17]; }
  | RS      { $$ = r[18]; }
  | RT      { $$ = r[19]; }
  | RU      { $$ = r[20]; }
  | RV      { $$ = r[21]; }
  | RW      { $$ = r[22]; }
  | RX      { $$ = r[23]; }
  | RY      { $$ = r[24]; }
  | RZ      { $$ = r[25]; }
  | TOP     { $$ = top;   }
  | SIZE    { $$ = size;  }
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
    if(getchar () == 'U'){
      if(getchar () == 'S')
        if(getchar () == 'H')
          return PUSH;
    }
    if(getchar () == 'O')
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
