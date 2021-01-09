/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc4.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	typedef struct node
	{
		char *token;
		struct node *left;
		struct node *right;
	} node;
	
	node* mknode(char *token, node *left, node *right);
	void printtree(node *tree);
	int func(char* a, char* b, char *c);
	void printTabs(int n);

	int level = 0;
	#define YYSTYPE struct node*

#line 87 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    BOOLT = 258,
    CHART = 259,
    INTT = 260,
    REALT = 261,
    STRINGT = 262,
    INTP = 263,
    CHARP = 264,
    REALP = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    VAR = 269,
    FUNC = 270,
    PROC = 271,
    RETURN = 272,
    NULLL = 273,
    MAIN = 274,
    AND = 275,
    DIVIDE = 276,
    ASIGN = 277,
    COMPARE = 278,
    GREATER = 279,
    GREATEREQUAL = 280,
    LESS = 281,
    LESSEQUAL = 282,
    MINUS = 283,
    NOT = 284,
    NOTEQUAL = 285,
    OR = 286,
    PLUS = 287,
    MULTIPLY = 288,
    ADDRESS = 289,
    DEFERENCE = 290,
    INTEGER = 291,
    REAL = 292,
    STRING = 293,
    CHAR = 294,
    BOOLEANTRUE = 295,
    BOOLEANFALSE = 296,
    IDENTIFIER = 297,
    OBLOCK = 298,
    CBLOCK = 299,
    OLIST = 300,
    CLIST = 301,
    ABSOLUTE = 302,
    OINDEX = 303,
    CINDEX = 304,
    COLONS = 305,
    COMMA = 306,
    ENDLINE = 307
  };
#endif
/* Tokens.  */
#define BOOLT 258
#define CHART 259
#define INTT 260
#define REALT 261
#define STRINGT 262
#define INTP 263
#define CHARP 264
#define REALP 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define VAR 269
#define FUNC 270
#define PROC 271
#define RETURN 272
#define NULLL 273
#define MAIN 274
#define AND 275
#define DIVIDE 276
#define ASIGN 277
#define COMPARE 278
#define GREATER 279
#define GREATEREQUAL 280
#define LESS 281
#define LESSEQUAL 282
#define MINUS 283
#define NOT 284
#define NOTEQUAL 285
#define OR 286
#define PLUS 287
#define MULTIPLY 288
#define ADDRESS 289
#define DEFERENCE 290
#define INTEGER 291
#define REAL 292
#define STRING 293
#define CHAR 294
#define BOOLEANTRUE 295
#define BOOLEANFALSE 296
#define IDENTIFIER 297
#define OBLOCK 298
#define CBLOCK 299
#define OLIST 300
#define CLIST 301
#define ABSOLUTE 302
#define OINDEX 303
#define CINDEX 304
#define COLONS 305
#define COMMA 306
#define ENDLINE 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    32,    34,    36,    36,    38,    43,    51,
      54,    54,    56,    57,    60,    61,    63,    64,    66,    67,
      68,    69,    70,    71,    72,    73,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    98,    98,   100,   103,   105,   105,   108,
     108,   108,   113,   113,   113,   117,   117,   117,   122,   123,
     124,   126,   126,   128,   133,   133,   135,   136,   137,   138,
     139,   140,   141,   142,   144,   145,   147,   148,   150,   152,
     153,   154,   156,   157,   158,   159,   160,   161,   163,   164,
     165,   166,   167,   171,   172,   173,   175,   180,   181,   182,
     183,   184,   185,   186,   187,   189,   191,   192,   193,   195,
     196,   197,   198,   199,   200,   202,   203,   204,   205,   206,
     210,   211,   212,   214,   219,   220,   221,   222,   223,   224,
     225,   226,   229,   231,   232,   233,   235,   236,   237,   238,
     239,   240,   242,   243,   244,   245,   246,   250,   251,   252,
     253,   255,   260,   261,   262,   263,   264,   265,   266,   267,
     270,   272,   273,   274,   276,   277,   278,   279,   280,   281,
     283,   284,   285,   286,   287,   291,   292,   293,   295,   300,
     301,   302,   303,   304,   305,   306,   307,   310,   312,   313,
     314,   316,   317,   318,   319,   320,   321,   323,   324,   325,
     326,   327,   327,   331,   332,   333,   335,   340,   341,   342,
     343,   344,   345,   346,   347,   350,   350,   352,   353,   354,
     355,   356,   358,   358,   359,   360,   361,   363,   364,   365,
     366,   368,   368,   371,   373,   374,   374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLT", "CHART", "INTT", "REALT",
  "STRINGT", "INTP", "CHARP", "REALP", "IF", "ELSE", "WHILE", "VAR",
  "FUNC", "PROC", "RETURN", "NULLL", "MAIN", "AND", "DIVIDE", "ASIGN",
  "COMPARE", "GREATER", "GREATEREQUAL", "LESS", "LESSEQUAL", "MINUS",
  "NOT", "NOTEQUAL", "OR", "PLUS", "MULTIPLY", "ADDRESS", "DEFERENCE",
  "INTEGER", "REAL", "STRING", "CHAR", "BOOLEANTRUE", "BOOLEANFALSE",
  "IDENTIFIER", "OBLOCK", "CBLOCK", "OLIST", "CLIST", "ABSOLUTE", "OINDEX",
  "CINDEX", "COLONS", "COMMA", "ENDLINE", "$accept", "project",
  "pushEndSign", "program", "procedures", "procedure", "pushScope",
  "parameters", "para_list", "argVars", "vars", "argsTypes", "types",
  "str_types", "procedure_body", "declarations", "declare", "statements",
  "statment", "$@1", "@2", "$@3", "@4", "$@5", "$@6", "statment_block",
  "block", "return_statement", "ret_types", "assignment", "lhs",
  "str_expression", "ret_expression", "stmnt_expression", "expression",
  "expr", "@7", "address_expression", "address", "deference_types",
  "deference_statement", "function_call", "@8", "call_expression",
  "call_expression_args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -274

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-274)))

