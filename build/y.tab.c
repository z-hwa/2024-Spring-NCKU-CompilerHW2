/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "./compiler.y"

    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;

#line 79 "./build/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COUT = 3,                       /* COUT  */
  YYSYMBOL_SHR = 4,                        /* SHR  */
  YYSYMBOL_SHL = 5,                        /* SHL  */
  YYSYMBOL_BAN = 6,                        /* BAN  */
  YYSYMBOL_BOR = 7,                        /* BOR  */
  YYSYMBOL_BXO = 8,                        /* BXO  */
  YYSYMBOL_MUL = 9,                        /* MUL  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_REM = 11,                       /* REM  */
  YYSYMBOL_GTR = 12,                       /* GTR  */
  YYSYMBOL_LES = 13,                       /* LES  */
  YYSYMBOL_GEQ = 14,                       /* GEQ  */
  YYSYMBOL_LEQ = 15,                       /* LEQ  */
  YYSYMBOL_EQL = 16,                       /* EQL  */
  YYSYMBOL_NEQ = 17,                       /* NEQ  */
  YYSYMBOL_LAN = 18,                       /* LAN  */
  YYSYMBOL_LOR = 19,                       /* LOR  */
  YYSYMBOL_VAL_ASSIGN = 20,                /* VAL_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 23,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 24,                /* DIV_ASSIGN  */
  YYSYMBOL_REM_ASSIGN = 25,                /* REM_ASSIGN  */
  YYSYMBOL_BAN_ASSIGN = 26,                /* BAN_ASSIGN  */
  YYSYMBOL_BOR_ASSIGN = 27,                /* BOR_ASSIGN  */
  YYSYMBOL_BXO_ASSIGN = 28,                /* BXO_ASSIGN  */
  YYSYMBOL_SHR_ASSIGN = 29,                /* SHR_ASSIGN  */
  YYSYMBOL_SHL_ASSIGN = 30,                /* SHL_ASSIGN  */
  YYSYMBOL_INC_ASSIGN = 31,                /* INC_ASSIGN  */
  YYSYMBOL_DEC_ASSIGN = 32,                /* DEC_ASSIGN  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 39,                  /* CONTINUE  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_ENDL = 44,                      /* ENDL  */
  YYSYMBOL_VARIABLE_T = 45,                /* VARIABLE_T  */
  YYSYMBOL_IDENT = 46,                     /* IDENT  */
  YYSYMBOL_BOOL_LIT = 47,                  /* BOOL_LIT  */
  YYSYMBOL_INT_LIT = 48,                   /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 49,                 /* FLOAT_LIT  */
  YYSYMBOL_STR_LIT = 50,                   /* STR_LIT  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_SUB = 52,                       /* SUB  */
  YYSYMBOL_NOT = 53,                       /* NOT  */
  YYSYMBOL_BNT = 54,                       /* BNT  */
  YYSYMBOL_ADD = 55,                       /* ADD  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_Program = 60,                   /* Program  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_GlobalStmtList = 63,            /* GlobalStmtList  */
  YYSYMBOL_GlobalStmt = 64,                /* GlobalStmt  */
  YYSYMBOL_DefineVariableStmt = 65,        /* DefineVariableStmt  */
  YYSYMBOL_66_3 = 66,                      /* $@3  */
  YYSYMBOL_ReturnStmt = 67,                /* ReturnStmt  */
  YYSYMBOL_CoutStmt = 68,                  /* CoutStmt  */
  YYSYMBOL_69_4 = 69,                      /* $@4  */
  YYSYMBOL_PrintableList = 70,             /* PrintableList  */
  YYSYMBOL_Printable = 71,                 /* Printable  */
  YYSYMBOL_Expression = 72,                /* Expression  */
  YYSYMBOL_Or = 73,                        /* Or  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_And = 75,                       /* And  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_BitwiseOr = 77,                 /* BitwiseOr  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_BitwiseXor = 79,                /* BitwiseXor  */
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_BitwiseAnd = 81,                /* BitwiseAnd  */
  YYSYMBOL_82_9 = 82,                      /* $@9  */
  YYSYMBOL_Equality = 83,                  /* Equality  */
  YYSYMBOL_Relational = 84,                /* Relational  */
  YYSYMBOL_Shift = 85,                     /* Shift  */
  YYSYMBOL_Additive = 86,                  /* Additive  */
  YYSYMBOL_Multiplicative = 87,            /* Multiplicative  */
  YYSYMBOL_Unary = 88,                     /* Unary  */
  YYSYMBOL_Primary = 89,                   /* Primary  */
  YYSYMBOL_FunctionDefStmt = 90,           /* FunctionDefStmt  */
  YYSYMBOL_91_10 = 91,                     /* $@10  */
  YYSYMBOL_92_11 = 92,                     /* $@11  */
  YYSYMBOL_FunctionParameterStmtList = 93, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 94,     /* FunctionParameterStmt  */
  YYSYMBOL_95_12 = 95,                     /* $@12  */
  YYSYMBOL_96_13 = 96                      /* $@13  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,    40,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    44,    45,    46,    47,    48,
      49,    50,    52,    53,    54,    55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    59,    59,    60,    64,    65,    69,    70,
      71,    72,    73,    78,    78,    83,    88,    88,    93,    94,
      99,   100,   101,   108,   112,   113,   113,   117,   118,   118,
     122,   123,   123,   127,   128,   128,   132,   133,   133,   137,
     138,   139,   143,   144,   145,   146,   147,   151,   157,   158,
     159,   163,   164,   165,   166,   170,   171,   172,   173,   174,
     178,   179,   180,   181,   210,   210,   210,   213,   214,   215,
     219,   219,   220,   220
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COUT", "SHR", "SHL",
  "BAN", "BOR", "BXO", "MUL", "DIV", "REM", "GTR", "LES", "GEQ", "LEQ",
  "EQL", "NEQ", "LAN", "LOR", "VAL_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "REM_ASSIGN", "BAN_ASSIGN", "BOR_ASSIGN",
  "BXO_ASSIGN", "SHR_ASSIGN", "SHL_ASSIGN", "INC_ASSIGN", "DEC_ASSIGN",
  "IF", "ELSE", "FOR", "WHILE", "RETURN", "BREAK", "CONTINUE", "')'",
  "';'", "'{'", "'}'", "ENDL", "VARIABLE_T", "IDENT", "BOOL_LIT",
  "INT_LIT", "FLOAT_LIT", "STR_LIT", "'('", "SUB", "NOT", "BNT", "ADD",
  "','", "'['", "']'", "$accept", "Program", "$@1", "$@2",
  "GlobalStmtList", "GlobalStmt", "DefineVariableStmt", "$@3",
  "ReturnStmt", "CoutStmt", "$@4", "PrintableList", "Printable",
  "Expression", "Or", "$@5", "And", "$@6", "BitwiseOr", "$@7",
  "BitwiseXor", "$@8", "BitwiseAnd", "$@9", "Equality", "Relational",
  "Shift", "Additive", "Multiplicative", "Unary", "Primary",
  "FunctionDefStmt", "$@10", "$@11", "FunctionParameterStmtList",
  "FunctionParameterStmt", "$@12", "$@13", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -44,    10,     4,   -44,   -44,     5,   -23,     4,   -44,   -44,
     -44,   -44,   -44,    34,   -44,   -44,   -44,     5,     5,     5,
       5,     5,    14,    26,    43,    55,    57,    60,    21,     2,
     -44,   -43,    25,   -44,   -44,    16,   -44,   -44,   -22,    28,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,    49,    19,   -44,   -44,     6,   -44,   -44,   -44,     5,
       5,     5,     5,     5,     2,     2,   -44,   -44,   -44,   -44,
      25,    25,   -44,   -44,   -44,     5,   -44,   -22,   -44,    43,
      55,    57,    60,    21,    30,    27,   -44,   -44,    29,   -32,
     -44,    17,    31,    27,   -44,    20,     4,   -44,    18,     3,
     -44,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    12,     1,    16,     0,     0,     3,     7,     8,
      11,    10,     9,     0,    63,    60,    61,     0,     0,     0,
       0,     0,     0,    23,    24,    27,    30,    33,    36,    39,
      42,    47,    48,    51,    59,    13,     4,     6,     0,     0,
      57,    58,    55,    56,    15,    25,    28,    31,    34,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    20,     0,    18,    22,    62,     0,
       0,     0,     0,     0,    40,    41,    44,    43,    46,    45,
      50,    49,    52,    53,    54,     0,    65,     0,    17,    26,
      29,    32,    35,    38,     0,    69,    19,    14,     0,     0,
      68,    70,     0,     0,    71,     0,    12,    67,     0,     0,
      73,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -44,   -28,    -7,   -44,   -44,   -44,   -44,
     -44,   -44,    -8,    -4,   -44,   -44,    11,   -44,    12,   -44,
      13,   -44,    15,   -44,    22,     0,   -34,   -44,     7,   -16,
     -44,   -44,   -44,   -44,   -44,   -20,   -44,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    36,     7,     8,     9,    61,    10,    11,
      13,    65,    66,    67,    23,    69,    24,    70,    25,    71,
      26,    72,    27,    73,    28,    29,    30,    31,    32,    33,
      34,    12,    62,    95,    99,   100,   104,   105
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    22,    40,    41,    42,    43,     4,     4,   102,    56,
       3,    87,    57,    39,    52,    53,    54,    55,    76,    77,
      78,    79,    63,    35,   103,    14,    15,    16,    64,    17,
      18,    19,    20,    21,    58,    59,    60,    50,    51,    38,
       5,     5,    82,    83,    84,    45,   111,    88,     6,     6,
      74,    75,    14,    15,    16,    44,    17,    18,    19,    20,
      21,    46,    47,    80,    81,    48,    49,   -64,    68,    85,
      86,    97,    98,   106,   -72,   101,   110,   108,   109,    96,
      89,    94,    90,   107,    91,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,    37
};

static const yytype_int8 yycheck[] =
{
       7,     5,    18,    19,    20,    21,     3,     3,    40,    52,
       0,     5,    55,    17,    12,    13,    14,    15,    52,    53,
      54,    55,    44,    46,    56,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     9,    10,    11,    16,    17,     5,
      37,    37,    58,    59,    60,    19,    43,    41,    45,    45,
      50,    51,    47,    48,    49,    41,    51,    52,    53,    54,
      55,    18,     7,    56,    57,     8,     6,    51,    40,    20,
      51,    41,    45,    42,    57,    46,    58,    57,   106,    87,
      69,    85,    70,   103,    71,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,   109
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    60,    61,     0,     3,    37,    45,    63,    64,    65,
      67,    68,    90,    69,    47,    48,    49,    51,    52,    53,
      54,    55,    72,    73,    75,    77,    79,    81,    83,    84,
      85,    86,    87,    88,    89,    46,    62,    64,     5,    72,
      88,    88,    88,    88,    41,    19,    18,     7,     8,     6,
      16,    17,    12,    13,    14,    15,    52,    55,     9,    10,
      11,    66,    91,    44,    50,    70,    71,    72,    40,    74,
      76,    78,    80,    82,    84,    84,    85,    85,    85,    85,
      87,    87,    88,    88,    88,    20,    51,     5,    41,    75,
      77,    79,    81,    83,    72,    92,    71,    41,    45,    93,
      94,    46,    40,    56,    95,    96,    42,    94,    57,    63,
      58,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    62,    60,    60,    63,    63,    64,    64,
      64,    64,    64,    66,    65,    67,    69,    68,    70,    70,
      71,    71,    71,    72,    73,    74,    73,    75,    76,    75,
      77,    78,    77,    79,    80,    79,    81,    82,    81,    83,
      83,    83,    84,    84,    84,    84,    84,    85,    86,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    91,    92,    90,    93,    93,    93,
      95,    94,    96,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     0,     0,     6,     3,     0,     5,     1,     3,
       1,     1,     1,     1,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     3,     3,     2,     2,     2,     2,     1,
       1,     1,     3,     1,     0,     0,    10,     3,     1,     0,
       0,     3,     0,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* $@1: %empty  */
