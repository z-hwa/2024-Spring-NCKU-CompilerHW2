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
  YYSYMBOL_AssignStmt = 77,                /* AssignStmt  */
  YYSYMBOL_AssignBody = 78,                /* AssignBody  */
  YYSYMBOL_79_7 = 79,                      /* $@7  */
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_81_9 = 81,                      /* $@9  */
  YYSYMBOL_Assign = 82,                    /* Assign  */
  YYSYMBOL_Assignable = 83,                /* Assignable  */
  YYSYMBOL_DefineVariableStmt = 84,        /* DefineVariableStmt  */
  YYSYMBOL_DeclaratorList = 85,            /* DeclaratorList  */
  YYSYMBOL_Declarator = 86,                /* Declarator  */
  YYSYMBOL_ArrayEles = 87,                 /* ArrayEles  */
  YYSYMBOL_ReturnStmt = 88,                /* ReturnStmt  */
  YYSYMBOL_CoutStmt = 89,                  /* CoutStmt  */
  YYSYMBOL_90_10 = 90,                     /* $@10  */
  YYSYMBOL_PrintableList = 91,             /* PrintableList  */
  YYSYMBOL_Printable = 92,                 /* Printable  */
  YYSYMBOL_Expression = 93,                /* Expression  */
  YYSYMBOL_Or = 94,                        /* Or  */
  YYSYMBOL_And = 95,                       /* And  */
  YYSYMBOL_BitwiseOr = 96,                 /* BitwiseOr  */
  YYSYMBOL_BitwiseXor = 97,                /* BitwiseXor  */
  YYSYMBOL_BitwiseAnd = 98,                /* BitwiseAnd  */
  YYSYMBOL_Equality = 99,                  /* Equality  */
  YYSYMBOL_Relational = 100,               /* Relational  */
  YYSYMBOL_Shift = 101,                    /* Shift  */
  YYSYMBOL_Additive = 102,                 /* Additive  */
  YYSYMBOL_Multiplicative = 103,           /* Multiplicative  */
  YYSYMBOL_TypeCast = 104,                 /* TypeCast  */
  YYSYMBOL_Unary = 105,                    /* Unary  */
  YYSYMBOL_Post = 106,                     /* Post  */
  YYSYMBOL_Primary = 107,                  /* Primary  */
  YYSYMBOL_FunctionCall = 108,             /* FunctionCall  */
  YYSYMBOL_ArgumentList = 109,             /* ArgumentList  */
  YYSYMBOL_ArgumentListNonEmpty = 110,     /* ArgumentListNonEmpty  */
  YYSYMBOL_FunctionDefStmt = 111,          /* FunctionDefStmt  */
  YYSYMBOL_112_11 = 112,                   /* $@11  */
  YYSYMBOL_113_12 = 113,                   /* $@12  */
  YYSYMBOL_114_13 = 114,                   /* $@13  */
  YYSYMBOL_FunctionParameterStmtList = 115, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 116,    /* FunctionParameterStmt  */
  YYSYMBOL_117_14 = 117,                   /* $@14  */
  YYSYMBOL_118_15 = 118                    /* $@15  */
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
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

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
      73,    74,    75,    76,    77,    78,    79,    84,    89,    96,
      96,    96,    97,    97,   101,   102,   111,   112,   113,   114,
     115,   120,   126,   126,   127,   127,   133,   137,   137,   138,
     138,   141,   141,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   163,   167,   172,   176,   177,
     181,   182,   186,   190,   194,   202,   203,   204,   209,   210,
     215,   215,   220,   221,   226,   228,   229,   239,   241,   245,
     246,   252,   253,   257,   258,   262,   263,   267,   268,   272,
     273,   274,   278,   279,   281,   283,   285,   290,   291,   296,
     297,   299,   304,   305,   306,   307,   312,   313,   320,   323,
     326,   329,   332,   336,   337,   338,   342,   347,   352,   356,
     361,   367,   368,   374,   385,   395,   399,   400,   406,   408,
     410,   406,   417,   418,   419,   423,   423,   424,   424
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
  "CompoundStmt", "SelectionStmt", "$@5", "$@6", "AssignStmt",
  "AssignBody", "$@7", "$@8", "$@9", "Assign", "Assignable",
  "DefineVariableStmt", "DeclaratorList", "Declarator", "ArrayEles",
  "ReturnStmt", "CoutStmt", "$@10", "PrintableList", "Printable",
  "Expression", "Or", "And", "BitwiseOr", "BitwiseXor", "BitwiseAnd",
  "Equality", "Relational", "Shift", "Additive", "Multiplicative",
  "TypeCast", "Unary", "Post", "Primary", "FunctionCall", "ArgumentList",
  "ArgumentListNonEmpty", "FunctionDefStmt", "$@11", "$@12", "$@13",
  "FunctionParameterStmtList", "FunctionParameterStmt", "$@14", "$@15", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-138)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    51,   203,  -132,  -132,    26,  -132,  -132,   302,    25,
     203,    35,    -3,   203,  -132,  -132,  -132,  -132,  -132,    62,
    -132,    65,  -132,  -132,  -132,    77,  -132,   115,   114,    72,
      75,  -132,     5,  -132,  -132,  -132,  -132,   221,   334,   334,
     334,   334,    93,   117,   120,   135,   137,   168,    82,    21,
     139,     3,   100,  -132,  -132,  -132,    97,  -132,  -132,     7,
      10,   -13,  -132,   114,   114,   272,  -132,  -132,  -132,  -132,
     314,   138,   262,   114,   114,   142,   147,   114,  -132,  -132,
    -132,  -132,  -132,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
    -132,  -132,  -132,   324,   114,   124,  -132,   131,  -132,   149,
     133,   132,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,  -132,  -132,  -132,  -132,   203,  -132,  -132,
       0,  -132,  -132,  -132,  -132,   150,    76,   153,   287,  -132,
    -132,   154,   158,   143,   334,  -132,   120,   135,   137,   168,
      82,    21,    21,   139,   139,   139,   139,     3,   100,   100,
    -132,  -132,  -132,  -132,   144,  -132,    19,  -132,  -132,   114,
     146,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,   314,  -132,   203,    12,   114,   203,   131,
     287,  -132,  -132,   148,  -132,    40,   155,  -132,   114,   272,
    -132,  -132,   161,   157,  -132,  -132,   203,   114,   174,   114,
     171,   -28,  -132,   162,  -132,  -132,   140,  -132,   165,   324,
     166,   170,  -132,   155,  -132,   114,  -132,  -132,    20,  -132,
    -132,   172,   183,  -132,   272,   175,  -132,   324,   177,   203,
    -132,   246,  -132,  -132,   176,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    70,     0,    22,    19,     0,     0,
       0,     0,    37,     3,     6,    16,    15,    14,    12,    13,
      11,     0,     7,    10,     9,     0,     8,     0,     0,     0,
       0,    69,   120,   119,   116,   117,    78,     0,     0,     0,
       0,     0,     0,    77,    79,    81,    83,    85,    87,    89,
      92,    97,    99,   102,   106,   112,   113,   121,    18,     0,
      60,     0,    58,     0,     0,     0,     5,    34,    36,    17,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
     108,   109,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,    31,     0,     0,     0,    57,     0,   126,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    38,    43,    56,     0,    75,    74,
       0,    72,    76,    32,    30,     0,    37,     0,     0,    28,
      27,    29,     0,     0,     0,   118,    80,    82,    84,    86,
      88,    90,    91,    94,    93,    96,    95,    98,   101,   100,
     103,   104,   105,    61,     0,   129,    60,    59,   124,     0,
      39,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,     0,    71,     0,    60,     0,     0,     0,
       0,    26,    20,   122,   107,    62,   134,   127,     0,     0,
      73,    33,     0,     0,    23,    24,     0,     0,     0,     0,
       0,     0,   133,     0,    40,    25,    39,    21,     0,    67,
       0,   135,   130,     0,    41,     0,   123,    65,     0,    63,
     136,     0,     0,   132,     0,     0,    64,     0,     0,     0,
      42,    41,    66,   138,     0,   131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,    -8,   -12,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -131,  -132,  -132,  -132,  -132,  -132,   -68,  -132,
    -132,  -132,   -99,  -100,   -66,  -132,   121,  -132,  -132,  -132,
    -132,  -132,    47,     1,  -132,   151,   159,   194,   160,   164,
      43,    11,   186,    45,    15,   -14,  -132,  -132,    -2,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,    24,  -132,  -132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    13,    14,    15,    16,    17,    30,   206,
      29,   137,   138,    18,    19,   185,   127,    20,    21,    65,
     199,   234,   124,   125,    22,    61,    62,   228,    23,    24,
      27,   130,   131,   126,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   109,
     110,    26,   105,   196,   232,   211,   212,   230,   231
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    66,    59,   163,   139,   183,   140,   190,    25,    42,
       4,    25,   222,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    78,    79,    80,    81,   106,    71,
     103,   223,   103,    90,    91,    92,    93,    -4,    76,   103,
       5,   184,     6,     7,     8,     9,   107,    66,    63,    10,
     102,     3,    11,    12,    64,    95,    63,    25,    96,   205,
     208,  -128,    74,   236,   108,   111,    58,   104,   202,   104,
     139,   132,   140,   141,   142,   143,   104,    28,    76,   237,
    -120,    60,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,    67,   209,    88,    89,
     214,   153,   154,   155,   156,   164,    68,  -120,  -120,    97,
      98,    99,   160,   161,   162,   182,  -120,  -120,    69,   227,
      70,  -120,   139,    72,   140,    25,    73,    63,   100,   101,
     194,   151,   152,   187,    82,   240,    83,   242,    84,   141,
     158,   159,    85,    94,  -122,    86,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     197,  -122,  -122,   201,    87,   165,   204,   166,   133,     4,
    -122,  -122,   144,    25,   132,  -122,    25,   145,   203,   168,
     170,   141,   169,   188,   217,   191,   186,   225,   192,   213,
     210,   193,   195,   198,    25,   207,     4,   215,   218,     5,
     220,     6,     7,     8,     9,   216,   219,   221,    10,   245,
     224,    11,    12,   226,   229,   239,   235,  -137,   167,   238,
     200,   244,    66,   241,   146,   243,     5,    25,     6,     7,
       8,     9,    25,   147,     0,    10,   149,   233,    11,    12,
    -123,   150,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,    75,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,  -123,  -123,   148,
     157,     0,     0,     0,     0,     0,  -123,  -123,     0,     0,
       0,  -123,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   134,     0,     0,     0,   135,   136,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    32,    33,
      34,    35,   123,    37,    38,    39,    40,    41,   134,     0,
       0,     0,   189,   136,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    31,     0,     0,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   128,     0,
      32,    33,    34,    35,   129,    37,    38,    39,    40,    41,
      32,    33,    34,    35,   123,    37,    38,    39,    40,    41,
      32,    33,    34,    35,     0,    77,    38,    39,    40,    41,
      32,    33,    34,    35,     0,    37,    38,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       2,    13,    10,   103,    72,     5,    72,   138,    10,     8,
       3,    13,    40,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    38,    39,    40,    41,    41,    28,
      20,    59,    20,    12,    13,    14,    15,     0,    37,    20,
      33,    41,    35,    36,    37,    38,    59,    59,    51,    42,
      43,     0,    45,    46,    57,    52,    51,    59,    55,   190,
      20,    51,    57,    43,    63,    64,    41,    57,    56,    57,
     138,    70,   138,    72,    73,    74,    57,    51,    77,    59,
       4,    46,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    34,    57,    16,    17,
     199,    90,    91,    92,    93,   104,    41,    31,    32,     9,
      10,    11,    97,    98,    99,   127,    40,    41,    41,   219,
       5,    45,   190,    51,   190,   127,    51,    51,    31,    32,
     144,    88,    89,    57,    41,   234,    19,   237,    18,   138,
      95,    96,     7,     4,     4,     8,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     169,    31,    32,   185,     6,    51,   188,    46,    40,     3,
      40,    41,    40,   185,   183,    45,   188,    40,   187,    40,
      58,   190,    59,    40,   206,    41,    46,    57,    40,   198,
      45,    58,    58,    57,   206,    57,     3,    46,   207,    33,
     209,    35,    36,    37,    38,    58,    42,    46,    42,    43,
      58,    45,    46,    58,    58,    42,   225,    57,   107,    57,
     183,   239,   244,    58,    83,    58,    33,   239,    35,    36,
      37,    38,   244,    84,    -1,    42,    86,   223,    45,    46,
       4,    87,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    31,    32,    85,
      94,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    61,    62,     0,     3,    33,    35,    36,    37,    38,
      42,    45,    46,    63,    64,    65,    66,    67,    73,    74,
      77,    78,    84,    88,    89,   108,   111,    90,    51,    70,
      68,    41,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    41,    63,
      46,    85,    86,    51,    57,    79,    64,    34,    41,    41,
       5,    93,    51,    51,    57,    45,    93,    51,   105,   105,
     105,   105,    41,    19,    18,     7,     8,     6,    16,    17,
      12,    13,    14,    15,     4,    52,    55,     9,    10,    11,
      31,    32,    43,    20,    57,   112,    41,    59,    93,   109,
     110,    93,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    50,    82,    83,    93,    76,    44,    50,
      91,    92,    93,    40,    41,    45,    46,    71,    72,    78,
      84,    93,    93,    93,    40,    40,    95,    96,    97,    98,
      99,   100,   100,   101,   101,   101,   101,   102,   103,   103,
     104,   104,   104,    83,    93,    51,    46,    86,    40,    59,
      58,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    64,     5,    41,    75,    46,    57,    40,    45,
      72,    41,    40,    58,   105,    58,   113,    93,    57,    80,
      92,    64,    56,    93,    64,    72,    69,    57,    20,    57,
      45,   115,   116,    93,    82,    46,    58,    64,    93,    42,
      93,    46,    40,    59,    58,    57,    58,    83,    87,    58,
     117,   118,   114,   116,    81,    93,    43,    59,    57,    42,
      82,    58,    83,    58,    63,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    61,    61,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    66,    68,
      69,    67,    70,    67,    71,    71,    72,    72,    72,    72,
      72,    73,    75,    74,    76,    74,    77,    79,    78,    80,
      78,    81,    78,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    85,    85,
      86,    86,    86,    86,    86,    87,    87,    87,    88,    88,
      90,    89,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   102,   103,   103,   103,   103,   104,   104,   105,   105,
     105,   105,   105,   106,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   109,   110,   110,   112,   113,
     114,   111,   115,   115,   115,   117,   116,   118,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       0,     7,     0,     6,     3,     4,     2,     1,     1,     1,
       1,     3,     0,     6,     0,     4,     2,     0,     3,     0,
       6,     0,     9,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     3,     1,     3,
       1,     3,     4,     7,     8,     1,     3,     0,     3,     2,
       0,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     2,     2,
       2,     2,     1,     1,     2,     2,     1,     1,     3,     1,
       1,     1,     4,     7,     4,     1,     1,     3,     0,     0,
       0,    11,     3,     1,     0,     0,     3,     0,     5
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
#line 1392 "./build/y.tab.c"
    break;

  case 3: /* Program: $@1 GlobalStmtList  */
