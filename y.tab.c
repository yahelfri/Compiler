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
#line 1 "yacc3.y" /* yacc.c:339  */

	//#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "part2.h";

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

#line 88 "y.tab.c" /* yacc.c:339  */

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

#line 242 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   619

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

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
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    34,    36,    40,    42,    42,    44,    48,
      55,    55,    57,    58,    60,    61,    63,    64,    66,    67,
      68,    69,    70,    71,    72,    73,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    93,    95,   100,   100,   102,   105,   107,
     107,   110,   114,   118,   122,   123,   124,   126,   126,   128,
     133,   133,   135,   137,   138,   139,   142,   144,   145,   146,
     148,   149,   150,   151,   152,   153,   155,   156,   157,   158,
     159,   163,   164,   165,   167,   172,   173,   174,   175,   176,
     177,   178,   179,   181,   181,   183,   184,   185,   186,   188,
     189,   190,   192,   194,   196,   197,   197
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
  "program", "main", "procedures", "procedure", "parameters", "para_list",
  "argsVars", "vars", "retTypes", "argsTypes", "types", "comment",
  "procedure_body", "declarations", "declare", "statements", "statment",
  "statment_block", "block", "return_statement", "assignment", "lhs",
  "expression", "address_expression", "address", "deference_statement",
  "function_call", "call_expression", "call_expression_args", YY_NULLPTR
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

