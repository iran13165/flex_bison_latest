/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     APPROXNUM = 261,
     OR = 262,
     AND = 263,
     NOT = 264,
     COMPARISON = 265,
     UMINUS = 266,
     ADA = 267,
     ALL = 268,
     AMMSC = 269,
     ANY = 270,
     AS = 271,
     ASC = 272,
     AUTHORIZATION = 273,
     BETWEEN = 274,
     BY = 275,
     CHARACTER = 276,
     C = 277,
     CHECK = 278,
     CLOSE = 279,
     COBOL = 280,
     COMMIT = 281,
     CONTINUE = 282,
     CREATE = 283,
     CURRENT = 284,
     CURSOR = 285,
     DECIMAL = 286,
     DECLARE = 287,
     DEFAULT = 288,
     DELETE = 289,
     DESC = 290,
     DISTINCT = 291,
     DOUBLE = 292,
     ESCAPE = 293,
     EXISTS = 294,
     FETCH = 295,
     FLOAT = 296,
     FOR = 297,
     FORTRAN = 298,
     FOREIGN = 299,
     FOUND = 300,
     FROM = 301,
     GOTO = 302,
     GRANT = 303,
     GROUP = 304,
     HAVING = 305,
     IN = 306,
     INDICATOR = 307,
     INSERT = 308,
     INTEGER = 309,
     INTO = 310,
     IS = 311,
     KEY = 312,
     LANGUAGE = 313,
     LIKE = 314,
     MODULE = 315,
     NULLX = 316,
     NUMERIC = 317,
     OF = 318,
     ON = 319,
     OPEN = 320,
     OPTION = 321,
     ORDER = 322,
     PARAMETER = 323,
     PASCAL = 324,
     PLI = 325,
     PRECISION = 326,
     PRIMARY = 327,
     PRIVILEGES = 328,
     PROCEDURE = 329,
     PUBLIC = 330,
     REAL = 331,
     REFERENCES = 332,
     ROLLBACK = 333,
     SCHEMA = 334,
     SELECT = 335,
     SET = 336,
     SMALLINT = 337,
     SOME = 338,
     SQLCODE = 339,
     SQLERROR = 340,
     TABLE = 341,
     TO = 342,
     UNION = 343,
     UNIQUE = 344,
     UPDATE = 345,
     USER = 346,
     VALUES = 347,
     VIEW = 348,
     WHENEVER = 349,
     WHERE = 350,
     WITH = 351,
     WORK = 352
   };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define INTNUM 260
#define APPROXNUM 261
#define OR 262
#define AND 263
#define NOT 264
#define COMPARISON 265
#define UMINUS 266
#define ADA 267
#define ALL 268
#define AMMSC 269
#define ANY 270
#define AS 271
#define ASC 272
#define AUTHORIZATION 273
#define BETWEEN 274
#define BY 275
#define CHARACTER 276
#define C 277
#define CHECK 278
#define CLOSE 279
#define COBOL 280
#define COMMIT 281
#define CONTINUE 282
#define CREATE 283
#define CURRENT 284
#define CURSOR 285
#define DECIMAL 286
#define DECLARE 287
#define DEFAULT 288
#define DELETE 289
#define DESC 290
#define DISTINCT 291
#define DOUBLE 292
#define ESCAPE 293
#define EXISTS 294
#define FETCH 295
#define FLOAT 296
#define FOR 297
#define FORTRAN 298
#define FOREIGN 299
#define FOUND 300
#define FROM 301
#define GOTO 302
#define GRANT 303
#define GROUP 304
#define HAVING 305
#define IN 306
#define INDICATOR 307
#define INSERT 308
#define INTEGER 309
#define INTO 310
#define IS 311
#define KEY 312
#define LANGUAGE 313
#define LIKE 314
#define MODULE 315
#define NULLX 316
#define NUMERIC 317
#define OF 318
#define ON 319
#define OPEN 320
#define OPTION 321
#define ORDER 322
#define PARAMETER 323
#define PASCAL 324
#define PLI 325
#define PRECISION 326
#define PRIMARY 327
#define PRIVILEGES 328
#define PROCEDURE 329
#define PUBLIC 330
#define REAL 331
#define REFERENCES 332
#define ROLLBACK 333
#define SCHEMA 334
#define SELECT 335
#define SET 336
#define SMALLINT 337
#define SOME 338
#define SQLCODE 339
#define SQLERROR 340
#define TABLE 341
#define TO 342
#define UNION 343
#define UNIQUE 344
#define UPDATE 345
#define USER 346
#define VALUES 347
#define VIEW 348
#define WHENEVER 349
#define WHERE 350
#define WITH 351
#define WORK 352




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 5 "sql.y"
{
        int intval;
        double floatval;
        char *strval;
        int subtok;
}
/* Line 1529 of yacc.c.  */
#line 250 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