#line 60 "./compiler.y"
                                      { dumpScope(); }
#line 1398 "./build/y.tab.c"
    break;

  case 18: /* JumpStmt: BREAK ';'  */
#line 89 "./compiler.y"
                    {
		printf("BREAK\n");
	}
#line 1406 "./build/y.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 96 "./compiler.y"
                {printf("WHILE\n");}
#line 1412 "./build/y.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 96 "./compiler.y"
                                                        {pushScope();}
#line 1418 "./build/y.tab.c"
    break;

  case 21: /* IterationStmt: WHILE $@2 '(' Expression ')' $@3 GlobalStmt  */
#line 96 "./compiler.y"
                                                                                  {dumpScope();}
#line 1424 "./build/y.tab.c"
    break;

  case 22: /* $@4: %empty  */
#line 97 "./compiler.y"
              {printf("FOR\n"); pushScope();}
#line 1430 "./build/y.tab.c"
    break;

  case 23: /* IterationStmt: FOR $@4 '(' ForCondition ')' GlobalStmt  */
#line 97 "./compiler.y"
                                                                              {dumpScope();}
#line 1436 "./build/y.tab.c"
    break;

  case 25: /* ForCondition: VARIABLE_T IDENT ':' IDENT  */
#line 102 "./compiler.y"
                                     {
		//printf("%d\n", $<var_type>1);
		insert((yyvsp[-2].s_var), getVarTypeByName((yyvsp[0].s_var)), 1);
		printIDByName((yyvsp[0].s_var), 'v');		
		//insertAuto($<s_var>2, $<var_type>1, $<object_val>3.type, 1);} 
	}
