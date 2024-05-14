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
  YYSYMBOL_CompoundStmt = 65,              /* CompoundStmt  */
  YYSYMBOL_SelectionStmt = 66,             /* SelectionStmt  */
  YYSYMBOL_67_3 = 67,                      /* $@3  */
  YYSYMBOL_68_4 = 68,                      /* $@4  */
  YYSYMBOL_AssignStmt = 69,                /* AssignStmt  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_Assign = 71,                    /* Assign  */
  YYSYMBOL_Assignable = 72,                /* Assignable  */
  YYSYMBOL_DefineVariableStmt = 73,        /* DefineVariableStmt  */
  YYSYMBOL_DeclaratorList = 74,            /* DeclaratorList  */
  YYSYMBOL_Declarator = 75,                /* Declarator  */
  YYSYMBOL_ReturnStmt = 76,                /* ReturnStmt  */
  YYSYMBOL_CoutStmt = 77,                  /* CoutStmt  */
  YYSYMBOL_78_6 = 78,                      /* $@6  */
  YYSYMBOL_PrintableList = 79,             /* PrintableList  */
  YYSYMBOL_Printable = 80,                 /* Printable  */
  YYSYMBOL_Expression = 81,                /* Expression  */
  YYSYMBOL_Or = 82,                        /* Or  */
  YYSYMBOL_And = 83,                       /* And  */
  YYSYMBOL_BitwiseOr = 84,                 /* BitwiseOr  */
  YYSYMBOL_BitwiseXor = 85,                /* BitwiseXor  */
  YYSYMBOL_BitwiseAnd = 86,                /* BitwiseAnd  */
  YYSYMBOL_Equality = 87,                  /* Equality  */
  YYSYMBOL_Relational = 88,                /* Relational  */
  YYSYMBOL_Shift = 89,                     /* Shift  */
  YYSYMBOL_Additive = 90,                  /* Additive  */
  YYSYMBOL_Multiplicative = 91,            /* Multiplicative  */
  YYSYMBOL_TypeCast = 92,                  /* TypeCast  */
  YYSYMBOL_Unary = 93,                     /* Unary  */
  YYSYMBOL_Primary = 94,                   /* Primary  */
  YYSYMBOL_FunctionDefStmt = 95,           /* FunctionDefStmt  */
  YYSYMBOL_96_7 = 96,                      /* $@7  */
  YYSYMBOL_97_8 = 97,                      /* $@8  */
  YYSYMBOL_FunctionParameterStmtList = 98, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 99,     /* FunctionParameterStmt  */
  YYSYMBOL_100_9 = 100,                    /* $@9  */
  YYSYMBOL_101_10 = 101                    /* $@10  */
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
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

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
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    59,    59,    64,    65,    69,    70,    71,
      72,    73,    74,    75,    76,    80,    84,    84,    85,    85,
      91,    91,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   112,   113,   118,   122,
     123,   127,   128,   133,   138,   138,   143,   144,   149,   151,
     152,   162,   166,   167,   173,   174,   178,   179,   183,   184,
     188,   189,   193,   194,   195,   199,   200,   202,   204,   206,
     211,   212,   217,   218,   220,   225,   226,   227,   228,   233,
     234,   241,   244,   247,   250,   253,   257,   261,   265,   268,
     272,   305,   305,   305,   308,   309,   310,   314,   314,   315,
     315
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
  "GlobalStmtList", "GlobalStmt", "CompoundStmt", "SelectionStmt", "$@3",
  "$@4", "AssignStmt", "$@5", "Assign", "Assignable", "DefineVariableStmt",
  "DeclaratorList", "Declarator", "ReturnStmt", "CoutStmt", "$@6",
  "PrintableList", "Printable", "Expression", "Or", "And", "BitwiseOr",
  "BitwiseXor", "BitwiseAnd", "Equality", "Relational", "Shift",
  "Additive", "Multiplicative", "TypeCast", "Unary", "Primary",
  "FunctionDefStmt", "$@7", "$@8", "FunctionParameterStmtList",
  "FunctionParameterStmt", "$@9", "$@10", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,    13,     5,   -53,   -53,   -12,    36,     5,     3,   -53,
       5,   -53,   -53,    34,   -53,   -53,   -53,   -53,   -53,   101,
      36,   -53,   -53,   -53,   -53,    72,    97,    97,    97,    97,
      81,   119,   121,   133,   139,   147,    20,    10,   150,   -41,
      19,   -53,   -53,   -53,   112,    -5,   -29,   -53,    49,   -53,
     -53,   -53,    61,   116,   118,   120,    36,   -53,   -53,   -53,
     -53,   -53,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,   -53,
      82,   108,   -53,   115,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,   -53,   122,   -53,
     -53,     5,   -53,   -53,     4,   -53,   -53,   -53,    97,   -53,
     121,   133,   139,   147,    20,    10,    10,   150,   150,   150,
     150,   -41,    19,    19,   -53,   -53,   -53,   -53,   -53,   142,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    61,   -53,     5,   -53,
     123,   -53,   -53,   124,   -30,   -53,   107,   125,   123,   -53,
     109,     5,   -53,   111,    -2,   -53,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    14,     1,    44,     0,     0,    14,     0,    20,
       3,     6,    12,    13,    11,     7,    10,     9,     8,     0,
       0,    90,    89,    86,    87,     0,     0,     0,     0,     0,
       0,    51,    52,    54,    56,    58,    60,    62,    65,    70,
      72,    75,    79,    85,     0,    41,     0,    39,     0,     4,
       5,    18,     0,     0,     0,     0,     0,    83,    84,    81,
      82,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    22,
      37,    14,    49,    48,     0,    46,    50,    16,     0,    88,
      53,    55,    57,    59,    61,    63,    64,    67,    66,    69,
      68,    71,    74,    73,    76,    77,    78,    42,    92,    41,
      40,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    21,    19,     0,    45,    14,    80,
      96,    47,    17,     0,     0,    95,    97,     0,     0,    98,
       0,    14,    94,     0,     0,   100,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,   -53,    11,    -7,   -53,   -53,   -53,   -53,
     -53,   -53,   -31,    85,   -53,   -53,    88,   -53,   -53,   -53,
     -53,    27,    -4,   -53,   113,   114,   110,   117,   126,    -1,
     -52,   103,    18,   -44,   -22,   -53,   -53,   -53,   -53,   -53,
      21,   -53,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    49,    10,    11,    12,    13,   148,   101,
      14,    48,    98,    99,    15,    46,    47,    16,    17,    19,
     104,   105,   100,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    18,    81,   150,   154,
     155,   159,   160
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,     4,    30,    50,    57,    58,    59,    60,     4,   146,
     157,    74,    82,     3,    75,    80,    53,   117,   118,   119,
     120,    55,    69,    70,    71,    72,   158,    83,    76,    77,
      78,     5,   124,   125,   126,     6,    67,    68,     5,    20,
       7,   166,     6,     8,     9,   147,   -91,     7,   106,    45,
       8,     9,    55,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   115,   116,    51,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    21,    22,    23,    24,   149,    25,    26,    27,
      28,    29,   122,   123,   145,    21,    22,    23,    24,    97,
      25,    26,    27,    28,    29,   102,    52,    21,    22,    23,
      24,   103,    25,    26,    27,    28,    29,    54,    21,    22,
      23,    24,    61,    25,    26,    27,    28,    29,    21,    22,
      23,    24,    97,    25,    26,    27,    28,    29,    62,    63,
      64,   152,   106,    21,    22,    23,    24,    65,    56,    26,
      27,    28,    29,    66,    73,    79,   107,    50,   108,   128,
     109,   129,    80,   144,   -99,   127,   163,   161,   153,   165,
     156,   130,   164,   151,   112,   110,   121,   111,     0,   162,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114
};

