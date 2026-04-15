#include <stddef.h>
#include <sys/ioctl.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <poll.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>
#include <stdint.h>
int _global_argc;
const char** _global_argv;
static  const char*   from_dash_charlike0 (    const char*  s46 ) {
    return (  s46 );
}

static  char   from_dash_charlike1 (    const char*  s49 ) {
    return ( * ( ( (char * ) (  s49 ) ) ) );
}

enum CAllocator_4 {
    CAllocator_4_CAllocator,
};

struct Slice_5 {
    char *  f_ptr;
    size_t  f_count;
};

struct List_3 {
    enum CAllocator_4  f_al;
    struct Slice_5  f_elements;
    size_t  f_count;
};

enum Ordering_10 {
    Ordering_10_LT,
    Ordering_10_EQ,
    Ordering_10_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp9 (    size_t  l152 ,    size_t  r154 ) {
    return ( builtin_size_tcmp( (  l152 ) , (  r154 ) ) );
}

static  size_t   from_dash_integral11 (    int64_t  x78 ) {
    return ( (size_t ) (  x78 ) );
}

enum Unit_13 {
    Unit_13_Unit,
};

struct StrConcat_17 {
    const char*  field0;
    size_t  field1;
};

static struct StrConcat_17 StrConcat_17_StrConcat (  const char*  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_17 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_16 {
    struct StrConcat_17  field0;
    const char*  field1;
};

static struct StrConcat_16 StrConcat_16_StrConcat (  struct StrConcat_17  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_16 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_15 {
    struct StrConcat_16  field0;
    size_t  field1;
};

static struct StrConcat_15 StrConcat_15_StrConcat (  struct StrConcat_16  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_15 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_14 {
    struct StrConcat_15  field0;
    char  field1;
};

static struct StrConcat_14 StrConcat_14_StrConcat (  struct StrConcat_15  field0 ,  char  field1 ) {
    return ( struct StrConcat_14 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_20 {
    const char*  field0;
    struct StrConcat_14  field1;
};

static struct StrConcat_20 StrConcat_20_StrConcat (  const char*  field0 ,  struct StrConcat_14  field1 ) {
    return ( struct StrConcat_20 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_19 {
    struct StrConcat_20  field0;
    char  field1;
};

static struct StrConcat_19 StrConcat_19_StrConcat (  struct StrConcat_20  field0 ,  char  field1 ) {
    return ( struct StrConcat_19 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str22 (    const char*  self1011 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1011 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str27 (    size_t  self1063 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1063 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str26 (    struct StrConcat_17  self1102 ) {
    struct StrConcat_17  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str25 (    struct StrConcat_16  self1102 ) {
    struct StrConcat_16  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str24 (    struct StrConcat_15  self1102 ) {
    struct StrConcat_15  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str28 (    char  self1017 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1017 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str23 (    struct StrConcat_14  self1102 ) {
    struct StrConcat_14  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str21 (    struct StrConcat_20  self1102 ) {
    struct StrConcat_20  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str23 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str18 (    struct StrConcat_19  self1102 ) {
    struct StrConcat_19  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str21 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  int32_t   from_dash_integral29 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  enum Unit_13   panic12 (    struct StrConcat_14  errmsg1254 ) {
    ( (  print_dash_str18 ) ( ( ( StrConcat_19_StrConcat ) ( ( ( StrConcat_20_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  int64_t   op_dash_mul32 (    int64_t  l182 ,    int64_t  r184 ) {
    return ( (  l182 ) * (  r184 ) );
}

static  char *   offset_dash_ptr31 (    char *  x450 ,    int64_t  count452 ) {
    char  temp33;
    return ( (char * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp33 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i6434 (    size_t  x496 ) {
    return ( (int64_t ) (  x496 ) );
}

static  char *   get_dash_ptr30 (    struct Slice_5  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1339 = ( (  offset_dash_ptr31 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1671 ,    size_t  i1673 ) {
    if ( ( (  cmp9 ( (  i1673 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1673 ) , ( ( * (  list1671 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1673 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1671 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1671 ) ) .f_elements ) ,  (  i1673 ) ) );
}

static  char   get7 (    struct List_3 *  list1681 ,    size_t  i1683 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1681 ) ,  (  i1683 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1742 ,    size_t  k1744 ) {
    return ( (  get7 ) ( ( & (  self1742 ) ) ,  (  k1744 ) ) );
}

static  char   elem_dash_get2 (    struct List_3 *  dref51 ,    size_t  k54 ) {
    return ( (  elem_dash_get6 ) ( ( (* dref51 ) ) ,  (  k54 ) ) );
}

static  int64_t   from_dash_integral35 (    int64_t  x57 ) {
    return (  x57 );
}

static  uint32_t   from_dash_integral36 (    int64_t  x63 ) {
    return ( (uint32_t ) (  x63 ) );
}

static  uint16_t   from_dash_integral37 (    int64_t  x66 ) {
    return ( (uint16_t ) (  x66 ) );
}

static  uint8_t   from_dash_integral38 (    int64_t  x72 ) {
    return ( (uint8_t ) (  x72 ) );
}

static  uint64_t   from_dash_integral39 (    int64_t  x75 ) {
    return ( (uint64_t ) (  x75 ) );
}

static  bool   eq40 (    int64_t  l89 ,    int64_t  r91 ) {
    return ( (  l89 ) == (  r91 ) );
}

static  bool   eq41 (    int32_t  l94 ,    int32_t  r96 ) {
    return ( (  l94 ) == (  r96 ) );
}

static  bool   eq42 (    uint32_t  l99 ,    uint32_t  r101 ) {
    return ( (  l99 ) == (  r101 ) );
}

static  bool   eq43 (    uint8_t  l104 ,    uint8_t  r106 ) {
    return ( (  l104 ) == (  r106 ) );
}

static  bool   eq44 (    uint16_t  l109 ,    uint16_t  r111 ) {
    return ( (  l109 ) == (  r111 ) );
}

static  bool   eq45 (    size_t  l114 ,    size_t  r116 ) {
    return ( (  l114 ) == (  r116 ) );
}

static  bool   eq46 (    enum Ordering_10  l124 ,    enum Ordering_10  r126 ) {
    return ( (  l124 ) == (  r126 ) );
}

static  bool   eq47 (    char  l129 ,    char  r131 ) {
    return ( (  l129 ) == (  r131 ) );
}

struct Maybe_49 {
    enum {
        Maybe_49_None_t,
        Maybe_49_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_49_Just_s;
    } stuff;
};

static struct Maybe_49 Maybe_49_Just (  char  field0 ) {
    return ( struct Maybe_49 ) { .tag = Maybe_49_Just_t, .stuff = { .Maybe_49_Just_s = { .field0 = field0 } } };
};

struct Tuple2_50 {
    struct Maybe_49  field0;
    struct Maybe_49  field1;
};

static struct Tuple2_50 Tuple2_50_Tuple2 (  struct Maybe_49  field0 ,  struct Maybe_49  field1 ) {
    return ( struct Tuple2_50 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq48 (    struct Maybe_49  l134 ,    struct Maybe_49  r136 ) {
    struct Tuple2_50  dref137 = ( ( Tuple2_50_Tuple2 ) ( (  l134 ) ,  (  r136 ) ) );
    if ( dref137 .field0.tag == Maybe_49_None_t && dref137 .field1.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( dref137 .field0.tag == Maybe_49_Just_t && dref137 .field1.tag == Maybe_49_Just_t ) {
        return (  eq47 ( ( dref137 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

enum CharType_53 {
    CharType_53_CharSpace,
    CharType_53_CharWord,
    CharType_53_CharPunctuation,
};

struct Maybe_52 {
    enum {
        Maybe_52_None_t,
        Maybe_52_Just_t,
    } tag;
    union {
        struct {
            enum CharType_53  field0;
        } Maybe_52_Just_s;
    } stuff;
};

static struct Maybe_52 Maybe_52_Just (  enum CharType_53  field0 ) {
    return ( struct Maybe_52 ) { .tag = Maybe_52_Just_t, .stuff = { .Maybe_52_Just_s = { .field0 = field0 } } };
};

struct Tuple2_54 {
    struct Maybe_52  field0;
    struct Maybe_52  field1;
};

static struct Tuple2_54 Tuple2_54_Tuple2 (  struct Maybe_52  field0 ,  struct Maybe_52  field1 ) {
    return ( struct Tuple2_54 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Tuple2_56 {
    enum CharType_53  field0;
    enum CharType_53  field1;
};

static struct Tuple2_56 Tuple2_56_Tuple2 (  enum CharType_53  field0 ,  enum CharType_53  field1 ) {
    return ( struct Tuple2_56 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq55 (    enum CharType_53  l2498 ,    enum CharType_53  r2500 ) {
    struct Tuple2_56  dref2501 = ( ( Tuple2_56_Tuple2 ) ( (  l2498 ) ,  (  r2500 ) ) );
    if (  dref2501 .field0 == CharType_53_CharSpace &&  dref2501 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2501 .field0 == CharType_53_CharWord &&  dref2501 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2501 .field0 == CharType_53_CharPunctuation &&  dref2501 .field1 == CharType_53_CharPunctuation ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   eq51 (    struct Maybe_52  l134 ,    struct Maybe_52  r136 ) {
    struct Tuple2_54  dref137 = ( ( Tuple2_54_Tuple2 ) ( (  l134 ) ,  (  r136 ) ) );
    if ( dref137 .field0.tag == Maybe_52_None_t && dref137 .field1.tag == Maybe_52_None_t ) {
        return ( true );
    }
    else if ( dref137 .field0.tag == Maybe_52_Just_t && dref137 .field1.tag == Maybe_52_Just_t ) {
        return (  eq55 ( ( dref137 .field0 .stuff .Maybe_52_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_52_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

enum Color8_60 {
    Color8_60_Black8,
    Color8_60_Red8,
    Color8_60_Green8,
    Color8_60_Yellow8,
    Color8_60_Blue8,
    Color8_60_Magenta8,
    Color8_60_Cyan8,
    Color8_60_White8,
};

enum Color16_61 {
    Color16_61_Black16,
    Color16_61_Red16,
    Color16_61_Green16,
    Color16_61_Yellow16,
    Color16_61_Blue16,
    Color16_61_Magenta16,
    Color16_61_Cyan16,
    Color16_61_White16,
    Color16_61_BrightBlack16,
    Color16_61_BrightRed16,
    Color16_61_BrightGreen16,
    Color16_61_BrightYellow16,
    Color16_61_BrightBlue16,
    Color16_61_BrightMagenta16,
    Color16_61_BrightCyan16,
    Color16_61_BrightWhite16,
};

struct RGB_62 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_59 {
    enum {
        Color_59_ColorDefault_t,
        Color_59_Color8_t,
        Color_59_Color16_t,
        Color_59_Color256_t,
        Color_59_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_60  field0;
        } Color_59_Color8_s;
        struct {
            enum Color16_61  field0;
        } Color_59_Color16_s;
        struct {
            uint8_t  field0;
        } Color_59_Color256_s;
        struct {
            struct RGB_62  field0;
        } Color_59_ColorRGB_s;
    } stuff;
};

static struct Color_59 Color_59_Color8 (  enum Color8_60  field0 ) {
    return ( struct Color_59 ) { .tag = Color_59_Color8_t, .stuff = { .Color_59_Color8_s = { .field0 = field0 } } };
};

static struct Color_59 Color_59_Color16 (  enum Color16_61  field0 ) {
    return ( struct Color_59 ) { .tag = Color_59_Color16_t, .stuff = { .Color_59_Color16_s = { .field0 = field0 } } };
};

static struct Color_59 Color_59_Color256 (  uint8_t  field0 ) {
    return ( struct Color_59 ) { .tag = Color_59_Color256_t, .stuff = { .Color_59_Color256_s = { .field0 = field0 } } };
};

static struct Color_59 Color_59_ColorRGB (  struct RGB_62  field0 ) {
    return ( struct Color_59 ) { .tag = Color_59_ColorRGB_t, .stuff = { .Color_59_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_58 {
    char  f_c;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
};

struct Tuple2_65 {
    struct Color_59  field0;
    struct Color_59  field1;
};

static struct Tuple2_65 Tuple2_65_Tuple2 (  struct Color_59  field0 ,  struct Color_59  field1 ) {
    return ( struct Tuple2_65 ) { .field0 = field0 ,  .field1 = field1 };
};

static  void *   cast_dash_ptr71 (    int32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  size_t   size_dash_of72 (    int32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  int32_t   zeroed69 (  ) {
    int32_t  temp70;
    int32_t  x473 = (  temp70 );
    ( ( memset ) ( ( (  cast_dash_ptr71 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of72 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Color8_60 *   cast73 (    int32_t *  x463 ) {
    return ( (enum Color8_60 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed67 (    enum Color8_60  x476 ) {
    int32_t  temp68 = ( (  zeroed69 ) ( ) );
    int32_t *  y477 = ( &temp68 );
    enum Color8_60 *  yp478 = ( (  cast73 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq66 (    enum Color8_60  l1864 ,    enum Color8_60  r1866 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l1864 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r1866 ) ) ) ) );
}

static  enum Color16_61 *   cast77 (    int32_t *  x463 ) {
    return ( (enum Color16_61 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed75 (    enum Color16_61  x476 ) {
    int32_t  temp76 = ( (  zeroed69 ) ( ) );
    int32_t *  y477 = ( &temp76 );
    enum Color16_61 *  yp478 = ( (  cast77 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq74 (    enum Color16_61  l1870 ,    enum Color16_61  r1872 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l1870 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r1872 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l1900 ,    struct RGB_62  r1902 ) {
    return ( ( (  eq43 ( ( (  l1900 ) .f_r ) , ( (  r1902 ) .f_r ) ) ) && (  eq43 ( ( (  l1900 ) .f_g ) , ( (  r1902 ) .f_g ) ) ) ) && (  eq43 ( ( (  l1900 ) .f_b ) , ( (  r1902 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l1923 ,    struct Color_59  r1925 ) {
    return ( {  struct Tuple2_65  dref1926 = ( ( Tuple2_65_Tuple2 ) ( (  l1923 ) ,  (  r1925 ) ) ) ; dref1926 .field0.tag == Color_59_ColorDefault_t && dref1926 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref1926 .field0.tag == Color_59_Color8_t && dref1926 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref1926 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref1926 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref1926 .field0.tag == Color_59_Color16_t && dref1926 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref1926 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref1926 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref1926 .field0.tag == Color_59_Color256_t && dref1926 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref1926 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref1926 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref1926 .field0.tag == Color_59_ColorRGB_t && dref1926 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref1926 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref1926 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2351 ,    struct Cell_58  r2353 ) {
    if ( ( !  eq47 ( ( (  l2351 ) .f_c ) , ( (  r2353 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2351 ) .f_fg ) , ( (  r2353 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2351 ) .f_bg ) , ( (  r2353 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq57 (    struct Cell_58 *  dref141 ,    struct Cell_58 *  dref143 ) {
    return (  eq63 ( ( (* dref141 ) ) , ( (* dref143 ) ) ) );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp79 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp80 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp81 (    uint32_t  l162 ,    uint32_t  r164 ) {
    return ( builtin_uint32_tcmp( (  l162 ) , (  r164 ) ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp82 (    uint8_t  l167 ,    uint8_t  r169 ) {
    return ( builtin_uint8_tcmp( (  l167 ) , (  r169 ) ) );
}

static  int64_t   op_dash_add83 (    int64_t  l172 ,    int64_t  r174 ) {
    return ( (  l172 ) + (  r174 ) );
}

static  int64_t   op_dash_sub84 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) - (  r179 ) );
}

static  int64_t   op_dash_div85 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) / (  r189 ) );
}

static  int64_t   op_dash_neg86 (    int64_t  l192 ) {
    return ( (  from_dash_integral35 ( 0 ) ) - (  l192 ) );
}

static  int32_t   op_dash_add87 (    int32_t  l195 ,    int32_t  r197 ) {
    return ( (  l195 ) + (  r197 ) );
}

static  int32_t   op_dash_sub88 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) - (  r202 ) );
}

static  int32_t   op_dash_mul89 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) * (  r207 ) );
}

static  int32_t   op_dash_div90 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) / (  r212 ) );
}

static  int32_t   op_dash_neg91 (    int32_t  x215 ) {
    return ( (  from_dash_integral29 ( 0 ) ) - (  x215 ) );
}

static  uint32_t   op_dash_add92 (    uint32_t  l218 ,    uint32_t  r220 ) {
    return ( (  l218 ) + (  r220 ) );
}

static  uint32_t   op_dash_sub93 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) - (  r225 ) );
}

static  uint32_t   op_dash_mul94 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) * (  r230 ) );
}

static  uint32_t   op_dash_div95 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) / (  r235 ) );
}

static  uint8_t   op_dash_add96 (    uint8_t  l238 ,    uint8_t  r240 ) {
    return ( (  l238 ) + (  r240 ) );
}

static  uint8_t   op_dash_sub97 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) - (  r245 ) );
}

static  size_t   op_dash_add98 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub99 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul100 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

static  size_t   op_dash_div101 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) / (  r275 ) );
}

struct Array_104 {
    uint32_t _arr [4];
};

struct SmolArray_103 {
    struct Array_104  f_arr;
};

static  struct SmolArray_103   from_dash_listlike102 (    struct Array_104  arr301 ) {
    return ( (struct SmolArray_103) { .f_arr = (  arr301 ) } );
}

struct Array_107 {
    uint32_t _arr [5];
};

struct SmolArray_106 {
    struct Array_107  f_arr;
};

static  struct SmolArray_106   from_dash_listlike105 (    struct Array_107  arr301 ) {
    return ( (struct SmolArray_106) { .f_arr = (  arr301 ) } );
}

struct Array_110 {
    uint32_t _arr [1];
};

struct SmolArray_109 {
    struct Array_110  f_arr;
};

static  struct SmolArray_109   from_dash_listlike108 (    struct Array_110  arr301 ) {
    return ( (struct SmolArray_109) { .f_arr = (  arr301 ) } );
}

static  int32_t   clock_dash_monotonic111 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   seek_dash_set112 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  int32_t   seek_dash_end113 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  int32_t   stdout_dash_fileno114 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   stdin_dash_fileno115 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  uint32_t   echo116 (  ) {
    return (  from_dash_integral36 ( 8 ) );
}

static  uint32_t   icanon117 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   isig118 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   iexten119 (  ) {
    return (  from_dash_integral36 ( 32768 ) );
}

static  uint32_t   brkint120 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   icrnl121 (  ) {
    return (  from_dash_integral36 ( 256 ) );
}

static  uint32_t   inpck122 (  ) {
    return (  from_dash_integral36 ( 16 ) );
}

static  uint32_t   istrip123 (  ) {
    return (  from_dash_integral36 ( 32 ) );
}

static  uint32_t   ixon124 (  ) {
    return (  from_dash_integral36 ( 1024 ) );
}

static  uint32_t   opost125 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   cs8126 (  ) {
    return (  from_dash_integral36 ( 48 ) );
}

static  size_t   vmin127 (  ) {
    return (  from_dash_integral11 ( 6 ) );
}

static  size_t   vtime128 (  ) {
    return (  from_dash_integral11 ( 5 ) );
}

static  int32_t   tcsa_dash_flush129 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  uint64_t   tiocgwinsz130 (  ) {
    return (  from_dash_integral39 ( 21523 ) );
}

static  const char*   undefined131 (  ) {
    const char*  temp132;
    return (  temp132 );
}

struct DynStr_134 {
    struct Slice_5  f_contents;
};

static  struct DynStr_134   undefined133 (  ) {
    struct DynStr_134  temp135;
    return (  temp135 );
}

static  char   undefined136 (  ) {
    char  temp137;
    return (  temp137 );
}

static  struct timespec   undefined138 (  ) {
    struct timespec  temp139;
    return (  temp139 );
}

struct Array_142 {
    uint8_t _arr [32];
};

struct Termios_141 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_142  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_141   undefined140 (  ) {
    struct Termios_141  temp143;
    return (  temp143 );
}

static  struct Cell_58   undefined144 (  ) {
    struct Cell_58  temp145;
    return (  temp145 );
}

static  uint8_t   undefined146 (  ) {
    uint8_t  temp147;
    return (  temp147 );
}

enum MouseButton_149 {
    MouseButton_149_MouseLeft,
    MouseButton_149_MouseMiddle,
    MouseButton_149_MouseRight,
    MouseButton_149_ScrollUp,
    MouseButton_149_ScrollDown,
};

static  enum MouseButton_149   undefined148 (  ) {
    enum MouseButton_149  temp150;
    return (  temp150 );
}

static  bool   undefined151 (  ) {
    bool  temp152;
    return (  temp152 );
}

static  enum Unit_13   undefined153 (  ) {
    enum Unit_13  temp154;
    return (  temp154 );
}

static  struct Cell_58 *   undefined155 (  ) {
    struct Cell_58 *  temp156;
    return (  temp156 );
}

static  const char* *   offset_dash_ptr157 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp158;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp158 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr159 (    struct List_3 *  x450 ,    int64_t  count452 ) {
    struct List_3  temp160;
    return ( (struct List_3 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp160 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr161 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp162;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp162 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr163 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp164;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp164 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr165 (    struct Cell_58 *  x450 ,    int64_t  count452 ) {
    struct Cell_58  temp166;
    return ( (struct Cell_58 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp166 ) ) ) ) ) ) ) ) );
}

struct TypeSize_168 {
    size_t  f_size;
};

static  struct TypeSize_168   get_dash_typesize167 (  ) {
    struct List_3  temp169;
    return ( (struct TypeSize_168) { .f_size = ( sizeof( ( (  temp169 ) ) ) ) } );
}

struct TypeSize_171 {
    size_t  f_size;
};

static  struct TypeSize_171   get_dash_typesize170 (  ) {
    char  temp172;
    return ( (struct TypeSize_171) { .f_size = ( sizeof( ( (  temp172 ) ) ) ) } );
}

struct TypeSize_174 {
    size_t  f_size;
};

static  struct TypeSize_174   get_dash_typesize173 (  ) {
    struct Cell_58  temp175;
    return ( (struct TypeSize_174) { .f_size = ( sizeof( ( (  temp175 ) ) ) ) } );
}

static  size_t   size_dash_of176 (    struct List_3 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of177 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of178 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of179 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Cursor_182 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Action_181 {
    enum {
        Action_181_DeleteSelection_t,
        Action_181_PasteSelection_t,
    } tag;
    union {
        struct {
            struct DynStr_134  field0;
            struct Cursor_182  field1;
        } Action_181_DeleteSelection_s;
        struct {
            struct DynStr_134  field0;
            struct Cursor_182  field1;
        } Action_181_PasteSelection_s;
    } stuff;
};

static struct Action_181 Action_181_DeleteSelection (  struct DynStr_134  field0 ,  struct Cursor_182  field1 ) {
    return ( struct Action_181 ) { .tag = Action_181_DeleteSelection_t, .stuff = { .Action_181_DeleteSelection_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct Action_181 Action_181_PasteSelection (  struct DynStr_134  field0 ,  struct Cursor_182  field1 ) {
    return ( struct Action_181 ) { .tag = Action_181_PasteSelection_t, .stuff = { .Action_181_PasteSelection_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static  size_t   size_dash_of180 (    struct Action_181 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of183 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Winsize_185 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of184 (    struct Winsize_185  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of186 (    enum Unit_13 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of187 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of188 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_190 {
    char _arr [32];
};

static  size_t   size_dash_of189 (    struct Array_190  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of191 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  char *   cast192 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  const char*   cast193 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  uint8_t *   cast194 (    struct Array_142 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast195 (    struct Array_104 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast196 (    struct Array_107 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast197 (    struct Array_110 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint16_t *   cast198 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast199 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast200 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t *   cast201 (    int64_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char *   cast202 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  uint8_t   cast203 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  char *   cast204 (    struct Array_190 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char   cast205 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  int32_t   cast206 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  uint8_t *   cast207 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char   cast208 (    uint32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast209 (    size_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint32_t *   cast210 (    int64_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr211 (    struct List_3 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr212 (    struct List_3 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   cast_dash_ptr213 (    void *  p466 ) {
    return ( (struct List_3 * ) (  p466 ) );
}

static  void *   cast_dash_ptr214 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr215 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr216 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr217 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr218 (    struct Action_181 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr219 (    struct Termios_141 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  void *   cast_dash_ptr220 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr221 (    struct Winsize_185 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr222 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr223 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct Cell_58 *   cast_dash_ptr224 (    void *  p466 ) {
    return ( (struct Cell_58 * ) (  p466 ) );
}

static  void *   cast_dash_ptr225 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr226 (    struct Array_190 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_228 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr227 (    struct Pollfd_228 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr229 (    enum Unit_13 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr230 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr231 (    struct Cell_58 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   zeroed232 (  ) {
    struct List_3 *  temp233;
    struct List_3 *  x473 = (  temp233 );
    ( ( memset ) ( ( (  cast_dash_ptr211 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of176 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed234 (  ) {
    char *  temp235;
    char *  x473 = (  temp235 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of177 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed236 (  ) {
    FILE *  temp237;
    FILE *  x473 = (  temp237 );
    ( ( memset ) ( ( (  cast_dash_ptr216 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed238 (  ) {
    char  temp239;
    char  x473 = (  temp239 );
    ( ( memset ) ( ( (  cast_dash_ptr217 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of179 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Action_181 *   zeroed240 (  ) {
    struct Action_181 *  temp241;
    struct Action_181 *  x473 = (  temp241 );
    ( ( memset ) ( ( (  cast_dash_ptr218 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of180 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed242 (  ) {
    uint32_t  temp243;
    uint32_t  x473 = (  temp243 );
    ( ( memset ) ( ( (  cast_dash_ptr220 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of183 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_185   zeroed244 (  ) {
    struct Winsize_185  temp245;
    struct Winsize_185  x473 = (  temp245 );
    ( ( memset ) ( ( (  cast_dash_ptr221 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of184 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed246 (  ) {
    enum Unit_13 *  temp247;
    enum Unit_13 *  x473 = (  temp247 );
    ( ( memset ) ( ( (  cast_dash_ptr222 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of186 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed248 (  ) {
    size_t  temp249;
    size_t  x473 = (  temp249 );
    ( ( memset ) ( ( (  cast_dash_ptr223 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of187 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed250 (  ) {
    int64_t  temp251;
    int64_t  x473 = (  temp251 );
    ( ( memset ) ( ( (  cast_dash_ptr225 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of188 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_190   zeroed252 (  ) {
    struct Array_190  temp253;
    struct Array_190  x473 = (  temp253 );
    ( ( memset ) ( ( (  cast_dash_ptr226 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of189 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed254 (  ) {
    struct timespec *  temp255;
    struct timespec *  x473 = (  temp255 );
    ( ( memset ) ( ( (  cast_dash_ptr230 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed256 (    uint16_t  x476 ) {
    uint32_t  temp257 = ( (  zeroed242 ) ( ) );
    uint32_t *  y477 = ( &temp257 );
    uint16_t *  yp478 = ( (  cast198 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed258 (    uint32_t  x476 ) {
    size_t  temp259 = ( (  zeroed248 ) ( ) );
    size_t *  y477 = ( &temp259 );
    uint32_t *  yp478 = ( (  cast200 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed260 (    uint8_t  x476 ) {
    int64_t  temp261 = ( (  zeroed250 ) ( ) );
    int64_t *  y477 = ( &temp261 );
    uint8_t *  yp478 = ( (  cast201 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed262 (    char  x476 ) {
    int32_t  temp263 = ( (  zeroed69 ) ( ) );
    int32_t *  y477 = ( &temp263 );
    char *  yp478 = ( (  cast202 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed264 (    uint8_t  x476 ) {
    int32_t  temp265 = ( (  zeroed69 ) ( ) );
    int32_t *  y477 = ( &temp265 );
    uint8_t *  yp478 = ( (  cast207 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed266 (    uint32_t  x476 ) {
    int64_t  temp267 = ( (  zeroed250 ) ( ) );
    int64_t *  y477 = ( &temp267 );
    uint32_t *  yp478 = ( (  cast210 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  struct List_3 *   null_dash_ptr268 (  ) {
    return ( (  zeroed232 ) ( ) );
}

static  char *   null_dash_ptr269 (  ) {
    return ( (  zeroed234 ) ( ) );
}

static  FILE *   null_dash_ptr270 (  ) {
    return ( (  zeroed236 ) ( ) );
}

static  struct Action_181 *   null_dash_ptr271 (  ) {
    return ( (  zeroed240 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr272 (  ) {
    return ( (  zeroed246 ) ( ) );
}

static  struct timespec *   null_dash_ptr273 (  ) {
    return ( (  zeroed254 ) ( ) );
}

static  bool   is_dash_ptr_dash_null274 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr270 ) ( ) ) );
}

static  bool   ptr_dash_eq275 (    enum Unit_13 *  l488 ,    enum Unit_13 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_277 {
    enum {
        Maybe_277_None_t,
        Maybe_277_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_277_Just_s;
    } stuff;
};

static struct Maybe_277 Maybe_277_Just (  const char*  field0 ) {
    return ( struct Maybe_277 ) { .tag = Maybe_277_Just_t, .stuff = { .Maybe_277_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_277   from_dash_nullable_dash_c_dash_str276 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq275 ) ( ( (  cast199 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr272 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_277) { .tag = Maybe_277_None_t } );
    } else {
        return ( ( Maybe_277_Just ) ( (  s493 ) ) );
    }
}

static  uint32_t   i32_dash_u32278 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64279 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size280 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  int32_t   i64_dash_i32281 (    int64_t  x511 ) {
    return ( (int32_t ) (  x511 ) );
}

static  int32_t   size_dash_i32282 (    size_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   u16_dash_u32283 (    uint16_t  x520 ) {
    return ( (  cast_dash_on_dash_zeroed256 ) ( (  x520 ) ) );
}

static  size_t   u32_dash_size284 (    uint32_t  x526 ) {
    return ( (  cast_dash_on_dash_zeroed258 ) ( (  x526 ) ) );
}

static  int64_t   u32_dash_i64285 (    uint32_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed266 ) ( (  x529 ) ) );
}

static  int32_t   u32_dash_i32286 (    uint32_t  x535 ) {
    return ( (  cast206 ) ( (  x535 ) ) );
}

static  int64_t   u8_dash_i64287 (    uint8_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed260 ) ( (  x541 ) ) );
}

static  int32_t   u8_dash_i32288 (    uint8_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed264 ) ( (  x544 ) ) );
}

struct Slice_291 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_290 {
    struct Slice_291  f_slice;
    size_t  f_current_dash_offset;
};

struct List_292 {
    enum CAllocator_4  f_al;
    struct Slice_291  f_elements;
    size_t  f_count;
};

static  struct SliceIter_290   into_dash_iter294 (    struct Slice_291  self1380 ) {
    return ( (struct SliceIter_290) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min296 (    size_t  l965 ,    size_t  r967 ) {
    if ( (  cmp9 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  struct Slice_291   subslice295 (    struct Slice_291  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    struct List_3 *  begin_dash_ptr1366 = ( (  offset_dash_ptr159 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_291) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub99 ( ( (  min296 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_291) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_290   into_dash_iter293 (    struct List_292  self1698 ) {
    return ( (  into_dash_iter294 ) ( ( (  subslice295 ) ( ( (  self1698 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1698 ) .f_count ) ) ) ) );
}

static  struct SliceIter_290   into_dash_iter289 (    struct List_292 *  self547 ) {
    return ( (  into_dash_iter293 ) ( ( * (  self547 ) ) ) );
}

struct SliceIter_299 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_298 {
    struct SliceIter_299  f_s;
};

static  struct Scanner_298   into_dash_iter300 (    struct Scanner_298  self2249 ) {
    return (  self2249 );
}

static  struct Scanner_298   into_dash_iter297 (    struct Scanner_298 *  self547 ) {
    return ( (  into_dash_iter300 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_299   into_dash_iter303 (    struct Slice_5  self1380 ) {
    return ( (struct SliceIter_299) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice304 (    struct Slice_5  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    char *  begin_dash_ptr1366 = ( (  offset_dash_ptr31 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub99 ( ( (  min296 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_299   into_dash_iter302 (    struct List_3  self1698 ) {
    return ( (  into_dash_iter303 ) ( ( (  subslice304 ) ( ( (  self1698 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1698 ) .f_count ) ) ) ) );
}

static  struct SliceIter_299   into_dash_iter301 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter302 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_306 {
    EmptyIter_306_EmptyIter,
};

static  enum EmptyIter_306   nil305 (  ) {
    return ( EmptyIter_306_EmptyIter );
}

static  enum EmptyIter_306   into_dash_iter307 (    enum EmptyIter_306  self552 ) {
    return (  self552 );
}

static  struct Maybe_49   next308 (    enum EmptyIter_306 *  dref554 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_311 {
    struct DynStr_134  f_og;
    size_t  f_last;
};

struct env316 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1707;
    ;
    size_t  starting_dash_size1706;
    ;
    ;
    ;
};

struct funenv316 {
    enum Unit_13  (*fun) (  struct env316  ,    struct List_3 *  );
    struct env316 env;
};

struct env315 {
    ;
    ;
    ;
    ;
    ;
    struct env316 envinst316;
};

struct funenv315 {
    enum Unit_13  (*fun) (  struct env315  ,    struct List_3 *  ,    char  );
    struct env315 env;
};

struct env314 {
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

struct funenv314 {
    enum Unit_13  (*fun) (  struct env314  ,    struct List_3 *  ,    struct DynStr_134  );
    struct env314 env;
};

struct env313 {
    ;
    ;
    ;
    ;
    ;
    struct env314 envinst314;
};

struct funenv313 {
    struct List_3  (*fun) (  struct env313  ,    struct DynStr_134  ,    enum CAllocator_4  );
    struct env313 env;
};

struct env312 {
    struct env313 envinst313;
    enum CAllocator_4  al2893;
};

struct funenv312 {
    struct List_3  (*fun) (  struct env312  ,    struct DynStr_134  );
    struct env312 env;
};

struct Map_310 {
    struct LineIter_311  field0;
    struct funenv312  field1;
};

static struct Map_310 Map_310_Map (  struct LineIter_311  field0 , struct funenv312  field1 ) {
    return ( struct Map_310 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_310   into_dash_iter309 (    struct Map_310  self558 ) {
    return (  self558 );
}

struct ConstStrIter_319 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_318 {
    struct ConstStrIter_319  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_318 Map_318_Map (  struct ConstStrIter_319  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_318 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_318   into_dash_iter317 (    struct Map_318  self558 ) {
    return (  self558 );
}

struct Take_322 {
    struct SliceIter_299  field0;
    size_t  field1;
};

static struct Take_322 Take_322_Take (  struct SliceIter_299  field0 ,  size_t  field1 ) {
    return ( struct Take_322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Map_321 {
    struct Take_322  field0;
    int32_t (*  field1 )(    char  );
};

static struct Map_321 Map_321_Map (  struct Take_322  field0 ,  int32_t (*  field1 )(    char  ) ) {
    return ( struct Map_321 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_321   into_dash_iter320 (    struct Map_321  self558 ) {
    return (  self558 );
}

struct Maybe_324 {
    enum {
        Maybe_324_None_t,
        Maybe_324_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_324_Just_s;
    } stuff;
};

static struct Maybe_324 Maybe_324_Just (  struct List_3  field0 ) {
    return ( struct Maybe_324 ) { .tag = Maybe_324_Just_t, .stuff = { .Maybe_324_Just_s = { .field0 = field0 } } };
};

struct Maybe_325 {
    enum {
        Maybe_325_None_t,
        Maybe_325_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_134  field0;
        } Maybe_325_Just_s;
    } stuff;
};

static struct Maybe_325 Maybe_325_Just (  struct DynStr_134  field0 ) {
    return ( struct Maybe_325 ) { .tag = Maybe_325_Just_t, .stuff = { .Maybe_325_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail328 (    struct Maybe_49  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_49  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined136 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_49_Just_t ) {
        return ( dref1270 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get329 (    struct Slice_5  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1345 = ( (  offset_dash_ptr31 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  char   get327 (    struct Slice_5  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail328 ) ( ( (  try_dash_get329 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar330 (  ) {
    return ( (  zeroed238 ) ( ) );
}

static  char   newline331 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_134   substr332 (    struct DynStr_134  s1504 ,    size_t  from1506 ,    size_t  to1508 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice304 ) ( ( (  s1504 ) .f_contents ) ,  (  from1506 ) ,  (  to1508 ) ) ) } );
}

static  struct Maybe_325   next326 (    struct LineIter_311 *  self1626 ) {
    if ( ( (  cmp9 ( ( ( * (  self1626 ) ) .f_last ) , ( ( ( ( * (  self1626 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get327 ) ( ( ( ( * (  self1626 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1626 ) ) .f_last ) ) ) , ( (  nullchar330 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    size_t  i1627 = ( ( * (  self1626 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1627 ) , ( ( ( ( * (  self1626 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get327 ) ( ( ( ( * (  self1626 ) ) .f_og ) .f_contents ) ,  (  i1627 ) ) ) , ( (  newline331 ) ( ) ) ) ) ) ) {
        i1627 = (  op_dash_add98 ( (  i1627 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_134  line1628 = ( (  substr332 ) ( ( ( * (  self1626 ) ) .f_og ) ,  ( ( * (  self1626 ) ) .f_last ) ,  (  i1627 ) ) );
    if ( (  cmp9 ( (  i1627 ) , ( ( ( ( * (  self1626 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1627 = (  op_dash_add98 ( (  i1627 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1626 ) .f_last = (  i1627 );
    return ( ( Maybe_325_Just ) ( (  line1628 ) ) );
}

static  struct Maybe_324   next323 (    struct Map_310 *  dref560 ) {
    struct Maybe_325  dref563 = ( (  next326 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_325_None_t ) {
        return ( (struct Maybe_324) { .tag = Maybe_324_None_t } );
    }
    else if ( dref563.tag == Maybe_325_Just_t ) {
        struct funenv312  temp333 = ( (* dref560 ) .field1 );
        return ( ( Maybe_324_Just ) ( ( temp333.fun ( temp333.env ,  ( dref563 .stuff .Maybe_325_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_335 {
    enum {
        Maybe_335_None_t,
        Maybe_335_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_335_Just_s;
    } stuff;
};

static struct Maybe_335 Maybe_335_Just (  uint32_t  field0 ) {
    return ( struct Maybe_335 ) { .tag = Maybe_335_Just_t, .stuff = { .Maybe_335_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next336 (    struct ConstStrIter_319 *  self1006 ) {
    if ( (  cmp9 ( ( ( * (  self1006 ) ) .f_i ) , ( (  i32_dash_size280 ) ( ( ( strlen ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1007 = ( ( (  cast192 ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) );
    char  c1008 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1007 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1006 ) ) .f_i ) ) ) ) ) );
    (*  self1006 ) .f_i = (  op_dash_add98 ( ( ( * (  self1006 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1008 ) ) );
}

static  struct Maybe_335   next334 (    struct Map_318 *  dref560 ) {
    struct Maybe_49  dref563 = ( (  next336 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    else if ( dref563.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_335_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_338 {
    enum {
        Maybe_338_None_t,
        Maybe_338_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_338_Just_s;
    } stuff;
};

static struct Maybe_338 Maybe_338_Just (  int32_t  field0 ) {
    return ( struct Maybe_338 ) { .tag = Maybe_338_Just_t, .stuff = { .Maybe_338_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next340 (    struct SliceIter_299 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1388 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1388 ) ) );
}

static  struct Maybe_49   next339 (    struct Take_322 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x626 = ( (  next340 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub99 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_338   next337 (    struct Map_321 *  dref560 ) {
    struct Maybe_49  dref563 = ( (  next339 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_338) { .tag = Maybe_338_None_t } );
    }
    else if ( dref563.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_338_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_311   into_dash_iter342 (    struct LineIter_311  self1623 ) {
    return (  self1623 );
}

static  struct Map_310   map341 (    struct LineIter_311  iterable567 ,   struct funenv312  fun569 ) {
    struct LineIter_311  it570 = ( (  into_dash_iter342 ) ( (  iterable567 ) ) );
    return ( ( Map_310_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct ConstStrIter_319   into_dash_iter344 (    const char*  self1000 ) {
    return ( (struct ConstStrIter_319) { .f_ogstr = (  self1000 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_318   map343 (    const char*  iterable567 ,    uint32_t (*  fun569 )(    char  ) ) {
    struct ConstStrIter_319  it570 = ( (  into_dash_iter344 ) ( (  iterable567 ) ) );
    return ( ( Map_318_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_322   into_dash_iter346 (    struct Take_322  self621 ) {
    return (  self621 );
}

static  struct Map_321   map345 (    struct Take_322  iterable567 ,    int32_t (*  fun569 )(    char  ) ) {
    struct Take_322  it570 = ( (  into_dash_iter346 ) ( (  iterable567 ) ) );
    return ( ( Map_321_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct FromIter_350 {
    int32_t  f_from;
};

struct Zip_349 {
    struct SliceIter_290  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

struct Drop_348 {
    struct Zip_349  field0;
    size_t  field1;
};

static struct Drop_348 Drop_348_Drop (  struct Zip_349  field0 ,  size_t  field1 ) {
    return ( struct Drop_348 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_348   into_dash_iter347 (    struct Drop_348  self607 ) {
    return (  self607 );
}

struct Zip_353 {
    struct SliceIter_299  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

struct Drop_352 {
    struct Zip_353  field0;
    size_t  field1;
};

static struct Drop_352 Drop_352_Drop (  struct Zip_353  field0 ,  size_t  field1 ) {
    return ( struct Drop_352 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_352   into_dash_iter351 (    struct Drop_352  self607 ) {
    return (  self607 );
}

struct Drop_355 {
    struct LineIter_311  field0;
    size_t  field1;
};

static struct Drop_355 Drop_355_Drop (  struct LineIter_311  field0 ,  size_t  field1 ) {
    return ( struct Drop_355 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_355   into_dash_iter354 (    struct Drop_355  self607 ) {
    return (  self607 );
}

struct Tuple2_358 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_358 Tuple2_358_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_357 {
    enum {
        Maybe_357_None_t,
        Maybe_357_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_358  field0;
        } Maybe_357_Just_s;
    } stuff;
};

static struct Maybe_357 Maybe_357_Just (  struct Tuple2_358  field0 ) {
    return ( struct Maybe_357 ) { .tag = Maybe_357_Just_t, .stuff = { .Maybe_357_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_324   next360 (    struct SliceIter_290 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_324) { .tag = Maybe_324_None_t } );
    }
    struct List_3  elem1388 = ( * ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_324_Just ) ( (  elem1388 ) ) );
}

static  struct Maybe_338   next361 (    struct FromIter_350 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add87 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_338_Just ) ( (  v669 ) ) );
}

static  struct Maybe_357   next359 (    struct Zip_349 *  self676 ) {
    struct Zip_349  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_324  dref678 = ( (  next360 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_324_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_324_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_324_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_357   next356 (    struct Drop_348 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next359 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub99 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next359 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_364 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_364 Tuple2_364_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_363 {
    enum {
        Maybe_363_None_t,
        Maybe_363_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_364  field0;
        } Maybe_363_Just_s;
    } stuff;
};

static struct Maybe_363 Maybe_363_Just (  struct Tuple2_364  field0 ) {
    return ( struct Maybe_363 ) { .tag = Maybe_363_Just_t, .stuff = { .Maybe_363_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_363   next365 (    struct Zip_353 *  self676 ) {
    struct Zip_353  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next340 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next340 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_363   next362 (    struct Drop_352 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next365 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub99 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next365 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_325   next366 (    struct Drop_355 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next326 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub99 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next326 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_349   into_dash_iter368 (    struct Zip_349  self673 ) {
    return (  self673 );
}

static  struct Drop_348   drop367 (    struct Zip_349  iterable614 ,    size_t  i616 ) {
    struct Zip_349  it617 = ( (  into_dash_iter368 ) ( (  iterable614 ) ) );
    return ( ( Drop_348_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_353   into_dash_iter370 (    struct Zip_353  self673 ) {
    return (  self673 );
}

static  struct Drop_352   drop369 (    struct Zip_353  iterable614 ,    size_t  i616 ) {
    struct Zip_353  it617 = ( (  into_dash_iter370 ) ( (  iterable614 ) ) );
    return ( ( Drop_352_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Drop_355   drop371 (    struct LineIter_311  iterable614 ,    size_t  i616 ) {
    struct LineIter_311  it617 = ( (  into_dash_iter342 ) ( (  iterable614 ) ) );
    return ( ( Drop_355_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_322   take372 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_322_Take ) ( ( (  into_dash_iter301 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_374 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_374 Range_374_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_374 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_374   to373 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_374_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_376 {
    struct Range_374  field0;
    int32_t  field1;
};

static struct RangeIter_376 RangeIter_376_RangeIter (  struct Range_374  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_376 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_376   into_dash_iter375 (    struct Range_374  dref645 ) {
    return ( ( RangeIter_376_RangeIter ) ( ( ( Range_374_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_338   next377 (    struct RangeIter_376 *  self653 ) {
    struct RangeIter_376  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_338) { .tag = Maybe_338_None_t } );
        }
        struct Maybe_338  x658 = ( ( Maybe_338_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_376_RangeIter ) ( ( ( Range_374_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_350   from378 (    int32_t  f662 ) {
    return ( (struct FromIter_350) { .f_from = (  f662 ) } );
}

static  struct FromIter_350   into_dash_iter379 (    struct FromIter_350  it665 ) {
    return (  it665 );
}

struct Zip_381 {
    struct LineIter_311  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_381   into_dash_iter380 (    struct Zip_381  self673 ) {
    return (  self673 );
}

struct Zip_383 {
    struct Drop_355  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_383   into_dash_iter382 (    struct Zip_383  self673 ) {
    return (  self673 );
}

struct Zip_385 {
    struct SliceIter_299  f_left_dash_it;
    struct SliceIter_299  f_right_dash_it;
};

static  struct Zip_385   into_dash_iter384 (    struct Zip_385  self673 ) {
    return (  self673 );
}

struct IntStrIter_388 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_387 {
    struct IntStrIter_388  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_387   into_dash_iter386 (    struct Zip_387  self673 ) {
    return (  self673 );
}

struct StrConcatIter_394 {
    struct ConstStrIter_319  f_left;
    struct SliceIter_299  f_right;
};

struct AppendIter_395 {
    enum EmptyIter_306  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_393 {
    struct StrConcatIter_394  f_left;
    struct AppendIter_395  f_right;
};

struct StrCaseIter_392 {
    enum {
        StrCaseIter_392_StrCaseIter1_t,
        StrCaseIter_392_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_319  field0;
        } StrCaseIter_392_StrCaseIter1_s;
        struct {
            struct StrConcatIter_393  field0;
        } StrCaseIter_392_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_392 StrCaseIter_392_StrCaseIter1 (  struct ConstStrIter_319  field0 ) {
    return ( struct StrCaseIter_392 ) { .tag = StrCaseIter_392_StrCaseIter1_t, .stuff = { .StrCaseIter_392_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_392 StrCaseIter_392_StrCaseIter2 (  struct StrConcatIter_393  field0 ) {
    return ( struct StrCaseIter_392 ) { .tag = StrCaseIter_392_StrCaseIter2_t, .stuff = { .StrCaseIter_392_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_391 {
    struct ConstStrIter_319  f_left;
    struct StrCaseIter_392  f_right;
};

struct Zip_390 {
    struct StrConcatIter_391  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_390   into_dash_iter389 (    struct Zip_390  self673 ) {
    return (  self673 );
}

struct IntStrIter_399 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_398 {
    struct ConstStrIter_319  f_left;
    struct IntStrIter_399  f_right;
};

struct Zip_397 {
    struct StrConcatIter_398  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_397   into_dash_iter396 (    struct Zip_397  self673 ) {
    return (  self673 );
}

struct StrConcatIter_409 {
    struct AppendIter_395  f_left;
    struct AppendIter_395  f_right;
};

struct StrConcatIter_408 {
    struct StrConcatIter_409  f_left;
    struct ConstStrIter_319  f_right;
};

struct StrConcatIter_407 {
    struct StrConcatIter_408  f_left;
    struct IntStrIter_388  f_right;
};

struct StrConcatIter_406 {
    struct StrConcatIter_407  f_left;
    struct AppendIter_395  f_right;
};

struct StrConcatIter_405 {
    struct ConstStrIter_319  f_left;
    struct StrConcatIter_406  f_right;
};

struct StrConcatIter_404 {
    struct StrConcatIter_405  f_left;
    struct AppendIter_395  f_right;
};

struct StrCaseIter_403 {
    enum {
        StrCaseIter_403_StrCaseIter1_t,
        StrCaseIter_403_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_319  field0;
        } StrCaseIter_403_StrCaseIter1_s;
        struct {
            struct StrConcatIter_404  field0;
        } StrCaseIter_403_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_403 StrCaseIter_403_StrCaseIter1 (  struct ConstStrIter_319  field0 ) {
    return ( struct StrCaseIter_403 ) { .tag = StrCaseIter_403_StrCaseIter1_t, .stuff = { .StrCaseIter_403_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_403 StrCaseIter_403_StrCaseIter2 (  struct StrConcatIter_404  field0 ) {
    return ( struct StrCaseIter_403 ) { .tag = StrCaseIter_403_StrCaseIter2_t, .stuff = { .StrCaseIter_403_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_402 {
    struct ConstStrIter_319  f_left;
    struct StrCaseIter_403  f_right;
};

struct Zip_401 {
    struct StrConcatIter_402  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_401   into_dash_iter400 (    struct Zip_401  self673 ) {
    return (  self673 );
}

struct StrConcatIter_414 {
    struct ConstStrIter_319  f_left;
    struct IntStrIter_388  f_right;
};

struct StrConcatIter_413 {
    struct StrConcatIter_414  f_left;
    struct AppendIter_395  f_right;
};

struct StrConcatIter_412 {
    struct StrConcatIter_413  f_left;
    struct IntStrIter_388  f_right;
};

struct Zip_411 {
    struct StrConcatIter_412  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self673 ) {
    return (  self673 );
}

struct IntStrIter_418 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_417 {
    struct ConstStrIter_319  f_left;
    struct IntStrIter_418  f_right;
};

struct Zip_416 {
    struct StrConcatIter_417  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_416   into_dash_iter415 (    struct Zip_416  self673 ) {
    return (  self673 );
}

struct Zip_420 {
    struct StrConcatIter_414  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self673 ) {
    return (  self673 );
}

struct StrConcatIter_424 {
    struct StrConcatIter_414  f_left;
    struct ConstStrIter_319  f_right;
};

struct StrConcatIter_423 {
    struct StrConcatIter_424  f_left;
    struct IntStrIter_388  f_right;
};

struct Zip_422 {
    struct StrConcatIter_423  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_422   into_dash_iter421 (    struct Zip_422  self673 ) {
    return (  self673 );
}

struct StrConcatIter_429 {
    struct StrConcatIter_417  f_left;
    struct AppendIter_395  f_right;
};

struct StrCaseIter_428 {
    enum {
        StrCaseIter_428_StrCaseIter1_t,
        StrCaseIter_428_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_319  field0;
        } StrCaseIter_428_StrCaseIter1_s;
        struct {
            struct StrConcatIter_429  field0;
        } StrCaseIter_428_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_428 StrCaseIter_428_StrCaseIter1 (  struct ConstStrIter_319  field0 ) {
    return ( struct StrCaseIter_428 ) { .tag = StrCaseIter_428_StrCaseIter1_t, .stuff = { .StrCaseIter_428_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_428 StrCaseIter_428_StrCaseIter2 (  struct StrConcatIter_429  field0 ) {
    return ( struct StrCaseIter_428 ) { .tag = StrCaseIter_428_StrCaseIter2_t, .stuff = { .StrCaseIter_428_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_427 {
    struct ConstStrIter_319  f_left;
    struct StrCaseIter_428  f_right;
};

struct Zip_426 {
    struct StrConcatIter_427  f_left_dash_it;
    struct FromIter_350  f_right_dash_it;
};

static  struct Zip_426   into_dash_iter425 (    struct Zip_426  self673 ) {
    return (  self673 );
}

struct Tuple2_432 {
    struct DynStr_134  field0;
    int32_t  field1;
};

static struct Tuple2_432 Tuple2_432_Tuple2 (  struct DynStr_134  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_432 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_431 {
    enum {
        Maybe_431_None_t,
        Maybe_431_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_432  field0;
        } Maybe_431_Just_s;
    } stuff;
};

static struct Maybe_431 Maybe_431_Just (  struct Tuple2_432  field0 ) {
    return ( struct Maybe_431 ) { .tag = Maybe_431_Just_t, .stuff = { .Maybe_431_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_431   next430 (    struct Zip_381 *  self676 ) {
    struct Zip_381  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_325  dref678 = ( (  next326 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_325_None_t ) {
            return ( (struct Maybe_431) { .tag = Maybe_431_None_t } );
        }
        else if ( dref678.tag == Maybe_325_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_431) { .tag = Maybe_431_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next326 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_431_Just ) ( ( ( Tuple2_432_Tuple2 ) ( ( dref678 .stuff .Maybe_325_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_431   next433 (    struct Zip_383 *  self676 ) {
    struct Zip_383  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_325  dref678 = ( (  next366 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_325_None_t ) {
            return ( (struct Maybe_431) { .tag = Maybe_431_None_t } );
        }
        else if ( dref678.tag == Maybe_325_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_431) { .tag = Maybe_431_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next366 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_431_Just ) ( ( ( Tuple2_432_Tuple2 ) ( ( dref678 .stuff .Maybe_325_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_436 {
    char  field0;
    char  field1;
};

static struct Tuple2_436 Tuple2_436_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_436 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_435 {
    enum {
        Maybe_435_None_t,
        Maybe_435_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_436  field0;
        } Maybe_435_Just_s;
    } stuff;
};

static struct Maybe_435 Maybe_435_Just (  struct Tuple2_436  field0 ) {
    return ( struct Maybe_435 ) { .tag = Maybe_435_Just_t, .stuff = { .Maybe_435_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_435   next434 (    struct Zip_385 *  self676 ) {
    struct Zip_385  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next340 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_435) { .tag = Maybe_435_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref680 = ( (  next340 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_435) { .tag = Maybe_435_None_t } );
            }
            else if ( dref680.tag == Maybe_49_Just_t ) {
                ( (  next340 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next340 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_435_Just ) ( ( ( Tuple2_436_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env441 {
    ;
    int32_t  base923;
};

struct funenv441 {
    int32_t  (*fun) (  struct env441  ,    int32_t  ,    int32_t  );
    struct env441 env;
};

static  int32_t   reduce440 (    struct Range_374  iterable812 ,    int32_t  base814 ,   struct funenv441  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_376  it818 = ( (  into_dash_iter375 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_338  dref819 = ( (  next377 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_338_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_338_Just_t ) {
            struct funenv441  temp442 = (  fun816 );
            x817 = ( temp442.fun ( temp442.env ,  ( dref819 .stuff .Maybe_338_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp443;
    return (  temp443 );
}

static  int32_t   lam441 (   struct env441 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul89 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow439 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env441 envinst441 = {
        .base923 =  base923 ,
    };
    return ( (  reduce440 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv441){ .fun = lam441, .env = envinst441 } ) ) );
}

static  struct Maybe_49   next438 (    struct IntStrIter_388 *  self1027 ) {
    if ( (  cmp80 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow439 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div90 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub88 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast205 ) ( (  op_dash_add87 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_363   next437 (    struct Zip_387 *  self676 ) {
    struct Zip_387  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next438 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next438 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next448 (    struct StrConcatIter_394 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next449 (    struct AppendIter_395 *  self776 ) {
    struct Maybe_49  dref777 = ( (  next308 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
    if ( dref777.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref777 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref777.tag == Maybe_49_None_t ) {
        if ( ( ! ( ( * (  self776 ) ) .f_appended ) ) ) {
            (*  self776 ) .f_appended = ( true );
            return ( ( Maybe_49_Just ) ( ( ( * (  self776 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_49   next447 (    struct StrConcatIter_393 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next448 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next446 (    struct StrCaseIter_392 *  self1115 ) {
    struct StrCaseIter_392 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_392_StrCaseIter1_t ) {
        return ( (  next336 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_392_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_392_StrCaseIter2_t ) {
        return ( (  next447 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_392_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next445 (    struct StrConcatIter_391 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next446 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next444 (    struct Zip_390 *  self676 ) {
    struct Zip_390  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next445 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next445 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env455 {
    uint32_t  base923;
    ;
};

struct funenv455 {
    uint32_t  (*fun) (  struct env455  ,    int32_t  ,    uint32_t  );
    struct env455 env;
};

static  uint32_t   reduce454 (    struct Range_374  iterable812 ,    uint32_t  base814 ,   struct funenv455  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_376  it818 = ( (  into_dash_iter375 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_338  dref819 = ( (  next377 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_338_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_338_Just_t ) {
            struct funenv455  temp456 = (  fun816 );
            x817 = ( temp456.fun ( temp456.env ,  ( dref819 .stuff .Maybe_338_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp457;
    return (  temp457 );
}

static  uint32_t   lam455 (   struct env455 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul94 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow453 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env455 envinst455 = {
        .base923 =  base923 ,
    };
    return ( (  reduce454 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv455){ .fun = lam455, .env = envinst455 } ) ) );
}

static  struct Maybe_49   next452 (    struct IntStrIter_399 *  self1027 ) {
    if ( (  cmp80 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow453 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div95 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub93 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast208 ) ( (  op_dash_add92 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_49   next451 (    struct StrConcatIter_398 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next452 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next450 (    struct Zip_397 *  self676 ) {
    struct Zip_397  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next451 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next451 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next466 (    struct StrConcatIter_409 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next465 (    struct StrConcatIter_408 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next466 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next464 (    struct StrConcatIter_407 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next465 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next463 (    struct StrConcatIter_406 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next464 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next462 (    struct StrConcatIter_405 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next463 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next461 (    struct StrConcatIter_404 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next462 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next460 (    struct StrCaseIter_403 *  self1115 ) {
    struct StrCaseIter_403 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_403_StrCaseIter1_t ) {
        return ( (  next336 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_403_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_403_StrCaseIter2_t ) {
        return ( (  next461 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_403_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next459 (    struct StrConcatIter_402 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next460 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next458 (    struct Zip_401 *  self676 ) {
    struct Zip_401  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next459 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next459 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next470 (    struct StrConcatIter_414 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next469 (    struct StrConcatIter_413 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next470 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next468 (    struct StrConcatIter_412 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next469 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next467 (    struct Zip_411 *  self676 ) {
    struct Zip_411  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next468 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next468 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env476 {
    size_t  base923;
    ;
};

struct funenv476 {
    size_t  (*fun) (  struct env476  ,    int32_t  ,    size_t  );
    struct env476 env;
};

static  size_t   reduce475 (    struct Range_374  iterable812 ,    size_t  base814 ,   struct funenv476  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_376  it818 = ( (  into_dash_iter375 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_338  dref819 = ( (  next377 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_338_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_338_Just_t ) {
            struct funenv476  temp477 = (  fun816 );
            x817 = ( temp477.fun ( temp477.env ,  ( dref819 .stuff .Maybe_338_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp478;
    return (  temp478 );
}

static  size_t   lam476 (   struct env476 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul100 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow474 (    size_t  base923 ,    int32_t  p925 ) {
    struct env476 envinst476 = {
        .base923 =  base923 ,
    };
    return ( (  reduce475 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv476){ .fun = lam476, .env = envinst476 } ) ) );
}

static  struct Maybe_49   next473 (    struct IntStrIter_418 *  self1027 ) {
    if ( (  cmp80 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow474 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div101 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub99 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast209 ) ( (  op_dash_add98 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_49   next472 (    struct StrConcatIter_417 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next473 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next471 (    struct Zip_416 *  self676 ) {
    struct Zip_416  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next472 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_363   next479 (    struct Zip_420 *  self676 ) {
    struct Zip_420  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next470 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next470 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next482 (    struct StrConcatIter_424 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next470 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next481 (    struct StrConcatIter_423 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next482 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next480 (    struct Zip_422 *  self676 ) {
    struct Zip_422  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next481 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next481 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next486 (    struct StrConcatIter_429 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next472 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next485 (    struct StrCaseIter_428 *  self1115 ) {
    struct StrCaseIter_428 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_428_StrCaseIter1_t ) {
        return ( (  next336 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_428_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_428_StrCaseIter2_t ) {
        return ( (  next486 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_428_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next484 (    struct StrConcatIter_427 *  self1093 ) {
    struct Maybe_49  dref1094 = ( (  next336 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1094 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_49_None_t ) {
        return ( (  next485 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_363   next483 (    struct Zip_426 *  self676 ) {
    struct Zip_426  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next484 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_338  dref680 = ( (  next361 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_338_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref680.tag == Maybe_338_Just_t ) {
                ( (  next484 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next361 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_338_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_349   zip487 (    struct Slice_291  left684 ,    struct FromIter_350  right686 ) {
    struct SliceIter_290  left_dash_it687 = ( (  into_dash_iter294 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_349) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_353   zip488 (    struct Slice_5  left684 ,    struct FromIter_350  right686 ) {
    struct SliceIter_299  left_dash_it687 = ( (  into_dash_iter303 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_353) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_349   zip489 (    struct List_292  left684 ,    struct FromIter_350  right686 ) {
    struct SliceIter_290  left_dash_it687 = ( (  into_dash_iter293 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_349) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_353   zip490 (    struct List_3  left684 ,    struct FromIter_350  right686 ) {
    struct SliceIter_299  left_dash_it687 = ( (  into_dash_iter302 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_353) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_383   zip491 (    struct Drop_355  left684 ,    struct FromIter_350  right686 ) {
    struct Drop_355  left_dash_it687 = ( (  into_dash_iter354 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_383) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_381   zip492 (    struct LineIter_311  left684 ,    struct FromIter_350  right686 ) {
    struct LineIter_311  left_dash_it687 = ( (  into_dash_iter342 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_381) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_385   zip493 (    struct Slice_5  left684 ,    struct Slice_5  right686 ) {
    struct SliceIter_299  left_dash_it687 = ( (  into_dash_iter303 ) ( (  left684 ) ) );
    struct SliceIter_299  right_dash_it688 = ( (  into_dash_iter303 ) ( (  right686 ) ) );
    return ( (struct Zip_385) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_388   into_dash_iter495 (    struct IntStrIter_388  self1024 ) {
    return (  self1024 );
}

static  struct Zip_387   zip494 (    struct IntStrIter_388  left684 ,    struct FromIter_350  right686 ) {
    struct IntStrIter_388  left_dash_it687 = ( (  into_dash_iter495 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_387) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_391   into_dash_iter497 (    struct StrConcatIter_391  self1090 ) {
    return (  self1090 );
}

static  struct Zip_390   zip496 (    struct StrConcatIter_391  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_391  left_dash_it687 = ( (  into_dash_iter497 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_390) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_398   into_dash_iter499 (    struct StrConcatIter_398  self1090 ) {
    return (  self1090 );
}

static  struct Zip_397   zip498 (    struct StrConcatIter_398  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_398  left_dash_it687 = ( (  into_dash_iter499 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_397) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_402   into_dash_iter501 (    struct StrConcatIter_402  self1090 ) {
    return (  self1090 );
}

static  struct Zip_401   zip500 (    struct StrConcatIter_402  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_402  left_dash_it687 = ( (  into_dash_iter501 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_401) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_412   into_dash_iter503 (    struct StrConcatIter_412  self1090 ) {
    return (  self1090 );
}

static  struct Zip_411   zip502 (    struct StrConcatIter_412  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_412  left_dash_it687 = ( (  into_dash_iter503 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_417   into_dash_iter505 (    struct StrConcatIter_417  self1090 ) {
    return (  self1090 );
}

static  struct Zip_416   zip504 (    struct StrConcatIter_417  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_417  left_dash_it687 = ( (  into_dash_iter505 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_416) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_414   into_dash_iter507 (    struct StrConcatIter_414  self1090 ) {
    return (  self1090 );
}

static  struct Zip_420   zip506 (    struct StrConcatIter_414  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_414  left_dash_it687 = ( (  into_dash_iter507 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_423   into_dash_iter509 (    struct StrConcatIter_423  self1090 ) {
    return (  self1090 );
}

static  struct Zip_422   zip508 (    struct StrConcatIter_423  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_423  left_dash_it687 = ( (  into_dash_iter509 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_422) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_427   into_dash_iter511 (    struct StrConcatIter_427  self1090 ) {
    return (  self1090 );
}

static  struct Zip_426   zip510 (    struct StrConcatIter_427  left684 ,    struct FromIter_350  right686 ) {
    struct StrConcatIter_427  left_dash_it687 = ( (  into_dash_iter511 ) ( (  left684 ) ) );
    struct FromIter_350  right_dash_it688 = ( (  into_dash_iter379 ) ( (  right686 ) ) );
    return ( (struct Zip_426) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_513 {
    struct Scanner_298  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_513   into_dash_iter512 (    struct TakeWhile_513  self718 ) {
    return (  self718 );
}

struct TakeWhile_515 {
    struct SliceIter_299  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_515   into_dash_iter514 (    struct TakeWhile_515  self718 ) {
    return (  self718 );
}

struct DropWhile_520 {
    struct SliceIter_299  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_519 {
    struct DropWhile_520  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_518 {
    struct DropWhile_519  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_517 {
    struct DropWhile_518  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_517   into_dash_iter516 (    struct TakeWhile_517  self718 ) {
    return (  self718 );
}

struct TakeWhile_522 {
    struct DropWhile_518  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_522   into_dash_iter521 (    struct TakeWhile_522  self718 ) {
    return (  self718 );
}

struct TakeWhile_524 {
    struct DropWhile_520  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_524   into_dash_iter523 (    struct TakeWhile_524  self718 ) {
    return (  self718 );
}

static  struct Maybe_49   next526 (    struct Scanner_298 *  self2246 ) {
    return ( (  next340 ) ( ( & ( ( * (  self2246 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next525 (    struct TakeWhile_513 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next526 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next527 (    struct TakeWhile_515 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next340 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next529 (    struct DropWhile_520 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next340 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next340 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_49_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref737.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next528 (    struct TakeWhile_524 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next529 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

struct TakeWhile_531 {
    struct DropWhile_518  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next533 (    struct DropWhile_519 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next529 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next529 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_49_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref737.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next532 (    struct DropWhile_518 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next533 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next533 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_49_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref737.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref737 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next530 (    struct TakeWhile_531 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next532 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next534 (    struct TakeWhile_517 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next532 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next535 (    struct TakeWhile_522 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next532 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_49  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref723.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref723 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct TakeWhile_513   take_dash_while536 (    struct Scanner_298 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_513) { .f_it = ( (  into_dash_iter297 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_515   take_dash_while537 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_515) { .f_it = ( (  into_dash_iter301 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_518   into_dash_iter539 (    struct DropWhile_518  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_522   take_dash_while538 (    struct DropWhile_518  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_522) { .f_it = ( (  into_dash_iter539 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_531   take_dash_while540 (    struct DropWhile_518  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_531) { .f_it = ( (  into_dash_iter539 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_517   take_dash_while541 (    struct DropWhile_518  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_517) { .f_it = ( (  into_dash_iter539 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_520   into_dash_iter543 (    struct DropWhile_520  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_524   take_dash_while542 (    struct DropWhile_520  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_524) { .f_it = ( (  into_dash_iter543 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_519   into_dash_iter544 (    struct DropWhile_519  self733 ) {
    return (  self733 );
}

static  struct SliceIter_299   into_dash_iter546 (    struct DynStr_134  self1501 ) {
    return ( (  into_dash_iter303 ) ( ( (  self1501 ) .f_contents ) ) );
}

static  struct DropWhile_520   drop_dash_while545 (    struct DynStr_134  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_520) { .f_it = ( (  into_dash_iter546 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_519   drop_dash_while547 (    struct DropWhile_520  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_519) { .f_it = ( (  into_dash_iter543 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_518   drop_dash_while548 (    struct DropWhile_519  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_518) { .f_it = ( (  into_dash_iter544 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_395   append549 (    enum EmptyIter_306  it760 ,    char  e762 ) {
    return ( (struct AppendIter_395) { .f_it = ( (  into_dash_iter307 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_395   cons550 (    enum EmptyIter_306  it765 ,    char  e767 ) {
    return ( (  append549 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_395   single551 (    char  e770 ) {
    return ( (  cons550 ) ( ( (  nil305 ) ( ) ) ,  (  e770 ) ) );
}

static  struct AppendIter_395   into_dash_iter552 (    struct AppendIter_395  self773 ) {
    return (  self773 );
}

struct Key_557 {
    enum {
        Key_557_Escape_t,
        Key_557_Enter_t,
        Key_557_Tab_t,
        Key_557_Backspace_t,
        Key_557_Char_t,
        Key_557_Ctrl_t,
        Key_557_Up_t,
        Key_557_Down_t,
        Key_557_Left_t,
        Key_557_Right_t,
        Key_557_Home_t,
        Key_557_End_t,
        Key_557_PageUp_t,
        Key_557_PageDown_t,
        Key_557_Delete_t,
        Key_557_Insert_t,
        Key_557_F1_t,
        Key_557_F2_t,
        Key_557_F3_t,
        Key_557_F4_t,
        Key_557_F5_t,
        Key_557_F6_t,
        Key_557_F7_t,
        Key_557_F8_t,
        Key_557_F9_t,
        Key_557_F10_t,
        Key_557_F11_t,
        Key_557_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_557_Char_s;
        struct {
            char  field0;
        } Key_557_Ctrl_s;
    } stuff;
};

static struct Key_557 Key_557_Char (  char  field0 ) {
    return ( struct Key_557 ) { .tag = Key_557_Char_t, .stuff = { .Key_557_Char_s = { .field0 = field0 } } };
};

static struct Key_557 Key_557_Ctrl (  char  field0 ) {
    return ( struct Key_557 ) { .tag = Key_557_Ctrl_t, .stuff = { .Key_557_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_558 {
    enum MouseButton_149  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_556 {
    enum {
        InputEvent_556_Key_t,
        InputEvent_556_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_557  field0;
        } InputEvent_556_Key_s;
        struct {
            struct MouseEvent_558  field0;
        } InputEvent_556_Mouse_s;
    } stuff;
};

static struct InputEvent_556 InputEvent_556_Key (  struct Key_557  field0 ) {
    return ( struct InputEvent_556 ) { .tag = InputEvent_556_Key_t, .stuff = { .InputEvent_556_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_556 InputEvent_556_Mouse (  struct MouseEvent_558  field0 ) {
    return ( struct InputEvent_556 ) { .tag = InputEvent_556_Mouse_t, .stuff = { .InputEvent_556_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_555 {
    enum {
        Maybe_555_None_t,
        Maybe_555_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_556  field0;
        } Maybe_555_Just_s;
    } stuff;
};

static struct Maybe_555 Maybe_555_Just (  struct InputEvent_556  field0 ) {
    return ( struct Maybe_555 ) { .tag = Maybe_555_Just_t, .stuff = { .Maybe_555_Just_s = { .field0 = field0 } } };
};

struct FunIter_554 {
    struct Maybe_555 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_554   into_dash_iter553 (    struct FunIter_554  self782 ) {
    return (  self782 );
}

static  struct Maybe_555   next559 (    struct FunIter_554 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    struct Maybe_555  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref786 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_555_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
}

static  struct FunIter_554   from_dash_function560 (    struct Maybe_555 (*  fun790 )(  ) ) {
    return ( (struct FunIter_554) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env562 {
    struct Slice_291  new_dash_slice1712;
    ;
    ;
};

struct funenv562 {
    enum Unit_13  (*fun) (  struct env562  ,    struct Tuple2_358  );
    struct env562 env;
};

static  enum Unit_13   for_dash_each561 (    struct Zip_349  iterable793 ,   struct funenv562  fun795 ) {
    struct Zip_349  temp563 = ( (  into_dash_iter368 ) ( (  iterable793 ) ) );
    struct Zip_349 *  it796 = ( &temp563 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next359 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv562  temp564 = (  fun795 );
            ( temp564.fun ( temp564.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env566 {
    struct env315 envinst315;
    struct List_3 *  list1759;
};

struct funenv566 {
    enum Unit_13  (*fun) (  struct env566  ,    char  );
    struct env566 env;
};

static  enum Unit_13   for_dash_each565 (    struct DynStr_134  iterable793 ,   struct funenv566  fun795 ) {
    struct SliceIter_299  temp567 = ( (  into_dash_iter546 ) ( (  iterable793 ) ) );
    struct SliceIter_299 *  it796 = ( &temp567 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv566  temp568 = (  fun795 );
            ( temp568.fun ( temp568.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env570 {
    struct Slice_5  new_dash_slice1712;
    ;
    ;
};

struct funenv570 {
    enum Unit_13  (*fun) (  struct env570  ,    struct Tuple2_364  );
    struct env570 env;
};

static  enum Unit_13   for_dash_each569 (    struct Zip_353  iterable793 ,   struct funenv570  fun795 ) {
    struct Zip_353  temp571 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_353 *  it796 = ( &temp571 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next365 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv570  temp572 = (  fun795 );
            ( temp572.fun ( temp572.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env576 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1707;
    ;
    size_t  starting_dash_size1706;
    ;
    ;
    ;
};

struct funenv576 {
    enum Unit_13  (*fun) (  struct env576  ,    struct List_292 *  );
    struct env576 env;
};

struct env575 {
    ;
    ;
    ;
    ;
    ;
    struct env576 envinst576;
};

struct funenv575 {
    enum Unit_13  (*fun) (  struct env575  ,    struct List_292 *  ,    struct List_3  );
    struct env575 env;
};

struct env574 {
    struct env575 envinst575;
    struct List_292 *  list1759;
};

struct funenv574 {
    enum Unit_13  (*fun) (  struct env574  ,    struct List_3  );
    struct env574 env;
};

static  enum Unit_13   for_dash_each573 (    struct Map_310  iterable793 ,   struct funenv574  fun795 ) {
    struct Map_310  temp577 = ( (  into_dash_iter309 ) ( (  iterable793 ) ) );
    struct Map_310 *  it796 = ( &temp577 );
    while ( ( true ) ) {
        struct Maybe_324  dref797 = ( (  next323 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_324_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_324_Just_t ) {
            struct funenv574  temp578 = (  fun795 );
            ( temp578.fun ( temp578.env ,  ( dref797 .stuff .Maybe_324_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_581 {
    struct List_3  f_chars;
};

struct env580 {
    struct env315 envinst315;
    struct StrBuilder_581 *  builder1998;
};

struct funenv580 {
    enum Unit_13  (*fun) (  struct env580  ,    char  );
    struct env580 env;
};

static  struct ConstStrIter_319   into_dash_iter583 (    struct ConstStrIter_319  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each579 (    struct ConstStrIter_319  iterable793 ,   struct funenv580  fun795 ) {
    struct ConstStrIter_319  temp582 = ( (  into_dash_iter583 ) ( (  iterable793 ) ) );
    struct ConstStrIter_319 *  it796 = ( &temp582 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next336 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv580  temp584 = (  fun795 );
            ( temp584.fun ( temp584.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_587 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env586 {
    struct Cell_58 (*  fun1454 )(    struct Cell_58  );
    struct Slice_587  s1452;
    ;
    ;
    ;
};

struct funenv586 {
    enum Unit_13  (*fun) (  struct env586  ,    int32_t  );
    struct env586 env;
};

static  enum Unit_13   for_dash_each585 (    struct Range_374  iterable793 ,   struct funenv586  fun795 ) {
    struct RangeIter_376  temp588 = ( (  into_dash_iter375 ) ( (  iterable793 ) ) );
    struct RangeIter_376 *  it796 = ( &temp588 );
    while ( ( true ) ) {
        struct Maybe_338  dref797 = ( (  next377 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_338_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_338_Just_t ) {
            struct funenv586  temp589 = (  fun795 );
            ( temp589.fun ( temp589.env ,  ( dref797 .stuff .Maybe_338_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env591 {
    struct Cell_58 (*  fun1454 )(    struct Cell_58  );
    struct Slice_587  s1452;
    ;
    ;
    ;
};

struct funenv591 {
    enum Unit_13  (*fun) (  struct env591  ,    int32_t  );
    struct env591 env;
};

static  enum Unit_13   for_dash_each590 (    struct Range_374  iterable793 ,   struct funenv591  fun795 ) {
    struct RangeIter_376  temp592 = ( (  into_dash_iter375 ) ( (  iterable793 ) ) );
    struct RangeIter_376 *  it796 = ( &temp592 );
    while ( ( true ) ) {
        struct Maybe_338  dref797 = ( (  next377 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_338_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_338_Just_t ) {
            struct funenv591  temp593 = (  fun795 );
            ( temp593.fun ( temp593.env ,  ( dref797 .stuff .Maybe_338_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env595 {
    struct Scanner_298 *  it899;
    ;
};

struct funenv595 {
    struct Maybe_49  (*fun) (  struct env595  ,    int32_t  );
    struct env595 env;
};

static  enum Unit_13   for_dash_each594 (    struct Range_374  iterable793 ,   struct funenv595  fun795 ) {
    struct RangeIter_376  temp596 = ( (  into_dash_iter375 ) ( (  iterable793 ) ) );
    struct RangeIter_376 *  it796 = ( &temp596 );
    while ( ( true ) ) {
        struct Maybe_338  dref797 = ( (  next377 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_338_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_338_Just_t ) {
            struct funenv595  temp597 = (  fun795 );
            ( temp597.fun ( temp597.env ,  ( dref797 .stuff .Maybe_338_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env599 {
    ;
    ;
    struct List_292 *  list1731;
    ;
    ;
};

struct funenv599 {
    enum Unit_13  (*fun) (  struct env599  ,    struct Tuple2_358  );
    struct env599 env;
};

static  enum Unit_13   for_dash_each598 (    struct Drop_348  iterable793 ,   struct funenv599  fun795 ) {
    struct Drop_348  temp600 = ( (  into_dash_iter347 ) ( (  iterable793 ) ) );
    struct Drop_348 *  it796 = ( &temp600 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next356 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv599  temp601 = (  fun795 );
            ( temp601.fun ( temp601.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env603 {
    struct Slice_291  dest1411;
    ;
    ;
};

struct funenv603 {
    enum Unit_13  (*fun) (  struct env603  ,    struct Tuple2_358  );
    struct env603 env;
};

static  enum Unit_13   for_dash_each602 (    struct Zip_349  iterable793 ,   struct funenv603  fun795 ) {
    struct Zip_349  temp604 = ( (  into_dash_iter368 ) ( (  iterable793 ) ) );
    struct Zip_349 *  it796 = ( &temp604 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next359 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv603  temp605 = (  fun795 );
            ( temp605.fun ( temp605.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env607 {
    ;
    ;
    struct List_3 *  list1731;
    ;
    ;
};

struct funenv607 {
    enum Unit_13  (*fun) (  struct env607  ,    struct Tuple2_364  );
    struct env607 env;
};

static  enum Unit_13   for_dash_each606 (    struct Drop_352  iterable793 ,   struct funenv607  fun795 ) {
    struct Drop_352  temp608 = ( (  into_dash_iter351 ) ( (  iterable793 ) ) );
    struct Drop_352 *  it796 = ( &temp608 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next362 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv607  temp609 = (  fun795 );
            ( temp609.fun ( temp609.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env611 {
    struct Slice_5  dest1411;
    ;
    ;
};

struct funenv611 {
    enum Unit_13  (*fun) (  struct env611  ,    struct Tuple2_364  );
    struct env611 env;
};

static  enum Unit_13   for_dash_each610 (    struct Zip_353  iterable793 ,   struct funenv611  fun795 ) {
    struct Zip_353  temp612 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_353 *  it796 = ( &temp612 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next365 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv611  temp613 = (  fun795 );
            ( temp613.fun ( temp613.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env615 {
    struct env315 envinst315;
    struct List_3 *  list1759;
};

struct funenv615 {
    enum Unit_13  (*fun) (  struct env615  ,    char  );
    struct env615 env;
};

static  enum Unit_13   for_dash_each614 (    struct List_3 *  iterable793 ,   struct funenv615  fun795 ) {
    struct SliceIter_299  temp616 = ( (  into_dash_iter301 ) ( (  iterable793 ) ) );
    struct SliceIter_299 *  it796 = ( &temp616 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv615  temp617 = (  fun795 );
            ( temp617.fun ( temp617.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env619 {
    struct env315 envinst315;
    struct List_3 *  list1759;
};

struct funenv619 {
    enum Unit_13  (*fun) (  struct env619  ,    char  );
    struct env619 env;
};

static  enum Unit_13   for_dash_each618 (    struct Slice_5  iterable793 ,   struct funenv619  fun795 ) {
    struct SliceIter_299  temp620 = ( (  into_dash_iter303 ) ( (  iterable793 ) ) );
    struct SliceIter_299 *  it796 = ( &temp620 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv619  temp621 = (  fun795 );
            ( temp621.fun ( temp621.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env623 {
    struct env315 envinst315;
    struct StrBuilder_581 *  builder1998;
};

struct funenv623 {
    enum Unit_13  (*fun) (  struct env623  ,    char  );
    struct env623 env;
};

static  enum Unit_13   for_dash_each622 (    struct AppendIter_395  iterable793 ,   struct funenv623  fun795 ) {
    struct AppendIter_395  temp624 = ( (  into_dash_iter552 ) ( (  iterable793 ) ) );
    struct AppendIter_395 *  it796 = ( &temp624 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next449 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv623  temp625 = (  fun795 );
            ( temp625.fun ( temp625.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env627 {
    struct env315 envinst315;
    struct List_3 *  list1759;
};

struct funenv627 {
    enum Unit_13  (*fun) (  struct env627  ,    char  );
    struct env627 env;
};

static  enum Unit_13   for_dash_each626 (    struct TakeWhile_515  iterable793 ,   struct funenv627  fun795 ) {
    struct TakeWhile_515  temp628 = ( (  into_dash_iter514 ) ( (  iterable793 ) ) );
    struct TakeWhile_515 *  it796 = ( &temp628 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next527 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv627  temp629 = (  fun795 );
            ( temp629.fun ( temp629.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_631 {
    struct Slice_291  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_631   into_dash_iter633 (    struct SliceAddressIter_631  self1401 ) {
    return (  self1401 );
}

struct Maybe_634 {
    enum {
        Maybe_634_None_t,
        Maybe_634_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_634_Just_s;
    } stuff;
};

static struct Maybe_634 Maybe_634_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_634 ) { .tag = Maybe_634_Just_t, .stuff = { .Maybe_634_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_634   next635 (    struct SliceAddressIter_631 *  self1404 ) {
    size_t  off1405 = ( ( * (  self1404 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1404 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_634) { .tag = Maybe_634_None_t } );
    }
    struct List_3 *  elem1406 = ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1404 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1405 ) ) ) ) );
    (*  self1404 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_634_Just ) ( (  elem1406 ) ) );
}

static  enum Unit_13   for_dash_each630 (    struct SliceAddressIter_631  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_631  temp632 = ( (  into_dash_iter633 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_631 *  it796 = ( &temp632 );
    while ( ( true ) ) {
        struct Maybe_634  dref797 = ( (  next635 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_634_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_634_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_634_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env637 {
    struct env315 envinst315;
    struct StrBuilder_581 *  builder1998;
};

struct funenv637 {
    enum Unit_13  (*fun) (  struct env637  ,    char  );
    struct env637 env;
};

static  enum Unit_13   for_dash_each636 (    struct TakeWhile_517  iterable793 ,   struct funenv637  fun795 ) {
    struct TakeWhile_517  temp638 = ( (  into_dash_iter516 ) ( (  iterable793 ) ) );
    struct TakeWhile_517 *  it796 = ( &temp638 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next534 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv637  temp639 = (  fun795 );
            ( temp639.fun ( temp639.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env641 {
    struct env315 envinst315;
    struct StrBuilder_581 *  builder1998;
};

struct funenv641 {
    enum Unit_13  (*fun) (  struct env641  ,    char  );
    struct env641 env;
};

static  enum Unit_13   for_dash_each640 (    struct TakeWhile_522  iterable793 ,   struct funenv641  fun795 ) {
    struct TakeWhile_522  temp642 = ( (  into_dash_iter521 ) ( (  iterable793 ) ) );
    struct TakeWhile_522 *  it796 = ( &temp642 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next535 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv641  temp643 = (  fun795 );
            ( temp643.fun ( temp643.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env646 {
    ;
    struct env315 envinst315;
    ;
};

struct funenv646 {
    enum Unit_13  (*fun) (  struct env646  ,    struct StrBuilder_581 *  ,    char  );
    struct env646 env;
};

struct env645 {
    struct env646 envinst646;
    struct StrBuilder_581 *  sb2931;
};

struct funenv645 {
    enum Unit_13  (*fun) (  struct env645  ,    char  );
    struct env645 env;
};

static  enum Unit_13   for_dash_each644 (    struct List_3  iterable793 ,   struct funenv645  fun795 ) {
    struct SliceIter_299  temp647 = ( (  into_dash_iter302 ) ( (  iterable793 ) ) );
    struct SliceIter_299 *  it796 = ( &temp647 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv645  temp648 = (  fun795 );
            ( temp648.fun ( temp648.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env650 {
    struct Cell_58 (*  fun1454 )(    struct Cell_58  );
    struct Slice_587  s1452;
    ;
    ;
    ;
};

struct funenv650 {
    enum Unit_13  (*fun) (  struct env650  ,    int32_t  );
    struct env650 env;
};

static  enum Unit_13   for_dash_each649 (    struct Range_374  iterable793 ,   struct funenv650  fun795 ) {
    struct RangeIter_376  temp651 = ( (  into_dash_iter375 ) ( (  iterable793 ) ) );
    struct RangeIter_376 *  it796 = ( &temp651 );
    while ( ( true ) ) {
        struct Maybe_338  dref797 = ( (  next377 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_338_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_338_Just_t ) {
            struct funenv650  temp652 = (  fun795 );
            ( temp652.fun ( temp652.env ,  ( dref797 .stuff .Maybe_338_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_657 {
    ColorPalette_657_Palette8,
    ColorPalette_657_Palette16,
    ColorPalette_657_Palette256,
    ColorPalette_657_PaletteRGB,
};

struct Tui_656 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_657  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_141  f_orig_dash_termios;
};

struct Screen_655 {
    enum CAllocator_4  f_al;
    struct Tui_656 *  f_tui;
    struct Slice_587  f_current;
    struct Slice_587  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_59  f_default_dash_fg;
    struct Color_59  f_default_dash_bg;
};

struct env654 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv654 {
    enum Unit_13  (*fun) (  struct env654  ,    struct Tuple2_364  );
    struct env654 env;
};

static  enum Unit_13   for_dash_each653 (    struct Zip_387  iterable793 ,   struct funenv654  fun795 ) {
    struct Zip_387  temp658 = ( (  into_dash_iter386 ) ( (  iterable793 ) ) );
    struct Zip_387 *  it796 = ( &temp658 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next437 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv654  temp659 = (  fun795 );
            ( temp659.fun ( temp659.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env661 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv661 {
    enum Unit_13  (*fun) (  struct env661  ,    struct Tuple2_364  );
    struct env661 env;
};

static  enum Unit_13   for_dash_each660 (    struct Zip_390  iterable793 ,   struct funenv661  fun795 ) {
    struct Zip_390  temp662 = ( (  into_dash_iter389 ) ( (  iterable793 ) ) );
    struct Zip_390 *  it796 = ( &temp662 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next444 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv661  temp663 = (  fun795 );
            ( temp663.fun ( temp663.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env665 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv665 {
    enum Unit_13  (*fun) (  struct env665  ,    struct Tuple2_364  );
    struct env665 env;
};

static  enum Unit_13   for_dash_each664 (    struct Zip_397  iterable793 ,   struct funenv665  fun795 ) {
    struct Zip_397  temp666 = ( (  into_dash_iter396 ) ( (  iterable793 ) ) );
    struct Zip_397 *  it796 = ( &temp666 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next450 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv665  temp667 = (  fun795 );
            ( temp667.fun ( temp667.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env669 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv669 {
    enum Unit_13  (*fun) (  struct env669  ,    struct Tuple2_364  );
    struct env669 env;
};

static  enum Unit_13   for_dash_each668 (    struct Zip_401  iterable793 ,   struct funenv669  fun795 ) {
    struct Zip_401  temp670 = ( (  into_dash_iter400 ) ( (  iterable793 ) ) );
    struct Zip_401 *  it796 = ( &temp670 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next458 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv669  temp671 = (  fun795 );
            ( temp671.fun ( temp671.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env673 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv673 {
    enum Unit_13  (*fun) (  struct env673  ,    struct Tuple2_364  );
    struct env673 env;
};

static  enum Unit_13   for_dash_each672 (    struct Zip_411  iterable793 ,   struct funenv673  fun795 ) {
    struct Zip_411  temp674 = ( (  into_dash_iter410 ) ( (  iterable793 ) ) );
    struct Zip_411 *  it796 = ( &temp674 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next467 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv673  temp675 = (  fun795 );
            ( temp675.fun ( temp675.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env677 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv677 {
    enum Unit_13  (*fun) (  struct env677  ,    struct Tuple2_364  );
    struct env677 env;
};

static  enum Unit_13   for_dash_each676 (    struct Zip_416  iterable793 ,   struct funenv677  fun795 ) {
    struct Zip_416  temp678 = ( (  into_dash_iter415 ) ( (  iterable793 ) ) );
    struct Zip_416 *  it796 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next471 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv677  temp679 = (  fun795 );
            ( temp679.fun ( temp679.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env681 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv681 {
    enum Unit_13  (*fun) (  struct env681  ,    struct Tuple2_364  );
    struct env681 env;
};

static  enum Unit_13   for_dash_each680 (    struct Zip_420  iterable793 ,   struct funenv681  fun795 ) {
    struct Zip_420  temp682 = ( (  into_dash_iter419 ) ( (  iterable793 ) ) );
    struct Zip_420 *  it796 = ( &temp682 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next479 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv681  temp683 = (  fun795 );
            ( temp683.fun ( temp683.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env685 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv685 {
    enum Unit_13  (*fun) (  struct env685  ,    struct Tuple2_364  );
    struct env685 env;
};

static  enum Unit_13   for_dash_each684 (    struct Zip_422  iterable793 ,   struct funenv685  fun795 ) {
    struct Zip_422  temp686 = ( (  into_dash_iter421 ) ( (  iterable793 ) ) );
    struct Zip_422 *  it796 = ( &temp686 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next480 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv685  temp687 = (  fun795 );
            ( temp687.fun ( temp687.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env689 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv689 {
    enum Unit_13  (*fun) (  struct env689  ,    struct Tuple2_364  );
    struct env689 env;
};

static  enum Unit_13   for_dash_each688 (    struct Zip_390  iterable793 ,   struct funenv689  fun795 ) {
    struct Zip_390  temp690 = ( (  into_dash_iter389 ) ( (  iterable793 ) ) );
    struct Zip_390 *  it796 = ( &temp690 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next444 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv689  temp691 = (  fun795 );
            ( temp691.fun ( temp691.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env693 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv693 {
    enum Unit_13  (*fun) (  struct env693  ,    struct Tuple2_364  );
    struct env693 env;
};

static  enum Unit_13   for_dash_each692 (    struct Zip_390  iterable793 ,   struct funenv693  fun795 ) {
    struct Zip_390  temp694 = ( (  into_dash_iter389 ) ( (  iterable793 ) ) );
    struct Zip_390 *  it796 = ( &temp694 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next444 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv693  temp695 = (  fun795 );
            ( temp695.fun ( temp695.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env697 {
    ;
    struct Color_59  bg2475;
    ;
    struct Screen_655 *  screen2463;
    struct Color_59  fg2474;
    ;
    size_t  i2471;
};

struct funenv697 {
    enum Unit_13  (*fun) (  struct env697  ,    struct Tuple2_364  );
    struct env697 env;
};

static  enum Unit_13   for_dash_each696 (    struct Zip_426  iterable793 ,   struct funenv697  fun795 ) {
    struct Zip_426  temp698 = ( (  into_dash_iter425 ) ( (  iterable793 ) ) );
    struct Zip_426 *  it796 = ( &temp698 );
    while ( ( true ) ) {
        struct Maybe_363  dref797 = ( (  next483 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_363_Just_t ) {
            struct funenv697  temp699 = (  fun795 );
            ( temp699.fun ( temp699.env ,  ( dref797 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_701 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_701   into_dash_iter702 (    struct SmolArray_103  self1556 ) {
    return ( (struct SmolArrayIter_701) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_708 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_708 StrConcat_708_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_708 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_707 {
    struct StrConcat_708  field0;
    char  field1;
};

static struct StrConcat_707 StrConcat_707_StrConcat (  struct StrConcat_708  field0 ,  char  field1 ) {
    return ( struct StrConcat_707 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_711 {
    const char*  field0;
    struct StrConcat_707  field1;
};

static struct StrConcat_711 StrConcat_711_StrConcat (  const char*  field0 ,  struct StrConcat_707  field1 ) {
    return ( struct StrConcat_711 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_710 {
    struct StrConcat_711  field0;
    char  field1;
};

static struct StrConcat_710 StrConcat_710_StrConcat (  struct StrConcat_711  field0 ,  char  field1 ) {
    return ( struct StrConcat_710 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str715 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str714 (    struct StrConcat_708  self1102 ) {
    struct StrConcat_708  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str715 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str713 (    struct StrConcat_707  self1102 ) {
    struct StrConcat_707  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str714 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str712 (    struct StrConcat_711  self1102 ) {
    struct StrConcat_711  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str713 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str709 (    struct StrConcat_710  self1102 ) {
    struct StrConcat_710  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str712 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic706 (    struct StrConcat_707  errmsg1254 ) {
    ( (  print_dash_str709 ) ( ( ( StrConcat_710_StrConcat ) ( ( ( StrConcat_711_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr705 (    struct Array_104 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic706 ) ( ( ( StrConcat_707_StrConcat ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast195 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get704 (    struct Array_104 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr705 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_335   next703 (    struct SmolArrayIter_701 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    uint32_t  e1565 = ( (  get704 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_335_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce700 (    struct SmolArray_103  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_701  it818 = ( (  into_dash_iter702 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_335  dref819 = ( (  next703 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_335_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_335_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_335_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp716;
    return (  temp716 );
}

struct SmolArrayIter_718 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_718   into_dash_iter719 (    struct SmolArray_106  self1556 ) {
    return ( (struct SmolArrayIter_718) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr722 (    struct Array_107 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic706 ) ( ( ( StrConcat_707_StrConcat ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast196 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get721 (    struct Array_107 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr722 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_335   next720 (    struct SmolArrayIter_718 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    uint32_t  e1565 = ( (  get721 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_335_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce717 (    struct SmolArray_106  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_718  it818 = ( (  into_dash_iter719 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_335  dref819 = ( (  next720 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_335_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_335_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_335_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp723;
    return (  temp723 );
}

struct SmolArrayIter_725 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_725   into_dash_iter726 (    struct SmolArray_109  self1556 ) {
    return ( (struct SmolArrayIter_725) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr729 (    struct Array_110 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic706 ) ( ( ( StrConcat_707_StrConcat ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast197 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get728 (    struct Array_110 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr729 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_335   next727 (    struct SmolArrayIter_725 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    uint32_t  e1565 = ( (  get728 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_335_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce724 (    struct SmolArray_109  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_725  it818 = ( (  into_dash_iter726 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_335  dref819 = ( (  next727 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_335_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_335_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_335_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp730;
    return (  temp730 );
}

static  uint32_t   reduce731 (    struct Map_318  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct Map_318  it818 = ( (  into_dash_iter317 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_335  dref819 = ( (  next334 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_335_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_335_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_335_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp732;
    return (  temp732 );
}

struct Maybe_734 {
    enum {
        Maybe_734_None_t,
        Maybe_734_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_734_Just_s;
    } stuff;
};

static struct Maybe_734 Maybe_734_Just (  int64_t  field0 ) {
    return ( struct Maybe_734 ) { .tag = Maybe_734_Just_t, .stuff = { .Maybe_734_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_734   reduce733 (    struct TakeWhile_513  iterable812 ,    struct Maybe_734  base814 ,    struct Maybe_734 (*  fun816 )(    char  ,    struct Maybe_734  ) ) {
    struct Maybe_734  x817 = (  base814 );
    struct TakeWhile_513  it818 = ( (  into_dash_iter512 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next525 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_734  temp735;
    return (  temp735 );
}

static  size_t   reduce736 (    struct TakeWhile_513  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_513  it818 = ( (  into_dash_iter512 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next525 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp737;
    return (  temp737 );
}

static  int32_t   reduce738 (    struct Map_321  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_321  it818 = ( (  into_dash_iter320 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_338  dref819 = ( (  next337 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_338_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_338_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_338_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp739;
    return (  temp739 );
}

static  size_t   reduce740 (    struct TakeWhile_515  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_515  it818 = ( (  into_dash_iter514 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next527 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp741;
    return (  temp741 );
}

struct env743 {
    bool (*  fun845 )(    struct Tuple2_436  );
};

struct funenv743 {
    bool  (*fun) (  struct env743  ,    struct Tuple2_436  ,    bool  );
    struct env743 env;
};

static  bool   reduce742 (    struct Zip_385  iterable812 ,    bool  base814 ,   struct funenv743  fun816 ) {
    bool  x817 = (  base814 );
    struct Zip_385  it818 = ( (  into_dash_iter384 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_435  dref819 = ( (  next434 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_435_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_435_Just_t ) {
            struct funenv743  temp744 = (  fun816 );
            x817 = ( temp744.fun ( temp744.env ,  ( dref819 .stuff .Maybe_435_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    bool  temp745;
    return (  temp745 );
}

static  struct Maybe_734   reduce746 (    struct TakeWhile_524  iterable812 ,    struct Maybe_734  base814 ,    struct Maybe_734 (*  fun816 )(    char  ,    struct Maybe_734  ) ) {
    struct Maybe_734  x817 = (  base814 );
    struct TakeWhile_524  it818 = ( (  into_dash_iter523 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next528 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_734  temp747;
    return (  temp747 );
}

static  size_t   reduce748 (    struct IntStrIter_388  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_388  it818 = ( (  into_dash_iter495 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next438 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp749;
    return (  temp749 );
}

static  size_t   reduce750 (    struct StrConcatIter_391  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_391  it818 = ( (  into_dash_iter497 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next445 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp751;
    return (  temp751 );
}

static  size_t   reduce752 (    struct StrConcatIter_398  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_398  it818 = ( (  into_dash_iter499 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next451 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp753;
    return (  temp753 );
}

static  size_t   reduce754 (    struct StrConcatIter_402  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_402  it818 = ( (  into_dash_iter501 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next459 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp755;
    return (  temp755 );
}

static  size_t   reduce756 (    struct StrConcatIter_412  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_412  it818 = ( (  into_dash_iter503 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next468 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp757;
    return (  temp757 );
}

static  size_t   reduce758 (    struct StrConcatIter_417  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_417  it818 = ( (  into_dash_iter505 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next472 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp759;
    return (  temp759 );
}

static  size_t   reduce760 (    struct StrConcatIter_414  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_414  it818 = ( (  into_dash_iter507 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next470 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp761;
    return (  temp761 );
}

static  size_t   reduce762 (    struct StrConcatIter_423  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_423  it818 = ( (  into_dash_iter509 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next481 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp763;
    return (  temp763 );
}

static  size_t   reduce764 (    struct StrConcatIter_427  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_427  it818 = ( (  into_dash_iter511 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next484 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp765;
    return (  temp765 );
}

static  size_t   lam767 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count766 (    struct TakeWhile_513  it823 ) {
    return ( (  reduce736 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam767 ) ) );
}

static  size_t   lam769 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count768 (    struct TakeWhile_515  it823 ) {
    return ( (  reduce740 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam769 ) ) );
}

static  size_t   lam771 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count770 (    struct IntStrIter_388  it823 ) {
    return ( (  reduce748 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam771 ) ) );
}

static  size_t   lam773 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count772 (    struct StrConcatIter_391  it823 ) {
    return ( (  reduce750 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam773 ) ) );
}

static  size_t   lam775 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count774 (    struct StrConcatIter_398  it823 ) {
    return ( (  reduce752 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam775 ) ) );
}

static  size_t   lam777 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count776 (    struct StrConcatIter_402  it823 ) {
    return ( (  reduce754 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam777 ) ) );
}

static  size_t   lam779 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count778 (    struct StrConcatIter_412  it823 ) {
    return ( (  reduce756 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam779 ) ) );
}

static  size_t   lam781 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count780 (    struct StrConcatIter_417  it823 ) {
    return ( (  reduce758 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam781 ) ) );
}

static  size_t   lam783 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count782 (    struct StrConcatIter_414  it823 ) {
    return ( (  reduce760 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam783 ) ) );
}

static  size_t   lam785 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count784 (    struct StrConcatIter_423  it823 ) {
    return ( (  reduce762 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam785 ) ) );
}

static  size_t   lam787 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add98 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count786 (    struct StrConcatIter_427  it823 ) {
    return ( (  reduce764 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam787 ) ) );
}

static  int32_t   lam789 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add87 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum788 (    struct Map_321  it829 ) {
    return ( (  reduce738 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam789 ) ) );
}

static  bool   lam743 (   struct env743 env ,    struct Tuple2_436  e847 ,    bool  x849 ) {
    return ( ( ( env.fun845 ) ( (  e847 ) ) ) && (  x849 ) );
}

static  bool   all790 (    struct Zip_385  it843 ,    bool (*  fun845 )(    struct Tuple2_436  ) ) {
    struct env743 envinst743 = {
        .fun845 =  fun845 ,
    };
    return ( (  reduce742 ) ( (  it843 ) ,  ( true ) ,  ( (struct funenv743){ .fun = lam743, .env = envinst743 } ) ) );
}

static  struct Maybe_324   head791 (    struct List_292 *  it861 ) {
    struct SliceIter_290  temp792 = ( (  into_dash_iter289 ) ( (  it861 ) ) );
    return ( (  next360 ) ( ( &temp792 ) ) );
}

static  struct Maybe_49   head793 (    struct TakeWhile_513  it861 ) {
    struct TakeWhile_513  temp794 = ( (  into_dash_iter512 ) ( (  it861 ) ) );
    return ( (  next525 ) ( ( &temp794 ) ) );
}

static  struct Maybe_325   head795 (    struct LineIter_311  it861 ) {
    struct LineIter_311  temp796 = ( (  into_dash_iter342 ) ( (  it861 ) ) );
    return ( (  next326 ) ( ( &temp796 ) ) );
}

static  struct Maybe_49   head797 (    struct TakeWhile_517  it861 ) {
    struct TakeWhile_517  temp798 = ( (  into_dash_iter516 ) ( (  it861 ) ) );
    return ( (  next534 ) ( ( &temp798 ) ) );
}

static  struct Maybe_49   head799 (    struct TakeWhile_524  it861 ) {
    struct TakeWhile_524  temp800 = ( (  into_dash_iter523 ) ( (  it861 ) ) );
    return ( (  next528 ) ( ( &temp800 ) ) );
}

static  bool   null801 (    struct List_292 *  it864 ) {
    struct Maybe_324  dref865 = ( (  head791 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_324_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null802 (    struct TakeWhile_513  it864 ) {
    struct Maybe_49  dref865 = ( (  head793 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null803 (    struct TakeWhile_517  it864 ) {
    struct Maybe_49  dref865 = ( (  head797 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam595 (   struct env595 env ,    int32_t  dref902 ) {
    return ( (  next526 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_804 (    struct Scanner_298 *  it899 ,    size_t  n901 ) {
    struct env595 envinst595 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each594 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32282 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv595){ .fun = lam595, .env = envinst595 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or805 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors806 (    struct SmolArray_103  vals947 ) {
    return ( (  reduce700 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or805 ) ) );
}

static  uint32_t   u32_dash_ors807 (    struct SmolArray_106  vals947 ) {
    return ( (  reduce717 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or805 ) ) );
}

static  uint32_t   u32_dash_ors808 (    struct SmolArray_109  vals947 ) {
    return ( (  reduce724 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or805 ) ) );
}

static  uint32_t   u32_dash_and809 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg810 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod811 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div85 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub84 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp79 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

static  enum Ordering_10   cmp813 (    struct Cursor_182  l2516 ,    struct Cursor_182  r2518 ) {
    enum Ordering_10  dref2519 = ( (  cmp80 ) ( ( (  l2516 ) .f_y ) ,  ( (  r2518 ) .f_y ) ) );
    switch (  dref2519 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2516 ) .f_x ) ,  ( (  r2518 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2520 =  dref2519;
            return (  els2520 );
            break;
        }
    }
}

static  struct Cursor_182   min812 (    struct Cursor_182  l965 ,    struct Cursor_182  r967 ) {
    if ( (  cmp813 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min814 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp80 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   char_dash_i32817 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed262 ) ( (  c1220 ) ) );
}

static  enum Ordering_10   cmp816 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32817 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32817 ) ( (  r1246 ) ) ) ) );
}

static  char   min815 (    char  l965 ,    char  r967 ) {
    if ( (  cmp816 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max818 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp80 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_182   max819 (    struct Cursor_182  l970 ,    struct Cursor_182  r972 ) {
    if ( (  cmp813 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  char   max820 (    char  l970 ,    char  r972 ) {
    if ( (  cmp816 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between821 (    char  c975 ,    char  l977 ,    char  r979 ) {
    char  from980 = ( (  min815 ) ( (  l977 ) ,  (  r979 ) ) );
    char  to981 = ( (  max820 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp816 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp816 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  bool   between822 (    struct Cursor_182  c975 ,    struct Cursor_182  l977 ,    struct Cursor_182  r979 ) {
    struct Cursor_182  from980 = ( (  min812 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_182  to981 = ( (  max819 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp813 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp813 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp823 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
    if ( (  cmp80 ( (  x990 ) , (  mn992 ) ) == 0 ) ) {
        return (  mn992 );
    } else {
        if ( (  cmp80 ( (  x990 ) , (  mx994 ) ) == 2 ) ) {
            return (  mx994 );
        } else {
            return (  x990 );
        }
    }
}

static  struct ConstStrIter_319   chars824 (    const char*  self1014 ) {
    return ( (  into_dash_iter344 ) ( (  self1014 ) ) );
}

static  struct AppendIter_395   chars825 (    char  self1020 ) {
    return ( (  single551 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits826 (    size_t  self1035 ) {
    if ( (  eq45 ( (  self1035 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1035 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div101 ( (  self1035 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1036 = (  op_dash_add87 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits827 (    int32_t  self1035 ) {
    if ( (  eq41 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp80 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div90 ( (  self1035 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1036 = (  op_dash_add87 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits828 (    uint32_t  self1035 ) {
    if ( (  eq42 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp81 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div95 ( (  self1035 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1036 = (  op_dash_add87 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  struct IntStrIter_388   chars829 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_388) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits827 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str830 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_399   chars831 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_399) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits828 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str832 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32288 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_418   chars833 (    size_t  self1066 ) {
    return ( (struct IntStrIter_418) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits826 ) ( (  self1066 ) ) ) } );
}

struct Mode_836 {
    enum {
        Mode_836_Normal_t,
        Mode_836_Insert_t,
        Mode_836_Select_t,
        Mode_836_Cmd_t,
        Mode_836_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_581  field0;
        } Mode_836_Cmd_s;
        struct {
            struct StrBuilder_581  field0;
        } Mode_836_SearchBox_s;
    } stuff;
};

static struct Mode_836 Mode_836_Cmd (  struct StrBuilder_581  field0 ) {
    return ( struct Mode_836 ) { .tag = Mode_836_Cmd_t, .stuff = { .Mode_836_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_836 Mode_836_SearchBox (  struct StrBuilder_581  field0 ) {
    return ( struct Mode_836 ) { .tag = Mode_836_SearchBox_t, .stuff = { .Mode_836_SearchBox_s = { .field0 = field0 } } };
};

struct StrConcat_835 {
    const char*  field0;
    struct Mode_836  field1;
};

static struct StrConcat_835 StrConcat_835_StrConcat (  const char*  field0 ,  struct Mode_836  field1 ) {
    return ( struct StrConcat_835 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_840 {
    const char*  field0;
    struct DynStr_134  field1;
};

static struct StrConcat_840 StrConcat_840_StrConcat (  const char*  field0 ,  struct DynStr_134  field1 ) {
    return ( struct StrConcat_840 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_839 {
    struct StrConcat_840  field0;
    char  field1;
};

static struct StrConcat_839 StrConcat_839_StrConcat (  struct StrConcat_840  field0 ,  char  field1 ) {
    return ( struct StrConcat_839 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_838 {
    enum {
        StrCase_838_StrCase1_t,
        StrCase_838_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_838_StrCase1_s;
        struct {
            struct StrConcat_839  field0;
        } StrCase_838_StrCase2_s;
    } stuff;
};

static struct StrCase_838 StrCase_838_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_838 ) { .tag = StrCase_838_StrCase1_t, .stuff = { .StrCase_838_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_838 StrCase_838_StrCase2 (  struct StrConcat_839  field0 ) {
    return ( struct StrCase_838 ) { .tag = StrCase_838_StrCase2_t, .stuff = { .StrCase_838_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_134   as_dash_str842 (    struct StrBuilder_581 *  builder2029 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice304 ) ( ( ( ( * (  builder2029 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2029 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_299   chars849 (    struct DynStr_134  self1498 ) {
    return ( (  into_dash_iter303 ) ( ( (  self1498 ) .f_contents ) ) );
}

static  struct StrConcatIter_394   into_dash_iter848 (    struct StrConcat_840  dref1097 ) {
    return ( (struct StrConcatIter_394) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars849 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_394   chars847 (    struct StrConcat_840  self1108 ) {
    return ( (  into_dash_iter848 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter846 (    struct StrConcat_839  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars847 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_393   chars845 (    struct StrConcat_839  self1108 ) {
    return ( (  into_dash_iter846 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_392   into_dash_iter844 (    struct StrCase_838  self1121 ) {
    struct StrCase_838  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_838_StrCase1_t ) {
        return ( ( StrCaseIter_392_StrCaseIter1 ) ( ( (  chars824 ) ( ( dref1122 .stuff .StrCase_838_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_838_StrCase2_t ) {
        return ( ( StrCaseIter_392_StrCaseIter2 ) ( ( (  chars845 ) ( ( dref1122 .stuff .StrCase_838_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_392   chars843 (    struct StrCase_838  self1133 ) {
    return ( (  into_dash_iter844 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_392   chars837 (    struct Mode_836  self2542 ) {
    struct StrCase_838  temp841;
    struct StrCase_838  c2543 = (  temp841 );
    struct Mode_836  dref2544 = (  self2542 );
    if ( dref2544.tag == Mode_836_Normal_t ) {
        c2543 = ( ( StrCase_838_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2544.tag == Mode_836_Insert_t ) {
        c2543 = ( ( StrCase_838_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2544.tag == Mode_836_Select_t ) {
        c2543 = ( ( StrCase_838_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2544.tag == Mode_836_Cmd_t ) {
        struct DynStr_134  ss2546 = ( (  as_dash_str842 ) ( ( & ( dref2544 .stuff .Mode_836_Cmd_s .field0 ) ) ) );
        c2543 = ( ( StrCase_838_StrCase2 ) ( ( ( StrConcat_839_StrConcat ) ( ( ( StrConcat_840_StrConcat ) ( ( "Cmd(" ) ,  (  ss2546 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2544.tag == Mode_836_SearchBox_t ) {
        struct DynStr_134  ss2548 = ( (  as_dash_str842 ) ( ( & ( dref2544 .stuff .Mode_836_SearchBox_s .field0 ) ) ) );
        c2543 = ( ( StrCase_838_StrCase2 ) ( ( ( StrConcat_839_StrConcat ) ( ( ( StrConcat_840_StrConcat ) ( ( "Search(" ) ,  (  ss2548 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars843 ) ( (  c2543 ) ) );
}

static  struct StrConcatIter_391   into_dash_iter834 (    struct StrConcat_835  dref1097 ) {
    return ( (struct StrConcatIter_391) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars837 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_851 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_851 StrConcat_851_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_851 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_398   into_dash_iter850 (    struct StrConcat_851  dref1097 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars831 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_853 {
    const char*  field0;
    struct Maybe_363  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  const char*  field0 ,  struct Maybe_363  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_857 {
    const char*  field0;
    struct Tuple2_364  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  const char*  field0 ,  struct Tuple2_364  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrConcat_857  field0;
    char  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_857  field0 ,  char  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_855 {
    enum {
        StrCase_855_StrCase1_t,
        StrCase_855_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_855_StrCase1_s;
        struct {
            struct StrConcat_856  field0;
        } StrCase_855_StrCase2_s;
    } stuff;
};

static struct StrCase_855 StrCase_855_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_855 ) { .tag = StrCase_855_StrCase1_t, .stuff = { .StrCase_855_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_855 StrCase_855_StrCase2 (  struct StrConcat_856  field0 ) {
    return ( struct StrCase_855 ) { .tag = StrCase_855_StrCase2_t, .stuff = { .StrCase_855_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_870 {
    char  field0;
    char  field1;
};

static struct StrConcat_870 StrConcat_870_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_870 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_869 {
    struct StrConcat_870  field0;
    const char*  field1;
};

static struct StrConcat_869 StrConcat_869_StrConcat (  struct StrConcat_870  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_869 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_868 {
    struct StrConcat_869  field0;
    int32_t  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  struct StrConcat_869  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_868 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_867 {
    struct StrConcat_868  field0;
    char  field1;
};

static struct StrConcat_867 StrConcat_867_StrConcat (  struct StrConcat_868  field0 ,  char  field1 ) {
    return ( struct StrConcat_867 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_409   into_dash_iter877 (    struct StrConcat_870  dref1097 ) {
    return ( (struct StrConcatIter_409) { .f_left = ( (  chars825 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_409   chars876 (    struct StrConcat_870  self1108 ) {
    return ( (  into_dash_iter877 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_408   into_dash_iter875 (    struct StrConcat_869  dref1097 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars876 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars824 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_408   chars874 (    struct StrConcat_869  self1108 ) {
    return ( (  into_dash_iter875 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_407   into_dash_iter873 (    struct StrConcat_868  dref1097 ) {
    return ( (struct StrConcatIter_407) { .f_left = ( (  chars874 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars829 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_407   chars872 (    struct StrConcat_868  self1108 ) {
    return ( (  into_dash_iter873 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_406   into_dash_iter871 (    struct StrConcat_867  dref1097 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars872 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_406   chars866 (    struct StrConcat_867  self1108 ) {
    return ( (  into_dash_iter871 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_406   chars865 (    struct Tuple2_364  dref1158 ) {
    return ( (  chars866 ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_869_StrConcat ) ( ( ( StrConcat_870_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_405   into_dash_iter864 (    struct StrConcat_857  dref1097 ) {
    return ( (struct StrConcatIter_405) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars865 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_405   chars863 (    struct StrConcat_857  self1108 ) {
    return ( (  into_dash_iter864 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   into_dash_iter862 (    struct StrConcat_856  dref1097 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars863 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_404   chars861 (    struct StrConcat_856  self1108 ) {
    return ( (  into_dash_iter862 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_403   into_dash_iter860 (    struct StrCase_855  self1121 ) {
    struct StrCase_855  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_855_StrCase1_t ) {
        return ( ( StrCaseIter_403_StrCaseIter1 ) ( ( (  chars824 ) ( ( dref1122 .stuff .StrCase_855_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_855_StrCase2_t ) {
        return ( ( StrCaseIter_403_StrCaseIter2 ) ( ( (  chars861 ) ( ( dref1122 .stuff .StrCase_855_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_403   chars859 (    struct StrCase_855  self1133 ) {
    return ( (  into_dash_iter860 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_403   chars854 (    struct Maybe_363  self1147 ) {
    struct StrCase_855  temp858;
    struct StrCase_855  c1148 = (  temp858 );
    struct Maybe_363  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_363_None_t ) {
        c1148 = ( ( StrCase_855_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_363_Just_t ) {
        c1148 = ( ( StrCase_855_StrCase2 ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_363_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars859 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_402   into_dash_iter852 (    struct StrConcat_853  dref1097 ) {
    return ( (struct StrConcatIter_402) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars854 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_881 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_881 StrConcat_881_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_881 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_880 {
    struct StrConcat_881  field0;
    char  field1;
};

static struct StrConcat_880 StrConcat_880_StrConcat (  struct StrConcat_881  field0 ,  char  field1 ) {
    return ( struct StrConcat_880 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_879 {
    struct StrConcat_880  field0;
    int32_t  field1;
};

static struct StrConcat_879 StrConcat_879_StrConcat (  struct StrConcat_880  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_879 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_414   into_dash_iter885 (    struct StrConcat_881  dref1097 ) {
    return ( (struct StrConcatIter_414) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars829 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_414   chars884 (    struct StrConcat_881  self1108 ) {
    return ( (  into_dash_iter885 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_413   into_dash_iter883 (    struct StrConcat_880  dref1097 ) {
    return ( (struct StrConcatIter_413) { .f_left = ( (  chars884 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_413   chars882 (    struct StrConcat_880  self1108 ) {
    return ( (  into_dash_iter883 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_412   into_dash_iter878 (    struct StrConcat_879  dref1097 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars882 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars829 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_417   into_dash_iter886 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_417) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars833 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_889 {
    struct StrConcat_881  field0;
    const char*  field1;
};

static struct StrConcat_889 StrConcat_889_StrConcat (  struct StrConcat_881  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_889 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_888 {
    struct StrConcat_889  field0;
    int32_t  field1;
};

static struct StrConcat_888 StrConcat_888_StrConcat (  struct StrConcat_889  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_888 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_424   into_dash_iter891 (    struct StrConcat_889  dref1097 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars884 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars824 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars890 (    struct StrConcat_889  self1108 ) {
    return ( (  into_dash_iter891 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter887 (    struct StrConcat_888  dref1097 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars890 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars829 ) ( ( dref1097 .field1 ) ) ) } );
}

struct Maybe_894 {
    enum {
        Maybe_894_None_t,
        Maybe_894_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_581  field0;
        } Maybe_894_Just_s;
    } stuff;
};

static struct Maybe_894 Maybe_894_Just (  struct StrBuilder_581  field0 ) {
    return ( struct Maybe_894 ) { .tag = Maybe_894_Just_t, .stuff = { .Maybe_894_Just_s = { .field0 = field0 } } };
};

struct StrConcat_893 {
    const char*  field0;
    struct Maybe_894  field1;
};

static struct StrConcat_893 StrConcat_893_StrConcat (  const char*  field0 ,  struct Maybe_894  field1 ) {
    return ( struct StrConcat_893 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_898 {
    const char*  field0;
    struct StrBuilder_581  field1;
};

static struct StrConcat_898 StrConcat_898_StrConcat (  const char*  field0 ,  struct StrBuilder_581  field1 ) {
    return ( struct StrConcat_898 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_897 {
    struct StrConcat_898  field0;
    char  field1;
};

static struct StrConcat_897 StrConcat_897_StrConcat (  struct StrConcat_898  field0 ,  char  field1 ) {
    return ( struct StrConcat_897 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_896 {
    enum {
        StrCase_896_StrCase1_t,
        StrCase_896_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_896_StrCase1_s;
        struct {
            struct StrConcat_897  field0;
        } StrCase_896_StrCase2_s;
    } stuff;
};

static struct StrCase_896 StrCase_896_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_896 ) { .tag = StrCase_896_StrCase1_t, .stuff = { .StrCase_896_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_896 StrCase_896_StrCase2 (  struct StrConcat_897  field0 ) {
    return ( struct StrCase_896 ) { .tag = StrCase_896_StrCase2_t, .stuff = { .StrCase_896_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_299   chars906 (    struct StrBuilder_581  s2043 ) {
    return ( (  into_dash_iter302 ) ( ( (  s2043 ) .f_chars ) ) );
}

static  struct StrConcatIter_394   into_dash_iter905 (    struct StrConcat_898  dref1097 ) {
    return ( (struct StrConcatIter_394) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars906 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_394   chars904 (    struct StrConcat_898  self1108 ) {
    return ( (  into_dash_iter905 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter903 (    struct StrConcat_897  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars904 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_393   chars902 (    struct StrConcat_897  self1108 ) {
    return ( (  into_dash_iter903 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_392   into_dash_iter901 (    struct StrCase_896  self1121 ) {
    struct StrCase_896  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_896_StrCase1_t ) {
        return ( ( StrCaseIter_392_StrCaseIter1 ) ( ( (  chars824 ) ( ( dref1122 .stuff .StrCase_896_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_896_StrCase2_t ) {
        return ( ( StrCaseIter_392_StrCaseIter2 ) ( ( (  chars902 ) ( ( dref1122 .stuff .StrCase_896_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_392   chars900 (    struct StrCase_896  self1133 ) {
    return ( (  into_dash_iter901 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_392   chars895 (    struct Maybe_894  self1147 ) {
    struct StrCase_896  temp899;
    struct StrCase_896  c1148 = (  temp899 );
    struct Maybe_894  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_894_None_t ) {
        c1148 = ( ( StrCase_896_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_894_Just_t ) {
        c1148 = ( ( StrCase_896_StrCase2 ) ( ( ( StrConcat_897_StrConcat ) ( ( ( StrConcat_898_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_894_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars900 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_391   into_dash_iter892 (    struct StrConcat_893  dref1097 ) {
    return ( (struct StrConcatIter_391) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars895 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_908 {
    const char*  field0;
    struct Maybe_325  field1;
};

static struct StrConcat_908 StrConcat_908_StrConcat (  const char*  field0 ,  struct Maybe_325  field1 ) {
    return ( struct StrConcat_908 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_392   chars909 (    struct Maybe_325  self1147 ) {
    struct StrCase_838  temp910;
    struct StrCase_838  c1148 = (  temp910 );
    struct Maybe_325  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_325_None_t ) {
        c1148 = ( ( StrCase_838_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_325_Just_t ) {
        c1148 = ( ( StrCase_838_StrCase2 ) ( ( ( StrConcat_839_StrConcat ) ( ( ( StrConcat_840_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_325_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars843 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_391   into_dash_iter907 (    struct StrConcat_908  dref1097 ) {
    return ( (struct StrConcatIter_391) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars909 ) ( ( dref1097 .field1 ) ) ) } );
}

struct Maybe_913 {
    enum {
        Maybe_913_None_t,
        Maybe_913_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_913_Just_s;
    } stuff;
};

static struct Maybe_913 Maybe_913_Just (  size_t  field0 ) {
    return ( struct Maybe_913 ) { .tag = Maybe_913_Just_t, .stuff = { .Maybe_913_Just_s = { .field0 = field0 } } };
};

struct StrConcat_912 {
    const char*  field0;
    struct Maybe_913  field1;
};

static struct StrConcat_912 StrConcat_912_StrConcat (  const char*  field0 ,  struct Maybe_913  field1 ) {
    return ( struct StrConcat_912 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_916 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_916 StrConcat_916_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_916 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_915 {
    enum {
        StrCase_915_StrCase1_t,
        StrCase_915_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_915_StrCase1_s;
        struct {
            struct StrConcat_916  field0;
        } StrCase_915_StrCase2_s;
    } stuff;
};

static struct StrCase_915 StrCase_915_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_915 ) { .tag = StrCase_915_StrCase1_t, .stuff = { .StrCase_915_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_915 StrCase_915_StrCase2 (  struct StrConcat_916  field0 ) {
    return ( struct StrCase_915 ) { .tag = StrCase_915_StrCase2_t, .stuff = { .StrCase_915_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_417   chars922 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter886 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_429   into_dash_iter921 (    struct StrConcat_916  dref1097 ) {
    return ( (struct StrConcatIter_429) { .f_left = ( (  chars922 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars825 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_429   chars920 (    struct StrConcat_916  self1108 ) {
    return ( (  into_dash_iter921 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_428   into_dash_iter919 (    struct StrCase_915  self1121 ) {
    struct StrCase_915  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_915_StrCase1_t ) {
        return ( ( StrCaseIter_428_StrCaseIter1 ) ( ( (  chars824 ) ( ( dref1122 .stuff .StrCase_915_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_915_StrCase2_t ) {
        return ( ( StrCaseIter_428_StrCaseIter2 ) ( ( (  chars920 ) ( ( dref1122 .stuff .StrCase_915_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_428   chars918 (    struct StrCase_915  self1133 ) {
    return ( (  into_dash_iter919 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_428   chars914 (    struct Maybe_913  self1147 ) {
    struct StrCase_915  temp917;
    struct StrCase_915  c1148 = (  temp917 );
    struct Maybe_913  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_913_None_t ) {
        c1148 = ( ( StrCase_915_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_913_Just_t ) {
        c1148 = ( ( StrCase_915_StrCase2 ) ( ( ( StrConcat_916_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_913_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars918 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_427   into_dash_iter911 (    struct StrConcat_912  dref1097 ) {
    return ( (struct StrConcatIter_427) { .f_left = ( (  chars824 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_927 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_927 StrConcat_927_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_927 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_926 {
    struct StrConcat_927  field0;
    char  field1;
};

static struct StrConcat_926 StrConcat_926_StrConcat (  struct StrConcat_927  field0 ,  char  field1 ) {
    return ( struct StrConcat_926 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_925 {
    const char*  field0;
    struct StrConcat_926  field1;
};

static struct StrConcat_925 StrConcat_925_StrConcat (  const char*  field0 ,  struct StrConcat_926  field1 ) {
    return ( struct StrConcat_925 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_924 {
    struct StrConcat_925  field0;
    char  field1;
};

static struct StrConcat_924 StrConcat_924_StrConcat (  struct StrConcat_925  field0 ,  char  field1 ) {
    return ( struct StrConcat_924 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str930 (    struct StrConcat_927  self1102 ) {
    struct StrConcat_927  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str929 (    struct StrConcat_926  self1102 ) {
    struct StrConcat_926  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str930 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str928 (    struct StrConcat_925  self1102 ) {
    struct StrConcat_925  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str929 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str923 (    struct StrConcat_924  self1102 ) {
    struct StrConcat_924  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str928 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_933 {
    const char*  field0;
    struct StrConcat_869  field1;
};

static struct StrConcat_933 StrConcat_933_StrConcat (  const char*  field0 ,  struct StrConcat_869  field1 ) {
    return ( struct StrConcat_933 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_932 {
    struct StrConcat_933  field0;
    char  field1;
};

static struct StrConcat_932 StrConcat_932_StrConcat (  struct StrConcat_933  field0 ,  char  field1 ) {
    return ( struct StrConcat_932 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str936 (    struct StrConcat_870  self1102 ) {
    struct StrConcat_870  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str935 (    struct StrConcat_869  self1102 ) {
    struct StrConcat_869  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str936 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str934 (    struct StrConcat_933  self1102 ) {
    struct StrConcat_933  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str935 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str931 (    struct StrConcat_932  self1102 ) {
    struct StrConcat_932  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str934 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_940 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_940 StrConcat_940_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_939 {
    const char*  field0;
    struct StrConcat_940  field1;
};

static struct StrConcat_939 StrConcat_939_StrConcat (  const char*  field0 ,  struct StrConcat_940  field1 ) {
    return ( struct StrConcat_939 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_938 {
    struct StrConcat_939  field0;
    char  field1;
};

static struct StrConcat_938 StrConcat_938_StrConcat (  struct StrConcat_939  field0 ,  char  field1 ) {
    return ( struct StrConcat_938 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str942 (    struct StrConcat_940  self1102 ) {
    struct StrConcat_940  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str941 (    struct StrConcat_939  self1102 ) {
    struct StrConcat_939  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str942 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str937 (    struct StrConcat_938  self1102 ) {
    struct StrConcat_938  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str941 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_945 {
    const char*  field0;
    struct StrConcat_835  field1;
};

static struct StrConcat_945 StrConcat_945_StrConcat (  const char*  field0 ,  struct StrConcat_835  field1 ) {
    return ( struct StrConcat_945 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_944 {
    struct StrConcat_945  field0;
    char  field1;
};

static struct StrConcat_944 StrConcat_944_StrConcat (  struct StrConcat_945  field0 ,  char  field1 ) {
    return ( struct StrConcat_944 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str950 (    struct DynStr_134  self1495 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1495 ) .f_contents ) .f_count ) ,  ( ( (  self1495 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str949 (    struct StrConcat_840  self1102 ) {
    struct StrConcat_840  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str950 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str948 (    struct Mode_836  self2534 ) {
    struct Mode_836  dref2535 = (  self2534 );
    if ( dref2535.tag == Mode_836_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2535.tag == Mode_836_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2535.tag == Mode_836_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2535.tag == Mode_836_Cmd_t ) {
        struct DynStr_134  ss2537 = ( (  as_dash_str842 ) ( ( & ( dref2535 .stuff .Mode_836_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str949 ) ( ( ( StrConcat_840_StrConcat ) ( ( "Cmd " ) ,  (  ss2537 ) ) ) ) );
    }
    else if ( dref2535.tag == Mode_836_SearchBox_t ) {
        struct DynStr_134  ss2539 = ( (  as_dash_str842 ) ( ( & ( dref2535 .stuff .Mode_836_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str949 ) ( ( ( StrConcat_840_StrConcat ) ( ( "Search " ) ,  (  ss2539 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str947 (    struct StrConcat_835  self1102 ) {
    struct StrConcat_835  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str948 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str946 (    struct StrConcat_945  self1102 ) {
    struct StrConcat_945  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str947 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str943 (    struct StrConcat_944  self1102 ) {
    struct StrConcat_944  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str946 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_953 {
    const char*  field0;
    struct StrConcat_927  field1;
};

static struct StrConcat_953 StrConcat_953_StrConcat (  const char*  field0 ,  struct StrConcat_927  field1 ) {
    return ( struct StrConcat_953 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_952 {
    struct StrConcat_953  field0;
    char  field1;
};

static struct StrConcat_952 StrConcat_952_StrConcat (  struct StrConcat_953  field0 ,  char  field1 ) {
    return ( struct StrConcat_952 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str954 (    struct StrConcat_953  self1102 ) {
    struct StrConcat_953  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str930 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str951 (    struct StrConcat_952  self1102 ) {
    struct StrConcat_952  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str954 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_958 {
    struct StrConcat_851  field0;
    char  field1;
};

static struct StrConcat_958 StrConcat_958_StrConcat (  struct StrConcat_851  field0 ,  char  field1 ) {
    return ( struct StrConcat_958 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_957 {
    struct StrConcat_958  field0;
    uint32_t  field1;
};

static struct StrConcat_957 StrConcat_957_StrConcat (  struct StrConcat_958  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_957 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_956 {
    struct StrConcat_957  field0;
    char  field1;
};

static struct StrConcat_956 StrConcat_956_StrConcat (  struct StrConcat_957  field0 ,  char  field1 ) {
    return ( struct StrConcat_956 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str961 (    struct StrConcat_851  self1102 ) {
    struct StrConcat_851  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str830 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str960 (    struct StrConcat_958  self1102 ) {
    struct StrConcat_958  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str961 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str959 (    struct StrConcat_957  self1102 ) {
    struct StrConcat_957  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str960 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str830 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str955 (    struct StrConcat_956  self1102 ) {
    struct StrConcat_956  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str959 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_968 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_968 StrConcat_968_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_968 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_967 {
    struct StrConcat_968  field0;
    char  field1;
};

static struct StrConcat_967 StrConcat_967_StrConcat (  struct StrConcat_968  field0 ,  char  field1 ) {
    return ( struct StrConcat_967 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_966 {
    struct StrConcat_967  field0;
    uint8_t  field1;
};

static struct StrConcat_966 StrConcat_966_StrConcat (  struct StrConcat_967  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_966 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_965 {
    struct StrConcat_966  field0;
    char  field1;
};

static struct StrConcat_965 StrConcat_965_StrConcat (  struct StrConcat_966  field0 ,  char  field1 ) {
    return ( struct StrConcat_965 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_964 {
    struct StrConcat_965  field0;
    uint8_t  field1;
};

static struct StrConcat_964 StrConcat_964_StrConcat (  struct StrConcat_965  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_964 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_963 {
    struct StrConcat_964  field0;
    char  field1;
};

static struct StrConcat_963 StrConcat_963_StrConcat (  struct StrConcat_964  field0 ,  char  field1 ) {
    return ( struct StrConcat_963 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str973 (    struct StrConcat_968  self1102 ) {
    struct StrConcat_968  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str832 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str972 (    struct StrConcat_967  self1102 ) {
    struct StrConcat_967  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str973 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str971 (    struct StrConcat_966  self1102 ) {
    struct StrConcat_966  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str972 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str832 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str970 (    struct StrConcat_965  self1102 ) {
    struct StrConcat_965  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str971 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str969 (    struct StrConcat_964  self1102 ) {
    struct StrConcat_964  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str970 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str832 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str962 (    struct StrConcat_963  self1102 ) {
    struct StrConcat_963  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str969 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_391   chars974 (    struct StrConcat_835  self1108 ) {
    return ( (  into_dash_iter834 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_398   chars975 (    struct StrConcat_851  self1108 ) {
    return ( (  into_dash_iter850 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_402   chars976 (    struct StrConcat_853  self1108 ) {
    return ( (  into_dash_iter852 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_412   chars977 (    struct StrConcat_879  self1108 ) {
    return ( (  into_dash_iter878 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_423   chars978 (    struct StrConcat_888  self1108 ) {
    return ( (  into_dash_iter887 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_391   chars979 (    struct StrConcat_893  self1108 ) {
    return ( (  into_dash_iter892 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_391   chars980 (    struct StrConcat_908  self1108 ) {
    return ( (  into_dash_iter907 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_427   chars981 (    struct StrConcat_912  self1108 ) {
    return ( (  into_dash_iter911 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_513   chars982 (    struct TakeWhile_513  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_524   chars983 (    struct TakeWhile_524  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_531   chars984 (    struct TakeWhile_531  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_517   chars985 (    struct TakeWhile_517  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_522   chars986 (    struct TakeWhile_522  self1193 ) {
    return (  self1193 );
}

static  bool   eq987 (    struct TakeWhile_524  l1203 ,    char  r1205 ) {
    struct TakeWhile_524  temp988 = ( (  chars983 ) ( (  l1203 ) ) );
    struct TakeWhile_524 *  l1206 = ( &temp988 );
    struct AppendIter_395  temp989 = ( (  chars825 ) ( (  r1205 ) ) );
    struct AppendIter_395 *  r1207 = ( &temp989 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1208 = ( (  next528 ) ( (  l1206 ) ) );
        struct Maybe_49  mrc1209 = ( (  next449 ) ( (  r1207 ) ) );
        struct Tuple2_50  dref1210 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_49_None_t && dref1210 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_49_Just_t && dref1210 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1210 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq990 (    struct TakeWhile_524  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_524  temp991 = ( (  chars983 ) ( (  l1203 ) ) );
    struct TakeWhile_524 *  l1206 = ( &temp991 );
    struct ConstStrIter_319  temp992 = ( (  chars824 ) ( (  r1205 ) ) );
    struct ConstStrIter_319 *  r1207 = ( &temp992 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1208 = ( (  next528 ) ( (  l1206 ) ) );
        struct Maybe_49  mrc1209 = ( (  next336 ) ( (  r1207 ) ) );
        struct Tuple2_50  dref1210 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_49_None_t && dref1210 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_49_Just_t && dref1210 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1210 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq993 (    struct TakeWhile_531  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_531  temp994 = ( (  chars984 ) ( (  l1203 ) ) );
    struct TakeWhile_531 *  l1206 = ( &temp994 );
    struct ConstStrIter_319  temp995 = ( (  chars824 ) ( (  r1205 ) ) );
    struct ConstStrIter_319 *  r1207 = ( &temp995 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1208 = ( (  next530 ) ( (  l1206 ) ) );
        struct Maybe_49  mrc1209 = ( (  next336 ) ( (  r1207 ) ) );
        struct Tuple2_50  dref1210 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_49_None_t && dref1210 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_49_Just_t && dref1210 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1210 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t   char_dash_u8996 (    char  c1223 ) {
    return ( (  cast203 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char997 (    int32_t  i1226 ) {
    return ( (  cast205 ) ( (  i1226 ) ) );
}

static  bool   eq998 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable999 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined151 ) ( ) );
}

static  enum Unit_13   unreachable1000 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined153 ) ( ) );
}

static  enum Unit_13   panic1001 (    struct StrConcat_926  errmsg1254 ) {
    ( (  print_dash_str923 ) ( ( ( StrConcat_924_StrConcat ) ( ( ( StrConcat_925_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1002 (    struct StrConcat_869  errmsg1254 ) {
    ( (  print_dash_str931 ) ( ( ( StrConcat_932_StrConcat ) ( ( ( StrConcat_933_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1003 (    const char*  errmsg1254 ) {
    ( (  print_dash_str929 ) ( ( ( StrConcat_926_StrConcat ) ( ( ( StrConcat_927_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1004 (    struct StrConcat_940  errmsg1254 ) {
    ( (  print_dash_str937 ) ( ( ( StrConcat_938_StrConcat ) ( ( ( StrConcat_939_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1005 (    struct StrConcat_835  errmsg1254 ) {
    ( (  print_dash_str943 ) ( ( ( StrConcat_944_StrConcat ) ( ( ( StrConcat_945_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1006 (    struct StrConcat_927  errmsg1254 ) {
    ( (  print_dash_str951 ) ( ( ( StrConcat_952_StrConcat ) ( ( ( StrConcat_953_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   panic_prime_1007 (    const char*  errmsg1257 ) {
    ( (  print_dash_str929 ) ( ( ( StrConcat_926_StrConcat ) ( ( ( StrConcat_927_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   assert1008 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str929 ) ( ( ( StrConcat_926_StrConcat ) ( ( ( StrConcat_927_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1009 (    struct Maybe_277  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_277  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_277_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_277_Just_t ) {
        return ( dref1270 .stuff .Maybe_277_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1010 (    struct Maybe_325  x1267 ,    struct StrConcat_926  errmsg1269 ) {
    struct Maybe_325  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_325_None_t ) {
        ( (  panic1001 ) ( (  errmsg1269 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_325_Just_t ) {
        return ( dref1270 .stuff .Maybe_325_Just_s .field0 );
    }
}

struct Maybe_1012 {
    enum {
        Maybe_1012_None_t,
        Maybe_1012_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58  field0;
        } Maybe_1012_Just_s;
    } stuff;
};

static struct Maybe_1012 Maybe_1012_Just (  struct Cell_58  field0 ) {
    return ( struct Maybe_1012 ) { .tag = Maybe_1012_Just_t, .stuff = { .Maybe_1012_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58   or_dash_fail1011 (    struct Maybe_1012  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_1012  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1012_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1012_Just_t ) {
        return ( dref1270 .stuff .Maybe_1012_Just_s .field0 );
    }
}

struct Maybe_1014 {
    enum {
        Maybe_1014_None_t,
        Maybe_1014_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1014_Just_s;
    } stuff;
};

static struct Maybe_1014 Maybe_1014_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1014 ) { .tag = Maybe_1014_Just_t, .stuff = { .Maybe_1014_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1013 (    struct Maybe_1014  x1267 ,    struct StrConcat_869  errmsg1269 ) {
    struct Maybe_1014  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1014_None_t ) {
        ( (  panic1002 ) ( (  errmsg1269 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1014_Just_t ) {
        return ( dref1270 .stuff .Maybe_1014_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1015 (    struct Maybe_325  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_325  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_325_None_t ) {
        ( (  panic1003 ) ( (  errmsg1269 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_325_Just_t ) {
        return ( dref1270 .stuff .Maybe_325_Just_s .field0 );
    }
}

struct Maybe_1017 {
    enum {
        Maybe_1017_None_t,
        Maybe_1017_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58 *  field0;
        } Maybe_1017_Just_s;
    } stuff;
};

static struct Maybe_1017 Maybe_1017_Just (  struct Cell_58 *  field0 ) {
    return ( struct Maybe_1017 ) { .tag = Maybe_1017_Just_t, .stuff = { .Maybe_1017_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58 *   or_dash_fail1016 (    struct Maybe_1017  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_1017  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1017_None_t ) {
        ( (  panic1003 ) ( (  errmsg1269 ) ) );
        return ( (  undefined155 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1017_Just_t ) {
        return ( dref1270 .stuff .Maybe_1017_Just_s .field0 );
    }
}

struct Maybe_1019 {
    enum {
        Maybe_1019_None_t,
        Maybe_1019_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_182  field0;
        } Maybe_1019_Just_s;
    } stuff;
};

static struct Maybe_1019 Maybe_1019_Just (  struct Cursor_182  field0 ) {
    return ( struct Maybe_1019 ) { .tag = Maybe_1019_Just_t, .stuff = { .Maybe_1019_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_182   or_dash_else1018 (    struct Maybe_1019  self1274 ,    struct Cursor_182  alt1276 ) {
    struct Maybe_1019  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_1019_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_1019_Just_t ) {
        return ( dref1277 .stuff .Maybe_1019_Just_s .field0 );
    }
}

struct Tuple2_1021 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1021 Tuple2_1021_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1021 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst1020 (    struct Tuple2_1021  dref1297 ) {
    return ( dref1297 .field0 );
}

static  uint32_t   snd1022 (    struct Tuple2_1021  dref1300 ) {
    return ( dref1300 .field1 );
}

static  bool   is_dash_just1023 (    struct Maybe_1019  m1304 ) {
    struct Maybe_1019  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1019_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1019_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just1024 (    struct Maybe_325  m1304 ) {
    struct Maybe_325  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_325_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_325_Just_t ) {
        return ( true );
    }
}

struct Maybe_1026 {
    enum {
        Maybe_1026_None_t,
        Maybe_1026_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1026_Just_s;
    } stuff;
};

static struct Maybe_1026 Maybe_1026_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1026 ) { .tag = Maybe_1026_Just_t, .stuff = { .Maybe_1026_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1025 (    struct Maybe_1026  m1304 ) {
    struct Maybe_1026  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1026_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1026_Just_t ) {
        return ( true );
    }
}

struct Visual_1030 {
    int32_t  field0;
};

static struct Visual_1030 Visual_1030_Visual (  int32_t  field0 ) {
    return ( struct Visual_1030 ) { .field0 = field0 };
};

struct Theme_1031 {
    struct Color_59  f_bg;
    struct Color_59  f_text;
    struct Color_59  f_cursor_dash_bg;
    struct Color_59  f_cursor_dash_text;
    struct Color_59  f_selection_dash_bg;
    struct Color_59  f_selection_dash_text;
    struct Color_59  f_selection_dash_cursor_dash_bg;
    struct Color_59  f_selection_dash_cursor_dash_text;
    struct Color_59  f_line_dash_num_dash_hi_dash_bg;
    struct Color_59  f_line_dash_num_dash_hi_dash_text;
};

struct Slice_1033 {
    struct Action_181 *  f_ptr;
    size_t  f_count;
};

struct List_1032 {
    enum CAllocator_4  f_al;
    struct Slice_1033  f_elements;
    size_t  f_count;
};

struct Editor_1029 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_182  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1030  f_goal_dash_x;
    struct List_292  f_current_dash_file;
    struct Maybe_277  f_filename;
    struct Mode_836  f_mode;
    struct Maybe_1026  f_anim;
    struct Maybe_1019  f_selected;
    struct Theme_1031 *  f_theme;
    struct Maybe_894  f_search_dash_term;
    struct Maybe_325  f_msg;
    struct Maybe_325  f_clipboard;
    struct List_1032  f_actions;
};

struct env1028 {
    ;
    struct Editor_1029 *  ed3052;
    ;
};

struct funenv1028 {
    struct Maybe_49  (*fun) (  struct env1028  ,    struct List_3  );
    struct env1028 env;
};

static  struct Maybe_49   and_dash_maybe1027 (    struct Maybe_324  m1308 ,   struct funenv1028  fun1310 ) {
    struct Maybe_324  dref1311 = (  m1308 );
    if ( dref1311.tag == Maybe_324_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1311.tag == Maybe_324_Just_t ) {
        struct funenv1028  temp1034 = (  fun1310 );
        return ( temp1034.fun ( temp1034.env ,  ( dref1311 .stuff .Maybe_324_Just_s .field0 ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe1035 (    struct Maybe_49  x1315 ,    enum CharType_53 (*  fun1317 )(    char  ) ) {
    struct Maybe_49  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1318.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_363   fmap_dash_maybe1036 (    struct Maybe_49  x1315 ,    struct Tuple2_364 (*  fun1317 )(    char  ) ) {
    struct Maybe_49  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
    }
    else if ( dref1318.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_363_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_913   fmap_dash_maybe1037 (    struct Maybe_325  x1315 ,    size_t (*  fun1317 )(    struct DynStr_134  ) ) {
    struct Maybe_325  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_325_None_t ) {
        return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    }
    else if ( dref1318.tag == Maybe_325_Just_t ) {
        return ( ( Maybe_913_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_325_Just_s .field0 ) ) ) ) );
    }
}

struct env1039 {
    ;
    struct Editor_1029 *  ed2724;
};

struct funenv1039 {
    struct Cursor_182  (*fun) (  struct env1039  ,    struct Cursor_182  );
    struct env1039 env;
};

static  struct Cursor_182   maybe1038 (    struct Maybe_1019  x1322 ,   struct funenv1039  fun1324 ,    struct Cursor_182  default1326 ) {
    struct funenv1039  temp1040 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1040.fun ( temp1040.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1042 {
    ;
    struct Editor_1029 *  ed2724;
};

struct funenv1042 {
    struct Cursor_182  (*fun) (  struct env1042  ,    struct Cursor_182  );
    struct env1042 env;
};

static  struct Cursor_182   maybe1041 (    struct Maybe_1019  x1322 ,   struct funenv1042  fun1324 ,    struct Cursor_182  default1326 ) {
    struct funenv1042  temp1043 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1043.fun ( temp1043.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1045 {
    ;
    struct Editor_1029 *  ed2724;
};

struct funenv1045 {
    struct Cursor_182  (*fun) (  struct env1045  ,    struct Cursor_182  );
    struct env1045 env;
};

static  struct Cursor_182   maybe1044 (    struct Maybe_1019  x1322 ,   struct funenv1045  fun1324 ,    struct Cursor_182  default1326 ) {
    struct funenv1045  temp1046 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1046.fun ( temp1046.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1048 {
    ;
    struct Editor_1029 *  ed2724;
};

struct funenv1048 {
    struct Cursor_182  (*fun) (  struct env1048  ,    struct Cursor_182  );
    struct env1048 env;
};

static  struct Cursor_182   maybe1047 (    struct Maybe_1019  x1322 ,   struct funenv1048  fun1324 ,    struct Cursor_182  default1326 ) {
    struct funenv1048  temp1049 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1049.fun ( temp1049.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1051 {
    ;
    struct Editor_1029 *  ed2845;
};

struct funenv1051 {
    int32_t  (*fun) (  struct env1051  ,    struct Cursor_182  );
    struct env1051 env;
};

static  int32_t   maybe1050 (    struct Maybe_1019  x1322 ,   struct funenv1051  fun1324 ,    int32_t  default1326 ) {
    struct funenv1051  temp1052 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1052.fun ( temp1052.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1054 {
    ;
    struct Editor_1029 *  ed2845;
};

struct funenv1054 {
    int32_t  (*fun) (  struct env1054  ,    struct Cursor_182  );
    struct env1054 env;
};

static  int32_t   maybe1053 (    struct Maybe_1019  x1322 ,   struct funenv1054  fun1324 ,    int32_t  default1326 ) {
    struct funenv1054  temp1055 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1055.fun ( temp1055.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1057 {
    ;
    struct Editor_1029 *  ed2857;
};

struct funenv1057 {
    int32_t  (*fun) (  struct env1057  ,    struct Cursor_182  );
    struct env1057 env;
};

static  int32_t   maybe1056 (    struct Maybe_1019  x1322 ,   struct funenv1057  fun1324 ,    int32_t  default1326 ) {
    struct funenv1057  temp1058 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1058.fun ( temp1058.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1060 {
    ;
    struct Editor_1029 *  ed2857;
};

struct funenv1060 {
    int32_t  (*fun) (  struct env1060  ,    struct Cursor_182  );
    struct env1060 env;
};

static  int32_t   maybe1059 (    struct Maybe_1019  x1322 ,   struct funenv1060  fun1324 ,    int32_t  default1326 ) {
    struct funenv1060  temp1061 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1061.fun ( temp1061.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1063 {
    struct Editor_1029 *  ed2824;
    ;
};

struct funenv1063 {
    struct Cursor_182  (*fun) (  struct env1063  ,    struct Cursor_182  );
    struct env1063 env;
};

static  struct Cursor_182   maybe1062 (    struct Maybe_1019  x1322 ,   struct funenv1063  fun1324 ,    struct Cursor_182  default1326 ) {
    struct funenv1063  temp1064 = (  fun1324 );
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( temp1064.fun ( temp1064.env ,  ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1065 (    struct Maybe_1019  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_182  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1066 (    struct Maybe_1019  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_182  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1019  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1019_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1019_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1068 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3087;
};

struct funenv1068 {
    bool  (*fun) (  struct env1068  ,    char  );
    struct env1068 env;
};

static  bool   maybe1067 (    struct Maybe_49  x1322 ,   struct funenv1068  fun1324 ,    bool  default1326 ) {
    struct funenv1068  temp1069 = (  fun1324 );
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( temp1069.fun ( temp1069.env ,  ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1070 (    struct Maybe_49  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1071 (    struct Maybe_49  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1073 {
    struct Maybe_52  cur_dash_char_dash_type3096;
    ;
    ;
};

struct funenv1073 {
    bool  (*fun) (  struct env1073  ,    char  );
    struct env1073 env;
};

static  bool   maybe1072 (    struct Maybe_49  x1322 ,   struct funenv1073  fun1324 ,    bool  default1326 ) {
    struct funenv1073  temp1074 = (  fun1324 );
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( temp1074.fun ( temp1074.env ,  ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1075 (    struct Maybe_49  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1077 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3103;
};

struct funenv1077 {
    bool  (*fun) (  struct env1077  ,    char  );
    struct env1077 env;
};

static  bool   maybe1076 (    struct Maybe_49  x1322 ,   struct funenv1077  fun1324 ,    bool  default1326 ) {
    struct funenv1077  temp1078 = (  fun1324 );
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( temp1078.fun ( temp1078.env ,  ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1080 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3103;
};

struct funenv1080 {
    bool  (*fun) (  struct env1080  ,    char  );
    struct env1080 env;
};

static  bool   maybe1079 (    struct Maybe_49  x1322 ,   struct funenv1080  fun1324 ,    bool  default1326 ) {
    struct funenv1080  temp1081 = (  fun1324 );
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( temp1081.fun ( temp1081.env ,  ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1082 (    struct Maybe_49  x1322 ,    int32_t (*  fun1324 )(    char  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_49  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_49_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  struct Slice_291   empty1083 (  ) {
    return ( (struct Slice_291) { .f_ptr = ( (  null_dash_ptr268 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1084 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr269 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_1033   empty1085 (  ) {
    return ( (struct Slice_1033) { .f_ptr = ( (  null_dash_ptr271 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1086 (    struct Slice_291  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1339 = ( (  offset_dash_ptr159 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  struct Cell_58 *   get_dash_ptr1087 (    struct Slice_587  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1339 = ( (  offset_dash_ptr165 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

struct Slice_1089 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_277   try_dash_get1088 (    struct Slice_1089  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_277) { .tag = Maybe_277_None_t } );
    }
    const char* *  elem_dash_ptr1345 = ( (  offset_dash_ptr157 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_277_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  struct Maybe_1012   try_dash_get1090 (    struct Slice_587  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1012) { .tag = Maybe_1012_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1345 = ( (  offset_dash_ptr165 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_1012_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  const char*   get1091 (    struct Slice_1089  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail1009 ) ( ( (  try_dash_get1088 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1092 (    struct Slice_587  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail1011 ) ( ( (  try_dash_get1090 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1093 (    struct Slice_291  slice1353 ,    size_t  i1355 ,    struct List_3  x1357 ) {
    struct List_3 *  ep1358 = ( (  get_dash_ptr1086 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1094 (    struct Slice_5  slice1353 ,    size_t  i1355 ,    char  x1357 ) {
    char *  ep1358 = ( (  get_dash_ptr30 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1095 (    struct Slice_587  slice1353 ,    size_t  i1355 ,    struct Cell_58  x1357 ) {
    struct Cell_58 *  ep1358 = ( (  get_dash_ptr1087 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   from1096 (    struct Slice_5  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice304 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct Slice_291   from1097 (    struct Slice_291  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice295 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct SliceAddressIter_631   addresses1098 (    struct Slice_291  slice1398 ) {
    return ( (struct SliceAddressIter_631) { .f_slice = (  slice1398 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam603 (   struct env603 env ,    struct Tuple2_358  dref1412 ) {
    return ( (  set1093 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size280 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1099 (    struct Slice_291  src1409 ,    struct Slice_291  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic1004 ) ( ( ( StrConcat_940_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env603 envinst603 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each602 ) ( ( (  zip487 ) ( (  src1409 ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv603){ .fun = lam603, .env = envinst603 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam611 (   struct env611 env ,    struct Tuple2_364  dref1412 ) {
    return ( (  set1094 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size280 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1100 (    struct Slice_5  src1409 ,    struct Slice_5  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic1004 ) ( ( ( StrConcat_940_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env611 envinst611 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each610 ) ( ( (  zip488 ) ( (  src1409 ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv611){ .fun = lam611, .env = envinst611 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1102 (    struct Tuple2_436  dref1420 ) {
    return (  eq47 ( ( dref1420 .field0 ) , ( dref1420 .field1 ) ) );
}

static  bool   eq1101 (    struct Slice_5  l1417 ,    struct Slice_5  r1419 ) {
    if ( ( !  eq45 ( ( (  l1417 ) .f_count ) , ( (  r1419 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all790 ) ( ( (  zip493 ) ( (  l1417 ) ,  (  r1419 ) ) ) ,  (  lam1102 ) ) );
}

static  const char*   elem_dash_get1103 (    struct Slice_1089  self1425 ,    size_t  idx1427 ) {
    return ( (  get1091 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  struct Cell_58   elem_dash_get1104 (    struct Slice_587  self1425 ,    size_t  idx1427 ) {
    return ( (  get1092 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  char   elem_dash_get1105 (    struct Slice_5  self1425 ,    size_t  idx1427 ) {
    return ( (  get327 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  enum Unit_13   lam586 (   struct env586 env ,    int32_t  i1456 ) {
    return ( (  set1095 ) ( ( env.s1452 ) ,  ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1104 ( ( env.s1452 ) , ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1106 (    struct Slice_587  s1452 ,    struct Cell_58 (*  fun1454 )(    struct Cell_58  ) ) {
    struct env586 envinst586 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each585 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32282 ) ( (  op_dash_sub99 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv586){ .fun = lam586, .env = envinst586 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam591 (   struct env591 env ,    int32_t  i1456 ) {
    return ( (  set1095 ) ( ( env.s1452 ) ,  ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1104 ( ( env.s1452 ) , ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1107 (    struct Slice_587  s1452 ,    struct Cell_58 (*  fun1454 )(    struct Cell_58  ) ) {
    struct env591 envinst591 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each590 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32282 ) ( (  op_dash_sub99 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv591){ .fun = lam591, .env = envinst591 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam650 (   struct env650 env ,    int32_t  i1456 ) {
    return ( (  set1095 ) ( ( env.s1452 ) ,  ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1104 ( ( env.s1452 ) , ( (  i32_dash_size280 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1108 (    struct Slice_587  s1452 ,    struct Cell_58 (*  fun1454 )(    struct Cell_58  ) ) {
    struct env650 envinst650 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each649 ) ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32282 ) ( (  op_dash_sub99 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv650){ .fun = lam650, .env = envinst650 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_913   find_dash_slice1109 (    struct Slice_5  haystack1459 ,    struct Slice_5  needle1461 ) {
    struct RangeIter_376  temp1110 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( (  haystack1459 ) .f_count ) ) ) , ( (  size_dash_i32282 ) ( ( (  needle1461 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1111 =  next377 (&temp1110);
        if (  __cond1111 .tag == 0 ) {
            break;
        }
        int32_t  i1463 =  __cond1111 .stuff .Maybe_338_Just_s .field0;
        if ( (  eq1101 ( ( (  subslice304 ) ( (  haystack1459 ) ,  ( (  i32_dash_size280 ) ( (  i1463 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( (  i1463 ) ) ) , ( (  needle1461 ) .f_count ) ) ) ) ) , (  needle1461 ) ) ) ) {
            return ( ( Maybe_913_Just ) ( ( (  i32_dash_size280 ) ( (  i1463 ) ) ) ) );
        }
    }
    return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
}

static  struct Maybe_913   find_dash_last_dash_occurence_dash_of_dash_slice1112 (    struct Slice_5  haystack1466 ,    struct Slice_5  needle1468 ) {
    struct Maybe_913  occ1469 = ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    struct RangeIter_376  temp1113 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( (  haystack1466 ) .f_count ) ) ) , ( (  size_dash_i32282 ) ( ( (  needle1468 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1114 =  next377 (&temp1113);
        if (  __cond1114 .tag == 0 ) {
            break;
        }
        int32_t  i1471 =  __cond1114 .stuff .Maybe_338_Just_s .field0;
        if ( (  eq1101 ( ( (  subslice304 ) ( (  haystack1466 ) ,  ( (  i32_dash_size280 ) ( (  i1471 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( (  i1471 ) ) ) , ( (  needle1468 ) .f_count ) ) ) ) ) , (  needle1468 ) ) ) ) {
            occ1469 = ( ( Maybe_913_Just ) ( ( (  i32_dash_size280 ) ( (  i1471 ) ) ) ) );
        }
    }
    return (  occ1469 );
}

static  enum CAllocator_4   idc1115 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_291   allocate1116 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize167 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1487 = ( (  cast_dash_ptr213 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_291) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_5   allocate1117 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize170 ) ( ) ) ) .f_size );
    char *  ptr1487 = ( (  cast_dash_ptr215 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_587   allocate1118 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize173 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1487 = ( (  cast_dash_ptr224 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_587) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  enum Unit_13   free1119 (    enum CAllocator_4  dref1489 ,    struct Slice_291  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr212 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1120 (    enum CAllocator_4  dref1489 ,    struct Slice_5  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr217 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1122 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1121 (    enum CAllocator_4  dref1489 ,    struct Slice_1122  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr229 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1123 (    enum CAllocator_4  dref1489 ,    struct Slice_587  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr231 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr1124 (    struct Array_142 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic706 ) ( ( ( StrConcat_707_StrConcat ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1532 = ( ( (  cast194 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  char *   get_dash_ptr1125 (    struct Array_190 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic706 ) ( ( ( StrConcat_707_StrConcat ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1532 = ( ( (  cast204 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  enum Unit_13   set1126 (    struct Array_142 *  arr1541 ,    size_t  i1544 ,    uint8_t  e1546 ) {
    uint8_t *  p1547 = ( (  get_dash_ptr1124 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1127 (    struct Array_190 *  arr1541 ,    size_t  i1544 ,    char  e1546 ) {
    char *  p1547 = ( (  get_dash_ptr1125 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1128 (    struct Array_190 *  arr1550 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast204 ) ( (  arr1550 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1129 (    char  c1601 ) {
    return ( ( (  eq47 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1130 (    char  c1604 ) {
    return ( ! ( (  is_dash_whitespace1129 ) ( (  c1604 ) ) ) );
}

static  bool   is_dash_alpha1131 (    char  c1610 ) {
    return ( ( (  between821 ) ( (  c1610 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between821 ) ( (  c1610 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1132 (    char  c1613 ) {
    return ( (  between821 ) ( (  c1613 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1133 (    char  c1616 ) {
    return ( ( (  is_dash_alpha1131 ) ( (  c1616 ) ) ) || ( (  is_dash_digit1132 ) ( (  c1616 ) ) ) );
}

static  struct LineIter_311   lines1134 (    struct DynStr_134  s1620 ) {
    return ( (struct LineIter_311) { .f_og = (  s1620 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1135 (    char  c1649 ) {
    return ( (  cmp80 ( ( (  char_dash_i32817 ) ( (  c1649 ) ) ) , ( (  char_dash_i32817 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32817 ) ( (  c1649 ) ) ) , ( (  char_dash_i32817 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_338   parse_dash_digit1136 (    char  c1652 ) {
    if ( ( (  is_dash_digit1135 ) ( (  c1652 ) ) ) ) {
        return ( ( Maybe_338_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32817 ) ( (  c1652 ) ) ) , ( (  char_dash_i32817 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_338) { .tag = Maybe_338_None_t } );
    }
}

static  struct Maybe_734   sequence_dash_maybe1138 (    char  e1658 ,    struct Maybe_734  b1660 ) {
    struct Maybe_734  dref1661 = (  b1660 );
    if ( dref1661.tag == Maybe_734_None_t ) {
        return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
    }
    else if ( dref1661.tag == Maybe_734_Just_t ) {
        struct Maybe_338  dref1663 = ( (  parse_dash_digit1136 ) ( (  e1658 ) ) );
        if ( dref1663.tag == Maybe_338_None_t ) {
            return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
        }
        else if ( dref1663.tag == Maybe_338_Just_t ) {
            return ( ( Maybe_734_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1661 .stuff .Maybe_734_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64279 ) ( ( dref1663 .stuff .Maybe_338_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_734   parse_dash_int1137 (    struct TakeWhile_513  s1655 ) {
    struct TakeWhile_513  cs1665 = ( (  chars982 ) ( (  s1655 ) ) );
    struct Maybe_49  dref1666 = ( (  head793 ) ( (  cs1665 ) ) );
    if ( dref1666.tag == Maybe_49_Just_t ) {
        return ( (  reduce733 ) ( (  cs1665 ) ,  ( ( Maybe_734_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1138 ) ) );
    }
    else if ( dref1666.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
    }
}

static  struct Maybe_734   sequence_dash_maybe1140 (    char  e1658 ,    struct Maybe_734  b1660 ) {
    struct Maybe_734  dref1661 = (  b1660 );
    if ( dref1661.tag == Maybe_734_None_t ) {
        return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
    }
    else if ( dref1661.tag == Maybe_734_Just_t ) {
        struct Maybe_338  dref1663 = ( (  parse_dash_digit1136 ) ( (  e1658 ) ) );
        if ( dref1663.tag == Maybe_338_None_t ) {
            return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
        }
        else if ( dref1663.tag == Maybe_338_Just_t ) {
            return ( ( Maybe_734_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1661 .stuff .Maybe_734_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64279 ) ( ( dref1663 .stuff .Maybe_338_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_734   parse_dash_int1139 (    struct TakeWhile_524  s1655 ) {
    struct TakeWhile_524  cs1665 = ( (  chars983 ) ( (  s1655 ) ) );
    struct Maybe_49  dref1666 = ( (  head799 ) ( (  cs1665 ) ) );
    if ( dref1666.tag == Maybe_49_Just_t ) {
        return ( (  reduce746 ) ( (  cs1665 ) ,  ( ( Maybe_734_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1140 ) ) );
    }
    else if ( dref1666.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1141 (    struct List_292 *  list1671 ,    size_t  i1673 ) {
    if ( ( (  cmp9 ( (  i1673 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1673 ) , ( ( * (  list1671 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1673 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1671 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1086 ) ( ( ( * (  list1671 ) ) .f_elements ) ,  (  i1673 ) ) );
}

static  struct List_3   get1142 (    struct List_292 *  list1681 ,    size_t  i1683 ) {
    return ( * ( (  get_dash_ptr1141 ) ( (  list1681 ) ,  (  i1683 ) ) ) );
}

static  struct Maybe_49   try_dash_get1143 (    struct List_3 *  list1686 ,    size_t  i1688 ) {
    if ( (  cmp9 ( (  i1688 ) , ( ( * (  list1686 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1686 ) ,  (  i1688 ) ) ) ) );
}

static  struct Maybe_324   try_dash_get1144 (    struct List_292 *  list1686 ,    size_t  i1688 ) {
    if ( (  cmp9 ( (  i1688 ) , ( ( * (  list1686 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_324) { .tag = Maybe_324_None_t } );
    }
    return ( ( Maybe_324_Just ) ( ( (  get1142 ) ( (  list1686 ) ,  (  i1688 ) ) ) ) );
}

static  enum Unit_13   set1145 (    struct List_292 *  list1691 ,    size_t  i1693 ,    struct List_3  elem1695 ) {
    if ( ( (  cmp9 ( (  i1693 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1693 ) , ( ( * (  list1691 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1693 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1691 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1093 ) ( ( ( * (  list1691 ) ) .f_elements ) ,  (  i1693 ) ,  (  elem1695 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1146 (    struct List_3 *  list1691 ,    size_t  i1693 ,    char  elem1695 ) {
    if ( ( (  cmp9 ( (  i1693 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1693 ) , ( ( * (  list1691 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1693 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1691 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1094 ) ( ( ( * (  list1691 ) ) .f_elements ) ,  (  i1693 ) ,  (  elem1695 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_292   mk1147 (    enum CAllocator_4  al1701 ) {
    struct Slice_291  elements1702 = ( (  empty1083 ) ( ) );
    return ( (struct List_292) { .f_al = (  al1701 ) , .f_elements = (  elements1702 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1148 (    enum CAllocator_4  al1701 ) {
    struct Slice_5  elements1702 = ( (  empty1084 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1701 ) , .f_elements = (  elements1702 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_1032   mk1149 (    enum CAllocator_4  al1701 ) {
    struct Slice_1033  elements1702 = ( (  empty1085 ) ( ) );
    return ( (struct List_1032) { .f_al = (  al1701 ) , .f_elements = (  elements1702 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1150 (    struct List_3 *  list1705 ) {
    ( (  free1120 ) ( ( ( * (  list1705 ) ) .f_al ) ,  ( ( * (  list1705 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1151 (    struct List_292 *  list1705 ) {
    ( (  free1119 ) ( ( ( * (  list1705 ) ) .f_al ) ,  ( ( * (  list1705 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam562 (   struct env562 env ,    struct Tuple2_358  dref1713 ) {
    return ( (  set1093 ) ( ( env.new_dash_slice1712 ) ,  ( (  i32_dash_size280 ) ( ( dref1713 .field1 ) ) ) ,  ( dref1713 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full576 (   struct env576 env ,    struct List_292 *  list1711 ) {
    if ( (  eq45 ( ( ( * (  list1711 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1711 ) .f_elements = ( (  allocate1116 ) ( ( ( * (  list1711 ) ) .f_al ) ,  ( env.starting_dash_size1706 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1711 ) ) .f_count ) , ( ( ( * (  list1711 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_291  new_dash_slice1712 = ( (  allocate1116 ) ( ( ( * (  list1711 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1711 ) ) .f_count ) , ( env.growth_dash_factor1707 ) ) ) ) );
            struct env562 envinst562 = {
                .new_dash_slice1712 =  new_dash_slice1712 ,
            };
            ( (  for_dash_each561 ) ( ( (  zip487 ) ( ( ( * (  list1711 ) ) .f_elements ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv562){ .fun = lam562, .env = envinst562 } ) ) );
            ( (  free1119 ) ( ( ( * (  list1711 ) ) .f_al ) ,  ( ( * (  list1711 ) ) .f_elements ) ) );
            (*  list1711 ) .f_elements = (  new_dash_slice1712 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam570 (   struct env570 env ,    struct Tuple2_364  dref1713 ) {
    return ( (  set1094 ) ( ( env.new_dash_slice1712 ) ,  ( (  i32_dash_size280 ) ( ( dref1713 .field1 ) ) ) ,  ( dref1713 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full316 (   struct env316 env ,    struct List_3 *  list1711 ) {
    if ( (  eq45 ( ( ( * (  list1711 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1711 ) .f_elements = ( (  allocate1117 ) ( ( ( * (  list1711 ) ) .f_al ) ,  ( env.starting_dash_size1706 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1711 ) ) .f_count ) , ( ( ( * (  list1711 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1712 = ( (  allocate1117 ) ( ( ( * (  list1711 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1711 ) ) .f_count ) , ( env.growth_dash_factor1707 ) ) ) ) );
            struct env570 envinst570 = {
                .new_dash_slice1712 =  new_dash_slice1712 ,
            };
            ( (  for_dash_each569 ) ( ( (  zip488 ) ( ( ( * (  list1711 ) ) .f_elements ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv570){ .fun = lam570, .env = envinst570 } ) ) );
            ( (  free1120 ) ( ( ( * (  list1711 ) ) .f_al ) ,  ( ( * (  list1711 ) ) .f_elements ) ) );
            (*  list1711 ) .f_elements = (  new_dash_slice1712 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add575 (   struct env575 env ,    struct List_292 *  list1718 ,    struct List_3  elem1720 ) {
    struct funenv576  temp1152 = ( (struct funenv576){ .fun = grow_dash_if_dash_full576, .env =  env.envinst576  } );
    ( temp1152.fun ( temp1152.env ,  (  list1718 ) ) );
    ( (  set1093 ) ( ( ( * (  list1718 ) ) .f_elements ) ,  ( ( * (  list1718 ) ) .f_count ) ,  (  elem1720 ) ) );
    (*  list1718 ) .f_count = (  op_dash_add98 ( ( ( * (  list1718 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add315 (   struct env315 env ,    struct List_3 *  list1718 ,    char  elem1720 ) {
    struct funenv316  temp1153 = ( (struct funenv316){ .fun = grow_dash_if_dash_full316, .env =  env.envinst316  } );
    ( temp1153.fun ( temp1153.env ,  (  list1718 ) ) );
    ( (  set1094 ) ( ( ( * (  list1718 ) ) .f_elements ) ,  ( ( * (  list1718 ) ) .f_count ) ,  (  elem1720 ) ) );
    (*  list1718 ) .f_count = (  op_dash_add98 ( ( ( * (  list1718 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1154 {
    ;
    ;
    ;
    struct env316 envinst316;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env315 envinst315;
    ;
};

static  enum Unit_13   insert1154 (   struct env1154 env ,    struct List_3 *  list1723 ,    size_t  i1725 ,    char  elem1727 ) {
    if ( ( (  cmp9 ( (  i1725 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1725 ) , ( ( * (  list1723 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1725 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1723 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv315  temp1155 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
        ( temp1155.fun ( temp1155.env ,  (  list1723 ) ,  (  elem1727 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv316  temp1156 = ( (struct funenv316){ .fun = grow_dash_if_dash_full316, .env =  env.envinst316  } );
    ( temp1156.fun ( temp1156.env ,  (  list1723 ) ) );
    size_t  ii1728 = (  op_dash_sub99 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1728 ) , (  i1725 ) ) != 0 ) ) {
        ( (  set1094 ) ( ( ( * (  list1723 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1728 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1723 ) ,  (  ii1728 ) ) ) ) );
        if ( (  eq45 ( (  ii1728 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1728 = (  op_dash_sub99 ( (  ii1728 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1094 ) ( ( ( * (  list1723 ) ) .f_elements ) ,  (  i1725 ) ,  (  elem1727 ) ) );
    (*  list1723 ) .f_count = (  op_dash_add98 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1157 {
    ;
    ;
    ;
    struct env576 envinst576;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env575 envinst575;
    ;
};

static  enum Unit_13   insert1157 (   struct env1157 env ,    struct List_292 *  list1723 ,    size_t  i1725 ,    struct List_3  elem1727 ) {
    if ( ( (  cmp9 ( (  i1725 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1725 ) , ( ( * (  list1723 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1725 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1723 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv575  temp1158 = ( (struct funenv575){ .fun = add575, .env =  env.envinst575  } );
        ( temp1158.fun ( temp1158.env ,  (  list1723 ) ,  (  elem1727 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv576  temp1159 = ( (struct funenv576){ .fun = grow_dash_if_dash_full576, .env =  env.envinst576  } );
    ( temp1159.fun ( temp1159.env ,  (  list1723 ) ) );
    size_t  ii1728 = (  op_dash_sub99 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1728 ) , (  i1725 ) ) != 0 ) ) {
        ( (  set1093 ) ( ( ( * (  list1723 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1728 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1142 ) ( (  list1723 ) ,  (  ii1728 ) ) ) ) );
        if ( (  eq45 ( (  ii1728 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1728 = (  op_dash_sub99 ( (  ii1728 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1093 ) ( ( ( * (  list1723 ) ) .f_elements ) ,  (  i1725 ) ,  (  elem1727 ) ) );
    (*  list1723 ) .f_count = (  op_dash_add98 ( ( ( * (  list1723 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1160 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1708;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam599 (   struct env599 env ,    struct Tuple2_358  dref1734 ) {
    return ( (  set1145 ) ( ( env.list1731 ) ,  ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( ( dref1734 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1734 .field0 ) ) );
}

static  enum Unit_13   remove1160 (   struct env1160 env ,    struct List_292 *  list1731 ,    size_t  i1733 ) {
    if ( ( (  cmp9 ( (  i1733 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1733 ) , ( ( * (  list1731 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1733 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1731 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env599 envinst599 = {
        .list1731 =  list1731 ,
    };
    ( (  for_dash_each598 ) ( ( (  drop367 ) ( ( (  zip489 ) ( ( * (  list1731 ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1733 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv599){ .fun = lam599, .env = envinst599 } ) ) );
    (*  list1731 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1731 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1737 = ( ( ( * (  list1731 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1731 ) ) .f_count ) , ( env.shrink_dash_factor1708 ) ) ) , (  capacity1737 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1731 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1119 ) ( ( ( * (  list1731 ) ) .f_al ) ,  ( ( * (  list1731 ) ) .f_elements ) ) );
            (*  list1731 ) .f_elements = ( (  empty1083 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1738 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1731 ) ) .f_count ) , ( env.shrink_dash_factor1708 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1708 ) ) );
        struct Slice_291  new_dash_slice1739 = ( (  allocate1116 ) ( ( ( * (  list1731 ) ) .f_al ) ,  (  new_dash_size1738 ) ) );
        ( (  copy_dash_to1099 ) ( ( (  subslice295 ) ( ( ( * (  list1731 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1731 ) ) .f_count ) ) ) ,  (  new_dash_slice1739 ) ) );
        ( (  free1119 ) ( ( ( * (  list1731 ) ) .f_al ) ,  ( ( * (  list1731 ) ) .f_elements ) ) );
        (*  list1731 ) .f_elements = (  new_dash_slice1739 );
    }
    return ( Unit_13_Unit );
}

struct env1161 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1708;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam607 (   struct env607 env ,    struct Tuple2_364  dref1734 ) {
    return ( (  set1146 ) ( ( env.list1731 ) ,  ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( ( dref1734 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1734 .field0 ) ) );
}

static  enum Unit_13   remove1161 (   struct env1161 env ,    struct List_3 *  list1731 ,    size_t  i1733 ) {
    if ( ( (  cmp9 ( (  i1733 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1733 ) , ( ( * (  list1731 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1733 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1731 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env607 envinst607 = {
        .list1731 =  list1731 ,
    };
    ( (  for_dash_each606 ) ( ( (  drop369 ) ( ( (  zip490 ) ( ( * (  list1731 ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1733 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv607){ .fun = lam607, .env = envinst607 } ) ) );
    (*  list1731 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1731 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1737 = ( ( ( * (  list1731 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1731 ) ) .f_count ) , ( env.shrink_dash_factor1708 ) ) ) , (  capacity1737 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1731 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1120 ) ( ( ( * (  list1731 ) ) .f_al ) ,  ( ( * (  list1731 ) ) .f_elements ) ) );
            (*  list1731 ) .f_elements = ( (  empty1084 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1738 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1731 ) ) .f_count ) , ( env.shrink_dash_factor1708 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1708 ) ) );
        struct Slice_5  new_dash_slice1739 = ( (  allocate1117 ) ( ( ( * (  list1731 ) ) .f_al ) ,  (  new_dash_size1738 ) ) );
        ( (  copy_dash_to1100 ) ( ( (  subslice304 ) ( ( ( * (  list1731 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1731 ) ) .f_count ) ) ) ,  (  new_dash_slice1739 ) ) );
        ( (  free1120 ) ( ( ( * (  list1731 ) ) .f_al ) ,  ( ( * (  list1731 ) ) .f_elements ) ) );
        (*  list1731 ) .f_elements = (  new_dash_slice1739 );
    }
    return ( Unit_13_Unit );
}

struct funenv1161 {
    enum Unit_13  (*fun) (  struct env1161  ,    struct List_3 *  ,    size_t  );
    struct env1161 env;
};

struct env1162 {
    ;
    ;
    struct env1161 envinst1161;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   pop1162 (   struct env1162 env ,    struct List_3 *  list1753 ) {
    if ( (  eq45 ( ( ( * (  list1753 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1003 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1161  temp1163 = ( (struct funenv1161){ .fun = remove1161, .env =  env.envinst1161  } );
    return ( temp1163.fun ( temp1163.env ,  (  list1753 ) ,  (  op_dash_sub99 ( ( ( * (  list1753 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam566 (   struct env566 env ,    char  x1763 ) {
    struct funenv315  temp1164 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1164.fun ( temp1164.env ,  ( env.list1759 ) ,  (  x1763 ) ) );
}

static  enum Unit_13   add_dash_all314 (   struct env314 env ,    struct List_3 *  list1759 ,    struct DynStr_134  it1761 ) {
    struct env566 envinst566 = {
        .envinst315 = env.envinst315 ,
        .list1759 =  list1759 ,
    };
    ( (  for_dash_each565 ) ( (  it1761 ) ,  ( (struct funenv566){ .fun = lam566, .env = envinst566 } ) ) );
    return ( Unit_13_Unit );
}

struct env1165 {
    ;
    ;
    struct env575 envinst575;
    ;
    ;
    ;
};

static  enum Unit_13   lam574 (   struct env574 env ,    struct List_3  x1763 ) {
    struct funenv575  temp1166 = ( (struct funenv575){ .fun = add575, .env =  env.envinst575  } );
    return ( temp1166.fun ( temp1166.env ,  ( env.list1759 ) ,  (  x1763 ) ) );
}

static  enum Unit_13   add_dash_all1165 (   struct env1165 env ,    struct List_292 *  list1759 ,    struct Map_310  it1761 ) {
    struct env574 envinst574 = {
        .envinst575 = env.envinst575 ,
        .list1759 =  list1759 ,
    };
    ( (  for_dash_each573 ) ( (  it1761 ) ,  ( (struct funenv574){ .fun = lam574, .env = envinst574 } ) ) );
    return ( Unit_13_Unit );
}

struct env1167 {
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

static  enum Unit_13   lam615 (   struct env615 env ,    char  x1763 ) {
    struct funenv315  temp1168 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1168.fun ( temp1168.env ,  ( env.list1759 ) ,  (  x1763 ) ) );
}

static  enum Unit_13   add_dash_all1167 (   struct env1167 env ,    struct List_3 *  list1759 ,    struct List_3 *  it1761 ) {
    struct env615 envinst615 = {
        .envinst315 = env.envinst315 ,
        .list1759 =  list1759 ,
    };
    ( (  for_dash_each614 ) ( (  it1761 ) ,  ( (struct funenv615){ .fun = lam615, .env = envinst615 } ) ) );
    return ( Unit_13_Unit );
}

struct env1169 {
    ;
    ;
    struct env315 envinst315;
    ;
    ;
    ;
};

static  enum Unit_13   lam619 (   struct env619 env ,    char  x1763 ) {
    struct funenv315  temp1170 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1170.fun ( temp1170.env ,  ( env.list1759 ) ,  (  x1763 ) ) );
}

static  enum Unit_13   add_dash_all1169 (   struct env1169 env ,    struct List_3 *  list1759 ,    struct Slice_5  it1761 ) {
    struct env619 envinst619 = {
        .envinst315 = env.envinst315 ,
        .list1759 =  list1759 ,
    };
    ( (  for_dash_each618 ) ( (  it1761 ) ,  ( (struct funenv619){ .fun = lam619, .env = envinst619 } ) ) );
    return ( Unit_13_Unit );
}

struct env1171 {
    ;
    ;
    struct env315 envinst315;
    ;
    ;
    ;
};

static  enum Unit_13   lam627 (   struct env627 env ,    char  x1763 ) {
    struct funenv315  temp1172 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1172.fun ( temp1172.env ,  ( env.list1759 ) ,  (  x1763 ) ) );
}

static  enum Unit_13   add_dash_all1171 (   struct env1171 env ,    struct List_3 *  list1759 ,    struct TakeWhile_515  it1761 ) {
    struct env627 envinst627 = {
        .envinst315 = env.envinst315 ,
        .list1759 =  list1759 ,
    };
    ( (  for_dash_each626 ) ( (  it1761 ) ,  ( (struct funenv627){ .fun = lam627, .env = envinst627 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1173 (    struct List_3 *  l1766 ,    size_t  new_dash_count1768 ) {
    (*  l1766 ) .f_count = (  new_dash_count1768 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list313 (   struct env313 env ,    struct DynStr_134  it1771 ,    enum CAllocator_4  al1773 ) {
    struct List_3  temp1174 = ( (  mk1148 ) ( (  al1773 ) ) );
    struct List_3 *  l1774 = ( &temp1174 );
    struct funenv314  temp1175 = ( (struct funenv314){ .fun = add_dash_all314, .env =  env.envinst314  } );
    ( temp1175.fun ( temp1175.env ,  (  l1774 ) ,  (  it1771 ) ) );
    return ( * (  l1774 ) );
}

struct funenv1165 {
    enum Unit_13  (*fun) (  struct env1165  ,    struct List_292 *  ,    struct Map_310  );
    struct env1165 env;
};

struct env1176 {
    ;
    ;
    ;
    ;
    ;
    struct env1165 envinst1165;
};

static  struct List_292   to_dash_list1176 (   struct env1176 env ,    struct Map_310  it1771 ,    enum CAllocator_4  al1773 ) {
    struct List_292  temp1177 = ( (  mk1147 ) ( (  al1773 ) ) );
    struct List_292 *  l1774 = ( &temp1177 );
    struct funenv1165  temp1178 = ( (struct funenv1165){ .fun = add_dash_all1165, .env =  env.envinst1165  } );
    ( temp1178.fun ( temp1178.env ,  (  l1774 ) ,  (  it1771 ) ) );
    return ( * (  l1774 ) );
}

static  struct Slice_5   to_dash_slice1179 (    struct List_3  l1777 ) {
    char *  ptr1778 = ( ( (  l1777 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1778 ) , .f_count = ( (  l1777 ) .f_count ) } );
}

static  struct Slice_291   to_dash_slice1180 (    struct List_292  l1777 ) {
    struct List_3 *  ptr1778 = ( ( (  l1777 ) .f_elements ) .f_ptr );
    return ( (struct Slice_291) { .f_ptr = (  ptr1778 ) , .f_count = ( (  l1777 ) .f_count ) } );
}

static  struct SliceAddressIter_631   addresses1181 (    struct List_292  l1781 ) {
    return ( (  addresses1098 ) ( ( (  to_dash_slice1180 ) ( (  l1781 ) ) ) ) );
}

static  size_t   size1182 (    struct List_3 *  l1784 ) {
    return ( ( * (  l1784 ) ) .f_count );
}

static  size_t   size1183 (    struct List_292 *  l1784 ) {
    return ( ( * (  l1784 ) ) .f_count );
}

static  size_t   clamp_dash_uint1184 (    int32_t  self1802 ) {
    if ( (  cmp80 ( (  self1802 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size284 ) ( ( (uint32_t ) (  self1802 ) ) ) );
    }
}

static  struct Maybe_1014   hex_dash_digit1185 (    char  c1812 ) {
    if ( ( (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1014_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u8996 ) ( (  c1812 ) ) ) , ( (  char_dash_u8996 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1014_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u8996 ) ( (  c1812 ) ) ) , ( (  char_dash_u8996 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp816 ( (  c1812 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1014_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u8996 ) ( (  c1812 ) ) ) , ( (  char_dash_u8996 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1014) { .tag = Maybe_1014_None_t } );
}

static  uint32_t   lam1187 (    char  c1817 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64287 ) ( ( (  or_dash_fail1013 ) ( ( (  hex_dash_digit1185 ) ( (  c1817 ) ) ) ,  ( ( StrConcat_869_StrConcat ) ( ( ( StrConcat_870_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1817 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1188 (    uint32_t  elem1819 ,    uint32_t  b1821 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1821 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1819 ) ) );
}

static  uint32_t   from_dash_hex1186 (    const char*  arr1815 ) {
    return ( (  reduce731 ) ( ( (  map343 ) ( (  arr1815 ) ,  (  lam1187 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1188 ) ) );
}

static  struct Maybe_277   get1189 (    const char*  s1855 ) {
    return ( (  from_dash_nullable_dash_c_dash_str276 ) ( ( ( getenv ) ( (  s1855 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1190 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1191 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1192 (    uint32_t  x1832 ,    uint32_t  y1834 ) {
    uint32_t  x1835 = (  op_dash_add92 ( (  x1832 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1836 = (  op_dash_add92 ( (  y1834 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str955 ) ( ( ( StrConcat_956_StrConcat ) ( ( ( StrConcat_957_StrConcat ) ( ( ( StrConcat_958_StrConcat ) ( ( ( StrConcat_851_StrConcat ) ( ( "\x1b[" ) ,  (  y1836 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1835 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1193 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_1021   get_dash_dimensions1194 (  ) {
    struct Winsize_185  temp1195 = ( ( (  zeroed244 ) ( ) ) );
    struct Winsize_185 *  ws1840 = ( &temp1195 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws1840 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1840 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1021_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1021_Tuple2 ) ( ( (  u16_dash_u32283 ) ( ( ( * (  ws1840 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32283 ) ( ( ( * (  ws1840 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1196 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1197 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_657   query_dash_palette1198 (  ) {
    struct Maybe_277  colorterm1856 = ( (  get1189 ) ( ( "COLORTERM" ) ) );
    struct Maybe_277  dref1857 = (  colorterm1856 );
    if ( dref1857.tag == Maybe_277_Just_t ) {
        if ( ( (  eq998 ( ( dref1857 .stuff .Maybe_277_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq998 ( ( dref1857 .stuff .Maybe_277_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_657_PaletteRGB );
        }
    }
    else if ( dref1857.tag == Maybe_277_None_t ) {
    }
    struct Maybe_277  dref1859 = ( (  get1189 ) ( ( "TERM" ) ) );
    if ( dref1859.tag == Maybe_277_Just_t ) {
        if ( (  eq998 ( ( dref1859 .stuff .Maybe_277_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_657_Palette8 );
        }
    }
    else if ( dref1859.tag == Maybe_277_None_t ) {
    }
    return ( ColorPalette_657_Palette16 );
}

static  enum Unit_13   set_dash_fg81199 (    enum Color8_60  color1875 ) {
    enum Color8_60  dref1876 = (  color1875 );
    switch (  dref1876 ) {
        case Color8_60_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_60_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_60_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_60_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_60_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_60_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_60_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_60_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg161200 (    enum Color16_61  color1879 ) {
    enum Color16_61  dref1880 = (  color1879 );
    switch (  dref1880 ) {
        case Color16_61_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_61_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_61_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_61_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_61_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_61_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_61_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_61_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_61_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_61_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_61_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_61_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_61_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_61_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_61_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_61_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg81201 (    enum Color8_60  color1883 ) {
    enum Color8_60  dref1884 = (  color1883 );
    switch (  dref1884 ) {
        case Color8_60_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_60_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_60_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_60_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_60_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_60_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_60_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_60_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg161202 (    enum Color16_61  color1887 ) {
    enum Color16_61  dref1888 = (  color1887 );
    switch (  dref1888 ) {
        case Color16_61_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_61_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_61_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_61_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_61_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_61_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_61_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_61_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_61_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_61_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_61_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_61_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_61_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_61_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_61_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_61_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[107m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_colors1203 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1204 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561205 (    uint8_t  color1893 ) {
    ( (  print_dash_str972 ) ( ( ( StrConcat_967_StrConcat ) ( ( ( StrConcat_968_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1893 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561206 (    uint8_t  color1896 ) {
    ( (  print_dash_str972 ) ( ( ( StrConcat_967_StrConcat ) ( ( ( StrConcat_968_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1896 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1207 (    struct RGB_62  c1916 ) {
    ( (  print_dash_str962 ) ( ( ( StrConcat_963_StrConcat ) ( ( ( StrConcat_964_StrConcat ) ( ( ( StrConcat_965_StrConcat ) ( ( ( StrConcat_966_StrConcat ) ( ( ( StrConcat_967_StrConcat ) ( ( ( StrConcat_968_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1916 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1916 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1916 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1208 (    struct RGB_62  c1919 ) {
    ( (  print_dash_str962 ) ( ( ( StrConcat_963_StrConcat ) ( ( ( StrConcat_964_StrConcat ) ( ( ( StrConcat_965_StrConcat ) ( ( ( StrConcat_966_StrConcat ) ( ( ( StrConcat_967_StrConcat ) ( ( ( StrConcat_968_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1919 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1919 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1919 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1209 (    struct Color_59  c1937 ) {
    struct Color_59  dref1938 = (  c1937 );
    if ( dref1938.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1196 ) ( ) );
    }
    else if ( dref1938.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81199 ) ( ( dref1938 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref1938.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161200 ) ( ( dref1938 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref1938.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561205 ) ( ( dref1938 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref1938.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1207 ) ( ( dref1938 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1210 (    struct Color_59  c1945 ) {
    struct Color_59  dref1946 = (  c1945 );
    if ( dref1946.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1197 ) ( ) );
    }
    else if ( dref1946.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81201 ) ( ( dref1946 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref1946.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161202 ) ( ( dref1946 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref1946.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561206 ) ( ( dref1946 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref1946.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1208 ) ( ( dref1946 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1211 {
    ;
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

static  enum Unit_13   lam580 (   struct env580 env ,    char  c2002 ) {
    struct funenv315  temp1212 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1212.fun ( temp1212.env ,  ( & ( ( * ( env.builder1998 ) ) .f_chars ) ) ,  (  c2002 ) ) );
}

static  enum Unit_13   write1211 (   struct env1211 env ,    struct StrBuilder_581 *  builder1998 ,    const char*  s2000 ) {
    struct env580 envinst580 = {
        .envinst315 = env.envinst315 ,
        .builder1998 =  builder1998 ,
    };
    ( (  for_dash_each579 ) ( ( (  chars824 ) ( (  s2000 ) ) ) ,  ( (struct funenv580){ .fun = lam580, .env = envinst580 } ) ) );
    return ( Unit_13_Unit );
}

struct env1213 {
    ;
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

static  enum Unit_13   lam623 (   struct env623 env ,    char  c2002 ) {
    struct funenv315  temp1214 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1214.fun ( temp1214.env ,  ( & ( ( * ( env.builder1998 ) ) .f_chars ) ) ,  (  c2002 ) ) );
}

static  enum Unit_13   write1213 (   struct env1213 env ,    struct StrBuilder_581 *  builder1998 ,    char  s2000 ) {
    struct env623 envinst623 = {
        .envinst315 = env.envinst315 ,
        .builder1998 =  builder1998 ,
    };
    ( (  for_dash_each622 ) ( ( (  chars825 ) ( (  s2000 ) ) ) ,  ( (struct funenv623){ .fun = lam623, .env = envinst623 } ) ) );
    return ( Unit_13_Unit );
}

struct env1215 {
    ;
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

static  enum Unit_13   lam637 (   struct env637 env ,    char  c2002 ) {
    struct funenv315  temp1216 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1216.fun ( temp1216.env ,  ( & ( ( * ( env.builder1998 ) ) .f_chars ) ) ,  (  c2002 ) ) );
}

static  enum Unit_13   write1215 (   struct env1215 env ,    struct StrBuilder_581 *  builder1998 ,    struct TakeWhile_517  s2000 ) {
    struct env637 envinst637 = {
        .envinst315 = env.envinst315 ,
        .builder1998 =  builder1998 ,
    };
    ( (  for_dash_each636 ) ( ( (  chars985 ) ( (  s2000 ) ) ) ,  ( (struct funenv637){ .fun = lam637, .env = envinst637 } ) ) );
    return ( Unit_13_Unit );
}

struct env1217 {
    ;
    ;
    ;
    ;
    struct env315 envinst315;
    ;
    ;
};

static  enum Unit_13   lam641 (   struct env641 env ,    char  c2002 ) {
    struct funenv315  temp1218 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    return ( temp1218.fun ( temp1218.env ,  ( & ( ( * ( env.builder1998 ) ) .f_chars ) ) ,  (  c2002 ) ) );
}

static  enum Unit_13   write1217 (   struct env1217 env ,    struct StrBuilder_581 *  builder1998 ,    struct TakeWhile_522  s2000 ) {
    struct env641 envinst641 = {
        .envinst315 = env.envinst315 ,
        .builder1998 =  builder1998 ,
    };
    ( (  for_dash_each640 ) ( ( (  chars986 ) ( (  s2000 ) ) ) ,  ( (struct funenv641){ .fun = lam641, .env = envinst641 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1169 {
    enum Unit_13  (*fun) (  struct env1169  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1169 env;
};

struct env1219 {
    ;
    ;
    struct env1169 envinst1169;
};

static  enum Unit_13   write_dash_slice1219 (   struct env1219 env ,    struct StrBuilder_581 *  builder2005 ,    struct Slice_5  s2007 ) {
    struct funenv1169  temp1220 = ( (struct funenv1169){ .fun = add_dash_all1169, .env =  env.envinst1169  } );
    ( temp1220.fun ( temp1220.env ,  ( & ( ( * (  builder2005 ) ) .f_chars ) ) ,  (  s2007 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char646 (   struct env646 env ,    struct StrBuilder_581 *  builder2010 ,    char  c2012 ) {
    struct funenv315  temp1221 = ( (struct funenv315){ .fun = add315, .env =  env.envinst315  } );
    ( temp1221.fun ( temp1221.env ,  ( & ( ( * (  builder2010 ) ) .f_chars ) ) ,  (  c2012 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1162 {
    enum Unit_13  (*fun) (  struct env1162  ,    struct List_3 *  );
    struct env1162 env;
};

struct env1222 {
    ;
    struct env1162 envinst1162;
    ;
};

static  enum Unit_13   pop1222 (   struct env1222 env ,    struct StrBuilder_581 *  sb2020 ) {
    struct funenv1162  temp1223 = ( (struct funenv1162){ .fun = pop1162, .env =  env.envinst1162  } );
    return ( temp1223.fun ( temp1223.env ,  ( & ( ( * (  sb2020 ) ) .f_chars ) ) ) );
}

static  size_t   count1224 (    struct StrBuilder_581 *  sb2023 ) {
    return ( ( ( * (  sb2023 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_581   mk1225 (    enum CAllocator_4  al2026 ) {
    return ( (struct StrBuilder_581) { .f_chars = ( (  mk1148 ) ( (  al2026 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1226 (    struct StrBuilder_581 *  builder2032 ) {
    return ( (  to_dash_slice1179 ) ( ( ( * (  builder2032 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1227 (    struct StrBuilder_581 *  builder2035 ) {
    ( (  free1150 ) ( ( & ( ( * (  builder2035 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1211 {
    enum Unit_13  (*fun) (  struct env1211  ,    struct StrBuilder_581 *  ,    const char*  );
    struct env1211 env;
};

struct env1228 {
    ;
    ;
    struct env1211 envinst1211;
    ;
    struct env646 envinst646;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1228 (   struct env1228 env ,    const char*  s2049 ,    enum CAllocator_4  al2051 ) {
    struct StrBuilder_581  temp1229 = ( (  mk1225 ) ( (  al2051 ) ) );
    struct StrBuilder_581 *  sb2052 = ( &temp1229 );
    struct funenv1211  temp1230 = ( (struct funenv1211){ .fun = write1211, .env =  env.envinst1211  } );
    ( temp1230.fun ( temp1230.env ,  (  sb2052 ) ,  (  s2049 ) ) );
    struct funenv646  temp1231 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
    ( temp1231.fun ( temp1231.env ,  (  sb2052 ) ,  ( (  nullchar330 ) ( ) ) ) );
    struct DynStr_134  dynstr2053 = ( (  as_dash_str842 ) ( (  sb2052 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2053 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2053 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1215 {
    enum Unit_13  (*fun) (  struct env1215  ,    struct StrBuilder_581 *  ,    struct TakeWhile_517  );
    struct env1215 env;
};

struct env1232 {
    ;
    struct env1215 envinst1215;
    ;
    ;
    struct env646 envinst646;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1232 (   struct env1232 env ,    struct TakeWhile_517  s2049 ,    enum CAllocator_4  al2051 ) {
    struct StrBuilder_581  temp1233 = ( (  mk1225 ) ( (  al2051 ) ) );
    struct StrBuilder_581 *  sb2052 = ( &temp1233 );
    struct funenv1215  temp1234 = ( (struct funenv1215){ .fun = write1215, .env =  env.envinst1215  } );
    ( temp1234.fun ( temp1234.env ,  (  sb2052 ) ,  (  s2049 ) ) );
    struct funenv646  temp1235 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
    ( temp1235.fun ( temp1235.env ,  (  sb2052 ) ,  ( (  nullchar330 ) ( ) ) ) );
    struct DynStr_134  dynstr2053 = ( (  as_dash_str842 ) ( (  sb2052 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2053 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2053 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1217 {
    enum Unit_13  (*fun) (  struct env1217  ,    struct StrBuilder_581 *  ,    struct TakeWhile_522  );
    struct env1217 env;
};

struct env1236 {
    ;
    struct env1217 envinst1217;
    ;
    ;
    struct env646 envinst646;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1236 (   struct env1236 env ,    struct TakeWhile_522  s2049 ,    enum CAllocator_4  al2051 ) {
    struct StrBuilder_581  temp1237 = ( (  mk1225 ) ( (  al2051 ) ) );
    struct StrBuilder_581 *  sb2052 = ( &temp1237 );
    struct funenv1217  temp1238 = ( (struct funenv1217){ .fun = write1217, .env =  env.envinst1217  } );
    ( temp1238.fun ( temp1238.env ,  (  sb2052 ) ,  (  s2049 ) ) );
    struct funenv646  temp1239 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
    ( temp1239.fun ( temp1239.env ,  (  sb2052 ) ,  ( (  nullchar330 ) ( ) ) ) );
    struct DynStr_134  dynstr2053 = ( (  as_dash_str842 ) ( (  sb2052 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2053 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2053 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1228 {
    struct DynStr_134  (*fun) (  struct env1228  ,    const char*  ,    enum CAllocator_4  );
    struct env1228 env;
};

struct env1240 {
    ;
    ;
    ;
    ;
    ;
    struct env1228 envinst1228;
    ;
};

static  const char*   mk_dash_const_dash_str1240 (   struct env1240 env ,    const char*  s2056 ,    enum CAllocator_4  al2058 ) {
    struct funenv1228  temp1241 = ( (struct funenv1228){ .fun = mk_dash_dyn_dash_str1228, .env =  env.envinst1228  } );
    return ( ( (  cast193 ) ( ( ( ( temp1241.fun ( temp1241.env ,  (  s2056 ) ,  (  al2058 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1232 {
    struct DynStr_134  (*fun) (  struct env1232  ,    struct TakeWhile_517  ,    enum CAllocator_4  );
    struct env1232 env;
};

struct env1242 {
    ;
    ;
    ;
    ;
    struct env1232 envinst1232;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1242 (   struct env1242 env ,    struct TakeWhile_517  s2056 ,    enum CAllocator_4  al2058 ) {
    struct funenv1232  temp1243 = ( (struct funenv1232){ .fun = mk_dash_dyn_dash_str1232, .env =  env.envinst1232  } );
    return ( ( (  cast193 ) ( ( ( ( temp1243.fun ( temp1243.env ,  (  s2056 ) ,  (  al2058 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1236 {
    struct DynStr_134  (*fun) (  struct env1236  ,    struct TakeWhile_522  ,    enum CAllocator_4  );
    struct env1236 env;
};

struct env1244 {
    ;
    ;
    ;
    ;
    struct env1236 envinst1236;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1244 (   struct env1244 env ,    struct TakeWhile_522  s2056 ,    enum CAllocator_4  al2058 ) {
    struct funenv1236  temp1245 = ( (struct funenv1236){ .fun = mk_dash_dyn_dash_str1236, .env =  env.envinst1236  } );
    return ( ( (  cast193 ) ( ( ( ( temp1245.fun ( temp1245.env ,  (  s2056 ) ,  (  al2058 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1246 (  ) {
    struct timespec  temp1247 = ( (  undefined138 ) ( ) );
    struct timespec *  t2211 = ( &temp1247 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2211 ) ) );
    return ( * (  t2211 ) );
}

struct Duration_1249 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1248 (    struct Duration_1249  l2215 ,    struct Duration_1249  r2217 ) {
    enum Ordering_10  scmp2218 = ( (  cmp79 ) ( ( (  l2215 ) .f_secs ) ,  ( (  r2217 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2218 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2218 );
    }
    return ( (  cmp79 ) ( ( (  l2215 ) .f_nsecs ) ,  ( (  r2217 ) .f_nsecs ) ) );
}

static  struct Duration_1249   diff1250 (    struct timespec  l2221 ,    struct timespec  r2223 ) {
    int64_t  secdiff2224 = (  op_dash_sub84 ( ( (  l2221 ) .tv_sec ) , ( (  r2223 ) .tv_sec ) ) );
    int64_t  nsdiff2225 = (  op_dash_sub84 ( ( (  l2221 ) .tv_nsec ) , ( (  r2223 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2226 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2225 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2224 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1249) { .f_secs = (  secdiff2224 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2225 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2224 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1249) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2225 ) } );
            } else {
                return ( (struct Duration_1249) { .f_secs = (  op_dash_sub84 ( (  secdiff2224 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2226 ) , (  nsdiff2225 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2224 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1249) { .f_secs = (  secdiff2224 ) , .f_nsecs = (  nsdiff2225 ) } );
        } else {
            return ( (struct Duration_1249) { .f_secs = (  op_dash_sub84 ( (  secdiff2224 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2226 ) , (  nsdiff2225 ) ) ) } );
        }
    }
}

static  struct Duration_1249   duration_dash_from_dash_ns1251 (    int64_t  ns2229 ) {
    int64_t  ns_dash_in_dash_secs2230 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1249) { .f_secs = (  op_dash_div85 ( (  ns2229 ) , (  ns_dash_in_dash_secs2230 ) ) ) , .f_nsecs = ( (  mod811 ) ( (  ns2229 ) ,  (  ns_dash_in_dash_secs2230 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1252 (    struct Duration_1249  d2241 ) {
    int64_t  ns_dash_in_dash_secs2242 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2241 ) .f_secs ) , (  ns_dash_in_dash_secs2242 ) ) ) , ( (  d2241 ) .f_nsecs ) ) );
}

static  struct Scanner_298   mk1253 (    struct DynStr_134  s2252 ) {
    return ( (struct Scanner_298) { .f_s = ( (  chars849 ) ( (  s2252 ) ) ) } );
}

static  struct Maybe_734   scan_dash_int1254 (    struct Scanner_298 *  sc2255 ) {
    struct TakeWhile_513  digit_dash_chars2256 = ( (  take_dash_while536 ) ( (  sc2255 ) ,  (  is_dash_digit1135 ) ) );
    if ( ( (  null802 ) ( (  digit_dash_chars2256 ) ) ) ) {
        return ( (struct Maybe_734) { .tag = Maybe_734_None_t } );
    }
    ( (  drop_prime_804 ) ( (  sc2255 ) ,  ( (  count766 ) ( (  digit_dash_chars2256 ) ) ) ) );
    return ( (  parse_dash_int1137 ) ( (  digit_dash_chars2256 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1255 (  ) {
    struct Termios_141  temp1256 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2263 = ( &temp1256 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr219 ) ( (  orig_dash_termios2263 ) ) ) ) );
    struct Termios_141  raw2264 = ( * (  orig_dash_termios2263 ) );
    raw2264 .f_c_dash_lflag = ( (  u32_dash_and809 ) ( ( (  raw2264 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg810 ) ( ( (  u32_dash_ors806 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2264 .f_c_dash_iflag = ( (  u32_dash_and809 ) ( ( (  raw2264 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg810 ) ( ( (  u32_dash_ors807 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2264 .f_c_dash_oflag = ( (  u32_dash_and809 ) ( ( (  raw2264 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg810 ) ( ( (  u32_dash_ors808 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2264 .f_c_dash_cflag = ( (  u32_dash_or805 ) ( ( (  raw2264 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1126 ) ( ( & ( (  raw2264 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1126 ) ( ( & ( (  raw2264 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr219 ) ( ( & (  raw2264 ) ) ) ) ) );
    return ( * (  orig_dash_termios2263 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1257 (    struct Termios_141 *  og_dash_termios2267 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr219 ) ( (  og_dash_termios2267 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1258 (    int32_t  timeout_dash_ms2271 ) {
    struct Pollfd_228  pfd2272 = ( (struct Pollfd_228) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr227 ) ( ( & (  pfd2272 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2271 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2273 = ( ( (  zeroed238 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr217 ) ( ( & (  c2273 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2273 ) ) );
}

static  enum Unit_13   flush_dash_stdout1259 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr270 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1260 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1261 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1263 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2277;
};

struct env1264 {
    bool *  should_dash_resize2277;
};

struct funenv1264 {
    enum Unit_13  (*fun) (  struct env1264  ,    int32_t  );
    struct env1264 env;
};

struct funenv1264  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1265 ) {
    struct funenv1264  temp1266 = _intr_sigarr [  __intr__sig1265 ];
    temp1266.fun ( temp1266.env ,  __intr__sig1265 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1267 ,   struct funenv1264  __intr__fun1268 ) {
    _intr_sigarr [  __intr__sig1267 ] =  __intr__fun1268;
    signal(  __intr__sig1267 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1264 (   struct env1264 env ,    int32_t  dref2284 ) {
    (* env.should_dash_resize2277 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_656   mk1263 (   struct env1263 env ) {
    struct Termios_141  og_dash_termios2279 = ( (  enable_dash_raw_dash_mode1255 ) ( ) );
    ( (  hide_dash_cursor1191 ) ( ) );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  clear_dash_screen1204 ) ( ) );
    ( (  enable_dash_mouse1260 ) ( ) );
    ( (  flush_dash_stdout1259 ) ( ) );
    enum ColorPalette_657  palette2280 = ( (  query_dash_palette1198 ) ( ) );
    struct Tuple2_1021  dims2281 = ( (  get_dash_dimensions1194 ) ( ) );
    uint32_t  fps2282 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2283 = ( (  now1246 ) ( ) );
    struct env1264 envinst1264 = {
        .should_dash_resize2277 = env.should_dash_resize2277 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1264){ .fun = lam1264, .env = envinst1264 } ) ) );
    return ( (struct Tui_656) { .f_width = ( (  fst1020 ) ( (  dims2281 ) ) ) , .f_height = ( (  snd1022 ) ( (  dims2281 ) ) ) , .f_target_dash_fps = (  fps2282 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2283 ) , .f_fps_dash_ts = (  last_dash_sync2283 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2279 ) , .f_palette = (  palette2280 ) } );
}

static  enum Unit_13   sync1269 (    struct Tui_656 *  tui2287 ) {
    if ( (  eq42 ( ( ( * (  tui2287 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2288 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size284 ) ( ( ( * (  tui2287 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1270 = ( (  undefined138 ) ( ) );
    struct timespec *  now2289 = ( &temp1270 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2289 ) ) );
    int64_t  elapsed_dash_ns2290 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2289 ) ) .tv_sec ) , ( ( ( * (  tui2287 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2289 ) ) .tv_nsec ) , ( ( ( * (  tui2287 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2291 = (  op_dash_sub84 ( (  frame_dash_ns2288 ) , (  elapsed_dash_ns2290 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2291 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1271 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2291 ) } );
        struct timespec *  ts2292 = ( &temp1271 );
        ( ( nanosleep ) ( (  ts2292 ) ,  ( (  null_dash_ptr273 ) ( ) ) ) );
    }
    struct timespec  temp1272 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2293 = ( &temp1272 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2293 ) ) );
    (*  tui2287 ) .f_last_dash_sync = ( * (  last_dash_sync2293 ) );
    (*  tui2287 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2287 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2294 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2287 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2287 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2287 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2287 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2294 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2287 ) .f_actual_dash_fps = ( ( * (  tui2287 ) ) .f_fps_dash_count );
        (*  tui2287 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2287 ) .f_fps_dash_ts = ( ( * (  tui2287 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1273 (    struct Tui_656 *  tui2297 ) {
    ( (  disable_dash_mouse1261 ) ( ) );
    ( (  show_dash_cursor1190 ) ( ) );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  clear_dash_screen1204 ) ( ) );
    ( (  reset_dash_cursor_dash_position1193 ) ( ) );
    ( (  disable_dash_raw_dash_mode1257 ) ( ( & ( ( * (  tui2297 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1259 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   btn_dash_to_dash_mouse_dash_button1274 (    int64_t  btn2304 ) {
    return ( {  int32_t  dref2305 = ( (  i64_dash_i32281 ) ( (  btn2304 ) ) ) ;  dref2305 == 0 ? ( MouseButton_149_MouseLeft ) :  dref2305 == 1 ? ( MouseButton_149_MouseMiddle ) :  dref2305 == 2 ? ( MouseButton_149_MouseRight ) :  dref2305 == 64 ? ( MouseButton_149_ScrollUp ) :  dref2305 == 65 ? ( MouseButton_149_ScrollDown ) : ( (  panic_prime_1007 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1276 {
    enum {
        Maybe_1276_None_t,
        Maybe_1276_Just_t,
    } tag;
    union {
        struct {
            struct Key_557  field0;
        } Maybe_1276_Just_s;
    } stuff;
};

static struct Maybe_1276 Maybe_1276_Just (  struct Key_557  field0 ) {
    return ( struct Maybe_1276 ) { .tag = Maybe_1276_Just_t, .stuff = { .Maybe_1276_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1276   parse_dash_ss31275 (    char  c2308 ) {
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2308 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1276_Just ) ( ( (struct Key_557) { .tag = Key_557_F4_t } ) ) );
    }
    return ( (struct Maybe_1276) { .tag = Maybe_1276_None_t } );
}

static  struct Maybe_555   parse_dash_csi1277 (    struct DynStr_134  seq2311 ) {
    if ( (  eq45 ( ( ( (  seq2311 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    char  last2312 = (  elem_dash_get1105 ( ( (  seq2311 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2311 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1105 ( ( (  seq2311 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_298  temp1278 = ( (  mk1253 ) ( ( (  substr332 ) ( (  seq2311 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2311 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_298 *  sc2313 = ( &temp1278 );
        struct Maybe_734  dref2314 = ( (  scan_dash_int1254 ) ( (  sc2313 ) ) );
        if ( dref2314.tag == Maybe_734_None_t ) {
            return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
        }
        else if ( dref2314.tag == Maybe_734_Just_t ) {
            ( (  next526 ) ( (  sc2313 ) ) );
            struct Maybe_734  dref2316 = ( (  scan_dash_int1254 ) ( (  sc2313 ) ) );
            if ( dref2316.tag == Maybe_734_None_t ) {
                return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
            }
            else if ( dref2316.tag == Maybe_734_Just_t ) {
                ( (  next526 ) ( (  sc2313 ) ) );
                struct Maybe_734  dref2318 = ( (  scan_dash_int1254 ) ( (  sc2313 ) ) );
                if ( dref2318.tag == Maybe_734_None_t ) {
                    return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
                }
                else if ( dref2318.tag == Maybe_734_Just_t ) {
                    return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Mouse ) ( ( (struct MouseEvent_558) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1274 ) ( ( dref2314 .stuff .Maybe_734_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32281 ) ( ( dref2316 .stuff .Maybe_734_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32281 ) ( ( dref2318 .stuff .Maybe_734_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2311 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    if ( (  eq47 ( (  last2312 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_298  temp1279 = ( (  mk1253 ) ( (  seq2311 ) ) );
        struct Scanner_298 *  sc2320 = ( &temp1279 );
        struct Maybe_734  dref2321 = ( (  scan_dash_int1254 ) ( (  sc2320 ) ) );
        if ( dref2321.tag == Maybe_734_None_t ) {
            return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
        }
        else if ( dref2321.tag == Maybe_734_Just_t ) {
            return ( {  int32_t  dref2323 = ( (  i64_dash_i32281 ) ( ( dref2321 .stuff .Maybe_734_Just_s .field0 ) ) ) ;  dref2323 == 1 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Home_t } ) ) ) ) ) :  dref2323 == 2 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Insert_t } ) ) ) ) ) :  dref2323 == 3 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Delete_t } ) ) ) ) ) :  dref2323 == 4 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_End_t } ) ) ) ) ) :  dref2323 == 5 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_PageUp_t } ) ) ) ) ) :  dref2323 == 6 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_PageDown_t } ) ) ) ) ) :  dref2323 == 15 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F5_t } ) ) ) ) ) :  dref2323 == 17 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F6_t } ) ) ) ) ) :  dref2323 == 18 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F7_t } ) ) ) ) ) :  dref2323 == 19 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F8_t } ) ) ) ) ) :  dref2323 == 20 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F9_t } ) ) ) ) ) :  dref2323 == 21 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F10_t } ) ) ) ) ) :  dref2323 == 23 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F11_t } ) ) ) ) ) :  dref2323 == 24 ? ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_F12_t } ) ) ) ) ) : ( (struct Maybe_555) { .tag = Maybe_555_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
}

static  struct Maybe_555   read_dash_key1280 (  ) {
    char  temp1281 = ( (  undefined136 ) ( ) );
    char *  ch2325 = ( &temp1281 );
    struct Maybe_49  dref2326 = ( (  read_dash_byte1258 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2326.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    else if ( dref2326.tag == Maybe_49_Just_t ) {
        (*  ch2325 ) = ( dref2326 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2328 = ( (  i32_dash_char997 ) ( ( (  u32_dash_i32286 ) ( ( (  u32_dash_or805 ) ( ( (  i32_dash_u32278 ) ( ( (  char_dash_i32817 ) ( ( * (  ch2325 ) ) ) ) ) ) ,  ( (  from_dash_hex1186 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( ( Key_557_Ctrl ) ( (  letter2328 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u8996 ) ( ( * (  ch2325 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1280 ) ( ) );
        } else {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( ( Key_557_Char ) ( ( * (  ch2325 ) ) ) ) ) ) ) );
        }
    }
    char  temp1282 = ( (  undefined136 ) ( ) );
    char *  ch22329 = ( &temp1282 );
    struct Maybe_49  dref2330 = ( (  read_dash_byte1258 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2330.tag == Maybe_49_None_t ) {
        return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Escape_t } ) ) ) ) );
    }
    else if ( dref2330.tag == Maybe_49_Just_t ) {
        (*  ch22329 ) = ( dref2330 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22329 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_190  temp1283 = ( ( (  zeroed252 ) ( ) ) );
        struct Array_190 *  seq2332 = ( &temp1283 );
        int32_t  slen2333 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2333 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1284 = ( (  undefined136 ) ( ) );
            char *  sc2334 = ( &temp1284 );
            struct Maybe_49  dref2335 = ( (  read_dash_byte1258 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2335.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2335.tag == Maybe_49_Just_t ) {
                (*  sc2334 ) = ( dref2335 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1127 ) ( (  seq2332 ) ,  ( (  i32_dash_size280 ) ( (  slen2333 ) ) ) ,  ( * (  sc2334 ) ) ) );
            slen2333 = (  op_dash_add87 ( (  slen2333 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u8996 ) ( ( * (  sc2334 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u8996 ) ( ( * (  sc2334 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1277 ) ( ( (struct DynStr_134) { .f_contents = ( (  subslice304 ) ( ( (  as_dash_slice1128 ) ( (  seq2332 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( (  slen2333 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22329 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1285 = ( (  undefined136 ) ( ) );
        char *  sc2337 = ( &temp1285 );
        struct Maybe_49  dref2338 = ( (  read_dash_byte1258 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2338.tag == Maybe_49_None_t ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Escape_t } ) ) ) ) );
        }
        else if ( dref2338.tag == Maybe_49_Just_t ) {
            (*  sc2337 ) = ( dref2338 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1276  dref2340 = ( (  parse_dash_ss31275 ) ( ( * (  sc2337 ) ) ) );
        if ( dref2340.tag == Maybe_1276_None_t ) {
            return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
        }
        else if ( dref2340.tag == Maybe_1276_Just_t ) {
            return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( dref2340 .stuff .Maybe_1276_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_555_Just ) ( ( ( InputEvent_556_Key ) ( ( (struct Key_557) { .tag = Key_557_Escape_t } ) ) ) ) );
}

struct env1286 {
    ;
    ;
    bool *  should_dash_resize2277;
    ;
};

static  bool   update_dash_dimensions1286 (   struct env1286 env ,    struct Tui_656 *  tui2344 ) {
    if ( ( ! ( * ( env.should_dash_resize2277 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2277 ) = ( false );
    struct Tuple2_1021  dim2345 = ( (  get_dash_dimensions1194 ) ( ) );
    uint32_t  w2346 = ( (  fst1020 ) ( (  dim2345 ) ) );
    uint32_t  h2347 = ( (  snd1022 ) ( (  dim2345 ) ) );
    (*  tui2344 ) .f_width = (  w2346 );
    (*  tui2344 ) .f_height = (  h2347 );
    return ( true );
}

static  struct Cell_58   lam1288 (    struct Cell_58  dref2365 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1289 (    struct Cell_58  dref2367 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_655   mk_dash_screen1287 (    struct Tui_656 *  tui2361 ,    enum CAllocator_4  al2363 ) {
    struct Slice_587  cur2364 = ( (  allocate1118 ) ( (  al2363 ) ,  ( (  u32_dash_size284 ) ( (  op_dash_mul94 ( ( ( * (  tui2361 ) ) .f_width ) , ( ( * (  tui2361 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1106 ) ( (  cur2364 ) ,  (  lam1288 ) ) );
    struct Slice_587  prev2366 = ( (  allocate1118 ) ( (  al2363 ) ,  ( (  u32_dash_size284 ) ( (  op_dash_mul94 ( ( ( * (  tui2361 ) ) .f_width ) , ( ( * (  tui2361 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1107 ) ( (  prev2366 ) ,  (  lam1289 ) ) );
    return ( (struct Screen_655) { .f_current = (  cur2364 ) , .f_previous = (  prev2366 ) , .f_al = (  al2363 ) , .f_tui = (  tui2361 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1290 (    struct Screen_655 *  screen2370 ) {
    enum CAllocator_4  al2371 = ( ( * (  screen2370 ) ) .f_al );
    ( (  free1123 ) ( (  al2371 ) ,  ( ( * (  screen2370 ) ) .f_current ) ) );
    ( (  free1123 ) ( (  al2371 ) ,  ( ( * (  screen2370 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1292 (    struct Cell_58  dref2375 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1291 (    struct Screen_655 *  screen2374 ) {
    ( (  map1108 ) ( ( ( * (  screen2374 ) ) .f_current ) ,  (  lam1292 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1294 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1293 (    struct RenderState_1294 *  rs2379 ,    struct Cell_58 *  c2381 ,    uint32_t  x2383 ,    uint32_t  y2385 ) {
    if ( ( ( !  eq42 ( (  x2383 ) , ( ( * (  rs2379 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2385 ) , ( ( * (  rs2379 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1192 ) ( (  x2383 ) ,  (  y2385 ) ) );
        (*  rs2379 ) .f_x = (  x2383 );
        (*  rs2379 ) .f_y = (  y2385 );
    }
    char  char2386 = ( ( * (  c2381 ) ) .f_c );
    struct Color_59  bg2387 = ( ( * (  c2381 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2386 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2386 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2386 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2386 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2387 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2379 ) ) .f_fg ) , ( ( * (  c2381 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1209 ) ( ( ( * (  c2381 ) ) .f_fg ) ) );
        (*  rs2379 ) .f_fg = ( ( * (  c2381 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2379 ) ) .f_bg ) , (  bg2387 ) ) ) ) {
        ( (  set_dash_bg1210 ) ( (  bg2387 ) ) );
        (*  rs2379 ) .f_bg = (  bg2387 );
    }
    ( (  print_dash_str28 ) ( (  char2386 ) ) );
    (*  rs2379 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2379 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1295 (    struct Screen_655 *  screen2390 ) {
    int32_t  w2391 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2390 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2392 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2390 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1294  temp1296 = ( (struct RenderState_1294) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1294 *  rs2393 = ( &temp1296 );
    ( (  move_dash_cursor_dash_to1192 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_376  temp1297 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2392 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1298 =  next377 (&temp1297);
        if (  __cond1298 .tag == 0 ) {
            break;
        }
        int32_t  y2395 =  __cond1298 .stuff .Maybe_338_Just_s .field0;
        struct RangeIter_376  temp1299 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2391 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1300 =  next377 (&temp1299);
            if (  __cond1300 .tag == 0 ) {
                break;
            }
            int32_t  x2397 =  __cond1300 .stuff .Maybe_338_Just_s .field0;
            size_t  i2398 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2395 ) , (  w2391 ) ) ) , (  x2397 ) ) ) ) );
            struct Cell_58 *  cur2399 = ( (  get_dash_ptr1087 ) ( ( ( * (  screen2390 ) ) .f_current ) ,  (  i2398 ) ) );
            struct Cell_58 *  prev2400 = ( (  get_dash_ptr1087 ) ( ( ( * (  screen2390 ) ) .f_previous ) ,  (  i2398 ) ) );
            if ( ( ( !  eq57 ( (  cur2399 ) , (  prev2400 ) ) ) || ( ( * (  screen2390 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2393 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2393 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1293 ) ( (  rs2393 ) ,  (  cur2399 ) ,  ( (  i32_dash_u32278 ) ( (  x2397 ) ) ) ,  ( (  i32_dash_u32278 ) ( (  y2395 ) ) ) ) );
                (*  prev2400 ) = ( * (  cur2399 ) );
            }
        }
    }
    (*  screen2390 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1203 ) ( ) );
    ( (  flush_dash_stdout1259 ) ( ) );
    return ( ( * (  rs2393 ) ) .f_changes );
}

struct funenv1286 {
    bool  (*fun) (  struct env1286  ,    struct Tui_656 *  );
    struct env1286 env;
};

struct env1301 {
    struct env1286 envinst1286;
    ;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1301 (   struct env1301 env ,    struct Screen_655 *  screen2403 ) {
    struct Tui_656 *  tui2404 = ( ( * (  screen2403 ) ) .f_tui );
    struct funenv1286  temp1302 = ( (struct funenv1286){ .fun = update_dash_dimensions1286, .env =  env.envinst1286  } );
    if ( ( ! ( temp1302.fun ( temp1302.env ,  (  tui2404 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2403 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2405 = ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width );
    uint32_t  h2406 = ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_height );
    size_t  nusz2407 = ( (  u32_dash_size284 ) ( (  op_dash_mul94 ( (  w2405 ) , (  h2406 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2407 ) , ( ( ( * (  screen2403 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_655  nuscreen2408 = ( (  mk_dash_screen1287 ) ( (  tui2404 ) ,  ( ( * (  screen2403 ) ) .f_al ) ) );
    (*  screen2403 ) .f_current = ( (  nuscreen2408 ) .f_current );
    (*  screen2403 ) .f_previous = ( (  nuscreen2408 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1303 (    struct Screen_655 *  screen2411 ,    struct Color_59  c2413 ) {
    (*  screen2411 ) .f_default_dash_fg = (  c2413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1304 (    struct Screen_655 *  screen2416 ,    struct Color_59  c2418 ) {
    (*  screen2416 ) .f_default_dash_bg = (  c2418 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1305 (    struct Screen_655 *  screen2421 ,    struct Color_59  fg2423 ,    struct Color_59  bg2425 ) {
    (*  screen2421 ) .f_default_dash_fg = (  fg2423 );
    (*  screen2421 ) .f_default_dash_bg = (  bg2425 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1017   get_dash_cell_dash_ptr1306 (    struct Screen_655 *  screen2432 ,    int32_t  x2434 ,    int32_t  y2436 ) {
    int32_t  w2437 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2434 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2434 ) , (  w2437 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    }
    if ( ( (  cmp80 ( (  y2436 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2436 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1017) { .tag = Maybe_1017_None_t } );
    }
    size_t  i2438 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2436 ) , (  w2437 ) ) ) , (  x2434 ) ) ) ) );
    return ( ( Maybe_1017_Just ) ( ( (  get_dash_ptr1087 ) ( ( ( * (  screen2432 ) ) .f_current ) ,  (  i2438 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1307 (    struct Screen_655 *  screen2441 ) {
    struct RangeIter_376  temp1308 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2441 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1309 =  next377 (&temp1308);
        if (  __cond1309 .tag == 0 ) {
            break;
        }
        int32_t  y2443 =  __cond1309 .stuff .Maybe_338_Just_s .field0;
        struct RangeIter_376  temp1310 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2441 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1311 =  next377 (&temp1310);
            if (  __cond1311 .tag == 0 ) {
                break;
            }
            int32_t  x2445 =  __cond1311 .stuff .Maybe_338_Just_s .field0;
            struct Cell_58 *  cell2446 = ( (  or_dash_fail1016 ) ( ( (  get_dash_cell_dash_ptr1306 ) ( (  screen2441 ) ,  (  x2445 ) ,  (  y2443 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2446 ) .f_bg = ( ( * (  screen2441 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1312 (    struct Screen_655 *  screen2449 ,    char  c2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    int32_t  w2456 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2453 ) , (  w2456 ) ) != 0 ) || (  cmp80 ( (  y2455 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2457 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    struct Color_59  fg2458 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_59  bg2459 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    char  c2460 = (  c2451 );
    ( (  set1095 ) ( ( ( * (  screen2449 ) ) .f_current ) ,  (  i2457 ) ,  ( (struct Cell_58) { .f_c = (  c2460 ) , .f_fg = (  fg2458 ) , .f_bg = (  bg2459 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam654 (   struct env654 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1313 (    struct Screen_655 *  screen2463 ,    int32_t  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env654 envinst654 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each653 ) ( ( (  zip494 ) ( ( (  chars829 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv654){ .fun = lam654, .env = envinst654 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam661 (   struct env661 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1314 (    struct Screen_655 *  screen2463 ,    struct StrConcat_835  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env661 envinst661 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each660 ) ( ( (  zip496 ) ( ( (  chars974 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv661){ .fun = lam661, .env = envinst661 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam665 (   struct env665 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1315 (    struct Screen_655 *  screen2463 ,    struct StrConcat_851  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env665 envinst665 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each664 ) ( ( (  zip498 ) ( ( (  chars975 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv665){ .fun = lam665, .env = envinst665 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam669 (   struct env669 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1316 (    struct Screen_655 *  screen2463 ,    struct StrConcat_853  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env669 envinst669 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each668 ) ( ( (  zip500 ) ( ( (  chars976 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv669){ .fun = lam669, .env = envinst669 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam673 (   struct env673 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1317 (    struct Screen_655 *  screen2463 ,    struct StrConcat_879  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env673 envinst673 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each672 ) ( ( (  zip502 ) ( ( (  chars977 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv673){ .fun = lam673, .env = envinst673 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam677 (   struct env677 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1318 (    struct Screen_655 *  screen2463 ,    struct StrConcat_17  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env677 envinst677 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each676 ) ( ( (  zip504 ) ( ( (  chars922 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv677){ .fun = lam677, .env = envinst677 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam681 (   struct env681 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1319 (    struct Screen_655 *  screen2463 ,    struct StrConcat_881  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env681 envinst681 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each680 ) ( ( (  zip506 ) ( ( (  chars884 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv681){ .fun = lam681, .env = envinst681 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam685 (   struct env685 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1320 (    struct Screen_655 *  screen2463 ,    struct StrConcat_888  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env685 envinst685 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each684 ) ( ( (  zip508 ) ( ( (  chars978 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv685){ .fun = lam685, .env = envinst685 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam689 (   struct env689 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1321 (    struct Screen_655 *  screen2463 ,    struct StrConcat_893  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env689 envinst689 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each688 ) ( ( (  zip496 ) ( ( (  chars979 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv689){ .fun = lam689, .env = envinst689 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam693 (   struct env693 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1322 (    struct Screen_655 *  screen2463 ,    struct StrConcat_908  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env693 envinst693 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each692 ) ( ( (  zip496 ) ( ( (  chars980 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv693){ .fun = lam693, .env = envinst693 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam697 (   struct env697 env ,    struct Tuple2_364  dref2476 ) {
    ( (  set1095 ) ( ( ( * ( env.screen2463 ) ) .f_current ) ,  (  op_dash_add98 ( ( env.i2471 ) , ( (  i32_dash_size280 ) ( ( dref2476 .field1 ) ) ) ) ) ,  ( (struct Cell_58) { .f_c = ( dref2476 .field0 ) , .f_fg = ( env.fg2474 ) , .f_bg = ( env.bg2475 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1323 (    struct Screen_655 *  screen2463 ,    struct StrConcat_912  s2465 ,    int32_t  x2467 ,    int32_t  y2469 ) {
    if ( (  cmp80 ( (  y2469 ) , ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2470 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2463 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2471 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2469 ) , (  w2470 ) ) ) , (  x2467 ) ) ) ) );
    int32_t  x2472 = ( (  min814 ) ( (  x2467 ) ,  (  w2470 ) ) );
    size_t  max_dash_len2473 = ( (  i32_dash_size280 ) ( (  op_dash_sub88 ( (  w2470 ) , (  x2472 ) ) ) ) );
    struct Color_59  fg2474 = ( ( * (  screen2463 ) ) .f_default_dash_fg );
    struct Color_59  bg2475 = ( ( * (  screen2463 ) ) .f_default_dash_bg );
    struct env697 envinst697 = {
        .bg2475 =  bg2475 ,
        .screen2463 =  screen2463 ,
        .fg2474 =  fg2474 ,
        .i2471 =  i2471 ,
    };
    ( (  for_dash_each696 ) ( ( (  zip510 ) ( ( (  chars981 ) ( (  s2465 ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv697){ .fun = lam697, .env = envinst697 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1324 (    struct Screen_655 *  screen2481 ,    int32_t  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count770 ) ( ( (  chars829 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1313 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1325 (    struct Screen_655 *  screen2481 ,    struct StrConcat_835  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count772 ) ( ( (  chars974 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1314 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1326 (    struct Screen_655 *  screen2481 ,    struct StrConcat_851  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count774 ) ( ( (  chars975 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1315 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1327 (    struct Screen_655 *  screen2481 ,    struct StrConcat_853  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count776 ) ( ( (  chars976 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1316 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1328 (    struct Screen_655 *  screen2481 ,    struct StrConcat_879  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count778 ) ( ( (  chars977 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1317 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1329 (    struct Screen_655 *  screen2481 ,    struct StrConcat_17  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count780 ) ( ( (  chars922 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1318 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1330 (    struct Screen_655 *  screen2481 ,    struct StrConcat_881  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count782 ) ( ( (  chars884 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1319 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1331 (    struct Screen_655 *  screen2481 ,    struct StrConcat_888  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count784 ) ( ( (  chars978 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1320 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1332 (    struct Screen_655 *  screen2481 ,    struct StrConcat_893  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count772 ) ( ( (  chars979 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1321 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1333 (    struct Screen_655 *  screen2481 ,    struct StrConcat_908  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count772 ) ( ( (  chars980 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1322 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1334 (    struct Screen_655 *  screen2481 ,    struct StrConcat_912  s2483 ,    int32_t  x2485 ,    int32_t  y2487 ) {
    int32_t  slen2488 = ( (  size_dash_i32282 ) ( ( (  count786 ) ( ( (  chars981 ) ( (  s2483 ) ) ) ) ) ) );
    int32_t  w2489 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2481 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2490 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2489 ) , (  x2485 ) ) ) , (  slen2488 ) ) );
    ( (  draw_dash_str1323 ) ( (  screen2481 ) ,  (  s2483 ) ,  (  x2490 ) ,  (  y2487 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_325   try_dash_read_dash_contents1335 (    const char*  filename2896 ,    enum CAllocator_4  al2898 ) {
    FILE *  file2899 = ( ( fopen ) ( (  filename2896 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null274 ) ( (  file2899 ) ) ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    ( ( fseek ) ( (  file2899 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size2900 = ( ( ftell ) ( (  file2899 ) ) );
    ( ( fseek ) ( (  file2899 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2901 = ( ( (  allocate1117 ) ( (  al2898 ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( (  file_dash_size2900 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2901 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2900 ) ,  (  file2899 ) ) );
    ( (  set1094 ) ( (  file_dash_buf2901 ) ,  ( (  i32_dash_size280 ) ( (  file_dash_size2900 ) ) ) ,  ( (  nullchar330 ) ( ) ) ) );
    ( ( fclose ) ( (  file2899 ) ) );
    struct DynStr_134  str2902 = ( (struct DynStr_134) { .f_contents = (  file_dash_buf2901 ) } );
    return ( ( Maybe_325_Just ) ( (  str2902 ) ) );
}

static  struct DynStr_134   read_dash_contents1336 (    const char*  filename2905 ,    enum CAllocator_4  al2907 ) {
    return ( (  or_dash_fail1010 ) ( ( (  try_dash_read_dash_contents1335 ) ( (  filename2905 ) ,  (  al2907 ) ) ) ,  ( ( StrConcat_926_StrConcat ) ( ( ( StrConcat_927_StrConcat ) ( ( "could not open file " ) ,  (  filename2905 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1337 (    const char*  filename2910 ,    struct DynStr_134  contents2912 ) {
    FILE *  file2913 = ( ( fopen ) ( (  filename2910 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null274 ) ( (  file2913 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_299  it2914 = ( (  chars849 ) ( (  contents2912 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref2915 = ( (  next340 ) ( ( & (  it2914 ) ) ) );
        if ( dref2915.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file2913 ) ) );
            return ( true );
        }
        else if ( dref2915.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written2917 = ( ( fprintf ) ( (  file2913 ) ,  ( "%c" ) ,  ( dref2915 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written2917 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable999 ) ( ) );
}

static  enum Unit_13   write_dash_contents1338 (    const char*  filename2920 ,    struct DynStr_134  contents2922 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1337 ) ( (  filename2920 ) ,  (  contents2922 ) ) ) ) ) {
        ( (  panic1006 ) ( ( ( StrConcat_927_StrConcat ) ( ( "could not write to file " ) ,  (  filename2920 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1089   get1339 (  ) {
    return ( (struct Slice_1089) { .f_ptr = ( (  offset_dash_ptr157 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1340 (    char  c2493 ) {
    if ( (  eq47 ( (  c2493 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        int32_t  tab_dash_size2494 = (  from_dash_integral29 ( 2 ) );
        return (  tab_dash_size2494 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1341 (    char  c2504 ) {
    if ( ( (  is_dash_whitespace1129 ) ( (  c2504 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1133 ) ( (  c2504 ) ) ) || (  eq47 ( (  c2504 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2504 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1344 (    struct Cursor_182  l2511 ,    struct Cursor_182  r2513 ) {
    return ( (  eq41 ( ( (  l2511 ) .f_x ) , ( (  r2513 ) .f_x ) ) ) && (  eq41 ( ( (  l2511 ) .f_y ) , ( (  r2513 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1345 (    struct Visual_1030  dref2523 ) {
    return ( dref2523 .field0 );
}

struct Tuple2_1347 {
    struct Mode_836  field0;
    struct Mode_836  field1;
};

static struct Tuple2_1347 Tuple2_1347_Tuple2 (  struct Mode_836  field0 ,  struct Mode_836  field1 ) {
    return ( struct Tuple2_1347 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1346 (    struct Mode_836  l2528 ,    struct Mode_836  r2530 ) {
    struct Tuple2_1347  dref2531 = ( ( Tuple2_1347_Tuple2 ) ( (  l2528 ) ,  (  r2530 ) ) );
    if ( dref2531 .field0.tag == Mode_836_Normal_t && dref2531 .field1.tag == Mode_836_Normal_t ) {
        return ( true );
    }
    else if ( dref2531 .field0.tag == Mode_836_Insert_t && dref2531 .field1.tag == Mode_836_Insert_t ) {
        return ( true );
    }
    else if ( dref2531 .field0.tag == Mode_836_Select_t && dref2531 .field1.tag == Mode_836_Select_t ) {
        return ( true );
    }
    else if ( dref2531 .field0.tag == Mode_836_Cmd_t && dref2531 .field1.tag == Mode_836_Cmd_t ) {
        ( (  panic1003 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2531 .field0.tag == Mode_836_SearchBox_t && dref2531 .field1.tag == Mode_836_SearchBox_t ) {
        ( (  panic1003 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1348 (    struct Editor_1029 *  ed2554 ,    int32_t  y2556 ) {
    return ( (  get_dash_ptr1141 ) ( ( & ( ( * (  ed2554 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( (  y2556 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1349 (    struct Editor_1029 *  ed2559 ) {
    return ( (  get_dash_ptr1141 ) ( ( & ( ( * (  ed2559 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * (  ed2559 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_515   indent_dash_on_dash_row1350 (    struct Editor_1029 *  ed2562 ,    int32_t  y2564 ) {
    return ( (  take_dash_while537 ) ( ( (  get_dash_row1348 ) ( (  ed2562 ) ,  (  y2564 ) ) ) ,  (  is_dash_whitespace1129 ) ) );
}

static  size_t   num_dash_rows1351 (    struct Editor_1029 *  ed2567 ) {
    return ( (  size1183 ) ( ( & ( ( * (  ed2567 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1157 {
    enum Unit_13  (*fun) (  struct env1157  ,    struct List_292 *  ,    size_t  ,    struct List_3  );
    struct env1157 env;
};

struct env1352 {
    ;
    ;
    ;
    struct env1157 envinst1157;
    ;
    ;
};

static  struct List_3 *   insert_dash_row1352 (   struct env1352 env ,    struct Editor_1029 *  ed2570 ,    int32_t  y2572 ) {
    struct funenv1157  temp1353 = ( (struct funenv1157){ .fun = insert1157, .env =  env.envinst1157  } );
    ( temp1353.fun ( temp1353.env ,  ( & ( ( * (  ed2570 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( (  y2572 ) ) ) ,  ( (  mk1148 ) ( ( ( * (  ed2570 ) ) .f_al ) ) ) ) );
    return ( (  get_dash_row1348 ) ( (  ed2570 ) ,  (  y2572 ) ) );
}

struct funenv1160 {
    enum Unit_13  (*fun) (  struct env1160  ,    struct List_292 *  ,    size_t  );
    struct env1160 env;
};

struct env1354 {
    ;
    ;
    struct env1160 envinst1160;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1354 (   struct env1354 env ,    struct Editor_1029 *  ed2575 ,    int32_t  y2577 ) {
    struct List_3 *  next_dash_row2578 = ( (  get_dash_row1348 ) ( (  ed2575 ) ,  (  y2577 ) ) );
    ( (  free1150 ) ( (  next_dash_row2578 ) ) );
    struct funenv1160  temp1355 = ( (struct funenv1160){ .fun = remove1160, .env =  env.envinst1160  } );
    ( temp1355.fun ( temp1355.env ,  ( & ( ( * (  ed2575 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( (  y2577 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   char_dash_at1356 (    struct Editor_1029 *  ed2581 ,    struct Cursor_182  cur2583 ) {
    return ( (  try_dash_get1143 ) ( ( (  get_dash_row1348 ) ( (  ed2581 ) ,  ( (  cur2583 ) .f_y ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  cur2583 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1357 (    struct Editor_1029 *  ed2586 ) {
    return ( (  try_dash_get1143 ) ( ( (  cursor_dash_row1349 ) ( (  ed2586 ) ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * (  ed2586 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_1030   x_dash_to_dash_visual_dash_x1358 (    struct Editor_1029 *  ed2589 ,    int32_t  x2591 ,    int32_t  y2593 ) {
    return ( ( Visual_1030_Visual ) ( ( (  sum788 ) ( ( (  map345 ) ( ( (  take372 ) ( ( (  get_dash_row1348 ) ( (  ed2589 ) ,  (  y2593 ) ) ) ,  ( (  i32_dash_size280 ) ( (  x2591 ) ) ) ) ) ,  (  char_dash_len1340 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1359 (    struct Editor_1029 *  ed2596 ,    struct Visual_1030  dref2597 ,    int32_t  y2600 ) {
    int32_t  sum_dash_x2601 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2602 = ( (  get_dash_row1348 ) ( (  ed2596 ) ,  (  y2600 ) ) );
    struct RangeIter_376  temp1360 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( ( * (  chars2602 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1361 =  next377 (&temp1360);
        if (  __cond1361 .tag == 0 ) {
            break;
        }
        int32_t  x2604 =  __cond1361 .stuff .Maybe_338_Just_s .field0;
        sum_dash_x2601 = (  op_dash_add87 ( (  sum_dash_x2601 ) , ( (  char_dash_len1340 ) ( (  elem_dash_get2 ( (  chars2602 ) , ( (  i32_dash_size280 ) ( (  x2604 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2597 .field0 ) , (  sum_dash_x2601 ) ) == 0 ) ) {
            return (  x2604 );
        }
    }
    return ( (  size_dash_i32282 ) ( ( ( * (  chars2602 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1362 (    struct Editor_1029 *  ed2607 ,    struct Maybe_1019  sel2609 ) {
    if ( ( ( !  eq1346 ( ( ( * (  ed2607 ) ) .f_mode ) , ( (struct Mode_836) { .tag = Mode_836_Select_t } ) ) ) || ( ! ( (  is_dash_just1023 ) ( ( ( * (  ed2607 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2607 ) .f_selected = (  sel2609 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1363 (    struct Editor_1029 *  ed2612 ) {
    struct Maybe_325  dref2613 = ( ( * (  ed2612 ) ) .f_msg );
    if ( dref2613.tag == Maybe_325_None_t ) {
    }
    else if ( dref2613.tag == Maybe_325_Just_t ) {
        ( (  free1120 ) ( ( ( * (  ed2612 ) ) .f_al ) ,  ( ( dref2613 .stuff .Maybe_325_Just_s .field0 ) .f_contents ) ) );
        (*  ed2612 ) .f_msg = ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1364 {
    ;
    ;
    ;
    ;
    ;
    struct env1228 envinst1228;
    ;
};

static  enum Unit_13   send_dash_msg1364 (   struct env1364 env ,    struct Editor_1029 *  ed2617 ,    const char*  s2619 ) {
    ( (  reset_dash_msg1363 ) ( (  ed2617 ) ) );
    struct funenv1228  temp1365 = ( (struct funenv1228){ .fun = mk_dash_dyn_dash_str1228, .env =  env.envinst1228  } );
    struct DynStr_134  s2620 = ( temp1365.fun ( temp1365.env ,  (  s2619 ) ,  ( ( * (  ed2617 ) ) .f_al ) ) );
    (*  ed2617 ) .f_msg = ( ( Maybe_325_Just ) ( (  s2620 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1367 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1366 (    struct Editor_1029 *  ed2624 ,    int32_t  x2626 ,    int32_t  y2628 ,    struct Dims_1367  dim2630 ) {
    struct Cursor_182  cur2631 = ( ( * (  ed2624 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2632 = ( !  eq41 ( ( (  cur2631 ) .f_x ) , (  x2626 ) ) );
    int32_t  y2633 = ( (  clamp823 ) ( (  y2628 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( ( ( * (  ed2624 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2634 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2633 ) , (  op_dash_add87 ( ( ( * (  ed2624 ) ) .f_screen_dash_top ) , (  funny_dash_space2634 ) ) ) ) == 0 ) ) {
        (*  ed2624 ) .f_screen_dash_top = ( (  max818 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2633 ) , (  funny_dash_space2634 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2633 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2624 ) ) .f_screen_dash_top ) , ( (  dim2630 ) .f_rows ) ) ) , (  funny_dash_space2634 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2635 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2633 ) , (  funny_dash_space2634 ) ) ) , ( (  dim2630 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2624 ) .f_screen_dash_top = (  onscreen_dash_y2635 );
        } else {
        }
    }
    struct List_3 *  row2636 = ( (  get_dash_row1348 ) ( (  ed2624 ) ,  (  y2633 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2632 ) ) {
        int32_t  x2637 = ( (  clamp823 ) ( (  x2626 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32282 ) ( ( (  size1182 ) ( (  row2636 ) ) ) ) ) ) );
        (*  ed2624 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1358 ) ( (  ed2624 ) ,  (  x2637 ) ,  (  y2633 ) ) );
    }
    struct Visual_1030  vx2638 = ( ( * (  ed2624 ) ) .f_goal_dash_x );
    int32_t  x2639 = ( (  visual_dash_x_dash_to_dash_x1359 ) ( (  ed2624 ) ,  (  vx2638 ) ,  (  y2633 ) ) );
    int32_t  funny_dash_space2640 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2639 ) , (  op_dash_add87 ( ( ( * (  ed2624 ) ) .f_screen_dash_left ) , (  funny_dash_space2640 ) ) ) ) == 0 ) ) {
        (*  ed2624 ) .f_screen_dash_left = ( (  max818 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2639 ) , (  funny_dash_space2640 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2639 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2624 ) ) .f_screen_dash_left ) , ( (  dim2630 ) .f_cols ) ) ) , (  funny_dash_space2640 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2641 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2639 ) , (  funny_dash_space2640 ) ) ) , ( (  dim2630 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2624 ) .f_screen_dash_left = (  onscreen_dash_x2641 );
        } else {
        }
    }
    (*  ed2624 ) .f_cursor = ( (struct Cursor_182) { .f_x = (  x2639 ) , .f_y = (  y2633 ) } );
    ( (  set_dash_selection1362 ) ( (  ed2624 ) ,  ( (struct Maybe_1019) { .tag = Maybe_1019_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1368 (    struct Editor_1029 *  ed2644 ,    int32_t  x2646 ,    struct Dims_1367  dim2648 ) {
    ( (  move_dash_to1366 ) ( (  ed2644 ) ,  (  x2646 ) ,  ( ( ( * (  ed2644 ) ) .f_cursor ) .f_y ) ,  (  dim2648 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1369 (    struct Editor_1029 *  ed2651 ,    int32_t  y2653 ,    struct Dims_1367  dim2655 ) {
    ( (  move_dash_to1366 ) ( (  ed2651 ) ,  ( ( ( * (  ed2651 ) ) .f_cursor ) .f_x ) ,  (  y2653 ) ,  (  dim2655 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1370 (    struct Editor_1029 *  ed2658 ,    struct Dims_1367  dim2660 ) {
    struct Cursor_182  cur2661 = ( ( * (  ed2658 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2658 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2658 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1369 ) ( (  ed2658 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2658 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2660 ) ) );
            ( (  move_dash_to_dash_col1368 ) ( (  ed2658 ) ,  ( (  size_dash_i32282 ) ( ( ( * ( (  cursor_dash_row1349 ) ( (  ed2658 ) ) ) ) .f_count ) ) ) ,  (  dim2660 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1368 ) ( (  ed2658 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2658 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2660 ) ) );
    }
    return ( !  eq1344 ( ( ( * (  ed2658 ) ) .f_cursor ) , (  cur2661 ) ) );
}

static  bool   move_dash_right1371 (    struct Editor_1029 *  ed2664 ,    struct Dims_1367  dims2666 ) {
    struct Cursor_182  cur2667 = ( ( * (  ed2664 ) ) .f_cursor );
    int32_t  row_dash_len2668 = ( (  size_dash_i32282 ) ( ( ( * ( (  cursor_dash_row1349 ) ( (  ed2664 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2664 ) ) .f_cursor ) .f_x ) , (  row_dash_len2668 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2664 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( ( ( * (  ed2664 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1366 ) ( (  ed2664 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2664 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2666 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1368 ) ( (  ed2664 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2664 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2666 ) ) );
    }
    return ( !  eq1344 ( ( ( * (  ed2664 ) ) .f_cursor ) , (  cur2667 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1372 (    struct Editor_1029 *  ed2671 ,    struct Dims_1367  dims2673 ) {
    int32_t  off2674 = ( (  size_dash_i32282 ) ( ( (  count768 ) ( ( (  indent_dash_on_dash_row1350 ) ( (  ed2671 ) ,  ( ( ( * (  ed2671 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1368 ) ( (  ed2671 ) ,  (  off2674 ) ,  (  dims2673 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1373 (    struct Editor_1029 *  ed2677 ,    struct Dims_1367  dims2679 ) {
    struct List_3 *  currow2680 = ( (  cursor_dash_row1349 ) ( (  ed2677 ) ) );
    ( (  move_dash_to_dash_col1368 ) ( (  ed2677 ) ,  ( (  size_dash_i32282 ) ( ( (  size1182 ) ( (  currow2680 ) ) ) ) ) ,  (  dims2679 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1374 (    struct Editor_1029 *  ed2686 ,    int32_t  col2688 ,    int32_t  row2690 ) {
    return (  eq41 ( (  col2688 ) , ( (  size_dash_i32282 ) ( ( (  size1182 ) ( ( (  get_dash_row1348 ) ( (  ed2686 ) ,  (  row2690 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1375 (    struct Editor_1029 *  ed2693 ) {
    return (  eq41 ( ( ( ( * (  ed2693 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32282 ) ( ( (  size1182 ) ( ( (  cursor_dash_row1349 ) ( (  ed2693 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1376 (    struct Editor_1029 *  ed2696 ,    struct Maybe_325  clip2698 ) {
    struct Maybe_325  dref2699 = ( ( * (  ed2696 ) ) .f_clipboard );
    if ( dref2699.tag == Maybe_325_None_t ) {
    }
    else if ( dref2699.tag == Maybe_325_Just_t ) {
        ( (  free1120 ) ( ( ( * (  ed2696 ) ) .f_al ) ,  ( ( dref2699 .stuff .Maybe_325_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2696 ) .f_clipboard = (  clip2698 );
    return ( Unit_13_Unit );
}

struct funenv1213 {
    enum Unit_13  (*fun) (  struct env1213  ,    struct StrBuilder_581 *  ,    char  );
    struct env1213 env;
};

struct funenv1219 {
    enum Unit_13  (*fun) (  struct env1219  ,    struct StrBuilder_581 *  ,    struct Slice_5  );
    struct env1219 env;
};

struct env1377 {
    ;
    ;
    struct env646 envinst646;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1213 envinst1213;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1219 envinst1219;
    ;
    ;
};

static  struct Maybe_325   copy_dash_selection1377 (   struct env1377 env ,    struct Editor_1029 *  ed2703 ) {
    struct Maybe_1019  dref2704 = ( ( * (  ed2703 ) ) .f_selected );
    if ( dref2704.tag == Maybe_1019_None_t ) {
        struct Maybe_49  dref2705 = ( (  char_dash_at_dash_cursor1357 ) ( (  ed2703 ) ) );
        if ( dref2705.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
        }
        else if ( dref2705.tag == Maybe_49_Just_t ) {
            struct StrBuilder_581  temp1378 = ( (  mk1225 ) ( ( ( * (  ed2703 ) ) .f_al ) ) );
            struct StrBuilder_581 *  sb2707 = ( &temp1378 );
            struct funenv646  temp1379 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
            ( temp1379.fun ( temp1379.env ,  (  sb2707 ) ,  ( dref2705 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_325_Just ) ( ( (  as_dash_str842 ) ( (  sb2707 ) ) ) ) );
        }
    }
    else if ( dref2704.tag == Maybe_1019_Just_t ) {
        struct StrBuilder_581  temp1380 = ( (  mk1225 ) ( ( ( * (  ed2703 ) ) .f_al ) ) );
        struct StrBuilder_581 *  sb2709 = ( &temp1380 );
        struct Cursor_182  from2710 = ( (  min812 ) ( ( dref2704 .stuff .Maybe_1019_Just_s .field0 ) ,  ( ( * (  ed2703 ) ) .f_cursor ) ) );
        struct Cursor_182  to2711 = ( (  max819 ) ( ( dref2704 .stuff .Maybe_1019_Just_s .field0 ) ,  ( ( * (  ed2703 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2710 ) .f_y ) , ( (  to2711 ) .f_y ) ) ) ) {
            struct List_3 *  currow2712 = ( (  get_dash_row1348 ) ( (  ed2703 ) ,  ( (  from2710 ) .f_y ) ) );
            struct funenv1219  temp1381 = ( (struct funenv1219){ .fun = write_dash_slice1219, .env =  env.envinst1219  } );
            ( temp1381.fun ( temp1381.env ,  (  sb2709 ) ,  ( (  subslice304 ) ( ( (  to_dash_slice1179 ) ( ( * (  currow2712 ) ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  from2710 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( (  to2711 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1374 ) ( (  ed2703 ) ,  ( (  to2711 ) .f_x ) ,  ( (  to2711 ) .f_y ) ) ) ) {
                struct funenv1213  temp1382 = ( (struct funenv1213){ .fun = write1213, .env =  env.envinst1213  } );
                ( temp1382.fun ( temp1382.env ,  (  sb2709 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            (*  ed2703 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
        } else {
            ( (  assert1008 ) ( (  cmp80 ( ( (  to2711 ) .f_y ) , ( (  from2710 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2713 = ( (  get_dash_row1348 ) ( (  ed2703 ) ,  ( (  from2710 ) .f_y ) ) );
            struct funenv1219  temp1383 = ( (struct funenv1219){ .fun = write_dash_slice1219, .env =  env.envinst1219  } );
            ( temp1383.fun ( temp1383.env ,  (  sb2709 ) ,  ( (  subslice304 ) ( ( (  to_dash_slice1179 ) ( ( * (  currow2713 ) ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  from2710 ) .f_x ) ) ) ,  ( (  size1182 ) ( (  currow2713 ) ) ) ) ) ) );
            struct funenv1213  temp1384 = ( (struct funenv1213){ .fun = write1213, .env =  env.envinst1213  } );
            ( temp1384.fun ( temp1384.env ,  (  sb2709 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_290  temp1385 =  into_dash_iter294 ( ( (  subslice295 ) ( ( (  to_dash_slice1180 ) ( ( ( * (  ed2703 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( (  from2710 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  to2711 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_324  __cond1386 =  next360 (&temp1385);
                if (  __cond1386 .tag == 0 ) {
                    break;
                }
                struct List_3  row2715 =  __cond1386 .stuff .Maybe_324_Just_s .field0;
                struct funenv1219  temp1387 = ( (struct funenv1219){ .fun = write_dash_slice1219, .env =  env.envinst1219  } );
                ( temp1387.fun ( temp1387.env ,  (  sb2709 ) ,  ( (  to_dash_slice1179 ) ( (  row2715 ) ) ) ) );
                struct funenv1213  temp1388 = ( (struct funenv1213){ .fun = write1213, .env =  env.envinst1213  } );
                ( temp1388.fun ( temp1388.env ,  (  sb2709 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2716 = ( (  get_dash_row1348 ) ( (  ed2703 ) ,  ( (  to2711 ) .f_y ) ) );
            struct funenv1219  temp1389 = ( (struct funenv1219){ .fun = write_dash_slice1219, .env =  env.envinst1219  } );
            ( temp1389.fun ( temp1389.env ,  (  sb2709 ) ,  ( (  subslice304 ) ( ( (  to_dash_slice1179 ) ( ( * (  lastrow2716 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( (  to2711 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1374 ) ( (  ed2703 ) ,  ( (  to2711 ) .f_x ) ,  ( (  to2711 ) .f_y ) ) ) ) {
                struct funenv1213  temp1390 = ( (struct funenv1213){ .fun = write1213, .env =  env.envinst1213  } );
                ( temp1390.fun ( temp1390.env ,  (  sb2709 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_134  s2717 = ( (  as_dash_str842 ) ( (  sb2709 ) ) );
        (*  ed2703 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
        return ( ( Maybe_325_Just ) ( (  s2717 ) ) );
    }
}

struct funenv1377 {
    struct Maybe_325  (*fun) (  struct env1377  ,    struct Editor_1029 *  );
    struct env1377 env;
};

struct env1391 {
    ;
    ;
    ;
    struct env1377 envinst1377;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1391 (   struct env1391 env ,    struct Editor_1029 *  ed2720 ) {
    struct funenv1377  temp1392 = ( (struct funenv1377){ .fun = copy_dash_selection1377, .env =  env.envinst1377  } );
    ( (  set_dash_clipboard1376 ) ( (  ed2720 ) ,  ( temp1392.fun ( temp1392.env ,  (  ed2720 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1352 {
    struct List_3 *  (*fun) (  struct env1352  ,    struct Editor_1029 *  ,    int32_t  );
    struct env1352 env;
};

struct env1393 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env314 envinst314;
    struct env1352 envinst1352;
    ;
    struct env1169 envinst1169;
    struct env575 envinst575;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum PastePos_1394 {
    PastePos_1394_PasteBefore,
    PastePos_1394_PasteAfter,
};

static  struct Cursor_182   lam1042 (   struct env1042 env ,    struct Cursor_182  s2733 ) {
    return ( (  max819 ) ( (  s2733 ) ,  ( ( * ( env.ed2724 ) ) .f_cursor ) ) );
}

static  struct Cursor_182   lam1045 (   struct env1045 env ,    struct Cursor_182  s2735 ) {
    return ( (  min812 ) ( (  s2735 ) ,  ( ( * ( env.ed2724 ) ) .f_cursor ) ) );
}

static  struct Cursor_182   lam1048 (   struct env1048 env ,    struct Cursor_182  s2745 ) {
    return ( (  max819 ) ( (  s2745 ) ,  ( ( * ( env.ed2724 ) ) .f_cursor ) ) );
}

static  struct Cursor_182   lam1039 (   struct env1039 env ,    struct Cursor_182  s2748 ) {
    return ( (  min812 ) ( (  s2748 ) ,  ( ( * ( env.ed2724 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1393 (   struct env1393 env ,    struct Editor_1029 *  ed2724 ,    enum PastePos_1394  pastepos2726 ,    struct Dims_1367  dims2728 ) {
    if ( ( ! ( (  is_dash_just1024 ) ( ( ( * (  ed2724 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_134  cp2729 = ( (  or_dash_fail1015 ) ( ( ( * (  ed2724 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    bool  does_dash_it_dash_end_dash_in_dash_newline2730 = (  eq47 ( (  elem_dash_get1105 ( ( (  cp2729 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp2729 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline2730 ) ) {
        struct env1042 envinst1042 = {
            .ed2724 =  ed2724 ,
        };
        struct env1045 envinst1045 = {
            .ed2724 =  ed2724 ,
        };
        int32_t  from_dash_y2736 = ( {  enum PastePos_1394  dref2731 = (  pastepos2726 ) ;  dref2731 == PastePos_1394_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe1041 ) ( ( ( * (  ed2724 ) ) .f_selected ) ,  ( (struct funenv1042){ .fun = lam1042, .env = envinst1042 } ) ,  ( ( * (  ed2724 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe1044 ) ( ( ( * (  ed2724 ) ) .f_selected ) ,  ( (struct funenv1045){ .fun = lam1045, .env = envinst1045 } ) ,  ( ( * (  ed2724 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Zip_381  temp1395 =  into_dash_iter380 ( ( (  zip492 ) ( ( (  lines1134 ) ( (  cp2729 ) ) ) ,  ( (  from378 ) ( (  from_dash_y2736 ) ) ) ) ) );
        while (true) {
            struct Maybe_431  __cond1396 =  next430 (&temp1395);
            if (  __cond1396 .tag == 0 ) {
                break;
            }
            struct Tuple2_432  dref2737 =  __cond1396 .stuff .Maybe_431_Just_s .field0;
            struct funenv1352  temp1397 = ( (struct funenv1352){ .fun = insert_dash_row1352, .env =  env.envinst1352  } );
            struct List_3 *  row2740 = ( temp1397.fun ( temp1397.env ,  (  ed2724 ) ,  ( dref2737 .field1 ) ) );
            struct funenv314  temp1398 = ( (struct funenv314){ .fun = add_dash_all314, .env =  env.envinst314  } );
            ( temp1398.fun ( temp1398.env ,  (  row2740 ) ,  ( dref2737 .field0 ) ) );
            ( (  move_dash_to1366 ) ( (  ed2724 ) ,  ( (  size_dash_i32282 ) ( ( ( ( dref2737 .field0 ) .f_contents ) .f_count ) ) ) ,  ( dref2737 .field1 ) ,  (  dims2728 ) ) );
        }
        (*  ed2724 ) .f_selected = ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y2736 ) } ) ) );
        (*  ed2724 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
    } else {
        size_t  temp1399;
        size_t  from_dash_x2741 = (  temp1399 );
        int32_t  temp1400;
        int32_t  from_dash_y2742 = (  temp1400 );
        enum PastePos_1394  dref2743 = (  pastepos2726 );
        switch (  dref2743 ) {
            case PastePos_1394_PasteAfter : {
                struct env1048 envinst1048 = {
                    .ed2724 =  ed2724 ,
                };
                struct Cursor_182  from_dash_cur2746 = ( (  maybe1047 ) ( ( ( * (  ed2724 ) ) .f_selected ) ,  ( (struct funenv1048){ .fun = lam1048, .env = envinst1048 } ) ,  ( ( * (  ed2724 ) ) .f_cursor ) ) );
                from_dash_x2741 = ( (  i32_dash_size280 ) ( (  op_dash_add87 ( ( (  from_dash_cur2746 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y2742 = ( (  from_dash_cur2746 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1374 ) ( (  ed2724 ) ,  ( (  from_dash_cur2746 ) .f_x ) ,  ( (  from_dash_cur2746 ) .f_y ) ) ) ) {
                    if ( (  cmp9 ( ( (  i32_dash_size280 ) ( (  op_dash_add87 ( (  from_dash_y2742 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , ( (  num_dash_rows1351 ) ( (  ed2724 ) ) ) ) != 0 ) ) {
                        struct funenv575  temp1401 = ( (struct funenv575){ .fun = add575, .env =  env.envinst575  } );
                        ( temp1401.fun ( temp1401.env ,  ( & ( ( * (  ed2724 ) ) .f_current_dash_file ) ) ,  ( (  mk1148 ) ( ( ( * (  ed2724 ) ) .f_al ) ) ) ) );
                    }
                    from_dash_y2742 = (  op_dash_add87 ( (  from_dash_y2742 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x2741 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1394_PasteBefore : {
                struct env1039 envinst1039 = {
                    .ed2724 =  ed2724 ,
                };
                struct Cursor_182  from_dash_cur2749 = ( (  maybe1038 ) ( ( ( * (  ed2724 ) ) .f_selected ) ,  ( (struct funenv1039){ .fun = lam1039, .env = envinst1039 } ) ,  ( ( * (  ed2724 ) ) .f_cursor ) ) );
                from_dash_x2741 = ( (  i32_dash_size280 ) ( ( (  from_dash_cur2749 ) .f_x ) ) );
                from_dash_y2742 = ( (  from_dash_cur2749 ) .f_y );
                break;
            }
        }
        struct List_3 *  cur_dash_line2750 = ( (  get_dash_row1348 ) ( (  ed2724 ) ,  (  from_dash_y2742 ) ) );
        struct Slice_5  rest_dash_of_dash_line2751 = ( (  from1096 ) ( ( (  to_dash_slice1179 ) ( ( * (  cur_dash_line2750 ) ) ) ) ,  (  from_dash_x2741 ) ) );
        struct Slice_5  rest2752 = ( (  allocate1117 ) ( ( ( * (  ed2724 ) ) .f_al ) ,  ( (  rest_dash_of_dash_line2751 ) .f_count ) ) );
        ( (  copy_dash_to1100 ) ( (  rest_dash_of_dash_line2751 ) ,  (  rest2752 ) ) );
        ( (  trim1173 ) ( (  cur_dash_line2750 ) ,  (  from_dash_x2741 ) ) );
        struct LineIter_311  lines2753 = ( (  lines1134 ) ( (  cp2729 ) ) );
        struct funenv314  temp1402 = ( (struct funenv314){ .fun = add_dash_all314, .env =  env.envinst314  } );
        ( temp1402.fun ( temp1402.env ,  (  cur_dash_line2750 ) ,  ( (  or_dash_fail1015 ) ( ( (  head795 ) ( (  lines2753 ) ) ) ,  ( "clipboard cannot be empty" ) ) ) ) );
        struct List_3 *  last_dash_line2754 = (  cur_dash_line2750 );
        int32_t  to_dash_y2755 = (  from_dash_y2742 );
        struct Zip_383  temp1403 =  into_dash_iter382 ( ( (  zip491 ) ( ( (  drop371 ) ( (  lines2753 ) ,  (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  from378 ) ( (  op_dash_add87 ( (  from_dash_y2742 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_431  __cond1404 =  next433 (&temp1403);
            if (  __cond1404 .tag == 0 ) {
                break;
            }
            struct Tuple2_432  dref2756 =  __cond1404 .stuff .Maybe_431_Just_s .field0;
            struct funenv1352  temp1405 = ( (struct funenv1352){ .fun = insert_dash_row1352, .env =  env.envinst1352  } );
            last_dash_line2754 = ( temp1405.fun ( temp1405.env ,  (  ed2724 ) ,  ( dref2756 .field1 ) ) );
            to_dash_y2755 = ( dref2756 .field1 );
            struct funenv314  temp1406 = ( (struct funenv314){ .fun = add_dash_all314, .env =  env.envinst314  } );
            ( temp1406.fun ( temp1406.env ,  (  last_dash_line2754 ) ,  ( dref2756 .field0 ) ) );
        }
        int32_t  to_dash_x2759 = ( (  size_dash_i32282 ) ( ( (  size1182 ) ( (  last_dash_line2754 ) ) ) ) );
        struct funenv1169  temp1407 = ( (struct funenv1169){ .fun = add_dash_all1169, .env =  env.envinst1169  } );
        ( temp1407.fun ( temp1407.env ,  (  last_dash_line2754 ) ,  (  rest2752 ) ) );
        ( (  free1120 ) ( ( ( * (  ed2724 ) ) .f_al ) ,  (  rest2752 ) ) );
        ( (  assert1008 ) ( (  cmp80 ( (  to_dash_x2759 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "since clipboard is nonempty, this should also be nonempty" ) ) );
        if ( (  cmp813 ( ( ( * (  ed2724 ) ) .f_cursor ) , ( (  or_dash_else1018 ) ( ( ( * (  ed2724 ) ) .f_selected ) ,  ( ( * (  ed2724 ) ) .f_cursor ) ) ) ) != 0 ) ) {
            ( (  move_dash_to1366 ) ( (  ed2724 ) ,  (  op_dash_sub88 ( (  to_dash_x2759 ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  to_dash_y2755 ) ,  (  dims2728 ) ) );
            (*  ed2724 ) .f_selected = ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( (  from_dash_x2741 ) ) ) , .f_y = (  from_dash_y2742 ) } ) ) );
        } else {
            ( (  move_dash_to1366 ) ( (  ed2724 ) ,  ( (  size_dash_i32282 ) ( (  from_dash_x2741 ) ) ) ,  (  from_dash_y2742 ) ,  (  dims2728 ) ) );
            (*  ed2724 ) .f_selected = ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = (  op_dash_sub88 ( (  to_dash_x2759 ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  to_dash_y2755 ) } ) ) );
        }
        (*  ed2724 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
    }
    return ( Unit_13_Unit );
}

struct funenv1167 {
    enum Unit_13  (*fun) (  struct env1167  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1167 env;
};

struct funenv1354 {
    enum Unit_13  (*fun) (  struct env1354  ,    struct Editor_1029 *  ,    int32_t  );
    struct env1354 env;
};

struct env1408 {
    ;
    ;
    struct env1161 envinst1161;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1167 envinst1167;
    ;
    ;
    ;
    struct env1169 envinst1169;
    ;
    ;
    ;
    ;
    ;
    struct env1354 envinst1354;
    struct env1377 envinst1377;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct anon_1416 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1408 (   struct env1408 env ,    struct Editor_1029 *  ed2762 ,    struct Dims_1367  dims2764 ) {
    struct funenv1377  temp1409 = ( (struct funenv1377){ .fun = copy_dash_selection1377, .env =  env.envinst1377  } );
    struct Maybe_325  sel2765 = ( temp1409.fun ( temp1409.env ,  (  ed2762 ) ) );
    ( (  set_dash_clipboard1376 ) ( (  ed2762 ) ,  (  sel2765 ) ) );
    struct Maybe_1019  dref2766 = ( ( * (  ed2762 ) ) .f_selected );
    if ( dref2766.tag == Maybe_1019_None_t ) {
        struct List_3 *  row2767 = ( (  cursor_dash_row1349 ) ( (  ed2762 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size280 ) ( ( ( ( * (  ed2762 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2767 ) ) .f_count ) ) == 0 ) ) {
            struct funenv1161  temp1410 = ( (struct funenv1161){ .fun = remove1161, .env =  env.envinst1161  } );
            ( temp1410.fun ( temp1410.env ,  ( (  cursor_dash_row1349 ) ( (  ed2762 ) ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * (  ed2762 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1375 ) ( (  ed2762 ) ) ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( ( ( ( * (  ed2762 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32282 ) ( ( (  num_dash_rows1351 ) ( (  ed2762 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2768 = ( (  cursor_dash_row1349 ) ( (  ed2762 ) ) );
                    int32_t  next_dash_row_dash_id2769 = (  op_dash_add87 ( ( ( ( * (  ed2762 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2770 = ( (  get_dash_row1348 ) ( (  ed2762 ) ,  (  next_dash_row_dash_id2769 ) ) );
                    struct funenv1167  temp1411 = ( (struct funenv1167){ .fun = add_dash_all1167, .env =  env.envinst1167  } );
                    ( temp1411.fun ( temp1411.env ,  (  cur_dash_row2768 ) ,  (  next_dash_row2770 ) ) );
                    struct funenv1354  temp1412 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
                    ( temp1412.fun ( temp1412.env ,  (  ed2762 ) ,  (  next_dash_row_dash_id2769 ) ) );
                }
            }
        }
    }
    else if ( dref2766.tag == Maybe_1019_Just_t ) {
        struct Cursor_182  cfrom2772 = ( (  min812 ) ( ( dref2766 .stuff .Maybe_1019_Just_s .field0 ) ,  ( ( * (  ed2762 ) ) .f_cursor ) ) );
        struct Cursor_182  cto2773 = ( (  max819 ) ( ( dref2766 .stuff .Maybe_1019_Just_s .field0 ) ,  ( ( * (  ed2762 ) ) .f_cursor ) ) );
        struct RangeIter_376  temp1413 =  into_dash_iter375 ( ( (  to373 ) ( (  op_dash_add87 ( ( (  cfrom2772 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub88 ( ( (  cto2773 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1414 =  next377 (&temp1413);
            if (  __cond1414 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2775 =  __cond1414 .stuff .Maybe_338_Just_s .field0;
            ( (  assert1008 ) ( (  cmp80 ( (  row_dash_id2775 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1354  temp1415 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
            ( temp1415.fun ( temp1415.env ,  (  ed2762 ) ,  (  op_dash_add87 ( ( (  cfrom2772 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2776 = (  op_dash_sub88 ( ( (  cto2773 ) .f_y ) , ( (  max818 ) ( (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  cto2773 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add87 ( ( (  cfrom2772 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert1008 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2776 ) , ( (  cfrom2772 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2776 ) , (  op_dash_add87 ( ( (  cfrom2772 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1416  cto2777 = ( (struct anon_1416) { .f_x = ( (  cto2773 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2776 ) } );
        bool  should_dash_merge_dash_next_dash_line2778 = ( (  is_dash_at_dash_line_dash_end1374 ) ( (  ed2762 ) ,  ( (  cto2777 ) .f_x ) ,  ( (  cto2777 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2778 ) ) {
            struct List_3 *  first_dash_row2779 = ( (  get_dash_row1348 ) ( (  ed2762 ) ,  ( (  cfrom2772 ) .f_y ) ) );
            ( (  trim1173 ) ( (  first_dash_row2779 ) ,  ( (  i32_dash_size280 ) ( ( (  cfrom2772 ) .f_x ) ) ) ) );
            bool  on_dash_last_dash_row2780 = (  cmp80 ( (  op_dash_add87 ( ( (  cto2777 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32282 ) ( ( (  num_dash_rows1351 ) ( (  ed2762 ) ) ) ) ) ) != 0 );
            if ( ( ! (  on_dash_last_dash_row2780 ) ) ) {
                struct funenv1167  temp1417 = ( (struct funenv1167){ .fun = add_dash_all1167, .env =  env.envinst1167  } );
                ( temp1417.fun ( temp1417.env ,  (  first_dash_row2779 ) ,  ( (  get_dash_row1348 ) ( (  ed2762 ) ,  (  op_dash_add87 ( ( (  cto2777 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            }
            if ( (  eq41 ( ( (  cto2777 ) .f_y ) , ( (  cfrom2772 ) .f_y ) ) ) ) {
                if ( ( ! (  on_dash_last_dash_row2780 ) ) ) {
                    struct funenv1354  temp1418 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
                    ( temp1418.fun ( temp1418.env ,  (  ed2762 ) ,  (  op_dash_add87 ( ( (  cto2777 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                if ( ( ! (  on_dash_last_dash_row2780 ) ) ) {
                    struct funenv1354  temp1419 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
                    ( temp1419.fun ( temp1419.env ,  (  ed2762 ) ,  (  op_dash_add87 ( ( (  cto2777 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
                struct funenv1354  temp1420 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
                ( temp1420.fun ( temp1420.env ,  (  ed2762 ) ,  ( (  cto2777 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2781 = ( (  get_dash_row1348 ) ( (  ed2762 ) ,  ( (  cfrom2772 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2777 ) .f_y ) , ( (  cfrom2772 ) .f_y ) ) ) ) {
                struct RangeIter_376  temp1421 =  into_dash_iter375 ( ( (  to373 ) ( ( (  cfrom2772 ) .f_x ) ,  ( (  min814 ) ( ( (  cto2777 ) .f_x ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( (  size1182 ) ( (  first_dash_row2781 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_338  __cond1422 =  next377 (&temp1421);
                    if (  __cond1422 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2783 =  __cond1422 .stuff .Maybe_338_Just_s .field0;
                    struct funenv1161  temp1423 = ( (struct funenv1161){ .fun = remove1161, .env =  env.envinst1161  } );
                    ( temp1423.fun ( temp1423.env ,  (  first_dash_row2781 ) ,  ( (  i32_dash_size280 ) ( ( (  cfrom2772 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim1173 ) ( (  first_dash_row2781 ) ,  ( (  i32_dash_size280 ) ( ( (  cfrom2772 ) .f_x ) ) ) ) );
                struct funenv1169  temp1424 = ( (struct funenv1169){ .fun = add_dash_all1169, .env =  env.envinst1169  } );
                ( temp1424.fun ( temp1424.env ,  (  first_dash_row2781 ) ,  ( (  subslice304 ) ( ( (  to_dash_slice1179 ) ( ( * ( (  get_dash_row1348 ) ( (  ed2762 ) ,  ( (  cto2777 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint1184 ) ( (  op_dash_sub88 ( ( (  cto2777 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1354  temp1425 = ( (struct funenv1354){ .fun = remove_dash_row1354, .env =  env.envinst1354  } );
                ( temp1425.fun ( temp1425.env ,  (  ed2762 ) ,  ( (  cto2777 ) .f_y ) ) );
            }
        }
        (*  ed2762 ) .f_selected = ( (struct Maybe_1019) { .tag = Maybe_1019_None_t } );
        (*  ed2762 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
        ( (  move_dash_to1366 ) ( (  ed2762 ) ,  ( (  cfrom2772 ) .f_x ) ,  ( (  cfrom2772 ) .f_y ) ,  (  dims2764 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1171 {
    enum Unit_13  (*fun) (  struct env1171  ,    struct List_3 *  ,    struct TakeWhile_515  );
    struct env1171 env;
};

struct env1426 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1171 envinst1171;
    ;
    struct env1157 envinst1157;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1426 (   struct env1426 env ,    struct Editor_1029 *  ed2786 ,    int32_t  y2788 ,    enum CAllocator_4  al2790 ) {
    struct List_3  temp1427 = ( (  mk1148 ) ( (  al2790 ) ) );
    struct List_3 *  nurow2791 = ( &temp1427 );
    struct TakeWhile_515  rowws2792 = ( (  indent_dash_on_dash_row1350 ) ( (  ed2786 ) ,  ( ( ( * (  ed2786 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2793 = ( (  size_dash_i32282 ) ( ( (  count768 ) ( (  rowws2792 ) ) ) ) );
    struct funenv1171  temp1428 = ( (struct funenv1171){ .fun = add_dash_all1171, .env =  env.envinst1171  } );
    ( temp1428.fun ( temp1428.env ,  (  nurow2791 ) ,  (  rowws2792 ) ) );
    struct funenv1157  temp1429 = ( (struct funenv1157){ .fun = insert1157, .env =  env.envinst1157  } );
    ( temp1429.fun ( temp1429.env ,  ( & ( ( * (  ed2786 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( (  y2788 ) ) ) ,  ( * (  nurow2791 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1430 (    struct Editor_1029 *  ed2796 ,    struct Cursor_182  c2798 ) {
    return ( {  struct Maybe_1019  dref2799 = ( ( * (  ed2796 ) ) .f_selected ) ; dref2799.tag == Maybe_1019_Just_t ? ( (  between822 ) ( (  c2798 ) ,  ( ( * (  ed2796 ) ) .f_cursor ) ,  ( dref2799 .stuff .Maybe_1019_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1364 {
    enum Unit_13  (*fun) (  struct env1364  ,    struct Editor_1029 *  ,    const char*  );
    struct env1364 env;
};

struct env1431 {
    ;
    ;
    ;
    ;
    struct env1364 envinst1364;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct Maybe_1019   find_dash_next_dash_occurence1431 (   struct env1431 env ,    struct Editor_1029 *  ed2803 ,    struct Slice_5  needle2805 ) {
    struct Cursor_182  from2806 = ( (  max819 ) ( ( ( * (  ed2803 ) ) .f_cursor ) ,  ( (  or_dash_else1018 ) ( ( ( * (  ed2803 ) ) .f_selected ) ,  ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline2807 = ( (  to_dash_slice1179 ) ( ( * ( (  get_dash_row1348 ) ( (  ed2803 ) ,  ( (  from2806 ) .f_y ) ) ) ) ) );
    struct Maybe_913  dref2808 = ( (  find_dash_slice1109 ) ( ( (  subslice304 ) ( (  curline2807 ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( (  from2806 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline2807 ) .f_count ) ) ) ,  (  needle2805 ) ) );
    if ( dref2808.tag == Maybe_913_Just_t ) {
        return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from2806 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32282 ) ( ( dref2808 .stuff .Maybe_913_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from2806 ) .f_y ) } ) ) );
    }
    else if ( dref2808.tag == Maybe_913_None_t ) {
        struct Zip_349  temp1432 =  into_dash_iter368 ( ( (  zip487 ) ( ( (  from1097 ) ( ( (  to_dash_slice1180 ) ( ( ( * (  ed2803 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( (  from2806 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from378 ) ( (  op_dash_add87 ( ( (  from2806 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_357  __cond1433 =  next359 (&temp1432);
            if (  __cond1433 .tag == 0 ) {
                break;
            }
            struct Tuple2_358  dref2810 =  __cond1433 .stuff .Maybe_357_Just_s .field0;
            struct Maybe_913  dref2813 = ( (  find_dash_slice1109 ) ( ( (  to_dash_slice1179 ) ( ( dref2810 .field0 ) ) ) ,  (  needle2805 ) ) );
            if ( dref2813.tag == Maybe_913_None_t ) {
            }
            else if ( dref2813.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2813 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( dref2810 .field1 ) } ) ) );
            }
        }
        struct funenv1364  temp1434 = ( (struct funenv1364){ .fun = send_dash_msg1364, .env =  env.envinst1364  } );
        ( temp1434.fun ( temp1434.env ,  (  ed2803 ) ,  ( "Wrapped!" ) ) );
        struct Zip_349  temp1435 =  into_dash_iter368 ( ( (  zip487 ) ( ( (  subslice295 ) ( ( (  to_dash_slice1180 ) ( ( ( * (  ed2803 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  from2806 ) .f_y ) ) ) ) ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_357  __cond1436 =  next359 (&temp1435);
            if (  __cond1436 .tag == 0 ) {
                break;
            }
            struct Tuple2_358  dref2815 =  __cond1436 .stuff .Maybe_357_Just_s .field0;
            struct Maybe_913  dref2818 = ( (  find_dash_slice1109 ) ( ( (  to_dash_slice1179 ) ( ( dref2815 .field0 ) ) ) ,  (  needle2805 ) ) );
            if ( dref2818.tag == Maybe_913_None_t ) {
            }
            else if ( dref2818.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2818 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( dref2815 .field1 ) } ) ) );
            }
        }
        struct Maybe_913  dref2820 = ( (  find_dash_slice1109 ) ( (  curline2807 ) ,  (  needle2805 ) ) );
        if ( dref2820.tag == Maybe_913_None_t ) {
        }
        else if ( dref2820.tag == Maybe_913_Just_t ) {
            return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2820 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from2806 ) .f_y ) } ) ) );
        }
        struct funenv1364  temp1437 = ( (struct funenv1364){ .fun = send_dash_msg1364, .env =  env.envinst1364  } );
        ( temp1437.fun ( temp1437.env ,  (  ed2803 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1019) { .tag = Maybe_1019_None_t } );
    }
}

struct env1438 {
    ;
    ;
    struct env1364 envinst1364;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct Cursor_182   lam1063 (   struct env1063 env ,    struct Cursor_182  s2828 ) {
    return ( (  min812 ) ( ( ( * ( env.ed2824 ) ) .f_cursor ) ,  (  s2828 ) ) );
}

static  struct Maybe_1019   find_dash_prev_dash_occurence1438 (   struct env1438 env ,    struct Editor_1029 *  ed2824 ,    struct Slice_5  needle2826 ) {
    struct env1063 envinst1063 = {
        .ed2824 =  ed2824 ,
    };
    struct Cursor_182  from2829 = ( (  maybe1062 ) ( ( ( * (  ed2824 ) ) .f_selected ) ,  ( (struct funenv1063){ .fun = lam1063, .env = envinst1063 } ) ,  ( ( * (  ed2824 ) ) .f_cursor ) ) );
    struct Slice_5  curline2830 = ( (  to_dash_slice1179 ) ( ( * ( (  get_dash_row1348 ) ( (  ed2824 ) ,  ( (  from2829 ) .f_y ) ) ) ) ) );
    struct Maybe_913  dref2831 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1112 ) ( ( (  subslice304 ) ( (  curline2830 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size280 ) ( ( (  from2829 ) .f_x ) ) ) ) ) ,  (  needle2826 ) ) );
    if ( dref2831.tag == Maybe_913_Just_t ) {
        return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2831 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from2829 ) .f_y ) } ) ) );
    }
    else if ( dref2831.tag == Maybe_913_None_t ) {
        int32_t  from_dash_y2833 = (  op_dash_sub88 ( ( (  from2829 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y2833 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row2834 = ( (  get_dash_row1348 ) ( (  ed2824 ) ,  (  from_dash_y2833 ) ) );
            struct Maybe_913  dref2835 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1112 ) ( ( (  to_dash_slice1179 ) ( ( * (  row2834 ) ) ) ) ,  (  needle2826 ) ) );
            if ( dref2835.tag == Maybe_913_None_t ) {
            }
            else if ( dref2835.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2835 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2833 ) } ) ) );
            }
            from_dash_y2833 = (  op_dash_sub88 ( (  from_dash_y2833 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1364  temp1439 = ( (struct funenv1364){ .fun = send_dash_msg1364, .env =  env.envinst1364  } );
        ( temp1439.fun ( temp1439.env ,  (  ed2824 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y2837 = (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( (  num_dash_rows1351 ) ( (  ed2824 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y2837 ) , ( (  from2829 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row2838 = ( (  get_dash_row1348 ) ( (  ed2824 ) ,  (  from_dash_y2837 ) ) );
            struct Maybe_913  dref2839 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1112 ) ( ( (  to_dash_slice1179 ) ( ( * (  row2838 ) ) ) ) ,  (  needle2826 ) ) );
            if ( dref2839.tag == Maybe_913_None_t ) {
            }
            else if ( dref2839.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2839 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2837 ) } ) ) );
            }
            from_dash_y2837 = (  op_dash_sub88 ( (  from_dash_y2837 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_913  dref2841 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1112 ) ( (  curline2830 ) ,  (  needle2826 ) ) );
        if ( dref2841.tag == Maybe_913_None_t ) {
        }
        else if ( dref2841.tag == Maybe_913_Just_t ) {
            return ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( dref2841 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from2829 ) .f_y ) } ) ) );
        }
        struct funenv1364  temp1440 = ( (struct funenv1364){ .fun = send_dash_msg1364, .env =  env.envinst1364  } );
        ( temp1440.fun ( temp1440.env ,  (  ed2824 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1019) { .tag = Maybe_1019_None_t } );
    }
}

struct funenv1154 {
    enum Unit_13  (*fun) (  struct env1154  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1154 env;
};

struct env1441 {
    ;
    ;
    ;
    ;
    struct env1154 envinst1154;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam1051 (   struct env1051 env ,    struct Cursor_182  s2847 ) {
    return ( (  min814 ) ( ( (  s2847 ) .f_y ) ,  ( ( ( * ( env.ed2845 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam1054 (   struct env1054 env ,    struct Cursor_182  s2850 ) {
    return ( (  max818 ) ( ( (  s2850 ) .f_y ) ,  ( ( ( * ( env.ed2845 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   indent_dash_selection1441 (   struct env1441 env ,    struct Editor_1029 *  ed2845 ) {
    struct env1051 envinst1051 = {
        .ed2845 =  ed2845 ,
    };
    int32_t  from_dash_y2848 = ( (  maybe1050 ) ( ( ( * (  ed2845 ) ) .f_selected ) ,  ( (struct funenv1051){ .fun = lam1051, .env = envinst1051 } ) ,  ( ( ( * (  ed2845 ) ) .f_cursor ) .f_y ) ) );
    struct env1054 envinst1054 = {
        .ed2845 =  ed2845 ,
    };
    int32_t  to_dash_y2851 = ( (  maybe1053 ) ( ( ( * (  ed2845 ) ) .f_selected ) ,  ( (struct funenv1054){ .fun = lam1054, .env = envinst1054 } ) ,  ( ( ( * (  ed2845 ) ) .f_cursor ) .f_y ) ) );
    struct RangeIter_376  temp1442 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_y2848 ) ,  (  to_dash_y2851 ) ) ) );
    while (true) {
        struct Maybe_338  __cond1443 =  next377 (&temp1442);
        if (  __cond1443 .tag == 0 ) {
            break;
        }
        int32_t  rowid2853 =  __cond1443 .stuff .Maybe_338_Just_s .field0;
        struct List_3 *  row2854 = ( (  get_dash_row1348 ) ( (  ed2845 ) ,  (  rowid2853 ) ) );
        struct funenv1154  temp1444 = ( (struct funenv1154){ .fun = insert1154, .env =  env.envinst1154  } );
        ( temp1444.fun ( temp1444.env ,  (  row2854 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1445 {
    ;
    struct env1161 envinst1161;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam1057 (   struct env1057 env ,    struct Cursor_182  s2859 ) {
    return ( (  min814 ) ( ( (  s2859 ) .f_y ) ,  ( ( ( * ( env.ed2857 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam1060 (   struct env1060 env ,    struct Cursor_182  s2862 ) {
    return ( (  max818 ) ( ( (  s2862 ) .f_y ) ,  ( ( ( * ( env.ed2857 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1445 (   struct env1445 env ,    struct Editor_1029 *  ed2857 ) {
    struct env1057 envinst1057 = {
        .ed2857 =  ed2857 ,
    };
    int32_t  from_dash_y2860 = ( (  maybe1056 ) ( ( ( * (  ed2857 ) ) .f_selected ) ,  ( (struct funenv1057){ .fun = lam1057, .env = envinst1057 } ) ,  ( ( ( * (  ed2857 ) ) .f_cursor ) .f_y ) ) );
    struct env1060 envinst1060 = {
        .ed2857 =  ed2857 ,
    };
    int32_t  to_dash_y2863 = ( (  maybe1059 ) ( ( ( * (  ed2857 ) ) .f_selected ) ,  ( (struct funenv1060){ .fun = lam1060, .env = envinst1060 } ) ,  ( ( ( * (  ed2857 ) ) .f_cursor ) .f_y ) ) );
    struct RangeIter_376  temp1446 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_y2860 ) ,  (  to_dash_y2863 ) ) ) );
    while (true) {
        struct Maybe_338  __cond1447 =  next377 (&temp1446);
        if (  __cond1447 .tag == 0 ) {
            break;
        }
        int32_t  rowid2865 =  __cond1447 .stuff .Maybe_338_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1356 ) ( (  ed2857 ) ,  ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid2865 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct List_3 *  row2866 = ( (  get_dash_row1348 ) ( (  ed2857 ) ,  (  rowid2865 ) ) );
            struct funenv1161  temp1448 = ( (struct funenv1161){ .fun = remove1161, .env =  env.envinst1161  } );
            ( temp1448.fun ( temp1448.env ,  (  row2866 ) ,  (  from_dash_integral11 ( 0 ) ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1176 {
    struct List_292  (*fun) (  struct env1176  ,    struct Map_310  ,    enum CAllocator_4  );
    struct env1176 env;
};

struct env1449 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env313 envinst313;
    struct env1176 envinst1176;
    struct env575 envinst575;
    ;
    ;
};

static  struct List_3   lam312 (   struct env312 env ,    struct DynStr_134  line2924 ) {
    struct funenv313  temp1452 = ( (struct funenv313){ .fun = to_dash_list313, .env =  env.envinst313  } );
    return ( temp1452.fun ( temp1452.env ,  (  line2924 ) ,  ( env.al2893 ) ) );
}

static  struct List_292   load_dash_file1449 (   struct env1449 env ,    const char*  filename2891 ,    enum CAllocator_4  al2893 ) {
    struct funenv1176  temp1451 = ( (struct funenv1176){ .fun = to_dash_list1176, .env =  env.envinst1176  } );
    struct env312 envinst312 = {
        .envinst313 = env.envinst313 ,
        .al2893 =  al2893 ,
    };
    struct List_292  temp1450 = ( temp1451.fun ( temp1451.env ,  ( (  map341 ) ( ( (  lines1134 ) ( ( (  read_dash_contents1336 ) ( (  filename2891 ) ,  (  al2893 ) ) ) ) ) ,  ( (struct funenv312){ .fun = lam312, .env = envinst312 } ) ) ) ,  (  al2893 ) ) );
    struct List_292 *  file2925 = ( &temp1450 );
    if ( ( (  null801 ) ( (  file2925 ) ) ) ) {
        struct funenv575  temp1453 = ( (struct funenv575){ .fun = add575, .env =  env.envinst575  } );
        ( temp1453.fun ( temp1453.env ,  (  file2925 ) ,  ( (  mk1148 ) ( (  al2893 ) ) ) ) );
    }
    return ( * (  file2925 ) );
}

struct env1454 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al2888;
    struct env646 envinst646;
    ;
};

static  enum Unit_13   lam645 (   struct env645 env ,    char  c2935 ) {
    struct funenv646  temp1458 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
    return ( temp1458.fun ( temp1458.env ,  ( env.sb2931 ) ,  (  c2935 ) ) );
}

static  enum Unit_13   save_dash_file1454 (   struct env1454 env ,    struct List_292  cf2928 ,    const char*  filename2930 ) {
    struct StrBuilder_581  temp1455 = ( (  mk1225 ) ( ( env.al2888 ) ) );
    struct StrBuilder_581 *  sb2931 = ( &temp1455 );
    struct SliceIter_290  temp1456 =  into_dash_iter293 ( (  cf2928 ) );
    while (true) {
        struct Maybe_324  __cond1457 =  next360 (&temp1456);
        if (  __cond1457 .tag == 0 ) {
            break;
        }
        struct List_3  row2933 =  __cond1457 .stuff .Maybe_324_Just_s .field0;
        struct env645 envinst645 = {
            .envinst646 = env.envinst646 ,
            .sb2931 =  sb2931 ,
        };
        ( (  for_dash_each644 ) ( (  row2933 ) ,  ( (struct funenv645){ .fun = lam645, .env = envinst645 } ) ) );
        struct funenv646  temp1459 = ( (struct funenv646){ .fun = write_dash_char646, .env =  env.envinst646  } );
        ( temp1459.fun ( temp1459.env ,  (  sb2931 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1338 ) ( (  filename2930 ) ,  ( (  as_dash_str842 ) ( (  sb2931 ) ) ) ) );
    ( (  free1227 ) ( (  sb2931 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1460 (    struct List_292  cf2938 ) {
    ( (  for_dash_each630 ) ( ( (  addresses1181 ) ( (  cf2938 ) ) ) ,  (  free1150 ) ) );
    ( (  free1151 ) ( ( & (  cf2938 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1461 {
    ;
    ;
    int32_t  pad2939;
    ;
    ;
};

struct anon_1462 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1462   left_dash_offset1461 (   struct env1461 env ,    struct Editor_1029 *  ed2942 ) {
    int32_t  max_dash_digits2943 = ( (  max818 ) ( ( (  count_dash_digits826 ) ( ( ( ( * (  ed2942 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1462) { .f_max_dash_digits = (  max_dash_digits2943 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad2939 ) , (  max_dash_digits2943 ) ) ) , ( env.pad2939 ) ) ) } );
}

struct funenv1461 {
    struct anon_1462  (*fun) (  struct env1461  ,    struct Editor_1029 *  );
    struct env1461 env;
};

struct env1463 {
    ;
    struct env1461 envinst1461;
    ;
};

static  struct Dims_1367   screen_dash_dims1463 (   struct env1463 env ,    struct Editor_1029 *  ed2946 ,    struct Tui_656 *  tui2948 ) {
    struct funenv1461  temp1464 = ( (struct funenv1461){ .fun = left_dash_offset1461, .env =  env.envinst1461  } );
    return ( (struct Dims_1367) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * (  tui2948 ) ) .f_width ) ) ) , ( ( temp1464.fun ( temp1464.env ,  (  ed2946 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32286 ) ( ( ( * (  tui2948 ) ) .f_height ) ) ) } );
}

struct env1465 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad2939;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1461 envinst1461;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1465 (   struct env1465 env ,    struct Screen_655 *  screen2951 ,    struct Editor_1029 *  ed2953 ) {
    int32_t  w2954 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2951 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2955 = ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2951 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2956 = ( ( * (  ed2953 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2957 = ( ( * (  ed2953 ) ) .f_screen_dash_left );
    int32_t  x2958 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2959 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1008 ) ( (  cmp9 ( ( ( ( * (  ed2953 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1461  temp1466 = ( (struct funenv1461){ .fun = left_dash_offset1461, .env =  env.envinst1461  } );
    struct anon_1462  offstuff2960 = ( temp1466.fun ( temp1466.env ,  (  ed2953 ) ) );
    int32_t  max_dash_digits2961 = ( (  offstuff2960 ) .f_max_dash_digits );
    int32_t  left_dash_off2962 = ( (  offstuff2960 ) .f_total_dash_offset );
    struct Drop_348  temp1467 =  into_dash_iter347 ( ( (  drop367 ) ( ( (  zip489 ) ( ( ( * (  ed2953 ) ) .f_current_dash_file ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size280 ) ( (  from_dash_y2956 ) ) ) ) ) );
    while (true) {
        struct Maybe_357  __cond1468 =  next356 (&temp1467);
        if (  __cond1468 .tag == 0 ) {
            break;
        }
        struct Tuple2_358  dref2963 =  __cond1468 .stuff .Maybe_357_Just_s .field0;
        int32_t  row_dash_num2966 = (  op_dash_add87 ( ( dref2963 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_376  temp1469 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad2939 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1470 =  next377 (&temp1469);
            if (  __cond1470 .tag == 0 ) {
                break;
            }
            int32_t  xx2968 =  __cond1470 .stuff .Maybe_338_Just_s .field0;
            ( (  put_dash_char1312 ) ( (  screen2951 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2968 ) ,  (  y2959 ) ) );
        }
        ( (  draw_dash_str_dash_right1324 ) ( (  screen2951 ) ,  (  row_dash_num2966 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2951 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2961 ) ) ) , ( env.pad2939 ) ) ) ,  (  y2959 ) ) );
        struct RangeIter_376  temp1471 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad2939 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1472 =  next377 (&temp1471);
            if (  __cond1472 .tag == 0 ) {
                break;
            }
            int32_t  xx2970 =  __cond1472 .stuff .Maybe_338_Just_s .field0;
            ( (  put_dash_char1312 ) ( (  screen2951 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx2970 ) , ( env.pad2939 ) ) ) , (  max_dash_digits2961 ) ) ) ,  (  y2959 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2953 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num2966 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_376  temp1473 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits2961 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_338  __cond1474 =  next377 (&temp1473);
                if (  __cond1474 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2972 =  __cond1474 .stuff .Maybe_338_Just_s .field0;
                struct Cell_58 *  cp2973 = ( (  or_dash_fail1016 ) ( ( (  get_dash_cell_dash_ptr1306 ) ( (  screen2951 ) ,  (  op_dash_add87 ( (  xxx2972 ) , ( env.pad2939 ) ) ) ,  (  y2959 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2973 ) .f_fg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp2973 ) .f_bg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_352  temp1475 =  into_dash_iter351 ( ( (  drop369 ) ( ( (  zip490 ) ( ( dref2963 .field0 ) ,  ( (  from378 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size280 ) ( (  from_dash_x2957 ) ) ) ) ) );
        while (true) {
            struct Maybe_363  __cond1476 =  next362 (&temp1475);
            if (  __cond1476 .tag == 0 ) {
                break;
            }
            struct Tuple2_364  dref2974 =  __cond1476 .stuff .Maybe_363_Just_s .field0;
            bool  in_dash_selection2977 = ( (  is_dash_in_dash_selection1430 ) ( (  ed2953 ) ,  ( (struct Cursor_182) { .f_x = ( dref2974 .field1 ) , .f_y = ( dref2963 .field1 ) } ) ) );
            if ( (  in_dash_selection2977 ) ) {
                ( (  set_dash_screen_dash_colors1305 ) ( (  screen2951 ) ,  ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref2974 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1312 ) ( (  screen2951 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off2962 ) , (  x2958 ) ) ) ,  (  y2959 ) ) );
                x2958 = (  op_dash_add87 ( (  x2958 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1312 ) ( (  screen2951 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off2962 ) , (  x2958 ) ) ) ,  (  y2959 ) ) );
            } else {
                ( (  put_dash_char1312 ) ( (  screen2951 ) ,  ( dref2974 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off2962 ) , (  x2958 ) ) ) ,  (  y2959 ) ) );
            }
            if ( (  in_dash_selection2977 ) ) {
                ( (  set_dash_screen_dash_colors1305 ) ( (  screen2951 ) ,  ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x2958 = (  op_dash_add87 ( (  x2958 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x2958 ) , (  w2954 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x2958 ) , (  w2954 ) ) == 0 ) && ( (  is_dash_in_dash_selection1430 ) ( (  ed2953 ) ,  ( (struct Cursor_182) { .f_x = ( (  size_dash_i32282 ) ( ( ( dref2963 .field0 ) .f_count ) ) ) , .f_y = ( dref2963 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell2978 = ( (  or_dash_fail1016 ) ( ( (  get_dash_cell_dash_ptr1306 ) ( (  screen2951 ) ,  (  op_dash_add87 ( (  left_dash_off2962 ) , (  x2958 ) ) ) ,  (  y2959 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2978 ) .f_fg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell2978 ) .f_bg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y2959 = (  op_dash_add87 ( (  y2959 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2958 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y2959 ) , (  h2955 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_1019  dref2979 = ( ( * (  ed2953 ) ) .f_selected );
    if ( dref2979.tag == Maybe_1019_None_t ) {
    }
    else if ( dref2979.tag == Maybe_1019_Just_t ) {
        int32_t  vx2981 = ( (  from_dash_visual1345 ) ( ( (  x_dash_to_dash_visual_dash_x1358 ) ( (  ed2953 ) ,  ( ( dref2979 .stuff .Maybe_1019_Just_s .field0 ) .f_x ) ,  ( ( dref2979 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len2982 = ( (  maybe1082 ) ( ( (  try_dash_get1143 ) ( ( (  get_dash_row1348 ) ( (  ed2953 ) ,  ( ( dref2979 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size280 ) ( ( ( dref2979 .stuff .Maybe_1019_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1340 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_376  temp1477 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len2982 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_338  __cond1478 =  next377 (&temp1477);
            if (  __cond1478 .tag == 0 ) {
                break;
            }
            int32_t  x2984 =  __cond1478 .stuff .Maybe_338_Just_s .field0;
            struct Maybe_1017  dref2985 = ( (  get_dash_cell_dash_ptr1306 ) ( (  screen2951 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off2962 ) , ( ( * (  ed2953 ) ) .f_screen_dash_left ) ) ) , (  vx2981 ) ) ) , (  x2984 ) ) ) ,  (  op_dash_sub88 ( ( ( dref2979 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) , (  from_dash_y2956 ) ) ) ) );
            if ( dref2985.tag == Maybe_1017_None_t ) {
            }
            else if ( dref2985.tag == Maybe_1017_Just_t ) {
                (* dref2985 .stuff .Maybe_1017_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref2985 .stuff .Maybe_1017_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_182  cur2987 = ( ( * (  ed2953 ) ) .f_cursor );
    int32_t  vx2988 = ( (  from_dash_visual1345 ) ( ( (  x_dash_to_dash_visual_dash_x1358 ) ( (  ed2953 ) ,  ( (  cur2987 ) .f_x ) ,  ( (  cur2987 ) .f_y ) ) ) ) );
    int32_t  len2989 = ( (  maybe1082 ) ( ( (  try_dash_get1143 ) ( ( (  cursor_dash_row1349 ) ( (  ed2953 ) ) ) ,  ( (  i32_dash_size280 ) ( ( (  cur2987 ) .f_x ) ) ) ) ) ,  (  char_dash_len1340 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_376  temp1479 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len2989 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_338  __cond1480 =  next377 (&temp1479);
        if (  __cond1480 .tag == 0 ) {
            break;
        }
        int32_t  x2991 =  __cond1480 .stuff .Maybe_338_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell2992 = ( (  or_dash_fail1016 ) ( ( (  get_dash_cell_dash_ptr1306 ) ( (  screen2951 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off2962 ) , ( ( * (  ed2953 ) ) .f_screen_dash_left ) ) ) , (  vx2988 ) ) ) , (  x2991 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2953 ) ) .f_cursor ) .f_y ) , (  from_dash_y2956 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2992 ) .f_fg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell2992 ) .f_bg = ( ( * ( ( * (  ed2953 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1481 (    struct Maybe_1026 *  dref2994 ,    struct Screen_655 *  screen2997 ) {
    struct Maybe_1026  dref2998 = ( (* dref2994 ) );
    if ( dref2998.tag == Maybe_1026_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2998.tag == Maybe_1026_Just_t ) {
        struct Duration_1249  diff3000 = ( (  diff1250 ) ( ( (  now1246 ) ( ) ) ,  ( dref2998 .stuff .Maybe_1026_Just_s .field0 ) ) );
        struct Duration_1249  limit3001 = ( (  duration_dash_from_dash_ns1251 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1248 ( (  diff3000 ) , (  limit3001 ) ) == 2 ) ) {
            (* dref2994 ) = ( (struct Maybe_1026) { .tag = Maybe_1026_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3002 = (  op_dash_div85 ( ( (  u32_dash_i64285 ) ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3003 = (  op_dash_div85 ( ( (  u32_dash_i64285 ) ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3004 = ( (  i64_dash_i32281 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1252 ) ( (  diff3000 ) ) ) , (  x_dash_fill3002 ) ) ) , ( (  duration_dash_to_dash_ns1252 ) ( (  limit3001 ) ) ) ) ) ) );
        int32_t  y_dash_progress3005 = ( (  i64_dash_i32281 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1252 ) ( (  diff3000 ) ) ) , (  y_dash_fill3003 ) ) ) , ( (  duration_dash_to_dash_ns1252 ) ( (  limit3001 ) ) ) ) ) ) );
        uint32_t  center_dash_x3006 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3007 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1304 ) ( (  screen2997 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3008 = (  op_dash_sub88 ( ( (  i64_dash_i32281 ) ( (  x_dash_fill3002 ) ) ) , (  x_dash_progress3004 ) ) );
        int32_t  y_dash_off3009 = (  op_dash_sub88 ( ( (  i64_dash_i32281 ) ( (  y_dash_fill3003 ) ) ) , (  y_dash_progress3005 ) ) );
        int32_t  h3010 = (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3011 = (  op_dash_sub88 ( ( (  u32_dash_i32286 ) ( ( ( * ( ( * (  screen2997 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_376  temp1482 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3010 ) ) ) );
        while (true) {
            struct Maybe_338  __cond1483 =  next377 (&temp1482);
            if (  __cond1483 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3013 =  __cond1483 .stuff .Maybe_338_Just_s .field0;
            struct RangeIter_376  temp1484 =  into_dash_iter375 ( ( (  to373 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3011 ) ) ) );
            while (true) {
                struct Maybe_338  __cond1485 =  next377 (&temp1484);
                if (  __cond1485 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3015 =  __cond1485 .stuff .Maybe_338_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3015 ) , (  x_dash_off3008 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3015 ) , (  op_dash_sub88 ( (  w3011 ) , (  x_dash_off3008 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3013 ) , (  y_dash_off3009 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3013 ) , (  op_dash_sub88 ( (  h3010 ) , (  y_dash_off3009 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1312 ) ( (  screen2997 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3015 ) ,  (  screen_dash_y3013 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1454 {
    enum Unit_13  (*fun) (  struct env1454  ,    struct List_292  ,    const char*  );
    struct env1454 env;
};

struct funenv1242 {
    const char*  (*fun) (  struct env1242  ,    struct TakeWhile_517  ,    enum CAllocator_4  );
    struct env1242 env;
};

struct funenv1244 {
    const char*  (*fun) (  struct env1244  ,    struct TakeWhile_522  ,    enum CAllocator_4  );
    struct env1244 env;
};

struct funenv1449 {
    struct List_292  (*fun) (  struct env1449  ,    const char*  ,    enum CAllocator_4  );
    struct env1449 env;
};

struct env1486 {
    ;
    ;
    ;
    ;
    ;
    struct env1454 envinst1454;
    ;
    ;
    ;
    ;
    struct env1242 envinst1242;
    ;
    ;
    ;
    struct env1244 envinst1244;
    ;
    ;
    ;
    struct env1449 envinst1449;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Theme_1031 *  light_dash_theme2507;
    ;
    ;
    struct Theme_1031 *  dark_dash_theme2506;
    ;
    ;
};

static  bool   lam1487 (    char  c3029 ) {
    return ( ! ( (  is_dash_whitespace1129 ) ( (  c3029 ) ) ) );
}

static  bool   lam1491 (    char  c3037 ) {
    return ( ! ( (  is_dash_whitespace1129 ) ( (  c3037 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1486 (   struct env1486 env ,    struct Editor_1029 *  ed3018 ,    struct DynStr_134  s3020 ,    struct Dims_1367  dim3022 ,    enum CAllocator_4  al3024 ) {
    struct DropWhile_520  s3025 = ( (  drop_dash_while545 ) ( (  s3020 ) ,  (  is_dash_whitespace1129 ) ) );
    struct TakeWhile_524  cmd3026 = ( (  take_dash_while542 ) ( (  s3025 ) ,  (  is_dash_not_dash_whitespace1130 ) ) );
    struct DropWhile_518  rest3027 = ( (  drop_dash_while548 ) ( ( (  drop_dash_while547 ) ( (  s3025 ) ,  (  is_dash_not_dash_whitespace1130 ) ) ) ,  (  is_dash_whitespace1129 ) ) );
    if ( ( (  eq987 ) ( (  cmd3026 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_517  filename3030 = ( (  take_dash_while541 ) ( (  rest3027 ) ,  (  lam1487 ) ) );
        const char*  temp1488;
        const char*  alfname3031 = (  temp1488 );
        if ( ( (  null803 ) ( (  filename3030 ) ) ) ) {
            struct Maybe_277  dref3032 = ( ( * (  ed3018 ) ) .f_filename );
            if ( dref3032.tag == Maybe_277_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3032.tag == Maybe_277_Just_t ) {
                alfname3031 = ( dref3032 .stuff .Maybe_277_Just_s .field0 );
            }
        } else {
            struct Maybe_277  dref3034 = ( ( * (  ed3018 ) ) .f_filename );
            if ( dref3034.tag == Maybe_277_None_t ) {
            }
            else if ( dref3034.tag == Maybe_277_Just_t ) {
                ( (  free1121 ) ( (  al3024 ) ,  ( (struct Slice_1122) { .f_ptr = ( (  cast199 ) ( ( dref3034 .stuff .Maybe_277_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1242  temp1489 = ( (struct funenv1242){ .fun = mk_dash_const_dash_str1242, .env =  env.envinst1242  } );
            alfname3031 = ( temp1489.fun ( temp1489.env ,  (  filename3030 ) ,  (  al3024 ) ) );
        }
        struct funenv1454  temp1490 = ( (struct funenv1454){ .fun = save_dash_file1454, .env =  env.envinst1454  } );
        ( temp1490.fun ( temp1490.env ,  ( ( * (  ed3018 ) ) .f_current_dash_file ) ,  (  alfname3031 ) ) );
        (*  ed3018 ) .f_filename = ( ( Maybe_277_Just ) ( (  alfname3031 ) ) );
    } else {
        if ( ( (  eq987 ) ( (  cmd3026 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3018 ) .f_running = ( false );
        } else {
            if ( ( (  eq987 ) ( (  cmd3026 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_522  filename3038 = ( (  take_dash_while538 ) ( (  rest3027 ) ,  (  lam1491 ) ) );
                struct funenv1244  temp1492 = ( (struct funenv1244){ .fun = mk_dash_const_dash_str1244, .env =  env.envinst1244  } );
                const char*  alfname3039 = ( temp1492.fun ( temp1492.env ,  (  filename3038 ) ,  (  al3024 ) ) );
                struct List_292  og3040 = ( ( * (  ed3018 ) ) .f_current_dash_file );
                struct funenv1449  temp1493 = ( (struct funenv1449){ .fun = load_dash_file1449, .env =  env.envinst1449  } );
                (*  ed3018 ) .f_current_dash_file = ( temp1493.fun ( temp1493.env ,  (  alfname3039 ) ,  (  al3024 ) ) );
                struct Maybe_277  dref3041 = ( ( * (  ed3018 ) ) .f_filename );
                if ( dref3041.tag == Maybe_277_None_t ) {
                }
                else if ( dref3041.tag == Maybe_277_Just_t ) {
                    ( (  free1121 ) ( (  al3024 ) ,  ( (struct Slice_1122) { .f_ptr = ( (  cast199 ) ( ( dref3041 .stuff .Maybe_277_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3018 ) .f_filename = ( ( Maybe_277_Just ) ( (  alfname3039 ) ) );
                (*  ed3018 ) .f_cursor = ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3018 ) .f_goal_dash_x = ( ( Visual_1030_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3018 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1460 ) ( (  og3040 ) ) );
            } else {
                if ( ( (  eq990 ) ( (  cmd3026 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_531  theme_dash_name3043 = ( (  take_dash_while540 ) ( (  rest3027 ) ,  (  is_dash_not_dash_whitespace1130 ) ) );
                    if ( ( (  eq993 ) ( (  theme_dash_name3043 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3018 ) .f_theme = ( env.dark_dash_theme2506 );
                    } else {
                        if ( ( (  eq993 ) ( (  theme_dash_name3043 ) ,  ( "light" ) ) ) ) {
                            (*  ed3018 ) .f_theme = ( env.light_dash_theme2507 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_734  dref3044 = ( (  parse_dash_int1139 ) ( (  cmd3026 ) ) );
                    if ( dref3044.tag == Maybe_734_Just_t ) {
                        int32_t  newline3046 = ( (  clamp823 ) ( ( (  i64_dash_i32281 ) ( (  op_dash_sub84 ( ( dref3044 .stuff .Maybe_734_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32282 ) ( ( ( ( * (  ed3018 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1369 ) ( (  ed3018 ) ,  (  newline3046 ) ,  (  dim3022 ) ) );
                    }
                    else if ( dref3044.tag == Maybe_734_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1240 {
    const char*  (*fun) (  struct env1240  ,    const char*  ,    enum CAllocator_4  );
    struct env1240 env;
};

struct funenv1263 {
    struct Tui_656  (*fun) (  struct env1263  );
    struct env1263 env;
};

struct funenv1463 {
    struct Dims_1367  (*fun) (  struct env1463  ,    struct Editor_1029 *  ,    struct Tui_656 *  );
    struct env1463 env;
};

struct funenv1408 {
    enum Unit_13  (*fun) (  struct env1408  ,    struct Editor_1029 *  ,    struct Dims_1367  );
    struct env1408 env;
};

struct funenv1391 {
    enum Unit_13  (*fun) (  struct env1391  ,    struct Editor_1029 *  );
    struct env1391 env;
};

struct funenv1393 {
    enum Unit_13  (*fun) (  struct env1393  ,    struct Editor_1029 *  ,    enum PastePos_1394  ,    struct Dims_1367  );
    struct env1393 env;
};

struct funenv1441 {
    enum Unit_13  (*fun) (  struct env1441  ,    struct Editor_1029 *  );
    struct env1441 env;
};

struct funenv1445 {
    enum Unit_13  (*fun) (  struct env1445  ,    struct Editor_1029 *  );
    struct env1445 env;
};

struct funenv1426 {
    enum Unit_13  (*fun) (  struct env1426  ,    struct Editor_1029 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1426 env;
};

struct funenv1431 {
    struct Maybe_1019  (*fun) (  struct env1431  ,    struct Editor_1029 *  ,    struct Slice_5  );
    struct env1431 env;
};

struct funenv1438 {
    struct Maybe_1019  (*fun) (  struct env1438  ,    struct Editor_1029 *  ,    struct Slice_5  );
    struct env1438 env;
};

static  int32_t   lam1534 (    struct Cursor_182  s3080 ) {
    return ( (  s3080 ) .f_x );
}

static  int32_t   lam1537 (    struct Cursor_182  s3084 ) {
    return ( (  s3084 ) .f_x );
}

static  bool   lam1068 (   struct env1068 env ,    char  c3089 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1341 ) ( (  c3089 ) ) ) ) ) , ( env.cur_dash_char_dash_type3087 ) ) );
}

static  bool   lam1539 (    char  c3091 ) {
    return (  eq55 ( ( (  char_dash_type1341 ) ( (  c3091 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1541 (    char  c3095 ) {
    return (  eq55 ( ( (  char_dash_type1341 ) ( (  c3095 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1073 (   struct env1073 env ,    char  c3098 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1341 ) ( (  c3098 ) ) ) ) ) , ( env.cur_dash_char_dash_type3096 ) ) );
}

static  bool   lam1543 (    char  c3102 ) {
    return (  eq55 ( ( (  char_dash_type1341 ) ( (  c3102 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1077 (   struct env1077 env ,    char  c3105 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1341 ) ( (  c3105 ) ) ) ) ) , ( env.cur_dash_char_dash_type3103 ) ) );
}

static  bool   lam1080 (   struct env1080 env ,    char  c3107 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1341 ) ( (  c3107 ) ) ) ) ) , ( env.cur_dash_char_dash_type3103 ) ) );
}

struct funenv1222 {
    enum Unit_13  (*fun) (  struct env1222  ,    struct StrBuilder_581 *  );
    struct env1222 env;
};

struct funenv1486 {
    enum Unit_13  (*fun) (  struct env1486  ,    struct Editor_1029 *  ,    struct DynStr_134  ,    struct Dims_1367  ,    enum CAllocator_4  );
    struct env1486 env;
};

struct funenv1301 {
    bool  (*fun) (  struct env1301  ,    struct Screen_655 *  );
    struct env1301 env;
};

struct funenv1465 {
    enum Unit_13  (*fun) (  struct env1465  ,    struct Screen_655 *  ,    struct Editor_1029 *  );
    struct env1465 env;
};

static  struct Maybe_49   lam1028 (   struct env1028 env ,    struct List_3  l3137 ) {
    return ( (  try_dash_get1143 ) ( ( & (  l3137 ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * ( env.ed3052 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_364   lam1564 (    char  c3139 ) {
    return ( ( Tuple2_364_Tuple2 ) ( (  c3139 ) ,  ( (  char_dash_i32817 ) ( (  c3139 ) ) ) ) );
}

static  size_t   lam1566 (    struct DynStr_134  s3145 ) {
    return ( ( (  s3145 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1706 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1707 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1708 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env576 envinst576 = {
        .growth_dash_factor1707 =  growth_dash_factor1707 ,
        .starting_dash_size1706 =  starting_dash_size1706 ,
    };
    struct env316 envinst316 = {
        .growth_dash_factor1707 =  growth_dash_factor1707 ,
        .starting_dash_size1706 =  starting_dash_size1706 ,
    };
    struct env575 envinst575 = {
        .envinst576 = envinst576 ,
    };
    struct env315 envinst315 = {
        .envinst316 = envinst316 ,
    };
    struct env1154 envinst1154 = {
        .envinst316 = envinst316 ,
        .envinst315 = envinst315 ,
    };
    struct env1157 envinst1157 = {
        .envinst576 = envinst576 ,
        .envinst575 = envinst575 ,
    };
    struct env1160 envinst1160 = {
        .shrink_dash_factor1708 =  shrink_dash_factor1708 ,
    };
    struct env1161 envinst1161 = {
        .shrink_dash_factor1708 =  shrink_dash_factor1708 ,
    };
    struct env1162 envinst1162 = {
        .envinst1161 = envinst1161 ,
    };
    struct env314 envinst314 = {
        .envinst315 = envinst315 ,
    };
    struct env1165 envinst1165 = {
        .envinst575 = envinst575 ,
    };
    struct env1167 envinst1167 = {
        .envinst315 = envinst315 ,
    };
    struct env1169 envinst1169 = {
        .envinst315 = envinst315 ,
    };
    struct env1171 envinst1171 = {
        .envinst315 = envinst315 ,
    };
    struct env313 envinst313 = {
        .envinst314 = envinst314 ,
    };
    struct env1176 envinst1176 = {
        .envinst1165 = envinst1165 ,
    };
    struct env1211 envinst1211 = {
        .envinst315 = envinst315 ,
    };
    struct env1213 envinst1213 = {
        .envinst315 = envinst315 ,
    };
    struct env1215 envinst1215 = {
        .envinst315 = envinst315 ,
    };
    struct env1217 envinst1217 = {
        .envinst315 = envinst315 ,
    };
    struct env1219 envinst1219 = {
        .envinst1169 = envinst1169 ,
    };
    struct env646 envinst646 = {
        .envinst315 = envinst315 ,
    };
    struct env1222 envinst1222 = {
        .envinst1162 = envinst1162 ,
    };
    struct env1228 envinst1228 = {
        .envinst1211 = envinst1211 ,
        .envinst646 = envinst646 ,
    };
    struct env1232 envinst1232 = {
        .envinst1215 = envinst1215 ,
        .envinst646 = envinst646 ,
    };
    struct env1236 envinst1236 = {
        .envinst1217 = envinst1217 ,
        .envinst646 = envinst646 ,
    };
    struct env1240 envinst1240 = {
        .envinst1228 = envinst1228 ,
    };
    struct env1242 envinst1242 = {
        .envinst1232 = envinst1232 ,
    };
    struct env1244 envinst1244 = {
        .envinst1236 = envinst1236 ,
    };
    bool  temp1262 = ( false );
    bool *  should_dash_resize2277 = ( &temp1262 );
    struct env1263 envinst1263 = {
        .should_dash_resize2277 =  should_dash_resize2277 ,
    };
    struct env1286 envinst1286 = {
        .should_dash_resize2277 =  should_dash_resize2277 ,
    };
    struct env1301 envinst1301 = {
        .envinst1286 = envinst1286 ,
    };
    struct Theme_1031  temp1342 = ( (struct Theme_1031) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_1031 *  dark_dash_theme2506 = ( &temp1342 );
    struct Theme_1031  temp1343 = ( (struct Theme_1031) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_1031 *  light_dash_theme2507 = ( &temp1343 );
    struct env1352 envinst1352 = {
        .envinst1157 = envinst1157 ,
    };
    struct env1354 envinst1354 = {
        .envinst1160 = envinst1160 ,
    };
    struct env1364 envinst1364 = {
        .envinst1228 = envinst1228 ,
    };
    struct env1377 envinst1377 = {
        .envinst646 = envinst646 ,
        .envinst1213 = envinst1213 ,
        .envinst1219 = envinst1219 ,
    };
    struct env1391 envinst1391 = {
        .envinst1377 = envinst1377 ,
    };
    struct env1393 envinst1393 = {
        .envinst314 = envinst314 ,
        .envinst1352 = envinst1352 ,
        .envinst1169 = envinst1169 ,
        .envinst575 = envinst575 ,
    };
    struct env1408 envinst1408 = {
        .envinst1161 = envinst1161 ,
        .envinst1167 = envinst1167 ,
        .envinst1169 = envinst1169 ,
        .envinst1354 = envinst1354 ,
        .envinst1377 = envinst1377 ,
    };
    struct env1426 envinst1426 = {
        .envinst1171 = envinst1171 ,
        .envinst1157 = envinst1157 ,
    };
    struct env1431 envinst1431 = {
        .envinst1364 = envinst1364 ,
    };
    struct env1438 envinst1438 = {
        .envinst1364 = envinst1364 ,
    };
    struct env1441 envinst1441 = {
        .envinst1154 = envinst1154 ,
    };
    struct env1445 envinst1445 = {
        .envinst1161 = envinst1161 ,
    };
    enum CAllocator_4  al2888 = ( (  idc1115 ) ( ) );
    struct env1449 envinst1449 = {
        .envinst313 = envinst313 ,
        .envinst1176 = envinst1176 ,
        .envinst575 = envinst575 ,
    };
    struct env1454 envinst1454 = {
        .al2888 =  al2888 ,
        .envinst646 = envinst646 ,
    };
    int32_t  pad2939 = (  from_dash_integral29 ( 2 ) );
    struct env1461 envinst1461 = {
        .pad2939 =  pad2939 ,
    };
    struct env1463 envinst1463 = {
        .envinst1461 = envinst1461 ,
    };
    struct env1465 envinst1465 = {
        .pad2939 =  pad2939 ,
        .envinst1461 = envinst1461 ,
    };
    struct env1486 envinst1486 = {
        .envinst1454 = envinst1454 ,
        .envinst1242 = envinst1242 ,
        .envinst1244 = envinst1244 ,
        .envinst1449 = envinst1449 ,
        .light_dash_theme2507 =  light_dash_theme2507 ,
        .dark_dash_theme2506 =  dark_dash_theme2506 ,
    };
    struct Slice_1089  args3049 = ( (  get1339 ) ( ) );
    struct List_292  temp1494;
    struct List_292  file3050 = (  temp1494 );
    struct Maybe_277  mfilename3051 = ( (struct Maybe_277) { .tag = Maybe_277_None_t } );
    if ( (  eq45 ( ( (  args3049 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3050 = ( (  mk1147 ) ( (  al2888 ) ) );
        struct funenv575  temp1495 = ( (struct funenv575){ .fun = add575, .env =  envinst575  } );
        ( temp1495.fun ( temp1495.env ,  ( & (  file3050 ) ) ,  ( (  mk1148 ) ( (  al2888 ) ) ) ) );
    } else {
        struct funenv1449  temp1496 = ( (struct funenv1449){ .fun = load_dash_file1449, .env =  envinst1449  } );
        file3050 = ( temp1496.fun ( temp1496.env ,  (  elem_dash_get1103 ( (  args3049 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2888 ) ) );
        struct funenv1240  temp1497 = ( (struct funenv1240){ .fun = mk_dash_const_dash_str1240, .env =  envinst1240  } );
        mfilename3051 = ( ( Maybe_277_Just ) ( ( temp1497.fun ( temp1497.env ,  (  elem_dash_get1103 ( (  args3049 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2888 ) ) ) ) );
    }
    struct Editor_1029  temp1498 = ( (struct Editor_1029) { .f_cursor = ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1030_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3050 ) , .f_filename = (  mfilename3051 ) , .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } ) , .f_anim = ( ( Maybe_1026_Just ) ( ( (  now1246 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_1019) { .tag = Maybe_1019_None_t } ) , .f_theme = (  dark_dash_theme2506 ) , .f_search_dash_term = ( (struct Maybe_894) { .tag = Maybe_894_None_t } ) , .f_al = (  al2888 ) , .f_msg = ( (struct Maybe_325) { .tag = Maybe_325_None_t } ) , .f_clipboard = ( (struct Maybe_325) { .tag = Maybe_325_None_t } ) , .f_actions = ( (  mk1149 ) ( (  al2888 ) ) ) } );
    struct Editor_1029 *  ed3052 = ( &temp1498 );
    struct funenv1263  temp1500 = ( (struct funenv1263){ .fun = mk1263, .env =  envinst1263  } );
    struct Tui_656  temp1499 = ( temp1500.fun ( temp1500.env ) );
    struct Tui_656 *  tui3053 = ( &temp1499 );
    enum CAllocator_4  al3054 = ( (  idc1115 ) ( ) );
    struct Screen_655  temp1501 = ( (  mk_dash_screen1287 ) ( (  tui3053 ) ,  (  al3054 ) ) );
    struct Screen_655 *  screen3055 = ( &temp1501 );
    uint32_t  counter3056 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3057 = ( true );
    while ( ( ( * (  ed3052 ) ) .f_running ) ) {
        int32_t  events3058 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_554  temp1502 =  into_dash_iter553 ( ( (  from_dash_function560 ) ( (  read_dash_key1280 ) ) ) );
        while (true) {
            struct Maybe_555  __cond1503 =  next559 (&temp1502);
            if (  __cond1503 .tag == 0 ) {
                break;
            }
            struct InputEvent_556  ev3060 =  __cond1503 .stuff .Maybe_555_Just_s .field0;
            if ( (  eq41 ( (  events3058 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1363 ) ( (  ed3052 ) ) );
            }
            events3058 = (  op_dash_add87 ( (  events3058 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1286  temp1504 = ( (struct funenv1286){ .fun = update_dash_dimensions1286, .env =  envinst1286  } );
            ( temp1504.fun ( temp1504.env ,  (  tui3053 ) ) );
            struct InputEvent_556  dref3061 = (  ev3060 );
            if ( dref3061.tag == InputEvent_556_Key_t ) {
                struct Key_557  dref3063 = ( dref3061 .stuff .InputEvent_556_Key_s .field0 );
                if ( dref3063.tag == Key_557_Char_t ) {
                    struct Mode_836 *  dref3065 = ( & ( ( * (  ed3052 ) ) .f_mode ) );
                    if ( (* dref3065 ).tag == Mode_836_Insert_t ) {
                        struct funenv1154  temp1505 = ( (struct funenv1154){ .fun = insert1154, .env =  envinst1154  } );
                        ( temp1505.fun ( temp1505.env ,  ( (  cursor_dash_row1349 ) ( (  ed3052 ) ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3063 .stuff .Key_557_Char_s .field0 ) ) );
                        struct funenv1463  temp1506 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                        ( (  move_dash_to_dash_col1368 ) ( (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1506.fun ( temp1506.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                    }
                    else if ( (* dref3065 ).tag == Mode_836_Cmd_t ) {
                        struct funenv646  temp1507 = ( (struct funenv646){ .fun = write_dash_char646, .env =  envinst646  } );
                        ( temp1507.fun ( temp1507.env ,  ( & ( (* dref3065 ) .stuff .Mode_836_Cmd_s .field0 ) ) ,  ( dref3063 .stuff .Key_557_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3065 ).tag == Mode_836_SearchBox_t ) {
                        struct funenv646  temp1508 = ( (struct funenv646){ .fun = write_dash_char646, .env =  envinst646  } );
                        ( temp1508.fun ( temp1508.env ,  ( & ( (* dref3065 ) .stuff .Mode_836_SearchBox_s .field0 ) ) ,  ( dref3063 .stuff .Key_557_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1346 ( ( (* dref3065 ) ) , ( (struct Mode_836) { .tag = Mode_836_Normal_t } ) ) ) || (  eq1346 ( ( (* dref3065 ) ) , ( (struct Mode_836) { .tag = Mode_836_Select_t } ) ) ) ) ) {
                            int32_t  code3069 = ( (  u8_dash_i32288 ) ( ( (  cast203 ) ( ( dref3063 .stuff .Key_557_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1463  temp1509 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1509.fun ( temp1509.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1463  temp1510 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1510.fun ( temp1510.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1463  temp1511 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_left1370 ) ( (  ed3052 ) ,  ( temp1511.fun ( temp1511.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1463  temp1512 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_right1371 ) ( (  ed3052 ) ,  ( temp1512.fun ( temp1512.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1346 ( ( (* dref3065 ) ) , ( (struct Mode_836) { .tag = Mode_836_Select_t } ) ) ) ) {
                                    (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                                } else {
                                    (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Select_t } );
                                    ( (  set_dash_selection1362 ) ( (  ed3052 ) ,  ( ( Maybe_1019_Just ) ( ( ( * (  ed3052 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1408  temp1513 = ( (struct funenv1408){ .fun = delete_dash_selected1408, .env =  envinst1408  } );
                                struct funenv1463  temp1514 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( temp1513.fun ( temp1513.env ,  (  ed3052 ) ,  ( temp1514.fun ( temp1514.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1408  temp1515 = ( (struct funenv1408){ .fun = delete_dash_selected1408, .env =  envinst1408  } );
                                struct funenv1463  temp1516 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( temp1515.fun ( temp1515.env ,  (  ed3052 ) ,  ( temp1516.fun ( temp1516.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1391  temp1517 = ( (struct funenv1391){ .fun = copy_dash_selection_dash_to_dash_clipboard1391, .env =  envinst1391  } );
                                ( temp1517.fun ( temp1517.env ,  (  ed3052 ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1393  temp1518 = ( (struct funenv1393){ .fun = paste_dash_clipboard_dash_at_dash_cursor1393, .env =  envinst1393  } );
                                struct funenv1463  temp1519 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( temp1518.fun ( temp1518.env ,  (  ed3052 ) ,  ( PastePos_1394_PasteAfter ) ,  ( temp1519.fun ( temp1519.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1393  temp1520 = ( (struct funenv1393){ .fun = paste_dash_clipboard_dash_at_dash_cursor1393, .env =  envinst1393  } );
                                struct funenv1463  temp1521 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( temp1520.fun ( temp1520.env ,  (  ed3052 ) ,  ( PastePos_1394_PasteBefore ) ,  ( temp1521.fun ( temp1521.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1441  temp1522 = ( (struct funenv1441){ .fun = indent_dash_selection1441, .env =  envinst1441  } );
                                ( temp1522.fun ( temp1522.env ,  (  ed3052 ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1445  temp1523 = ( (struct funenv1445){ .fun = dedent_dash_selection1445, .env =  envinst1445  } );
                                ( temp1523.fun ( temp1523.env ,  (  ed3052 ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                                struct funenv1463  temp1524 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1372 ) ( (  ed3052 ) ,  ( temp1524.fun ( temp1524.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                                struct funenv1463  temp1525 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1373 ) ( (  ed3052 ) ,  ( temp1525.fun ( temp1525.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1426  temp1526 = ( (struct funenv1426){ .fun = insert_dash_empty_dash_row_dash_at1426, .env =  envinst1426  } );
                                ( temp1526.fun ( temp1526.env ,  (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3054 ) ) );
                                struct List_3 *  currow3070 = ( (  get_dash_row1348 ) ( (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1463  temp1527 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to1366 ) ( (  ed3052 ) ,  ( (  size_dash_i32282 ) ( ( (  size1182 ) ( (  currow3070 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1527.fun ( temp1527.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1426  temp1528 = ( (struct funenv1426){ .fun = insert_dash_empty_dash_row_dash_at1426, .env =  envinst1426  } );
                                ( temp1528.fun ( temp1528.env ,  (  ed3052 ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ,  (  al3054 ) ) );
                                struct funenv1463  temp1529 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1373 ) ( (  ed3052 ) ,  ( temp1529.fun ( temp1529.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Insert_t } );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_mode = ( ( Mode_836_Cmd ) ( ( (  mk1225 ) ( (  al3054 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3052 ) .f_mode = ( ( Mode_836_SearchBox ) ( ( (  mk1225 ) ( (  al3054 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_894  dref3071 = ( ( * (  ed3052 ) ) .f_search_dash_term );
                                if ( dref3071.tag == Maybe_894_None_t ) {
                                }
                                else if ( dref3071.tag == Maybe_894_Just_t ) {
                                    struct funenv1431  temp1530 = ( (struct funenv1431){ .fun = find_dash_next_dash_occurence1431, .env =  envinst1431  } );
                                    struct Maybe_1019  dref3073 = ( temp1530.fun ( temp1530.env ,  (  ed3052 ) ,  ( (  as_dash_char_dash_slice1226 ) ( ( & ( dref3071 .stuff .Maybe_894_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3073.tag == Maybe_1019_None_t ) {
                                    }
                                    else if ( dref3073.tag == Maybe_1019_Just_t ) {
                                        struct funenv1463  temp1531 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                        ( (  move_dash_to1366 ) ( (  ed3052 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3073 .stuff .Maybe_1019_Just_s .field0 ) .f_x ) , ( (  size_dash_i32282 ) ( ( (  count1224 ) ( ( & ( dref3071 .stuff .Maybe_894_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3073 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) ,  ( temp1531.fun ( temp1531.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                        (*  ed3052 ) .f_selected = ( ( Maybe_1019_Just ) ( ( dref3073 .stuff .Maybe_1019_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_894  dref3075 = ( ( * (  ed3052 ) ) .f_search_dash_term );
                                if ( dref3075.tag == Maybe_894_None_t ) {
                                }
                                else if ( dref3075.tag == Maybe_894_Just_t ) {
                                    struct funenv1438  temp1532 = ( (struct funenv1438){ .fun = find_dash_prev_dash_occurence1438, .env =  envinst1438  } );
                                    struct Maybe_1019  dref3077 = ( temp1532.fun ( temp1532.env ,  (  ed3052 ) ,  ( (  as_dash_char_dash_slice1226 ) ( ( & ( dref3075 .stuff .Maybe_894_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3077.tag == Maybe_1019_None_t ) {
                                    }
                                    else if ( dref3077.tag == Maybe_1019_Just_t ) {
                                        struct funenv1463  temp1533 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                        ( (  move_dash_to1366 ) ( (  ed3052 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3077 .stuff .Maybe_1019_Just_s .field0 ) .f_x ) , ( (  size_dash_i32282 ) ( ( (  count1224 ) ( ( & ( dref3075 .stuff .Maybe_894_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3077 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) ,  ( temp1533.fun ( temp1533.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                        (*  ed3052 ) .f_selected = ( ( Maybe_1019_Just ) ( ( dref3077 .stuff .Maybe_1019_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe1065 ) ( ( ( * (  ed3052 ) ) .f_selected ) ,  (  lam1534 ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1375 ) ( (  ed3052 ) ) ) ) ) {
                                    struct funenv1463  temp1535 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                    struct Dims_1367  dims3081 = ( temp1535.fun ( temp1535.env ,  (  ed3052 ) ,  (  tui3053 ) ) );
                                    struct Cursor_182  sel3082 = ( (  or_dash_else1018 ) ( ( ( * (  ed3052 ) ) .f_selected ) ,  ( ( * (  ed3052 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3081 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1373 ) ( (  ed3052 ) ,  (  dims3081 ) ) );
                                    (*  ed3052 ) .f_selected = ( ( Maybe_1019_Just ) ( (  sel3082 ) ) );
                                } else {
                                    struct funenv1463  temp1536 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1373 ) ( (  ed3052 ) ,  ( temp1536.fun ( temp1536.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                    (*  ed3052 ) .f_selected = ( ( Maybe_1019_Just ) ( ( (struct Cursor_182) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1066 ) ( ( ( * (  ed3052 ) ) .f_selected ) ,  (  lam1537 ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1463  temp1538 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                struct Dims_1367  dims3085 = ( temp1538.fun ( temp1538.env ,  (  ed3052 ) ,  (  tui3053 ) ) );
                                struct Cursor_182  first_dash_pos3086 = ( ( * (  ed3052 ) ) .f_cursor );
                                ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3085 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) ) , ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at1356 ) ( (  ed3052 ) ,  (  first_dash_pos3086 ) ) ) ,  (  char_dash_type1341 ) ) ) ) ) ) {
                                    first_dash_pos3086 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1375 ) ( (  ed3052 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3085 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3086 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3087 = ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) );
                                struct env1068 envinst1068 = {
                                    .cur_dash_char_dash_type3087 =  cur_dash_char_dash_type3087 ,
                                };
                                while ( ( (  maybe1067 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  ( (struct funenv1068){ .fun = lam1068, .env = envinst1068 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3085 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1070 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  lam1539 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3085 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1344 ( (  first_dash_pos3086 ) , ( ( * (  ed3052 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3085 ) ) );
                                    ( (  set_dash_selection1362 ) ( (  ed3052 ) ,  ( ( Maybe_1019_Just ) ( (  first_dash_pos3086 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1463  temp1540 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                struct Dims_1367  dims3092 = ( temp1540.fun ( temp1540.env ,  (  ed3052 ) ,  (  tui3053 ) ) );
                                struct Cursor_182  first_dash_pos3093 = ( ( * (  ed3052 ) ) .f_cursor );
                                ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3092 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) ) , ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at1356 ) ( (  ed3052 ) ,  (  first_dash_pos3093 ) ) ) ,  (  char_dash_type1341 ) ) ) ) ) ) {
                                    first_dash_pos3093 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1375 ) ( (  ed3052 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3092 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3093 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1071 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  lam1541 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3092 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3096 = ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) );
                                struct env1073 envinst1073 = {
                                    .cur_dash_char_dash_type3096 =  cur_dash_char_dash_type3096 ,
                                };
                                while ( ( (  maybe1072 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  ( (struct funenv1073){ .fun = lam1073, .env = envinst1073 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3092 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1344 ( (  first_dash_pos3093 ) , ( ( * (  ed3052 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3092 ) ) );
                                    ( (  set_dash_selection1362 ) ( (  ed3052 ) ,  ( ( Maybe_1019_Just ) ( (  first_dash_pos3093 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3063 .stuff .Key_557_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1463  temp1542 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                struct Dims_1367  dims3099 = ( temp1542.fun ( temp1542.env ,  (  ed3052 ) ,  (  tui3053 ) ) );
                                struct Cursor_182  first_dash_pos3100 = ( ( * (  ed3052 ) ) .f_cursor );
                                ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3099 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) ) , ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at1356 ) ( (  ed3052 ) ,  (  first_dash_pos3100 ) ) ) ,  (  char_dash_type1341 ) ) ) ) ) ) {
                                    first_dash_pos3100 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1375 ) ( (  ed3052 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3099 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3100 = ( ( * (  ed3052 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1075 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  lam1543 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3099 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3103 = ( (  fmap_dash_maybe1035 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  (  char_dash_type1341 ) ) );
                                struct env1077 envinst1077 = {
                                    .cur_dash_char_dash_type3103 =  cur_dash_char_dash_type3103 ,
                                };
                                while ( ( (  maybe1076 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  ( (struct funenv1077){ .fun = lam1077, .env = envinst1077 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1370 ) ( (  ed3052 ) ,  (  dims3099 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1344 ( (  first_dash_pos3100 ) , ( ( * (  ed3052 ) ) .f_cursor ) ) ) ) {
                                    struct env1080 envinst1080 = {
                                        .cur_dash_char_dash_type3103 =  cur_dash_char_dash_type3103 ,
                                    };
                                    if ( ( (  maybe1079 ) ( ( (  char_dash_at_dash_cursor1357 ) ( (  ed3052 ) ) ) ,  ( (struct funenv1080){ .fun = lam1080, .env = envinst1080 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1371 ) ( (  ed3052 ) ,  (  dims3099 ) ) );
                                    }
                                    ( (  set_dash_selection1362 ) ( (  ed3052 ) ,  ( ( Maybe_1019_Just ) ( (  first_dash_pos3100 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1005 ) ( ( ( StrConcat_835_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3065 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3063.tag == Key_557_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3063 .stuff .Key_557_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3052 ) .f_screen_dash_top = ( (  max818 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3052 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1463  temp1544 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                        ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1544.fun ( temp1544.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3063 .stuff .Key_557_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3052 ) .f_screen_dash_top = ( (  max818 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3052 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1463  temp1545 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                        ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1545.fun ( temp1545.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                    }
                }
                else if ( dref3063.tag == Key_557_Escape_t ) {
                    struct Mode_836  dref3109 = ( ( * (  ed3052 ) ) .f_mode );
                    if ( dref3109.tag == Mode_836_Normal_t ) {
                    }
                    else if ( dref3109.tag == Mode_836_Insert_t ) {
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                    else if ( dref3109.tag == Mode_836_Cmd_t ) {
                        ( (  free1227 ) ( ( & ( dref3109 .stuff .Mode_836_Cmd_s .field0 ) ) ) );
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                    else if ( dref3109.tag == Mode_836_SearchBox_t ) {
                        ( (  free1227 ) ( ( & ( dref3109 .stuff .Mode_836_SearchBox_s .field0 ) ) ) );
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                    else if ( dref3109.tag == Mode_836_Select_t ) {
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                }
                else if ( dref3063.tag == Key_557_Backspace_t ) {
                    struct Mode_836 *  dref3112 = ( & ( ( * (  ed3052 ) ) .f_mode ) );
                    if ( (* dref3112 ).tag == Mode_836_Normal_t ) {
                    }
                    else if ( (* dref3112 ).tag == Mode_836_Select_t ) {
                    }
                    else if ( (* dref3112 ).tag == Mode_836_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1463  temp1546 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                            ( (  move_dash_left1370 ) ( (  ed3052 ) ,  ( temp1546.fun ( temp1546.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                            struct funenv1408  temp1547 = ( (struct funenv1408){ .fun = delete_dash_selected1408, .env =  envinst1408  } );
                            struct funenv1463  temp1548 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                            ( temp1547.fun ( temp1547.env ,  (  ed3052 ) ,  ( temp1548.fun ( temp1548.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                        }
                    }
                    else if ( (* dref3112 ).tag == Mode_836_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1224 ) ( ( & ( (* dref3112 ) .stuff .Mode_836_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1222  temp1549 = ( (struct funenv1222){ .fun = pop1222, .env =  envinst1222  } );
                            ( temp1549.fun ( temp1549.env ,  ( & ( (* dref3112 ) .stuff .Mode_836_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3112 ).tag == Mode_836_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1224 ) ( ( & ( (* dref3112 ) .stuff .Mode_836_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1222  temp1550 = ( (struct funenv1222){ .fun = pop1222, .env =  envinst1222  } );
                            ( temp1550.fun ( temp1550.env ,  ( & ( (* dref3112 ) .stuff .Mode_836_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3063.tag == Key_557_Enter_t ) {
                    struct Mode_836  dref3115 = ( ( * (  ed3052 ) ) .f_mode );
                    if ( dref3115.tag == Mode_836_Normal_t ) {
                    }
                    else if ( dref3115.tag == Mode_836_Select_t ) {
                    }
                    else if ( dref3115.tag == Mode_836_Insert_t ) {
                        int32_t  cx3116 = ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1551 = ( (  mk1148 ) ( (  al3054 ) ) );
                        struct List_3 *  nurow3117 = ( &temp1551 );
                        struct TakeWhile_515  rowws3118 = ( (  indent_dash_on_dash_row1350 ) ( (  ed3052 ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3119 = ( (  size_dash_i32282 ) ( ( (  count768 ) ( (  rowws3118 ) ) ) ) );
                        struct funenv1171  temp1552 = ( (struct funenv1171){ .fun = add_dash_all1171, .env =  envinst1171  } );
                        ( temp1552.fun ( temp1552.env ,  (  nurow3117 ) ,  (  rowws3118 ) ) );
                        struct List_3 *  cur_dash_row3120 = ( (  cursor_dash_row1349 ) ( (  ed3052 ) ) );
                        struct funenv1169  temp1553 = ( (struct funenv1169){ .fun = add_dash_all1169, .env =  envinst1169  } );
                        ( temp1553.fun ( temp1553.env ,  (  nurow3117 ) ,  ( (  subslice304 ) ( ( (  to_dash_slice1179 ) ( ( * (  cur_dash_row3120 ) ) ) ) ,  ( (  i32_dash_size280 ) ( (  cx3116 ) ) ) ,  ( ( * (  cur_dash_row3120 ) ) .f_count ) ) ) ) );
                        ( (  trim1173 ) ( (  cur_dash_row3120 ) ,  ( (  i32_dash_size280 ) ( (  cx3116 ) ) ) ) );
                        struct funenv1157  temp1554 = ( (struct funenv1157){ .fun = insert1157, .env =  envinst1157  } );
                        ( temp1554.fun ( temp1554.env ,  ( & ( ( * (  ed3052 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size280 ) ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3117 ) ) ) );
                        struct funenv1463  temp1555 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                        ( (  move_dash_to1366 ) ( (  ed3052 ) ,  (  offchars3119 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1555.fun ( temp1555.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                    }
                    else if ( dref3115.tag == Mode_836_Cmd_t ) {
                        struct DynStr_134  s3122 = ( (  as_dash_str842 ) ( ( & ( dref3115 .stuff .Mode_836_Cmd_s .field0 ) ) ) );
                        struct funenv1486  temp1556 = ( (struct funenv1486){ .fun = run_dash_cmd1486, .env =  envinst1486  } );
                        struct funenv1463  temp1557 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                        ( temp1556.fun ( temp1556.env ,  (  ed3052 ) ,  (  s3122 ) ,  ( temp1557.fun ( temp1557.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ,  (  al3054 ) ) );
                        ( (  free1227 ) ( ( & ( dref3115 .stuff .Mode_836_Cmd_s .field0 ) ) ) );
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                    else if ( dref3115.tag == Mode_836_SearchBox_t ) {
                        struct Maybe_894  dref3124 = ( ( * (  ed3052 ) ) .f_search_dash_term );
                        if ( dref3124.tag == Maybe_894_Just_t ) {
                            ( (  free1227 ) ( ( & ( dref3124 .stuff .Maybe_894_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3124.tag == Maybe_894_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1224 ) ( ( & ( dref3115 .stuff .Mode_836_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3052 ) .f_search_dash_term = ( ( Maybe_894_Just ) ( ( dref3115 .stuff .Mode_836_SearchBox_s .field0 ) ) );
                            struct funenv1431  temp1558 = ( (struct funenv1431){ .fun = find_dash_next_dash_occurence1431, .env =  envinst1431  } );
                            struct Maybe_1019  dref3126 = ( temp1558.fun ( temp1558.env ,  (  ed3052 ) ,  ( (  as_dash_char_dash_slice1226 ) ( ( & ( dref3115 .stuff .Mode_836_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3126.tag == Maybe_1019_None_t ) {
                            }
                            else if ( dref3126.tag == Maybe_1019_Just_t ) {
                                struct funenv1463  temp1559 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                                ( (  move_dash_to1366 ) ( (  ed3052 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3126 .stuff .Maybe_1019_Just_s .field0 ) .f_x ) , ( (  size_dash_i32282 ) ( ( (  count1224 ) ( ( & ( dref3115 .stuff .Mode_836_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3126 .stuff .Maybe_1019_Just_s .field0 ) .f_y ) ,  ( temp1559.fun ( temp1559.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                                (*  ed3052 ) .f_selected = ( ( Maybe_1019_Just ) ( ( dref3126 .stuff .Maybe_1019_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3052 ) .f_search_dash_term = ( (struct Maybe_894) { .tag = Maybe_894_None_t } );
                        }
                        (*  ed3052 ) .f_mode = ( (struct Mode_836) { .tag = Mode_836_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3061.tag == InputEvent_556_Mouse_t ) {
                enum MouseButton_149  dref3129 = ( ( dref3061 .stuff .InputEvent_556_Mouse_s .field0 ) .f_button );
                switch (  dref3129 ) {
                    case MouseButton_149_MouseLeft : {
                        if ( ( ( dref3061 .stuff .InputEvent_556_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3130 = ( (  size_dash_i32282 ) ( ( ( ( * (  ed3052 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3131 = ( (  clamp823 ) ( (  op_dash_add87 ( ( ( * (  ed3052 ) ) .f_screen_dash_top ) , ( ( dref3061 .stuff .InputEvent_556_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3130 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1461  temp1560 = ( (struct funenv1461){ .fun = left_dash_offset1461, .env =  envinst1461  } );
                            struct Visual_1030  vx3132 = ( ( Visual_1030_Visual ) ( (  op_dash_sub88 ( ( ( dref3061 .stuff .InputEvent_556_Mouse_s .field0 ) .f_x ) , ( ( temp1560.fun ( temp1560.env ,  (  ed3052 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3133 = ( (  visual_dash_x_dash_to_dash_x1359 ) ( (  ed3052 ) ,  (  vx3132 ) ,  (  cy3131 ) ) );
                            (*  ed3052 ) .f_cursor .f_x = (  cx3133 );
                            (*  ed3052 ) .f_goal_dash_x = (  vx3132 );
                            struct funenv1463  temp1561 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                            ( (  move_dash_to_dash_row1369 ) ( (  ed3052 ) ,  (  cy3131 ) ,  ( temp1561.fun ( temp1561.env ,  (  ed3052 ) ,  (  tui3053 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable1000 ) ( ) );
            }
        }
        struct funenv1301  temp1562 = ( (struct funenv1301){ .fun = resize_dash_screen_dash_if_dash_needed1301, .env =  envinst1301  } );
        bool  resized3134 = ( temp1562.fun ( temp1562.env ,  (  screen3055 ) ) );
        if ( ( ( ( (  resized3134 ) || (  cmp80 ( (  events3058 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3057 ) ) || ( (  is_dash_just1025 ) ( ( ( * (  ed3052 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3057 = ( false );
            ( (  clear_dash_screen1291 ) ( (  screen3055 ) ) );
            ( (  set_dash_screen_dash_fg1303 ) ( (  screen3055 ) ,  ( ( * ( ( * (  ed3052 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1304 ) ( (  screen3055 ) ,  ( ( * ( ( * (  ed3052 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1307 ) ( (  screen3055 ) ) );
            struct funenv1465  temp1563 = ( (struct funenv1465){ .fun = render_dash_editor1465, .env =  envinst1465  } );
            ( temp1563.fun ( temp1563.env ,  (  screen3055 ) ,  (  ed3052 ) ) );
            bool  debug3135 = ( true );
            if ( (  debug3135 ) ) {
                ( (  draw_dash_str_dash_right1325 ) ( (  screen3055 ) ,  ( ( StrConcat_835_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3052 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1326 ) ( (  screen3055 ) ,  ( ( StrConcat_851_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3053 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1028 envinst1028 = {
                    .ed3052 =  ed3052 ,
                };
                struct Maybe_363  charcode3140 = ( (  fmap_dash_maybe1036 ) ( ( (  and_dash_maybe1027 ) ( ( (  try_dash_get1144 ) ( ( & ( ( * (  ed3052 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size280 ) ( ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1028){ .fun = lam1028, .env = envinst1028 } ) ) ) ,  (  lam1564 ) ) );
                ( (  draw_dash_str_dash_right1327 ) ( (  screen3055 ) ,  ( ( StrConcat_853_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3140 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1328 ) ( (  screen3055 ) ,  ( ( StrConcat_879_StrConcat ) ( ( ( StrConcat_880_StrConcat ) ( ( ( StrConcat_881_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3141 = ( ( * ( (  get_dash_row1348 ) ( (  ed3052 ) ,  ( ( ( * (  ed3052 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1329 ) ( (  screen3055 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3141 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3142 = ( (  from_dash_visual1345 ) ( ( ( * (  ed3052 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1330 ) ( (  screen3055 ) ,  ( ( StrConcat_881_StrConcat ) ( ( "goal x: " ) ,  (  gx3142 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1463  temp1565 = ( (struct funenv1463){ .fun = screen_dash_dims1463, .env =  envinst1463  } );
                struct Dims_1367  dim3143 = ( temp1565.fun ( temp1565.env ,  (  ed3052 ) ,  (  tui3053 ) ) );
                ( (  draw_dash_str_dash_right1331 ) ( (  screen3055 ) ,  ( ( StrConcat_888_StrConcat ) ( ( ( StrConcat_889_StrConcat ) ( ( ( StrConcat_881_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3052 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3143 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1332 ) ( (  screen3055 ) ,  ( ( StrConcat_893_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3052 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1333 ) ( (  screen3055 ) ,  ( ( StrConcat_908_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3052 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_913  cpsize3146 = ( (  fmap_dash_maybe1037 ) ( ( ( * (  ed3052 ) ) .f_clipboard ) ,  (  lam1566 ) ) );
                ( (  draw_dash_str_dash_right1334 ) ( (  screen3055 ) ,  ( ( StrConcat_912_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3146 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
            }
            ( (  update_dash_animation1481 ) ( ( & ( ( * (  ed3052 ) ) .f_anim ) ) ,  (  screen3055 ) ) );
            ( (  render_dash_screen1295 ) ( (  screen3055 ) ) );
        }
        ( (  sync1269 ) ( (  tui3053 ) ) );
    }
    ( (  free_dash_screen1290 ) ( (  screen3055 ) ) );
    ( (  deinit1273 ) ( (  tui3053 ) ) );
}
