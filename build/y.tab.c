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
  YYSYMBOL_56_ = 56,                       /* ':'  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_Program = 61,                   /* Program  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_GlobalStmtList = 63,            /* GlobalStmtList  */
  YYSYMBOL_GlobalStmt = 64,                /* GlobalStmt  */
  YYSYMBOL_FunctionCallStmt = 65,          /* FunctionCallStmt  */
  YYSYMBOL_JumpStmt = 66,                  /* JumpStmt  */
  YYSYMBOL_IterationStmt = 67,             /* IterationStmt  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_69_3 = 69,                      /* $@3  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_ForCondition = 71,              /* ForCondition  */
  YYSYMBOL_ExpressionStmt = 72,            /* ExpressionStmt  */
  YYSYMBOL_CompoundStmt = 73,              /* CompoundStmt  */
  YYSYMBOL_SelectionStmt = 74,             /* SelectionStmt  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_Selection = 77,                 /* Selection  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_AssignStmt = 80,                /* AssignStmt  */
  YYSYMBOL_AssignBody = 81,                /* AssignBody  */
  YYSYMBOL_82_9 = 82,                      /* $@9  */
  YYSYMBOL_83_10 = 83,                     /* $@10  */
  YYSYMBOL_84_11 = 84,                     /* $@11  */
  YYSYMBOL_Assign = 85,                    /* Assign  */
  YYSYMBOL_Assignable = 86,                /* Assignable  */
  YYSYMBOL_DefineVariableStmt = 87,        /* DefineVariableStmt  */
  YYSYMBOL_DeclaratorList = 88,            /* DeclaratorList  */
  YYSYMBOL_Declarator = 89,                /* Declarator  */
  YYSYMBOL_ArrayEles = 90,                 /* ArrayEles  */
  YYSYMBOL_ReturnStmt = 91,                /* ReturnStmt  */
  YYSYMBOL_CoutStmt = 92,                  /* CoutStmt  */
  YYSYMBOL_93_12 = 93,                     /* $@12  */
  YYSYMBOL_PrintableList = 94,             /* PrintableList  */
  YYSYMBOL_Printable = 95,                 /* Printable  */
  YYSYMBOL_Expression = 96,                /* Expression  */
  YYSYMBOL_Or = 97,                        /* Or  */
  YYSYMBOL_And = 98,                       /* And  */
  YYSYMBOL_BitwiseOr = 99,                 /* BitwiseOr  */
  YYSYMBOL_BitwiseXor = 100,               /* BitwiseXor  */
  YYSYMBOL_BitwiseAnd = 101,               /* BitwiseAnd  */
  YYSYMBOL_Equality = 102,                 /* Equality  */
  YYSYMBOL_Relational = 103,               /* Relational  */
  YYSYMBOL_Shift = 104,                    /* Shift  */
  YYSYMBOL_Additive = 105,                 /* Additive  */
  YYSYMBOL_Multiplicative = 106,           /* Multiplicative  */
  YYSYMBOL_TypeCast = 107,                 /* TypeCast  */
  YYSYMBOL_Unary = 108,                    /* Unary  */
  YYSYMBOL_Post = 109,                     /* Post  */
  YYSYMBOL_Primary = 110,                  /* Primary  */
  YYSYMBOL_FunctionCall = 111,             /* FunctionCall  */
  YYSYMBOL_ArgumentList = 112,             /* ArgumentList  */
  YYSYMBOL_ArgumentListNonEmpty = 113,     /* ArgumentListNonEmpty  */
  YYSYMBOL_FunctionDefStmt = 114,          /* FunctionDefStmt  */
  YYSYMBOL_115_13 = 115,                   /* $@13  */
  YYSYMBOL_116_14 = 116,                   /* $@14  */
  YYSYMBOL_117_15 = 117,                   /* $@15  */
  YYSYMBOL_FunctionParameterStmtList = 118, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 119,    /* FunctionParameterStmt  */
  YYSYMBOL_120_16 = 120,                   /* $@16  */
  YYSYMBOL_121_17 = 121                    /* $@17  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

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
      51,    40,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    41,
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
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    60,    61,    65,    66,    70,    71,    72,
      73,    74,    76,    77,    78,    79,    84,    89,    96,    96,
      96,    97,    97,   101,   102,   111,   112,   113,   114,   115,
     120,   121,   127,   127,   128,   128,   132,   133,   133,   133,
     139,   143,   143,   144,   144,   147,   147,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   169,
     173,   178,   182,   183,   187,   188,   192,   196,   200,   208,
     209,   210,   215,   216,   221,   221,   226,   227,   232,   234,
     235,   245,   247,   251,   252,   258,   259,   263,   264,   268,
     269,   273,   274,   278,   279,   280,   284,   285,   287,   289,
     291,   296,   297,   302,   303,   305,   310,   311,   312,   313,
     318,   319,   326,   329,   332,   335,   338,   342,   343,   344,
     348,   353,   358,   362,   367,   373,   374,   380,   391,   401,
     405,   406,   412,   414,   416,   412,   423,   424,   425,   429,
     429,   430,   430
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
  "':'", "'['", "']'", "','", "$accept", "Program", "$@1",
  "GlobalStmtList", "GlobalStmt", "FunctionCallStmt", "JumpStmt",
  "IterationStmt", "$@2", "$@3", "$@4", "ForCondition", "ExpressionStmt",
  "CompoundStmt", "SelectionStmt", "$@5", "$@6", "Selection", "$@7", "$@8",
  "AssignStmt", "AssignBody", "$@9", "$@10", "$@11", "Assign",
  "Assignable", "DefineVariableStmt", "DeclaratorList", "Declarator",
  "ArrayEles", "ReturnStmt", "CoutStmt", "$@12", "PrintableList",
  "Printable", "Expression", "Or", "And", "BitwiseOr", "BitwiseXor",
  "BitwiseAnd", "Equality", "Relational", "Shift", "Additive",
  "Multiplicative", "TypeCast", "Unary", "Post", "Primary", "FunctionCall",
  "ArgumentList", "ArgumentListNonEmpty", "FunctionDefStmt", "$@13",
  "$@14", "$@15", "FunctionParameterStmtList", "FunctionParameterStmt",
  "$@16", "$@17", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-142)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,    53,   232,  -130,  -130,   -45,  -130,  -130,   351,    19,
     -13,    -3,   232,  -130,  -130,  -130,  -130,    22,  -130,    58,
    -130,  -130,  -130,    72,  -130,   110,   373,    74,    78,  -130,
      25,  -130,  -130,  -130,  -130,   270,   393,   393,   393,   393,
      92,   117,   119,   131,   132,   133,    81,    65,   137,     3,
      34,  -130,  -130,  -130,    75,  -130,  -130,     6,    -7,  -130,
     373,   373,   321,  -130,  -130,  -130,  -130,   363,   103,   311,
     373,   373,   104,   107,   373,  -130,  -130,  -130,  -130,  -130,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,  -130,  -130,   383,
     373,   101,  -130,   108,  -130,   116,    94,    99,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,  -130,
    -130,  -130,  -130,     4,  -130,  -130,    33,  -130,  -130,  -130,
    -130,   115,    77,   128,   336,  -130,  -130,   126,   129,   118,
     393,  -130,   119,   131,   132,   133,    81,    65,    65,   137,
     137,   137,   137,     3,    34,    34,  -130,  -130,  -130,  -130,
     120,  -130,     9,  -130,  -130,   373,   114,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,   363,  -130,     4,     8,   373,   113,   108,   336,  -130,
    -130,   122,  -130,    10,   130,  -130,   373,   321,   232,  -130,
    -130,   134,   125,   232,   232,  -130,  -130,   113,   373,   135,
     373,   139,    -8,  -130,   136,  -130,   232,  -130,   243,   127,
    -130,   141,   383,   142,   147,  -130,   130,  -130,   144,   373,
    -130,  -130,  -130,   -12,  -130,  -130,   149,   146,  -130,   321,
    -130,   150,  -130,   383,   154,   232,  -130,   295,  -130,  -130,
     188,  -130
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    74,     0,    21,    18,     0,     0,
       0,    41,     3,     6,    15,    14,    13,    12,    11,     0,
       7,    10,     9,     0,     8,     0,     0,     0,     0,    73,
     124,   123,   120,   121,    82,     0,     0,     0,     0,     0,
       0,    81,    83,    85,    87,    89,    91,    93,    96,   101,
     103,   106,   110,   116,   117,   125,    17,    64,     0,    62,
       0,     0,     0,     5,    34,    40,    16,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,   112,   113,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,     0,
       0,     0,    61,     0,   130,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      42,    47,    60,     0,    79,    78,     0,    76,    80,    32,
      29,     0,    41,     0,     0,    27,    26,    28,     0,     0,
       0,   122,    84,    86,    88,    90,    92,    94,    95,    98,
      97,   100,    99,   102,   105,   104,   107,   108,   109,    65,
       0,   133,    64,    63,   128,     0,    43,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    37,    36,
      35,     0,    75,     0,    64,     0,     0,     0,     0,    25,
      19,   126,   111,    66,   138,   131,     0,     0,     0,    77,
      33,     0,     0,     0,    31,    22,    23,     0,     0,     0,
       0,     0,     0,   137,     0,    44,    38,    24,    43,     0,
      20,     0,    71,     0,   139,   134,     0,    45,     0,     0,
      30,   127,    69,     0,    67,   140,     0,     0,   136,     0,
      39,     0,    68,     0,     0,     0,    46,    45,    70,   142,
       0,   135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,     0,    -9,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -129,   -17,  -130,  -130,  -130,    30,  -130,  -130,
    -130,   -65,  -130,  -130,  -130,   -97,   -98,   -61,  -130,    89,
    -130,  -130,  -130,  -130,  -130,    12,     1,  -130,   138,   148,
     140,   145,   143,    46,    15,   124,    27,    16,   -14,  -130,
    -130,    -2,  -130,  -130,  -130,  -130,  -130,  -130,  -130,   -10,
    -130,  -130
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,   204,    13,    14,    15,    16,    28,   207,
      27,   133,   134,   205,    17,   183,   123,   180,   198,   228,
      18,    19,    62,   197,   239,   120,   121,    20,    58,    59,
     233,    21,    22,    25,   126,   127,   122,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   105,   106,    24,   101,   194,   237,   212,   213,
     235,   236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   159,    12,    63,   135,   188,    26,     4,   136,    40,
      23,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,    75,    76,    77,    78,    99,    68,    99,    99,
     209,   242,   225,    57,   102,    -4,    73,     5,   181,     6,
       7,     8,     9,    94,    95,    96,   178,   243,    60,    10,
      11,   226,   103,     3,    61,    92,    64,  -132,    93,   206,
      56,   104,   107,   100,   201,   100,   100,   210,   128,   135,
     137,   138,   139,   136,   182,    73,    60,    87,    88,    89,
      90,  -124,    71,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,    85,    86,    65,
     215,   160,   149,   150,   151,   152,    97,    98,  -124,  -124,
     156,   157,   158,    66,   179,    67,     4,  -124,  -124,   154,
     155,    23,  -124,   135,   232,    69,   192,   136,    60,    70,
       4,   147,   148,    79,   185,   137,    80,    81,    82,    84,
      83,    91,   246,   129,   140,   248,     5,   141,     6,     7,
       8,     9,   161,   165,   162,   203,   164,   166,    10,    11,
       5,   184,     6,     7,     8,     9,   195,   189,   186,   190,
     230,   196,    10,    11,   179,   211,   191,   222,   193,   208,
     217,    23,   128,   218,    23,   224,   202,   240,   245,   137,
     220,     4,   163,   199,   227,    63,    23,   214,   216,   231,
     234,    23,    23,   219,  -141,    23,   244,    63,   247,   221,
      63,   223,   249,   200,    23,   153,   238,    23,   142,     0,
       0,     5,   144,     6,     7,     8,     9,   146,   145,   143,
     241,   251,     0,    10,    11,     4,     0,     0,     0,     0,
       0,    63,     0,    23,     0,   250,     0,  -126,    23,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,     0,     0,     5,     0,     6,     7,     8,
       9,     0,     0,     0,  -126,  -126,     0,    10,    11,     0,
       0,     0,     0,  -126,  -126,     0,     0,     0,  -126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -127,
     229,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,    72,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,  -127,  -127,     0,     0,
       0,     0,     0,     0,     0,  -127,  -127,     0,     0,     0,
    -127,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   130,     0,     0,     0,   131,   132,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    30,    31,    32,
      33,   119,    35,    36,    37,    38,    39,   130,     0,     0,
       0,   187,   132,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    29,     0,     0,     0,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   124,     0,    30,
      31,    32,    33,   125,    35,    36,    37,    38,    39,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    30,
      31,    32,    33,   119,    35,    36,    37,    38,    39,    30,
      31,    32,    33,     0,    74,    36,    37,    38,    39,    30,
      31,    32,    33,     0,    35,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
       2,    99,     2,    12,    69,   134,    51,     3,    69,     8,
      12,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    36,    37,    38,    39,    20,    26,    20,    20,
      20,    43,    40,    46,    41,     0,    35,    33,     5,    35,
      36,    37,    38,     9,    10,    11,    42,    59,    51,    45,
      46,    59,    59,     0,    57,    52,    34,    51,    55,   188,
      41,    60,    61,    57,    56,    57,    57,    57,    67,   134,
      69,    70,    71,   134,    41,    74,    51,    12,    13,    14,
      15,     4,    57,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    16,    17,    41,
     197,   100,    87,    88,    89,    90,    31,    32,    31,    32,
      94,    95,    96,    41,   123,     5,     3,    40,    41,    92,
      93,   123,    45,   188,   222,    51,   140,   188,    51,    51,
       3,    85,    86,    41,    57,   134,    19,    18,     7,     6,
       8,     4,   239,    40,    40,   243,    33,    40,    35,    36,
      37,    38,    51,    59,    46,    42,    40,    58,    45,    46,
      33,    46,    35,    36,    37,    38,   165,    41,    40,    40,
      43,    57,    45,    46,   183,    45,    58,    42,    58,    57,
      46,   183,   181,    58,   186,    46,   185,    43,    42,   188,
     207,     3,   103,   181,    58,   204,   198,   196,   198,    58,
      58,   203,   204,   203,    57,   207,    57,   216,    58,   208,
     219,   210,    58,   183,   216,    91,   226,   219,    80,    -1,
      -1,    33,    82,    35,    36,    37,    38,    84,    83,    81,
     229,    43,    -1,    45,    46,     3,    -1,    -1,    -1,    -1,
      -1,   250,    -1,   245,    -1,   245,    -1,     4,   250,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    31,    32,    -1,    45,    46,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      57,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    61,    62,     0,     3,    33,    35,    36,    37,    38,
      45,    46,    63,    64,    65,    66,    67,    74,    80,    81,
      87,    91,    92,   111,   114,    93,    51,    70,    68,    41,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    41,    46,    88,    89,
      51,    57,    82,    64,    34,    41,    41,     5,    96,    51,
      51,    57,    45,    96,    51,   108,   108,   108,   108,    41,
      19,    18,     7,     8,     6,    16,    17,    12,    13,    14,
      15,     4,    52,    55,     9,    10,    11,    31,    32,    20,
      57,   115,    41,    59,    96,   112,   113,    96,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    50,
      85,    86,    96,    76,    44,    50,    94,    95,    96,    40,
      41,    45,    46,    71,    72,    81,    87,    96,    96,    96,
      40,    40,    98,    99,   100,   101,   102,   103,   103,   104,
     104,   104,   104,   105,   106,   106,   107,   107,   107,    86,
      96,    51,    46,    89,    40,    59,    58,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    42,    64,
      77,     5,    41,    75,    46,    57,    40,    45,    72,    41,
      40,    58,   108,    58,   116,    96,    57,    83,    78,    95,
      77,    56,    96,    42,    63,    73,    72,    69,    57,    20,
      57,    45,   118,   119,    96,    85,    63,    46,    58,    63,
      73,    96,    42,    96,    46,    40,    59,    58,    79,    57,
      43,    58,    86,    90,    58,   120,   121,   117,   119,    84,
      43,    96,    43,    59,    57,    42,    85,    58,    86,    58,
      63,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    61,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    66,    68,    69,
      67,    70,    67,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    75,    74,    76,    74,    77,    78,    79,    77,
      80,    82,    81,    83,    81,    84,    81,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    93,    92,    94,    94,    95,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   106,   106,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   112,
     113,   113,   115,   116,   117,   114,   118,   118,   118,   120,
     119,   121,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     0,
       7,     0,     6,     3,     4,     2,     1,     1,     1,     1,
       3,     1,     0,     6,     0,     4,     1,     0,     0,     5,
       2,     0,     3,     0,     6,     0,     9,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     3,     1,     3,     1,     3,     4,     7,     8,     1,
       3,     0,     3,     2,     0,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     2,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     3,     1,     1,     1,     4,     7,     4,     1,
       1,     3,     0,     0,     0,    11,     3,     1,     0,     0,
       3,     0,     5
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
#line 60 "./compiler.y"
      { pushScope(); }
#line 1416 "./build/y.tab.c"
    break;

  case 3: /* Program: $@1 GlobalStmtList  */