static const yytype_int16 yycheck[] =
{
       7,     3,     6,    10,    26,    27,    28,    29,     3,     5,
      40,    52,    41,     0,    55,    20,    20,    69,    70,    71,
      72,    25,    12,    13,    14,    15,    56,    56,     9,    10,
      11,    33,    76,    77,    78,    37,    16,    17,    33,    51,
      42,    43,    37,    45,    46,    41,    51,    42,    52,    46,
      45,    46,    56,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    67,    68,    34,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    46,    47,    48,    49,   108,    51,    52,    53,
      54,    55,    74,    75,   101,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    44,     5,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    45,    46,    47,
      48,    49,    41,    51,    52,    53,    54,    55,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    19,    18,
       7,   148,   146,    46,    47,    48,    49,     8,    51,    52,
      53,    54,    55,     6,     4,    43,    40,   164,    40,    51,
      40,    46,    20,    41,    57,    80,    57,    42,    45,    58,
      46,    83,   161,   146,    64,    62,    73,    63,    -1,   158,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    60,    61,     0,     3,    33,    37,    42,    45,    46,
      63,    64,    65,    66,    69,    73,    76,    77,    95,    78,
      51,    46,    47,    48,    49,    51,    52,    53,    54,    55,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    64,    46,    74,    75,    70,    62,
      64,    34,     5,    81,    45,    81,    51,    93,    93,    93,
      93,    41,    19,    18,     7,     8,     6,    16,    17,    12,
      13,    14,    15,     4,    52,    55,     9,    10,    11,    43,
      20,    96,    41,    56,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    50,    71,    72,
      81,    68,    44,    50,    79,    80,    81,    40,    40,    40,
      83,    84,    85,    86,    87,    88,    88,    89,    89,    89,
      89,    90,    91,    91,    92,    92,    92,    72,    51,    46,
      75,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    41,    64,     5,    41,    67,    93,
      97,    80,    64,    45,    98,    99,    46,    40,    56,   100,
     101,    42,    99,    57,    63,    58,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    62,    60,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    67,    66,    68,    66,
      70,    69,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    78,    77,    79,    79,    80,    80,
      80,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    96,    97,    95,    98,    98,    98,   100,    99,   101,
      99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     6,     0,     4,
       0,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     3,     1,
       3,     1,     3,     3,     0,     5,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     2,     2,     2,     2,     1,     1,     1,     3,     1,
       1,     0,     0,    10,     3,     1,     0,     0,     3,     0,
       5
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
#line 1297 "./build/y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 59 "./compiler.y"
                                      { dumpScope(); }
#line 1303 "./build/y.tab.c"
    break;

  case 4: /* Program: $@1 GlobalStmtList $@2  */
#line 59 "./compiler.y"
                                                       {printScope();}
#line 1309 "./build/y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 84 "./compiler.y"
                               { printf("IF\n"); pushScope(); }
#line 1315 "./build/y.tab.c"
    break;

  case 17: /* SelectionStmt: IF '(' Expression ')' $@3 GlobalStmt  */
#line 84 "./compiler.y"
                                                                           {dumpScope();}
#line 1321 "./build/y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 85 "./compiler.y"
                             {printf("ELSE\n"); pushScope();}
#line 1327 "./build/y.tab.c"
    break;

  case 19: /* SelectionStmt: SelectionStmt ELSE $@4 GlobalStmt  */
#line 85 "./compiler.y"
                                                                         {dumpScope();}
#line 1333 "./build/y.tab.c"
    break;

  case 20: /* $@5: %empty  */
#line 91 "./compiler.y"
                {printIDByName((yyvsp[0].s_var));}
#line 1339 "./build/y.tab.c"
    break;

  case 23: /* Assign: VAL_ASSIGN Assign  */
#line 96 "./compiler.y"
                           {printf("EQL_ASSIGN\n");}
#line 1345 "./build/y.tab.c"
    break;

  case 24: /* Assign: ADD_ASSIGN Assign  */
#line 97 "./compiler.y"
                           {printf("ADD_ASSIGN\n");}
#line 1351 "./build/y.tab.c"
    break;

  case 25: /* Assign: SUB_ASSIGN Assign  */
#line 98 "./compiler.y"
                           {printf("SUB_ASSIGN\n");}
#line 1357 "./build/y.tab.c"
    break;

  case 26: /* Assign: MUL_ASSIGN Assign  */
#line 99 "./compiler.y"
                           {printf("MUL_ASSIGN\n");}
#line 1363 "./build/y.tab.c"
    break;

  case 27: /* Assign: DIV_ASSIGN Assign  */
#line 100 "./compiler.y"
                           {printf("DIV_ASSIGN\n");}
#line 1369 "./build/y.tab.c"
    break;

  case 28: /* Assign: REM_ASSIGN Assign  */
#line 101 "./compiler.y"
                           {printf("REM_ASSIGN\n");}
#line 1375 "./build/y.tab.c"
    break;

  case 29: /* Assign: BAN_ASSIGN Assign  */
#line 102 "./compiler.y"
                           {printf("BAN_ASSIGN\n");}
#line 1381 "./build/y.tab.c"
    break;

  case 30: /* Assign: BOR_ASSIGN Assign  */
#line 103 "./compiler.y"
                           {printf("BOR_ASSIGN\n");}
#line 1387 "./build/y.tab.c"
    break;

  case 31: /* Assign: BXO_ASSIGN Assign  */
#line 104 "./compiler.y"
                           {printf("BXO_ASSIGN\n");}
#line 1393 "./build/y.tab.c"
    break;

  case 32: /* Assign: SHR_ASSIGN Assign  */
#line 105 "./compiler.y"
                           {printf("SHR_ASSIGN\n");}
#line 1399 "./build/y.tab.c"
    break;

  case 33: /* Assign: SHL_ASSIGN Assign  */
#line 106 "./compiler.y"
                           {printf("SHL_ASSIGN\n");}
#line 1405 "./build/y.tab.c"
    break;

  case 34: /* Assign: INC_ASSIGN Assign  */
#line 107 "./compiler.y"
                           {printf("INC_ASSIGN\n");}
#line 1411 "./build/y.tab.c"
    break;

  case 35: /* Assign: DEC_ASSIGN Assign  */
#line 108 "./compiler.y"
                           {printf("DEC_ASSIGN\n");}
#line 1417 "./build/y.tab.c"
    break;

  case 36: /* Assignable: STR_LIT  */
#line 112 "./compiler.y"
                   {printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); }
