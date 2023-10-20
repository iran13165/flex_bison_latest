/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "sql.y"

    int yylex();
    void yyerror(char *s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 5 "sql.y"
{
        int intval;
        double floatval;
        char *strval;
        int subtok;
}
/* Line 193 of yacc.c.  */
#line 302 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 315 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNRULES -- Number of states.  */
#define YYNSTATES  413

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     103,   104,    13,    11,   105,    12,   106,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    18,    19,    21,    23,
      26,    28,    30,    32,    39,    41,    45,    47,    49,    53,
      54,    57,    60,    64,    69,    72,    75,    78,    83,    86,
      92,    97,   103,   111,   121,   126,   128,   132,   140,   141,
     145,   146,   150,   158,   159,   163,   166,   168,   170,   172,
     176,   178,   180,   182,   185,   188,   190,   194,   196,   198,
     200,   207,   208,   212,   214,   218,   221,   224,   225,   227,
     229,   231,   233,   235,   237,   239,   241,   243,   245,   247,
     249,   251,   253,   256,   259,   267,   272,   277,   283,   288,
     290,   292,   296,   298,   300,   303,   306,   313,   314,   316,
     318,   327,   328,   330,   334,   338,   342,   348,   350,   354,
     356,   357,   359,   361,   365,   370,   372,   376,   381,   383,
     385,   390,   393,   395,   399,   401,   404,   407,   408,   412,
     414,   418,   419,   422,   423,   427,   431,   434,   438,   440,
     442,   444,   446,   448,   450,   452,   454,   458,   462,   469,
     475,   481,   486,   487,   490,   495,   499,   506,   512,   519,
     525,   527,   531,   536,   538,   540,   542,   545,   552,   556,
     560,   564,   568,   571,   574,   576,   578,   580,   584,   586,
     590,   592,   594,   596,   598,   601,   605,   610,   616,   622,
     627,   629,   631,   633,   635,   639,   641,   645,   651,   653,
     658,   660,   665,   672,   674,   679,   686,   688,   690,   692,
     697,   699,   702,   704,   706,   708,   710,   712,   717,   721,
     724
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   102,    -1,   108,   109,   102,    -1,
     110,    -1,    32,    83,    22,   196,   111,    -1,    -1,   112,
      -1,   113,    -1,   112,   113,    -1,   114,    -1,   122,    -1,
     125,    -1,    32,    90,   189,   103,   115,   104,    -1,   116,
      -1,   115,   105,   116,    -1,   117,    -1,   120,    -1,   192,
     191,   118,    -1,    -1,   118,   119,    -1,     9,    65,    -1,
       9,    65,    93,    -1,     9,    65,    76,    61,    -1,    37,
     188,    -1,    37,    65,    -1,    37,    95,    -1,    27,   103,
     170,   104,    -1,    81,   189,    -1,    81,   189,   103,   121,
     104,    -1,    93,   103,   121,   104,    -1,    76,    61,   103,
     121,   104,    -1,    48,    61,   103,   121,   104,    81,   189,
      -1,    48,    61,   103,   121,   104,    81,   189,   103,   121,
      -1,    27,   103,   170,   104,    -1,   192,    -1,   121,   105,
     192,    -1,    32,    97,   189,   124,    20,   160,   123,    -1,
      -1,   100,    27,    70,    -1,    -1,   103,   121,   104,    -1,
      52,   127,    68,   189,    91,   130,   126,    -1,    -1,   100,
      52,    70,    -1,    17,    77,    -1,    17,    -1,   128,    -1,
     129,    -1,   128,   105,   129,    -1,    84,    -1,    57,    -1,
      38,    -1,    94,   124,    -1,    81,   124,    -1,   131,    -1,
     130,   105,   131,    -1,    79,    -1,   196,    -1,   132,    -1,
      36,   193,    34,    46,   158,   133,    -1,    -1,    71,    24,
     134,    -1,   135,    -1,   134,   105,   135,    -1,     5,   136,
      -1,   190,   136,    -1,    -1,    21,    -1,    39,    -1,   137,
      -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,   142,
      -1,   143,    -1,   147,    -1,   148,    -1,   149,    -1,   151,
      -1,   154,    -1,    28,   193,    -1,    30,   101,    -1,    38,
      50,   189,    99,    33,    67,   193,    -1,    38,    50,   189,
     157,    -1,    44,   193,    59,   155,    -1,    57,    59,   189,
     124,   144,    -1,    96,   103,   145,   104,    -1,   160,    -1,
     146,    -1,   145,   105,   146,    -1,   185,    -1,    65,    -1,
      69,   193,    -1,    82,   101,    -1,    84,   150,   161,    59,
     155,   162,    -1,    -1,    17,    -1,    40,    -1,    94,   189,
      85,   152,    99,    33,    67,   193,    -1,    -1,   153,    -1,
     152,   105,   153,    -1,   192,    10,   183,    -1,   192,    10,
      65,    -1,    94,   189,    85,   152,   157,    -1,   156,    -1,
     155,   105,   156,    -1,   186,    -1,    -1,   166,    -1,   159,
      -1,   158,    92,   159,    -1,   158,    92,    17,   159,    -1,
     160,    -1,   103,   158,   104,    -1,    84,   150,   161,   162,
      -1,   184,    -1,    13,    -1,   163,   157,   167,   169,    -1,
      50,   164,    -1,   165,    -1,   164,   105,   165,    -1,   189,
      -1,   189,   195,    -1,    99,   170,    -1,    -1,    53,    24,
     168,    -1,   190,    -1,   168,   105,   190,    -1,    -1,    54,
     170,    -1,    -1,   170,     7,   170,    -1,   170,     8,   170,
      -1,     9,   170,    -1,   103,   170,   104,    -1,   171,    -1,
     172,    -1,   173,    -1,   174,    -1,   176,    -1,   177,    -1,
     179,    -1,   181,    -1,   183,    10,   183,    -1,   183,    10,
     182,    -1,   183,     9,    23,   183,     8,   183,    -1,   183,
      23,   183,     8,   183,    -1,   183,     9,    63,   185,   175,
      -1,   183,    63,   185,   175,    -1,    -1,    42,   185,    -1,
     190,    60,     9,    65,    -1,   190,    60,    65,    -1,   183,
       9,    55,   103,   182,   104,    -1,   183,    55,   103,   182,
     104,    -1,   183,     9,    55,   103,   178,   104,    -1,   183,
      55,   103,   178,   104,    -1,   185,    -1,   178,   105,   185,
      -1,   183,    10,   180,   182,    -1,    19,    -1,    17,    -1,
      87,    -1,    43,   182,    -1,   103,    84,   150,   161,   162,
     104,    -1,   183,    11,   183,    -1,   183,    12,   183,    -1,
     183,    13,   183,    -1,   183,    14,   183,    -1,    11,   183,
      -1,    12,   183,    -1,   185,    -1,   190,    -1,   187,    -1,
     103,   183,   104,    -1,   183,    -1,   184,   105,   183,    -1,
     186,    -1,   188,    -1,    95,    -1,   194,    -1,   194,   194,
      -1,   194,    56,   194,    -1,    18,   103,    13,   104,    -1,
      18,   103,    40,   190,   104,    -1,    18,   103,    17,   183,
     104,    -1,    18,   103,   183,   104,    -1,     4,    -1,     5,
      -1,     6,    -1,     3,    -1,     3,   106,     3,    -1,     3,
      -1,     3,   106,     3,    -1,     3,   106,     3,   106,     3,
      -1,    25,    -1,    25,   103,     5,   104,    -1,    66,    -1,
      66,   103,     5,   104,    -1,    66,   103,     5,   105,     5,
     104,    -1,    35,    -1,    35,   103,     5,   104,    -1,    35,
     103,     5,   105,     5,   104,    -1,    58,    -1,    86,    -1,
      45,    -1,    45,   103,     5,   104,    -1,    80,    -1,    41,
      75,    -1,     3,    -1,     3,    -1,    72,    -1,     3,    -1,
       3,    -1,    98,     9,    49,   197,    -1,    98,    89,   197,
      -1,    51,     3,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    40,    43,    45,    46,    48,    49,
      51,    52,    53,    56,    58,    59,    61,    62,    65,    67,
      68,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      80,    81,    82,    83,    84,    86,    87,    89,    91,    92,
      94,    96,    99,   101,   102,   104,   105,   106,   108,   109,
     111,   112,   113,   114,   115,   117,   118,   120,   121,   124,
     126,   128,   129,   131,   132,   134,   135,   137,   138,   139,
     142,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   156,   158,   161,   164,   167,   170,   174,   175,
     178,   179,   182,   183,   185,   188,   191,   195,   197,   198,
     200,   202,   203,   204,   206,   207,   210,   213,   214,   216,
     218,   219,   223,   224,   225,   228,   229,   232,   234,   235,
     236,   239,   242,   243,   246,   247,   250,   252,   254,   257,
     258,   260,   262,   264,   265,   266,   267,   268,   269,   272,
     273,   274,   275,   276,   277,   278,   281,   282,   285,   286,
     289,   290,   292,   294,   297,   298,   301,   302,   303,   304,
     307,   308,   310,   313,   314,   315,   318,   321,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   337,   338,
     341,   342,   343,   346,   347,   348,   351,   352,   353,   354,
     357,   358,   359,   363,   364,   367,   368,   369,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   389,   391,   394,   396,   398,   401,   402,   404,
     405
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "APPROXNUM",
  "OR", "AND", "NOT", "COMPARISON", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "ADA", "ALL", "AMMSC", "ANY", "AS", "ASC", "AUTHORIZATION", "BETWEEN",
  "BY", "CHARACTER", "C", "CHECK", "CLOSE", "COBOL", "COMMIT", "CONTINUE",
  "CREATE", "CURRENT", "CURSOR", "DECIMAL", "DECLARE", "DEFAULT", "DELETE",
  "DESC", "DISTINCT", "DOUBLE", "ESCAPE", "EXISTS", "FETCH", "FLOAT",
  "FOR", "FORTRAN", "FOREIGN", "FOUND", "FROM", "GOTO", "GRANT", "GROUP",
  "HAVING", "IN", "INDICATOR", "INSERT", "INTEGER", "INTO", "IS", "KEY",
  "LANGUAGE", "LIKE", "MODULE", "NULLX", "NUMERIC", "OF", "ON", "OPEN",
  "OPTION", "ORDER", "PARAMETER", "PASCAL", "PLI", "PRECISION", "PRIMARY",
  "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL", "REFERENCES", "ROLLBACK",
  "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME", "SQLCODE", "SQLERROR",
  "TABLE", "TO", "UNION", "UNIQUE", "UPDATE", "USER", "VALUES", "VIEW",
  "WHENEVER", "WHERE", "WITH", "WORK", "';'", "'('", "')'", "','", "'.'",
  "$accept", "sql_list", "sql", "schema", "opt_schema_element_list",
  "schema_element_list", "schema_element", "base_table_def",
  "base_table_element_commalist", "base_table_element", "column_def",
  "column_def_opt_list", "column_def_opt", "table_constraint_def",
  "column_commalist", "view_def", "opt_with_check_option",
  "opt_column_commalist", "privilege_def", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "cursor_def", "opt_order_by_clause",
  "ordering_spec_commalist", "ordering_spec", "opt_asc_desc",
  "manipulative_statement", "close_statement", "commit_statement",
  "delete_statement_positioned", "delete_statement_searched",
  "fetch_statement", "insert_statement", "values_or_query_spec",
  "insert_atom_commalist", "insert_atom", "open_statement",
  "rollback_statement", "select_statement", "opt_all_distinct",
  "update_statement_positioned", "assignment_commalist", "assignment",
  "update_statement_searched", "target_commalist", "target",
  "opt_where_clause", "query_exp", "query_term", "query_spec", "selection",
  "table_exp", "from_clause", "table_ref_commalist", "table_ref",
  "where_clause", "opt_group_by_clause", "column_ref_commalist",
  "opt_having_clause", "search_condition", "predicate",
  "comparison_predicate", "between_predicate", "like_predicate",
  "opt_escape", "test_for_null", "in_predicate", "atom_commalist",
  "all_or_any_predicate", "any_all_some", "existence_test", "subquery",
  "scalar_exp", "scalar_exp_commalist", "atom", "parameter_ref",
  "function_ref", "literal", "table", "column_ref", "data_type", "column",
  "cursor", "parameter", "range_variable", "user", "when_action", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    43,    45,    42,    47,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    59,    40,    41,    44,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   110,   111,   111,   112,   112,
     113,   113,   113,   114,   115,   115,   116,   116,   117,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   109,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     109,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   139,   140,   141,   142,   143,   144,   144,
     145,   145,   146,   146,   147,   148,   149,   150,   150,   150,
     151,   152,   152,   152,   153,   153,   154,   155,   155,   156,
     157,   157,   158,   158,   158,   159,   159,   160,   161,   161,
     162,   163,   164,   164,   165,   165,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   170,   170,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   177,   177,
     178,   178,   179,   180,   180,   180,   181,   182,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   186,   187,   187,   187,   187,
     188,   188,   188,   189,   189,   190,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   192,   193,   194,   195,   196,   109,   109,   197,
     197
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     5,     0,     1,     1,     2,
       1,     1,     1,     6,     1,     3,     1,     1,     3,     0,
       2,     2,     3,     4,     2,     2,     2,     4,     2,     5,
       4,     5,     7,     9,     4,     1,     3,     7,     0,     3,
       0,     3,     7,     0,     3,     2,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     1,     1,     1,
       6,     0,     3,     1,     3,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     7,     4,     4,     5,     4,     1,
       1,     3,     1,     1,     2,     2,     6,     0,     1,     1,
       8,     0,     1,     3,     3,     3,     5,     1,     3,     1,
       0,     1,     1,     3,     4,     1,     3,     4,     1,     1,
       4,     2,     1,     3,     1,     2,     2,     0,     3,     1,
       3,     0,     2,     0,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     5,
       5,     4,     0,     2,     4,     3,     6,     5,     6,     5,
       1,     3,     4,     1,     1,     1,     2,     6,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     3,     4,     5,     5,     4,
       1,     1,     1,     1,     3,     1,     3,     5,     1,     4,
       1,     4,     6,     1,     4,     6,     1,     1,     1,     4,
       1,     2,     1,     1,     1,     1,     1,     4,     3,     2,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     4,    59,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   213,
      82,    83,     0,     0,     0,     0,     0,    94,    95,    98,
      99,     0,   193,     0,     0,     0,     1,     0,     2,     0,
       0,   110,     0,    40,   195,   190,   191,   192,     0,     0,
     119,     0,   214,   182,     0,     0,   178,   118,   174,   180,
     176,   181,   175,   183,     0,   101,     0,   220,     0,   218,
       3,   216,     6,     0,   133,    85,   111,    86,   107,   109,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,   194,   212,   110,   102,     0,
     217,   219,     0,     0,     5,     7,     8,    10,    11,    12,
      97,     0,    61,   112,   115,   133,     0,     0,   133,   126,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   175,
       0,     0,    35,     0,    87,    89,   196,     0,     0,     0,
       0,   177,     0,   168,   169,   170,   171,   179,   185,   133,
       0,   106,     0,     0,     0,    46,    52,    51,    40,    50,
      40,     0,    47,    48,     9,     0,     0,     0,     0,    60,
     136,     0,     0,   166,     0,     0,   133,   133,     0,     0,
       0,     0,     0,     0,   108,    41,     0,     0,     0,   186,
       0,     0,   189,     0,    96,   110,     0,   103,   105,   104,
       0,    40,    45,    54,    53,     0,     0,     0,   116,     0,
       0,   113,    84,    97,   137,   134,   135,     0,     0,     0,
     164,   163,   165,     0,     0,   147,   146,     0,     0,   152,
       0,   155,    36,    93,     0,    90,    92,   197,   188,   187,
     121,   122,   124,   133,   127,     0,     0,     0,     0,    49,
     117,    67,    62,    63,    67,   114,     0,     0,     0,   152,
     162,     0,     0,     0,   160,     0,   151,   154,    88,     0,
       0,   215,   125,     0,   131,   100,     0,     0,     0,     0,
       0,    14,    16,    17,     0,     0,     0,    68,    69,    65,
       0,    66,     0,     0,     0,     0,   150,   149,   159,     0,
     157,   153,    91,   123,     0,   133,   120,   133,     0,     0,
       0,    13,     0,   198,   203,     0,   208,   206,   200,   210,
     207,    19,    38,    57,    43,    55,    58,    64,     0,   148,
     158,   156,   161,   128,   129,   132,     0,     0,     0,     0,
      15,     0,     0,   211,     0,     0,    18,     0,    37,     0,
       0,    42,   167,     0,    34,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,    56,
     130,     0,    31,   199,   204,     0,   209,   201,     0,    21,
     133,    25,    26,    24,    28,    39,    44,     0,     0,     0,
       0,    22,     0,     0,    32,   205,   202,    23,    27,     0,
       0,    29,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,   114,   115,   116,   117,   290,   291,
     292,   356,   376,   293,   141,   118,   358,    91,   119,   361,
     171,   172,   173,   334,   335,    16,   179,   262,   263,   299,
      17,    18,    19,    20,    21,    22,    23,   144,   244,   245,
      24,    25,    26,    41,    27,   107,   108,    28,    87,    88,
      85,   122,   123,   124,    65,   204,   205,   250,   251,    86,
     284,   343,   316,   129,   130,   131,   132,   133,   276,   134,
     135,   272,   136,   234,   137,   183,   138,    67,    68,    69,
      70,    71,   252,    72,   331,   142,    30,    73,   282,   336,
      79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -254
static const yytype_int16 yypact[] =
{
     370,    41,   -79,    -9,    41,    37,    41,    99,    41,    81,
      94,   141,     4,   367,   107,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,   171,   196,   141,   176,   141,  -254,  -254,  -254,
    -254,   282,   131,   155,   200,   104,  -254,   149,  -254,   260,
     219,   169,   204,   179,   185,  -254,  -254,  -254,   347,   347,
    -254,   198,  -254,  -254,   347,   240,   311,   203,  -254,  -254,
    -254,  -254,  -254,    91,   300,   302,   104,  -254,   303,  -254,
    -254,  -254,   143,    38,    96,  -254,  -254,   205,  -254,  -254,
     302,   112,   310,  -254,  -254,   161,    39,   204,   347,   347,
     347,   347,   347,   204,  -254,  -254,  -254,    72,  -254,   305,
    -254,  -254,    43,   145,  -254,   143,  -254,  -254,  -254,  -254,
      94,    38,   -38,  -254,  -254,   266,   249,   229,   266,   236,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   434,   306,
     204,   153,  -254,   241,  -254,  -254,   233,   243,   347,   359,
      45,  -254,    33,   276,   276,  -254,  -254,   311,  -254,   209,
     302,  -254,   315,   141,   141,   291,  -254,  -254,   179,  -254,
     179,   325,   278,  -254,  -254,   282,   124,   346,    58,  -254,
    -254,    41,   312,  -254,     8,    26,   266,   266,    93,   242,
     347,   298,    74,    32,  -254,  -254,   302,    56,   401,  -254,
     175,   308,  -254,   141,  -254,   314,   350,  -254,  -254,   311,
     313,   179,  -254,  -254,  -254,   141,   279,   372,  -254,   195,
      38,  -254,  -254,    94,  -254,   412,  -254,   347,   320,    74,
    -254,  -254,  -254,   337,   229,  -254,   311,   211,    14,   383,
     361,  -254,  -254,  -254,   193,  -254,  -254,  -254,  -254,  -254,
     323,  -254,   427,   266,   378,    41,   235,   413,   343,  -254,
    -254,    52,   332,  -254,    52,  -254,   282,   458,    14,   383,
    -254,   347,   226,   334,  -254,    74,  -254,  -254,  -254,    56,
     141,  -254,  -254,   417,   399,  -254,   352,   395,   397,   356,
     230,  -254,  -254,  -254,   349,   376,    40,  -254,  -254,  -254,
     195,  -254,   372,   347,   252,   358,  -254,   311,  -254,    74,
    -254,  -254,  -254,  -254,   359,   266,  -254,   266,   360,   364,
     302,  -254,   235,   371,   373,   398,   374,  -254,   375,  -254,
    -254,  -254,   379,  -254,    85,  -254,  -254,  -254,   377,   311,
    -254,  -254,  -254,   380,  -254,   236,    19,   302,   302,   267,
    -254,   470,   475,  -254,   477,   478,   265,   457,  -254,   435,
      40,  -254,  -254,   359,  -254,   271,   274,  -254,   382,   277,
     384,   284,   425,   388,   201,   141,  -254,   422,   423,  -254,
    -254,   414,  -254,  -254,  -254,   489,  -254,  -254,   491,    61,
     266,  -254,  -254,  -254,   396,  -254,  -254,   141,   394,   400,
     439,  -254,    23,   302,   402,  -254,  -254,  -254,  -254,   287,
     302,  -254,   403
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,   488,  -254,  -254,  -254,   387,  -254,  -254,   181,
    -254,  -254,  -254,  -254,  -253,  -254,  -254,   -86,  -254,  -254,
    -254,  -254,   290,  -254,   147,  -254,  -254,  -254,   210,   245,
    -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,  -254,   232,
    -254,  -254,  -254,  -110,  -254,  -254,   353,  -254,   415,   381,
     -95,   393,  -130,   -84,  -151,  -196,  -254,  -254,   237,  -254,
    -254,  -254,  -254,  -123,  -254,  -254,  -254,  -254,   246,  -254,
    -254,   248,  -254,  -254,  -254,   -58,   -30,  -254,  -183,   -20,
    -254,   144,   -11,   -83,  -254,   -72,     0,   -56,  -254,   471,
     443
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      43,   139,   180,   109,    33,   184,    35,   145,    37,   239,
     175,    66,   161,    44,   246,   186,   187,   104,    55,    56,
      57,   260,    31,    51,   217,    53,   186,   187,    93,    94,
     186,   187,    89,   177,    96,   188,   189,    98,    99,   100,
     101,   240,   139,    81,    29,   139,   269,   158,   221,   190,
      98,    99,   100,   101,   178,   274,    98,    99,   100,   101,
      55,    56,    57,   225,   226,   150,   201,   349,   153,   154,
     155,   156,   157,   297,    32,   220,   139,    89,    55,    56,
      57,   191,   213,   203,   214,   274,    62,    34,   109,   192,
     265,   298,   311,    45,   365,   366,   246,   241,   185,    54,
      55,    56,    57,   139,   139,   125,   338,    58,    59,    63,
     254,    39,   224,   266,    61,   302,   227,   182,   200,   333,
      89,   243,   120,   364,   242,   257,   342,   408,    62,   126,
     151,   235,   209,   163,    40,    77,   264,   400,   140,   127,
     164,   121,   120,   151,    42,    66,    62,   103,   228,   202,
     409,    63,   210,   211,   401,    78,   229,   412,    36,   236,
     237,   121,   165,    62,    54,    55,    56,    57,    62,    63,
     139,   159,    58,    59,   147,   112,   270,   160,   148,    61,
     273,   222,    38,   166,   294,   359,    98,    99,   100,   101,
     360,    63,   345,    49,   346,   113,   120,   267,    54,   128,
     261,   149,   167,    96,   258,    55,    56,    57,   143,    48,
     305,   332,    54,    55,    56,    57,   178,   264,   125,   271,
      58,    59,    98,    99,   100,   101,   168,    61,   218,   169,
      50,   344,   139,    62,   139,    52,    66,    74,   106,   170,
      75,   307,   206,   186,   187,    54,    55,    56,    57,    76,
     294,    80,   127,    58,    59,   285,    63,   195,   196,   230,
      61,   231,   286,    81,    64,    83,   391,   402,    84,    54,
      55,    56,    57,   339,   372,   125,    62,    58,    59,   248,
     380,    62,    90,   287,    61,    54,    55,    56,    57,   100,
     101,    92,   373,    58,    59,    60,   392,   278,   279,    97,
      61,    95,   374,   105,    63,   106,   111,   139,   102,   127,
     140,   288,   128,   146,    62,   162,   181,   166,    54,    55,
      56,    57,    98,    99,   100,   101,    58,    59,   289,   232,
     308,   309,   182,    61,   321,   322,   167,    63,    62,   198,
      54,    55,    56,    57,   197,   233,   375,   199,    58,    59,
      54,    55,    56,    57,    62,    61,   340,   309,    58,    59,
     168,    63,    54,   169,   394,    61,   193,    46,   212,   128,
     219,   367,   196,   170,   323,   381,   196,    63,   382,   196,
     208,   384,   385,   216,   324,    64,   404,    62,   387,   388,
     325,   411,   196,   215,   326,     1,   223,     2,     1,     3,
       2,   238,     3,     4,   247,     5,     4,   327,     5,    62,
      63,     6,   249,   253,     6,   328,   256,   255,    64,    62,
     187,   223,   203,   268,     7,   275,   277,     7,   280,   329,
     281,   283,    63,   295,   296,   330,     8,   300,   310,     8,
      64,   314,    63,   188,   189,    98,    99,   100,   101,     9,
      64,    10,     9,   315,    10,   317,   318,   190,   319,   320,
     120,    11,   341,   347,    11,    12,   303,   348,    12,    98,
      99,   100,   101,   353,   351,   368,   352,   354,   355,   357,
     369,   362,   370,   371,   377,   363,   383,   378,   386,   191,
     389,   390,   395,   396,   398,   397,   399,   192,   405,   403,
     407,    47,   174,   350,   406,   410,   259,   379,   196,   301,
     337,   312,   152,   207,   176,   306,   304,   313,   393,   110,
      82,   194
};

static const yytype_uint16 yycheck[] =
{
      11,    84,   125,    75,     4,   128,     6,    91,     8,   192,
     120,    41,   107,     9,   197,     7,     8,    73,     4,     5,
       6,   217,   101,    34,   175,    36,     7,     8,    58,    59,
       7,     8,    52,    71,    64,     9,    10,    11,    12,    13,
      14,     9,   125,     3,     3,   128,   229,   103,   178,    23,
      11,    12,    13,    14,    92,   238,    11,    12,    13,    14,
       4,     5,     6,   186,   187,    95,   149,   320,    98,    99,
     100,   101,   102,    21,    83,    17,   159,    97,     4,     5,
       6,    55,   168,    50,   170,   268,    72,    50,   160,    63,
     220,    39,   275,    89,   347,   348,   279,    65,   128,     3,
       4,     5,     6,   186,   187,     9,   302,    11,    12,    95,
     205,    17,   104,   223,    18,   266,    23,   103,   148,    79,
     140,    65,    84,   104,   196,   211,   309,   104,    72,    33,
     104,   189,   162,    90,    40,    31,   219,    76,   105,    43,
      97,   103,    84,   104,     3,   175,    72,    56,    55,   104,
     403,    95,   163,   164,    93,    51,    63,   410,    59,   189,
     190,   103,    17,    72,     3,     4,     5,     6,    72,    95,
     253,    99,    11,    12,    13,    32,   234,   105,    17,    18,
     238,   181,   101,    38,   256,   100,    11,    12,    13,    14,
     105,    95,   315,    22,   317,    52,    84,   227,     3,   103,
       5,    40,    57,   233,   215,     4,     5,     6,    96,   102,
     268,   295,     3,     4,     5,     6,    92,   300,     9,     8,
      11,    12,    11,    12,    13,    14,    81,    18,   104,    84,
      34,   314,   315,    72,   317,    59,   266,   106,     3,    94,
      85,   271,    33,     7,     8,     3,     4,     5,     6,    49,
     322,   102,    43,    11,    12,   255,    95,   104,   105,    17,
      18,    19,    27,     3,   103,    46,    65,   390,    99,     3,
       4,     5,     6,   303,     9,     9,    72,    11,    12,   104,
     363,    72,   103,    48,    18,     3,     4,     5,     6,    13,
      14,   106,    27,    11,    12,    13,    95,   104,   105,    59,
      18,   103,    37,     3,    95,     3,     3,   390,   105,    43,
     105,    76,   103,     3,    72,    10,    67,    38,     3,     4,
       5,     6,    11,    12,    13,    14,    11,    12,    93,    87,
     104,   105,   103,    18,   104,   105,    57,    95,    72,   106,
       3,     4,     5,     6,   103,   103,    81,   104,    11,    12,
       3,     4,     5,     6,    72,    18,   104,   105,    11,    12,
      81,    95,     3,    84,   375,    18,    60,     0,    77,   103,
      24,   104,   105,    94,    25,   104,   105,    95,   104,   105,
      65,   104,   105,   105,    35,   103,   397,    72,   104,   105,
      41,   104,   105,    68,    45,    28,    84,    30,    28,    32,
      30,   103,    32,    36,     3,    38,    36,    58,    38,    72,
      95,    44,   104,    99,    44,    66,   103,    67,   103,    72,
       8,    84,    50,   103,    57,    42,    65,    57,   105,    80,
       3,    53,    95,    20,    91,    86,    69,   105,   104,    69,
     103,    24,    95,     9,    10,    11,    12,    13,    14,    82,
     103,    84,    82,    54,    84,   103,    61,    23,    61,   103,
      84,    94,   104,   103,    94,    98,     8,   103,    98,    11,
      12,    13,    14,    75,   103,     5,   103,   103,   103,   100,
       5,   104,     5,     5,    27,   105,   104,    52,   104,    55,
      65,   103,    70,    70,     5,    81,     5,    63,   104,   103,
      61,    13,   115,   322,   104,   103,   216,   360,   105,   264,
     300,   279,    97,   160,   121,   269,   268,   280,   374,    76,
      49,   140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    30,    32,    36,    38,    44,    57,    69,    82,
      84,    94,    98,   108,   109,   110,   132,   137,   138,   139,
     140,   141,   142,   143,   147,   148,   149,   151,   154,     3,
     193,   101,    83,   193,    50,   193,    59,   193,   101,    17,
      40,   150,     3,   189,     9,    89,     0,   109,   102,    22,
      34,   189,    59,   189,     3,     4,     5,     6,    11,    12,
      13,    18,    72,    95,   103,   161,   183,   184,   185,   186,
     187,   188,   190,   194,   106,    85,    49,    31,    51,   197,
     102,     3,   196,    46,    99,   157,   166,   155,   156,   186,
     103,   124,   106,   183,   183,   103,   183,    59,    11,    12,
      13,    14,   105,    56,   194,     3,     3,   152,   153,   192,
     197,     3,    32,    52,   111,   112,   113,   114,   122,   125,
      84,   103,   158,   159,   160,     9,    33,    43,   103,   170,
     171,   172,   173,   174,   176,   177,   179,   181,   183,   190,
     105,   121,   192,    96,   144,   160,     3,    13,    17,    40,
     183,   104,   155,   183,   183,   183,   183,   183,   194,    99,
     105,   157,    10,    90,    97,    17,    38,    57,    81,    84,
      94,   127,   128,   129,   113,   150,   158,    71,    92,   133,
     170,    67,   103,   182,   170,   183,     7,     8,     9,    10,
      23,    55,    63,    60,   156,   104,   105,   103,   106,   104,
     183,   190,   104,    50,   162,   163,    33,   153,    65,   183,
     189,   189,    77,   124,   124,    68,   105,   161,   104,    24,
      17,   159,   193,    84,   104,   170,   170,    23,    55,    63,
      17,    19,    87,   103,   180,   182,   183,   183,   103,   185,
       9,    65,   192,    65,   145,   146,   185,     3,   104,   104,
     164,   165,   189,    99,   157,    67,   103,   124,   189,   129,
     162,     5,   134,   135,   190,   159,   150,   183,   103,   185,
     182,     8,   178,   182,   185,    42,   175,    65,   104,   105,
     105,     3,   195,    53,   167,   193,    27,    48,    76,    93,
     115,   116,   117,   120,   192,    20,    91,    21,    39,   136,
     105,   136,   161,     8,   178,   182,   175,   183,   104,   105,
     104,   185,   146,   165,    24,    54,   169,   103,    61,    61,
     103,   104,   105,    25,    35,    41,    45,    58,    66,    80,
      86,   191,   160,    79,   130,   131,   196,   135,   162,   183,
     104,   104,   185,   168,   190,   170,   170,   103,   103,   121,
     116,   103,   103,    75,   103,   103,   118,   100,   123,   100,
     105,   126,   104,   105,   104,   121,   121,   104,     5,     5,
       5,     5,     9,    27,    37,    81,   119,    27,    52,   131,
     190,   104,   104,   104,   104,   105,   104,   104,   105,    65,
     103,    65,    95,   188,   189,    70,    70,    81,     5,     5,
      76,    93,   170,   103,   189,   104,   104,    61,   104,   121,
     103,   104,   121
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 36 "sql.y"
    { /*end_sql ();*/ }
    break;

  case 3:
#line 37 "sql.y"
    { /*end_sql();*/ }
    break;


/* Line 1267 of yacc.c.  */
#line 1967 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 408 "sql.y"