#line 60 "./compiler.y"
                                      { dumpScope(); }
#line 1422 "./build/y.tab.c"
    break;

  case 17: /* JumpStmt: BREAK ';'  */
#line 89 "./compiler.y"
                    {
		printf("BREAK\n");
	}
#line 1430 "./build/y.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 96 "./compiler.y"
                {printf("WHILE\n");}
#line 1436 "./build/y.tab.c"
    break;

  case 19: /* $@3: %empty  */
#line 96 "./compiler.y"
                                                        {pushScope();}
#line 1442 "./build/y.tab.c"
    break;

  case 20: /* IterationStmt: WHILE $@2 '(' Expression ')' $@3 CompoundStmt  */
#line 96 "./compiler.y"
                                                                                    {dumpScope();}
#line 1448 "./build/y.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 97 "./compiler.y"
              {printf("FOR\n"); pushScope();}
#line 1454 "./build/y.tab.c"
    break;

  case 22: /* IterationStmt: FOR $@4 '(' ForCondition ')' CompoundStmt  */
#line 97 "./compiler.y"
                                                                                {dumpScope();}
#line 1460 "./build/y.tab.c"
    break;

  case 24: /* ForCondition: VARIABLE_T IDENT ':' IDENT  */
#line 102 "./compiler.y"
                                     {
		//printf("%d\n", $<var_type>1);
		insert((yyvsp[-2].s_var), getVarTypeByName((yyvsp[0].s_var)), 1);
		printIDByName((yyvsp[0].s_var), 'v');		
		//insertAuto($<s_var>2, $<var_type>1, $<object_val>3.type, 1);} 
	}