#line 1423 "./build/y.tab.c"
    break;

  case 38: /* DefineVariableStmt: VARIABLE_T DeclaratorList ';'  */
#line 118 "./compiler.y"
                                         {typeSet(false);}
#line 1429 "./build/y.tab.c"
    break;

  case 41: /* Declarator: IDENT  */
#line 127 "./compiler.y"
                {insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 0);}
#line 1435 "./build/y.tab.c"
    break;

  case 42: /* Declarator: IDENT VAL_ASSIGN Assignable  */
#line 128 "./compiler.y"
                                      {insert((yyvsp[-2].s_var), (yyvsp[-3].var_type), 0);}
#line 1441 "./build/y.tab.c"
    break;

  case 43: /* ReturnStmt: RETURN Expression ';'  */
#line 133 "./compiler.y"
                            {printf("RETURN\n");}
#line 1447 "./build/y.tab.c"
    break;

  case 44: /* $@6: %empty  */
#line 138 "./compiler.y"
               {addMsg("cout");}
#line 1453 "./build/y.tab.c"
    break;

  case 45: /* CoutStmt: COUT $@6 SHL PrintableList ';'  */
#line 138 "./compiler.y"
                                                       { addMsg("\n"); printMsg(); }
#line 1459 "./build/y.tab.c"
    break;

  case 48: /* Printable: STR_LIT  */