#line 59 "./compiler.y"
      { pushScope(); }
#line 1247 "./build/y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 59 "./compiler.y"
                                      { dumpScope(); }
#line 1253 "./build/y.tab.c"
    break;

  case 4: /* Program: $@1 GlobalStmtList $@2  */
#line 59 "./compiler.y"
                                                       {printScope();}
#line 1259 "./build/y.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 78 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type)); }
#line 1265 "./build/y.tab.c"
    break;

  case 15: /* ReturnStmt: RETURN Expression ';'  */
#line 83 "./compiler.y"
                            {printf("RETURN\n");}
#line 1271 "./build/y.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 88 "./compiler.y"
               {addMsg("cout");}
#line 1277 "./build/y.tab.c"
    break;

  case 17: /* CoutStmt: COUT $@4 SHL PrintableList ';'  */
#line 88 "./compiler.y"
                                                        { addMsg("\n"); printMsg(); }
#line 1283 "./build/y.tab.c"
    break;

  case 20: /* Printable: STR_LIT  */
#line 99 "./compiler.y"
              { addMsg(" string"); printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); }
#line 1289 "./build/y.tab.c"
    break;

  case 21: /* Printable: ENDL  */
#line 100 "./compiler.y"
           { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
#line 1295 "./build/y.tab.c"
    break;

  case 22: /* Printable: Expression  */
#line 101 "./compiler.y"
                     {addMsg(" "); addMsgObj((yyvsp[0].object_val));}
#line 1301 "./build/y.tab.c"
    break;

  case 25: /* $@5: %empty  */
#line 113 "./compiler.y"
                 {printf("LOR\n");}
#line 1307 "./build/y.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 118 "./compiler.y"
                  {printf("LAN\n");}
#line 1313 "./build/y.tab.c"
    break;

  case 31: /* $@7: %empty  */
#line 123 "./compiler.y"
                        {printf("BOR\n");}
#line 1319 "./build/y.tab.c"
    break;

  case 34: /* $@8: %empty  */
#line 128 "./compiler.y"
                         {printf("BXO\n");}
#line 1325 "./build/y.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 133 "./compiler.y"
                         {printf("BAN\n");}
#line 1331 "./build/y.tab.c"
    break;

  case 40: /* Equality: Equality EQL Relational  */
#line 138 "./compiler.y"
                                 {printf("EQL\n");}
#line 1337 "./build/y.tab.c"
    break;

  case 41: /* Equality: Equality NEQ Relational  */
#line 139 "./compiler.y"
                                 {printf("NEQ\n");}
#line 1343 "./build/y.tab.c"
    break;

  case 43: /* Relational: Relational LES Shift  */
#line 144 "./compiler.y"
                              {printf("LES\n");}
#line 1349 "./build/y.tab.c"
    break;

  case 44: /* Relational: Relational GTR Shift  */
#line 145 "./compiler.y"
                              {printf("GTR\n");}
#line 1355 "./build/y.tab.c"
    break;

  case 45: /* Relational: Relational LEQ Shift  */
#line 146 "./compiler.y"
                              {printf("LEQ\n");}
#line 1361 "./build/y.tab.c"
    break;

  case 46: /* Relational: Relational GEQ Shift  */
#line 147 "./compiler.y"
                              {printf("GEQ\n");}
#line 1367 "./build/y.tab.c"
    break;

  case 49: /* Additive: Additive ADD Multiplicative  */
#line 158 "./compiler.y"
                                     {printf("ADD\n");}
#line 1373 "./build/y.tab.c"
    break;

  case 50: /* Additive: Additive SUB Multiplicative  */
#line 159 "./compiler.y"
                                     {printf("SUB\n");}
#line 1379 "./build/y.tab.c"
    break;

  case 52: /* Multiplicative: Multiplicative MUL Unary  */
#line 164 "./compiler.y"
                                  {printf("MUL\n");}
#line 1385 "./build/y.tab.c"
    break;

  case 53: /* Multiplicative: Multiplicative DIV Unary  */
#line 165 "./compiler.y"
                                  {printf("DIV\n");}
#line 1391 "./build/y.tab.c"
    break;

  case 54: /* Multiplicative: Multiplicative REM Unary  */
#line 166 "./compiler.y"
                                  {printf("REM\n");}
#line 1397 "./build/y.tab.c"
    break;

  case 55: /* Unary: BNT Unary  */
#line 170 "./compiler.y"
                   {printf("BNT\n");}
#line 1403 "./build/y.tab.c"
    break;

  case 56: /* Unary: ADD Unary  */
#line 171 "./compiler.y"
                   {printf("ADD\n");}
#line 1409 "./build/y.tab.c"
    break;

  case 57: /* Unary: SUB Unary  */
#line 172 "./compiler.y"
                   {printf("NEG\n");}
#line 1415 "./build/y.tab.c"
    break;

  case 58: /* Unary: NOT Unary  */
#line 173 "./compiler.y"
                   {printf("NOT\n");}
#line 1421 "./build/y.tab.c"
    break;

  case 60: /* Primary: INT_LIT  */
#line 178 "./compiler.y"
              {(yyvsp[-1].object_val).type = OBJECT_TYPE_INT; printf("INT_LIT %d\n", (yyvsp[0].i_var));}
#line 1427 "./build/y.tab.c"
    break;

  case 61: /* Primary: FLOAT_LIT  */
#line 179 "./compiler.y"
                    {(yyvsp[-1].object_val).type = OBJECT_TYPE_FLOAT; printf("FLOAT_LIT %f\n", (yyvsp[0].f_var));}
#line 1433 "./build/y.tab.c"
    break;

  case 63: /* Primary: BOOL_LIT  */
#line 181 "./compiler.y"
                   {(yyvsp[-1].object_val).type = OBJECT_TYPE_BOOL; printf("BOOL_LIT %d\n", (yyvsp[0].b_var));}
#line 1439 "./build/y.tab.c"
    break;

  case 64: /* $@10: %empty  */
#line 210 "./compiler.y"
                       { createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var)); }