#line 1447 "./build/y.tab.c"
    break;

  case 32: /* $@5: %empty  */
#line 126 "./compiler.y"
                               { printf("IF\n"); pushScope(); }
#line 1453 "./build/y.tab.c"
    break;

  case 33: /* SelectionStmt: IF '(' Expression ')' $@5 GlobalStmt  */
#line 126 "./compiler.y"
                                                                           {dumpScope();}
#line 1459 "./build/y.tab.c"
    break;

  case 34: /* $@6: %empty  */
#line 127 "./compiler.y"
                             {printf("ELSE\n"); pushScope();}
#line 1465 "./build/y.tab.c"
    break;

  case 35: /* SelectionStmt: SelectionStmt ELSE $@6 GlobalStmt  */
#line 127 "./compiler.y"
                                                                         {dumpScope();}
#line 1471 "./build/y.tab.c"
    break;

  case 37: /* $@7: %empty  */
#line 137 "./compiler.y"
                { printIDByName((yyvsp[0].s_var), 'v');}
#line 1477 "./build/y.tab.c"
    break;

  case 38: /* AssignBody: IDENT $@7 Assign  */
#line 137 "./compiler.y"
                                                         {(yyvsp[-3].object_val).type = OBJECT_TYPE_BOOL;}
#line 1483 "./build/y.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 138 "./compiler.y"
                                   {
		printIDByName((yyvsp[-3].s_var), 'v');
	}