#define YYPACT_NINF -182

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-182)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,   -37,    22,     7,  -182,  -182,    15,  -182,  -182,   -19,
      -6,    11,   -13,    27,   -37,    29,    25,    28,  -182,   -37,
      32,    32,  -182,    31,    55,    30,    56,    33,    34,    -6,
    -182,    32,   -37,   -37,    45,    64,    96,  -182,    94,    32,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   -37,
      73,  -182,   171,    57,    56,    75,    66,    70,    76,   -37,
    -182,   156,   -17,   -34,  -182,  -182,  -182,  -182,  -182,  -182,
     -18,   -37,   156,  -182,  -182,    71,   100,   197,  -182,  -182,
     103,   -37,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
      83,  -182,    73,    95,   156,    82,   -24,   572,  -182,    80,
      89,  -182,    84,   156,   156,   156,  -182,  -182,   460,   -37,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   -37,  -182,   -37,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,   -41,   488,   156,   156,
     156,    10,   156,   516,   251,    87,   280,    96,  -182,  -182,
     572,   572,   572,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   572,  -182,   117,   156,    86,     2,   544,
     310,   340,  -182,   156,   370,  -182,   156,  -182,   113,   128,
     156,    98,   400,   -37,   156,  -182,   131,     2,  -182,  -182,
     430,  -182,  -182,   104,   215,  -182,    92,  -182,   233,     2,
    -182,   105,   -37,   -37,  -182,  -182,  -182,  -182,  -182,  -182
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      43,    43,     0,     5,    42,     1,     0,     2,     7,     0,
       3,     0,     0,     0,    43,     0,     0,     0,     6,    43,
      11,    11,     7,     0,    15,     0,    10,     0,     0,    46,
       4,     0,    43,    43,     0,     0,    50,    14,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    12,    43,
       0,    45,    44,     0,    13,     0,    17,     0,     0,    43,
      92,     0,     0,     0,    85,    86,    88,    87,    89,    90,
      91,    43,     0,    49,    56,     0,     0,     0,    81,    94,
      82,    43,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     8,     0,     0,     0,     0,    91,    69,    82,    95,
       0,    93,    99,     0,   106,     0,   102,    46,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    83,    43,    16,    34,    35,
      36,    37,    38,    39,    40,    41,    43,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,    50,    66,    54,
      62,    67,    79,    70,    72,    74,    73,    75,    77,    71,
      68,    76,    78,    80,    55,    61,     0,     0,     0,     0,
       0,     0,    96,     0,     0,   100,   106,   103,    84,    61,
       0,     0,     0,    43,     0,    57,    51,     0,    84,    97,
       0,   101,   104,     0,     0,     9,     0,    47,     0,     0,
      53,     0,    43,    43,    48,    58,    52,    98,    59,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,   130,  -182,   132,   116,   125,    67,
    -182,  -182,  -182,     0,   -44,    53,  -182,    14,   -49,  -181,
    -182,    -7,  -182,  -182,   -26,   114,  -182,   -50,  -182,  -182,
      -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    10,    14,    25,    26,    27,    57,
      90,    48,   136,    22,    23,    36,    51,    52,   185,   186,
      74,   181,    75,    76,    77,    78,    79,    98,    81,   106,
     145
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       3,     4,    80,    73,   -64,    55,   200,   166,   102,    12,
      13,   103,     1,    58,    18,    59,     1,    62,   206,   184,
      60,   104,     5,     6,   139,    99,    11,   104,   100,    16,
     105,    61,    38,    39,     9,    97,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   108,    72,    40,    41,
      42,    43,    44,    45,    46,    47,   172,    15,   173,    95,
      82,    83,    84,    85,    86,    87,    88,    89,   137,    17,
      20,   107,    19,    21,    24,    30,    32,   143,   144,   146,
      35,   125,   165,    34,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   128,   129,
     130,   131,   132,   133,   134,   135,    31,    49,    33,   149,
      50,    53,   169,   170,   171,    56,   174,    92,    80,    91,
      93,    94,   110,   109,   164,   -65,   126,   138,   140,    80,
      73,   141,   142,   177,   180,   -63,   167,    80,   183,    58,
     182,    59,   195,   199,   204,   180,    60,   190,   202,    80,
     144,   207,    29,    28,   194,    54,    37,    61,   198,   127,
     147,   179,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   193,    72,    60,   192,   101,     0,     0,     0,
       0,     0,    58,   197,    59,    61,     0,     0,     0,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    96,     0,
      61,    72,   208,   209,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    72,   111,   112,     0,
     113,   114,   115,   116,   117,   118,     0,   119,   120,   121,
     122,     0,     0,     0,     0,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   123,   119,   120,   121,   122,   124,
       0,     0,     0,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   123,   119,   120,   121,   122,   203,     0,     0,
       0,   111,   112,     0,   113,   114,   115,   116,   117,   118,
     123,   119,   120,   121,   122,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
     111,   112,   176,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   178,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   188,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   189,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   191,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   196,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   201,
     111,   112,     0,   113,   114,   115,   116,   117,   118,     0,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   123,   111,   112,
       0,   113,   114,   115,   116,   117,   118,     0,   119,   120,
     121,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,   123,   111,   112,     0,   113,
     114,   115,   116,   117,   118,     0,   119,   120,   121,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,   123,   111,   112,     0,   113,   114,   115,
     116,   117,   118,     0,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     187,   123,   111,   112,     0,   113,   114,   115,   116,   117,
     118,     0,   119,   120,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123
};

