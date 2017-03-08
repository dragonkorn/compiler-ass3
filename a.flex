%option noyywrap

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
enum {SHOW=300, LOAD, POP, PUSH, ACC, top, size};


%}

%%

"SHOW"			{ count(); return(SHOW); }
"LOAD"			{ count(); return(LOAD); }
"POP"			{ count(); return(POP); }
"PUSH"			{ count(); return(PUSH); }
"ACC"			{ count(); return(ACC); }
"top"			{ count(); return(top); }
"size"			{ count(); return(size); }
.			{ /* ignore bad characters */ }

%%

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
}

void main() {
	
}