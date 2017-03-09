/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SHOW = 258,
    LOAD = 259,
    POP = 260,
    PUSH = 261,
    ACC = 262,
    RA = 263,
    RB = 264,
    RC = 265,
    RD = 266,
    RE = 267,
    RF = 268,
    RG = 269,
    RH = 270,
    RI = 271,
    RJ = 272,
    RK = 273,
    RL = 274,
    RM = 275,
    RN = 276,
    RO = 277,
    RP = 278,
    RQ = 279,
    RR = 280,
    RS = 281,
    RT = 282,
    RU = 283,
    RV = 284,
    RW = 285,
    RX = 286,
    RY = 287,
    RZ = 288,
    TOP = 289,
    SIZE = 290,
    NUM = 291,
    HEX = 292,
    AND = 293,
    OR = 294,
    NOT = 295,
    EXIT = 296,
    str = 297,
    NEG = 298
  };
#endif
/* Tokens.  */
#define SHOW 258
#define LOAD 259
#define POP 260
#define PUSH 261
#define ACC 262
#define RA 263
#define RB 264
#define RC 265
#define RD 266
#define RE 267
#define RF 268
#define RG 269
#define RH 270
#define RI 271
#define RJ 272
#define RK 273
#define RL 274
#define RM 275
#define RN 276
#define RO 277
#define RP 278
#define RQ 279
#define RR 280
#define RS 281
#define RT 282
#define RU 283
#define RV 284
#define RW 285
#define RX 286
#define RY 287
#define RZ 288
#define TOP 289
#define SIZE 290
#define NUM 291
#define HEX 292
#define AND 293
#define OR 294
#define NOT 295
#define EXIT 296
#define str 297
#define NEG 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef double YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