#line 1445 "./build/y.tab.c"
    break;

  case 65: /* $@11: %empty  */
#line 210 "./compiler.y"
                                                                        { pushScope(); }
#line 1451 "./build/y.tab.c"
    break;

  case 66: /* FunctionDefStmt: VARIABLE_T IDENT $@10 '(' $@11 FunctionParameterStmtList ')' '{' GlobalStmtList '}'  */
#line 210 "./compiler.y"
                                                                                                                                              { dumpScope(); }
#line 1457 "./build/y.tab.c"
    break;

  case 70: /* $@12: %empty  */
#line 219 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type)); }
#line 1463 "./build/y.tab.c"
    break;

  case 71: /* FunctionParameterStmt: VARIABLE_T IDENT $@12  */
#line 219 "./compiler.y"
                                                            { pushFunParm((yyvsp[-2].var_type), (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); }
#line 1469 "./build/y.tab.c"
    break;

  case 72: /* $@13: %empty  */
#line 220 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type)); }
#line 1475 "./build/y.tab.c"
    break;

  case 73: /* FunctionParameterStmt: VARIABLE_T IDENT $@13 '[' ']'  */
#line 220 "./compiler.y"
                                                                    { pushFunParm((yyvsp[-4].var_type), (yyvsp[-3].s_var), VAR_FLAG_DEFAULT); }
#line 1481 "./build/y.tab.c"
    break;


#line 1485 "./build/y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 239 "./compiler.y"

/* C code section */
