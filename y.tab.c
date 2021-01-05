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
    ENDLINE = 307,
    COMMENT = 308
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
#define COMMENT 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  406

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    33,    35,    37,    37,    39,    43,    50,
      52,    52,    54,    55,    58,    59,    61,    62,    64,    65,
      66,    67,    68,    69,    70,    71,    73,    74,    75,    76,
      77,    78,    79,    80,    82,    83,    84,    85,    86,    87,
      88,    89,    91,    91,    93,    98,    98,   100,   103,   105,
     105,   108,   113,   117,   122,   123,   124,   126,   126,   128,
     133,   133,   135,   136,   137,   138,   139,   140,   141,   142,
     144,   145,   147,   148,   149,   151,   153,   154,   155,   157,
     158,   159,   160,   161,   162,   164,   165,   166,   167,   168,
     172,   173,   174,   176,   181,   182,   183,   184,   185,   186,
     187,   188,   190,   192,   193,   194,   196,   197,   198,   199,
     200,   201,   203,   204,   205,   206,   207,   211,   212,   213,
     215,   220,   221,   222,   223,   224,   225,   226,   227,   230,
     232,   233,   234,   236,   237,   238,   239,   240,   241,   243,
     244,   245,   246,   247,   251,   252,   253,   255,   260,   261,
     262,   263,   264,   265,   266,   267,   270,   272,   273,   274,
     276,   277,   278,   279,   280,   281,   283,   284,   285,   286,
     287,   291,   292,   293,   295,   300,   301,   302,   303,   304,
     305,   306,   307,   310,   312,   313,   314,   316,   317,   318,
     319,   320,   321,   323,   324,   325,   326,   327,   331,   332,
     333,   335,   340,   341,   342,   343,   344,   345,   346,   347,
     350,   350,   352,   353,   354,   355,   357,   358,   359,   361,
     364,   366,   367,   367
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
  "CINDEX", "COLONS", "COMMA", "ENDLINE", "COMMENT", "$accept", "project",
  "pushEndSign", "program", "procedures", "procedure", "pushScope",
  "parameters", "para_list", "argVars", "vars", "argsTypes", "types",
  "str_types", "comment", "procedure_body", "declarations", "declare",
  "statements", "statment", "statment_block", "block", "return_statement",
  "ret_types", "assignment", "lhs", "str_expression", "ret_expression",
  "stmnt_expression", "expression", "expr", "address_expression",
  "address", "deference_statement", "function_call", "call_expression",
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -351

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-351)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,   -46,    27,  -351,  -351,  -351,  -351,  -351,    -2,   -14,
     -14,   -46,  -351,   -13,    -1,  -351,    23,    23,     7,    22,
      17,    20,    26,    23,   -46,   -46,    13,    30,  -351,    57,
      23,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
     -46,    77,    17,  -351,    31,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,    33,    -2,  -351,   -46,    63,    61,    70,
    -351,   622,  1474,    71,    65,    64,    73,   -46,  -351,  1488,
     -30,   -37,  -351,  -351,  -351,  -351,  -351,  -351,   -19,   -46,
    1488,  -351,  -351,    67,    98,    10,  -351,  -351,    99,   -46,
    -351,  1474,  -351,  -351,  -351,  -351,  -351,  -351,     1,  1474,
     578,  -351,  -351,   -46,  -351,    70,   101,  1502,    78,     3,
    1386,  -351,    76,    84,  -351,    79,  1488,  1488,  1516,  -351,
    -351,  1162,   -46,  1530,  1488,  1488,  1488,  1488,  1488,  1488,
    1488,  1488,  1488,  1488,  1488,  1488,  1488,   -46,  -351,  1404,
    1474,  1190,  1474,  1474,  1474,  1474,  1474,  1474,  1474,  1474,
    1474,  1474,  1474,  1474,  1474,   -46,  -351,  -351,    80,    81,
      83,    85,    86,    87,    88,    90,   -46,    92,  -351,  1502,
    -351,  -351,  -351,  -351,  -351,  -351,     5,  1502,  1218,  -351,
    -351,   -46,  1502,  1488,  1488,     6,  1488,  1246,   863,    95,
    -351,  1516,  -351,  -351,  -351,  -351,  -351,  -351,    11,  1516,
     344,   892,  -351,  -351,   -46,    63,  -351,  -351,  -351,  1530,
    -351,  -351,  -351,  -351,  -351,  -351,    15,  1530,  1422,  -351,
    -351,   -46,  1386,  1386,  1386,  1386,  1386,  1386,  1386,  1386,
    1386,  1386,  1386,  1386,  1386,  -351,   922,  -351,  1404,  1404,
    1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,
    1404,  -351,    91,  1544,  1440,  1502,  1274,  1502,  1502,  1502,
    1502,  1502,  1502,  1502,  1502,  1502,  1502,  1502,  1502,   133,
    1502,  -351,  1302,   952,  -351,  1488,   982,  -351,  1488,  -351,
    1458,  1516,  1330,  1544,  1544,  1544,  1544,  1544,  1544,  1544,
    1544,  1544,  1544,  1544,  1544,  1544,  -351,  -351,  -351,   529,
    1422,   -46,  1530,  1358,  1530,  1530,  1530,  1530,  1530,  1530,
    1530,  1530,  1530,  1530,  1530,  1530,  1530,    93,  -351,   -46,
    -351,  1544,  -351,  -351,  -351,  -351,  -351,  -351,    16,  1544,
    1012,  -351,  -351,   -46,  1042,  -351,  1440,  1440,  1440,  1440,
    1440,  1440,  1440,  1440,  1440,  1440,  1440,  1440,  1488,  -351,
     130,  1440,   133,  -351,  1072,  -351,  -351,  1102,  -351,  1458,
    1458,  1458,  1458,  1458,  1458,  1458,  1458,  1458,  1458,  1458,
    1458,  1458,   104,  -351,  1132,  -351,  1422,  1422,  1422,  1422,
    1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  -351,
    1544,    97,  -351,  -351,   753,   133,  -351,   106,  -351,   -46,
    -351,  -351,  -351,  -351,  -351,  -351
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      43,    43,     0,     3,    42,     1,     6,     2,     4,     0,
       0,    43,     9,     0,     0,     5,    11,    11,    15,     0,
      10,     0,     0,     0,    43,    43,     0,     0,    14,     0,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    12,
      43,     0,    13,     6,     0,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    46,     7,    43,    50,    61,     0,
      45,    44,     0,     0,    17,     0,     0,    43,   182,     0,
       0,     0,   175,   176,   178,   177,   179,   180,   181,    43,
       0,    49,    56,     0,     0,     0,   171,   211,   172,    43,
     128,     0,   121,   122,   124,   123,   125,   126,   127,     0,
       0,   117,   118,    43,     8,     0,     0,     0,     0,   181,
     159,   172,   212,     0,   210,   216,     0,   223,     0,   219,
      46,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,   173,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,   119,    16,    26,    27,
      28,    29,    30,    31,    32,    33,    43,     0,   155,     0,
     148,   149,   151,   150,   152,   153,   154,     0,     0,   144,
     145,    43,     0,     0,     0,     0,     0,     0,   222,     0,
     101,     0,    94,    95,    97,    96,    98,    99,   100,     0,
       0,     0,    90,    91,    43,    50,   156,    54,   209,     0,
     202,   203,   205,   204,   206,   207,   208,     0,    71,   198,
     199,    43,   157,   169,   160,   162,   164,   163,   165,   167,
     161,   158,   166,   168,   170,    55,     0,   102,   103,   115,
     106,   108,   110,   109,   111,   113,   107,   104,   112,   114,
     116,    60,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,   213,     0,     0,   217,   223,   220,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,   174,    92,    61,
     186,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,   120,    43,
     101,     0,    94,    95,    97,    96,    98,    99,   100,     0,
       0,    90,    91,    43,     0,   129,   130,   142,   133,   135,
     137,   136,   138,   140,   134,   131,   139,   141,     0,    57,
      51,   143,     0,   214,     0,   218,   221,     0,    75,    76,
      88,    79,    81,    83,    82,    84,    86,    80,    77,    85,
      87,    89,     0,   200,     0,   183,   184,   196,   187,   189,
     191,   190,   192,   194,   188,   185,   193,   195,   197,    47,
       0,     0,    92,   147,     0,     0,    53,     0,    93,    43,
     201,    48,    58,    52,   215,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -351,  -351,  -351,  -351,    89,  -351,   143,   137,   126,   135,
      54,  -351,  -351,  -351,     0,   105,    40,  -351,   -42,   -55,
    -350,  -351,  -135,  -351,  -351,  -351,    -5,   297,   587,   686,
     120,   204,  -351,   -52,   438,  -351,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,     8,    11,    13,    19,    20,    21,
      65,    39,   166,   167,    43,    44,    57,    60,    61,   349,
     350,    82,    63,    53,    83,    84,   280,   100,   178,    85,
     218,    86,    87,   111,    89,   119,   189
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,     4,   396,   -73,    70,   115,    81,     1,   116,    88,
     102,    15,   112,     9,    10,   113,    31,    32,    33,    34,
      35,    36,    37,    38,    29,    30,   117,     5,    12,   118,
     124,   125,    16,   126,   127,   128,   129,   130,   131,   102,
     132,   133,   134,   135,    17,   403,   117,   102,   117,   140,
     117,   183,   274,   255,   275,   180,   117,   136,    23,   281,
     117,   117,   137,   302,   390,    18,   203,   108,    24,    25,
      26,   220,    27,    40,    41,    55,    56,    59,    62,   120,
      45,    46,    47,    48,    49,    50,    51,    52,   102,   138,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   156,   158,   159,   160,   161,   162,   163,
     164,   165,    64,   200,   106,   104,   105,   180,   107,   122,
     123,   -74,   207,   182,   184,   180,   185,   186,   -34,   -35,
     180,   -36,    54,   -37,   -38,   -39,   -40,   235,   -41,   203,
     253,   279,   395,   319,    66,   -70,    67,   203,   399,   401,
     348,    68,   404,    14,    22,   251,    42,   220,    28,   157,
     205,    58,    69,   299,   372,   220,   252,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   356,    80,     0,
       0,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
       0,   332,     0,   180,   298,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,    88,   180,     0,
       0,   317,     0,     0,     0,     0,     0,     0,     0,   203,
       0,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,    81,     0,     0,    88,   330,     0,
     220,     0,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,     0,   101,     0,     0,   332,
       0,     0,     0,     0,   114,     0,   357,   332,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,     0,     0,     0,     0,   101,     0,     0,     0,     0,
      88,   373,     0,   101,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,   389,
       0,     0,   202,     0,   282,     0,     0,   219,     0,   300,
       0,     0,     0,   392,     0,     0,     0,   303,   332,     0,
       0,     0,     0,    88,   101,     0,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,     0,
       0,     0,     0,     0,   283,   284,     0,   285,   286,   287,
     288,   289,   290,   179,   291,   292,   293,   294,     0,     0,
       0,   179,     0,     0,     0,   357,   179,     0,   139,     0,
       0,   295,     0,   296,     0,   202,   141,     0,     0,   405,
       0,     0,     0,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,     0,
       0,   219,   374,     0,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   236,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,     0,     0,     0,     0,     0,   331,     0,   179,
       0,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,     0,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     103,     0,     0,     0,     0,     0,   219,     0,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,     0,     0,     0,     0,   331,     0,     0,     0,   103,
       0,     0,     0,   331,     0,     0,     0,   103,     0,     0,
      66,     0,    67,     0,     0,   181,    62,    68,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,    69,     0,
       0,   221,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,     0,     0,     0,   103,     0,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,     0,   331,     0,     0,     0,   142,   143,
       0,   144,   145,   146,   147,   148,   149,   181,   150,   151,
     152,   153,     0,     0,     0,   181,     0,     0,     0,     0,
     181,     0,     0,     0,     0,   154,     0,     0,     0,   204,
     155,     0,     0,    66,     0,    67,     0,   204,     0,     0,
      68,     0,     0,     0,     0,     0,     0,   301,     0,     0,
       0,    69,     0,     0,     0,   301,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,     0,   181,     0,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,     0,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
       0,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,     0,     0,     0,     0,     0,     0,
     301,     0,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   110,   254,     0,     0,   333,
       0,     0,     0,     0,   256,     0,   121,   333,     0,   272,
       0,     0,     0,   124,   125,     0,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   187,   188,   201,   402,     0,     0,     0,     0,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     0,     0,     0,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     273,     0,   276,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,   124,   125,   121,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,   124,   125,   278,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   297,   142,   143,     0,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   153,     0,     0,     0,     0,
       0,   354,     0,     0,   188,     0,     0,   201,     0,   154,
       0,   318,   124,   125,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   353,   124,   125,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   355,   283,   284,   394,   285,   286,   287,   288,   289,
     290,     0,   291,   292,   293,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,   391,   257,   258,     0,   259,   260,   261,   262,   263,
     264,     0,   265,   266,   267,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,   393,   124,   125,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
       0,   397,   283,   284,     0,   285,   286,   287,   288,   289,
     290,     0,   291,   292,   293,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,   398,   304,   305,     0,   306,   307,   308,   309,   310,
     311,     0,   312,   313,   314,   315,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,   400,   124,   125,     0,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,   136,
     142,   143,     0,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   154,   257,   258,
       0,   259,   260,   261,   262,   263,   264,     0,   265,   266,
     267,   268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   269,   270,   124,   125,     0,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   136,   257,   258,     0,   259,   260,   261,
     262,   263,   264,     0,   265,   266,   267,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,   270,   257,   258,     0,   259,   260,   261,   262,   263,
     264,     0,   265,   266,   267,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   270,
     283,   284,     0,   285,   286,   287,   288,   289,   290,     0,
     291,   292,   293,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,   295,   304,   305,
       0,   306,   307,   308,   309,   310,   311,     0,   312,   313,
     314,   315,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   375,   316,   124,   125,     0,   126,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
       0,     0,     0,     0,   142,   143,     0,   144,   145,   146,
     147,   148,   149,   136,   150,   151,   152,   153,     0,     0,
       0,     0,   304,   305,     0,   306,   307,   308,   309,   310,
     311,   154,   312,   313,   314,   315,     0,     0,     0,     0,
     257,   258,     0,   259,   260,   261,   262,   263,   264,   316,
     265,   266,   267,   268,     0,     0,     0,     0,   283,   284,
       0,   285,   286,   287,   288,   289,   290,   270,   291,   292,
     293,   294,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,   295,    68,     0,    70,    71,
      92,    93,    94,    95,    96,    97,    98,    69,     0,    99,
     168,     0,    70,    71,    72,    73,    74,    75,    76,    77,
     109,   169,     0,    80,   190,     0,    70,    71,   170,   171,
     172,   173,   174,   175,   176,   191,     0,   177,   208,     0,
      70,    71,   192,   193,   194,   195,   196,   197,   198,   209,
       0,   199,   320,     0,    70,    71,   210,   211,   212,   213,
     214,   215,   216,   321,     0,   217,     0,     0,    70,    71,
     322,   323,   324,   325,   326,   327,   328,     0,     0,   329
};