#line 149 "./compiler.y"
              { addMsg(" string");
				printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); }
#line 1466 "./build/y.tab.c"
    break;

  case 49: /* Printable: ENDL  */
#line 151 "./compiler.y"
           { addMsg(" string"); printf("IDENT (name=endl, address=-1)\n"); }
#line 1472 "./build/y.tab.c"
    break;

  case 50: /* Printable: Expression  */
#line 152 "./compiler.y"
                     {
					addMsg(" ");
					addMsgObj(&(yyvsp[-1].object_val));
	}
#line 1481 "./build/y.tab.c"
    break;

  case 53: /* Or: Or LOR And  */
#line 167 "./compiler.y"
                    {
				// here is correct
				objectExpBoolean('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1489 "./build/y.tab.c"
    break;

  case 55: /* And: And LAN BitwiseOr  */
#line 174 "./compiler.y"
                           {objectExpBoolean('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1495 "./build/y.tab.c"
    break;

  case 57: /* BitwiseOr: BitwiseOr BOR BitwiseXor  */
#line 179 "./compiler.y"
                                  {objectExpBinary('1', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1501 "./build/y.tab.c"
    break;

  case 59: /* BitwiseXor: BitwiseXor BXO BitwiseAnd  */
#line 184 "./compiler.y"
                                   {objectExpBinary('2', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1507 "./build/y.tab.c"
    break;

  case 61: /* BitwiseAnd: BitwiseAnd BAN Equality  */
#line 189 "./compiler.y"
                                 {objectExpBinary('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1513 "./build/y.tab.c"
    break;

  case 63: /* Equality: Equality EQL Relational  */
#line 194 "./compiler.y"
                                 {objectExpBoolean('3', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1519 "./build/y.tab.c"
    break;

  case 64: /* Equality: Equality NEQ Relational  */
#line 195 "./compiler.y"
                                 {objectExpBoolean('4', &(yyvsp[-2].object_val), &(yyvsp[-1].object_val), &(yyvsp[-3].object_val));}
#line 1525 "./build/y.tab.c"
    break;

  case 66: /* Relational: Relational LES Shift  */
#line 200 "./compiler.y"
                              {printf("LES\n");}
#line 1531 "./build/y.tab.c"
    break;

  case 67: /* Relational: Relational GTR Shift  */
#line 202 "./compiler.y"
                              {printf("GTR\n");}
#line 1537 "./build/y.tab.c"
    break;

  case 68: /* Relational: Relational LEQ Shift  */
#line 204 "./compiler.y"
                              {printf("LEQ\n");}
#line 1543 "./build/y.tab.c"
    break;

  case 69: /* Relational: Relational GEQ Shift  */
#line 206 "./compiler.y"
                              {printf("GEQ\n");}
#line 1549 "./build/y.tab.c"
    break;

  case 71: /* Shift: Shift SHR Additive  */
#line 212 "./compiler.y"
                            {printf("SHR\n");}
#line 1555 "./build/y.tab.c"
    break;

  case 73: /* Additive: Additive ADD Multiplicative  */
#line 218 "./compiler.y"
                                     {printf("ADD\n");}
#line 1561 "./build/y.tab.c"
    break;

  case 74: /* Additive: Additive SUB Multiplicative  */
#line 220 "./compiler.y"
                                     {printf("SUB\n");}
#line 1567 "./build/y.tab.c"
    break;

  case 76: /* Multiplicative: Multiplicative MUL TypeCast  */
#line 226 "./compiler.y"
                                     {printf("MUL\n");}
#line 1573 "./build/y.tab.c"
    break;

  case 77: /* Multiplicative: Multiplicative DIV TypeCast  */
#line 227 "./compiler.y"
                                     {printf("DIV\n");}
#line 1579 "./build/y.tab.c"
    break;

  case 78: /* Multiplicative: Multiplicative REM TypeCast  */
#line 228 "./compiler.y"
                                     {printf("REM\n");}
#line 1585 "./build/y.tab.c"
    break;

  case 80: /* TypeCast: '(' VARIABLE_T ')' Unary  */
#line 234 "./compiler.y"
                                   {
		(yyvsp[-4].object_val).type = (yyvsp[-2].var_type);
		printCastInfo((yyvsp[-2].var_type));
	}
#line 1594 "./build/y.tab.c"
    break;

  case 81: /* Unary: BNT Unary  */
#line 241 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("BNT\n");}
#line 1602 "./build/y.tab.c"
    break;

  case 82: /* Unary: ADD Unary  */
#line 244 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("ADD\n");}
#line 1610 "./build/y.tab.c"
    break;

  case 83: /* Unary: SUB Unary  */
#line 247 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NEG\n");}
#line 1618 "./build/y.tab.c"
    break;

  case 84: /* Unary: NOT Unary  */
#line 250 "./compiler.y"
                   {
				//$<object_val>0.type = $<object_val>2.type;
				printf("NOT\n");}
#line 1626 "./build/y.tab.c"
    break;

  case 86: /* Primary: INT_LIT  */
#line 257 "./compiler.y"
             {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_INT;
			printf("INT_LIT %d\n", (yyvsp[0].i_var));
		}
#line 1635 "./build/y.tab.c"
    break;

  case 87: /* Primary: FLOAT_LIT  */
#line 261 "./compiler.y"
                    {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_FLOAT;
			printf("FLOAT_LIT %f\n", (yyvsp[0].f_var));
		}
#line 1644 "./build/y.tab.c"
    break;

  case 88: /* Primary: '(' Expression ')'  */
#line 265 "./compiler.y"
                         {
			(yyvsp[-3].object_val).type = (yyvsp[-2].object_val).type;
		}
#line 1652 "./build/y.tab.c"
    break;

  case 89: /* Primary: BOOL_LIT  */
#line 268 "./compiler.y"
                   {
			(yyvsp[-1].object_val).type = OBJECT_TYPE_BOOL; 
			printBool((yyvsp[0].b_var));
		}
#line 1661 "./build/y.tab.c"
    break;

  case 90: /* Primary: IDENT  */
#line 272 "./compiler.y"
                {
			ObjectType type = getVarTypeByName((yyvsp[0].s_var));
			(yyvsp[-1].object_val).type = type;
			printIDByName((yyvsp[0].s_var));
		}
#line 1671 "./build/y.tab.c"
    break;

  case 91: /* $@7: %empty  */
#line 305 "./compiler.y"
                       { createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var)); }
#line 1677 "./build/y.tab.c"
    break;

  case 92: /* $@8: %empty  */
#line 305 "./compiler.y"
                                                                        { pushScope(); }
#line 1683 "./build/y.tab.c"
    break;

  case 93: /* FunctionDefStmt: VARIABLE_T IDENT $@7 '(' $@8 FunctionParameterStmtList ')' '{' GlobalStmtList '}'  */
#line 305 "./compiler.y"
                                                                                                                                              { dumpScope(); }
#line 1689 "./build/y.tab.c"
    break;

  case 97: /* $@9: %empty  */
#line 314 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 1); }
#line 1695 "./build/y.tab.c"
    break;

  case 98: /* FunctionParameterStmt: VARIABLE_T IDENT $@9  */
#line 314 "./compiler.y"
                                                               { pushFunParm((yyvsp[-2].var_type), (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); }
#line 1701 "./build/y.tab.c"
    break;

  case 99: /* $@10: %empty  */
#line 315 "./compiler.y"
                       { insert((yyvsp[0].s_var), (yyvsp[-1].var_type), 1); }
#line 1707 "./build/y.tab.c"
    break;

  case 100: /* FunctionParameterStmt: VARIABLE_T IDENT $@10 '[' ']'  */
#line 315 "./compiler.y"
                                                                       { pushFunParm((yyvsp[-4].var_type), (yyvsp[-3].s_var), VAR_FLAG_DEFAULT); }
#line 1713 "./build/y.tab.c"
    break;


#line 1717 "./build/y.tab.c"

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

#line 334 "./compiler.y"

/* C code section */