#line 1471 "./build/y.tab.c"
    break;

  case 32: /* $@5: %empty  */
#line 127 "./compiler.y"
                               { printf("IF\n");}
#line 1477 "./build/y.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 128 "./compiler.y"
                             {printf("ELSE\n"); }
#line 1483 "./build/y.tab.c"
    break;

  case 37: /* $@7: %empty  */
#line 133 "./compiler.y"
              {pushScope();}
#line 1489 "./build/y.tab.c"
    break;

  case 38: /* $@8: %empty  */
#line 133 "./compiler.y"
                                            {dumpScope();}
#line 1495 "./build/y.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 143 "./compiler.y"
                { printIDByName((yyvsp[0].s_var), 'v');}
#line 1501 "./build/y.tab.c"
    break;

  case 42: /* AssignBody: IDENT $@9 Assign  */
#line 143 "./compiler.y"
                                                         {(yyvsp[-3].object_val).type = OBJECT_TYPE_BOOL;}
#line 1507 "./build/y.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 144 "./compiler.y"
                                   {
		printIDByName((yyvsp[-3].s_var), 'v');
	}
#line 1515 "./build/y.tab.c"
    break;

  case 44: /* AssignBody: IDENT '[' Expression ']' $@10 Assign  */
#line 146 "./compiler.y"
                 {(yyvsp[-6].object_val).type = OBJECT_TYPE_BOOL;}