static const yytype_int16 yycheck[] =
{
       0,     1,   352,    22,    34,    42,    61,    53,    45,    61,
      62,    11,    42,    15,    16,    45,     3,     4,     5,     6,
       7,     8,     9,    10,    24,    25,    45,     0,    42,    48,
      20,    21,    45,    23,    24,    25,    26,    27,    28,    91,
      30,    31,    32,    33,    45,   395,    45,    99,    45,    48,
      45,    48,    46,    48,    48,   107,    45,    47,    51,    48,
      45,    45,    52,    48,    48,    42,   118,    67,    46,    52,
      50,   123,    46,    43,    17,    44,    43,    14,    17,    79,
       3,     4,     5,     6,     7,     8,     9,    10,   140,    89,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   103,     3,     4,     5,     6,     7,     8,
       9,    10,    42,   118,    50,    44,    51,   169,    45,    52,
      22,    22,   122,    45,    48,   177,    42,    48,    48,    48,
     182,    48,    43,    48,    48,    48,    48,   137,    48,   191,
      48,    46,    12,    52,    11,    52,    13,   199,    44,    52,
      17,    18,    46,    10,    17,   155,    30,   209,    23,   105,
     120,    56,    29,   205,   299,   217,   166,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   278,    45,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,   204,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   299,    -1,    -1,   299,   253,    -1,
     302,    -1,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    -1,    62,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    70,    -1,   281,   329,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
     352,   301,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,   118,    -1,   329,    -1,    -1,   123,    -1,   209,
      -1,    -1,    -1,   333,    -1,    -1,    -1,   217,   390,    -1,
      -1,    -1,    -1,   395,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,   169,    30,    31,    32,    33,    -1,    -1,
      -1,   177,    -1,    -1,    -1,   390,   182,    -1,    91,    -1,
      -1,    47,    -1,    49,    -1,   191,    99,    -1,    -1,   399,
      -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   302,    -1,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,
      -1,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,    -1,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
      62,    -1,    -1,    -1,    -1,    -1,   302,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    91,
      -1,    -1,    -1,   329,    -1,    -1,    -1,    99,    -1,    -1,
      11,    -1,    13,    -1,    -1,   107,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    29,    -1,
      -1,   123,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    -1,    -1,    -1,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   390,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,   169,    30,    31,
      32,    33,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,   191,
      52,    -1,    -1,    11,    -1,    13,    -1,   199,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    29,    -1,    -1,    -1,   217,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,   270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    69,   169,    -1,    -1,   321,
      -1,    -1,    -1,    -1,   177,    -1,    80,   329,    -1,   182,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,   116,   117,   118,    52,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,   390,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
     184,    -1,   186,    -1,    -1,    -1,    -1,   191,    -1,    -1,
      -1,    -1,    -1,    20,    21,   199,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    20,    21,    51,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,   275,    -1,    -1,   278,    -1,    -1,   281,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,   348,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
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
      32,    33,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    47,    18,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    29,    -1,    45,
      18,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    29,    -1,    45,    18,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    29,    -1,    45,    18,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    29,
      -1,    45,    18,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    29,    -1,    45,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    55,    68,    68,     0,    56,    57,    58,    15,
      16,    59,    42,    60,    60,    68,    45,    45,    42,    61,
      62,    63,    61,    51,    46,    52,    50,    46,    63,    68,
      68,     3,     4,     5,     6,     7,     8,     9,    10,    65,
      43,    17,    62,    68,    69,     3,     4,     5,     6,     7,
       8,     9,    10,    77,    58,    44,    43,    70,    69,    14,
      71,    72,    17,    76,    42,    64,    11,    13,    18,    29,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      45,    73,    75,    78,    79,    83,    85,    86,    87,    88,
      18,    29,    36,    37,    38,    39,    40,    41,    42,    45,
      81,    85,    87,    88,    44,    51,    50,    45,    68,    42,
      83,    87,    42,    45,    85,    42,    45,    45,    48,    89,
      68,    83,    52,    22,    20,    21,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    47,    52,    68,    81,
      48,    81,    20,    21,    23,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    47,    52,    68,    64,     3,     4,
       5,     6,     7,     8,     9,    10,    66,    67,    18,    29,
      36,    37,    38,    39,    40,    41,    42,    45,    82,    85,
      87,    88,    45,    48,    48,    42,    48,    83,    83,    90,
      18,    29,    36,    37,    38,    39,    40,    41,    42,    45,
      80,    83,    85,    87,    88,    70,    46,    68,    18,    29,
      36,    37,    38,    39,    40,    41,    42,    45,    84,    85,
      87,    88,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    68,    81,    46,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    68,    68,    48,    82,    48,    82,    20,    21,    23,
      24,    25,    26,    27,    28,    30,    31,    32,    33,    46,
      47,    68,    82,    83,    46,    48,    83,    46,    51,    46,
      80,    48,    80,    20,    21,    23,    24,    25,    26,    27,
      28,    30,    31,    32,    33,    47,    49,    49,    68,    72,
      84,    88,    48,    84,    20,    21,    23,    24,    25,    26,
      27,    28,    30,    31,    32,    33,    47,    68,    49,    52,
      18,    29,    36,    37,    38,    39,    40,    41,    42,    45,
      80,    85,    87,    88,    82,    46,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    17,    73,
      74,    82,    46,    49,    83,    49,    90,    80,    46,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    76,    68,    84,    46,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    68,
      48,    49,    68,    49,    83,    12,    74,    49,    49,    44,
      49,    52,    52,    74,    46,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    88,
      89,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     3,     0,     8,    12,     1,
       1,     0,     3,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     2,     0,     7,     8,     2,
       0,     5,     7,     6,     3,     3,     1,     1,     3,     7,
       4,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     1,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     4,     5,     7,     2,     4,     5,     2,
       3,     3,     1,     0
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
#line 31 "yacc4.y" /* yacc.c:1646  */
    {checkMain();checkFuncProcName();printErrors();}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "yacc4.y" /* yacc.c:1646  */
    {pushEndSign("$$");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "yacc4.y" /* yacc.c:1646  */
    {((yyval) = mknode("CODE", (yyvsp[0]), NULL));}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), (yyvsp[-1]));}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 40 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("procedure");
	(yyval) = mknode("PROC", mknode((yyvsp[-6]), mknode("\n",  NULL, NULL), NULL), mknode("ARGS", (yyvsp[-4]), (yyvsp[-1])));
}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("function");
	(yyval) = mknode("FUNC", mknode((yyvsp[-10]), mknode("\n", NULL, NULL), 
		mknode("ARGS", (yyvsp[-8]), mknode("RET", (yyvsp[-4]), NULL))), mknode("", (yyvsp[-2]), (yyvsp[-1])));
}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "yacc4.y" /* yacc.c:1646  */
    {pushNewScope((yyvsp[0]));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 54 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[0]), mknode("", (yyvsp[-2]), mknode(")", NULL, NULL)));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 55 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-3]), mknode("", (yyvsp[0]), NULL));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addArgVar((yyvsp[-2]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addArgVar((yyvsp[0]));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addVar((yyvsp[-2]));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 62 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addVar((yyvsp[0]));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setArgType("BOOLEAN");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setArgType("CHAR");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setArgType("INTEGER");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setArgType("REAL");}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setArgType("STRING");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 69 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setArgType("INT*");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 70 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setArgType("CHAR*");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 71 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setArgType("REAL*");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 73 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setVarType("BOOLEAN");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 74 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 75 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 76 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setVarType("REAL");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 77 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setVarType("STRING");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 78 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setVarType("INT*");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 79 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 80 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setVarType("REAL*");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 82 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);checkStrType("BOOLEAN");}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 83 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);checkStrType("CHAR");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);checkStrType("INTEGER");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 85 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);checkStrType("REAL");}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 86 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);checkStrType("STRING");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);checkStrType("INT*");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);checkStrType("CHAR*");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 89 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);checkStrType("REAL*");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 94 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("(BODY\n	", mknode("", (yyvsp[-2]), NULL), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 101 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("VAR", (yyvsp[-3]), (yyvsp[-5]));			
}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR", (yyvsp[-6]), mknode("[", (yyvsp[-2]), mknode("]", NULL, NULL)));}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "yacc4.y" /* yacc.c:1646  */
    {
		checkCondition();
		(yyval) = mknode("IF", mknode("(", (yyvsp[-2]), mknode(")", NULL, NULL)), (yyvsp[0]));
	}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 114 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("IF-ELSE", mknode("(", (yyvsp[-4]), mknode(")", NULL, NULL)), mknode("", (yyvsp[-2]), mknode("", (yyvsp[0]), NULL)));
	}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 118 "yacc4.y" /* yacc.c:1646  */
    {
		checkCondition();
		(yyval) = mknode("WHILE", mknode("(", (yyvsp[-2]), mknode(")", NULL, NULL)), (yyvsp[0]));
	}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 122 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), NULL);clearFuncName();}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 123 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 124 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 126 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 126 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 129 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("{", (yyvsp[-4]), mknode("", (yyvsp[-3]), mknode("", (yyvsp[-2]), mknode("}", NULL, NULL))));
	}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 133 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-2]), NULL);}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 133 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 135 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);addReturnType("BOOLEAN");}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 136 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);addReturnType("CHAR");}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 137 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);addReturnType("INTEGER");}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);addReturnType("REAL");}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);addReturnType("STRING");}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 140 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);addReturnType("INT*");}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);addReturnType("CHAR*");}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 142 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);addReturnType("REAL*");}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 144 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-3]), (yyvsp[-1]));addVarAssign((yyvsp[-3])->token);}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 145 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));checkLeftRight();}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 147 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 148 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addLeft((yyvsp[0]));}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 149 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 151 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 153 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 154 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 155 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 157 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 158 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 159 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 160 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 161 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 162 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 164 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 165 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 166 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 167 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 169 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 172 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 173 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 174 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 177 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 181 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("INTEGER");}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 182 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("REAL");}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 183 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("CHAR");}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 184 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("STRING");}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 185 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 186 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 187 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkStringType("IDENTIFIER");}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 188 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 190 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 192 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 193 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 194 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 196 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 197 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 198 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 199 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 200 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 201 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 203 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 204 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 205 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 206 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 208 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 211 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 212 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 213 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 216 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 220 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("INTEGER");}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 221 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("REAL");}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 222 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("CHAR");}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 223 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("STRING");}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 224 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 225 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 226 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn((yyvsp[0]));}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 227 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 230 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 232 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("AND");}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 233 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("OR");}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 234 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);logiaclOperator("NOT");}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 236 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));operatorisHere("COMPARE");}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 237 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("NOTEQUAL");}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 238 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATER");}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 239 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESS");}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 240 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATEREQUAL");}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 241 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESSEQUAL");}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 243 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 244 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 245 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 246 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 248 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 251 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 252 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 253 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 256 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 260 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"INTEGER");}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 261 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkExpressionISBool((yyvsp[0]),"REAL");}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 262 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"CHAR");}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 263 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"STRING");}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 264 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANTRUE");}
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 265 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANFALSE");}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 266 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"IDENTIFIER");}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 267 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 270 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 272 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 273 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 274 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 276 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 277 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 278 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 279 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 280 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 281 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 283 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 284 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 285 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 286 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 288 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 291 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 292 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 293 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 296 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 300 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "INTEGER");}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 301 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); addFuncCallArgType((yyvsp[0]), "REAL");}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 302 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "CHAR");}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 303 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "STRING");}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 304 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANTRUE");}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 305 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANFALSE");}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 306 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), NULL);}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 307 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 310 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 312 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 313 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 314 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 316 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 317 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 318 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 319 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 320 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 321 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 323 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 324 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 325 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 326 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 328 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 3035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 331 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 332 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 333 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 336 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 340 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("INTEGER", NULL);}
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 341 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("REAL", NULL);}
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 342 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("CHAR", NULL);}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 343 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("STRING", NULL);}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 344 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 345 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);}
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 346 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 347 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 350 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), NULL);}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 350 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 352 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[0]), NULL, NULL), NULL);}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 353 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-1]), NULL, NULL), NULL), mknode(")", NULL, NULL));}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 354 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 355 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-4]), NULL, NULL), mknode("[", (yyvsp[-2]), NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));}
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 357 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode((yyvsp[0]), NULL, NULL), NULL);}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 358 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode("(", (yyvsp[-1]), NULL), mknode(")", NULL, NULL));}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 359 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-4]), mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 361 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("FUNC_CALL", mknode((yyvsp[-1]), NULL, NULL), mknode("ARGS", (yyvsp[0]), NULL));
checkFuncProcCall((yyvsp[-1]));}
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 364 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 3176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 366 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode(",", (yyvsp[0]), NULL));}
#line 3182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 367 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[0]), NULL);}
#line 3188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 367 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 3194 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3198 "y.tab.c" /* yacc.c:1646  */
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
#line 369 "yacc4.y" /* yacc.c:1906  */