#line 1491 "./build/y.tab.c"
    break;

  case 40: /* AssignBody: IDENT '[' Expression ']' $@8 Assign  */
#line 140 "./compiler.y"
                 {(yyvsp[-6].object_val).type = OBJECT_TYPE_BOOL;}
#line 1497 "./build/y.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 141 "./compiler.y"
                                                      {
		printIDByName((yyvsp[-6].s_var), 'v');
	}
#line 1505 "./build/y.tab.c"
    break;

  case 42: /* AssignBody: IDENT '[' Expression ']' '[' Expression ']' $@9 Assign  */
#line 143 "./compiler.y"
                 {(yyvsp[-9].object_val).type = OBJECT_TYPE_BOOL;}
#line 1511 "./build/y.tab.c"
    break;

  case 44: /* Assign: VAL_ASSIGN Assign  */
#line 148 "./compiler.y"
                           {printf("EQL_ASSIGN\n");}
#line 1517 "./build/y.tab.c"
    break;

  case 45: /* Assign: ADD_ASSIGN Assign  */
#line 149 "./compiler.y"
                           {printf("ADD_ASSIGN\n");}
#line 1523 "./build/y.tab.c"
    break;

  case 46: /* Assign: SUB_ASSIGN Assign  */
#line 150 "./compiler.y"
                           {printf("SUB_ASSIGN\n");}
