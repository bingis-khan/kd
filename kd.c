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

static  enum Unit_13   print_dash_str22 (    const char*  self1107 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1107 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str27 (    size_t  self1164 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1164 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str26 (    struct StrConcat_17  self1203 ) {
    struct StrConcat_17  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str25 (    struct StrConcat_16  self1203 ) {
    struct StrConcat_16  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str24 (    struct StrConcat_15  self1203 ) {
    struct StrConcat_15  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str28 (    char  self1113 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1113 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str23 (    struct StrConcat_14  self1203 ) {
    struct StrConcat_14  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str21 (    struct StrConcat_20  self1203 ) {
    struct StrConcat_20  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str23 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str18 (    struct StrConcat_19  self1203 ) {
    struct StrConcat_19  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str21 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  int32_t   from_dash_integral29 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  enum Unit_13   panic12 (    struct StrConcat_14  errmsg1380 ) {
    ( (  print_dash_str18 ) ( ( ( StrConcat_19_StrConcat ) ( ( ( StrConcat_20_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  int64_t   op_dash_mul32 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  char *   offset_dash_ptr31 (    char *  x470 ,    int64_t  count472 ) {
    char  temp33;
    return ( (char * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp33 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i6434 (    size_t  x516 ) {
    return ( (int64_t ) (  x516 ) );
}

static  char *   get_dash_ptr30 (    struct Slice_5  slice1426 ,    size_t  i1428 ) {
    if ( ( (  cmp9 ( (  i1428 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1428 ) , ( (  slice1426 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1428 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1426 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1429 = ( (  offset_dash_ptr31 ) ( ( (  slice1426 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1428 ) ) ) ) );
    return (  elem_dash_ptr1429 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1847 ,    size_t  i1849 ) {
    if ( ( (  cmp9 ( (  i1849 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1849 ) , ( ( * (  list1847 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1849 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1847 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1847 ) ) .f_elements ) ,  (  i1849 ) ) );
}

static  char   get7 (    struct List_3 *  list1857 ,    size_t  i1859 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1857 ) ,  (  i1859 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1918 ,    size_t  k1920 ) {
    return ( (  get7 ) ( ( & (  self1918 ) ) ,  (  k1920 ) ) );
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

static  bool   eq55 (    enum CharType_53  l2821 ,    enum CharType_53  r2823 ) {
    struct Tuple2_56  dref2824 = ( ( Tuple2_56_Tuple2 ) ( (  l2821 ) ,  (  r2823 ) ) );
    if (  dref2824 .field0 == CharType_53_CharSpace &&  dref2824 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2824 .field0 == CharType_53_CharWord &&  dref2824 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2824 .field0 == CharType_53_CharPunctuation &&  dref2824 .field1 == CharType_53_CharPunctuation ) {
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

static  void *   cast_dash_ptr71 (    int32_t *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  size_t   size_dash_of72 (    int32_t  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  int32_t   zeroed69 (  ) {
    int32_t  temp70;
    int32_t  x493 = (  temp70 );
    ( ( memset ) ( ( (  cast_dash_ptr71 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of72 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  enum Color8_60 *   cast73 (    int32_t *  x483 ) {
    return ( (enum Color8_60 * ) (  x483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed67 (    enum Color8_60  x496 ) {
    int32_t  temp68 = ( (  zeroed69 ) ( ) );
    int32_t *  y497 = ( &temp68 );
    enum Color8_60 *  yp498 = ( (  cast73 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  bool   eq66 (    enum Color8_60  l2043 ,    enum Color8_60  r2045 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l2043 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r2045 ) ) ) ) );
}

static  enum Color16_61 *   cast77 (    int32_t *  x483 ) {
    return ( (enum Color16_61 * ) (  x483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed75 (    enum Color16_61  x496 ) {
    int32_t  temp76 = ( (  zeroed69 ) ( ) );
    int32_t *  y497 = ( &temp76 );
    enum Color16_61 *  yp498 = ( (  cast77 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  bool   eq74 (    enum Color16_61  l2049 ,    enum Color16_61  r2051 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l2049 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r2051 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l2079 ,    struct RGB_62  r2081 ) {
    return ( ( (  eq43 ( ( (  l2079 ) .f_r ) , ( (  r2081 ) .f_r ) ) ) && (  eq43 ( ( (  l2079 ) .f_g ) , ( (  r2081 ) .f_g ) ) ) ) && (  eq43 ( ( (  l2079 ) .f_b ) , ( (  r2081 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l2102 ,    struct Color_59  r2104 ) {
    return ( {  struct Tuple2_65  dref2105 = ( ( Tuple2_65_Tuple2 ) ( (  l2102 ) ,  (  r2104 ) ) ) ; dref2105 .field0.tag == Color_59_ColorDefault_t && dref2105 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref2105 .field0.tag == Color_59_Color8_t && dref2105 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref2105 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref2105 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref2105 .field0.tag == Color_59_Color16_t && dref2105 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref2105 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref2105 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref2105 .field0.tag == Color_59_Color256_t && dref2105 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref2105 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref2105 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref2105 .field0.tag == Color_59_ColorRGB_t && dref2105 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref2105 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref2105 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2677 ,    struct Cell_58  r2679 ) {
    if ( ( !  eq47 ( ( (  l2677 ) .f_c ) , ( (  r2679 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2677 ) .f_fg ) , ( (  r2679 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2677 ) .f_bg ) , ( (  r2679 ) .f_bg ) ) ) ) {
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

struct Cursor_154 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Primitive_153 {
    enum {
        Primitive_153_PrimInsert_t,
        Primitive_153_PrimDelete_t,
    } tag;
    union {
        struct {
            struct Cursor_154  field0;
            struct DynStr_136  field1;
        } Primitive_153_PrimInsert_s;
        struct {
            struct Cursor_154  field0;
            struct DynStr_136  field1;
        } Primitive_153_PrimDelete_s;
    } stuff;
};

static struct Primitive_153 Primitive_153_PrimInsert (  struct Cursor_154  field0 ,  struct DynStr_136  field1 ) {
    return ( struct Primitive_153 ) { .tag = Primitive_153_PrimInsert_t, .stuff = { .Primitive_153_PrimInsert_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct Primitive_153 Primitive_153_PrimDelete (  struct Cursor_154  field0 ,  struct DynStr_136  field1 ) {
    return ( struct Primitive_153 ) { .tag = Primitive_153_PrimDelete_t, .stuff = { .Primitive_153_PrimDelete_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Maybe_157 {
    enum {
        Maybe_157_None_t,
        Maybe_157_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_154  field0;
        } Maybe_157_Just_s;
    } stuff;
};

static struct Maybe_157 Maybe_157_Just (  struct Cursor_154  field0 ) {
    return ( struct Maybe_157 ) { .tag = Maybe_157_Just_t, .stuff = { .Maybe_157_Just_s = { .field0 = field0 } } };
};

struct Pos_156 {
    struct Cursor_154  f_cur;
    struct Maybe_157  f_sel;
};

struct Maybe_155 {
    enum {
        Maybe_155_None_t,
        Maybe_155_Just_t,
    } tag;
    union {
        struct {
            struct Pos_156  field0;
        } Maybe_155_Just_s;
    } stuff;
};

static struct Maybe_155 Maybe_155_Just (  struct Pos_156  field0 ) {
    return ( struct Maybe_155 ) { .tag = Maybe_155_Just_t, .stuff = { .Maybe_155_Just_s = { .field0 = field0 } } };
};

struct Action_152 {
    struct Primitive_153  f_prim;
    bool  f_selected;
    struct Maybe_155  f_before_dash_pos;
};

static  struct Action_152   undefined151 (  ) {
    struct Action_152  temp158;
    return (  temp158 );
}

struct Slice_161 {
    struct Action_152 *  f_ptr;
    size_t  f_count;
};

struct List_160 {
    enum CAllocator_4  f_al;
    struct Slice_161  f_elements;
    size_t  f_count;
};

static  struct List_160   undefined159 (  ) {
    struct List_160  temp162;
    return (  temp162 );
}

static  bool   undefined163 (  ) {
    bool  temp164;
    return (  temp164 );
}

static  enum Unit_13   undefined165 (  ) {
    enum Unit_13  temp166;
    return (  temp166 );
}

static  struct Cell_58 *   undefined167 (  ) {
    struct Cell_58 *  temp168;
    return (  temp168 );
}

static  const char* *   offset_dash_ptr169 (    const char* *  x470 ,    int64_t  count472 ) {
    const char*  temp170;
    return ( (const char* * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp170 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr171 (    struct List_3 *  x470 ,    int64_t  count472 ) {
    struct List_3  temp172;
    return ( (struct List_3 * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp172 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr173 (    uint32_t *  x470 ,    int64_t  count472 ) {
    uint32_t  temp174;
    return ( (uint32_t * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp174 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr175 (    uint8_t *  x470 ,    int64_t  count472 ) {
    uint8_t  temp176;
    return ( (uint8_t * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp176 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr177 (    struct Cell_58 *  x470 ,    int64_t  count472 ) {
    struct Cell_58  temp178;
    return ( (struct Cell_58 * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp178 ) ) ) ) ) ) ) ) );
}

static  struct Action_152 *   offset_dash_ptr179 (    struct Action_152 *  x470 ,    int64_t  count472 ) {
    struct Action_152  temp180;
    return ( (struct Action_152 * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp180 ) ) ) ) ) ) ) ) );
}

struct Either_182 {
    enum {
        Either_182_Left_t,
        Either_182_Right_t,
    } tag;
    union {
        struct {
            struct Slice_161  field0;
        } Either_182_Left_s;
        struct {
            struct Action_152  field0;
        } Either_182_Right_s;
    } stuff;
};

static struct Either_182 Either_182_Left (  struct Slice_161  field0 ) {
    return ( struct Either_182 ) { .tag = Either_182_Left_t, .stuff = { .Either_182_Left_s = { .field0 = field0 } } };
};

static struct Either_182 Either_182_Right (  struct Action_152  field0 ) {
    return ( struct Either_182 ) { .tag = Either_182_Right_t, .stuff = { .Either_182_Right_s = { .field0 = field0 } } };
};

static  struct Either_182 *   offset_dash_ptr181 (    struct Either_182 *  x470 ,    int64_t  count472 ) {
    struct Either_182  temp183;
    return ( (struct Either_182 * ) ( ( (void*) (  x470 ) ) + (  op_dash_mul32 ( (  count472 ) , ( (int64_t ) ( sizeof( ( (  temp183 ) ) ) ) ) ) ) ) );
}

struct TypeSize_185 {
    size_t  f_size;
};

static  struct TypeSize_185   get_dash_typesize184 (  ) {
    struct List_3  temp186;
    return ( (struct TypeSize_185) { .f_size = ( sizeof( ( (  temp186 ) ) ) ) } );
}

struct TypeSize_188 {
    size_t  f_size;
};

static  struct TypeSize_188   get_dash_typesize187 (  ) {
    char  temp189;
    return ( (struct TypeSize_188) { .f_size = ( sizeof( ( (  temp189 ) ) ) ) } );
}

struct TypeSize_191 {
    size_t  f_size;
};

static  struct TypeSize_191   get_dash_typesize190 (  ) {
    struct Cell_58  temp192;
    return ( (struct TypeSize_191) { .f_size = ( sizeof( ( (  temp192 ) ) ) ) } );
}

struct TypeSize_194 {
    size_t  f_size;
};

static  struct TypeSize_194   get_dash_typesize193 (  ) {
    struct Either_182  temp195;
    return ( (struct TypeSize_194) { .f_size = ( sizeof( ( (  temp195 ) ) ) ) } );
}

struct TypeSize_197 {
    size_t  f_size;
};

static  struct TypeSize_197   get_dash_typesize196 (  ) {
    struct Action_152  temp198;
    return ( (struct TypeSize_197) { .f_size = ( sizeof( ( (  temp198 ) ) ) ) } );
}

static  size_t   size_dash_of199 (    struct List_3 *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of200 (    char *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of201 (    char  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of202 (    FILE *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of203 (    struct Either_182 *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

struct Winsize_205 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of204 (    struct Winsize_205  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of206 (    uint32_t  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of207 (    enum Unit_13 *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of208 (    size_t  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

struct Array_210 {
    char _arr [32];
};

static  size_t   size_dash_of209 (    struct Array_210  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of211 (    int64_t  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of212 (    struct Action_152 *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  size_t   size_dash_of213 (    struct timespec *  x477 ) {
    return ( sizeof( (  x477 ) ) );
}

static  const char*   cast214 (    char *  x483 ) {
    return ( (const char* ) (  x483 ) );
}

static  char *   cast215 (    const char*  x483 ) {
    return ( (char * ) (  x483 ) );
}

static  uint16_t *   cast216 (    uint32_t *  x483 ) {
    return ( (uint16_t * ) (  x483 ) );
}

static  enum Unit_13 *   cast217 (    const char*  x483 ) {
    return ( (enum Unit_13 * ) (  x483 ) );
}

static  uint32_t *   cast218 (    size_t *  x483 ) {
    return ( (uint32_t * ) (  x483 ) );
}

static  char *   cast219 (    int32_t *  x483 ) {
    return ( (char * ) (  x483 ) );
}

static  uint8_t   cast220 (    char  x483 ) {
    return ( (uint8_t ) (  x483 ) );
}

static  uint8_t *   cast221 (    int64_t *  x483 ) {
    return ( (uint8_t * ) (  x483 ) );
}

static  char   cast222 (    int32_t  x483 ) {
    return ( (char ) (  x483 ) );
}

static  int32_t   cast223 (    uint32_t  x483 ) {
    return ( (int32_t ) (  x483 ) );
}

static  char *   cast224 (    struct Array_210 *  x483 ) {
    return ( (char * ) (  x483 ) );
}

static  uint8_t *   cast225 (    int32_t *  x483 ) {
    return ( (uint8_t * ) (  x483 ) );
}

static  char   cast226 (    uint32_t  x483 ) {
    return ( (char ) (  x483 ) );
}

static  char   cast227 (    size_t  x483 ) {
    return ( (char ) (  x483 ) );
}

static  uint32_t *   cast228 (    int64_t *  x483 ) {
    return ( (uint32_t * ) (  x483 ) );
}

static  void *   cast_dash_ptr229 (    struct List_3 * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr230 (    struct List_3 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  struct List_3 *   cast_dash_ptr231 (    void *  p486 ) {
    return ( (struct List_3 * ) (  p486 ) );
}

static  void *   cast_dash_ptr232 (    char * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr233 (    char *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  char *   cast_dash_ptr234 (    void *  p486 ) {
    return ( (char * ) (  p486 ) );
}

static  void *   cast_dash_ptr235 (    FILE * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr236 (    struct Either_182 * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr237 (    struct Winsize_205 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr238 (    uint32_t *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr239 (    enum Unit_13 * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  uint32_t *   cast_dash_ptr240 (    struct Array_104 *  p486 ) {
    return ( (uint32_t * ) (  p486 ) );
}

static  uint32_t *   cast_dash_ptr241 (    struct Array_107 *  p486 ) {
    return ( (uint32_t * ) (  p486 ) );
}

static  uint32_t *   cast_dash_ptr242 (    struct Array_110 *  p486 ) {
    return ( (uint32_t * ) (  p486 ) );
}

static  struct termios *   cast_dash_ptr243 (    struct Termios_141 *  p486 ) {
    return ( (struct termios * ) (  p486 ) );
}

static  uint8_t *   cast_dash_ptr244 (    struct Array_142 *  p486 ) {
    return ( (uint8_t * ) (  p486 ) );
}

static  struct Cell_58 *   cast_dash_ptr245 (    void *  p486 ) {
    return ( (struct Cell_58 * ) (  p486 ) );
}

static  void *   cast_dash_ptr246 (    size_t *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr247 (    struct Array_210 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr248 (    int64_t *  p486 ) {
    return ( (void * ) (  p486 ) );
}

struct Pollfd_250 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr249 (    struct Pollfd_250 *  p486 ) {
    return ( (struct pollfd * ) (  p486 ) );
}

static  char *   cast_dash_ptr251 (    struct Array_210 *  p486 ) {
    return ( (char * ) (  p486 ) );
}

static  void *   cast_dash_ptr252 (    struct Action_152 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr253 (    struct Either_182 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  struct Either_182 *   cast_dash_ptr254 (    void *  p486 ) {
    return ( (struct Either_182 * ) (  p486 ) );
}

static  struct Action_152 *   cast_dash_ptr255 (    void *  p486 ) {
    return ( (struct Action_152 * ) (  p486 ) );
}

static  void *   cast_dash_ptr256 (    struct Action_152 * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr257 (    enum Unit_13 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr258 (    struct timespec * *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  void *   cast_dash_ptr259 (    struct Cell_58 *  p486 ) {
    return ( (void * ) (  p486 ) );
}

static  struct List_3 *   zeroed260 (  ) {
    struct List_3 *  temp261;
    struct List_3 *  x493 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr229 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of199 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  char *   zeroed262 (  ) {
    char *  temp263;
    char *  x493 = (  temp263 );
    ( ( memset ) ( ( (  cast_dash_ptr232 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of200 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  char   zeroed264 (  ) {
    char  temp265;
    char  x493 = (  temp265 );
    ( ( memset ) ( ( (  cast_dash_ptr233 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of201 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  FILE *   zeroed266 (  ) {
    FILE *  temp267;
    FILE *  x493 = (  temp267 );
    ( ( memset ) ( ( (  cast_dash_ptr235 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of202 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  struct Either_182 *   zeroed268 (  ) {
    struct Either_182 *  temp269;
    struct Either_182 *  x493 = (  temp269 );
    ( ( memset ) ( ( (  cast_dash_ptr236 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of203 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  struct Winsize_205   zeroed270 (  ) {
    struct Winsize_205  temp271;
    struct Winsize_205  x493 = (  temp271 );
    ( ( memset ) ( ( (  cast_dash_ptr237 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of204 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  uint32_t   zeroed272 (  ) {
    uint32_t  temp273;
    uint32_t  x493 = (  temp273 );
    ( ( memset ) ( ( (  cast_dash_ptr238 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of206 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  enum Unit_13 *   zeroed274 (  ) {
    enum Unit_13 *  temp275;
    enum Unit_13 *  x493 = (  temp275 );
    ( ( memset ) ( ( (  cast_dash_ptr239 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of207 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  size_t   zeroed276 (  ) {
    size_t  temp277;
    size_t  x493 = (  temp277 );
    ( ( memset ) ( ( (  cast_dash_ptr246 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of208 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  struct Array_210   zeroed278 (  ) {
    struct Array_210  temp279;
    struct Array_210  x493 = (  temp279 );
    ( ( memset ) ( ( (  cast_dash_ptr247 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of209 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  int64_t   zeroed280 (  ) {
    int64_t  temp281;
    int64_t  x493 = (  temp281 );
    ( ( memset ) ( ( (  cast_dash_ptr248 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of211 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  struct Action_152 *   zeroed282 (  ) {
    struct Action_152 *  temp283;
    struct Action_152 *  x493 = (  temp283 );
    ( ( memset ) ( ( (  cast_dash_ptr256 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of212 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  struct timespec *   zeroed284 (  ) {
    struct timespec *  temp285;
    struct timespec *  x493 = (  temp285 );
    ( ( memset ) ( ( (  cast_dash_ptr258 ) ( ( & (  x493 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of213 ) ( (  x493 ) ) ) ) );
    return (  x493 );
}

static  uint32_t   cast_dash_on_dash_zeroed286 (    uint16_t  x496 ) {
    uint32_t  temp287 = ( (  zeroed272 ) ( ) );
    uint32_t *  y497 = ( &temp287 );
    uint16_t *  yp498 = ( (  cast216 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  size_t   cast_dash_on_dash_zeroed288 (    uint32_t  x496 ) {
    size_t  temp289 = ( (  zeroed276 ) ( ) );
    size_t *  y497 = ( &temp289 );
    uint32_t *  yp498 = ( (  cast218 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  int32_t   cast_dash_on_dash_zeroed290 (    char  x496 ) {
    int32_t  temp291 = ( (  zeroed69 ) ( ) );
    int32_t *  y497 = ( &temp291 );
    char *  yp498 = ( (  cast219 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  int64_t   cast_dash_on_dash_zeroed292 (    uint8_t  x496 ) {
    int64_t  temp293 = ( (  zeroed280 ) ( ) );
    int64_t *  y497 = ( &temp293 );
    uint8_t *  yp498 = ( (  cast221 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  int32_t   cast_dash_on_dash_zeroed294 (    uint8_t  x496 ) {
    int32_t  temp295 = ( (  zeroed69 ) ( ) );
    int32_t *  y497 = ( &temp295 );
    uint8_t *  yp498 = ( (  cast225 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  int64_t   cast_dash_on_dash_zeroed296 (    uint32_t  x496 ) {
    int64_t  temp297 = ( (  zeroed280 ) ( ) );
    int64_t *  y497 = ( &temp297 );
    uint32_t *  yp498 = ( (  cast228 ) ( (  y497 ) ) );
    (*  yp498 ) = (  x496 );
    return ( * (  y497 ) );
}

static  struct List_3 *   null_dash_ptr298 (  ) {
    return ( (  zeroed260 ) ( ) );
}

static  char *   null_dash_ptr299 (  ) {
    return ( (  zeroed262 ) ( ) );
}

static  FILE *   null_dash_ptr300 (  ) {
    return ( (  zeroed266 ) ( ) );
}

static  struct Either_182 *   null_dash_ptr301 (  ) {
    return ( (  zeroed268 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr302 (  ) {
    return ( (  zeroed274 ) ( ) );
}

static  struct Action_152 *   null_dash_ptr303 (  ) {
    return ( (  zeroed282 ) ( ) );
}

static  struct timespec *   null_dash_ptr304 (  ) {
    return ( (  zeroed284 ) ( ) );
}

static  bool   is_dash_ptr_dash_null305 (    FILE *  p502 ) {
    return ( (  p502 ) == ( (  null_dash_ptr300 ) ( ) ) );
}

static  bool   ptr_dash_eq306 (    enum Unit_13 *  l508 ,    enum Unit_13 *  r510 ) {
    return ( (  l508 ) == (  r510 ) );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  const char*  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_308   from_dash_nullable_dash_c_dash_str307 (    const char*  s513 ) {
    if ( ( (  ptr_dash_eq306 ) ( ( (  cast217 ) ( (  s513 ) ) ) ,  ( ( (  null_dash_ptr302 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    } else {
        return ( ( Maybe_308_Just ) ( (  s513 ) ) );
    }
}

static  uint32_t   i32_dash_u32309 (    int32_t  x522 ) {
    return ( (uint32_t ) (  x522 ) );
}

static  int64_t   i32_dash_i64310 (    int32_t  x525 ) {
    return ( (int64_t ) (  x525 ) );
}

static  size_t   i32_dash_size311 (    int32_t  x528 ) {
    return ( (size_t ) ( (int64_t ) (  x528 ) ) );
}

static  int32_t   i64_dash_i32312 (    int64_t  x534 ) {
    return ( (int32_t ) (  x534 ) );
}

static  int32_t   size_dash_i32313 (    size_t  x543 ) {
    return ( (int32_t ) (  x543 ) );
}

static  uint32_t   u16_dash_u32314 (    uint16_t  x549 ) {
    return ( (  cast_dash_on_dash_zeroed286 ) ( (  x549 ) ) );
}

static  size_t   u32_dash_size315 (    uint32_t  x555 ) {
    return ( (  cast_dash_on_dash_zeroed288 ) ( (  x555 ) ) );
}

static  int64_t   u32_dash_i64316 (    uint32_t  x558 ) {
    return ( (  cast_dash_on_dash_zeroed296 ) ( (  x558 ) ) );
}

static  int32_t   u32_dash_i32317 (    uint32_t  x564 ) {
    return ( (  cast223 ) ( (  x564 ) ) );
}

static  int64_t   u8_dash_i64318 (    uint8_t  x570 ) {
    return ( (  cast_dash_on_dash_zeroed292 ) ( (  x570 ) ) );
}

static  int32_t   u8_dash_i32319 (    uint8_t  x573 ) {
    return ( (  cast_dash_on_dash_zeroed294 ) ( (  x573 ) ) );
}

struct Slice_322 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_321 {
    struct Slice_322  f_slice;
    size_t  f_current_dash_offset;
};

struct List_323 {
    enum CAllocator_4  f_al;
    struct Slice_322  f_elements;
    size_t  f_count;
};

static  struct SliceIter_321   into_dash_iter325 (    struct Slice_322  self1491 ) {
    return ( (struct SliceIter_321) { .f_slice = (  self1491 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min327 (    size_t  l989 ,    size_t  r991 ) {
    if ( (  cmp9 ( (  l989 ) , (  r991 ) ) == 0 ) ) {
        return (  l989 );
    } else {
        return (  r991 );
    }
}

static  struct Slice_322   subslice326 (    struct Slice_322  slice1451 ,    size_t  from1453 ,    size_t  to1455 ) {
    struct List_3 *  begin_dash_ptr1456 = ( (  offset_dash_ptr171 ) ( ( (  slice1451 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1453 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1453 ) , (  to1455 ) ) != 0 ) || (  cmp9 ( (  from1453 ) , ( (  slice1451 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1457 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1455 ) ,  ( (  slice1451 ) .f_count ) ) ) , (  from1453 ) ) );
    return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  count1457 ) } );
}

static  struct SliceIter_321   into_dash_iter324 (    struct List_323  self1874 ) {
    return ( (  into_dash_iter325 ) ( ( (  subslice326 ) ( ( (  self1874 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1874 ) .f_count ) ) ) ) );
}

static  struct SliceIter_321   into_dash_iter320 (    struct List_323 *  self579 ) {
    return ( (  into_dash_iter324 ) ( ( * (  self579 ) ) ) );
}

struct SliceIter_330 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_329 {
    struct SliceIter_330  f_s;
};

static  struct Scanner_329   into_dash_iter331 (    struct Scanner_329  self2569 ) {
    return (  self2569 );
}

static  struct Scanner_329   into_dash_iter328 (    struct Scanner_329 *  self579 ) {
    return ( (  into_dash_iter331 ) ( ( * (  self579 ) ) ) );
}

static  struct SliceIter_330   into_dash_iter334 (    struct Slice_5  self1491 ) {
    return ( (struct SliceIter_330) { .f_slice = (  self1491 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice335 (    struct Slice_5  slice1451 ,    size_t  from1453 ,    size_t  to1455 ) {
    char *  begin_dash_ptr1456 = ( (  offset_dash_ptr31 ) ( ( (  slice1451 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1453 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1453 ) , (  to1455 ) ) != 0 ) || (  cmp9 ( (  from1453 ) , ( (  slice1451 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1457 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1455 ) ,  ( (  slice1451 ) .f_count ) ) ) , (  from1453 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  count1457 ) } );
}

static  struct SliceIter_330   into_dash_iter333 (    struct List_3  self1874 ) {
    return ( (  into_dash_iter334 ) ( ( (  subslice335 ) ( ( (  self1874 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1874 ) .f_count ) ) ) ) );
}

static  struct SliceIter_330   into_dash_iter332 (    struct List_3 *  self579 ) {
    return ( (  into_dash_iter333 ) ( ( * (  self579 ) ) ) );
}

enum EmptyIter_337 {
    EmptyIter_337_EmptyIter,
};

static  enum EmptyIter_337   nil336 (  ) {
    return ( EmptyIter_337_EmptyIter );
}

static  enum EmptyIter_337   into_dash_iter338 (    enum EmptyIter_337  self584 ) {
    return (  self584 );
}

static  struct Maybe_49   next339 (    enum EmptyIter_337 *  dref586 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_342 {
    struct DynStr_136  f_og;
    size_t  f_last;
};

struct env347 {
    size_t  growth_dash_factor1883;
    ;
    ;
    size_t  starting_dash_size1882;
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

struct funenv347 {
    enum Unit_13  (*fun) (  struct env347  ,    struct List_3 *  );
    struct env347 env;
};

struct env346 {
    ;
    ;
    ;
    ;
    ;
    struct env347 envinst347;
};

struct funenv346 {
    enum Unit_13  (*fun) (  struct env346  ,    struct List_3 *  ,    char  );
    struct env346 env;
};

struct env345 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

struct funenv345 {
    enum Unit_13  (*fun) (  struct env345  ,    struct List_3 *  ,    struct DynStr_136  );
    struct env345 env;
};

struct env344 {
    ;
    ;
    ;
    ;
    ;
    struct env345 envinst345;
};

struct funenv344 {
    struct List_3  (*fun) (  struct env344  ,    struct DynStr_136  ,    enum CAllocator_4  );
    struct env344 env;
};

struct env343 {
    struct env344 envinst344;
    enum CAllocator_4  al3365;
};

struct funenv343 {
    struct List_3  (*fun) (  struct env343  ,    struct DynStr_136  );
    struct env343 env;
};

struct Map_341 {
    struct LineIter_342  field0;
    struct funenv343  field1;
};

static struct Map_341 Map_341_Map (  struct LineIter_342  field0 , struct funenv343  field1 ) {
    return ( struct Map_341 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_341   into_dash_iter340 (    struct Map_341  self590 ) {
    return (  self590 );
}

struct ConstStrIter_350 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_349 {
    struct ConstStrIter_350  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_349 Map_349_Map (  struct ConstStrIter_350  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_349 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_349   into_dash_iter348 (    struct Map_349  self590 ) {
    return (  self590 );
}

struct Take_353 {
    struct SliceIter_330  field0;
    size_t  field1;
};

static struct Take_353 Take_353_Take (  struct SliceIter_330  field0 ,  size_t  field1 ) {
    return ( struct Take_353 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Map_352 {
    struct Take_353  field0;
    int32_t (*  field1 )(    char  );
};

static struct Map_352 Map_352_Map (  struct Take_353  field0 ,  int32_t (*  field1 )(    char  ) ) {
    return ( struct Map_352 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_352   into_dash_iter351 (    struct Map_352  self590 ) {
    return (  self590 );
}

struct Maybe_355 {
    enum {
        Maybe_355_None_t,
        Maybe_355_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_355_Just_s;
    } stuff;
};

static struct Maybe_355 Maybe_355_Just (  struct List_3  field0 ) {
    return ( struct Maybe_355 ) { .tag = Maybe_355_Just_t, .stuff = { .Maybe_355_Just_s = { .field0 = field0 } } };
};

struct Maybe_356 {
    enum {
        Maybe_356_None_t,
        Maybe_356_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_136  field0;
        } Maybe_356_Just_s;
    } stuff;
};

static struct Maybe_356 Maybe_356_Just (  struct DynStr_136  field0 ) {
    return ( struct Maybe_356 ) { .tag = Maybe_356_Just_t, .stuff = { .Maybe_356_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail359 (    struct Maybe_49  x1393 ,    struct StrConcat_14  errmsg1395 ) {
    struct Maybe_49  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1395 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_49_Just_t ) {
        return ( dref1396 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get360 (    struct Slice_5  slice1432 ,    size_t  i1434 ) {
    if ( ( (  cmp9 ( (  i1434 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1434 ) , ( (  slice1432 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1435 = ( (  offset_dash_ptr31 ) ( ( (  slice1432 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1434 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1435 ) ) ) );
}

static  char   get358 (    struct Slice_5  slice1438 ,    size_t  i1440 ) {
    return ( (  or_dash_fail359 ) ( ( (  try_dash_get360 ) ( (  slice1438 ) ,  (  i1440 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1440 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1438 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar361 (  ) {
    return ( (  zeroed264 ) ( ) );
}

static  char   newline362 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_136   substr363 (    struct DynStr_136  s1653 ,    size_t  from1655 ,    size_t  to1657 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( (  s1653 ) .f_contents ) ,  (  from1655 ) ,  (  to1657 ) ) ) } );
}

static  struct Maybe_356   next357 (    struct LineIter_342 *  self1802 ) {
    if ( ( (  cmp9 ( ( ( * (  self1802 ) ) .f_last ) , ( ( ( ( * (  self1802 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get358 ) ( ( ( ( * (  self1802 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1802 ) ) .f_last ) ) ) , ( (  nullchar361 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    size_t  i1803 = ( ( * (  self1802 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1803 ) , ( ( ( ( * (  self1802 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get358 ) ( ( ( ( * (  self1802 ) ) .f_og ) .f_contents ) ,  (  i1803 ) ) ) , ( (  newline362 ) ( ) ) ) ) ) ) {
        i1803 = (  op_dash_add98 ( (  i1803 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_136  line1804 = ( (  substr363 ) ( ( ( * (  self1802 ) ) .f_og ) ,  ( ( * (  self1802 ) ) .f_last ) ,  (  i1803 ) ) );
    if ( (  cmp9 ( (  i1803 ) , ( ( ( ( * (  self1802 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1803 = (  op_dash_add98 ( (  i1803 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1802 ) .f_last = (  i1803 );
    return ( ( Maybe_356_Just ) ( (  line1804 ) ) );
}

static  struct Maybe_355   next354 (    struct Map_341 *  dref592 ) {
    struct Maybe_356  dref595 = ( (  next357 ) ( ( & ( (* dref592 ) .field0 ) ) ) );
    if ( dref595.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    else if ( dref595.tag == Maybe_356_Just_t ) {
        struct funenv343  temp364 = ( (* dref592 ) .field1 );
        return ( ( Maybe_355_Just ) ( ( temp364.fun ( temp364.env ,  ( dref595 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_366 {
    enum {
        Maybe_366_None_t,
        Maybe_366_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_366_Just_s;
    } stuff;
};

static struct Maybe_366 Maybe_366_Just (  uint32_t  field0 ) {
    return ( struct Maybe_366 ) { .tag = Maybe_366_Just_t, .stuff = { .Maybe_366_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next367 (    struct ConstStrIter_350 *  self1102 ) {
    if ( (  cmp9 ( ( ( * (  self1102 ) ) .f_i ) , ( (  i32_dash_size311 ) ( ( ( strlen ) ( ( ( * (  self1102 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1103 = ( ( (  cast215 ) ( ( ( * (  self1102 ) ) .f_ogstr ) ) ) );
    char  c1104 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1103 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1102 ) ) .f_i ) ) ) ) ) );
    (*  self1102 ) .f_i = (  op_dash_add98 ( ( ( * (  self1102 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1104 ) ) );
}

static  struct Maybe_366   next365 (    struct Map_349 *  dref592 ) {
    struct Maybe_49  dref595 = ( (  next367 ) ( ( & ( (* dref592 ) .field0 ) ) ) );
    if ( dref595.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    else if ( dref595.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_366_Just ) ( ( ( (* dref592 ) .field1 ) ( ( dref595 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_369 {
    enum {
        Maybe_369_None_t,
        Maybe_369_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_369_Just_s;
    } stuff;
};

static struct Maybe_369 Maybe_369_Just (  int32_t  field0 ) {
    return ( struct Maybe_369 ) { .tag = Maybe_369_Just_t, .stuff = { .Maybe_369_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next371 (    struct SliceIter_330 *  self1497 ) {
    size_t  off1498 = ( ( * (  self1497 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1497 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1499 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1497 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1498 ) ) ) ) ) );
    (*  self1497 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1499 ) ) );
}

static  struct Maybe_49   next370 (    struct Take_353 *  dref655 ) {
    if ( (  cmp9 ( ( (* dref655 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x658 = ( (  next371 ) ( ( & ( (* dref655 ) .field0 ) ) ) );
        (* dref655 ) .field1 = (  op_dash_sub99 ( ( (* dref655 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x658 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_369   next368 (    struct Map_352 *  dref592 ) {
    struct Maybe_49  dref595 = ( (  next370 ) ( ( & ( (* dref592 ) .field0 ) ) ) );
    if ( dref595.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
    else if ( dref595.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_369_Just ) ( ( ( (* dref592 ) .field1 ) ( ( dref595 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_342   into_dash_iter373 (    struct LineIter_342  self1799 ) {
    return (  self1799 );
}

static  struct Map_341   map372 (    struct LineIter_342  iterable599 ,   struct funenv343  fun601 ) {
    struct LineIter_342  it602 = ( (  into_dash_iter373 ) ( (  iterable599 ) ) );
    return ( ( Map_341_Map ) ( (  it602 ) ,  (  fun601 ) ) );
}

static  struct ConstStrIter_350   into_dash_iter375 (    const char*  self1096 ) {
    return ( (struct ConstStrIter_350) { .f_ogstr = (  self1096 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_349   map374 (    const char*  iterable599 ,    uint32_t (*  fun601 )(    char  ) ) {
    struct ConstStrIter_350  it602 = ( (  into_dash_iter375 ) ( (  iterable599 ) ) );
    return ( ( Map_349_Map ) ( (  it602 ) ,  (  fun601 ) ) );
}

static  struct Take_353   into_dash_iter377 (    struct Take_353  self653 ) {
    return (  self653 );
}

static  struct Map_352   map376 (    struct Take_353  iterable599 ,    int32_t (*  fun601 )(    char  ) ) {
    struct Take_353  it602 = ( (  into_dash_iter377 ) ( (  iterable599 ) ) );
    return ( ( Map_352_Map ) ( (  it602 ) ,  (  fun601 ) ) );
}

struct FromIter_381 {
    int32_t  f_from;
};

struct Zip_380 {
    struct SliceIter_330  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

struct Drop_379 {
    struct Zip_380  field0;
    size_t  field1;
};

static struct Drop_379 Drop_379_Drop (  struct Zip_380  field0 ,  size_t  field1 ) {
    return ( struct Drop_379 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_379   into_dash_iter378 (    struct Drop_379  self639 ) {
    return (  self639 );
}

struct Zip_384 {
    struct SliceIter_321  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

struct Drop_383 {
    struct Zip_384  field0;
    size_t  field1;
};

static struct Drop_383 Drop_383_Drop (  struct Zip_384  field0 ,  size_t  field1 ) {
    return ( struct Drop_383 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_383   into_dash_iter382 (    struct Drop_383  self639 ) {
    return (  self639 );
}

struct Tuple2_387 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_387 Tuple2_387_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_387 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_386 {
    enum {
        Maybe_386_None_t,
        Maybe_386_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_387  field0;
        } Maybe_386_Just_s;
    } stuff;
};

static struct Maybe_386 Maybe_386_Just (  struct Tuple2_387  field0 ) {
    return ( struct Maybe_386 ) { .tag = Maybe_386_Just_t, .stuff = { .Maybe_386_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_369   next389 (    struct FromIter_381 *  dref699 ) {
    int32_t  v701 = ( ( (* dref699 ) ) .f_from );
    (* dref699 ) .f_from = (  op_dash_add87 ( ( ( (* dref699 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_369_Just ) ( (  v701 ) ) );
}

static  struct Maybe_386   next388 (    struct Zip_380 *  self708 ) {
    struct Zip_380  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next371 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_386   next385 (    struct Drop_379 *  dref641 ) {
    while ( (  cmp9 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next388 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
        (* dref641 ) .field1 = (  op_dash_sub99 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next388 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
}

struct Tuple2_392 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_392 Tuple2_392_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_392 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_391 {
    enum {
        Maybe_391_None_t,
        Maybe_391_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_392  field0;
        } Maybe_391_Just_s;
    } stuff;
};

static struct Maybe_391 Maybe_391_Just (  struct Tuple2_392  field0 ) {
    return ( struct Maybe_391 ) { .tag = Maybe_391_Just_t, .stuff = { .Maybe_391_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_355   next394 (    struct SliceIter_321 *  self1497 ) {
    size_t  off1498 = ( ( * (  self1497 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1497 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    struct List_3  elem1499 = ( * ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1497 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1498 ) ) ) ) ) );
    (*  self1497 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_355_Just ) ( (  elem1499 ) ) );
}

static  struct Maybe_391   next393 (    struct Zip_384 *  self708 ) {
    struct Zip_384  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_355  dref710 = ( (  next394 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_355_None_t ) {
            return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
        }
        else if ( dref710.tag == Maybe_355_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next394 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_391_Just ) ( ( ( Tuple2_392_Tuple2 ) ( ( dref710 .stuff .Maybe_355_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_391   next390 (    struct Drop_383 *  dref641 ) {
    while ( (  cmp9 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next393 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
        (* dref641 ) .field1 = (  op_dash_sub99 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next393 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
}

static  struct Zip_380   into_dash_iter396 (    struct Zip_380  self705 ) {
    return (  self705 );
}

static  struct Drop_379   drop395 (    struct Zip_380  iterable646 ,    size_t  i648 ) {
    struct Zip_380  it649 = ( (  into_dash_iter396 ) ( (  iterable646 ) ) );
    return ( ( Drop_379_Drop ) ( (  it649 ) ,  (  i648 ) ) );
}

static  struct Zip_384   into_dash_iter398 (    struct Zip_384  self705 ) {
    return (  self705 );
}

static  struct Drop_383   drop397 (    struct Zip_384  iterable646 ,    size_t  i648 ) {
    struct Zip_384  it649 = ( (  into_dash_iter398 ) ( (  iterable646 ) ) );
    return ( ( Drop_383_Drop ) ( (  it649 ) ,  (  i648 ) ) );
}

static  struct Take_353   take399 (    struct List_3 *  it661 ,    size_t  i663 ) {
    return ( ( Take_353_Take ) ( ( (  into_dash_iter332 ) ( (  it661 ) ) ) ,  (  i663 ) ) );
}

struct Range_401 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_401 Range_401_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_401 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_401   to400 (    int32_t  from668 ,    int32_t  to670 ) {
    return ( ( Range_401_Range ) ( (  from668 ) ,  (  to670 ) ) );
}

struct RangeIter_403 {
    struct Range_401  field0;
    int32_t  field1;
};

static struct RangeIter_403 RangeIter_403_RangeIter (  struct Range_401  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_403 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_403   into_dash_iter402 (    struct Range_401  dref677 ) {
    return ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref677 .field0 ) ,  ( dref677 .field1 ) ) ) ,  ( dref677 .field0 ) ) );
}

static  struct Maybe_369   next404 (    struct RangeIter_403 *  self685 ) {
    struct RangeIter_403  dref686 = ( * (  self685 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref686 .field1 ) , ( dref686 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        struct Maybe_369  x690 = ( ( Maybe_369_Just ) ( ( dref686 .field1 ) ) );
        (*  self685 ) = ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref686 .field0 .field0 ) ,  ( dref686 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref686 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x690 );
    }
}

static  struct FromIter_381   from405 (    int32_t  f694 ) {
    return ( (struct FromIter_381) { .f_from = (  f694 ) } );
}

static  struct FromIter_381   into_dash_iter406 (    struct FromIter_381  it697 ) {
    return (  it697 );
}

struct Slice_410 {
    struct Either_182 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_409 {
    struct Slice_410  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_408 {
    struct SliceIter_409  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_408   into_dash_iter407 (    struct Zip_408  self705 ) {
    return (  self705 );
}

struct SliceIter_413 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_412 {
    struct SliceIter_413  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_412   into_dash_iter411 (    struct Zip_412  self705 ) {
    return (  self705 );
}

struct Zip_415 {
    struct SliceIter_330  f_left_dash_it;
    struct SliceIter_330  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self705 ) {
    return (  self705 );
}

struct IntStrIter_418 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_417 {
    struct IntStrIter_418  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self705 ) {
    return (  self705 );
}

struct StrConcatIter_424 {
    struct ConstStrIter_350  f_left;
    struct SliceIter_330  f_right;
};

struct AppendIter_425 {
    enum EmptyIter_337  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_423 {
    struct StrConcatIter_424  f_left;
    struct AppendIter_425  f_right;
};

struct StrCaseIter_422 {
    enum {
        StrCaseIter_422_StrCaseIter1_t,
        StrCaseIter_422_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_350  field0;
        } StrCaseIter_422_StrCaseIter1_s;
        struct {
            struct StrConcatIter_423  field0;
        } StrCaseIter_422_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_422 StrCaseIter_422_StrCaseIter1 (  struct ConstStrIter_350  field0 ) {
    return ( struct StrCaseIter_422 ) { .tag = StrCaseIter_422_StrCaseIter1_t, .stuff = { .StrCaseIter_422_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_422 StrCaseIter_422_StrCaseIter2 (  struct StrConcatIter_423  field0 ) {
    return ( struct StrCaseIter_422 ) { .tag = StrCaseIter_422_StrCaseIter2_t, .stuff = { .StrCaseIter_422_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_421 {
    struct ConstStrIter_350  f_left;
    struct StrCaseIter_422  f_right;
};

struct Zip_420 {
    struct StrConcatIter_421  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self705 ) {
    return (  self705 );
}

struct IntStrIter_429 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_428 {
    struct ConstStrIter_350  f_left;
    struct IntStrIter_429  f_right;
};

struct Zip_427 {
    struct StrConcatIter_428  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_427   into_dash_iter426 (    struct Zip_427  self705 ) {
    return (  self705 );
}

struct StrConcatIter_439 {
    struct AppendIter_425  f_left;
    struct AppendIter_425  f_right;
};

struct StrConcatIter_438 {
    struct StrConcatIter_439  f_left;
    struct ConstStrIter_350  f_right;
};

struct StrConcatIter_437 {
    struct StrConcatIter_438  f_left;
    struct IntStrIter_418  f_right;
};

struct StrConcatIter_436 {
    struct StrConcatIter_437  f_left;
    struct AppendIter_425  f_right;
};

struct StrConcatIter_435 {
    struct ConstStrIter_350  f_left;
    struct StrConcatIter_436  f_right;
};

struct StrConcatIter_434 {
    struct StrConcatIter_435  f_left;
    struct AppendIter_425  f_right;
};

struct StrCaseIter_433 {
    enum {
        StrCaseIter_433_StrCaseIter1_t,
        StrCaseIter_433_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_350  field0;
        } StrCaseIter_433_StrCaseIter1_s;
        struct {
            struct StrConcatIter_434  field0;
        } StrCaseIter_433_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_433 StrCaseIter_433_StrCaseIter1 (  struct ConstStrIter_350  field0 ) {
    return ( struct StrCaseIter_433 ) { .tag = StrCaseIter_433_StrCaseIter1_t, .stuff = { .StrCaseIter_433_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_433 StrCaseIter_433_StrCaseIter2 (  struct StrConcatIter_434  field0 ) {
    return ( struct StrCaseIter_433 ) { .tag = StrCaseIter_433_StrCaseIter2_t, .stuff = { .StrCaseIter_433_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_432 {
    struct ConstStrIter_350  f_left;
    struct StrCaseIter_433  f_right;
};

struct Zip_431 {
    struct StrConcatIter_432  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_431   into_dash_iter430 (    struct Zip_431  self705 ) {
    return (  self705 );
}

struct StrConcatIter_444 {
    struct ConstStrIter_350  f_left;
    struct IntStrIter_418  f_right;
};

struct StrConcatIter_443 {
    struct StrConcatIter_444  f_left;
    struct AppendIter_425  f_right;
};

struct StrConcatIter_442 {
    struct StrConcatIter_443  f_left;
    struct IntStrIter_418  f_right;
};

struct Zip_441 {
    struct StrConcatIter_442  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_441   into_dash_iter440 (    struct Zip_441  self705 ) {
    return (  self705 );
}

struct IntStrIter_448 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_447 {
    struct ConstStrIter_350  f_left;
    struct IntStrIter_448  f_right;
};

struct Zip_446 {
    struct StrConcatIter_447  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_446   into_dash_iter445 (    struct Zip_446  self705 ) {
    return (  self705 );
}

struct Zip_450 {
    struct StrConcatIter_444  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_450   into_dash_iter449 (    struct Zip_450  self705 ) {
    return (  self705 );
}

struct StrConcatIter_454 {
    struct StrConcatIter_444  f_left;
    struct ConstStrIter_350  f_right;
};

struct StrConcatIter_453 {
    struct StrConcatIter_454  f_left;
    struct IntStrIter_418  f_right;
};

struct Zip_452 {
    struct StrConcatIter_453  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_452   into_dash_iter451 (    struct Zip_452  self705 ) {
    return (  self705 );
}

struct StrConcatIter_459 {
    struct StrConcatIter_447  f_left;
    struct AppendIter_425  f_right;
};

struct StrCaseIter_458 {
    enum {
        StrCaseIter_458_StrCaseIter1_t,
        StrCaseIter_458_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_350  field0;
        } StrCaseIter_458_StrCaseIter1_s;
        struct {
            struct StrConcatIter_459  field0;
        } StrCaseIter_458_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_458 StrCaseIter_458_StrCaseIter1 (  struct ConstStrIter_350  field0 ) {
    return ( struct StrCaseIter_458 ) { .tag = StrCaseIter_458_StrCaseIter1_t, .stuff = { .StrCaseIter_458_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_458 StrCaseIter_458_StrCaseIter2 (  struct StrConcatIter_459  field0 ) {
    return ( struct StrCaseIter_458 ) { .tag = StrCaseIter_458_StrCaseIter2_t, .stuff = { .StrCaseIter_458_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_457 {
    struct ConstStrIter_350  f_left;
    struct StrCaseIter_458  f_right;
};

struct Zip_456 {
    struct StrConcatIter_457  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_456   into_dash_iter455 (    struct Zip_456  self705 ) {
    return (  self705 );
}

struct StrConcatIter_462 {
    struct StrConcatIter_459  f_left;
    struct IntStrIter_448  f_right;
};

struct Zip_461 {
    struct StrConcatIter_462  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_461   into_dash_iter460 (    struct Zip_461  self705 ) {
    return (  self705 );
}

struct Tuple2_465 {
    struct Either_182  field0;
    int32_t  field1;
};

static struct Tuple2_465 Tuple2_465_Tuple2 (  struct Either_182  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_465 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_464 {
    enum {
        Maybe_464_None_t,
        Maybe_464_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_465  field0;
        } Maybe_464_Just_s;
    } stuff;
};

static struct Maybe_464 Maybe_464_Just (  struct Tuple2_465  field0 ) {
    return ( struct Maybe_464 ) { .tag = Maybe_464_Just_t, .stuff = { .Maybe_464_Just_s = { .field0 = field0 } } };
};

struct Maybe_466 {
    enum {
        Maybe_466_None_t,
        Maybe_466_Just_t,
    } tag;
    union {
        struct {
            struct Either_182  field0;
        } Maybe_466_Just_s;
    } stuff;
};

static struct Maybe_466 Maybe_466_Just (  struct Either_182  field0 ) {
    return ( struct Maybe_466 ) { .tag = Maybe_466_Just_t, .stuff = { .Maybe_466_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_466   next467 (    struct SliceIter_409 *  self1497 ) {
    size_t  off1498 = ( ( * (  self1497 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1497 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    struct Either_182  elem1499 = ( * ( (  offset_dash_ptr181 ) ( ( ( ( * (  self1497 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1498 ) ) ) ) ) );
    (*  self1497 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_466_Just ) ( (  elem1499 ) ) );
}

static  struct Maybe_464   next463 (    struct Zip_408 *  self708 ) {
    struct Zip_408  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_466  dref710 = ( (  next467 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_466_None_t ) {
            return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
        }
        else if ( dref710.tag == Maybe_466_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next467 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_464_Just ) ( ( ( Tuple2_465_Tuple2 ) ( ( dref710 .stuff .Maybe_466_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_470 {
    struct Action_152  field0;
    int32_t  field1;
};

static struct Tuple2_470 Tuple2_470_Tuple2 (  struct Action_152  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_470 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_469 {
    enum {
        Maybe_469_None_t,
        Maybe_469_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_470  field0;
        } Maybe_469_Just_s;
    } stuff;
};

static struct Maybe_469 Maybe_469_Just (  struct Tuple2_470  field0 ) {
    return ( struct Maybe_469 ) { .tag = Maybe_469_Just_t, .stuff = { .Maybe_469_Just_s = { .field0 = field0 } } };
};

struct Maybe_471 {
    enum {
        Maybe_471_None_t,
        Maybe_471_Just_t,
    } tag;
    union {
        struct {
            struct Action_152  field0;
        } Maybe_471_Just_s;
    } stuff;
};

static struct Maybe_471 Maybe_471_Just (  struct Action_152  field0 ) {
    return ( struct Maybe_471 ) { .tag = Maybe_471_Just_t, .stuff = { .Maybe_471_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_471   next472 (    struct SliceIter_413 *  self1497 ) {
    size_t  off1498 = ( ( * (  self1497 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1497 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_471) { .tag = Maybe_471_None_t } );
    }
    struct Action_152  elem1499 = ( * ( (  offset_dash_ptr179 ) ( ( ( ( * (  self1497 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1498 ) ) ) ) ) );
    (*  self1497 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1498 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_471_Just ) ( (  elem1499 ) ) );
}

static  struct Maybe_469   next468 (    struct Zip_412 *  self708 ) {
    struct Zip_412  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_471  dref710 = ( (  next472 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_471_None_t ) {
            return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
        }
        else if ( dref710.tag == Maybe_471_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_469_Just ) ( ( ( Tuple2_470_Tuple2 ) ( ( dref710 .stuff .Maybe_471_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_475 {
    char  field0;
    char  field1;
};

static struct Tuple2_475 Tuple2_475_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_475 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_474 {
    enum {
        Maybe_474_None_t,
        Maybe_474_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_475  field0;
        } Maybe_474_Just_s;
    } stuff;
};

static struct Maybe_474 Maybe_474_Just (  struct Tuple2_475  field0 ) {
    return ( struct Maybe_474 ) { .tag = Maybe_474_Just_t, .stuff = { .Maybe_474_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_474   next473 (    struct Zip_415 *  self708 ) {
    struct Zip_415  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next371 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref712 = ( (  next371 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
            }
            else if ( dref712.tag == Maybe_49_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next371 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_474_Just ) ( ( ( Tuple2_475_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env480 {
    ;
    int32_t  base963;
};

struct funenv480 {
    int32_t  (*fun) (  struct env480  ,    int32_t  ,    int32_t  );
    struct env480 env;
};

static  int32_t   reduce479 (    struct Range_401  iterable852 ,    int32_t  base854 ,   struct funenv480  fun856 ) {
    int32_t  x857 = (  base854 );
    struct RangeIter_403  it858 = ( (  into_dash_iter402 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref859 = ( (  next404 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_369_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_369_Just_t ) {
            struct funenv480  temp481 = (  fun856 );
            x857 = ( temp481.fun ( temp481.env ,  ( dref859 .stuff .Maybe_369_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    int32_t  temp482;
    return (  temp482 );
}

static  int32_t   lam480 (   struct env480 env ,    int32_t  item967 ,    int32_t  x969 ) {
    return (  op_dash_mul89 ( (  x969 ) , ( env.base963 ) ) );
}

static  int32_t   pow478 (    int32_t  base963 ,    int32_t  p965 ) {
    struct env480 envinst480 = {
        .base963 =  base963 ,
    };
    return ( (  reduce479 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p965 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv480){ .fun = lam480, .env = envinst480 } ) ) );
}

static  struct Maybe_49   next477 (    struct IntStrIter_418 *  self1128 ) {
    if ( (  cmp80 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1129 = ( (  pow478 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1130 = (  op_dash_div90 ( ( ( * (  self1128 ) ) .f_int ) , (  trim_dash_down1129 ) ) );
    int32_t  upper_dash_mask1131 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1130 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1132 = (  op_dash_sub88 ( (  upper1130 ) , (  upper_dash_mask1131 ) ) );
    (*  self1128 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1133 = ( (  cast222 ) ( (  op_dash_add87 ( (  digit1132 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1133 ) ) );
}

static  struct Maybe_386   next476 (    struct Zip_417 *  self708 ) {
    struct Zip_417  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next477 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next477 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next487 (    struct StrConcatIter_424 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next371 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next488 (    struct AppendIter_425 *  self816 ) {
    struct Maybe_49  dref817 = ( (  next339 ) ( ( & ( ( * (  self816 ) ) .f_it ) ) ) );
    if ( dref817.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref817 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref817.tag == Maybe_49_None_t ) {
        if ( ( ! ( ( * (  self816 ) ) .f_appended ) ) ) {
            (*  self816 ) .f_appended = ( true );
            return ( ( Maybe_49_Just ) ( ( ( * (  self816 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_49   next486 (    struct StrConcatIter_423 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next487 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next485 (    struct StrCaseIter_422 *  self1216 ) {
    struct StrCaseIter_422 *  dref1217 = (  self1216 );
    if ( (* dref1217 ).tag == StrCaseIter_422_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_422_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1217 ).tag == StrCaseIter_422_StrCaseIter2_t ) {
        return ( (  next486 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_422_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next484 (    struct StrConcatIter_421 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next485 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next483 (    struct Zip_420 *  self708 ) {
    struct Zip_420  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next484 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next484 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env494 {
    uint32_t  base963;
    ;
};

struct funenv494 {
    uint32_t  (*fun) (  struct env494  ,    int32_t  ,    uint32_t  );
    struct env494 env;
};

static  uint32_t   reduce493 (    struct Range_401  iterable852 ,    uint32_t  base854 ,   struct funenv494  fun856 ) {
    uint32_t  x857 = (  base854 );
    struct RangeIter_403  it858 = ( (  into_dash_iter402 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref859 = ( (  next404 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_369_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_369_Just_t ) {
            struct funenv494  temp495 = (  fun856 );
            x857 = ( temp495.fun ( temp495.env ,  ( dref859 .stuff .Maybe_369_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    uint32_t  temp496;
    return (  temp496 );
}

static  uint32_t   lam494 (   struct env494 env ,    int32_t  item967 ,    uint32_t  x969 ) {
    return (  op_dash_mul94 ( (  x969 ) , ( env.base963 ) ) );
}

static  uint32_t   pow492 (    uint32_t  base963 ,    int32_t  p965 ) {
    struct env494 envinst494 = {
        .base963 =  base963 ,
    };
    return ( (  reduce493 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p965 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv494){ .fun = lam494, .env = envinst494 } ) ) );
}

static  struct Maybe_49   next491 (    struct IntStrIter_429 *  self1128 ) {
    if ( (  cmp80 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1129 = ( (  pow492 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1130 = (  op_dash_div95 ( ( ( * (  self1128 ) ) .f_int ) , (  trim_dash_down1129 ) ) );
    uint32_t  upper_dash_mask1131 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1130 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1132 = (  op_dash_sub93 ( (  upper1130 ) , (  upper_dash_mask1131 ) ) );
    (*  self1128 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1133 = ( (  cast226 ) ( (  op_dash_add92 ( (  digit1132 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1133 ) ) );
}

static  struct Maybe_49   next490 (    struct StrConcatIter_428 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next491 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next489 (    struct Zip_427 *  self708 ) {
    struct Zip_427  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next490 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next490 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next505 (    struct StrConcatIter_439 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next504 (    struct StrConcatIter_438 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next505 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next503 (    struct StrConcatIter_437 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next504 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next502 (    struct StrConcatIter_436 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next503 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next501 (    struct StrConcatIter_435 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next502 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next500 (    struct StrConcatIter_434 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next501 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next499 (    struct StrCaseIter_433 *  self1216 ) {
    struct StrCaseIter_433 *  dref1217 = (  self1216 );
    if ( (* dref1217 ).tag == StrCaseIter_433_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_433_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1217 ).tag == StrCaseIter_433_StrCaseIter2_t ) {
        return ( (  next500 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_433_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next498 (    struct StrConcatIter_432 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next499 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next497 (    struct Zip_431 *  self708 ) {
    struct Zip_431  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next498 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next498 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next509 (    struct StrConcatIter_444 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next508 (    struct StrConcatIter_443 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next509 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next507 (    struct StrConcatIter_442 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next508 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next506 (    struct Zip_441 *  self708 ) {
    struct Zip_441  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next507 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next507 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env515 {
    size_t  base963;
    ;
};

struct funenv515 {
    size_t  (*fun) (  struct env515  ,    int32_t  ,    size_t  );
    struct env515 env;
};

static  size_t   reduce514 (    struct Range_401  iterable852 ,    size_t  base854 ,   struct funenv515  fun856 ) {
    size_t  x857 = (  base854 );
    struct RangeIter_403  it858 = ( (  into_dash_iter402 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref859 = ( (  next404 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_369_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_369_Just_t ) {
            struct funenv515  temp516 = (  fun856 );
            x857 = ( temp516.fun ( temp516.env ,  ( dref859 .stuff .Maybe_369_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp517;
    return (  temp517 );
}

static  size_t   lam515 (   struct env515 env ,    int32_t  item967 ,    size_t  x969 ) {
    return (  op_dash_mul100 ( (  x969 ) , ( env.base963 ) ) );
}

static  size_t   pow513 (    size_t  base963 ,    int32_t  p965 ) {
    struct env515 envinst515 = {
        .base963 =  base963 ,
    };
    return ( (  reduce514 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p965 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv515){ .fun = lam515, .env = envinst515 } ) ) );
}

static  struct Maybe_49   next512 (    struct IntStrIter_448 *  self1128 ) {
    if ( (  cmp80 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1129 = ( (  pow513 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1130 = (  op_dash_div101 ( ( ( * (  self1128 ) ) .f_int ) , (  trim_dash_down1129 ) ) );
    size_t  upper_dash_mask1131 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1130 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1132 = (  op_dash_sub99 ( (  upper1130 ) , (  upper_dash_mask1131 ) ) );
    (*  self1128 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1128 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1133 = ( (  cast227 ) ( (  op_dash_add98 ( (  digit1132 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1133 ) ) );
}

static  struct Maybe_49   next511 (    struct StrConcatIter_447 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next510 (    struct Zip_446 *  self708 ) {
    struct Zip_446  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next511 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next511 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_386   next518 (    struct Zip_450 *  self708 ) {
    struct Zip_450  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next509 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next509 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next521 (    struct StrConcatIter_454 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next509 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next520 (    struct StrConcatIter_453 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next521 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next519 (    struct Zip_452 *  self708 ) {
    struct Zip_452  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next520 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next520 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next525 (    struct StrConcatIter_459 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next511 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next524 (    struct StrCaseIter_458 *  self1216 ) {
    struct StrCaseIter_458 *  dref1217 = (  self1216 );
    if ( (* dref1217 ).tag == StrCaseIter_458_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_458_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1217 ).tag == StrCaseIter_458_StrCaseIter2_t ) {
        return ( (  next525 ) ( ( & ( (* dref1217 ) .stuff .StrCaseIter_458_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next523 (    struct StrConcatIter_457 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next367 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next524 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next522 (    struct Zip_456 *  self708 ) {
    struct Zip_456  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next523 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next523 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next527 (    struct StrConcatIter_462 *  self1194 ) {
    struct Maybe_49  dref1195 = ( (  next525 ) ( ( & ( ( * (  self1194 ) ) .f_left ) ) ) );
    if ( dref1195.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1195 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1195.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1194 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next526 (    struct Zip_461 *  self708 ) {
    struct Zip_461  copy709 = ( * (  self708 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref710 = ( (  next527 ) ( ( & ( (  copy709 ) .f_left_dash_it ) ) ) );
        if ( dref710.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref710.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref712 = ( (  next389 ) ( ( & ( (  copy709 ) .f_right_dash_it ) ) ) );
            if ( dref712.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref712.tag == Maybe_369_Just_t ) {
                ( (  next527 ) ( ( & ( ( * (  self708 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self708 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref710 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref712 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_384   zip528 (    struct Slice_322  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_321  left_dash_it719 = ( (  into_dash_iter325 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct Zip_380   zip529 (    struct Slice_5  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_330  left_dash_it719 = ( (  into_dash_iter334 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct Zip_380   zip530 (    struct List_3  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_330  left_dash_it719 = ( (  into_dash_iter333 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct Zip_384   zip531 (    struct List_323  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_321  left_dash_it719 = ( (  into_dash_iter324 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct SliceIter_409   into_dash_iter533 (    struct Slice_410  self1491 ) {
    return ( (struct SliceIter_409) { .f_slice = (  self1491 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_408   zip532 (    struct Slice_410  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_409  left_dash_it719 = ( (  into_dash_iter533 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_408) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct SliceIter_413   into_dash_iter535 (    struct Slice_161  self1491 ) {
    return ( (struct SliceIter_413) { .f_slice = (  self1491 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_412   zip534 (    struct Slice_161  left716 ,    struct FromIter_381  right718 ) {
    struct SliceIter_413  left_dash_it719 = ( (  into_dash_iter535 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_412) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct Zip_415   zip536 (    struct Slice_5  left716 ,    struct Slice_5  right718 ) {
    struct SliceIter_330  left_dash_it719 = ( (  into_dash_iter334 ) ( (  left716 ) ) );
    struct SliceIter_330  right_dash_it720 = ( (  into_dash_iter334 ) ( (  right718 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct IntStrIter_418   into_dash_iter538 (    struct IntStrIter_418  self1125 ) {
    return (  self1125 );
}

static  struct Zip_417   zip537 (    struct IntStrIter_418  left716 ,    struct FromIter_381  right718 ) {
    struct IntStrIter_418  left_dash_it719 = ( (  into_dash_iter538 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_421   into_dash_iter540 (    struct StrConcatIter_421  self1191 ) {
    return (  self1191 );
}

static  struct Zip_420   zip539 (    struct StrConcatIter_421  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_421  left_dash_it719 = ( (  into_dash_iter540 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_428   into_dash_iter542 (    struct StrConcatIter_428  self1191 ) {
    return (  self1191 );
}

static  struct Zip_427   zip541 (    struct StrConcatIter_428  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_428  left_dash_it719 = ( (  into_dash_iter542 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_427) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_432   into_dash_iter544 (    struct StrConcatIter_432  self1191 ) {
    return (  self1191 );
}

static  struct Zip_431   zip543 (    struct StrConcatIter_432  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_432  left_dash_it719 = ( (  into_dash_iter544 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_431) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_442   into_dash_iter546 (    struct StrConcatIter_442  self1191 ) {
    return (  self1191 );
}

static  struct Zip_441   zip545 (    struct StrConcatIter_442  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_442  left_dash_it719 = ( (  into_dash_iter546 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_441) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_447   into_dash_iter548 (    struct StrConcatIter_447  self1191 ) {
    return (  self1191 );
}

static  struct Zip_446   zip547 (    struct StrConcatIter_447  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_447  left_dash_it719 = ( (  into_dash_iter548 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_446) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_444   into_dash_iter550 (    struct StrConcatIter_444  self1191 ) {
    return (  self1191 );
}

static  struct Zip_450   zip549 (    struct StrConcatIter_444  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_444  left_dash_it719 = ( (  into_dash_iter550 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_450) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_453   into_dash_iter552 (    struct StrConcatIter_453  self1191 ) {
    return (  self1191 );
}

static  struct Zip_452   zip551 (    struct StrConcatIter_453  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_453  left_dash_it719 = ( (  into_dash_iter552 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_452) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_457   into_dash_iter554 (    struct StrConcatIter_457  self1191 ) {
    return (  self1191 );
}

static  struct Zip_456   zip553 (    struct StrConcatIter_457  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_457  left_dash_it719 = ( (  into_dash_iter554 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_456) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

static  struct StrConcatIter_462   into_dash_iter556 (    struct StrConcatIter_462  self1191 ) {
    return (  self1191 );
}

static  struct Zip_461   zip555 (    struct StrConcatIter_462  left716 ,    struct FromIter_381  right718 ) {
    struct StrConcatIter_462  left_dash_it719 = ( (  into_dash_iter556 ) ( (  left716 ) ) );
    struct FromIter_381  right_dash_it720 = ( (  into_dash_iter406 ) ( (  right718 ) ) );
    return ( (struct Zip_461) { .f_left_dash_it = (  left_dash_it719 ) , .f_right_dash_it = (  right_dash_it720 ) } );
}

struct TakeWhile_558 {
    struct Scanner_329  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_558   into_dash_iter557 (    struct TakeWhile_558  self755 ) {
    return (  self755 );
}

struct TakeWhile_560 {
    struct SliceIter_330  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_560   into_dash_iter559 (    struct TakeWhile_560  self755 ) {
    return (  self755 );
}

struct DropWhile_565 {
    struct SliceIter_330  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_564 {
    struct DropWhile_565  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_563 {
    struct DropWhile_564  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_562 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_562   into_dash_iter561 (    struct TakeWhile_562  self755 ) {
    return (  self755 );
}

struct TakeWhile_567 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_567   into_dash_iter566 (    struct TakeWhile_567  self755 ) {
    return (  self755 );
}

struct TakeWhile_569 {
    struct DropWhile_565  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_569   into_dash_iter568 (    struct TakeWhile_569  self755 ) {
    return (  self755 );
}

static  struct Maybe_49   next571 (    struct Scanner_329 *  self2566 ) {
    return ( (  next371 ) ( ( & ( ( * (  self2566 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next570 (    struct TakeWhile_558 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next571 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next572 (    struct TakeWhile_560 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next371 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next576 (    struct DropWhile_565 *  self773 ) {
    if ( ( ( * (  self773 ) ) .f_finished ) ) {
        return ( (  next371 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref774 = ( (  next371 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
        if ( dref774.tag == Maybe_49_None_t ) {
            (*  self773 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref774.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self773 ) ) .f_pred ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self773 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next575 (    struct DropWhile_564 *  self773 ) {
    if ( ( ( * (  self773 ) ) .f_finished ) ) {
        return ( (  next576 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref774 = ( (  next576 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
        if ( dref774.tag == Maybe_49_None_t ) {
            (*  self773 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref774.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self773 ) ) .f_pred ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self773 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next574 (    struct DropWhile_563 *  self773 ) {
    if ( ( ( * (  self773 ) ) .f_finished ) ) {
        return ( (  next575 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref774 = ( (  next575 ) ( ( & ( ( * (  self773 ) ) .f_it ) ) ) );
        if ( dref774.tag == Maybe_49_None_t ) {
            (*  self773 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref774.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self773 ) ) .f_pred ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self773 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref774 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next573 (    struct TakeWhile_562 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next574 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next577 (    struct TakeWhile_567 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next574 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

struct TakeWhile_579 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next578 (    struct TakeWhile_579 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next574 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next580 (    struct TakeWhile_569 *  self758 ) {
    struct Maybe_49  mx759 = ( (  next576 ) ( ( & ( ( * (  self758 ) ) .f_it ) ) ) );
    struct Maybe_49  dref760 = (  mx759 );
    if ( dref760.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref760.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self758 ) ) .f_pred ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref760 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct TakeWhile_558   take_dash_while581 (    struct Scanner_329 *  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_558) { .f_it = ( (  into_dash_iter328 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct TakeWhile_560   take_dash_while582 (    struct List_3 *  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_560) { .f_it = ( (  into_dash_iter332 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct DropWhile_563   into_dash_iter584 (    struct DropWhile_563  self770 ) {
    return (  self770 );
}

static  struct TakeWhile_562   take_dash_while583 (    struct DropWhile_563  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_562) { .f_it = ( (  into_dash_iter584 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct DropWhile_565   into_dash_iter586 (    struct DropWhile_565  self770 ) {
    return (  self770 );
}

static  struct TakeWhile_569   take_dash_while585 (    struct DropWhile_565  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_569) { .f_it = ( (  into_dash_iter586 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct TakeWhile_567   take_dash_while587 (    struct DropWhile_563  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_567) { .f_it = ( (  into_dash_iter584 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct TakeWhile_579   take_dash_while588 (    struct DropWhile_563  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct TakeWhile_579) { .f_it = ( (  into_dash_iter584 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) } );
}

static  struct DropWhile_564   into_dash_iter589 (    struct DropWhile_564  self770 ) {
    return (  self770 );
}

static  struct DropWhile_565   drop_dash_while590 (    struct List_3 *  it778 ,    bool (*  pred780 )(    char  ) ) {
    return ( (struct DropWhile_565) { .f_it = ( (  into_dash_iter332 ) ( (  it778 ) ) ) , .f_pred = (  pred780 ) , .f_finished = ( false ) } );
}

static  struct SliceIter_330   into_dash_iter592 (    struct DynStr_136  self1650 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1650 ) .f_contents ) ) );
}

static  struct DropWhile_565   drop_dash_while591 (    struct DynStr_136  it778 ,    bool (*  pred780 )(    char  ) ) {
    return ( (struct DropWhile_565) { .f_it = ( (  into_dash_iter592 ) ( (  it778 ) ) ) , .f_pred = (  pred780 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_564   drop_dash_while593 (    struct DropWhile_565  it778 ,    bool (*  pred780 )(    char  ) ) {
    return ( (struct DropWhile_564) { .f_it = ( (  into_dash_iter586 ) ( (  it778 ) ) ) , .f_pred = (  pred780 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_563   drop_dash_while594 (    struct DropWhile_564  it778 ,    bool (*  pred780 )(    char  ) ) {
    return ( (struct DropWhile_563) { .f_it = ( (  into_dash_iter589 ) ( (  it778 ) ) ) , .f_pred = (  pred780 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_425   append595 (    enum EmptyIter_337  it800 ,    char  e802 ) {
    return ( (struct AppendIter_425) { .f_it = ( (  into_dash_iter338 ) ( (  it800 ) ) ) , .f_elem = (  e802 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_425   cons596 (    enum EmptyIter_337  it805 ,    char  e807 ) {
    return ( (  append595 ) ( (  it805 ) ,  (  e807 ) ) );
}

static  struct AppendIter_425   single597 (    char  e810 ) {
    return ( (  cons596 ) ( ( (  nil336 ) ( ) ) ,  (  e810 ) ) );
}

static  struct AppendIter_425   into_dash_iter598 (    struct AppendIter_425  self813 ) {
    return (  self813 );
}

struct Key_603 {
    enum {
        Key_603_Escape_t,
        Key_603_Enter_t,
        Key_603_Tab_t,
        Key_603_Backspace_t,
        Key_603_Char_t,
        Key_603_Ctrl_t,
        Key_603_Up_t,
        Key_603_Down_t,
        Key_603_Left_t,
        Key_603_Right_t,
        Key_603_Home_t,
        Key_603_End_t,
        Key_603_PageUp_t,
        Key_603_PageDown_t,
        Key_603_Delete_t,
        Key_603_Insert_t,
        Key_603_F1_t,
        Key_603_F2_t,
        Key_603_F3_t,
        Key_603_F4_t,
        Key_603_F5_t,
        Key_603_F6_t,
        Key_603_F7_t,
        Key_603_F8_t,
        Key_603_F9_t,
        Key_603_F10_t,
        Key_603_F11_t,
        Key_603_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_603_Char_s;
        struct {
            char  field0;
        } Key_603_Ctrl_s;
    } stuff;
};

static struct Key_603 Key_603_Char (  char  field0 ) {
    return ( struct Key_603 ) { .tag = Key_603_Char_t, .stuff = { .Key_603_Char_s = { .field0 = field0 } } };
};

static struct Key_603 Key_603_Ctrl (  char  field0 ) {
    return ( struct Key_603 ) { .tag = Key_603_Ctrl_t, .stuff = { .Key_603_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_604 {
    enum MouseButton_149  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_602 {
    enum {
        InputEvent_602_Key_t,
        InputEvent_602_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_603  field0;
        } InputEvent_602_Key_s;
        struct {
            struct MouseEvent_604  field0;
        } InputEvent_602_Mouse_s;
    } stuff;
};

static struct InputEvent_602 InputEvent_602_Key (  struct Key_603  field0 ) {
    return ( struct InputEvent_602 ) { .tag = InputEvent_602_Key_t, .stuff = { .InputEvent_602_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_602 InputEvent_602_Mouse (  struct MouseEvent_604  field0 ) {
    return ( struct InputEvent_602 ) { .tag = InputEvent_602_Mouse_t, .stuff = { .InputEvent_602_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_601 {
    enum {
        Maybe_601_None_t,
        Maybe_601_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_602  field0;
        } Maybe_601_Just_s;
    } stuff;
};

static struct Maybe_601 Maybe_601_Just (  struct InputEvent_602  field0 ) {
    return ( struct Maybe_601 ) { .tag = Maybe_601_Just_t, .stuff = { .Maybe_601_Just_s = { .field0 = field0 } } };
};

struct FunIter_600 {
    struct Maybe_601 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_600   into_dash_iter599 (    struct FunIter_600  self822 ) {
    return (  self822 );
}

static  struct Maybe_601   next605 (    struct FunIter_600 *  self825 ) {
    if ( ( ( * (  self825 ) ) .f_finished ) ) {
        return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
    }
    struct Maybe_601  dref826 = ( ( ( * (  self825 ) ) .f_fun ) ( ) );
    if ( dref826.tag == Maybe_601_Just_t ) {
        return ( ( Maybe_601_Just ) ( ( dref826 .stuff .Maybe_601_Just_s .field0 ) ) );
    }
    else if ( dref826.tag == Maybe_601_None_t ) {
        (*  self825 ) .f_finished = ( true );
        return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
    }
}

static  struct FunIter_600   from_dash_function606 (    struct Maybe_601 (*  fun830 )(  ) ) {
    return ( (struct FunIter_600) { .f_fun = (  fun830 ) , .f_finished = ( false ) } );
}

struct env608 {
    struct Slice_322  new_dash_slice1888;
    ;
    ;
};

struct funenv608 {
    enum Unit_13  (*fun) (  struct env608  ,    struct Tuple2_392  );
    struct env608 env;
};

static  enum Unit_13   for_dash_each607 (    struct Zip_384  iterable833 ,   struct funenv608  fun835 ) {
    struct Zip_384  temp609 = ( (  into_dash_iter398 ) ( (  iterable833 ) ) );
    struct Zip_384 *  it836 = ( &temp609 );
    while ( ( true ) ) {
        struct Maybe_391  dref837 = ( (  next393 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_391_Just_t ) {
            struct funenv608  temp610 = (  fun835 );
            ( temp610.fun ( temp610.env ,  ( dref837 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env612 {
    struct Slice_5  new_dash_slice1888;
    ;
    ;
};

struct funenv612 {
    enum Unit_13  (*fun) (  struct env612  ,    struct Tuple2_387  );
    struct env612 env;
};

static  enum Unit_13   for_dash_each611 (    struct Zip_380  iterable833 ,   struct funenv612  fun835 ) {
    struct Zip_380  temp613 = ( (  into_dash_iter396 ) ( (  iterable833 ) ) );
    struct Zip_380 *  it836 = ( &temp613 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next388 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv612  temp614 = (  fun835 );
            ( temp614.fun ( temp614.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env616 {
    struct env346 envinst346;
    struct List_3 *  list1935;
};

struct funenv616 {
    enum Unit_13  (*fun) (  struct env616  ,    char  );
    struct env616 env;
};

static  enum Unit_13   for_dash_each615 (    struct DynStr_136  iterable833 ,   struct funenv616  fun835 ) {
    struct SliceIter_330  temp617 = ( (  into_dash_iter592 ) ( (  iterable833 ) ) );
    struct SliceIter_330 *  it836 = ( &temp617 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next371 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv616  temp618 = (  fun835 );
            ( temp618.fun ( temp618.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env622 {
    size_t  growth_dash_factor1883;
    ;
    ;
    size_t  starting_dash_size1882;
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

struct funenv622 {
    enum Unit_13  (*fun) (  struct env622  ,    struct List_323 *  );
    struct env622 env;
};

struct env621 {
    ;
    ;
    ;
    ;
    ;
    struct env622 envinst622;
};

struct funenv621 {
    enum Unit_13  (*fun) (  struct env621  ,    struct List_323 *  ,    struct List_3  );
    struct env621 env;
};

struct env620 {
    struct env621 envinst621;
    struct List_323 *  list1935;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    struct List_3  );
    struct env620 env;
};

static  enum Unit_13   for_dash_each619 (    struct Map_341  iterable833 ,   struct funenv620  fun835 ) {
    struct Map_341  temp623 = ( (  into_dash_iter340 ) ( (  iterable833 ) ) );
    struct Map_341 *  it836 = ( &temp623 );
    while ( ( true ) ) {
        struct Maybe_355  dref837 = ( (  next354 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_355_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_355_Just_t ) {
            struct funenv620  temp624 = (  fun835 );
            ( temp624.fun ( temp624.env ,  ( dref837 .stuff .Maybe_355_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_627 {
    struct List_3  f_chars;
};

struct env626 {
    struct StrBuilder_627 *  builder2177;
    struct env346 envinst346;
};

struct funenv626 {
    enum Unit_13  (*fun) (  struct env626  ,    char  );
    struct env626 env;
};

static  struct ConstStrIter_350   into_dash_iter629 (    struct ConstStrIter_350  self1099 ) {
    return (  self1099 );
}

static  enum Unit_13   for_dash_each625 (    struct ConstStrIter_350  iterable833 ,   struct funenv626  fun835 ) {
    struct ConstStrIter_350  temp628 = ( (  into_dash_iter629 ) ( (  iterable833 ) ) );
    struct ConstStrIter_350 *  it836 = ( &temp628 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next367 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv626  temp630 = (  fun835 );
            ( temp630.fun ( temp630.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_633 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env632 {
    struct Cell_58 (*  fun1576 )(    struct Cell_58  );
    ;
    ;
    ;
    struct Slice_633  s1574;
};

struct funenv632 {
    enum Unit_13  (*fun) (  struct env632  ,    int32_t  );
    struct env632 env;
};

static  enum Unit_13   for_dash_each631 (    struct Range_401  iterable833 ,   struct funenv632  fun835 ) {
    struct RangeIter_403  temp634 = ( (  into_dash_iter402 ) ( (  iterable833 ) ) );
    struct RangeIter_403 *  it836 = ( &temp634 );
    while ( ( true ) ) {
        struct Maybe_369  dref837 = ( (  next404 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_369_Just_t ) {
            struct funenv632  temp635 = (  fun835 );
            ( temp635.fun ( temp635.env ,  ( dref837 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env637 {
    struct Cell_58 (*  fun1576 )(    struct Cell_58  );
    ;
    ;
    ;
    struct Slice_633  s1574;
};

struct funenv637 {
    enum Unit_13  (*fun) (  struct env637  ,    int32_t  );
    struct env637 env;
};

static  enum Unit_13   for_dash_each636 (    struct Range_401  iterable833 ,   struct funenv637  fun835 ) {
    struct RangeIter_403  temp638 = ( (  into_dash_iter402 ) ( (  iterable833 ) ) );
    struct RangeIter_403 *  it836 = ( &temp638 );
    while ( ( true ) ) {
        struct Maybe_369  dref837 = ( (  next404 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_369_Just_t ) {
            struct funenv637  temp639 = (  fun835 );
            ( temp639.fun ( temp639.env ,  ( dref837 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env641 {
    struct Scanner_329 *  it939;
    ;
};

struct funenv641 {
    struct Maybe_49  (*fun) (  struct env641  ,    int32_t  );
    struct env641 env;
};

static  enum Unit_13   for_dash_each640 (    struct Range_401  iterable833 ,   struct funenv641  fun835 ) {
    struct RangeIter_403  temp642 = ( (  into_dash_iter402 ) ( (  iterable833 ) ) );
    struct RangeIter_403 *  it836 = ( &temp642 );
    while ( ( true ) ) {
        struct Maybe_369  dref837 = ( (  next404 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_369_Just_t ) {
            struct funenv641  temp643 = (  fun835 );
            ( temp643.fun ( temp643.env ,  ( dref837 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env645 {
    struct Slice_5  dest1522;
    ;
    ;
};

struct funenv645 {
    enum Unit_13  (*fun) (  struct env645  ,    struct Tuple2_387  );
    struct env645 env;
};

static  enum Unit_13   for_dash_each644 (    struct Zip_380  iterable833 ,   struct funenv645  fun835 ) {
    struct Zip_380  temp646 = ( (  into_dash_iter396 ) ( (  iterable833 ) ) );
    struct Zip_380 *  it836 = ( &temp646 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next388 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv645  temp647 = (  fun835 );
            ( temp647.fun ( temp647.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env649 {
    ;
    ;
    ;
    struct List_3 *  list1907;
    ;
};

struct funenv649 {
    enum Unit_13  (*fun) (  struct env649  ,    struct Tuple2_387  );
    struct env649 env;
};

static  enum Unit_13   for_dash_each648 (    struct Drop_379  iterable833 ,   struct funenv649  fun835 ) {
    struct Drop_379  temp650 = ( (  into_dash_iter378 ) ( (  iterable833 ) ) );
    struct Drop_379 *  it836 = ( &temp650 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next385 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv649  temp651 = (  fun835 );
            ( temp651.fun ( temp651.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env653 {
    struct env346 envinst346;
    struct List_3 *  list1935;
};

struct funenv653 {
    enum Unit_13  (*fun) (  struct env653  ,    char  );
    struct env653 env;
};

static  enum Unit_13   for_dash_each652 (    struct Slice_5  iterable833 ,   struct funenv653  fun835 ) {
    struct SliceIter_330  temp654 = ( (  into_dash_iter334 ) ( (  iterable833 ) ) );
    struct SliceIter_330 *  it836 = ( &temp654 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next371 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv653  temp655 = (  fun835 );
            ( temp655.fun ( temp655.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env657 {
    struct env346 envinst346;
    struct List_3 *  list1935;
};

struct funenv657 {
    enum Unit_13  (*fun) (  struct env657  ,    char  );
    struct env657 env;
};

static  enum Unit_13   for_dash_each656 (    struct List_3 *  iterable833 ,   struct funenv657  fun835 ) {
    struct SliceIter_330  temp658 = ( (  into_dash_iter332 ) ( (  iterable833 ) ) );
    struct SliceIter_330 *  it836 = ( &temp658 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next371 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv657  temp659 = (  fun835 );
            ( temp659.fun ( temp659.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env661 {
    struct Slice_322  dest1522;
    ;
    ;
};

struct funenv661 {
    enum Unit_13  (*fun) (  struct env661  ,    struct Tuple2_392  );
    struct env661 env;
};

static  enum Unit_13   for_dash_each660 (    struct Zip_384  iterable833 ,   struct funenv661  fun835 ) {
    struct Zip_384  temp662 = ( (  into_dash_iter398 ) ( (  iterable833 ) ) );
    struct Zip_384 *  it836 = ( &temp662 );
    while ( ( true ) ) {
        struct Maybe_391  dref837 = ( (  next393 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_391_Just_t ) {
            struct funenv661  temp663 = (  fun835 );
            ( temp663.fun ( temp663.env ,  ( dref837 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env665 {
    ;
    ;
    ;
    struct List_323 *  list1907;
    ;
};

struct funenv665 {
    enum Unit_13  (*fun) (  struct env665  ,    struct Tuple2_392  );
    struct env665 env;
};

static  enum Unit_13   for_dash_each664 (    struct Drop_383  iterable833 ,   struct funenv665  fun835 ) {
    struct Drop_383  temp666 = ( (  into_dash_iter382 ) ( (  iterable833 ) ) );
    struct Drop_383 *  it836 = ( &temp666 );
    while ( ( true ) ) {
        struct Maybe_391  dref837 = ( (  next390 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_391_Just_t ) {
            struct funenv665  temp667 = (  fun835 );
            ( temp667.fun ( temp667.env ,  ( dref837 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env669 {
    struct Slice_410  new_dash_slice1888;
    ;
    ;
};

struct funenv669 {
    enum Unit_13  (*fun) (  struct env669  ,    struct Tuple2_465  );
    struct env669 env;
};

static  enum Unit_13   for_dash_each668 (    struct Zip_408  iterable833 ,   struct funenv669  fun835 ) {
    struct Zip_408  temp670 = ( (  into_dash_iter407 ) ( (  iterable833 ) ) );
    struct Zip_408 *  it836 = ( &temp670 );
    while ( ( true ) ) {
        struct Maybe_464  dref837 = ( (  next463 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_464_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_464_Just_t ) {
            struct funenv669  temp671 = (  fun835 );
            ( temp671.fun ( temp671.env ,  ( dref837 .stuff .Maybe_464_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env673 {
    struct Slice_161  new_dash_slice1888;
    ;
    ;
};

struct funenv673 {
    enum Unit_13  (*fun) (  struct env673  ,    struct Tuple2_470  );
    struct env673 env;
};

static  enum Unit_13   for_dash_each672 (    struct Zip_412  iterable833 ,   struct funenv673  fun835 ) {
    struct Zip_412  temp674 = ( (  into_dash_iter411 ) ( (  iterable833 ) ) );
    struct Zip_412 *  it836 = ( &temp674 );
    while ( ( true ) ) {
        struct Maybe_469  dref837 = ( (  next468 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_469_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_469_Just_t ) {
            struct funenv673  temp675 = (  fun835 );
            ( temp675.fun ( temp675.env ,  ( dref837 .stuff .Maybe_469_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env677 {
    ;
    enum CAllocator_4  al3095;
};

struct funenv677 {
    enum Unit_13  (*fun) (  struct env677  ,    struct Action_152  );
    struct env677 env;
};

static  enum Unit_13   for_dash_each676 (    struct Slice_161  iterable833 ,   struct funenv677  fun835 ) {
    struct SliceIter_413  temp678 = ( (  into_dash_iter535 ) ( (  iterable833 ) ) );
    struct SliceIter_413 *  it836 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_471  dref837 = ( (  next472 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_471_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_471_Just_t ) {
            struct funenv677  temp679 = (  fun835 );
            ( temp679.fun ( temp679.env ,  ( dref837 .stuff .Maybe_471_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env681 {
    ;
    enum CAllocator_4  al3115;
};

struct funenv681 {
    enum Unit_13  (*fun) (  struct env681  ,    struct Either_182  );
    struct env681 env;
};

static  enum Unit_13   for_dash_each680 (    struct Slice_410  iterable833 ,   struct funenv681  fun835 ) {
    struct SliceIter_409  temp682 = ( (  into_dash_iter533 ) ( (  iterable833 ) ) );
    struct SliceIter_409 *  it836 = ( &temp682 );
    while ( ( true ) ) {
        struct Maybe_466  dref837 = ( (  next467 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_466_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_466_Just_t ) {
            struct funenv681  temp683 = (  fun835 );
            ( temp683.fun ( temp683.env ,  ( dref837 .stuff .Maybe_466_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env685 {
    struct StrBuilder_627 *  builder2177;
    struct env346 envinst346;
};

struct funenv685 {
    enum Unit_13  (*fun) (  struct env685  ,    char  );
    struct env685 env;
};

static  enum Unit_13   for_dash_each684 (    struct AppendIter_425  iterable833 ,   struct funenv685  fun835 ) {
    struct AppendIter_425  temp686 = ( (  into_dash_iter598 ) ( (  iterable833 ) ) );
    struct AppendIter_425 *  it836 = ( &temp686 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next488 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv685  temp687 = (  fun835 );
            ( temp687.fun ( temp687.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env689 {
    struct env346 envinst346;
    struct List_3 *  list1935;
};

struct funenv689 {
    enum Unit_13  (*fun) (  struct env689  ,    char  );
    struct env689 env;
};

static  enum Unit_13   for_dash_each688 (    struct TakeWhile_560  iterable833 ,   struct funenv689  fun835 ) {
    struct TakeWhile_560  temp690 = ( (  into_dash_iter559 ) ( (  iterable833 ) ) );
    struct TakeWhile_560 *  it836 = ( &temp690 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next572 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv689  temp691 = (  fun835 );
            ( temp691.fun ( temp691.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env693 {
    struct StrBuilder_627 *  builder2177;
    struct env346 envinst346;
};

struct funenv693 {
    enum Unit_13  (*fun) (  struct env693  ,    char  );
    struct env693 env;
};

static  struct StrConcatIter_439   into_dash_iter695 (    struct StrConcatIter_439  self1191 ) {
    return (  self1191 );
}

static  enum Unit_13   for_dash_each692 (    struct StrConcatIter_439  iterable833 ,   struct funenv693  fun835 ) {
    struct StrConcatIter_439  temp694 = ( (  into_dash_iter695 ) ( (  iterable833 ) ) );
    struct StrConcatIter_439 *  it836 = ( &temp694 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next505 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv693  temp696 = (  fun835 );
            ( temp696.fun ( temp696.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env698 {
    struct StrBuilder_627 *  builder2177;
    struct env346 envinst346;
};

struct funenv698 {
    enum Unit_13  (*fun) (  struct env698  ,    char  );
    struct env698 env;
};

static  enum Unit_13   for_dash_each697 (    struct TakeWhile_562  iterable833 ,   struct funenv698  fun835 ) {
    struct TakeWhile_562  temp699 = ( (  into_dash_iter561 ) ( (  iterable833 ) ) );
    struct TakeWhile_562 *  it836 = ( &temp699 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next573 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv698  temp700 = (  fun835 );
            ( temp700.fun ( temp700.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env702 {
    struct StrBuilder_627 *  builder2177;
    struct env346 envinst346;
};

struct funenv702 {
    enum Unit_13  (*fun) (  struct env702  ,    char  );
    struct env702 env;
};

static  enum Unit_13   for_dash_each701 (    struct TakeWhile_567  iterable833 ,   struct funenv702  fun835 ) {
    struct TakeWhile_567  temp703 = ( (  into_dash_iter566 ) ( (  iterable833 ) ) );
    struct TakeWhile_567 *  it836 = ( &temp703 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next577 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv702  temp704 = (  fun835 );
            ( temp704.fun ( temp704.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_706 {
    struct Slice_322  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_706   into_dash_iter708 (    struct SliceAddressIter_706  self1512 ) {
    return (  self1512 );
}

struct Maybe_709 {
    enum {
        Maybe_709_None_t,
        Maybe_709_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_709_Just_s;
    } stuff;
};

static struct Maybe_709 Maybe_709_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_709 ) { .tag = Maybe_709_Just_t, .stuff = { .Maybe_709_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_709   next710 (    struct SliceAddressIter_706 *  self1515 ) {
    size_t  off1516 = ( ( * (  self1515 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1516 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1515 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_709) { .tag = Maybe_709_None_t } );
    }
    struct List_3 *  elem1517 = ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1515 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1516 ) ) ) ) );
    (*  self1515 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1516 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_709_Just ) ( (  elem1517 ) ) );
}

static  enum Unit_13   for_dash_each705 (    struct SliceAddressIter_706  iterable833 ,    enum Unit_13 (*  fun835 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_706  temp707 = ( (  into_dash_iter708 ) ( (  iterable833 ) ) );
    struct SliceAddressIter_706 *  it836 = ( &temp707 );
    while ( ( true ) ) {
        struct Maybe_709  dref837 = ( (  next710 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_709_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_709_Just_t ) {
            ( (  fun835 ) ( ( dref837 .stuff .Maybe_709_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env713 {
    ;
    struct env346 envinst346;
    ;
};

struct funenv713 {
    enum Unit_13  (*fun) (  struct env713  ,    struct StrBuilder_627 *  ,    char  );
    struct env713 env;
};

struct env712 {
    struct env713 envinst713;
    struct StrBuilder_627 *  sb3374;
};

struct funenv712 {
    enum Unit_13  (*fun) (  struct env712  ,    char  );
    struct env712 env;
};

static  enum Unit_13   for_dash_each711 (    struct List_3  iterable833 ,   struct funenv712  fun835 ) {
    struct SliceIter_330  temp714 = ( (  into_dash_iter333 ) ( (  iterable833 ) ) );
    struct SliceIter_330 *  it836 = ( &temp714 );
    while ( ( true ) ) {
        struct Maybe_49  dref837 = ( (  next371 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_49_Just_t ) {
            struct funenv712  temp715 = (  fun835 );
            ( temp715.fun ( temp715.env ,  ( dref837 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env717 {
    struct Cell_58 (*  fun1576 )(    struct Cell_58  );
    ;
    ;
    ;
    struct Slice_633  s1574;
};

struct funenv717 {
    enum Unit_13  (*fun) (  struct env717  ,    int32_t  );
    struct env717 env;
};

static  enum Unit_13   for_dash_each716 (    struct Range_401  iterable833 ,   struct funenv717  fun835 ) {
    struct RangeIter_403  temp718 = ( (  into_dash_iter402 ) ( (  iterable833 ) ) );
    struct RangeIter_403 *  it836 = ( &temp718 );
    while ( ( true ) ) {
        struct Maybe_369  dref837 = ( (  next404 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_369_Just_t ) {
            struct funenv717  temp719 = (  fun835 );
            ( temp719.fun ( temp719.env ,  ( dref837 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_724 {
    ColorPalette_724_Palette8,
    ColorPalette_724_Palette16,
    ColorPalette_724_Palette256,
    ColorPalette_724_PaletteRGB,
};

struct Tui_723 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_724  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_141  f_orig_dash_termios;
};

struct Screen_722 {
    enum CAllocator_4  f_al;
    struct Tui_723 *  f_tui;
    struct Slice_633  f_current;
    struct Slice_633  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_59  f_default_dash_fg;
    struct Color_59  f_default_dash_bg;
};

struct env721 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv721 {
    enum Unit_13  (*fun) (  struct env721  ,    struct Tuple2_387  );
    struct env721 env;
};

static  enum Unit_13   for_dash_each720 (    struct Zip_417  iterable833 ,   struct funenv721  fun835 ) {
    struct Zip_417  temp725 = ( (  into_dash_iter416 ) ( (  iterable833 ) ) );
    struct Zip_417 *  it836 = ( &temp725 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next476 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv721  temp726 = (  fun835 );
            ( temp726.fun ( temp726.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env728 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv728 {
    enum Unit_13  (*fun) (  struct env728  ,    struct Tuple2_387  );
    struct env728 env;
};

static  enum Unit_13   for_dash_each727 (    struct Zip_420  iterable833 ,   struct funenv728  fun835 ) {
    struct Zip_420  temp729 = ( (  into_dash_iter419 ) ( (  iterable833 ) ) );
    struct Zip_420 *  it836 = ( &temp729 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next483 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv728  temp730 = (  fun835 );
            ( temp730.fun ( temp730.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env732 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv732 {
    enum Unit_13  (*fun) (  struct env732  ,    struct Tuple2_387  );
    struct env732 env;
};

static  enum Unit_13   for_dash_each731 (    struct Zip_427  iterable833 ,   struct funenv732  fun835 ) {
    struct Zip_427  temp733 = ( (  into_dash_iter426 ) ( (  iterable833 ) ) );
    struct Zip_427 *  it836 = ( &temp733 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next489 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv732  temp734 = (  fun835 );
            ( temp734.fun ( temp734.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env736 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv736 {
    enum Unit_13  (*fun) (  struct env736  ,    struct Tuple2_387  );
    struct env736 env;
};

static  enum Unit_13   for_dash_each735 (    struct Zip_431  iterable833 ,   struct funenv736  fun835 ) {
    struct Zip_431  temp737 = ( (  into_dash_iter430 ) ( (  iterable833 ) ) );
    struct Zip_431 *  it836 = ( &temp737 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next497 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv736  temp738 = (  fun835 );
            ( temp738.fun ( temp738.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env740 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv740 {
    enum Unit_13  (*fun) (  struct env740  ,    struct Tuple2_387  );
    struct env740 env;
};

static  enum Unit_13   for_dash_each739 (    struct Zip_441  iterable833 ,   struct funenv740  fun835 ) {
    struct Zip_441  temp741 = ( (  into_dash_iter440 ) ( (  iterable833 ) ) );
    struct Zip_441 *  it836 = ( &temp741 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next506 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv740  temp742 = (  fun835 );
            ( temp742.fun ( temp742.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env744 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv744 {
    enum Unit_13  (*fun) (  struct env744  ,    struct Tuple2_387  );
    struct env744 env;
};

static  enum Unit_13   for_dash_each743 (    struct Zip_446  iterable833 ,   struct funenv744  fun835 ) {
    struct Zip_446  temp745 = ( (  into_dash_iter445 ) ( (  iterable833 ) ) );
    struct Zip_446 *  it836 = ( &temp745 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next510 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv744  temp746 = (  fun835 );
            ( temp746.fun ( temp746.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env748 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv748 {
    enum Unit_13  (*fun) (  struct env748  ,    struct Tuple2_387  );
    struct env748 env;
};

static  enum Unit_13   for_dash_each747 (    struct Zip_450  iterable833 ,   struct funenv748  fun835 ) {
    struct Zip_450  temp749 = ( (  into_dash_iter449 ) ( (  iterable833 ) ) );
    struct Zip_450 *  it836 = ( &temp749 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next518 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv748  temp750 = (  fun835 );
            ( temp750.fun ( temp750.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env752 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv752 {
    enum Unit_13  (*fun) (  struct env752  ,    struct Tuple2_387  );
    struct env752 env;
};

static  enum Unit_13   for_dash_each751 (    struct Zip_452  iterable833 ,   struct funenv752  fun835 ) {
    struct Zip_452  temp753 = ( (  into_dash_iter451 ) ( (  iterable833 ) ) );
    struct Zip_452 *  it836 = ( &temp753 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next519 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv752  temp754 = (  fun835 );
            ( temp754.fun ( temp754.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env756 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv756 {
    enum Unit_13  (*fun) (  struct env756  ,    struct Tuple2_387  );
    struct env756 env;
};

static  enum Unit_13   for_dash_each755 (    struct Zip_420  iterable833 ,   struct funenv756  fun835 ) {
    struct Zip_420  temp757 = ( (  into_dash_iter419 ) ( (  iterable833 ) ) );
    struct Zip_420 *  it836 = ( &temp757 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next483 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv756  temp758 = (  fun835 );
            ( temp758.fun ( temp758.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env760 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv760 {
    enum Unit_13  (*fun) (  struct env760  ,    struct Tuple2_387  );
    struct env760 env;
};

static  enum Unit_13   for_dash_each759 (    struct Zip_420  iterable833 ,   struct funenv760  fun835 ) {
    struct Zip_420  temp761 = ( (  into_dash_iter419 ) ( (  iterable833 ) ) );
    struct Zip_420 *  it836 = ( &temp761 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next483 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv760  temp762 = (  fun835 );
            ( temp762.fun ( temp762.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env764 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv764 {
    enum Unit_13  (*fun) (  struct env764  ,    struct Tuple2_387  );
    struct env764 env;
};

static  enum Unit_13   for_dash_each763 (    struct Zip_456  iterable833 ,   struct funenv764  fun835 ) {
    struct Zip_456  temp765 = ( (  into_dash_iter455 ) ( (  iterable833 ) ) );
    struct Zip_456 *  it836 = ( &temp765 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next522 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv764  temp766 = (  fun835 );
            ( temp766.fun ( temp766.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env768 {
    ;
    int32_t  y2795;
    struct Screen_722 *  screen2789;
    int32_t  x2798;
    ;
};

struct funenv768 {
    enum Unit_13  (*fun) (  struct env768  ,    struct Tuple2_387  );
    struct env768 env;
};

static  enum Unit_13   for_dash_each767 (    struct Zip_461  iterable833 ,   struct funenv768  fun835 ) {
    struct Zip_461  temp769 = ( (  into_dash_iter460 ) ( (  iterable833 ) ) );
    struct Zip_461 *  it836 = ( &temp769 );
    while ( ( true ) ) {
        struct Maybe_386  dref837 = ( (  next526 ) ( (  it836 ) ) );
        if ( dref837.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref837.tag == Maybe_386_Just_t ) {
            struct funenv768  temp770 = (  fun835 );
            ( temp770.fun ( temp770.env ,  ( dref837 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_772 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_772   into_dash_iter773 (    struct SmolArray_103  self1732 ) {
    return ( (struct SmolArrayIter_772) { .f_backing = (  self1732 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_779 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_779 StrConcat_779_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_779 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_778 {
    struct StrConcat_779  field0;
    char  field1;
};

static struct StrConcat_778 StrConcat_778_StrConcat (  struct StrConcat_779  field0 ,  char  field1 ) {
    return ( struct StrConcat_778 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_782 {
    const char*  field0;
    struct StrConcat_778  field1;
};

static struct StrConcat_782 StrConcat_782_StrConcat (  const char*  field0 ,  struct StrConcat_778  field1 ) {
    return ( struct StrConcat_782 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_781 {
    struct StrConcat_782  field0;
    char  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  struct StrConcat_782  field0 ,  char  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str786 (    int32_t  self1140 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1140 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str785 (    struct StrConcat_779  self1203 ) {
    struct StrConcat_779  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str786 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str784 (    struct StrConcat_778  self1203 ) {
    struct StrConcat_778  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str785 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str783 (    struct StrConcat_782  self1203 ) {
    struct StrConcat_782  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str784 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str780 (    struct StrConcat_781  self1203 ) {
    struct StrConcat_781  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str783 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic777 (    struct StrConcat_778  errmsg1380 ) {
    ( (  print_dash_str780 ) ( ( ( StrConcat_781_StrConcat ) ( ( ( StrConcat_782_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr776 (    struct Array_104 *  arr1694 ,    size_t  i1697 ) {
    if ( ( (  cmp9 ( (  i1697 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1697 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic777 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1697 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1698 = ( ( (  cast_dash_ptr240 ) ( (  arr1694 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1698 ) ,  ( (int64_t ) (  i1697 ) ) ) );
}

static  uint32_t   get775 (    struct Array_104 *  arr1701 ,    size_t  i1704 ) {
    return ( * ( (  get_dash_ptr776 ) ( (  arr1701 ) ,  (  i1704 ) ) ) );
}

static  struct Maybe_366   next774 (    struct SmolArrayIter_772 *  self1739 ) {
    if ( (  cmp9 ( ( ( * (  self1739 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1741 = ( (  get775 ) ( ( & ( ( ( * (  self1739 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1739 ) ) .f_cur ) ) );
    (*  self1739 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1739 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1741 ) ) );
}

static  uint32_t   reduce771 (    struct SmolArray_103  iterable852 ,    uint32_t  base854 ,    uint32_t (*  fun856 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x857 = (  base854 );
    struct SmolArrayIter_772  it858 = ( (  into_dash_iter773 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref859 = ( (  next774 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_366_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_366_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_366_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    uint32_t  temp787;
    return (  temp787 );
}

struct SmolArrayIter_789 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_789   into_dash_iter790 (    struct SmolArray_106  self1732 ) {
    return ( (struct SmolArrayIter_789) { .f_backing = (  self1732 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr793 (    struct Array_107 *  arr1694 ,    size_t  i1697 ) {
    if ( ( (  cmp9 ( (  i1697 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1697 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic777 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1697 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1698 = ( ( (  cast_dash_ptr241 ) ( (  arr1694 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1698 ) ,  ( (int64_t ) (  i1697 ) ) ) );
}

static  uint32_t   get792 (    struct Array_107 *  arr1701 ,    size_t  i1704 ) {
    return ( * ( (  get_dash_ptr793 ) ( (  arr1701 ) ,  (  i1704 ) ) ) );
}

static  struct Maybe_366   next791 (    struct SmolArrayIter_789 *  self1739 ) {
    if ( (  cmp9 ( ( ( * (  self1739 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1741 = ( (  get792 ) ( ( & ( ( ( * (  self1739 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1739 ) ) .f_cur ) ) );
    (*  self1739 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1739 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1741 ) ) );
}

static  uint32_t   reduce788 (    struct SmolArray_106  iterable852 ,    uint32_t  base854 ,    uint32_t (*  fun856 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x857 = (  base854 );
    struct SmolArrayIter_789  it858 = ( (  into_dash_iter790 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref859 = ( (  next791 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_366_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_366_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_366_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    uint32_t  temp794;
    return (  temp794 );
}

struct SmolArrayIter_796 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_796   into_dash_iter797 (    struct SmolArray_109  self1732 ) {
    return ( (struct SmolArrayIter_796) { .f_backing = (  self1732 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr800 (    struct Array_110 *  arr1694 ,    size_t  i1697 ) {
    if ( ( (  cmp9 ( (  i1697 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1697 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic777 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1697 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1698 = ( ( (  cast_dash_ptr242 ) ( (  arr1694 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1698 ) ,  ( (int64_t ) (  i1697 ) ) ) );
}

static  uint32_t   get799 (    struct Array_110 *  arr1701 ,    size_t  i1704 ) {
    return ( * ( (  get_dash_ptr800 ) ( (  arr1701 ) ,  (  i1704 ) ) ) );
}

static  struct Maybe_366   next798 (    struct SmolArrayIter_796 *  self1739 ) {
    if ( (  cmp9 ( ( ( * (  self1739 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1741 = ( (  get799 ) ( ( & ( ( ( * (  self1739 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1739 ) ) .f_cur ) ) );
    (*  self1739 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1739 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1741 ) ) );
}

static  uint32_t   reduce795 (    struct SmolArray_109  iterable852 ,    uint32_t  base854 ,    uint32_t (*  fun856 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x857 = (  base854 );
    struct SmolArrayIter_796  it858 = ( (  into_dash_iter797 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref859 = ( (  next798 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_366_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_366_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_366_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    uint32_t  temp801;
    return (  temp801 );
}

static  uint32_t   reduce802 (    struct Map_349  iterable852 ,    uint32_t  base854 ,    uint32_t (*  fun856 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x857 = (  base854 );
    struct Map_349  it858 = ( (  into_dash_iter348 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref859 = ( (  next365 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_366_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_366_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_366_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    uint32_t  temp803;
    return (  temp803 );
}

static  size_t   reduce804 (    struct TakeWhile_558  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct TakeWhile_558  it858 = ( (  into_dash_iter557 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next570 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp805;
    return (  temp805 );
}

struct Maybe_807 {
    enum {
        Maybe_807_None_t,
        Maybe_807_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_807_Just_s;
    } stuff;
};

static struct Maybe_807 Maybe_807_Just (  int64_t  field0 ) {
    return ( struct Maybe_807 ) { .tag = Maybe_807_Just_t, .stuff = { .Maybe_807_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_807   reduce806 (    struct TakeWhile_558  iterable852 ,    struct Maybe_807  base854 ,    struct Maybe_807 (*  fun856 )(    char  ,    struct Maybe_807  ) ) {
    struct Maybe_807  x857 = (  base854 );
    struct TakeWhile_558  it858 = ( (  into_dash_iter557 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next570 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    struct Maybe_807  temp808;
    return (  temp808 );
}

static  int32_t   reduce809 (    struct Map_352  iterable852 ,    int32_t  base854 ,    int32_t (*  fun856 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x857 = (  base854 );
    struct Map_352  it858 = ( (  into_dash_iter351 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref859 = ( (  next368 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_369_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_369_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_369_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    int32_t  temp810;
    return (  temp810 );
}

struct env812 {
    bool (*  fun885 )(    char  );
};

struct funenv812 {
    bool  (*fun) (  struct env812  ,    char  ,    bool  );
    struct env812 env;
};

static  bool   reduce811 (    struct List_3 *  iterable852 ,    bool  base854 ,   struct funenv812  fun856 ) {
    bool  x857 = (  base854 );
    struct SliceIter_330  it858 = ( (  into_dash_iter332 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next371 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            struct funenv812  temp813 = (  fun856 );
            x857 = ( temp813.fun ( temp813.env ,  ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    bool  temp814;
    return (  temp814 );
}

static  size_t   reduce815 (    struct TakeWhile_560  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct TakeWhile_560  it858 = ( (  into_dash_iter559 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next572 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp816;
    return (  temp816 );
}

struct env818 {
    bool (*  fun885 )(    struct Tuple2_475  );
};

struct funenv818 {
    bool  (*fun) (  struct env818  ,    struct Tuple2_475  ,    bool  );
    struct env818 env;
};

static  bool   reduce817 (    struct Zip_415  iterable852 ,    bool  base854 ,   struct funenv818  fun856 ) {
    bool  x857 = (  base854 );
    struct Zip_415  it858 = ( (  into_dash_iter414 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_474  dref859 = ( (  next473 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_474_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_474_Just_t ) {
            struct funenv818  temp819 = (  fun856 );
            x857 = ( temp819.fun ( temp819.env ,  ( dref859 .stuff .Maybe_474_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    bool  temp820;
    return (  temp820 );
}

static  size_t   reduce821 (    struct DynStr_136  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct SliceIter_330  it858 = ( (  into_dash_iter592 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next371 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp822;
    return (  temp822 );
}

static  struct Maybe_807   reduce823 (    struct TakeWhile_569  iterable852 ,    struct Maybe_807  base854 ,    struct Maybe_807 (*  fun856 )(    char  ,    struct Maybe_807  ) ) {
    struct Maybe_807  x857 = (  base854 );
    struct TakeWhile_569  it858 = ( (  into_dash_iter568 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next580 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    struct Maybe_807  temp824;
    return (  temp824 );
}

static  size_t   reduce825 (    struct IntStrIter_418  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct IntStrIter_418  it858 = ( (  into_dash_iter538 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next477 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp826;
    return (  temp826 );
}

static  size_t   reduce827 (    struct StrConcatIter_421  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_421  it858 = ( (  into_dash_iter540 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next484 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp828;
    return (  temp828 );
}

static  size_t   reduce829 (    struct StrConcatIter_428  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_428  it858 = ( (  into_dash_iter542 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next490 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp830;
    return (  temp830 );
}

static  size_t   reduce831 (    struct StrConcatIter_432  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_432  it858 = ( (  into_dash_iter544 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next498 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp832;
    return (  temp832 );
}

static  size_t   reduce833 (    struct StrConcatIter_442  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_442  it858 = ( (  into_dash_iter546 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next507 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp834;
    return (  temp834 );
}

static  size_t   reduce835 (    struct StrConcatIter_447  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_447  it858 = ( (  into_dash_iter548 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next511 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp836;
    return (  temp836 );
}

static  size_t   reduce837 (    struct StrConcatIter_444  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_444  it858 = ( (  into_dash_iter550 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next509 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp838;
    return (  temp838 );
}

static  size_t   reduce839 (    struct StrConcatIter_453  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_453  it858 = ( (  into_dash_iter552 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next520 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp840;
    return (  temp840 );
}

static  size_t   reduce841 (    struct StrConcatIter_457  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_457  it858 = ( (  into_dash_iter554 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next523 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp842;
    return (  temp842 );
}

static  size_t   reduce843 (    struct StrConcatIter_462  iterable852 ,    size_t  base854 ,    size_t (*  fun856 )(    char  ,    size_t  ) ) {
    size_t  x857 = (  base854 );
    struct StrConcatIter_462  it858 = ( (  into_dash_iter556 ) ( (  iterable852 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref859 = ( (  next527 ) ( ( & (  it858 ) ) ) );
        if ( dref859.tag == Maybe_49_None_t ) {
            return (  x857 );
        }
        else if ( dref859.tag == Maybe_49_Just_t ) {
            x857 = ( (  fun856 ) ( ( dref859 .stuff .Maybe_49_Just_s .field0 ) ,  (  x857 ) ) );
        }
    }
    size_t  temp844;
    return (  temp844 );
}

static  size_t   lam846 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count845 (    struct TakeWhile_558  it863 ) {
    return ( (  reduce804 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam846 ) ) );
}

static  size_t   lam848 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count847 (    struct TakeWhile_560  it863 ) {
    return ( (  reduce815 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam848 ) ) );
}

static  size_t   lam850 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count849 (    struct DynStr_136  it863 ) {
    return ( (  reduce821 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam850 ) ) );
}

static  size_t   lam852 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count851 (    struct IntStrIter_418  it863 ) {
    return ( (  reduce825 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam852 ) ) );
}

static  size_t   lam854 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count853 (    struct StrConcatIter_421  it863 ) {
    return ( (  reduce827 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam854 ) ) );
}

static  size_t   lam856 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count855 (    struct StrConcatIter_428  it863 ) {
    return ( (  reduce829 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam856 ) ) );
}

static  size_t   lam858 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count857 (    struct StrConcatIter_432  it863 ) {
    return ( (  reduce831 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam858 ) ) );
}

static  size_t   lam860 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count859 (    struct StrConcatIter_442  it863 ) {
    return ( (  reduce833 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam860 ) ) );
}

static  size_t   lam862 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count861 (    struct StrConcatIter_447  it863 ) {
    return ( (  reduce835 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam862 ) ) );
}

static  size_t   lam864 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count863 (    struct StrConcatIter_444  it863 ) {
    return ( (  reduce837 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam864 ) ) );
}

static  size_t   lam866 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count865 (    struct StrConcatIter_453  it863 ) {
    return ( (  reduce839 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam866 ) ) );
}

static  size_t   lam868 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count867 (    struct StrConcatIter_457  it863 ) {
    return ( (  reduce841 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam868 ) ) );
}

static  size_t   lam870 (    char  dref864 ,    size_t  x866 ) {
    return (  op_dash_add98 ( (  x866 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count869 (    struct StrConcatIter_462  it863 ) {
    return ( (  reduce843 ) ( (  it863 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam870 ) ) );
}

static  int32_t   lam872 (    int32_t  v871 ,    int32_t  s873 ) {
    return (  op_dash_add87 ( (  v871 ) , (  s873 ) ) );
}

static  int32_t   sum871 (    struct Map_352  it869 ) {
    return ( (  reduce809 ) ( (  it869 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam872 ) ) );
}

static  bool   lam812 (   struct env812 env ,    char  e887 ,    bool  x889 ) {
    return ( ( ( env.fun885 ) ( (  e887 ) ) ) && (  x889 ) );
}

static  bool   all873 (    struct List_3 *  it883 ,    bool (*  fun885 )(    char  ) ) {
    struct env812 envinst812 = {
        .fun885 =  fun885 ,
    };
    return ( (  reduce811 ) ( (  it883 ) ,  ( true ) ,  ( (struct funenv812){ .fun = lam812, .env = envinst812 } ) ) );
}

static  bool   lam818 (   struct env818 env ,    struct Tuple2_475  e887 ,    bool  x889 ) {
    return ( ( ( env.fun885 ) ( (  e887 ) ) ) && (  x889 ) );
}

static  bool   all874 (    struct Zip_415  it883 ,    bool (*  fun885 )(    struct Tuple2_475  ) ) {
    struct env818 envinst818 = {
        .fun885 =  fun885 ,
    };
    return ( (  reduce817 ) ( (  it883 ) ,  ( true ) ,  ( (struct funenv818){ .fun = lam818, .env = envinst818 } ) ) );
}

static  struct Maybe_355   head875 (    struct List_323 *  it901 ) {
    struct SliceIter_321  temp876 = ( (  into_dash_iter320 ) ( (  it901 ) ) );
    return ( (  next394 ) ( ( &temp876 ) ) );
}

static  struct Maybe_49   head877 (    struct TakeWhile_558  it901 ) {
    struct TakeWhile_558  temp878 = ( (  into_dash_iter557 ) ( (  it901 ) ) );
    return ( (  next570 ) ( ( &temp878 ) ) );
}

static  struct Maybe_49   head879 (    struct DropWhile_565  it901 ) {
    struct DropWhile_565  temp880 = ( (  into_dash_iter586 ) ( (  it901 ) ) );
    return ( (  next576 ) ( ( &temp880 ) ) );
}

static  struct Maybe_49   head881 (    struct TakeWhile_562  it901 ) {
    struct TakeWhile_562  temp882 = ( (  into_dash_iter561 ) ( (  it901 ) ) );
    return ( (  next573 ) ( ( &temp882 ) ) );
}

static  struct Maybe_49   head883 (    struct TakeWhile_569  it901 ) {
    struct TakeWhile_569  temp884 = ( (  into_dash_iter568 ) ( (  it901 ) ) );
    return ( (  next580 ) ( ( &temp884 ) ) );
}

static  bool   null885 (    struct List_323 *  it904 ) {
    struct Maybe_355  dref905 = ( (  head875 ) ( (  it904 ) ) );
    if ( dref905.tag == Maybe_355_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null886 (    struct TakeWhile_558  it904 ) {
    struct Maybe_49  dref905 = ( (  head877 ) ( (  it904 ) ) );
    if ( dref905.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null887 (    struct TakeWhile_562  it904 ) {
    struct Maybe_49  dref905 = ( (  head881 ) ( (  it904 ) ) );
    if ( dref905.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam641 (   struct env641 env ,    int32_t  dref942 ) {
    return ( (  next571 ) ( ( env.it939 ) ) );
}

static  enum Unit_13   drop_prime_888 (    struct Scanner_329 *  it939 ,    size_t  n941 ) {
    struct env641 envinst641 = {
        .it939 =  it939 ,
    };
    ( (  for_dash_each640 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32313 ) ( (  n941 ) ) ) ) ) ,  ( (struct funenv641){ .fun = lam641, .env = envinst641 } ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_890 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_890 Tuple2_890_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_890 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst889 (    struct Tuple2_890  dref1003 ) {
    return ( dref1003 .field0 );
}

static  uint32_t   snd891 (    struct Tuple2_890  dref1006 ) {
    return ( dref1006 .field1 );
}

static  bool   is_dash_just892 (    struct Maybe_157  m1010 ) {
    struct Maybe_157  dref1011 = (  m1010 );
    if ( dref1011.tag == Maybe_157_None_t ) {
        return ( false );
    }
    else if ( dref1011.tag == Maybe_157_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just893 (    struct Maybe_356  m1010 ) {
    struct Maybe_356  dref1011 = (  m1010 );
    if ( dref1011.tag == Maybe_356_None_t ) {
        return ( false );
    }
    else if ( dref1011.tag == Maybe_356_Just_t ) {
        return ( true );
    }
}

struct Maybe_895 {
    enum {
        Maybe_895_None_t,
        Maybe_895_Just_t,
    } tag;
    union {
        struct {
            struct List_160  field0;
        } Maybe_895_Just_s;
    } stuff;
};

static struct Maybe_895 Maybe_895_Just (  struct List_160  field0 ) {
    return ( struct Maybe_895 ) { .tag = Maybe_895_Just_t, .stuff = { .Maybe_895_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just894 (    struct Maybe_895  m1010 ) {
    struct Maybe_895  dref1011 = (  m1010 );
    if ( dref1011.tag == Maybe_895_None_t ) {
        return ( false );
    }
    else if ( dref1011.tag == Maybe_895_Just_t ) {
        return ( true );
    }
}

struct Maybe_897 {
    enum {
        Maybe_897_None_t,
        Maybe_897_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_627  field0;
        } Maybe_897_Just_s;
    } stuff;
};

static struct Maybe_897 Maybe_897_Just (  struct StrBuilder_627  field0 ) {
    return ( struct Maybe_897 ) { .tag = Maybe_897_Just_t, .stuff = { .Maybe_897_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just896 (    struct Maybe_897  m1010 ) {
    struct Maybe_897  dref1011 = (  m1010 );
    if ( dref1011.tag == Maybe_897_None_t ) {
        return ( false );
    }
    else if ( dref1011.tag == Maybe_897_Just_t ) {
        return ( true );
    }
}

struct Maybe_899 {
    enum {
        Maybe_899_None_t,
        Maybe_899_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_899_Just_s;
    } stuff;
};

static struct Maybe_899 Maybe_899_Just (  struct timespec  field0 ) {
    return ( struct Maybe_899 ) { .tag = Maybe_899_Just_t, .stuff = { .Maybe_899_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just898 (    struct Maybe_899  m1010 ) {
    struct Maybe_899  dref1011 = (  m1010 );
    if ( dref1011.tag == Maybe_899_None_t ) {
        return ( false );
    }
    else if ( dref1011.tag == Maybe_899_Just_t ) {
        return ( true );
    }
}

struct Visual_903 {
    int32_t  field0;
};

static struct Visual_903 Visual_903_Visual (  int32_t  field0 ) {
    return ( struct Visual_903 ) { .field0 = field0 };
};

struct Mode_904 {
    enum {
        Mode_904_Normal_t,
        Mode_904_Insert_t,
        Mode_904_Select_t,
        Mode_904_Cmd_t,
        Mode_904_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_627  field0;
        } Mode_904_Cmd_s;
        struct {
            struct StrBuilder_627  field0;
        } Mode_904_SearchBox_s;
    } stuff;
};

static struct Mode_904 Mode_904_Cmd (  struct StrBuilder_627  field0 ) {
    return ( struct Mode_904 ) { .tag = Mode_904_Cmd_t, .stuff = { .Mode_904_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_904 Mode_904_SearchBox (  struct StrBuilder_627  field0 ) {
    return ( struct Mode_904 ) { .tag = Mode_904_SearchBox_t, .stuff = { .Mode_904_SearchBox_s = { .field0 = field0 } } };
};

struct Theme_905 {
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

struct List_907 {
    enum CAllocator_4  f_al;
    struct Slice_410  f_elements;
    size_t  f_count;
};

struct Actions_906 {
    struct List_907  f_list;
    size_t  f_cur;
    struct Maybe_895  f_changeset;
};

struct Editor_902 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_154  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_903  f_goal_dash_x;
    struct List_323  f_current_dash_file;
    struct Maybe_308  f_filename;
    struct Mode_904  f_mode;
    struct Maybe_899  f_anim;
    struct Maybe_157  f_selected;
    struct Theme_905 *  f_theme;
    struct Maybe_897  f_search_dash_term;
    struct Maybe_356  f_msg;
    struct Maybe_356  f_clipboard;
    struct Actions_906  f_actions;
    struct Maybe_157  f_insert_dash_start;
    struct Maybe_897  f_delete_dash_acc;
};

struct env901 {
    ;
    ;
    struct Editor_902 *  ed3495;
};

struct funenv901 {
    struct Maybe_49  (*fun) (  struct env901  ,    struct List_3  );
    struct env901 env;
};

static  struct Maybe_49   and_dash_maybe900 (    struct Maybe_355  m1014 ,   struct funenv901  fun1016 ) {
    struct Maybe_355  dref1017 = (  m1014 );
    if ( dref1017.tag == Maybe_355_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1017.tag == Maybe_355_Just_t ) {
        struct funenv901  temp908 = (  fun1016 );
        return ( temp908.fun ( temp908.env ,  ( dref1017 .stuff .Maybe_355_Just_s .field0 ) ) );
    }
}

static  struct Maybe_157   fmap_dash_maybe909 (    struct Maybe_157  x1021 ,    struct Cursor_154 (*  fun1023 )(    struct Cursor_154  ) ) {
    struct Maybe_157  dref1024 = (  x1021 );
    if ( dref1024.tag == Maybe_157_None_t ) {
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
    else if ( dref1024.tag == Maybe_157_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (  fun1023 ) ( ( dref1024 .stuff .Maybe_157_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe910 (    struct Maybe_49  x1021 ,    enum CharType_53 (*  fun1023 )(    char  ) ) {
    struct Maybe_49  dref1024 = (  x1021 );
    if ( dref1024.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1024.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1023 ) ( ( dref1024 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_386   fmap_dash_maybe911 (    struct Maybe_49  x1021 ,    struct Tuple2_387 (*  fun1023 )(    char  ) ) {
    struct Maybe_49  dref1024 = (  x1021 );
    if ( dref1024.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    else if ( dref1024.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_386_Just ) ( ( (  fun1023 ) ( ( dref1024 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
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

static  struct Maybe_913   fmap_dash_maybe912 (    struct Maybe_356  x1021 ,    size_t (*  fun1023 )(    struct DynStr_136  ) ) {
    struct Maybe_356  dref1024 = (  x1021 );
    if ( dref1024.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    }
    else if ( dref1024.tag == Maybe_356_Just_t ) {
        return ( ( Maybe_913_Just ) ( ( (  fun1023 ) ( ( dref1024 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
    }
}

struct env915 {
    struct Editor_902 *  ed3187;
    ;
};

struct funenv915 {
    struct Cursor_154  (*fun) (  struct env915  ,    struct Cursor_154  );
    struct env915 env;
};

static  struct Cursor_154   maybe914 (    struct Maybe_157  x1028 ,   struct funenv915  fun1030 ,    struct Cursor_154  default1032 ) {
    struct funenv915  temp916 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp916.fun ( temp916.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env918 {
    ;
    struct Editor_902 *  ed3187;
};

struct funenv918 {
    struct Cursor_154  (*fun) (  struct env918  ,    struct Cursor_154  );
    struct env918 env;
};

static  struct Cursor_154   maybe917 (    struct Maybe_157  x1028 ,   struct funenv918  fun1030 ,    struct Cursor_154  default1032 ) {
    struct funenv918  temp919 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp919.fun ( temp919.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env921 {
    struct Editor_902 *  ed3187;
    ;
};

struct funenv921 {
    struct Cursor_154  (*fun) (  struct env921  ,    struct Cursor_154  );
    struct env921 env;
};

static  struct Cursor_154   maybe920 (    struct Maybe_157  x1028 ,   struct funenv921  fun1030 ,    struct Cursor_154  default1032 ) {
    struct funenv921  temp922 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp922.fun ( temp922.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env924 {
    ;
    struct Editor_902 *  ed3187;
};

struct funenv924 {
    struct Cursor_154  (*fun) (  struct env924  ,    struct Cursor_154  );
    struct env924 env;
};

static  struct Cursor_154   maybe923 (    struct Maybe_157  x1028 ,   struct funenv924  fun1030 ,    struct Cursor_154  default1032 ) {
    struct funenv924  temp925 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp925.fun ( temp925.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env927 {
    ;
    struct Editor_902 *  ed3291;
};

struct funenv927 {
    int32_t  (*fun) (  struct env927  ,    struct Cursor_154  );
    struct env927 env;
};

static  int32_t   maybe926 (    struct Maybe_157  x1028 ,   struct funenv927  fun1030 ,    int32_t  default1032 ) {
    struct funenv927  temp928 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp928.fun ( temp928.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env930 {
    struct Editor_902 *  ed3291;
    ;
};

struct funenv930 {
    int32_t  (*fun) (  struct env930  ,    struct Cursor_154  );
    struct env930 env;
};

static  int32_t   maybe929 (    struct Maybe_157  x1028 ,   struct funenv930  fun1030 ,    int32_t  default1032 ) {
    struct funenv930  temp931 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp931.fun ( temp931.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env933 {
    ;
    struct Editor_902 *  ed3309;
};

struct funenv933 {
    int32_t  (*fun) (  struct env933  ,    struct Cursor_154  );
    struct env933 env;
};

static  int32_t   maybe932 (    struct Maybe_157  x1028 ,   struct funenv933  fun1030 ,    int32_t  default1032 ) {
    struct funenv933  temp934 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp934.fun ( temp934.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env936 {
    ;
    struct Editor_902 *  ed3309;
};

struct funenv936 {
    int32_t  (*fun) (  struct env936  ,    struct Cursor_154  );
    struct env936 env;
};

static  int32_t   maybe935 (    struct Maybe_157  x1028 ,   struct funenv936  fun1030 ,    int32_t  default1032 ) {
    struct funenv936  temp937 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp937.fun ( temp937.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env939 {
    ;
    struct Editor_902 *  ed3270;
};

struct funenv939 {
    struct Cursor_154  (*fun) (  struct env939  ,    struct Cursor_154  );
    struct env939 env;
};

static  struct Cursor_154   maybe938 (    struct Maybe_157  x1028 ,   struct funenv939  fun1030 ,    struct Cursor_154  default1032 ) {
    struct funenv939  temp940 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp940.fun ( temp940.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  int32_t   maybe941 (    struct Maybe_157  x1028 ,    int32_t (*  fun1030 )(    struct Cursor_154  ) ,    int32_t  default1032 ) {
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  int32_t   maybe942 (    struct Maybe_157  x1028 ,    int32_t (*  fun1030 )(    struct Cursor_154  ) ,    int32_t  default1032 ) {
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env944 {
    struct Maybe_52  cur_dash_char_dash_type3530;
    ;
    ;
};

struct funenv944 {
    bool  (*fun) (  struct env944  ,    char  );
    struct env944 env;
};

static  bool   maybe943 (    struct Maybe_49  x1028 ,   struct funenv944  fun1030 ,    bool  default1032 ) {
    struct funenv944  temp945 = (  fun1030 );
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( temp945.fun ( temp945.env ,  ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  bool   maybe946 (    struct Maybe_49  x1028 ,    bool (*  fun1030 )(    char  ) ,    bool  default1032 ) {
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  bool   maybe947 (    struct Maybe_49  x1028 ,    bool (*  fun1030 )(    char  ) ,    bool  default1032 ) {
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env949 {
    ;
    struct Maybe_52  cur_dash_char_dash_type3539;
    ;
};

struct funenv949 {
    bool  (*fun) (  struct env949  ,    char  );
    struct env949 env;
};

static  bool   maybe948 (    struct Maybe_49  x1028 ,   struct funenv949  fun1030 ,    bool  default1032 ) {
    struct funenv949  temp950 = (  fun1030 );
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( temp950.fun ( temp950.env ,  ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  bool   maybe951 (    struct Maybe_49  x1028 ,    bool (*  fun1030 )(    char  ) ,    bool  default1032 ) {
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env953 {
    struct Maybe_52  cur_dash_char_dash_type3546;
    ;
    ;
};

struct funenv953 {
    bool  (*fun) (  struct env953  ,    char  );
    struct env953 env;
};

static  bool   maybe952 (    struct Maybe_49  x1028 ,   struct funenv953  fun1030 ,    bool  default1032 ) {
    struct funenv953  temp954 = (  fun1030 );
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( temp954.fun ( temp954.env ,  ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env956 {
    struct Maybe_52  cur_dash_char_dash_type3546;
    ;
    ;
};

struct funenv956 {
    bool  (*fun) (  struct env956  ,    char  );
    struct env956 env;
};

static  bool   maybe955 (    struct Maybe_49  x1028 ,   struct funenv956  fun1030 ,    bool  default1032 ) {
    struct funenv956  temp957 = (  fun1030 );
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( temp957.fun ( temp957.env ,  ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env959 {
    ;
    struct Editor_902 *  ed3327;
};

struct funenv959 {
    int32_t  (*fun) (  struct env959  ,    struct Cursor_154  );
    struct env959 env;
};

static  int32_t   maybe958 (    struct Maybe_157  x1028 ,   struct funenv959  fun1030 ,    int32_t  default1032 ) {
    struct funenv959  temp960 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp960.fun ( temp960.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

struct env962 {
    ;
    struct Editor_902 *  ed3327;
};

struct funenv962 {
    int32_t  (*fun) (  struct env962  ,    struct Cursor_154  );
    struct env962 env;
};

static  int32_t   maybe961 (    struct Maybe_157  x1028 ,   struct funenv962  fun1030 ,    int32_t  default1032 ) {
    struct funenv962  temp963 = (  fun1030 );
    return ( {  struct Maybe_157  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_157_Just_t ? ( temp963.fun ( temp963.env ,  ( dref1033 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  int32_t   maybe964 (    struct Maybe_49  x1028 ,    int32_t (*  fun1030 )(    char  ) ,    int32_t  default1032 ) {
    return ( {  struct Maybe_49  dref1033 = (  x1028 ) ; dref1033.tag == Maybe_49_Just_t ? ( (  fun1030 ) ( ( dref1033 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1032 ) ; } );
}

static  int64_t   mod965 (    int64_t  l982 ,    int64_t  d984 ) {
    int64_t  r985 = (  op_dash_div85 ( (  l982 ) , (  d984 ) ) );
    int64_t  m986 = (  op_dash_sub84 ( (  l982 ) , (  op_dash_mul32 ( (  r985 ) , (  d984 ) ) ) ) );
    if ( (  cmp79 ( (  m986 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d984 ) , (  m986 ) ) );
    } else {
        return (  m986 );
    }
}

static  enum Ordering_10   cmp967 (    struct Cursor_154  l2839 ,    struct Cursor_154  r2841 ) {
    enum Ordering_10  dref2842 = ( (  cmp80 ) ( ( (  l2839 ) .f_y ) ,  ( (  r2841 ) .f_y ) ) );
    switch (  dref2842 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2839 ) .f_x ) ,  ( (  r2841 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2843 =  dref2842;
            return (  els2843 );
            break;
        }
    }
}

static  struct Cursor_154   min966 (    struct Cursor_154  l989 ,    struct Cursor_154  r991 ) {
    if ( (  cmp967 ( (  l989 ) , (  r991 ) ) == 0 ) ) {
        return (  l989 );
    } else {
        return (  r991 );
    }
}

static  int32_t   min968 (    int32_t  l989 ,    int32_t  r991 ) {
    if ( (  cmp80 ( (  l989 ) , (  r991 ) ) == 0 ) ) {
        return (  l989 );
    } else {
        return (  r991 );
    }
}

static  int32_t   char_dash_i32971 (    char  c1346 ) {
    return ( (  cast_dash_on_dash_zeroed290 ) ( (  c1346 ) ) );
}

static  enum Ordering_10   cmp970 (    char  l1370 ,    char  r1372 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32971 ) ( (  l1370 ) ) ) ,  ( (  char_dash_i32971 ) ( (  r1372 ) ) ) ) );
}

static  char   min969 (    char  l989 ,    char  r991 ) {
    if ( (  cmp970 ( (  l989 ) , (  r991 ) ) == 0 ) ) {
        return (  l989 );
    } else {
        return (  r991 );
    }
}

static  int32_t   max972 (    int32_t  l1054 ,    int32_t  r1056 ) {
    if ( (  cmp80 ( (  l1054 ) , (  r1056 ) ) == 2 ) ) {
        return (  l1054 );
    } else {
        return (  r1056 );
    }
}

static  struct Cursor_154   max973 (    struct Cursor_154  l1054 ,    struct Cursor_154  r1056 ) {
    if ( (  cmp967 ( (  l1054 ) , (  r1056 ) ) == 2 ) ) {
        return (  l1054 );
    } else {
        return (  r1056 );
    }
}

static  char   max974 (    char  l1054 ,    char  r1056 ) {
    if ( (  cmp970 ( (  l1054 ) , (  r1056 ) ) == 2 ) ) {
        return (  l1054 );
    } else {
        return (  r1056 );
    }
}

static  bool   between975 (    char  c1071 ,    char  l1073 ,    char  r1075 ) {
    char  from1076 = ( (  min969 ) ( (  l1073 ) ,  (  r1075 ) ) );
    char  to1077 = ( (  max974 ) ( (  l1073 ) ,  (  r1075 ) ) );
    return ( (  cmp970 ( (  from1076 ) , (  c1071 ) ) != 2 ) && (  cmp970 ( (  c1071 ) , (  to1077 ) ) != 2 ) );
}

static  bool   between976 (    struct Cursor_154  c1071 ,    struct Cursor_154  l1073 ,    struct Cursor_154  r1075 ) {
    struct Cursor_154  from1076 = ( (  min966 ) ( (  l1073 ) ,  (  r1075 ) ) );
    struct Cursor_154  to1077 = ( (  max973 ) ( (  l1073 ) ,  (  r1075 ) ) );
    return ( (  cmp967 ( (  from1076 ) , (  c1071 ) ) != 2 ) && (  cmp967 ( (  c1071 ) , (  to1077 ) ) != 2 ) );
}

static  int32_t   clamp977 (    int32_t  x1086 ,    int32_t  mn1088 ,    int32_t  mx1090 ) {
    if ( (  cmp80 ( (  x1086 ) , (  mn1088 ) ) == 0 ) ) {
        return (  mn1088 );
    } else {
        if ( (  cmp80 ( (  x1086 ) , (  mx1090 ) ) == 2 ) ) {
            return (  mx1090 );
        } else {
            return (  x1086 );
        }
    }
}

static  struct ConstStrIter_350   chars978 (    const char*  self1110 ) {
    return ( (  into_dash_iter375 ) ( (  self1110 ) ) );
}

static  struct AppendIter_425   chars979 (    char  self1116 ) {
    return ( (  single597 ) ( (  self1116 ) ) );
}

static  int32_t   count_dash_digits980 (    size_t  self1136 ) {
    if ( (  eq45 ( (  self1136 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1137 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1136 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1136 = (  op_dash_div101 ( (  self1136 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1137 = (  op_dash_add87 ( (  digits1137 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1137 );
}

static  int32_t   count_dash_digits981 (    int32_t  self1136 ) {
    if ( (  eq41 ( (  self1136 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1137 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp80 ( (  self1136 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1136 = (  op_dash_div90 ( (  self1136 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1137 = (  op_dash_add87 ( (  digits1137 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1137 );
}

static  int32_t   count_dash_digits982 (    uint32_t  self1136 ) {
    if ( (  eq42 ( (  self1136 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1137 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp81 ( (  self1136 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1136 = (  op_dash_div95 ( (  self1136 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1137 = (  op_dash_add87 ( (  digits1137 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1137 );
}

static  struct IntStrIter_418   chars983 (    int32_t  self1143 ) {
    return ( (struct IntStrIter_418) { .f_int = (  self1143 ) , .f_len = ( (  count_dash_digits981 ) ( (  self1143 ) ) ) } );
}

static  enum Unit_13   print_dash_str984 (    uint32_t  self1146 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1146 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_429   chars985 (    uint32_t  self1149 ) {
    return ( (struct IntStrIter_429) { .f_int = (  self1149 ) , .f_len = ( (  count_dash_digits982 ) ( (  self1149 ) ) ) } );
}

static  enum Unit_13   print_dash_str986 (    uint8_t  self1152 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32319 ) ( (  self1152 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_448   chars987 (    size_t  self1167 ) {
    return ( (struct IntStrIter_448) { .f_int = (  self1167 ) , .f_len = ( (  count_dash_digits980 ) ( (  self1167 ) ) ) } );
}

struct StrConcat_989 {
    char  field0;
    char  field1;
};

static struct StrConcat_989 StrConcat_989_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_989 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_439   into_dash_iter988 (    struct StrConcat_989  dref1198 ) {
    return ( (struct StrConcatIter_439) { .f_left = ( (  chars979 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_991 {
    const char*  field0;
    struct Mode_904  field1;
};

static struct StrConcat_991 StrConcat_991_StrConcat (  const char*  field0 ,  struct Mode_904  field1 ) {
    return ( struct StrConcat_991 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_995 {
    const char*  field0;
    struct DynStr_136  field1;
};

static struct StrConcat_995 StrConcat_995_StrConcat (  const char*  field0 ,  struct DynStr_136  field1 ) {
    return ( struct StrConcat_995 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_994 {
    struct StrConcat_995  field0;
    char  field1;
};

static struct StrConcat_994 StrConcat_994_StrConcat (  struct StrConcat_995  field0 ,  char  field1 ) {
    return ( struct StrConcat_994 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_993 {
    enum {
        StrCase_993_StrCase1_t,
        StrCase_993_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_993_StrCase1_s;
        struct {
            struct StrConcat_994  field0;
        } StrCase_993_StrCase2_s;
    } stuff;
};

static struct StrCase_993 StrCase_993_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_993 ) { .tag = StrCase_993_StrCase1_t, .stuff = { .StrCase_993_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_993 StrCase_993_StrCase2 (  struct StrConcat_994  field0 ) {
    return ( struct StrCase_993 ) { .tag = StrCase_993_StrCase2_t, .stuff = { .StrCase_993_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_136   as_dash_str997 (    struct StrBuilder_627 *  builder2211 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( ( ( * (  builder2211 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2211 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_330   chars1004 (    struct DynStr_136  self1647 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1647 ) .f_contents ) ) );
}

static  struct StrConcatIter_424   into_dash_iter1003 (    struct StrConcat_995  dref1198 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1004 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars1002 (    struct StrConcat_995  self1209 ) {
    return ( (  into_dash_iter1003 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter1001 (    struct StrConcat_994  dref1198 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars1002 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars1000 (    struct StrConcat_994  self1209 ) {
    return ( (  into_dash_iter1001 ) ( (  self1209 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter999 (    struct StrCase_993  self1222 ) {
    struct StrCase_993  dref1223 = (  self1222 );
    if ( dref1223.tag == StrCase_993_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars978 ) ( ( dref1223 .stuff .StrCase_993_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1223.tag == StrCase_993_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars1000 ) ( ( dref1223 .stuff .StrCase_993_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars998 (    struct StrCase_993  self1234 ) {
    return ( (  into_dash_iter999 ) ( (  self1234 ) ) );
}

static  struct StrCaseIter_422   chars992 (    struct Mode_904  self2865 ) {
    struct StrCase_993  temp996;
    struct StrCase_993  c2866 = (  temp996 );
    struct Mode_904  dref2867 = (  self2865 );
    if ( dref2867.tag == Mode_904_Normal_t ) {
        c2866 = ( ( StrCase_993_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2867.tag == Mode_904_Insert_t ) {
        c2866 = ( ( StrCase_993_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2867.tag == Mode_904_Select_t ) {
        c2866 = ( ( StrCase_993_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2867.tag == Mode_904_Cmd_t ) {
        struct DynStr_136  ss2869 = ( (  as_dash_str997 ) ( ( & ( dref2867 .stuff .Mode_904_Cmd_s .field0 ) ) ) );
        c2866 = ( ( StrCase_993_StrCase2 ) ( ( ( StrConcat_994_StrConcat ) ( ( ( StrConcat_995_StrConcat ) ( ( "Cmd(" ) ,  (  ss2869 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2867.tag == Mode_904_SearchBox_t ) {
        struct DynStr_136  ss2871 = ( (  as_dash_str997 ) ( ( & ( dref2867 .stuff .Mode_904_SearchBox_s .field0 ) ) ) );
        c2866 = ( ( StrCase_993_StrCase2 ) ( ( ( StrConcat_994_StrConcat ) ( ( ( StrConcat_995_StrConcat ) ( ( "Search(" ) ,  (  ss2871 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars998 ) ( (  c2866 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter990 (    struct StrConcat_991  dref1198 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars992 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1006 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_1006 StrConcat_1006_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1006 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_428   into_dash_iter1005 (    struct StrConcat_1006  dref1198 ) {
    return ( (struct StrConcatIter_428) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars985 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1008 {
    const char*  field0;
    struct Maybe_386  field1;
};

static struct StrConcat_1008 StrConcat_1008_StrConcat (  const char*  field0 ,  struct Maybe_386  field1 ) {
    return ( struct StrConcat_1008 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1012 {
    const char*  field0;
    struct Tuple2_387  field1;
};

static struct StrConcat_1012 StrConcat_1012_StrConcat (  const char*  field0 ,  struct Tuple2_387  field1 ) {
    return ( struct StrConcat_1012 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1011 {
    struct StrConcat_1012  field0;
    char  field1;
};

static struct StrConcat_1011 StrConcat_1011_StrConcat (  struct StrConcat_1012  field0 ,  char  field1 ) {
    return ( struct StrConcat_1011 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1010 {
    enum {
        StrCase_1010_StrCase1_t,
        StrCase_1010_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_1010_StrCase1_s;
        struct {
            struct StrConcat_1011  field0;
        } StrCase_1010_StrCase2_s;
    } stuff;
};

static struct StrCase_1010 StrCase_1010_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_1010 ) { .tag = StrCase_1010_StrCase1_t, .stuff = { .StrCase_1010_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1010 StrCase_1010_StrCase2 (  struct StrConcat_1011  field0 ) {
    return ( struct StrCase_1010 ) { .tag = StrCase_1010_StrCase2_t, .stuff = { .StrCase_1010_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_1024 {
    struct StrConcat_989  field0;
    const char*  field1;
};

static struct StrConcat_1024 StrConcat_1024_StrConcat (  struct StrConcat_989  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1024 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1023 {
    struct StrConcat_1024  field0;
    int32_t  field1;
};

static struct StrConcat_1023 StrConcat_1023_StrConcat (  struct StrConcat_1024  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1022 {
    struct StrConcat_1023  field0;
    char  field1;
};

static struct StrConcat_1022 StrConcat_1022_StrConcat (  struct StrConcat_1023  field0 ,  char  field1 ) {
    return ( struct StrConcat_1022 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_439   chars1030 (    struct StrConcat_989  self1209 ) {
    return ( (  into_dash_iter988 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_438   into_dash_iter1029 (    struct StrConcat_1024  dref1198 ) {
    return ( (struct StrConcatIter_438) { .f_left = ( (  chars1030 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars978 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_438   chars1028 (    struct StrConcat_1024  self1209 ) {
    return ( (  into_dash_iter1029 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_437   into_dash_iter1027 (    struct StrConcat_1023  dref1198 ) {
    return ( (struct StrConcatIter_437) { .f_left = ( (  chars1028 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars983 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_437   chars1026 (    struct StrConcat_1023  self1209 ) {
    return ( (  into_dash_iter1027 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_436   into_dash_iter1025 (    struct StrConcat_1022  dref1198 ) {
    return ( (struct StrConcatIter_436) { .f_left = ( (  chars1026 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_436   chars1021 (    struct StrConcat_1022  self1209 ) {
    return ( (  into_dash_iter1025 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_436   chars1020 (    struct Tuple2_387  dref1259 ) {
    return ( (  chars1021 ) ( ( ( StrConcat_1022_StrConcat ) ( ( ( StrConcat_1023_StrConcat ) ( ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_989_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1259 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1259 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_435   into_dash_iter1019 (    struct StrConcat_1012  dref1198 ) {
    return ( (struct StrConcatIter_435) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1020 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_435   chars1018 (    struct StrConcat_1012  self1209 ) {
    return ( (  into_dash_iter1019 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_434   into_dash_iter1017 (    struct StrConcat_1011  dref1198 ) {
    return ( (struct StrConcatIter_434) { .f_left = ( (  chars1018 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_434   chars1016 (    struct StrConcat_1011  self1209 ) {
    return ( (  into_dash_iter1017 ) ( (  self1209 ) ) );
}

static  struct StrCaseIter_433   into_dash_iter1015 (    struct StrCase_1010  self1222 ) {
    struct StrCase_1010  dref1223 = (  self1222 );
    if ( dref1223.tag == StrCase_1010_StrCase1_t ) {
        return ( ( StrCaseIter_433_StrCaseIter1 ) ( ( (  chars978 ) ( ( dref1223 .stuff .StrCase_1010_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1223.tag == StrCase_1010_StrCase2_t ) {
        return ( ( StrCaseIter_433_StrCaseIter2 ) ( ( (  chars1016 ) ( ( dref1223 .stuff .StrCase_1010_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_433   chars1014 (    struct StrCase_1010  self1234 ) {
    return ( (  into_dash_iter1015 ) ( (  self1234 ) ) );
}

static  struct StrCaseIter_433   chars1009 (    struct Maybe_386  self1248 ) {
    struct StrCase_1010  temp1013;
    struct StrCase_1010  c1249 = (  temp1013 );
    struct Maybe_386  dref1250 = (  self1248 );
    if ( dref1250.tag == Maybe_386_None_t ) {
        c1249 = ( ( StrCase_1010_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1250.tag == Maybe_386_Just_t ) {
        c1249 = ( ( StrCase_1010_StrCase2 ) ( ( ( StrConcat_1011_StrConcat ) ( ( ( StrConcat_1012_StrConcat ) ( ( "Just(" ) ,  ( dref1250 .stuff .Maybe_386_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1014 ) ( (  c1249 ) ) );
}

static  struct StrConcatIter_432   into_dash_iter1007 (    struct StrConcat_1008  dref1198 ) {
    return ( (struct StrConcatIter_432) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1009 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1034 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_1034 StrConcat_1034_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1034 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1033 {
    struct StrConcat_1034  field0;
    char  field1;
};

static struct StrConcat_1033 StrConcat_1033_StrConcat (  struct StrConcat_1034  field0 ,  char  field1 ) {
    return ( struct StrConcat_1033 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1032 {
    struct StrConcat_1033  field0;
    int32_t  field1;
};

static struct StrConcat_1032 StrConcat_1032_StrConcat (  struct StrConcat_1033  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1032 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_444   into_dash_iter1038 (    struct StrConcat_1034  dref1198 ) {
    return ( (struct StrConcatIter_444) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars983 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_444   chars1037 (    struct StrConcat_1034  self1209 ) {
    return ( (  into_dash_iter1038 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_443   into_dash_iter1036 (    struct StrConcat_1033  dref1198 ) {
    return ( (struct StrConcatIter_443) { .f_left = ( (  chars1037 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_443   chars1035 (    struct StrConcat_1033  self1209 ) {
    return ( (  into_dash_iter1036 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_442   into_dash_iter1031 (    struct StrConcat_1032  dref1198 ) {
    return ( (struct StrConcatIter_442) { .f_left = ( (  chars1035 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars983 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_447   into_dash_iter1039 (    struct StrConcat_17  dref1198 ) {
    return ( (struct StrConcatIter_447) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars987 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1042 {
    struct StrConcat_1034  field0;
    const char*  field1;
};

static struct StrConcat_1042 StrConcat_1042_StrConcat (  struct StrConcat_1034  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1042 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1041 {
    struct StrConcat_1042  field0;
    int32_t  field1;
};

static struct StrConcat_1041 StrConcat_1041_StrConcat (  struct StrConcat_1042  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1041 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_454   into_dash_iter1044 (    struct StrConcat_1042  dref1198 ) {
    return ( (struct StrConcatIter_454) { .f_left = ( (  chars1037 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars978 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_454   chars1043 (    struct StrConcat_1042  self1209 ) {
    return ( (  into_dash_iter1044 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_453   into_dash_iter1040 (    struct StrConcat_1041  dref1198 ) {
    return ( (struct StrConcatIter_453) { .f_left = ( (  chars1043 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars983 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1046 {
    const char*  field0;
    struct Maybe_897  field1;
};

static struct StrConcat_1046 StrConcat_1046_StrConcat (  const char*  field0 ,  struct Maybe_897  field1 ) {
    return ( struct StrConcat_1046 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1050 {
    const char*  field0;
    struct StrBuilder_627  field1;
};

static struct StrConcat_1050 StrConcat_1050_StrConcat (  const char*  field0 ,  struct StrBuilder_627  field1 ) {
    return ( struct StrConcat_1050 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1049 {
    struct StrConcat_1050  field0;
    char  field1;
};

static struct StrConcat_1049 StrConcat_1049_StrConcat (  struct StrConcat_1050  field0 ,  char  field1 ) {
    return ( struct StrConcat_1049 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1048 {
    enum {
        StrCase_1048_StrCase1_t,
        StrCase_1048_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_1048_StrCase1_s;
        struct {
            struct StrConcat_1049  field0;
        } StrCase_1048_StrCase2_s;
    } stuff;
};

static struct StrCase_1048 StrCase_1048_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_1048 ) { .tag = StrCase_1048_StrCase1_t, .stuff = { .StrCase_1048_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1048 StrCase_1048_StrCase2 (  struct StrConcat_1049  field0 ) {
    return ( struct StrCase_1048 ) { .tag = StrCase_1048_StrCase2_t, .stuff = { .StrCase_1048_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_330   chars1058 (    struct StrBuilder_627  s2225 ) {
    return ( (  into_dash_iter333 ) ( ( (  s2225 ) .f_chars ) ) );
}

static  struct StrConcatIter_424   into_dash_iter1057 (    struct StrConcat_1050  dref1198 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1058 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars1056 (    struct StrConcat_1050  self1209 ) {
    return ( (  into_dash_iter1057 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter1055 (    struct StrConcat_1049  dref1198 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars1056 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars1054 (    struct StrConcat_1049  self1209 ) {
    return ( (  into_dash_iter1055 ) ( (  self1209 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter1053 (    struct StrCase_1048  self1222 ) {
    struct StrCase_1048  dref1223 = (  self1222 );
    if ( dref1223.tag == StrCase_1048_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars978 ) ( ( dref1223 .stuff .StrCase_1048_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1223.tag == StrCase_1048_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars1054 ) ( ( dref1223 .stuff .StrCase_1048_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars1052 (    struct StrCase_1048  self1234 ) {
    return ( (  into_dash_iter1053 ) ( (  self1234 ) ) );
}

static  struct StrCaseIter_422   chars1047 (    struct Maybe_897  self1248 ) {
    struct StrCase_1048  temp1051;
    struct StrCase_1048  c1249 = (  temp1051 );
    struct Maybe_897  dref1250 = (  self1248 );
    if ( dref1250.tag == Maybe_897_None_t ) {
        c1249 = ( ( StrCase_1048_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1250.tag == Maybe_897_Just_t ) {
        c1249 = ( ( StrCase_1048_StrCase2 ) ( ( ( StrConcat_1049_StrConcat ) ( ( ( StrConcat_1050_StrConcat ) ( ( "Just(" ) ,  ( dref1250 .stuff .Maybe_897_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1052 ) ( (  c1249 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1045 (    struct StrConcat_1046  dref1198 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1047 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1060 {
    const char*  field0;
    struct Maybe_356  field1;
};

static struct StrConcat_1060 StrConcat_1060_StrConcat (  const char*  field0 ,  struct Maybe_356  field1 ) {
    return ( struct StrConcat_1060 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_422   chars1061 (    struct Maybe_356  self1248 ) {
    struct StrCase_993  temp1062;
    struct StrCase_993  c1249 = (  temp1062 );
    struct Maybe_356  dref1250 = (  self1248 );
    if ( dref1250.tag == Maybe_356_None_t ) {
        c1249 = ( ( StrCase_993_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1250.tag == Maybe_356_Just_t ) {
        c1249 = ( ( StrCase_993_StrCase2 ) ( ( ( StrConcat_994_StrConcat ) ( ( ( StrConcat_995_StrConcat ) ( ( "Just(" ) ,  ( dref1250 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars998 ) ( (  c1249 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1059 (    struct StrConcat_1060  dref1198 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1061 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1064 {
    const char*  field0;
    struct Maybe_913  field1;
};

static struct StrConcat_1064 StrConcat_1064_StrConcat (  const char*  field0 ,  struct Maybe_913  field1 ) {
    return ( struct StrConcat_1064 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1067 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_1067 StrConcat_1067_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_1067 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1066 {
    enum {
        StrCase_1066_StrCase1_t,
        StrCase_1066_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_1066_StrCase1_s;
        struct {
            struct StrConcat_1067  field0;
        } StrCase_1066_StrCase2_s;
    } stuff;
};

static struct StrCase_1066 StrCase_1066_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_1066 ) { .tag = StrCase_1066_StrCase1_t, .stuff = { .StrCase_1066_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1066 StrCase_1066_StrCase2 (  struct StrConcat_1067  field0 ) {
    return ( struct StrCase_1066 ) { .tag = StrCase_1066_StrCase2_t, .stuff = { .StrCase_1066_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_447   chars1073 (    struct StrConcat_17  self1209 ) {
    return ( (  into_dash_iter1039 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_459   into_dash_iter1072 (    struct StrConcat_1067  dref1198 ) {
    return ( (struct StrConcatIter_459) { .f_left = ( (  chars1073 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars979 ) ( ( dref1198 .field1 ) ) ) } );
}

static  struct StrConcatIter_459   chars1071 (    struct StrConcat_1067  self1209 ) {
    return ( (  into_dash_iter1072 ) ( (  self1209 ) ) );
}

static  struct StrCaseIter_458   into_dash_iter1070 (    struct StrCase_1066  self1222 ) {
    struct StrCase_1066  dref1223 = (  self1222 );
    if ( dref1223.tag == StrCase_1066_StrCase1_t ) {
        return ( ( StrCaseIter_458_StrCaseIter1 ) ( ( (  chars978 ) ( ( dref1223 .stuff .StrCase_1066_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1223.tag == StrCase_1066_StrCase2_t ) {
        return ( ( StrCaseIter_458_StrCaseIter2 ) ( ( (  chars1071 ) ( ( dref1223 .stuff .StrCase_1066_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_458   chars1069 (    struct StrCase_1066  self1234 ) {
    return ( (  into_dash_iter1070 ) ( (  self1234 ) ) );
}

static  struct StrCaseIter_458   chars1065 (    struct Maybe_913  self1248 ) {
    struct StrCase_1066  temp1068;
    struct StrCase_1066  c1249 = (  temp1068 );
    struct Maybe_913  dref1250 = (  self1248 );
    if ( dref1250.tag == Maybe_913_None_t ) {
        c1249 = ( ( StrCase_1066_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1250.tag == Maybe_913_Just_t ) {
        c1249 = ( ( StrCase_1066_StrCase2 ) ( ( ( StrConcat_1067_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1250 .stuff .Maybe_913_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1069 ) ( (  c1249 ) ) );
}

static  struct StrConcatIter_457   into_dash_iter1063 (    struct StrConcat_1064  dref1198 ) {
    return ( (struct StrConcatIter_457) { .f_left = ( (  chars978 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars1065 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1075 {
    struct StrConcat_1067  field0;
    size_t  field1;
};

static struct StrConcat_1075 StrConcat_1075_StrConcat (  struct StrConcat_1067  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_1075 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_462   into_dash_iter1074 (    struct StrConcat_1075  dref1198 ) {
    return ( (struct StrConcatIter_462) { .f_left = ( (  chars1071 ) ( ( dref1198 .field0 ) ) ) , .f_right = ( (  chars987 ) ( ( dref1198 .field1 ) ) ) } );
}

struct StrConcat_1078 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_1078 StrConcat_1078_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1078 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1077 {
    struct StrConcat_1078  field0;
    char  field1;
};

static struct StrConcat_1077 StrConcat_1077_StrConcat (  struct StrConcat_1078  field0 ,  char  field1 ) {
    return ( struct StrConcat_1077 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1079 (    struct StrConcat_1078  self1203 ) {
    struct StrConcat_1078  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1076 (    struct StrConcat_1077  self1203 ) {
    struct StrConcat_1077  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1079 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1082 {
    const char*  field0;
    struct StrConcat_1077  field1;
};

static struct StrConcat_1082 StrConcat_1082_StrConcat (  const char*  field0 ,  struct StrConcat_1077  field1 ) {
    return ( struct StrConcat_1082 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1081 {
    struct StrConcat_1082  field0;
    char  field1;
};

static struct StrConcat_1081 StrConcat_1081_StrConcat (  struct StrConcat_1082  field0 ,  char  field1 ) {
    return ( struct StrConcat_1081 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1083 (    struct StrConcat_1082  self1203 ) {
    struct StrConcat_1082  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1076 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1080 (    struct StrConcat_1081  self1203 ) {
    struct StrConcat_1081  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1083 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1086 {
    const char*  field0;
    struct StrConcat_1024  field1;
};

static struct StrConcat_1086 StrConcat_1086_StrConcat (  const char*  field0 ,  struct StrConcat_1024  field1 ) {
    return ( struct StrConcat_1086 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1085 {
    struct StrConcat_1086  field0;
    char  field1;
};

static struct StrConcat_1085 StrConcat_1085_StrConcat (  struct StrConcat_1086  field0 ,  char  field1 ) {
    return ( struct StrConcat_1085 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1089 (    struct StrConcat_989  self1203 ) {
    struct StrConcat_989  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1088 (    struct StrConcat_1024  self1203 ) {
    struct StrConcat_1024  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1089 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1087 (    struct StrConcat_1086  self1203 ) {
    struct StrConcat_1086  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1088 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1084 (    struct StrConcat_1085  self1203 ) {
    struct StrConcat_1085  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1087 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1093 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_1093 StrConcat_1093_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1093 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1092 {
    const char*  field0;
    struct StrConcat_1093  field1;
};

static struct StrConcat_1092 StrConcat_1092_StrConcat (  const char*  field0 ,  struct StrConcat_1093  field1 ) {
    return ( struct StrConcat_1092 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1091 {
    struct StrConcat_1092  field0;
    char  field1;
};

static struct StrConcat_1091 StrConcat_1091_StrConcat (  struct StrConcat_1092  field0 ,  char  field1 ) {
    return ( struct StrConcat_1091 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1095 (    struct StrConcat_1093  self1203 ) {
    struct StrConcat_1093  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1094 (    struct StrConcat_1092  self1203 ) {
    struct StrConcat_1092  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1095 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1090 (    struct StrConcat_1091  self1203 ) {
    struct StrConcat_1091  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1094 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1098 {
    const char*  field0;
    struct StrConcat_991  field1;
};

static struct StrConcat_1098 StrConcat_1098_StrConcat (  const char*  field0 ,  struct StrConcat_991  field1 ) {
    return ( struct StrConcat_1098 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1097 {
    struct StrConcat_1098  field0;
    char  field1;
};

static struct StrConcat_1097 StrConcat_1097_StrConcat (  struct StrConcat_1098  field0 ,  char  field1 ) {
    return ( struct StrConcat_1097 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1103 (    struct DynStr_136  self1644 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1644 ) .f_contents ) .f_count ) ,  ( ( (  self1644 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1102 (    struct StrConcat_995  self1203 ) {
    struct StrConcat_995  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1103 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1101 (    struct Mode_904  self2857 ) {
    struct Mode_904  dref2858 = (  self2857 );
    if ( dref2858.tag == Mode_904_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2858.tag == Mode_904_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2858.tag == Mode_904_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2858.tag == Mode_904_Cmd_t ) {
        struct DynStr_136  ss2860 = ( (  as_dash_str997 ) ( ( & ( dref2858 .stuff .Mode_904_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str1102 ) ( ( ( StrConcat_995_StrConcat ) ( ( "Cmd " ) ,  (  ss2860 ) ) ) ) );
    }
    else if ( dref2858.tag == Mode_904_SearchBox_t ) {
        struct DynStr_136  ss2862 = ( (  as_dash_str997 ) ( ( & ( dref2858 .stuff .Mode_904_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str1102 ) ( ( ( StrConcat_995_StrConcat ) ( ( "Search " ) ,  (  ss2862 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1100 (    struct StrConcat_991  self1203 ) {
    struct StrConcat_991  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1101 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1099 (    struct StrConcat_1098  self1203 ) {
    struct StrConcat_1098  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1100 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1096 (    struct StrConcat_1097  self1203 ) {
    struct StrConcat_1097  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1099 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1106 {
    const char*  field0;
    struct StrConcat_1078  field1;
};

static struct StrConcat_1106 StrConcat_1106_StrConcat (  const char*  field0 ,  struct StrConcat_1078  field1 ) {
    return ( struct StrConcat_1106 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1105 {
    struct StrConcat_1106  field0;
    char  field1;
};

static struct StrConcat_1105 StrConcat_1105_StrConcat (  struct StrConcat_1106  field0 ,  char  field1 ) {
    return ( struct StrConcat_1105 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1107 (    struct StrConcat_1106  self1203 ) {
    struct StrConcat_1106  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str1079 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1104 (    struct StrConcat_1105  self1203 ) {
    struct StrConcat_1105  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1107 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1111 {
    struct StrConcat_1006  field0;
    char  field1;
};

static struct StrConcat_1111 StrConcat_1111_StrConcat (  struct StrConcat_1006  field0 ,  char  field1 ) {
    return ( struct StrConcat_1111 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1110 {
    struct StrConcat_1111  field0;
    uint32_t  field1;
};

static struct StrConcat_1110 StrConcat_1110_StrConcat (  struct StrConcat_1111  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1110 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1109 {
    struct StrConcat_1110  field0;
    char  field1;
};

static struct StrConcat_1109 StrConcat_1109_StrConcat (  struct StrConcat_1110  field0 ,  char  field1 ) {
    return ( struct StrConcat_1109 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1114 (    struct StrConcat_1006  self1203 ) {
    struct StrConcat_1006  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str984 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1113 (    struct StrConcat_1111  self1203 ) {
    struct StrConcat_1111  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1114 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1112 (    struct StrConcat_1110  self1203 ) {
    struct StrConcat_1110  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1113 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str984 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1108 (    struct StrConcat_1109  self1203 ) {
    struct StrConcat_1109  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1112 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1117 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_1117 StrConcat_1117_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1117 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1116 {
    struct StrConcat_1117  field0;
    char  field1;
};

static struct StrConcat_1116 StrConcat_1116_StrConcat (  struct StrConcat_1117  field0 ,  char  field1 ) {
    return ( struct StrConcat_1116 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1118 (    struct StrConcat_1117  self1203 ) {
    struct StrConcat_1117  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str986 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1115 (    struct StrConcat_1116  self1203 ) {
    struct StrConcat_1116  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1118 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1123 {
    struct StrConcat_1116  field0;
    uint8_t  field1;
};

static struct StrConcat_1123 StrConcat_1123_StrConcat (  struct StrConcat_1116  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1123 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1122 {
    struct StrConcat_1123  field0;
    char  field1;
};

static struct StrConcat_1122 StrConcat_1122_StrConcat (  struct StrConcat_1123  field0 ,  char  field1 ) {
    return ( struct StrConcat_1122 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1121 {
    struct StrConcat_1122  field0;
    uint8_t  field1;
};

static struct StrConcat_1121 StrConcat_1121_StrConcat (  struct StrConcat_1122  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1121 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1120 {
    struct StrConcat_1121  field0;
    char  field1;
};

static struct StrConcat_1120 StrConcat_1120_StrConcat (  struct StrConcat_1121  field0 ,  char  field1 ) {
    return ( struct StrConcat_1120 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1126 (    struct StrConcat_1123  self1203 ) {
    struct StrConcat_1123  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1115 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str986 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1125 (    struct StrConcat_1122  self1203 ) {
    struct StrConcat_1122  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1126 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1124 (    struct StrConcat_1121  self1203 ) {
    struct StrConcat_1121  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1125 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str986 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1119 (    struct StrConcat_1120  self1203 ) {
    struct StrConcat_1120  dref1204 = (  self1203 );
    if ( true ) {
        ( (  print_dash_str1124 ) ( ( dref1204 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1204 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_421   chars1127 (    struct StrConcat_991  self1209 ) {
    return ( (  into_dash_iter990 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_428   chars1128 (    struct StrConcat_1006  self1209 ) {
    return ( (  into_dash_iter1005 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_432   chars1129 (    struct StrConcat_1008  self1209 ) {
    return ( (  into_dash_iter1007 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_442   chars1130 (    struct StrConcat_1032  self1209 ) {
    return ( (  into_dash_iter1031 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_453   chars1131 (    struct StrConcat_1041  self1209 ) {
    return ( (  into_dash_iter1040 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_421   chars1132 (    struct StrConcat_1046  self1209 ) {
    return ( (  into_dash_iter1045 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_421   chars1133 (    struct StrConcat_1060  self1209 ) {
    return ( (  into_dash_iter1059 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_457   chars1134 (    struct StrConcat_1064  self1209 ) {
    return ( (  into_dash_iter1063 ) ( (  self1209 ) ) );
}

static  struct StrConcatIter_462   chars1135 (    struct StrConcat_1075  self1209 ) {
    return ( (  into_dash_iter1074 ) ( (  self1209 ) ) );
}

static  struct TakeWhile_558   chars1136 (    struct TakeWhile_558  self1319 ) {
    return (  self1319 );
}

static  struct TakeWhile_562   chars1137 (    struct TakeWhile_562  self1319 ) {
    return (  self1319 );
}

static  struct TakeWhile_567   chars1138 (    struct TakeWhile_567  self1319 ) {
    return (  self1319 );
}

static  struct TakeWhile_579   chars1139 (    struct TakeWhile_579  self1319 ) {
    return (  self1319 );
}

static  struct TakeWhile_569   chars1140 (    struct TakeWhile_569  self1319 ) {
    return (  self1319 );
}

static  bool   eq1141 (    struct TakeWhile_579  l1329 ,    const char*  r1331 ) {
    struct TakeWhile_579  temp1142 = ( (  chars1139 ) ( (  l1329 ) ) );
    struct TakeWhile_579 *  l1332 = ( &temp1142 );
    struct ConstStrIter_350  temp1143 = ( (  chars978 ) ( (  r1331 ) ) );
    struct ConstStrIter_350 *  r1333 = ( &temp1143 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1334 = ( (  next578 ) ( (  l1332 ) ) );
        struct Maybe_49  mrc1335 = ( (  next367 ) ( (  r1333 ) ) );
        struct Tuple2_50  dref1336 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1334 ) ,  (  mrc1335 ) ) );
        if ( dref1336 .field0.tag == Maybe_49_None_t && dref1336 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1336 .field0.tag == Maybe_49_Just_t && dref1336 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1336 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1336 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1144 (    struct TakeWhile_569  l1329 ,    char  r1331 ) {
    struct TakeWhile_569  temp1145 = ( (  chars1140 ) ( (  l1329 ) ) );
    struct TakeWhile_569 *  l1332 = ( &temp1145 );
    struct AppendIter_425  temp1146 = ( (  chars979 ) ( (  r1331 ) ) );
    struct AppendIter_425 *  r1333 = ( &temp1146 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1334 = ( (  next580 ) ( (  l1332 ) ) );
        struct Maybe_49  mrc1335 = ( (  next488 ) ( (  r1333 ) ) );
        struct Tuple2_50  dref1336 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1334 ) ,  (  mrc1335 ) ) );
        if ( dref1336 .field0.tag == Maybe_49_None_t && dref1336 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1336 .field0.tag == Maybe_49_Just_t && dref1336 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1336 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1336 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1147 (    struct TakeWhile_569  l1329 ,    const char*  r1331 ) {
    struct TakeWhile_569  temp1148 = ( (  chars1140 ) ( (  l1329 ) ) );
    struct TakeWhile_569 *  l1332 = ( &temp1148 );
    struct ConstStrIter_350  temp1149 = ( (  chars978 ) ( (  r1331 ) ) );
    struct ConstStrIter_350 *  r1333 = ( &temp1149 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1334 = ( (  next580 ) ( (  l1332 ) ) );
        struct Maybe_49  mrc1335 = ( (  next367 ) ( (  r1333 ) ) );
        struct Tuple2_50  dref1336 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1334 ) ,  (  mrc1335 ) ) );
        if ( dref1336 .field0.tag == Maybe_49_None_t && dref1336 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1336 .field0.tag == Maybe_49_Just_t && dref1336 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1336 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1336 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t   char_dash_u81150 (    char  c1349 ) {
    return ( (  cast220 ) ( (  c1349 ) ) );
}

static  char   i32_dash_char1151 (    int32_t  i1352 ) {
    return ( (  cast222 ) ( (  i1352 ) ) );
}

static  bool   eq1152 (    const char*  l1365 ,    const char*  r1367 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1365 ) ,  (  r1367 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable1153 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined163 ) ( ) );
}

static  enum Unit_13   unreachable1154 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined165 ) ( ) );
}

static  enum Unit_13   panic1155 (    const char*  errmsg1380 ) {
    ( (  print_dash_str1076 ) ( ( ( StrConcat_1077_StrConcat ) ( ( ( StrConcat_1078_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1156 (    struct StrConcat_1077  errmsg1380 ) {
    ( (  print_dash_str1080 ) ( ( ( StrConcat_1081_StrConcat ) ( ( ( StrConcat_1082_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1157 (    struct StrConcat_1024  errmsg1380 ) {
    ( (  print_dash_str1084 ) ( ( ( StrConcat_1085_StrConcat ) ( ( ( StrConcat_1086_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1158 (    struct StrConcat_1093  errmsg1380 ) {
    ( (  print_dash_str1090 ) ( ( ( StrConcat_1091_StrConcat ) ( ( ( StrConcat_1092_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1159 (    struct StrConcat_991  errmsg1380 ) {
    ( (  print_dash_str1096 ) ( ( ( StrConcat_1097_StrConcat ) ( ( ( StrConcat_1098_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1160 (    struct StrConcat_1078  errmsg1380 ) {
    ( (  print_dash_str1104 ) ( ( ( StrConcat_1105_StrConcat ) ( ( ( StrConcat_1106_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1380 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   panic_prime_1161 (    const char*  errmsg1383 ) {
    ( (  print_dash_str1076 ) ( ( ( StrConcat_1077_StrConcat ) ( ( ( StrConcat_1078_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1383 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   assert1162 (    bool  cond1386 ,    const char*  msg1388 ) {
    if ( ( ! (  cond1386 ) ) ) {
        ( (  print_dash_str1076 ) ( ( ( StrConcat_1077_StrConcat ) ( ( ( StrConcat_1078_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1388 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1163 (    struct Maybe_308  x1393 ,    struct StrConcat_14  errmsg1395 ) {
    struct Maybe_308  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_308_None_t ) {
        ( (  panic12 ) ( (  errmsg1395 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_308_Just_t ) {
        return ( dref1396 .stuff .Maybe_308_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1164 (    struct Maybe_356  x1393 ,    struct StrConcat_1077  errmsg1395 ) {
    struct Maybe_356  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_356_None_t ) {
        ( (  panic1156 ) ( (  errmsg1395 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_356_Just_t ) {
        return ( dref1396 .stuff .Maybe_356_Just_s .field0 );
    }
}

struct Maybe_1166 {
    enum {
        Maybe_1166_None_t,
        Maybe_1166_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58  field0;
        } Maybe_1166_Just_s;
    } stuff;
};

static struct Maybe_1166 Maybe_1166_Just (  struct Cell_58  field0 ) {
    return ( struct Maybe_1166 ) { .tag = Maybe_1166_Just_t, .stuff = { .Maybe_1166_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58   or_dash_fail1165 (    struct Maybe_1166  x1393 ,    struct StrConcat_14  errmsg1395 ) {
    struct Maybe_1166  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_1166_None_t ) {
        ( (  panic12 ) ( (  errmsg1395 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_1166_Just_t ) {
        return ( dref1396 .stuff .Maybe_1166_Just_s .field0 );
    }
}

struct Maybe_1168 {
    enum {
        Maybe_1168_None_t,
        Maybe_1168_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1168_Just_s;
    } stuff;
};

static struct Maybe_1168 Maybe_1168_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1168 ) { .tag = Maybe_1168_Just_t, .stuff = { .Maybe_1168_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1167 (    struct Maybe_1168  x1393 ,    struct StrConcat_1024  errmsg1395 ) {
    struct Maybe_1168  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_1168_None_t ) {
        ( (  panic1157 ) ( (  errmsg1395 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_1168_Just_t ) {
        return ( dref1396 .stuff .Maybe_1168_Just_s .field0 );
    }
}

static  struct Action_152   or_dash_fail1169 (    struct Maybe_471  x1393 ,    struct StrConcat_14  errmsg1395 ) {
    struct Maybe_471  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_471_None_t ) {
        ( (  panic12 ) ( (  errmsg1395 ) ) );
        return ( (  undefined151 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_471_Just_t ) {
        return ( dref1396 .stuff .Maybe_471_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1170 (    struct Maybe_356  x1393 ,    const char*  errmsg1395 ) {
    struct Maybe_356  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_356_None_t ) {
        ( (  panic1155 ) ( (  errmsg1395 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_356_Just_t ) {
        return ( dref1396 .stuff .Maybe_356_Just_s .field0 );
    }
}

static  struct List_160   or_dash_fail1171 (    struct Maybe_895  x1393 ,    const char*  errmsg1395 ) {
    struct Maybe_895  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_895_None_t ) {
        ( (  panic1155 ) ( (  errmsg1395 ) ) );
        return ( (  undefined159 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_895_Just_t ) {
        return ( dref1396 .stuff .Maybe_895_Just_s .field0 );
    }
}

struct Maybe_1173 {
    enum {
        Maybe_1173_None_t,
        Maybe_1173_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58 *  field0;
        } Maybe_1173_Just_s;
    } stuff;
};

static struct Maybe_1173 Maybe_1173_Just (  struct Cell_58 *  field0 ) {
    return ( struct Maybe_1173 ) { .tag = Maybe_1173_Just_t, .stuff = { .Maybe_1173_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58 *   or_dash_fail1172 (    struct Maybe_1173  x1393 ,    const char*  errmsg1395 ) {
    struct Maybe_1173  dref1396 = (  x1393 );
    if ( dref1396.tag == Maybe_1173_None_t ) {
        ( (  panic1155 ) ( (  errmsg1395 ) ) );
        return ( (  undefined167 ) ( ) );
    }
    else if ( dref1396.tag == Maybe_1173_Just_t ) {
        return ( dref1396 .stuff .Maybe_1173_Just_s .field0 );
    }
}

static  struct Cursor_154   or_dash_else1174 (    struct Maybe_157  self1400 ,    struct Cursor_154  alt1402 ) {
    struct Maybe_157  dref1403 = (  self1400 );
    if ( dref1403.tag == Maybe_157_None_t ) {
        return (  alt1402 );
    }
    else if ( dref1403.tag == Maybe_157_Just_t ) {
        return ( dref1403 .stuff .Maybe_157_Just_s .field0 );
    }
}

static  struct Slice_322   empty1175 (  ) {
    return ( (struct Slice_322) { .f_ptr = ( (  null_dash_ptr298 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1176 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr299 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_410   empty1177 (  ) {
    return ( (struct Slice_410) { .f_ptr = ( (  null_dash_ptr301 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_161   empty1178 (  ) {
    return ( (struct Slice_161) { .f_ptr = ( (  null_dash_ptr303 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1179 (    struct Slice_322  slice1426 ,    size_t  i1428 ) {
    if ( ( (  cmp9 ( (  i1428 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1428 ) , ( (  slice1426 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1428 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1426 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1429 = ( (  offset_dash_ptr171 ) ( ( (  slice1426 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1428 ) ) ) ) );
    return (  elem_dash_ptr1429 );
}

static  struct Cell_58 *   get_dash_ptr1180 (    struct Slice_633  slice1426 ,    size_t  i1428 ) {
    if ( ( (  cmp9 ( (  i1428 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1428 ) , ( (  slice1426 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1428 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1426 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1429 = ( (  offset_dash_ptr177 ) ( ( (  slice1426 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1428 ) ) ) ) );
    return (  elem_dash_ptr1429 );
}

static  struct Either_182 *   get_dash_ptr1181 (    struct Slice_410  slice1426 ,    size_t  i1428 ) {
    if ( ( (  cmp9 ( (  i1428 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1428 ) , ( (  slice1426 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1428 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1426 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Either_182 *  elem_dash_ptr1429 = ( (  offset_dash_ptr181 ) ( ( (  slice1426 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1428 ) ) ) ) );
    return (  elem_dash_ptr1429 );
}

static  struct Action_152 *   get_dash_ptr1182 (    struct Slice_161  slice1426 ,    size_t  i1428 ) {
    if ( ( (  cmp9 ( (  i1428 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1428 ) , ( (  slice1426 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1428 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1426 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Action_152 *  elem_dash_ptr1429 = ( (  offset_dash_ptr179 ) ( ( (  slice1426 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1428 ) ) ) ) );
    return (  elem_dash_ptr1429 );
}

struct Slice_1184 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_308   try_dash_get1183 (    struct Slice_1184  slice1432 ,    size_t  i1434 ) {
    if ( ( (  cmp9 ( (  i1434 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1434 ) , ( (  slice1432 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    const char* *  elem_dash_ptr1435 = ( (  offset_dash_ptr169 ) ( ( (  slice1432 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1434 ) ) ) ) );
    return ( ( Maybe_308_Just ) ( ( * (  elem_dash_ptr1435 ) ) ) );
}

static  struct Maybe_1166   try_dash_get1185 (    struct Slice_633  slice1432 ,    size_t  i1434 ) {
    if ( ( (  cmp9 ( (  i1434 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1434 ) , ( (  slice1432 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1166) { .tag = Maybe_1166_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1435 = ( (  offset_dash_ptr177 ) ( ( (  slice1432 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1434 ) ) ) ) );
    return ( ( Maybe_1166_Just ) ( ( * (  elem_dash_ptr1435 ) ) ) );
}

static  struct Maybe_471   try_dash_get1186 (    struct Slice_161  slice1432 ,    size_t  i1434 ) {
    if ( ( (  cmp9 ( (  i1434 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1434 ) , ( (  slice1432 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_471) { .tag = Maybe_471_None_t } );
    }
    struct Action_152 *  elem_dash_ptr1435 = ( (  offset_dash_ptr179 ) ( ( (  slice1432 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1434 ) ) ) ) );
    return ( ( Maybe_471_Just ) ( ( * (  elem_dash_ptr1435 ) ) ) );
}

static  const char*   get1187 (    struct Slice_1184  slice1438 ,    size_t  i1440 ) {
    return ( (  or_dash_fail1163 ) ( ( (  try_dash_get1183 ) ( (  slice1438 ) ,  (  i1440 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1440 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1438 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1188 (    struct Slice_633  slice1438 ,    size_t  i1440 ) {
    return ( (  or_dash_fail1165 ) ( ( (  try_dash_get1185 ) ( (  slice1438 ) ,  (  i1440 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1440 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1438 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Action_152   get1189 (    struct Slice_161  slice1438 ,    size_t  i1440 ) {
    return ( (  or_dash_fail1169 ) ( ( (  try_dash_get1186 ) ( (  slice1438 ) ,  (  i1440 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1440 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1438 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1190 (    struct Slice_322  slice1443 ,    size_t  i1445 ,    struct List_3  x1447 ) {
    struct List_3 *  ep1448 = ( (  get_dash_ptr1179 ) ( (  slice1443 ) ,  (  i1445 ) ) );
    (*  ep1448 ) = (  x1447 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1191 (    struct Slice_5  slice1443 ,    size_t  i1445 ,    char  x1447 ) {
    char *  ep1448 = ( (  get_dash_ptr30 ) ( (  slice1443 ) ,  (  i1445 ) ) );
    (*  ep1448 ) = (  x1447 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1192 (    struct Slice_633  slice1443 ,    size_t  i1445 ,    struct Cell_58  x1447 ) {
    struct Cell_58 *  ep1448 = ( (  get_dash_ptr1180 ) ( (  slice1443 ) ,  (  i1445 ) ) );
    (*  ep1448 ) = (  x1447 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1193 (    struct Slice_410  slice1443 ,    size_t  i1445 ,    struct Either_182  x1447 ) {
    struct Either_182 *  ep1448 = ( (  get_dash_ptr1181 ) ( (  slice1443 ) ,  (  i1445 ) ) );
    (*  ep1448 ) = (  x1447 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1194 (    struct Slice_161  slice1443 ,    size_t  i1445 ,    struct Action_152  x1447 ) {
    struct Action_152 *  ep1448 = ( (  get_dash_ptr1182 ) ( (  slice1443 ) ,  (  i1445 ) ) );
    (*  ep1448 ) = (  x1447 );
    return ( Unit_13_Unit );
}

static  struct Slice_410   subslice1195 (    struct Slice_410  slice1451 ,    size_t  from1453 ,    size_t  to1455 ) {
    struct Either_182 *  begin_dash_ptr1456 = ( (  offset_dash_ptr181 ) ( ( (  slice1451 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1453 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1453 ) , (  to1455 ) ) != 0 ) || (  cmp9 ( (  from1453 ) , ( (  slice1451 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_410) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1457 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1455 ) ,  ( (  slice1451 ) .f_count ) ) ) , (  from1453 ) ) );
    return ( (struct Slice_410) { .f_ptr = (  begin_dash_ptr1456 ) , .f_count = (  count1457 ) } );
}

static  struct Slice_5   from1196 (    struct Slice_5  slice1460 ,    size_t  from1462 ) {
    return ( (  subslice335 ) ( (  slice1460 ) ,  (  from1462 ) ,  ( (  slice1460 ) .f_count ) ) );
}

static  struct Slice_410   from1197 (    struct Slice_410  slice1460 ,    size_t  from1462 ) {
    return ( (  subslice1195 ) ( (  slice1460 ) ,  (  from1462 ) ,  ( (  slice1460 ) .f_count ) ) );
}

static  struct Slice_322   from1198 (    struct Slice_322  slice1460 ,    size_t  from1462 ) {
    return ( (  subslice326 ) ( (  slice1460 ) ,  (  from1462 ) ,  ( (  slice1460 ) .f_count ) ) );
}

static  struct SliceAddressIter_706   addresses1199 (    struct Slice_322  slice1509 ) {
    return ( (struct SliceAddressIter_706) { .f_slice = (  slice1509 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam645 (   struct env645 env ,    struct Tuple2_387  dref1523 ) {
    return ( (  set1191 ) ( ( env.dest1522 ) ,  ( (  i32_dash_size311 ) ( ( dref1523 .field1 ) ) ) ,  ( dref1523 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1200 (    struct Slice_5  src1520 ,    struct Slice_5  dest1522 ) {
    if ( (  cmp9 ( ( (  src1520 ) .f_count ) , ( (  dest1522 ) .f_count ) ) == 2 ) ) {
        ( (  panic1158 ) ( ( ( StrConcat_1093_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1520 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1522 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env645 envinst645 = {
        .dest1522 =  dest1522 ,
    };
    ( (  for_dash_each644 ) ( ( (  zip529 ) ( (  src1520 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv645){ .fun = lam645, .env = envinst645 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam661 (   struct env661 env ,    struct Tuple2_392  dref1523 ) {
    return ( (  set1190 ) ( ( env.dest1522 ) ,  ( (  i32_dash_size311 ) ( ( dref1523 .field1 ) ) ) ,  ( dref1523 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1201 (    struct Slice_322  src1520 ,    struct Slice_322  dest1522 ) {
    if ( (  cmp9 ( ( (  src1520 ) .f_count ) , ( (  dest1522 ) .f_count ) ) == 2 ) ) {
        ( (  panic1158 ) ( ( ( StrConcat_1093_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1520 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1522 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env661 envinst661 = {
        .dest1522 =  dest1522 ,
    };
    ( (  for_dash_each660 ) ( ( (  zip528 ) ( (  src1520 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv661){ .fun = lam661, .env = envinst661 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1203 (    struct Tuple2_475  dref1531 ) {
    return (  eq47 ( ( dref1531 .field0 ) , ( dref1531 .field1 ) ) );
}

static  bool   eq1202 (    struct Slice_5  l1528 ,    struct Slice_5  r1530 ) {
    if ( ( !  eq45 ( ( (  l1528 ) .f_count ) , ( (  r1530 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all874 ) ( ( (  zip536 ) ( (  l1528 ) ,  (  r1530 ) ) ) ,  (  lam1203 ) ) );
}

static  const char*   elem_dash_get1204 (    struct Slice_1184  self1536 ,    size_t  idx1538 ) {
    return ( (  get1187 ) ( (  self1536 ) ,  (  idx1538 ) ) );
}

static  struct Cell_58   elem_dash_get1205 (    struct Slice_633  self1536 ,    size_t  idx1538 ) {
    return ( (  get1188 ) ( (  self1536 ) ,  (  idx1538 ) ) );
}

static  char   elem_dash_get1206 (    struct Slice_5  self1536 ,    size_t  idx1538 ) {
    return ( (  get358 ) ( (  self1536 ) ,  (  idx1538 ) ) );
}

static  struct Action_152   elem_dash_get1207 (    struct Slice_161  self1536 ,    size_t  idx1538 ) {
    return ( (  get1189 ) ( (  self1536 ) ,  (  idx1538 ) ) );
}

struct SliceReversedIter_1209 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1209   reversed1208 (    struct Slice_161  slice1564 ) {
    return ( (struct SliceReversedIter_1209) { .f_slice = (  slice1564 ) , .f_current_dash_offset = ( (  slice1564 ) .f_count ) } );
}

static  struct SliceReversedIter_1209   into_dash_iter1210 (    struct SliceReversedIter_1209  self1567 ) {
    return (  self1567 );
}

static  struct Maybe_471   next1211 (    struct SliceReversedIter_1209 *  self1570 ) {
    size_t  off1571 = ( ( * (  self1570 ) ) .f_current_dash_offset );
    if ( (  eq45 ( (  off1571 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_471) { .tag = Maybe_471_None_t } );
    }
    (*  self1570 ) .f_current_dash_offset = (  op_dash_sub99 ( (  off1571 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_471_Just ) ( (  elem_dash_get1207 ( ( ( * (  self1570 ) ) .f_slice ) , ( ( * (  self1570 ) ) .f_current_dash_offset ) ) ) ) );
}

static  enum Unit_13   lam632 (   struct env632 env ,    int32_t  i1578 ) {
    return ( (  set1192 ) ( ( env.s1574 ) ,  ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ,  ( ( env.fun1576 ) ( (  elem_dash_get1205 ( ( env.s1574 ) , ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1212 (    struct Slice_633  s1574 ,    struct Cell_58 (*  fun1576 )(    struct Cell_58  ) ) {
    struct env632 envinst632 = {
        .fun1576 =  fun1576 ,
        .s1574 =  s1574 ,
    };
    ( (  for_dash_each631 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1574 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv632){ .fun = lam632, .env = envinst632 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam637 (   struct env637 env ,    int32_t  i1578 ) {
    return ( (  set1192 ) ( ( env.s1574 ) ,  ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ,  ( ( env.fun1576 ) ( (  elem_dash_get1205 ( ( env.s1574 ) , ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1213 (    struct Slice_633  s1574 ,    struct Cell_58 (*  fun1576 )(    struct Cell_58  ) ) {
    struct env637 envinst637 = {
        .fun1576 =  fun1576 ,
        .s1574 =  s1574 ,
    };
    ( (  for_dash_each636 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1574 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv637){ .fun = lam637, .env = envinst637 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam717 (   struct env717 env ,    int32_t  i1578 ) {
    return ( (  set1192 ) ( ( env.s1574 ) ,  ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ,  ( ( env.fun1576 ) ( (  elem_dash_get1205 ( ( env.s1574 ) , ( (  i32_dash_size311 ) ( (  i1578 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1214 (    struct Slice_633  s1574 ,    struct Cell_58 (*  fun1576 )(    struct Cell_58  ) ) {
    struct env717 envinst717 = {
        .fun1576 =  fun1576 ,
        .s1574 =  s1574 ,
    };
    ( (  for_dash_each716 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1574 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv717){ .fun = lam717, .env = envinst717 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_913   find_dash_slice1215 (    struct Slice_5  haystack1581 ,    struct Slice_5  needle1583 ) {
    struct RangeIter_403  temp1216 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1581 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1583 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1217 =  next404 (&temp1216);
        if (  __cond1217 .tag == 0 ) {
            break;
        }
        int32_t  i1585 =  __cond1217 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1202 ( ( (  subslice335 ) ( (  haystack1581 ) ,  ( (  i32_dash_size311 ) ( (  i1585 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1585 ) ) ) , ( (  needle1583 ) .f_count ) ) ) ) ) , (  needle1583 ) ) ) ) {
            return ( ( Maybe_913_Just ) ( ( (  i32_dash_size311 ) ( (  i1585 ) ) ) ) );
        }
    }
    return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
}

static  struct Maybe_913   find_dash_last_dash_occurence_dash_of_dash_slice1218 (    struct Slice_5  haystack1588 ,    struct Slice_5  needle1590 ) {
    struct Maybe_913  occ1591 = ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    struct RangeIter_403  temp1219 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1588 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1590 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1220 =  next404 (&temp1219);
        if (  __cond1220 .tag == 0 ) {
            break;
        }
        int32_t  i1593 =  __cond1220 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1202 ( ( (  subslice335 ) ( (  haystack1588 ) ,  ( (  i32_dash_size311 ) ( (  i1593 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1593 ) ) ) , ( (  needle1590 ) .f_count ) ) ) ) ) , (  needle1590 ) ) ) ) {
            occ1591 = ( ( Maybe_913_Just ) ( ( (  i32_dash_size311 ) ( (  i1593 ) ) ) ) );
        }
    }
    return (  occ1591 );
}

static  enum CAllocator_4   idc1221 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_322   allocate1222 (    enum CAllocator_4  dref1605 ,    size_t  count1607 ) {
    if (!(  dref1605 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1608 = ( ( ( (  get_dash_typesize184 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1609 = ( (  cast_dash_ptr231 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1608 ) , (  count1607 ) ) ) ) ) ) );
    return ( (struct Slice_322) { .f_ptr = (  ptr1609 ) , .f_count = (  count1607 ) } );
}

static  struct Slice_5   allocate1223 (    enum CAllocator_4  dref1605 ,    size_t  count1607 ) {
    if (!(  dref1605 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1608 = ( ( ( (  get_dash_typesize187 ) ( ) ) ) .f_size );
    char *  ptr1609 = ( (  cast_dash_ptr234 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1608 ) , (  count1607 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1609 ) , .f_count = (  count1607 ) } );
}

static  struct Slice_633   allocate1224 (    enum CAllocator_4  dref1605 ,    size_t  count1607 ) {
    if (!(  dref1605 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1608 = ( ( ( (  get_dash_typesize190 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1609 = ( (  cast_dash_ptr245 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1608 ) , (  count1607 ) ) ) ) ) ) );
    return ( (struct Slice_633) { .f_ptr = (  ptr1609 ) , .f_count = (  count1607 ) } );
}

static  struct Slice_410   allocate1225 (    enum CAllocator_4  dref1605 ,    size_t  count1607 ) {
    if (!(  dref1605 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1608 = ( ( ( (  get_dash_typesize193 ) ( ) ) ) .f_size );
    struct Either_182 *  ptr1609 = ( (  cast_dash_ptr254 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1608 ) , (  count1607 ) ) ) ) ) ) );
    return ( (struct Slice_410) { .f_ptr = (  ptr1609 ) , .f_count = (  count1607 ) } );
}

static  struct Slice_161   allocate1226 (    enum CAllocator_4  dref1605 ,    size_t  count1607 ) {
    if (!(  dref1605 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1608 = ( ( ( (  get_dash_typesize196 ) ( ) ) ) .f_size );
    struct Action_152 *  ptr1609 = ( (  cast_dash_ptr255 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1608 ) , (  count1607 ) ) ) ) ) ) );
    return ( (struct Slice_161) { .f_ptr = (  ptr1609 ) , .f_count = (  count1607 ) } );
}

static  enum Unit_13   free1227 (    enum CAllocator_4  dref1611 ,    struct Slice_322  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr230 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1228 (    enum CAllocator_4  dref1611 ,    struct Slice_5  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr233 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1229 (    enum CAllocator_4  dref1611 ,    struct Slice_161  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr252 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1230 (    enum CAllocator_4  dref1611 ,    struct Slice_410  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr253 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1232 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1231 (    enum CAllocator_4  dref1611 ,    struct Slice_1232  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr257 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1233 (    enum CAllocator_4  dref1611 ,    struct Slice_633  slice1613 ) {
    if (!(  dref1611 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr259 ) ( ( (  slice1613 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct DynStr_136   clone_dash_01234 (    struct DynStr_136  s1664 ,    enum CAllocator_4  al1666 ) {
    size_t  cnt1667 = ( ( (  s1664 ) .f_contents ) .f_count );
    struct Slice_5  nus1668 = ( (  allocate1223 ) ( (  al1666 ) ,  (  op_dash_add98 ( (  cnt1667 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to1200 ) ( ( (  s1664 ) .f_contents ) ,  (  nus1668 ) ) );
    ( (  set1191 ) ( (  nus1668 ) ,  (  cnt1667 ) ,  ( (  from_dash_charlike1 ) ( ( "\x00" ) ) ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( (  nus1668 ) .f_ptr ) , .f_count = (  cnt1667 ) } ) } );
}

static  struct DynStr_136   clone1235 (    struct DynStr_136  s1671 ,    enum CAllocator_4  al1673 ) {
    return ( (  clone_dash_01234 ) ( (  s1671 ) ,  (  al1673 ) ) );
}

static  uint8_t *   get_dash_ptr1236 (    struct Array_142 *  arr1694 ,    size_t  i1697 ) {
    if ( ( (  cmp9 ( (  i1697 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1697 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic777 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1697 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1698 = ( ( (  cast_dash_ptr244 ) ( (  arr1694 ) ) ) );
    return ( (  offset_dash_ptr175 ) ( (  p1698 ) ,  ( (int64_t ) (  i1697 ) ) ) );
}

static  char *   get_dash_ptr1237 (    struct Array_210 *  arr1694 ,    size_t  i1697 ) {
    if ( ( (  cmp9 ( (  i1697 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1697 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic777 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1697 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1698 = ( ( (  cast_dash_ptr251 ) ( (  arr1694 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1698 ) ,  ( (int64_t ) (  i1697 ) ) ) );
}

static  enum Unit_13   set1238 (    struct Array_142 *  arr1707 ,    size_t  i1710 ,    uint8_t  e1712 ) {
    uint8_t *  p1713 = ( (  get_dash_ptr1236 ) ( (  arr1707 ) ,  (  i1710 ) ) );
    (*  p1713 ) = (  e1712 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1239 (    struct Array_210 *  arr1707 ,    size_t  i1710 ,    char  e1712 ) {
    char *  p1713 = ( (  get_dash_ptr1237 ) ( (  arr1707 ) ,  (  i1710 ) ) );
    (*  p1713 ) = (  e1712 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1240 (    struct Array_210 *  arr1716 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast224 ) ( (  arr1716 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1241 (    char  c1777 ) {
    return ( ( (  eq47 ( (  c1777 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1777 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1777 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1242 (    char  c1780 ) {
    return ( ! ( (  is_dash_whitespace1241 ) ( (  c1780 ) ) ) );
}

static  bool   is_dash_alpha1243 (    char  c1786 ) {
    return ( ( (  between975 ) ( (  c1786 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between975 ) ( (  c1786 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1244 (    char  c1789 ) {
    return ( (  between975 ) ( (  c1789 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1245 (    char  c1792 ) {
    return ( ( (  is_dash_alpha1243 ) ( (  c1792 ) ) ) || ( (  is_dash_digit1244 ) ( (  c1792 ) ) ) );
}

static  struct LineIter_342   lines1246 (    struct DynStr_136  s1796 ) {
    return ( (struct LineIter_342) { .f_og = (  s1796 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1247 (    char  c1825 ) {
    return ( (  cmp80 ( ( (  char_dash_i32971 ) ( (  c1825 ) ) ) , ( (  char_dash_i32971 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32971 ) ( (  c1825 ) ) ) , ( (  char_dash_i32971 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_369   parse_dash_digit1248 (    char  c1828 ) {
    if ( ( (  is_dash_digit1247 ) ( (  c1828 ) ) ) ) {
        return ( ( Maybe_369_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32971 ) ( (  c1828 ) ) ) , ( (  char_dash_i32971 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
}

static  struct Maybe_807   sequence_dash_maybe1250 (    char  e1834 ,    struct Maybe_807  b1836 ) {
    struct Maybe_807  dref1837 = (  b1836 );
    if ( dref1837.tag == Maybe_807_None_t ) {
        return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
    }
    else if ( dref1837.tag == Maybe_807_Just_t ) {
        struct Maybe_369  dref1839 = ( (  parse_dash_digit1248 ) ( (  e1834 ) ) );
        if ( dref1839.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
        }
        else if ( dref1839.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_807_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1837 .stuff .Maybe_807_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1839 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_807   parse_dash_int1249 (    struct TakeWhile_558  s1831 ) {
    struct TakeWhile_558  cs1841 = ( (  chars1136 ) ( (  s1831 ) ) );
    struct Maybe_49  dref1842 = ( (  head877 ) ( (  cs1841 ) ) );
    if ( dref1842.tag == Maybe_49_Just_t ) {
        return ( (  reduce806 ) ( (  cs1841 ) ,  ( ( Maybe_807_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1250 ) ) );
    }
    else if ( dref1842.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
    }
}

static  struct Maybe_807   sequence_dash_maybe1252 (    char  e1834 ,    struct Maybe_807  b1836 ) {
    struct Maybe_807  dref1837 = (  b1836 );
    if ( dref1837.tag == Maybe_807_None_t ) {
        return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
    }
    else if ( dref1837.tag == Maybe_807_Just_t ) {
        struct Maybe_369  dref1839 = ( (  parse_dash_digit1248 ) ( (  e1834 ) ) );
        if ( dref1839.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
        }
        else if ( dref1839.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_807_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1837 .stuff .Maybe_807_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1839 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_807   parse_dash_int1251 (    struct TakeWhile_569  s1831 ) {
    struct TakeWhile_569  cs1841 = ( (  chars1140 ) ( (  s1831 ) ) );
    struct Maybe_49  dref1842 = ( (  head883 ) ( (  cs1841 ) ) );
    if ( dref1842.tag == Maybe_49_Just_t ) {
        return ( (  reduce823 ) ( (  cs1841 ) ,  ( ( Maybe_807_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1252 ) ) );
    }
    else if ( dref1842.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1253 (    struct List_323 *  list1847 ,    size_t  i1849 ) {
    if ( ( (  cmp9 ( (  i1849 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1849 ) , ( ( * (  list1847 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1849 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1847 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1179 ) ( ( ( * (  list1847 ) ) .f_elements ) ,  (  i1849 ) ) );
}

static  struct Either_182 *   get_dash_ptr1254 (    struct List_907 *  list1847 ,    size_t  i1849 ) {
    if ( ( (  cmp9 ( (  i1849 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1849 ) , ( ( * (  list1847 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1849 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1847 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1181 ) ( ( ( * (  list1847 ) ) .f_elements ) ,  (  i1849 ) ) );
}

static  struct List_3   get1255 (    struct List_323 *  list1857 ,    size_t  i1859 ) {
    return ( * ( (  get_dash_ptr1253 ) ( (  list1857 ) ,  (  i1859 ) ) ) );
}

static  struct Either_182   get1256 (    struct List_907 *  list1857 ,    size_t  i1859 ) {
    return ( * ( (  get_dash_ptr1254 ) ( (  list1857 ) ,  (  i1859 ) ) ) );
}

static  struct Maybe_49   try_dash_get1257 (    struct List_3 *  list1862 ,    size_t  i1864 ) {
    if ( (  cmp9 ( (  i1864 ) , ( ( * (  list1862 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1862 ) ,  (  i1864 ) ) ) ) );
}

static  struct Maybe_355   try_dash_get1258 (    struct List_323 *  list1862 ,    size_t  i1864 ) {
    if ( (  cmp9 ( (  i1864 ) , ( ( * (  list1862 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    return ( ( Maybe_355_Just ) ( ( (  get1255 ) ( (  list1862 ) ,  (  i1864 ) ) ) ) );
}

static  enum Unit_13   set1259 (    struct List_3 *  list1867 ,    size_t  i1869 ,    char  elem1871 ) {
    if ( ( (  cmp9 ( (  i1869 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1869 ) , ( ( * (  list1867 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1869 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1867 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1191 ) ( ( ( * (  list1867 ) ) .f_elements ) ,  (  i1869 ) ,  (  elem1871 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1260 (    struct List_323 *  list1867 ,    size_t  i1869 ,    struct List_3  elem1871 ) {
    if ( ( (  cmp9 ( (  i1869 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1869 ) , ( ( * (  list1867 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1869 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1867 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1190 ) ( ( ( * (  list1867 ) ) .f_elements ) ,  (  i1869 ) ,  (  elem1871 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_323   mk1261 (    enum CAllocator_4  al1877 ) {
    struct Slice_322  elements1878 = ( (  empty1175 ) ( ) );
    return ( (struct List_323) { .f_al = (  al1877 ) , .f_elements = (  elements1878 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1262 (    enum CAllocator_4  al1877 ) {
    struct Slice_5  elements1878 = ( (  empty1176 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1877 ) , .f_elements = (  elements1878 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_907   mk1263 (    enum CAllocator_4  al1877 ) {
    struct Slice_410  elements1878 = ( (  empty1177 ) ( ) );
    return ( (struct List_907) { .f_al = (  al1877 ) , .f_elements = (  elements1878 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_160   mk1264 (    enum CAllocator_4  al1877 ) {
    struct Slice_161  elements1878 = ( (  empty1178 ) ( ) );
    return ( (struct List_160) { .f_al = (  al1877 ) , .f_elements = (  elements1878 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1265 (    struct List_3 *  list1881 ) {
    ( (  free1228 ) ( ( ( * (  list1881 ) ) .f_al ) ,  ( ( * (  list1881 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1266 (    struct List_160 *  list1881 ) {
    ( (  free1229 ) ( ( ( * (  list1881 ) ) .f_al ) ,  ( ( * (  list1881 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1267 (    struct List_323 *  list1881 ) {
    ( (  free1227 ) ( ( ( * (  list1881 ) ) .f_al ) ,  ( ( * (  list1881 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam608 (   struct env608 env ,    struct Tuple2_392  dref1889 ) {
    return ( (  set1190 ) ( ( env.new_dash_slice1888 ) ,  ( (  i32_dash_size311 ) ( ( dref1889 .field1 ) ) ) ,  ( dref1889 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full622 (   struct env622 env ,    struct List_323 *  list1887 ) {
    if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1887 ) .f_elements = ( (  allocate1222 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( env.starting_dash_size1882 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , ( ( ( * (  list1887 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_322  new_dash_slice1888 = ( (  allocate1222 ) ( ( ( * (  list1887 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1887 ) ) .f_count ) , ( env.growth_dash_factor1883 ) ) ) ) );
            struct env608 envinst608 = {
                .new_dash_slice1888 =  new_dash_slice1888 ,
            };
            ( (  for_dash_each607 ) ( ( (  zip528 ) ( ( ( * (  list1887 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv608){ .fun = lam608, .env = envinst608 } ) ) );
            ( (  free1227 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( ( * (  list1887 ) ) .f_elements ) ) );
            (*  list1887 ) .f_elements = (  new_dash_slice1888 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam612 (   struct env612 env ,    struct Tuple2_387  dref1889 ) {
    return ( (  set1191 ) ( ( env.new_dash_slice1888 ) ,  ( (  i32_dash_size311 ) ( ( dref1889 .field1 ) ) ) ,  ( dref1889 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full347 (   struct env347 env ,    struct List_3 *  list1887 ) {
    if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1887 ) .f_elements = ( (  allocate1223 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( env.starting_dash_size1882 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , ( ( ( * (  list1887 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1888 = ( (  allocate1223 ) ( ( ( * (  list1887 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1887 ) ) .f_count ) , ( env.growth_dash_factor1883 ) ) ) ) );
            struct env612 envinst612 = {
                .new_dash_slice1888 =  new_dash_slice1888 ,
            };
            ( (  for_dash_each611 ) ( ( (  zip529 ) ( ( ( * (  list1887 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv612){ .fun = lam612, .env = envinst612 } ) ) );
            ( (  free1228 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( ( * (  list1887 ) ) .f_elements ) ) );
            (*  list1887 ) .f_elements = (  new_dash_slice1888 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1268 {
    size_t  growth_dash_factor1883;
    ;
    ;
    size_t  starting_dash_size1882;
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

static  enum Unit_13   lam669 (   struct env669 env ,    struct Tuple2_465  dref1889 ) {
    return ( (  set1193 ) ( ( env.new_dash_slice1888 ) ,  ( (  i32_dash_size311 ) ( ( dref1889 .field1 ) ) ) ,  ( dref1889 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1268 (   struct env1268 env ,    struct List_907 *  list1887 ) {
    if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1887 ) .f_elements = ( (  allocate1225 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( env.starting_dash_size1882 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , ( ( ( * (  list1887 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_410  new_dash_slice1888 = ( (  allocate1225 ) ( ( ( * (  list1887 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1887 ) ) .f_count ) , ( env.growth_dash_factor1883 ) ) ) ) );
            struct env669 envinst669 = {
                .new_dash_slice1888 =  new_dash_slice1888 ,
            };
            ( (  for_dash_each668 ) ( ( (  zip532 ) ( ( ( * (  list1887 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv669){ .fun = lam669, .env = envinst669 } ) ) );
            ( (  free1230 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( ( * (  list1887 ) ) .f_elements ) ) );
            (*  list1887 ) .f_elements = (  new_dash_slice1888 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1269 {
    size_t  growth_dash_factor1883;
    ;
    ;
    size_t  starting_dash_size1882;
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

static  enum Unit_13   lam673 (   struct env673 env ,    struct Tuple2_470  dref1889 ) {
    return ( (  set1194 ) ( ( env.new_dash_slice1888 ) ,  ( (  i32_dash_size311 ) ( ( dref1889 .field1 ) ) ) ,  ( dref1889 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1269 (   struct env1269 env ,    struct List_160 *  list1887 ) {
    if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1887 ) .f_elements = ( (  allocate1226 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( env.starting_dash_size1882 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1887 ) ) .f_count ) , ( ( ( * (  list1887 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_161  new_dash_slice1888 = ( (  allocate1226 ) ( ( ( * (  list1887 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1887 ) ) .f_count ) , ( env.growth_dash_factor1883 ) ) ) ) );
            struct env673 envinst673 = {
                .new_dash_slice1888 =  new_dash_slice1888 ,
            };
            ( (  for_dash_each672 ) ( ( (  zip534 ) ( ( ( * (  list1887 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv673){ .fun = lam673, .env = envinst673 } ) ) );
            ( (  free1229 ) ( ( ( * (  list1887 ) ) .f_al ) ,  ( ( * (  list1887 ) ) .f_elements ) ) );
            (*  list1887 ) .f_elements = (  new_dash_slice1888 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add621 (   struct env621 env ,    struct List_323 *  list1894 ,    struct List_3  elem1896 ) {
    struct funenv622  temp1270 = ( (struct funenv622){ .fun = grow_dash_if_dash_full622, .env =  env.envinst622  } );
    ( temp1270.fun ( temp1270.env ,  (  list1894 ) ) );
    ( (  set1190 ) ( ( ( * (  list1894 ) ) .f_elements ) ,  ( ( * (  list1894 ) ) .f_count ) ,  (  elem1896 ) ) );
    (*  list1894 ) .f_count = (  op_dash_add98 ( ( ( * (  list1894 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add346 (   struct env346 env ,    struct List_3 *  list1894 ,    char  elem1896 ) {
    struct funenv347  temp1271 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1271.fun ( temp1271.env ,  (  list1894 ) ) );
    ( (  set1191 ) ( ( ( * (  list1894 ) ) .f_elements ) ,  ( ( * (  list1894 ) ) .f_count ) ,  (  elem1896 ) ) );
    (*  list1894 ) .f_count = (  op_dash_add98 ( ( ( * (  list1894 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1268 {
    enum Unit_13  (*fun) (  struct env1268  ,    struct List_907 *  );
    struct env1268 env;
};

struct env1272 {
    ;
    ;
    ;
    ;
    ;
    struct env1268 envinst1268;
};

static  enum Unit_13   add1272 (   struct env1272 env ,    struct List_907 *  list1894 ,    struct Either_182  elem1896 ) {
    struct funenv1268  temp1273 = ( (struct funenv1268){ .fun = grow_dash_if_dash_full1268, .env =  env.envinst1268  } );
    ( temp1273.fun ( temp1273.env ,  (  list1894 ) ) );
    ( (  set1193 ) ( ( ( * (  list1894 ) ) .f_elements ) ,  ( ( * (  list1894 ) ) .f_count ) ,  (  elem1896 ) ) );
    (*  list1894 ) .f_count = (  op_dash_add98 ( ( ( * (  list1894 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1269 {
    enum Unit_13  (*fun) (  struct env1269  ,    struct List_160 *  );
    struct env1269 env;
};

struct env1274 {
    ;
    ;
    ;
    ;
    ;
    struct env1269 envinst1269;
};

static  enum Unit_13   add1274 (   struct env1274 env ,    struct List_160 *  list1894 ,    struct Action_152  elem1896 ) {
    struct funenv1269  temp1275 = ( (struct funenv1269){ .fun = grow_dash_if_dash_full1269, .env =  env.envinst1269  } );
    ( temp1275.fun ( temp1275.env ,  (  list1894 ) ) );
    ( (  set1194 ) ( ( ( * (  list1894 ) ) .f_elements ) ,  ( ( * (  list1894 ) ) .f_count ) ,  (  elem1896 ) ) );
    (*  list1894 ) .f_count = (  op_dash_add98 ( ( ( * (  list1894 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1276 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
    ;
    ;
    ;
    struct env347 envinst347;
    ;
    ;
    ;
};

static  enum Unit_13   insert1276 (   struct env1276 env ,    struct List_3 *  list1899 ,    size_t  i1901 ,    char  elem1903 ) {
    if ( ( (  cmp9 ( (  i1901 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1901 ) , ( ( * (  list1899 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1901 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1899 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv346  temp1277 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
        ( temp1277.fun ( temp1277.env ,  (  list1899 ) ,  (  elem1903 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv347  temp1278 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1278.fun ( temp1278.env ,  (  list1899 ) ) );
    size_t  ii1904 = (  op_dash_sub99 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1904 ) , (  i1901 ) ) != 0 ) ) {
        ( (  set1191 ) ( ( ( * (  list1899 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1904 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1899 ) ,  (  ii1904 ) ) ) ) );
        if ( (  eq45 ( (  ii1904 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1904 = (  op_dash_sub99 ( (  ii1904 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1191 ) ( ( ( * (  list1899 ) ) .f_elements ) ,  (  i1901 ) ,  (  elem1903 ) ) );
    (*  list1899 ) .f_count = (  op_dash_add98 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1279 {
    ;
    ;
    ;
    ;
    ;
    struct env621 envinst621;
    ;
    ;
    ;
    struct env622 envinst622;
    ;
    ;
    ;
};

static  enum Unit_13   insert1279 (   struct env1279 env ,    struct List_323 *  list1899 ,    size_t  i1901 ,    struct List_3  elem1903 ) {
    if ( ( (  cmp9 ( (  i1901 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1901 ) , ( ( * (  list1899 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1901 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1899 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv621  temp1280 = ( (struct funenv621){ .fun = add621, .env =  env.envinst621  } );
        ( temp1280.fun ( temp1280.env ,  (  list1899 ) ,  (  elem1903 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv622  temp1281 = ( (struct funenv622){ .fun = grow_dash_if_dash_full622, .env =  env.envinst622  } );
    ( temp1281.fun ( temp1281.env ,  (  list1899 ) ) );
    size_t  ii1904 = (  op_dash_sub99 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1904 ) , (  i1901 ) ) != 0 ) ) {
        ( (  set1190 ) ( ( ( * (  list1899 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1904 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1255 ) ( (  list1899 ) ,  (  ii1904 ) ) ) ) );
        if ( (  eq45 ( (  ii1904 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1904 = (  op_dash_sub99 ( (  ii1904 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1190 ) ( ( ( * (  list1899 ) ) .f_elements ) ,  (  i1901 ) ,  (  elem1903 ) ) );
    (*  list1899 ) .f_count = (  op_dash_add98 ( ( ( * (  list1899 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1282 {
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
    size_t  shrink_dash_factor1884;
    ;
    ;
};

static  enum Unit_13   lam649 (   struct env649 env ,    struct Tuple2_387  dref1910 ) {
    return ( (  set1259 ) ( ( env.list1907 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1910 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1910 .field0 ) ) );
}

static  enum Unit_13   remove1282 (   struct env1282 env ,    struct List_3 *  list1907 ,    size_t  i1909 ) {
    if ( ( (  cmp9 ( (  i1909 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1909 ) , ( ( * (  list1907 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1909 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1907 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env649 envinst649 = {
        .list1907 =  list1907 ,
    };
    ( (  for_dash_each648 ) ( ( (  drop395 ) ( ( (  zip530 ) ( ( * (  list1907 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1909 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv649){ .fun = lam649, .env = envinst649 } ) ) );
    (*  list1907 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1907 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1913 = ( ( ( * (  list1907 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1907 ) ) .f_count ) , ( env.shrink_dash_factor1884 ) ) ) , (  capacity1913 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1907 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1228 ) ( ( ( * (  list1907 ) ) .f_al ) ,  ( ( * (  list1907 ) ) .f_elements ) ) );
            (*  list1907 ) .f_elements = ( (  empty1176 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1914 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1907 ) ) .f_count ) , ( env.shrink_dash_factor1884 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1884 ) ) );
        struct Slice_5  new_dash_slice1915 = ( (  allocate1223 ) ( ( ( * (  list1907 ) ) .f_al ) ,  (  new_dash_size1914 ) ) );
        ( (  copy_dash_to1200 ) ( ( (  subslice335 ) ( ( ( * (  list1907 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1907 ) ) .f_count ) ) ) ,  (  new_dash_slice1915 ) ) );
        ( (  free1228 ) ( ( ( * (  list1907 ) ) .f_al ) ,  ( ( * (  list1907 ) ) .f_elements ) ) );
        (*  list1907 ) .f_elements = (  new_dash_slice1915 );
    }
    return ( Unit_13_Unit );
}

struct env1283 {
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
    size_t  shrink_dash_factor1884;
    ;
    ;
};

static  enum Unit_13   lam665 (   struct env665 env ,    struct Tuple2_392  dref1910 ) {
    return ( (  set1260 ) ( ( env.list1907 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1910 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1910 .field0 ) ) );
}

static  enum Unit_13   remove1283 (   struct env1283 env ,    struct List_323 *  list1907 ,    size_t  i1909 ) {
    if ( ( (  cmp9 ( (  i1909 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1909 ) , ( ( * (  list1907 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1909 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1907 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env665 envinst665 = {
        .list1907 =  list1907 ,
    };
    ( (  for_dash_each664 ) ( ( (  drop397 ) ( ( (  zip531 ) ( ( * (  list1907 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1909 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv665){ .fun = lam665, .env = envinst665 } ) ) );
    (*  list1907 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1907 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1913 = ( ( ( * (  list1907 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1907 ) ) .f_count ) , ( env.shrink_dash_factor1884 ) ) ) , (  capacity1913 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1907 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1227 ) ( ( ( * (  list1907 ) ) .f_al ) ,  ( ( * (  list1907 ) ) .f_elements ) ) );
            (*  list1907 ) .f_elements = ( (  empty1175 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1914 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1907 ) ) .f_count ) , ( env.shrink_dash_factor1884 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1884 ) ) );
        struct Slice_322  new_dash_slice1915 = ( (  allocate1222 ) ( ( ( * (  list1907 ) ) .f_al ) ,  (  new_dash_size1914 ) ) );
        ( (  copy_dash_to1201 ) ( ( (  subslice326 ) ( ( ( * (  list1907 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1907 ) ) .f_count ) ) ) ,  (  new_dash_slice1915 ) ) );
        ( (  free1227 ) ( ( ( * (  list1907 ) ) .f_al ) ,  ( ( * (  list1907 ) ) .f_elements ) ) );
        (*  list1907 ) .f_elements = (  new_dash_slice1915 );
    }
    return ( Unit_13_Unit );
}

static  struct Either_182   elem_dash_get1284 (    struct List_907  self1918 ,    size_t  k1920 ) {
    return ( (  get1256 ) ( ( & (  self1918 ) ) ,  (  k1920 ) ) );
}

struct funenv1282 {
    enum Unit_13  (*fun) (  struct env1282  ,    struct List_3 *  ,    size_t  );
    struct env1282 env;
};

struct env1285 {
    ;
    struct env1282 envinst1282;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   pop1285 (   struct env1285 env ,    struct List_3 *  list1929 ) {
    if ( (  eq45 ( ( ( * (  list1929 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1155 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1282  temp1286 = ( (struct funenv1282){ .fun = remove1282, .env =  env.envinst1282  } );
    return ( temp1286.fun ( temp1286.env ,  (  list1929 ) ,  (  op_dash_sub99 ( ( ( * (  list1929 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam616 (   struct env616 env ,    char  x1939 ) {
    struct funenv346  temp1287 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1287.fun ( temp1287.env ,  ( env.list1935 ) ,  (  x1939 ) ) );
}

static  enum Unit_13   add_dash_all345 (   struct env345 env ,    struct List_3 *  list1935 ,    struct DynStr_136  it1937 ) {
    struct env616 envinst616 = {
        .envinst346 = env.envinst346 ,
        .list1935 =  list1935 ,
    };
    ( (  for_dash_each615 ) ( (  it1937 ) ,  ( (struct funenv616){ .fun = lam616, .env = envinst616 } ) ) );
    return ( Unit_13_Unit );
}

struct env1288 {
    struct env621 envinst621;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam620 (   struct env620 env ,    struct List_3  x1939 ) {
    struct funenv621  temp1289 = ( (struct funenv621){ .fun = add621, .env =  env.envinst621  } );
    return ( temp1289.fun ( temp1289.env ,  ( env.list1935 ) ,  (  x1939 ) ) );
}

static  enum Unit_13   add_dash_all1288 (   struct env1288 env ,    struct List_323 *  list1935 ,    struct Map_341  it1937 ) {
    struct env620 envinst620 = {
        .envinst621 = env.envinst621 ,
        .list1935 =  list1935 ,
    };
    ( (  for_dash_each619 ) ( (  it1937 ) ,  ( (struct funenv620){ .fun = lam620, .env = envinst620 } ) ) );
    return ( Unit_13_Unit );
}

struct env1290 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam653 (   struct env653 env ,    char  x1939 ) {
    struct funenv346  temp1291 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1291.fun ( temp1291.env ,  ( env.list1935 ) ,  (  x1939 ) ) );
}

static  enum Unit_13   add_dash_all1290 (   struct env1290 env ,    struct List_3 *  list1935 ,    struct Slice_5  it1937 ) {
    struct env653 envinst653 = {
        .envinst346 = env.envinst346 ,
        .list1935 =  list1935 ,
    };
    ( (  for_dash_each652 ) ( (  it1937 ) ,  ( (struct funenv653){ .fun = lam653, .env = envinst653 } ) ) );
    return ( Unit_13_Unit );
}

struct env1292 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam657 (   struct env657 env ,    char  x1939 ) {
    struct funenv346  temp1293 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1293.fun ( temp1293.env ,  ( env.list1935 ) ,  (  x1939 ) ) );
}

static  enum Unit_13   add_dash_all1292 (   struct env1292 env ,    struct List_3 *  list1935 ,    struct List_3 *  it1937 ) {
    struct env657 envinst657 = {
        .envinst346 = env.envinst346 ,
        .list1935 =  list1935 ,
    };
    ( (  for_dash_each656 ) ( (  it1937 ) ,  ( (struct funenv657){ .fun = lam657, .env = envinst657 } ) ) );
    return ( Unit_13_Unit );
}

struct env1294 {
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam689 (   struct env689 env ,    char  x1939 ) {
    struct funenv346  temp1295 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1295.fun ( temp1295.env ,  ( env.list1935 ) ,  (  x1939 ) ) );
}

static  enum Unit_13   add_dash_all1294 (   struct env1294 env ,    struct List_3 *  list1935 ,    struct TakeWhile_560  it1937 ) {
    struct env689 envinst689 = {
        .envinst346 = env.envinst346 ,
        .list1935 =  list1935 ,
    };
    ( (  for_dash_each688 ) ( (  it1937 ) ,  ( (struct funenv689){ .fun = lam689, .env = envinst689 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1296 (    struct List_3 *  l1942 ,    size_t  new_dash_count1944 ) {
    (*  l1942 ) .f_count = ( (  min327 ) ( (  new_dash_count1944 ) ,  ( ( * (  l1942 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1297 (    struct List_907 *  l1942 ,    size_t  new_dash_count1944 ) {
    (*  l1942 ) .f_count = ( (  min327 ) ( (  new_dash_count1944 ) ,  ( ( * (  l1942 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list344 (   struct env344 env ,    struct DynStr_136  it1947 ,    enum CAllocator_4  al1949 ) {
    struct List_3  temp1298 = ( (  mk1262 ) ( (  al1949 ) ) );
    struct List_3 *  l1950 = ( &temp1298 );
    struct funenv345  temp1299 = ( (struct funenv345){ .fun = add_dash_all345, .env =  env.envinst345  } );
    ( temp1299.fun ( temp1299.env ,  (  l1950 ) ,  (  it1947 ) ) );
    return ( * (  l1950 ) );
}

struct funenv1288 {
    enum Unit_13  (*fun) (  struct env1288  ,    struct List_323 *  ,    struct Map_341  );
    struct env1288 env;
};

struct env1300 {
    ;
    ;
    ;
    ;
    ;
    struct env1288 envinst1288;
};

static  struct List_323   to_dash_list1300 (   struct env1300 env ,    struct Map_341  it1947 ,    enum CAllocator_4  al1949 ) {
    struct List_323  temp1301 = ( (  mk1261 ) ( (  al1949 ) ) );
    struct List_323 *  l1950 = ( &temp1301 );
    struct funenv1288  temp1302 = ( (struct funenv1288){ .fun = add_dash_all1288, .env =  env.envinst1288  } );
    ( temp1302.fun ( temp1302.env ,  (  l1950 ) ,  (  it1947 ) ) );
    return ( * (  l1950 ) );
}

static  struct Slice_5   to_dash_slice1303 (    struct List_3  l1953 ) {
    char *  ptr1954 = ( ( (  l1953 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1954 ) , .f_count = ( (  l1953 ) .f_count ) } );
}

static  struct Slice_322   to_dash_slice1304 (    struct List_323  l1953 ) {
    struct List_3 *  ptr1954 = ( ( (  l1953 ) .f_elements ) .f_ptr );
    return ( (struct Slice_322) { .f_ptr = (  ptr1954 ) , .f_count = ( (  l1953 ) .f_count ) } );
}

static  struct Slice_410   to_dash_slice1305 (    struct List_907  l1953 ) {
    struct Either_182 *  ptr1954 = ( ( (  l1953 ) .f_elements ) .f_ptr );
    return ( (struct Slice_410) { .f_ptr = (  ptr1954 ) , .f_count = ( (  l1953 ) .f_count ) } );
}

static  struct Slice_161   to_dash_slice1306 (    struct List_160  l1953 ) {
    struct Action_152 *  ptr1954 = ( ( (  l1953 ) .f_elements ) .f_ptr );
    return ( (struct Slice_161) { .f_ptr = (  ptr1954 ) , .f_count = ( (  l1953 ) .f_count ) } );
}

static  struct SliceAddressIter_706   addresses1307 (    struct List_323  l1957 ) {
    return ( (  addresses1199 ) ( ( (  to_dash_slice1304 ) ( (  l1957 ) ) ) ) );
}

static  size_t   size1308 (    struct List_3 *  l1960 ) {
    return ( ( * (  l1960 ) ) .f_count );
}

static  size_t   size1309 (    struct List_323 *  l1960 ) {
    return ( ( * (  l1960 ) ) .f_count );
}

static  struct Maybe_1168   hex_dash_digit1310 (    char  c1988 ) {
    if ( ( (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1168_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u81150 ) ( (  c1988 ) ) ) , ( (  char_dash_u81150 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1168_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81150 ) ( (  c1988 ) ) ) , ( (  char_dash_u81150 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp970 ( (  c1988 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1168_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81150 ) ( (  c1988 ) ) ) , ( (  char_dash_u81150 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1168) { .tag = Maybe_1168_None_t } );
}

static  uint32_t   lam1312 (    char  c1993 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64318 ) ( ( (  or_dash_fail1167 ) ( ( (  hex_dash_digit1310 ) ( (  c1993 ) ) ) ,  ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_989_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1993 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1313 (    uint32_t  elem1995 ,    uint32_t  b1997 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1997 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1995 ) ) );
}

static  uint32_t   from_dash_hex1311 (    const char*  arr1991 ) {
    return ( (  reduce802 ) ( ( (  map374 ) ( (  arr1991 ) ,  (  lam1312 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1313 ) ) );
}

static  struct Maybe_308   get1314 (    const char*  s2034 ) {
    return ( (  from_dash_nullable_dash_c_dash_str307 ) ( ( ( getenv ) ( (  s2034 ) ) ) ) );
}

static  bool   is_dash_terminal1315 (  ) {
    return (  cmp80 ( ( ( isatty ) ( ( (  stdout_dash_fileno114 ) ( ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) == 2 );
}

static  enum Unit_13   show_dash_cursor1316 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1317 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1318 (    uint32_t  x2011 ,    uint32_t  y2013 ) {
    uint32_t  x2014 = (  op_dash_add92 ( (  x2011 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y2015 = (  op_dash_add92 ( (  y2013 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str1108 ) ( ( ( StrConcat_1109_StrConcat ) ( ( ( StrConcat_1110_StrConcat ) ( ( ( StrConcat_1111_StrConcat ) ( ( ( StrConcat_1006_StrConcat ) ( ( "\x1b[" ) ,  (  y2015 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x2014 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1319 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_890   get_dash_dimensions1320 (  ) {
    struct Winsize_205  temp1321 = ( ( (  zeroed270 ) ( ) ) );
    struct Winsize_205 *  ws2019 = ( &temp1321 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws2019 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws2019 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_890_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_890_Tuple2 ) ( ( (  u16_dash_u32314 ) ( ( ( * (  ws2019 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32314 ) ( ( ( * (  ws2019 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1322 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1323 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_724   query_dash_palette1324 (  ) {
    struct Maybe_308  colorterm2035 = ( (  get1314 ) ( ( "COLORTERM" ) ) );
    struct Maybe_308  dref2036 = (  colorterm2035 );
    if ( dref2036.tag == Maybe_308_Just_t ) {
        if ( ( (  eq1152 ( ( dref2036 .stuff .Maybe_308_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq1152 ( ( dref2036 .stuff .Maybe_308_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_724_PaletteRGB );
        }
    }
    else if ( dref2036.tag == Maybe_308_None_t ) {
    }
    struct Maybe_308  dref2038 = ( (  get1314 ) ( ( "TERM" ) ) );
    if ( dref2038.tag == Maybe_308_Just_t ) {
        if ( (  eq1152 ( ( dref2038 .stuff .Maybe_308_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_724_Palette8 );
        }
    }
    else if ( dref2038.tag == Maybe_308_None_t ) {
    }
    return ( ColorPalette_724_Palette16 );
}

static  enum Unit_13   set_dash_fg81325 (    enum Color8_60  color2054 ) {
    enum Color8_60  dref2055 = (  color2054 );
    switch (  dref2055 ) {
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

static  enum Unit_13   set_dash_fg161326 (    enum Color16_61  color2058 ) {
    enum Color16_61  dref2059 = (  color2058 );
    switch (  dref2059 ) {
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

static  enum Unit_13   set_dash_bg81327 (    enum Color8_60  color2062 ) {
    enum Color8_60  dref2063 = (  color2062 );
    switch (  dref2063 ) {
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

static  enum Unit_13   set_dash_bg161328 (    enum Color16_61  color2066 ) {
    enum Color16_61  dref2067 = (  color2066 );
    switch (  dref2067 ) {
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

static  enum Unit_13   reset_dash_colors1329 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1330 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561331 (    uint8_t  color2072 ) {
    ( (  print_dash_str1115 ) ( ( ( StrConcat_1116_StrConcat ) ( ( ( StrConcat_1117_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2072 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561332 (    uint8_t  color2075 ) {
    ( (  print_dash_str1115 ) ( ( ( StrConcat_1116_StrConcat ) ( ( ( StrConcat_1117_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2075 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1333 (    struct RGB_62  c2095 ) {
    ( (  print_dash_str1119 ) ( ( ( StrConcat_1120_StrConcat ) ( ( ( StrConcat_1121_StrConcat ) ( ( ( StrConcat_1122_StrConcat ) ( ( ( StrConcat_1123_StrConcat ) ( ( ( StrConcat_1116_StrConcat ) ( ( ( StrConcat_1117_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2095 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2095 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2095 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1334 (    struct RGB_62  c2098 ) {
    ( (  print_dash_str1119 ) ( ( ( StrConcat_1120_StrConcat ) ( ( ( StrConcat_1121_StrConcat ) ( ( ( StrConcat_1122_StrConcat ) ( ( ( StrConcat_1123_StrConcat ) ( ( ( StrConcat_1116_StrConcat ) ( ( ( StrConcat_1117_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2098 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2098 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2098 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1335 (    struct Color_59  c2116 ) {
    struct Color_59  dref2117 = (  c2116 );
    if ( dref2117.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1322 ) ( ) );
    }
    else if ( dref2117.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81325 ) ( ( dref2117 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2117.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161326 ) ( ( dref2117 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2117.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561331 ) ( ( dref2117 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2117.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1333 ) ( ( dref2117 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1336 (    struct Color_59  c2124 ) {
    struct Color_59  dref2125 = (  c2124 );
    if ( dref2125.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1323 ) ( ) );
    }
    else if ( dref2125.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81327 ) ( ( dref2125 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2125.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161328 ) ( ( dref2125 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2125.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561332 ) ( ( dref2125 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2125.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1334 ) ( ( dref2125 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1337 {
    ;
    ;
    ;
    struct env346 envinst346;
    ;
    ;
    ;
};

static  enum Unit_13   lam626 (   struct env626 env ,    char  c2181 ) {
    struct funenv346  temp1338 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1338.fun ( temp1338.env ,  ( & ( ( * ( env.builder2177 ) ) .f_chars ) ) ,  (  c2181 ) ) );
}

static  enum Unit_13   write1337 (   struct env1337 env ,    struct StrBuilder_627 *  builder2177 ,    const char*  s2179 ) {
    struct env626 envinst626 = {
        .builder2177 =  builder2177 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each625 ) ( ( (  chars978 ) ( (  s2179 ) ) ) ,  ( (struct funenv626){ .fun = lam626, .env = envinst626 } ) ) );
    return ( Unit_13_Unit );
}

struct env1339 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
    ;
};

static  enum Unit_13   lam685 (   struct env685 env ,    char  c2181 ) {
    struct funenv346  temp1340 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1340.fun ( temp1340.env ,  ( & ( ( * ( env.builder2177 ) ) .f_chars ) ) ,  (  c2181 ) ) );
}

static  enum Unit_13   write1339 (   struct env1339 env ,    struct StrBuilder_627 *  builder2177 ,    char  s2179 ) {
    struct env685 envinst685 = {
        .builder2177 =  builder2177 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each684 ) ( ( (  chars979 ) ( (  s2179 ) ) ) ,  ( (struct funenv685){ .fun = lam685, .env = envinst685 } ) ) );
    return ( Unit_13_Unit );
}

struct env1341 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam693 (   struct env693 env ,    char  c2181 ) {
    struct funenv346  temp1342 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1342.fun ( temp1342.env ,  ( & ( ( * ( env.builder2177 ) ) .f_chars ) ) ,  (  c2181 ) ) );
}

static  enum Unit_13   write1341 (   struct env1341 env ,    struct StrBuilder_627 *  builder2177 ,    struct StrConcat_989  s2179 ) {
    struct env693 envinst693 = {
        .builder2177 =  builder2177 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each692 ) ( ( (  chars1030 ) ( (  s2179 ) ) ) ,  ( (struct funenv693){ .fun = lam693, .env = envinst693 } ) ) );
    return ( Unit_13_Unit );
}

struct env1343 {
    ;
    ;
    ;
    struct env346 envinst346;
    ;
    ;
    ;
};

static  enum Unit_13   lam698 (   struct env698 env ,    char  c2181 ) {
    struct funenv346  temp1344 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1344.fun ( temp1344.env ,  ( & ( ( * ( env.builder2177 ) ) .f_chars ) ) ,  (  c2181 ) ) );
}

static  enum Unit_13   write1343 (   struct env1343 env ,    struct StrBuilder_627 *  builder2177 ,    struct TakeWhile_562  s2179 ) {
    struct env698 envinst698 = {
        .builder2177 =  builder2177 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each697 ) ( ( (  chars1137 ) ( (  s2179 ) ) ) ,  ( (struct funenv698){ .fun = lam698, .env = envinst698 } ) ) );
    return ( Unit_13_Unit );
}

struct env1345 {
    ;
    ;
    ;
    struct env346 envinst346;
    ;
    ;
    ;
};

static  enum Unit_13   lam702 (   struct env702 env ,    char  c2181 ) {
    struct funenv346  temp1346 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1346.fun ( temp1346.env ,  ( & ( ( * ( env.builder2177 ) ) .f_chars ) ) ,  (  c2181 ) ) );
}

static  enum Unit_13   write1345 (   struct env1345 env ,    struct StrBuilder_627 *  builder2177 ,    struct TakeWhile_567  s2179 ) {
    struct env702 envinst702 = {
        .builder2177 =  builder2177 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each701 ) ( ( (  chars1138 ) ( (  s2179 ) ) ) ,  ( (struct funenv702){ .fun = lam702, .env = envinst702 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1290 {
    enum Unit_13  (*fun) (  struct env1290  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1290 env;
};

struct env1347 {
    ;
    ;
    struct env1290 envinst1290;
};

static  enum Unit_13   write_dash_slice1347 (   struct env1347 env ,    struct StrBuilder_627 *  builder2184 ,    struct Slice_5  s2186 ) {
    struct funenv1290  temp1348 = ( (struct funenv1290){ .fun = add_dash_all1290, .env =  env.envinst1290  } );
    ( temp1348.fun ( temp1348.env ,  ( & ( ( * (  builder2184 ) ) .f_chars ) ) ,  (  s2186 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char713 (   struct env713 env ,    struct StrBuilder_627 *  builder2189 ,    char  c2191 ) {
    struct funenv346  temp1349 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    ( temp1349.fun ( temp1349.env ,  ( & ( ( * (  builder2189 ) ) .f_chars ) ) ,  (  c2191 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1285 {
    enum Unit_13  (*fun) (  struct env1285  ,    struct List_3 *  );
    struct env1285 env;
};

struct env1350 {
    ;
    struct env1285 envinst1285;
    ;
};

static  enum Unit_13   pop1350 (   struct env1350 env ,    struct StrBuilder_627 *  sb2199 ) {
    struct funenv1285  temp1351 = ( (struct funenv1285){ .fun = pop1285, .env =  env.envinst1285  } );
    return ( temp1351.fun ( temp1351.env ,  ( & ( ( * (  sb2199 ) ) .f_chars ) ) ) );
}

static  size_t   count1352 (    struct StrBuilder_627 *  sb2202 ) {
    return ( ( ( * (  sb2202 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_627   mk1353 (    enum CAllocator_4  al2205 ) {
    return ( (struct StrBuilder_627) { .f_chars = ( (  mk1262 ) ( (  al2205 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1354 (    struct StrBuilder_627 *  builder2214 ) {
    return ( (  to_dash_slice1303 ) ( ( ( * (  builder2214 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1355 (    struct StrBuilder_627 *  builder2217 ) {
    ( (  free1265 ) ( ( & ( ( * (  builder2217 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1337 {
    enum Unit_13  (*fun) (  struct env1337  ,    struct StrBuilder_627 *  ,    const char*  );
    struct env1337 env;
};

struct env1356 {
    ;
    struct env713 envinst713;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1337 envinst1337;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1356 (   struct env1356 env ,    const char*  s2231 ,    enum CAllocator_4  al2233 ) {
    struct StrBuilder_627  temp1357 = ( (  mk1353 ) ( (  al2233 ) ) );
    struct StrBuilder_627 *  sb2234 = ( &temp1357 );
    struct funenv1337  temp1358 = ( (struct funenv1337){ .fun = write1337, .env =  env.envinst1337  } );
    ( temp1358.fun ( temp1358.env ,  (  sb2234 ) ,  (  s2231 ) ) );
    struct funenv713  temp1359 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    ( temp1359.fun ( temp1359.env ,  (  sb2234 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2235 = ( (  as_dash_str997 ) ( (  sb2234 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2235 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2235 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1339 {
    enum Unit_13  (*fun) (  struct env1339  ,    struct StrBuilder_627 *  ,    char  );
    struct env1339 env;
};

struct env1360 {
    ;
    struct env713 envinst713;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1339 envinst1339;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1360 (   struct env1360 env ,    char  s2231 ,    enum CAllocator_4  al2233 ) {
    struct StrBuilder_627  temp1361 = ( (  mk1353 ) ( (  al2233 ) ) );
    struct StrBuilder_627 *  sb2234 = ( &temp1361 );
    struct funenv1339  temp1362 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
    ( temp1362.fun ( temp1362.env ,  (  sb2234 ) ,  (  s2231 ) ) );
    struct funenv713  temp1363 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    ( temp1363.fun ( temp1363.env ,  (  sb2234 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2235 = ( (  as_dash_str997 ) ( (  sb2234 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2235 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2235 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1341 {
    enum Unit_13  (*fun) (  struct env1341  ,    struct StrBuilder_627 *  ,    struct StrConcat_989  );
    struct env1341 env;
};

struct env1364 {
    ;
    struct env713 envinst713;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1341 envinst1341;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1364 (   struct env1364 env ,    struct StrConcat_989  s2231 ,    enum CAllocator_4  al2233 ) {
    struct StrBuilder_627  temp1365 = ( (  mk1353 ) ( (  al2233 ) ) );
    struct StrBuilder_627 *  sb2234 = ( &temp1365 );
    struct funenv1341  temp1366 = ( (struct funenv1341){ .fun = write1341, .env =  env.envinst1341  } );
    ( temp1366.fun ( temp1366.env ,  (  sb2234 ) ,  (  s2231 ) ) );
    struct funenv713  temp1367 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    ( temp1367.fun ( temp1367.env ,  (  sb2234 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2235 = ( (  as_dash_str997 ) ( (  sb2234 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2235 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2235 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1343 {
    enum Unit_13  (*fun) (  struct env1343  ,    struct StrBuilder_627 *  ,    struct TakeWhile_562  );
    struct env1343 env;
};

struct env1368 {
    struct env1343 envinst1343;
    struct env713 envinst713;
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

static  struct DynStr_136   mk_dash_dyn_dash_str1368 (   struct env1368 env ,    struct TakeWhile_562  s2231 ,    enum CAllocator_4  al2233 ) {
    struct StrBuilder_627  temp1369 = ( (  mk1353 ) ( (  al2233 ) ) );
    struct StrBuilder_627 *  sb2234 = ( &temp1369 );
    struct funenv1343  temp1370 = ( (struct funenv1343){ .fun = write1343, .env =  env.envinst1343  } );
    ( temp1370.fun ( temp1370.env ,  (  sb2234 ) ,  (  s2231 ) ) );
    struct funenv713  temp1371 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    ( temp1371.fun ( temp1371.env ,  (  sb2234 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2235 = ( (  as_dash_str997 ) ( (  sb2234 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2235 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2235 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1345 {
    enum Unit_13  (*fun) (  struct env1345  ,    struct StrBuilder_627 *  ,    struct TakeWhile_567  );
    struct env1345 env;
};

struct env1372 {
    struct env1345 envinst1345;
    struct env713 envinst713;
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

static  struct DynStr_136   mk_dash_dyn_dash_str1372 (   struct env1372 env ,    struct TakeWhile_567  s2231 ,    enum CAllocator_4  al2233 ) {
    struct StrBuilder_627  temp1373 = ( (  mk1353 ) ( (  al2233 ) ) );
    struct StrBuilder_627 *  sb2234 = ( &temp1373 );
    struct funenv1345  temp1374 = ( (struct funenv1345){ .fun = write1345, .env =  env.envinst1345  } );
    ( temp1374.fun ( temp1374.env ,  (  sb2234 ) ,  (  s2231 ) ) );
    struct funenv713  temp1375 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    ( temp1375.fun ( temp1375.env ,  (  sb2234 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2235 = ( (  as_dash_str997 ) ( (  sb2234 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2235 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2235 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1356 {
    struct DynStr_136  (*fun) (  struct env1356  ,    const char*  ,    enum CAllocator_4  );
    struct env1356 env;
};

struct env1376 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1356 envinst1356;
};

static  const char*   mk_dash_const_dash_str1376 (   struct env1376 env ,    const char*  s2238 ,    enum CAllocator_4  al2240 ) {
    struct funenv1356  temp1377 = ( (struct funenv1356){ .fun = mk_dash_dyn_dash_str1356, .env =  env.envinst1356  } );
    return ( ( (  cast214 ) ( ( ( ( temp1377.fun ( temp1377.env ,  (  s2238 ) ,  (  al2240 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1368 {
    struct DynStr_136  (*fun) (  struct env1368  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1368 env;
};

struct env1378 {
    struct env1368 envinst1368;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1378 (   struct env1378 env ,    struct TakeWhile_562  s2238 ,    enum CAllocator_4  al2240 ) {
    struct funenv1368  temp1379 = ( (struct funenv1368){ .fun = mk_dash_dyn_dash_str1368, .env =  env.envinst1368  } );
    return ( ( (  cast214 ) ( ( ( ( temp1379.fun ( temp1379.env ,  (  s2238 ) ,  (  al2240 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1372 {
    struct DynStr_136  (*fun) (  struct env1372  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1372 env;
};

struct env1380 {
    struct env1372 envinst1372;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1380 (   struct env1380 env ,    struct TakeWhile_567  s2238 ,    enum CAllocator_4  al2240 ) {
    struct funenv1372  temp1381 = ( (struct funenv1372){ .fun = mk_dash_dyn_dash_str1372, .env =  env.envinst1372  } );
    return ( ( (  cast214 ) ( ( ( ( temp1381.fun ( temp1381.env ,  (  s2238 ) ,  (  al2240 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct Maybe_356   try_dash_read_dash_contents1382 (    const char*  filename2291 ,    enum CAllocator_4  al2293 ) {
    FILE *  file2294 = ( ( fopen ) ( (  filename2291 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file2294 ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    ( ( fseek ) ( (  file2294 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size2295 = ( ( ftell ) ( (  file2294 ) ) );
    ( ( fseek ) ( (  file2294 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2296 = ( ( (  allocate1223 ) ( (  al2293 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  file_dash_size2295 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2296 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2295 ) ,  (  file2294 ) ) );
    ( (  set1191 ) ( (  file_dash_buf2296 ) ,  ( (  i32_dash_size311 ) ( (  file_dash_size2295 ) ) ) ,  ( (  nullchar361 ) ( ) ) ) );
    ( ( fclose ) ( (  file2294 ) ) );
    struct DynStr_136  str2297 = ( (struct DynStr_136) { .f_contents = (  file_dash_buf2296 ) } );
    return ( ( Maybe_356_Just ) ( (  str2297 ) ) );
}

static  struct DynStr_136   read_dash_contents1383 (    const char*  filename2300 ,    enum CAllocator_4  al2302 ) {
    return ( (  or_dash_fail1164 ) ( ( (  try_dash_read_dash_contents1382 ) ( (  filename2300 ) ,  (  al2302 ) ) ) ,  ( ( StrConcat_1077_StrConcat ) ( ( ( StrConcat_1078_StrConcat ) ( ( "could not open file " ) ,  (  filename2300 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1384 (    const char*  filename2305 ,    struct DynStr_136  contents2307 ) {
    FILE *  file2308 = ( ( fopen ) ( (  filename2305 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file2308 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_330  it2309 = ( (  chars1004 ) ( (  contents2307 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref2310 = ( (  next371 ) ( ( & (  it2309 ) ) ) );
        if ( dref2310.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file2308 ) ) );
            return ( true );
        }
        else if ( dref2310.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written2312 = ( ( fprintf ) ( (  file2308 ) ,  ( "%c" ) ,  ( dref2310 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written2312 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable1153 ) ( ) );
}

static  enum Unit_13   write_dash_contents1385 (    const char*  filename2315 ,    struct DynStr_136  contents2317 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1384 ) ( (  filename2315 ) ,  (  contents2317 ) ) ) ) ) {
        ( (  panic1160 ) ( ( ( StrConcat_1078_StrConcat ) ( ( "could not write to file " ) ,  (  filename2315 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct timespec   now1386 (  ) {
    struct timespec  temp1387 = ( (  undefined138 ) ( ) );
    struct timespec *  t2481 = ( &temp1387 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2481 ) ) );
    return ( * (  t2481 ) );
}

struct Duration_1389 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1388 (    struct Duration_1389  l2490 ,    struct Duration_1389  r2492 ) {
    enum Ordering_10  scmp2493 = ( (  cmp79 ) ( ( (  l2490 ) .f_secs ) ,  ( (  r2492 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2493 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2493 );
    }
    return ( (  cmp79 ) ( ( (  l2490 ) .f_nsecs ) ,  ( (  r2492 ) .f_nsecs ) ) );
}

static  struct Duration_1389   diff1390 (    struct timespec  l2496 ,    struct timespec  r2498 ) {
    int64_t  secdiff2499 = (  op_dash_sub84 ( ( (  l2496 ) .tv_sec ) , ( (  r2498 ) .tv_sec ) ) );
    int64_t  nsdiff2500 = (  op_dash_sub84 ( ( (  l2496 ) .tv_nsec ) , ( (  r2498 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2501 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2500 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2499 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1389) { .f_secs = (  secdiff2499 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2500 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2499 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1389) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2500 ) } );
            } else {
                return ( (struct Duration_1389) { .f_secs = (  op_dash_sub84 ( (  secdiff2499 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2501 ) , (  nsdiff2500 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2499 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1389) { .f_secs = (  secdiff2499 ) , .f_nsecs = (  nsdiff2500 ) } );
        } else {
            return ( (struct Duration_1389) { .f_secs = (  op_dash_sub84 ( (  secdiff2499 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2501 ) , (  nsdiff2500 ) ) ) } );
        }
    }
}

static  struct Duration_1389   duration_dash_from_dash_ns1391 (    int64_t  ns2504 ) {
    int64_t  ns_dash_in_dash_secs2505 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1389) { .f_secs = (  op_dash_div85 ( (  ns2504 ) , (  ns_dash_in_dash_secs2505 ) ) ) , .f_nsecs = ( (  mod965 ) ( (  ns2504 ) ,  (  ns_dash_in_dash_secs2505 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1392 (    struct Duration_1389  d2516 ) {
    int64_t  ns_dash_in_dash_secs2517 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2516 ) .f_secs ) , (  ns_dash_in_dash_secs2517 ) ) ) , ( (  d2516 ) .f_nsecs ) ) );
}

static  uint32_t   u32_dash_or1393 (    uint32_t  l2520 ,    uint32_t  r2522 ) {
    return ( (  l2520 ) | (  r2522 ) );
}

static  uint32_t   u32_dash_ors1394 (    struct SmolArray_103  vals2525 ) {
    return ( (  reduce771 ) ( (  vals2525 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1393 ) ) );
}

static  uint32_t   u32_dash_ors1395 (    struct SmolArray_106  vals2525 ) {
    return ( (  reduce788 ) ( (  vals2525 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1393 ) ) );
}

static  uint32_t   u32_dash_ors1396 (    struct SmolArray_109  vals2525 ) {
    return ( (  reduce795 ) ( (  vals2525 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1393 ) ) );
}

static  uint32_t   u32_dash_and1397 (    uint32_t  l2528 ,    uint32_t  r2530 ) {
    return ( (  l2528 ) & (  r2530 ) );
}

static  uint32_t   u32_dash_neg1398 (    uint32_t  l2533 ) {
    return ( ~ (  l2533 ) );
}

static  struct Scanner_329   mk1399 (    struct DynStr_136  s2572 ) {
    return ( (struct Scanner_329) { .f_s = ( (  chars1004 ) ( (  s2572 ) ) ) } );
}

static  struct Maybe_807   scan_dash_int1400 (    struct Scanner_329 *  sc2575 ) {
    struct TakeWhile_558  digit_dash_chars2576 = ( (  take_dash_while581 ) ( (  sc2575 ) ,  (  is_dash_digit1247 ) ) );
    if ( ( (  null886 ) ( (  digit_dash_chars2576 ) ) ) ) {
        return ( (struct Maybe_807) { .tag = Maybe_807_None_t } );
    }
    ( (  drop_prime_888 ) ( (  sc2575 ) ,  ( (  count845 ) ( (  digit_dash_chars2576 ) ) ) ) );
    return ( (  parse_dash_int1249 ) ( (  digit_dash_chars2576 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1401 (  ) {
    struct Termios_141  temp1402 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2589 = ( &temp1402 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr243 ) ( (  orig_dash_termios2589 ) ) ) ) );
    struct Termios_141  raw2590 = ( * (  orig_dash_termios2589 ) );
    raw2590 .f_c_dash_lflag = ( (  u32_dash_and1397 ) ( ( (  raw2590 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1398 ) ( ( (  u32_dash_ors1394 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2590 .f_c_dash_iflag = ( (  u32_dash_and1397 ) ( ( (  raw2590 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1398 ) ( ( (  u32_dash_ors1395 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2590 .f_c_dash_oflag = ( (  u32_dash_and1397 ) ( ( (  raw2590 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1398 ) ( ( (  u32_dash_ors1396 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2590 .f_c_dash_cflag = ( (  u32_dash_or1393 ) ( ( (  raw2590 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1238 ) ( ( & ( (  raw2590 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1238 ) ( ( & ( (  raw2590 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr243 ) ( ( & (  raw2590 ) ) ) ) ) );
    return ( * (  orig_dash_termios2589 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1403 (    struct Termios_141 *  og_dash_termios2593 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr243 ) ( (  og_dash_termios2593 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1404 (    int32_t  timeout_dash_ms2597 ) {
    struct Pollfd_250  pfd2598 = ( (struct Pollfd_250) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr249 ) ( ( & (  pfd2598 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2597 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2599 = ( ( (  zeroed264 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr233 ) ( ( & (  c2599 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2599 ) ) );
}

static  enum Unit_13   flush_dash_stdout1405 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr300 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1406 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1407 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1409 {
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2603;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env1410 {
    bool *  should_dash_resize2603;
};

struct funenv1410 {
    enum Unit_13  (*fun) (  struct env1410  ,    int32_t  );
    struct env1410 env;
};

struct funenv1410  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1411 ) {
    struct funenv1410  temp1412 = _intr_sigarr [  __intr__sig1411 ];
    temp1412.fun ( temp1412.env ,  __intr__sig1411 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1413 ,   struct funenv1410  __intr__fun1414 ) {
    _intr_sigarr [  __intr__sig1413 ] =  __intr__fun1414;
    signal(  __intr__sig1413 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1410 (   struct env1410 env ,    int32_t  dref2610 ) {
    (* env.should_dash_resize2603 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_723   mk1409 (   struct env1409 env ) {
    struct Termios_141  og_dash_termios2605 = ( (  enable_dash_raw_dash_mode1401 ) ( ) );
    ( (  hide_dash_cursor1317 ) ( ) );
    ( (  reset_dash_colors1329 ) ( ) );
    ( (  clear_dash_screen1330 ) ( ) );
    ( (  enable_dash_mouse1406 ) ( ) );
    ( (  flush_dash_stdout1405 ) ( ) );
    enum ColorPalette_724  palette2606 = ( (  query_dash_palette1324 ) ( ) );
    struct Tuple2_890  dims2607 = ( (  get_dash_dimensions1320 ) ( ) );
    uint32_t  fps2608 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2609 = ( (  now1386 ) ( ) );
    struct env1410 envinst1410 = {
        .should_dash_resize2603 = env.should_dash_resize2603 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1410){ .fun = lam1410, .env = envinst1410 } ) ) );
    return ( (struct Tui_723) { .f_width = ( (  fst889 ) ( (  dims2607 ) ) ) , .f_height = ( (  snd891 ) ( (  dims2607 ) ) ) , .f_target_dash_fps = (  fps2608 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2609 ) , .f_fps_dash_ts = (  last_dash_sync2609 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2605 ) , .f_palette = (  palette2606 ) } );
}

static  enum Unit_13   sync1415 (    struct Tui_723 *  tui2613 ) {
    if ( (  eq42 ( ( ( * (  tui2613 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2614 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size315 ) ( ( ( * (  tui2613 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1416 = ( (  undefined138 ) ( ) );
    struct timespec *  now2615 = ( &temp1416 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2615 ) ) );
    int64_t  elapsed_dash_ns2616 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2615 ) ) .tv_sec ) , ( ( ( * (  tui2613 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2615 ) ) .tv_nsec ) , ( ( ( * (  tui2613 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2617 = (  op_dash_sub84 ( (  frame_dash_ns2614 ) , (  elapsed_dash_ns2616 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2617 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1417 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2617 ) } );
        struct timespec *  ts2618 = ( &temp1417 );
        ( ( nanosleep ) ( (  ts2618 ) ,  ( (  null_dash_ptr304 ) ( ) ) ) );
    }
    struct timespec  temp1418 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2619 = ( &temp1418 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2619 ) ) );
    (*  tui2613 ) .f_last_dash_sync = ( * (  last_dash_sync2619 ) );
    (*  tui2613 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2613 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2620 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2613 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2613 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2613 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2613 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2620 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2613 ) .f_actual_dash_fps = ( ( * (  tui2613 ) ) .f_fps_dash_count );
        (*  tui2613 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2613 ) .f_fps_dash_ts = ( ( * (  tui2613 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1419 (    struct Tui_723 *  tui2623 ) {
    ( (  disable_dash_mouse1407 ) ( ) );
    ( (  show_dash_cursor1316 ) ( ) );
    ( (  reset_dash_colors1329 ) ( ) );
    ( (  clear_dash_screen1330 ) ( ) );
    ( (  reset_dash_cursor_dash_position1319 ) ( ) );
    ( (  disable_dash_raw_dash_mode1403 ) ( ( & ( ( * (  tui2623 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1405 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   btn_dash_to_dash_mouse_dash_button1420 (    int64_t  btn2630 ) {
    return ( {  int32_t  dref2631 = ( (  i64_dash_i32312 ) ( (  btn2630 ) ) ) ;  dref2631 == 0 ? ( MouseButton_149_MouseLeft ) :  dref2631 == 1 ? ( MouseButton_149_MouseMiddle ) :  dref2631 == 2 ? ( MouseButton_149_MouseRight ) :  dref2631 == 64 ? ( MouseButton_149_ScrollUp ) :  dref2631 == 65 ? ( MouseButton_149_ScrollDown ) : ( (  panic_prime_1161 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1422 {
    enum {
        Maybe_1422_None_t,
        Maybe_1422_Just_t,
    } tag;
    union {
        struct {
            struct Key_603  field0;
        } Maybe_1422_Just_s;
    } stuff;
};

static struct Maybe_1422 Maybe_1422_Just (  struct Key_603  field0 ) {
    return ( struct Maybe_1422 ) { .tag = Maybe_1422_Just_t, .stuff = { .Maybe_1422_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1422   parse_dash_ss31421 (    char  c2634 ) {
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2634 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1422_Just ) ( ( (struct Key_603) { .tag = Key_603_F4_t } ) ) );
    }
    return ( (struct Maybe_1422) { .tag = Maybe_1422_None_t } );
}

static  struct Maybe_601   parse_dash_csi1423 (    struct DynStr_136  seq2637 ) {
    if ( (  eq45 ( ( ( (  seq2637 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
    }
    char  last2638 = (  elem_dash_get1206 ( ( (  seq2637 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2637 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1206 ( ( (  seq2637 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_329  temp1424 = ( (  mk1399 ) ( ( (  substr363 ) ( (  seq2637 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2637 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_329 *  sc2639 = ( &temp1424 );
        struct Maybe_807  dref2640 = ( (  scan_dash_int1400 ) ( (  sc2639 ) ) );
        if ( dref2640.tag == Maybe_807_None_t ) {
            return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
        }
        else if ( dref2640.tag == Maybe_807_Just_t ) {
            ( (  next571 ) ( (  sc2639 ) ) );
            struct Maybe_807  dref2642 = ( (  scan_dash_int1400 ) ( (  sc2639 ) ) );
            if ( dref2642.tag == Maybe_807_None_t ) {
                return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
            }
            else if ( dref2642.tag == Maybe_807_Just_t ) {
                ( (  next571 ) ( (  sc2639 ) ) );
                struct Maybe_807  dref2644 = ( (  scan_dash_int1400 ) ( (  sc2639 ) ) );
                if ( dref2644.tag == Maybe_807_None_t ) {
                    return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
                }
                else if ( dref2644.tag == Maybe_807_Just_t ) {
                    return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Mouse ) ( ( (struct MouseEvent_604) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1420 ) ( ( dref2640 .stuff .Maybe_807_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2642 .stuff .Maybe_807_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2644 .stuff .Maybe_807_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2637 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
    }
    if ( (  eq47 ( (  last2638 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_329  temp1425 = ( (  mk1399 ) ( (  seq2637 ) ) );
        struct Scanner_329 *  sc2646 = ( &temp1425 );
        struct Maybe_807  dref2647 = ( (  scan_dash_int1400 ) ( (  sc2646 ) ) );
        if ( dref2647.tag == Maybe_807_None_t ) {
            return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
        }
        else if ( dref2647.tag == Maybe_807_Just_t ) {
            return ( {  int32_t  dref2649 = ( (  i64_dash_i32312 ) ( ( dref2647 .stuff .Maybe_807_Just_s .field0 ) ) ) ;  dref2649 == 1 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Home_t } ) ) ) ) ) :  dref2649 == 2 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Insert_t } ) ) ) ) ) :  dref2649 == 3 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Delete_t } ) ) ) ) ) :  dref2649 == 4 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_End_t } ) ) ) ) ) :  dref2649 == 5 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_PageUp_t } ) ) ) ) ) :  dref2649 == 6 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_PageDown_t } ) ) ) ) ) :  dref2649 == 15 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F5_t } ) ) ) ) ) :  dref2649 == 17 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F6_t } ) ) ) ) ) :  dref2649 == 18 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F7_t } ) ) ) ) ) :  dref2649 == 19 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F8_t } ) ) ) ) ) :  dref2649 == 20 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F9_t } ) ) ) ) ) :  dref2649 == 21 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F10_t } ) ) ) ) ) :  dref2649 == 23 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F11_t } ) ) ) ) ) :  dref2649 == 24 ? ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_F12_t } ) ) ) ) ) : ( (struct Maybe_601) { .tag = Maybe_601_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
}

static  struct Maybe_601   read_dash_key1426 (  ) {
    char  temp1427 = ( (  undefined133 ) ( ) );
    char *  ch2651 = ( &temp1427 );
    struct Maybe_49  dref2652 = ( (  read_dash_byte1404 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2652.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
    }
    else if ( dref2652.tag == Maybe_49_Just_t ) {
        (*  ch2651 ) = ( dref2652 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2654 = ( (  i32_dash_char1151 ) ( ( (  u32_dash_i32317 ) ( ( (  u32_dash_or1393 ) ( ( (  i32_dash_u32309 ) ( ( (  char_dash_i32971 ) ( ( * (  ch2651 ) ) ) ) ) ) ,  ( (  from_dash_hex1311 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( ( Key_603_Ctrl ) ( (  letter2654 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u81150 ) ( ( * (  ch2651 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1426 ) ( ) );
        } else {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( ( Key_603_Char ) ( ( * (  ch2651 ) ) ) ) ) ) ) );
        }
    }
    char  temp1428 = ( (  undefined133 ) ( ) );
    char *  ch22655 = ( &temp1428 );
    struct Maybe_49  dref2656 = ( (  read_dash_byte1404 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2656.tag == Maybe_49_None_t ) {
        return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Escape_t } ) ) ) ) );
    }
    else if ( dref2656.tag == Maybe_49_Just_t ) {
        (*  ch22655 ) = ( dref2656 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22655 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_210  temp1429 = ( ( (  zeroed278 ) ( ) ) );
        struct Array_210 *  seq2658 = ( &temp1429 );
        int32_t  slen2659 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2659 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1430 = ( (  undefined133 ) ( ) );
            char *  sc2660 = ( &temp1430 );
            struct Maybe_49  dref2661 = ( (  read_dash_byte1404 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2661.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2661.tag == Maybe_49_Just_t ) {
                (*  sc2660 ) = ( dref2661 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1239 ) ( (  seq2658 ) ,  ( (  i32_dash_size311 ) ( (  slen2659 ) ) ) ,  ( * (  sc2660 ) ) ) );
            slen2659 = (  op_dash_add87 ( (  slen2659 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u81150 ) ( ( * (  sc2660 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u81150 ) ( ( * (  sc2660 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1423 ) ( ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( (  as_dash_slice1240 ) ( (  seq2658 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( (  slen2659 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22655 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1431 = ( (  undefined133 ) ( ) );
        char *  sc2663 = ( &temp1431 );
        struct Maybe_49  dref2664 = ( (  read_dash_byte1404 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2664.tag == Maybe_49_None_t ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Escape_t } ) ) ) ) );
        }
        else if ( dref2664.tag == Maybe_49_Just_t ) {
            (*  sc2663 ) = ( dref2664 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1422  dref2666 = ( (  parse_dash_ss31421 ) ( ( * (  sc2663 ) ) ) );
        if ( dref2666.tag == Maybe_1422_None_t ) {
            return ( (struct Maybe_601) { .tag = Maybe_601_None_t } );
        }
        else if ( dref2666.tag == Maybe_1422_Just_t ) {
            return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( dref2666 .stuff .Maybe_1422_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_601_Just ) ( ( ( InputEvent_602_Key ) ( ( (struct Key_603) { .tag = Key_603_Escape_t } ) ) ) ) );
}

struct env1432 {
    ;
    bool *  should_dash_resize2603;
    ;
    ;
};

static  bool   update_dash_dimensions1432 (   struct env1432 env ,    struct Tui_723 *  tui2670 ) {
    if ( ( ! ( * ( env.should_dash_resize2603 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2603 ) = ( false );
    struct Tuple2_890  dim2671 = ( (  get_dash_dimensions1320 ) ( ) );
    uint32_t  w2672 = ( (  fst889 ) ( (  dim2671 ) ) );
    uint32_t  h2673 = ( (  snd891 ) ( (  dim2671 ) ) );
    (*  tui2670 ) .f_width = (  w2672 );
    (*  tui2670 ) .f_height = (  h2673 );
    return ( true );
}

static  struct Cell_58   lam1434 (    struct Cell_58  dref2691 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1435 (    struct Cell_58  dref2693 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_722   mk_dash_screen1433 (    struct Tui_723 *  tui2687 ,    enum CAllocator_4  al2689 ) {
    struct Slice_633  cur2690 = ( (  allocate1224 ) ( (  al2689 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2687 ) ) .f_width ) , ( ( * (  tui2687 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1212 ) ( (  cur2690 ) ,  (  lam1434 ) ) );
    struct Slice_633  prev2692 = ( (  allocate1224 ) ( (  al2689 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2687 ) ) .f_width ) , ( ( * (  tui2687 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1213 ) ( (  prev2692 ) ,  (  lam1435 ) ) );
    return ( (struct Screen_722) { .f_current = (  cur2690 ) , .f_previous = (  prev2692 ) , .f_al = (  al2689 ) , .f_tui = (  tui2687 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1436 (    struct Screen_722 *  screen2696 ) {
    enum CAllocator_4  al2697 = ( ( * (  screen2696 ) ) .f_al );
    ( (  free1233 ) ( (  al2697 ) ,  ( ( * (  screen2696 ) ) .f_current ) ) );
    ( (  free1233 ) ( (  al2697 ) ,  ( ( * (  screen2696 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1438 (    struct Cell_58  dref2701 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1437 (    struct Screen_722 *  screen2700 ) {
    ( (  map1214 ) ( ( ( * (  screen2700 ) ) .f_current ) ,  (  lam1438 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1440 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1439 (    struct RenderState_1440 *  rs2705 ,    struct Cell_58 *  c2707 ,    uint32_t  x2709 ,    uint32_t  y2711 ) {
    if ( ( ( !  eq42 ( (  x2709 ) , ( ( * (  rs2705 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2711 ) , ( ( * (  rs2705 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1318 ) ( (  x2709 ) ,  (  y2711 ) ) );
        (*  rs2705 ) .f_x = (  x2709 );
        (*  rs2705 ) .f_y = (  y2711 );
    }
    char  char2712 = ( ( * (  c2707 ) ) .f_c );
    struct Color_59  bg2713 = ( ( * (  c2707 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2712 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2712 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2712 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2712 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2713 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2705 ) ) .f_fg ) , ( ( * (  c2707 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1335 ) ( ( ( * (  c2707 ) ) .f_fg ) ) );
        (*  rs2705 ) .f_fg = ( ( * (  c2707 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2705 ) ) .f_bg ) , (  bg2713 ) ) ) ) {
        ( (  set_dash_bg1336 ) ( (  bg2713 ) ) );
        (*  rs2705 ) .f_bg = (  bg2713 );
    }
    ( (  print_dash_str28 ) ( (  char2712 ) ) );
    (*  rs2705 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2705 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1441 (    struct Screen_722 *  screen2716 ) {
    int32_t  w2717 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2716 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2718 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2716 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1440  temp1442 = ( (struct RenderState_1440) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1440 *  rs2719 = ( &temp1442 );
    ( (  move_dash_cursor_dash_to1318 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_403  temp1443 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2718 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1444 =  next404 (&temp1443);
        if (  __cond1444 .tag == 0 ) {
            break;
        }
        int32_t  y2721 =  __cond1444 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1445 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2717 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1446 =  next404 (&temp1445);
            if (  __cond1446 .tag == 0 ) {
                break;
            }
            int32_t  x2723 =  __cond1446 .stuff .Maybe_369_Just_s .field0;
            size_t  i2724 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2721 ) , (  w2717 ) ) ) , (  x2723 ) ) ) ) );
            struct Cell_58 *  cur2725 = ( (  get_dash_ptr1180 ) ( ( ( * (  screen2716 ) ) .f_current ) ,  (  i2724 ) ) );
            struct Cell_58 *  prev2726 = ( (  get_dash_ptr1180 ) ( ( ( * (  screen2716 ) ) .f_previous ) ,  (  i2724 ) ) );
            if ( ( ( !  eq57 ( (  cur2725 ) , (  prev2726 ) ) ) || ( ( * (  screen2716 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2719 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2719 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1439 ) ( (  rs2719 ) ,  (  cur2725 ) ,  ( (  i32_dash_u32309 ) ( (  x2723 ) ) ) ,  ( (  i32_dash_u32309 ) ( (  y2721 ) ) ) ) );
                (*  prev2726 ) = ( * (  cur2725 ) );
            }
        }
    }
    (*  screen2716 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1329 ) ( ) );
    ( (  flush_dash_stdout1405 ) ( ) );
    return ( ( * (  rs2719 ) ) .f_changes );
}

struct funenv1432 {
    bool  (*fun) (  struct env1432  ,    struct Tui_723 *  );
    struct env1432 env;
};

struct env1447 {
    ;
    struct env1432 envinst1432;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1447 (   struct env1447 env ,    struct Screen_722 *  screen2729 ) {
    struct Tui_723 *  tui2730 = ( ( * (  screen2729 ) ) .f_tui );
    struct funenv1432  temp1448 = ( (struct funenv1432){ .fun = update_dash_dimensions1432, .env =  env.envinst1432  } );
    if ( ( ! ( temp1448.fun ( temp1448.env ,  (  tui2730 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2729 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2731 = ( ( * ( ( * (  screen2729 ) ) .f_tui ) ) .f_width );
    uint32_t  h2732 = ( ( * ( ( * (  screen2729 ) ) .f_tui ) ) .f_height );
    size_t  nusz2733 = ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( (  w2731 ) , (  h2732 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2733 ) , ( ( ( * (  screen2729 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_722  nuscreen2734 = ( (  mk_dash_screen1433 ) ( (  tui2730 ) ,  ( ( * (  screen2729 ) ) .f_al ) ) );
    (*  screen2729 ) .f_current = ( (  nuscreen2734 ) .f_current );
    (*  screen2729 ) .f_previous = ( (  nuscreen2734 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1449 (    struct Screen_722 *  screen2737 ,    struct Color_59  c2739 ) {
    (*  screen2737 ) .f_default_dash_fg = (  c2739 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1450 (    struct Screen_722 *  screen2742 ,    struct Color_59  c2744 ) {
    (*  screen2742 ) .f_default_dash_bg = (  c2744 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1451 (    struct Screen_722 *  screen2747 ,    struct Color_59  fg2749 ,    struct Color_59  bg2751 ) {
    (*  screen2747 ) .f_default_dash_fg = (  fg2749 );
    (*  screen2747 ) .f_default_dash_bg = (  bg2751 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1173   get_dash_cell_dash_ptr1452 (    struct Screen_722 *  screen2758 ,    int32_t  x2760 ,    int32_t  y2762 ) {
    int32_t  w2763 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2758 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2760 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2760 ) , (  w2763 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1173) { .tag = Maybe_1173_None_t } );
    }
    if ( ( (  cmp80 ( (  y2762 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2762 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2758 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1173) { .tag = Maybe_1173_None_t } );
    }
    size_t  i2764 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2762 ) , (  w2763 ) ) ) , (  x2760 ) ) ) ) );
    return ( ( Maybe_1173_Just ) ( ( (  get_dash_ptr1180 ) ( ( ( * (  screen2758 ) ) .f_current ) ,  (  i2764 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1453 (    struct Screen_722 *  screen2767 ) {
    struct RangeIter_403  temp1454 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2767 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1455 =  next404 (&temp1454);
        if (  __cond1455 .tag == 0 ) {
            break;
        }
        int32_t  y2769 =  __cond1455 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1456 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2767 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1457 =  next404 (&temp1456);
            if (  __cond1457 .tag == 0 ) {
                break;
            }
            int32_t  x2771 =  __cond1457 .stuff .Maybe_369_Just_s .field0;
            struct Cell_58 *  cell2772 = ( (  or_dash_fail1172 ) ( ( (  get_dash_cell_dash_ptr1452 ) ( (  screen2767 ) ,  (  x2771 ) ,  (  y2769 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2772 ) .f_bg = ( ( * (  screen2767 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1458 (    struct Screen_722 *  screen2775 ,    char  c2777 ,    int32_t  x2779 ,    int32_t  y2781 ) {
    int32_t  w2782 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2775 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp80 ( (  x2779 ) , (  w2782 ) ) != 0 ) || (  cmp80 ( (  y2781 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2775 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp80 ( (  x2779 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) || (  cmp80 ( (  y2781 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2783 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2781 ) , (  w2782 ) ) ) , (  x2779 ) ) ) ) );
    struct Color_59  fg2784 = ( ( * (  screen2775 ) ) .f_default_dash_fg );
    struct Color_59  bg2785 = ( ( * (  screen2775 ) ) .f_default_dash_bg );
    char  c2786 = (  c2777 );
    ( (  set1192 ) ( ( ( * (  screen2775 ) ) .f_current ) ,  (  i2783 ) ,  ( (struct Cell_58) { .f_c = (  c2786 ) , .f_fg = (  fg2784 ) , .f_bg = (  bg2785 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam721 (   struct env721 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1459 (    struct Screen_722 *  screen2789 ,    int32_t  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env721 envinst721 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each720 ) ( ( (  zip537 ) ( ( (  chars983 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv721){ .fun = lam721, .env = envinst721 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam728 (   struct env728 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1460 (    struct Screen_722 *  screen2789 ,    struct StrConcat_991  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env728 envinst728 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each727 ) ( ( (  zip539 ) ( ( (  chars1127 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv728){ .fun = lam728, .env = envinst728 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam732 (   struct env732 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1461 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1006  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env732 envinst732 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each731 ) ( ( (  zip541 ) ( ( (  chars1128 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv732){ .fun = lam732, .env = envinst732 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam736 (   struct env736 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1462 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1008  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env736 envinst736 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each735 ) ( ( (  zip543 ) ( ( (  chars1129 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv736){ .fun = lam736, .env = envinst736 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam740 (   struct env740 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1463 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1032  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env740 envinst740 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each739 ) ( ( (  zip545 ) ( ( (  chars1130 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv740){ .fun = lam740, .env = envinst740 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam744 (   struct env744 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1464 (    struct Screen_722 *  screen2789 ,    struct StrConcat_17  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env744 envinst744 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each743 ) ( ( (  zip547 ) ( ( (  chars1073 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv744){ .fun = lam744, .env = envinst744 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam748 (   struct env748 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1465 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1034  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env748 envinst748 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each747 ) ( ( (  zip549 ) ( ( (  chars1037 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv748){ .fun = lam748, .env = envinst748 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam752 (   struct env752 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1466 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1041  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env752 envinst752 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each751 ) ( ( (  zip551 ) ( ( (  chars1131 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv752){ .fun = lam752, .env = envinst752 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam756 (   struct env756 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1467 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1046  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env756 envinst756 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each755 ) ( ( (  zip539 ) ( ( (  chars1132 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv756){ .fun = lam756, .env = envinst756 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam760 (   struct env760 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1468 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1060  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env760 envinst760 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each759 ) ( ( (  zip539 ) ( ( (  chars1133 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv760){ .fun = lam760, .env = envinst760 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam764 (   struct env764 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1469 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1064  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env764 envinst764 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each763 ) ( ( (  zip553 ) ( ( (  chars1134 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv764){ .fun = lam764, .env = envinst764 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam768 (   struct env768 env ,    struct Tuple2_387  dref2800 ) {
    ( (  put_dash_char1458 ) ( ( env.screen2789 ) ,  ( dref2800 .field0 ) ,  (  op_dash_add87 ( ( env.x2798 ) , ( dref2800 .field1 ) ) ) ,  ( env.y2795 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1470 (    struct Screen_722 *  screen2789 ,    struct StrConcat_1075  s2791 ,    int32_t  x2793 ,    int32_t  y2795 ) {
    int32_t  w2796 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2795 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2795 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2789 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2797 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2795 ) , (  w2796 ) ) ) , (  x2793 ) ) );
    int32_t  x2798 = ( (  min968 ) ( (  x2793 ) ,  (  w2796 ) ) );
    size_t  max_dash_len2799 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2796 ) , (  x2798 ) ) ) ) );
    struct env768 envinst768 = {
        .y2795 =  y2795 ,
        .screen2789 =  screen2789 ,
        .x2798 =  x2798 ,
    };
    ( (  for_dash_each767 ) ( ( (  zip555 ) ( ( (  chars1135 ) ( (  s2791 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv768){ .fun = lam768, .env = envinst768 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1471 (    struct Screen_722 *  screen2805 ,    int32_t  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count851 ) ( ( (  chars983 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1459 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1472 (    struct Screen_722 *  screen2805 ,    struct StrConcat_991  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count853 ) ( ( (  chars1127 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1460 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1473 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1006  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count855 ) ( ( (  chars1128 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1461 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1474 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1008  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count857 ) ( ( (  chars1129 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1462 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1475 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1032  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count859 ) ( ( (  chars1130 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1463 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1476 (    struct Screen_722 *  screen2805 ,    struct StrConcat_17  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count861 ) ( ( (  chars1073 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1464 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1477 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1034  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count863 ) ( ( (  chars1037 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1465 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1478 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1041  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count865 ) ( ( (  chars1131 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1466 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1479 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1046  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count853 ) ( ( (  chars1132 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1467 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1480 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1060  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count853 ) ( ( (  chars1133 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1468 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1481 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1064  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count867 ) ( ( (  chars1134 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1469 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1482 (    struct Screen_722 *  screen2805 ,    struct StrConcat_1075  s2807 ,    int32_t  x2809 ,    int32_t  y2811 ) {
    int32_t  slen2812 = ( (  size_dash_i32313 ) ( ( (  count869 ) ( ( (  chars1135 ) ( (  s2807 ) ) ) ) ) ) );
    int32_t  w2813 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2805 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2814 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2813 ) , (  x2809 ) ) ) , (  slen2812 ) ) );
    ( (  draw_dash_str1470 ) ( (  screen2805 ) ,  (  s2807 ) ,  (  x2814 ) ,  (  y2811 ) ) );
    return ( Unit_13_Unit );
}

static  struct Slice_1184   get1483 (  ) {
    return ( (struct Slice_1184) { .f_ptr = ( (  offset_dash_ptr169 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1484 (    char  c2817 ) {
    if ( (  eq47 ( (  c2817 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return (  from_dash_integral29 ( 2 ) );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1485 (    char  c2827 ) {
    if ( ( (  is_dash_whitespace1241 ) ( (  c2827 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1245 ) ( (  c2827 ) ) ) || (  eq47 ( (  c2827 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2827 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1488 (    struct Cursor_154  l2834 ,    struct Cursor_154  r2836 ) {
    return ( (  eq41 ( ( (  l2834 ) .f_x ) , ( (  r2836 ) .f_x ) ) ) && (  eq41 ( ( (  l2834 ) .f_y ) , ( (  r2836 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1489 (    struct Visual_903  dref2846 ) {
    return ( dref2846 .field0 );
}

struct Tuple2_1491 {
    struct Mode_904  field0;
    struct Mode_904  field1;
};

static struct Tuple2_1491 Tuple2_1491_Tuple2 (  struct Mode_904  field0 ,  struct Mode_904  field1 ) {
    return ( struct Tuple2_1491 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1490 (    struct Mode_904  l2851 ,    struct Mode_904  r2853 ) {
    struct Tuple2_1491  dref2854 = ( ( Tuple2_1491_Tuple2 ) ( (  l2851 ) ,  (  r2853 ) ) );
    if ( dref2854 .field0.tag == Mode_904_Normal_t && dref2854 .field1.tag == Mode_904_Normal_t ) {
        return ( true );
    }
    else if ( dref2854 .field0.tag == Mode_904_Insert_t && dref2854 .field1.tag == Mode_904_Insert_t ) {
        return ( true );
    }
    else if ( dref2854 .field0.tag == Mode_904_Select_t && dref2854 .field1.tag == Mode_904_Select_t ) {
        return ( true );
    }
    else if ( dref2854 .field0.tag == Mode_904_Cmd_t && dref2854 .field1.tag == Mode_904_Cmd_t ) {
        ( (  panic1155 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2854 .field0.tag == Mode_904_SearchBox_t && dref2854 .field1.tag == Mode_904_SearchBox_t ) {
        ( (  panic1155 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1492 (    struct Editor_902 *  ed2879 ,    int32_t  y2881 ) {
    return ( (  get_dash_ptr1253 ) ( ( & ( ( * (  ed2879 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2881 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1493 (    struct Editor_902 *  ed2884 ) {
    return ( (  get_dash_ptr1253 ) ( ( & ( ( * (  ed2884 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2884 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_560   indent_dash_on_dash_row1494 (    struct Editor_902 *  ed2887 ,    int32_t  y2889 ) {
    return ( (  take_dash_while582 ) ( ( (  get_dash_row1492 ) ( (  ed2887 ) ,  (  y2889 ) ) ) ,  (  is_dash_whitespace1241 ) ) );
}

static  size_t   num_dash_rows1495 (    struct Editor_902 *  ed2892 ) {
    return ( (  size1309 ) ( ( & ( ( * (  ed2892 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1283 {
    enum Unit_13  (*fun) (  struct env1283  ,    struct List_323 *  ,    size_t  );
    struct env1283 env;
};

struct env1496 {
    struct env1283 envinst1283;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1496 (   struct env1496 env ,    struct Editor_902 *  ed2900 ,    int32_t  y2902 ) {
    struct List_3 *  next_dash_row2903 = ( (  get_dash_row1492 ) ( (  ed2900 ) ,  (  y2902 ) ) );
    ( (  free1265 ) ( (  next_dash_row2903 ) ) );
    struct funenv1283  temp1497 = ( (struct funenv1283){ .fun = remove1283, .env =  env.envinst1283  } );
    ( temp1497.fun ( temp1497.env ,  ( & ( ( * (  ed2900 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2902 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_row_dash_empty1498 (    struct Editor_902 *  ed2906 ,    int32_t  y2908 ) {
    return ( (  all873 ) ( ( (  get_dash_row1492 ) ( (  ed2906 ) ,  (  y2908 ) ) ) ,  (  is_dash_whitespace1241 ) ) );
}

static  struct Maybe_49   char_dash_at1499 (    struct Editor_902 *  ed2911 ,    struct Cursor_154  cur2913 ) {
    return ( (  try_dash_get1257 ) ( ( (  get_dash_row1492 ) ( (  ed2911 ) ,  ( (  cur2913 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur2913 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1500 (    struct Editor_902 *  ed2916 ) {
    return ( (  try_dash_get1257 ) ( ( (  cursor_dash_row1493 ) ( (  ed2916 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2916 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_903   x_dash_to_dash_visual_dash_x1501 (    struct Editor_902 *  ed2919 ,    int32_t  x2921 ,    int32_t  y2923 ) {
    return ( ( Visual_903_Visual ) ( ( (  sum871 ) ( ( (  map376 ) ( ( (  take399 ) ( ( (  get_dash_row1492 ) ( (  ed2919 ) ,  (  y2923 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2921 ) ) ) ) ) ,  (  char_dash_len1484 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1502 (    struct Editor_902 *  ed2926 ,    struct Visual_903  dref2927 ,    int32_t  y2930 ) {
    int32_t  sum_dash_x2931 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2932 = ( (  get_dash_row1492 ) ( (  ed2926 ) ,  (  y2930 ) ) );
    struct RangeIter_403  temp1503 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( * (  chars2932 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1504 =  next404 (&temp1503);
        if (  __cond1504 .tag == 0 ) {
            break;
        }
        int32_t  x2934 =  __cond1504 .stuff .Maybe_369_Just_s .field0;
        sum_dash_x2931 = (  op_dash_add87 ( (  sum_dash_x2931 ) , ( (  char_dash_len1484 ) ( (  elem_dash_get2 ( (  chars2932 ) , ( (  i32_dash_size311 ) ( (  x2934 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2927 .field0 ) , (  sum_dash_x2931 ) ) == 0 ) ) {
            return (  x2934 );
        }
    }
    return ( (  size_dash_i32313 ) ( ( ( * (  chars2932 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1505 (    struct Editor_902 *  ed2937 ,    struct Maybe_157  sel2939 ) {
    if ( ( ( !  eq1490 ( ( ( * (  ed2937 ) ) .f_mode ) , ( (struct Mode_904) { .tag = Mode_904_Select_t } ) ) ) || ( ! ( (  is_dash_just892 ) ( ( ( * (  ed2937 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2937 ) .f_selected = (  sel2939 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1506 (    struct Editor_902 *  ed2942 ) {
    struct Maybe_356  dref2943 = ( ( * (  ed2942 ) ) .f_msg );
    if ( dref2943.tag == Maybe_356_None_t ) {
    }
    else if ( dref2943.tag == Maybe_356_Just_t ) {
        ( (  free1228 ) ( ( ( * (  ed2942 ) ) .f_al ) ,  ( ( dref2943 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
        (*  ed2942 ) .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1507 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1356 envinst1356;
};

static  enum Unit_13   send_dash_msg1507 (   struct env1507 env ,    struct Editor_902 *  ed2947 ,    const char*  s2949 ) {
    ( (  reset_dash_msg1506 ) ( (  ed2947 ) ) );
    struct funenv1356  temp1508 = ( (struct funenv1356){ .fun = mk_dash_dyn_dash_str1356, .env =  env.envinst1356  } );
    struct DynStr_136  s2950 = ( temp1508.fun ( temp1508.env ,  (  s2949 ) ,  ( ( * (  ed2947 ) ) .f_al ) ) );
    (*  ed2947 ) .f_msg = ( ( Maybe_356_Just ) ( (  s2950 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1510 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1509 (    struct Editor_902 *  ed2954 ,    int32_t  x2956 ,    int32_t  y2958 ,    struct Dims_1510  dim2960 ) {
    struct Cursor_154  cur2961 = ( ( * (  ed2954 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2962 = ( !  eq41 ( ( (  cur2961 ) .f_x ) , (  x2956 ) ) );
    int32_t  y2963 = ( (  clamp977 ) ( (  y2958 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2954 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2964 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2963 ) , (  op_dash_add87 ( ( ( * (  ed2954 ) ) .f_screen_dash_top ) , (  funny_dash_space2964 ) ) ) ) == 0 ) ) {
        (*  ed2954 ) .f_screen_dash_top = ( (  max972 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2963 ) , (  funny_dash_space2964 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2963 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2954 ) ) .f_screen_dash_top ) , ( (  dim2960 ) .f_rows ) ) ) , (  funny_dash_space2964 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2965 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2963 ) , (  funny_dash_space2964 ) ) ) , ( (  dim2960 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2954 ) .f_screen_dash_top = (  onscreen_dash_y2965 );
        } else {
        }
    }
    struct List_3 *  row2966 = ( (  get_dash_row1492 ) ( (  ed2954 ) ,  (  y2963 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2962 ) ) {
        int32_t  x2967 = ( (  clamp977 ) ( (  x2956 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( ( (  size1308 ) ( (  row2966 ) ) ) ) ) ) );
        (*  ed2954 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1501 ) ( (  ed2954 ) ,  (  x2967 ) ,  (  y2963 ) ) );
    }
    struct Visual_903  vx2968 = ( ( * (  ed2954 ) ) .f_goal_dash_x );
    int32_t  x2969 = ( (  visual_dash_x_dash_to_dash_x1502 ) ( (  ed2954 ) ,  (  vx2968 ) ,  (  y2963 ) ) );
    int32_t  funny_dash_space2970 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2969 ) , (  op_dash_add87 ( ( ( * (  ed2954 ) ) .f_screen_dash_left ) , (  funny_dash_space2970 ) ) ) ) == 0 ) ) {
        (*  ed2954 ) .f_screen_dash_left = ( (  max972 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2969 ) , (  funny_dash_space2970 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2969 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2954 ) ) .f_screen_dash_left ) , ( (  dim2960 ) .f_cols ) ) ) , (  funny_dash_space2970 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2971 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2969 ) , (  funny_dash_space2970 ) ) ) , ( (  dim2960 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2954 ) .f_screen_dash_left = (  onscreen_dash_x2971 );
        } else {
        }
    }
    (*  ed2954 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  x2969 ) , .f_y = (  y2963 ) } );
    ( (  set_dash_selection1505 ) ( (  ed2954 ) ,  ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1511 (    struct Editor_902 *  ed2974 ,    int32_t  x2976 ,    struct Dims_1510  dim2978 ) {
    ( (  move_dash_to1509 ) ( (  ed2974 ) ,  (  x2976 ) ,  ( ( ( * (  ed2974 ) ) .f_cursor ) .f_y ) ,  (  dim2978 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1512 (    struct Editor_902 *  ed2981 ,    int32_t  y2983 ,    struct Dims_1510  dim2985 ) {
    ( (  move_dash_to1509 ) ( (  ed2981 ) ,  ( ( ( * (  ed2981 ) ) .f_cursor ) .f_x ) ,  (  y2983 ) ,  (  dim2985 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1513 (    struct Editor_902 *  ed2988 ,    struct Dims_1510  dim2990 ) {
    struct Cursor_154  cur2991 = ( ( * (  ed2988 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1512 ) ( (  ed2988 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2990 ) ) );
            ( (  move_dash_to_dash_col1511 ) ( (  ed2988 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1493 ) ( (  ed2988 ) ) ) ) .f_count ) ) ) ,  (  dim2990 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1511 ) ( (  ed2988 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2990 ) ) );
    }
    return ( !  eq1488 ( ( ( * (  ed2988 ) ) .f_cursor ) , (  cur2991 ) ) );
}

static  bool   move_dash_right1514 (    struct Editor_902 *  ed2994 ,    struct Dims_1510  dims2996 ) {
    struct Cursor_154  cur2997 = ( ( * (  ed2994 ) ) .f_cursor );
    int32_t  row_dash_len2998 = ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1493 ) ( (  ed2994 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2994 ) ) .f_cursor ) .f_x ) , (  row_dash_len2998 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2994 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2994 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1509 ) ( (  ed2994 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2994 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2996 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1511 ) ( (  ed2994 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2994 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2996 ) ) );
    }
    return ( !  eq1488 ( ( ( * (  ed2994 ) ) .f_cursor ) , (  cur2997 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1515 (    struct Editor_902 *  ed3001 ,    struct Dims_1510  dims3003 ) {
    int32_t  off3004 = ( (  size_dash_i32313 ) ( ( (  count847 ) ( ( (  indent_dash_on_dash_row1494 ) ( (  ed3001 ) ,  ( ( ( * (  ed3001 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1511 ) ( (  ed3001 ) ,  (  off3004 ) ,  (  dims3003 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1516 (    struct Editor_902 *  ed3007 ,    struct Dims_1510  dims3009 ) {
    struct List_3 *  currow3010 = ( (  cursor_dash_row1493 ) ( (  ed3007 ) ) );
    ( (  move_dash_to_dash_col1511 ) ( (  ed3007 ) ,  ( (  size_dash_i32313 ) ( ( (  size1308 ) ( (  currow3010 ) ) ) ) ) ,  (  dims3009 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1517 (    struct Editor_902 *  ed3016 ,    int32_t  col3018 ,    int32_t  row3020 ) {
    return (  eq41 ( (  col3018 ) , ( (  size_dash_i32313 ) ( ( (  size1308 ) ( ( (  get_dash_row1492 ) ( (  ed3016 ) ,  (  row3020 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1518 (    struct Editor_902 *  ed3023 ) {
    return (  eq41 ( ( ( ( * (  ed3023 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  size1308 ) ( ( (  cursor_dash_row1493 ) ( (  ed3023 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1519 (    struct Editor_902 *  ed3026 ,    struct Maybe_356  clip3028 ) {
    struct Maybe_356  dref3029 = ( ( * (  ed3026 ) ) .f_clipboard );
    if ( dref3029.tag == Maybe_356_None_t ) {
    }
    else if ( dref3029.tag == Maybe_356_Just_t ) {
        ( (  free1228 ) ( ( ( * (  ed3026 ) ) .f_al ) ,  ( ( dref3029 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed3026 ) .f_clipboard = (  clip3028 );
    return ( Unit_13_Unit );
}

struct funenv1347 {
    enum Unit_13  (*fun) (  struct env1347  ,    struct StrBuilder_627 *  ,    struct Slice_5  );
    struct env1347 env;
};

struct env1520 {
    ;
    ;
    ;
    ;
    ;
    struct env1347 envinst1347;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env713 envinst713;
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
    struct env1339 envinst1339;
};

static  struct Maybe_356   copy_dash_selection1520 (   struct env1520 env ,    struct Editor_902 *  ed3033 ) {
    struct Maybe_157  dref3034 = ( ( * (  ed3033 ) ) .f_selected );
    if ( dref3034.tag == Maybe_157_None_t ) {
        struct Maybe_49  dref3035 = ( (  char_dash_at_dash_cursor1500 ) ( (  ed3033 ) ) );
        if ( dref3035.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
        }
        else if ( dref3035.tag == Maybe_49_Just_t ) {
            struct StrBuilder_627  temp1521 = ( (  mk1353 ) ( ( ( * (  ed3033 ) ) .f_al ) ) );
            struct StrBuilder_627 *  sb3037 = ( &temp1521 );
            struct funenv713  temp1522 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
            ( temp1522.fun ( temp1522.env ,  (  sb3037 ) ,  ( dref3035 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_356_Just ) ( ( (  as_dash_str997 ) ( (  sb3037 ) ) ) ) );
        }
    }
    else if ( dref3034.tag == Maybe_157_Just_t ) {
        struct StrBuilder_627  temp1523 = ( (  mk1353 ) ( ( ( * (  ed3033 ) ) .f_al ) ) );
        struct StrBuilder_627 *  sb3039 = ( &temp1523 );
        struct Cursor_154  from3040 = ( (  min966 ) ( ( dref3034 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed3033 ) ) .f_cursor ) ) );
        struct Cursor_154  to3041 = ( (  max973 ) ( ( dref3034 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed3033 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from3040 ) .f_y ) , ( (  to3041 ) .f_y ) ) ) ) {
            struct List_3 *  currow3042 = ( (  get_dash_row1492 ) ( (  ed3033 ) ,  ( (  from3040 ) .f_y ) ) );
            struct funenv1347  temp1524 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1524.fun ( temp1524.env ,  (  sb3039 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  currow3042 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3040 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to3041 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1517 ) ( (  ed3033 ) ,  ( (  to3041 ) .f_x ) ,  ( (  to3041 ) .f_y ) ) ) ) {
                struct funenv1339  temp1525 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
                ( temp1525.fun ( temp1525.env ,  (  sb3039 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        } else {
            ( (  assert1162 ) ( (  cmp80 ( ( (  to3041 ) .f_y ) , ( (  from3040 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow3043 = ( (  get_dash_row1492 ) ( (  ed3033 ) ,  ( (  from3040 ) .f_y ) ) );
            struct funenv1347  temp1526 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1526.fun ( temp1526.env ,  (  sb3039 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  currow3043 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3040 ) .f_x ) ) ) ,  ( (  size1308 ) ( (  currow3043 ) ) ) ) ) ) );
            struct funenv1339  temp1527 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
            ( temp1527.fun ( temp1527.env ,  (  sb3039 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_321  temp1528 =  into_dash_iter325 ( ( (  subslice326 ) ( ( (  to_dash_slice1304 ) ( ( ( * (  ed3033 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3040 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  to3041 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_355  __cond1529 =  next394 (&temp1528);
                if (  __cond1529 .tag == 0 ) {
                    break;
                }
                struct List_3  row3045 =  __cond1529 .stuff .Maybe_355_Just_s .field0;
                struct funenv1347  temp1530 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
                ( temp1530.fun ( temp1530.env ,  (  sb3039 ) ,  ( (  to_dash_slice1303 ) ( (  row3045 ) ) ) ) );
                struct funenv1339  temp1531 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
                ( temp1531.fun ( temp1531.env ,  (  sb3039 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow3046 = ( (  get_dash_row1492 ) ( (  ed3033 ) ,  ( (  to3041 ) .f_y ) ) );
            struct funenv1347  temp1532 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1532.fun ( temp1532.env ,  (  sb3039 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  lastrow3046 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to3041 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1517 ) ( (  ed3033 ) ,  ( (  to3041 ) .f_x ) ,  ( (  to3041 ) .f_y ) ) ) ) {
                struct funenv1339  temp1533 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
                ( temp1533.fun ( temp1533.env ,  (  sb3039 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_136  s3047 = ( (  as_dash_str997 ) ( (  sb3039 ) ) );
        return ( ( Maybe_356_Just ) ( (  s3047 ) ) );
    }
}

struct funenv1520 {
    struct Maybe_356  (*fun) (  struct env1520  ,    struct Editor_902 *  );
    struct env1520 env;
};

struct env1534 {
    ;
    ;
    struct env1520 envinst1520;
    ;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1534 (   struct env1534 env ,    struct Editor_902 *  ed3050 ) {
    struct funenv1520  temp1535 = ( (struct funenv1520){ .fun = copy_dash_selection1520, .env =  env.envinst1520  } );
    ( (  set_dash_clipboard1519 ) ( (  ed3050 ) ,  ( temp1535.fun ( temp1535.env ,  (  ed3050 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1292 {
    enum Unit_13  (*fun) (  struct env1292  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1292 env;
};

struct funenv1496 {
    enum Unit_13  (*fun) (  struct env1496  ,    struct Editor_902 *  ,    int32_t  );
    struct env1496 env;
};

struct funenv1276 {
    enum Unit_13  (*fun) (  struct env1276  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1276 env;
};

struct funenv1279 {
    enum Unit_13  (*fun) (  struct env1279  ,    struct List_323 *  ,    size_t  ,    struct List_3  );
    struct env1279 env;
};

struct env1536 {
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
    struct env1282 envinst1282;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1290 envinst1290;
    struct env1292 envinst1292;
    ;
    struct env621 envinst621;
    ;
    ;
    ;
    ;
    struct env1496 envinst1496;
    ;
    ;
    struct env1276 envinst1276;
    ;
    ;
    struct env1279 envinst1279;
};

static  enum Unit_13   apply_dash_primitive1536 (   struct env1536 env ,    struct Editor_902 *  ed3054 ,    struct Primitive_153  prim3056 ,    struct Dims_1510  dims3058 ) {
    struct Primitive_153  dref3059 = (  prim3056 );
    if ( dref3059.tag == Primitive_153_PrimInsert_t ) {
        int32_t  x3062 = ( ( dref3059 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_x );
        int32_t  y3063 = ( ( dref3059 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_y );
        if ( (  cmp9 ( ( (  i32_dash_size311 ) ( (  y3063 ) ) ) , ( (  num_dash_rows1495 ) ( (  ed3054 ) ) ) ) != 0 ) ) {
            struct funenv621  temp1537 = ( (struct funenv621){ .fun = add621, .env =  env.envinst621  } );
            ( temp1537.fun ( temp1537.env ,  ( & ( ( * (  ed3054 ) ) .f_current_dash_file ) ) ,  ( (  mk1262 ) ( ( ( * (  ed3054 ) ) .f_al ) ) ) ) );
        }
        struct SliceIter_330  temp1538 =  into_dash_iter334 ( ( ( dref3059 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) );
        while (true) {
            struct Maybe_49  __cond1539 =  next371 (&temp1538);
            if (  __cond1539 .tag == 0 ) {
                break;
            }
            char  c3065 =  __cond1539 .stuff .Maybe_49_Just_s .field0;
            if ( (  eq47 ( (  c3065 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) {
                struct List_3 *  cur_dash_line3066 = ( (  get_dash_row1492 ) ( (  ed3054 ) ,  (  y3063 ) ) );
                struct List_3  temp1540 = ( (  mk1262 ) ( ( ( * (  ed3054 ) ) .f_al ) ) );
                struct List_3 *  nurow3067 = ( &temp1540 );
                struct funenv1290  temp1541 = ( (struct funenv1290){ .fun = add_dash_all1290, .env =  env.envinst1290  } );
                ( temp1541.fun ( temp1541.env ,  (  nurow3067 ) ,  ( (  from1196 ) ( ( (  to_dash_slice1303 ) ( ( * (  cur_dash_line3066 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  x3062 ) ) ) ) ) ) );
                ( (  trim1296 ) ( (  cur_dash_line3066 ) ,  ( (  i32_dash_size311 ) ( (  x3062 ) ) ) ) );
                struct funenv1279  temp1542 = ( (struct funenv1279){ .fun = insert1279, .env =  env.envinst1279  } );
                ( temp1542.fun ( temp1542.env ,  ( & ( ( * (  ed3054 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  y3063 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3067 ) ) ) );
                y3063 = (  op_dash_add87 ( (  y3063 ) , (  from_dash_integral29 ( 1 ) ) ) );
                x3062 = (  from_dash_integral29 ( 0 ) );
            } else {
                struct funenv1276  temp1543 = ( (struct funenv1276){ .fun = insert1276, .env =  env.envinst1276  } );
                ( temp1543.fun ( temp1543.env ,  ( (  get_dash_row1492 ) ( (  ed3054 ) ,  (  y3063 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x3062 ) ) ) ,  (  c3065 ) ) );
                x3062 = (  op_dash_add87 ( (  x3062 ) , (  from_dash_integral29 ( 1 ) ) ) );
            }
        }
        (*  ed3054 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1501 ) ( (  ed3054 ) ,  (  x3062 ) ,  (  y3063 ) ) );
        ( (  move_dash_to1509 ) ( (  ed3054 ) ,  (  x3062 ) ,  (  y3063 ) ,  (  dims3058 ) ) );
    }
    else if ( dref3059.tag == Primitive_153_PrimDelete_t ) {
        struct RangeIter_403  temp1544 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1545 =  next404 (&temp1544);
            if (  __cond1545 .tag == 0 ) {
                break;
            }
            int32_t  dref3070 =  __cond1545 .stuff .Maybe_369_Just_s .field0;
            struct List_3 *  row3071 = ( (  get_dash_row1492 ) ( (  ed3054 ) ,  ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
            if ( (  cmp9 ( ( (  i32_dash_size311 ) ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) , ( ( * (  row3071 ) ) .f_count ) ) != 0 ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( (  num_dash_rows1495 ) ( (  ed3054 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  next_dash_row3072 = ( (  get_dash_row1492 ) ( (  ed3054 ) ,  (  op_dash_add87 ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1292  temp1546 = ( (struct funenv1292){ .fun = add_dash_all1292, .env =  env.envinst1292  } );
                    ( temp1546.fun ( temp1546.env ,  (  row3071 ) ,  (  next_dash_row3072 ) ) );
                    struct funenv1496  temp1547 = ( (struct funenv1496){ .fun = remove_dash_row1496, .env =  env.envinst1496  } );
                    ( temp1547.fun ( temp1547.env ,  (  ed3054 ) ,  (  op_dash_add87 ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                struct funenv1282  temp1548 = ( (struct funenv1282){ .fun = remove1282, .env =  env.envinst1282  } );
                ( temp1548.fun ( temp1548.env ,  (  row3071 ) ,  ( (  i32_dash_size311 ) ( ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) ) );
            }
        }
        (*  ed3054 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1501 ) ( (  ed3054 ) ,  ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
        ( (  move_dash_to1509 ) ( (  ed3054 ) ,  ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref3059 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ,  (  dims3058 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_153   invert_dash_primitive1549 (    struct Primitive_153  prim3075 ) {
    struct Primitive_153  dref3076 = (  prim3075 );
    if ( dref3076.tag == Primitive_153_PrimInsert_t ) {
        return ( ( Primitive_153_PrimDelete ) ( ( dref3076 .stuff .Primitive_153_PrimInsert_s .field0 ) ,  ( dref3076 .stuff .Primitive_153_PrimInsert_s .field1 ) ) );
    }
    else if ( dref3076.tag == Primitive_153_PrimDelete_t ) {
        return ( ( Primitive_153_PrimInsert ) ( ( dref3076 .stuff .Primitive_153_PrimDelete_s .field0 ) ,  ( dref3076 .stuff .Primitive_153_PrimDelete_s .field1 ) ) );
    }
}

static  enum Unit_13   free_dash_primitive1550 (    struct Primitive_153  prim3083 ,    enum CAllocator_4  al3085 ) {
    struct Primitive_153  dref3086 = (  prim3083 );
    if ( dref3086.tag == Primitive_153_PrimInsert_t ) {
        ( (  free1228 ) ( (  al3085 ) ,  ( ( dref3086 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) ) );
    }
    else if ( dref3086.tag == Primitive_153_PrimDelete_t ) {
        ( (  free1228 ) ( (  al3085 ) ,  ( ( dref3086 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam677 (   struct env677 env ,    struct Action_152  action3100 ) {
    return ( (  free_dash_primitive1550 ) ( ( (  action3100 ) .f_prim ) ,  ( env.al3095 ) ) );
}

static  enum Unit_13   free_dash_action1551 (    struct Either_182  action3093 ,    enum CAllocator_4  al3095 ) {
    struct Either_182  dref3096 = (  action3093 );
    if ( dref3096.tag == Either_182_Right_t ) {
        ( (  free_dash_primitive1550 ) ( ( ( dref3096 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  al3095 ) ) );
    }
    else if ( dref3096.tag == Either_182_Left_t ) {
        struct env677 envinst677 = {
            .al3095 =  al3095 ,
        };
        ( (  for_dash_each676 ) ( ( dref3096 .stuff .Either_182_Left_s .field0 ) ,  ( (struct funenv677){ .fun = lam677, .env = envinst677 } ) ) );
        ( (  free1229 ) ( (  al3095 ) ,  ( dref3096 .stuff .Either_182_Left_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   start_dash_changeset1552 (    struct Editor_902 *  ed3103 ) {
    ( (  assert1162 ) ( ( ! ( (  is_dash_just894 ) ( ( ( ( * (  ed3103 ) ) .f_actions ) .f_changeset ) ) ) ) ,  ( "unfinished changeset SOMEHOW!" ) ) );
    (*  ed3103 ) .f_actions .f_changeset = ( ( Maybe_895_Just ) ( ( (  mk1264 ) ( ( ( * (  ed3103 ) ) .f_al ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1272 {
    enum Unit_13  (*fun) (  struct env1272  ,    struct List_907 *  ,    struct Either_182  );
    struct env1272 env;
};

struct env1553 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1272 envinst1272;
    ;
    ;
};

static  enum Unit_13   end_dash_changeset1553 (   struct env1553 env ,    struct Editor_902 *  ed3106 ) {
    struct List_160  changeset3107 = ( (  or_dash_fail1171 ) ( ( ( ( * (  ed3106 ) ) .f_actions ) .f_changeset ) ,  ( "nonexistent changeset" ) ) );
    ( (  assert1162 ) ( (  eq45 ( ( ( ( * (  ed3106 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed3106 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  ( "no new changes shouldve been added!" ) ) );
    (*  ed3106 ) .f_actions .f_changeset = ( (struct Maybe_895) { .tag = Maybe_895_None_t } );
    if ( (  eq45 ( ( (  changeset3107 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  free1266 ) ( ( & (  changeset3107 ) ) ) );
        return ( Unit_13_Unit );
    }
    struct Slice_161  changeset3108 = ( (  to_dash_slice1306 ) ( (  changeset3107 ) ) );
    struct funenv1272  temp1554 = ( (struct funenv1272){ .fun = add1272, .env =  env.envinst1272  } );
    ( temp1554.fun ( temp1554.env ,  ( & ( ( ( * (  ed3106 ) ) .f_actions ) .f_list ) ) ,  ( ( Either_182_Left ) ( (  changeset3108 ) ) ) ) );
    (*  ed3106 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed3106 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1274 {
    enum Unit_13  (*fun) (  struct env1274  ,    struct List_160 *  ,    struct Action_152  );
    struct env1274 env;
};

struct env1555 {
    ;
    ;
    ;
    struct env1274 envinst1274;
    ;
    struct env1272 envinst1272;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam681 (   struct env681 env ,    struct Either_182  action3117 ) {
    return ( (  free_dash_action1551 ) ( (  action3117 ) ,  ( env.al3115 ) ) );
}

static  enum Unit_13   push_dash_action1555 (   struct env1555 env ,    struct Actions_906 *  actions3111 ,    struct Action_152  action3113 ,    enum CAllocator_4  al3115 ) {
    struct env681 envinst681 = {
        .al3115 =  al3115 ,
    };
    ( (  for_dash_each680 ) ( ( (  from1197 ) ( ( (  to_dash_slice1305 ) ( ( ( * (  actions3111 ) ) .f_list ) ) ) ,  ( ( * (  actions3111 ) ) .f_cur ) ) ) ,  ( (struct funenv681){ .fun = lam681, .env = envinst681 } ) ) );
    ( (  trim1297 ) ( ( & ( ( * (  actions3111 ) ) .f_list ) ) ,  ( ( * (  actions3111 ) ) .f_cur ) ) );
    struct Actions_906 *  dref3118 = (  actions3111 );
    if ( (* dref3118 ) .f_changeset.tag == Maybe_895_Just_t ) {
        struct funenv1274  temp1556 = ( (struct funenv1274){ .fun = add1274, .env =  env.envinst1274  } );
        ( temp1556.fun ( temp1556.env ,  ( & ( (* dref3118 ) .f_changeset .stuff .Maybe_895_Just_s .field0 ) ) ,  (  action3113 ) ) );
    }
    else if ( true ) {
        struct funenv1272  temp1557 = ( (struct funenv1272){ .fun = add1272, .env =  env.envinst1272  } );
        ( temp1557.fun ( temp1557.env ,  ( & ( ( * (  actions3111 ) ) .f_list ) ) ,  ( ( Either_182_Right ) ( (  action3113 ) ) ) ) );
        (*  actions3111 ) .f_cur = (  op_dash_add98 ( ( ( * (  actions3111 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1555 {
    enum Unit_13  (*fun) (  struct env1555  ,    struct Actions_906 *  ,    struct Action_152  ,    enum CAllocator_4  );
    struct env1555 env;
};

struct env1558 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1347 envinst1347;
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
    struct env713 envinst713;
    ;
    ;
    ;
    ;
    struct env1555 envinst1555;
    ;
    ;
    ;
    ;
    ;
    struct env1339 envinst1339;
    ;
};

static  enum Unit_13   flush_dash_insert1558 (   struct env1558 env ,    struct Editor_902 *  ed3122 ) {
    struct Maybe_157  dref3123 = ( ( * (  ed3122 ) ) .f_insert_dash_start );
    if ( dref3123.tag == Maybe_157_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3123.tag == Maybe_157_Just_t ) {
        struct Cursor_154  start3125 = ( dref3123 .stuff .Maybe_157_Just_s .field0 );
        (*  ed3122 ) .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        int32_t  del_dash_count3126 = (  from_dash_integral29 ( 0 ) );
        struct Maybe_897  dref3127 = ( ( * (  ed3122 ) ) .f_delete_dash_acc );
        if ( dref3127.tag == Maybe_897_None_t ) {
        }
        else if ( dref3127.tag == Maybe_897_Just_t ) {
            struct DynStr_136  del_dash_text3129 = ( (  as_dash_str997 ) ( ( & ( dref3127 .stuff .Maybe_897_Just_s .field0 ) ) ) );
            (*  ed3122 ) .f_delete_dash_acc = ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
            if ( (  cmp9 ( ( ( (  del_dash_text3129 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                del_dash_count3126 = ( (  size_dash_i32313 ) ( ( ( (  del_dash_text3129 ) .f_contents ) .f_count ) ) );
                struct StrBuilder_627  temp1559 = ( (  mk1353 ) ( ( ( * (  ed3122 ) ) .f_al ) ) );
                struct StrBuilder_627 *  rev_dash_sb3130 = ( &temp1559 );
                struct RangeIter_403  temp1560 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  del_dash_count3126 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_369  __cond1561 =  next404 (&temp1560);
                    if (  __cond1561 .tag == 0 ) {
                        break;
                    }
                    int32_t  i3132 =  __cond1561 .stuff .Maybe_369_Just_s .field0;
                    struct funenv713  temp1562 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
                    ( temp1562.fun ( temp1562.env ,  (  rev_dash_sb3130 ) ,  (  elem_dash_get1206 ( ( (  del_dash_text3129 ) .f_contents ) , ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  op_dash_sub88 ( (  del_dash_count3126 ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  i3132 ) ) ) ) ) ) ) ) );
                }
                ( (  free1228 ) ( ( ( * (  ed3122 ) ) .f_al ) ,  ( (  del_dash_text3129 ) .f_contents ) ) );
                struct DynStr_136  rev_dash_text3133 = ( (  as_dash_str997 ) ( (  rev_dash_sb3130 ) ) );
                struct Cursor_154  del_dash_pos3134 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start3125 ) .f_x ) , (  del_dash_count3126 ) ) ) , .f_y = ( (  start3125 ) .f_y ) } );
                struct funenv1555  temp1563 = ( (struct funenv1555){ .fun = push_dash_action1555, .env =  env.envinst1555  } );
                ( temp1563.fun ( temp1563.env ,  ( & ( ( * (  ed3122 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  del_dash_pos3134 ) ,  (  rev_dash_text3133 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed3122 ) ) .f_al ) ) );
            } else {
                ( (  free1228 ) ( ( ( * (  ed3122 ) ) .f_al ) ,  ( (  del_dash_text3129 ) .f_contents ) ) );
            }
        }
        struct Cursor_154  adj_dash_start3135 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start3125 ) .f_x ) , (  del_dash_count3126 ) ) ) , .f_y = ( (  start3125 ) .f_y ) } );
        if ( (  eq1488 ( (  adj_dash_start3135 ) , ( ( * (  ed3122 ) ) .f_cursor ) ) ) ) {
            return ( Unit_13_Unit );
        }
        struct StrBuilder_627  temp1564 = ( (  mk1353 ) ( ( ( * (  ed3122 ) ) .f_al ) ) );
        struct StrBuilder_627 *  sb3136 = ( &temp1564 );
        if ( (  eq41 ( ( (  adj_dash_start3135 ) .f_y ) , ( ( ( * (  ed3122 ) ) .f_cursor ) .f_y ) ) ) ) {
            struct List_3 *  row3137 = ( (  get_dash_row1492 ) ( (  ed3122 ) ,  ( (  adj_dash_start3135 ) .f_y ) ) );
            struct funenv1347  temp1565 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1565.fun ( temp1565.env ,  (  sb3136 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  row3137 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3135 ) .f_x ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3122 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        } else {
            struct List_3 *  first_dash_row3138 = ( (  get_dash_row1492 ) ( (  ed3122 ) ,  ( (  adj_dash_start3135 ) .f_y ) ) );
            struct funenv1347  temp1566 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1566.fun ( temp1566.env ,  (  sb3136 ) ,  ( (  from1196 ) ( ( (  to_dash_slice1303 ) ( ( * (  first_dash_row3138 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3135 ) .f_x ) ) ) ) ) ) );
            struct funenv1339  temp1567 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
            ( temp1567.fun ( temp1567.env ,  (  sb3136 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct Zip_384  temp1568 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1304 ) ( ( ( * (  ed3122 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  adj_dash_start3135 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3122 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  adj_dash_start3135 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
            while (true) {
                struct Maybe_391  __cond1569 =  next393 (&temp1568);
                if (  __cond1569 .tag == 0 ) {
                    break;
                }
                struct Tuple2_392  dref3139 =  __cond1569 .stuff .Maybe_391_Just_s .field0;
                struct funenv1347  temp1570 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
                ( temp1570.fun ( temp1570.env ,  (  sb3136 ) ,  ( (  to_dash_slice1303 ) ( ( dref3139 .field0 ) ) ) ) );
                struct funenv1339  temp1571 = ( (struct funenv1339){ .fun = write1339, .env =  env.envinst1339  } );
                ( temp1571.fun ( temp1571.env ,  (  sb3136 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  last_dash_row3142 = ( (  get_dash_row1492 ) ( (  ed3122 ) ,  ( ( ( * (  ed3122 ) ) .f_cursor ) .f_y ) ) );
            struct funenv1347  temp1572 = ( (struct funenv1347){ .fun = write_dash_slice1347, .env =  env.envinst1347  } );
            ( temp1572.fun ( temp1572.env ,  (  sb3136 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  last_dash_row3142 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3122 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        }
        struct DynStr_136  text3143 = ( (  as_dash_str997 ) ( (  sb3136 ) ) );
        if ( (  eq45 ( ( ( (  text3143 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1228 ) ( ( ( * (  ed3122 ) ) .f_al ) ,  ( (  text3143 ) .f_contents ) ) );
            return ( Unit_13_Unit );
        }
        struct funenv1555  temp1573 = ( (struct funenv1555){ .fun = push_dash_action1555, .env =  env.envinst1555  } );
        ( temp1573.fun ( temp1573.env ,  ( & ( ( * (  ed3122 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( (  adj_dash_start3135 ) ,  (  text3143 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed3122 ) ) .f_al ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1558 {
    enum Unit_13  (*fun) (  struct env1558  ,    struct Editor_902 *  );
    struct env1558 env;
};

struct env1574 {
    struct env1558 envinst1558;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   set_dash_mode_dash_normal1574 (   struct env1574 env ,    struct Editor_902 *  ed3146 ) {
    struct funenv1558  temp1575 = ( (struct funenv1558){ .fun = flush_dash_insert1558, .env =  env.envinst1558  } );
    ( temp1575.fun ( temp1575.env ,  (  ed3146 ) ) );
    (*  ed3146 ) .f_mode = ( (struct Mode_904) { .tag = Mode_904_Normal_t } );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enter_dash_insert_dash_mode1576 (    struct Editor_902 *  ed3149 ) {
    (*  ed3149 ) .f_mode = ( (struct Mode_904) { .tag = Mode_904_Insert_t } );
    (*  ed3149 ) .f_insert_dash_start = ( ( Maybe_157_Just ) ( ( ( * (  ed3149 ) ) .f_cursor ) ) );
    (*  ed3149 ) .f_delete_dash_acc = ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1536 {
    enum Unit_13  (*fun) (  struct env1536  ,    struct Editor_902 *  ,    struct Primitive_153  ,    struct Dims_1510  );
    struct env1536 env;
};

struct env1577 {
    struct env1558 envinst1558;
    ;
    ;
    ;
    struct env1536 envinst1536;
    ;
    ;
    ;
    ;
    ;
    struct env1555 envinst1555;
};

static  enum Unit_13   do_dash_action1577 (   struct env1577 env ,    struct Editor_902 *  ed3152 ,    struct Action_152  action3154 ,    struct Dims_1510  dims3156 ) {
    struct funenv1558  temp1578 = ( (struct funenv1558){ .fun = flush_dash_insert1558, .env =  env.envinst1558  } );
    ( temp1578.fun ( temp1578.env ,  (  ed3152 ) ) );
    struct funenv1555  temp1579 = ( (struct funenv1555){ .fun = push_dash_action1555, .env =  env.envinst1555  } );
    ( temp1579.fun ( temp1579.env ,  ( & ( ( * (  ed3152 ) ) .f_actions ) ) ,  (  action3154 ) ,  ( ( * (  ed3152 ) ) .f_al ) ) );
    struct funenv1536  temp1580 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  env.envinst1536  } );
    ( temp1580.fun ( temp1580.env ,  (  ed3152 ) ,  ( (  action3154 ) .f_prim ) ,  (  dims3156 ) ) );
    return ( Unit_13_Unit );
}

struct env1581 {
    ;
    ;
    ;
    struct env1536 envinst1536;
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

static  enum Unit_13   undo1581 (   struct env1581 env ,    struct Editor_902 *  ed3159 ,    struct Dims_1510  dims3161 ) {
    if ( (  eq45 ( ( ( ( * (  ed3159 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    (*  ed3159 ) .f_actions .f_cur = (  op_dash_sub99 ( ( ( ( * (  ed3159 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Either_182  action3162 = (  elem_dash_get1284 ( ( ( ( * (  ed3159 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3159 ) ) .f_actions ) .f_cur ) ) );
    struct Action_152  temp1582;
    struct Action_152  last_dash_action3163 = (  temp1582 );
    struct Either_182  dref3164 = (  action3162 );
    if ( dref3164.tag == Either_182_Right_t ) {
        struct funenv1536  temp1583 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  env.envinst1536  } );
        ( temp1583.fun ( temp1583.env ,  (  ed3159 ) ,  ( (  invert_dash_primitive1549 ) ( ( ( dref3164 .stuff .Either_182_Right_s .field0 ) .f_prim ) ) ) ,  (  dims3161 ) ) );
        last_dash_action3163 = ( dref3164 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3164.tag == Either_182_Left_t ) {
        struct SliceReversedIter_1209  temp1584 =  into_dash_iter1210 ( ( (  reversed1208 ) ( ( dref3164 .stuff .Either_182_Left_s .field0 ) ) ) );
        while (true) {
            struct Maybe_471  __cond1585 =  next1211 (&temp1584);
            if (  __cond1585 .tag == 0 ) {
                break;
            }
            struct Action_152  action3168 =  __cond1585 .stuff .Maybe_471_Just_s .field0;
            struct funenv1536  temp1586 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  env.envinst1536  } );
            ( temp1586.fun ( temp1586.env ,  (  ed3159 ) ,  ( (  invert_dash_primitive1549 ) ( ( (  action3168 ) .f_prim ) ) ) ,  (  dims3161 ) ) );
        }
        last_dash_action3163 = (  elem_dash_get1207 ( ( dref3164 .stuff .Either_182_Left_s .field0 ) , (  from_dash_integral11 ( 0 ) ) ) );
    }
    struct Maybe_155  dref3169 = ( (  last_dash_action3163 ) .f_before_dash_pos );
    if ( dref3169.tag == Maybe_155_None_t ) {
    }
    else if ( dref3169.tag == Maybe_155_Just_t ) {
        ( (  move_dash_to1509 ) ( (  ed3159 ) ,  ( ( ( dref3169 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_x ) ,  ( ( ( dref3169 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_y ) ,  (  dims3161 ) ) );
        (*  ed3159 ) .f_selected = ( ( dref3169 .stuff .Maybe_155_Just_s .field0 ) .f_sel );
    }
    return ( Unit_13_Unit );
}

struct env1587 {
    ;
    ;
    ;
    struct env1536 envinst1536;
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

static  enum Unit_13   redo1587 (   struct env1587 env ,    struct Editor_902 *  ed3173 ,    struct Dims_1510  dims3175 ) {
    if ( (  cmp9 ( ( ( ( * (  ed3173 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed3173 ) ) .f_actions ) .f_list ) .f_count ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    struct Either_182  action3176 = (  elem_dash_get1284 ( ( ( ( * (  ed3173 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3173 ) ) .f_actions ) .f_cur ) ) );
    (*  ed3173 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed3173 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Action_152  temp1588;
    struct Action_152  last_dash_action3177 = (  temp1588 );
    struct Either_182  dref3178 = (  action3176 );
    if ( dref3178.tag == Either_182_Right_t ) {
        struct funenv1536  temp1589 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  env.envinst1536  } );
        ( temp1589.fun ( temp1589.env ,  (  ed3173 ) ,  ( ( dref3178 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  dims3175 ) ) );
        last_dash_action3177 = ( dref3178 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3178.tag == Either_182_Left_t ) {
        struct SliceIter_413  temp1590 =  into_dash_iter535 ( ( dref3178 .stuff .Either_182_Left_s .field0 ) );
        while (true) {
            struct Maybe_471  __cond1591 =  next472 (&temp1590);
            if (  __cond1591 .tag == 0 ) {
                break;
            }
            struct Action_152  action3182 =  __cond1591 .stuff .Maybe_471_Just_s .field0;
            struct funenv1536  temp1592 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  env.envinst1536  } );
            ( temp1592.fun ( temp1592.env ,  (  ed3173 ) ,  ( (  action3182 ) .f_prim ) ,  (  dims3175 ) ) );
        }
        last_dash_action3177 = (  elem_dash_get1207 ( ( dref3178 .stuff .Either_182_Left_s .field0 ) , (  op_dash_sub99 ( ( ( dref3178 .stuff .Either_182_Left_s .field0 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    }
    struct Primitive_153  dref3183 = ( (  last_dash_action3177 ) .f_prim );
    if ( dref3183.tag == Primitive_153_PrimInsert_t ) {
        ( (  move_dash_left1513 ) ( (  ed3173 ) ,  (  dims3175 ) ) );
        if ( ( (  last_dash_action3177 ) .f_selected ) ) {
            (*  ed3173 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3183 .stuff .Primitive_153_PrimInsert_s .field0 ) ) );
        }
    }
    else if ( true ) {
    }
    return ( Unit_13_Unit );
}

struct funenv1574 {
    enum Unit_13  (*fun) (  struct env1574  ,    struct Editor_902 *  );
    struct env1574 env;
};

struct funenv1577 {
    enum Unit_13  (*fun) (  struct env1577  ,    struct Editor_902 *  ,    struct Action_152  ,    struct Dims_1510  );
    struct env1577 env;
};

struct env1593 {
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
    struct env1574 envinst1574;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1577 envinst1577;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum PastePos_1594 {
    PastePos_1594_PasteBefore,
    PastePos_1594_PasteAfter,
};

static  struct Cursor_154   lam915 (   struct env915 env ,    struct Cursor_154  s3199 ) {
    return ( (  max973 ) ( (  s3199 ) ,  ( ( * ( env.ed3187 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam918 (   struct env918 env ,    struct Cursor_154  s3201 ) {
    return ( (  min966 ) ( (  s3201 ) ,  ( ( * ( env.ed3187 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam921 (   struct env921 env ,    struct Cursor_154  s3209 ) {
    return ( (  max973 ) ( (  s3209 ) ,  ( ( * ( env.ed3187 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam924 (   struct env924 env ,    struct Cursor_154  s3212 ) {
    return ( (  min966 ) ( (  s3212 ) ,  ( ( * ( env.ed3187 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1593 (   struct env1593 env ,    struct Editor_902 *  ed3187 ,    enum PastePos_1594  pastepos3189 ,    struct Dims_1510  dims3191 ) {
    if ( ( ! ( (  is_dash_just893 ) ( ( ( * (  ed3187 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_136  cp3192 = ( (  or_dash_fail1170 ) ( ( ( * (  ed3187 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    struct Cursor_154  before_dash_cursor3193 = ( ( * (  ed3187 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3194 = ( ( * (  ed3187 ) ) .f_selected );
    struct Pos_156  before_dash_pos3195 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3193 ) , .f_sel = (  before_dash_sel3194 ) } );
    bool  does_dash_it_dash_end_dash_in_dash_newline3196 = (  eq47 ( (  elem_dash_get1206 ( ( (  cp3192 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp3192 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline3196 ) ) {
        struct env915 envinst915 = {
            .ed3187 =  ed3187 ,
        };
        struct env918 envinst918 = {
            .ed3187 =  ed3187 ,
        };
        int32_t  from_dash_y3202 = ( {  enum PastePos_1594  dref3197 = (  pastepos3189 ) ;  dref3197 == PastePos_1594_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe914 ) ( ( ( * (  ed3187 ) ) .f_selected ) ,  ( (struct funenv915){ .fun = lam915, .env = envinst915 } ) ,  ( ( * (  ed3187 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe917 ) ( ( ( * (  ed3187 ) ) .f_selected ) ,  ( (struct funenv918){ .fun = lam918, .env = envinst918 } ) ,  ( ( * (  ed3187 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Primitive_153  prim3203 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3202 ) } ) ,  ( (  clone1235 ) ( (  cp3192 ) ,  ( ( * (  ed3187 ) ) .f_al ) ) ) ) );
        struct funenv1577  temp1595 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
        ( temp1595.fun ( temp1595.env ,  (  ed3187 ) ,  ( (struct Action_152) { .f_prim = (  prim3203 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3195 ) ) ) } ) ,  (  dims3191 ) ) );
        int32_t  last_dash_pasted_dash_y3204 = (  op_dash_sub88 ( ( ( ( * (  ed3187 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        ( (  move_dash_to1509 ) ( (  ed3187 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  get_dash_row1492 ) ( (  ed3187 ) ,  (  last_dash_pasted_dash_y3204 ) ) ) ) .f_count ) ) ) ,  (  last_dash_pasted_dash_y3204 ) ,  (  dims3191 ) ) );
        (*  ed3187 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3202 ) } ) ) );
        struct funenv1574  temp1596 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  env.envinst1574  } );
        ( temp1596.fun ( temp1596.env ,  (  ed3187 ) ) );
    } else {
        size_t  temp1597;
        size_t  from_dash_x3205 = (  temp1597 );
        int32_t  temp1598;
        int32_t  from_dash_y3206 = (  temp1598 );
        enum PastePos_1594  dref3207 = (  pastepos3189 );
        switch (  dref3207 ) {
            case PastePos_1594_PasteAfter : {
                struct env921 envinst921 = {
                    .ed3187 =  ed3187 ,
                };
                struct Cursor_154  from_dash_cur3210 = ( (  maybe920 ) ( ( ( * (  ed3187 ) ) .f_selected ) ,  ( (struct funenv921){ .fun = lam921, .env = envinst921 } ) ,  ( ( * (  ed3187 ) ) .f_cursor ) ) );
                from_dash_x3205 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( ( (  from_dash_cur3210 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y3206 = ( (  from_dash_cur3210 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1517 ) ( (  ed3187 ) ,  ( (  from_dash_cur3210 ) .f_x ) ,  ( (  from_dash_cur3210 ) .f_y ) ) ) ) {
                    from_dash_y3206 = (  op_dash_add87 ( (  from_dash_y3206 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x3205 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1594_PasteBefore : {
                struct env924 envinst924 = {
                    .ed3187 =  ed3187 ,
                };
                struct Cursor_154  from_dash_cur3213 = ( (  maybe923 ) ( ( ( * (  ed3187 ) ) .f_selected ) ,  ( (struct funenv924){ .fun = lam924, .env = envinst924 } ) ,  ( ( * (  ed3187 ) ) .f_cursor ) ) );
                from_dash_x3205 = ( (  i32_dash_size311 ) ( ( (  from_dash_cur3213 ) .f_x ) ) );
                from_dash_y3206 = ( (  from_dash_cur3213 ) .f_y );
                break;
            }
        }
        struct Primitive_153  prim3214 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3205 ) ) ) , .f_y = (  from_dash_y3206 ) } ) ,  ( (  clone1235 ) ( (  cp3192 ) ,  ( ( * (  ed3187 ) ) .f_al ) ) ) ) );
        struct funenv1577  temp1599 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
        ( temp1599.fun ( temp1599.env ,  (  ed3187 ) ,  ( (struct Action_152) { .f_prim = (  prim3214 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3195 ) ) ) } ) ,  (  dims3191 ) ) );
        ( (  move_dash_left1513 ) ( (  ed3187 ) ,  (  dims3191 ) ) );
        (*  ed3187 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3205 ) ) ) , .f_y = (  from_dash_y3206 ) } ) ) );
        struct funenv1574  temp1600 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  env.envinst1574  } );
        ( temp1600.fun ( temp1600.env ,  (  ed3187 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1601 {
    ;
    struct env713 envinst713;
    ;
    ;
    struct env1520 envinst1520;
    struct env1577 envinst1577;
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
    struct env1574 envinst1574;
    ;
    ;
};

static  enum Unit_13   delete_dash_selected1601 (   struct env1601 env ,    struct Editor_902 *  ed3217 ,    struct Dims_1510  dims3219 ) {
    struct Cursor_154  before_dash_cursor3220 = ( ( * (  ed3217 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3221 = ( ( * (  ed3217 ) ) .f_selected );
    struct Pos_156  before_dash_pos3222 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3220 ) , .f_sel = (  before_dash_sel3221 ) } );
    struct Cursor_154  cfrom3225 = ( {  struct Maybe_157  dref3223 = ( ( * (  ed3217 ) ) .f_selected ) ; dref3223.tag == Maybe_157_Just_t ? ( (  min966 ) ( ( dref3223 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed3217 ) ) .f_cursor ) ) ) : ( ( * (  ed3217 ) ) .f_cursor ) ; } );
    struct DynStr_136  temp1602;
    struct DynStr_136  del3226 = (  temp1602 );
    struct funenv1520  temp1603 = ( (struct funenv1520){ .fun = copy_dash_selection1520, .env =  env.envinst1520  } );
    struct Maybe_356  dref3227 = ( temp1603.fun ( temp1603.env ,  (  ed3217 ) ) );
    if ( dref3227.tag == Maybe_356_None_t ) {
        struct StrBuilder_627  temp1604 = ( (  mk1353 ) ( ( ( * (  ed3217 ) ) .f_al ) ) );
        struct StrBuilder_627 *  sb3228 = ( &temp1604 );
        struct funenv713  temp1605 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
        ( temp1605.fun ( temp1605.env ,  (  sb3228 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
        del3226 = ( (  as_dash_str997 ) ( (  sb3228 ) ) );
        ( (  set_dash_clipboard1519 ) ( (  ed3217 ) ,  ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) ) );
    }
    else if ( dref3227.tag == Maybe_356_Just_t ) {
        if ( ( (  is_dash_just892 ) ( ( ( * (  ed3217 ) ) .f_selected ) ) ) ) {
            struct funenv1574  temp1606 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  env.envinst1574  } );
            ( temp1606.fun ( temp1606.env ,  (  ed3217 ) ) );
        }
        (*  ed3217 ) .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        del3226 = ( dref3227 .stuff .Maybe_356_Just_s .field0 );
        ( (  set_dash_clipboard1519 ) ( (  ed3217 ) ,  ( ( Maybe_356_Just ) ( ( (  clone1235 ) ( ( dref3227 .stuff .Maybe_356_Just_s .field0 ) ,  ( ( * (  ed3217 ) ) .f_al ) ) ) ) ) ) );
    }
    struct funenv1577  temp1607 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
    ( temp1607.fun ( temp1607.env ,  (  ed3217 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  cfrom3225 ) ,  (  del3226 ) ) ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3222 ) ) ) } ) ,  (  dims3219 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1294 {
    enum Unit_13  (*fun) (  struct env1294  ,    struct List_3 *  ,    struct TakeWhile_560  );
    struct env1294 env;
};

struct env1608 {
    ;
    ;
    struct env1294 envinst1294;
    ;
    ;
    ;
    ;
    ;
    struct env1279 envinst1279;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1608 (   struct env1608 env ,    struct Editor_902 *  ed3232 ,    int32_t  y3234 ,    enum CAllocator_4  al3236 ) {
    struct List_3  temp1609 = ( (  mk1262 ) ( (  al3236 ) ) );
    struct List_3 *  nurow3237 = ( &temp1609 );
    struct TakeWhile_560  rowws3238 = ( (  indent_dash_on_dash_row1494 ) ( (  ed3232 ) ,  ( ( ( * (  ed3232 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars3239 = ( (  size_dash_i32313 ) ( ( (  count847 ) ( (  rowws3238 ) ) ) ) );
    struct funenv1294  temp1610 = ( (struct funenv1294){ .fun = add_dash_all1294, .env =  env.envinst1294  } );
    ( temp1610.fun ( temp1610.env ,  (  nurow3237 ) ,  (  rowws3238 ) ) );
    struct funenv1279  temp1611 = ( (struct funenv1279){ .fun = insert1279, .env =  env.envinst1279  } );
    ( temp1611.fun ( temp1611.env ,  ( & ( ( * (  ed3232 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y3234 ) ) ) ,  ( * (  nurow3237 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1612 (    struct Editor_902 *  ed3242 ,    struct Cursor_154  c3244 ) {
    return ( {  struct Maybe_157  dref3245 = ( ( * (  ed3242 ) ) .f_selected ) ; dref3245.tag == Maybe_157_Just_t ? ( (  between976 ) ( (  c3244 ) ,  ( ( * (  ed3242 ) ) .f_cursor ) ,  ( dref3245 .stuff .Maybe_157_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1507 {
    enum Unit_13  (*fun) (  struct env1507  ,    struct Editor_902 *  ,    const char*  );
    struct env1507 env;
};

struct env1613 {
    ;
    ;
    ;
    struct env1507 envinst1507;
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

static  struct Maybe_157   find_dash_next_dash_occurence1613 (   struct env1613 env ,    struct Editor_902 *  ed3249 ,    struct Slice_5  needle3251 ) {
    struct Cursor_154  from3252 = ( (  max973 ) ( ( ( * (  ed3249 ) ) .f_cursor ) ,  ( (  or_dash_else1174 ) ( ( ( * (  ed3249 ) ) .f_selected ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline3253 = ( (  to_dash_slice1303 ) ( ( * ( (  get_dash_row1492 ) ( (  ed3249 ) ,  ( (  from3252 ) .f_y ) ) ) ) ) );
    struct Maybe_913  dref3254 = ( (  find_dash_slice1215 ) ( ( (  subslice335 ) ( (  curline3253 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3252 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline3253 ) .f_count ) ) ) ,  (  needle3251 ) ) );
    if ( dref3254.tag == Maybe_913_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from3252 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( dref3254 .stuff .Maybe_913_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from3252 ) .f_y ) } ) ) );
    }
    else if ( dref3254.tag == Maybe_913_None_t ) {
        struct Zip_384  temp1614 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  from1198 ) ( ( (  to_dash_slice1304 ) ( ( ( * (  ed3249 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3252 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  from3252 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_391  __cond1615 =  next393 (&temp1614);
            if (  __cond1615 .tag == 0 ) {
                break;
            }
            struct Tuple2_392  dref3256 =  __cond1615 .stuff .Maybe_391_Just_s .field0;
            struct Maybe_913  dref3259 = ( (  find_dash_slice1215 ) ( ( (  to_dash_slice1303 ) ( ( dref3256 .field0 ) ) ) ,  (  needle3251 ) ) );
            if ( dref3259.tag == Maybe_913_None_t ) {
            }
            else if ( dref3259.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3259 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( dref3256 .field1 ) } ) ) );
            }
        }
        struct funenv1507  temp1616 = ( (struct funenv1507){ .fun = send_dash_msg1507, .env =  env.envinst1507  } );
        ( temp1616.fun ( temp1616.env ,  (  ed3249 ) ,  ( "Wrapped!" ) ) );
        struct Zip_384  temp1617 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1304 ) ( ( ( * (  ed3249 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3252 ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_391  __cond1618 =  next393 (&temp1617);
            if (  __cond1618 .tag == 0 ) {
                break;
            }
            struct Tuple2_392  dref3261 =  __cond1618 .stuff .Maybe_391_Just_s .field0;
            struct Maybe_913  dref3264 = ( (  find_dash_slice1215 ) ( ( (  to_dash_slice1303 ) ( ( dref3261 .field0 ) ) ) ,  (  needle3251 ) ) );
            if ( dref3264.tag == Maybe_913_None_t ) {
            }
            else if ( dref3264.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3264 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( dref3261 .field1 ) } ) ) );
            }
        }
        struct Maybe_913  dref3266 = ( (  find_dash_slice1215 ) ( (  curline3253 ) ,  (  needle3251 ) ) );
        if ( dref3266.tag == Maybe_913_None_t ) {
        }
        else if ( dref3266.tag == Maybe_913_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3266 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from3252 ) .f_y ) } ) ) );
        }
        struct funenv1507  temp1619 = ( (struct funenv1507){ .fun = send_dash_msg1507, .env =  env.envinst1507  } );
        ( temp1619.fun ( temp1619.env ,  (  ed3249 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct env1620 {
    ;
    struct env1507 envinst1507;
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

static  struct Cursor_154   lam939 (   struct env939 env ,    struct Cursor_154  s3274 ) {
    return ( (  min966 ) ( ( ( * ( env.ed3270 ) ) .f_cursor ) ,  (  s3274 ) ) );
}

static  struct Maybe_157   find_dash_prev_dash_occurence1620 (   struct env1620 env ,    struct Editor_902 *  ed3270 ,    struct Slice_5  needle3272 ) {
    struct env939 envinst939 = {
        .ed3270 =  ed3270 ,
    };
    struct Cursor_154  from3275 = ( (  maybe938 ) ( ( ( * (  ed3270 ) ) .f_selected ) ,  ( (struct funenv939){ .fun = lam939, .env = envinst939 } ) ,  ( ( * (  ed3270 ) ) .f_cursor ) ) );
    struct Slice_5  curline3276 = ( (  to_dash_slice1303 ) ( ( * ( (  get_dash_row1492 ) ( (  ed3270 ) ,  ( (  from3275 ) .f_y ) ) ) ) ) );
    struct Maybe_913  dref3277 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1218 ) ( ( (  subslice335 ) ( (  curline3276 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3275 ) .f_x ) ) ) ) ) ,  (  needle3272 ) ) );
    if ( dref3277.tag == Maybe_913_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3277 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from3275 ) .f_y ) } ) ) );
    }
    else if ( dref3277.tag == Maybe_913_None_t ) {
        int32_t  from_dash_y3279 = (  op_dash_sub88 ( ( (  from3275 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3279 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row3280 = ( (  get_dash_row1492 ) ( (  ed3270 ) ,  (  from_dash_y3279 ) ) );
            struct Maybe_913  dref3281 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1218 ) ( ( (  to_dash_slice1303 ) ( ( * (  row3280 ) ) ) ) ,  (  needle3272 ) ) );
            if ( dref3281.tag == Maybe_913_None_t ) {
            }
            else if ( dref3281.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3281 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3279 ) } ) ) );
            }
            from_dash_y3279 = (  op_dash_sub88 ( (  from_dash_y3279 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1507  temp1621 = ( (struct funenv1507){ .fun = send_dash_msg1507, .env =  env.envinst1507  } );
        ( temp1621.fun ( temp1621.env ,  (  ed3270 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y3283 = (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  num_dash_rows1495 ) ( (  ed3270 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3283 ) , ( (  from3275 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row3284 = ( (  get_dash_row1492 ) ( (  ed3270 ) ,  (  from_dash_y3283 ) ) );
            struct Maybe_913  dref3285 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1218 ) ( ( (  to_dash_slice1303 ) ( ( * (  row3284 ) ) ) ) ,  (  needle3272 ) ) );
            if ( dref3285.tag == Maybe_913_None_t ) {
            }
            else if ( dref3285.tag == Maybe_913_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3285 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3283 ) } ) ) );
            }
            from_dash_y3283 = (  op_dash_sub88 ( (  from_dash_y3283 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_913  dref3287 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1218 ) ( (  curline3276 ) ,  (  needle3272 ) ) );
        if ( dref3287.tag == Maybe_913_None_t ) {
        }
        else if ( dref3287.tag == Maybe_913_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3287 .stuff .Maybe_913_Just_s .field0 ) ) ) , .f_y = ( (  from3275 ) .f_y ) } ) ) );
        }
        struct funenv1507  temp1622 = ( (struct funenv1507){ .fun = send_dash_msg1507, .env =  env.envinst1507  } );
        ( temp1622.fun ( temp1622.env ,  (  ed3270 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct funenv1360 {
    struct DynStr_136  (*fun) (  struct env1360  ,    char  ,    enum CAllocator_4  );
    struct env1360 env;
};

struct funenv1553 {
    enum Unit_13  (*fun) (  struct env1553  ,    struct Editor_902 *  );
    struct env1553 env;
};

struct env1623 {
    struct env1360 envinst1360;
    struct env1553 envinst1553;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1577 envinst1577;
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

static  int32_t   lam927 (   struct env927 env ,    struct Cursor_154  s3295 ) {
    return ( (  min968 ) ( ( (  s3295 ) .f_y ) ,  ( ( ( * ( env.ed3291 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam930 (   struct env930 env ,    struct Cursor_154  s3298 ) {
    return ( (  max972 ) ( ( (  s3298 ) .f_y ) ,  ( ( ( * ( env.ed3291 ) ) .f_cursor ) .f_y ) ) );
}

static  struct Cursor_154   lam1630 (    struct Cursor_154  s3306 ) {
    struct Cursor_154  temp1631 = (  s3306 );
    temp1631 .  f_x = (  op_dash_add87 ( ( (  s3306 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( temp1631 );
}

static  enum Unit_13   indent_dash_selection1623 (   struct env1623 env ,    struct Editor_902 *  ed3291 ,    struct Dims_1510  dims3293 ) {
    struct env927 envinst927 = {
        .ed3291 =  ed3291 ,
    };
    int32_t  from_dash_y3296 = ( (  maybe926 ) ( ( ( * (  ed3291 ) ) .f_selected ) ,  ( (struct funenv927){ .fun = lam927, .env = envinst927 } ) ,  ( ( ( * (  ed3291 ) ) .f_cursor ) .f_y ) ) );
    struct env930 envinst930 = {
        .ed3291 =  ed3291 ,
    };
    int32_t  to_dash_y3299 = ( (  maybe929 ) ( ( ( * (  ed3291 ) ) .f_selected ) ,  ( (struct funenv930){ .fun = lam930, .env = envinst930 } ) ,  ( ( ( * (  ed3291 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3300 = ( ( * (  ed3291 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3301 = ( ( * (  ed3291 ) ) .f_selected );
    struct Pos_156  before_dash_pos3302 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3300 ) , .f_sel = (  saved_dash_selected3301 ) } );
    ( (  start_dash_changeset1552 ) ( (  ed3291 ) ) );
    struct RangeIter_403  temp1624 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3296 ) ,  (  to_dash_y3299 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1625 =  next404 (&temp1624);
        if (  __cond1625 .tag == 0 ) {
            break;
        }
        int32_t  rowid3304 =  __cond1625 .stuff .Maybe_369_Just_s .field0;
        if ( ( ! ( (  is_dash_row_dash_empty1498 ) ( (  ed3291 ) ,  (  rowid3304 ) ) ) ) ) {
            struct funenv1577  temp1626 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
            struct funenv1360  temp1627 = ( (struct funenv1360){ .fun = mk_dash_dyn_dash_str1360, .env =  env.envinst1360  } );
            ( temp1626.fun ( temp1626.env ,  (  ed3291 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3304 ) } ) ,  ( temp1627.fun ( temp1627.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3291 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3302 ) ) ) } ) ,  (  dims3293 ) ) );
        }
    }
    struct funenv1553  temp1628 = ( (struct funenv1553){ .fun = end_dash_changeset1553, .env =  env.envinst1553  } );
    ( temp1628.fun ( temp1628.env ,  (  ed3291 ) ) );
    struct Cursor_154  temp1629 = (  saved_dash_cursor3300 );
    temp1629 .  f_x = (  op_dash_add87 ( ( (  saved_dash_cursor3300 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    (*  ed3291 ) .f_cursor = ( temp1629 );
    (*  ed3291 ) .f_selected = ( (  fmap_dash_maybe909 ) ( (  saved_dash_selected3301 ) ,  (  lam1630 ) ) );
    return ( Unit_13_Unit );
}

struct env1632 {
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
    struct env1360 envinst1360;
    ;
    struct env1553 envinst1553;
    ;
    ;
    struct env1577 envinst1577;
    ;
    ;
};

static  int32_t   lam933 (   struct env933 env ,    struct Cursor_154  s3313 ) {
    return ( (  min968 ) ( ( (  s3313 ) .f_y ) ,  ( ( ( * ( env.ed3309 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam936 (   struct env936 env ,    struct Cursor_154  s3316 ) {
    return ( (  max972 ) ( ( (  s3316 ) .f_y ) ,  ( ( ( * ( env.ed3309 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1632 (   struct env1632 env ,    struct Editor_902 *  ed3309 ,    struct Dims_1510  dims3311 ) {
    struct env933 envinst933 = {
        .ed3309 =  ed3309 ,
    };
    int32_t  from_dash_y3314 = ( (  maybe932 ) ( ( ( * (  ed3309 ) ) .f_selected ) ,  ( (struct funenv933){ .fun = lam933, .env = envinst933 } ) ,  ( ( ( * (  ed3309 ) ) .f_cursor ) .f_y ) ) );
    struct env936 envinst936 = {
        .ed3309 =  ed3309 ,
    };
    int32_t  to_dash_y3317 = ( (  maybe935 ) ( ( ( * (  ed3309 ) ) .f_selected ) ,  ( (struct funenv936){ .fun = lam936, .env = envinst936 } ) ,  ( ( ( * (  ed3309 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3318 = ( ( * (  ed3309 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3319 = ( ( * (  ed3309 ) ) .f_selected );
    struct Pos_156  before_dash_pos3320 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3318 ) , .f_sel = (  saved_dash_selected3319 ) } );
    ( (  start_dash_changeset1552 ) ( (  ed3309 ) ) );
    struct RangeIter_403  temp1633 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3314 ) ,  (  to_dash_y3317 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1634 =  next404 (&temp1633);
        if (  __cond1634 .tag == 0 ) {
            break;
        }
        int32_t  rowid3322 =  __cond1634 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1499 ) ( (  ed3309 ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3322 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct funenv1577  temp1635 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
            struct funenv1360  temp1636 = ( (struct funenv1360){ .fun = mk_dash_dyn_dash_str1360, .env =  env.envinst1360  } );
            ( temp1635.fun ( temp1635.env ,  (  ed3309 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3322 ) } ) ,  ( temp1636.fun ( temp1636.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3309 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3320 ) ) ) } ) ,  (  dims3311 ) ) );
            if ( (  eq41 ( ( (  saved_dash_cursor3318 ) .f_y ) , (  rowid3322 ) ) ) ) {
                struct Cursor_154  temp1637 = (  saved_dash_cursor3318 );
                temp1637 .  f_x = ( (  cmp80 ( ( (  saved_dash_cursor3318 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( (  saved_dash_cursor3318 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                saved_dash_cursor3318 = ( temp1637 );
            }
            struct Maybe_157  dref3323 = (  saved_dash_selected3319 );
            if ( dref3323.tag == Maybe_157_None_t ) {
            }
            else if ( dref3323.tag == Maybe_157_Just_t ) {
                if ( (  eq41 ( ( ( dref3323 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  rowid3322 ) ) ) ) {
                    struct Cursor_154  temp1638 = ( dref3323 .stuff .Maybe_157_Just_s .field0 );
                    temp1638 .  f_x = ( (  cmp80 ( ( ( dref3323 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( ( dref3323 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                    saved_dash_selected3319 = ( ( Maybe_157_Just ) ( ( temp1638 ) ) );
                }
            }
        }
    }
    struct funenv1553  temp1639 = ( (struct funenv1553){ .fun = end_dash_changeset1553, .env =  env.envinst1553  } );
    ( temp1639.fun ( temp1639.env ,  (  ed3309 ) ) );
    (*  ed3309 ) .f_cursor = (  saved_dash_cursor3318 );
    (*  ed3309 ) .f_selected = (  saved_dash_selected3319 );
    return ( Unit_13_Unit );
}

struct funenv1364 {
    struct DynStr_136  (*fun) (  struct env1364  ,    struct StrConcat_989  ,    enum CAllocator_4  );
    struct env1364 env;
};

struct env1640 {
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
    struct env1360 envinst1360;
    struct env1553 envinst1553;
    ;
    struct env1364 envinst1364;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1577 envinst1577;
    ;
    ;
    ;
    ;
};

static  int32_t   lam959 (   struct env959 env ,    struct Cursor_154  s3332 ) {
    return ( (  min968 ) ( ( (  s3332 ) .f_y ) ,  ( ( ( * ( env.ed3327 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam962 (   struct env962 env ,    struct Cursor_154  s3335 ) {
    return ( (  max972 ) ( ( (  s3335 ) .f_y ) ,  ( ( ( * ( env.ed3327 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   toggle_dash_comment_dash_on_dash_selection1640 (   struct env1640 env ,    struct Editor_902 *  ed3327 ,    struct Dims_1510  dims3329 ) {
    char  comment_dash_char3330 = ( (  from_dash_charlike1 ) ( ( "#" ) ) );
    struct env959 envinst959 = {
        .ed3327 =  ed3327 ,
    };
    int32_t  from_dash_y3333 = ( (  maybe958 ) ( ( ( * (  ed3327 ) ) .f_selected ) ,  ( (struct funenv959){ .fun = lam959, .env = envinst959 } ) ,  ( ( ( * (  ed3327 ) ) .f_cursor ) .f_y ) ) );
    struct env962 envinst962 = {
        .ed3327 =  ed3327 ,
    };
    int32_t  to_dash_y3336 = ( (  maybe961 ) ( ( ( * (  ed3327 ) ) .f_selected ) ,  ( (struct funenv962){ .fun = lam962, .env = envinst962 } ) ,  ( ( ( * (  ed3327 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3337 = ( ( * (  ed3327 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3338 = ( ( * (  ed3327 ) ) .f_selected );
    struct Pos_156  before_dash_pos3339 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3337 ) , .f_sel = (  saved_dash_selected3338 ) } );
    ( (  start_dash_changeset1552 ) ( (  ed3327 ) ) );
    bool  remove_dash_comments3340 = ( true );
    struct RangeIter_403  temp1641 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3333 ) ,  (  to_dash_y3336 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1642 =  next404 (&temp1641);
        if (  __cond1642 .tag == 0 ) {
            break;
        }
        int32_t  rowid3342 =  __cond1642 .stuff .Maybe_369_Just_s .field0;
        struct Maybe_49  dref3343 = ( (  head879 ) ( ( (  drop_dash_while590 ) ( ( (  get_dash_row1492 ) ( (  ed3327 ) ,  (  rowid3342 ) ) ) ,  (  is_dash_whitespace1241 ) ) ) ) );
        if ( dref3343.tag == Maybe_49_None_t ) {
        }
        else if ( dref3343.tag == Maybe_49_Just_t ) {
            remove_dash_comments3340 = ( (  remove_dash_comments3340 ) && (  eq47 ( ( dref3343 .stuff .Maybe_49_Just_s .field0 ) , (  comment_dash_char3330 ) ) ) );
        }
    }
    struct Cursor_154  temp1643;
    struct Cursor_154  new_dash_cursor3345 = (  temp1643 );
    struct Maybe_157  new_dash_selected3346 = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    struct RangeIter_403  temp1644 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3333 ) ,  (  to_dash_y3336 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1645 =  next404 (&temp1644);
        if (  __cond1645 .tag == 0 ) {
            break;
        }
        int32_t  rowid3348 =  __cond1645 .stuff .Maybe_369_Just_s .field0;
        if ( ( ! ( (  is_dash_row_dash_empty1498 ) ( (  ed3327 ) ,  (  rowid3348 ) ) ) ) ) {
            if ( (  remove_dash_comments3340 ) ) {
                struct List_3 *  row3349 = ( (  get_dash_row1492 ) ( (  ed3327 ) ,  (  rowid3348 ) ) );
                size_t  first_dash_char_dash_idx3350 = ( (  count847 ) ( ( (  take_dash_while582 ) ( (  row3349 ) ,  (  is_dash_whitespace1241 ) ) ) ) );
                struct DynStr_136  temp1646;
                struct DynStr_136  s3351 = (  temp1646 );
                if ( (  eq48 ( ( (  try_dash_get1257 ) ( (  row3349 ) ,  (  op_dash_add98 ( (  first_dash_char_dash_idx3350 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) ) ) ) {
                    struct funenv1364  temp1647 = ( (struct funenv1364){ .fun = mk_dash_dyn_dash_str1364, .env =  env.envinst1364  } );
                    s3351 = ( temp1647.fun ( temp1647.env ,  ( ( StrConcat_989_StrConcat ) ( (  comment_dash_char3330 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) ,  ( ( * (  ed3327 ) ) .f_al ) ) );
                } else {
                    struct funenv1360  temp1648 = ( (struct funenv1360){ .fun = mk_dash_dyn_dash_str1360, .env =  env.envinst1360  } );
                    s3351 = ( temp1648.fun ( temp1648.env ,  (  comment_dash_char3330 ) ,  ( ( * (  ed3327 ) ) .f_al ) ) );
                }
                struct funenv1577  temp1649 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
                ( temp1649.fun ( temp1649.env ,  (  ed3327 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) ) , .f_y = (  rowid3348 ) } ) ,  (  s3351 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3339 ) ) ) } ) ,  (  dims3329 ) ) );
                int32_t  move_dash_len3352 = ( (  size_dash_i32313 ) ( ( (  count849 ) ( (  s3351 ) ) ) ) );
                if ( (  eq41 ( (  rowid3348 ) , ( (  saved_dash_cursor3337 ) .f_y ) ) ) ) {
                    if ( (  cmp80 ( ( (  saved_dash_cursor3337 ) .f_x ) , (  op_dash_add87 ( ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) ) , (  move_dash_len3352 ) ) ) ) != 0 ) ) {
                        struct Cursor_154  temp1650 = (  saved_dash_cursor3337 );
                        temp1650 .  f_x = (  op_dash_sub88 ( ( (  saved_dash_cursor3337 ) .f_x ) , (  move_dash_len3352 ) ) );
                        new_dash_cursor3345 = ( temp1650 );
                    } else {
                        if ( (  cmp80 ( ( (  saved_dash_cursor3337 ) .f_x ) , ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) ) ) != 0 ) ) {
                            struct Cursor_154  temp1651 = (  saved_dash_cursor3337 );
                            temp1651 .  f_x = ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) );
                            new_dash_cursor3345 = ( temp1651 );
                        } else {
                            new_dash_cursor3345 = (  saved_dash_cursor3337 );
                        }
                    }
                }
                struct Maybe_157  dref3353 = (  saved_dash_selected3338 );
                if ( dref3353.tag == Maybe_157_None_t ) {
                }
                else if ( dref3353.tag == Maybe_157_Just_t ) {
                    if ( (  eq41 ( ( ( dref3353 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  rowid3348 ) ) ) ) {
                        if ( (  cmp80 ( ( ( dref3353 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  op_dash_add87 ( ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) ) , (  move_dash_len3352 ) ) ) ) != 0 ) ) {
                            struct Cursor_154  temp1652 = ( dref3353 .stuff .Maybe_157_Just_s .field0 );
                            temp1652 .  f_x = (  op_dash_sub88 ( ( ( dref3353 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  move_dash_len3352 ) ) );
                            new_dash_selected3346 = ( ( Maybe_157_Just ) ( ( temp1652 ) ) );
                        } else {
                            if ( (  cmp80 ( ( ( dref3353 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) ) ) != 0 ) ) {
                                struct Cursor_154  temp1653 = ( dref3353 .stuff .Maybe_157_Just_s .field0 );
                                temp1653 .  f_x = ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3350 ) ) );
                                new_dash_selected3346 = ( ( Maybe_157_Just ) ( ( temp1653 ) ) );
                            } else {
                                new_dash_selected3346 = ( ( Maybe_157_Just ) ( ( dref3353 .stuff .Maybe_157_Just_s .field0 ) ) );
                            }
                        }
                    }
                }
            } else {
                size_t  first_dash_char_dash_idx3355 = ( (  count847 ) ( ( (  take_dash_while582 ) ( ( (  get_dash_row1492 ) ( (  ed3327 ) ,  (  rowid3348 ) ) ) ,  (  is_dash_whitespace1241 ) ) ) ) );
                struct funenv1364  temp1654 = ( (struct funenv1364){ .fun = mk_dash_dyn_dash_str1364, .env =  env.envinst1364  } );
                struct DynStr_136  s3356 = ( temp1654.fun ( temp1654.env ,  ( ( StrConcat_989_StrConcat ) ( (  comment_dash_char3330 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) ,  ( ( * (  ed3327 ) ) .f_al ) ) );
                struct funenv1577  temp1655 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  env.envinst1577  } );
                ( temp1655.fun ( temp1655.env ,  (  ed3327 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3355 ) ) ) , .f_y = (  rowid3348 ) } ) ,  (  s3356 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3339 ) ) ) } ) ,  (  dims3329 ) ) );
                int32_t  move_dash_len3357 = ( (  size_dash_i32313 ) ( ( (  count849 ) ( (  s3356 ) ) ) ) );
                if ( (  eq41 ( (  rowid3348 ) , ( (  saved_dash_cursor3337 ) .f_y ) ) ) ) {
                    if ( (  cmp80 ( ( (  saved_dash_cursor3337 ) .f_x ) , ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3355 ) ) ) ) != 0 ) ) {
                        struct Cursor_154  temp1656 = (  saved_dash_cursor3337 );
                        temp1656 .  f_x = (  op_dash_add87 ( ( (  saved_dash_cursor3337 ) .f_x ) , (  move_dash_len3357 ) ) );
                        new_dash_cursor3345 = ( temp1656 );
                    } else {
                        new_dash_cursor3345 = (  saved_dash_cursor3337 );
                    }
                }
                struct Maybe_157  dref3358 = (  saved_dash_selected3338 );
                if ( dref3358.tag == Maybe_157_None_t ) {
                }
                else if ( dref3358.tag == Maybe_157_Just_t ) {
                    if ( (  eq41 ( ( ( dref3358 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  rowid3348 ) ) ) ) {
                        if ( (  cmp80 ( ( ( dref3358 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( (  first_dash_char_dash_idx3355 ) ) ) ) != 0 ) ) {
                            struct Cursor_154  temp1657 = ( dref3358 .stuff .Maybe_157_Just_s .field0 );
                            temp1657 .  f_x = (  op_dash_add87 ( ( ( dref3358 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  move_dash_len3357 ) ) );
                            new_dash_selected3346 = ( ( Maybe_157_Just ) ( ( temp1657 ) ) );
                        } else {
                            new_dash_selected3346 = ( ( Maybe_157_Just ) ( ( dref3358 .stuff .Maybe_157_Just_s .field0 ) ) );
                        }
                    }
                }
            }
        }
    }
    struct funenv1553  temp1658 = ( (struct funenv1553){ .fun = end_dash_changeset1553, .env =  env.envinst1553  } );
    ( temp1658.fun ( temp1658.env ,  (  ed3327 ) ) );
    (*  ed3327 ) .f_cursor = (  new_dash_cursor3345 );
    (*  ed3327 ) .f_selected = (  new_dash_selected3346 );
    return ( Unit_13_Unit );
}

struct funenv1300 {
    struct List_323  (*fun) (  struct env1300  ,    struct Map_341  ,    enum CAllocator_4  );
    struct env1300 env;
};

struct env1659 {
    struct env621 envinst621;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env344 envinst344;
    ;
    struct env1300 envinst1300;
    ;
    ;
};

static  struct List_3   lam343 (   struct env343 env ,    struct DynStr_136  line3367 ) {
    struct funenv344  temp1662 = ( (struct funenv344){ .fun = to_dash_list344, .env =  env.envinst344  } );
    return ( temp1662.fun ( temp1662.env ,  (  line3367 ) ,  ( env.al3365 ) ) );
}

static  struct List_323   load_dash_file1659 (   struct env1659 env ,    const char*  filename3363 ,    enum CAllocator_4  al3365 ) {
    struct funenv1300  temp1661 = ( (struct funenv1300){ .fun = to_dash_list1300, .env =  env.envinst1300  } );
    struct env343 envinst343 = {
        .envinst344 = env.envinst344 ,
        .al3365 =  al3365 ,
    };
    struct List_323  temp1660 = ( temp1661.fun ( temp1661.env ,  ( (  map372 ) ( ( (  lines1246 ) ( ( (  read_dash_contents1383 ) ( (  filename3363 ) ,  (  al3365 ) ) ) ) ) ,  ( (struct funenv343){ .fun = lam343, .env = envinst343 } ) ) ) ,  (  al3365 ) ) );
    struct List_323 *  file3368 = ( &temp1660 );
    if ( ( (  null885 ) ( (  file3368 ) ) ) ) {
        struct funenv621  temp1663 = ( (struct funenv621){ .fun = add621, .env =  env.envinst621  } );
        ( temp1663.fun ( temp1663.env ,  (  file3368 ) ,  ( (  mk1262 ) ( (  al3365 ) ) ) ) );
    }
    return ( * (  file3368 ) );
}

struct env1664 {
    enum CAllocator_4  al3360;
    ;
    struct env713 envinst713;
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

static  enum Unit_13   lam712 (   struct env712 env ,    char  c3378 ) {
    struct funenv713  temp1668 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
    return ( temp1668.fun ( temp1668.env ,  ( env.sb3374 ) ,  (  c3378 ) ) );
}

static  enum Unit_13   save_dash_file1664 (   struct env1664 env ,    struct List_323  cf3371 ,    const char*  filename3373 ) {
    struct StrBuilder_627  temp1665 = ( (  mk1353 ) ( ( env.al3360 ) ) );
    struct StrBuilder_627 *  sb3374 = ( &temp1665 );
    struct SliceIter_321  temp1666 =  into_dash_iter324 ( (  cf3371 ) );
    while (true) {
        struct Maybe_355  __cond1667 =  next394 (&temp1666);
        if (  __cond1667 .tag == 0 ) {
            break;
        }
        struct List_3  row3376 =  __cond1667 .stuff .Maybe_355_Just_s .field0;
        struct env712 envinst712 = {
            .envinst713 = env.envinst713 ,
            .sb3374 =  sb3374 ,
        };
        ( (  for_dash_each711 ) ( (  row3376 ) ,  ( (struct funenv712){ .fun = lam712, .env = envinst712 } ) ) );
        struct funenv713  temp1669 = ( (struct funenv713){ .fun = write_dash_char713, .env =  env.envinst713  } );
        ( temp1669.fun ( temp1669.env ,  (  sb3374 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1385 ) ( (  filename3373 ) ,  ( (  as_dash_str997 ) ( (  sb3374 ) ) ) ) );
    ( (  free1355 ) ( (  sb3374 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1670 (    struct List_323  cf3381 ) {
    ( (  for_dash_each705 ) ( ( (  addresses1307 ) ( (  cf3381 ) ) ) ,  (  free1265 ) ) );
    ( (  free1267 ) ( ( & (  cf3381 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1671 {
    ;
    ;
    ;
    int32_t  pad3382;
    ;
};

struct anon_1672 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1672   left_dash_offset1671 (   struct env1671 env ,    struct Editor_902 *  ed3385 ) {
    int32_t  max_dash_digits3386 = ( (  max972 ) ( ( (  count_dash_digits980 ) ( ( ( ( * (  ed3385 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1672) { .f_max_dash_digits = (  max_dash_digits3386 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad3382 ) , (  max_dash_digits3386 ) ) ) , ( env.pad3382 ) ) ) } );
}

struct funenv1671 {
    struct anon_1672  (*fun) (  struct env1671  ,    struct Editor_902 *  );
    struct env1671 env;
};

struct env1673 {
    ;
    struct env1671 envinst1671;
    ;
};

static  struct Dims_1510   screen_dash_dims1673 (   struct env1673 env ,    struct Editor_902 *  ed3389 ,    struct Tui_723 *  tui3391 ) {
    struct funenv1671  temp1674 = ( (struct funenv1671){ .fun = left_dash_offset1671, .env =  env.envinst1671  } );
    return ( (struct Dims_1510) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * (  tui3391 ) ) .f_width ) ) ) , ( ( temp1674.fun ( temp1674.env ,  (  ed3389 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32317 ) ( ( ( * (  tui3391 ) ) .f_height ) ) ) } );
}

struct env1675 {
    ;
    ;
    ;
    ;
    int32_t  pad3382;
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
    struct env1671 envinst1671;
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

static  enum Unit_13   render_dash_editor1675 (   struct env1675 env ,    struct Screen_722 *  screen3394 ,    struct Editor_902 *  ed3396 ) {
    int32_t  w3397 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3394 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3398 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3394 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y3399 = ( ( * (  ed3396 ) ) .f_screen_dash_top );
    int32_t  from_dash_x3400 = ( ( * (  ed3396 ) ) .f_screen_dash_left );
    int32_t  x3401 = (  from_dash_integral29 ( 0 ) );
    int32_t  y3402 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1162 ) ( (  cmp9 ( ( ( ( * (  ed3396 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1671  temp1676 = ( (struct funenv1671){ .fun = left_dash_offset1671, .env =  env.envinst1671  } );
    struct anon_1672  offstuff3403 = ( temp1676.fun ( temp1676.env ,  (  ed3396 ) ) );
    int32_t  max_dash_digits3404 = ( (  offstuff3403 ) .f_max_dash_digits );
    int32_t  left_dash_off3405 = ( (  offstuff3403 ) .f_total_dash_offset );
    struct Drop_383  temp1677 =  into_dash_iter382 ( ( (  drop397 ) ( ( (  zip531 ) ( ( ( * (  ed3396 ) ) .f_current_dash_file ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_y3399 ) ) ) ) ) );
    while (true) {
        struct Maybe_391  __cond1678 =  next390 (&temp1677);
        if (  __cond1678 .tag == 0 ) {
            break;
        }
        struct Tuple2_392  dref3406 =  __cond1678 .stuff .Maybe_391_Just_s .field0;
        int32_t  row_dash_num3409 = (  op_dash_add87 ( ( dref3406 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1679 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3382 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1680 =  next404 (&temp1679);
            if (  __cond1680 .tag == 0 ) {
                break;
            }
            int32_t  xx3411 =  __cond1680 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1458 ) ( (  screen3394 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx3411 ) ,  (  y3402 ) ) );
        }
        ( (  draw_dash_str_dash_right1471 ) ( (  screen3394 ) ,  (  row_dash_num3409 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3394 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits3404 ) ) ) , ( env.pad3382 ) ) ) ,  (  y3402 ) ) );
        struct RangeIter_403  temp1681 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3382 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1682 =  next404 (&temp1681);
            if (  __cond1682 .tag == 0 ) {
                break;
            }
            int32_t  xx3413 =  __cond1682 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1458 ) ( (  screen3394 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx3413 ) , ( env.pad3382 ) ) ) , (  max_dash_digits3404 ) ) ) ,  (  y3402 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed3396 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num3409 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_403  temp1683 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits3404 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_369  __cond1684 =  next404 (&temp1683);
                if (  __cond1684 .tag == 0 ) {
                    break;
                }
                int32_t  xxx3415 =  __cond1684 .stuff .Maybe_369_Just_s .field0;
                struct Cell_58 *  cp3416 = ( (  or_dash_fail1172 ) ( ( (  get_dash_cell_dash_ptr1452 ) ( (  screen3394 ) ,  (  op_dash_add87 ( (  xxx3415 ) , ( env.pad3382 ) ) ) ,  (  y3402 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp3416 ) .f_fg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp3416 ) .f_bg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_379  temp1685 =  into_dash_iter378 ( ( (  drop395 ) ( ( (  zip530 ) ( ( dref3406 .field0 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_x3400 ) ) ) ) ) );
        while (true) {
            struct Maybe_386  __cond1686 =  next385 (&temp1685);
            if (  __cond1686 .tag == 0 ) {
                break;
            }
            struct Tuple2_387  dref3417 =  __cond1686 .stuff .Maybe_386_Just_s .field0;
            bool  in_dash_selection3420 = ( (  is_dash_in_dash_selection1612 ) ( (  ed3396 ) ,  ( (struct Cursor_154) { .f_x = ( dref3417 .field1 ) , .f_y = ( dref3406 .field1 ) } ) ) );
            if ( (  in_dash_selection3420 ) ) {
                ( (  set_dash_screen_dash_colors1451 ) ( (  screen3394 ) ,  ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref3417 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1458 ) ( (  screen3394 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3405 ) , (  x3401 ) ) ) ,  (  y3402 ) ) );
                x3401 = (  op_dash_add87 ( (  x3401 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1458 ) ( (  screen3394 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3405 ) , (  x3401 ) ) ) ,  (  y3402 ) ) );
            } else {
                ( (  put_dash_char1458 ) ( (  screen3394 ) ,  ( dref3417 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off3405 ) , (  x3401 ) ) ) ,  (  y3402 ) ) );
            }
            if ( (  in_dash_selection3420 ) ) {
                ( (  set_dash_screen_dash_colors1451 ) ( (  screen3394 ) ,  ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x3401 = (  op_dash_add87 ( (  x3401 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x3401 ) , (  w3397 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x3401 ) , (  w3397 ) ) == 0 ) && ( (  is_dash_in_dash_selection1612 ) ( (  ed3396 ) ,  ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( ( dref3406 .field0 ) .f_count ) ) ) , .f_y = ( dref3406 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell3421 = ( (  or_dash_fail1172 ) ( ( (  get_dash_cell_dash_ptr1452 ) ( (  screen3394 ) ,  (  op_dash_add87 ( (  left_dash_off3405 ) , (  x3401 ) ) ) ,  (  y3402 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell3421 ) .f_fg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell3421 ) .f_bg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y3402 = (  op_dash_add87 ( (  y3402 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x3401 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y3402 ) , (  h3398 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_157  dref3422 = ( ( * (  ed3396 ) ) .f_selected );
    if ( dref3422.tag == Maybe_157_None_t ) {
    }
    else if ( dref3422.tag == Maybe_157_Just_t ) {
        int32_t  vx3424 = ( (  from_dash_visual1489 ) ( ( (  x_dash_to_dash_visual_dash_x1501 ) ( (  ed3396 ) ,  ( ( dref3422 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ,  ( ( dref3422 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len3425 = ( (  maybe964 ) ( ( (  try_dash_get1257 ) ( ( (  get_dash_row1492 ) ( (  ed3396 ) ,  ( ( dref3422 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( dref3422 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1484 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1687 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3425 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1688 =  next404 (&temp1687);
            if (  __cond1688 .tag == 0 ) {
                break;
            }
            int32_t  x3427 =  __cond1688 .stuff .Maybe_369_Just_s .field0;
            struct Maybe_1173  dref3428 = ( (  get_dash_cell_dash_ptr1452 ) ( (  screen3394 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3405 ) , ( ( * (  ed3396 ) ) .f_screen_dash_left ) ) ) , (  vx3424 ) ) ) , (  x3427 ) ) ) ,  (  op_dash_sub88 ( ( ( dref3422 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  from_dash_y3399 ) ) ) ) );
            if ( dref3428.tag == Maybe_1173_None_t ) {
            }
            else if ( dref3428.tag == Maybe_1173_Just_t ) {
                (* dref3428 .stuff .Maybe_1173_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref3428 .stuff .Maybe_1173_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_154  cur3430 = ( ( * (  ed3396 ) ) .f_cursor );
    int32_t  vx3431 = ( (  from_dash_visual1489 ) ( ( (  x_dash_to_dash_visual_dash_x1501 ) ( (  ed3396 ) ,  ( (  cur3430 ) .f_x ) ,  ( (  cur3430 ) .f_y ) ) ) ) );
    int32_t  len3432 = ( (  maybe964 ) ( ( (  try_dash_get1257 ) ( ( (  cursor_dash_row1493 ) ( (  ed3396 ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur3430 ) .f_x ) ) ) ) ) ,  (  char_dash_len1484 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_403  temp1689 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3432 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1690 =  next404 (&temp1689);
        if (  __cond1690 .tag == 0 ) {
            break;
        }
        int32_t  x3434 =  __cond1690 .stuff .Maybe_369_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell3435 = ( (  or_dash_fail1172 ) ( ( (  get_dash_cell_dash_ptr1452 ) ( (  screen3394 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3405 ) , ( ( * (  ed3396 ) ) .f_screen_dash_left ) ) ) , (  vx3431 ) ) ) , (  x3434 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3396 ) ) .f_cursor ) .f_y ) , (  from_dash_y3399 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell3435 ) .f_fg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell3435 ) .f_bg = ( ( * ( ( * (  ed3396 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1691 (    struct Maybe_899 *  dref3437 ,    struct Screen_722 *  screen3440 ) {
    struct Maybe_899  dref3441 = ( (* dref3437 ) );
    if ( dref3441.tag == Maybe_899_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3441.tag == Maybe_899_Just_t ) {
        struct Duration_1389  diff3443 = ( (  diff1390 ) ( ( (  now1386 ) ( ) ) ,  ( dref3441 .stuff .Maybe_899_Just_s .field0 ) ) );
        struct Duration_1389  limit3444 = ( (  duration_dash_from_dash_ns1391 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1388 ( (  diff3443 ) , (  limit3444 ) ) == 2 ) ) {
            (* dref3437 ) = ( (struct Maybe_899) { .tag = Maybe_899_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3445 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3446 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3447 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1392 ) ( (  diff3443 ) ) ) , (  x_dash_fill3445 ) ) ) , ( (  duration_dash_to_dash_ns1392 ) ( (  limit3444 ) ) ) ) ) ) );
        int32_t  y_dash_progress3448 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1392 ) ( (  diff3443 ) ) ) , (  y_dash_fill3446 ) ) ) , ( (  duration_dash_to_dash_ns1392 ) ( (  limit3444 ) ) ) ) ) ) );
        uint32_t  center_dash_x3449 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3450 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1450 ) ( (  screen3440 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3451 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  x_dash_fill3445 ) ) ) , (  x_dash_progress3447 ) ) );
        int32_t  y_dash_off3452 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  y_dash_fill3446 ) ) ) , (  y_dash_progress3448 ) ) );
        int32_t  h3453 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3454 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3440 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1692 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3453 ) ) ) );
        while (true) {
            struct Maybe_369  __cond1693 =  next404 (&temp1692);
            if (  __cond1693 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3456 =  __cond1693 .stuff .Maybe_369_Just_s .field0;
            struct RangeIter_403  temp1694 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3454 ) ) ) );
            while (true) {
                struct Maybe_369  __cond1695 =  next404 (&temp1694);
                if (  __cond1695 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3458 =  __cond1695 .stuff .Maybe_369_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3458 ) , (  x_dash_off3451 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3458 ) , (  op_dash_sub88 ( (  w3454 ) , (  x_dash_off3451 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3456 ) , (  y_dash_off3452 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3456 ) , (  op_dash_sub88 ( (  h3453 ) , (  y_dash_off3452 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1458 ) ( (  screen3440 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3458 ) ,  (  screen_dash_y3456 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1659 {
    struct List_323  (*fun) (  struct env1659  ,    const char*  ,    enum CAllocator_4  );
    struct env1659 env;
};

struct funenv1378 {
    const char*  (*fun) (  struct env1378  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1378 env;
};

struct funenv1380 {
    const char*  (*fun) (  struct env1380  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1380 env;
};

struct funenv1664 {
    enum Unit_13  (*fun) (  struct env1664  ,    struct List_323  ,    const char*  );
    struct env1664 env;
};

struct env1696 {
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
    struct Theme_905 *  light_dash_theme2830;
    struct env1659 envinst1659;
    ;
    ;
    struct Theme_905 *  dark_dash_theme2829;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1378 envinst1378;
    struct env1380 envinst1380;
    ;
    struct env1664 envinst1664;
    ;
};

static  bool   lam1697 (    char  c3472 ) {
    return ( ! ( (  is_dash_whitespace1241 ) ( (  c3472 ) ) ) );
}

static  bool   lam1701 (    char  c3480 ) {
    return ( ! ( (  is_dash_whitespace1241 ) ( (  c3480 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1696 (   struct env1696 env ,    struct Editor_902 *  ed3461 ,    struct DynStr_136  s3463 ,    struct Dims_1510  dim3465 ,    enum CAllocator_4  al3467 ) {
    struct DropWhile_565  s3468 = ( (  drop_dash_while591 ) ( (  s3463 ) ,  (  is_dash_whitespace1241 ) ) );
    struct TakeWhile_569  cmd3469 = ( (  take_dash_while585 ) ( (  s3468 ) ,  (  is_dash_not_dash_whitespace1242 ) ) );
    struct DropWhile_563  rest3470 = ( (  drop_dash_while594 ) ( ( (  drop_dash_while593 ) ( (  s3468 ) ,  (  is_dash_not_dash_whitespace1242 ) ) ) ,  (  is_dash_whitespace1241 ) ) );
    if ( ( (  eq1144 ) ( (  cmd3469 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_562  filename3473 = ( (  take_dash_while583 ) ( (  rest3470 ) ,  (  lam1697 ) ) );
        const char*  temp1698;
        const char*  alfname3474 = (  temp1698 );
        if ( ( (  null887 ) ( (  filename3473 ) ) ) ) {
            struct Maybe_308  dref3475 = ( ( * (  ed3461 ) ) .f_filename );
            if ( dref3475.tag == Maybe_308_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3475.tag == Maybe_308_Just_t ) {
                alfname3474 = ( dref3475 .stuff .Maybe_308_Just_s .field0 );
            }
        } else {
            struct Maybe_308  dref3477 = ( ( * (  ed3461 ) ) .f_filename );
            if ( dref3477.tag == Maybe_308_None_t ) {
            }
            else if ( dref3477.tag == Maybe_308_Just_t ) {
                ( (  free1231 ) ( (  al3467 ) ,  ( (struct Slice_1232) { .f_ptr = ( (  cast217 ) ( ( dref3477 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1378  temp1699 = ( (struct funenv1378){ .fun = mk_dash_const_dash_str1378, .env =  env.envinst1378  } );
            alfname3474 = ( temp1699.fun ( temp1699.env ,  (  filename3473 ) ,  (  al3467 ) ) );
        }
        struct funenv1664  temp1700 = ( (struct funenv1664){ .fun = save_dash_file1664, .env =  env.envinst1664  } );
        ( temp1700.fun ( temp1700.env ,  ( ( * (  ed3461 ) ) .f_current_dash_file ) ,  (  alfname3474 ) ) );
        (*  ed3461 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3474 ) ) );
    } else {
        if ( ( (  eq1144 ) ( (  cmd3469 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3461 ) .f_running = ( false );
        } else {
            if ( ( (  eq1144 ) ( (  cmd3469 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_567  filename3481 = ( (  take_dash_while587 ) ( (  rest3470 ) ,  (  lam1701 ) ) );
                struct funenv1380  temp1702 = ( (struct funenv1380){ .fun = mk_dash_const_dash_str1380, .env =  env.envinst1380  } );
                const char*  alfname3482 = ( temp1702.fun ( temp1702.env ,  (  filename3481 ) ,  (  al3467 ) ) );
                struct List_323  og3483 = ( ( * (  ed3461 ) ) .f_current_dash_file );
                struct funenv1659  temp1703 = ( (struct funenv1659){ .fun = load_dash_file1659, .env =  env.envinst1659  } );
                (*  ed3461 ) .f_current_dash_file = ( temp1703.fun ( temp1703.env ,  (  alfname3482 ) ,  (  al3467 ) ) );
                struct Maybe_308  dref3484 = ( ( * (  ed3461 ) ) .f_filename );
                if ( dref3484.tag == Maybe_308_None_t ) {
                }
                else if ( dref3484.tag == Maybe_308_Just_t ) {
                    ( (  free1231 ) ( (  al3467 ) ,  ( (struct Slice_1232) { .f_ptr = ( (  cast217 ) ( ( dref3484 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3461 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3482 ) ) );
                (*  ed3461 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3461 ) .f_goal_dash_x = ( ( Visual_903_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3461 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1670 ) ( (  og3483 ) ) );
            } else {
                if ( ( (  eq1147 ) ( (  cmd3469 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_579  theme_dash_name3486 = ( (  take_dash_while588 ) ( (  rest3470 ) ,  (  is_dash_not_dash_whitespace1242 ) ) );
                    if ( ( (  eq1141 ) ( (  theme_dash_name3486 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3461 ) .f_theme = ( env.dark_dash_theme2829 );
                    } else {
                        if ( ( (  eq1141 ) ( (  theme_dash_name3486 ) ,  ( "light" ) ) ) ) {
                            (*  ed3461 ) .f_theme = ( env.light_dash_theme2830 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_807  dref3487 = ( (  parse_dash_int1251 ) ( (  cmd3469 ) ) );
                    if ( dref3487.tag == Maybe_807_Just_t ) {
                        int32_t  newline3489 = ( (  clamp977 ) ( ( (  i64_dash_i32312 ) ( (  op_dash_sub84 ( ( dref3487 .stuff .Maybe_807_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed3461 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1512 ) ( (  ed3461 ) ,  (  newline3489 ) ,  (  dim3465 ) ) );
                    }
                    else if ( dref3487.tag == Maybe_807_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1376 {
    const char*  (*fun) (  struct env1376  ,    const char*  ,    enum CAllocator_4  );
    struct env1376 env;
};

struct funenv1409 {
    struct Tui_723  (*fun) (  struct env1409  );
    struct env1409 env;
};

struct funenv1673 {
    struct Dims_1510  (*fun) (  struct env1673  ,    struct Editor_902 *  ,    struct Tui_723 *  );
    struct env1673 env;
};

struct funenv1581 {
    enum Unit_13  (*fun) (  struct env1581  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1581 env;
};

struct funenv1587 {
    enum Unit_13  (*fun) (  struct env1587  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1587 env;
};

struct funenv1601 {
    enum Unit_13  (*fun) (  struct env1601  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1601 env;
};

struct funenv1534 {
    enum Unit_13  (*fun) (  struct env1534  ,    struct Editor_902 *  );
    struct env1534 env;
};

struct funenv1593 {
    enum Unit_13  (*fun) (  struct env1593  ,    struct Editor_902 *  ,    enum PastePos_1594  ,    struct Dims_1510  );
    struct env1593 env;
};

struct funenv1623 {
    enum Unit_13  (*fun) (  struct env1623  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1623 env;
};

struct funenv1632 {
    enum Unit_13  (*fun) (  struct env1632  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1632 env;
};

struct funenv1608 {
    enum Unit_13  (*fun) (  struct env1608  ,    struct Editor_902 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1608 env;
};

struct funenv1613 {
    struct Maybe_157  (*fun) (  struct env1613  ,    struct Editor_902 *  ,    struct Slice_5  );
    struct env1613 env;
};

struct funenv1620 {
    struct Maybe_157  (*fun) (  struct env1620  ,    struct Editor_902 *  ,    struct Slice_5  );
    struct env1620 env;
};

static  int32_t   lam1753 (    struct Cursor_154  s3523 ) {
    return ( (  s3523 ) .f_x );
}

static  int32_t   lam1756 (    struct Cursor_154  s3527 ) {
    return ( (  s3527 ) .f_x );
}

static  bool   lam944 (   struct env944 env ,    char  c3532 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1485 ) ( (  c3532 ) ) ) ) ) , ( env.cur_dash_char_dash_type3530 ) ) );
}

static  bool   lam1758 (    char  c3534 ) {
    return (  eq55 ( ( (  char_dash_type1485 ) ( (  c3534 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1760 (    char  c3538 ) {
    return (  eq55 ( ( (  char_dash_type1485 ) ( (  c3538 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam949 (   struct env949 env ,    char  c3541 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1485 ) ( (  c3541 ) ) ) ) ) , ( env.cur_dash_char_dash_type3539 ) ) );
}

static  bool   lam1762 (    char  c3545 ) {
    return (  eq55 ( ( (  char_dash_type1485 ) ( (  c3545 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam953 (   struct env953 env ,    char  c3548 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1485 ) ( (  c3548 ) ) ) ) ) , ( env.cur_dash_char_dash_type3546 ) ) );
}

static  bool   lam956 (   struct env956 env ,    char  c3550 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1485 ) ( (  c3550 ) ) ) ) ) , ( env.cur_dash_char_dash_type3546 ) ) );
}

struct funenv1640 {
    enum Unit_13  (*fun) (  struct env1640  ,    struct Editor_902 *  ,    struct Dims_1510  );
    struct env1640 env;
};

struct funenv1350 {
    enum Unit_13  (*fun) (  struct env1350  ,    struct StrBuilder_627 *  );
    struct env1350 env;
};

struct funenv1696 {
    enum Unit_13  (*fun) (  struct env1696  ,    struct Editor_902 *  ,    struct DynStr_136  ,    struct Dims_1510  ,    enum CAllocator_4  );
    struct env1696 env;
};

struct funenv1447 {
    bool  (*fun) (  struct env1447  ,    struct Screen_722 *  );
    struct env1447 env;
};

struct funenv1675 {
    enum Unit_13  (*fun) (  struct env1675  ,    struct Screen_722 *  ,    struct Editor_902 *  );
    struct env1675 env;
};

static  struct Maybe_49   lam901 (   struct env901 env ,    struct List_3  l3592 ) {
    return ( (  try_dash_get1257 ) ( ( & (  l3592 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * ( env.ed3495 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_387   lam1796 (    char  c3594 ) {
    return ( ( Tuple2_387_Tuple2 ) ( (  c3594 ) ,  ( (  char_dash_i32971 ) ( (  c3594 ) ) ) ) );
}

static  size_t   lam1798 (    struct DynStr_136  s3600 ) {
    return ( ( (  s3600 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1882 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1883 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1884 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env622 envinst622 = {
        .growth_dash_factor1883 =  growth_dash_factor1883 ,
        .starting_dash_size1882 =  starting_dash_size1882 ,
    };
    struct env347 envinst347 = {
        .growth_dash_factor1883 =  growth_dash_factor1883 ,
        .starting_dash_size1882 =  starting_dash_size1882 ,
    };
    struct env1268 envinst1268 = {
        .growth_dash_factor1883 =  growth_dash_factor1883 ,
        .starting_dash_size1882 =  starting_dash_size1882 ,
    };
    struct env1269 envinst1269 = {
        .growth_dash_factor1883 =  growth_dash_factor1883 ,
        .starting_dash_size1882 =  starting_dash_size1882 ,
    };
    struct env621 envinst621 = {
        .envinst622 = envinst622 ,
    };
    struct env346 envinst346 = {
        .envinst347 = envinst347 ,
    };
    struct env1272 envinst1272 = {
        .envinst1268 = envinst1268 ,
    };
    struct env1274 envinst1274 = {
        .envinst1269 = envinst1269 ,
    };
    struct env1276 envinst1276 = {
        .envinst346 = envinst346 ,
        .envinst347 = envinst347 ,
    };
    struct env1279 envinst1279 = {
        .envinst621 = envinst621 ,
        .envinst622 = envinst622 ,
    };
    struct env1282 envinst1282 = {
        .shrink_dash_factor1884 =  shrink_dash_factor1884 ,
    };
    struct env1283 envinst1283 = {
        .shrink_dash_factor1884 =  shrink_dash_factor1884 ,
    };
    struct env1285 envinst1285 = {
        .envinst1282 = envinst1282 ,
    };
    struct env345 envinst345 = {
        .envinst346 = envinst346 ,
    };
    struct env1288 envinst1288 = {
        .envinst621 = envinst621 ,
    };
    struct env1290 envinst1290 = {
        .envinst346 = envinst346 ,
    };
    struct env1292 envinst1292 = {
        .envinst346 = envinst346 ,
    };
    struct env1294 envinst1294 = {
        .envinst346 = envinst346 ,
    };
    struct env344 envinst344 = {
        .envinst345 = envinst345 ,
    };
    struct env1300 envinst1300 = {
        .envinst1288 = envinst1288 ,
    };
    struct env1337 envinst1337 = {
        .envinst346 = envinst346 ,
    };
    struct env1339 envinst1339 = {
        .envinst346 = envinst346 ,
    };
    struct env1341 envinst1341 = {
        .envinst346 = envinst346 ,
    };
    struct env1343 envinst1343 = {
        .envinst346 = envinst346 ,
    };
    struct env1345 envinst1345 = {
        .envinst346 = envinst346 ,
    };
    struct env1347 envinst1347 = {
        .envinst1290 = envinst1290 ,
    };
    struct env713 envinst713 = {
        .envinst346 = envinst346 ,
    };
    struct env1350 envinst1350 = {
        .envinst1285 = envinst1285 ,
    };
    struct env1356 envinst1356 = {
        .envinst713 = envinst713 ,
        .envinst1337 = envinst1337 ,
    };
    struct env1360 envinst1360 = {
        .envinst713 = envinst713 ,
        .envinst1339 = envinst1339 ,
    };
    struct env1364 envinst1364 = {
        .envinst713 = envinst713 ,
        .envinst1341 = envinst1341 ,
    };
    struct env1368 envinst1368 = {
        .envinst1343 = envinst1343 ,
        .envinst713 = envinst713 ,
    };
    struct env1372 envinst1372 = {
        .envinst1345 = envinst1345 ,
        .envinst713 = envinst713 ,
    };
    struct env1376 envinst1376 = {
        .envinst1356 = envinst1356 ,
    };
    struct env1378 envinst1378 = {
        .envinst1368 = envinst1368 ,
    };
    struct env1380 envinst1380 = {
        .envinst1372 = envinst1372 ,
    };
    bool  temp1408 = ( false );
    bool *  should_dash_resize2603 = ( &temp1408 );
    struct env1409 envinst1409 = {
        .should_dash_resize2603 =  should_dash_resize2603 ,
    };
    struct env1432 envinst1432 = {
        .should_dash_resize2603 =  should_dash_resize2603 ,
    };
    struct env1447 envinst1447 = {
        .envinst1432 = envinst1432 ,
    };
    struct Theme_905  temp1486 = ( (struct Theme_905) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_905 *  dark_dash_theme2829 = ( &temp1486 );
    struct Theme_905  temp1487 = ( (struct Theme_905) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_905 *  light_dash_theme2830 = ( &temp1487 );
    struct env1496 envinst1496 = {
        .envinst1283 = envinst1283 ,
    };
    struct env1507 envinst1507 = {
        .envinst1356 = envinst1356 ,
    };
    struct env1520 envinst1520 = {
        .envinst1347 = envinst1347 ,
        .envinst713 = envinst713 ,
        .envinst1339 = envinst1339 ,
    };
    struct env1534 envinst1534 = {
        .envinst1520 = envinst1520 ,
    };
    struct env1536 envinst1536 = {
        .envinst1282 = envinst1282 ,
        .envinst1290 = envinst1290 ,
        .envinst1292 = envinst1292 ,
        .envinst621 = envinst621 ,
        .envinst1496 = envinst1496 ,
        .envinst1276 = envinst1276 ,
        .envinst1279 = envinst1279 ,
    };
    struct env1553 envinst1553 = {
        .envinst1272 = envinst1272 ,
    };
    struct env1555 envinst1555 = {
        .envinst1274 = envinst1274 ,
        .envinst1272 = envinst1272 ,
    };
    struct env1558 envinst1558 = {
        .envinst1347 = envinst1347 ,
        .envinst713 = envinst713 ,
        .envinst1555 = envinst1555 ,
        .envinst1339 = envinst1339 ,
    };
    struct env1574 envinst1574 = {
        .envinst1558 = envinst1558 ,
    };
    struct env1577 envinst1577 = {
        .envinst1558 = envinst1558 ,
        .envinst1536 = envinst1536 ,
        .envinst1555 = envinst1555 ,
    };
    struct env1581 envinst1581 = {
        .envinst1536 = envinst1536 ,
    };
    struct env1587 envinst1587 = {
        .envinst1536 = envinst1536 ,
    };
    struct env1593 envinst1593 = {
        .envinst1574 = envinst1574 ,
        .envinst1577 = envinst1577 ,
    };
    struct env1601 envinst1601 = {
        .envinst713 = envinst713 ,
        .envinst1520 = envinst1520 ,
        .envinst1577 = envinst1577 ,
        .envinst1574 = envinst1574 ,
    };
    struct env1608 envinst1608 = {
        .envinst1294 = envinst1294 ,
        .envinst1279 = envinst1279 ,
    };
    struct env1613 envinst1613 = {
        .envinst1507 = envinst1507 ,
    };
    struct env1620 envinst1620 = {
        .envinst1507 = envinst1507 ,
    };
    struct env1623 envinst1623 = {
        .envinst1360 = envinst1360 ,
        .envinst1553 = envinst1553 ,
        .envinst1577 = envinst1577 ,
    };
    struct env1632 envinst1632 = {
        .envinst1360 = envinst1360 ,
        .envinst1553 = envinst1553 ,
        .envinst1577 = envinst1577 ,
    };
    struct env1640 envinst1640 = {
        .envinst1360 = envinst1360 ,
        .envinst1553 = envinst1553 ,
        .envinst1364 = envinst1364 ,
        .envinst1577 = envinst1577 ,
    };
    enum CAllocator_4  al3360 = ( (  idc1221 ) ( ) );
    struct env1659 envinst1659 = {
        .envinst621 = envinst621 ,
        .envinst344 = envinst344 ,
        .envinst1300 = envinst1300 ,
    };
    struct env1664 envinst1664 = {
        .al3360 =  al3360 ,
        .envinst713 = envinst713 ,
    };
    int32_t  pad3382 = (  from_dash_integral29 ( 2 ) );
    struct env1671 envinst1671 = {
        .pad3382 =  pad3382 ,
    };
    struct env1673 envinst1673 = {
        .envinst1671 = envinst1671 ,
    };
    struct env1675 envinst1675 = {
        .pad3382 =  pad3382 ,
        .envinst1671 = envinst1671 ,
    };
    struct env1696 envinst1696 = {
        .light_dash_theme2830 =  light_dash_theme2830 ,
        .envinst1659 = envinst1659 ,
        .dark_dash_theme2829 =  dark_dash_theme2829 ,
        .envinst1378 = envinst1378 ,
        .envinst1380 = envinst1380 ,
        .envinst1664 = envinst1664 ,
    };
    if ( ( ! ( (  is_dash_terminal1315 ) ( ) ) ) ) {
        ( (  panic1155 ) ( ( "not running in a terminal!" ) ) );
    }
    struct Slice_1184  args3492 = ( (  get1483 ) ( ) );
    struct List_323  temp1704;
    struct List_323  file3493 = (  temp1704 );
    struct Maybe_308  mfilename3494 = ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    if ( (  eq45 ( ( (  args3492 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3493 = ( (  mk1261 ) ( (  al3360 ) ) );
        struct funenv621  temp1705 = ( (struct funenv621){ .fun = add621, .env =  envinst621  } );
        ( temp1705.fun ( temp1705.env ,  ( & (  file3493 ) ) ,  ( (  mk1262 ) ( (  al3360 ) ) ) ) );
    } else {
        struct funenv1659  temp1706 = ( (struct funenv1659){ .fun = load_dash_file1659, .env =  envinst1659  } );
        file3493 = ( temp1706.fun ( temp1706.env ,  (  elem_dash_get1204 ( (  args3492 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3360 ) ) );
        struct funenv1376  temp1707 = ( (struct funenv1376){ .fun = mk_dash_const_dash_str1376, .env =  envinst1376  } );
        mfilename3494 = ( ( Maybe_308_Just ) ( ( temp1707.fun ( temp1707.env ,  (  elem_dash_get1204 ( (  args3492 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3360 ) ) ) ) );
    }
    struct Editor_902  temp1708 = ( (struct Editor_902) { .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_903_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3493 ) , .f_filename = (  mfilename3494 ) , .f_mode = ( (struct Mode_904) { .tag = Mode_904_Normal_t } ) , .f_anim = ( ( Maybe_899_Just ) ( ( (  now1386 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_theme = (  dark_dash_theme2829 ) , .f_search_dash_term = ( (struct Maybe_897) { .tag = Maybe_897_None_t } ) , .f_al = (  al3360 ) , .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_clipboard = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_actions = ( (struct Actions_906) { .f_list = ( (  mk1263 ) ( (  al3360 ) ) ) , .f_cur = (  from_dash_integral11 ( 0 ) ) , .f_changeset = ( (struct Maybe_895) { .tag = Maybe_895_None_t } ) } ) , .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_delete_dash_acc = ( (struct Maybe_897) { .tag = Maybe_897_None_t } ) } );
    struct Editor_902 *  ed3495 = ( &temp1708 );
    struct funenv1409  temp1710 = ( (struct funenv1409){ .fun = mk1409, .env =  envinst1409  } );
    struct Tui_723  temp1709 = ( temp1710.fun ( temp1710.env ) );
    struct Tui_723 *  tui3496 = ( &temp1709 );
    enum CAllocator_4  al3497 = ( (  idc1221 ) ( ) );
    struct Screen_722  temp1711 = ( (  mk_dash_screen1433 ) ( (  tui3496 ) ,  (  al3497 ) ) );
    struct Screen_722 *  screen3498 = ( &temp1711 );
    uint32_t  counter3499 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3500 = ( true );
    while ( ( ( * (  ed3495 ) ) .f_running ) ) {
        int32_t  events3501 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_600  temp1712 =  into_dash_iter599 ( ( (  from_dash_function606 ) ( (  read_dash_key1426 ) ) ) );
        while (true) {
            struct Maybe_601  __cond1713 =  next605 (&temp1712);
            if (  __cond1713 .tag == 0 ) {
                break;
            }
            struct InputEvent_602  ev3503 =  __cond1713 .stuff .Maybe_601_Just_s .field0;
            if ( (  eq41 ( (  events3501 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1506 ) ( (  ed3495 ) ) );
            }
            events3501 = (  op_dash_add87 ( (  events3501 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1432  temp1714 = ( (struct funenv1432){ .fun = update_dash_dimensions1432, .env =  envinst1432  } );
            ( temp1714.fun ( temp1714.env ,  (  tui3496 ) ) );
            struct InputEvent_602  dref3504 = (  ev3503 );
            if ( dref3504.tag == InputEvent_602_Key_t ) {
                struct Key_603  dref3506 = ( dref3504 .stuff .InputEvent_602_Key_s .field0 );
                if ( dref3506.tag == Key_603_Char_t ) {
                    struct Mode_904 *  dref3508 = ( & ( ( * (  ed3495 ) ) .f_mode ) );
                    if ( (* dref3508 ).tag == Mode_904_Insert_t ) {
                        struct funenv1276  temp1715 = ( (struct funenv1276){ .fun = insert1276, .env =  envinst1276  } );
                        ( temp1715.fun ( temp1715.env ,  ( (  cursor_dash_row1493 ) ( (  ed3495 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3506 .stuff .Key_603_Char_s .field0 ) ) );
                        struct funenv1673  temp1716 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( (  move_dash_to_dash_col1511 ) ( (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1716.fun ( temp1716.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                    }
                    else if ( (* dref3508 ).tag == Mode_904_Cmd_t ) {
                        struct funenv713  temp1717 = ( (struct funenv713){ .fun = write_dash_char713, .env =  envinst713  } );
                        ( temp1717.fun ( temp1717.env ,  ( & ( (* dref3508 ) .stuff .Mode_904_Cmd_s .field0 ) ) ,  ( dref3506 .stuff .Key_603_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3508 ).tag == Mode_904_SearchBox_t ) {
                        struct funenv713  temp1718 = ( (struct funenv713){ .fun = write_dash_char713, .env =  envinst713  } );
                        ( temp1718.fun ( temp1718.env ,  ( & ( (* dref3508 ) .stuff .Mode_904_SearchBox_s .field0 ) ) ,  ( dref3506 .stuff .Key_603_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1490 ( ( (* dref3508 ) ) , ( (struct Mode_904) { .tag = Mode_904_Normal_t } ) ) ) || (  eq1490 ( ( (* dref3508 ) ) , ( (struct Mode_904) { .tag = Mode_904_Select_t } ) ) ) ) ) {
                            int32_t  code3512 = ( (  u8_dash_i32319 ) ( ( (  cast220 ) ( ( dref3506 .stuff .Key_603_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3495 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                                struct funenv1581  temp1719 = ( (struct funenv1581){ .fun = undo1581, .env =  envinst1581  } );
                                struct funenv1673  temp1720 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1719.fun ( temp1719.env ,  (  ed3495 ) ,  ( temp1720.fun ( temp1720.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "U" ) ) ) ) ) ) {
                                struct funenv1587  temp1721 = ( (struct funenv1587){ .fun = redo1587, .env =  envinst1587  } );
                                struct funenv1673  temp1722 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1721.fun ( temp1721.env ,  (  ed3495 ) ,  ( temp1722.fun ( temp1722.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1673  temp1723 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1723.fun ( temp1723.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1673  temp1724 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1724.fun ( temp1724.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1673  temp1725 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_left1513 ) ( (  ed3495 ) ,  ( temp1725.fun ( temp1725.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1673  temp1726 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_right1514 ) ( (  ed3495 ) ,  ( temp1726.fun ( temp1726.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "g" ) ) ) ) ) ) {
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1490 ( ( (* dref3508 ) ) , ( (struct Mode_904) { .tag = Mode_904_Select_t } ) ) ) ) {
                                    struct funenv1574  temp1727 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                                    ( temp1727.fun ( temp1727.env ,  (  ed3495 ) ) );
                                } else {
                                    (*  ed3495 ) .f_mode = ( (struct Mode_904) { .tag = Mode_904_Select_t } );
                                    ( (  set_dash_selection1505 ) ( (  ed3495 ) ,  ( ( Maybe_157_Just ) ( ( ( * (  ed3495 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1601  temp1728 = ( (struct funenv1601){ .fun = delete_dash_selected1601, .env =  envinst1601  } );
                                struct funenv1673  temp1729 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1728.fun ( temp1728.env ,  (  ed3495 ) ,  ( temp1729.fun ( temp1729.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                struct funenv1574  temp1730 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                                ( temp1730.fun ( temp1730.env ,  (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1601  temp1731 = ( (struct funenv1601){ .fun = delete_dash_selected1601, .env =  envinst1601  } );
                                struct funenv1673  temp1732 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1731.fun ( temp1731.env ,  (  ed3495 ) ,  ( temp1732.fun ( temp1732.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1534  temp1733 = ( (struct funenv1534){ .fun = copy_dash_selection_dash_to_dash_clipboard1534, .env =  envinst1534  } );
                                ( temp1733.fun ( temp1733.env ,  (  ed3495 ) ) );
                                struct funenv1574  temp1734 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                                ( temp1734.fun ( temp1734.env ,  (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1593  temp1735 = ( (struct funenv1593){ .fun = paste_dash_clipboard_dash_at_dash_cursor1593, .env =  envinst1593  } );
                                struct funenv1673  temp1736 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1735.fun ( temp1735.env ,  (  ed3495 ) ,  ( PastePos_1594_PasteAfter ) ,  ( temp1736.fun ( temp1736.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1593  temp1737 = ( (struct funenv1593){ .fun = paste_dash_clipboard_dash_at_dash_cursor1593, .env =  envinst1593  } );
                                struct funenv1673  temp1738 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1737.fun ( temp1737.env ,  (  ed3495 ) ,  ( PastePos_1594_PasteBefore ) ,  ( temp1738.fun ( temp1738.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1623  temp1739 = ( (struct funenv1623){ .fun = indent_dash_selection1623, .env =  envinst1623  } );
                                struct funenv1673  temp1740 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1739.fun ( temp1739.env ,  (  ed3495 ) ,  ( temp1740.fun ( temp1740.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1632  temp1741 = ( (struct funenv1632){ .fun = dedent_dash_selection1632, .env =  envinst1632  } );
                                struct funenv1673  temp1742 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( temp1741.fun ( temp1741.env ,  (  ed3495 ) ,  ( temp1742.fun ( temp1742.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1673  temp1743 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1515 ) ( (  ed3495 ) ,  ( temp1743.fun ( temp1743.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1673  temp1744 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1516 ) ( (  ed3495 ) ,  ( temp1744.fun ( temp1744.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1608  temp1745 = ( (struct funenv1608){ .fun = insert_dash_empty_dash_row_dash_at1608, .env =  envinst1608  } );
                                ( temp1745.fun ( temp1745.env ,  (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3497 ) ) );
                                struct List_3 *  currow3513 = ( (  get_dash_row1492 ) ( (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1673  temp1746 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to1509 ) ( (  ed3495 ) ,  ( (  size_dash_i32313 ) ( ( (  size1308 ) ( (  currow3513 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1746.fun ( temp1746.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1608  temp1747 = ( (struct funenv1608){ .fun = insert_dash_empty_dash_row_dash_at1608, .env =  envinst1608  } );
                                ( temp1747.fun ( temp1747.env ,  (  ed3495 ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ,  (  al3497 ) ) );
                                struct funenv1673  temp1748 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1516 ) ( (  ed3495 ) ,  ( temp1748.fun ( temp1748.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3495 ) .f_mode = ( ( Mode_904_Cmd ) ( ( (  mk1353 ) ( (  al3497 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3495 ) .f_mode = ( ( Mode_904_SearchBox ) ( ( (  mk1353 ) ( (  al3497 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_897  dref3514 = ( ( * (  ed3495 ) ) .f_search_dash_term );
                                if ( dref3514.tag == Maybe_897_None_t ) {
                                }
                                else if ( dref3514.tag == Maybe_897_Just_t ) {
                                    struct funenv1613  temp1749 = ( (struct funenv1613){ .fun = find_dash_next_dash_occurence1613, .env =  envinst1613  } );
                                    struct Maybe_157  dref3516 = ( temp1749.fun ( temp1749.env ,  (  ed3495 ) ,  ( (  as_dash_char_dash_slice1354 ) ( ( & ( dref3514 .stuff .Maybe_897_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3516.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3516.tag == Maybe_157_Just_t ) {
                                        struct funenv1673  temp1750 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                        ( (  move_dash_to1509 ) ( (  ed3495 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3516 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1352 ) ( ( & ( dref3514 .stuff .Maybe_897_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3516 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1750.fun ( temp1750.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                        (*  ed3495 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3516 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_897  dref3518 = ( ( * (  ed3495 ) ) .f_search_dash_term );
                                if ( dref3518.tag == Maybe_897_None_t ) {
                                }
                                else if ( dref3518.tag == Maybe_897_Just_t ) {
                                    struct funenv1620  temp1751 = ( (struct funenv1620){ .fun = find_dash_prev_dash_occurence1620, .env =  envinst1620  } );
                                    struct Maybe_157  dref3520 = ( temp1751.fun ( temp1751.env ,  (  ed3495 ) ,  ( (  as_dash_char_dash_slice1354 ) ( ( & ( dref3518 .stuff .Maybe_897_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3520.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3520.tag == Maybe_157_Just_t ) {
                                        struct funenv1673  temp1752 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                        ( (  move_dash_to1509 ) ( (  ed3495 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3520 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1352 ) ( ( & ( dref3518 .stuff .Maybe_897_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3520 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1752.fun ( temp1752.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                        (*  ed3495 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3520 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe941 ) ( ( ( * (  ed3495 ) ) .f_selected ) ,  (  lam1753 ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1518 ) ( (  ed3495 ) ) ) ) ) {
                                    struct funenv1673  temp1754 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                    struct Dims_1510  dims3524 = ( temp1754.fun ( temp1754.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                                    struct Cursor_154  sel3525 = ( (  or_dash_else1174 ) ( ( ( * (  ed3495 ) ) .f_selected ) ,  ( ( * (  ed3495 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3524 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1516 ) ( (  ed3495 ) ,  (  dims3524 ) ) );
                                    (*  ed3495 ) .f_selected = ( ( Maybe_157_Just ) ( (  sel3525 ) ) );
                                } else {
                                    struct funenv1673  temp1755 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1516 ) ( (  ed3495 ) ,  ( temp1755.fun ( temp1755.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                    (*  ed3495 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe942 ) ( ( ( * (  ed3495 ) ) .f_selected ) ,  (  lam1756 ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1673  temp1757 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                struct Dims_1510  dims3528 = ( temp1757.fun ( temp1757.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                                struct Cursor_154  first_dash_pos3529 = ( ( * (  ed3495 ) ) .f_cursor );
                                ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3528 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) ) , ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at1499 ) ( (  ed3495 ) ,  (  first_dash_pos3529 ) ) ) ,  (  char_dash_type1485 ) ) ) ) ) ) {
                                    first_dash_pos3529 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1518 ) ( (  ed3495 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3528 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3529 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3530 = ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) );
                                struct env944 envinst944 = {
                                    .cur_dash_char_dash_type3530 =  cur_dash_char_dash_type3530 ,
                                };
                                while ( ( (  maybe943 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  ( (struct funenv944){ .fun = lam944, .env = envinst944 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3528 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe946 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  lam1758 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3528 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1488 ( (  first_dash_pos3529 ) , ( ( * (  ed3495 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3528 ) ) );
                                    ( (  set_dash_selection1505 ) ( (  ed3495 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3529 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1673  temp1759 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                struct Dims_1510  dims3535 = ( temp1759.fun ( temp1759.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                                struct Cursor_154  first_dash_pos3536 = ( ( * (  ed3495 ) ) .f_cursor );
                                ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3535 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) ) , ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at1499 ) ( (  ed3495 ) ,  (  first_dash_pos3536 ) ) ) ,  (  char_dash_type1485 ) ) ) ) ) ) {
                                    first_dash_pos3536 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1518 ) ( (  ed3495 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3535 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3536 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                while ( ( (  maybe947 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  lam1760 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3535 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3539 = ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) );
                                struct env949 envinst949 = {
                                    .cur_dash_char_dash_type3539 =  cur_dash_char_dash_type3539 ,
                                };
                                while ( ( (  maybe948 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  ( (struct funenv949){ .fun = lam949, .env = envinst949 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3535 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1488 ( (  first_dash_pos3536 ) , ( ( * (  ed3495 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3535 ) ) );
                                    ( (  set_dash_selection1505 ) ( (  ed3495 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3536 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3506 .stuff .Key_603_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1673  temp1761 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                struct Dims_1510  dims3542 = ( temp1761.fun ( temp1761.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                                struct Cursor_154  first_dash_pos3543 = ( ( * (  ed3495 ) ) .f_cursor );
                                ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3542 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) ) , ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at1499 ) ( (  ed3495 ) ,  (  first_dash_pos3543 ) ) ) ,  (  char_dash_type1485 ) ) ) ) ) ) {
                                    first_dash_pos3543 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1518 ) ( (  ed3495 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3542 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3543 = ( ( * (  ed3495 ) ) .f_cursor );
                                }
                                while ( ( (  maybe951 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  lam1762 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3542 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3546 = ( (  fmap_dash_maybe910 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  (  char_dash_type1485 ) ) );
                                struct env953 envinst953 = {
                                    .cur_dash_char_dash_type3546 =  cur_dash_char_dash_type3546 ,
                                };
                                while ( ( (  maybe952 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  ( (struct funenv953){ .fun = lam953, .env = envinst953 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3542 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1488 ( (  first_dash_pos3543 ) , ( ( * (  ed3495 ) ) .f_cursor ) ) ) ) {
                                    struct env956 envinst956 = {
                                        .cur_dash_char_dash_type3546 =  cur_dash_char_dash_type3546 ,
                                    };
                                    if ( ( (  maybe955 ) ( ( (  char_dash_at_dash_cursor1500 ) ( (  ed3495 ) ) ) ,  ( (struct funenv956){ .fun = lam956, .env = envinst956 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1514 ) ( (  ed3495 ) ,  (  dims3542 ) ) );
                                    }
                                    ( (  set_dash_selection1505 ) ( (  ed3495 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3543 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1159 ) ( ( ( StrConcat_991_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3508 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3506.tag == Key_603_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3506 .stuff .Key_603_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3495 ) .f_screen_dash_top = ( (  max972 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3495 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1673  temp1763 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1763.fun ( temp1763.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3506 .stuff .Key_603_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3495 ) .f_screen_dash_top = ( (  max972 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3495 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1673  temp1764 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1764.fun ( temp1764.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3506 .stuff .Key_603_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                        struct funenv1640  temp1765 = ( (struct funenv1640){ .fun = toggle_dash_comment_dash_on_dash_selection1640, .env =  envinst1640  } );
                        struct funenv1673  temp1766 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( temp1765.fun ( temp1765.env ,  (  ed3495 ) ,  ( temp1766.fun ( temp1766.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                    }
                }
                else if ( dref3506.tag == Key_603_Escape_t ) {
                    struct Mode_904  dref3552 = ( ( * (  ed3495 ) ) .f_mode );
                    if ( dref3552.tag == Mode_904_Normal_t ) {
                    }
                    else if ( dref3552.tag == Mode_904_Insert_t ) {
                        struct funenv1574  temp1767 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1767.fun ( temp1767.env ,  (  ed3495 ) ) );
                    }
                    else if ( dref3552.tag == Mode_904_Cmd_t ) {
                        ( (  free1355 ) ( ( & ( dref3552 .stuff .Mode_904_Cmd_s .field0 ) ) ) );
                        struct funenv1574  temp1768 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1768.fun ( temp1768.env ,  (  ed3495 ) ) );
                    }
                    else if ( dref3552.tag == Mode_904_SearchBox_t ) {
                        ( (  free1355 ) ( ( & ( dref3552 .stuff .Mode_904_SearchBox_s .field0 ) ) ) );
                        struct funenv1574  temp1769 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1769.fun ( temp1769.env ,  (  ed3495 ) ) );
                    }
                    else if ( dref3552.tag == Mode_904_Select_t ) {
                        struct funenv1574  temp1770 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1770.fun ( temp1770.env ,  (  ed3495 ) ) );
                    }
                }
                else if ( dref3506.tag == Key_603_Backspace_t ) {
                    struct Mode_904 *  dref3555 = ( & ( ( * (  ed3495 ) ) .f_mode ) );
                    if ( (* dref3555 ).tag == Mode_904_Normal_t ) {
                    }
                    else if ( (* dref3555 ).tag == Mode_904_Select_t ) {
                    }
                    else if ( (* dref3555 ).tag == Mode_904_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1673  temp1771 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                            struct Dims_1510  dims3556 = ( temp1771.fun ( temp1771.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                            if ( (  eq41 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                                struct Cursor_154  before_dash_merge_dash_cursor3557 = ( ( * (  ed3495 ) ) .f_cursor );
                                struct funenv1574  temp1772 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                                ( temp1772.fun ( temp1772.env ,  (  ed3495 ) ) );
                                ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3556 ) ) );
                                struct StrBuilder_627  temp1773 = ( (  mk1353 ) ( ( ( * (  ed3495 ) ) .f_al ) ) );
                                struct StrBuilder_627 *  sb3558 = ( &temp1773 );
                                struct funenv713  temp1774 = ( (struct funenv713){ .fun = write_dash_char713, .env =  envinst713  } );
                                ( temp1774.fun ( temp1774.env ,  (  sb3558 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
                                struct funenv1577  temp1775 = ( (struct funenv1577){ .fun = do_dash_action1577, .env =  envinst1577  } );
                                ( temp1775.fun ( temp1775.env ,  (  ed3495 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3495 ) ) .f_cursor ) ,  ( (  as_dash_str997 ) ( (  sb3558 ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  (  dims3556 ) ) );
                                ( (  enter_dash_insert_dash_mode1576 ) ( (  ed3495 ) ) );
                            } else {
                                ( (  move_dash_left1513 ) ( (  ed3495 ) ,  (  dims3556 ) ) );
                                struct funenv1520  temp1776 = ( (struct funenv1520){ .fun = copy_dash_selection1520, .env =  envinst1520  } );
                                struct Maybe_356  dref3559 = ( temp1776.fun ( temp1776.env ,  (  ed3495 ) ) );
                                if ( dref3559.tag == Maybe_356_None_t ) {
                                }
                                else if ( dref3559.tag == Maybe_356_Just_t ) {
                                    int32_t  del_dash_acc_dash_count3563 = ( {  struct Maybe_897  dref3561 = ( ( * (  ed3495 ) ) .f_delete_dash_acc ) ; dref3561.tag == Maybe_897_Just_t ? ( (  size_dash_i32313 ) ( ( (  count1352 ) ( ( & ( dref3561 .stuff .Maybe_897_Just_s .field0 ) ) ) ) ) ) : (  from_dash_integral29 ( 0 ) ) ; } );
                                    struct Maybe_157  dref3564 = ( ( * (  ed3495 ) ) .f_insert_dash_start );
                                    if ( dref3564.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3564.tag == Maybe_157_Just_t ) {
                                        if ( ( (  cmp80 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) , (  op_dash_sub88 ( ( ( dref3564 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  del_dash_acc_dash_count3563 ) ) ) ) == 0 ) && (  eq41 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , ( ( dref3564 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) ) {
                                            if ( ( ! ( (  is_dash_just896 ) ( ( ( * (  ed3495 ) ) .f_delete_dash_acc ) ) ) ) ) {
                                                (*  ed3495 ) .f_delete_dash_acc = ( ( Maybe_897_Just ) ( ( (  mk1353 ) ( ( ( * (  ed3495 ) ) .f_al ) ) ) ) );
                                            }
                                            struct Maybe_897 *  dref3566 = ( & ( ( * (  ed3495 ) ) .f_delete_dash_acc ) );
                                            if ( (* dref3566 ).tag == Maybe_897_Just_t ) {
                                                struct funenv713  temp1777 = ( (struct funenv713){ .fun = write_dash_char713, .env =  envinst713  } );
                                                ( temp1777.fun ( temp1777.env ,  ( & ( (* dref3566 ) .stuff .Maybe_897_Just_s .field0 ) ) ,  (  elem_dash_get1206 ( ( ( dref3559 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) ) );
                                            }
                                            else if ( true ) {
                                            }
                                        }
                                    }
                                    struct funenv1536  temp1778 = ( (struct funenv1536){ .fun = apply_dash_primitive1536, .env =  envinst1536  } );
                                    ( temp1778.fun ( temp1778.env ,  (  ed3495 ) ,  ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3495 ) ) .f_cursor ) ,  ( dref3559 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  (  dims3556 ) ) );
                                    ( (  free1228 ) ( ( ( * (  ed3495 ) ) .f_al ) ,  ( ( dref3559 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
                                }
                            }
                        }
                    }
                    else if ( (* dref3555 ).tag == Mode_904_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1352 ) ( ( & ( (* dref3555 ) .stuff .Mode_904_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1350  temp1779 = ( (struct funenv1350){ .fun = pop1350, .env =  envinst1350  } );
                            ( temp1779.fun ( temp1779.env ,  ( & ( (* dref3555 ) .stuff .Mode_904_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3555 ).tag == Mode_904_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1352 ) ( ( & ( (* dref3555 ) .stuff .Mode_904_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1350  temp1780 = ( (struct funenv1350){ .fun = pop1350, .env =  envinst1350  } );
                            ( temp1780.fun ( temp1780.env ,  ( & ( (* dref3555 ) .stuff .Mode_904_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3506.tag == Key_603_Enter_t ) {
                    struct Mode_904  dref3570 = ( ( * (  ed3495 ) ) .f_mode );
                    if ( dref3570.tag == Mode_904_Normal_t ) {
                    }
                    else if ( dref3570.tag == Mode_904_Select_t ) {
                    }
                    else if ( dref3570.tag == Mode_904_Insert_t ) {
                        int32_t  cx3571 = ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1781 = ( (  mk1262 ) ( (  al3497 ) ) );
                        struct List_3 *  nurow3572 = ( &temp1781 );
                        struct TakeWhile_560  rowws3573 = ( (  indent_dash_on_dash_row1494 ) ( (  ed3495 ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3574 = ( (  size_dash_i32313 ) ( ( (  count847 ) ( (  rowws3573 ) ) ) ) );
                        struct funenv1294  temp1782 = ( (struct funenv1294){ .fun = add_dash_all1294, .env =  envinst1294  } );
                        ( temp1782.fun ( temp1782.env ,  (  nurow3572 ) ,  (  rowws3573 ) ) );
                        struct List_3 *  cur_dash_row3575 = ( (  cursor_dash_row1493 ) ( (  ed3495 ) ) );
                        struct funenv1290  temp1783 = ( (struct funenv1290){ .fun = add_dash_all1290, .env =  envinst1290  } );
                        ( temp1783.fun ( temp1783.env ,  (  nurow3572 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1303 ) ( ( * (  cur_dash_row3575 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  cx3571 ) ) ) ,  ( ( * (  cur_dash_row3575 ) ) .f_count ) ) ) ) );
                        ( (  trim1296 ) ( (  cur_dash_row3575 ) ,  ( (  i32_dash_size311 ) ( (  cx3571 ) ) ) ) );
                        struct funenv1279  temp1784 = ( (struct funenv1279){ .fun = insert1279, .env =  envinst1279  } );
                        ( temp1784.fun ( temp1784.env ,  ( & ( ( * (  ed3495 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3572 ) ) ) );
                        struct funenv1673  temp1785 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( (  move_dash_to1509 ) ( (  ed3495 ) ,  (  offchars3574 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1785.fun ( temp1785.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                    }
                    else if ( dref3570.tag == Mode_904_Cmd_t ) {
                        struct DynStr_136  s3577 = ( (  as_dash_str997 ) ( ( & ( dref3570 .stuff .Mode_904_Cmd_s .field0 ) ) ) );
                        struct funenv1696  temp1786 = ( (struct funenv1696){ .fun = run_dash_cmd1696, .env =  envinst1696  } );
                        struct funenv1673  temp1787 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                        ( temp1786.fun ( temp1786.env ,  (  ed3495 ) ,  (  s3577 ) ,  ( temp1787.fun ( temp1787.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ,  (  al3497 ) ) );
                        ( (  free1355 ) ( ( & ( dref3570 .stuff .Mode_904_Cmd_s .field0 ) ) ) );
                        struct funenv1574  temp1788 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1788.fun ( temp1788.env ,  (  ed3495 ) ) );
                    }
                    else if ( dref3570.tag == Mode_904_SearchBox_t ) {
                        struct Maybe_897  dref3579 = ( ( * (  ed3495 ) ) .f_search_dash_term );
                        if ( dref3579.tag == Maybe_897_Just_t ) {
                            ( (  free1355 ) ( ( & ( dref3579 .stuff .Maybe_897_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3579.tag == Maybe_897_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1352 ) ( ( & ( dref3570 .stuff .Mode_904_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3495 ) .f_search_dash_term = ( ( Maybe_897_Just ) ( ( dref3570 .stuff .Mode_904_SearchBox_s .field0 ) ) );
                            struct funenv1613  temp1789 = ( (struct funenv1613){ .fun = find_dash_next_dash_occurence1613, .env =  envinst1613  } );
                            struct Maybe_157  dref3581 = ( temp1789.fun ( temp1789.env ,  (  ed3495 ) ,  ( (  as_dash_char_dash_slice1354 ) ( ( & ( dref3570 .stuff .Mode_904_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3581.tag == Maybe_157_None_t ) {
                            }
                            else if ( dref3581.tag == Maybe_157_Just_t ) {
                                struct funenv1673  temp1790 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                                ( (  move_dash_to1509 ) ( (  ed3495 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3581 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1352 ) ( ( & ( dref3570 .stuff .Mode_904_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3581 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1790.fun ( temp1790.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                                (*  ed3495 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3581 .stuff .Maybe_157_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3495 ) .f_search_dash_term = ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
                        }
                        struct funenv1574  temp1791 = ( (struct funenv1574){ .fun = set_dash_mode_dash_normal1574, .env =  envinst1574  } );
                        ( temp1791.fun ( temp1791.env ,  (  ed3495 ) ) );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3504.tag == InputEvent_602_Mouse_t ) {
                enum MouseButton_149  dref3584 = ( ( dref3504 .stuff .InputEvent_602_Mouse_s .field0 ) .f_button );
                switch (  dref3584 ) {
                    case MouseButton_149_MouseLeft : {
                        if ( ( ( dref3504 .stuff .InputEvent_602_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3585 = ( (  size_dash_i32313 ) ( ( ( ( * (  ed3495 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3586 = ( (  clamp977 ) ( (  op_dash_add87 ( ( ( * (  ed3495 ) ) .f_screen_dash_top ) , ( ( dref3504 .stuff .InputEvent_602_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3585 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1671  temp1792 = ( (struct funenv1671){ .fun = left_dash_offset1671, .env =  envinst1671  } );
                            struct Visual_903  vx3587 = ( ( Visual_903_Visual ) ( (  op_dash_sub88 ( ( ( dref3504 .stuff .InputEvent_602_Mouse_s .field0 ) .f_x ) , ( ( temp1792.fun ( temp1792.env ,  (  ed3495 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3588 = ( (  visual_dash_x_dash_to_dash_x1502 ) ( (  ed3495 ) ,  (  vx3587 ) ,  (  cy3586 ) ) );
                            (*  ed3495 ) .f_cursor .f_x = (  cx3588 );
                            (*  ed3495 ) .f_goal_dash_x = (  vx3587 );
                            struct funenv1673  temp1793 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                            ( (  move_dash_to_dash_row1512 ) ( (  ed3495 ) ,  (  cy3586 ) ,  ( temp1793.fun ( temp1793.env ,  (  ed3495 ) ,  (  tui3496 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable1154 ) ( ) );
            }
        }
        struct funenv1447  temp1794 = ( (struct funenv1447){ .fun = resize_dash_screen_dash_if_dash_needed1447, .env =  envinst1447  } );
        bool  resized3589 = ( temp1794.fun ( temp1794.env ,  (  screen3498 ) ) );
        if ( ( ( ( (  resized3589 ) || (  cmp80 ( (  events3501 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3500 ) ) || ( (  is_dash_just898 ) ( ( ( * (  ed3495 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3500 = ( false );
            ( (  clear_dash_screen1437 ) ( (  screen3498 ) ) );
            ( (  set_dash_screen_dash_fg1449 ) ( (  screen3498 ) ,  ( ( * ( ( * (  ed3495 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1450 ) ( (  screen3498 ) ,  ( ( * ( ( * (  ed3495 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1453 ) ( (  screen3498 ) ) );
            struct funenv1675  temp1795 = ( (struct funenv1675){ .fun = render_dash_editor1675, .env =  envinst1675  } );
            ( temp1795.fun ( temp1795.env ,  (  screen3498 ) ,  (  ed3495 ) ) );
            bool  debug3590 = ( true );
            if ( (  debug3590 ) ) {
                ( (  draw_dash_str_dash_right1472 ) ( (  screen3498 ) ,  ( ( StrConcat_991_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3495 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1473 ) ( (  screen3498 ) ,  ( ( StrConcat_1006_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3496 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env901 envinst901 = {
                    .ed3495 =  ed3495 ,
                };
                struct Maybe_386  charcode3595 = ( (  fmap_dash_maybe911 ) ( ( (  and_dash_maybe900 ) ( ( (  try_dash_get1258 ) ( ( & ( ( * (  ed3495 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv901){ .fun = lam901, .env = envinst901 } ) ) ) ,  (  lam1796 ) ) );
                ( (  draw_dash_str_dash_right1474 ) ( (  screen3498 ) ,  ( ( StrConcat_1008_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3595 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1475 ) ( (  screen3498 ) ,  ( ( StrConcat_1032_StrConcat ) ( ( ( StrConcat_1033_StrConcat ) ( ( ( StrConcat_1034_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3596 = ( ( * ( (  get_dash_row1492 ) ( (  ed3495 ) ,  ( ( ( * (  ed3495 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1476 ) ( (  screen3498 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3596 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3597 = ( (  from_dash_visual1489 ) ( ( ( * (  ed3495 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1477 ) ( (  screen3498 ) ,  ( ( StrConcat_1034_StrConcat ) ( ( "goal x: " ) ,  (  gx3597 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1673  temp1797 = ( (struct funenv1673){ .fun = screen_dash_dims1673, .env =  envinst1673  } );
                struct Dims_1510  dim3598 = ( temp1797.fun ( temp1797.env ,  (  ed3495 ) ,  (  tui3496 ) ) );
                ( (  draw_dash_str_dash_right1478 ) ( (  screen3498 ) ,  ( ( StrConcat_1041_StrConcat ) ( ( ( StrConcat_1042_StrConcat ) ( ( ( StrConcat_1034_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3495 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3598 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1479 ) ( (  screen3498 ) ,  ( ( StrConcat_1046_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3495 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1480 ) ( (  screen3498 ) ,  ( ( StrConcat_1060_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3495 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_913  cpsize3601 = ( (  fmap_dash_maybe912 ) ( ( ( * (  ed3495 ) ) .f_clipboard ) ,  (  lam1798 ) ) );
                ( (  draw_dash_str_dash_right1481 ) ( (  screen3498 ) ,  ( ( StrConcat_1064_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3601 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
                ( (  draw_dash_str_dash_right1482 ) ( (  screen3498 ) ,  ( ( StrConcat_1075_StrConcat ) ( ( ( StrConcat_1067_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "actions: " ) ,  ( ( ( * (  ed3495 ) ) .f_actions ) .f_cur ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ,  ( ( ( ( * (  ed3495 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 10 ) ) ) );
            }
            ( (  update_dash_animation1691 ) ( ( & ( ( * (  ed3495 ) ) .f_anim ) ) ,  (  screen3498 ) ) );
            ( (  render_dash_screen1441 ) ( (  screen3498 ) ) );
        }
        ( (  sync1415 ) ( (  tui3496 ) ) );
    }
    ( (  free_dash_screen1436 ) ( (  screen3498 ) ) );
    ( (  deinit1419 ) ( (  tui3496 ) ) );
}