#line 1521 "./build/y.tab.c"
    break;

  case 45: /* $@11: %empty  */
#line 147 "./compiler.y"
                                                      {
		printIDByName((yyvsp[-6].s_var), 'v');
	}
#line 1529 "./build/y.tab.c"
    break;

  case 46: /* AssignBody: IDENT '[' Expression ']' '[' Expression ']' $@11 Assign  */
#line 149 "./compiler.y"
                 {(yyvsp[-9].object_val).type = OBJECT_TYPE_BOOL;}
#line 1535 "./build/y.tab.c"
    break;

  case 48: /* Assign: VAL_ASSIGN Assign  */
#line 154 "./compiler.y"
                           {printf("EQL_ASSIGN\n");}
#line 1541 "./build/y.tab.c"
    break;

  case 49: /* Assign: ADD_ASSIGN Assign  */
#line 155 "./compiler.y"
                           {printf("ADD_ASSIGN\n");}
#line 1547 "./build/y.tab.c"
    break;

  case 50: /* Assign: SUB_ASSIGN Assign  */
#line 156 "./compiler.y"
                           {printf("SUB_ASSIGN\n");}
#line 1553 "./build/y.tab.c"
    break;

  case 51: /* Assign: MUL_ASSIGN Assign  */
#line 157 "./compiler.y"
                           {printf("MUL_ASSIGN\n");}