#line 1529 "./build/y.tab.c"
    break;

  case 47: /* Assign: MUL_ASSIGN Assign  */
#line 151 "./compiler.y"
                           {printf("MUL_ASSIGN\n");}
#line 1535 "./build/y.tab.c"
    break;

  case 48: /* Assign: DIV_ASSIGN Assign  */
#line 152 "./compiler.y"
                           {printf("DIV_ASSIGN\n");}
#line 1541 "./build/y.tab.c"
    break;

  case 49: /* Assign: REM_ASSIGN Assign  */
#line 153 "./compiler.y"
                           {printf("REM_ASSIGN\n");}
#line 1547 "./build/y.tab.c"
    break;

  case 50: /* Assign: BAN_ASSIGN Assign  */
#line 154 "./compiler.y"
                           {printf("BAN_ASSIGN\n");}
#line 1553 "./build/y.tab.c"
    break;

  case 51: /* Assign: BOR_ASSIGN Assign  */
#line 155 "./compiler.y"
                           {printf("BOR_ASSIGN\n");}
#line 1559 "./build/y.tab.c"
    break;

  case 52: /* Assign: BXO_ASSIGN Assign  */
#line 156 "./compiler.y"
                           {printf("BXO_ASSIGN\n");}
#line 1565 "./build/y.tab.c"
    break;

  case 53: /* Assign: SHR_ASSIGN Assign  */
#line 157 "./compiler.y"
                           {printf("SHR_ASSIGN\n");}
#line 1571 "./build/y.tab.c"
    break;

  case 54: /* Assign: SHL_ASSIGN Assign  */
#line 158 "./compiler.y"
                           {printf("SHL_ASSIGN\n");}
#line 1577 "./build/y.tab.c"
    break;

  case 55: /* Assignable: STR_LIT  */
#line 163 "./compiler.y"
                           {
		(yyvsp[-1].object_val).type = OBJECT_TYPE_STR;
		printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));
	}