#include "lex.yy.c"
int main()
{
	return yyparse();
}
/* allocate a new node in the tree */
node* mknode(char *token, node *left, node *right)
{
	node* newnode = (node*)malloc(sizeof(node));
	char* newtoken = (char*)malloc(sizeof(token) + 1);
	strcpy(newtoken, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newtoken;
	return newnode;
}

/* printing the tree */
void printtree(node* tree)
{
	int flag = 4;
	printTabs(level);
	if(strcmp(tree->token, "VAR") == 0){
		printf("(DECLARE ");
		flag = 2;
	} else if(strcmp(tree->token, "IF") == 0){
		printf("(IF\n");
		flag = 1;
	} else if(strcmp(tree->token, "WHILE") == 0){
		printf("(WHILE\n");
		flag = 1;
	} else if(strcmp(tree->token, "FUNC") == 0 || strcmp(tree->token, "PROC") == 0 ||
		strcmp(tree->token, "PROC") == 0 || strcmp(tree->token, "CODE") == 0 ||
		strcmp(tree->token, "FUNC_CALL") == 0){
		printf("%s\n", tree->token);
		flag = 2;
	} else if(strcmp(tree->token, "ARGS") == 0){
		printf("(ARGS ");
		if(tree->left){
			flag = 2;
			printf("\n");
		} else {
			printf("NONE)\n");
		}
	} else if(strcmp(tree->token, "IF-ELSE") == 0){
		printf("(IF-ELSE\n");
		level--;
		flag = 1;
	} else if(strcmp(tree->token, "RET") == 0){
		printf("(RET ");
		flag = 2;
	} else if(strcmp(tree->token, "{") == 0){
		printf("(BLOCK\n");
	} else if(strcmp(tree->token, "}") == 0){
		printf(")\n");
	// else if(strcmp(tree->token, "") == 0){

	// }	
	} else if(strcmp(tree->token, "(") == 0){
		printf("(");
	} else if(strcmp(tree->token, "\n") == 0){
		printf("\n");
	} else if(strcmp(tree->token, ")") == 0){
		printf(")\n");
	} else if(strcmp(tree->token, ",") == 0){
		printf(",");
	} else if(strcmp(tree->token, "!=") == 0 || strcmp(tree->token, "=") == 0 ||
		strcmp(tree->token, "==") == 0 || strcmp(tree->token, ">") == 0 ||
		strcmp(tree->token, "<") == 0 || strcmp(tree->token, ">=") == 0 ||
		strcmp(tree->token, "<=") == 0 || strcmp(tree->token, "!") == 0 ||
		strcmp(tree->token, "&&") == 0 || strcmp(tree->token, "||") == 0 ||
		strcmp(tree->token, "+") == 0 || strcmp(tree->token, "-") == 0 ||
		strcmp(tree->token, "*") == 0 || strcmp(tree->token, "/") == 0 ||
		strcmp(tree->token, "&") == 0 || strcmp(tree->token, "^") == 0 ||
		strcmp(tree->token, "|") == 0){
		printf("(%s", tree->token);
		if(strcmp(tree->token, "=") == 0){
			flag = 0;
		} else {
			flag = 1;
		}
	} else {
		if(tree && (!tree->left && !tree->right) || strcmp(tree->token, "MAIN") == 0){
			printf("%s ", tree->token);
		} else {
			level++;
			printf("%s", tree->token);
			level--;
		}
	}
	if(tree->left){
		level++;
		printtree(tree->left);
		level--;
	}
	if(tree->right){
		level++;
		printtree(tree->right);
		level--;
	}
	if(flag == 2){
		printf(")\n");
	}
	if(flag == 1){
		printf(")");
	}
	if(flag == 0){
		printf("\n)");
	}
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
