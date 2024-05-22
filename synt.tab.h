
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_VAR_GLOBAL = 258,
     mc_DECLARATION = 259,
     mc_INSTRUCTION = 260,
     IDF = 261,
     INTEGER = 262,
     FLOAT = 263,
     mc_INTEGER = 264,
     mc_FLOAT = 265,
     mc_CONST = 266,
     WHILE = 267,
     FOR = 268,
     IF = 269,
     ELSE = 270,
     and = 271,
     or = 272,
     not = 273,
     READ = 274,
     WRITE = 275,
     feracc = 276,
     ouvracc = 277,
     ferc = 278,
     ouvrc = 279,
     ouvrp = 280,
     ferp = 281,
     vrg = 282,
     pvg = 283,
     points = 284,
     STRING = 285,
     aff = 286,
     add = 287,
     sous = 288,
     mul = 289,
     divs = 290,
     sup = 291,
     supEg = 292,
     inf = 293,
     infEg = 294,
     egl = 295,
     diff = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 26 "synt.y"
  
    char chaine[20];
    int entier;
    float reel;



/* Line 1676 of yacc.c  */
#line 101 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