static const yytype_int16 yycheck[] =
{
       0,     1,    52,    52,    22,    49,   187,    48,    42,    15,
      16,    45,    53,    11,    14,    13,    53,    34,   199,    17,
      18,    45,     0,    16,    48,    42,    45,    45,    45,    42,
      48,    29,    32,    33,    19,    61,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    72,    45,     3,     4,
       5,     6,     7,     8,     9,    10,    46,    46,    48,    59,
       3,     4,     5,     6,     7,     8,     9,    10,    94,    42,
      45,    71,    43,    45,    42,    44,    46,   103,   104,   105,
      46,    81,   126,    50,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     3,     4,
       5,     6,     7,     8,     9,    10,    51,    43,    52,   109,
      14,    17,   138,   139,   140,    42,   142,    51,   168,    44,
      50,    45,    22,    52,   124,    22,    43,    45,    48,   179,
     179,    42,    48,    46,    17,    22,   136,   187,    52,    11,
     166,    13,    44,    12,    52,    17,    18,   173,    44,   199,
     176,    46,    22,    21,   180,    39,    31,    29,   184,    92,
     107,   147,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   179,    45,    18,   176,    62,    -1,    -1,    -1,
      -1,    -1,    11,   183,    13,    29,    -1,    -1,    -1,    18,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      29,    45,   202,   203,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    47,    30,    31,    32,    33,    52,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    47,    30,    31,    32,    33,    52,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      47,    30,    31,    32,    33,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      20,    21,    51,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    55,    67,    67,     0,    16,    56,    57,    19,
      58,    45,    15,    16,    59,    46,    42,    42,    67,    43,
      45,    45,    67,    68,    42,    60,    61,    62,    60,    58,
      44,    51,    46,    52,    50,    46,    69,    62,    67,    67,
       3,     4,     5,     6,     7,     8,     9,    10,    65,    43,
      14,    70,    71,    17,    61,    68,    42,    63,    11,    13,
      18,    29,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    45,    72,    74,    76,    77,    78,    79,    80,
      81,    82,     3,     4,     5,     6,     7,     8,     9,    10,
      64,    44,    51,    50,    45,    67,    42,    78,    81,    42,
      45,    79,    42,    45,    45,    48,    83,    67,    78,    52,
      22,    20,    21,    23,    24,    25,    26,    27,    28,    30,
      31,    32,    33,    47,    52,    67,    43,    63,     3,     4,
       5,     6,     7,     8,     9,    10,    66,    78,    45,    48,
      48,    42,    48,    78,    78,    84,    78,    69,    46,    67,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    67,    68,    48,    67,    46,    78,
      78,    78,    46,    48,    78,    46,    51,    46,    49,    71,
      17,    75,    78,    52,    17,    72,    73,    46,    49,    49,
      78,    49,    84,    75,    78,    44,    49,    67,    78,    12,
      73,    49,    44,    52,    52,    52,    73,    46,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    73,    73,    74,
      75,    75,    76,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    82,    83,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     7,     0,     3,     0,     8,    12,
       1,     0,     3,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     2,     0,     7,     8,     2,
       0,     5,     7,     6,     3,     3,     1,     1,     3,     7,
       4,     0,     3,     4,     1,     1,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     4,     5,     7,     2,
       4,     5,     2,     3,     3,     1,     0
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
#line 32 "yacc3.y" /* yacc.c:1646  */
    { printtree((yyvsp[0])); printStack();}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "yacc3.y" /* yacc.c:1646  */
    {((yyval) = mknode("CODE", (yyvsp[-1]), (yyvsp[0])));}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 37 "yacc3.y" /* yacc.c:1646  */
    {
	createScope("MAIN", "PROC", "NULL");
	(yyval) = mknode("PROC", mknode("MAIN", mknode("\n", NULL, NULL), NULL), mknode("ARGS", NULL, (yyvsp[-1])));
}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), (yyvsp[-1]));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "yacc3.y" /* yacc.c:1646  */
    {
	createScope((yyvsp[-6])->token, "procedure", "NULL");
	(yyval) = mknode("PROC", mknode((yyvsp[-6]), mknode("\n",  NULL, NULL), NULL), mknode("ARGS", (yyvsp[-4]), (yyvsp[-1])));
}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 49 "yacc3.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("FUNC", mknode((yyvsp[-10]), mknode("\n", NULL, NULL),
	 mknode("ARGS", (yyvsp[-8]), mknode("RET", (yyvsp[-4]), NULL))), mknode("", (yyvsp[-2]), (yyvsp[-1])));
	createScope((yyvsp[-10]), "function", (yyvsp[-4])->token);
}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[0]), mknode("", (yyvsp[-2]), mknode(")", NULL, NULL)));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-3]), mknode("", (yyvsp[0]), NULL));}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addArgVar( (yyvsp[-2]));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addArgVar((yyvsp[0]));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addVar( (yyvsp[-2]));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addVar((yyvsp[0]));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL); setRetType("BOOLEAN");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setRetType("CHAR");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setRetType("INTEGER");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setRetType("REAL");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setRetType("STRING");}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setRetType("INT*");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setRetType("CHAR*");}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 73 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setRetType("REAL*");}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL); setArgsType("BOOLEAN");}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setArgsType("CHAR");}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setArgsType("INTEGER");}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setArgsType("REAL");}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setArgsType("STRING");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setArgsType("INT*");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setArgsType("CHAR*");}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setArgsType("REAL*");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL); setVarType("BOOLEAN");}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 86 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 87 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setVarType("REAL");}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 88 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setVarType("STRING");}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 89 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setVarType("INT*");}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 90 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setVarType("REAL*");}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "yacc3.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("(BODY\n", mknode("", (yyvsp[-2]), NULL), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 100 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 103 "yacc3.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("VAR", (yyvsp[-3]), (yyvsp[-5]));	
}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR", (yyvsp[-6]), mknode("[", (yyvsp[-2]), mknode("]", NULL, NULL)));}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 107 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 107 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 111 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("IF", mknode("(", (yyvsp[-2]), mknode(")", NULL, NULL)), (yyvsp[0]));
	}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 115 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("IF-ELSE", mknode("(", (yyvsp[-4]), mknode(")", NULL, NULL)), mknode("", (yyvsp[-2]), mknode("", (yyvsp[0]), NULL)));
	}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("WHILE", mknode("(", (yyvsp[-2]), mknode(")", NULL, NULL)), (yyvsp[0]));
	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 122 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), NULL);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 123 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 124 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 126 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 126 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 129 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("{", (yyvsp[-4]), mknode("", (yyvsp[-3]), mknode("", (yyvsp[-2]), mknode("}", NULL, NULL))));
	}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 133 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-2]), NULL);}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 133 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 135 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 137 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 138 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 139 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 142 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 144 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 145 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 146 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 148 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 149 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 150 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 151 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 152 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 153 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 155 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 156 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 157 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 158 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 160 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 163 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 164 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 165 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 168 "yacc3.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 172 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 173 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 176 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 177 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 178 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 179 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 181 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), NULL);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 181 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 183 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[0]), NULL, NULL), NULL);}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 184 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-1]), NULL, NULL), NULL), mknode(")", NULL, NULL));}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 185 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 186 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("&", mknode("(", mknode((yyvsp[-4]), NULL, NULL), mknode("[", (yyvsp[-2]), NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 188 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode((yyvsp[0]), NULL, NULL), NULL);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 189 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("^", mknode("(", (yyvsp[-1]), NULL), mknode(")", NULL, NULL));}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 190 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-4]), mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 192 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("FUNC_CALL", mknode((yyvsp[-1]), NULL, NULL), mknode("ARGS", (yyvsp[0]), NULL));}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 194 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 196 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode(",", (yyvsp[0]), NULL));}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 197 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[0]), NULL);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 197 "yacc3.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2189 "y.tab.c" /* yacc.c:1646  */
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
#line 199 "yacc3.y" /* yacc.c:1906  */

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

// void print()
// {
// 	for(k = 0; k < i; k++)
// 	{
// 		printf("%d ", type_arr[k]);
// 		printf("%s\n", id_arr[k]);
// 	}
// }

// void test()
// {
// 	for(k = 0; k < i; k++){
// 		if(strcmp(id_arr[k], id) == 0){
// 			if(flag == 0){
// 				flag = 1;
// 				first_type = type_arr[k];
// 			} else {
// 				if(first_type == type_arr[k]){
// 					printf("DECLARATION ERROR %s\n", id);
// 				} else {
// 					printf("REDECLARATION %s\n", id);
// 				}
// 			}
// 		}
// 	}
// }