#define YYTABLE_NINF -232

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -274,     2,  -274,  -274,  -274,    -1,   -33,   -33,  -274,  -274,
     -29,   -28,   -20,   -20,   -26,    -3,   -11,   -24,    15,   -20,
      39,   -20,   172,    20,  -274,   351,   -11,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,    26,    -1,    28,  -274,    99,
    -274,    77,    76,  -274,   210,   395,    95,    72,    74,  -274,
    -274,  -274,  -274,  -274,   108,   504,   544,   -35,   109,   115,
     121,   122,   129,   131,   100,  -274,   504,   689,  -274,  -274,
     110,   144,    79,  1690,   162,  -274,   164,   163,   179,   108,
     395,   109,   115,   121,   122,   129,   131,    53,   395,   268,
     162,   163,   179,  -274,    76,   389,   169,   170,   171,    80,
    1566,  1690,  -274,   689,  -274,  -274,  -274,  -274,  -274,  -274,
      19,   798,    44,  -274,  -274,   174,   689,   838,   185,    99,
    1436,  1656,   126,   689,  1464,  -274,  -274,   689,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,  -274,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,    50,  1584,   395,  1482,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,  -274,  -274,   176,   184,   187,   188,   189,   190,
     192,   193,   165,   208,   968,   968,   968,   504,  1099,   124,
     689,  1673,   108,   838,   109,   115,   121,   122,   129,   131,
      82,   838,  1128,  1192,  1226,   162,   163,   179,   504,  -274,
      -5,  -274,  -274,   689,  -274,  1690,   206,  1566,  1566,  1566,
    1566,  1566,  1566,  1566,  1566,  1566,  1566,  1566,  1566,  1566,
    1690,  1690,  1690,  1690,  1690,  1690,  1690,  1690,  1690,  1690,
    1690,  1690,  1690,  -274,  -274,  1241,  -274,  1584,  1584,  1584,
    1584,  1584,  1584,  1584,  1584,  1584,  1584,  1584,  1584,  1584,
    -274,  1099,   108,   968,   109,   115,   121,   122,   129,   131,
     102,   968,   968,  1602,   162,   163,   179,  1602,  1602,   108,
    1099,   109,   115,   121,   122,   129,   131,   106,  1099,  1271,
     162,   163,   179,  -274,  1099,  1301,  -274,  1620,   838,  1510,
    1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,  1099,
    1099,  1099,  1099,  -274,  -274,  -274,  1051,   213,   217,  -274,
    -274,  1316,  1602,   968,  1538,  1638,   968,   968,   968,   968,
     968,   968,   968,   968,   968,   968,   968,   968,   968,   216,
     218,   219,  1099,  -274,  1346,  -274,  1376,  -274,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
    1620,   504,  -274,  -274,   211,  1406,  -274,   968,  1602,  1602,
    1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,
    1602,    10,    10,    10,   221,  -274,  -274,  -274,  -274,   504,
    -274,  -274,   256,  -274,  -274,  1021,    10,  -274,  -274
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     2,     4,     0,     0,     5,     9,
       0,     0,    11,    11,    15,     0,    10,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    13,    18,    19,    20,
      21,    22,    23,    24,    25,    12,     6,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    44,     0,     6,    48,
       7,    65,     0,    43,    42,     0,     0,    17,     0,   223,
     225,   224,    49,    55,   186,     0,     0,     0,   179,   180,
     182,   181,   183,   184,   185,    44,     0,     0,    47,    60,
       0,     0,     0,     0,   175,   216,     0,   176,   177,   131,
       0,   124,   125,   127,   126,   128,   129,   130,     0,     0,
     120,   121,   122,     8,     0,     0,     0,     0,     0,   185,
     163,   190,   214,     0,   207,   208,   210,   209,   211,   212,
     213,     0,   203,   204,   205,   227,     0,     0,     0,    48,
       0,     0,   213,     0,     0,   203,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    16,    26,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,   213,
       0,     0,   104,     0,    97,    98,   100,    99,   101,   102,
     103,     0,     0,     0,     0,    93,    94,    95,   236,   232,
      65,   160,   187,     0,   201,    75,   205,   161,   173,   164,
     166,   168,   167,   169,   171,   165,   162,   170,   172,   174,
     188,   200,   191,   193,   195,   194,   196,   198,   192,   189,
     197,   199,   221,   226,   230,     0,   105,   106,   118,   109,
     111,   113,   112,   114,   116,   110,   107,   115,   117,   119,
      45,     0,   159,     0,   152,   153,   155,   154,   156,   157,
     158,     0,     0,    50,   148,   149,   150,    53,    56,   104,
       0,    97,    98,   100,    99,   101,   102,   103,     0,     0,
      93,    94,    95,   218,     0,     0,   228,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,   178,   206,   235,     0,     0,   202,
     123,     0,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   229,     0,    78,    79,    91,
      82,    84,    86,    85,    87,    89,    83,    80,    88,    90,
      92,   236,   233,    63,     0,     0,   132,   147,   133,   145,
     136,   138,   140,   139,   141,   143,   137,   134,   142,   144,
     146,     0,     0,     0,     0,    96,   234,    46,   151,     0,
      61,    51,     0,    57,   220,     0,     0,    62,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,  -274,  -274,   267,  -274,   264,   272,   265,   271,
     183,  -274,  -274,  -274,   249,   228,  -274,   178,   -53,  -274,
    -274,  -274,  -274,  -274,  -274,  -273,  -274,    85,  -274,  -274,
    -274,   -38,   588,   128,   -65,   903,  -274,    31,  -274,   143,
     325,   619,  -274,  -274,   -62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    46,     8,    10,    15,    16,    17,
      58,    35,   192,   193,    47,    49,    53,    54,   400,   106,
     349,   107,   350,   108,   351,   401,    79,    56,    45,    80,
      81,   307,    99,   390,    82,    83,   329,    84,    85,    86,
      87,    88,   128,   219,   327
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     110,    78,     3,    59,    60,    61,    62,   125,    63,     9,
     126,   130,    55,    64,     6,     7,    12,    13,    59,    60,
      61,    62,    14,    63,    65,    19,    22,   399,    64,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    65,
      76,    21,    77,    20,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,  -226,    76,    25,    77,    59,    60,
      61,    23,   213,    36,  -231,  -217,  -217,   198,  -217,    48,
    -217,  -217,    50,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   100,  -213,  -226,   212,
    -215,  -215,   253,  -215,    55,  -215,  -215,   122,  -231,   138,
     139,   167,   140,   141,   142,   143,   144,   145,   135,   146,
     147,   148,   149,    52,  -213,  -226,  -213,  -226,    57,   402,
     403,   100,   -77,   104,   105,  -231,   150,  -231,   197,   100,
     308,   151,   213,   408,  -213,  -226,  -213,  -226,   110,   103,
    -213,  -226,  -214,  -207,   135,  -231,   130,  -231,   127,  -208,
     333,  -231,   135,   326,   352,  -210,  -209,   135,   215,  -226,
     299,  -226,   136,  -211,   135,  -212,   137,    78,   135,  -231,
     303,  -231,   304,   309,   223,    27,    28,    29,    30,    31,
      32,    33,    34,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,  -203,  -204,   100,   165,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,  -205,   194,   195,   196,   270,    59,    60,
      61,    62,   200,    63,   -34,   284,   284,   284,    64,   300,
     218,   135,   -35,   331,   215,   -36,   -37,   -38,   -39,    65,
     -40,   -41,   215,   213,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   135,    76,   271,    77,   -74,   372,
     309,   373,   391,   397,   392,   393,   354,   404,   406,     5,
     356,    11,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,    18,    26,   183,   169,   170,
      24,   171,   172,   173,   174,   175,   176,    51,   177,   178,
     179,   180,   300,   129,   284,   328,   326,   220,   254,   396,
       0,     0,   284,   284,   356,   181,     0,     0,     0,     0,
     182,   300,   283,   287,   288,     0,     0,     0,     0,   300,
       0,     0,     0,     0,   405,   300,     0,     0,     0,   215,
       0,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,   284,     0,     0,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     101,     0,     0,   300,     0,     0,     0,     0,     0,     0,
       0,   123,   184,   185,   186,   187,   188,   189,   190,   191,
       0,   332,   123,    59,    60,    61,     0,     0,   284,   334,
     335,     0,     0,    89,     0,   101,     0,     0,     0,     0,
       0,     0,     0,   101,    90,     0,     0,     0,     0,    66,
      67,    91,    92,    93,    94,    95,    96,    97,   123,     0,
      98,     0,    77,     0,     0,     0,   123,     0,     0,     0,
       0,   123,   216,     0,     0,     0,     0,     0,   123,     0,
       0,   375,   123,     0,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,     0,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
       0,     0,   101,     0,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,     0,     0,     0,
       0,     0,    59,    60,    61,     0,     0,     0,     0,   285,
     285,   285,    64,   301,     0,   123,     0,     0,   216,     0,
       0,     0,     0,    65,     0,     0,   216,     0,    66,    67,
      68,    69,    70,    71,    72,    73,   109,     0,   123,    76,
       0,    77,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,    66,    67,
     114,   115,   116,   117,   118,   119,   120,     0,     0,   121,
       0,    77,     0,     0,     0,     0,   301,     0,   285,     0,
       0,     0,     0,     0,     0,     0,   285,   285,     0,     0,
       0,     0,     0,     0,     0,   301,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,     0,     0,   301,
       0,     0,     0,   216,     0,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   285,     0,
       0,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   102,     0,     0,   301,   166,     0,
       0,     0,     0,     0,     0,   124,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,    59,    60,    61,
       0,     0,   285,     0,     0,     0,     0,   112,     0,   102,
       0,     0,     0,     0,     0,     0,     0,   102,   113,     0,
       0,     0,     0,    66,    67,   114,   115,   116,   117,   118,
     119,   132,   124,     0,   133,     0,    77,     0,     0,     0,
     124,     0,     0,     0,     0,   124,   217,     0,     0,     0,
       0,     0,   124,     0,     0,   255,   226,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
       0,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,     0,     0,   102,     0,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,     0,     0,     0,     0,     0,    59,    60,    61,     0,
       0,     0,     0,   286,   286,   286,   112,   302,     0,   124,
       0,     0,   217,     0,     0,     0,     0,   113,     0,     0,
     217,     0,    66,    67,   114,   115,   116,   117,   118,   119,
     199,     0,   124,   133,     0,    77,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,   202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,    66,    67,   204,   205,   206,   207,   208,   209,
     210,     0,     0,   211,     0,    77,     0,     0,     0,     0,
     302,     0,   286,     0,     0,     0,     0,     0,     0,     0,
     286,   286,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,     0,     0,     0,   302,     0,     0,
       0,     0,     0,   302,     0,     0,     0,   217,     0,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   286,     0,     0,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   111,     0,
       0,   302,     0,     0,     0,     0,    59,    60,    61,   131,
     134,     0,     0,     0,     0,     0,   272,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   286,   273,     0,     0,
       0,   131,    66,    67,   274,   275,   276,   277,   278,   279,
     280,     0,     0,   281,     0,   282,   111,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   201,
     214,     0,     0,     0,     0,     0,   131,     0,     0,     0,
     225,   138,   139,     0,   140,   141,   142,   143,   144,   145,
       0,   146,   147,   148,   149,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   150,     0,
     214,   138,   139,   407,   140,   141,   142,   143,   144,   145,
       0,   146,   147,   148,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     0,
     214,   214,   371,   305,     0,     0,   111,    59,    60,    61,
       0,     0,     0,     0,   131,     0,     0,   289,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,   290,     0,
       0,     0,     0,    66,    67,   291,   292,   293,   294,   295,
     296,   297,     0,     0,   298,     0,    77,     0,   310,   311,
       0,   312,   313,   314,   315,   316,   317,     0,   318,   319,
     320,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   322,   111,   323,     0,     0,
       0,     0,     0,     0,   131,   134,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,     0,   214,     0,     0,
       0,   214,   138,   139,     0,   140,   141,   142,   143,   144,
     145,     0,   146,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,     0,   150,
       0,   324,     0,     0,     0,     0,   152,   153,     0,   154,
     155,   156,   157,   158,   159,   214,   160,   161,   162,   163,
     164,   169,   170,     0,   171,   172,   173,   174,   175,   176,
       0,   177,   178,   179,   180,   325,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,     0,
     330,   310,   311,     0,   312,   313,   314,   315,   316,   317,
       0,   318,   319,   320,   321,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322,     0,
     353,   152,   153,     0,   154,   155,   156,   157,   158,   159,
       0,   160,   161,   162,   163,   164,   310,   311,     0,   312,
     313,   314,   315,   316,   317,     0,   318,   319,   320,   321,
     355,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,   374,   310,   311,     0,   312,
     313,   314,   315,   316,   317,     0,   318,   319,   320,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,   394,   310,   311,     0,   312,
     313,   314,   315,   316,   317,     0,   318,   319,   320,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   322,     0,   395,   336,   337,     0,   338,
     339,   340,   341,   342,   343,     0,   344,   345,   346,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,   398,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,   146,   147,   148,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,   150,   152,   153,     0,   154,   155,   156,
     157,   158,   159,     0,   160,   161,   162,   163,   164,     0,
       0,     0,   169,   170,     0,   171,   172,   173,   174,   175,
     176,   224,   177,   178,   179,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   181,
     310,   311,     0,   312,   313,   314,   315,   316,   317,     0,
     318,   319,   320,   321,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   357,   322,   336,   337,
       0,   338,   339,   340,   341,   342,   343,     0,   344,   345,
     346,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   348,   138,   139,     0,   140,
     141,   142,   143,   144,   145,     0,   146,   147,   148,   149,
       0,     0,     0,     0,   169,   170,     0,   171,   172,   173,
     174,   175,   176,   150,   177,   178,   179,   180,     0,     0,
       0,     0,   336,   337,     0,   338,   339,   340,   341,   342,
     343,   181,   344,   345,   346,   347,     0,     0,     0,     0,
     310,   311,     0,   312,   313,   314,   315,   316,   317,   348,
     318,   319,   320,   321,     0,     0,     0,     0,   336,   337,
       0,   338,   339,   340,   341,   342,   343,   322,   344,   345,
     346,   347,     0,     0,     0,     0,   152,   153,     0,   154,
     155,   156,   157,   158,   159,   377,   160,   161,   162,   163,
     164,     0,     0,   152,   153,     0,   154,   155,   156,   157,
     158,   159,   222,   160,   161,   162,   163,   164,     0,     0,
     152,   153,     0,   154,   155,   156,   157,   158,   159,   306,
     160,   161,   162,   163,   164
};