#line 1559 "./build/y.tab.c"
    break;

  case 52: /* Assign: DIV_ASSIGN Assign  */
#line 158 "./compiler.y"
                           {printf("DIV_ASSIGN\n");}
#line 1565 "./build/y.tab.c"
    break;

  case 53: /* Assign: REM_ASSIGN Assign  */
#line 159 "./compiler.y"
                           {printf("REM_ASSIGN\n");}
#line 1571 "./build/y.tab.c"
    break;

  case 54: /* Assign: BAN_ASSIGN Assign  */
#line 160 "./compiler.y"
                           {printf("BAN_ASSIGN\n");}
#line 1577 "./build/y.tab.c"
    break;

  case 55: /* Assign: BOR_ASSIGN Assign  */
#line 161 "./compiler.y"
                           {printf("BOR_ASSIGN\n");}
#line 1583 "./build/y.tab.c"
    break;

  case 56: /* Assign: BXO_ASSIGN Assign  */
#line 162 "./compiler.y"
                           {printf("BXO_ASSIGN\n");}
#line 1589 "./build/y.tab.c"
    break;

  case 57: /* Assign: SHR_ASSIGN Assign  */
#line 163 "./compiler.y"
                           {printf("SHR_ASSIGN\n");}
#line 1595 "./build/y.tab.c"
    break;

  case 58: /* Assign: SHL_ASSIGN Assign  */
