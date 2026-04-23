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

static  enum Unit_13   print_dash_str22 (    const char*  self1078 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1078 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str27 (    size_t  self1130 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1130 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str26 (    struct StrConcat_17  self1169 ) {
    struct StrConcat_17  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str25 (    struct StrConcat_16  self1169 ) {
    struct StrConcat_16  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str24 (    struct StrConcat_15  self1169 ) {
    struct StrConcat_15  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str28 (    char  self1084 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1084 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str23 (    struct StrConcat_14  self1169 ) {
    struct StrConcat_14  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str21 (    struct StrConcat_20  self1169 ) {
    struct StrConcat_20  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str23 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str18 (    struct StrConcat_19  self1169 ) {
    struct StrConcat_19  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str21 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  int32_t   from_dash_integral29 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  enum Unit_13   panic12 (    struct StrConcat_14  errmsg1346 ) {
    ( (  print_dash_str18 ) ( ( ( StrConcat_19_StrConcat ) ( ( ( StrConcat_20_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  int64_t   op_dash_mul32 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  char *   offset_dash_ptr31 (    char *  x456 ,    int64_t  count458 ) {
    char  temp33;
    return ( (char * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp33 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i6434 (    size_t  x502 ) {
    return ( (int64_t ) (  x502 ) );
}

static  char *   get_dash_ptr30 (    struct Slice_5  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1395 = ( (  offset_dash_ptr31 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1781 ,    size_t  i1783 ) {
    if ( ( (  cmp9 ( (  i1783 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1783 ) , ( ( * (  list1781 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1783 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1781 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1781 ) ) .f_elements ) ,  (  i1783 ) ) );
}

static  char   get7 (    struct List_3 *  list1791 ,    size_t  i1793 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1791 ) ,  (  i1793 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1852 ,    size_t  k1854 ) {
    return ( (  get7 ) ( ( & (  self1852 ) ) ,  (  k1854 ) ) );
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

static  bool   eq55 (    enum CharType_53  l2661 ,    enum CharType_53  r2663 ) {
    struct Tuple2_56  dref2664 = ( ( Tuple2_56_Tuple2 ) ( (  l2661 ) ,  (  r2663 ) ) );
    if (  dref2664 .field0 == CharType_53_CharSpace &&  dref2664 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2664 .field0 == CharType_53_CharWord &&  dref2664 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2664 .field0 == CharType_53_CharPunctuation &&  dref2664 .field1 == CharType_53_CharPunctuation ) {
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

static  void *   cast_dash_ptr71 (    int32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  size_t   size_dash_of72 (    int32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  int32_t   zeroed69 (  ) {
    int32_t  temp70;
    int32_t  x479 = (  temp70 );
    ( ( memset ) ( ( (  cast_dash_ptr71 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of72 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  enum Color8_60 *   cast73 (    int32_t *  x469 ) {
    return ( (enum Color8_60 * ) (  x469 ) );
}

static  int32_t   cast_dash_on_dash_zeroed67 (    enum Color8_60  x482 ) {
    int32_t  temp68 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp68 );
    enum Color8_60 *  yp484 = ( (  cast73 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  bool   eq66 (    enum Color8_60  l1974 ,    enum Color8_60  r1976 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l1974 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r1976 ) ) ) ) );
}

static  enum Color16_61 *   cast77 (    int32_t *  x469 ) {
    return ( (enum Color16_61 * ) (  x469 ) );
}

static  int32_t   cast_dash_on_dash_zeroed75 (    enum Color16_61  x482 ) {
    int32_t  temp76 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp76 );
    enum Color16_61 *  yp484 = ( (  cast77 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  bool   eq74 (    enum Color16_61  l1980 ,    enum Color16_61  r1982 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l1980 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r1982 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l2010 ,    struct RGB_62  r2012 ) {
    return ( ( (  eq43 ( ( (  l2010 ) .f_r ) , ( (  r2012 ) .f_r ) ) ) && (  eq43 ( ( (  l2010 ) .f_g ) , ( (  r2012 ) .f_g ) ) ) ) && (  eq43 ( ( (  l2010 ) .f_b ) , ( (  r2012 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l2033 ,    struct Color_59  r2035 ) {
    return ( {  struct Tuple2_65  dref2036 = ( ( Tuple2_65_Tuple2 ) ( (  l2033 ) ,  (  r2035 ) ) ) ; dref2036 .field0.tag == Color_59_ColorDefault_t && dref2036 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref2036 .field0.tag == Color_59_Color8_t && dref2036 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref2036 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref2036 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref2036 .field0.tag == Color_59_Color16_t && dref2036 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref2036 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref2036 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref2036 .field0.tag == Color_59_Color256_t && dref2036 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref2036 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref2036 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref2036 .field0.tag == Color_59_ColorRGB_t && dref2036 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref2036 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref2036 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2517 ,    struct Cell_58  r2519 ) {
    if ( ( !  eq47 ( ( (  l2517 ) .f_c ) , ( (  r2519 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2517 ) .f_fg ) , ( (  r2519 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2517 ) .f_bg ) , ( (  r2519 ) .f_bg ) ) ) ) {
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

static  int64_t   op_dash_add83 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) + (  r179 ) );
}

static  int64_t   op_dash_sub84 (    int64_t  l182 ,    int64_t  r184 ) {
    return ( (  l182 ) - (  r184 ) );
}

static  int64_t   op_dash_div85 (    int64_t  l192 ,    int64_t  r194 ) {
    return ( (  l192 ) / (  r194 ) );
}

static  int64_t   op_dash_neg86 (    int64_t  l197 ) {
    return ( (  from_dash_integral35 ( 0 ) ) - (  l197 ) );
}

static  int32_t   op_dash_add87 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) + (  r202 ) );
}

static  int32_t   op_dash_sub88 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) - (  r207 ) );
}

static  int32_t   op_dash_mul89 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) * (  r212 ) );
}

static  int32_t   op_dash_div90 (    int32_t  l215 ,    int32_t  r217 ) {
    return ( (  l215 ) / (  r217 ) );
}

static  int32_t   op_dash_neg91 (    int32_t  x220 ) {
    return ( (  from_dash_integral29 ( 0 ) ) - (  x220 ) );
}

static  uint32_t   op_dash_add92 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) + (  r225 ) );
}

static  uint32_t   op_dash_sub93 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) - (  r230 ) );
}

static  uint32_t   op_dash_mul94 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) * (  r235 ) );
}

static  uint32_t   op_dash_div95 (    uint32_t  l238 ,    uint32_t  r240 ) {
    return ( (  l238 ) / (  r240 ) );
}

static  uint8_t   op_dash_add96 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) + (  r245 ) );
}

static  uint8_t   op_dash_sub97 (    uint8_t  l248 ,    uint8_t  r250 ) {
    return ( (  l248 ) - (  r250 ) );
}

static  size_t   op_dash_add98 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) + (  r265 ) );
}

static  size_t   op_dash_sub99 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) - (  r270 ) );
}

static  size_t   op_dash_mul100 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) * (  r275 ) );
}

static  size_t   op_dash_div101 (    size_t  l278 ,    size_t  r280 ) {
    return ( (  l278 ) / (  r280 ) );
}

struct Array_104 {
    uint32_t _arr [4];
};

struct SmolArray_103 {
    struct Array_104  f_arr;
};

static  struct SmolArray_103   from_dash_listlike102 (    struct Array_104  arr307 ) {
    return ( (struct SmolArray_103) { .f_arr = (  arr307 ) } );
}

struct Array_107 {
    uint32_t _arr [5];
};

struct SmolArray_106 {
    struct Array_107  f_arr;
};

static  struct SmolArray_106   from_dash_listlike105 (    struct Array_107  arr307 ) {
    return ( (struct SmolArray_106) { .f_arr = (  arr307 ) } );
}

struct Array_110 {
    uint32_t _arr [1];
};

struct SmolArray_109 {
    struct Array_110  f_arr;
};

static  struct SmolArray_109   from_dash_listlike108 (    struct Array_110  arr307 ) {
    return ( (struct SmolArray_109) { .f_arr = (  arr307 ) } );
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

static  char   undefined133 (  ) {
    char  temp134;
    return (  temp134 );
}

struct DynStr_136 {
    struct Slice_5  f_contents;
};

static  struct DynStr_136   undefined135 (  ) {
    struct DynStr_136  temp137;
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

enum MouseButton_147 {
    MouseButton_147_MouseLeft,
    MouseButton_147_MouseMiddle,
    MouseButton_147_MouseRight,
    MouseButton_147_ScrollUp,
    MouseButton_147_ScrollDown,
};

static  enum MouseButton_147   undefined146 (  ) {
    enum MouseButton_147  temp148;
    return (  temp148 );
}

static  uint8_t   undefined149 (  ) {
    uint8_t  temp150;
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

static  const char* *   offset_dash_ptr157 (    const char* *  x456 ,    int64_t  count458 ) {
    const char*  temp158;
    return ( (const char* * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp158 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr159 (    struct List_3 *  x456 ,    int64_t  count458 ) {
    struct List_3  temp160;
    return ( (struct List_3 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp160 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr161 (    uint32_t *  x456 ,    int64_t  count458 ) {
    uint32_t  temp162;
    return ( (uint32_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp162 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr163 (    uint8_t *  x456 ,    int64_t  count458 ) {
    uint8_t  temp164;
    return ( (uint8_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp164 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr165 (    struct Cell_58 *  x456 ,    int64_t  count458 ) {
    struct Cell_58  temp166;
    return ( (struct Cell_58 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp166 ) ) ) ) ) ) ) ) );
}

struct Cursor_169 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Primitive_168 {
    enum {
        Primitive_168_PrimInsert_t,
        Primitive_168_PrimDelete_t,
    } tag;
    union {
        struct {
            struct Cursor_169  field0;
            struct DynStr_136  field1;
        } Primitive_168_PrimInsert_s;
        struct {
            struct Cursor_169  field0;
            struct DynStr_136  field1;
        } Primitive_168_PrimDelete_s;
    } stuff;
};

static struct Primitive_168 Primitive_168_PrimInsert (  struct Cursor_169  field0 ,  struct DynStr_136  field1 ) {
    return ( struct Primitive_168 ) { .tag = Primitive_168_PrimInsert_t, .stuff = { .Primitive_168_PrimInsert_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct Primitive_168 Primitive_168_PrimDelete (  struct Cursor_169  field0 ,  struct DynStr_136  field1 ) {
    return ( struct Primitive_168 ) { .tag = Primitive_168_PrimDelete_t, .stuff = { .Primitive_168_PrimDelete_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static  struct Primitive_168 *   offset_dash_ptr167 (    struct Primitive_168 *  x456 ,    int64_t  count458 ) {
    struct Primitive_168  temp170;
    return ( (struct Primitive_168 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp170 ) ) ) ) ) ) ) ) );
}

struct TypeSize_172 {
    size_t  f_size;
};

static  struct TypeSize_172   get_dash_typesize171 (  ) {
    struct List_3  temp173;
    return ( (struct TypeSize_172) { .f_size = ( sizeof( ( (  temp173 ) ) ) ) } );
}

struct TypeSize_175 {
    size_t  f_size;
};

static  struct TypeSize_175   get_dash_typesize174 (  ) {
    char  temp176;
    return ( (struct TypeSize_175) { .f_size = ( sizeof( ( (  temp176 ) ) ) ) } );
}

struct TypeSize_178 {
    size_t  f_size;
};

static  struct TypeSize_178   get_dash_typesize177 (  ) {
    struct Cell_58  temp179;
    return ( (struct TypeSize_178) { .f_size = ( sizeof( ( (  temp179 ) ) ) ) } );
}

struct TypeSize_181 {
    size_t  f_size;
};

static  struct TypeSize_181   get_dash_typesize180 (  ) {
    struct Primitive_168  temp182;
    return ( (struct TypeSize_181) { .f_size = ( sizeof( ( (  temp182 ) ) ) ) } );
}

static  size_t   size_dash_of183 (    struct List_3 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of184 (    char *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of185 (    char  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of186 (    FILE *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of187 (    struct Primitive_168 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of188 (    uint32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Winsize_190 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of189 (    struct Winsize_190  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of191 (    enum Unit_13 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of192 (    size_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of193 (    int64_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Array_195 {
    char _arr [32];
};

static  size_t   size_dash_of194 (    struct Array_195  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of196 (    struct timespec *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  char *   cast197 (    const char*  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  const char*   cast198 (    char *  x469 ) {
    return ( (const char* ) (  x469 ) );
}

static  uint16_t *   cast199 (    uint32_t *  x469 ) {
    return ( (uint16_t * ) (  x469 ) );
}

static  enum Unit_13 *   cast200 (    const char*  x469 ) {
    return ( (enum Unit_13 * ) (  x469 ) );
}

static  uint32_t *   cast201 (    size_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  char *   cast202 (    int32_t *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  uint8_t   cast203 (    char  x469 ) {
    return ( (uint8_t ) (  x469 ) );
}

static  uint8_t *   cast204 (    int64_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char *   cast205 (    struct Array_195 *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  int32_t   cast206 (    uint32_t  x469 ) {
    return ( (int32_t ) (  x469 ) );
}

static  char   cast207 (    int32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  uint8_t *   cast208 (    int32_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char   cast209 (    uint32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  char   cast210 (    size_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  uint32_t *   cast211 (    int64_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  void *   cast_dash_ptr212 (    struct List_3 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr213 (    struct List_3 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   cast_dash_ptr214 (    void *  p472 ) {
    return ( (struct List_3 * ) (  p472 ) );
}

static  void *   cast_dash_ptr215 (    char * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr216 (    char *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  char *   cast_dash_ptr217 (    void *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr218 (    FILE * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr219 (    struct Primitive_168 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct termios *   cast_dash_ptr220 (    struct Termios_141 *  p472 ) {
    return ( (struct termios * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr221 (    struct Array_104 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr222 (    struct Array_107 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr223 (    struct Array_110 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint8_t *   cast_dash_ptr224 (    struct Array_142 *  p472 ) {
    return ( (uint8_t * ) (  p472 ) );
}

static  void *   cast_dash_ptr225 (    uint32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr226 (    struct Winsize_190 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr227 (    enum Unit_13 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr228 (    size_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Cell_58 *   cast_dash_ptr229 (    void *  p472 ) {
    return ( (struct Cell_58 * ) (  p472 ) );
}

struct Pollfd_231 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr230 (    struct Pollfd_231 *  p472 ) {
    return ( (struct pollfd * ) (  p472 ) );
}

static  void *   cast_dash_ptr232 (    int64_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr233 (    struct Array_195 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  char *   cast_dash_ptr234 (    struct Array_195 *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  struct Primitive_168 *   cast_dash_ptr235 (    void *  p472 ) {
    return ( (struct Primitive_168 * ) (  p472 ) );
}

static  void *   cast_dash_ptr236 (    struct Primitive_168 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr237 (    enum Unit_13 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr238 (    struct timespec * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr239 (    struct Cell_58 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   zeroed240 (  ) {
    struct List_3 *  temp241;
    struct List_3 *  x479 = (  temp241 );
    ( ( memset ) ( ( (  cast_dash_ptr212 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of183 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char *   zeroed242 (  ) {
    char *  temp243;
    char *  x479 = (  temp243 );
    ( ( memset ) ( ( (  cast_dash_ptr215 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of184 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char   zeroed244 (  ) {
    char  temp245;
    char  x479 = (  temp245 );
    ( ( memset ) ( ( (  cast_dash_ptr216 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of185 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  FILE *   zeroed246 (  ) {
    FILE *  temp247;
    FILE *  x479 = (  temp247 );
    ( ( memset ) ( ( (  cast_dash_ptr218 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of186 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Primitive_168 *   zeroed248 (  ) {
    struct Primitive_168 *  temp249;
    struct Primitive_168 *  x479 = (  temp249 );
    ( ( memset ) ( ( (  cast_dash_ptr219 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of187 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   zeroed250 (  ) {
    uint32_t  temp251;
    uint32_t  x479 = (  temp251 );
    ( ( memset ) ( ( (  cast_dash_ptr225 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of188 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Winsize_190   zeroed252 (  ) {
    struct Winsize_190  temp253;
    struct Winsize_190  x479 = (  temp253 );
    ( ( memset ) ( ( (  cast_dash_ptr226 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of189 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  enum Unit_13 *   zeroed254 (  ) {
    enum Unit_13 *  temp255;
    enum Unit_13 *  x479 = (  temp255 );
    ( ( memset ) ( ( (  cast_dash_ptr227 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  size_t   zeroed256 (  ) {
    size_t  temp257;
    size_t  x479 = (  temp257 );
    ( ( memset ) ( ( (  cast_dash_ptr228 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of192 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int64_t   zeroed258 (  ) {
    int64_t  temp259;
    int64_t  x479 = (  temp259 );
    ( ( memset ) ( ( (  cast_dash_ptr232 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of193 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Array_195   zeroed260 (  ) {
    struct Array_195  temp261;
    struct Array_195  x479 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr233 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of194 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct timespec *   zeroed262 (  ) {
    struct timespec *  temp263;
    struct timespec *  x479 = (  temp263 );
    ( ( memset ) ( ( (  cast_dash_ptr238 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of196 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   cast_dash_on_dash_zeroed264 (    uint16_t  x482 ) {
    uint32_t  temp265 = ( (  zeroed250 ) ( ) );
    uint32_t *  y483 = ( &temp265 );
    uint16_t *  yp484 = ( (  cast199 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  size_t   cast_dash_on_dash_zeroed266 (    uint32_t  x482 ) {
    size_t  temp267 = ( (  zeroed256 ) ( ) );
    size_t *  y483 = ( &temp267 );
    uint32_t *  yp484 = ( (  cast201 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed268 (    char  x482 ) {
    int32_t  temp269 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp269 );
    char *  yp484 = ( (  cast202 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed270 (    uint8_t  x482 ) {
    int64_t  temp271 = ( (  zeroed258 ) ( ) );
    int64_t *  y483 = ( &temp271 );
    uint8_t *  yp484 = ( (  cast204 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed272 (    uint8_t  x482 ) {
    int32_t  temp273 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp273 );
    uint8_t *  yp484 = ( (  cast208 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed274 (    uint32_t  x482 ) {
    int64_t  temp275 = ( (  zeroed258 ) ( ) );
    int64_t *  y483 = ( &temp275 );
    uint32_t *  yp484 = ( (  cast211 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  struct List_3 *   null_dash_ptr276 (  ) {
    return ( (  zeroed240 ) ( ) );
}

static  char *   null_dash_ptr277 (  ) {
    return ( (  zeroed242 ) ( ) );
}

static  FILE *   null_dash_ptr278 (  ) {
    return ( (  zeroed246 ) ( ) );
}

static  struct Primitive_168 *   null_dash_ptr279 (  ) {
    return ( (  zeroed248 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr280 (  ) {
    return ( (  zeroed254 ) ( ) );
}

static  struct timespec *   null_dash_ptr281 (  ) {
    return ( (  zeroed262 ) ( ) );
}

static  bool   is_dash_ptr_dash_null282 (    FILE *  p488 ) {
    return ( (  p488 ) == ( (  null_dash_ptr278 ) ( ) ) );
}

static  bool   ptr_dash_eq283 (    enum Unit_13 *  l494 ,    enum Unit_13 *  r496 ) {
    return ( (  l494 ) == (  r496 ) );
}

struct Maybe_285 {
    enum {
        Maybe_285_None_t,
        Maybe_285_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_285_Just_s;
    } stuff;
};

static struct Maybe_285 Maybe_285_Just (  const char*  field0 ) {
    return ( struct Maybe_285 ) { .tag = Maybe_285_Just_t, .stuff = { .Maybe_285_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_285   from_dash_nullable_dash_c_dash_str284 (    const char*  s499 ) {
    if ( ( (  ptr_dash_eq283 ) ( ( (  cast200 ) ( (  s499 ) ) ) ,  ( ( (  null_dash_ptr280 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
    } else {
        return ( ( Maybe_285_Just ) ( (  s499 ) ) );
    }
}

static  uint32_t   i32_dash_u32286 (    int32_t  x508 ) {
    return ( (uint32_t ) (  x508 ) );
}

static  int64_t   i32_dash_i64287 (    int32_t  x511 ) {
    return ( (int64_t ) (  x511 ) );
}

static  size_t   i32_dash_size288 (    int32_t  x514 ) {
    return ( (size_t ) ( (int64_t ) (  x514 ) ) );
}

static  int32_t   i64_dash_i32289 (    int64_t  x520 ) {
    return ( (int32_t ) (  x520 ) );
}

static  int32_t   size_dash_i32290 (    size_t  x529 ) {
    return ( (int32_t ) (  x529 ) );
}

static  uint32_t   u16_dash_u32291 (    uint16_t  x535 ) {
    return ( (  cast_dash_on_dash_zeroed264 ) ( (  x535 ) ) );
}

static  size_t   u32_dash_size292 (    uint32_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed266 ) ( (  x541 ) ) );
}

static  int64_t   u32_dash_i64293 (    uint32_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed274 ) ( (  x544 ) ) );
}

static  int32_t   u32_dash_i32294 (    uint32_t  x550 ) {
    return ( (  cast206 ) ( (  x550 ) ) );
}

static  int64_t   u8_dash_i64295 (    uint8_t  x556 ) {
    return ( (  cast_dash_on_dash_zeroed270 ) ( (  x556 ) ) );
}

static  int32_t   u8_dash_i32296 (    uint8_t  x559 ) {
    return ( (  cast_dash_on_dash_zeroed272 ) ( (  x559 ) ) );
}

struct Slice_299 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_298 {
    struct Slice_299  f_slice;
    size_t  f_current_dash_offset;
};

struct List_300 {
    enum CAllocator_4  f_al;
    struct Slice_299  f_elements;
    size_t  f_count;
};

static  struct SliceIter_298   into_dash_iter302 (    struct Slice_299  self1457 ) {
    return ( (struct SliceIter_298) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min304 (    size_t  l975 ,    size_t  r977 ) {
    if ( (  cmp9 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  struct Slice_299   subslice303 (    struct Slice_299  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct List_3 *  begin_dash_ptr1422 = ( (  offset_dash_ptr159 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_299) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min304 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_299) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_298   into_dash_iter301 (    struct List_300  self1808 ) {
    return ( (  into_dash_iter302 ) ( ( (  subslice303 ) ( ( (  self1808 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1808 ) .f_count ) ) ) ) );
}

static  struct SliceIter_298   into_dash_iter297 (    struct List_300 *  self565 ) {
    return ( (  into_dash_iter301 ) ( ( * (  self565 ) ) ) );
}

struct SliceIter_307 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_306 {
    struct SliceIter_307  f_s;
};

static  struct Scanner_306   into_dash_iter308 (    struct Scanner_306  self2409 ) {
    return (  self2409 );
}

static  struct Scanner_306   into_dash_iter305 (    struct Scanner_306 *  self565 ) {
    return ( (  into_dash_iter308 ) ( ( * (  self565 ) ) ) );
}

static  struct SliceIter_307   into_dash_iter311 (    struct Slice_5  self1457 ) {
    return ( (struct SliceIter_307) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice312 (    struct Slice_5  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    char *  begin_dash_ptr1422 = ( (  offset_dash_ptr31 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min304 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_307   into_dash_iter310 (    struct List_3  self1808 ) {
    return ( (  into_dash_iter311 ) ( ( (  subslice312 ) ( ( (  self1808 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1808 ) .f_count ) ) ) ) );
}

static  struct SliceIter_307   into_dash_iter309 (    struct List_3 *  self565 ) {
    return ( (  into_dash_iter310 ) ( ( * (  self565 ) ) ) );
}

enum EmptyIter_314 {
    EmptyIter_314_EmptyIter,
};

static  enum EmptyIter_314   nil313 (  ) {
    return ( EmptyIter_314_EmptyIter );
}

static  enum EmptyIter_314   into_dash_iter315 (    enum EmptyIter_314  self570 ) {
    return (  self570 );
}

static  struct Maybe_49   next316 (    enum EmptyIter_314 *  dref572 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_319 {
    struct DynStr_136  f_og;
    size_t  f_last;
};

struct env324 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

struct funenv324 {
    enum Unit_13  (*fun) (  struct env324  ,    struct List_3 *  );
    struct env324 env;
};

struct env323 {
    ;
    struct env324 envinst324;
    ;
    ;
    ;
    ;
};

struct funenv323 {
    enum Unit_13  (*fun) (  struct env323  ,    struct List_3 *  ,    char  );
    struct env323 env;
};

struct env322 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
};

struct funenv322 {
    enum Unit_13  (*fun) (  struct env322  ,    struct List_3 *  ,    struct DynStr_136  );
    struct env322 env;
};

struct env321 {
    ;
    struct env322 envinst322;
    ;
    ;
    ;
    ;
};

struct funenv321 {
    struct List_3  (*fun) (  struct env321  ,    struct DynStr_136  ,    enum CAllocator_4  );
    struct env321 env;
};

struct env320 {
    struct env321 envinst321;
    enum CAllocator_4  al3101;
};

struct funenv320 {
    struct List_3  (*fun) (  struct env320  ,    struct DynStr_136  );
    struct env320 env;
};

struct Map_318 {
    struct LineIter_319  field0;
    struct funenv320  field1;
};

static struct Map_318 Map_318_Map (  struct LineIter_319  field0 , struct funenv320  field1 ) {
    return ( struct Map_318 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_318   into_dash_iter317 (    struct Map_318  self576 ) {
    return (  self576 );
}

struct ConstStrIter_327 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_326 {
    struct ConstStrIter_327  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_326 Map_326_Map (  struct ConstStrIter_327  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_326 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_326   into_dash_iter325 (    struct Map_326  self576 ) {
    return (  self576 );
}

struct Take_330 {
    struct SliceIter_307  field0;
    size_t  field1;
};

static struct Take_330 Take_330_Take (  struct SliceIter_307  field0 ,  size_t  field1 ) {
    return ( struct Take_330 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Map_329 {
    struct Take_330  field0;
    int32_t (*  field1 )(    char  );
};

static struct Map_329 Map_329_Map (  struct Take_330  field0 ,  int32_t (*  field1 )(    char  ) ) {
    return ( struct Map_329 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_329   into_dash_iter328 (    struct Map_329  self576 ) {
    return (  self576 );
}

struct Maybe_332 {
    enum {
        Maybe_332_None_t,
        Maybe_332_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_332_Just_s;
    } stuff;
};

static struct Maybe_332 Maybe_332_Just (  struct List_3  field0 ) {
    return ( struct Maybe_332 ) { .tag = Maybe_332_Just_t, .stuff = { .Maybe_332_Just_s = { .field0 = field0 } } };
};

struct Maybe_333 {
    enum {
        Maybe_333_None_t,
        Maybe_333_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_136  field0;
        } Maybe_333_Just_s;
    } stuff;
};

static struct Maybe_333 Maybe_333_Just (  struct DynStr_136  field0 ) {
    return ( struct Maybe_333 ) { .tag = Maybe_333_Just_t, .stuff = { .Maybe_333_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail336 (    struct Maybe_49  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_49  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_49_Just_t ) {
        return ( dref1362 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get337 (    struct Slice_5  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1401 = ( (  offset_dash_ptr31 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  char   get335 (    struct Slice_5  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail336 ) ( ( (  try_dash_get337 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar338 (  ) {
    return ( (  zeroed244 ) ( ) );
}

static  char   newline339 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_136   substr340 (    struct DynStr_136  s1599 ,    size_t  from1601 ,    size_t  to1603 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice312 ) ( ( (  s1599 ) .f_contents ) ,  (  from1601 ) ,  (  to1603 ) ) ) } );
}

static  struct Maybe_333   next334 (    struct LineIter_319 *  self1736 ) {
    if ( ( (  cmp9 ( ( ( * (  self1736 ) ) .f_last ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get335 ) ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1736 ) ) .f_last ) ) ) , ( (  nullchar338 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
    }
    size_t  i1737 = ( ( * (  self1736 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1737 ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get335 ) ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) ,  (  i1737 ) ) ) , ( (  newline339 ) ( ) ) ) ) ) ) {
        i1737 = (  op_dash_add98 ( (  i1737 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_136  line1738 = ( (  substr340 ) ( ( ( * (  self1736 ) ) .f_og ) ,  ( ( * (  self1736 ) ) .f_last ) ,  (  i1737 ) ) );
    if ( (  cmp9 ( (  i1737 ) , ( ( ( ( * (  self1736 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1737 = (  op_dash_add98 ( (  i1737 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1736 ) .f_last = (  i1737 );
    return ( ( Maybe_333_Just ) ( (  line1738 ) ) );
}

static  struct Maybe_332   next331 (    struct Map_318 *  dref578 ) {
    struct Maybe_333  dref581 = ( (  next334 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_333_None_t ) {
        return ( (struct Maybe_332) { .tag = Maybe_332_None_t } );
    }
    else if ( dref581.tag == Maybe_333_Just_t ) {
        struct funenv320  temp341 = ( (* dref578 ) .field1 );
        return ( ( Maybe_332_Just ) ( ( temp341.fun ( temp341.env ,  ( dref581 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_343 {
    enum {
        Maybe_343_None_t,
        Maybe_343_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_343_Just_s;
    } stuff;
};

static struct Maybe_343 Maybe_343_Just (  uint32_t  field0 ) {
    return ( struct Maybe_343 ) { .tag = Maybe_343_Just_t, .stuff = { .Maybe_343_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next344 (    struct ConstStrIter_327 *  self1073 ) {
    if ( (  cmp9 ( ( ( * (  self1073 ) ) .f_i ) , ( (  i32_dash_size288 ) ( ( ( strlen ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1074 = ( ( (  cast197 ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) );
    char  c1075 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1074 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1073 ) ) .f_i ) ) ) ) ) );
    (*  self1073 ) .f_i = (  op_dash_add98 ( ( ( * (  self1073 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1075 ) ) );
}

static  struct Maybe_343   next342 (    struct Map_326 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next344 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_343) { .tag = Maybe_343_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_343_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_346 {
    enum {
        Maybe_346_None_t,
        Maybe_346_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_346_Just_s;
    } stuff;
};

static struct Maybe_346 Maybe_346_Just (  int32_t  field0 ) {
    return ( struct Maybe_346 ) { .tag = Maybe_346_Just_t, .stuff = { .Maybe_346_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next348 (    struct SliceIter_307 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1465 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_49   next347 (    struct Take_330 *  dref641 ) {
    if ( (  cmp9 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x644 = ( (  next348 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
        (* dref641 ) .field1 = (  op_dash_sub99 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x644 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_346   next345 (    struct Map_329 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next347 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_346_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_319   into_dash_iter350 (    struct LineIter_319  self1733 ) {
    return (  self1733 );
}

static  struct Map_318   map349 (    struct LineIter_319  iterable585 ,   struct funenv320  fun587 ) {
    struct LineIter_319  it588 = ( (  into_dash_iter350 ) ( (  iterable585 ) ) );
    return ( ( Map_318_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct ConstStrIter_327   into_dash_iter352 (    const char*  self1067 ) {
    return ( (struct ConstStrIter_327) { .f_ogstr = (  self1067 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_326   map351 (    const char*  iterable585 ,    uint32_t (*  fun587 )(    char  ) ) {
    struct ConstStrIter_327  it588 = ( (  into_dash_iter352 ) ( (  iterable585 ) ) );
    return ( ( Map_326_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Take_330   into_dash_iter354 (    struct Take_330  self639 ) {
    return (  self639 );
}

static  struct Map_329   map353 (    struct Take_330  iterable585 ,    int32_t (*  fun587 )(    char  ) ) {
    struct Take_330  it588 = ( (  into_dash_iter354 ) ( (  iterable585 ) ) );
    return ( ( Map_329_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

struct FromIter_358 {
    int32_t  f_from;
};

struct Zip_357 {
    struct SliceIter_298  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

struct Drop_356 {
    struct Zip_357  field0;
    size_t  field1;
};

static struct Drop_356 Drop_356_Drop (  struct Zip_357  field0 ,  size_t  field1 ) {
    return ( struct Drop_356 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_356   into_dash_iter355 (    struct Drop_356  self625 ) {
    return (  self625 );
}

struct Zip_361 {
    struct SliceIter_307  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

struct Drop_360 {
    struct Zip_361  field0;
    size_t  field1;
};

static struct Drop_360 Drop_360_Drop (  struct Zip_361  field0 ,  size_t  field1 ) {
    return ( struct Drop_360 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_360   into_dash_iter359 (    struct Drop_360  self625 ) {
    return (  self625 );
}

struct Tuple2_364 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_364 Tuple2_364_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_332   next366 (    struct SliceIter_298 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_332) { .tag = Maybe_332_None_t } );
    }
    struct List_3  elem1465 = ( * ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_332_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_346   next367 (    struct FromIter_358 *  dref685 ) {
    int32_t  v687 = ( ( (* dref685 ) ) .f_from );
    (* dref685 ) .f_from = (  op_dash_add87 ( ( ( (* dref685 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_346_Just ) ( (  v687 ) ) );
}

static  struct Maybe_363   next365 (    struct Zip_357 *  self694 ) {
    struct Zip_357  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_332  dref696 = ( (  next366 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_332_None_t ) {
            return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
        }
        else if ( dref696.tag == Maybe_332_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_363) { .tag = Maybe_363_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next366 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_363_Just ) ( ( ( Tuple2_364_Tuple2 ) ( ( dref696 .stuff .Maybe_332_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_363   next362 (    struct Drop_356 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next365 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next365 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

struct Tuple2_370 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_370 Tuple2_370_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_370 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_369 {
    enum {
        Maybe_369_None_t,
        Maybe_369_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_370  field0;
        } Maybe_369_Just_s;
    } stuff;
};

static struct Maybe_369 Maybe_369_Just (  struct Tuple2_370  field0 ) {
    return ( struct Maybe_369 ) { .tag = Maybe_369_Just_t, .stuff = { .Maybe_369_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_369   next371 (    struct Zip_361 *  self694 ) {
    struct Zip_361  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next348 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next348 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_369   next368 (    struct Drop_360 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next371 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next371 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

static  struct Zip_357   into_dash_iter373 (    struct Zip_357  self691 ) {
    return (  self691 );
}

static  struct Drop_356   drop372 (    struct Zip_357  iterable632 ,    size_t  i634 ) {
    struct Zip_357  it635 = ( (  into_dash_iter373 ) ( (  iterable632 ) ) );
    return ( ( Drop_356_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Zip_361   into_dash_iter375 (    struct Zip_361  self691 ) {
    return (  self691 );
}

static  struct Drop_360   drop374 (    struct Zip_361  iterable632 ,    size_t  i634 ) {
    struct Zip_361  it635 = ( (  into_dash_iter375 ) ( (  iterable632 ) ) );
    return ( ( Drop_360_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Take_330   take376 (    struct List_3 *  it647 ,    size_t  i649 ) {
    return ( ( Take_330_Take ) ( ( (  into_dash_iter309 ) ( (  it647 ) ) ) ,  (  i649 ) ) );
}

struct Range_378 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_378 Range_378_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_378 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_378   to377 (    int32_t  from654 ,    int32_t  to656 ) {
    return ( ( Range_378_Range ) ( (  from654 ) ,  (  to656 ) ) );
}

struct RangeIter_380 {
    struct Range_378  field0;
    int32_t  field1;
};

static struct RangeIter_380 RangeIter_380_RangeIter (  struct Range_378  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_380 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_380   into_dash_iter379 (    struct Range_378  dref663 ) {
    return ( ( RangeIter_380_RangeIter ) ( ( ( Range_378_Range ) ( ( dref663 .field0 ) ,  ( dref663 .field1 ) ) ) ,  ( dref663 .field0 ) ) );
}

static  struct Maybe_346   next381 (    struct RangeIter_380 *  self671 ) {
    struct RangeIter_380  dref672 = ( * (  self671 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref672 .field1 ) , ( dref672 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        struct Maybe_346  x676 = ( ( Maybe_346_Just ) ( ( dref672 .field1 ) ) );
        (*  self671 ) = ( ( RangeIter_380_RangeIter ) ( ( ( Range_378_Range ) ( ( dref672 .field0 .field0 ) ,  ( dref672 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref672 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x676 );
    }
}

static  struct FromIter_358   from382 (    int32_t  f680 ) {
    return ( (struct FromIter_358) { .f_from = (  f680 ) } );
}

static  struct FromIter_358   into_dash_iter383 (    struct FromIter_358  it683 ) {
    return (  it683 );
}

struct Slice_387 {
    struct Primitive_168 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_386 {
    struct Slice_387  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_385 {
    struct SliceIter_386  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_385   into_dash_iter384 (    struct Zip_385  self691 ) {
    return (  self691 );
}

struct Zip_389 {
    struct SliceIter_307  f_left_dash_it;
    struct SliceIter_307  f_right_dash_it;
};

static  struct Zip_389   into_dash_iter388 (    struct Zip_389  self691 ) {
    return (  self691 );
}

struct IntStrIter_392 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_391 {
    struct IntStrIter_392  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_391   into_dash_iter390 (    struct Zip_391  self691 ) {
    return (  self691 );
}

struct StrConcatIter_398 {
    struct ConstStrIter_327  f_left;
    struct SliceIter_307  f_right;
};

struct AppendIter_399 {
    enum EmptyIter_314  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_397 {
    struct StrConcatIter_398  f_left;
    struct AppendIter_399  f_right;
};

struct StrCaseIter_396 {
    enum {
        StrCaseIter_396_StrCaseIter1_t,
        StrCaseIter_396_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_327  field0;
        } StrCaseIter_396_StrCaseIter1_s;
        struct {
            struct StrConcatIter_397  field0;
        } StrCaseIter_396_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_396 StrCaseIter_396_StrCaseIter1 (  struct ConstStrIter_327  field0 ) {
    return ( struct StrCaseIter_396 ) { .tag = StrCaseIter_396_StrCaseIter1_t, .stuff = { .StrCaseIter_396_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_396 StrCaseIter_396_StrCaseIter2 (  struct StrConcatIter_397  field0 ) {
    return ( struct StrCaseIter_396 ) { .tag = StrCaseIter_396_StrCaseIter2_t, .stuff = { .StrCaseIter_396_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_395 {
    struct ConstStrIter_327  f_left;
    struct StrCaseIter_396  f_right;
};

struct Zip_394 {
    struct StrConcatIter_395  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_394   into_dash_iter393 (    struct Zip_394  self691 ) {
    return (  self691 );
}

struct IntStrIter_403 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_402 {
    struct ConstStrIter_327  f_left;
    struct IntStrIter_403  f_right;
};

struct Zip_401 {
    struct StrConcatIter_402  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_401   into_dash_iter400 (    struct Zip_401  self691 ) {
    return (  self691 );
}

struct StrConcatIter_413 {
    struct AppendIter_399  f_left;
    struct AppendIter_399  f_right;
};

struct StrConcatIter_412 {
    struct StrConcatIter_413  f_left;
    struct ConstStrIter_327  f_right;
};

struct StrConcatIter_411 {
    struct StrConcatIter_412  f_left;
    struct IntStrIter_392  f_right;
};

struct StrConcatIter_410 {
    struct StrConcatIter_411  f_left;
    struct AppendIter_399  f_right;
};

struct StrConcatIter_409 {
    struct ConstStrIter_327  f_left;
    struct StrConcatIter_410  f_right;
};

struct StrConcatIter_408 {
    struct StrConcatIter_409  f_left;
    struct AppendIter_399  f_right;
};

struct StrCaseIter_407 {
    enum {
        StrCaseIter_407_StrCaseIter1_t,
        StrCaseIter_407_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_327  field0;
        } StrCaseIter_407_StrCaseIter1_s;
        struct {
            struct StrConcatIter_408  field0;
        } StrCaseIter_407_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_407 StrCaseIter_407_StrCaseIter1 (  struct ConstStrIter_327  field0 ) {
    return ( struct StrCaseIter_407 ) { .tag = StrCaseIter_407_StrCaseIter1_t, .stuff = { .StrCaseIter_407_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_407 StrCaseIter_407_StrCaseIter2 (  struct StrConcatIter_408  field0 ) {
    return ( struct StrCaseIter_407 ) { .tag = StrCaseIter_407_StrCaseIter2_t, .stuff = { .StrCaseIter_407_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_406 {
    struct ConstStrIter_327  f_left;
    struct StrCaseIter_407  f_right;
};

struct Zip_405 {
    struct StrConcatIter_406  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_405   into_dash_iter404 (    struct Zip_405  self691 ) {
    return (  self691 );
}

struct StrConcatIter_418 {
    struct ConstStrIter_327  f_left;
    struct IntStrIter_392  f_right;
};

struct StrConcatIter_417 {
    struct StrConcatIter_418  f_left;
    struct AppendIter_399  f_right;
};

struct StrConcatIter_416 {
    struct StrConcatIter_417  f_left;
    struct IntStrIter_392  f_right;
};

struct Zip_415 {
    struct StrConcatIter_416  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self691 ) {
    return (  self691 );
}

struct IntStrIter_422 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_421 {
    struct ConstStrIter_327  f_left;
    struct IntStrIter_422  f_right;
};

struct Zip_420 {
    struct StrConcatIter_421  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self691 ) {
    return (  self691 );
}

struct Zip_424 {
    struct StrConcatIter_418  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_424   into_dash_iter423 (    struct Zip_424  self691 ) {
    return (  self691 );
}

struct StrConcatIter_428 {
    struct StrConcatIter_418  f_left;
    struct ConstStrIter_327  f_right;
};

struct StrConcatIter_427 {
    struct StrConcatIter_428  f_left;
    struct IntStrIter_392  f_right;
};

struct Zip_426 {
    struct StrConcatIter_427  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_426   into_dash_iter425 (    struct Zip_426  self691 ) {
    return (  self691 );
}

struct StrConcatIter_433 {
    struct StrConcatIter_421  f_left;
    struct AppendIter_399  f_right;
};

struct StrCaseIter_432 {
    enum {
        StrCaseIter_432_StrCaseIter1_t,
        StrCaseIter_432_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_327  field0;
        } StrCaseIter_432_StrCaseIter1_s;
        struct {
            struct StrConcatIter_433  field0;
        } StrCaseIter_432_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_432 StrCaseIter_432_StrCaseIter1 (  struct ConstStrIter_327  field0 ) {
    return ( struct StrCaseIter_432 ) { .tag = StrCaseIter_432_StrCaseIter1_t, .stuff = { .StrCaseIter_432_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_432 StrCaseIter_432_StrCaseIter2 (  struct StrConcatIter_433  field0 ) {
    return ( struct StrCaseIter_432 ) { .tag = StrCaseIter_432_StrCaseIter2_t, .stuff = { .StrCaseIter_432_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_431 {
    struct ConstStrIter_327  f_left;
    struct StrCaseIter_432  f_right;
};

struct Zip_430 {
    struct StrConcatIter_431  f_left_dash_it;
    struct FromIter_358  f_right_dash_it;
};

static  struct Zip_430   into_dash_iter429 (    struct Zip_430  self691 ) {
    return (  self691 );
}

struct Tuple2_436 {
    struct Primitive_168  field0;
    int32_t  field1;
};

static struct Tuple2_436 Tuple2_436_Tuple2 (  struct Primitive_168  field0 ,  int32_t  field1 ) {
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

struct Maybe_437 {
    enum {
        Maybe_437_None_t,
        Maybe_437_Just_t,
    } tag;
    union {
        struct {
            struct Primitive_168  field0;
        } Maybe_437_Just_s;
    } stuff;
};

static struct Maybe_437 Maybe_437_Just (  struct Primitive_168  field0 ) {
    return ( struct Maybe_437 ) { .tag = Maybe_437_Just_t, .stuff = { .Maybe_437_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_437   next438 (    struct SliceIter_386 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_437) { .tag = Maybe_437_None_t } );
    }
    struct Primitive_168  elem1465 = ( * ( (  offset_dash_ptr167 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_437_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_435   next434 (    struct Zip_385 *  self694 ) {
    struct Zip_385  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_437  dref696 = ( (  next438 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_437_None_t ) {
            return ( (struct Maybe_435) { .tag = Maybe_435_None_t } );
        }
        else if ( dref696.tag == Maybe_437_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_435) { .tag = Maybe_435_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next438 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_435_Just ) ( ( ( Tuple2_436_Tuple2 ) ( ( dref696 .stuff .Maybe_437_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_441 {
    char  field0;
    char  field1;
};

static struct Tuple2_441 Tuple2_441_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_441 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_440 {
    enum {
        Maybe_440_None_t,
        Maybe_440_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_441  field0;
        } Maybe_440_Just_s;
    } stuff;
};

static struct Maybe_440 Maybe_440_Just (  struct Tuple2_441  field0 ) {
    return ( struct Maybe_440 ) { .tag = Maybe_440_Just_t, .stuff = { .Maybe_440_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_440   next439 (    struct Zip_389 *  self694 ) {
    struct Zip_389  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next348 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_440) { .tag = Maybe_440_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref698 = ( (  next348 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_440) { .tag = Maybe_440_None_t } );
            }
            else if ( dref698.tag == Maybe_49_Just_t ) {
                ( (  next348 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next348 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_440_Just ) ( ( ( Tuple2_441_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env446 {
    ;
    int32_t  base949;
};

struct funenv446 {
    int32_t  (*fun) (  struct env446  ,    int32_t  ,    int32_t  );
    struct env446 env;
};

static  int32_t   reduce445 (    struct Range_378  iterable838 ,    int32_t  base840 ,   struct funenv446  fun842 ) {
    int32_t  x843 = (  base840 );
    struct RangeIter_380  it844 = ( (  into_dash_iter379 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_346  dref845 = ( (  next381 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_346_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_346_Just_t ) {
            struct funenv446  temp447 = (  fun842 );
            x843 = ( temp447.fun ( temp447.env ,  ( dref845 .stuff .Maybe_346_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp448;
    return (  temp448 );
}

static  int32_t   lam446 (   struct env446 env ,    int32_t  item953 ,    int32_t  x955 ) {
    return (  op_dash_mul89 ( (  x955 ) , ( env.base949 ) ) );
}

static  int32_t   pow444 (    int32_t  base949 ,    int32_t  p951 ) {
    struct env446 envinst446 = {
        .base949 =  base949 ,
    };
    return ( (  reduce445 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv446){ .fun = lam446, .env = envinst446 } ) ) );
}

static  struct Maybe_49   next443 (    struct IntStrIter_392 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1095 = ( (  pow444 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1096 = (  op_dash_div90 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    int32_t  upper_dash_mask1097 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1096 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1098 = (  op_dash_sub88 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast207 ) ( (  op_dash_add87 ( (  digit1098 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_369   next442 (    struct Zip_391 *  self694 ) {
    struct Zip_391  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next443 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next443 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next453 (    struct StrConcatIter_398 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next348 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next454 (    struct AppendIter_399 *  self802 ) {
    struct Maybe_49  dref803 = ( (  next316 ) ( ( & ( ( * (  self802 ) ) .f_it ) ) ) );
    if ( dref803.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref803 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref803.tag == Maybe_49_None_t ) {
        if ( ( ! ( ( * (  self802 ) ) .f_appended ) ) ) {
            (*  self802 ) .f_appended = ( true );
            return ( ( Maybe_49_Just ) ( ( ( * (  self802 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_49   next452 (    struct StrConcatIter_397 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next453 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next451 (    struct StrCaseIter_396 *  self1182 ) {
    struct StrCaseIter_396 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_396_StrCaseIter1_t ) {
        return ( (  next344 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_396_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_396_StrCaseIter2_t ) {
        return ( (  next452 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_396_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next450 (    struct StrConcatIter_395 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next451 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next449 (    struct Zip_394 *  self694 ) {
    struct Zip_394  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next450 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env460 {
    uint32_t  base949;
    ;
};

struct funenv460 {
    uint32_t  (*fun) (  struct env460  ,    int32_t  ,    uint32_t  );
    struct env460 env;
};

static  uint32_t   reduce459 (    struct Range_378  iterable838 ,    uint32_t  base840 ,   struct funenv460  fun842 ) {
    uint32_t  x843 = (  base840 );
    struct RangeIter_380  it844 = ( (  into_dash_iter379 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_346  dref845 = ( (  next381 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_346_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_346_Just_t ) {
            struct funenv460  temp461 = (  fun842 );
            x843 = ( temp461.fun ( temp461.env ,  ( dref845 .stuff .Maybe_346_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp462;
    return (  temp462 );
}

static  uint32_t   lam460 (   struct env460 env ,    int32_t  item953 ,    uint32_t  x955 ) {
    return (  op_dash_mul94 ( (  x955 ) , ( env.base949 ) ) );
}

static  uint32_t   pow458 (    uint32_t  base949 ,    int32_t  p951 ) {
    struct env460 envinst460 = {
        .base949 =  base949 ,
    };
    return ( (  reduce459 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv460){ .fun = lam460, .env = envinst460 } ) ) );
}

static  struct Maybe_49   next457 (    struct IntStrIter_403 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1095 = ( (  pow458 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1096 = (  op_dash_div95 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    uint32_t  upper_dash_mask1097 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1096 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1098 = (  op_dash_sub93 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast209 ) ( (  op_dash_add92 ( (  digit1098 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next456 (    struct StrConcatIter_402 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next457 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next455 (    struct Zip_401 *  self694 ) {
    struct Zip_401  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next456 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next456 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next471 (    struct StrConcatIter_413 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next470 (    struct StrConcatIter_412 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next471 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next469 (    struct StrConcatIter_411 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next470 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next468 (    struct StrConcatIter_410 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next469 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next467 (    struct StrConcatIter_409 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next468 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next466 (    struct StrConcatIter_408 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next467 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next465 (    struct StrCaseIter_407 *  self1182 ) {
    struct StrCaseIter_407 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_407_StrCaseIter1_t ) {
        return ( (  next344 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_407_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_407_StrCaseIter2_t ) {
        return ( (  next466 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_407_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next464 (    struct StrConcatIter_406 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next465 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next463 (    struct Zip_405 *  self694 ) {
    struct Zip_405  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next464 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next464 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next475 (    struct StrConcatIter_418 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next474 (    struct StrConcatIter_417 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next475 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next473 (    struct StrConcatIter_416 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next474 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next472 (    struct Zip_415 *  self694 ) {
    struct Zip_415  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next473 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next473 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env481 {
    size_t  base949;
    ;
};

struct funenv481 {
    size_t  (*fun) (  struct env481  ,    int32_t  ,    size_t  );
    struct env481 env;
};

static  size_t   reduce480 (    struct Range_378  iterable838 ,    size_t  base840 ,   struct funenv481  fun842 ) {
    size_t  x843 = (  base840 );
    struct RangeIter_380  it844 = ( (  into_dash_iter379 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_346  dref845 = ( (  next381 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_346_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_346_Just_t ) {
            struct funenv481  temp482 = (  fun842 );
            x843 = ( temp482.fun ( temp482.env ,  ( dref845 .stuff .Maybe_346_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp483;
    return (  temp483 );
}

static  size_t   lam481 (   struct env481 env ,    int32_t  item953 ,    size_t  x955 ) {
    return (  op_dash_mul100 ( (  x955 ) , ( env.base949 ) ) );
}

static  size_t   pow479 (    size_t  base949 ,    int32_t  p951 ) {
    struct env481 envinst481 = {
        .base949 =  base949 ,
    };
    return ( (  reduce480 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv481){ .fun = lam481, .env = envinst481 } ) ) );
}

static  struct Maybe_49   next478 (    struct IntStrIter_422 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1095 = ( (  pow479 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1096 = (  op_dash_div101 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    size_t  upper_dash_mask1097 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1096 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1098 = (  op_dash_sub99 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast210 ) ( (  op_dash_add98 ( (  digit1098 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next477 (    struct StrConcatIter_421 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next478 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next476 (    struct Zip_420 *  self694 ) {
    struct Zip_420  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next477 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next477 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_369   next484 (    struct Zip_424 *  self694 ) {
    struct Zip_424  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next475 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next475 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next487 (    struct StrConcatIter_428 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next475 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next486 (    struct StrConcatIter_427 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next487 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next485 (    struct Zip_426 *  self694 ) {
    struct Zip_426  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next486 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next486 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next491 (    struct StrConcatIter_433 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next477 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next490 (    struct StrCaseIter_432 *  self1182 ) {
    struct StrCaseIter_432 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_432_StrCaseIter1_t ) {
        return ( (  next344 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_432_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_432_StrCaseIter2_t ) {
        return ( (  next491 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_432_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next489 (    struct StrConcatIter_431 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next344 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next490 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_369   next488 (    struct Zip_430 *  self694 ) {
    struct Zip_430  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next489 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_346  dref698 = ( (  next367 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_346_None_t ) {
                return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
            }
            else if ( dref698.tag == Maybe_346_Just_t ) {
                ( (  next489 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next367 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_369_Just ) ( ( ( Tuple2_370_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_346_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_357   zip492 (    struct Slice_299  left702 ,    struct FromIter_358  right704 ) {
    struct SliceIter_298  left_dash_it705 = ( (  into_dash_iter302 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_357) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_361   zip493 (    struct Slice_5  left702 ,    struct FromIter_358  right704 ) {
    struct SliceIter_307  left_dash_it705 = ( (  into_dash_iter311 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_361) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_357   zip494 (    struct List_300  left702 ,    struct FromIter_358  right704 ) {
    struct SliceIter_298  left_dash_it705 = ( (  into_dash_iter301 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_357) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_361   zip495 (    struct List_3  left702 ,    struct FromIter_358  right704 ) {
    struct SliceIter_307  left_dash_it705 = ( (  into_dash_iter310 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_361) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_386   into_dash_iter497 (    struct Slice_387  self1457 ) {
    return ( (struct SliceIter_386) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_385   zip496 (    struct Slice_387  left702 ,    struct FromIter_358  right704 ) {
    struct SliceIter_386  left_dash_it705 = ( (  into_dash_iter497 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_385) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_389   zip498 (    struct Slice_5  left702 ,    struct Slice_5  right704 ) {
    struct SliceIter_307  left_dash_it705 = ( (  into_dash_iter311 ) ( (  left702 ) ) );
    struct SliceIter_307  right_dash_it706 = ( (  into_dash_iter311 ) ( (  right704 ) ) );
    return ( (struct Zip_389) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct IntStrIter_392   into_dash_iter500 (    struct IntStrIter_392  self1091 ) {
    return (  self1091 );
}

static  struct Zip_391   zip499 (    struct IntStrIter_392  left702 ,    struct FromIter_358  right704 ) {
    struct IntStrIter_392  left_dash_it705 = ( (  into_dash_iter500 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_391) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_395   into_dash_iter502 (    struct StrConcatIter_395  self1157 ) {
    return (  self1157 );
}

static  struct Zip_394   zip501 (    struct StrConcatIter_395  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_395  left_dash_it705 = ( (  into_dash_iter502 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_394) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_402   into_dash_iter504 (    struct StrConcatIter_402  self1157 ) {
    return (  self1157 );
}

static  struct Zip_401   zip503 (    struct StrConcatIter_402  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_402  left_dash_it705 = ( (  into_dash_iter504 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_401) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_406   into_dash_iter506 (    struct StrConcatIter_406  self1157 ) {
    return (  self1157 );
}

static  struct Zip_405   zip505 (    struct StrConcatIter_406  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_406  left_dash_it705 = ( (  into_dash_iter506 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_405) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_416   into_dash_iter508 (    struct StrConcatIter_416  self1157 ) {
    return (  self1157 );
}

static  struct Zip_415   zip507 (    struct StrConcatIter_416  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_416  left_dash_it705 = ( (  into_dash_iter508 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_421   into_dash_iter510 (    struct StrConcatIter_421  self1157 ) {
    return (  self1157 );
}

static  struct Zip_420   zip509 (    struct StrConcatIter_421  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_421  left_dash_it705 = ( (  into_dash_iter510 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_418   into_dash_iter512 (    struct StrConcatIter_418  self1157 ) {
    return (  self1157 );
}

static  struct Zip_424   zip511 (    struct StrConcatIter_418  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_418  left_dash_it705 = ( (  into_dash_iter512 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_427   into_dash_iter514 (    struct StrConcatIter_427  self1157 ) {
    return (  self1157 );
}

static  struct Zip_426   zip513 (    struct StrConcatIter_427  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_427  left_dash_it705 = ( (  into_dash_iter514 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_426) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_431   into_dash_iter516 (    struct StrConcatIter_431  self1157 ) {
    return (  self1157 );
}

static  struct Zip_430   zip515 (    struct StrConcatIter_431  left702 ,    struct FromIter_358  right704 ) {
    struct StrConcatIter_431  left_dash_it705 = ( (  into_dash_iter516 ) ( (  left702 ) ) );
    struct FromIter_358  right_dash_it706 = ( (  into_dash_iter383 ) ( (  right704 ) ) );
    return ( (struct Zip_430) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

struct TakeWhile_518 {
    struct Scanner_306  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_518   into_dash_iter517 (    struct TakeWhile_518  self741 ) {
    return (  self741 );
}

struct TakeWhile_520 {
    struct SliceIter_307  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_520   into_dash_iter519 (    struct TakeWhile_520  self741 ) {
    return (  self741 );
}

struct DropWhile_525 {
    struct SliceIter_307  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_524 {
    struct DropWhile_525  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_523 {
    struct DropWhile_524  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_522 {
    struct DropWhile_523  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_522   into_dash_iter521 (    struct TakeWhile_522  self741 ) {
    return (  self741 );
}

struct TakeWhile_527 {
    struct DropWhile_523  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_527   into_dash_iter526 (    struct TakeWhile_527  self741 ) {
    return (  self741 );
}

struct TakeWhile_529 {
    struct DropWhile_525  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_529   into_dash_iter528 (    struct TakeWhile_529  self741 ) {
    return (  self741 );
}

static  struct Maybe_49   next531 (    struct Scanner_306 *  self2406 ) {
    return ( (  next348 ) ( ( & ( ( * (  self2406 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next530 (    struct TakeWhile_518 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next531 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next532 (    struct TakeWhile_520 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next348 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next536 (    struct DropWhile_525 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next348 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next348 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
        if ( dref760.tag == Maybe_49_None_t ) {
            (*  self759 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref760.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self759 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self759 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next535 (    struct DropWhile_524 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next536 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next536 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
        if ( dref760.tag == Maybe_49_None_t ) {
            (*  self759 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref760.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self759 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self759 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next534 (    struct DropWhile_523 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next535 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next535 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
        if ( dref760.tag == Maybe_49_None_t ) {
            (*  self759 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref760.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self759 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self759 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next533 (    struct TakeWhile_522 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next534 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next537 (    struct TakeWhile_527 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next534 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next538 (    struct TakeWhile_529 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next536 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

struct TakeWhile_540 {
    struct DropWhile_523  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next539 (    struct TakeWhile_540 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next534 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
    struct Maybe_49  dref746 = (  mx745 );
    if ( dref746.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref746.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self744 ) ) .f_pred ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref746 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct TakeWhile_518   take_dash_while541 (    struct Scanner_306 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_518) { .f_it = ( (  into_dash_iter305 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_520   take_dash_while542 (    struct List_3 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_520) { .f_it = ( (  into_dash_iter309 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_525   into_dash_iter544 (    struct DropWhile_525  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_529   take_dash_while543 (    struct DropWhile_525  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_529) { .f_it = ( (  into_dash_iter544 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_523   into_dash_iter546 (    struct DropWhile_523  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_522   take_dash_while545 (    struct DropWhile_523  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_522) { .f_it = ( (  into_dash_iter546 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_527   take_dash_while547 (    struct DropWhile_523  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_527) { .f_it = ( (  into_dash_iter546 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_540   take_dash_while548 (    struct DropWhile_523  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_540) { .f_it = ( (  into_dash_iter546 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_524   into_dash_iter549 (    struct DropWhile_524  self756 ) {
    return (  self756 );
}

static  struct SliceIter_307   into_dash_iter551 (    struct DynStr_136  self1596 ) {
    return ( (  into_dash_iter311 ) ( ( (  self1596 ) .f_contents ) ) );
}

static  struct DropWhile_525   drop_dash_while550 (    struct DynStr_136  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_525) { .f_it = ( (  into_dash_iter551 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_524   drop_dash_while552 (    struct DropWhile_525  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_524) { .f_it = ( (  into_dash_iter544 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_523   drop_dash_while553 (    struct DropWhile_524  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_523) { .f_it = ( (  into_dash_iter549 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_399   append554 (    enum EmptyIter_314  it786 ,    char  e788 ) {
    return ( (struct AppendIter_399) { .f_it = ( (  into_dash_iter315 ) ( (  it786 ) ) ) , .f_elem = (  e788 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_399   cons555 (    enum EmptyIter_314  it791 ,    char  e793 ) {
    return ( (  append554 ) ( (  it791 ) ,  (  e793 ) ) );
}

static  struct AppendIter_399   single556 (    char  e796 ) {
    return ( (  cons555 ) ( ( (  nil313 ) ( ) ) ,  (  e796 ) ) );
}

static  struct AppendIter_399   into_dash_iter557 (    struct AppendIter_399  self799 ) {
    return (  self799 );
}

struct Key_562 {
    enum {
        Key_562_Escape_t,
        Key_562_Enter_t,
        Key_562_Tab_t,
        Key_562_Backspace_t,
        Key_562_Char_t,
        Key_562_Ctrl_t,
        Key_562_Up_t,
        Key_562_Down_t,
        Key_562_Left_t,
        Key_562_Right_t,
        Key_562_Home_t,
        Key_562_End_t,
        Key_562_PageUp_t,
        Key_562_PageDown_t,
        Key_562_Delete_t,
        Key_562_Insert_t,
        Key_562_F1_t,
        Key_562_F2_t,
        Key_562_F3_t,
        Key_562_F4_t,
        Key_562_F5_t,
        Key_562_F6_t,
        Key_562_F7_t,
        Key_562_F8_t,
        Key_562_F9_t,
        Key_562_F10_t,
        Key_562_F11_t,
        Key_562_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_562_Char_s;
        struct {
            char  field0;
        } Key_562_Ctrl_s;
    } stuff;
};

static struct Key_562 Key_562_Char (  char  field0 ) {
    return ( struct Key_562 ) { .tag = Key_562_Char_t, .stuff = { .Key_562_Char_s = { .field0 = field0 } } };
};

static struct Key_562 Key_562_Ctrl (  char  field0 ) {
    return ( struct Key_562 ) { .tag = Key_562_Ctrl_t, .stuff = { .Key_562_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_563 {
    enum MouseButton_147  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_561 {
    enum {
        InputEvent_561_Key_t,
        InputEvent_561_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_562  field0;
        } InputEvent_561_Key_s;
        struct {
            struct MouseEvent_563  field0;
        } InputEvent_561_Mouse_s;
    } stuff;
};

static struct InputEvent_561 InputEvent_561_Key (  struct Key_562  field0 ) {
    return ( struct InputEvent_561 ) { .tag = InputEvent_561_Key_t, .stuff = { .InputEvent_561_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_561 InputEvent_561_Mouse (  struct MouseEvent_563  field0 ) {
    return ( struct InputEvent_561 ) { .tag = InputEvent_561_Mouse_t, .stuff = { .InputEvent_561_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_560 {
    enum {
        Maybe_560_None_t,
        Maybe_560_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_561  field0;
        } Maybe_560_Just_s;
    } stuff;
};

static struct Maybe_560 Maybe_560_Just (  struct InputEvent_561  field0 ) {
    return ( struct Maybe_560 ) { .tag = Maybe_560_Just_t, .stuff = { .Maybe_560_Just_s = { .field0 = field0 } } };
};

struct FunIter_559 {
    struct Maybe_560 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_559   into_dash_iter558 (    struct FunIter_559  self808 ) {
    return (  self808 );
}

static  struct Maybe_560   next564 (    struct FunIter_559 *  self811 ) {
    if ( ( ( * (  self811 ) ) .f_finished ) ) {
        return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
    }
    struct Maybe_560  dref812 = ( ( ( * (  self811 ) ) .f_fun ) ( ) );
    if ( dref812.tag == Maybe_560_Just_t ) {
        return ( ( Maybe_560_Just ) ( ( dref812 .stuff .Maybe_560_Just_s .field0 ) ) );
    }
    else if ( dref812.tag == Maybe_560_None_t ) {
        (*  self811 ) .f_finished = ( true );
        return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
    }
}

static  struct FunIter_559   from_dash_function565 (    struct Maybe_560 (*  fun816 )(  ) ) {
    return ( (struct FunIter_559) { .f_fun = (  fun816 ) , .f_finished = ( false ) } );
}

struct env567 {
    ;
    ;
    struct Slice_299  new_dash_slice1822;
};

struct funenv567 {
    enum Unit_13  (*fun) (  struct env567  ,    struct Tuple2_364  );
    struct env567 env;
};

static  enum Unit_13   for_dash_each566 (    struct Zip_357  iterable819 ,   struct funenv567  fun821 ) {
    struct Zip_357  temp568 = ( (  into_dash_iter373 ) ( (  iterable819 ) ) );
    struct Zip_357 *  it822 = ( &temp568 );
    while ( ( true ) ) {
        struct Maybe_363  dref823 = ( (  next365 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_363_Just_t ) {
            struct funenv567  temp569 = (  fun821 );
            ( temp569.fun ( temp569.env ,  ( dref823 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env573 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

struct funenv573 {
    enum Unit_13  (*fun) (  struct env573  ,    struct List_300 *  );
    struct env573 env;
};

struct env572 {
    ;
    struct env573 envinst573;
    ;
    ;
    ;
    ;
};

struct funenv572 {
    enum Unit_13  (*fun) (  struct env572  ,    struct List_300 *  ,    struct List_3  );
    struct env572 env;
};

struct env571 {
    struct List_300 *  list1869;
    struct env572 envinst572;
};

struct funenv571 {
    enum Unit_13  (*fun) (  struct env571  ,    struct List_3  );
    struct env571 env;
};

static  enum Unit_13   for_dash_each570 (    struct Map_318  iterable819 ,   struct funenv571  fun821 ) {
    struct Map_318  temp574 = ( (  into_dash_iter317 ) ( (  iterable819 ) ) );
    struct Map_318 *  it822 = ( &temp574 );
    while ( ( true ) ) {
        struct Maybe_332  dref823 = ( (  next331 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_332_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_332_Just_t ) {
            struct funenv571  temp575 = (  fun821 );
            ( temp575.fun ( temp575.env ,  ( dref823 .stuff .Maybe_332_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env577 {
    struct List_3 *  list1869;
    struct env323 envinst323;
};

struct funenv577 {
    enum Unit_13  (*fun) (  struct env577  ,    char  );
    struct env577 env;
};

static  enum Unit_13   for_dash_each576 (    struct DynStr_136  iterable819 ,   struct funenv577  fun821 ) {
    struct SliceIter_307  temp578 = ( (  into_dash_iter551 ) ( (  iterable819 ) ) );
    struct SliceIter_307 *  it822 = ( &temp578 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next348 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv577  temp579 = (  fun821 );
            ( temp579.fun ( temp579.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env581 {
    ;
    ;
    struct Slice_5  new_dash_slice1822;
};

struct funenv581 {
    enum Unit_13  (*fun) (  struct env581  ,    struct Tuple2_370  );
    struct env581 env;
};

static  enum Unit_13   for_dash_each580 (    struct Zip_361  iterable819 ,   struct funenv581  fun821 ) {
    struct Zip_361  temp582 = ( (  into_dash_iter375 ) ( (  iterable819 ) ) );
    struct Zip_361 *  it822 = ( &temp582 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv581  temp583 = (  fun821 );
            ( temp583.fun ( temp583.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_586 {
    struct List_3  f_chars;
};

struct env585 {
    struct StrBuilder_586 *  builder2108;
    struct env323 envinst323;
};

struct funenv585 {
    enum Unit_13  (*fun) (  struct env585  ,    char  );
    struct env585 env;
};

static  struct ConstStrIter_327   into_dash_iter588 (    struct ConstStrIter_327  self1070 ) {
    return (  self1070 );
}

static  enum Unit_13   for_dash_each584 (    struct ConstStrIter_327  iterable819 ,   struct funenv585  fun821 ) {
    struct ConstStrIter_327  temp587 = ( (  into_dash_iter588 ) ( (  iterable819 ) ) );
    struct ConstStrIter_327 *  it822 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next344 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv585  temp589 = (  fun821 );
            ( temp589.fun ( temp589.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_592 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env591 {
    ;
    struct Slice_592  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv591 {
    enum Unit_13  (*fun) (  struct env591  ,    int32_t  );
    struct env591 env;
};

static  enum Unit_13   for_dash_each590 (    struct Range_378  iterable819 ,   struct funenv591  fun821 ) {
    struct RangeIter_380  temp593 = ( (  into_dash_iter379 ) ( (  iterable819 ) ) );
    struct RangeIter_380 *  it822 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_346  dref823 = ( (  next381 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_346_Just_t ) {
            struct funenv591  temp594 = (  fun821 );
            ( temp594.fun ( temp594.env ,  ( dref823 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env596 {
    ;
    struct Slice_592  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv596 {
    enum Unit_13  (*fun) (  struct env596  ,    int32_t  );
    struct env596 env;
};

static  enum Unit_13   for_dash_each595 (    struct Range_378  iterable819 ,   struct funenv596  fun821 ) {
    struct RangeIter_380  temp597 = ( (  into_dash_iter379 ) ( (  iterable819 ) ) );
    struct RangeIter_380 *  it822 = ( &temp597 );
    while ( ( true ) ) {
        struct Maybe_346  dref823 = ( (  next381 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_346_Just_t ) {
            struct funenv596  temp598 = (  fun821 );
            ( temp598.fun ( temp598.env ,  ( dref823 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env600 {
    ;
    struct Scanner_306 *  it925;
};

struct funenv600 {
    struct Maybe_49  (*fun) (  struct env600  ,    int32_t  );
    struct env600 env;
};

static  enum Unit_13   for_dash_each599 (    struct Range_378  iterable819 ,   struct funenv600  fun821 ) {
    struct RangeIter_380  temp601 = ( (  into_dash_iter379 ) ( (  iterable819 ) ) );
    struct RangeIter_380 *  it822 = ( &temp601 );
    while ( ( true ) ) {
        struct Maybe_346  dref823 = ( (  next381 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_346_Just_t ) {
            struct funenv600  temp602 = (  fun821 );
            ( temp602.fun ( temp602.env ,  ( dref823 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env604 {
    struct Slice_299  dest1488;
    ;
    ;
};

struct funenv604 {
    enum Unit_13  (*fun) (  struct env604  ,    struct Tuple2_364  );
    struct env604 env;
};

static  enum Unit_13   for_dash_each603 (    struct Zip_357  iterable819 ,   struct funenv604  fun821 ) {
    struct Zip_357  temp605 = ( (  into_dash_iter373 ) ( (  iterable819 ) ) );
    struct Zip_357 *  it822 = ( &temp605 );
    while ( ( true ) ) {
        struct Maybe_363  dref823 = ( (  next365 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_363_Just_t ) {
            struct funenv604  temp606 = (  fun821 );
            ( temp606.fun ( temp606.env ,  ( dref823 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env608 {
    ;
    struct List_300 *  list1841;
    ;
    ;
    ;
};

struct funenv608 {
    enum Unit_13  (*fun) (  struct env608  ,    struct Tuple2_364  );
    struct env608 env;
};

static  enum Unit_13   for_dash_each607 (    struct Drop_356  iterable819 ,   struct funenv608  fun821 ) {
    struct Drop_356  temp609 = ( (  into_dash_iter355 ) ( (  iterable819 ) ) );
    struct Drop_356 *  it822 = ( &temp609 );
    while ( ( true ) ) {
        struct Maybe_363  dref823 = ( (  next362 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_363_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_363_Just_t ) {
            struct funenv608  temp610 = (  fun821 );
            ( temp610.fun ( temp610.env ,  ( dref823 .stuff .Maybe_363_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env612 {
    struct List_3 *  list1869;
    struct env323 envinst323;
};

struct funenv612 {
    enum Unit_13  (*fun) (  struct env612  ,    char  );
    struct env612 env;
};

static  enum Unit_13   for_dash_each611 (    struct Slice_5  iterable819 ,   struct funenv612  fun821 ) {
    struct SliceIter_307  temp613 = ( (  into_dash_iter311 ) ( (  iterable819 ) ) );
    struct SliceIter_307 *  it822 = ( &temp613 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next348 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv612  temp614 = (  fun821 );
            ( temp614.fun ( temp614.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env616 {
    struct List_3 *  list1869;
    struct env323 envinst323;
};

struct funenv616 {
    enum Unit_13  (*fun) (  struct env616  ,    char  );
    struct env616 env;
};

static  enum Unit_13   for_dash_each615 (    struct List_3 *  iterable819 ,   struct funenv616  fun821 ) {
    struct SliceIter_307  temp617 = ( (  into_dash_iter309 ) ( (  iterable819 ) ) );
    struct SliceIter_307 *  it822 = ( &temp617 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next348 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv616  temp618 = (  fun821 );
            ( temp618.fun ( temp618.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env620 {
    struct Slice_5  dest1488;
    ;
    ;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    struct Tuple2_370  );
    struct env620 env;
};

static  enum Unit_13   for_dash_each619 (    struct Zip_361  iterable819 ,   struct funenv620  fun821 ) {
    struct Zip_361  temp621 = ( (  into_dash_iter375 ) ( (  iterable819 ) ) );
    struct Zip_361 *  it822 = ( &temp621 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv620  temp622 = (  fun821 );
            ( temp622.fun ( temp622.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env624 {
    ;
    struct List_3 *  list1841;
    ;
    ;
    ;
};

struct funenv624 {
    enum Unit_13  (*fun) (  struct env624  ,    struct Tuple2_370  );
    struct env624 env;
};

static  enum Unit_13   for_dash_each623 (    struct Drop_360  iterable819 ,   struct funenv624  fun821 ) {
    struct Drop_360  temp625 = ( (  into_dash_iter359 ) ( (  iterable819 ) ) );
    struct Drop_360 *  it822 = ( &temp625 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next368 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv624  temp626 = (  fun821 );
            ( temp626.fun ( temp626.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env628 {
    ;
    ;
    struct Slice_387  new_dash_slice1822;
};

struct funenv628 {
    enum Unit_13  (*fun) (  struct env628  ,    struct Tuple2_436  );
    struct env628 env;
};

static  enum Unit_13   for_dash_each627 (    struct Zip_385  iterable819 ,   struct funenv628  fun821 ) {
    struct Zip_385  temp629 = ( (  into_dash_iter384 ) ( (  iterable819 ) ) );
    struct Zip_385 *  it822 = ( &temp629 );
    while ( ( true ) ) {
        struct Maybe_435  dref823 = ( (  next434 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_435_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_435_Just_t ) {
            struct funenv628  temp630 = (  fun821 );
            ( temp630.fun ( temp630.env ,  ( dref823 .stuff .Maybe_435_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env632 {
    struct StrBuilder_586 *  builder2108;
    struct env323 envinst323;
};

struct funenv632 {
    enum Unit_13  (*fun) (  struct env632  ,    char  );
    struct env632 env;
};

static  enum Unit_13   for_dash_each631 (    struct AppendIter_399  iterable819 ,   struct funenv632  fun821 ) {
    struct AppendIter_399  temp633 = ( (  into_dash_iter557 ) ( (  iterable819 ) ) );
    struct AppendIter_399 *  it822 = ( &temp633 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next454 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv632  temp634 = (  fun821 );
            ( temp634.fun ( temp634.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env636 {
    struct List_3 *  list1869;
    struct env323 envinst323;
};

struct funenv636 {
    enum Unit_13  (*fun) (  struct env636  ,    char  );
    struct env636 env;
};

static  enum Unit_13   for_dash_each635 (    struct TakeWhile_520  iterable819 ,   struct funenv636  fun821 ) {
    struct TakeWhile_520  temp637 = ( (  into_dash_iter519 ) ( (  iterable819 ) ) );
    struct TakeWhile_520 *  it822 = ( &temp637 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next532 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv636  temp638 = (  fun821 );
            ( temp638.fun ( temp638.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env641 {
    ;
    struct env323 envinst323;
    ;
};

struct funenv641 {
    enum Unit_13  (*fun) (  struct env641  ,    struct StrBuilder_586 *  ,    char  );
    struct env641 env;
};

struct env640 {
    struct env641 envinst641;
    struct StrBuilder_586 *  sb3139;
};

struct funenv640 {
    enum Unit_13  (*fun) (  struct env640  ,    char  );
    struct env640 env;
};

static  enum Unit_13   for_dash_each639 (    struct List_3  iterable819 ,   struct funenv640  fun821 ) {
    struct SliceIter_307  temp642 = ( (  into_dash_iter310 ) ( (  iterable819 ) ) );
    struct SliceIter_307 *  it822 = ( &temp642 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next348 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv640  temp643 = (  fun821 );
            ( temp643.fun ( temp643.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env645 {
    struct StrBuilder_586 *  builder2108;
    struct env323 envinst323;
};

struct funenv645 {
    enum Unit_13  (*fun) (  struct env645  ,    char  );
    struct env645 env;
};

static  enum Unit_13   for_dash_each644 (    struct TakeWhile_522  iterable819 ,   struct funenv645  fun821 ) {
    struct TakeWhile_522  temp646 = ( (  into_dash_iter521 ) ( (  iterable819 ) ) );
    struct TakeWhile_522 *  it822 = ( &temp646 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next533 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv645  temp647 = (  fun821 );
            ( temp647.fun ( temp647.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env649 {
    struct StrBuilder_586 *  builder2108;
    struct env323 envinst323;
};

struct funenv649 {
    enum Unit_13  (*fun) (  struct env649  ,    char  );
    struct env649 env;
};

static  enum Unit_13   for_dash_each648 (    struct TakeWhile_527  iterable819 ,   struct funenv649  fun821 ) {
    struct TakeWhile_527  temp650 = ( (  into_dash_iter526 ) ( (  iterable819 ) ) );
    struct TakeWhile_527 *  it822 = ( &temp650 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next537 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv649  temp651 = (  fun821 );
            ( temp651.fun ( temp651.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_653 {
    struct Slice_299  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_653   into_dash_iter655 (    struct SliceAddressIter_653  self1478 ) {
    return (  self1478 );
}

struct Maybe_656 {
    enum {
        Maybe_656_None_t,
        Maybe_656_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_656_Just_s;
    } stuff;
};

static struct Maybe_656 Maybe_656_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_656 ) { .tag = Maybe_656_Just_t, .stuff = { .Maybe_656_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_656   next657 (    struct SliceAddressIter_653 *  self1481 ) {
    size_t  off1482 = ( ( * (  self1481 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1481 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_656) { .tag = Maybe_656_None_t } );
    }
    struct List_3 *  elem1483 = ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1481 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1482 ) ) ) ) );
    (*  self1481 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_656_Just ) ( (  elem1483 ) ) );
}

static  enum Unit_13   for_dash_each652 (    struct SliceAddressIter_653  iterable819 ,    enum Unit_13 (*  fun821 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_653  temp654 = ( (  into_dash_iter655 ) ( (  iterable819 ) ) );
    struct SliceAddressIter_653 *  it822 = ( &temp654 );
    while ( ( true ) ) {
        struct Maybe_656  dref823 = ( (  next657 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_656_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_656_Just_t ) {
            ( (  fun821 ) ( ( dref823 .stuff .Maybe_656_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env659 {
    ;
    struct Slice_592  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv659 {
    enum Unit_13  (*fun) (  struct env659  ,    int32_t  );
    struct env659 env;
};

static  enum Unit_13   for_dash_each658 (    struct Range_378  iterable819 ,   struct funenv659  fun821 ) {
    struct RangeIter_380  temp660 = ( (  into_dash_iter379 ) ( (  iterable819 ) ) );
    struct RangeIter_380 *  it822 = ( &temp660 );
    while ( ( true ) ) {
        struct Maybe_346  dref823 = ( (  next381 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_346_Just_t ) {
            struct funenv659  temp661 = (  fun821 );
            ( temp661.fun ( temp661.env ,  ( dref823 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_666 {
    ColorPalette_666_Palette8,
    ColorPalette_666_Palette16,
    ColorPalette_666_Palette256,
    ColorPalette_666_PaletteRGB,
};

struct Tui_665 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_666  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_141  f_orig_dash_termios;
};

struct Screen_664 {
    enum CAllocator_4  f_al;
    struct Tui_665 *  f_tui;
    struct Slice_592  f_current;
    struct Slice_592  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_59  f_default_dash_fg;
    struct Color_59  f_default_dash_bg;
};

struct env663 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv663 {
    enum Unit_13  (*fun) (  struct env663  ,    struct Tuple2_370  );
    struct env663 env;
};

static  enum Unit_13   for_dash_each662 (    struct Zip_391  iterable819 ,   struct funenv663  fun821 ) {
    struct Zip_391  temp667 = ( (  into_dash_iter390 ) ( (  iterable819 ) ) );
    struct Zip_391 *  it822 = ( &temp667 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next442 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv663  temp668 = (  fun821 );
            ( temp668.fun ( temp668.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env670 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv670 {
    enum Unit_13  (*fun) (  struct env670  ,    struct Tuple2_370  );
    struct env670 env;
};

static  enum Unit_13   for_dash_each669 (    struct Zip_394  iterable819 ,   struct funenv670  fun821 ) {
    struct Zip_394  temp671 = ( (  into_dash_iter393 ) ( (  iterable819 ) ) );
    struct Zip_394 *  it822 = ( &temp671 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next449 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv670  temp672 = (  fun821 );
            ( temp672.fun ( temp672.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env674 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv674 {
    enum Unit_13  (*fun) (  struct env674  ,    struct Tuple2_370  );
    struct env674 env;
};

static  enum Unit_13   for_dash_each673 (    struct Zip_401  iterable819 ,   struct funenv674  fun821 ) {
    struct Zip_401  temp675 = ( (  into_dash_iter400 ) ( (  iterable819 ) ) );
    struct Zip_401 *  it822 = ( &temp675 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next455 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv674  temp676 = (  fun821 );
            ( temp676.fun ( temp676.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env678 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv678 {
    enum Unit_13  (*fun) (  struct env678  ,    struct Tuple2_370  );
    struct env678 env;
};

static  enum Unit_13   for_dash_each677 (    struct Zip_405  iterable819 ,   struct funenv678  fun821 ) {
    struct Zip_405  temp679 = ( (  into_dash_iter404 ) ( (  iterable819 ) ) );
    struct Zip_405 *  it822 = ( &temp679 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next463 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv678  temp680 = (  fun821 );
            ( temp680.fun ( temp680.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env682 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv682 {
    enum Unit_13  (*fun) (  struct env682  ,    struct Tuple2_370  );
    struct env682 env;
};

static  enum Unit_13   for_dash_each681 (    struct Zip_415  iterable819 ,   struct funenv682  fun821 ) {
    struct Zip_415  temp683 = ( (  into_dash_iter414 ) ( (  iterable819 ) ) );
    struct Zip_415 *  it822 = ( &temp683 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next472 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv682  temp684 = (  fun821 );
            ( temp684.fun ( temp684.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env686 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv686 {
    enum Unit_13  (*fun) (  struct env686  ,    struct Tuple2_370  );
    struct env686 env;
};

static  enum Unit_13   for_dash_each685 (    struct Zip_420  iterable819 ,   struct funenv686  fun821 ) {
    struct Zip_420  temp687 = ( (  into_dash_iter419 ) ( (  iterable819 ) ) );
    struct Zip_420 *  it822 = ( &temp687 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next476 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv686  temp688 = (  fun821 );
            ( temp688.fun ( temp688.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env690 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv690 {
    enum Unit_13  (*fun) (  struct env690  ,    struct Tuple2_370  );
    struct env690 env;
};

static  enum Unit_13   for_dash_each689 (    struct Zip_424  iterable819 ,   struct funenv690  fun821 ) {
    struct Zip_424  temp691 = ( (  into_dash_iter423 ) ( (  iterable819 ) ) );
    struct Zip_424 *  it822 = ( &temp691 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next484 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv690  temp692 = (  fun821 );
            ( temp692.fun ( temp692.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env694 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv694 {
    enum Unit_13  (*fun) (  struct env694  ,    struct Tuple2_370  );
    struct env694 env;
};

static  enum Unit_13   for_dash_each693 (    struct Zip_426  iterable819 ,   struct funenv694  fun821 ) {
    struct Zip_426  temp695 = ( (  into_dash_iter425 ) ( (  iterable819 ) ) );
    struct Zip_426 *  it822 = ( &temp695 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next485 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv694  temp696 = (  fun821 );
            ( temp696.fun ( temp696.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env698 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv698 {
    enum Unit_13  (*fun) (  struct env698  ,    struct Tuple2_370  );
    struct env698 env;
};

static  enum Unit_13   for_dash_each697 (    struct Zip_394  iterable819 ,   struct funenv698  fun821 ) {
    struct Zip_394  temp699 = ( (  into_dash_iter393 ) ( (  iterable819 ) ) );
    struct Zip_394 *  it822 = ( &temp699 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next449 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv698  temp700 = (  fun821 );
            ( temp700.fun ( temp700.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env702 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv702 {
    enum Unit_13  (*fun) (  struct env702  ,    struct Tuple2_370  );
    struct env702 env;
};

static  enum Unit_13   for_dash_each701 (    struct Zip_394  iterable819 ,   struct funenv702  fun821 ) {
    struct Zip_394  temp703 = ( (  into_dash_iter393 ) ( (  iterable819 ) ) );
    struct Zip_394 *  it822 = ( &temp703 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next449 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv702  temp704 = (  fun821 );
            ( temp704.fun ( temp704.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env706 {
    ;
    int32_t  y2635;
    struct Screen_664 *  screen2629;
    int32_t  x2638;
    ;
};

struct funenv706 {
    enum Unit_13  (*fun) (  struct env706  ,    struct Tuple2_370  );
    struct env706 env;
};

static  enum Unit_13   for_dash_each705 (    struct Zip_430  iterable819 ,   struct funenv706  fun821 ) {
    struct Zip_430  temp707 = ( (  into_dash_iter429 ) ( (  iterable819 ) ) );
    struct Zip_430 *  it822 = ( &temp707 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next488 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv706  temp708 = (  fun821 );
            ( temp708.fun ( temp708.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_710 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_710   into_dash_iter711 (    struct SmolArray_103  self1666 ) {
    return ( (struct SmolArrayIter_710) { .f_backing = (  self1666 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_717 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_717 StrConcat_717_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_717 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_716 {
    struct StrConcat_717  field0;
    char  field1;
};

static struct StrConcat_716 StrConcat_716_StrConcat (  struct StrConcat_717  field0 ,  char  field1 ) {
    return ( struct StrConcat_716 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_720 {
    const char*  field0;
    struct StrConcat_716  field1;
};

static struct StrConcat_720 StrConcat_720_StrConcat (  const char*  field0 ,  struct StrConcat_716  field1 ) {
    return ( struct StrConcat_720 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_719 {
    struct StrConcat_720  field0;
    char  field1;
};

static struct StrConcat_719 StrConcat_719_StrConcat (  struct StrConcat_720  field0 ,  char  field1 ) {
    return ( struct StrConcat_719 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str724 (    int32_t  self1106 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1106 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str723 (    struct StrConcat_717  self1169 ) {
    struct StrConcat_717  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str724 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str722 (    struct StrConcat_716  self1169 ) {
    struct StrConcat_716  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str723 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str721 (    struct StrConcat_720  self1169 ) {
    struct StrConcat_720  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str722 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str718 (    struct StrConcat_719  self1169 ) {
    struct StrConcat_719  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str721 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic715 (    struct StrConcat_716  errmsg1346 ) {
    ( (  print_dash_str718 ) ( ( ( StrConcat_719_StrConcat ) ( ( ( StrConcat_720_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr714 (    struct Array_104 *  arr1628 ,    size_t  i1631 ) {
    if ( ( (  cmp9 ( (  i1631 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1631 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic715 ) ( ( ( StrConcat_716_StrConcat ) ( ( ( StrConcat_717_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1631 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1632 = ( ( (  cast_dash_ptr221 ) ( (  arr1628 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1632 ) ,  ( (int64_t ) (  i1631 ) ) ) );
}

static  uint32_t   get713 (    struct Array_104 *  arr1635 ,    size_t  i1638 ) {
    return ( * ( (  get_dash_ptr714 ) ( (  arr1635 ) ,  (  i1638 ) ) ) );
}

static  struct Maybe_343   next712 (    struct SmolArrayIter_710 *  self1673 ) {
    if ( (  cmp9 ( ( ( * (  self1673 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_343) { .tag = Maybe_343_None_t } );
    }
    uint32_t  e1675 = ( (  get713 ) ( ( & ( ( ( * (  self1673 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1673 ) ) .f_cur ) ) );
    (*  self1673 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1673 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_343_Just ) ( (  e1675 ) ) );
}

static  uint32_t   reduce709 (    struct SmolArray_103  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_710  it844 = ( (  into_dash_iter711 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_343  dref845 = ( (  next712 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_343_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_343_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_343_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp725;
    return (  temp725 );
}

struct SmolArrayIter_727 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_727   into_dash_iter728 (    struct SmolArray_106  self1666 ) {
    return ( (struct SmolArrayIter_727) { .f_backing = (  self1666 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr731 (    struct Array_107 *  arr1628 ,    size_t  i1631 ) {
    if ( ( (  cmp9 ( (  i1631 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1631 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic715 ) ( ( ( StrConcat_716_StrConcat ) ( ( ( StrConcat_717_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1631 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1632 = ( ( (  cast_dash_ptr222 ) ( (  arr1628 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1632 ) ,  ( (int64_t ) (  i1631 ) ) ) );
}

static  uint32_t   get730 (    struct Array_107 *  arr1635 ,    size_t  i1638 ) {
    return ( * ( (  get_dash_ptr731 ) ( (  arr1635 ) ,  (  i1638 ) ) ) );
}

static  struct Maybe_343   next729 (    struct SmolArrayIter_727 *  self1673 ) {
    if ( (  cmp9 ( ( ( * (  self1673 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_343) { .tag = Maybe_343_None_t } );
    }
    uint32_t  e1675 = ( (  get730 ) ( ( & ( ( ( * (  self1673 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1673 ) ) .f_cur ) ) );
    (*  self1673 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1673 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_343_Just ) ( (  e1675 ) ) );
}

static  uint32_t   reduce726 (    struct SmolArray_106  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_727  it844 = ( (  into_dash_iter728 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_343  dref845 = ( (  next729 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_343_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_343_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_343_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp732;
    return (  temp732 );
}

struct SmolArrayIter_734 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_734   into_dash_iter735 (    struct SmolArray_109  self1666 ) {
    return ( (struct SmolArrayIter_734) { .f_backing = (  self1666 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr738 (    struct Array_110 *  arr1628 ,    size_t  i1631 ) {
    if ( ( (  cmp9 ( (  i1631 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1631 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic715 ) ( ( ( StrConcat_716_StrConcat ) ( ( ( StrConcat_717_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1631 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1632 = ( ( (  cast_dash_ptr223 ) ( (  arr1628 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1632 ) ,  ( (int64_t ) (  i1631 ) ) ) );
}

static  uint32_t   get737 (    struct Array_110 *  arr1635 ,    size_t  i1638 ) {
    return ( * ( (  get_dash_ptr738 ) ( (  arr1635 ) ,  (  i1638 ) ) ) );
}

static  struct Maybe_343   next736 (    struct SmolArrayIter_734 *  self1673 ) {
    if ( (  cmp9 ( ( ( * (  self1673 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_343) { .tag = Maybe_343_None_t } );
    }
    uint32_t  e1675 = ( (  get737 ) ( ( & ( ( ( * (  self1673 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1673 ) ) .f_cur ) ) );
    (*  self1673 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1673 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_343_Just ) ( (  e1675 ) ) );
}

static  uint32_t   reduce733 (    struct SmolArray_109  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_734  it844 = ( (  into_dash_iter735 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_343  dref845 = ( (  next736 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_343_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_343_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_343_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp739;
    return (  temp739 );
}

struct Maybe_741 {
    enum {
        Maybe_741_None_t,
        Maybe_741_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_741_Just_s;
    } stuff;
};

static struct Maybe_741 Maybe_741_Just (  int64_t  field0 ) {
    return ( struct Maybe_741 ) { .tag = Maybe_741_Just_t, .stuff = { .Maybe_741_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_741   reduce740 (    struct TakeWhile_518  iterable838 ,    struct Maybe_741  base840 ,    struct Maybe_741 (*  fun842 )(    char  ,    struct Maybe_741  ) ) {
    struct Maybe_741  x843 = (  base840 );
    struct TakeWhile_518  it844 = ( (  into_dash_iter517 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next530 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_741  temp742;
    return (  temp742 );
}

static  size_t   reduce743 (    struct TakeWhile_518  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_518  it844 = ( (  into_dash_iter517 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next530 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp744;
    return (  temp744 );
}

static  uint32_t   reduce745 (    struct Map_326  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct Map_326  it844 = ( (  into_dash_iter325 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_343  dref845 = ( (  next342 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_343_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_343_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_343_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp746;
    return (  temp746 );
}

static  int32_t   reduce747 (    struct Map_329  iterable838 ,    int32_t  base840 ,    int32_t (*  fun842 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x843 = (  base840 );
    struct Map_329  it844 = ( (  into_dash_iter328 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_346  dref845 = ( (  next345 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_346_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_346_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_346_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp748;
    return (  temp748 );
}

static  size_t   reduce749 (    struct TakeWhile_520  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_520  it844 = ( (  into_dash_iter519 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next532 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp750;
    return (  temp750 );
}

struct env752 {
    bool (*  fun871 )(    struct Tuple2_441  );
};

struct funenv752 {
    bool  (*fun) (  struct env752  ,    struct Tuple2_441  ,    bool  );
    struct env752 env;
};

static  bool   reduce751 (    struct Zip_389  iterable838 ,    bool  base840 ,   struct funenv752  fun842 ) {
    bool  x843 = (  base840 );
    struct Zip_389  it844 = ( (  into_dash_iter388 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_440  dref845 = ( (  next439 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_440_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_440_Just_t ) {
            struct funenv752  temp753 = (  fun842 );
            x843 = ( temp753.fun ( temp753.env ,  ( dref845 .stuff .Maybe_440_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    bool  temp754;
    return (  temp754 );
}

static  struct Maybe_741   reduce755 (    struct TakeWhile_529  iterable838 ,    struct Maybe_741  base840 ,    struct Maybe_741 (*  fun842 )(    char  ,    struct Maybe_741  ) ) {
    struct Maybe_741  x843 = (  base840 );
    struct TakeWhile_529  it844 = ( (  into_dash_iter528 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next538 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_741  temp756;
    return (  temp756 );
}

static  size_t   reduce757 (    struct IntStrIter_392  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct IntStrIter_392  it844 = ( (  into_dash_iter500 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next443 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp758;
    return (  temp758 );
}

static  size_t   reduce759 (    struct StrConcatIter_395  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_395  it844 = ( (  into_dash_iter502 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next450 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp760;
    return (  temp760 );
}

static  size_t   reduce761 (    struct StrConcatIter_402  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_402  it844 = ( (  into_dash_iter504 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next456 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp762;
    return (  temp762 );
}

static  size_t   reduce763 (    struct StrConcatIter_406  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_406  it844 = ( (  into_dash_iter506 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next464 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp764;
    return (  temp764 );
}

static  size_t   reduce765 (    struct StrConcatIter_416  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_416  it844 = ( (  into_dash_iter508 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next473 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp766;
    return (  temp766 );
}

static  size_t   reduce767 (    struct StrConcatIter_421  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_421  it844 = ( (  into_dash_iter510 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next477 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp768;
    return (  temp768 );
}

static  size_t   reduce769 (    struct StrConcatIter_418  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_418  it844 = ( (  into_dash_iter512 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next475 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp770;
    return (  temp770 );
}

static  size_t   reduce771 (    struct StrConcatIter_427  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_427  it844 = ( (  into_dash_iter514 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next486 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp772;
    return (  temp772 );
}

static  size_t   reduce773 (    struct StrConcatIter_431  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_431  it844 = ( (  into_dash_iter516 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next489 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp774;
    return (  temp774 );
}

static  size_t   lam776 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count775 (    struct TakeWhile_518  it849 ) {
    return ( (  reduce743 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam776 ) ) );
}

static  size_t   lam778 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count777 (    struct TakeWhile_520  it849 ) {
    return ( (  reduce749 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam778 ) ) );
}

static  size_t   lam780 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count779 (    struct IntStrIter_392  it849 ) {
    return ( (  reduce757 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam780 ) ) );
}

static  size_t   lam782 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count781 (    struct StrConcatIter_395  it849 ) {
    return ( (  reduce759 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam782 ) ) );
}

static  size_t   lam784 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count783 (    struct StrConcatIter_402  it849 ) {
    return ( (  reduce761 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam784 ) ) );
}

static  size_t   lam786 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count785 (    struct StrConcatIter_406  it849 ) {
    return ( (  reduce763 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam786 ) ) );
}

static  size_t   lam788 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count787 (    struct StrConcatIter_416  it849 ) {
    return ( (  reduce765 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam788 ) ) );
}

static  size_t   lam790 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count789 (    struct StrConcatIter_421  it849 ) {
    return ( (  reduce767 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam790 ) ) );
}

static  size_t   lam792 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count791 (    struct StrConcatIter_418  it849 ) {
    return ( (  reduce769 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam792 ) ) );
}

static  size_t   lam794 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count793 (    struct StrConcatIter_427  it849 ) {
    return ( (  reduce771 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam794 ) ) );
}

static  size_t   lam796 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count795 (    struct StrConcatIter_431  it849 ) {
    return ( (  reduce773 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam796 ) ) );
}

static  int32_t   lam798 (    int32_t  v857 ,    int32_t  s859 ) {
    return (  op_dash_add87 ( (  v857 ) , (  s859 ) ) );
}

static  int32_t   sum797 (    struct Map_329  it855 ) {
    return ( (  reduce747 ) ( (  it855 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam798 ) ) );
}

static  bool   lam752 (   struct env752 env ,    struct Tuple2_441  e873 ,    bool  x875 ) {
    return ( ( ( env.fun871 ) ( (  e873 ) ) ) && (  x875 ) );
}

static  bool   all799 (    struct Zip_389  it869 ,    bool (*  fun871 )(    struct Tuple2_441  ) ) {
    struct env752 envinst752 = {
        .fun871 =  fun871 ,
    };
    return ( (  reduce751 ) ( (  it869 ) ,  ( true ) ,  ( (struct funenv752){ .fun = lam752, .env = envinst752 } ) ) );
}

static  struct Maybe_332   head800 (    struct List_300 *  it887 ) {
    struct SliceIter_298  temp801 = ( (  into_dash_iter297 ) ( (  it887 ) ) );
    return ( (  next366 ) ( ( &temp801 ) ) );
}

static  struct Maybe_49   head802 (    struct TakeWhile_518  it887 ) {
    struct TakeWhile_518  temp803 = ( (  into_dash_iter517 ) ( (  it887 ) ) );
    return ( (  next530 ) ( ( &temp803 ) ) );
}

static  struct Maybe_49   head804 (    struct TakeWhile_522  it887 ) {
    struct TakeWhile_522  temp805 = ( (  into_dash_iter521 ) ( (  it887 ) ) );
    return ( (  next533 ) ( ( &temp805 ) ) );
}

static  struct Maybe_49   head806 (    struct TakeWhile_529  it887 ) {
    struct TakeWhile_529  temp807 = ( (  into_dash_iter528 ) ( (  it887 ) ) );
    return ( (  next538 ) ( ( &temp807 ) ) );
}

static  bool   null808 (    struct List_300 *  it890 ) {
    struct Maybe_332  dref891 = ( (  head800 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_332_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null809 (    struct TakeWhile_518  it890 ) {
    struct Maybe_49  dref891 = ( (  head802 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null810 (    struct TakeWhile_522  it890 ) {
    struct Maybe_49  dref891 = ( (  head804 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam600 (   struct env600 env ,    int32_t  dref928 ) {
    return ( (  next531 ) ( ( env.it925 ) ) );
}

static  enum Unit_13   drop_prime_811 (    struct Scanner_306 *  it925 ,    size_t  n927 ) {
    struct env600 envinst600 = {
        .it925 =  it925 ,
    };
    ( (  for_dash_each599 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32290 ) ( (  n927 ) ) ) ) ) ,  ( (struct funenv600){ .fun = lam600, .env = envinst600 } ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_813 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_813 Tuple2_813_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_813 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst812 (    struct Tuple2_813  dref989 ) {
    return ( dref989 .field0 );
}

static  uint32_t   snd814 (    struct Tuple2_813  dref992 ) {
    return ( dref992 .field1 );
}

struct Maybe_816 {
    enum {
        Maybe_816_None_t,
        Maybe_816_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_169  field0;
        } Maybe_816_Just_s;
    } stuff;
};

static struct Maybe_816 Maybe_816_Just (  struct Cursor_169  field0 ) {
    return ( struct Maybe_816 ) { .tag = Maybe_816_Just_t, .stuff = { .Maybe_816_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just815 (    struct Maybe_816  m996 ) {
    struct Maybe_816  dref997 = (  m996 );
    if ( dref997.tag == Maybe_816_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_816_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just817 (    struct Maybe_333  m996 ) {
    struct Maybe_333  dref997 = (  m996 );
    if ( dref997.tag == Maybe_333_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_333_Just_t ) {
        return ( true );
    }
}

struct Maybe_819 {
    enum {
        Maybe_819_None_t,
        Maybe_819_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_586  field0;
        } Maybe_819_Just_s;
    } stuff;
};

static struct Maybe_819 Maybe_819_Just (  struct StrBuilder_586  field0 ) {
    return ( struct Maybe_819 ) { .tag = Maybe_819_Just_t, .stuff = { .Maybe_819_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just818 (    struct Maybe_819  m996 ) {
    struct Maybe_819  dref997 = (  m996 );
    if ( dref997.tag == Maybe_819_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_819_Just_t ) {
        return ( true );
    }
}

struct Maybe_821 {
    enum {
        Maybe_821_None_t,
        Maybe_821_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_821_Just_s;
    } stuff;
};

static struct Maybe_821 Maybe_821_Just (  struct timespec  field0 ) {
    return ( struct Maybe_821 ) { .tag = Maybe_821_Just_t, .stuff = { .Maybe_821_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just820 (    struct Maybe_821  m996 ) {
    struct Maybe_821  dref997 = (  m996 );
    if ( dref997.tag == Maybe_821_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_821_Just_t ) {
        return ( true );
    }
}

struct Visual_825 {
    int32_t  field0;
};

static struct Visual_825 Visual_825_Visual (  int32_t  field0 ) {
    return ( struct Visual_825 ) { .field0 = field0 };
};

struct Mode_826 {
    enum {
        Mode_826_Normal_t,
        Mode_826_Insert_t,
        Mode_826_Select_t,
        Mode_826_Cmd_t,
        Mode_826_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_586  field0;
        } Mode_826_Cmd_s;
        struct {
            struct StrBuilder_586  field0;
        } Mode_826_SearchBox_s;
    } stuff;
};

static struct Mode_826 Mode_826_Cmd (  struct StrBuilder_586  field0 ) {
    return ( struct Mode_826 ) { .tag = Mode_826_Cmd_t, .stuff = { .Mode_826_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_826 Mode_826_SearchBox (  struct StrBuilder_586  field0 ) {
    return ( struct Mode_826 ) { .tag = Mode_826_SearchBox_t, .stuff = { .Mode_826_SearchBox_s = { .field0 = field0 } } };
};

struct Theme_827 {
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

struct List_829 {
    enum CAllocator_4  f_al;
    struct Slice_387  f_elements;
    size_t  f_count;
};

struct Actions_828 {
    struct List_829  f_list;
    size_t  f_cur;
};

struct Editor_824 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_169  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_825  f_goal_dash_x;
    struct List_300  f_current_dash_file;
    struct Maybe_285  f_filename;
    struct Mode_826  f_mode;
    struct Maybe_821  f_anim;
    struct Maybe_816  f_selected;
    struct Theme_827 *  f_theme;
    struct Maybe_819  f_search_dash_term;
    struct Maybe_333  f_msg;
    struct Maybe_333  f_clipboard;
    struct Actions_828  f_actions;
    struct Maybe_816  f_insert_dash_start;
    struct Maybe_819  f_delete_dash_acc;
};

struct env823 {
    ;
    struct Editor_824 *  ed3260;
    ;
};

struct funenv823 {
    struct Maybe_49  (*fun) (  struct env823  ,    struct List_3  );
    struct env823 env;
};

static  struct Maybe_49   and_dash_maybe822 (    struct Maybe_332  m1000 ,   struct funenv823  fun1002 ) {
    struct Maybe_332  dref1003 = (  m1000 );
    if ( dref1003.tag == Maybe_332_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1003.tag == Maybe_332_Just_t ) {
        struct funenv823  temp830 = (  fun1002 );
        return ( temp830.fun ( temp830.env ,  ( dref1003 .stuff .Maybe_332_Just_s .field0 ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe831 (    struct Maybe_49  x1007 ,    enum CharType_53 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_369   fmap_dash_maybe832 (    struct Maybe_49  x1007 ,    struct Tuple2_370 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_369_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_834 {
    enum {
        Maybe_834_None_t,
        Maybe_834_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_834_Just_s;
    } stuff;
};

static struct Maybe_834 Maybe_834_Just (  size_t  field0 ) {
    return ( struct Maybe_834 ) { .tag = Maybe_834_Just_t, .stuff = { .Maybe_834_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_834   fmap_dash_maybe833 (    struct Maybe_333  x1007 ,    size_t (*  fun1009 )(    struct DynStr_136  ) ) {
    struct Maybe_333  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_333_None_t ) {
        return ( (struct Maybe_834) { .tag = Maybe_834_None_t } );
    }
    else if ( dref1010.tag == Maybe_333_Just_t ) {
        return ( ( Maybe_834_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
    }
}

struct env836 {
    struct Editor_824 *  ed2969;
    ;
};

struct funenv836 {
    struct Cursor_169  (*fun) (  struct env836  ,    struct Cursor_169  );
    struct env836 env;
};

static  struct Cursor_169   maybe835 (    struct Maybe_816  x1014 ,   struct funenv836  fun1016 ,    struct Cursor_169  default1018 ) {
    struct funenv836  temp837 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp837.fun ( temp837.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env839 {
    struct Editor_824 *  ed2969;
    ;
};

struct funenv839 {
    struct Cursor_169  (*fun) (  struct env839  ,    struct Cursor_169  );
    struct env839 env;
};

static  struct Cursor_169   maybe838 (    struct Maybe_816  x1014 ,   struct funenv839  fun1016 ,    struct Cursor_169  default1018 ) {
    struct funenv839  temp840 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp840.fun ( temp840.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env842 {
    struct Editor_824 *  ed2969;
    ;
};

struct funenv842 {
    struct Cursor_169  (*fun) (  struct env842  ,    struct Cursor_169  );
    struct env842 env;
};

static  struct Cursor_169   maybe841 (    struct Maybe_816  x1014 ,   struct funenv842  fun1016 ,    struct Cursor_169  default1018 ) {
    struct funenv842  temp843 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp843.fun ( temp843.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env845 {
    struct Editor_824 *  ed2969;
    ;
};

struct funenv845 {
    struct Cursor_169  (*fun) (  struct env845  ,    struct Cursor_169  );
    struct env845 env;
};

static  struct Cursor_169   maybe844 (    struct Maybe_816  x1014 ,   struct funenv845  fun1016 ,    struct Cursor_169  default1018 ) {
    struct funenv845  temp846 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp846.fun ( temp846.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env848 {
    struct Editor_824 *  ed3066;
    ;
};

struct funenv848 {
    int32_t  (*fun) (  struct env848  ,    struct Cursor_169  );
    struct env848 env;
};

static  int32_t   maybe847 (    struct Maybe_816  x1014 ,   struct funenv848  fun1016 ,    int32_t  default1018 ) {
    struct funenv848  temp849 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp849.fun ( temp849.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env851 {
    struct Editor_824 *  ed3066;
    ;
};

struct funenv851 {
    int32_t  (*fun) (  struct env851  ,    struct Cursor_169  );
    struct env851 env;
};

static  int32_t   maybe850 (    struct Maybe_816  x1014 ,   struct funenv851  fun1016 ,    int32_t  default1018 ) {
    struct funenv851  temp852 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp852.fun ( temp852.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env854 {
    struct Editor_824 *  ed3082;
    ;
};

struct funenv854 {
    int32_t  (*fun) (  struct env854  ,    struct Cursor_169  );
    struct env854 env;
};

static  int32_t   maybe853 (    struct Maybe_816  x1014 ,   struct funenv854  fun1016 ,    int32_t  default1018 ) {
    struct funenv854  temp855 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp855.fun ( temp855.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env857 {
    struct Editor_824 *  ed3082;
    ;
};

struct funenv857 {
    int32_t  (*fun) (  struct env857  ,    struct Cursor_169  );
    struct env857 env;
};

static  int32_t   maybe856 (    struct Maybe_816  x1014 ,   struct funenv857  fun1016 ,    int32_t  default1018 ) {
    struct funenv857  temp858 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp858.fun ( temp858.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env860 {
    struct Editor_824 *  ed3045;
    ;
};

struct funenv860 {
    struct Cursor_169  (*fun) (  struct env860  ,    struct Cursor_169  );
    struct env860 env;
};

static  struct Cursor_169   maybe859 (    struct Maybe_816  x1014 ,   struct funenv860  fun1016 ,    struct Cursor_169  default1018 ) {
    struct funenv860  temp861 = (  fun1016 );
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( temp861.fun ( temp861.env ,  ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe862 (    struct Maybe_816  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_169  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe863 (    struct Maybe_816  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_169  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_816  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_816_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_816_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env865 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3295;
};

struct funenv865 {
    bool  (*fun) (  struct env865  ,    char  );
    struct env865 env;
};

static  bool   maybe864 (    struct Maybe_49  x1014 ,   struct funenv865  fun1016 ,    bool  default1018 ) {
    struct funenv865  temp866 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp866.fun ( temp866.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe867 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe868 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env870 {
    struct Maybe_52  cur_dash_char_dash_type3304;
    ;
    ;
};

struct funenv870 {
    bool  (*fun) (  struct env870  ,    char  );
    struct env870 env;
};

static  bool   maybe869 (    struct Maybe_49  x1014 ,   struct funenv870  fun1016 ,    bool  default1018 ) {
    struct funenv870  temp871 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp871.fun ( temp871.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe872 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env874 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3311;
};

struct funenv874 {
    bool  (*fun) (  struct env874  ,    char  );
    struct env874 env;
};

static  bool   maybe873 (    struct Maybe_49  x1014 ,   struct funenv874  fun1016 ,    bool  default1018 ) {
    struct funenv874  temp875 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp875.fun ( temp875.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env877 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3311;
};

struct funenv877 {
    bool  (*fun) (  struct env877  ,    char  );
    struct env877 env;
};

static  bool   maybe876 (    struct Maybe_49  x1014 ,   struct funenv877  fun1016 ,    bool  default1018 ) {
    struct funenv877  temp878 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp878.fun ( temp878.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe879 (    struct Maybe_49  x1014 ,    int32_t (*  fun1016 )(    char  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int64_t   mod880 (    int64_t  l968 ,    int64_t  d970 ) {
    int64_t  r971 = (  op_dash_div85 ( (  l968 ) , (  d970 ) ) );
    int64_t  m972 = (  op_dash_sub84 ( (  l968 ) , (  op_dash_mul32 ( (  r971 ) , (  d970 ) ) ) ) );
    if ( (  cmp79 ( (  m972 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d970 ) , (  m972 ) ) );
    } else {
        return (  m972 );
    }
}

static  enum Ordering_10   cmp882 (    struct Cursor_169  l2679 ,    struct Cursor_169  r2681 ) {
    enum Ordering_10  dref2682 = ( (  cmp80 ) ( ( (  l2679 ) .f_y ) ,  ( (  r2681 ) .f_y ) ) );
    switch (  dref2682 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2679 ) .f_x ) ,  ( (  r2681 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2683 =  dref2682;
            return (  els2683 );
            break;
        }
    }
}

static  struct Cursor_169   min881 (    struct Cursor_169  l975 ,    struct Cursor_169  r977 ) {
    if ( (  cmp882 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   min883 (    int32_t  l975 ,    int32_t  r977 ) {
    if ( (  cmp80 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   char_dash_i32886 (    char  c1312 ) {
    return ( (  cast_dash_on_dash_zeroed268 ) ( (  c1312 ) ) );
}

static  enum Ordering_10   cmp885 (    char  l1336 ,    char  r1338 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32886 ) ( (  l1336 ) ) ) ,  ( (  char_dash_i32886 ) ( (  r1338 ) ) ) ) );
}

static  char   min884 (    char  l975 ,    char  r977 ) {
    if ( (  cmp885 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   max887 (    int32_t  l1025 ,    int32_t  r1027 ) {
    if ( (  cmp80 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  struct Cursor_169   max888 (    struct Cursor_169  l1025 ,    struct Cursor_169  r1027 ) {
    if ( (  cmp882 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  char   max889 (    char  l1025 ,    char  r1027 ) {
    if ( (  cmp885 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  bool   between890 (    char  c1042 ,    char  l1044 ,    char  r1046 ) {
    char  from1047 = ( (  min884 ) ( (  l1044 ) ,  (  r1046 ) ) );
    char  to1048 = ( (  max889 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp885 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp885 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  bool   between891 (    struct Cursor_169  c1042 ,    struct Cursor_169  l1044 ,    struct Cursor_169  r1046 ) {
    struct Cursor_169  from1047 = ( (  min881 ) ( (  l1044 ) ,  (  r1046 ) ) );
    struct Cursor_169  to1048 = ( (  max888 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp882 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp882 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  int32_t   clamp892 (    int32_t  x1057 ,    int32_t  mn1059 ,    int32_t  mx1061 ) {
    if ( (  cmp80 ( (  x1057 ) , (  mn1059 ) ) == 0 ) ) {
        return (  mn1059 );
    } else {
        if ( (  cmp80 ( (  x1057 ) , (  mx1061 ) ) == 2 ) ) {
            return (  mx1061 );
        } else {
            return (  x1057 );
        }
    }
}

static  struct ConstStrIter_327   chars893 (    const char*  self1081 ) {
    return ( (  into_dash_iter352 ) ( (  self1081 ) ) );
}

static  struct AppendIter_399   chars894 (    char  self1087 ) {
    return ( (  single556 ) ( (  self1087 ) ) );
}

static  int32_t   count_dash_digits895 (    size_t  self1102 ) {
    if ( (  eq45 ( (  self1102 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1103 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1102 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1102 = (  op_dash_div101 ( (  self1102 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1103 = (  op_dash_add87 ( (  digits1103 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1103 );
}

static  int32_t   count_dash_digits896 (    int32_t  self1102 ) {
    if ( (  eq41 ( (  self1102 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1103 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp80 ( (  self1102 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1102 = (  op_dash_div90 ( (  self1102 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1103 = (  op_dash_add87 ( (  digits1103 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1103 );
}

static  int32_t   count_dash_digits897 (    uint32_t  self1102 ) {
    if ( (  eq42 ( (  self1102 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1103 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp81 ( (  self1102 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1102 = (  op_dash_div95 ( (  self1102 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1103 = (  op_dash_add87 ( (  digits1103 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1103 );
}

static  struct IntStrIter_392   chars898 (    int32_t  self1109 ) {
    return ( (struct IntStrIter_392) { .f_int = (  self1109 ) , .f_len = ( (  count_dash_digits896 ) ( (  self1109 ) ) ) } );
}

static  enum Unit_13   print_dash_str899 (    uint32_t  self1112 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1112 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_403   chars900 (    uint32_t  self1115 ) {
    return ( (struct IntStrIter_403) { .f_int = (  self1115 ) , .f_len = ( (  count_dash_digits897 ) ( (  self1115 ) ) ) } );
}

static  enum Unit_13   print_dash_str901 (    uint8_t  self1118 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32296 ) ( (  self1118 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_422   chars902 (    size_t  self1133 ) {
    return ( (struct IntStrIter_422) { .f_int = (  self1133 ) , .f_len = ( (  count_dash_digits895 ) ( (  self1133 ) ) ) } );
}

struct StrConcat_904 {
    const char*  field0;
    struct Mode_826  field1;
};

static struct StrConcat_904 StrConcat_904_StrConcat (  const char*  field0 ,  struct Mode_826  field1 ) {
    return ( struct StrConcat_904 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_908 {
    const char*  field0;
    struct DynStr_136  field1;
};

static struct StrConcat_908 StrConcat_908_StrConcat (  const char*  field0 ,  struct DynStr_136  field1 ) {
    return ( struct StrConcat_908 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_907 {
    struct StrConcat_908  field0;
    char  field1;
};

static struct StrConcat_907 StrConcat_907_StrConcat (  struct StrConcat_908  field0 ,  char  field1 ) {
    return ( struct StrConcat_907 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_906 {
    enum {
        StrCase_906_StrCase1_t,
        StrCase_906_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_906_StrCase1_s;
        struct {
            struct StrConcat_907  field0;
        } StrCase_906_StrCase2_s;
    } stuff;
};

static struct StrCase_906 StrCase_906_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_906 ) { .tag = StrCase_906_StrCase1_t, .stuff = { .StrCase_906_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_906 StrCase_906_StrCase2 (  struct StrConcat_907  field0 ) {
    return ( struct StrCase_906 ) { .tag = StrCase_906_StrCase2_t, .stuff = { .StrCase_906_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_136   as_dash_str910 (    struct StrBuilder_586 *  builder2139 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice312 ) ( ( ( ( * (  builder2139 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2139 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_307   chars917 (    struct DynStr_136  self1593 ) {
    return ( (  into_dash_iter311 ) ( ( (  self1593 ) .f_contents ) ) );
}

static  struct StrConcatIter_398   into_dash_iter916 (    struct StrConcat_908  dref1164 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars917 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   chars915 (    struct StrConcat_908  self1175 ) {
    return ( (  into_dash_iter916 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter914 (    struct StrConcat_907  dref1164 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars915 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars913 (    struct StrConcat_907  self1175 ) {
    return ( (  into_dash_iter914 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_396   into_dash_iter912 (    struct StrCase_906  self1188 ) {
    struct StrCase_906  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_906_StrCase1_t ) {
        return ( ( StrCaseIter_396_StrCaseIter1 ) ( ( (  chars893 ) ( ( dref1189 .stuff .StrCase_906_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_906_StrCase2_t ) {
        return ( ( StrCaseIter_396_StrCaseIter2 ) ( ( (  chars913 ) ( ( dref1189 .stuff .StrCase_906_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_396   chars911 (    struct StrCase_906  self1200 ) {
    return ( (  into_dash_iter912 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_396   chars905 (    struct Mode_826  self2705 ) {
    struct StrCase_906  temp909;
    struct StrCase_906  c2706 = (  temp909 );
    struct Mode_826  dref2707 = (  self2705 );
    if ( dref2707.tag == Mode_826_Normal_t ) {
        c2706 = ( ( StrCase_906_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2707.tag == Mode_826_Insert_t ) {
        c2706 = ( ( StrCase_906_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2707.tag == Mode_826_Select_t ) {
        c2706 = ( ( StrCase_906_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2707.tag == Mode_826_Cmd_t ) {
        struct DynStr_136  ss2709 = ( (  as_dash_str910 ) ( ( & ( dref2707 .stuff .Mode_826_Cmd_s .field0 ) ) ) );
        c2706 = ( ( StrCase_906_StrCase2 ) ( ( ( StrConcat_907_StrConcat ) ( ( ( StrConcat_908_StrConcat ) ( ( "Cmd(" ) ,  (  ss2709 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2707.tag == Mode_826_SearchBox_t ) {
        struct DynStr_136  ss2711 = ( (  as_dash_str910 ) ( ( & ( dref2707 .stuff .Mode_826_SearchBox_s .field0 ) ) ) );
        c2706 = ( ( StrCase_906_StrCase2 ) ( ( ( StrConcat_907_StrConcat ) ( ( ( StrConcat_908_StrConcat ) ( ( "Search(" ) ,  (  ss2711 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars911 ) ( (  c2706 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter903 (    struct StrConcat_904  dref1164 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars905 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_919 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_919 StrConcat_919_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_919 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_402   into_dash_iter918 (    struct StrConcat_919  dref1164 ) {
    return ( (struct StrConcatIter_402) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars900 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_921 {
    const char*  field0;
    struct Maybe_369  field1;
};

static struct StrConcat_921 StrConcat_921_StrConcat (  const char*  field0 ,  struct Maybe_369  field1 ) {
    return ( struct StrConcat_921 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_925 {
    const char*  field0;
    struct Tuple2_370  field1;
};

static struct StrConcat_925 StrConcat_925_StrConcat (  const char*  field0 ,  struct Tuple2_370  field1 ) {
    return ( struct StrConcat_925 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_924 {
    struct StrConcat_925  field0;
    char  field1;
};

static struct StrConcat_924 StrConcat_924_StrConcat (  struct StrConcat_925  field0 ,  char  field1 ) {
    return ( struct StrConcat_924 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_923 {
    enum {
        StrCase_923_StrCase1_t,
        StrCase_923_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_923_StrCase1_s;
        struct {
            struct StrConcat_924  field0;
        } StrCase_923_StrCase2_s;
    } stuff;
};

static struct StrCase_923 StrCase_923_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_923 ) { .tag = StrCase_923_StrCase1_t, .stuff = { .StrCase_923_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_923 StrCase_923_StrCase2 (  struct StrConcat_924  field0 ) {
    return ( struct StrCase_923 ) { .tag = StrCase_923_StrCase2_t, .stuff = { .StrCase_923_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_938 {
    char  field0;
    char  field1;
};

static struct StrConcat_938 StrConcat_938_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_938 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_937 {
    struct StrConcat_938  field0;
    const char*  field1;
};

static struct StrConcat_937 StrConcat_937_StrConcat (  struct StrConcat_938  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_937 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_936 {
    struct StrConcat_937  field0;
    int32_t  field1;
};

static struct StrConcat_936 StrConcat_936_StrConcat (  struct StrConcat_937  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_936 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_935 {
    struct StrConcat_936  field0;
    char  field1;
};

static struct StrConcat_935 StrConcat_935_StrConcat (  struct StrConcat_936  field0 ,  char  field1 ) {
    return ( struct StrConcat_935 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_413   into_dash_iter945 (    struct StrConcat_938  dref1164 ) {
    return ( (struct StrConcatIter_413) { .f_left = ( (  chars894 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_413   chars944 (    struct StrConcat_938  self1175 ) {
    return ( (  into_dash_iter945 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_412   into_dash_iter943 (    struct StrConcat_937  dref1164 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars944 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars893 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_412   chars942 (    struct StrConcat_937  self1175 ) {
    return ( (  into_dash_iter943 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_411   into_dash_iter941 (    struct StrConcat_936  dref1164 ) {
    return ( (struct StrConcatIter_411) { .f_left = ( (  chars942 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars898 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_411   chars940 (    struct StrConcat_936  self1175 ) {
    return ( (  into_dash_iter941 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_410   into_dash_iter939 (    struct StrConcat_935  dref1164 ) {
    return ( (struct StrConcatIter_410) { .f_left = ( (  chars940 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_410   chars934 (    struct StrConcat_935  self1175 ) {
    return ( (  into_dash_iter939 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_410   chars933 (    struct Tuple2_370  dref1225 ) {
    return ( (  chars934 ) ( ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( ( StrConcat_937_StrConcat ) ( ( ( StrConcat_938_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1225 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1225 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_409   into_dash_iter932 (    struct StrConcat_925  dref1164 ) {
    return ( (struct StrConcatIter_409) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars933 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_409   chars931 (    struct StrConcat_925  self1175 ) {
    return ( (  into_dash_iter932 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_408   into_dash_iter930 (    struct StrConcat_924  dref1164 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars931 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_408   chars929 (    struct StrConcat_924  self1175 ) {
    return ( (  into_dash_iter930 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_407   into_dash_iter928 (    struct StrCase_923  self1188 ) {
    struct StrCase_923  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_923_StrCase1_t ) {
        return ( ( StrCaseIter_407_StrCaseIter1 ) ( ( (  chars893 ) ( ( dref1189 .stuff .StrCase_923_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_923_StrCase2_t ) {
        return ( ( StrCaseIter_407_StrCaseIter2 ) ( ( (  chars929 ) ( ( dref1189 .stuff .StrCase_923_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_407   chars927 (    struct StrCase_923  self1200 ) {
    return ( (  into_dash_iter928 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_407   chars922 (    struct Maybe_369  self1214 ) {
    struct StrCase_923  temp926;
    struct StrCase_923  c1215 = (  temp926 );
    struct Maybe_369  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_369_None_t ) {
        c1215 = ( ( StrCase_923_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_369_Just_t ) {
        c1215 = ( ( StrCase_923_StrCase2 ) ( ( ( StrConcat_924_StrConcat ) ( ( ( StrConcat_925_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_369_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars927 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_406   into_dash_iter920 (    struct StrConcat_921  dref1164 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars922 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_949 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_949 StrConcat_949_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_949 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_948 {
    struct StrConcat_949  field0;
    char  field1;
};

static struct StrConcat_948 StrConcat_948_StrConcat (  struct StrConcat_949  field0 ,  char  field1 ) {
    return ( struct StrConcat_948 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_947 {
    struct StrConcat_948  field0;
    int32_t  field1;
};

static struct StrConcat_947 StrConcat_947_StrConcat (  struct StrConcat_948  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_947 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_418   into_dash_iter953 (    struct StrConcat_949  dref1164 ) {
    return ( (struct StrConcatIter_418) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars898 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_418   chars952 (    struct StrConcat_949  self1175 ) {
    return ( (  into_dash_iter953 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_417   into_dash_iter951 (    struct StrConcat_948  dref1164 ) {
    return ( (struct StrConcatIter_417) { .f_left = ( (  chars952 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_417   chars950 (    struct StrConcat_948  self1175 ) {
    return ( (  into_dash_iter951 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_416   into_dash_iter946 (    struct StrConcat_947  dref1164 ) {
    return ( (struct StrConcatIter_416) { .f_left = ( (  chars950 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars898 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_421   into_dash_iter954 (    struct StrConcat_17  dref1164 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars902 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_957 {
    struct StrConcat_949  field0;
    const char*  field1;
};

static struct StrConcat_957 StrConcat_957_StrConcat (  struct StrConcat_949  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_957 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_956 {
    struct StrConcat_957  field0;
    int32_t  field1;
};

static struct StrConcat_956 StrConcat_956_StrConcat (  struct StrConcat_957  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_956 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_428   into_dash_iter959 (    struct StrConcat_957  dref1164 ) {
    return ( (struct StrConcatIter_428) { .f_left = ( (  chars952 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars893 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_428   chars958 (    struct StrConcat_957  self1175 ) {
    return ( (  into_dash_iter959 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_427   into_dash_iter955 (    struct StrConcat_956  dref1164 ) {
    return ( (struct StrConcatIter_427) { .f_left = ( (  chars958 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars898 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_961 {
    const char*  field0;
    struct Maybe_819  field1;
};

static struct StrConcat_961 StrConcat_961_StrConcat (  const char*  field0 ,  struct Maybe_819  field1 ) {
    return ( struct StrConcat_961 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_965 {
    const char*  field0;
    struct StrBuilder_586  field1;
};

static struct StrConcat_965 StrConcat_965_StrConcat (  const char*  field0 ,  struct StrBuilder_586  field1 ) {
    return ( struct StrConcat_965 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_964 {
    struct StrConcat_965  field0;
    char  field1;
};

static struct StrConcat_964 StrConcat_964_StrConcat (  struct StrConcat_965  field0 ,  char  field1 ) {
    return ( struct StrConcat_964 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_963 {
    enum {
        StrCase_963_StrCase1_t,
        StrCase_963_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_963_StrCase1_s;
        struct {
            struct StrConcat_964  field0;
        } StrCase_963_StrCase2_s;
    } stuff;
};

static struct StrCase_963 StrCase_963_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_963 ) { .tag = StrCase_963_StrCase1_t, .stuff = { .StrCase_963_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_963 StrCase_963_StrCase2 (  struct StrConcat_964  field0 ) {
    return ( struct StrCase_963 ) { .tag = StrCase_963_StrCase2_t, .stuff = { .StrCase_963_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_307   chars973 (    struct StrBuilder_586  s2153 ) {
    return ( (  into_dash_iter310 ) ( ( (  s2153 ) .f_chars ) ) );
}

static  struct StrConcatIter_398   into_dash_iter972 (    struct StrConcat_965  dref1164 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars973 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   chars971 (    struct StrConcat_965  self1175 ) {
    return ( (  into_dash_iter972 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter970 (    struct StrConcat_964  dref1164 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars971 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars969 (    struct StrConcat_964  self1175 ) {
    return ( (  into_dash_iter970 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_396   into_dash_iter968 (    struct StrCase_963  self1188 ) {
    struct StrCase_963  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_963_StrCase1_t ) {
        return ( ( StrCaseIter_396_StrCaseIter1 ) ( ( (  chars893 ) ( ( dref1189 .stuff .StrCase_963_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_963_StrCase2_t ) {
        return ( ( StrCaseIter_396_StrCaseIter2 ) ( ( (  chars969 ) ( ( dref1189 .stuff .StrCase_963_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_396   chars967 (    struct StrCase_963  self1200 ) {
    return ( (  into_dash_iter968 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_396   chars962 (    struct Maybe_819  self1214 ) {
    struct StrCase_963  temp966;
    struct StrCase_963  c1215 = (  temp966 );
    struct Maybe_819  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_819_None_t ) {
        c1215 = ( ( StrCase_963_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_819_Just_t ) {
        c1215 = ( ( StrCase_963_StrCase2 ) ( ( ( StrConcat_964_StrConcat ) ( ( ( StrConcat_965_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_819_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars967 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter960 (    struct StrConcat_961  dref1164 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars962 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_975 {
    const char*  field0;
    struct Maybe_333  field1;
};

static struct StrConcat_975 StrConcat_975_StrConcat (  const char*  field0 ,  struct Maybe_333  field1 ) {
    return ( struct StrConcat_975 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_396   chars976 (    struct Maybe_333  self1214 ) {
    struct StrCase_906  temp977;
    struct StrCase_906  c1215 = (  temp977 );
    struct Maybe_333  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_333_None_t ) {
        c1215 = ( ( StrCase_906_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_333_Just_t ) {
        c1215 = ( ( StrCase_906_StrCase2 ) ( ( ( StrConcat_907_StrConcat ) ( ( ( StrConcat_908_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_333_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars911 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter974 (    struct StrConcat_975  dref1164 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars976 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_979 {
    const char*  field0;
    struct Maybe_834  field1;
};

static struct StrConcat_979 StrConcat_979_StrConcat (  const char*  field0 ,  struct Maybe_834  field1 ) {
    return ( struct StrConcat_979 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_982 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_982 StrConcat_982_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_982 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_981 {
    enum {
        StrCase_981_StrCase1_t,
        StrCase_981_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_981_StrCase1_s;
        struct {
            struct StrConcat_982  field0;
        } StrCase_981_StrCase2_s;
    } stuff;
};

static struct StrCase_981 StrCase_981_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_981 ) { .tag = StrCase_981_StrCase1_t, .stuff = { .StrCase_981_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_981 StrCase_981_StrCase2 (  struct StrConcat_982  field0 ) {
    return ( struct StrCase_981 ) { .tag = StrCase_981_StrCase2_t, .stuff = { .StrCase_981_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_421   chars988 (    struct StrConcat_17  self1175 ) {
    return ( (  into_dash_iter954 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_433   into_dash_iter987 (    struct StrConcat_982  dref1164 ) {
    return ( (struct StrConcatIter_433) { .f_left = ( (  chars988 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars894 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_433   chars986 (    struct StrConcat_982  self1175 ) {
    return ( (  into_dash_iter987 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_432   into_dash_iter985 (    struct StrCase_981  self1188 ) {
    struct StrCase_981  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_981_StrCase1_t ) {
        return ( ( StrCaseIter_432_StrCaseIter1 ) ( ( (  chars893 ) ( ( dref1189 .stuff .StrCase_981_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_981_StrCase2_t ) {
        return ( ( StrCaseIter_432_StrCaseIter2 ) ( ( (  chars986 ) ( ( dref1189 .stuff .StrCase_981_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_432   chars984 (    struct StrCase_981  self1200 ) {
    return ( (  into_dash_iter985 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_432   chars980 (    struct Maybe_834  self1214 ) {
    struct StrCase_981  temp983;
    struct StrCase_981  c1215 = (  temp983 );
    struct Maybe_834  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_834_None_t ) {
        c1215 = ( ( StrCase_981_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_834_Just_t ) {
        c1215 = ( ( StrCase_981_StrCase2 ) ( ( ( StrConcat_982_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_834_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars984 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_431   into_dash_iter978 (    struct StrConcat_979  dref1164 ) {
    return ( (struct StrConcatIter_431) { .f_left = ( (  chars893 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars980 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_991 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_991 StrConcat_991_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_991 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_990 {
    struct StrConcat_991  field0;
    char  field1;
};

static struct StrConcat_990 StrConcat_990_StrConcat (  struct StrConcat_991  field0 ,  char  field1 ) {
    return ( struct StrConcat_990 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str992 (    struct StrConcat_991  self1169 ) {
    struct StrConcat_991  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str989 (    struct StrConcat_990  self1169 ) {
    struct StrConcat_990  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str992 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_995 {
    const char*  field0;
    struct StrConcat_990  field1;
};

static struct StrConcat_995 StrConcat_995_StrConcat (  const char*  field0 ,  struct StrConcat_990  field1 ) {
    return ( struct StrConcat_995 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_994 {
    struct StrConcat_995  field0;
    char  field1;
};

static struct StrConcat_994 StrConcat_994_StrConcat (  struct StrConcat_995  field0 ,  char  field1 ) {
    return ( struct StrConcat_994 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str996 (    struct StrConcat_995  self1169 ) {
    struct StrConcat_995  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str989 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str993 (    struct StrConcat_994  self1169 ) {
    struct StrConcat_994  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str996 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str998 (    struct StrConcat_938  self1169 ) {
    struct StrConcat_938  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str997 (    struct StrConcat_937  self1169 ) {
    struct StrConcat_937  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str998 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1001 {
    const char*  field0;
    struct StrConcat_937  field1;
};

static struct StrConcat_1001 StrConcat_1001_StrConcat (  const char*  field0 ,  struct StrConcat_937  field1 ) {
    return ( struct StrConcat_1001 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1000 {
    struct StrConcat_1001  field0;
    char  field1;
};

static struct StrConcat_1000 StrConcat_1000_StrConcat (  struct StrConcat_1001  field0 ,  char  field1 ) {
    return ( struct StrConcat_1000 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1002 (    struct StrConcat_1001  self1169 ) {
    struct StrConcat_1001  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str997 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str999 (    struct StrConcat_1000  self1169 ) {
    struct StrConcat_1000  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1002 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1004 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_1004 StrConcat_1004_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1004 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1003 (    struct StrConcat_1004  self1169 ) {
    struct StrConcat_1004  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1007 {
    const char*  field0;
    struct StrConcat_1004  field1;
};

static struct StrConcat_1007 StrConcat_1007_StrConcat (  const char*  field0 ,  struct StrConcat_1004  field1 ) {
    return ( struct StrConcat_1007 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1006 {
    struct StrConcat_1007  field0;
    char  field1;
};

static struct StrConcat_1006 StrConcat_1006_StrConcat (  struct StrConcat_1007  field0 ,  char  field1 ) {
    return ( struct StrConcat_1006 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1008 (    struct StrConcat_1007  self1169 ) {
    struct StrConcat_1007  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1003 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1005 (    struct StrConcat_1006  self1169 ) {
    struct StrConcat_1006  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1008 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1012 (    struct DynStr_136  self1590 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1590 ) .f_contents ) .f_count ) ,  ( ( (  self1590 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1011 (    struct StrConcat_908  self1169 ) {
    struct StrConcat_908  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1012 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1010 (    struct Mode_826  self2697 ) {
    struct Mode_826  dref2698 = (  self2697 );
    if ( dref2698.tag == Mode_826_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2698.tag == Mode_826_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2698.tag == Mode_826_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2698.tag == Mode_826_Cmd_t ) {
        struct DynStr_136  ss2700 = ( (  as_dash_str910 ) ( ( & ( dref2698 .stuff .Mode_826_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str1011 ) ( ( ( StrConcat_908_StrConcat ) ( ( "Cmd " ) ,  (  ss2700 ) ) ) ) );
    }
    else if ( dref2698.tag == Mode_826_SearchBox_t ) {
        struct DynStr_136  ss2702 = ( (  as_dash_str910 ) ( ( & ( dref2698 .stuff .Mode_826_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str1011 ) ( ( ( StrConcat_908_StrConcat ) ( ( "Search " ) ,  (  ss2702 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1009 (    struct StrConcat_904  self1169 ) {
    struct StrConcat_904  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1010 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1015 {
    const char*  field0;
    struct StrConcat_904  field1;
};

static struct StrConcat_1015 StrConcat_1015_StrConcat (  const char*  field0 ,  struct StrConcat_904  field1 ) {
    return ( struct StrConcat_1015 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1014 {
    struct StrConcat_1015  field0;
    char  field1;
};

static struct StrConcat_1014 StrConcat_1014_StrConcat (  struct StrConcat_1015  field0 ,  char  field1 ) {
    return ( struct StrConcat_1014 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1016 (    struct StrConcat_1015  self1169 ) {
    struct StrConcat_1015  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1009 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1013 (    struct StrConcat_1014  self1169 ) {
    struct StrConcat_1014  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1016 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1019 {
    const char*  field0;
    struct StrConcat_991  field1;
};

static struct StrConcat_1019 StrConcat_1019_StrConcat (  const char*  field0 ,  struct StrConcat_991  field1 ) {
    return ( struct StrConcat_1019 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1018 {
    struct StrConcat_1019  field0;
    char  field1;
};

static struct StrConcat_1018 StrConcat_1018_StrConcat (  struct StrConcat_1019  field0 ,  char  field1 ) {
    return ( struct StrConcat_1018 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1020 (    struct StrConcat_1019  self1169 ) {
    struct StrConcat_1019  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str992 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1017 (    struct StrConcat_1018  self1169 ) {
    struct StrConcat_1018  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1020 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1027 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_1027 StrConcat_1027_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1027 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1026 {
    struct StrConcat_1027  field0;
    char  field1;
};

static struct StrConcat_1026 StrConcat_1026_StrConcat (  struct StrConcat_1027  field0 ,  char  field1 ) {
    return ( struct StrConcat_1026 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1025 {
    struct StrConcat_1026  field0;
    uint8_t  field1;
};

static struct StrConcat_1025 StrConcat_1025_StrConcat (  struct StrConcat_1026  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1025 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1024 {
    struct StrConcat_1025  field0;
    char  field1;
};

static struct StrConcat_1024 StrConcat_1024_StrConcat (  struct StrConcat_1025  field0 ,  char  field1 ) {
    return ( struct StrConcat_1024 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1023 {
    struct StrConcat_1024  field0;
    uint8_t  field1;
};

static struct StrConcat_1023 StrConcat_1023_StrConcat (  struct StrConcat_1024  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1022 {
    struct StrConcat_1023  field0;
    char  field1;
};

static struct StrConcat_1022 StrConcat_1022_StrConcat (  struct StrConcat_1023  field0 ,  char  field1 ) {
    return ( struct StrConcat_1022 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1032 (    struct StrConcat_1027  self1169 ) {
    struct StrConcat_1027  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str901 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1031 (    struct StrConcat_1026  self1169 ) {
    struct StrConcat_1026  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1032 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1030 (    struct StrConcat_1025  self1169 ) {
    struct StrConcat_1025  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1031 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str901 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1029 (    struct StrConcat_1024  self1169 ) {
    struct StrConcat_1024  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1030 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1028 (    struct StrConcat_1023  self1169 ) {
    struct StrConcat_1023  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1029 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str901 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1021 (    struct StrConcat_1022  self1169 ) {
    struct StrConcat_1022  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1028 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1036 {
    struct StrConcat_919  field0;
    char  field1;
};

static struct StrConcat_1036 StrConcat_1036_StrConcat (  struct StrConcat_919  field0 ,  char  field1 ) {
    return ( struct StrConcat_1036 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1035 {
    struct StrConcat_1036  field0;
    uint32_t  field1;
};

static struct StrConcat_1035 StrConcat_1035_StrConcat (  struct StrConcat_1036  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1035 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1034 {
    struct StrConcat_1035  field0;
    char  field1;
};

static struct StrConcat_1034 StrConcat_1034_StrConcat (  struct StrConcat_1035  field0 ,  char  field1 ) {
    return ( struct StrConcat_1034 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1039 (    struct StrConcat_919  self1169 ) {
    struct StrConcat_919  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str899 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1038 (    struct StrConcat_1036  self1169 ) {
    struct StrConcat_1036  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1039 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1037 (    struct StrConcat_1035  self1169 ) {
    struct StrConcat_1035  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1038 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str899 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1033 (    struct StrConcat_1034  self1169 ) {
    struct StrConcat_1034  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1037 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_395   chars1040 (    struct StrConcat_904  self1175 ) {
    return ( (  into_dash_iter903 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_402   chars1041 (    struct StrConcat_919  self1175 ) {
    return ( (  into_dash_iter918 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_406   chars1042 (    struct StrConcat_921  self1175 ) {
    return ( (  into_dash_iter920 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_416   chars1043 (    struct StrConcat_947  self1175 ) {
    return ( (  into_dash_iter946 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_427   chars1044 (    struct StrConcat_956  self1175 ) {
    return ( (  into_dash_iter955 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_395   chars1045 (    struct StrConcat_961  self1175 ) {
    return ( (  into_dash_iter960 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_395   chars1046 (    struct StrConcat_975  self1175 ) {
    return ( (  into_dash_iter974 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_431   chars1047 (    struct StrConcat_979  self1175 ) {
    return ( (  into_dash_iter978 ) ( (  self1175 ) ) );
}

static  struct TakeWhile_518   chars1048 (    struct TakeWhile_518  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_522   chars1049 (    struct TakeWhile_522  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_527   chars1050 (    struct TakeWhile_527  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_529   chars1051 (    struct TakeWhile_529  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_540   chars1052 (    struct TakeWhile_540  self1285 ) {
    return (  self1285 );
}

static  bool   eq1053 (    struct TakeWhile_529  l1295 ,    char  r1297 ) {
    struct TakeWhile_529  temp1054 = ( (  chars1051 ) ( (  l1295 ) ) );
    struct TakeWhile_529 *  l1298 = ( &temp1054 );
    struct AppendIter_399  temp1055 = ( (  chars894 ) ( (  r1297 ) ) );
    struct AppendIter_399 *  r1299 = ( &temp1055 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next538 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next454 ) ( (  r1299 ) ) );
        struct Tuple2_50  dref1302 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1300 ) ,  (  mrc1301 ) ) );
        if ( dref1302 .field0.tag == Maybe_49_None_t && dref1302 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1302 .field0.tag == Maybe_49_Just_t && dref1302 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1302 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1302 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1056 (    struct TakeWhile_529  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_529  temp1057 = ( (  chars1051 ) ( (  l1295 ) ) );
    struct TakeWhile_529 *  l1298 = ( &temp1057 );
    struct ConstStrIter_327  temp1058 = ( (  chars893 ) ( (  r1297 ) ) );
    struct ConstStrIter_327 *  r1299 = ( &temp1058 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next538 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next344 ) ( (  r1299 ) ) );
        struct Tuple2_50  dref1302 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1300 ) ,  (  mrc1301 ) ) );
        if ( dref1302 .field0.tag == Maybe_49_None_t && dref1302 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1302 .field0.tag == Maybe_49_Just_t && dref1302 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1302 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1302 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1059 (    struct TakeWhile_540  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_540  temp1060 = ( (  chars1052 ) ( (  l1295 ) ) );
    struct TakeWhile_540 *  l1298 = ( &temp1060 );
    struct ConstStrIter_327  temp1061 = ( (  chars893 ) ( (  r1297 ) ) );
    struct ConstStrIter_327 *  r1299 = ( &temp1061 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next539 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next344 ) ( (  r1299 ) ) );
        struct Tuple2_50  dref1302 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1300 ) ,  (  mrc1301 ) ) );
        if ( dref1302 .field0.tag == Maybe_49_None_t && dref1302 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1302 .field0.tag == Maybe_49_Just_t && dref1302 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1302 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1302 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t   char_dash_u81062 (    char  c1315 ) {
    return ( (  cast203 ) ( (  c1315 ) ) );
}

static  char   i32_dash_char1063 (    int32_t  i1318 ) {
    return ( (  cast207 ) ( (  i1318 ) ) );
}

static  bool   eq1064 (    const char*  l1331 ,    const char*  r1333 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1331 ) ,  (  r1333 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable1065 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined151 ) ( ) );
}

static  enum Unit_13   unreachable1066 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined153 ) ( ) );
}

static  enum Unit_13   panic1067 (    struct StrConcat_990  errmsg1346 ) {
    ( (  print_dash_str993 ) ( ( ( StrConcat_994_StrConcat ) ( ( ( StrConcat_995_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1068 (    struct StrConcat_937  errmsg1346 ) {
    ( (  print_dash_str999 ) ( ( ( StrConcat_1000_StrConcat ) ( ( ( StrConcat_1001_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1069 (    const char*  errmsg1346 ) {
    ( (  print_dash_str989 ) ( ( ( StrConcat_990_StrConcat ) ( ( ( StrConcat_991_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1070 (    struct StrConcat_1004  errmsg1346 ) {
    ( (  print_dash_str1005 ) ( ( ( StrConcat_1006_StrConcat ) ( ( ( StrConcat_1007_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1071 (    struct StrConcat_904  errmsg1346 ) {
    ( (  print_dash_str1013 ) ( ( ( StrConcat_1014_StrConcat ) ( ( ( StrConcat_1015_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1072 (    struct StrConcat_991  errmsg1346 ) {
    ( (  print_dash_str1017 ) ( ( ( StrConcat_1018_StrConcat ) ( ( ( StrConcat_1019_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_147   panic_prime_1073 (    const char*  errmsg1349 ) {
    ( (  print_dash_str989 ) ( ( ( StrConcat_990_StrConcat ) ( ( ( StrConcat_991_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1349 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   assert1074 (    bool  cond1352 ,    const char*  msg1354 ) {
    if ( ( ! (  cond1352 ) ) ) {
        ( (  print_dash_str989 ) ( ( ( StrConcat_990_StrConcat ) ( ( ( StrConcat_991_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1354 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1075 (    struct Maybe_285  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_285  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_285_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_285_Just_t ) {
        return ( dref1362 .stuff .Maybe_285_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1076 (    struct Maybe_333  x1359 ,    struct StrConcat_990  errmsg1361 ) {
    struct Maybe_333  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_333_None_t ) {
        ( (  panic1067 ) ( (  errmsg1361 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_333_Just_t ) {
        return ( dref1362 .stuff .Maybe_333_Just_s .field0 );
    }
}

struct Maybe_1078 {
    enum {
        Maybe_1078_None_t,
        Maybe_1078_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58  field0;
        } Maybe_1078_Just_s;
    } stuff;
};

static struct Maybe_1078 Maybe_1078_Just (  struct Cell_58  field0 ) {
    return ( struct Maybe_1078 ) { .tag = Maybe_1078_Just_t, .stuff = { .Maybe_1078_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58   or_dash_fail1077 (    struct Maybe_1078  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_1078  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1078_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1078_Just_t ) {
        return ( dref1362 .stuff .Maybe_1078_Just_s .field0 );
    }
}

struct Maybe_1080 {
    enum {
        Maybe_1080_None_t,
        Maybe_1080_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1080_Just_s;
    } stuff;
};

static struct Maybe_1080 Maybe_1080_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1080 ) { .tag = Maybe_1080_Just_t, .stuff = { .Maybe_1080_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1079 (    struct Maybe_1080  x1359 ,    struct StrConcat_937  errmsg1361 ) {
    struct Maybe_1080  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1080_None_t ) {
        ( (  panic1068 ) ( (  errmsg1361 ) ) );
        return ( (  undefined149 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1080_Just_t ) {
        return ( dref1362 .stuff .Maybe_1080_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1081 (    struct Maybe_333  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_333  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_333_None_t ) {
        ( (  panic1069 ) ( (  errmsg1361 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_333_Just_t ) {
        return ( dref1362 .stuff .Maybe_333_Just_s .field0 );
    }
}

struct Maybe_1083 {
    enum {
        Maybe_1083_None_t,
        Maybe_1083_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58 *  field0;
        } Maybe_1083_Just_s;
    } stuff;
};

static struct Maybe_1083 Maybe_1083_Just (  struct Cell_58 *  field0 ) {
    return ( struct Maybe_1083 ) { .tag = Maybe_1083_Just_t, .stuff = { .Maybe_1083_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58 *   or_dash_fail1082 (    struct Maybe_1083  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_1083  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1083_None_t ) {
        ( (  panic1069 ) ( (  errmsg1361 ) ) );
        return ( (  undefined155 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1083_Just_t ) {
        return ( dref1362 .stuff .Maybe_1083_Just_s .field0 );
    }
}

static  struct Cursor_169   or_dash_else1084 (    struct Maybe_816  self1366 ,    struct Cursor_169  alt1368 ) {
    struct Maybe_816  dref1369 = (  self1366 );
    if ( dref1369.tag == Maybe_816_None_t ) {
        return (  alt1368 );
    }
    else if ( dref1369.tag == Maybe_816_Just_t ) {
        return ( dref1369 .stuff .Maybe_816_Just_s .field0 );
    }
}

static  struct Slice_299   empty1085 (  ) {
    return ( (struct Slice_299) { .f_ptr = ( (  null_dash_ptr276 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1086 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr277 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_387   empty1087 (  ) {
    return ( (struct Slice_387) { .f_ptr = ( (  null_dash_ptr279 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1088 (    struct Slice_299  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1395 = ( (  offset_dash_ptr159 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Cell_58 *   get_dash_ptr1089 (    struct Slice_592  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1395 = ( (  offset_dash_ptr165 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Primitive_168 *   get_dash_ptr1090 (    struct Slice_387  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Primitive_168 *  elem_dash_ptr1395 = ( (  offset_dash_ptr167 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

struct Slice_1092 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_285   try_dash_get1091 (    struct Slice_1092  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
    }
    const char* *  elem_dash_ptr1401 = ( (  offset_dash_ptr157 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_285_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Maybe_1078   try_dash_get1093 (    struct Slice_592  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1078) { .tag = Maybe_1078_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1401 = ( (  offset_dash_ptr165 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_1078_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  const char*   get1094 (    struct Slice_1092  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1075 ) ( ( (  try_dash_get1091 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1095 (    struct Slice_592  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1077 ) ( ( (  try_dash_get1093 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1096 (    struct Slice_299  slice1409 ,    size_t  i1411 ,    struct List_3  x1413 ) {
    struct List_3 *  ep1414 = ( (  get_dash_ptr1088 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1097 (    struct Slice_5  slice1409 ,    size_t  i1411 ,    char  x1413 ) {
    char *  ep1414 = ( (  get_dash_ptr30 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1098 (    struct Slice_592  slice1409 ,    size_t  i1411 ,    struct Cell_58  x1413 ) {
    struct Cell_58 *  ep1414 = ( (  get_dash_ptr1089 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1099 (    struct Slice_387  slice1409 ,    size_t  i1411 ,    struct Primitive_168  x1413 ) {
    struct Primitive_168 *  ep1414 = ( (  get_dash_ptr1090 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   from1100 (    struct Slice_5  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice312 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct Slice_299   from1101 (    struct Slice_299  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice303 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct SliceAddressIter_653   addresses1102 (    struct Slice_299  slice1475 ) {
    return ( (struct SliceAddressIter_653) { .f_slice = (  slice1475 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam604 (   struct env604 env ,    struct Tuple2_364  dref1489 ) {
    return ( (  set1096 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size288 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1103 (    struct Slice_299  src1486 ,    struct Slice_299  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1070 ) ( ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env604 envinst604 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each603 ) ( ( (  zip492 ) ( (  src1486 ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv604){ .fun = lam604, .env = envinst604 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam620 (   struct env620 env ,    struct Tuple2_370  dref1489 ) {
    return ( (  set1097 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size288 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1104 (    struct Slice_5  src1486 ,    struct Slice_5  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1070 ) ( ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env620 envinst620 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each619 ) ( ( (  zip493 ) ( (  src1486 ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv620){ .fun = lam620, .env = envinst620 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1106 (    struct Tuple2_441  dref1497 ) {
    return (  eq47 ( ( dref1497 .field0 ) , ( dref1497 .field1 ) ) );
}

static  bool   eq1105 (    struct Slice_5  l1494 ,    struct Slice_5  r1496 ) {
    if ( ( !  eq45 ( ( (  l1494 ) .f_count ) , ( (  r1496 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all799 ) ( ( (  zip498 ) ( (  l1494 ) ,  (  r1496 ) ) ) ,  (  lam1106 ) ) );
}

static  const char*   elem_dash_get1107 (    struct Slice_1092  self1502 ,    size_t  idx1504 ) {
    return ( (  get1094 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  struct Cell_58   elem_dash_get1108 (    struct Slice_592  self1502 ,    size_t  idx1504 ) {
    return ( (  get1095 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  char   elem_dash_get1109 (    struct Slice_5  self1502 ,    size_t  idx1504 ) {
    return ( (  get335 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  enum Unit_13   lam591 (   struct env591 env ,    int32_t  i1533 ) {
    return ( (  set1098 ) ( ( env.s1529 ) ,  ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1108 ( ( env.s1529 ) , ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1110 (    struct Slice_592  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env591 envinst591 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each590 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32290 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv591){ .fun = lam591, .env = envinst591 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam596 (   struct env596 env ,    int32_t  i1533 ) {
    return ( (  set1098 ) ( ( env.s1529 ) ,  ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1108 ( ( env.s1529 ) , ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1111 (    struct Slice_592  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env596 envinst596 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each595 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32290 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv596){ .fun = lam596, .env = envinst596 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam659 (   struct env659 env ,    int32_t  i1533 ) {
    return ( (  set1098 ) ( ( env.s1529 ) ,  ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1108 ( ( env.s1529 ) , ( (  i32_dash_size288 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1112 (    struct Slice_592  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env659 envinst659 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each658 ) ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32290 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv659){ .fun = lam659, .env = envinst659 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_834   find_dash_slice1113 (    struct Slice_5  haystack1536 ,    struct Slice_5  needle1538 ) {
    struct RangeIter_380  temp1114 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( (  haystack1536 ) .f_count ) ) ) , ( (  size_dash_i32290 ) ( ( (  needle1538 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1115 =  next381 (&temp1114);
        if (  __cond1115 .tag == 0 ) {
            break;
        }
        int32_t  i1540 =  __cond1115 .stuff .Maybe_346_Just_s .field0;
        if ( (  eq1105 ( ( (  subslice312 ) ( (  haystack1536 ) ,  ( (  i32_dash_size288 ) ( (  i1540 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( (  i1540 ) ) ) , ( (  needle1538 ) .f_count ) ) ) ) ) , (  needle1538 ) ) ) ) {
            return ( ( Maybe_834_Just ) ( ( (  i32_dash_size288 ) ( (  i1540 ) ) ) ) );
        }
    }
    return ( (struct Maybe_834) { .tag = Maybe_834_None_t } );
}

static  struct Maybe_834   find_dash_last_dash_occurence_dash_of_dash_slice1116 (    struct Slice_5  haystack1543 ,    struct Slice_5  needle1545 ) {
    struct Maybe_834  occ1546 = ( (struct Maybe_834) { .tag = Maybe_834_None_t } );
    struct RangeIter_380  temp1117 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( (  haystack1543 ) .f_count ) ) ) , ( (  size_dash_i32290 ) ( ( (  needle1545 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1118 =  next381 (&temp1117);
        if (  __cond1118 .tag == 0 ) {
            break;
        }
        int32_t  i1548 =  __cond1118 .stuff .Maybe_346_Just_s .field0;
        if ( (  eq1105 ( ( (  subslice312 ) ( (  haystack1543 ) ,  ( (  i32_dash_size288 ) ( (  i1548 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( (  i1548 ) ) ) , ( (  needle1545 ) .f_count ) ) ) ) ) , (  needle1545 ) ) ) ) {
            occ1546 = ( ( Maybe_834_Just ) ( ( (  i32_dash_size288 ) ( (  i1548 ) ) ) ) );
        }
    }
    return (  occ1546 );
}

static  enum CAllocator_4   idc1119 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_299   allocate1120 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize171 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1564 = ( (  cast_dash_ptr214 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_299) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_5   allocate1121 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize174 ) ( ) ) ) .f_size );
    char *  ptr1564 = ( (  cast_dash_ptr217 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_592   allocate1122 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize177 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1564 = ( (  cast_dash_ptr229 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_592) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_387   allocate1123 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize180 ) ( ) ) ) .f_size );
    struct Primitive_168 *  ptr1564 = ( (  cast_dash_ptr235 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_387) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  enum Unit_13   free1124 (    enum CAllocator_4  dref1566 ,    struct Slice_299  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr213 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1125 (    enum CAllocator_4  dref1566 ,    struct Slice_5  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr216 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1126 (    enum CAllocator_4  dref1566 ,    struct Slice_387  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr236 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1128 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1127 (    enum CAllocator_4  dref1566 ,    struct Slice_1128  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr237 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1129 (    enum CAllocator_4  dref1566 ,    struct Slice_592  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr239 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr1130 (    struct Array_142 *  arr1628 ,    size_t  i1631 ) {
    if ( ( (  cmp9 ( (  i1631 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1631 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic715 ) ( ( ( StrConcat_716_StrConcat ) ( ( ( StrConcat_717_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1631 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1632 = ( ( (  cast_dash_ptr224 ) ( (  arr1628 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1632 ) ,  ( (int64_t ) (  i1631 ) ) ) );
}

static  char *   get_dash_ptr1131 (    struct Array_195 *  arr1628 ,    size_t  i1631 ) {
    if ( ( (  cmp9 ( (  i1631 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1631 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic715 ) ( ( ( StrConcat_716_StrConcat ) ( ( ( StrConcat_717_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1631 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1632 = ( ( (  cast_dash_ptr234 ) ( (  arr1628 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1632 ) ,  ( (int64_t ) (  i1631 ) ) ) );
}

static  enum Unit_13   set1132 (    struct Array_142 *  arr1641 ,    size_t  i1644 ,    uint8_t  e1646 ) {
    uint8_t *  p1647 = ( (  get_dash_ptr1130 ) ( (  arr1641 ) ,  (  i1644 ) ) );
    (*  p1647 ) = (  e1646 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1133 (    struct Array_195 *  arr1641 ,    size_t  i1644 ,    char  e1646 ) {
    char *  p1647 = ( (  get_dash_ptr1131 ) ( (  arr1641 ) ,  (  i1644 ) ) );
    (*  p1647 ) = (  e1646 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1134 (    struct Array_195 *  arr1650 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast205 ) ( (  arr1650 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1135 (    char  c1711 ) {
    return ( ( (  eq47 ( (  c1711 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1711 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1711 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1136 (    char  c1714 ) {
    return ( ! ( (  is_dash_whitespace1135 ) ( (  c1714 ) ) ) );
}

static  bool   is_dash_alpha1137 (    char  c1720 ) {
    return ( ( (  between890 ) ( (  c1720 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between890 ) ( (  c1720 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1138 (    char  c1723 ) {
    return ( (  between890 ) ( (  c1723 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1139 (    char  c1726 ) {
    return ( ( (  is_dash_alpha1137 ) ( (  c1726 ) ) ) || ( (  is_dash_digit1138 ) ( (  c1726 ) ) ) );
}

static  struct LineIter_319   lines1140 (    struct DynStr_136  s1730 ) {
    return ( (struct LineIter_319) { .f_og = (  s1730 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1141 (    char  c1759 ) {
    return ( (  cmp80 ( ( (  char_dash_i32886 ) ( (  c1759 ) ) ) , ( (  char_dash_i32886 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32886 ) ( (  c1759 ) ) ) , ( (  char_dash_i32886 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_346   parse_dash_digit1142 (    char  c1762 ) {
    if ( ( (  is_dash_digit1141 ) ( (  c1762 ) ) ) ) {
        return ( ( Maybe_346_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32886 ) ( (  c1762 ) ) ) , ( (  char_dash_i32886 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
    }
}

static  struct Maybe_741   sequence_dash_maybe1144 (    char  e1768 ,    struct Maybe_741  b1770 ) {
    struct Maybe_741  dref1771 = (  b1770 );
    if ( dref1771.tag == Maybe_741_None_t ) {
        return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
    }
    else if ( dref1771.tag == Maybe_741_Just_t ) {
        struct Maybe_346  dref1773 = ( (  parse_dash_digit1142 ) ( (  e1768 ) ) );
        if ( dref1773.tag == Maybe_346_None_t ) {
            return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
        }
        else if ( dref1773.tag == Maybe_346_Just_t ) {
            return ( ( Maybe_741_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1771 .stuff .Maybe_741_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64287 ) ( ( dref1773 .stuff .Maybe_346_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_741   parse_dash_int1143 (    struct TakeWhile_518  s1765 ) {
    struct TakeWhile_518  cs1775 = ( (  chars1048 ) ( (  s1765 ) ) );
    struct Maybe_49  dref1776 = ( (  head802 ) ( (  cs1775 ) ) );
    if ( dref1776.tag == Maybe_49_Just_t ) {
        return ( (  reduce740 ) ( (  cs1775 ) ,  ( ( Maybe_741_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1144 ) ) );
    }
    else if ( dref1776.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
    }
}

static  struct Maybe_741   sequence_dash_maybe1146 (    char  e1768 ,    struct Maybe_741  b1770 ) {
    struct Maybe_741  dref1771 = (  b1770 );
    if ( dref1771.tag == Maybe_741_None_t ) {
        return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
    }
    else if ( dref1771.tag == Maybe_741_Just_t ) {
        struct Maybe_346  dref1773 = ( (  parse_dash_digit1142 ) ( (  e1768 ) ) );
        if ( dref1773.tag == Maybe_346_None_t ) {
            return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
        }
        else if ( dref1773.tag == Maybe_346_Just_t ) {
            return ( ( Maybe_741_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1771 .stuff .Maybe_741_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64287 ) ( ( dref1773 .stuff .Maybe_346_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_741   parse_dash_int1145 (    struct TakeWhile_529  s1765 ) {
    struct TakeWhile_529  cs1775 = ( (  chars1051 ) ( (  s1765 ) ) );
    struct Maybe_49  dref1776 = ( (  head806 ) ( (  cs1775 ) ) );
    if ( dref1776.tag == Maybe_49_Just_t ) {
        return ( (  reduce755 ) ( (  cs1775 ) ,  ( ( Maybe_741_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1146 ) ) );
    }
    else if ( dref1776.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1147 (    struct List_300 *  list1781 ,    size_t  i1783 ) {
    if ( ( (  cmp9 ( (  i1783 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1783 ) , ( ( * (  list1781 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1783 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1781 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1088 ) ( ( ( * (  list1781 ) ) .f_elements ) ,  (  i1783 ) ) );
}

static  struct Primitive_168 *   get_dash_ptr1148 (    struct List_829 *  list1781 ,    size_t  i1783 ) {
    if ( ( (  cmp9 ( (  i1783 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1783 ) , ( ( * (  list1781 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1783 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1781 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1090 ) ( ( ( * (  list1781 ) ) .f_elements ) ,  (  i1783 ) ) );
}

static  struct List_3   get1149 (    struct List_300 *  list1791 ,    size_t  i1793 ) {
    return ( * ( (  get_dash_ptr1147 ) ( (  list1791 ) ,  (  i1793 ) ) ) );
}

static  struct Primitive_168   get1150 (    struct List_829 *  list1791 ,    size_t  i1793 ) {
    return ( * ( (  get_dash_ptr1148 ) ( (  list1791 ) ,  (  i1793 ) ) ) );
}

static  struct Maybe_49   try_dash_get1151 (    struct List_3 *  list1796 ,    size_t  i1798 ) {
    if ( (  cmp9 ( (  i1798 ) , ( ( * (  list1796 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1796 ) ,  (  i1798 ) ) ) ) );
}

static  struct Maybe_332   try_dash_get1152 (    struct List_300 *  list1796 ,    size_t  i1798 ) {
    if ( (  cmp9 ( (  i1798 ) , ( ( * (  list1796 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_332) { .tag = Maybe_332_None_t } );
    }
    return ( ( Maybe_332_Just ) ( ( (  get1149 ) ( (  list1796 ) ,  (  i1798 ) ) ) ) );
}

static  enum Unit_13   set1153 (    struct List_300 *  list1801 ,    size_t  i1803 ,    struct List_3  elem1805 ) {
    if ( ( (  cmp9 ( (  i1803 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1803 ) , ( ( * (  list1801 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1803 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1801 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1096 ) ( ( ( * (  list1801 ) ) .f_elements ) ,  (  i1803 ) ,  (  elem1805 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1154 (    struct List_3 *  list1801 ,    size_t  i1803 ,    char  elem1805 ) {
    if ( ( (  cmp9 ( (  i1803 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1803 ) , ( ( * (  list1801 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1803 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1801 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1097 ) ( ( ( * (  list1801 ) ) .f_elements ) ,  (  i1803 ) ,  (  elem1805 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_300   mk1155 (    enum CAllocator_4  al1811 ) {
    struct Slice_299  elements1812 = ( (  empty1085 ) ( ) );
    return ( (struct List_300) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1156 (    enum CAllocator_4  al1811 ) {
    struct Slice_5  elements1812 = ( (  empty1086 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_829   mk1157 (    enum CAllocator_4  al1811 ) {
    struct Slice_387  elements1812 = ( (  empty1087 ) ( ) );
    return ( (struct List_829) { .f_al = (  al1811 ) , .f_elements = (  elements1812 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1158 (    struct List_3 *  list1815 ) {
    ( (  free1125 ) ( ( ( * (  list1815 ) ) .f_al ) ,  ( ( * (  list1815 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1159 (    struct List_300 *  list1815 ) {
    ( (  free1124 ) ( ( ( * (  list1815 ) ) .f_al ) ,  ( ( * (  list1815 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam567 (   struct env567 env ,    struct Tuple2_364  dref1823 ) {
    return ( (  set1096 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size288 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full573 (   struct env573 env ,    struct List_300 *  list1821 ) {
    if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate1120 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_299  new_dash_slice1822 = ( (  allocate1120 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env567 envinst567 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each566 ) ( ( (  zip492 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv567){ .fun = lam567, .env = envinst567 } ) ) );
            ( (  free1124 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam581 (   struct env581 env ,    struct Tuple2_370  dref1823 ) {
    return ( (  set1097 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size288 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full324 (   struct env324 env ,    struct List_3 *  list1821 ) {
    if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate1121 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1822 = ( (  allocate1121 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env581 envinst581 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each580 ) ( ( (  zip493 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv581){ .fun = lam581, .env = envinst581 } ) ) );
            ( (  free1125 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1160 {
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1817;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1816;
    ;
};

static  enum Unit_13   lam628 (   struct env628 env ,    struct Tuple2_436  dref1823 ) {
    return ( (  set1099 ) ( ( env.new_dash_slice1822 ) ,  ( (  i32_dash_size288 ) ( ( dref1823 .field1 ) ) ) ,  ( dref1823 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1160 (   struct env1160 env ,    struct List_829 *  list1821 ) {
    if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1821 ) .f_elements = ( (  allocate1123 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( env.starting_dash_size1816 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1821 ) ) .f_count ) , ( ( ( * (  list1821 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_387  new_dash_slice1822 = ( (  allocate1123 ) ( ( ( * (  list1821 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1821 ) ) .f_count ) , ( env.growth_dash_factor1817 ) ) ) ) );
            struct env628 envinst628 = {
                .new_dash_slice1822 =  new_dash_slice1822 ,
            };
            ( (  for_dash_each627 ) ( ( (  zip496 ) ( ( ( * (  list1821 ) ) .f_elements ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv628){ .fun = lam628, .env = envinst628 } ) ) );
            ( (  free1126 ) ( ( ( * (  list1821 ) ) .f_al ) ,  ( ( * (  list1821 ) ) .f_elements ) ) );
            (*  list1821 ) .f_elements = (  new_dash_slice1822 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add572 (   struct env572 env ,    struct List_300 *  list1828 ,    struct List_3  elem1830 ) {
    struct funenv573  temp1161 = ( (struct funenv573){ .fun = grow_dash_if_dash_full573, .env =  env.envinst573  } );
    ( temp1161.fun ( temp1161.env ,  (  list1828 ) ) );
    ( (  set1096 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add98 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add323 (   struct env323 env ,    struct List_3 *  list1828 ,    char  elem1830 ) {
    struct funenv324  temp1162 = ( (struct funenv324){ .fun = grow_dash_if_dash_full324, .env =  env.envinst324  } );
    ( temp1162.fun ( temp1162.env ,  (  list1828 ) ) );
    ( (  set1097 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add98 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1160 {
    enum Unit_13  (*fun) (  struct env1160  ,    struct List_829 *  );
    struct env1160 env;
};

struct env1163 {
    ;
    struct env1160 envinst1160;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   add1163 (   struct env1163 env ,    struct List_829 *  list1828 ,    struct Primitive_168  elem1830 ) {
    struct funenv1160  temp1164 = ( (struct funenv1160){ .fun = grow_dash_if_dash_full1160, .env =  env.envinst1160  } );
    ( temp1164.fun ( temp1164.env ,  (  list1828 ) ) );
    ( (  set1099 ) ( ( ( * (  list1828 ) ) .f_elements ) ,  ( ( * (  list1828 ) ) .f_count ) ,  (  elem1830 ) ) );
    (*  list1828 ) .f_count = (  op_dash_add98 ( ( ( * (  list1828 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1165 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    ;
    ;
    struct env324 envinst324;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1165 (   struct env1165 env ,    struct List_3 *  list1833 ,    size_t  i1835 ,    char  elem1837 ) {
    if ( ( (  cmp9 ( (  i1835 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1835 ) , ( ( * (  list1833 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1835 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1833 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv323  temp1166 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
        ( temp1166.fun ( temp1166.env ,  (  list1833 ) ,  (  elem1837 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv324  temp1167 = ( (struct funenv324){ .fun = grow_dash_if_dash_full324, .env =  env.envinst324  } );
    ( temp1167.fun ( temp1167.env ,  (  list1833 ) ) );
    size_t  ii1838 = (  op_dash_sub99 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1838 ) , (  i1835 ) ) != 0 ) ) {
        ( (  set1097 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1838 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1833 ) ,  (  ii1838 ) ) ) ) );
        if ( (  eq45 ( (  ii1838 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1838 = (  op_dash_sub99 ( (  ii1838 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1097 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  (  i1835 ) ,  (  elem1837 ) ) );
    (*  list1833 ) .f_count = (  op_dash_add98 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1168 {
    ;
    ;
    ;
    ;
    struct env572 envinst572;
    ;
    ;
    ;
    struct env573 envinst573;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1168 (   struct env1168 env ,    struct List_300 *  list1833 ,    size_t  i1835 ,    struct List_3  elem1837 ) {
    if ( ( (  cmp9 ( (  i1835 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1835 ) , ( ( * (  list1833 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1835 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1833 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv572  temp1169 = ( (struct funenv572){ .fun = add572, .env =  env.envinst572  } );
        ( temp1169.fun ( temp1169.env ,  (  list1833 ) ,  (  elem1837 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv573  temp1170 = ( (struct funenv573){ .fun = grow_dash_if_dash_full573, .env =  env.envinst573  } );
    ( temp1170.fun ( temp1170.env ,  (  list1833 ) ) );
    size_t  ii1838 = (  op_dash_sub99 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1838 ) , (  i1835 ) ) != 0 ) ) {
        ( (  set1096 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1838 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1149 ) ( (  list1833 ) ,  (  ii1838 ) ) ) ) );
        if ( (  eq45 ( (  ii1838 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1838 = (  op_dash_sub99 ( (  ii1838 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1096 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  (  i1835 ) ,  (  elem1837 ) ) );
    (*  list1833 ) .f_count = (  op_dash_add98 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1171 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1818;
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

static  enum Unit_13   lam608 (   struct env608 env ,    struct Tuple2_364  dref1844 ) {
    return ( (  set1153 ) ( ( env.list1841 ) ,  ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( ( dref1844 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1844 .field0 ) ) );
}

static  enum Unit_13   remove1171 (   struct env1171 env ,    struct List_300 *  list1841 ,    size_t  i1843 ) {
    if ( ( (  cmp9 ( (  i1843 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1843 ) , ( ( * (  list1841 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1843 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1841 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env608 envinst608 = {
        .list1841 =  list1841 ,
    };
    ( (  for_dash_each607 ) ( ( (  drop372 ) ( ( (  zip494 ) ( ( * (  list1841 ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1843 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv608){ .fun = lam608, .env = envinst608 } ) ) );
    (*  list1841 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1841 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1847 = ( ( ( * (  list1841 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1841 ) ) .f_count ) , ( env.shrink_dash_factor1818 ) ) ) , (  capacity1847 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1841 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1124 ) ( ( ( * (  list1841 ) ) .f_al ) ,  ( ( * (  list1841 ) ) .f_elements ) ) );
            (*  list1841 ) .f_elements = ( (  empty1085 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1848 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1841 ) ) .f_count ) , ( env.shrink_dash_factor1818 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1818 ) ) );
        struct Slice_299  new_dash_slice1849 = ( (  allocate1120 ) ( ( ( * (  list1841 ) ) .f_al ) ,  (  new_dash_size1848 ) ) );
        ( (  copy_dash_to1103 ) ( ( (  subslice303 ) ( ( ( * (  list1841 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1841 ) ) .f_count ) ) ) ,  (  new_dash_slice1849 ) ) );
        ( (  free1124 ) ( ( ( * (  list1841 ) ) .f_al ) ,  ( ( * (  list1841 ) ) .f_elements ) ) );
        (*  list1841 ) .f_elements = (  new_dash_slice1849 );
    }
    return ( Unit_13_Unit );
}

struct env1172 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1818;
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

static  enum Unit_13   lam624 (   struct env624 env ,    struct Tuple2_370  dref1844 ) {
    return ( (  set1154 ) ( ( env.list1841 ) ,  ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( ( dref1844 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1844 .field0 ) ) );
}

static  enum Unit_13   remove1172 (   struct env1172 env ,    struct List_3 *  list1841 ,    size_t  i1843 ) {
    if ( ( (  cmp9 ( (  i1843 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1843 ) , ( ( * (  list1841 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1843 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1841 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env624 envinst624 = {
        .list1841 =  list1841 ,
    };
    ( (  for_dash_each623 ) ( ( (  drop374 ) ( ( (  zip495 ) ( ( * (  list1841 ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1843 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv624){ .fun = lam624, .env = envinst624 } ) ) );
    (*  list1841 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1841 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1847 = ( ( ( * (  list1841 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1841 ) ) .f_count ) , ( env.shrink_dash_factor1818 ) ) ) , (  capacity1847 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1841 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1125 ) ( ( ( * (  list1841 ) ) .f_al ) ,  ( ( * (  list1841 ) ) .f_elements ) ) );
            (*  list1841 ) .f_elements = ( (  empty1086 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1848 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1841 ) ) .f_count ) , ( env.shrink_dash_factor1818 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1818 ) ) );
        struct Slice_5  new_dash_slice1849 = ( (  allocate1121 ) ( ( ( * (  list1841 ) ) .f_al ) ,  (  new_dash_size1848 ) ) );
        ( (  copy_dash_to1104 ) ( ( (  subslice312 ) ( ( ( * (  list1841 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1841 ) ) .f_count ) ) ) ,  (  new_dash_slice1849 ) ) );
        ( (  free1125 ) ( ( ( * (  list1841 ) ) .f_al ) ,  ( ( * (  list1841 ) ) .f_elements ) ) );
        (*  list1841 ) .f_elements = (  new_dash_slice1849 );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_168   elem_dash_get1173 (    struct List_829  self1852 ,    size_t  k1854 ) {
    return ( (  get1150 ) ( ( & (  self1852 ) ) ,  (  k1854 ) ) );
}

struct funenv1172 {
    enum Unit_13  (*fun) (  struct env1172  ,    struct List_3 *  ,    size_t  );
    struct env1172 env;
};

struct env1174 {
    ;
    ;
    ;
    ;
    ;
    struct env1172 envinst1172;
    ;
};

static  enum Unit_13   pop1174 (   struct env1174 env ,    struct List_3 *  list1863 ) {
    if ( (  eq45 ( ( ( * (  list1863 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1069 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1172  temp1175 = ( (struct funenv1172){ .fun = remove1172, .env =  env.envinst1172  } );
    return ( temp1175.fun ( temp1175.env ,  (  list1863 ) ,  (  op_dash_sub99 ( ( ( * (  list1863 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

struct env1176 {
    ;
    ;
    ;
    ;
    struct env572 envinst572;
    ;
};

static  enum Unit_13   lam571 (   struct env571 env ,    struct List_3  x1873 ) {
    struct funenv572  temp1177 = ( (struct funenv572){ .fun = add572, .env =  env.envinst572  } );
    return ( temp1177.fun ( temp1177.env ,  ( env.list1869 ) ,  (  x1873 ) ) );
}

static  enum Unit_13   add_dash_all1176 (   struct env1176 env ,    struct List_300 *  list1869 ,    struct Map_318  it1871 ) {
    struct env571 envinst571 = {
        .list1869 =  list1869 ,
        .envinst572 = env.envinst572 ,
    };
    ( (  for_dash_each570 ) ( (  it1871 ) ,  ( (struct funenv571){ .fun = lam571, .env = envinst571 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam577 (   struct env577 env ,    char  x1873 ) {
    struct funenv323  temp1178 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1178.fun ( temp1178.env ,  ( env.list1869 ) ,  (  x1873 ) ) );
}

static  enum Unit_13   add_dash_all322 (   struct env322 env ,    struct List_3 *  list1869 ,    struct DynStr_136  it1871 ) {
    struct env577 envinst577 = {
        .list1869 =  list1869 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each576 ) ( (  it1871 ) ,  ( (struct funenv577){ .fun = lam577, .env = envinst577 } ) ) );
    return ( Unit_13_Unit );
}

struct env1179 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
};

static  enum Unit_13   lam612 (   struct env612 env ,    char  x1873 ) {
    struct funenv323  temp1180 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1180.fun ( temp1180.env ,  ( env.list1869 ) ,  (  x1873 ) ) );
}

static  enum Unit_13   add_dash_all1179 (   struct env1179 env ,    struct List_3 *  list1869 ,    struct Slice_5  it1871 ) {
    struct env612 envinst612 = {
        .list1869 =  list1869 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each611 ) ( (  it1871 ) ,  ( (struct funenv612){ .fun = lam612, .env = envinst612 } ) ) );
    return ( Unit_13_Unit );
}

struct env1181 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
};

static  enum Unit_13   lam616 (   struct env616 env ,    char  x1873 ) {
    struct funenv323  temp1182 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1182.fun ( temp1182.env ,  ( env.list1869 ) ,  (  x1873 ) ) );
}

static  enum Unit_13   add_dash_all1181 (   struct env1181 env ,    struct List_3 *  list1869 ,    struct List_3 *  it1871 ) {
    struct env616 envinst616 = {
        .list1869 =  list1869 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each615 ) ( (  it1871 ) ,  ( (struct funenv616){ .fun = lam616, .env = envinst616 } ) ) );
    return ( Unit_13_Unit );
}

struct env1183 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
};

static  enum Unit_13   lam636 (   struct env636 env ,    char  x1873 ) {
    struct funenv323  temp1184 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1184.fun ( temp1184.env ,  ( env.list1869 ) ,  (  x1873 ) ) );
}

static  enum Unit_13   add_dash_all1183 (   struct env1183 env ,    struct List_3 *  list1869 ,    struct TakeWhile_520  it1871 ) {
    struct env636 envinst636 = {
        .list1869 =  list1869 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each635 ) ( (  it1871 ) ,  ( (struct funenv636){ .fun = lam636, .env = envinst636 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1185 (    struct List_3 *  l1876 ,    size_t  new_dash_count1878 ) {
    (*  l1876 ) .f_count = (  new_dash_count1878 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1186 (    struct List_829 *  l1876 ,    size_t  new_dash_count1878 ) {
    (*  l1876 ) .f_count = (  new_dash_count1878 );
    return ( Unit_13_Unit );
}

struct funenv1176 {
    enum Unit_13  (*fun) (  struct env1176  ,    struct List_300 *  ,    struct Map_318  );
    struct env1176 env;
};

struct env1187 {
    struct env1176 envinst1176;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_300   to_dash_list1187 (   struct env1187 env ,    struct Map_318  it1881 ,    enum CAllocator_4  al1883 ) {
    struct List_300  temp1188 = ( (  mk1155 ) ( (  al1883 ) ) );
    struct List_300 *  l1884 = ( &temp1188 );
    struct funenv1176  temp1189 = ( (struct funenv1176){ .fun = add_dash_all1176, .env =  env.envinst1176  } );
    ( temp1189.fun ( temp1189.env ,  (  l1884 ) ,  (  it1881 ) ) );
    return ( * (  l1884 ) );
}

static  struct List_3   to_dash_list321 (   struct env321 env ,    struct DynStr_136  it1881 ,    enum CAllocator_4  al1883 ) {
    struct List_3  temp1190 = ( (  mk1156 ) ( (  al1883 ) ) );
    struct List_3 *  l1884 = ( &temp1190 );
    struct funenv322  temp1191 = ( (struct funenv322){ .fun = add_dash_all322, .env =  env.envinst322  } );
    ( temp1191.fun ( temp1191.env ,  (  l1884 ) ,  (  it1881 ) ) );
    return ( * (  l1884 ) );
}

static  struct Slice_5   to_dash_slice1192 (    struct List_3  l1887 ) {
    char *  ptr1888 = ( ( (  l1887 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1888 ) , .f_count = ( (  l1887 ) .f_count ) } );
}

static  struct Slice_299   to_dash_slice1193 (    struct List_300  l1887 ) {
    struct List_3 *  ptr1888 = ( ( (  l1887 ) .f_elements ) .f_ptr );
    return ( (struct Slice_299) { .f_ptr = (  ptr1888 ) , .f_count = ( (  l1887 ) .f_count ) } );
}

static  struct SliceAddressIter_653   addresses1194 (    struct List_300  l1891 ) {
    return ( (  addresses1102 ) ( ( (  to_dash_slice1193 ) ( (  l1891 ) ) ) ) );
}

static  size_t   size1195 (    struct List_3 *  l1894 ) {
    return ( ( * (  l1894 ) ) .f_count );
}

static  size_t   size1196 (    struct List_300 *  l1894 ) {
    return ( ( * (  l1894 ) ) .f_count );
}

static  struct Maybe_1080   hex_dash_digit1197 (    char  c1922 ) {
    if ( ( (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1080_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u81062 ) ( (  c1922 ) ) ) , ( (  char_dash_u81062 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1080_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81062 ) ( (  c1922 ) ) ) , ( (  char_dash_u81062 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp885 ( (  c1922 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1080_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81062 ) ( (  c1922 ) ) ) , ( (  char_dash_u81062 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1080) { .tag = Maybe_1080_None_t } );
}

static  uint32_t   lam1199 (    char  c1927 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64295 ) ( ( (  or_dash_fail1079 ) ( ( (  hex_dash_digit1197 ) ( (  c1927 ) ) ) ,  ( ( StrConcat_937_StrConcat ) ( ( ( StrConcat_938_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1927 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1200 (    uint32_t  elem1929 ,    uint32_t  b1931 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1931 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1929 ) ) );
}

static  uint32_t   from_dash_hex1198 (    const char*  arr1925 ) {
    return ( (  reduce745 ) ( ( (  map351 ) ( (  arr1925 ) ,  (  lam1199 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1200 ) ) );
}

static  struct Maybe_285   get1201 (    const char*  s1965 ) {
    return ( (  from_dash_nullable_dash_c_dash_str284 ) ( ( ( getenv ) ( (  s1965 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1202 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1203 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1204 (    uint32_t  x1942 ,    uint32_t  y1944 ) {
    uint32_t  x1945 = (  op_dash_add92 ( (  x1942 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1946 = (  op_dash_add92 ( (  y1944 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str1033 ) ( ( ( StrConcat_1034_StrConcat ) ( ( ( StrConcat_1035_StrConcat ) ( ( ( StrConcat_1036_StrConcat ) ( ( ( StrConcat_919_StrConcat ) ( ( "\x1b[" ) ,  (  y1946 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1945 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1205 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_813   get_dash_dimensions1206 (  ) {
    struct Winsize_190  temp1207 = ( ( (  zeroed252 ) ( ) ) );
    struct Winsize_190 *  ws1950 = ( &temp1207 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws1950 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1950 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_813_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_813_Tuple2 ) ( ( (  u16_dash_u32291 ) ( ( ( * (  ws1950 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32291 ) ( ( ( * (  ws1950 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1208 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1209 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_666   query_dash_palette1210 (  ) {
    struct Maybe_285  colorterm1966 = ( (  get1201 ) ( ( "COLORTERM" ) ) );
    struct Maybe_285  dref1967 = (  colorterm1966 );
    if ( dref1967.tag == Maybe_285_Just_t ) {
        if ( ( (  eq1064 ( ( dref1967 .stuff .Maybe_285_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq1064 ( ( dref1967 .stuff .Maybe_285_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_666_PaletteRGB );
        }
    }
    else if ( dref1967.tag == Maybe_285_None_t ) {
    }
    struct Maybe_285  dref1969 = ( (  get1201 ) ( ( "TERM" ) ) );
    if ( dref1969.tag == Maybe_285_Just_t ) {
        if ( (  eq1064 ( ( dref1969 .stuff .Maybe_285_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_666_Palette8 );
        }
    }
    else if ( dref1969.tag == Maybe_285_None_t ) {
    }
    return ( ColorPalette_666_Palette16 );
}

static  enum Unit_13   set_dash_fg81211 (    enum Color8_60  color1985 ) {
    enum Color8_60  dref1986 = (  color1985 );
    switch (  dref1986 ) {
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

static  enum Unit_13   set_dash_fg161212 (    enum Color16_61  color1989 ) {
    enum Color16_61  dref1990 = (  color1989 );
    switch (  dref1990 ) {
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

static  enum Unit_13   set_dash_bg81213 (    enum Color8_60  color1993 ) {
    enum Color8_60  dref1994 = (  color1993 );
    switch (  dref1994 ) {
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

static  enum Unit_13   set_dash_bg161214 (    enum Color16_61  color1997 ) {
    enum Color16_61  dref1998 = (  color1997 );
    switch (  dref1998 ) {
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

static  enum Unit_13   reset_dash_colors1215 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1216 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561217 (    uint8_t  color2003 ) {
    ( (  print_dash_str1031 ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_1027_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2003 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561218 (    uint8_t  color2006 ) {
    ( (  print_dash_str1031 ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_1027_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2006 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1219 (    struct RGB_62  c2026 ) {
    ( (  print_dash_str1021 ) ( ( ( StrConcat_1022_StrConcat ) ( ( ( StrConcat_1023_StrConcat ) ( ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_1025_StrConcat ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_1027_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2026 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2026 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2026 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1220 (    struct RGB_62  c2029 ) {
    ( (  print_dash_str1021 ) ( ( ( StrConcat_1022_StrConcat ) ( ( ( StrConcat_1023_StrConcat ) ( ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_1025_StrConcat ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_1027_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2029 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2029 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2029 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1221 (    struct Color_59  c2047 ) {
    struct Color_59  dref2048 = (  c2047 );
    if ( dref2048.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1208 ) ( ) );
    }
    else if ( dref2048.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81211 ) ( ( dref2048 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2048.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161212 ) ( ( dref2048 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2048.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561217 ) ( ( dref2048 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2048.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1219 ) ( ( dref2048 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1222 (    struct Color_59  c2055 ) {
    struct Color_59  dref2056 = (  c2055 );
    if ( dref2056.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1209 ) ( ) );
    }
    else if ( dref2056.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81213 ) ( ( dref2056 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2056.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161214 ) ( ( dref2056 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2056.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561218 ) ( ( dref2056 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2056.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1220 ) ( ( dref2056 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1223 {
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    ;
};

static  enum Unit_13   lam585 (   struct env585 env ,    char  c2112 ) {
    struct funenv323  temp1224 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1224.fun ( temp1224.env ,  ( & ( ( * ( env.builder2108 ) ) .f_chars ) ) ,  (  c2112 ) ) );
}

static  enum Unit_13   write1223 (   struct env1223 env ,    struct StrBuilder_586 *  builder2108 ,    const char*  s2110 ) {
    struct env585 envinst585 = {
        .builder2108 =  builder2108 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each584 ) ( ( (  chars893 ) ( (  s2110 ) ) ) ,  ( (struct funenv585){ .fun = lam585, .env = envinst585 } ) ) );
    return ( Unit_13_Unit );
}

struct env1225 {
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    ;
    ;
};

static  enum Unit_13   lam632 (   struct env632 env ,    char  c2112 ) {
    struct funenv323  temp1226 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1226.fun ( temp1226.env ,  ( & ( ( * ( env.builder2108 ) ) .f_chars ) ) ,  (  c2112 ) ) );
}

static  enum Unit_13   write1225 (   struct env1225 env ,    struct StrBuilder_586 *  builder2108 ,    char  s2110 ) {
    struct env632 envinst632 = {
        .builder2108 =  builder2108 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each631 ) ( ( (  chars894 ) ( (  s2110 ) ) ) ,  ( (struct funenv632){ .fun = lam632, .env = envinst632 } ) ) );
    return ( Unit_13_Unit );
}

struct env1227 {
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    ;
    ;
};

static  enum Unit_13   lam645 (   struct env645 env ,    char  c2112 ) {
    struct funenv323  temp1228 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1228.fun ( temp1228.env ,  ( & ( ( * ( env.builder2108 ) ) .f_chars ) ) ,  (  c2112 ) ) );
}

static  enum Unit_13   write1227 (   struct env1227 env ,    struct StrBuilder_586 *  builder2108 ,    struct TakeWhile_522  s2110 ) {
    struct env645 envinst645 = {
        .builder2108 =  builder2108 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each644 ) ( ( (  chars1049 ) ( (  s2110 ) ) ) ,  ( (struct funenv645){ .fun = lam645, .env = envinst645 } ) ) );
    return ( Unit_13_Unit );
}

struct env1229 {
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    ;
    ;
};

static  enum Unit_13   lam649 (   struct env649 env ,    char  c2112 ) {
    struct funenv323  temp1230 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp1230.fun ( temp1230.env ,  ( & ( ( * ( env.builder2108 ) ) .f_chars ) ) ,  (  c2112 ) ) );
}

static  enum Unit_13   write1229 (   struct env1229 env ,    struct StrBuilder_586 *  builder2108 ,    struct TakeWhile_527  s2110 ) {
    struct env649 envinst649 = {
        .builder2108 =  builder2108 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each648 ) ( ( (  chars1050 ) ( (  s2110 ) ) ) ,  ( (struct funenv649){ .fun = lam649, .env = envinst649 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1179 {
    enum Unit_13  (*fun) (  struct env1179  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1179 env;
};

struct env1231 {
    struct env1179 envinst1179;
    ;
    ;
};

static  enum Unit_13   write_dash_slice1231 (   struct env1231 env ,    struct StrBuilder_586 *  builder2115 ,    struct Slice_5  s2117 ) {
    struct funenv1179  temp1232 = ( (struct funenv1179){ .fun = add_dash_all1179, .env =  env.envinst1179  } );
    ( temp1232.fun ( temp1232.env ,  ( & ( ( * (  builder2115 ) ) .f_chars ) ) ,  (  s2117 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char641 (   struct env641 env ,    struct StrBuilder_586 *  builder2120 ,    char  c2122 ) {
    struct funenv323  temp1233 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    ( temp1233.fun ( temp1233.env ,  ( & ( ( * (  builder2120 ) ) .f_chars ) ) ,  (  c2122 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1174 {
    enum Unit_13  (*fun) (  struct env1174  ,    struct List_3 *  );
    struct env1174 env;
};

struct env1234 {
    struct env1174 envinst1174;
    ;
    ;
};

static  enum Unit_13   pop1234 (   struct env1234 env ,    struct StrBuilder_586 *  sb2130 ) {
    struct funenv1174  temp1235 = ( (struct funenv1174){ .fun = pop1174, .env =  env.envinst1174  } );
    return ( temp1235.fun ( temp1235.env ,  ( & ( ( * (  sb2130 ) ) .f_chars ) ) ) );
}

static  size_t   count1236 (    struct StrBuilder_586 *  sb2133 ) {
    return ( ( ( * (  sb2133 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_586   mk1237 (    enum CAllocator_4  al2136 ) {
    return ( (struct StrBuilder_586) { .f_chars = ( (  mk1156 ) ( (  al2136 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1238 (    struct StrBuilder_586 *  builder2142 ) {
    return ( (  to_dash_slice1192 ) ( ( ( * (  builder2142 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1239 (    struct StrBuilder_586 *  builder2145 ) {
    ( (  free1158 ) ( ( & ( ( * (  builder2145 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1223 {
    enum Unit_13  (*fun) (  struct env1223  ,    struct StrBuilder_586 *  ,    const char*  );
    struct env1223 env;
};

struct env1240 {
    ;
    struct env641 envinst641;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1223 envinst1223;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1240 (   struct env1240 env ,    const char*  s2159 ,    enum CAllocator_4  al2161 ) {
    struct StrBuilder_586  temp1241 = ( (  mk1237 ) ( (  al2161 ) ) );
    struct StrBuilder_586 *  sb2162 = ( &temp1241 );
    struct funenv1223  temp1242 = ( (struct funenv1223){ .fun = write1223, .env =  env.envinst1223  } );
    ( temp1242.fun ( temp1242.env ,  (  sb2162 ) ,  (  s2159 ) ) );
    struct funenv641  temp1243 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
    ( temp1243.fun ( temp1243.env ,  (  sb2162 ) ,  ( (  nullchar338 ) ( ) ) ) );
    struct DynStr_136  dynstr2163 = ( (  as_dash_str910 ) ( (  sb2162 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2163 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2163 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1225 {
    enum Unit_13  (*fun) (  struct env1225  ,    struct StrBuilder_586 *  ,    char  );
    struct env1225 env;
};

struct env1244 {
    ;
    ;
    struct env641 envinst641;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1225 envinst1225;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1244 (   struct env1244 env ,    char  s2159 ,    enum CAllocator_4  al2161 ) {
    struct StrBuilder_586  temp1245 = ( (  mk1237 ) ( (  al2161 ) ) );
    struct StrBuilder_586 *  sb2162 = ( &temp1245 );
    struct funenv1225  temp1246 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
    ( temp1246.fun ( temp1246.env ,  (  sb2162 ) ,  (  s2159 ) ) );
    struct funenv641  temp1247 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
    ( temp1247.fun ( temp1247.env ,  (  sb2162 ) ,  ( (  nullchar338 ) ( ) ) ) );
    struct DynStr_136  dynstr2163 = ( (  as_dash_str910 ) ( (  sb2162 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2163 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2163 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1227 {
    enum Unit_13  (*fun) (  struct env1227  ,    struct StrBuilder_586 *  ,    struct TakeWhile_522  );
    struct env1227 env;
};

struct env1248 {
    ;
    ;
    ;
    ;
    struct env641 envinst641;
    ;
    ;
    ;
    ;
    ;
    struct env1227 envinst1227;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1248 (   struct env1248 env ,    struct TakeWhile_522  s2159 ,    enum CAllocator_4  al2161 ) {
    struct StrBuilder_586  temp1249 = ( (  mk1237 ) ( (  al2161 ) ) );
    struct StrBuilder_586 *  sb2162 = ( &temp1249 );
    struct funenv1227  temp1250 = ( (struct funenv1227){ .fun = write1227, .env =  env.envinst1227  } );
    ( temp1250.fun ( temp1250.env ,  (  sb2162 ) ,  (  s2159 ) ) );
    struct funenv641  temp1251 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
    ( temp1251.fun ( temp1251.env ,  (  sb2162 ) ,  ( (  nullchar338 ) ( ) ) ) );
    struct DynStr_136  dynstr2163 = ( (  as_dash_str910 ) ( (  sb2162 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2163 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2163 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1229 {
    enum Unit_13  (*fun) (  struct env1229  ,    struct StrBuilder_586 *  ,    struct TakeWhile_527  );
    struct env1229 env;
};

struct env1252 {
    ;
    ;
    ;
    ;
    struct env641 envinst641;
    ;
    ;
    ;
    ;
    ;
    struct env1229 envinst1229;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1252 (   struct env1252 env ,    struct TakeWhile_527  s2159 ,    enum CAllocator_4  al2161 ) {
    struct StrBuilder_586  temp1253 = ( (  mk1237 ) ( (  al2161 ) ) );
    struct StrBuilder_586 *  sb2162 = ( &temp1253 );
    struct funenv1229  temp1254 = ( (struct funenv1229){ .fun = write1229, .env =  env.envinst1229  } );
    ( temp1254.fun ( temp1254.env ,  (  sb2162 ) ,  (  s2159 ) ) );
    struct funenv641  temp1255 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
    ( temp1255.fun ( temp1255.env ,  (  sb2162 ) ,  ( (  nullchar338 ) ( ) ) ) );
    struct DynStr_136  dynstr2163 = ( (  as_dash_str910 ) ( (  sb2162 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2163 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2163 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1240 {
    struct DynStr_136  (*fun) (  struct env1240  ,    const char*  ,    enum CAllocator_4  );
    struct env1240 env;
};

struct env1256 {
    ;
    ;
    ;
    struct env1240 envinst1240;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1256 (   struct env1256 env ,    const char*  s2166 ,    enum CAllocator_4  al2168 ) {
    struct funenv1240  temp1257 = ( (struct funenv1240){ .fun = mk_dash_dyn_dash_str1240, .env =  env.envinst1240  } );
    return ( ( (  cast198 ) ( ( ( ( temp1257.fun ( temp1257.env ,  (  s2166 ) ,  (  al2168 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1248 {
    struct DynStr_136  (*fun) (  struct env1248  ,    struct TakeWhile_522  ,    enum CAllocator_4  );
    struct env1248 env;
};

struct env1258 {
    ;
    ;
    struct env1248 envinst1248;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1258 (   struct env1258 env ,    struct TakeWhile_522  s2166 ,    enum CAllocator_4  al2168 ) {
    struct funenv1248  temp1259 = ( (struct funenv1248){ .fun = mk_dash_dyn_dash_str1248, .env =  env.envinst1248  } );
    return ( ( (  cast198 ) ( ( ( ( temp1259.fun ( temp1259.env ,  (  s2166 ) ,  (  al2168 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1252 {
    struct DynStr_136  (*fun) (  struct env1252  ,    struct TakeWhile_527  ,    enum CAllocator_4  );
    struct env1252 env;
};

struct env1260 {
    ;
    ;
    struct env1252 envinst1252;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1260 (   struct env1260 env ,    struct TakeWhile_527  s2166 ,    enum CAllocator_4  al2168 ) {
    struct funenv1252  temp1261 = ( (struct funenv1252){ .fun = mk_dash_dyn_dash_str1252, .env =  env.envinst1252  } );
    return ( ( (  cast198 ) ( ( ( ( temp1261.fun ( temp1261.env ,  (  s2166 ) ,  (  al2168 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1262 (  ) {
    struct timespec  temp1263 = ( (  undefined138 ) ( ) );
    struct timespec *  t2321 = ( &temp1263 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2321 ) ) );
    return ( * (  t2321 ) );
}

struct Duration_1265 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1264 (    struct Duration_1265  l2330 ,    struct Duration_1265  r2332 ) {
    enum Ordering_10  scmp2333 = ( (  cmp79 ) ( ( (  l2330 ) .f_secs ) ,  ( (  r2332 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2333 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2333 );
    }
    return ( (  cmp79 ) ( ( (  l2330 ) .f_nsecs ) ,  ( (  r2332 ) .f_nsecs ) ) );
}

static  struct Duration_1265   diff1266 (    struct timespec  l2336 ,    struct timespec  r2338 ) {
    int64_t  secdiff2339 = (  op_dash_sub84 ( ( (  l2336 ) .tv_sec ) , ( (  r2338 ) .tv_sec ) ) );
    int64_t  nsdiff2340 = (  op_dash_sub84 ( ( (  l2336 ) .tv_nsec ) , ( (  r2338 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2341 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2340 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2339 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1265) { .f_secs = (  secdiff2339 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2340 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2339 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1265) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2340 ) } );
            } else {
                return ( (struct Duration_1265) { .f_secs = (  op_dash_sub84 ( (  secdiff2339 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2341 ) , (  nsdiff2340 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2339 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1265) { .f_secs = (  secdiff2339 ) , .f_nsecs = (  nsdiff2340 ) } );
        } else {
            return ( (struct Duration_1265) { .f_secs = (  op_dash_sub84 ( (  secdiff2339 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2341 ) , (  nsdiff2340 ) ) ) } );
        }
    }
}

static  struct Duration_1265   duration_dash_from_dash_ns1267 (    int64_t  ns2344 ) {
    int64_t  ns_dash_in_dash_secs2345 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1265) { .f_secs = (  op_dash_div85 ( (  ns2344 ) , (  ns_dash_in_dash_secs2345 ) ) ) , .f_nsecs = ( (  mod880 ) ( (  ns2344 ) ,  (  ns_dash_in_dash_secs2345 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1268 (    struct Duration_1265  d2356 ) {
    int64_t  ns_dash_in_dash_secs2357 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2356 ) .f_secs ) , (  ns_dash_in_dash_secs2357 ) ) ) , ( (  d2356 ) .f_nsecs ) ) );
}

static  uint32_t   u32_dash_or1269 (    uint32_t  l2360 ,    uint32_t  r2362 ) {
    return ( (  l2360 ) | (  r2362 ) );
}

static  uint32_t   u32_dash_ors1270 (    struct SmolArray_103  vals2365 ) {
    return ( (  reduce709 ) ( (  vals2365 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1269 ) ) );
}

static  uint32_t   u32_dash_ors1271 (    struct SmolArray_106  vals2365 ) {
    return ( (  reduce726 ) ( (  vals2365 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1269 ) ) );
}

static  uint32_t   u32_dash_ors1272 (    struct SmolArray_109  vals2365 ) {
    return ( (  reduce733 ) ( (  vals2365 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1269 ) ) );
}

static  uint32_t   u32_dash_and1273 (    uint32_t  l2368 ,    uint32_t  r2370 ) {
    return ( (  l2368 ) & (  r2370 ) );
}

static  uint32_t   u32_dash_neg1274 (    uint32_t  l2373 ) {
    return ( ~ (  l2373 ) );
}

static  struct Scanner_306   mk1275 (    struct DynStr_136  s2412 ) {
    return ( (struct Scanner_306) { .f_s = ( (  chars917 ) ( (  s2412 ) ) ) } );
}

static  struct Maybe_741   scan_dash_int1276 (    struct Scanner_306 *  sc2415 ) {
    struct TakeWhile_518  digit_dash_chars2416 = ( (  take_dash_while541 ) ( (  sc2415 ) ,  (  is_dash_digit1141 ) ) );
    if ( ( (  null809 ) ( (  digit_dash_chars2416 ) ) ) ) {
        return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
    }
    ( (  drop_prime_811 ) ( (  sc2415 ) ,  ( (  count775 ) ( (  digit_dash_chars2416 ) ) ) ) );
    return ( (  parse_dash_int1143 ) ( (  digit_dash_chars2416 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1277 (  ) {
    struct Termios_141  temp1278 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2429 = ( &temp1278 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr220 ) ( (  orig_dash_termios2429 ) ) ) ) );
    struct Termios_141  raw2430 = ( * (  orig_dash_termios2429 ) );
    raw2430 .f_c_dash_lflag = ( (  u32_dash_and1273 ) ( ( (  raw2430 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1274 ) ( ( (  u32_dash_ors1270 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2430 .f_c_dash_iflag = ( (  u32_dash_and1273 ) ( ( (  raw2430 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1274 ) ( ( (  u32_dash_ors1271 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2430 .f_c_dash_oflag = ( (  u32_dash_and1273 ) ( ( (  raw2430 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1274 ) ( ( (  u32_dash_ors1272 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2430 .f_c_dash_cflag = ( (  u32_dash_or1269 ) ( ( (  raw2430 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1132 ) ( ( & ( (  raw2430 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1132 ) ( ( & ( (  raw2430 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr220 ) ( ( & (  raw2430 ) ) ) ) ) );
    return ( * (  orig_dash_termios2429 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1279 (    struct Termios_141 *  og_dash_termios2433 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr220 ) ( (  og_dash_termios2433 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1280 (    int32_t  timeout_dash_ms2437 ) {
    struct Pollfd_231  pfd2438 = ( (struct Pollfd_231) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr230 ) ( ( & (  pfd2438 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2437 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2439 = ( ( (  zeroed244 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr216 ) ( ( & (  c2439 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2439 ) ) );
}

static  enum Unit_13   flush_dash_stdout1281 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr278 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1282 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1283 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1285 {
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2443;
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

struct env1286 {
    bool *  should_dash_resize2443;
};

struct funenv1286 {
    enum Unit_13  (*fun) (  struct env1286  ,    int32_t  );
    struct env1286 env;
};

struct funenv1286  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1287 ) {
    struct funenv1286  temp1288 = _intr_sigarr [  __intr__sig1287 ];
    temp1288.fun ( temp1288.env ,  __intr__sig1287 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1289 ,   struct funenv1286  __intr__fun1290 ) {
    _intr_sigarr [  __intr__sig1289 ] =  __intr__fun1290;
    signal(  __intr__sig1289 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1286 (   struct env1286 env ,    int32_t  dref2450 ) {
    (* env.should_dash_resize2443 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_665   mk1285 (   struct env1285 env ) {
    struct Termios_141  og_dash_termios2445 = ( (  enable_dash_raw_dash_mode1277 ) ( ) );
    ( (  hide_dash_cursor1203 ) ( ) );
    ( (  reset_dash_colors1215 ) ( ) );
    ( (  clear_dash_screen1216 ) ( ) );
    ( (  enable_dash_mouse1282 ) ( ) );
    ( (  flush_dash_stdout1281 ) ( ) );
    enum ColorPalette_666  palette2446 = ( (  query_dash_palette1210 ) ( ) );
    struct Tuple2_813  dims2447 = ( (  get_dash_dimensions1206 ) ( ) );
    uint32_t  fps2448 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2449 = ( (  now1262 ) ( ) );
    struct env1286 envinst1286 = {
        .should_dash_resize2443 = env.should_dash_resize2443 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1286){ .fun = lam1286, .env = envinst1286 } ) ) );
    return ( (struct Tui_665) { .f_width = ( (  fst812 ) ( (  dims2447 ) ) ) , .f_height = ( (  snd814 ) ( (  dims2447 ) ) ) , .f_target_dash_fps = (  fps2448 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2449 ) , .f_fps_dash_ts = (  last_dash_sync2449 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2445 ) , .f_palette = (  palette2446 ) } );
}

static  enum Unit_13   sync1291 (    struct Tui_665 *  tui2453 ) {
    if ( (  eq42 ( ( ( * (  tui2453 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2454 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size292 ) ( ( ( * (  tui2453 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1292 = ( (  undefined138 ) ( ) );
    struct timespec *  now2455 = ( &temp1292 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2455 ) ) );
    int64_t  elapsed_dash_ns2456 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2455 ) ) .tv_sec ) , ( ( ( * (  tui2453 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2455 ) ) .tv_nsec ) , ( ( ( * (  tui2453 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2457 = (  op_dash_sub84 ( (  frame_dash_ns2454 ) , (  elapsed_dash_ns2456 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2457 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1293 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2457 ) } );
        struct timespec *  ts2458 = ( &temp1293 );
        ( ( nanosleep ) ( (  ts2458 ) ,  ( (  null_dash_ptr281 ) ( ) ) ) );
    }
    struct timespec  temp1294 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2459 = ( &temp1294 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2459 ) ) );
    (*  tui2453 ) .f_last_dash_sync = ( * (  last_dash_sync2459 ) );
    (*  tui2453 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2453 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2460 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2453 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2453 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2453 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2453 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2460 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2453 ) .f_actual_dash_fps = ( ( * (  tui2453 ) ) .f_fps_dash_count );
        (*  tui2453 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2453 ) .f_fps_dash_ts = ( ( * (  tui2453 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1295 (    struct Tui_665 *  tui2463 ) {
    ( (  disable_dash_mouse1283 ) ( ) );
    ( (  show_dash_cursor1202 ) ( ) );
    ( (  reset_dash_colors1215 ) ( ) );
    ( (  clear_dash_screen1216 ) ( ) );
    ( (  reset_dash_cursor_dash_position1205 ) ( ) );
    ( (  disable_dash_raw_dash_mode1279 ) ( ( & ( ( * (  tui2463 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1281 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_147   btn_dash_to_dash_mouse_dash_button1296 (    int64_t  btn2470 ) {
    return ( {  int32_t  dref2471 = ( (  i64_dash_i32289 ) ( (  btn2470 ) ) ) ;  dref2471 == 0 ? ( MouseButton_147_MouseLeft ) :  dref2471 == 1 ? ( MouseButton_147_MouseMiddle ) :  dref2471 == 2 ? ( MouseButton_147_MouseRight ) :  dref2471 == 64 ? ( MouseButton_147_ScrollUp ) :  dref2471 == 65 ? ( MouseButton_147_ScrollDown ) : ( (  panic_prime_1073 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1298 {
    enum {
        Maybe_1298_None_t,
        Maybe_1298_Just_t,
    } tag;
    union {
        struct {
            struct Key_562  field0;
        } Maybe_1298_Just_s;
    } stuff;
};

static struct Maybe_1298 Maybe_1298_Just (  struct Key_562  field0 ) {
    return ( struct Maybe_1298 ) { .tag = Maybe_1298_Just_t, .stuff = { .Maybe_1298_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1298   parse_dash_ss31297 (    char  c2474 ) {
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2474 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1298_Just ) ( ( (struct Key_562) { .tag = Key_562_F4_t } ) ) );
    }
    return ( (struct Maybe_1298) { .tag = Maybe_1298_None_t } );
}

static  struct Maybe_560   parse_dash_csi1299 (    struct DynStr_136  seq2477 ) {
    if ( (  eq45 ( ( ( (  seq2477 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
    }
    char  last2478 = (  elem_dash_get1109 ( ( (  seq2477 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2477 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1109 ( ( (  seq2477 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_306  temp1300 = ( (  mk1275 ) ( ( (  substr340 ) ( (  seq2477 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2477 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_306 *  sc2479 = ( &temp1300 );
        struct Maybe_741  dref2480 = ( (  scan_dash_int1276 ) ( (  sc2479 ) ) );
        if ( dref2480.tag == Maybe_741_None_t ) {
            return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
        }
        else if ( dref2480.tag == Maybe_741_Just_t ) {
            ( (  next531 ) ( (  sc2479 ) ) );
            struct Maybe_741  dref2482 = ( (  scan_dash_int1276 ) ( (  sc2479 ) ) );
            if ( dref2482.tag == Maybe_741_None_t ) {
                return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
            }
            else if ( dref2482.tag == Maybe_741_Just_t ) {
                ( (  next531 ) ( (  sc2479 ) ) );
                struct Maybe_741  dref2484 = ( (  scan_dash_int1276 ) ( (  sc2479 ) ) );
                if ( dref2484.tag == Maybe_741_None_t ) {
                    return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
                }
                else if ( dref2484.tag == Maybe_741_Just_t ) {
                    return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Mouse ) ( ( (struct MouseEvent_563) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1296 ) ( ( dref2480 .stuff .Maybe_741_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32289 ) ( ( dref2482 .stuff .Maybe_741_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32289 ) ( ( dref2484 .stuff .Maybe_741_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2477 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
    }
    if ( (  eq47 ( (  last2478 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_306  temp1301 = ( (  mk1275 ) ( (  seq2477 ) ) );
        struct Scanner_306 *  sc2486 = ( &temp1301 );
        struct Maybe_741  dref2487 = ( (  scan_dash_int1276 ) ( (  sc2486 ) ) );
        if ( dref2487.tag == Maybe_741_None_t ) {
            return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
        }
        else if ( dref2487.tag == Maybe_741_Just_t ) {
            return ( {  int32_t  dref2489 = ( (  i64_dash_i32289 ) ( ( dref2487 .stuff .Maybe_741_Just_s .field0 ) ) ) ;  dref2489 == 1 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Home_t } ) ) ) ) ) :  dref2489 == 2 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Insert_t } ) ) ) ) ) :  dref2489 == 3 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Delete_t } ) ) ) ) ) :  dref2489 == 4 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_End_t } ) ) ) ) ) :  dref2489 == 5 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_PageUp_t } ) ) ) ) ) :  dref2489 == 6 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_PageDown_t } ) ) ) ) ) :  dref2489 == 15 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F5_t } ) ) ) ) ) :  dref2489 == 17 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F6_t } ) ) ) ) ) :  dref2489 == 18 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F7_t } ) ) ) ) ) :  dref2489 == 19 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F8_t } ) ) ) ) ) :  dref2489 == 20 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F9_t } ) ) ) ) ) :  dref2489 == 21 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F10_t } ) ) ) ) ) :  dref2489 == 23 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F11_t } ) ) ) ) ) :  dref2489 == 24 ? ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_F12_t } ) ) ) ) ) : ( (struct Maybe_560) { .tag = Maybe_560_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
}

static  struct Maybe_560   read_dash_key1302 (  ) {
    char  temp1303 = ( (  undefined133 ) ( ) );
    char *  ch2491 = ( &temp1303 );
    struct Maybe_49  dref2492 = ( (  read_dash_byte1280 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2492.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
    }
    else if ( dref2492.tag == Maybe_49_Just_t ) {
        (*  ch2491 ) = ( dref2492 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2494 = ( (  i32_dash_char1063 ) ( ( (  u32_dash_i32294 ) ( ( (  u32_dash_or1269 ) ( ( (  i32_dash_u32286 ) ( ( (  char_dash_i32886 ) ( ( * (  ch2491 ) ) ) ) ) ) ,  ( (  from_dash_hex1198 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( ( Key_562_Ctrl ) ( (  letter2494 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u81062 ) ( ( * (  ch2491 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1302 ) ( ) );
        } else {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( ( Key_562_Char ) ( ( * (  ch2491 ) ) ) ) ) ) ) );
        }
    }
    char  temp1304 = ( (  undefined133 ) ( ) );
    char *  ch22495 = ( &temp1304 );
    struct Maybe_49  dref2496 = ( (  read_dash_byte1280 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2496.tag == Maybe_49_None_t ) {
        return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Escape_t } ) ) ) ) );
    }
    else if ( dref2496.tag == Maybe_49_Just_t ) {
        (*  ch22495 ) = ( dref2496 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22495 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_195  temp1305 = ( ( (  zeroed260 ) ( ) ) );
        struct Array_195 *  seq2498 = ( &temp1305 );
        int32_t  slen2499 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2499 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1306 = ( (  undefined133 ) ( ) );
            char *  sc2500 = ( &temp1306 );
            struct Maybe_49  dref2501 = ( (  read_dash_byte1280 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2501.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2501.tag == Maybe_49_Just_t ) {
                (*  sc2500 ) = ( dref2501 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1133 ) ( (  seq2498 ) ,  ( (  i32_dash_size288 ) ( (  slen2499 ) ) ) ,  ( * (  sc2500 ) ) ) );
            slen2499 = (  op_dash_add87 ( (  slen2499 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u81062 ) ( ( * (  sc2500 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u81062 ) ( ( * (  sc2500 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1299 ) ( ( (struct DynStr_136) { .f_contents = ( (  subslice312 ) ( ( (  as_dash_slice1134 ) ( (  seq2498 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size288 ) ( (  slen2499 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22495 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1307 = ( (  undefined133 ) ( ) );
        char *  sc2503 = ( &temp1307 );
        struct Maybe_49  dref2504 = ( (  read_dash_byte1280 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2504.tag == Maybe_49_None_t ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Escape_t } ) ) ) ) );
        }
        else if ( dref2504.tag == Maybe_49_Just_t ) {
            (*  sc2503 ) = ( dref2504 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1298  dref2506 = ( (  parse_dash_ss31297 ) ( ( * (  sc2503 ) ) ) );
        if ( dref2506.tag == Maybe_1298_None_t ) {
            return ( (struct Maybe_560) { .tag = Maybe_560_None_t } );
        }
        else if ( dref2506.tag == Maybe_1298_Just_t ) {
            return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( dref2506 .stuff .Maybe_1298_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_560_Just ) ( ( ( InputEvent_561_Key ) ( ( (struct Key_562) { .tag = Key_562_Escape_t } ) ) ) ) );
}

struct env1308 {
    bool *  should_dash_resize2443;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1308 (   struct env1308 env ,    struct Tui_665 *  tui2510 ) {
    if ( ( ! ( * ( env.should_dash_resize2443 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2443 ) = ( false );
    struct Tuple2_813  dim2511 = ( (  get_dash_dimensions1206 ) ( ) );
    uint32_t  w2512 = ( (  fst812 ) ( (  dim2511 ) ) );
    uint32_t  h2513 = ( (  snd814 ) ( (  dim2511 ) ) );
    (*  tui2510 ) .f_width = (  w2512 );
    (*  tui2510 ) .f_height = (  h2513 );
    return ( true );
}

static  struct Cell_58   lam1310 (    struct Cell_58  dref2531 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1311 (    struct Cell_58  dref2533 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_664   mk_dash_screen1309 (    struct Tui_665 *  tui2527 ,    enum CAllocator_4  al2529 ) {
    struct Slice_592  cur2530 = ( (  allocate1122 ) ( (  al2529 ) ,  ( (  u32_dash_size292 ) ( (  op_dash_mul94 ( ( ( * (  tui2527 ) ) .f_width ) , ( ( * (  tui2527 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1110 ) ( (  cur2530 ) ,  (  lam1310 ) ) );
    struct Slice_592  prev2532 = ( (  allocate1122 ) ( (  al2529 ) ,  ( (  u32_dash_size292 ) ( (  op_dash_mul94 ( ( ( * (  tui2527 ) ) .f_width ) , ( ( * (  tui2527 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1111 ) ( (  prev2532 ) ,  (  lam1311 ) ) );
    return ( (struct Screen_664) { .f_current = (  cur2530 ) , .f_previous = (  prev2532 ) , .f_al = (  al2529 ) , .f_tui = (  tui2527 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1312 (    struct Screen_664 *  screen2536 ) {
    enum CAllocator_4  al2537 = ( ( * (  screen2536 ) ) .f_al );
    ( (  free1129 ) ( (  al2537 ) ,  ( ( * (  screen2536 ) ) .f_current ) ) );
    ( (  free1129 ) ( (  al2537 ) ,  ( ( * (  screen2536 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1314 (    struct Cell_58  dref2541 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1313 (    struct Screen_664 *  screen2540 ) {
    ( (  map1112 ) ( ( ( * (  screen2540 ) ) .f_current ) ,  (  lam1314 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1316 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1315 (    struct RenderState_1316 *  rs2545 ,    struct Cell_58 *  c2547 ,    uint32_t  x2549 ,    uint32_t  y2551 ) {
    if ( ( ( !  eq42 ( (  x2549 ) , ( ( * (  rs2545 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2551 ) , ( ( * (  rs2545 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1204 ) ( (  x2549 ) ,  (  y2551 ) ) );
        (*  rs2545 ) .f_x = (  x2549 );
        (*  rs2545 ) .f_y = (  y2551 );
    }
    char  char2552 = ( ( * (  c2547 ) ) .f_c );
    struct Color_59  bg2553 = ( ( * (  c2547 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2552 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2552 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2552 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2552 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2553 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2545 ) ) .f_fg ) , ( ( * (  c2547 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1221 ) ( ( ( * (  c2547 ) ) .f_fg ) ) );
        (*  rs2545 ) .f_fg = ( ( * (  c2547 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2545 ) ) .f_bg ) , (  bg2553 ) ) ) ) {
        ( (  set_dash_bg1222 ) ( (  bg2553 ) ) );
        (*  rs2545 ) .f_bg = (  bg2553 );
    }
    ( (  print_dash_str28 ) ( (  char2552 ) ) );
    (*  rs2545 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2545 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1317 (    struct Screen_664 *  screen2556 ) {
    int32_t  w2557 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2556 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2558 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2556 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1316  temp1318 = ( (struct RenderState_1316) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1316 *  rs2559 = ( &temp1318 );
    ( (  move_dash_cursor_dash_to1204 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_380  temp1319 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2558 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1320 =  next381 (&temp1319);
        if (  __cond1320 .tag == 0 ) {
            break;
        }
        int32_t  y2561 =  __cond1320 .stuff .Maybe_346_Just_s .field0;
        struct RangeIter_380  temp1321 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2557 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1322 =  next381 (&temp1321);
            if (  __cond1322 .tag == 0 ) {
                break;
            }
            int32_t  x2563 =  __cond1322 .stuff .Maybe_346_Just_s .field0;
            size_t  i2564 = ( (  i32_dash_size288 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2561 ) , (  w2557 ) ) ) , (  x2563 ) ) ) ) );
            struct Cell_58 *  cur2565 = ( (  get_dash_ptr1089 ) ( ( ( * (  screen2556 ) ) .f_current ) ,  (  i2564 ) ) );
            struct Cell_58 *  prev2566 = ( (  get_dash_ptr1089 ) ( ( ( * (  screen2556 ) ) .f_previous ) ,  (  i2564 ) ) );
            if ( ( ( !  eq57 ( (  cur2565 ) , (  prev2566 ) ) ) || ( ( * (  screen2556 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2559 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2559 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1315 ) ( (  rs2559 ) ,  (  cur2565 ) ,  ( (  i32_dash_u32286 ) ( (  x2563 ) ) ) ,  ( (  i32_dash_u32286 ) ( (  y2561 ) ) ) ) );
                (*  prev2566 ) = ( * (  cur2565 ) );
            }
        }
    }
    (*  screen2556 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1215 ) ( ) );
    ( (  flush_dash_stdout1281 ) ( ) );
    return ( ( * (  rs2559 ) ) .f_changes );
}

struct funenv1308 {
    bool  (*fun) (  struct env1308  ,    struct Tui_665 *  );
    struct env1308 env;
};

struct env1323 {
    ;
    ;
    struct env1308 envinst1308;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1323 (   struct env1323 env ,    struct Screen_664 *  screen2569 ) {
    struct Tui_665 *  tui2570 = ( ( * (  screen2569 ) ) .f_tui );
    struct funenv1308  temp1324 = ( (struct funenv1308){ .fun = update_dash_dimensions1308, .env =  env.envinst1308  } );
    if ( ( ! ( temp1324.fun ( temp1324.env ,  (  tui2570 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2569 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2571 = ( ( * ( ( * (  screen2569 ) ) .f_tui ) ) .f_width );
    uint32_t  h2572 = ( ( * ( ( * (  screen2569 ) ) .f_tui ) ) .f_height );
    size_t  nusz2573 = ( (  u32_dash_size292 ) ( (  op_dash_mul94 ( (  w2571 ) , (  h2572 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2573 ) , ( ( ( * (  screen2569 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_664  nuscreen2574 = ( (  mk_dash_screen1309 ) ( (  tui2570 ) ,  ( ( * (  screen2569 ) ) .f_al ) ) );
    (*  screen2569 ) .f_current = ( (  nuscreen2574 ) .f_current );
    (*  screen2569 ) .f_previous = ( (  nuscreen2574 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1325 (    struct Screen_664 *  screen2577 ,    struct Color_59  c2579 ) {
    (*  screen2577 ) .f_default_dash_fg = (  c2579 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1326 (    struct Screen_664 *  screen2582 ,    struct Color_59  c2584 ) {
    (*  screen2582 ) .f_default_dash_bg = (  c2584 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1327 (    struct Screen_664 *  screen2587 ,    struct Color_59  fg2589 ,    struct Color_59  bg2591 ) {
    (*  screen2587 ) .f_default_dash_fg = (  fg2589 );
    (*  screen2587 ) .f_default_dash_bg = (  bg2591 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1083   get_dash_cell_dash_ptr1328 (    struct Screen_664 *  screen2598 ,    int32_t  x2600 ,    int32_t  y2602 ) {
    int32_t  w2603 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2598 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2600 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2600 ) , (  w2603 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1083) { .tag = Maybe_1083_None_t } );
    }
    if ( ( (  cmp80 ( (  y2602 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2602 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2598 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1083) { .tag = Maybe_1083_None_t } );
    }
    size_t  i2604 = ( (  i32_dash_size288 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2602 ) , (  w2603 ) ) ) , (  x2600 ) ) ) ) );
    return ( ( Maybe_1083_Just ) ( ( (  get_dash_ptr1089 ) ( ( ( * (  screen2598 ) ) .f_current ) ,  (  i2604 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1329 (    struct Screen_664 *  screen2607 ) {
    struct RangeIter_380  temp1330 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2607 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1331 =  next381 (&temp1330);
        if (  __cond1331 .tag == 0 ) {
            break;
        }
        int32_t  y2609 =  __cond1331 .stuff .Maybe_346_Just_s .field0;
        struct RangeIter_380  temp1332 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2607 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1333 =  next381 (&temp1332);
            if (  __cond1333 .tag == 0 ) {
                break;
            }
            int32_t  x2611 =  __cond1333 .stuff .Maybe_346_Just_s .field0;
            struct Cell_58 *  cell2612 = ( (  or_dash_fail1082 ) ( ( (  get_dash_cell_dash_ptr1328 ) ( (  screen2607 ) ,  (  x2611 ) ,  (  y2609 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2612 ) .f_bg = ( ( * (  screen2607 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1334 (    struct Screen_664 *  screen2615 ,    char  c2617 ,    int32_t  x2619 ,    int32_t  y2621 ) {
    int32_t  w2622 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2615 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp80 ( (  x2619 ) , (  w2622 ) ) != 0 ) || (  cmp80 ( (  y2621 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2615 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp80 ( (  x2619 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) || (  cmp80 ( (  y2621 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2623 = ( (  i32_dash_size288 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2621 ) , (  w2622 ) ) ) , (  x2619 ) ) ) ) );
    struct Color_59  fg2624 = ( ( * (  screen2615 ) ) .f_default_dash_fg );
    struct Color_59  bg2625 = ( ( * (  screen2615 ) ) .f_default_dash_bg );
    char  c2626 = (  c2617 );
    ( (  set1098 ) ( ( ( * (  screen2615 ) ) .f_current ) ,  (  i2623 ) ,  ( (struct Cell_58) { .f_c = (  c2626 ) , .f_fg = (  fg2624 ) , .f_bg = (  bg2625 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam663 (   struct env663 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1335 (    struct Screen_664 *  screen2629 ,    int32_t  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env663 envinst663 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each662 ) ( ( (  zip499 ) ( ( (  chars898 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv663){ .fun = lam663, .env = envinst663 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam670 (   struct env670 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1336 (    struct Screen_664 *  screen2629 ,    struct StrConcat_904  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env670 envinst670 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each669 ) ( ( (  zip501 ) ( ( (  chars1040 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv670){ .fun = lam670, .env = envinst670 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam674 (   struct env674 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1337 (    struct Screen_664 *  screen2629 ,    struct StrConcat_919  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env674 envinst674 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each673 ) ( ( (  zip503 ) ( ( (  chars1041 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv674){ .fun = lam674, .env = envinst674 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam678 (   struct env678 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1338 (    struct Screen_664 *  screen2629 ,    struct StrConcat_921  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env678 envinst678 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each677 ) ( ( (  zip505 ) ( ( (  chars1042 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv678){ .fun = lam678, .env = envinst678 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam682 (   struct env682 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1339 (    struct Screen_664 *  screen2629 ,    struct StrConcat_947  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env682 envinst682 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each681 ) ( ( (  zip507 ) ( ( (  chars1043 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv682){ .fun = lam682, .env = envinst682 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam686 (   struct env686 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1340 (    struct Screen_664 *  screen2629 ,    struct StrConcat_17  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env686 envinst686 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each685 ) ( ( (  zip509 ) ( ( (  chars988 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv686){ .fun = lam686, .env = envinst686 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam690 (   struct env690 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1341 (    struct Screen_664 *  screen2629 ,    struct StrConcat_949  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env690 envinst690 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each689 ) ( ( (  zip511 ) ( ( (  chars952 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv690){ .fun = lam690, .env = envinst690 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam694 (   struct env694 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1342 (    struct Screen_664 *  screen2629 ,    struct StrConcat_956  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env694 envinst694 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each693 ) ( ( (  zip513 ) ( ( (  chars1044 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv694){ .fun = lam694, .env = envinst694 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam698 (   struct env698 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1343 (    struct Screen_664 *  screen2629 ,    struct StrConcat_961  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env698 envinst698 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each697 ) ( ( (  zip501 ) ( ( (  chars1045 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv698){ .fun = lam698, .env = envinst698 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam702 (   struct env702 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1344 (    struct Screen_664 *  screen2629 ,    struct StrConcat_975  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env702 envinst702 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each701 ) ( ( (  zip501 ) ( ( (  chars1046 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv702){ .fun = lam702, .env = envinst702 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam706 (   struct env706 env ,    struct Tuple2_370  dref2640 ) {
    ( (  put_dash_char1334 ) ( ( env.screen2629 ) ,  ( dref2640 .field0 ) ,  (  op_dash_add87 ( ( env.x2638 ) , ( dref2640 .field1 ) ) ) ,  ( env.y2635 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1345 (    struct Screen_664 *  screen2629 ,    struct StrConcat_979  s2631 ,    int32_t  x2633 ,    int32_t  y2635 ) {
    int32_t  w2636 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2635 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2635 ) , ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2637 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2635 ) , (  w2636 ) ) ) , (  x2633 ) ) );
    int32_t  x2638 = ( (  min883 ) ( (  x2633 ) ,  (  w2636 ) ) );
    size_t  max_dash_len2639 = ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  w2636 ) , (  x2638 ) ) ) ) );
    struct env706 envinst706 = {
        .y2635 =  y2635 ,
        .screen2629 =  screen2629 ,
        .x2638 =  x2638 ,
    };
    ( (  for_dash_each705 ) ( ( (  zip515 ) ( ( (  chars1047 ) ( (  s2631 ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv706){ .fun = lam706, .env = envinst706 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1346 (    struct Screen_664 *  screen2645 ,    int32_t  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count779 ) ( ( (  chars898 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1335 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1347 (    struct Screen_664 *  screen2645 ,    struct StrConcat_904  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count781 ) ( ( (  chars1040 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1336 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1348 (    struct Screen_664 *  screen2645 ,    struct StrConcat_919  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count783 ) ( ( (  chars1041 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1337 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1349 (    struct Screen_664 *  screen2645 ,    struct StrConcat_921  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count785 ) ( ( (  chars1042 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1338 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1350 (    struct Screen_664 *  screen2645 ,    struct StrConcat_947  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count787 ) ( ( (  chars1043 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1339 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1351 (    struct Screen_664 *  screen2645 ,    struct StrConcat_17  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count789 ) ( ( (  chars988 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1340 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1352 (    struct Screen_664 *  screen2645 ,    struct StrConcat_949  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count791 ) ( ( (  chars952 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1341 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1353 (    struct Screen_664 *  screen2645 ,    struct StrConcat_956  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count793 ) ( ( (  chars1044 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1342 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1354 (    struct Screen_664 *  screen2645 ,    struct StrConcat_961  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count781 ) ( ( (  chars1045 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1343 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1355 (    struct Screen_664 *  screen2645 ,    struct StrConcat_975  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count781 ) ( ( (  chars1046 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1344 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1356 (    struct Screen_664 *  screen2645 ,    struct StrConcat_979  s2647 ,    int32_t  x2649 ,    int32_t  y2651 ) {
    int32_t  slen2652 = ( (  size_dash_i32290 ) ( ( (  count795 ) ( ( (  chars1047 ) ( (  s2647 ) ) ) ) ) ) );
    int32_t  w2653 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen2645 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2654 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2653 ) , (  x2649 ) ) ) , (  slen2652 ) ) );
    ( (  draw_dash_str1345 ) ( (  screen2645 ) ,  (  s2647 ) ,  (  x2654 ) ,  (  y2651 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_333   try_dash_read_dash_contents1357 (    const char*  filename3104 ,    enum CAllocator_4  al3106 ) {
    FILE *  file3107 = ( ( fopen ) ( (  filename3104 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null282 ) ( (  file3107 ) ) ) ) {
        return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
    }
    ( ( fseek ) ( (  file3107 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size3108 = ( ( ftell ) ( (  file3107 ) ) );
    ( ( fseek ) ( (  file3107 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf3109 = ( ( (  allocate1121 ) ( (  al3106 ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( (  file_dash_size3108 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3109 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size3108 ) ,  (  file3107 ) ) );
    ( (  set1097 ) ( (  file_dash_buf3109 ) ,  ( (  i32_dash_size288 ) ( (  file_dash_size3108 ) ) ) ,  ( (  nullchar338 ) ( ) ) ) );
    ( ( fclose ) ( (  file3107 ) ) );
    struct DynStr_136  str3110 = ( (struct DynStr_136) { .f_contents = (  file_dash_buf3109 ) } );
    return ( ( Maybe_333_Just ) ( (  str3110 ) ) );
}

static  struct DynStr_136   read_dash_contents1358 (    const char*  filename3113 ,    enum CAllocator_4  al3115 ) {
    return ( (  or_dash_fail1076 ) ( ( (  try_dash_read_dash_contents1357 ) ( (  filename3113 ) ,  (  al3115 ) ) ) ,  ( ( StrConcat_990_StrConcat ) ( ( ( StrConcat_991_StrConcat ) ( ( "could not open file " ) ,  (  filename3113 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1359 (    const char*  filename3118 ,    struct DynStr_136  contents3120 ) {
    FILE *  file3121 = ( ( fopen ) ( (  filename3118 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null282 ) ( (  file3121 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_307  it3122 = ( (  chars917 ) ( (  contents3120 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref3123 = ( (  next348 ) ( ( & (  it3122 ) ) ) );
        if ( dref3123.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file3121 ) ) );
            return ( true );
        }
        else if ( dref3123.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written3125 = ( ( fprintf ) ( (  file3121 ) ,  ( "%c" ) ,  ( dref3123 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written3125 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable1065 ) ( ) );
}

static  enum Unit_13   write_dash_contents1360 (    const char*  filename3128 ,    struct DynStr_136  contents3130 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1359 ) ( (  filename3128 ) ,  (  contents3130 ) ) ) ) ) {
        ( (  panic1072 ) ( ( ( StrConcat_991_StrConcat ) ( ( "could not write to file " ) ,  (  filename3128 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1092   get1361 (  ) {
    return ( (struct Slice_1092) { .f_ptr = ( (  offset_dash_ptr157 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1362 (    char  c2657 ) {
    if ( (  eq47 ( (  c2657 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return (  from_dash_integral29 ( 2 ) );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1363 (    char  c2667 ) {
    if ( ( (  is_dash_whitespace1135 ) ( (  c2667 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1139 ) ( (  c2667 ) ) ) || (  eq47 ( (  c2667 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2667 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1366 (    struct Cursor_169  l2674 ,    struct Cursor_169  r2676 ) {
    return ( (  eq41 ( ( (  l2674 ) .f_x ) , ( (  r2676 ) .f_x ) ) ) && (  eq41 ( ( (  l2674 ) .f_y ) , ( (  r2676 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1367 (    struct Visual_825  dref2686 ) {
    return ( dref2686 .field0 );
}

struct Tuple2_1369 {
    struct Mode_826  field0;
    struct Mode_826  field1;
};

static struct Tuple2_1369 Tuple2_1369_Tuple2 (  struct Mode_826  field0 ,  struct Mode_826  field1 ) {
    return ( struct Tuple2_1369 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1368 (    struct Mode_826  l2691 ,    struct Mode_826  r2693 ) {
    struct Tuple2_1369  dref2694 = ( ( Tuple2_1369_Tuple2 ) ( (  l2691 ) ,  (  r2693 ) ) );
    if ( dref2694 .field0.tag == Mode_826_Normal_t && dref2694 .field1.tag == Mode_826_Normal_t ) {
        return ( true );
    }
    else if ( dref2694 .field0.tag == Mode_826_Insert_t && dref2694 .field1.tag == Mode_826_Insert_t ) {
        return ( true );
    }
    else if ( dref2694 .field0.tag == Mode_826_Select_t && dref2694 .field1.tag == Mode_826_Select_t ) {
        return ( true );
    }
    else if ( dref2694 .field0.tag == Mode_826_Cmd_t && dref2694 .field1.tag == Mode_826_Cmd_t ) {
        ( (  panic1069 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2694 .field0.tag == Mode_826_SearchBox_t && dref2694 .field1.tag == Mode_826_SearchBox_t ) {
        ( (  panic1069 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1370 (    struct Editor_824 *  ed2717 ,    int32_t  y2719 ) {
    return ( (  get_dash_ptr1147 ) ( ( & ( ( * (  ed2717 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size288 ) ( (  y2719 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1371 (    struct Editor_824 *  ed2722 ) {
    return ( (  get_dash_ptr1147 ) ( ( & ( ( * (  ed2722 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed2722 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_520   indent_dash_on_dash_row1372 (    struct Editor_824 *  ed2725 ,    int32_t  y2727 ) {
    return ( (  take_dash_while542 ) ( ( (  get_dash_row1370 ) ( (  ed2725 ) ,  (  y2727 ) ) ) ,  (  is_dash_whitespace1135 ) ) );
}

static  size_t   num_dash_rows1373 (    struct Editor_824 *  ed2730 ) {
    return ( (  size1196 ) ( ( & ( ( * (  ed2730 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1171 {
    enum Unit_13  (*fun) (  struct env1171  ,    struct List_300 *  ,    size_t  );
    struct env1171 env;
};

struct env1374 {
    ;
    ;
    ;
    ;
    ;
    struct env1171 envinst1171;
    ;
};

static  enum Unit_13   remove_dash_row1374 (   struct env1374 env ,    struct Editor_824 *  ed2738 ,    int32_t  y2740 ) {
    struct List_3 *  next_dash_row2741 = ( (  get_dash_row1370 ) ( (  ed2738 ) ,  (  y2740 ) ) );
    ( (  free1158 ) ( (  next_dash_row2741 ) ) );
    struct funenv1171  temp1375 = ( (struct funenv1171){ .fun = remove1171, .env =  env.envinst1171  } );
    ( temp1375.fun ( temp1375.env ,  ( & ( ( * (  ed2738 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size288 ) ( (  y2740 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   char_dash_at1376 (    struct Editor_824 *  ed2744 ,    struct Cursor_169  cur2746 ) {
    return ( (  try_dash_get1151 ) ( ( (  get_dash_row1370 ) ( (  ed2744 ) ,  ( (  cur2746 ) .f_y ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  cur2746 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1377 (    struct Editor_824 *  ed2749 ) {
    return ( (  try_dash_get1151 ) ( ( (  cursor_dash_row1371 ) ( (  ed2749 ) ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed2749 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_825   x_dash_to_dash_visual_dash_x1378 (    struct Editor_824 *  ed2752 ,    int32_t  x2754 ,    int32_t  y2756 ) {
    return ( ( Visual_825_Visual ) ( ( (  sum797 ) ( ( (  map353 ) ( ( (  take376 ) ( ( (  get_dash_row1370 ) ( (  ed2752 ) ,  (  y2756 ) ) ) ,  ( (  i32_dash_size288 ) ( (  x2754 ) ) ) ) ) ,  (  char_dash_len1362 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1379 (    struct Editor_824 *  ed2759 ,    struct Visual_825  dref2760 ,    int32_t  y2763 ) {
    int32_t  sum_dash_x2764 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2765 = ( (  get_dash_row1370 ) ( (  ed2759 ) ,  (  y2763 ) ) );
    struct RangeIter_380  temp1380 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( ( * (  chars2765 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1381 =  next381 (&temp1380);
        if (  __cond1381 .tag == 0 ) {
            break;
        }
        int32_t  x2767 =  __cond1381 .stuff .Maybe_346_Just_s .field0;
        sum_dash_x2764 = (  op_dash_add87 ( (  sum_dash_x2764 ) , ( (  char_dash_len1362 ) ( (  elem_dash_get2 ( (  chars2765 ) , ( (  i32_dash_size288 ) ( (  x2767 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2760 .field0 ) , (  sum_dash_x2764 ) ) == 0 ) ) {
            return (  x2767 );
        }
    }
    return ( (  size_dash_i32290 ) ( ( ( * (  chars2765 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1382 (    struct Editor_824 *  ed2770 ,    struct Maybe_816  sel2772 ) {
    if ( ( ( !  eq1368 ( ( ( * (  ed2770 ) ) .f_mode ) , ( (struct Mode_826) { .tag = Mode_826_Select_t } ) ) ) || ( ! ( (  is_dash_just815 ) ( ( ( * (  ed2770 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2770 ) .f_selected = (  sel2772 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1383 (    struct Editor_824 *  ed2775 ) {
    struct Maybe_333  dref2776 = ( ( * (  ed2775 ) ) .f_msg );
    if ( dref2776.tag == Maybe_333_None_t ) {
    }
    else if ( dref2776.tag == Maybe_333_Just_t ) {
        ( (  free1125 ) ( ( ( * (  ed2775 ) ) .f_al ) ,  ( ( dref2776 .stuff .Maybe_333_Just_s .field0 ) .f_contents ) ) );
        (*  ed2775 ) .f_msg = ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1384 {
    ;
    ;
    ;
    ;
    struct env1240 envinst1240;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1384 (   struct env1384 env ,    struct Editor_824 *  ed2780 ,    const char*  s2782 ) {
    ( (  reset_dash_msg1383 ) ( (  ed2780 ) ) );
    struct funenv1240  temp1385 = ( (struct funenv1240){ .fun = mk_dash_dyn_dash_str1240, .env =  env.envinst1240  } );
    struct DynStr_136  s2783 = ( temp1385.fun ( temp1385.env ,  (  s2782 ) ,  ( ( * (  ed2780 ) ) .f_al ) ) );
    (*  ed2780 ) .f_msg = ( ( Maybe_333_Just ) ( (  s2783 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1387 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1386 (    struct Editor_824 *  ed2787 ,    int32_t  x2789 ,    int32_t  y2791 ,    struct Dims_1387  dim2793 ) {
    struct Cursor_169  cur2794 = ( ( * (  ed2787 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2795 = ( !  eq41 ( ( (  cur2794 ) .f_x ) , (  x2789 ) ) );
    int32_t  y2796 = ( (  clamp892 ) ( (  y2791 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( ( ( * (  ed2787 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2797 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2796 ) , (  op_dash_add87 ( ( ( * (  ed2787 ) ) .f_screen_dash_top ) , (  funny_dash_space2797 ) ) ) ) == 0 ) ) {
        (*  ed2787 ) .f_screen_dash_top = ( (  max887 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2796 ) , (  funny_dash_space2797 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2796 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2787 ) ) .f_screen_dash_top ) , ( (  dim2793 ) .f_rows ) ) ) , (  funny_dash_space2797 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2798 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2796 ) , (  funny_dash_space2797 ) ) ) , ( (  dim2793 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2787 ) .f_screen_dash_top = (  onscreen_dash_y2798 );
        } else {
        }
    }
    struct List_3 *  row2799 = ( (  get_dash_row1370 ) ( (  ed2787 ) ,  (  y2796 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2795 ) ) {
        int32_t  x2800 = ( (  clamp892 ) ( (  x2789 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32290 ) ( ( (  size1195 ) ( (  row2799 ) ) ) ) ) ) );
        (*  ed2787 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1378 ) ( (  ed2787 ) ,  (  x2800 ) ,  (  y2796 ) ) );
    }
    struct Visual_825  vx2801 = ( ( * (  ed2787 ) ) .f_goal_dash_x );
    int32_t  x2802 = ( (  visual_dash_x_dash_to_dash_x1379 ) ( (  ed2787 ) ,  (  vx2801 ) ,  (  y2796 ) ) );
    int32_t  funny_dash_space2803 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2802 ) , (  op_dash_add87 ( ( ( * (  ed2787 ) ) .f_screen_dash_left ) , (  funny_dash_space2803 ) ) ) ) == 0 ) ) {
        (*  ed2787 ) .f_screen_dash_left = ( (  max887 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2802 ) , (  funny_dash_space2803 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2802 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2787 ) ) .f_screen_dash_left ) , ( (  dim2793 ) .f_cols ) ) ) , (  funny_dash_space2803 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2804 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2802 ) , (  funny_dash_space2803 ) ) ) , ( (  dim2793 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2787 ) .f_screen_dash_left = (  onscreen_dash_x2804 );
        } else {
        }
    }
    (*  ed2787 ) .f_cursor = ( (struct Cursor_169) { .f_x = (  x2802 ) , .f_y = (  y2796 ) } );
    ( (  set_dash_selection1382 ) ( (  ed2787 ) ,  ( (struct Maybe_816) { .tag = Maybe_816_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1388 (    struct Editor_824 *  ed2807 ,    int32_t  x2809 ,    struct Dims_1387  dim2811 ) {
    ( (  move_dash_to1386 ) ( (  ed2807 ) ,  (  x2809 ) ,  ( ( ( * (  ed2807 ) ) .f_cursor ) .f_y ) ,  (  dim2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1389 (    struct Editor_824 *  ed2814 ,    int32_t  y2816 ,    struct Dims_1387  dim2818 ) {
    ( (  move_dash_to1386 ) ( (  ed2814 ) ,  ( ( ( * (  ed2814 ) ) .f_cursor ) .f_x ) ,  (  y2816 ) ,  (  dim2818 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1390 (    struct Editor_824 *  ed2821 ,    struct Dims_1387  dim2823 ) {
    struct Cursor_169  cur2824 = ( ( * (  ed2821 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2821 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2821 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1389 ) ( (  ed2821 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2821 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2823 ) ) );
            ( (  move_dash_to_dash_col1388 ) ( (  ed2821 ) ,  ( (  size_dash_i32290 ) ( ( ( * ( (  cursor_dash_row1371 ) ( (  ed2821 ) ) ) ) .f_count ) ) ) ,  (  dim2823 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1388 ) ( (  ed2821 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2821 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2823 ) ) );
    }
    return ( !  eq1366 ( ( ( * (  ed2821 ) ) .f_cursor ) , (  cur2824 ) ) );
}

static  bool   move_dash_right1391 (    struct Editor_824 *  ed2827 ,    struct Dims_1387  dims2829 ) {
    struct Cursor_169  cur2830 = ( ( * (  ed2827 ) ) .f_cursor );
    int32_t  row_dash_len2831 = ( (  size_dash_i32290 ) ( ( ( * ( (  cursor_dash_row1371 ) ( (  ed2827 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2827 ) ) .f_cursor ) .f_x ) , (  row_dash_len2831 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2827 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( ( ( * (  ed2827 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1386 ) ( (  ed2827 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2827 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2829 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1388 ) ( (  ed2827 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2827 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2829 ) ) );
    }
    return ( !  eq1366 ( ( ( * (  ed2827 ) ) .f_cursor ) , (  cur2830 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1392 (    struct Editor_824 *  ed2834 ,    struct Dims_1387  dims2836 ) {
    int32_t  off2837 = ( (  size_dash_i32290 ) ( ( (  count777 ) ( ( (  indent_dash_on_dash_row1372 ) ( (  ed2834 ) ,  ( ( ( * (  ed2834 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1388 ) ( (  ed2834 ) ,  (  off2837 ) ,  (  dims2836 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1393 (    struct Editor_824 *  ed2840 ,    struct Dims_1387  dims2842 ) {
    struct List_3 *  currow2843 = ( (  cursor_dash_row1371 ) ( (  ed2840 ) ) );
    ( (  move_dash_to_dash_col1388 ) ( (  ed2840 ) ,  ( (  size_dash_i32290 ) ( ( (  size1195 ) ( (  currow2843 ) ) ) ) ) ,  (  dims2842 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1394 (    struct Editor_824 *  ed2849 ,    int32_t  col2851 ,    int32_t  row2853 ) {
    return (  eq41 ( (  col2851 ) , ( (  size_dash_i32290 ) ( ( (  size1195 ) ( ( (  get_dash_row1370 ) ( (  ed2849 ) ,  (  row2853 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1395 (    struct Editor_824 *  ed2856 ) {
    return (  eq41 ( ( ( ( * (  ed2856 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32290 ) ( ( (  size1195 ) ( ( (  cursor_dash_row1371 ) ( (  ed2856 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1396 (    struct Editor_824 *  ed2859 ,    struct Maybe_333  clip2861 ) {
    struct Maybe_333  dref2862 = ( ( * (  ed2859 ) ) .f_clipboard );
    if ( dref2862.tag == Maybe_333_None_t ) {
    }
    else if ( dref2862.tag == Maybe_333_Just_t ) {
        ( (  free1125 ) ( ( ( * (  ed2859 ) ) .f_al ) ,  ( ( dref2862 .stuff .Maybe_333_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2859 ) .f_clipboard = (  clip2861 );
    return ( Unit_13_Unit );
}

struct funenv1231 {
    enum Unit_13  (*fun) (  struct env1231  ,    struct StrBuilder_586 *  ,    struct Slice_5  );
    struct env1231 env;
};

struct env1397 {
    ;
    ;
    struct env1231 envinst1231;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env641 envinst641;
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
    struct env1225 envinst1225;
    ;
    ;
};

static  struct Maybe_333   copy_dash_selection1397 (   struct env1397 env ,    struct Editor_824 *  ed2866 ) {
    struct Maybe_816  dref2867 = ( ( * (  ed2866 ) ) .f_selected );
    if ( dref2867.tag == Maybe_816_None_t ) {
        struct Maybe_49  dref2868 = ( (  char_dash_at_dash_cursor1377 ) ( (  ed2866 ) ) );
        if ( dref2868.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
        }
        else if ( dref2868.tag == Maybe_49_Just_t ) {
            struct StrBuilder_586  temp1398 = ( (  mk1237 ) ( ( ( * (  ed2866 ) ) .f_al ) ) );
            struct StrBuilder_586 *  sb2870 = ( &temp1398 );
            struct funenv641  temp1399 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
            ( temp1399.fun ( temp1399.env ,  (  sb2870 ) ,  ( dref2868 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_333_Just ) ( ( (  as_dash_str910 ) ( (  sb2870 ) ) ) ) );
        }
    }
    else if ( dref2867.tag == Maybe_816_Just_t ) {
        struct StrBuilder_586  temp1400 = ( (  mk1237 ) ( ( ( * (  ed2866 ) ) .f_al ) ) );
        struct StrBuilder_586 *  sb2872 = ( &temp1400 );
        struct Cursor_169  from2873 = ( (  min881 ) ( ( dref2867 .stuff .Maybe_816_Just_s .field0 ) ,  ( ( * (  ed2866 ) ) .f_cursor ) ) );
        struct Cursor_169  to2874 = ( (  max888 ) ( ( dref2867 .stuff .Maybe_816_Just_s .field0 ) ,  ( ( * (  ed2866 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2873 ) .f_y ) , ( (  to2874 ) .f_y ) ) ) ) {
            struct List_3 *  currow2875 = ( (  get_dash_row1370 ) ( (  ed2866 ) ,  ( (  from2873 ) .f_y ) ) );
            struct funenv1231  temp1401 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1401.fun ( temp1401.env ,  (  sb2872 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  currow2875 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  from2873 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  to2874 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1394 ) ( (  ed2866 ) ,  ( (  to2874 ) .f_x ) ,  ( (  to2874 ) .f_y ) ) ) ) {
                struct funenv1225  temp1402 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
                ( temp1402.fun ( temp1402.env ,  (  sb2872 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        } else {
            ( (  assert1074 ) ( (  cmp80 ( ( (  to2874 ) .f_y ) , ( (  from2873 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2876 = ( (  get_dash_row1370 ) ( (  ed2866 ) ,  ( (  from2873 ) .f_y ) ) );
            struct funenv1231  temp1403 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1403.fun ( temp1403.env ,  (  sb2872 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  currow2876 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  from2873 ) .f_x ) ) ) ,  ( (  size1195 ) ( (  currow2876 ) ) ) ) ) ) );
            struct funenv1225  temp1404 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
            ( temp1404.fun ( temp1404.env ,  (  sb2872 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_298  temp1405 =  into_dash_iter302 ( ( (  subslice303 ) ( ( (  to_dash_slice1193 ) ( ( ( * (  ed2866 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  from2873 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  to2874 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_332  __cond1406 =  next366 (&temp1405);
                if (  __cond1406 .tag == 0 ) {
                    break;
                }
                struct List_3  row2878 =  __cond1406 .stuff .Maybe_332_Just_s .field0;
                struct funenv1231  temp1407 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
                ( temp1407.fun ( temp1407.env ,  (  sb2872 ) ,  ( (  to_dash_slice1192 ) ( (  row2878 ) ) ) ) );
                struct funenv1225  temp1408 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
                ( temp1408.fun ( temp1408.env ,  (  sb2872 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2879 = ( (  get_dash_row1370 ) ( (  ed2866 ) ,  ( (  to2874 ) .f_y ) ) );
            struct funenv1231  temp1409 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1409.fun ( temp1409.env ,  (  sb2872 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  lastrow2879 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  to2874 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1394 ) ( (  ed2866 ) ,  ( (  to2874 ) .f_x ) ,  ( (  to2874 ) .f_y ) ) ) ) {
                struct funenv1225  temp1410 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
                ( temp1410.fun ( temp1410.env ,  (  sb2872 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_136  s2880 = ( (  as_dash_str910 ) ( (  sb2872 ) ) );
        return ( ( Maybe_333_Just ) ( (  s2880 ) ) );
    }
}

struct funenv1397 {
    struct Maybe_333  (*fun) (  struct env1397  ,    struct Editor_824 *  );
    struct env1397 env;
};

struct env1411 {
    struct env1397 envinst1397;
    ;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1411 (   struct env1411 env ,    struct Editor_824 *  ed2883 ) {
    struct funenv1397  temp1412 = ( (struct funenv1397){ .fun = copy_dash_selection1397, .env =  env.envinst1397  } );
    ( (  set_dash_clipboard1396 ) ( (  ed2883 ) ,  ( temp1412.fun ( temp1412.env ,  (  ed2883 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1374 {
    enum Unit_13  (*fun) (  struct env1374  ,    struct Editor_824 *  ,    int32_t  );
    struct env1374 env;
};

struct funenv1181 {
    enum Unit_13  (*fun) (  struct env1181  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1181 env;
};

struct funenv1168 {
    enum Unit_13  (*fun) (  struct env1168  ,    struct List_300 *  ,    size_t  ,    struct List_3  );
    struct env1168 env;
};

struct funenv1165 {
    enum Unit_13  (*fun) (  struct env1165  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1165 env;
};

struct env1413 {
    ;
    ;
    ;
    ;
    ;
    struct env1172 envinst1172;
    ;
    ;
    struct env1374 envinst1374;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1179 envinst1179;
    struct env1181 envinst1181;
    ;
    ;
    ;
    ;
    struct env572 envinst572;
    ;
    ;
    ;
    ;
    struct env1168 envinst1168;
    struct env1165 envinst1165;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   apply_dash_primitive1413 (   struct env1413 env ,    struct Editor_824 *  ed2887 ,    struct Primitive_168  prim2889 ,    struct Dims_1387  dims2891 ) {
    struct Primitive_168  dref2892 = (  prim2889 );
    if ( dref2892.tag == Primitive_168_PrimInsert_t ) {
        int32_t  x2895 = ( ( dref2892 .stuff .Primitive_168_PrimInsert_s .field0 ) .f_x );
        int32_t  y2896 = ( ( dref2892 .stuff .Primitive_168_PrimInsert_s .field0 ) .f_y );
        if ( (  cmp9 ( ( (  i32_dash_size288 ) ( (  y2896 ) ) ) , ( (  num_dash_rows1373 ) ( (  ed2887 ) ) ) ) != 0 ) ) {
            struct funenv572  temp1414 = ( (struct funenv572){ .fun = add572, .env =  env.envinst572  } );
            ( temp1414.fun ( temp1414.env ,  ( & ( ( * (  ed2887 ) ) .f_current_dash_file ) ) ,  ( (  mk1156 ) ( ( ( * (  ed2887 ) ) .f_al ) ) ) ) );
        }
        struct SliceIter_307  temp1415 =  into_dash_iter311 ( ( ( dref2892 .stuff .Primitive_168_PrimInsert_s .field1 ) .f_contents ) );
        while (true) {
            struct Maybe_49  __cond1416 =  next348 (&temp1415);
            if (  __cond1416 .tag == 0 ) {
                break;
            }
            char  c2898 =  __cond1416 .stuff .Maybe_49_Just_s .field0;
            if ( (  eq47 ( (  c2898 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) {
                struct List_3 *  cur_dash_line2899 = ( (  get_dash_row1370 ) ( (  ed2887 ) ,  (  y2896 ) ) );
                struct List_3  temp1417 = ( (  mk1156 ) ( ( ( * (  ed2887 ) ) .f_al ) ) );
                struct List_3 *  nurow2900 = ( &temp1417 );
                struct funenv1179  temp1418 = ( (struct funenv1179){ .fun = add_dash_all1179, .env =  env.envinst1179  } );
                ( temp1418.fun ( temp1418.env ,  (  nurow2900 ) ,  ( (  from1100 ) ( ( (  to_dash_slice1192 ) ( ( * (  cur_dash_line2899 ) ) ) ) ,  ( (  i32_dash_size288 ) ( (  x2895 ) ) ) ) ) ) );
                ( (  trim1185 ) ( (  cur_dash_line2899 ) ,  ( (  i32_dash_size288 ) ( (  x2895 ) ) ) ) );
                struct funenv1168  temp1419 = ( (struct funenv1168){ .fun = insert1168, .env =  env.envinst1168  } );
                ( temp1419.fun ( temp1419.env ,  ( & ( ( * (  ed2887 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( (  y2896 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2900 ) ) ) );
                y2896 = (  op_dash_add87 ( (  y2896 ) , (  from_dash_integral29 ( 1 ) ) ) );
                x2895 = (  from_dash_integral29 ( 0 ) );
            } else {
                struct funenv1165  temp1420 = ( (struct funenv1165){ .fun = insert1165, .env =  env.envinst1165  } );
                ( temp1420.fun ( temp1420.env ,  ( (  get_dash_row1370 ) ( (  ed2887 ) ,  (  y2896 ) ) ) ,  ( (  i32_dash_size288 ) ( (  x2895 ) ) ) ,  (  c2898 ) ) );
                x2895 = (  op_dash_add87 ( (  x2895 ) , (  from_dash_integral29 ( 1 ) ) ) );
            }
        }
        (*  ed2887 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1378 ) ( (  ed2887 ) ,  (  x2895 ) ,  (  y2896 ) ) );
        ( (  move_dash_to1386 ) ( (  ed2887 ) ,  (  x2895 ) ,  (  y2896 ) ,  (  dims2891 ) ) );
    }
    else if ( dref2892.tag == Primitive_168_PrimDelete_t ) {
        int32_t  x2903 = ( ( dref2892 .stuff .Primitive_168_PrimDelete_s .field0 ) .f_x );
        int32_t  y2904 = ( ( dref2892 .stuff .Primitive_168_PrimDelete_s .field0 ) .f_y );
        struct RangeIter_380  temp1421 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( ( ( dref2892 .stuff .Primitive_168_PrimDelete_s .field1 ) .f_contents ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1422 =  next381 (&temp1421);
            if (  __cond1422 .tag == 0 ) {
                break;
            }
            int32_t  dref2905 =  __cond1422 .stuff .Maybe_346_Just_s .field0;
            struct List_3 *  row2906 = ( (  get_dash_row1370 ) ( (  ed2887 ) ,  (  y2904 ) ) );
            if ( (  cmp9 ( ( (  i32_dash_size288 ) ( (  x2903 ) ) ) , ( ( * (  row2906 ) ) .f_count ) ) != 0 ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( (  y2904 ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32290 ) ( ( (  num_dash_rows1373 ) ( (  ed2887 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  next_dash_row2907 = ( (  get_dash_row1370 ) ( (  ed2887 ) ,  (  op_dash_add87 ( (  y2904 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1181  temp1423 = ( (struct funenv1181){ .fun = add_dash_all1181, .env =  env.envinst1181  } );
                    ( temp1423.fun ( temp1423.env ,  (  row2906 ) ,  (  next_dash_row2907 ) ) );
                    struct funenv1374  temp1424 = ( (struct funenv1374){ .fun = remove_dash_row1374, .env =  env.envinst1374  } );
                    ( temp1424.fun ( temp1424.env ,  (  ed2887 ) ,  (  op_dash_add87 ( (  y2904 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                struct funenv1172  temp1425 = ( (struct funenv1172){ .fun = remove1172, .env =  env.envinst1172  } );
                ( temp1425.fun ( temp1425.env ,  (  row2906 ) ,  ( (  i32_dash_size288 ) ( (  x2903 ) ) ) ) );
            }
        }
        (*  ed2887 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1378 ) ( (  ed2887 ) ,  (  x2903 ) ,  (  y2904 ) ) );
        ( (  move_dash_to1386 ) ( (  ed2887 ) ,  (  x2903 ) ,  (  y2904 ) ,  (  dims2891 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_168   invert_dash_primitive1426 (    struct Primitive_168  prim2910 ) {
    struct Primitive_168  dref2911 = (  prim2910 );
    if ( dref2911.tag == Primitive_168_PrimInsert_t ) {
        return ( ( Primitive_168_PrimDelete ) ( ( dref2911 .stuff .Primitive_168_PrimInsert_s .field0 ) ,  ( dref2911 .stuff .Primitive_168_PrimInsert_s .field1 ) ) );
    }
    else if ( dref2911.tag == Primitive_168_PrimDelete_t ) {
        return ( ( Primitive_168_PrimInsert ) ( ( dref2911 .stuff .Primitive_168_PrimDelete_s .field0 ) ,  ( dref2911 .stuff .Primitive_168_PrimDelete_s .field1 ) ) );
    }
}

struct funenv1163 {
    enum Unit_13  (*fun) (  struct env1163  ,    struct List_829 *  ,    struct Primitive_168  );
    struct env1163 env;
};

struct env1427 {
    struct env1163 envinst1163;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   push_dash_action1427 (   struct env1427 env ,    struct Actions_828 *  actions2918 ,    struct Primitive_168  prim2920 ) {
    ( (  trim1186 ) ( ( & ( ( * (  actions2918 ) ) .f_list ) ) ,  ( ( * (  actions2918 ) ) .f_cur ) ) );
    struct funenv1163  temp1428 = ( (struct funenv1163){ .fun = add1163, .env =  env.envinst1163  } );
    ( temp1428.fun ( temp1428.env ,  ( & ( ( * (  actions2918 ) ) .f_list ) ) ,  (  prim2920 ) ) );
    (*  actions2918 ) .f_cur = (  op_dash_add98 ( ( ( * (  actions2918 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1427 {
    enum Unit_13  (*fun) (  struct env1427  ,    struct Actions_828 *  ,    struct Primitive_168  );
    struct env1427 env;
};

struct env1429 {
    ;
    ;
    struct env1231 envinst1231;
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
    struct env641 envinst641;
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
    struct env1427 envinst1427;
    ;
    struct env1225 envinst1225;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   flush_dash_insert1429 (   struct env1429 env ,    struct Editor_824 *  ed2923 ) {
    struct Maybe_816  dref2924 = ( ( * (  ed2923 ) ) .f_insert_dash_start );
    if ( dref2924.tag == Maybe_816_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2924.tag == Maybe_816_Just_t ) {
        (*  ed2923 ) .f_insert_dash_start = ( (struct Maybe_816) { .tag = Maybe_816_None_t } );
        int32_t  del_dash_count2926 = (  from_dash_integral29 ( 0 ) );
        struct Maybe_819  dref2927 = ( ( * (  ed2923 ) ) .f_delete_dash_acc );
        if ( dref2927.tag == Maybe_819_None_t ) {
        }
        else if ( dref2927.tag == Maybe_819_Just_t ) {
            struct DynStr_136  del_dash_text2929 = ( (  as_dash_str910 ) ( ( & ( dref2927 .stuff .Maybe_819_Just_s .field0 ) ) ) );
            (*  ed2923 ) .f_delete_dash_acc = ( (struct Maybe_819) { .tag = Maybe_819_None_t } );
            if ( (  cmp9 ( ( ( (  del_dash_text2929 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                del_dash_count2926 = ( (  size_dash_i32290 ) ( ( ( (  del_dash_text2929 ) .f_contents ) .f_count ) ) );
                struct StrBuilder_586  temp1430 = ( (  mk1237 ) ( ( ( * (  ed2923 ) ) .f_al ) ) );
                struct StrBuilder_586 *  rev_dash_sb2930 = ( &temp1430 );
                struct RangeIter_380  temp1431 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  del_dash_count2926 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_346  __cond1432 =  next381 (&temp1431);
                    if (  __cond1432 .tag == 0 ) {
                        break;
                    }
                    int32_t  i2932 =  __cond1432 .stuff .Maybe_346_Just_s .field0;
                    struct funenv641  temp1433 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
                    ( temp1433.fun ( temp1433.env ,  (  rev_dash_sb2930 ) ,  (  elem_dash_get1109 ( ( (  del_dash_text2929 ) .f_contents ) , ( (  i32_dash_size288 ) ( (  op_dash_sub88 ( (  op_dash_sub88 ( (  del_dash_count2926 ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  i2932 ) ) ) ) ) ) ) ) );
                }
                ( (  free1125 ) ( ( ( * (  ed2923 ) ) .f_al ) ,  ( (  del_dash_text2929 ) .f_contents ) ) );
                struct DynStr_136  rev_dash_text2933 = ( (  as_dash_str910 ) ( (  rev_dash_sb2930 ) ) );
                struct Cursor_169  del_dash_pos2934 = ( (struct Cursor_169) { .f_x = (  op_dash_sub88 ( ( ( dref2924 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , (  del_dash_count2926 ) ) ) , .f_y = ( ( dref2924 .stuff .Maybe_816_Just_s .field0 ) .f_y ) } );
                struct funenv1427  temp1434 = ( (struct funenv1427){ .fun = push_dash_action1427, .env =  env.envinst1427  } );
                ( temp1434.fun ( temp1434.env ,  ( & ( ( * (  ed2923 ) ) .f_actions ) ) ,  ( ( Primitive_168_PrimDelete ) ( (  del_dash_pos2934 ) ,  (  rev_dash_text2933 ) ) ) ) );
            } else {
                ( (  free1125 ) ( ( ( * (  ed2923 ) ) .f_al ) ,  ( (  del_dash_text2929 ) .f_contents ) ) );
            }
        }
        struct Cursor_169  adj_dash_start2935 = ( (struct Cursor_169) { .f_x = (  op_dash_sub88 ( ( ( dref2924 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , (  del_dash_count2926 ) ) ) , .f_y = ( ( dref2924 .stuff .Maybe_816_Just_s .field0 ) .f_y ) } );
        if ( (  eq1366 ( (  adj_dash_start2935 ) , ( ( * (  ed2923 ) ) .f_cursor ) ) ) ) {
            return ( Unit_13_Unit );
        }
        struct StrBuilder_586  temp1435 = ( (  mk1237 ) ( ( ( * (  ed2923 ) ) .f_al ) ) );
        struct StrBuilder_586 *  sb2936 = ( &temp1435 );
        if ( (  eq41 ( ( (  adj_dash_start2935 ) .f_y ) , ( ( ( * (  ed2923 ) ) .f_cursor ) .f_y ) ) ) ) {
            struct List_3 *  row2937 = ( (  get_dash_row1370 ) ( (  ed2923 ) ,  ( (  adj_dash_start2935 ) .f_y ) ) );
            struct funenv1231  temp1436 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1436.fun ( temp1436.env ,  (  sb2936 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  row2937 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  adj_dash_start2935 ) .f_x ) ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed2923 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        } else {
            struct List_3 *  first_dash_row2938 = ( (  get_dash_row1370 ) ( (  ed2923 ) ,  ( (  adj_dash_start2935 ) .f_y ) ) );
            struct funenv1231  temp1437 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1437.fun ( temp1437.env ,  (  sb2936 ) ,  ( (  from1100 ) ( ( (  to_dash_slice1192 ) ( ( * (  first_dash_row2938 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  adj_dash_start2935 ) .f_x ) ) ) ) ) ) );
            struct funenv1225  temp1438 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
            ( temp1438.fun ( temp1438.env ,  (  sb2936 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct Zip_357  temp1439 =  into_dash_iter373 ( ( (  zip492 ) ( ( (  subslice303 ) ( ( (  to_dash_slice1193 ) ( ( ( * (  ed2923 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  adj_dash_start2935 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed2923 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (  from382 ) ( (  op_dash_add87 ( ( (  adj_dash_start2935 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
            while (true) {
                struct Maybe_363  __cond1440 =  next365 (&temp1439);
                if (  __cond1440 .tag == 0 ) {
                    break;
                }
                struct Tuple2_364  dref2939 =  __cond1440 .stuff .Maybe_363_Just_s .field0;
                struct funenv1231  temp1441 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
                ( temp1441.fun ( temp1441.env ,  (  sb2936 ) ,  ( (  to_dash_slice1192 ) ( ( dref2939 .field0 ) ) ) ) );
                struct funenv1225  temp1442 = ( (struct funenv1225){ .fun = write1225, .env =  env.envinst1225  } );
                ( temp1442.fun ( temp1442.env ,  (  sb2936 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  last_dash_row2942 = ( (  get_dash_row1370 ) ( (  ed2923 ) ,  ( ( ( * (  ed2923 ) ) .f_cursor ) .f_y ) ) );
            struct funenv1231  temp1443 = ( (struct funenv1231){ .fun = write_dash_slice1231, .env =  env.envinst1231  } );
            ( temp1443.fun ( temp1443.env ,  (  sb2936 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  last_dash_row2942 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed2923 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        }
        struct DynStr_136  text2943 = ( (  as_dash_str910 ) ( (  sb2936 ) ) );
        if ( (  eq45 ( ( ( (  text2943 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1125 ) ( ( ( * (  ed2923 ) ) .f_al ) ,  ( (  text2943 ) .f_contents ) ) );
            return ( Unit_13_Unit );
        }
        struct funenv1427  temp1444 = ( (struct funenv1427){ .fun = push_dash_action1427, .env =  env.envinst1427  } );
        ( temp1444.fun ( temp1444.env ,  ( & ( ( * (  ed2923 ) ) .f_actions ) ) ,  ( ( Primitive_168_PrimInsert ) ( (  adj_dash_start2935 ) ,  (  text2943 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1429 {
    enum Unit_13  (*fun) (  struct env1429  ,    struct Editor_824 *  );
    struct env1429 env;
};

struct env1445 {
    ;
    struct env1429 envinst1429;
    ;
    ;
    ;
};

static  enum Unit_13   set_dash_mode_dash_normal1445 (   struct env1445 env ,    struct Editor_824 *  ed2946 ) {
    struct funenv1429  temp1446 = ( (struct funenv1429){ .fun = flush_dash_insert1429, .env =  env.envinst1429  } );
    ( temp1446.fun ( temp1446.env ,  (  ed2946 ) ) );
    (*  ed2946 ) .f_mode = ( (struct Mode_826) { .tag = Mode_826_Normal_t } );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enter_dash_insert_dash_mode1447 (    struct Editor_824 *  ed2949 ) {
    (*  ed2949 ) .f_mode = ( (struct Mode_826) { .tag = Mode_826_Insert_t } );
    (*  ed2949 ) .f_insert_dash_start = ( ( Maybe_816_Just ) ( ( ( * (  ed2949 ) ) .f_cursor ) ) );
    (*  ed2949 ) .f_delete_dash_acc = ( (struct Maybe_819) { .tag = Maybe_819_None_t } );
    return ( Unit_13_Unit );
}

struct env1448 {
    ;
    ;
    ;
    ;
    struct env1429 envinst1429;
    struct env1427 envinst1427;
};

static  enum Unit_13   add_dash_action1448 (   struct env1448 env ,    struct Editor_824 *  ed2952 ,    struct Primitive_168  prim2954 ) {
    struct funenv1429  temp1449 = ( (struct funenv1429){ .fun = flush_dash_insert1429, .env =  env.envinst1429  } );
    ( temp1449.fun ( temp1449.env ,  (  ed2952 ) ) );
    struct funenv1427  temp1450 = ( (struct funenv1427){ .fun = push_dash_action1427, .env =  env.envinst1427  } );
    ( temp1450.fun ( temp1450.env ,  ( & ( ( * (  ed2952 ) ) .f_actions ) ) ,  (  prim2954 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1413 {
    enum Unit_13  (*fun) (  struct env1413  ,    struct Editor_824 *  ,    struct Primitive_168  ,    struct Dims_1387  );
    struct env1413 env;
};

struct env1451 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1413 envinst1413;
};

static  enum Unit_13   undo1451 (   struct env1451 env ,    struct Editor_824 *  ed2957 ,    struct Dims_1387  dims2959 ) {
    if ( (  eq45 ( ( ( ( * (  ed2957 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    (*  ed2957 ) .f_actions .f_cur = (  op_dash_sub99 ( ( ( ( * (  ed2957 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Primitive_168  prim2960 = (  elem_dash_get1173 ( ( ( ( * (  ed2957 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed2957 ) ) .f_actions ) .f_cur ) ) );
    struct funenv1413  temp1452 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
    ( temp1452.fun ( temp1452.env ,  (  ed2957 ) ,  ( (  invert_dash_primitive1426 ) ( (  prim2960 ) ) ) ,  (  dims2959 ) ) );
    return ( Unit_13_Unit );
}

struct env1453 {
    struct env1413 envinst1413;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   redo1453 (   struct env1453 env ,    struct Editor_824 *  ed2963 ,    struct Dims_1387  dims2965 ) {
    if ( (  cmp9 ( ( ( ( * (  ed2963 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed2963 ) ) .f_actions ) .f_list ) .f_count ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    struct Primitive_168  prim2966 = (  elem_dash_get1173 ( ( ( ( * (  ed2963 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed2963 ) ) .f_actions ) .f_cur ) ) );
    struct funenv1413  temp1454 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
    ( temp1454.fun ( temp1454.env ,  (  ed2963 ) ,  (  prim2966 ) ,  (  dims2965 ) ) );
    (*  ed2963 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed2963 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1445 {
    enum Unit_13  (*fun) (  struct env1445  ,    struct Editor_824 *  );
    struct env1445 env;
};

struct funenv1448 {
    enum Unit_13  (*fun) (  struct env1448  ,    struct Editor_824 *  ,    struct Primitive_168  );
    struct env1448 env;
};

struct env1455 {
    ;
    struct env1445 envinst1445;
    ;
    ;
    ;
    ;
    struct env1413 envinst1413;
    ;
    struct env1448 envinst1448;
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

enum PastePos_1456 {
    PastePos_1456_PasteBefore,
    PastePos_1456_PasteAfter,
};

static  struct Cursor_169   lam842 (   struct env842 env ,    struct Cursor_169  s2978 ) {
    return ( (  max888 ) ( (  s2978 ) ,  ( ( * ( env.ed2969 ) ) .f_cursor ) ) );
}

static  struct Cursor_169   lam845 (   struct env845 env ,    struct Cursor_169  s2980 ) {
    return ( (  min881 ) ( (  s2980 ) ,  ( ( * ( env.ed2969 ) ) .f_cursor ) ) );
}

static  struct Cursor_169   lam839 (   struct env839 env ,    struct Cursor_169  s2988 ) {
    return ( (  max888 ) ( (  s2988 ) ,  ( ( * ( env.ed2969 ) ) .f_cursor ) ) );
}

static  struct Cursor_169   lam836 (   struct env836 env ,    struct Cursor_169  s2991 ) {
    return ( (  min881 ) ( (  s2991 ) ,  ( ( * ( env.ed2969 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1455 (   struct env1455 env ,    struct Editor_824 *  ed2969 ,    enum PastePos_1456  pastepos2971 ,    struct Dims_1387  dims2973 ) {
    if ( ( ! ( (  is_dash_just817 ) ( ( ( * (  ed2969 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_136  cp2974 = ( (  or_dash_fail1081 ) ( ( ( * (  ed2969 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    bool  does_dash_it_dash_end_dash_in_dash_newline2975 = (  eq47 ( (  elem_dash_get1109 ( ( (  cp2974 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp2974 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline2975 ) ) {
        struct env842 envinst842 = {
            .ed2969 =  ed2969 ,
        };
        struct env845 envinst845 = {
            .ed2969 =  ed2969 ,
        };
        int32_t  from_dash_y2981 = ( {  enum PastePos_1456  dref2976 = (  pastepos2971 ) ;  dref2976 == PastePos_1456_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe841 ) ( ( ( * (  ed2969 ) ) .f_selected ) ,  ( (struct funenv842){ .fun = lam842, .env = envinst842 } ) ,  ( ( * (  ed2969 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe844 ) ( ( ( * (  ed2969 ) ) .f_selected ) ,  ( (struct funenv845){ .fun = lam845, .env = envinst845 } ) ,  ( ( * (  ed2969 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Primitive_168  prim2982 = ( ( Primitive_168_PrimInsert ) ( ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y2981 ) } ) ,  (  cp2974 ) ) );
        struct funenv1413  temp1457 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
        ( temp1457.fun ( temp1457.env ,  (  ed2969 ) ,  (  prim2982 ) ,  (  dims2973 ) ) );
        struct funenv1448  temp1458 = ( (struct funenv1448){ .fun = add_dash_action1448, .env =  env.envinst1448  } );
        ( temp1458.fun ( temp1458.env ,  (  ed2969 ) ,  (  prim2982 ) ) );
        int32_t  last_dash_pasted_dash_y2983 = (  op_dash_sub88 ( ( ( ( * (  ed2969 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        ( (  move_dash_to1386 ) ( (  ed2969 ) ,  ( (  size_dash_i32290 ) ( ( ( * ( (  get_dash_row1370 ) ( (  ed2969 ) ,  (  last_dash_pasted_dash_y2983 ) ) ) ) .f_count ) ) ) ,  (  last_dash_pasted_dash_y2983 ) ,  (  dims2973 ) ) );
        (*  ed2969 ) .f_selected = ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y2981 ) } ) ) );
        struct funenv1445  temp1459 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  env.envinst1445  } );
        ( temp1459.fun ( temp1459.env ,  (  ed2969 ) ) );
    } else {
        size_t  temp1460;
        size_t  from_dash_x2984 = (  temp1460 );
        int32_t  temp1461;
        int32_t  from_dash_y2985 = (  temp1461 );
        enum PastePos_1456  dref2986 = (  pastepos2971 );
        switch (  dref2986 ) {
            case PastePos_1456_PasteAfter : {
                struct env839 envinst839 = {
                    .ed2969 =  ed2969 ,
                };
                struct Cursor_169  from_dash_cur2989 = ( (  maybe838 ) ( ( ( * (  ed2969 ) ) .f_selected ) ,  ( (struct funenv839){ .fun = lam839, .env = envinst839 } ) ,  ( ( * (  ed2969 ) ) .f_cursor ) ) );
                from_dash_x2984 = ( (  i32_dash_size288 ) ( (  op_dash_add87 ( ( (  from_dash_cur2989 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y2985 = ( (  from_dash_cur2989 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1394 ) ( (  ed2969 ) ,  ( (  from_dash_cur2989 ) .f_x ) ,  ( (  from_dash_cur2989 ) .f_y ) ) ) ) {
                    from_dash_y2985 = (  op_dash_add87 ( (  from_dash_y2985 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x2984 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1456_PasteBefore : {
                struct env836 envinst836 = {
                    .ed2969 =  ed2969 ,
                };
                struct Cursor_169  from_dash_cur2992 = ( (  maybe835 ) ( ( ( * (  ed2969 ) ) .f_selected ) ,  ( (struct funenv836){ .fun = lam836, .env = envinst836 } ) ,  ( ( * (  ed2969 ) ) .f_cursor ) ) );
                from_dash_x2984 = ( (  i32_dash_size288 ) ( ( (  from_dash_cur2992 ) .f_x ) ) );
                from_dash_y2985 = ( (  from_dash_cur2992 ) .f_y );
                break;
            }
        }
        struct Primitive_168  prim2993 = ( ( Primitive_168_PrimInsert ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( (  from_dash_x2984 ) ) ) , .f_y = (  from_dash_y2985 ) } ) ,  (  cp2974 ) ) );
        struct funenv1413  temp1462 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
        ( temp1462.fun ( temp1462.env ,  (  ed2969 ) ,  (  prim2993 ) ,  (  dims2973 ) ) );
        struct funenv1448  temp1463 = ( (struct funenv1448){ .fun = add_dash_action1448, .env =  env.envinst1448  } );
        ( temp1463.fun ( temp1463.env ,  (  ed2969 ) ,  (  prim2993 ) ) );
        struct funenv1445  temp1464 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  env.envinst1445  } );
        ( temp1464.fun ( temp1464.env ,  (  ed2969 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1465 {
    struct env1445 envinst1445;
    ;
    ;
    ;
    ;
    ;
    struct env1413 envinst1413;
    struct env1397 envinst1397;
    struct env1448 envinst1448;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   delete_dash_selected1465 (   struct env1465 env ,    struct Editor_824 *  ed2996 ,    struct Dims_1387  dims2998 ) {
    struct Cursor_169  cfrom3001 = ( {  struct Maybe_816  dref2999 = ( ( * (  ed2996 ) ) .f_selected ) ; dref2999.tag == Maybe_816_Just_t ? ( (  min881 ) ( ( dref2999 .stuff .Maybe_816_Just_s .field0 ) ,  ( ( * (  ed2996 ) ) .f_cursor ) ) ) : ( ( * (  ed2996 ) ) .f_cursor ) ; } );
    struct funenv1397  temp1466 = ( (struct funenv1397){ .fun = copy_dash_selection1397, .env =  env.envinst1397  } );
    ( (  set_dash_clipboard1396 ) ( (  ed2996 ) ,  ( temp1466.fun ( temp1466.env ,  (  ed2996 ) ) ) ) );
    struct funenv1397  temp1467 = ( (struct funenv1397){ .fun = copy_dash_selection1397, .env =  env.envinst1397  } );
    struct Maybe_333  dref3002 = ( temp1467.fun ( temp1467.env ,  (  ed2996 ) ) );
    if ( dref3002.tag == Maybe_333_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3002.tag == Maybe_333_Just_t ) {
        if ( ( (  is_dash_just815 ) ( ( ( * (  ed2996 ) ) .f_selected ) ) ) ) {
            struct funenv1445  temp1468 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  env.envinst1445  } );
            ( temp1468.fun ( temp1468.env ,  (  ed2996 ) ) );
        }
        (*  ed2996 ) .f_selected = ( (struct Maybe_816) { .tag = Maybe_816_None_t } );
        struct Primitive_168  prim3004 = ( ( Primitive_168_PrimDelete ) ( (  cfrom3001 ) ,  ( dref3002 .stuff .Maybe_333_Just_s .field0 ) ) );
        struct funenv1413  temp1469 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
        ( temp1469.fun ( temp1469.env ,  (  ed2996 ) ,  (  prim3004 ) ,  (  dims2998 ) ) );
        struct funenv1448  temp1470 = ( (struct funenv1448){ .fun = add_dash_action1448, .env =  env.envinst1448  } );
        ( temp1470.fun ( temp1470.env ,  (  ed2996 ) ,  (  prim3004 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1183 {
    enum Unit_13  (*fun) (  struct env1183  ,    struct List_3 *  ,    struct TakeWhile_520  );
    struct env1183 env;
};

struct env1471 {
    ;
    struct env1183 envinst1183;
    ;
    ;
    struct env1168 envinst1168;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1471 (   struct env1471 env ,    struct Editor_824 *  ed3007 ,    int32_t  y3009 ,    enum CAllocator_4  al3011 ) {
    struct List_3  temp1472 = ( (  mk1156 ) ( (  al3011 ) ) );
    struct List_3 *  nurow3012 = ( &temp1472 );
    struct TakeWhile_520  rowws3013 = ( (  indent_dash_on_dash_row1372 ) ( (  ed3007 ) ,  ( ( ( * (  ed3007 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars3014 = ( (  size_dash_i32290 ) ( ( (  count777 ) ( (  rowws3013 ) ) ) ) );
    struct funenv1183  temp1473 = ( (struct funenv1183){ .fun = add_dash_all1183, .env =  env.envinst1183  } );
    ( temp1473.fun ( temp1473.env ,  (  nurow3012 ) ,  (  rowws3013 ) ) );
    struct funenv1168  temp1474 = ( (struct funenv1168){ .fun = insert1168, .env =  env.envinst1168  } );
    ( temp1474.fun ( temp1474.env ,  ( & ( ( * (  ed3007 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size288 ) ( (  y3009 ) ) ) ,  ( * (  nurow3012 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1475 (    struct Editor_824 *  ed3017 ,    struct Cursor_169  c3019 ) {
    return ( {  struct Maybe_816  dref3020 = ( ( * (  ed3017 ) ) .f_selected ) ; dref3020.tag == Maybe_816_Just_t ? ( (  between891 ) ( (  c3019 ) ,  ( ( * (  ed3017 ) ) .f_cursor ) ,  ( dref3020 .stuff .Maybe_816_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1384 {
    enum Unit_13  (*fun) (  struct env1384  ,    struct Editor_824 *  ,    const char*  );
    struct env1384 env;
};

struct env1476 {
    ;
    ;
    ;
    ;
    struct env1384 envinst1384;
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

static  struct Maybe_816   find_dash_next_dash_occurence1476 (   struct env1476 env ,    struct Editor_824 *  ed3024 ,    struct Slice_5  needle3026 ) {
    struct Cursor_169  from3027 = ( (  max888 ) ( ( ( * (  ed3024 ) ) .f_cursor ) ,  ( (  or_dash_else1084 ) ( ( ( * (  ed3024 ) ) .f_selected ) ,  ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline3028 = ( (  to_dash_slice1192 ) ( ( * ( (  get_dash_row1370 ) ( (  ed3024 ) ,  ( (  from3027 ) .f_y ) ) ) ) ) );
    struct Maybe_834  dref3029 = ( (  find_dash_slice1113 ) ( ( (  subslice312 ) ( (  curline3028 ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  from3027 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline3028 ) .f_count ) ) ) ,  (  needle3026 ) ) );
    if ( dref3029.tag == Maybe_834_Just_t ) {
        return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from3027 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32290 ) ( ( dref3029 .stuff .Maybe_834_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from3027 ) .f_y ) } ) ) );
    }
    else if ( dref3029.tag == Maybe_834_None_t ) {
        struct Zip_357  temp1477 =  into_dash_iter373 ( ( (  zip492 ) ( ( (  from1101 ) ( ( (  to_dash_slice1193 ) ( ( ( * (  ed3024 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( (  from3027 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from382 ) ( (  op_dash_add87 ( ( (  from3027 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_363  __cond1478 =  next365 (&temp1477);
            if (  __cond1478 .tag == 0 ) {
                break;
            }
            struct Tuple2_364  dref3031 =  __cond1478 .stuff .Maybe_363_Just_s .field0;
            struct Maybe_834  dref3034 = ( (  find_dash_slice1113 ) ( ( (  to_dash_slice1192 ) ( ( dref3031 .field0 ) ) ) ,  (  needle3026 ) ) );
            if ( dref3034.tag == Maybe_834_None_t ) {
            }
            else if ( dref3034.tag == Maybe_834_Just_t ) {
                return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3034 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = ( dref3031 .field1 ) } ) ) );
            }
        }
        struct funenv1384  temp1479 = ( (struct funenv1384){ .fun = send_dash_msg1384, .env =  env.envinst1384  } );
        ( temp1479.fun ( temp1479.env ,  (  ed3024 ) ,  ( "Wrapped!" ) ) );
        struct Zip_357  temp1480 =  into_dash_iter373 ( ( (  zip492 ) ( ( (  subslice303 ) ( ( (  to_dash_slice1193 ) ( ( ( * (  ed3024 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size288 ) ( ( (  from3027 ) .f_y ) ) ) ) ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_363  __cond1481 =  next365 (&temp1480);
            if (  __cond1481 .tag == 0 ) {
                break;
            }
            struct Tuple2_364  dref3036 =  __cond1481 .stuff .Maybe_363_Just_s .field0;
            struct Maybe_834  dref3039 = ( (  find_dash_slice1113 ) ( ( (  to_dash_slice1192 ) ( ( dref3036 .field0 ) ) ) ,  (  needle3026 ) ) );
            if ( dref3039.tag == Maybe_834_None_t ) {
            }
            else if ( dref3039.tag == Maybe_834_Just_t ) {
                return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3039 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = ( dref3036 .field1 ) } ) ) );
            }
        }
        struct Maybe_834  dref3041 = ( (  find_dash_slice1113 ) ( (  curline3028 ) ,  (  needle3026 ) ) );
        if ( dref3041.tag == Maybe_834_None_t ) {
        }
        else if ( dref3041.tag == Maybe_834_Just_t ) {
            return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3041 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = ( (  from3027 ) .f_y ) } ) ) );
        }
        struct funenv1384  temp1482 = ( (struct funenv1384){ .fun = send_dash_msg1384, .env =  env.envinst1384  } );
        ( temp1482.fun ( temp1482.env ,  (  ed3024 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_816) { .tag = Maybe_816_None_t } );
    }
}

struct env1483 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1384 envinst1384;
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

static  struct Cursor_169   lam860 (   struct env860 env ,    struct Cursor_169  s3049 ) {
    return ( (  min881 ) ( ( ( * ( env.ed3045 ) ) .f_cursor ) ,  (  s3049 ) ) );
}

static  struct Maybe_816   find_dash_prev_dash_occurence1483 (   struct env1483 env ,    struct Editor_824 *  ed3045 ,    struct Slice_5  needle3047 ) {
    struct env860 envinst860 = {
        .ed3045 =  ed3045 ,
    };
    struct Cursor_169  from3050 = ( (  maybe859 ) ( ( ( * (  ed3045 ) ) .f_selected ) ,  ( (struct funenv860){ .fun = lam860, .env = envinst860 } ) ,  ( ( * (  ed3045 ) ) .f_cursor ) ) );
    struct Slice_5  curline3051 = ( (  to_dash_slice1192 ) ( ( * ( (  get_dash_row1370 ) ( (  ed3045 ) ,  ( (  from3050 ) .f_y ) ) ) ) ) );
    struct Maybe_834  dref3052 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1116 ) ( ( (  subslice312 ) ( (  curline3051 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size288 ) ( ( (  from3050 ) .f_x ) ) ) ) ) ,  (  needle3047 ) ) );
    if ( dref3052.tag == Maybe_834_Just_t ) {
        return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3052 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = ( (  from3050 ) .f_y ) } ) ) );
    }
    else if ( dref3052.tag == Maybe_834_None_t ) {
        int32_t  from_dash_y3054 = (  op_dash_sub88 ( ( (  from3050 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3054 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row3055 = ( (  get_dash_row1370 ) ( (  ed3045 ) ,  (  from_dash_y3054 ) ) );
            struct Maybe_834  dref3056 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1116 ) ( ( (  to_dash_slice1192 ) ( ( * (  row3055 ) ) ) ) ,  (  needle3047 ) ) );
            if ( dref3056.tag == Maybe_834_None_t ) {
            }
            else if ( dref3056.tag == Maybe_834_Just_t ) {
                return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3056 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3054 ) } ) ) );
            }
            from_dash_y3054 = (  op_dash_sub88 ( (  from_dash_y3054 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1384  temp1484 = ( (struct funenv1384){ .fun = send_dash_msg1384, .env =  env.envinst1384  } );
        ( temp1484.fun ( temp1484.env ,  (  ed3045 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y3058 = (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( (  num_dash_rows1373 ) ( (  ed3045 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3058 ) , ( (  from3050 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row3059 = ( (  get_dash_row1370 ) ( (  ed3045 ) ,  (  from_dash_y3058 ) ) );
            struct Maybe_834  dref3060 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1116 ) ( ( (  to_dash_slice1192 ) ( ( * (  row3059 ) ) ) ) ,  (  needle3047 ) ) );
            if ( dref3060.tag == Maybe_834_None_t ) {
            }
            else if ( dref3060.tag == Maybe_834_Just_t ) {
                return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3060 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3058 ) } ) ) );
            }
            from_dash_y3058 = (  op_dash_sub88 ( (  from_dash_y3058 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_834  dref3062 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1116 ) ( (  curline3051 ) ,  (  needle3047 ) ) );
        if ( dref3062.tag == Maybe_834_None_t ) {
        }
        else if ( dref3062.tag == Maybe_834_Just_t ) {
            return ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( dref3062 .stuff .Maybe_834_Just_s .field0 ) ) ) , .f_y = ( (  from3050 ) .f_y ) } ) ) );
        }
        struct funenv1384  temp1485 = ( (struct funenv1384){ .fun = send_dash_msg1384, .env =  env.envinst1384  } );
        ( temp1485.fun ( temp1485.env ,  (  ed3045 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_816) { .tag = Maybe_816_None_t } );
    }
}

struct funenv1244 {
    struct DynStr_136  (*fun) (  struct env1244  ,    char  ,    enum CAllocator_4  );
    struct env1244 env;
};

struct env1486 {
    ;
    ;
    ;
    ;
    ;
    struct env1244 envinst1244;
    ;
    ;
    ;
    struct env1413 envinst1413;
    struct env1448 envinst1448;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam848 (   struct env848 env ,    struct Cursor_169  s3070 ) {
    return ( (  min883 ) ( ( (  s3070 ) .f_y ) ,  ( ( ( * ( env.ed3066 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam851 (   struct env851 env ,    struct Cursor_169  s3073 ) {
    return ( (  max887 ) ( ( (  s3073 ) .f_y ) ,  ( ( ( * ( env.ed3066 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   indent_dash_selection1486 (   struct env1486 env ,    struct Editor_824 *  ed3066 ,    struct Dims_1387  dims3068 ) {
    struct env848 envinst848 = {
        .ed3066 =  ed3066 ,
    };
    int32_t  from_dash_y3071 = ( (  maybe847 ) ( ( ( * (  ed3066 ) ) .f_selected ) ,  ( (struct funenv848){ .fun = lam848, .env = envinst848 } ) ,  ( ( ( * (  ed3066 ) ) .f_cursor ) .f_y ) ) );
    struct env851 envinst851 = {
        .ed3066 =  ed3066 ,
    };
    int32_t  to_dash_y3074 = ( (  maybe850 ) ( ( ( * (  ed3066 ) ) .f_selected ) ,  ( (struct funenv851){ .fun = lam851, .env = envinst851 } ) ,  ( ( ( * (  ed3066 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_169  saved_dash_cursor3075 = ( ( * (  ed3066 ) ) .f_cursor );
    struct Maybe_816  saved_dash_selected3076 = ( ( * (  ed3066 ) ) .f_selected );
    struct RangeIter_380  temp1487 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_y3071 ) ,  (  to_dash_y3074 ) ) ) );
    while (true) {
        struct Maybe_346  __cond1488 =  next381 (&temp1487);
        if (  __cond1488 .tag == 0 ) {
            break;
        }
        int32_t  rowid3078 =  __cond1488 .stuff .Maybe_346_Just_s .field0;
        struct funenv1244  temp1489 = ( (struct funenv1244){ .fun = mk_dash_dyn_dash_str1244, .env =  env.envinst1244  } );
        struct Primitive_168  prim3079 = ( ( Primitive_168_PrimInsert ) ( ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3078 ) } ) ,  ( temp1489.fun ( temp1489.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3066 ) ) .f_al ) ) ) ) );
        struct funenv1413  temp1490 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
        ( temp1490.fun ( temp1490.env ,  (  ed3066 ) ,  (  prim3079 ) ,  (  dims3068 ) ) );
        struct funenv1448  temp1491 = ( (struct funenv1448){ .fun = add_dash_action1448, .env =  env.envinst1448  } );
        ( temp1491.fun ( temp1491.env ,  (  ed3066 ) ,  (  prim3079 ) ) );
    }
    (*  ed3066 ) .f_cursor = (  saved_dash_cursor3075 );
    (*  ed3066 ) .f_selected = (  saved_dash_selected3076 );
    return ( Unit_13_Unit );
}

struct env1492 {
    ;
    ;
    ;
    ;
    ;
    struct env1244 envinst1244;
    ;
    ;
    ;
    ;
    ;
    struct env1413 envinst1413;
    struct env1448 envinst1448;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam854 (   struct env854 env ,    struct Cursor_169  s3086 ) {
    return ( (  min883 ) ( ( (  s3086 ) .f_y ) ,  ( ( ( * ( env.ed3082 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam857 (   struct env857 env ,    struct Cursor_169  s3089 ) {
    return ( (  max887 ) ( ( (  s3089 ) .f_y ) ,  ( ( ( * ( env.ed3082 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1492 (   struct env1492 env ,    struct Editor_824 *  ed3082 ,    struct Dims_1387  dims3084 ) {
    struct env854 envinst854 = {
        .ed3082 =  ed3082 ,
    };
    int32_t  from_dash_y3087 = ( (  maybe853 ) ( ( ( * (  ed3082 ) ) .f_selected ) ,  ( (struct funenv854){ .fun = lam854, .env = envinst854 } ) ,  ( ( ( * (  ed3082 ) ) .f_cursor ) .f_y ) ) );
    struct env857 envinst857 = {
        .ed3082 =  ed3082 ,
    };
    int32_t  to_dash_y3090 = ( (  maybe856 ) ( ( ( * (  ed3082 ) ) .f_selected ) ,  ( (struct funenv857){ .fun = lam857, .env = envinst857 } ) ,  ( ( ( * (  ed3082 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_169  saved_dash_cursor3091 = ( ( * (  ed3082 ) ) .f_cursor );
    struct Maybe_816  saved_dash_selected3092 = ( ( * (  ed3082 ) ) .f_selected );
    struct RangeIter_380  temp1493 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_y3087 ) ,  (  to_dash_y3090 ) ) ) );
    while (true) {
        struct Maybe_346  __cond1494 =  next381 (&temp1493);
        if (  __cond1494 .tag == 0 ) {
            break;
        }
        int32_t  rowid3094 =  __cond1494 .stuff .Maybe_346_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1376 ) ( (  ed3082 ) ,  ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3094 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct funenv1244  temp1495 = ( (struct funenv1244){ .fun = mk_dash_dyn_dash_str1244, .env =  env.envinst1244  } );
            struct Primitive_168  prim3095 = ( ( Primitive_168_PrimDelete ) ( ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3094 ) } ) ,  ( temp1495.fun ( temp1495.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3082 ) ) .f_al ) ) ) ) );
            struct funenv1413  temp1496 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  env.envinst1413  } );
            ( temp1496.fun ( temp1496.env ,  (  ed3082 ) ,  (  prim3095 ) ,  (  dims3084 ) ) );
            struct funenv1448  temp1497 = ( (struct funenv1448){ .fun = add_dash_action1448, .env =  env.envinst1448  } );
            ( temp1497.fun ( temp1497.env ,  (  ed3082 ) ,  (  prim3095 ) ) );
        }
    }
    (*  ed3082 ) .f_cursor = (  saved_dash_cursor3091 );
    (*  ed3082 ) .f_selected = (  saved_dash_selected3092 );
    return ( Unit_13_Unit );
}

struct funenv1187 {
    struct List_300  (*fun) (  struct env1187  ,    struct Map_318  ,    enum CAllocator_4  );
    struct env1187 env;
};

struct env1498 {
    ;
    ;
    struct env321 envinst321;
    struct env572 envinst572;
    ;
    struct env1187 envinst1187;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam320 (   struct env320 env ,    struct DynStr_136  line3132 ) {
    struct funenv321  temp1501 = ( (struct funenv321){ .fun = to_dash_list321, .env =  env.envinst321  } );
    return ( temp1501.fun ( temp1501.env ,  (  line3132 ) ,  ( env.al3101 ) ) );
}

static  struct List_300   load_dash_file1498 (   struct env1498 env ,    const char*  filename3099 ,    enum CAllocator_4  al3101 ) {
    struct funenv1187  temp1500 = ( (struct funenv1187){ .fun = to_dash_list1187, .env =  env.envinst1187  } );
    struct env320 envinst320 = {
        .envinst321 = env.envinst321 ,
        .al3101 =  al3101 ,
    };
    struct List_300  temp1499 = ( temp1500.fun ( temp1500.env ,  ( (  map349 ) ( ( (  lines1140 ) ( ( (  read_dash_contents1358 ) ( (  filename3099 ) ,  (  al3101 ) ) ) ) ) ,  ( (struct funenv320){ .fun = lam320, .env = envinst320 } ) ) ) ,  (  al3101 ) ) );
    struct List_300 *  file3133 = ( &temp1499 );
    if ( ( (  null808 ) ( (  file3133 ) ) ) ) {
        struct funenv572  temp1502 = ( (struct funenv572){ .fun = add572, .env =  env.envinst572  } );
        ( temp1502.fun ( temp1502.env ,  (  file3133 ) ,  ( (  mk1156 ) ( (  al3101 ) ) ) ) );
    }
    return ( * (  file3133 ) );
}

struct env1503 {
    ;
    ;
    ;
    struct env641 envinst641;
    ;
    enum CAllocator_4  al3096;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam640 (   struct env640 env ,    char  c3143 ) {
    struct funenv641  temp1507 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
    return ( temp1507.fun ( temp1507.env ,  ( env.sb3139 ) ,  (  c3143 ) ) );
}

static  enum Unit_13   save_dash_file1503 (   struct env1503 env ,    struct List_300  cf3136 ,    const char*  filename3138 ) {
    struct StrBuilder_586  temp1504 = ( (  mk1237 ) ( ( env.al3096 ) ) );
    struct StrBuilder_586 *  sb3139 = ( &temp1504 );
    struct SliceIter_298  temp1505 =  into_dash_iter301 ( (  cf3136 ) );
    while (true) {
        struct Maybe_332  __cond1506 =  next366 (&temp1505);
        if (  __cond1506 .tag == 0 ) {
            break;
        }
        struct List_3  row3141 =  __cond1506 .stuff .Maybe_332_Just_s .field0;
        struct env640 envinst640 = {
            .envinst641 = env.envinst641 ,
            .sb3139 =  sb3139 ,
        };
        ( (  for_dash_each639 ) ( (  row3141 ) ,  ( (struct funenv640){ .fun = lam640, .env = envinst640 } ) ) );
        struct funenv641  temp1508 = ( (struct funenv641){ .fun = write_dash_char641, .env =  env.envinst641  } );
        ( temp1508.fun ( temp1508.env ,  (  sb3139 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1360 ) ( (  filename3138 ) ,  ( (  as_dash_str910 ) ( (  sb3139 ) ) ) ) );
    ( (  free1239 ) ( (  sb3139 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1509 (    struct List_300  cf3146 ) {
    ( (  for_dash_each652 ) ( ( (  addresses1194 ) ( (  cf3146 ) ) ) ,  (  free1158 ) ) );
    ( (  free1159 ) ( ( & (  cf3146 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1510 {
    ;
    int32_t  pad3147;
    ;
    ;
    ;
};

struct anon_1511 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1511   left_dash_offset1510 (   struct env1510 env ,    struct Editor_824 *  ed3150 ) {
    int32_t  max_dash_digits3151 = ( (  max887 ) ( ( (  count_dash_digits895 ) ( ( ( ( * (  ed3150 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1511) { .f_max_dash_digits = (  max_dash_digits3151 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad3147 ) , (  max_dash_digits3151 ) ) ) , ( env.pad3147 ) ) ) } );
}

struct funenv1510 {
    struct anon_1511  (*fun) (  struct env1510  ,    struct Editor_824 *  );
    struct env1510 env;
};

struct env1512 {
    ;
    ;
    struct env1510 envinst1510;
};

static  struct Dims_1387   screen_dash_dims1512 (   struct env1512 env ,    struct Editor_824 *  ed3154 ,    struct Tui_665 *  tui3156 ) {
    struct funenv1510  temp1513 = ( (struct funenv1510){ .fun = left_dash_offset1510, .env =  env.envinst1510  } );
    return ( (struct Dims_1387) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * (  tui3156 ) ) .f_width ) ) ) , ( ( temp1513.fun ( temp1513.env ,  (  ed3154 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32294 ) ( ( ( * (  tui3156 ) ) .f_height ) ) ) } );
}

struct env1514 {
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
    struct env1510 envinst1510;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad3147;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1514 (   struct env1514 env ,    struct Screen_664 *  screen3159 ,    struct Editor_824 *  ed3161 ) {
    int32_t  w3162 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen3159 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3163 = ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen3159 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y3164 = ( ( * (  ed3161 ) ) .f_screen_dash_top );
    int32_t  from_dash_x3165 = ( ( * (  ed3161 ) ) .f_screen_dash_left );
    int32_t  x3166 = (  from_dash_integral29 ( 0 ) );
    int32_t  y3167 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1074 ) ( (  cmp9 ( ( ( ( * (  ed3161 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1510  temp1515 = ( (struct funenv1510){ .fun = left_dash_offset1510, .env =  env.envinst1510  } );
    struct anon_1511  offstuff3168 = ( temp1515.fun ( temp1515.env ,  (  ed3161 ) ) );
    int32_t  max_dash_digits3169 = ( (  offstuff3168 ) .f_max_dash_digits );
    int32_t  left_dash_off3170 = ( (  offstuff3168 ) .f_total_dash_offset );
    struct Drop_356  temp1516 =  into_dash_iter355 ( ( (  drop372 ) ( ( (  zip494 ) ( ( ( * (  ed3161 ) ) .f_current_dash_file ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size288 ) ( (  from_dash_y3164 ) ) ) ) ) );
    while (true) {
        struct Maybe_363  __cond1517 =  next362 (&temp1516);
        if (  __cond1517 .tag == 0 ) {
            break;
        }
        struct Tuple2_364  dref3171 =  __cond1517 .stuff .Maybe_363_Just_s .field0;
        int32_t  row_dash_num3174 = (  op_dash_add87 ( ( dref3171 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_380  temp1518 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3147 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1519 =  next381 (&temp1518);
            if (  __cond1519 .tag == 0 ) {
                break;
            }
            int32_t  xx3176 =  __cond1519 .stuff .Maybe_346_Just_s .field0;
            ( (  put_dash_char1334 ) ( (  screen3159 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx3176 ) ,  (  y3167 ) ) );
        }
        ( (  draw_dash_str_dash_right1346 ) ( (  screen3159 ) ,  (  row_dash_num3174 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen3159 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits3169 ) ) ) , ( env.pad3147 ) ) ) ,  (  y3167 ) ) );
        struct RangeIter_380  temp1520 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3147 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1521 =  next381 (&temp1520);
            if (  __cond1521 .tag == 0 ) {
                break;
            }
            int32_t  xx3178 =  __cond1521 .stuff .Maybe_346_Just_s .field0;
            ( (  put_dash_char1334 ) ( (  screen3159 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx3178 ) , ( env.pad3147 ) ) ) , (  max_dash_digits3169 ) ) ) ,  (  y3167 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed3161 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num3174 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_380  temp1522 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits3169 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_346  __cond1523 =  next381 (&temp1522);
                if (  __cond1523 .tag == 0 ) {
                    break;
                }
                int32_t  xxx3180 =  __cond1523 .stuff .Maybe_346_Just_s .field0;
                struct Cell_58 *  cp3181 = ( (  or_dash_fail1082 ) ( ( (  get_dash_cell_dash_ptr1328 ) ( (  screen3159 ) ,  (  op_dash_add87 ( (  xxx3180 ) , ( env.pad3147 ) ) ) ,  (  y3167 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp3181 ) .f_fg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp3181 ) .f_bg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_360  temp1524 =  into_dash_iter359 ( ( (  drop374 ) ( ( (  zip495 ) ( ( dref3171 .field0 ) ,  ( (  from382 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size288 ) ( (  from_dash_x3165 ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1525 =  next368 (&temp1524);
            if (  __cond1525 .tag == 0 ) {
                break;
            }
            struct Tuple2_370  dref3182 =  __cond1525 .stuff .Maybe_369_Just_s .field0;
            bool  in_dash_selection3185 = ( (  is_dash_in_dash_selection1475 ) ( (  ed3161 ) ,  ( (struct Cursor_169) { .f_x = ( dref3182 .field1 ) , .f_y = ( dref3171 .field1 ) } ) ) );
            if ( (  in_dash_selection3185 ) ) {
                ( (  set_dash_screen_dash_colors1327 ) ( (  screen3159 ) ,  ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref3182 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1334 ) ( (  screen3159 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3170 ) , (  x3166 ) ) ) ,  (  y3167 ) ) );
                x3166 = (  op_dash_add87 ( (  x3166 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1334 ) ( (  screen3159 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3170 ) , (  x3166 ) ) ) ,  (  y3167 ) ) );
            } else {
                ( (  put_dash_char1334 ) ( (  screen3159 ) ,  ( dref3182 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off3170 ) , (  x3166 ) ) ) ,  (  y3167 ) ) );
            }
            if ( (  in_dash_selection3185 ) ) {
                ( (  set_dash_screen_dash_colors1327 ) ( (  screen3159 ) ,  ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x3166 = (  op_dash_add87 ( (  x3166 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x3166 ) , (  w3162 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x3166 ) , (  w3162 ) ) == 0 ) && ( (  is_dash_in_dash_selection1475 ) ( (  ed3161 ) ,  ( (struct Cursor_169) { .f_x = ( (  size_dash_i32290 ) ( ( ( dref3171 .field0 ) .f_count ) ) ) , .f_y = ( dref3171 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell3186 = ( (  or_dash_fail1082 ) ( ( (  get_dash_cell_dash_ptr1328 ) ( (  screen3159 ) ,  (  op_dash_add87 ( (  left_dash_off3170 ) , (  x3166 ) ) ) ,  (  y3167 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell3186 ) .f_fg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell3186 ) .f_bg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y3167 = (  op_dash_add87 ( (  y3167 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x3166 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y3167 ) , (  h3163 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_816  dref3187 = ( ( * (  ed3161 ) ) .f_selected );
    if ( dref3187.tag == Maybe_816_None_t ) {
    }
    else if ( dref3187.tag == Maybe_816_Just_t ) {
        int32_t  vx3189 = ( (  from_dash_visual1367 ) ( ( (  x_dash_to_dash_visual_dash_x1378 ) ( (  ed3161 ) ,  ( ( dref3187 .stuff .Maybe_816_Just_s .field0 ) .f_x ) ,  ( ( dref3187 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len3190 = ( (  maybe879 ) ( ( (  try_dash_get1151 ) ( ( (  get_dash_row1370 ) ( (  ed3161 ) ,  ( ( dref3187 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size288 ) ( ( ( dref3187 .stuff .Maybe_816_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1362 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_380  temp1526 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3190 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1527 =  next381 (&temp1526);
            if (  __cond1527 .tag == 0 ) {
                break;
            }
            int32_t  x3192 =  __cond1527 .stuff .Maybe_346_Just_s .field0;
            struct Maybe_1083  dref3193 = ( (  get_dash_cell_dash_ptr1328 ) ( (  screen3159 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3170 ) , ( ( * (  ed3161 ) ) .f_screen_dash_left ) ) ) , (  vx3189 ) ) ) , (  x3192 ) ) ) ,  (  op_dash_sub88 ( ( ( dref3187 .stuff .Maybe_816_Just_s .field0 ) .f_y ) , (  from_dash_y3164 ) ) ) ) );
            if ( dref3193.tag == Maybe_1083_None_t ) {
            }
            else if ( dref3193.tag == Maybe_1083_Just_t ) {
                (* dref3193 .stuff .Maybe_1083_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref3193 .stuff .Maybe_1083_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_169  cur3195 = ( ( * (  ed3161 ) ) .f_cursor );
    int32_t  vx3196 = ( (  from_dash_visual1367 ) ( ( (  x_dash_to_dash_visual_dash_x1378 ) ( (  ed3161 ) ,  ( (  cur3195 ) .f_x ) ,  ( (  cur3195 ) .f_y ) ) ) ) );
    int32_t  len3197 = ( (  maybe879 ) ( ( (  try_dash_get1151 ) ( ( (  cursor_dash_row1371 ) ( (  ed3161 ) ) ) ,  ( (  i32_dash_size288 ) ( ( (  cur3195 ) .f_x ) ) ) ) ) ,  (  char_dash_len1362 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_380  temp1528 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3197 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1529 =  next381 (&temp1528);
        if (  __cond1529 .tag == 0 ) {
            break;
        }
        int32_t  x3199 =  __cond1529 .stuff .Maybe_346_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell3200 = ( (  or_dash_fail1082 ) ( ( (  get_dash_cell_dash_ptr1328 ) ( (  screen3159 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3170 ) , ( ( * (  ed3161 ) ) .f_screen_dash_left ) ) ) , (  vx3196 ) ) ) , (  x3199 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3161 ) ) .f_cursor ) .f_y ) , (  from_dash_y3164 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell3200 ) .f_fg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell3200 ) .f_bg = ( ( * ( ( * (  ed3161 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1530 (    struct Maybe_821 *  dref3202 ,    struct Screen_664 *  screen3205 ) {
    struct Maybe_821  dref3206 = ( (* dref3202 ) );
    if ( dref3206.tag == Maybe_821_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3206.tag == Maybe_821_Just_t ) {
        struct Duration_1265  diff3208 = ( (  diff1266 ) ( ( (  now1262 ) ( ) ) ,  ( dref3206 .stuff .Maybe_821_Just_s .field0 ) ) );
        struct Duration_1265  limit3209 = ( (  duration_dash_from_dash_ns1267 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1264 ( (  diff3208 ) , (  limit3209 ) ) == 2 ) ) {
            (* dref3202 ) = ( (struct Maybe_821) { .tag = Maybe_821_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3210 = (  op_dash_div85 ( ( (  u32_dash_i64293 ) ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3211 = (  op_dash_div85 ( ( (  u32_dash_i64293 ) ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3212 = ( (  i64_dash_i32289 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1268 ) ( (  diff3208 ) ) ) , (  x_dash_fill3210 ) ) ) , ( (  duration_dash_to_dash_ns1268 ) ( (  limit3209 ) ) ) ) ) ) );
        int32_t  y_dash_progress3213 = ( (  i64_dash_i32289 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1268 ) ( (  diff3208 ) ) ) , (  y_dash_fill3211 ) ) ) , ( (  duration_dash_to_dash_ns1268 ) ( (  limit3209 ) ) ) ) ) ) );
        uint32_t  center_dash_x3214 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3215 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1326 ) ( (  screen3205 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3216 = (  op_dash_sub88 ( ( (  i64_dash_i32289 ) ( (  x_dash_fill3210 ) ) ) , (  x_dash_progress3212 ) ) );
        int32_t  y_dash_off3217 = (  op_dash_sub88 ( ( (  i64_dash_i32289 ) ( (  y_dash_fill3211 ) ) ) , (  y_dash_progress3213 ) ) );
        int32_t  h3218 = (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3219 = (  op_dash_sub88 ( ( (  u32_dash_i32294 ) ( ( ( * ( ( * (  screen3205 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_380  temp1531 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3218 ) ) ) );
        while (true) {
            struct Maybe_346  __cond1532 =  next381 (&temp1531);
            if (  __cond1532 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3221 =  __cond1532 .stuff .Maybe_346_Just_s .field0;
            struct RangeIter_380  temp1533 =  into_dash_iter379 ( ( (  to377 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3219 ) ) ) );
            while (true) {
                struct Maybe_346  __cond1534 =  next381 (&temp1533);
                if (  __cond1534 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3223 =  __cond1534 .stuff .Maybe_346_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3223 ) , (  x_dash_off3216 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3223 ) , (  op_dash_sub88 ( (  w3219 ) , (  x_dash_off3216 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3221 ) , (  y_dash_off3217 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3221 ) , (  op_dash_sub88 ( (  h3218 ) , (  y_dash_off3217 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1334 ) ( (  screen3205 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3223 ) ,  (  screen_dash_y3221 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1498 {
    struct List_300  (*fun) (  struct env1498  ,    const char*  ,    enum CAllocator_4  );
    struct env1498 env;
};

struct funenv1260 {
    const char*  (*fun) (  struct env1260  ,    struct TakeWhile_527  ,    enum CAllocator_4  );
    struct env1260 env;
};

struct funenv1258 {
    const char*  (*fun) (  struct env1258  ,    struct TakeWhile_522  ,    enum CAllocator_4  );
    struct env1258 env;
};

struct funenv1503 {
    enum Unit_13  (*fun) (  struct env1503  ,    struct List_300  ,    const char*  );
    struct env1503 env;
};

struct env1535 {
    ;
    ;
    struct Theme_827 *  dark_dash_theme2669;
    ;
    ;
    ;
    ;
    struct env1498 envinst1498;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1260 envinst1260;
    ;
    ;
    struct env1258 envinst1258;
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
    struct env1503 envinst1503;
    struct Theme_827 *  light_dash_theme2670;
};

static  bool   lam1536 (    char  c3237 ) {
    return ( ! ( (  is_dash_whitespace1135 ) ( (  c3237 ) ) ) );
}

static  bool   lam1540 (    char  c3245 ) {
    return ( ! ( (  is_dash_whitespace1135 ) ( (  c3245 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1535 (   struct env1535 env ,    struct Editor_824 *  ed3226 ,    struct DynStr_136  s3228 ,    struct Dims_1387  dim3230 ,    enum CAllocator_4  al3232 ) {
    struct DropWhile_525  s3233 = ( (  drop_dash_while550 ) ( (  s3228 ) ,  (  is_dash_whitespace1135 ) ) );
    struct TakeWhile_529  cmd3234 = ( (  take_dash_while543 ) ( (  s3233 ) ,  (  is_dash_not_dash_whitespace1136 ) ) );
    struct DropWhile_523  rest3235 = ( (  drop_dash_while553 ) ( ( (  drop_dash_while552 ) ( (  s3233 ) ,  (  is_dash_not_dash_whitespace1136 ) ) ) ,  (  is_dash_whitespace1135 ) ) );
    if ( ( (  eq1053 ) ( (  cmd3234 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_522  filename3238 = ( (  take_dash_while545 ) ( (  rest3235 ) ,  (  lam1536 ) ) );
        const char*  temp1537;
        const char*  alfname3239 = (  temp1537 );
        if ( ( (  null810 ) ( (  filename3238 ) ) ) ) {
            struct Maybe_285  dref3240 = ( ( * (  ed3226 ) ) .f_filename );
            if ( dref3240.tag == Maybe_285_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3240.tag == Maybe_285_Just_t ) {
                alfname3239 = ( dref3240 .stuff .Maybe_285_Just_s .field0 );
            }
        } else {
            struct Maybe_285  dref3242 = ( ( * (  ed3226 ) ) .f_filename );
            if ( dref3242.tag == Maybe_285_None_t ) {
            }
            else if ( dref3242.tag == Maybe_285_Just_t ) {
                ( (  free1127 ) ( (  al3232 ) ,  ( (struct Slice_1128) { .f_ptr = ( (  cast200 ) ( ( dref3242 .stuff .Maybe_285_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1258  temp1538 = ( (struct funenv1258){ .fun = mk_dash_const_dash_str1258, .env =  env.envinst1258  } );
            alfname3239 = ( temp1538.fun ( temp1538.env ,  (  filename3238 ) ,  (  al3232 ) ) );
        }
        struct funenv1503  temp1539 = ( (struct funenv1503){ .fun = save_dash_file1503, .env =  env.envinst1503  } );
        ( temp1539.fun ( temp1539.env ,  ( ( * (  ed3226 ) ) .f_current_dash_file ) ,  (  alfname3239 ) ) );
        (*  ed3226 ) .f_filename = ( ( Maybe_285_Just ) ( (  alfname3239 ) ) );
    } else {
        if ( ( (  eq1053 ) ( (  cmd3234 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3226 ) .f_running = ( false );
        } else {
            if ( ( (  eq1053 ) ( (  cmd3234 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_527  filename3246 = ( (  take_dash_while547 ) ( (  rest3235 ) ,  (  lam1540 ) ) );
                struct funenv1260  temp1541 = ( (struct funenv1260){ .fun = mk_dash_const_dash_str1260, .env =  env.envinst1260  } );
                const char*  alfname3247 = ( temp1541.fun ( temp1541.env ,  (  filename3246 ) ,  (  al3232 ) ) );
                struct List_300  og3248 = ( ( * (  ed3226 ) ) .f_current_dash_file );
                struct funenv1498  temp1542 = ( (struct funenv1498){ .fun = load_dash_file1498, .env =  env.envinst1498  } );
                (*  ed3226 ) .f_current_dash_file = ( temp1542.fun ( temp1542.env ,  (  alfname3247 ) ,  (  al3232 ) ) );
                struct Maybe_285  dref3249 = ( ( * (  ed3226 ) ) .f_filename );
                if ( dref3249.tag == Maybe_285_None_t ) {
                }
                else if ( dref3249.tag == Maybe_285_Just_t ) {
                    ( (  free1127 ) ( (  al3232 ) ,  ( (struct Slice_1128) { .f_ptr = ( (  cast200 ) ( ( dref3249 .stuff .Maybe_285_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3226 ) .f_filename = ( ( Maybe_285_Just ) ( (  alfname3247 ) ) );
                (*  ed3226 ) .f_cursor = ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3226 ) .f_goal_dash_x = ( ( Visual_825_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3226 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1509 ) ( (  og3248 ) ) );
            } else {
                if ( ( (  eq1056 ) ( (  cmd3234 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_540  theme_dash_name3251 = ( (  take_dash_while548 ) ( (  rest3235 ) ,  (  is_dash_not_dash_whitespace1136 ) ) );
                    if ( ( (  eq1059 ) ( (  theme_dash_name3251 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3226 ) .f_theme = ( env.dark_dash_theme2669 );
                    } else {
                        if ( ( (  eq1059 ) ( (  theme_dash_name3251 ) ,  ( "light" ) ) ) ) {
                            (*  ed3226 ) .f_theme = ( env.light_dash_theme2670 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_741  dref3252 = ( (  parse_dash_int1145 ) ( (  cmd3234 ) ) );
                    if ( dref3252.tag == Maybe_741_Just_t ) {
                        int32_t  newline3254 = ( (  clamp892 ) ( ( (  i64_dash_i32289 ) ( (  op_dash_sub84 ( ( dref3252 .stuff .Maybe_741_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32290 ) ( ( ( ( * (  ed3226 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1389 ) ( (  ed3226 ) ,  (  newline3254 ) ,  (  dim3230 ) ) );
                    }
                    else if ( dref3252.tag == Maybe_741_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1256 {
    const char*  (*fun) (  struct env1256  ,    const char*  ,    enum CAllocator_4  );
    struct env1256 env;
};

struct funenv1285 {
    struct Tui_665  (*fun) (  struct env1285  );
    struct env1285 env;
};

struct funenv1512 {
    struct Dims_1387  (*fun) (  struct env1512  ,    struct Editor_824 *  ,    struct Tui_665 *  );
    struct env1512 env;
};

struct funenv1451 {
    enum Unit_13  (*fun) (  struct env1451  ,    struct Editor_824 *  ,    struct Dims_1387  );
    struct env1451 env;
};

struct funenv1453 {
    enum Unit_13  (*fun) (  struct env1453  ,    struct Editor_824 *  ,    struct Dims_1387  );
    struct env1453 env;
};

struct funenv1465 {
    enum Unit_13  (*fun) (  struct env1465  ,    struct Editor_824 *  ,    struct Dims_1387  );
    struct env1465 env;
};

struct funenv1411 {
    enum Unit_13  (*fun) (  struct env1411  ,    struct Editor_824 *  );
    struct env1411 env;
};

struct funenv1455 {
    enum Unit_13  (*fun) (  struct env1455  ,    struct Editor_824 *  ,    enum PastePos_1456  ,    struct Dims_1387  );
    struct env1455 env;
};

struct funenv1486 {
    enum Unit_13  (*fun) (  struct env1486  ,    struct Editor_824 *  ,    struct Dims_1387  );
    struct env1486 env;
};

struct funenv1492 {
    enum Unit_13  (*fun) (  struct env1492  ,    struct Editor_824 *  ,    struct Dims_1387  );
    struct env1492 env;
};

struct funenv1471 {
    enum Unit_13  (*fun) (  struct env1471  ,    struct Editor_824 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1471 env;
};

struct funenv1476 {
    struct Maybe_816  (*fun) (  struct env1476  ,    struct Editor_824 *  ,    struct Slice_5  );
    struct env1476 env;
};

struct funenv1483 {
    struct Maybe_816  (*fun) (  struct env1483  ,    struct Editor_824 *  ,    struct Slice_5  );
    struct env1483 env;
};

static  int32_t   lam1592 (    struct Cursor_169  s3288 ) {
    return ( (  s3288 ) .f_x );
}

static  int32_t   lam1595 (    struct Cursor_169  s3292 ) {
    return ( (  s3292 ) .f_x );
}

static  bool   lam865 (   struct env865 env ,    char  c3297 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1363 ) ( (  c3297 ) ) ) ) ) , ( env.cur_dash_char_dash_type3295 ) ) );
}

static  bool   lam1597 (    char  c3299 ) {
    return (  eq55 ( ( (  char_dash_type1363 ) ( (  c3299 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1599 (    char  c3303 ) {
    return (  eq55 ( ( (  char_dash_type1363 ) ( (  c3303 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam870 (   struct env870 env ,    char  c3306 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1363 ) ( (  c3306 ) ) ) ) ) , ( env.cur_dash_char_dash_type3304 ) ) );
}

static  bool   lam1601 (    char  c3310 ) {
    return (  eq55 ( ( (  char_dash_type1363 ) ( (  c3310 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam874 (   struct env874 env ,    char  c3313 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1363 ) ( (  c3313 ) ) ) ) ) , ( env.cur_dash_char_dash_type3311 ) ) );
}

static  bool   lam877 (   struct env877 env ,    char  c3315 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1363 ) ( (  c3315 ) ) ) ) ) , ( env.cur_dash_char_dash_type3311 ) ) );
}

struct funenv1234 {
    enum Unit_13  (*fun) (  struct env1234  ,    struct StrBuilder_586 *  );
    struct env1234 env;
};

struct funenv1535 {
    enum Unit_13  (*fun) (  struct env1535  ,    struct Editor_824 *  ,    struct DynStr_136  ,    struct Dims_1387  ,    enum CAllocator_4  );
    struct env1535 env;
};

struct funenv1323 {
    bool  (*fun) (  struct env1323  ,    struct Screen_664 *  );
    struct env1323 env;
};

struct funenv1514 {
    enum Unit_13  (*fun) (  struct env1514  ,    struct Screen_664 *  ,    struct Editor_824 *  );
    struct env1514 env;
};

static  struct Maybe_49   lam823 (   struct env823 env ,    struct List_3  l3355 ) {
    return ( (  try_dash_get1151 ) ( ( & (  l3355 ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * ( env.ed3260 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_370   lam1629 (    char  c3357 ) {
    return ( ( Tuple2_370_Tuple2 ) ( (  c3357 ) ,  ( (  char_dash_i32886 ) ( (  c3357 ) ) ) ) );
}

static  size_t   lam1631 (    struct DynStr_136  s3363 ) {
    return ( ( (  s3363 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1816 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1817 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1818 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env573 envinst573 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env324 envinst324 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env1160 envinst1160 = {
        .growth_dash_factor1817 =  growth_dash_factor1817 ,
        .starting_dash_size1816 =  starting_dash_size1816 ,
    };
    struct env572 envinst572 = {
        .envinst573 = envinst573 ,
    };
    struct env323 envinst323 = {
        .envinst324 = envinst324 ,
    };
    struct env1163 envinst1163 = {
        .envinst1160 = envinst1160 ,
    };
    struct env1165 envinst1165 = {
        .envinst323 = envinst323 ,
        .envinst324 = envinst324 ,
    };
    struct env1168 envinst1168 = {
        .envinst572 = envinst572 ,
        .envinst573 = envinst573 ,
    };
    struct env1171 envinst1171 = {
        .shrink_dash_factor1818 =  shrink_dash_factor1818 ,
    };
    struct env1172 envinst1172 = {
        .shrink_dash_factor1818 =  shrink_dash_factor1818 ,
    };
    struct env1174 envinst1174 = {
        .envinst1172 = envinst1172 ,
    };
    struct env1176 envinst1176 = {
        .envinst572 = envinst572 ,
    };
    struct env322 envinst322 = {
        .envinst323 = envinst323 ,
    };
    struct env1179 envinst1179 = {
        .envinst323 = envinst323 ,
    };
    struct env1181 envinst1181 = {
        .envinst323 = envinst323 ,
    };
    struct env1183 envinst1183 = {
        .envinst323 = envinst323 ,
    };
    struct env1187 envinst1187 = {
        .envinst1176 = envinst1176 ,
    };
    struct env321 envinst321 = {
        .envinst322 = envinst322 ,
    };
    struct env1223 envinst1223 = {
        .envinst323 = envinst323 ,
    };
    struct env1225 envinst1225 = {
        .envinst323 = envinst323 ,
    };
    struct env1227 envinst1227 = {
        .envinst323 = envinst323 ,
    };
    struct env1229 envinst1229 = {
        .envinst323 = envinst323 ,
    };
    struct env1231 envinst1231 = {
        .envinst1179 = envinst1179 ,
    };
    struct env641 envinst641 = {
        .envinst323 = envinst323 ,
    };
    struct env1234 envinst1234 = {
        .envinst1174 = envinst1174 ,
    };
    struct env1240 envinst1240 = {
        .envinst641 = envinst641 ,
        .envinst1223 = envinst1223 ,
    };
    struct env1244 envinst1244 = {
        .envinst641 = envinst641 ,
        .envinst1225 = envinst1225 ,
    };
    struct env1248 envinst1248 = {
        .envinst641 = envinst641 ,
        .envinst1227 = envinst1227 ,
    };
    struct env1252 envinst1252 = {
        .envinst641 = envinst641 ,
        .envinst1229 = envinst1229 ,
    };
    struct env1256 envinst1256 = {
        .envinst1240 = envinst1240 ,
    };
    struct env1258 envinst1258 = {
        .envinst1248 = envinst1248 ,
    };
    struct env1260 envinst1260 = {
        .envinst1252 = envinst1252 ,
    };
    bool  temp1284 = ( false );
    bool *  should_dash_resize2443 = ( &temp1284 );
    struct env1285 envinst1285 = {
        .should_dash_resize2443 =  should_dash_resize2443 ,
    };
    struct env1308 envinst1308 = {
        .should_dash_resize2443 =  should_dash_resize2443 ,
    };
    struct env1323 envinst1323 = {
        .envinst1308 = envinst1308 ,
    };
    struct Theme_827  temp1364 = ( (struct Theme_827) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_827 *  dark_dash_theme2669 = ( &temp1364 );
    struct Theme_827  temp1365 = ( (struct Theme_827) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_827 *  light_dash_theme2670 = ( &temp1365 );
    struct env1374 envinst1374 = {
        .envinst1171 = envinst1171 ,
    };
    struct env1384 envinst1384 = {
        .envinst1240 = envinst1240 ,
    };
    struct env1397 envinst1397 = {
        .envinst1231 = envinst1231 ,
        .envinst641 = envinst641 ,
        .envinst1225 = envinst1225 ,
    };
    struct env1411 envinst1411 = {
        .envinst1397 = envinst1397 ,
    };
    struct env1413 envinst1413 = {
        .envinst1172 = envinst1172 ,
        .envinst1374 = envinst1374 ,
        .envinst1179 = envinst1179 ,
        .envinst1181 = envinst1181 ,
        .envinst572 = envinst572 ,
        .envinst1168 = envinst1168 ,
        .envinst1165 = envinst1165 ,
    };
    struct env1427 envinst1427 = {
        .envinst1163 = envinst1163 ,
    };
    struct env1429 envinst1429 = {
        .envinst1231 = envinst1231 ,
        .envinst641 = envinst641 ,
        .envinst1427 = envinst1427 ,
        .envinst1225 = envinst1225 ,
    };
    struct env1445 envinst1445 = {
        .envinst1429 = envinst1429 ,
    };
    struct env1448 envinst1448 = {
        .envinst1429 = envinst1429 ,
        .envinst1427 = envinst1427 ,
    };
    struct env1451 envinst1451 = {
        .envinst1413 = envinst1413 ,
    };
    struct env1453 envinst1453 = {
        .envinst1413 = envinst1413 ,
    };
    struct env1455 envinst1455 = {
        .envinst1445 = envinst1445 ,
        .envinst1413 = envinst1413 ,
        .envinst1448 = envinst1448 ,
    };
    struct env1465 envinst1465 = {
        .envinst1445 = envinst1445 ,
        .envinst1413 = envinst1413 ,
        .envinst1397 = envinst1397 ,
        .envinst1448 = envinst1448 ,
    };
    struct env1471 envinst1471 = {
        .envinst1183 = envinst1183 ,
        .envinst1168 = envinst1168 ,
    };
    struct env1476 envinst1476 = {
        .envinst1384 = envinst1384 ,
    };
    struct env1483 envinst1483 = {
        .envinst1384 = envinst1384 ,
    };
    struct env1486 envinst1486 = {
        .envinst1244 = envinst1244 ,
        .envinst1413 = envinst1413 ,
        .envinst1448 = envinst1448 ,
    };
    struct env1492 envinst1492 = {
        .envinst1244 = envinst1244 ,
        .envinst1413 = envinst1413 ,
        .envinst1448 = envinst1448 ,
    };
    enum CAllocator_4  al3096 = ( (  idc1119 ) ( ) );
    struct env1498 envinst1498 = {
        .envinst321 = envinst321 ,
        .envinst572 = envinst572 ,
        .envinst1187 = envinst1187 ,
    };
    struct env1503 envinst1503 = {
        .envinst641 = envinst641 ,
        .al3096 =  al3096 ,
    };
    int32_t  pad3147 = (  from_dash_integral29 ( 2 ) );
    struct env1510 envinst1510 = {
        .pad3147 =  pad3147 ,
    };
    struct env1512 envinst1512 = {
        .envinst1510 = envinst1510 ,
    };
    struct env1514 envinst1514 = {
        .envinst1510 = envinst1510 ,
        .pad3147 =  pad3147 ,
    };
    struct env1535 envinst1535 = {
        .dark_dash_theme2669 =  dark_dash_theme2669 ,
        .envinst1498 = envinst1498 ,
        .envinst1260 = envinst1260 ,
        .envinst1258 = envinst1258 ,
        .envinst1503 = envinst1503 ,
        .light_dash_theme2670 =  light_dash_theme2670 ,
    };
    struct Slice_1092  args3257 = ( (  get1361 ) ( ) );
    struct List_300  temp1543;
    struct List_300  file3258 = (  temp1543 );
    struct Maybe_285  mfilename3259 = ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
    if ( (  eq45 ( ( (  args3257 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3258 = ( (  mk1155 ) ( (  al3096 ) ) );
        struct funenv572  temp1544 = ( (struct funenv572){ .fun = add572, .env =  envinst572  } );
        ( temp1544.fun ( temp1544.env ,  ( & (  file3258 ) ) ,  ( (  mk1156 ) ( (  al3096 ) ) ) ) );
    } else {
        struct funenv1498  temp1545 = ( (struct funenv1498){ .fun = load_dash_file1498, .env =  envinst1498  } );
        file3258 = ( temp1545.fun ( temp1545.env ,  (  elem_dash_get1107 ( (  args3257 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3096 ) ) );
        struct funenv1256  temp1546 = ( (struct funenv1256){ .fun = mk_dash_const_dash_str1256, .env =  envinst1256  } );
        mfilename3259 = ( ( Maybe_285_Just ) ( ( temp1546.fun ( temp1546.env ,  (  elem_dash_get1107 ( (  args3257 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3096 ) ) ) ) );
    }
    struct Editor_824  temp1547 = ( (struct Editor_824) { .f_cursor = ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_825_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3258 ) , .f_filename = (  mfilename3259 ) , .f_mode = ( (struct Mode_826) { .tag = Mode_826_Normal_t } ) , .f_anim = ( ( Maybe_821_Just ) ( ( (  now1262 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_816) { .tag = Maybe_816_None_t } ) , .f_theme = (  dark_dash_theme2669 ) , .f_search_dash_term = ( (struct Maybe_819) { .tag = Maybe_819_None_t } ) , .f_al = (  al3096 ) , .f_msg = ( (struct Maybe_333) { .tag = Maybe_333_None_t } ) , .f_clipboard = ( (struct Maybe_333) { .tag = Maybe_333_None_t } ) , .f_actions = ( (struct Actions_828) { .f_list = ( (  mk1157 ) ( (  al3096 ) ) ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } ) , .f_insert_dash_start = ( (struct Maybe_816) { .tag = Maybe_816_None_t } ) , .f_delete_dash_acc = ( (struct Maybe_819) { .tag = Maybe_819_None_t } ) } );
    struct Editor_824 *  ed3260 = ( &temp1547 );
    struct funenv1285  temp1549 = ( (struct funenv1285){ .fun = mk1285, .env =  envinst1285  } );
    struct Tui_665  temp1548 = ( temp1549.fun ( temp1549.env ) );
    struct Tui_665 *  tui3261 = ( &temp1548 );
    enum CAllocator_4  al3262 = ( (  idc1119 ) ( ) );
    struct Screen_664  temp1550 = ( (  mk_dash_screen1309 ) ( (  tui3261 ) ,  (  al3262 ) ) );
    struct Screen_664 *  screen3263 = ( &temp1550 );
    uint32_t  counter3264 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3265 = ( true );
    while ( ( ( * (  ed3260 ) ) .f_running ) ) {
        int32_t  events3266 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_559  temp1551 =  into_dash_iter558 ( ( (  from_dash_function565 ) ( (  read_dash_key1302 ) ) ) );
        while (true) {
            struct Maybe_560  __cond1552 =  next564 (&temp1551);
            if (  __cond1552 .tag == 0 ) {
                break;
            }
            struct InputEvent_561  ev3268 =  __cond1552 .stuff .Maybe_560_Just_s .field0;
            if ( (  eq41 ( (  events3266 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1383 ) ( (  ed3260 ) ) );
            }
            events3266 = (  op_dash_add87 ( (  events3266 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1308  temp1553 = ( (struct funenv1308){ .fun = update_dash_dimensions1308, .env =  envinst1308  } );
            ( temp1553.fun ( temp1553.env ,  (  tui3261 ) ) );
            struct InputEvent_561  dref3269 = (  ev3268 );
            if ( dref3269.tag == InputEvent_561_Key_t ) {
                struct Key_562  dref3271 = ( dref3269 .stuff .InputEvent_561_Key_s .field0 );
                if ( dref3271.tag == Key_562_Char_t ) {
                    struct Mode_826 *  dref3273 = ( & ( ( * (  ed3260 ) ) .f_mode ) );
                    if ( (* dref3273 ).tag == Mode_826_Insert_t ) {
                        struct funenv1165  temp1554 = ( (struct funenv1165){ .fun = insert1165, .env =  envinst1165  } );
                        ( temp1554.fun ( temp1554.env ,  ( (  cursor_dash_row1371 ) ( (  ed3260 ) ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3271 .stuff .Key_562_Char_s .field0 ) ) );
                        struct funenv1512  temp1555 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                        ( (  move_dash_to_dash_col1388 ) ( (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1555.fun ( temp1555.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                    }
                    else if ( (* dref3273 ).tag == Mode_826_Cmd_t ) {
                        struct funenv641  temp1556 = ( (struct funenv641){ .fun = write_dash_char641, .env =  envinst641  } );
                        ( temp1556.fun ( temp1556.env ,  ( & ( (* dref3273 ) .stuff .Mode_826_Cmd_s .field0 ) ) ,  ( dref3271 .stuff .Key_562_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3273 ).tag == Mode_826_SearchBox_t ) {
                        struct funenv641  temp1557 = ( (struct funenv641){ .fun = write_dash_char641, .env =  envinst641  } );
                        ( temp1557.fun ( temp1557.env ,  ( & ( (* dref3273 ) .stuff .Mode_826_SearchBox_s .field0 ) ) ,  ( dref3271 .stuff .Key_562_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1368 ( ( (* dref3273 ) ) , ( (struct Mode_826) { .tag = Mode_826_Normal_t } ) ) ) || (  eq1368 ( ( (* dref3273 ) ) , ( (struct Mode_826) { .tag = Mode_826_Select_t } ) ) ) ) ) {
                            int32_t  code3277 = ( (  u8_dash_i32296 ) ( ( (  cast203 ) ( ( dref3271 .stuff .Key_562_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3260 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                                struct funenv1451  temp1558 = ( (struct funenv1451){ .fun = undo1451, .env =  envinst1451  } );
                                struct funenv1512  temp1559 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1558.fun ( temp1558.env ,  (  ed3260 ) ,  ( temp1559.fun ( temp1559.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "U" ) ) ) ) ) ) {
                                struct funenv1453  temp1560 = ( (struct funenv1453){ .fun = redo1453, .env =  envinst1453  } );
                                struct funenv1512  temp1561 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1560.fun ( temp1560.env ,  (  ed3260 ) ,  ( temp1561.fun ( temp1561.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1512  temp1562 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1562.fun ( temp1562.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1512  temp1563 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1563.fun ( temp1563.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1512  temp1564 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_left1390 ) ( (  ed3260 ) ,  ( temp1564.fun ( temp1564.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1512  temp1565 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_right1391 ) ( (  ed3260 ) ,  ( temp1565.fun ( temp1565.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1368 ( ( (* dref3273 ) ) , ( (struct Mode_826) { .tag = Mode_826_Select_t } ) ) ) ) {
                                    struct funenv1445  temp1566 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                                    ( temp1566.fun ( temp1566.env ,  (  ed3260 ) ) );
                                } else {
                                    (*  ed3260 ) .f_mode = ( (struct Mode_826) { .tag = Mode_826_Select_t } );
                                    ( (  set_dash_selection1382 ) ( (  ed3260 ) ,  ( ( Maybe_816_Just ) ( ( ( * (  ed3260 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1465  temp1567 = ( (struct funenv1465){ .fun = delete_dash_selected1465, .env =  envinst1465  } );
                                struct funenv1512  temp1568 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1567.fun ( temp1567.env ,  (  ed3260 ) ,  ( temp1568.fun ( temp1568.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                struct funenv1445  temp1569 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                                ( temp1569.fun ( temp1569.env ,  (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1465  temp1570 = ( (struct funenv1465){ .fun = delete_dash_selected1465, .env =  envinst1465  } );
                                struct funenv1512  temp1571 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1570.fun ( temp1570.env ,  (  ed3260 ) ,  ( temp1571.fun ( temp1571.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1411  temp1572 = ( (struct funenv1411){ .fun = copy_dash_selection_dash_to_dash_clipboard1411, .env =  envinst1411  } );
                                ( temp1572.fun ( temp1572.env ,  (  ed3260 ) ) );
                                struct funenv1445  temp1573 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                                ( temp1573.fun ( temp1573.env ,  (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1455  temp1574 = ( (struct funenv1455){ .fun = paste_dash_clipboard_dash_at_dash_cursor1455, .env =  envinst1455  } );
                                struct funenv1512  temp1575 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1574.fun ( temp1574.env ,  (  ed3260 ) ,  ( PastePos_1456_PasteAfter ) ,  ( temp1575.fun ( temp1575.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1455  temp1576 = ( (struct funenv1455){ .fun = paste_dash_clipboard_dash_at_dash_cursor1455, .env =  envinst1455  } );
                                struct funenv1512  temp1577 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1576.fun ( temp1576.env ,  (  ed3260 ) ,  ( PastePos_1456_PasteBefore ) ,  ( temp1577.fun ( temp1577.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1486  temp1578 = ( (struct funenv1486){ .fun = indent_dash_selection1486, .env =  envinst1486  } );
                                struct funenv1512  temp1579 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1578.fun ( temp1578.env ,  (  ed3260 ) ,  ( temp1579.fun ( temp1579.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1492  temp1580 = ( (struct funenv1492){ .fun = dedent_dash_selection1492, .env =  envinst1492  } );
                                struct funenv1512  temp1581 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( temp1580.fun ( temp1580.env ,  (  ed3260 ) ,  ( temp1581.fun ( temp1581.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1512  temp1582 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1392 ) ( (  ed3260 ) ,  ( temp1582.fun ( temp1582.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1512  temp1583 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1393 ) ( (  ed3260 ) ,  ( temp1583.fun ( temp1583.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1471  temp1584 = ( (struct funenv1471){ .fun = insert_dash_empty_dash_row_dash_at1471, .env =  envinst1471  } );
                                ( temp1584.fun ( temp1584.env ,  (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3262 ) ) );
                                struct List_3 *  currow3278 = ( (  get_dash_row1370 ) ( (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1512  temp1585 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to1386 ) ( (  ed3260 ) ,  ( (  size_dash_i32290 ) ( ( (  size1195 ) ( (  currow3278 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1585.fun ( temp1585.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1471  temp1586 = ( (struct funenv1471){ .fun = insert_dash_empty_dash_row_dash_at1471, .env =  envinst1471  } );
                                ( temp1586.fun ( temp1586.env ,  (  ed3260 ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ,  (  al3262 ) ) );
                                struct funenv1512  temp1587 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1393 ) ( (  ed3260 ) ,  ( temp1587.fun ( temp1587.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1447 ) ( (  ed3260 ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3260 ) .f_mode = ( ( Mode_826_Cmd ) ( ( (  mk1237 ) ( (  al3262 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3260 ) .f_mode = ( ( Mode_826_SearchBox ) ( ( (  mk1237 ) ( (  al3262 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_819  dref3279 = ( ( * (  ed3260 ) ) .f_search_dash_term );
                                if ( dref3279.tag == Maybe_819_None_t ) {
                                }
                                else if ( dref3279.tag == Maybe_819_Just_t ) {
                                    struct funenv1476  temp1588 = ( (struct funenv1476){ .fun = find_dash_next_dash_occurence1476, .env =  envinst1476  } );
                                    struct Maybe_816  dref3281 = ( temp1588.fun ( temp1588.env ,  (  ed3260 ) ,  ( (  as_dash_char_dash_slice1238 ) ( ( & ( dref3279 .stuff .Maybe_819_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3281.tag == Maybe_816_None_t ) {
                                    }
                                    else if ( dref3281.tag == Maybe_816_Just_t ) {
                                        struct funenv1512  temp1589 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                        ( (  move_dash_to1386 ) ( (  ed3260 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3281 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , ( (  size_dash_i32290 ) ( ( (  count1236 ) ( ( & ( dref3279 .stuff .Maybe_819_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3281 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ,  ( temp1589.fun ( temp1589.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                        (*  ed3260 ) .f_selected = ( ( Maybe_816_Just ) ( ( dref3281 .stuff .Maybe_816_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_819  dref3283 = ( ( * (  ed3260 ) ) .f_search_dash_term );
                                if ( dref3283.tag == Maybe_819_None_t ) {
                                }
                                else if ( dref3283.tag == Maybe_819_Just_t ) {
                                    struct funenv1483  temp1590 = ( (struct funenv1483){ .fun = find_dash_prev_dash_occurence1483, .env =  envinst1483  } );
                                    struct Maybe_816  dref3285 = ( temp1590.fun ( temp1590.env ,  (  ed3260 ) ,  ( (  as_dash_char_dash_slice1238 ) ( ( & ( dref3283 .stuff .Maybe_819_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3285.tag == Maybe_816_None_t ) {
                                    }
                                    else if ( dref3285.tag == Maybe_816_Just_t ) {
                                        struct funenv1512  temp1591 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                        ( (  move_dash_to1386 ) ( (  ed3260 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3285 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , ( (  size_dash_i32290 ) ( ( (  count1236 ) ( ( & ( dref3283 .stuff .Maybe_819_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3285 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ,  ( temp1591.fun ( temp1591.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                        (*  ed3260 ) .f_selected = ( ( Maybe_816_Just ) ( ( dref3285 .stuff .Maybe_816_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe862 ) ( ( ( * (  ed3260 ) ) .f_selected ) ,  (  lam1592 ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1395 ) ( (  ed3260 ) ) ) ) ) {
                                    struct funenv1512  temp1593 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                    struct Dims_1387  dims3289 = ( temp1593.fun ( temp1593.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                                    struct Cursor_169  sel3290 = ( (  or_dash_else1084 ) ( ( ( * (  ed3260 ) ) .f_selected ) ,  ( ( * (  ed3260 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3289 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1393 ) ( (  ed3260 ) ,  (  dims3289 ) ) );
                                    (*  ed3260 ) .f_selected = ( ( Maybe_816_Just ) ( (  sel3290 ) ) );
                                } else {
                                    struct funenv1512  temp1594 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1393 ) ( (  ed3260 ) ,  ( temp1594.fun ( temp1594.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                    (*  ed3260 ) .f_selected = ( ( Maybe_816_Just ) ( ( (struct Cursor_169) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe863 ) ( ( ( * (  ed3260 ) ) .f_selected ) ,  (  lam1595 ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1512  temp1596 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                struct Dims_1387  dims3293 = ( temp1596.fun ( temp1596.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                                struct Cursor_169  first_dash_pos3294 = ( ( * (  ed3260 ) ) .f_cursor );
                                ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3293 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) ) , ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at1376 ) ( (  ed3260 ) ,  (  first_dash_pos3294 ) ) ) ,  (  char_dash_type1363 ) ) ) ) ) ) {
                                    first_dash_pos3294 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1395 ) ( (  ed3260 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3293 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3294 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3295 = ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) );
                                struct env865 envinst865 = {
                                    .cur_dash_char_dash_type3295 =  cur_dash_char_dash_type3295 ,
                                };
                                while ( ( (  maybe864 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  ( (struct funenv865){ .fun = lam865, .env = envinst865 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3293 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe867 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  lam1597 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3293 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1366 ( (  first_dash_pos3294 ) , ( ( * (  ed3260 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3293 ) ) );
                                    ( (  set_dash_selection1382 ) ( (  ed3260 ) ,  ( ( Maybe_816_Just ) ( (  first_dash_pos3294 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1512  temp1598 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                struct Dims_1387  dims3300 = ( temp1598.fun ( temp1598.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                                struct Cursor_169  first_dash_pos3301 = ( ( * (  ed3260 ) ) .f_cursor );
                                ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3300 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) ) , ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at1376 ) ( (  ed3260 ) ,  (  first_dash_pos3301 ) ) ) ,  (  char_dash_type1363 ) ) ) ) ) ) {
                                    first_dash_pos3301 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1395 ) ( (  ed3260 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3300 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3301 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                while ( ( (  maybe868 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  lam1599 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3300 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3304 = ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) );
                                struct env870 envinst870 = {
                                    .cur_dash_char_dash_type3304 =  cur_dash_char_dash_type3304 ,
                                };
                                while ( ( (  maybe869 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  ( (struct funenv870){ .fun = lam870, .env = envinst870 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3300 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1366 ( (  first_dash_pos3301 ) , ( ( * (  ed3260 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3300 ) ) );
                                    ( (  set_dash_selection1382 ) ( (  ed3260 ) ,  ( ( Maybe_816_Just ) ( (  first_dash_pos3301 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3271 .stuff .Key_562_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1512  temp1600 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                struct Dims_1387  dims3307 = ( temp1600.fun ( temp1600.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                                struct Cursor_169  first_dash_pos3308 = ( ( * (  ed3260 ) ) .f_cursor );
                                ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3307 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) ) , ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at1376 ) ( (  ed3260 ) ,  (  first_dash_pos3308 ) ) ) ,  (  char_dash_type1363 ) ) ) ) ) ) {
                                    first_dash_pos3308 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1395 ) ( (  ed3260 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3307 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3308 = ( ( * (  ed3260 ) ) .f_cursor );
                                }
                                while ( ( (  maybe872 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  lam1601 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3307 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3311 = ( (  fmap_dash_maybe831 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  (  char_dash_type1363 ) ) );
                                struct env874 envinst874 = {
                                    .cur_dash_char_dash_type3311 =  cur_dash_char_dash_type3311 ,
                                };
                                while ( ( (  maybe873 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  ( (struct funenv874){ .fun = lam874, .env = envinst874 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3307 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1366 ( (  first_dash_pos3308 ) , ( ( * (  ed3260 ) ) .f_cursor ) ) ) ) {
                                    struct env877 envinst877 = {
                                        .cur_dash_char_dash_type3311 =  cur_dash_char_dash_type3311 ,
                                    };
                                    if ( ( (  maybe876 ) ( ( (  char_dash_at_dash_cursor1377 ) ( (  ed3260 ) ) ) ,  ( (struct funenv877){ .fun = lam877, .env = envinst877 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1391 ) ( (  ed3260 ) ,  (  dims3307 ) ) );
                                    }
                                    ( (  set_dash_selection1382 ) ( (  ed3260 ) ,  ( ( Maybe_816_Just ) ( (  first_dash_pos3308 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1071 ) ( ( ( StrConcat_904_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3273 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3271.tag == Key_562_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3271 .stuff .Key_562_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3260 ) .f_screen_dash_top = ( (  max887 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3260 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1512  temp1602 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                        ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1602.fun ( temp1602.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3271 .stuff .Key_562_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3260 ) .f_screen_dash_top = ( (  max887 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3260 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1512  temp1603 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                        ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1603.fun ( temp1603.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                    }
                }
                else if ( dref3271.tag == Key_562_Escape_t ) {
                    struct Mode_826  dref3317 = ( ( * (  ed3260 ) ) .f_mode );
                    if ( dref3317.tag == Mode_826_Normal_t ) {
                    }
                    else if ( dref3317.tag == Mode_826_Insert_t ) {
                        struct funenv1445  temp1604 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1604.fun ( temp1604.env ,  (  ed3260 ) ) );
                    }
                    else if ( dref3317.tag == Mode_826_Cmd_t ) {
                        ( (  free1239 ) ( ( & ( dref3317 .stuff .Mode_826_Cmd_s .field0 ) ) ) );
                        struct funenv1445  temp1605 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1605.fun ( temp1605.env ,  (  ed3260 ) ) );
                    }
                    else if ( dref3317.tag == Mode_826_SearchBox_t ) {
                        ( (  free1239 ) ( ( & ( dref3317 .stuff .Mode_826_SearchBox_s .field0 ) ) ) );
                        struct funenv1445  temp1606 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1606.fun ( temp1606.env ,  (  ed3260 ) ) );
                    }
                    else if ( dref3317.tag == Mode_826_Select_t ) {
                        struct funenv1445  temp1607 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1607.fun ( temp1607.env ,  (  ed3260 ) ) );
                    }
                }
                else if ( dref3271.tag == Key_562_Backspace_t ) {
                    struct Mode_826 *  dref3320 = ( & ( ( * (  ed3260 ) ) .f_mode ) );
                    if ( (* dref3320 ).tag == Mode_826_Normal_t ) {
                    }
                    else if ( (* dref3320 ).tag == Mode_826_Select_t ) {
                    }
                    else if ( (* dref3320 ).tag == Mode_826_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1512  temp1608 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                            struct Dims_1387  dims3321 = ( temp1608.fun ( temp1608.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                            ( (  move_dash_left1390 ) ( (  ed3260 ) ,  (  dims3321 ) ) );
                            struct funenv1397  temp1609 = ( (struct funenv1397){ .fun = copy_dash_selection1397, .env =  envinst1397  } );
                            struct Maybe_333  dref3322 = ( temp1609.fun ( temp1609.env ,  (  ed3260 ) ) );
                            if ( dref3322.tag == Maybe_333_None_t ) {
                            }
                            else if ( dref3322.tag == Maybe_333_Just_t ) {
                                int32_t  del_dash_acc_dash_count3326 = ( {  struct Maybe_819  dref3324 = ( ( * (  ed3260 ) ) .f_delete_dash_acc ) ; dref3324.tag == Maybe_819_Just_t ? ( (  size_dash_i32290 ) ( ( (  count1236 ) ( ( & ( dref3324 .stuff .Maybe_819_Just_s .field0 ) ) ) ) ) ) : (  from_dash_integral29 ( 0 ) ) ; } );
                                struct Maybe_816  dref3327 = ( ( * (  ed3260 ) ) .f_insert_dash_start );
                                if ( dref3327.tag == Maybe_816_Just_t ) {
                                    if ( ( (  cmp80 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) , (  op_dash_sub88 ( ( ( dref3327 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , (  del_dash_acc_dash_count3326 ) ) ) ) == 0 ) && (  eq41 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , ( ( dref3327 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ) ) ) ) {
                                        if ( ( ! ( (  is_dash_just818 ) ( ( ( * (  ed3260 ) ) .f_delete_dash_acc ) ) ) ) ) {
                                            (*  ed3260 ) .f_delete_dash_acc = ( ( Maybe_819_Just ) ( ( (  mk1237 ) ( ( ( * (  ed3260 ) ) .f_al ) ) ) ) );
                                        }
                                        struct Maybe_819 *  dref3329 = ( & ( ( * (  ed3260 ) ) .f_delete_dash_acc ) );
                                        if ( (* dref3329 ).tag == Maybe_819_Just_t ) {
                                            struct funenv641  temp1610 = ( (struct funenv641){ .fun = write_dash_char641, .env =  envinst641  } );
                                            ( temp1610.fun ( temp1610.env ,  ( & ( (* dref3329 ) .stuff .Maybe_819_Just_s .field0 ) ) ,  (  elem_dash_get1109 ( ( ( dref3322 .stuff .Maybe_333_Just_s .field0 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) ) );
                                        }
                                        else if ( true ) {
                                        }
                                    }
                                }
                                else if ( true ) {
                                }
                                struct funenv1413  temp1611 = ( (struct funenv1413){ .fun = apply_dash_primitive1413, .env =  envinst1413  } );
                                ( temp1611.fun ( temp1611.env ,  (  ed3260 ) ,  ( ( Primitive_168_PrimDelete ) ( ( ( * (  ed3260 ) ) .f_cursor ) ,  ( dref3322 .stuff .Maybe_333_Just_s .field0 ) ) ) ,  (  dims3321 ) ) );
                                ( (  free1125 ) ( ( ( * (  ed3260 ) ) .f_al ) ,  ( ( dref3322 .stuff .Maybe_333_Just_s .field0 ) .f_contents ) ) );
                            }
                        }
                    }
                    else if ( (* dref3320 ).tag == Mode_826_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1236 ) ( ( & ( (* dref3320 ) .stuff .Mode_826_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1234  temp1612 = ( (struct funenv1234){ .fun = pop1234, .env =  envinst1234  } );
                            ( temp1612.fun ( temp1612.env ,  ( & ( (* dref3320 ) .stuff .Mode_826_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3320 ).tag == Mode_826_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1236 ) ( ( & ( (* dref3320 ) .stuff .Mode_826_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1234  temp1613 = ( (struct funenv1234){ .fun = pop1234, .env =  envinst1234  } );
                            ( temp1613.fun ( temp1613.env ,  ( & ( (* dref3320 ) .stuff .Mode_826_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3271.tag == Key_562_Enter_t ) {
                    struct Mode_826  dref3333 = ( ( * (  ed3260 ) ) .f_mode );
                    if ( dref3333.tag == Mode_826_Normal_t ) {
                    }
                    else if ( dref3333.tag == Mode_826_Select_t ) {
                    }
                    else if ( dref3333.tag == Mode_826_Insert_t ) {
                        int32_t  cx3334 = ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1614 = ( (  mk1156 ) ( (  al3262 ) ) );
                        struct List_3 *  nurow3335 = ( &temp1614 );
                        struct TakeWhile_520  rowws3336 = ( (  indent_dash_on_dash_row1372 ) ( (  ed3260 ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3337 = ( (  size_dash_i32290 ) ( ( (  count777 ) ( (  rowws3336 ) ) ) ) );
                        struct funenv1183  temp1615 = ( (struct funenv1183){ .fun = add_dash_all1183, .env =  envinst1183  } );
                        ( temp1615.fun ( temp1615.env ,  (  nurow3335 ) ,  (  rowws3336 ) ) );
                        struct List_3 *  cur_dash_row3338 = ( (  cursor_dash_row1371 ) ( (  ed3260 ) ) );
                        struct funenv1179  temp1616 = ( (struct funenv1179){ .fun = add_dash_all1179, .env =  envinst1179  } );
                        ( temp1616.fun ( temp1616.env ,  (  nurow3335 ) ,  ( (  subslice312 ) ( ( (  to_dash_slice1192 ) ( ( * (  cur_dash_row3338 ) ) ) ) ,  ( (  i32_dash_size288 ) ( (  cx3334 ) ) ) ,  ( ( * (  cur_dash_row3338 ) ) .f_count ) ) ) ) );
                        ( (  trim1185 ) ( (  cur_dash_row3338 ) ,  ( (  i32_dash_size288 ) ( (  cx3334 ) ) ) ) );
                        struct funenv1168  temp1617 = ( (struct funenv1168){ .fun = insert1168, .env =  envinst1168  } );
                        ( temp1617.fun ( temp1617.env ,  ( & ( ( * (  ed3260 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size288 ) ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3335 ) ) ) );
                        struct funenv1512  temp1618 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                        ( (  move_dash_to1386 ) ( (  ed3260 ) ,  (  offchars3337 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1618.fun ( temp1618.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                    }
                    else if ( dref3333.tag == Mode_826_Cmd_t ) {
                        struct DynStr_136  s3340 = ( (  as_dash_str910 ) ( ( & ( dref3333 .stuff .Mode_826_Cmd_s .field0 ) ) ) );
                        struct funenv1535  temp1619 = ( (struct funenv1535){ .fun = run_dash_cmd1535, .env =  envinst1535  } );
                        struct funenv1512  temp1620 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                        ( temp1619.fun ( temp1619.env ,  (  ed3260 ) ,  (  s3340 ) ,  ( temp1620.fun ( temp1620.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ,  (  al3262 ) ) );
                        ( (  free1239 ) ( ( & ( dref3333 .stuff .Mode_826_Cmd_s .field0 ) ) ) );
                        struct funenv1445  temp1621 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1621.fun ( temp1621.env ,  (  ed3260 ) ) );
                    }
                    else if ( dref3333.tag == Mode_826_SearchBox_t ) {
                        struct Maybe_819  dref3342 = ( ( * (  ed3260 ) ) .f_search_dash_term );
                        if ( dref3342.tag == Maybe_819_Just_t ) {
                            ( (  free1239 ) ( ( & ( dref3342 .stuff .Maybe_819_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3342.tag == Maybe_819_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1236 ) ( ( & ( dref3333 .stuff .Mode_826_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3260 ) .f_search_dash_term = ( ( Maybe_819_Just ) ( ( dref3333 .stuff .Mode_826_SearchBox_s .field0 ) ) );
                            struct funenv1476  temp1622 = ( (struct funenv1476){ .fun = find_dash_next_dash_occurence1476, .env =  envinst1476  } );
                            struct Maybe_816  dref3344 = ( temp1622.fun ( temp1622.env ,  (  ed3260 ) ,  ( (  as_dash_char_dash_slice1238 ) ( ( & ( dref3333 .stuff .Mode_826_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3344.tag == Maybe_816_None_t ) {
                            }
                            else if ( dref3344.tag == Maybe_816_Just_t ) {
                                struct funenv1512  temp1623 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                                ( (  move_dash_to1386 ) ( (  ed3260 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3344 .stuff .Maybe_816_Just_s .field0 ) .f_x ) , ( (  size_dash_i32290 ) ( ( (  count1236 ) ( ( & ( dref3333 .stuff .Mode_826_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3344 .stuff .Maybe_816_Just_s .field0 ) .f_y ) ,  ( temp1623.fun ( temp1623.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                                (*  ed3260 ) .f_selected = ( ( Maybe_816_Just ) ( ( dref3344 .stuff .Maybe_816_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3260 ) .f_search_dash_term = ( (struct Maybe_819) { .tag = Maybe_819_None_t } );
                        }
                        struct funenv1445  temp1624 = ( (struct funenv1445){ .fun = set_dash_mode_dash_normal1445, .env =  envinst1445  } );
                        ( temp1624.fun ( temp1624.env ,  (  ed3260 ) ) );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3269.tag == InputEvent_561_Mouse_t ) {
                enum MouseButton_147  dref3347 = ( ( dref3269 .stuff .InputEvent_561_Mouse_s .field0 ) .f_button );
                switch (  dref3347 ) {
                    case MouseButton_147_MouseLeft : {
                        if ( ( ( dref3269 .stuff .InputEvent_561_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3348 = ( (  size_dash_i32290 ) ( ( ( ( * (  ed3260 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3349 = ( (  clamp892 ) ( (  op_dash_add87 ( ( ( * (  ed3260 ) ) .f_screen_dash_top ) , ( ( dref3269 .stuff .InputEvent_561_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3348 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1510  temp1625 = ( (struct funenv1510){ .fun = left_dash_offset1510, .env =  envinst1510  } );
                            struct Visual_825  vx3350 = ( ( Visual_825_Visual ) ( (  op_dash_sub88 ( ( ( dref3269 .stuff .InputEvent_561_Mouse_s .field0 ) .f_x ) , ( ( temp1625.fun ( temp1625.env ,  (  ed3260 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3351 = ( (  visual_dash_x_dash_to_dash_x1379 ) ( (  ed3260 ) ,  (  vx3350 ) ,  (  cy3349 ) ) );
                            (*  ed3260 ) .f_cursor .f_x = (  cx3351 );
                            (*  ed3260 ) .f_goal_dash_x = (  vx3350 );
                            struct funenv1512  temp1626 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                            ( (  move_dash_to_dash_row1389 ) ( (  ed3260 ) ,  (  cy3349 ) ,  ( temp1626.fun ( temp1626.env ,  (  ed3260 ) ,  (  tui3261 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable1066 ) ( ) );
            }
        }
        struct funenv1323  temp1627 = ( (struct funenv1323){ .fun = resize_dash_screen_dash_if_dash_needed1323, .env =  envinst1323  } );
        bool  resized3352 = ( temp1627.fun ( temp1627.env ,  (  screen3263 ) ) );
        if ( ( ( ( (  resized3352 ) || (  cmp80 ( (  events3266 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3265 ) ) || ( (  is_dash_just820 ) ( ( ( * (  ed3260 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3265 = ( false );
            ( (  clear_dash_screen1313 ) ( (  screen3263 ) ) );
            ( (  set_dash_screen_dash_fg1325 ) ( (  screen3263 ) ,  ( ( * ( ( * (  ed3260 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1326 ) ( (  screen3263 ) ,  ( ( * ( ( * (  ed3260 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1329 ) ( (  screen3263 ) ) );
            struct funenv1514  temp1628 = ( (struct funenv1514){ .fun = render_dash_editor1514, .env =  envinst1514  } );
            ( temp1628.fun ( temp1628.env ,  (  screen3263 ) ,  (  ed3260 ) ) );
            bool  debug3353 = ( true );
            if ( (  debug3353 ) ) {
                ( (  draw_dash_str_dash_right1347 ) ( (  screen3263 ) ,  ( ( StrConcat_904_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3260 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1348 ) ( (  screen3263 ) ,  ( ( StrConcat_919_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3261 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env823 envinst823 = {
                    .ed3260 =  ed3260 ,
                };
                struct Maybe_369  charcode3358 = ( (  fmap_dash_maybe832 ) ( ( (  and_dash_maybe822 ) ( ( (  try_dash_get1152 ) ( ( & ( ( * (  ed3260 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size288 ) ( ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv823){ .fun = lam823, .env = envinst823 } ) ) ) ,  (  lam1629 ) ) );
                ( (  draw_dash_str_dash_right1349 ) ( (  screen3263 ) ,  ( ( StrConcat_921_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3358 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1350 ) ( (  screen3263 ) ,  ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( ( StrConcat_949_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3359 = ( ( * ( (  get_dash_row1370 ) ( (  ed3260 ) ,  ( ( ( * (  ed3260 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1351 ) ( (  screen3263 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3359 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3360 = ( (  from_dash_visual1367 ) ( ( ( * (  ed3260 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1352 ) ( (  screen3263 ) ,  ( ( StrConcat_949_StrConcat ) ( ( "goal x: " ) ,  (  gx3360 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1512  temp1630 = ( (struct funenv1512){ .fun = screen_dash_dims1512, .env =  envinst1512  } );
                struct Dims_1387  dim3361 = ( temp1630.fun ( temp1630.env ,  (  ed3260 ) ,  (  tui3261 ) ) );
                ( (  draw_dash_str_dash_right1353 ) ( (  screen3263 ) ,  ( ( StrConcat_956_StrConcat ) ( ( ( StrConcat_957_StrConcat ) ( ( ( StrConcat_949_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3260 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3361 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1354 ) ( (  screen3263 ) ,  ( ( StrConcat_961_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3260 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1355 ) ( (  screen3263 ) ,  ( ( StrConcat_975_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3260 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_834  cpsize3364 = ( (  fmap_dash_maybe833 ) ( ( ( * (  ed3260 ) ) .f_clipboard ) ,  (  lam1631 ) ) );
                ( (  draw_dash_str_dash_right1356 ) ( (  screen3263 ) ,  ( ( StrConcat_979_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3364 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
            }
            ( (  update_dash_animation1530 ) ( ( & ( ( * (  ed3260 ) ) .f_anim ) ) ,  (  screen3263 ) ) );
            ( (  render_dash_screen1317 ) ( (  screen3263 ) ) );
        }
        ( (  sync1291 ) ( (  tui3261 ) ) );
    }
    ( (  free_dash_screen1312 ) ( (  screen3263 ) ) );
    ( (  deinit1295 ) ( (  tui3261 ) ) );
}