static const yytype_int16 yycheck[] =
{
      65,    54,     0,     8,     9,    10,    11,    42,    13,    42,
      45,    76,    17,    18,    15,    16,    45,    45,     8,     9,
      10,    11,    42,    13,    29,    51,    50,    17,    18,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    29,
      45,    52,    47,    46,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    35,    45,    17,    47,     8,     9,
      10,    46,   127,    43,    45,    46,    47,    48,    49,    43,
      51,    52,    44,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    55,    34,    35,   127,
      46,    47,    42,    49,    17,    51,    52,    66,    45,    20,
      21,    48,    23,    24,    25,    26,    27,    28,    77,    30,
      31,    32,    33,    14,    34,    35,    34,    35,    42,   392,
     393,    90,    22,    51,    50,    45,    47,    45,    48,    98,
      48,    52,   197,   406,    34,    35,    34,    35,   203,    44,
      34,    35,    34,    34,   113,    45,   211,    45,    48,    34,
      48,    45,   121,   218,    48,    34,    34,   126,   127,    35,
     198,    35,    52,    34,   133,    34,    22,   220,   137,    45,
      46,    45,    48,   211,    48,     3,     4,     5,     6,     7,
       8,     9,    10,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    34,    34,   167,    35,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    34,    45,    45,    45,    52,     8,     9,
      10,    11,    48,    13,    48,   194,   195,   196,    18,   198,
      45,   200,    48,   271,   203,    48,    48,    48,    48,    29,
      48,    48,   211,   308,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   223,    45,    48,    47,    52,    46,
     298,    44,    46,    52,    46,    46,   304,    46,    12,     2,
     308,     7,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,    13,    21,   104,    20,    21,
      19,    23,    24,    25,    26,    27,    28,    48,    30,    31,
      32,    33,   271,    75,   273,   220,   371,   129,   165,   371,
      -1,    -1,   281,   282,   352,    47,    -1,    -1,    -1,    -1,
      52,   290,   194,   195,   196,    -1,    -1,    -1,    -1,   298,
      -1,    -1,    -1,    -1,   399,   304,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,   333,    -1,    -1,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
      55,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,   273,    77,     8,     9,    10,    -1,    -1,   377,   281,
     282,    -1,    -1,    18,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   113,    -1,
      45,    -1,    47,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,   333,   137,    -1,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,    -1,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,   194,
     195,   196,    18,   198,    -1,   200,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    29,    -1,    -1,   211,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,   223,    45,
      -1,    47,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,   271,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,   282,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,    55,    -1,    -1,   352,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,     8,     9,    10,
      -1,    -1,   377,    -1,    -1,    -1,    -1,    18,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   113,    -1,    45,    -1,    47,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,   167,   137,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,    -1,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,   194,   195,   196,    18,   198,    -1,   200,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    29,    -1,    -1,
     211,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,   223,    45,    -1,    47,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,
     271,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,   308,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,    -1,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,    65,    -1,
      -1,   352,    -1,    -1,    -1,    -1,     8,     9,    10,    76,
      77,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,   377,    29,    -1,    -1,
      -1,    98,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    -1,    47,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,
     137,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    47,    -1,
     167,    20,    21,    52,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
     197,   198,    51,   200,    -1,    -1,   203,     8,     9,    10,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    29,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    47,    -1,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,   273,    49,    -1,    -1,
      -1,    -1,    -1,    -1,   281,   282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,   308,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,   352,    30,    31,    32,    33,
      34,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    47,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    47,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    47,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    47,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    47,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    47,    30,    31,    32,    33,
      34,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    46,    30,    31,    32,    33,    34,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    46,
      30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    56,    57,    15,    16,    58,    42,
      59,    59,    45,    45,    42,    60,    61,    62,    60,    51,
      46,    52,    50,    46,    62,    17,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    64,    43,     3,     4,     5,
       6,     7,     8,     9,    10,    81,    57,    67,    43,    68,
      44,    67,    14,    69,    70,    17,    80,    42,    63,     8,
       9,    10,    11,    13,    18,    29,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    45,    47,    71,    79,
      82,    83,    87,    88,    90,    91,    92,    93,    94,    18,
      29,    36,    37,    38,    39,    40,    41,    42,    45,    85,
      90,    93,    94,    44,    51,    50,    72,    74,    76,    42,
      87,    88,    18,    29,    36,    37,    38,    39,    40,    41,
      42,    45,    90,    93,    94,    42,    45,    48,    95,    68,
      87,    88,    42,    45,    88,    90,    52,    22,    20,    21,
      23,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      47,    52,    20,    21,    23,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    34,    35,    85,    48,    85,    20,
      21,    23,    24,    25,    26,    27,    28,    30,    31,    32,
      33,    47,    52,    63,     3,     4,     5,     6,     7,     8,
       9,    10,    65,    66,    45,    45,    45,    48,    48,    42,
      48,    88,    18,    29,    36,    37,    38,    39,    40,    41,
      42,    45,    84,    87,    88,    90,    93,    94,    45,    96,
      70,    46,    46,    48,    47,    88,    94,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    42,    92,    85,    46,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      52,    48,    18,    29,    36,    37,    38,    39,    40,    41,
      42,    45,    47,    86,    90,    93,    94,    86,    86,    18,
      29,    36,    37,    38,    39,    40,    41,    42,    45,    84,
      90,    93,    94,    46,    48,    88,    46,    84,    48,    84,
      20,    21,    23,    24,    25,    26,    27,    28,    30,    31,
      32,    33,    47,    49,    49,    49,    87,    97,    80,    89,
      49,    84,    86,    48,    86,    86,    20,    21,    23,    24,
      25,    26,    27,    28,    30,    31,    32,    33,    47,    73,
      75,    77,    48,    49,    84,    49,    84,    46,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    51,    46,    44,    49,    86,    46,    47,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    46,    46,    46,    49,    49,    97,    52,    49,    17,
      71,    78,    78,    78,    46,    87,    12,    52,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    68,    69,    69,    70,    70,    72,
      73,    71,    74,    75,    71,    76,    77,    71,    71,    71,
      71,    78,    78,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    90,    90,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    95,    94,    96,    97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     0,     8,    11,     1,
       1,     0,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     5,     8,     2,     0,     0,
       0,     7,     0,     0,     9,     0,     0,     7,     2,     2,
       1,     1,     3,     5,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     1,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     4,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     4,     5,
       7,     3,     0,     1,     1,     1,     1,     2,     4,     5,
       3,     0,     3,     3,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 30 "yacc4.y" /* yacc.c:1646  */
    {/*checkMain();checkFuncProcName();printErrors();*/}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "yacc4.y" /* yacc.c:1646  */
    {pushEndSign("$$");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "yacc4.y" /* yacc.c:1646  */
    {((yyval) = mknode("CODE", (yyvsp[0]), NULL));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("procedure");
	endFunc();
	(yyval) = mknode("PROC", mknode((yyvsp[-6]), mknode("\n",  NULL, NULL), NULL), mknode("ARGS", (yyvsp[-4]), (yyvsp[-1])));
}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("function");
	endFunc();
	(yyval) = mknode("FUNC", mknode((yyvsp[-9]), mknode("\n", NULL, NULL), 
		mknode("ARGS", (yyvsp[-7]), mknode("RET", (yyvsp[-3]), NULL))), mknode("", (yyvsp[-1]), (yyvsp[0])));
}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "yacc4.y" /* yacc.c:1646  */
    {pushNewScope((yyvsp[0]));setFunctionName((yyvsp[0]));printFuncName();}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[0]), mknode("", (yyvsp[-2]), mknode(")", NULL, NULL)));}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode("", (yyvsp[0]), NULL));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addArgVar((yyvsp[-2]));}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addArgVar((yyvsp[0]));}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addVar((yyvsp[-2]));}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addVar((yyvsp[0]));}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setArgType("BOOLEAN");}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setArgType("CHAR");}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setArgType("INTEGER");}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setArgType("REAL");}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setArgType("STRING");}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setArgType("INT*");}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setArgType("CHAR*");}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 73 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setArgType("REAL*");}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setVarType("BOOLEAN");}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setVarType("REAL");}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setVarType("STRING");}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setVarType("INT*");}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setVarType("REAL*");}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);checkStrType("BOOLEAN");}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);checkStrType("CHAR");}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 86 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);checkStrType("INTEGER");}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 87 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);checkStrType("REAL");}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 88 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);checkStrType("STRING");}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 89 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);checkStrType("INT*");}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 90 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);checkStrType("CHAR*");}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);checkStrType("REAL*");}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("(BODY\n", mknode("", (yyvsp[-2]), NULL), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 101 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("VAR", (yyvsp[-1]), (yyvsp[-3]));			
}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR", (yyvsp[-6]), mknode("[", (yyvsp[-2]), mknode("]", NULL, NULL)));}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 108 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("if");}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "yacc4.y" /* yacc.c:1646  */
    {
		checkCondition();
		(yyval) = mknode("IF", mknode("(", (yyvsp[-4]), mknode(")", NULL, NULL)), (yyvsp[-2]));
	}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 113 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("if");}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 113 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 114 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("IF-ELSE", mknode("(", (yyvsp[-6]), mknode(")", NULL, NULL)), mknode("", (yyvsp[-4]), mknode("", (yyvsp[-2]), NULL)));
	}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 117 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("while");}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 117 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 118 "yacc4.y" /* yacc.c:1646  */
    {
		checkCondition();
		
	}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), NULL);clearFuncName();}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 124 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 126 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 126 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 129 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("{", (yyvsp[-2]), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
	}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 133 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 133 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 135 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);addReturnType("BOOLEAN");}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 136 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);addReturnType("CHAR");}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 137 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);addReturnType("INTEGER");}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 138 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);addReturnType("REAL");}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 139 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);addReturnType("STRING");}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 140 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);addReturnType("INT*");}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 141 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);addReturnType("CHAR*");}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 142 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);addReturnType("REAL*");}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 144 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));addVarAssign((yyvsp[-2])->token);printFunc();}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 145 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));checkLeftRight();printCode();}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 147 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 148 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addLeft((yyvsp[0]));setLeft((yyvsp[0]));}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 150 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 152 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 153 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 154 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 156 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 157 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 158 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 159 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 160 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 161 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 163 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 164 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 165 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 166 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 168 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 171 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 172 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 173 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 176 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 180 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("INTEGER");}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 181 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("REAL");}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 182 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("CHAR");}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 183 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("STRING");}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 184 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 185 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 186 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkStringType("IDENTIFIER");}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 187 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 189 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 191 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 192 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 193 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 195 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 196 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 197 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 198 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 199 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 200 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 202 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 203 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 204 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 205 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 207 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 210 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 211 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 212 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 215 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 219 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("INTEGER");}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 220 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("REAL");}
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 221 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("CHAR");}
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 222 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("STRING");}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 223 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 224 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");}
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 225 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn((yyvsp[0]));}
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 226 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 229 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 231 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("AND");}
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 232 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("OR");}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 233 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);logiaclOperator("NOT");}
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 235 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));operatorisHere("COMPARE");}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 236 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("NOTEQUAL");}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 237 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATER");}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 238 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESS");}
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 239 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATEREQUAL");}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 240 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESSEQUAL");}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 242 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 243 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 244 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 245 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 247 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 251 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 252 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 253 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 256 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 260 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"INTEGER");setRight((yyvsp[0]));}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 261 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkExpressionISBool((yyvsp[0]),"REAL");setRight((yyvsp[0]));}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 262 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"CHAR");setRight((yyvsp[0]));}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 263 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"STRING");setRight((yyvsp[0]));}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 264 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANTRUE");setRight((yyvsp[0]));}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 265 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANFALSE");setRight((yyvsp[0]));}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 266 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"IDENTIFIER");setRight((yyvsp[0]));}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 267 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 270 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 272 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 273 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 274 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 276 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 277 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 278 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 279 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 280 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 281 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 283 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 284 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 285 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 286 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 288 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 291 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 292 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 293 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 296 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 300 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "INTEGER");printParam((yyvsp[0]));}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 301 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); addFuncCallArgType((yyvsp[0]), "REAL");printParam((yyvsp[0]));}
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 302 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "CHAR");printParam((yyvsp[0]));}
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 303 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "STRING");printParam((yyvsp[0]));}
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 304 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANTRUE");printParam("1");}
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 305 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANFALSE");printParam("1");}
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 306 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), NULL);printParam((yyvsp[0]));}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 307 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 310 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 312 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 313 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 314 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);addOperator("!");}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 316 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 317 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 318 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 319 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 320 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 321 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 323 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));addOperator("+");setRight("+");}
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 324 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));addOperator("-");setRight("-");}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 325 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));addOperator("*");setRight("*");}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 326 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));addOperator("/");setRight("/");}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 327 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));addOperator("/");setRight("|");}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 328 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-2]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 331 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 332 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 333 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 336 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 340 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("INTEGER", NULL);setRight((yyvsp[0]));}
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 341 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("REAL", NULL);setRight((yyvsp[0]));}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 342 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("CHAR", NULL);setRight((yyvsp[0]));}
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 343 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("STRING", NULL);setRight((yyvsp[0]));}
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 344 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);setRight((yyvsp[0]));}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 345 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);setRight((yyvsp[0]));}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 346 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("IDENTIFIER", (yyvsp[0])); setRight((yyvsp[0]));}
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 347 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 350 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), NULL);}
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 350 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 352 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[0]), NULL, NULL), NULL);addOperator("&");addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 353 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-1]), NULL, NULL), NULL), mknode(")", NULL, NULL));}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 354 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 355 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-4]), NULL, NULL), mknode("[", (yyvsp[-2]), NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));}
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 356 "yacc4.y" /* yacc.c:1646  */
    {addOperator("^");}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 358 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("INT*", NULL);}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 359 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("REAL*", NULL);}
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 360 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("CHAR*", NULL);}
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 361 "yacc4.y" /* yacc.c:1646  */
    {addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 363 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode((yyvsp[0]), NULL, NULL), NULL);addOperator("^"); addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 364 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode("(", (yyvsp[-1]), NULL), mknode(")", NULL, NULL));addOperator("^");}
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 365 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-4]), mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 366 "yacc4.y" /* yacc.c:1646  */
    {addOperator("^");}
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 368 "yacc4.y" /* yacc.c:1646  */
    {setFunctionName((yyvsp[0]));}
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 368 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("FUNC_CALL", mknode((yyvsp[-2]), NULL, NULL), mknode("ARGS", (yyvsp[-1]), NULL));
checkFuncProcCall((yyvsp[-2]));}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 371 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 373 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode(",", (yyvsp[0]), NULL));}
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 374 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[0]), NULL);}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 374 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3310 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 376 "yacc4.y" /* yacc.c:1906  */