#line 164 "./compiler.y"
                           {printf("SHL_ASSIGN\n");}
#line 1601 "./build/y.tab.c"
    break;

  case 59: /* Assignable: STR_LIT  */
#line 169 "./compiler.y"
                           {
		(yyvsp[-1].object_val).type = OBJECT_TYPE_STR;
		printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));
	}
#line 1610 "./build/y.tab.c"
    break;

  case 61: /* DefineVariableStmt: VARIABLE_T DeclaratorList ';'  */
#line 178 "./compiler.y"
                                         {typeSet(false);}
#line 1616 "./build/y.tab.c"
    break;

  case 64: /* Declarator: IDENT  */
#line 187 "./compiler.y"
                {insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 0);}
#line 1622 "./build/y.tab.c"
    break;

  case 65: /* Declarator: IDENT VAL_ASSIGN Assignable  */
#line 188 "./compiler.y"
                                      {
		//printf("\n%d\n", $<object_val>0.type);
		//printf("\n\n");
		insertAuto((yyvsp[-2].s_var), (yyvsp[-3].var_type), (yyvsp[-1].var_type), 0);}
#line 1631 "./build/y.tab.c"
    break;

  case 66: /* Declarator: IDENT '[' Expression ']'  */
#line 192 "./compiler.y"
                                   {
		printf("create array: %d\n", 0);
		insert((yyvsp[-3].s_var), (yyvsp[-4].var_type), 0);
	}
#line 1640 "./build/y.tab.c"
    break;

  case 67: /* Declarator: IDENT '[' Expression ']' '[' Expression ']'  */
#line 196 "./compiler.y"
                                                      {
		//printf("create array: %d\n", 0);
		insert((yyvsp[-6].s_var), (yyvsp[-7].var_type), 0);
	}
#line 1649 "./build/y.tab.c"
    break;

  case 68: /* Declarator: IDENT '[' Expression ']' VAL_ASSIGN '{' ArrayEles '}'  */
#line 200 "./compiler.y"
                                                                {
		printf("create array: %d\n", arrayFun('g'));
		arrayFun('r');
		insert((yyvsp[-7].s_var), (yyvsp[-8].var_type), 0);
	}
#line 1659 "./build/y.tab.c"
    break;

  case 69: /* ArrayEles: Assignable  */
#line 208 "./compiler.y"
                     {arrayFun('c');}
#line 1665 "./build/y.tab.c"
    break;

  case 70: /* ArrayEles: ArrayEles ',' Assignable  */
#line 209 "./compiler.y"
                                   {arrayFun('c');}
#line 1671 "./build/y.tab.c"
    break;

  case 72: /* ReturnStmt: RETURN Expression ';'  */
#line 215 "./compiler.y"
                            {printf("RETURN\n");}
#line 1677 "./build/y.tab.c"
    break;

  case 73: /* ReturnStmt: RETURN ';'  */
#line 216 "./compiler.y"
                 {printf("RETURN\n");}
#line 1683 "./build/y.tab.c"
    break;

  case 74: /* $@12: %empty  */
#line 221 "./compiler.y"
               {addMsg("cout");}
#line 1689 "./build/y.tab.c"
    break;

  case 75: /* CoutStmt: COUT $@12 SHL PrintableList ';'  */
#line 221 "./compiler.y"
                                                       { addMsg("\n"); printMsg(); }
#line 1695 "./build/y.tab.c"
    break;

  case 78: /* Printable: STR_LIT  */
#line 232 "./compiler.y"
              { addMsg(" string");
				printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); }
#line 1702 "./build/y.tab.c"
    break;

  case 79: /* Printable: ENDL  */
#line 234 "./compiler.y"
           { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
#line 1708 "./build/y.tab.c"
    break;

  case 80: /* Printable: Expression  */
#line 235 "./compiler.y"
                     {
					addMsg(" ");
					addMsgObj(&(yyvsp[-1].object_val));
	}
#line 1717 "./build/y.tab.c"
    break;

  case 82: /* Expression: STR_LIT  */
#line 247 "./compiler.y"
                  {printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));}
#line 1723 "./build/y.tab.c"
    break;

  case 84: /* Or: Or LOR And  */