#line 1586 "./build/y.tab.c"
    break;

  case 57: /* DefineVariableStmt: VARIABLE_T DeclaratorList ';'  */
#line 172 "./compiler.y"
                                         {typeSet(false);}
#line 1592 "./build/y.tab.c"
    break;

  case 60: /* Declarator: IDENT  */
#line 181 "./compiler.y"
                {insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 0);}
#line 1598 "./build/y.tab.c"
    break;

  case 61: /* Declarator: IDENT VAL_ASSIGN Assignable  */
#line 182 "./compiler.y"
                                      {
		//printf("\n%d\n", $<object_val>0.type);
		//printf("\n\n");
		insertAuto((yyvsp[-2].s_var), (yyvsp[-3].var_type), (yyvsp[-1].var_type), 0);}
#line 1607 "./build/y.tab.c"
    break;

  case 62: /* Declarator: IDENT '[' Expression ']'  */
#line 186 "./compiler.y"
                                   {
		printf("create array: %d\n", 0);
		insert((yyvsp[-3].s_var), (yyvsp[-4].var_type), 0);
	}
#line 1616 "./build/y.tab.c"
    break;

  case 63: /* Declarator: IDENT '[' Expression ']' '[' Expression ']'  */
#line 190 "./compiler.y"
                                                      {
		//printf("create array: %d\n", 0);
		insert((yyvsp[-6].s_var), (yyvsp[-7].var_type), 0);
	}
#line 1625 "./build/y.tab.c"
    break;

  case 64: /* Declarator: IDENT '[' Expression ']' VAL_ASSIGN '{' ArrayEles '}'  */
#line 194 "./compiler.y"
                                                                {
		printf("create array: %d\n", arrayFun('g'));
		arrayFun('r');
		insert((yyvsp[-7].s_var), (yyvsp[-8].var_type), 0);
	}
#line 1635 "./build/y.tab.c"
    break;

  case 65: /* ArrayEles: Assignable  */
#line 202 "./compiler.y"
                     {arrayFun('c');}
#line 1641 "./build/y.tab.c"
    break;

  case 66: /* ArrayEles: ArrayEles ',' Assignable  */
#line 203 "./compiler.y"
                                   {arrayFun('c');}
#line 1647 "./build/y.tab.c"
    break;

  case 68: /* ReturnStmt: RETURN Expression ';'  */
#line 209 "./compiler.y"
                            {printf("RETURN\n");}
#line 1653 "./build/y.tab.c"
    break;

  case 69: /* ReturnStmt: RETURN ';'  */
#line 210 "./compiler.y"
                 {printf("RETURN\n");}
#line 1659 "./build/y.tab.c"
    break;

  case 70: /* $@10: %empty  */
#line 215 "./compiler.y"
               {addMsg("cout");}
#line 1665 "./build/y.tab.c"
    break;

  case 71: /* CoutStmt: COUT $@10 SHL PrintableList ';'  */
#line 215 "./compiler.y"
                                                       { addMsg("\n"); printMsg(); }
#line 1671 "./build/y.tab.c"
    break;

  case 74: /* Printable: STR_LIT  */
#line 226 "./compiler.y"
              { addMsg(" string");
				printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); }
#line 1678 "./build/y.tab.c"
    break;

  case 75: /* Printable: ENDL  */
#line 228 "./compiler.y"
           { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
#line 1684 "./build/y.tab.c"
    break;

  case 76: /* Printable: Expression  */
#line 229 "./compiler.y"
                     {
					addMsg(" ");
					addMsgObj(&(yyvsp[-1].object_val));
	}
#line 1693 "./build/y.tab.c"
    break;

  case 78: /* Expression: STR_LIT  */
#line 241 "./compiler.y"
                  {printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));}
#line 1699 "./build/y.tab.c"
    break;

  case 80: /* Or: Or LOR And  */