#include "lex.yy.c"
int main()
{
	return yyparse();
}
/* allocate a new node in the tree */
node* mknode(char *token, node *left, node *right)
{
	// printf("mknode1\n");
	node* newnode = (node*)malloc(sizeof(node));
	char* newtoken = (char*)malloc(sizeof(token) + 1);
	strcpy(newtoken, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newtoken;
	// printf("mknode2\n");
	return newnode;
}

/* printing the tree */
void printtree(node* tree)
{
	printf("TREE TOKEN: %s\n", tree->token);
	if(tree->left){
		printtree(tree->left);
	}
	if(tree->right){
		printtree(tree->right);
	}


	// int flag = 4;
	// printTabs(level);
	// if(strcmp(tree->token, "VAR") == 0){
	// 	printf("(DECLARE ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "IF") == 0){
	// 	printf("(IF\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "WHILE") == 0){
	// 	printf("(WHILE\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "FUNC") == 0 || strcmp(tree->token, "PROC") == 0 ||
	// 	strcmp(tree->token, "PROC") == 0 || strcmp(tree->token, "CODE") == 0 ||
	// 	strcmp(tree->token, "FUNC_CALL") == 0){
	// 	printf("%s\n", tree->token);
	// 	flag = 2;
	// } else if(strcmp(tree->token, "ARGS") == 0){
	// 	printf("(ARGS ");
	// 	if(tree->left){
	// 		flag = 2;
	// 		printf("\n");
	// 	} else {
	// 		printf("NONE)\n");
	// 	}
	// } else if(strcmp(tree->token, "IF-ELSE") == 0){
	// 	printf("(IF-ELSE\n");
	// 	level--;
	// 	flag = 1;
	// } else if(strcmp(tree->token, "RET") == 0){
	// 	printf("(RET ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "{") == 0){
	// 	printf("(BLOCK\n");
	// } else if(strcmp(tree->token, "}") == 0){
	// 	printf(")\n");
	// // else if(strcmp(tree->token, "") == 0){

	// // }	
	// } else if(strcmp(tree->token, "(") == 0){
	// 	printf("(");
	// } else if(strcmp(tree->token, "\n") == 0){
	// 	printf("\n");
	// } else if(strcmp(tree->token, ")") == 0){
	// 	printf(")\n");
	// } else if(strcmp(tree->token, ",") == 0){
	// 	printf(",");
	// } else if(strcmp(tree->token, "!=") == 0 || strcmp(tree->token, "=") == 0 ||
	// 	strcmp(tree->token, "==") == 0 || strcmp(tree->token, ">") == 0 ||
	// 	strcmp(tree->token, "<") == 0 || strcmp(tree->token, ">=") == 0 ||
	// 	strcmp(tree->token, "<=") == 0 || strcmp(tree->token, "!") == 0 ||
	// 	strcmp(tree->token, "&&") == 0 || strcmp(tree->token, "||") == 0 ||
	// 	strcmp(tree->token, "+") == 0 || strcmp(tree->token, "-") == 0 ||
	// 	strcmp(tree->token, "*") == 0 || strcmp(tree->token, "/") == 0 ||
	// 	strcmp(tree->token, "&") == 0 || strcmp(tree->token, "^") == 0 ||
	// 	strcmp(tree->token, "|") == 0){
	// 	printf("(%s", tree->token);
	// 	if(strcmp(tree->token, "=") == 0){
	// 		flag = 0;
	// 	} else {
	// 		flag = 1;
	// 	}
	// } else {
	// 	if(tree && (!tree->left && !tree->right) || strcmp(tree->token, "MAIN") == 0){
	// 		printf("%s ", tree->token);
	// 	} else {
	// 		level++;
	// 		printf("%s", tree->token);
	// 		level--;
	// 	}
	// }
	// if(tree->left){
	// 	level++;
	// 	printtree(tree->left);
	// 	level--;
	// }
	// if(tree->right){
	// 	level++;
	// 	printtree(tree->right);
	// 	level--;
	// }
	// if(flag == 2){
	// 	printf(")\n");
	// }
	// if(flag == 1){
	// 	printf(")");
	// }
	// if(flag == 0){
	// 	printf("\n)");
	// }
}

void printTabs(int n)
{ 
	for(int i = 0; i < n/3; i++){
		printf(" ");
	}
}

int yyerror(char *err)
{
	int yydebug = 1; 
	fflush(stdout);
	fprintf(stderr, "Error: %s\n" , err);
	fprintf(stderr, "missing a char before '%s' at line %d\n", yytext, yylineno);
	return 0;
}