#line 252 "./compiler.y"
                    {
				// here is correct
				objectExpBoolean('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1731 "./build/y.tab.c"
    break;

  case 86: /* And: And LAN BitwiseOr  */
#line 259 "./compiler.y"
                           {objectExpBoolean('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1737 "./build/y.tab.c"
    break;

  case 88: /* BitwiseOr: BitwiseOr BOR BitwiseXor  */
#line 264 "./compiler.y"
                                  {objectExpBinary('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1743 "./build/y.tab.c"
    break;

  case 90: /* BitwiseXor: BitwiseXor BXO BitwiseAnd  */
#line 269 "./compiler.y"
                                   {objectExpBinary('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1749 "./build/y.tab.c"
    break;

  case 92: /* BitwiseAnd: BitwiseAnd BAN Equality  */
#line 274 "./compiler.y"
                                 {objectExpBinary('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1755 "./build/y.tab.c"
    break;

  case 94: /* Equality: Equality EQL Relational  */
#line 279 "./compiler.y"
                                 {objectExpBoolean('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1761 "./build/y.tab.c"
    break;

  case 95: /* Equality: Equality NEQ Relational  */
#line 280 "./compiler.y"
                                 {objectExpBoolean('4', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1767 "./build/y.tab.c"
    break;

  case 97: /* Relational: Relational LES Shift  */
#line 285 "./compiler.y"
                              {printf("LES\n");}
#line 1773 "./build/y.tab.c"
    break;

  case 98: /* Relational: Relational GTR Shift  */
#line 287 "./compiler.y"
                              {printf("GTR\n");}
#line 1779 "./build/y.tab.c"
    break;

  case 99: /* Relational: Relational LEQ Shift  */
#line 289 "./compiler.y"
                              {printf("LEQ\n");}
#line 1785 "./build/y.tab.c"
    break;

  case 100: /* Relational: Relational GEQ Shift  */
#line 291 "./compiler.y"
                              {printf("GEQ\n");}
#line 1791 "./build/y.tab.c"
    break;

  case 102: /* Shift: Shift SHR Additive  */
#line 297 "./compiler.y"
                            {printf("SHR\n");}
#line 1797 "./build/y.tab.c"
    break;

  case 104: /* Additive: Additive ADD Multiplicative  */
#line 303 "./compiler.y"
                                     {printf("ADD\n");}
#line 1803 "./build/y.tab.c"
    break;

  case 105: /* Additive: Additive SUB Multiplicative  */
#line 305 "./compiler.y"
                                     {printf("SUB\n");}
#line 1809 "./build/y.tab.c"
    break;

  case 107: /* Multiplicative: Multiplicative MUL TypeCast  */
#line 311 "./compiler.y"
                                     {printf("MUL\n");}
#line 1815 "./build/y.tab.c"
    break;

  case 108: /* Multiplicative: Multiplicative DIV TypeCast  */
#line 312 "./compiler.y"
                                     {printf("DIV\n");}
#line 1821 "./build/y.tab.c"
    break;

  case 109: /* Multiplicative: Multiplicative REM TypeCast  */
#line 313 "./compiler.y"
                                     {printf("REM\n");}
#line 1827 "./build/y.tab.c"
    break;

  case 111: /* TypeCast: '(' VARIABLE_T ')' Unary  */
#line 319 "./compiler.y"
                                   {
		(yyvsp[-4].object_val).type = (yyvsp[-2].var_type);
		printCastInfo((yyvsp[-2].var_type));
	}
#line 1836 "./build/y.tab.c"
    break;

  case 112: /* Unary: BNT Unary  */
#line 326 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("BNT\n");}
#line 1844 "./build/y.tab.c"
    break;

  case 113: /* Unary: ADD Unary  */
#line 329 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("ADD\n");}
#line 1852 "./build/y.tab.c"
    break;

  case 114: /* Unary: SUB Unary  */
#line 332 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NEG\n");}
#line 1860 "./build/y.tab.c"
    break;

  case 115: /* Unary: NOT Unary  */
#line 335 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NOT\n");}
#line 1868 "./build/y.tab.c"
    break;

  case 118: /* Post: Primary INC_ASSIGN  */
#line 343 "./compiler.y"
                             {printf("INC_ASSIGN\n");}
#line 1874 "./build/y.tab.c"
    break;

  case 119: /* Post: Primary DEC_ASSIGN  */
#line 344 "./compiler.y"
                             {printf("DEC_ASSIGN\n");}
#line 1880 "./build/y.tab.c"
    break;

  case 120: /* Primary: INT_LIT  */
#line 348 "./compiler.y"
             {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_INT;
			//$<object_val>0.value = $<i_var>1;
			printf("INT_LIT %d\n", (yyvsp[0].i_var));
		}
#line 1890 "./build/y.tab.c"
    break;

  case 121: /* Primary: FLOAT_LIT  */
#line 353 "./compiler.y"
                    {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_FLOAT;
			//$<object_val>0.value = 0;
			printf("FLOAT_LIT %f\n", (yyvsp[0].f_var));
		}
#line 1900 "./build/y.tab.c"
    break;

  case 122: /* Primary: '(' Expression ')'  */
#line 358 "./compiler.y"
                         {
			(yyvsp[-3].object_val).type = (yyvsp[-2].object_val).type;
			//$<object_val>0.value = $<i_var>1;
		}
#line 1909 "./build/y.tab.c"
    break;

  case 123: /* Primary: BOOL_LIT  */
#line 362 "./compiler.y"
                   {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_BOOL; 
			//$<object_val>0.value = (int64_t)$<b_var>1;
			printBool((yyvsp[0].b_var));
		}
#line 1919 "./build/y.tab.c"
    break;

  case 124: /* Primary: IDENT  */
#line 367 "./compiler.y"
                {
			ObjectType type = getVarTypeByName((yyvsp[0].s_var));
			(yyvsp[-1].object_val).type = type;
			//$<object_val>0.value = 0;
			printIDByName((yyvsp[0].s_var), 'v');
		}
#line 1930 "./build/y.tab.c"
    break;

  case 126: /* Primary: IDENT '[' Expression ']'  */
#line 374 "./compiler.y"
                                   {
			ObjectType type = getVarTypeByName((yyvsp[-3].s_var));
			(yyvsp[-4].object_val).type = type;
			//$<object_val>0.value = 0;
			printIDByName((yyvsp[-3].s_var), 'v');
	}
#line 1941 "./build/y.tab.c"
    break;

  case 127: /* Primary: IDENT '[' Expression ']' '[' Expression ']'  */
#line 380 "./compiler.y"
                                                      {
		ObjectType type = getVarTypeByName((yyvsp[-6].s_var));
		(yyvsp[-7].object_val).type = type;
		//$<object_val>0.value = 0;
		printIDByName((yyvsp[-6].s_var), 'v');
	}
#line 1952 "./build/y.tab.c"
    break;

  case 128: /* FunctionCall: IDENT '(' ArgumentList ')'  */
#line 391 "./compiler.y"
                                     {
		(yyvsp[-4].object_val).type = getFuncType((yyvsp[-3].s_var));
		printIDByName((yyvsp[-3].s_var), 'f');
		printf("call: %s", (yyvsp[-3].s_var));
		printSigByName((yyvsp[-3].s_var));
		printf("\n");
	}
#line 1964 "./build/y.tab.c"
    break;

  case 132: /* $@13: %empty  */
#line 412 "./compiler.y"
                       {
		createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var));
	}
#line 1972 "./build/y.tab.c"
    break;

  case 133: /* $@14: %empty  */
#line 414 "./compiler.y"
              {
		pushScope();
	}
#line 1980 "./build/y.tab.c"
    break;

  case 134: /* $@15: %empty  */
#line 416 "./compiler.y"
                                        {
		setFuncSig((yyvsp[-5].s_var), (yyvsp[-6].var_type));
	}
#line 1988 "./build/y.tab.c"
    break;

  case 135: /* FunctionDefStmt: VARIABLE_T IDENT $@13 '(' $@14 FunctionParameterStmtList ')' $@15 '{' GlobalStmtList '}'  */
#line 418 "./compiler.y"
                                 {
		dumpScope();
	}
#line 1996 "./build/y.tab.c"
    break;

  case 139: /* $@16: %empty  */
#line 429 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 3); }
#line 2002 "./build/y.tab.c"
    break;

  case 140: /* FunctionParameterStmt: VARIABLE_T IDENT $@16  */
#line 429 "./compiler.y"
                                                               { pushFunParm((yyvsp[-2].var_type), (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); }
#line 2008 "./build/y.tab.c"
    break;

  case 141: /* $@17: %empty  */
#line 430 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 4); }
#line 2014 "./build/y.tab.c"
    break;

  case 142: /* FunctionParameterStmt: VARIABLE_T IDENT $@17 '[' ']'  */
#line 430 "./compiler.y"
                                                                       { pushFunParm((yyvsp[-4].var_type), (yyvsp[-3].s_var), VAR_FLAG_DEFAULT); }
#line 2020 "./build/y.tab.c"
    break;


#line 2024 "./build/y.tab.c"

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

#line 449 "./compiler.y"

/* C code section */