#line 246 "./compiler.y"
                    {
				// here is correct
				objectExpBoolean('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1707 "./build/y.tab.c"
    break;

  case 82: /* And: And LAN BitwiseOr  */
#line 253 "./compiler.y"
                           {objectExpBoolean('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1713 "./build/y.tab.c"
    break;

  case 84: /* BitwiseOr: BitwiseOr BOR BitwiseXor  */
#line 258 "./compiler.y"
                                  {objectExpBinary('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1719 "./build/y.tab.c"
    break;

  case 86: /* BitwiseXor: BitwiseXor BXO BitwiseAnd  */
#line 263 "./compiler.y"
                                   {objectExpBinary('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1725 "./build/y.tab.c"
    break;

  case 88: /* BitwiseAnd: BitwiseAnd BAN Equality  */
#line 268 "./compiler.y"
                                 {objectExpBinary('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1731 "./build/y.tab.c"
    break;

  case 90: /* Equality: Equality EQL Relational  */
#line 273 "./compiler.y"
                                 {objectExpBoolean('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1737 "./build/y.tab.c"
    break;

  case 91: /* Equality: Equality NEQ Relational  */
#line 274 "./compiler.y"
                                 {objectExpBoolean('4', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1743 "./build/y.tab.c"
    break;

  case 93: /* Relational: Relational LES Shift  */
#line 279 "./compiler.y"
                              {printf("LES\n");}
#line 1749 "./build/y.tab.c"
    break;

  case 94: /* Relational: Relational GTR Shift  */
#line 281 "./compiler.y"
                              {printf("GTR\n");}
#line 1755 "./build/y.tab.c"
    break;

  case 95: /* Relational: Relational LEQ Shift  */
#line 283 "./compiler.y"
                              {printf("LEQ\n");}
#line 1761 "./build/y.tab.c"
    break;

  case 96: /* Relational: Relational GEQ Shift  */
#line 285 "./compiler.y"
                              {printf("GEQ\n");}
#line 1767 "./build/y.tab.c"
    break;

  case 98: /* Shift: Shift SHR Additive  */
#line 291 "./compiler.y"
                            {printf("SHR\n");}
#line 1773 "./build/y.tab.c"
    break;

  case 100: /* Additive: Additive ADD Multiplicative  */
#line 297 "./compiler.y"
                                     {printf("ADD\n");}
#line 1779 "./build/y.tab.c"
    break;

  case 101: /* Additive: Additive SUB Multiplicative  */
#line 299 "./compiler.y"
                                     {printf("SUB\n");}
#line 1785 "./build/y.tab.c"
    break;

  case 103: /* Multiplicative: Multiplicative MUL TypeCast  */
#line 305 "./compiler.y"
                                     {printf("MUL\n");}
#line 1791 "./build/y.tab.c"
    break;

  case 104: /* Multiplicative: Multiplicative DIV TypeCast  */
#line 306 "./compiler.y"
                                     {printf("DIV\n");}
#line 1797 "./build/y.tab.c"
    break;

  case 105: /* Multiplicative: Multiplicative REM TypeCast  */
#line 307 "./compiler.y"
                                     {printf("REM\n");}
#line 1803 "./build/y.tab.c"
    break;

  case 107: /* TypeCast: '(' VARIABLE_T ')' Unary  */
#line 313 "./compiler.y"
                                   {
		(yyvsp[-4].object_val).type = (yyvsp[-2].var_type);
		printCastInfo((yyvsp[-2].var_type));
	}
#line 1812 "./build/y.tab.c"
    break;

  case 108: /* Unary: BNT Unary  */
#line 320 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("BNT\n");}
#line 1820 "./build/y.tab.c"
    break;

  case 109: /* Unary: ADD Unary  */
#line 323 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("ADD\n");}
#line 1828 "./build/y.tab.c"
    break;

  case 110: /* Unary: SUB Unary  */
#line 326 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NEG\n");}
#line 1836 "./build/y.tab.c"
    break;

  case 111: /* Unary: NOT Unary  */
#line 329 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NOT\n");}
#line 1844 "./build/y.tab.c"
    break;

  case 114: /* Post: Primary INC_ASSIGN  */
#line 337 "./compiler.y"
                             {printf("INC_ASSIGN\n");}
#line 1850 "./build/y.tab.c"
    break;

  case 115: /* Post: Primary DEC_ASSIGN  */
#line 338 "./compiler.y"
                             {printf("DEC_ASSIGN\n");}
#line 1856 "./build/y.tab.c"
    break;

  case 116: /* Primary: INT_LIT  */
#line 342 "./compiler.y"
             {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_INT;
			//$<object_val>0.value = $<i_var>1;
			printf("INT_LIT %d\n", (yyvsp[0].i_var));
		}
#line 1866 "./build/y.tab.c"
    break;

  case 117: /* Primary: FLOAT_LIT  */
#line 347 "./compiler.y"
                    {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_FLOAT;
			//$<object_val>0.value = 0;
			printf("FLOAT_LIT %f\n", (yyvsp[0].f_var));
		}
#line 1876 "./build/y.tab.c"
    break;

  case 118: /* Primary: '(' Expression ')'  */
#line 352 "./compiler.y"
                         {
			(yyvsp[-3].object_val).type = (yyvsp[-2].object_val).type;
			//$<object_val>0.value = $<i_var>1;
		}
#line 1885 "./build/y.tab.c"
    break;

  case 119: /* Primary: BOOL_LIT  */
#line 356 "./compiler.y"
                   {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_BOOL; 
			//$<object_val>0.value = (int64_t)$<b_var>1;
			printBool((yyvsp[0].b_var));
		}
#line 1895 "./build/y.tab.c"
    break;

  case 120: /* Primary: IDENT  */
#line 361 "./compiler.y"
                {
			ObjectType type = getVarTypeByName((yyvsp[0].s_var));
			(yyvsp[-1].object_val).type = type;
			//$<object_val>0.value = 0;
			printIDByName((yyvsp[0].s_var), 'v');
		}
#line 1906 "./build/y.tab.c"
    break;

  case 122: /* Primary: IDENT '[' Expression ']'  */
#line 368 "./compiler.y"
                                   {
			ObjectType type = getVarTypeByName((yyvsp[-3].s_var));
			(yyvsp[-4].object_val).type = type;
			//$<object_val>0.value = 0;
			printIDByName((yyvsp[-3].s_var), 'v');
	}
#line 1917 "./build/y.tab.c"
    break;

  case 123: /* Primary: IDENT '[' Expression ']' '[' Expression ']'  */
#line 374 "./compiler.y"
                                                      {
		ObjectType type = getVarTypeByName((yyvsp[-6].s_var));
		(yyvsp[-7].object_val).type = type;
		//$<object_val>0.value = 0;
		printIDByName((yyvsp[-6].s_var), 'v');
	}
#line 1928 "./build/y.tab.c"
    break;

  case 124: /* FunctionCall: IDENT '(' ArgumentList ')'  */
#line 385 "./compiler.y"
                                     {
		(yyvsp[-4].object_val).type = getFuncType((yyvsp[-3].s_var));
		printIDByName((yyvsp[-3].s_var), 'f');
		printf("call: %s", (yyvsp[-3].s_var));
		printSigByName((yyvsp[-3].s_var));
		printf("\n");
	}
#line 1940 "./build/y.tab.c"
    break;

  case 128: /* $@11: %empty  */
#line 406 "./compiler.y"
                       {
		createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var));
	}
#line 1948 "./build/y.tab.c"
    break;

  case 129: /* $@12: %empty  */
#line 408 "./compiler.y"
              {
		pushScope();
	}
#line 1956 "./build/y.tab.c"
    break;

  case 130: /* $@13: %empty  */
#line 410 "./compiler.y"
                                        {
		setFuncSig((yyvsp[-5].s_var), (yyvsp[-6].var_type));
	}
#line 1964 "./build/y.tab.c"
    break;

  case 131: /* FunctionDefStmt: VARIABLE_T IDENT $@11 '(' $@12 FunctionParameterStmtList ')' $@13 '{' GlobalStmtList '}'  */
#line 412 "./compiler.y"
                                 {
		dumpScope();
	}
#line 1972 "./build/y.tab.c"
    break;

  case 135: /* $@14: %empty  */
#line 423 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 3); }
#line 1978 "./build/y.tab.c"
    break;

  case 136: /* FunctionParameterStmt: VARIABLE_T IDENT $@14  */
#line 423 "./compiler.y"
                                                               { pushFunParm((yyvsp[-2].var_type), (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); }
#line 1984 "./build/y.tab.c"
    break;

  case 137: /* $@15: %empty  */
#line 424 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 4); }
#line 1990 "./build/y.tab.c"
    break;

  case 138: /* FunctionParameterStmt: VARIABLE_T IDENT $@15 '[' ']'  */
#line 424 "./compiler.y"
                                                                       { pushFunParm((yyvsp[-4].var_type), (yyvsp[-3].s_var), VAR_FLAG_DEFAULT); }
#line 1996 "./build/y.tab.c"
    break;


#line 2000 "./build/y.tab.c"

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

#line 443 "./compiler.y"

/* C code section */
