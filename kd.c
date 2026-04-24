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

static  char *   get_dash_ptr8 (    struct List_3 *  list1804 ,    size_t  i1806 ) {
    if ( ( (  cmp9 ( (  i1806 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1806 ) , ( ( * (  list1804 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1806 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1804 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1804 ) ) .f_elements ) ,  (  i1806 ) ) );
}

static  char   get7 (    struct List_3 *  list1814 ,    size_t  i1816 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1814 ) ,  (  i1816 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1875 ,    size_t  k1877 ) {
    return ( (  get7 ) ( ( & (  self1875 ) ) ,  (  k1877 ) ) );
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

static  bool   eq55 (    enum CharType_53  l2687 ,    enum CharType_53  r2689 ) {
    struct Tuple2_56  dref2690 = ( ( Tuple2_56_Tuple2 ) ( (  l2687 ) ,  (  r2689 ) ) );
    if (  dref2690 .field0 == CharType_53_CharSpace &&  dref2690 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2690 .field0 == CharType_53_CharWord &&  dref2690 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2690 .field0 == CharType_53_CharPunctuation &&  dref2690 .field1 == CharType_53_CharPunctuation ) {
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

static  bool   eq66 (    enum Color8_60  l1997 ,    enum Color8_60  r1999 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l1997 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r1999 ) ) ) ) );
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

static  bool   eq74 (    enum Color16_61  l2003 ,    enum Color16_61  r2005 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l2003 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r2005 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l2033 ,    struct RGB_62  r2035 ) {
    return ( ( (  eq43 ( ( (  l2033 ) .f_r ) , ( (  r2035 ) .f_r ) ) ) && (  eq43 ( ( (  l2033 ) .f_g ) , ( (  r2035 ) .f_g ) ) ) ) && (  eq43 ( ( (  l2033 ) .f_b ) , ( (  r2035 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l2056 ,    struct Color_59  r2058 ) {
    return ( {  struct Tuple2_65  dref2059 = ( ( Tuple2_65_Tuple2 ) ( (  l2056 ) ,  (  r2058 ) ) ) ; dref2059 .field0.tag == Color_59_ColorDefault_t && dref2059 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref2059 .field0.tag == Color_59_Color8_t && dref2059 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref2059 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref2059 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref2059 .field0.tag == Color_59_Color16_t && dref2059 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref2059 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref2059 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref2059 .field0.tag == Color_59_Color256_t && dref2059 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref2059 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref2059 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref2059 .field0.tag == Color_59_ColorRGB_t && dref2059 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref2059 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref2059 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2543 ,    struct Cell_58  r2545 ) {
    if ( ( !  eq47 ( ( (  l2543 ) .f_c ) , ( (  r2545 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2543 ) .f_fg ) , ( (  r2545 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2543 ) .f_bg ) , ( (  r2545 ) .f_bg ) ) ) ) {
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

static  const char* *   offset_dash_ptr169 (    const char* *  x456 ,    int64_t  count458 ) {
    const char*  temp170;
    return ( (const char* * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp170 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr171 (    struct List_3 *  x456 ,    int64_t  count458 ) {
    struct List_3  temp172;
    return ( (struct List_3 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp172 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr173 (    uint32_t *  x456 ,    int64_t  count458 ) {
    uint32_t  temp174;
    return ( (uint32_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp174 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr175 (    uint8_t *  x456 ,    int64_t  count458 ) {
    uint8_t  temp176;
    return ( (uint8_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp176 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr177 (    struct Cell_58 *  x456 ,    int64_t  count458 ) {
    struct Cell_58  temp178;
    return ( (struct Cell_58 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp178 ) ) ) ) ) ) ) ) );
}

static  struct Action_152 *   offset_dash_ptr179 (    struct Action_152 *  x456 ,    int64_t  count458 ) {
    struct Action_152  temp180;
    return ( (struct Action_152 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp180 ) ) ) ) ) ) ) ) );
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

static  struct Either_182 *   offset_dash_ptr181 (    struct Either_182 *  x456 ,    int64_t  count458 ) {
    struct Either_182  temp183;
    return ( (struct Either_182 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp183 ) ) ) ) ) ) ) ) );
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
    struct Action_152  temp195;
    return ( (struct TypeSize_194) { .f_size = ( sizeof( ( (  temp195 ) ) ) ) } );
}

struct TypeSize_197 {
    size_t  f_size;
};

static  struct TypeSize_197   get_dash_typesize196 (  ) {
    struct Either_182  temp198;
    return ( (struct TypeSize_197) { .f_size = ( sizeof( ( (  temp198 ) ) ) ) } );
}

static  size_t   size_dash_of199 (    struct List_3 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of200 (    char *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of201 (    char  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of202 (    FILE *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of203 (    struct Either_182 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of204 (    enum Unit_13 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of205 (    uint32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Winsize_207 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of206 (    struct Winsize_207  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of208 (    size_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of209 (    int64_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Array_211 {
    char _arr [32];
};

static  size_t   size_dash_of210 (    struct Array_211  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of212 (    struct Action_152 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of213 (    struct timespec *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  char *   cast214 (    const char*  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  const char*   cast215 (    char *  x469 ) {
    return ( (const char* ) (  x469 ) );
}

static  enum Unit_13 *   cast216 (    const char*  x469 ) {
    return ( (enum Unit_13 * ) (  x469 ) );
}

static  uint16_t *   cast217 (    uint32_t *  x469 ) {
    return ( (uint16_t * ) (  x469 ) );
}

static  uint32_t *   cast218 (    size_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  char *   cast219 (    int32_t *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  uint8_t   cast220 (    char  x469 ) {
    return ( (uint8_t ) (  x469 ) );
}

static  uint8_t *   cast221 (    int64_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char *   cast222 (    struct Array_211 *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  int32_t   cast223 (    uint32_t  x469 ) {
    return ( (int32_t ) (  x469 ) );
}

static  char   cast224 (    int32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  uint8_t *   cast225 (    int32_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char   cast226 (    uint32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  char   cast227 (    size_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  uint32_t *   cast228 (    int64_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  void *   cast_dash_ptr229 (    struct List_3 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   cast_dash_ptr230 (    void *  p472 ) {
    return ( (struct List_3 * ) (  p472 ) );
}

static  void *   cast_dash_ptr231 (    struct List_3 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr232 (    char * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  char *   cast_dash_ptr233 (    void *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr234 (    char *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr235 (    FILE * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr236 (    struct Either_182 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr237 (    struct Array_104 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr238 (    struct Array_110 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  struct termios *   cast_dash_ptr239 (    struct Termios_141 *  p472 ) {
    return ( (struct termios * ) (  p472 ) );
}

static  uint8_t *   cast_dash_ptr240 (    struct Array_142 *  p472 ) {
    return ( (uint8_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr241 (    struct Array_107 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  void *   cast_dash_ptr242 (    enum Unit_13 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr243 (    uint32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr244 (    struct Winsize_207 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr245 (    size_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Cell_58 *   cast_dash_ptr246 (    void *  p472 ) {
    return ( (struct Cell_58 * ) (  p472 ) );
}

static  void *   cast_dash_ptr247 (    int64_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

struct Pollfd_249 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr248 (    struct Pollfd_249 *  p472 ) {
    return ( (struct pollfd * ) (  p472 ) );
}

static  void *   cast_dash_ptr250 (    struct Array_211 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  char *   cast_dash_ptr251 (    struct Array_211 *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr252 (    struct Either_182 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Action_152 *   cast_dash_ptr253 (    void *  p472 ) {
    return ( (struct Action_152 * ) (  p472 ) );
}

static  struct Either_182 *   cast_dash_ptr254 (    void *  p472 ) {
    return ( (struct Either_182 * ) (  p472 ) );
}

static  void *   cast_dash_ptr255 (    struct Action_152 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr256 (    struct Action_152 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr257 (    enum Unit_13 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr258 (    struct timespec * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr259 (    struct Cell_58 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   zeroed260 (  ) {
    struct List_3 *  temp261;
    struct List_3 *  x479 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr229 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of199 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char *   zeroed262 (  ) {
    char *  temp263;
    char *  x479 = (  temp263 );
    ( ( memset ) ( ( (  cast_dash_ptr232 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of200 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char   zeroed264 (  ) {
    char  temp265;
    char  x479 = (  temp265 );
    ( ( memset ) ( ( (  cast_dash_ptr234 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of201 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  FILE *   zeroed266 (  ) {
    FILE *  temp267;
    FILE *  x479 = (  temp267 );
    ( ( memset ) ( ( (  cast_dash_ptr235 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of202 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Either_182 *   zeroed268 (  ) {
    struct Either_182 *  temp269;
    struct Either_182 *  x479 = (  temp269 );
    ( ( memset ) ( ( (  cast_dash_ptr236 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of203 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  enum Unit_13 *   zeroed270 (  ) {
    enum Unit_13 *  temp271;
    enum Unit_13 *  x479 = (  temp271 );
    ( ( memset ) ( ( (  cast_dash_ptr242 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of204 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   zeroed272 (  ) {
    uint32_t  temp273;
    uint32_t  x479 = (  temp273 );
    ( ( memset ) ( ( (  cast_dash_ptr243 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of205 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Winsize_207   zeroed274 (  ) {
    struct Winsize_207  temp275;
    struct Winsize_207  x479 = (  temp275 );
    ( ( memset ) ( ( (  cast_dash_ptr244 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of206 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  size_t   zeroed276 (  ) {
    size_t  temp277;
    size_t  x479 = (  temp277 );
    ( ( memset ) ( ( (  cast_dash_ptr245 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of208 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int64_t   zeroed278 (  ) {
    int64_t  temp279;
    int64_t  x479 = (  temp279 );
    ( ( memset ) ( ( (  cast_dash_ptr247 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of209 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Array_211   zeroed280 (  ) {
    struct Array_211  temp281;
    struct Array_211  x479 = (  temp281 );
    ( ( memset ) ( ( (  cast_dash_ptr250 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of210 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Action_152 *   zeroed282 (  ) {
    struct Action_152 *  temp283;
    struct Action_152 *  x479 = (  temp283 );
    ( ( memset ) ( ( (  cast_dash_ptr256 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of212 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct timespec *   zeroed284 (  ) {
    struct timespec *  temp285;
    struct timespec *  x479 = (  temp285 );
    ( ( memset ) ( ( (  cast_dash_ptr258 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of213 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   cast_dash_on_dash_zeroed286 (    uint16_t  x482 ) {
    uint32_t  temp287 = ( (  zeroed272 ) ( ) );
    uint32_t *  y483 = ( &temp287 );
    uint16_t *  yp484 = ( (  cast217 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  size_t   cast_dash_on_dash_zeroed288 (    uint32_t  x482 ) {
    size_t  temp289 = ( (  zeroed276 ) ( ) );
    size_t *  y483 = ( &temp289 );
    uint32_t *  yp484 = ( (  cast218 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed290 (    char  x482 ) {
    int32_t  temp291 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp291 );
    char *  yp484 = ( (  cast219 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed292 (    uint8_t  x482 ) {
    int64_t  temp293 = ( (  zeroed278 ) ( ) );
    int64_t *  y483 = ( &temp293 );
    uint8_t *  yp484 = ( (  cast221 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed294 (    uint8_t  x482 ) {
    int32_t  temp295 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp295 );
    uint8_t *  yp484 = ( (  cast225 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed296 (    uint32_t  x482 ) {
    int64_t  temp297 = ( (  zeroed278 ) ( ) );
    int64_t *  y483 = ( &temp297 );
    uint32_t *  yp484 = ( (  cast228 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
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
    return ( (  zeroed270 ) ( ) );
}

static  struct Action_152 *   null_dash_ptr303 (  ) {
    return ( (  zeroed282 ) ( ) );
}

static  struct timespec *   null_dash_ptr304 (  ) {
    return ( (  zeroed284 ) ( ) );
}

static  bool   is_dash_ptr_dash_null305 (    FILE *  p488 ) {
    return ( (  p488 ) == ( (  null_dash_ptr300 ) ( ) ) );
}

static  bool   ptr_dash_eq306 (    enum Unit_13 *  l494 ,    enum Unit_13 *  r496 ) {
    return ( (  l494 ) == (  r496 ) );
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

static  struct Maybe_308   from_dash_nullable_dash_c_dash_str307 (    const char*  s499 ) {
    if ( ( (  ptr_dash_eq306 ) ( ( (  cast216 ) ( (  s499 ) ) ) ,  ( ( (  null_dash_ptr302 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    } else {
        return ( ( Maybe_308_Just ) ( (  s499 ) ) );
    }
}

static  uint32_t   i32_dash_u32309 (    int32_t  x508 ) {
    return ( (uint32_t ) (  x508 ) );
}

static  int64_t   i32_dash_i64310 (    int32_t  x511 ) {
    return ( (int64_t ) (  x511 ) );
}

static  size_t   i32_dash_size311 (    int32_t  x514 ) {
    return ( (size_t ) ( (int64_t ) (  x514 ) ) );
}

static  int32_t   i64_dash_i32312 (    int64_t  x520 ) {
    return ( (int32_t ) (  x520 ) );
}

static  int32_t   size_dash_i32313 (    size_t  x529 ) {
    return ( (int32_t ) (  x529 ) );
}

static  uint32_t   u16_dash_u32314 (    uint16_t  x535 ) {
    return ( (  cast_dash_on_dash_zeroed286 ) ( (  x535 ) ) );
}

static  size_t   u32_dash_size315 (    uint32_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed288 ) ( (  x541 ) ) );
}

static  int64_t   u32_dash_i64316 (    uint32_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed296 ) ( (  x544 ) ) );
}

static  int32_t   u32_dash_i32317 (    uint32_t  x550 ) {
    return ( (  cast223 ) ( (  x550 ) ) );
}

static  int64_t   u8_dash_i64318 (    uint8_t  x556 ) {
    return ( (  cast_dash_on_dash_zeroed292 ) ( (  x556 ) ) );
}

static  int32_t   u8_dash_i32319 (    uint8_t  x559 ) {
    return ( (  cast_dash_on_dash_zeroed294 ) ( (  x559 ) ) );
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

static  struct SliceIter_321   into_dash_iter325 (    struct Slice_322  self1457 ) {
    return ( (struct SliceIter_321) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min327 (    size_t  l975 ,    size_t  r977 ) {
    if ( (  cmp9 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  struct Slice_322   subslice326 (    struct Slice_322  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct List_3 *  begin_dash_ptr1422 = ( (  offset_dash_ptr171 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_321   into_dash_iter324 (    struct List_323  self1831 ) {
    return ( (  into_dash_iter325 ) ( ( (  subslice326 ) ( ( (  self1831 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1831 ) .f_count ) ) ) ) );
}

static  struct SliceIter_321   into_dash_iter320 (    struct List_323 *  self565 ) {
    return ( (  into_dash_iter324 ) ( ( * (  self565 ) ) ) );
}

struct SliceIter_330 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_329 {
    struct SliceIter_330  f_s;
};

static  struct Scanner_329   into_dash_iter331 (    struct Scanner_329  self2435 ) {
    return (  self2435 );
}

static  struct Scanner_329   into_dash_iter328 (    struct Scanner_329 *  self565 ) {
    return ( (  into_dash_iter331 ) ( ( * (  self565 ) ) ) );
}

static  struct SliceIter_330   into_dash_iter334 (    struct Slice_5  self1457 ) {
    return ( (struct SliceIter_330) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice335 (    struct Slice_5  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    char *  begin_dash_ptr1422 = ( (  offset_dash_ptr31 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_330   into_dash_iter333 (    struct List_3  self1831 ) {
    return ( (  into_dash_iter334 ) ( ( (  subslice335 ) ( ( (  self1831 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1831 ) .f_count ) ) ) ) );
}

static  struct SliceIter_330   into_dash_iter332 (    struct List_3 *  self565 ) {
    return ( (  into_dash_iter333 ) ( ( * (  self565 ) ) ) );
}

enum EmptyIter_337 {
    EmptyIter_337_EmptyIter,
};

static  enum EmptyIter_337   nil336 (  ) {
    return ( EmptyIter_337_EmptyIter );
}

static  enum EmptyIter_337   into_dash_iter338 (    enum EmptyIter_337  self570 ) {
    return (  self570 );
}

static  struct Maybe_49   next339 (    enum EmptyIter_337 *  dref572 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_342 {
    struct DynStr_136  f_og;
    size_t  f_last;
};

struct env347 {
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1840;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1839;
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
    struct env346 envinst346;
    ;
    ;
};

struct funenv345 {
    enum Unit_13  (*fun) (  struct env345  ,    struct List_3 *  ,    struct DynStr_136  );
    struct env345 env;
};

struct env344 {
    struct env345 envinst345;
    ;
    ;
    ;
    ;
    ;
};

struct funenv344 {
    struct List_3  (*fun) (  struct env344  ,    struct DynStr_136  ,    enum CAllocator_4  );
    struct env344 env;
};

struct env343 {
    struct env344 envinst344;
    enum CAllocator_4  al3196;
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

static  struct Map_341   into_dash_iter340 (    struct Map_341  self576 ) {
    return (  self576 );
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

static  struct Map_349   into_dash_iter348 (    struct Map_349  self576 ) {
    return (  self576 );
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

static  struct Map_352   into_dash_iter351 (    struct Map_352  self576 ) {
    return (  self576 );
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

static  char   or_dash_fail359 (    struct Maybe_49  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_49  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_49_Just_t ) {
        return ( dref1362 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get360 (    struct Slice_5  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1401 = ( (  offset_dash_ptr31 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  char   get358 (    struct Slice_5  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail359 ) ( ( (  try_dash_get360 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar361 (  ) {
    return ( (  zeroed264 ) ( ) );
}

static  char   newline362 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_136   substr363 (    struct DynStr_136  s1610 ,    size_t  from1612 ,    size_t  to1614 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( (  s1610 ) .f_contents ) ,  (  from1612 ) ,  (  to1614 ) ) ) } );
}

static  struct Maybe_356   next357 (    struct LineIter_342 *  self1759 ) {
    if ( ( (  cmp9 ( ( ( * (  self1759 ) ) .f_last ) , ( ( ( ( * (  self1759 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get358 ) ( ( ( ( * (  self1759 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1759 ) ) .f_last ) ) ) , ( (  nullchar361 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    size_t  i1760 = ( ( * (  self1759 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1760 ) , ( ( ( ( * (  self1759 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get358 ) ( ( ( ( * (  self1759 ) ) .f_og ) .f_contents ) ,  (  i1760 ) ) ) , ( (  newline362 ) ( ) ) ) ) ) ) {
        i1760 = (  op_dash_add98 ( (  i1760 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_136  line1761 = ( (  substr363 ) ( ( ( * (  self1759 ) ) .f_og ) ,  ( ( * (  self1759 ) ) .f_last ) ,  (  i1760 ) ) );
    if ( (  cmp9 ( (  i1760 ) , ( ( ( ( * (  self1759 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1760 = (  op_dash_add98 ( (  i1760 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1759 ) .f_last = (  i1760 );
    return ( ( Maybe_356_Just ) ( (  line1761 ) ) );
}

static  struct Maybe_355   next354 (    struct Map_341 *  dref578 ) {
    struct Maybe_356  dref581 = ( (  next357 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    else if ( dref581.tag == Maybe_356_Just_t ) {
        struct funenv343  temp364 = ( (* dref578 ) .field1 );
        return ( ( Maybe_355_Just ) ( ( temp364.fun ( temp364.env ,  ( dref581 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_49   next367 (    struct ConstStrIter_350 *  self1073 ) {
    if ( (  cmp9 ( ( ( * (  self1073 ) ) .f_i ) , ( (  i32_dash_size311 ) ( ( ( strlen ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1074 = ( ( (  cast214 ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) );
    char  c1075 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1074 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1073 ) ) .f_i ) ) ) ) ) );
    (*  self1073 ) .f_i = (  op_dash_add98 ( ( ( * (  self1073 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1075 ) ) );
}

static  struct Maybe_366   next365 (    struct Map_349 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next367 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_366_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_49   next371 (    struct SliceIter_330 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1465 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_49   next370 (    struct Take_353 *  dref641 ) {
    if ( (  cmp9 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x644 = ( (  next371 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
        (* dref641 ) .field1 = (  op_dash_sub99 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x644 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_369   next368 (    struct Map_352 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next370 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_369_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_342   into_dash_iter373 (    struct LineIter_342  self1756 ) {
    return (  self1756 );
}

static  struct Map_341   map372 (    struct LineIter_342  iterable585 ,   struct funenv343  fun587 ) {
    struct LineIter_342  it588 = ( (  into_dash_iter373 ) ( (  iterable585 ) ) );
    return ( ( Map_341_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct ConstStrIter_350   into_dash_iter375 (    const char*  self1067 ) {
    return ( (struct ConstStrIter_350) { .f_ogstr = (  self1067 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_349   map374 (    const char*  iterable585 ,    uint32_t (*  fun587 )(    char  ) ) {
    struct ConstStrIter_350  it588 = ( (  into_dash_iter375 ) ( (  iterable585 ) ) );
    return ( ( Map_349_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Take_353   into_dash_iter377 (    struct Take_353  self639 ) {
    return (  self639 );
}

static  struct Map_352   map376 (    struct Take_353  iterable585 ,    int32_t (*  fun587 )(    char  ) ) {
    struct Take_353  it588 = ( (  into_dash_iter377 ) ( (  iterable585 ) ) );
    return ( ( Map_352_Map ) ( (  it588 ) ,  (  fun587 ) ) );
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

static  struct Drop_379   into_dash_iter378 (    struct Drop_379  self625 ) {
    return (  self625 );
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

static  struct Drop_383   into_dash_iter382 (    struct Drop_383  self625 ) {
    return (  self625 );
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

static  struct Maybe_369   next389 (    struct FromIter_381 *  dref685 ) {
    int32_t  v687 = ( ( (* dref685 ) ) .f_from );
    (* dref685 ) .f_from = (  op_dash_add87 ( ( ( (* dref685 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_369_Just ) ( (  v687 ) ) );
}

static  struct Maybe_386   next388 (    struct Zip_380 *  self694 ) {
    struct Zip_380  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next371 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_386   next385 (    struct Drop_379 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next388 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next388 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
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

static  struct Maybe_355   next394 (    struct SliceIter_321 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    struct List_3  elem1465 = ( * ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_355_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_391   next393 (    struct Zip_384 *  self694 ) {
    struct Zip_384  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_355  dref696 = ( (  next394 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_355_None_t ) {
            return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
        }
        else if ( dref696.tag == Maybe_355_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_391) { .tag = Maybe_391_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next394 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_391_Just ) ( ( ( Tuple2_392_Tuple2 ) ( ( dref696 .stuff .Maybe_355_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_391   next390 (    struct Drop_383 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next393 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next393 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

static  struct Zip_380   into_dash_iter396 (    struct Zip_380  self691 ) {
    return (  self691 );
}

static  struct Drop_379   drop395 (    struct Zip_380  iterable632 ,    size_t  i634 ) {
    struct Zip_380  it635 = ( (  into_dash_iter396 ) ( (  iterable632 ) ) );
    return ( ( Drop_379_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Zip_384   into_dash_iter398 (    struct Zip_384  self691 ) {
    return (  self691 );
}

static  struct Drop_383   drop397 (    struct Zip_384  iterable632 ,    size_t  i634 ) {
    struct Zip_384  it635 = ( (  into_dash_iter398 ) ( (  iterable632 ) ) );
    return ( ( Drop_383_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Take_353   take399 (    struct List_3 *  it647 ,    size_t  i649 ) {
    return ( ( Take_353_Take ) ( ( (  into_dash_iter332 ) ( (  it647 ) ) ) ,  (  i649 ) ) );
}

struct Range_401 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_401 Range_401_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_401 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_401   to400 (    int32_t  from654 ,    int32_t  to656 ) {
    return ( ( Range_401_Range ) ( (  from654 ) ,  (  to656 ) ) );
}

struct RangeIter_403 {
    struct Range_401  field0;
    int32_t  field1;
};

static struct RangeIter_403 RangeIter_403_RangeIter (  struct Range_401  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_403 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_403   into_dash_iter402 (    struct Range_401  dref663 ) {
    return ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref663 .field0 ) ,  ( dref663 .field1 ) ) ) ,  ( dref663 .field0 ) ) );
}

static  struct Maybe_369   next404 (    struct RangeIter_403 *  self671 ) {
    struct RangeIter_403  dref672 = ( * (  self671 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref672 .field1 ) , ( dref672 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        struct Maybe_369  x676 = ( ( Maybe_369_Just ) ( ( dref672 .field1 ) ) );
        (*  self671 ) = ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref672 .field0 .field0 ) ,  ( dref672 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref672 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x676 );
    }
}

static  struct FromIter_381   from405 (    int32_t  f680 ) {
    return ( (struct FromIter_381) { .f_from = (  f680 ) } );
}

static  struct FromIter_381   into_dash_iter406 (    struct FromIter_381  it683 ) {
    return (  it683 );
}

struct SliceIter_409 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_408 {
    struct SliceIter_409  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_408   into_dash_iter407 (    struct Zip_408  self691 ) {
    return (  self691 );
}

struct Slice_413 {
    struct Either_182 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_412 {
    struct Slice_413  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_411 {
    struct SliceIter_412  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self691 ) {
    return (  self691 );
}

struct Zip_415 {
    struct SliceIter_330  f_left_dash_it;
    struct SliceIter_330  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self691 ) {
    return (  self691 );
}

struct IntStrIter_418 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_417 {
    struct IntStrIter_418  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self691 ) {
    return (  self691 );
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

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self691 ) {
    return (  self691 );
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

static  struct Zip_427   into_dash_iter426 (    struct Zip_427  self691 ) {
    return (  self691 );
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

static  struct Zip_431   into_dash_iter430 (    struct Zip_431  self691 ) {
    return (  self691 );
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

static  struct Zip_441   into_dash_iter440 (    struct Zip_441  self691 ) {
    return (  self691 );
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

static  struct Zip_446   into_dash_iter445 (    struct Zip_446  self691 ) {
    return (  self691 );
}

struct Zip_450 {
    struct StrConcatIter_444  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_450   into_dash_iter449 (    struct Zip_450  self691 ) {
    return (  self691 );
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

static  struct Zip_452   into_dash_iter451 (    struct Zip_452  self691 ) {
    return (  self691 );
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

static  struct Zip_456   into_dash_iter455 (    struct Zip_456  self691 ) {
    return (  self691 );
}

struct StrConcatIter_462 {
    struct StrConcatIter_459  f_left;
    struct IntStrIter_448  f_right;
};

struct Zip_461 {
    struct StrConcatIter_462  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_461   into_dash_iter460 (    struct Zip_461  self691 ) {
    return (  self691 );
}

struct Tuple2_465 {
    struct Action_152  field0;
    int32_t  field1;
};

static struct Tuple2_465 Tuple2_465_Tuple2 (  struct Action_152  field0 ,  int32_t  field1 ) {
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
            struct Action_152  field0;
        } Maybe_466_Just_s;
    } stuff;
};

static struct Maybe_466 Maybe_466_Just (  struct Action_152  field0 ) {
    return ( struct Maybe_466 ) { .tag = Maybe_466_Just_t, .stuff = { .Maybe_466_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_466   next467 (    struct SliceIter_409 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    struct Action_152  elem1465 = ( * ( (  offset_dash_ptr179 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_466_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_464   next463 (    struct Zip_408 *  self694 ) {
    struct Zip_408  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_466  dref696 = ( (  next467 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_466_None_t ) {
            return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
        }
        else if ( dref696.tag == Maybe_466_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next467 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_464_Just ) ( ( ( Tuple2_465_Tuple2 ) ( ( dref696 .stuff .Maybe_466_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_470 {
    struct Either_182  field0;
    int32_t  field1;
};

static struct Tuple2_470 Tuple2_470_Tuple2 (  struct Either_182  field0 ,  int32_t  field1 ) {
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
            struct Either_182  field0;
        } Maybe_471_Just_s;
    } stuff;
};

static struct Maybe_471 Maybe_471_Just (  struct Either_182  field0 ) {
    return ( struct Maybe_471 ) { .tag = Maybe_471_Just_t, .stuff = { .Maybe_471_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_471   next472 (    struct SliceIter_412 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_471) { .tag = Maybe_471_None_t } );
    }
    struct Either_182  elem1465 = ( * ( (  offset_dash_ptr181 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_471_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_469   next468 (    struct Zip_411 *  self694 ) {
    struct Zip_411  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_471  dref696 = ( (  next472 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_471_None_t ) {
            return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
        }
        else if ( dref696.tag == Maybe_471_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_469_Just ) ( ( ( Tuple2_470_Tuple2 ) ( ( dref696 .stuff .Maybe_471_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_474   next473 (    struct Zip_415 *  self694 ) {
    struct Zip_415  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next371 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref698 = ( (  next371 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
            }
            else if ( dref698.tag == Maybe_49_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next371 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_474_Just ) ( ( ( Tuple2_475_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env480 {
    ;
    int32_t  base949;
};

struct funenv480 {
    int32_t  (*fun) (  struct env480  ,    int32_t  ,    int32_t  );
    struct env480 env;
};

static  int32_t   reduce479 (    struct Range_401  iterable838 ,    int32_t  base840 ,   struct funenv480  fun842 ) {
    int32_t  x843 = (  base840 );
    struct RangeIter_403  it844 = ( (  into_dash_iter402 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref845 = ( (  next404 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_369_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_369_Just_t ) {
            struct funenv480  temp481 = (  fun842 );
            x843 = ( temp481.fun ( temp481.env ,  ( dref845 .stuff .Maybe_369_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp482;
    return (  temp482 );
}

static  int32_t   lam480 (   struct env480 env ,    int32_t  item953 ,    int32_t  x955 ) {
    return (  op_dash_mul89 ( (  x955 ) , ( env.base949 ) ) );
}

static  int32_t   pow478 (    int32_t  base949 ,    int32_t  p951 ) {
    struct env480 envinst480 = {
        .base949 =  base949 ,
    };
    return ( (  reduce479 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv480){ .fun = lam480, .env = envinst480 } ) ) );
}

static  struct Maybe_49   next477 (    struct IntStrIter_418 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1095 = ( (  pow478 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1096 = (  op_dash_div90 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    int32_t  upper_dash_mask1097 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1096 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1098 = (  op_dash_sub88 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast224 ) ( (  op_dash_add87 ( (  digit1098 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_386   next476 (    struct Zip_417 *  self694 ) {
    struct Zip_417  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next477 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next477 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next487 (    struct StrConcatIter_424 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next371 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next488 (    struct AppendIter_425 *  self802 ) {
    struct Maybe_49  dref803 = ( (  next339 ) ( ( & ( ( * (  self802 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next486 (    struct StrConcatIter_423 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next487 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next485 (    struct StrCaseIter_422 *  self1182 ) {
    struct StrCaseIter_422 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_422_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_422_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_422_StrCaseIter2_t ) {
        return ( (  next486 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_422_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next484 (    struct StrConcatIter_421 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next485 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next483 (    struct Zip_420 *  self694 ) {
    struct Zip_420  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next484 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next484 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env494 {
    uint32_t  base949;
    ;
};

struct funenv494 {
    uint32_t  (*fun) (  struct env494  ,    int32_t  ,    uint32_t  );
    struct env494 env;
};

static  uint32_t   reduce493 (    struct Range_401  iterable838 ,    uint32_t  base840 ,   struct funenv494  fun842 ) {
    uint32_t  x843 = (  base840 );
    struct RangeIter_403  it844 = ( (  into_dash_iter402 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref845 = ( (  next404 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_369_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_369_Just_t ) {
            struct funenv494  temp495 = (  fun842 );
            x843 = ( temp495.fun ( temp495.env ,  ( dref845 .stuff .Maybe_369_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp496;
    return (  temp496 );
}

static  uint32_t   lam494 (   struct env494 env ,    int32_t  item953 ,    uint32_t  x955 ) {
    return (  op_dash_mul94 ( (  x955 ) , ( env.base949 ) ) );
}

static  uint32_t   pow492 (    uint32_t  base949 ,    int32_t  p951 ) {
    struct env494 envinst494 = {
        .base949 =  base949 ,
    };
    return ( (  reduce493 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv494){ .fun = lam494, .env = envinst494 } ) ) );
}

static  struct Maybe_49   next491 (    struct IntStrIter_429 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1095 = ( (  pow492 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1096 = (  op_dash_div95 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    uint32_t  upper_dash_mask1097 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1096 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1098 = (  op_dash_sub93 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast226 ) ( (  op_dash_add92 ( (  digit1098 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next490 (    struct StrConcatIter_428 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next491 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next489 (    struct Zip_427 *  self694 ) {
    struct Zip_427  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next490 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next490 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next505 (    struct StrConcatIter_439 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next504 (    struct StrConcatIter_438 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next505 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next503 (    struct StrConcatIter_437 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next504 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next502 (    struct StrConcatIter_436 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next503 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next501 (    struct StrConcatIter_435 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next502 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next500 (    struct StrConcatIter_434 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next501 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next499 (    struct StrCaseIter_433 *  self1182 ) {
    struct StrCaseIter_433 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_433_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_433_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_433_StrCaseIter2_t ) {
        return ( (  next500 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_433_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next498 (    struct StrConcatIter_432 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next499 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next497 (    struct Zip_431 *  self694 ) {
    struct Zip_431  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next498 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next498 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next509 (    struct StrConcatIter_444 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next508 (    struct StrConcatIter_443 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next509 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next507 (    struct StrConcatIter_442 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next508 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next506 (    struct Zip_441 *  self694 ) {
    struct Zip_441  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next507 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next507 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env515 {
    size_t  base949;
    ;
};

struct funenv515 {
    size_t  (*fun) (  struct env515  ,    int32_t  ,    size_t  );
    struct env515 env;
};

static  size_t   reduce514 (    struct Range_401  iterable838 ,    size_t  base840 ,   struct funenv515  fun842 ) {
    size_t  x843 = (  base840 );
    struct RangeIter_403  it844 = ( (  into_dash_iter402 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref845 = ( (  next404 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_369_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_369_Just_t ) {
            struct funenv515  temp516 = (  fun842 );
            x843 = ( temp516.fun ( temp516.env ,  ( dref845 .stuff .Maybe_369_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp517;
    return (  temp517 );
}

static  size_t   lam515 (   struct env515 env ,    int32_t  item953 ,    size_t  x955 ) {
    return (  op_dash_mul100 ( (  x955 ) , ( env.base949 ) ) );
}

static  size_t   pow513 (    size_t  base949 ,    int32_t  p951 ) {
    struct env515 envinst515 = {
        .base949 =  base949 ,
    };
    return ( (  reduce514 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv515){ .fun = lam515, .env = envinst515 } ) ) );
}

static  struct Maybe_49   next512 (    struct IntStrIter_448 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1095 = ( (  pow513 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1096 = (  op_dash_div101 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    size_t  upper_dash_mask1097 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1096 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1098 = (  op_dash_sub99 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast227 ) ( (  op_dash_add98 ( (  digit1098 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next511 (    struct StrConcatIter_447 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next510 (    struct Zip_446 *  self694 ) {
    struct Zip_446  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next511 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next511 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_386   next518 (    struct Zip_450 *  self694 ) {
    struct Zip_450  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next509 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next509 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next521 (    struct StrConcatIter_454 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next509 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next520 (    struct StrConcatIter_453 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next521 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next519 (    struct Zip_452 *  self694 ) {
    struct Zip_452  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next520 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next520 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next525 (    struct StrConcatIter_459 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next511 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next524 (    struct StrCaseIter_458 *  self1182 ) {
    struct StrCaseIter_458 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_458_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_458_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_458_StrCaseIter2_t ) {
        return ( (  next525 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_458_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next523 (    struct StrConcatIter_457 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next367 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next524 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next522 (    struct Zip_456 *  self694 ) {
    struct Zip_456  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next523 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next523 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next527 (    struct StrConcatIter_462 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next525 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_386   next526 (    struct Zip_461 *  self694 ) {
    struct Zip_461  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next527 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref698 = ( (  next389 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref698.tag == Maybe_369_Just_t ) {
                ( (  next527 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next389 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_384   zip528 (    struct Slice_322  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_321  left_dash_it705 = ( (  into_dash_iter325 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_380   zip529 (    struct Slice_5  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_330  left_dash_it705 = ( (  into_dash_iter334 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_380   zip530 (    struct List_3  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_330  left_dash_it705 = ( (  into_dash_iter333 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_384   zip531 (    struct List_323  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_321  left_dash_it705 = ( (  into_dash_iter324 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_409   into_dash_iter533 (    struct Slice_161  self1457 ) {
    return ( (struct SliceIter_409) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_408   zip532 (    struct Slice_161  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_409  left_dash_it705 = ( (  into_dash_iter533 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_408) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_412   into_dash_iter535 (    struct Slice_413  self1457 ) {
    return ( (struct SliceIter_412) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_411   zip534 (    struct Slice_413  left702 ,    struct FromIter_381  right704 ) {
    struct SliceIter_412  left_dash_it705 = ( (  into_dash_iter535 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_415   zip536 (    struct Slice_5  left702 ,    struct Slice_5  right704 ) {
    struct SliceIter_330  left_dash_it705 = ( (  into_dash_iter334 ) ( (  left702 ) ) );
    struct SliceIter_330  right_dash_it706 = ( (  into_dash_iter334 ) ( (  right704 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct IntStrIter_418   into_dash_iter538 (    struct IntStrIter_418  self1091 ) {
    return (  self1091 );
}

static  struct Zip_417   zip537 (    struct IntStrIter_418  left702 ,    struct FromIter_381  right704 ) {
    struct IntStrIter_418  left_dash_it705 = ( (  into_dash_iter538 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_421   into_dash_iter540 (    struct StrConcatIter_421  self1157 ) {
    return (  self1157 );
}

static  struct Zip_420   zip539 (    struct StrConcatIter_421  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_421  left_dash_it705 = ( (  into_dash_iter540 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_428   into_dash_iter542 (    struct StrConcatIter_428  self1157 ) {
    return (  self1157 );
}

static  struct Zip_427   zip541 (    struct StrConcatIter_428  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_428  left_dash_it705 = ( (  into_dash_iter542 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_427) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_432   into_dash_iter544 (    struct StrConcatIter_432  self1157 ) {
    return (  self1157 );
}

static  struct Zip_431   zip543 (    struct StrConcatIter_432  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_432  left_dash_it705 = ( (  into_dash_iter544 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_431) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_442   into_dash_iter546 (    struct StrConcatIter_442  self1157 ) {
    return (  self1157 );
}

static  struct Zip_441   zip545 (    struct StrConcatIter_442  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_442  left_dash_it705 = ( (  into_dash_iter546 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_441) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_447   into_dash_iter548 (    struct StrConcatIter_447  self1157 ) {
    return (  self1157 );
}

static  struct Zip_446   zip547 (    struct StrConcatIter_447  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_447  left_dash_it705 = ( (  into_dash_iter548 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_446) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_444   into_dash_iter550 (    struct StrConcatIter_444  self1157 ) {
    return (  self1157 );
}

static  struct Zip_450   zip549 (    struct StrConcatIter_444  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_444  left_dash_it705 = ( (  into_dash_iter550 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_450) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_453   into_dash_iter552 (    struct StrConcatIter_453  self1157 ) {
    return (  self1157 );
}

static  struct Zip_452   zip551 (    struct StrConcatIter_453  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_453  left_dash_it705 = ( (  into_dash_iter552 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_452) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_457   into_dash_iter554 (    struct StrConcatIter_457  self1157 ) {
    return (  self1157 );
}

static  struct Zip_456   zip553 (    struct StrConcatIter_457  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_457  left_dash_it705 = ( (  into_dash_iter554 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_456) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_462   into_dash_iter556 (    struct StrConcatIter_462  self1157 ) {
    return (  self1157 );
}

static  struct Zip_461   zip555 (    struct StrConcatIter_462  left702 ,    struct FromIter_381  right704 ) {
    struct StrConcatIter_462  left_dash_it705 = ( (  into_dash_iter556 ) ( (  left702 ) ) );
    struct FromIter_381  right_dash_it706 = ( (  into_dash_iter406 ) ( (  right704 ) ) );
    return ( (struct Zip_461) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

struct TakeWhile_558 {
    struct Scanner_329  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_558   into_dash_iter557 (    struct TakeWhile_558  self741 ) {
    return (  self741 );
}

struct TakeWhile_560 {
    struct SliceIter_330  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_560   into_dash_iter559 (    struct TakeWhile_560  self741 ) {
    return (  self741 );
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

static  struct TakeWhile_562   into_dash_iter561 (    struct TakeWhile_562  self741 ) {
    return (  self741 );
}

struct TakeWhile_567 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_567   into_dash_iter566 (    struct TakeWhile_567  self741 ) {
    return (  self741 );
}

struct TakeWhile_569 {
    struct DropWhile_565  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_569   into_dash_iter568 (    struct TakeWhile_569  self741 ) {
    return (  self741 );
}

static  struct Maybe_49   next571 (    struct Scanner_329 *  self2432 ) {
    return ( (  next371 ) ( ( & ( ( * (  self2432 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next570 (    struct TakeWhile_558 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next571 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next572 (    struct TakeWhile_560 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next371 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next576 (    struct DropWhile_565 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next371 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next371 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next575 (    struct DropWhile_564 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next576 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next576 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next574 (    struct DropWhile_563 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next575 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next575 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next573 (    struct TakeWhile_562 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next574 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next577 (    struct TakeWhile_567 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next574 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next578 (    struct TakeWhile_569 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next576 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

struct TakeWhile_580 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next579 (    struct TakeWhile_580 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next574 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_558   take_dash_while581 (    struct Scanner_329 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_558) { .f_it = ( (  into_dash_iter328 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_560   take_dash_while582 (    struct List_3 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_560) { .f_it = ( (  into_dash_iter332 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_565   into_dash_iter584 (    struct DropWhile_565  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_569   take_dash_while583 (    struct DropWhile_565  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_569) { .f_it = ( (  into_dash_iter584 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_563   into_dash_iter586 (    struct DropWhile_563  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_562   take_dash_while585 (    struct DropWhile_563  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_562) { .f_it = ( (  into_dash_iter586 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_567   take_dash_while587 (    struct DropWhile_563  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_567) { .f_it = ( (  into_dash_iter586 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_580   take_dash_while588 (    struct DropWhile_563  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_580) { .f_it = ( (  into_dash_iter586 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_564   into_dash_iter589 (    struct DropWhile_564  self756 ) {
    return (  self756 );
}

static  struct SliceIter_330   into_dash_iter591 (    struct DynStr_136  self1607 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1607 ) .f_contents ) ) );
}

static  struct DropWhile_565   drop_dash_while590 (    struct DynStr_136  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_565) { .f_it = ( (  into_dash_iter591 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_564   drop_dash_while592 (    struct DropWhile_565  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_564) { .f_it = ( (  into_dash_iter584 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_563   drop_dash_while593 (    struct DropWhile_564  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_563) { .f_it = ( (  into_dash_iter589 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_425   append594 (    enum EmptyIter_337  it786 ,    char  e788 ) {
    return ( (struct AppendIter_425) { .f_it = ( (  into_dash_iter338 ) ( (  it786 ) ) ) , .f_elem = (  e788 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_425   cons595 (    enum EmptyIter_337  it791 ,    char  e793 ) {
    return ( (  append594 ) ( (  it791 ) ,  (  e793 ) ) );
}

static  struct AppendIter_425   single596 (    char  e796 ) {
    return ( (  cons595 ) ( ( (  nil336 ) ( ) ) ,  (  e796 ) ) );
}

static  struct AppendIter_425   into_dash_iter597 (    struct AppendIter_425  self799 ) {
    return (  self799 );
}

struct Key_602 {
    enum {
        Key_602_Escape_t,
        Key_602_Enter_t,
        Key_602_Tab_t,
        Key_602_Backspace_t,
        Key_602_Char_t,
        Key_602_Ctrl_t,
        Key_602_Up_t,
        Key_602_Down_t,
        Key_602_Left_t,
        Key_602_Right_t,
        Key_602_Home_t,
        Key_602_End_t,
        Key_602_PageUp_t,
        Key_602_PageDown_t,
        Key_602_Delete_t,
        Key_602_Insert_t,
        Key_602_F1_t,
        Key_602_F2_t,
        Key_602_F3_t,
        Key_602_F4_t,
        Key_602_F5_t,
        Key_602_F6_t,
        Key_602_F7_t,
        Key_602_F8_t,
        Key_602_F9_t,
        Key_602_F10_t,
        Key_602_F11_t,
        Key_602_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_602_Char_s;
        struct {
            char  field0;
        } Key_602_Ctrl_s;
    } stuff;
};

static struct Key_602 Key_602_Char (  char  field0 ) {
    return ( struct Key_602 ) { .tag = Key_602_Char_t, .stuff = { .Key_602_Char_s = { .field0 = field0 } } };
};

static struct Key_602 Key_602_Ctrl (  char  field0 ) {
    return ( struct Key_602 ) { .tag = Key_602_Ctrl_t, .stuff = { .Key_602_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_603 {
    enum MouseButton_149  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_601 {
    enum {
        InputEvent_601_Key_t,
        InputEvent_601_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_602  field0;
        } InputEvent_601_Key_s;
        struct {
            struct MouseEvent_603  field0;
        } InputEvent_601_Mouse_s;
    } stuff;
};

static struct InputEvent_601 InputEvent_601_Key (  struct Key_602  field0 ) {
    return ( struct InputEvent_601 ) { .tag = InputEvent_601_Key_t, .stuff = { .InputEvent_601_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_601 InputEvent_601_Mouse (  struct MouseEvent_603  field0 ) {
    return ( struct InputEvent_601 ) { .tag = InputEvent_601_Mouse_t, .stuff = { .InputEvent_601_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_600 {
    enum {
        Maybe_600_None_t,
        Maybe_600_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_601  field0;
        } Maybe_600_Just_s;
    } stuff;
};

static struct Maybe_600 Maybe_600_Just (  struct InputEvent_601  field0 ) {
    return ( struct Maybe_600 ) { .tag = Maybe_600_Just_t, .stuff = { .Maybe_600_Just_s = { .field0 = field0 } } };
};

struct FunIter_599 {
    struct Maybe_600 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_599   into_dash_iter598 (    struct FunIter_599  self808 ) {
    return (  self808 );
}

static  struct Maybe_600   next604 (    struct FunIter_599 *  self811 ) {
    if ( ( ( * (  self811 ) ) .f_finished ) ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    struct Maybe_600  dref812 = ( ( ( * (  self811 ) ) .f_fun ) ( ) );
    if ( dref812.tag == Maybe_600_Just_t ) {
        return ( ( Maybe_600_Just ) ( ( dref812 .stuff .Maybe_600_Just_s .field0 ) ) );
    }
    else if ( dref812.tag == Maybe_600_None_t ) {
        (*  self811 ) .f_finished = ( true );
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
}

static  struct FunIter_599   from_dash_function605 (    struct Maybe_600 (*  fun816 )(  ) ) {
    return ( (struct FunIter_599) { .f_fun = (  fun816 ) , .f_finished = ( false ) } );
}

struct env607 {
    ;
    ;
    struct Slice_322  new_dash_slice1845;
};

struct funenv607 {
    enum Unit_13  (*fun) (  struct env607  ,    struct Tuple2_392  );
    struct env607 env;
};

static  enum Unit_13   for_dash_each606 (    struct Zip_384  iterable819 ,   struct funenv607  fun821 ) {
    struct Zip_384  temp608 = ( (  into_dash_iter398 ) ( (  iterable819 ) ) );
    struct Zip_384 *  it822 = ( &temp608 );
    while ( ( true ) ) {
        struct Maybe_391  dref823 = ( (  next393 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_391_Just_t ) {
            struct funenv607  temp609 = (  fun821 );
            ( temp609.fun ( temp609.env ,  ( dref823 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env611 {
    struct env346 envinst346;
    struct List_3 *  list1892;
};

struct funenv611 {
    enum Unit_13  (*fun) (  struct env611  ,    char  );
    struct env611 env;
};

static  enum Unit_13   for_dash_each610 (    struct DynStr_136  iterable819 ,   struct funenv611  fun821 ) {
    struct SliceIter_330  temp612 = ( (  into_dash_iter591 ) ( (  iterable819 ) ) );
    struct SliceIter_330 *  it822 = ( &temp612 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv611  temp613 = (  fun821 );
            ( temp613.fun ( temp613.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env615 {
    ;
    ;
    struct Slice_5  new_dash_slice1845;
};

struct funenv615 {
    enum Unit_13  (*fun) (  struct env615  ,    struct Tuple2_387  );
    struct env615 env;
};

static  enum Unit_13   for_dash_each614 (    struct Zip_380  iterable819 ,   struct funenv615  fun821 ) {
    struct Zip_380  temp616 = ( (  into_dash_iter396 ) ( (  iterable819 ) ) );
    struct Zip_380 *  it822 = ( &temp616 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next388 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv615  temp617 = (  fun821 );
            ( temp617.fun ( temp617.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env621 {
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1840;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1839;
    ;
    ;
};

struct funenv621 {
    enum Unit_13  (*fun) (  struct env621  ,    struct List_323 *  );
    struct env621 env;
};

struct env620 {
    ;
    ;
    ;
    ;
    ;
    struct env621 envinst621;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    struct List_323 *  ,    struct List_3  );
    struct env620 env;
};

struct env619 {
    struct env620 envinst620;
    struct List_323 *  list1892;
};

struct funenv619 {
    enum Unit_13  (*fun) (  struct env619  ,    struct List_3  );
    struct env619 env;
};

static  enum Unit_13   for_dash_each618 (    struct Map_341  iterable819 ,   struct funenv619  fun821 ) {
    struct Map_341  temp622 = ( (  into_dash_iter340 ) ( (  iterable819 ) ) );
    struct Map_341 *  it822 = ( &temp622 );
    while ( ( true ) ) {
        struct Maybe_355  dref823 = ( (  next354 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_355_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_355_Just_t ) {
            struct funenv619  temp623 = (  fun821 );
            ( temp623.fun ( temp623.env ,  ( dref823 .stuff .Maybe_355_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_626 {
    struct List_3  f_chars;
};

struct env625 {
    struct env346 envinst346;
    struct StrBuilder_626 *  builder2131;
};

struct funenv625 {
    enum Unit_13  (*fun) (  struct env625  ,    char  );
    struct env625 env;
};

static  struct ConstStrIter_350   into_dash_iter628 (    struct ConstStrIter_350  self1070 ) {
    return (  self1070 );
}

static  enum Unit_13   for_dash_each624 (    struct ConstStrIter_350  iterable819 ,   struct funenv625  fun821 ) {
    struct ConstStrIter_350  temp627 = ( (  into_dash_iter628 ) ( (  iterable819 ) ) );
    struct ConstStrIter_350 *  it822 = ( &temp627 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next367 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv625  temp629 = (  fun821 );
            ( temp629.fun ( temp629.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_632 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env631 {
    ;
    struct Slice_632  s1540;
    ;
    struct Cell_58 (*  fun1542 )(    struct Cell_58  );
    ;
};

struct funenv631 {
    enum Unit_13  (*fun) (  struct env631  ,    int32_t  );
    struct env631 env;
};

static  enum Unit_13   for_dash_each630 (    struct Range_401  iterable819 ,   struct funenv631  fun821 ) {
    struct RangeIter_403  temp633 = ( (  into_dash_iter402 ) ( (  iterable819 ) ) );
    struct RangeIter_403 *  it822 = ( &temp633 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next404 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv631  temp634 = (  fun821 );
            ( temp634.fun ( temp634.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env636 {
    ;
    struct Slice_632  s1540;
    ;
    struct Cell_58 (*  fun1542 )(    struct Cell_58  );
    ;
};

struct funenv636 {
    enum Unit_13  (*fun) (  struct env636  ,    int32_t  );
    struct env636 env;
};

static  enum Unit_13   for_dash_each635 (    struct Range_401  iterable819 ,   struct funenv636  fun821 ) {
    struct RangeIter_403  temp637 = ( (  into_dash_iter402 ) ( (  iterable819 ) ) );
    struct RangeIter_403 *  it822 = ( &temp637 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next404 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv636  temp638 = (  fun821 );
            ( temp638.fun ( temp638.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env640 {
    ;
    struct Scanner_329 *  it925;
};

struct funenv640 {
    struct Maybe_49  (*fun) (  struct env640  ,    int32_t  );
    struct env640 env;
};

static  enum Unit_13   for_dash_each639 (    struct Range_401  iterable819 ,   struct funenv640  fun821 ) {
    struct RangeIter_403  temp641 = ( (  into_dash_iter402 ) ( (  iterable819 ) ) );
    struct RangeIter_403 *  it822 = ( &temp641 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next404 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv640  temp642 = (  fun821 );
            ( temp642.fun ( temp642.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env644 {
    struct env346 envinst346;
    struct List_3 *  list1892;
};

struct funenv644 {
    enum Unit_13  (*fun) (  struct env644  ,    char  );
    struct env644 env;
};

static  enum Unit_13   for_dash_each643 (    struct Slice_5  iterable819 ,   struct funenv644  fun821 ) {
    struct SliceIter_330  temp645 = ( (  into_dash_iter334 ) ( (  iterable819 ) ) );
    struct SliceIter_330 *  it822 = ( &temp645 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv644  temp646 = (  fun821 );
            ( temp646.fun ( temp646.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env648 {
    struct env346 envinst346;
    struct List_3 *  list1892;
};

struct funenv648 {
    enum Unit_13  (*fun) (  struct env648  ,    char  );
    struct env648 env;
};

static  enum Unit_13   for_dash_each647 (    struct List_3 *  iterable819 ,   struct funenv648  fun821 ) {
    struct SliceIter_330  temp649 = ( (  into_dash_iter332 ) ( (  iterable819 ) ) );
    struct SliceIter_330 *  it822 = ( &temp649 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv648  temp650 = (  fun821 );
            ( temp650.fun ( temp650.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env652 {
    struct Slice_5  dest1488;
    ;
    ;
};

struct funenv652 {
    enum Unit_13  (*fun) (  struct env652  ,    struct Tuple2_387  );
    struct env652 env;
};

static  enum Unit_13   for_dash_each651 (    struct Zip_380  iterable819 ,   struct funenv652  fun821 ) {
    struct Zip_380  temp653 = ( (  into_dash_iter396 ) ( (  iterable819 ) ) );
    struct Zip_380 *  it822 = ( &temp653 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next388 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv652  temp654 = (  fun821 );
            ( temp654.fun ( temp654.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env656 {
    struct List_3 *  list1864;
    ;
    ;
    ;
    ;
};

struct funenv656 {
    enum Unit_13  (*fun) (  struct env656  ,    struct Tuple2_387  );
    struct env656 env;
};

static  enum Unit_13   for_dash_each655 (    struct Drop_379  iterable819 ,   struct funenv656  fun821 ) {
    struct Drop_379  temp657 = ( (  into_dash_iter378 ) ( (  iterable819 ) ) );
    struct Drop_379 *  it822 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next385 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv656  temp658 = (  fun821 );
            ( temp658.fun ( temp658.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env660 {
    struct Slice_322  dest1488;
    ;
    ;
};

struct funenv660 {
    enum Unit_13  (*fun) (  struct env660  ,    struct Tuple2_392  );
    struct env660 env;
};

static  enum Unit_13   for_dash_each659 (    struct Zip_384  iterable819 ,   struct funenv660  fun821 ) {
    struct Zip_384  temp661 = ( (  into_dash_iter398 ) ( (  iterable819 ) ) );
    struct Zip_384 *  it822 = ( &temp661 );
    while ( ( true ) ) {
        struct Maybe_391  dref823 = ( (  next393 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_391_Just_t ) {
            struct funenv660  temp662 = (  fun821 );
            ( temp662.fun ( temp662.env ,  ( dref823 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env664 {
    struct List_323 *  list1864;
    ;
    ;
    ;
    ;
};

struct funenv664 {
    enum Unit_13  (*fun) (  struct env664  ,    struct Tuple2_392  );
    struct env664 env;
};

static  enum Unit_13   for_dash_each663 (    struct Drop_383  iterable819 ,   struct funenv664  fun821 ) {
    struct Drop_383  temp665 = ( (  into_dash_iter382 ) ( (  iterable819 ) ) );
    struct Drop_383 *  it822 = ( &temp665 );
    while ( ( true ) ) {
        struct Maybe_391  dref823 = ( (  next390 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_391_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_391_Just_t ) {
            struct funenv664  temp666 = (  fun821 );
            ( temp666.fun ( temp666.env ,  ( dref823 .stuff .Maybe_391_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env668 {
    ;
    enum CAllocator_4  al2961;
};

struct funenv668 {
    enum Unit_13  (*fun) (  struct env668  ,    struct Action_152  );
    struct env668 env;
};

static  enum Unit_13   for_dash_each667 (    struct Slice_161  iterable819 ,   struct funenv668  fun821 ) {
    struct SliceIter_409  temp669 = ( (  into_dash_iter533 ) ( (  iterable819 ) ) );
    struct SliceIter_409 *  it822 = ( &temp669 );
    while ( ( true ) ) {
        struct Maybe_466  dref823 = ( (  next467 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_466_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_466_Just_t ) {
            struct funenv668  temp670 = (  fun821 );
            ( temp670.fun ( temp670.env ,  ( dref823 .stuff .Maybe_466_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env672 {
    ;
    ;
    struct Slice_161  new_dash_slice1845;
};

struct funenv672 {
    enum Unit_13  (*fun) (  struct env672  ,    struct Tuple2_465  );
    struct env672 env;
};

static  enum Unit_13   for_dash_each671 (    struct Zip_408  iterable819 ,   struct funenv672  fun821 ) {
    struct Zip_408  temp673 = ( (  into_dash_iter407 ) ( (  iterable819 ) ) );
    struct Zip_408 *  it822 = ( &temp673 );
    while ( ( true ) ) {
        struct Maybe_464  dref823 = ( (  next463 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_464_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_464_Just_t ) {
            struct funenv672  temp674 = (  fun821 );
            ( temp674.fun ( temp674.env ,  ( dref823 .stuff .Maybe_464_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env676 {
    ;
    ;
    struct Slice_413  new_dash_slice1845;
};

struct funenv676 {
    enum Unit_13  (*fun) (  struct env676  ,    struct Tuple2_470  );
    struct env676 env;
};

static  enum Unit_13   for_dash_each675 (    struct Zip_411  iterable819 ,   struct funenv676  fun821 ) {
    struct Zip_411  temp677 = ( (  into_dash_iter410 ) ( (  iterable819 ) ) );
    struct Zip_411 *  it822 = ( &temp677 );
    while ( ( true ) ) {
        struct Maybe_469  dref823 = ( (  next468 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_469_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_469_Just_t ) {
            struct funenv676  temp678 = (  fun821 );
            ( temp678.fun ( temp678.env ,  ( dref823 .stuff .Maybe_469_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env680 {
    enum CAllocator_4  al2981;
    ;
};

struct funenv680 {
    enum Unit_13  (*fun) (  struct env680  ,    struct Either_182  );
    struct env680 env;
};

static  enum Unit_13   for_dash_each679 (    struct Slice_413  iterable819 ,   struct funenv680  fun821 ) {
    struct SliceIter_412  temp681 = ( (  into_dash_iter535 ) ( (  iterable819 ) ) );
    struct SliceIter_412 *  it822 = ( &temp681 );
    while ( ( true ) ) {
        struct Maybe_471  dref823 = ( (  next472 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_471_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_471_Just_t ) {
            struct funenv680  temp682 = (  fun821 );
            ( temp682.fun ( temp682.env ,  ( dref823 .stuff .Maybe_471_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env684 {
    struct env346 envinst346;
    struct StrBuilder_626 *  builder2131;
};

struct funenv684 {
    enum Unit_13  (*fun) (  struct env684  ,    char  );
    struct env684 env;
};

static  enum Unit_13   for_dash_each683 (    struct AppendIter_425  iterable819 ,   struct funenv684  fun821 ) {
    struct AppendIter_425  temp685 = ( (  into_dash_iter597 ) ( (  iterable819 ) ) );
    struct AppendIter_425 *  it822 = ( &temp685 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next488 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv684  temp686 = (  fun821 );
            ( temp686.fun ( temp686.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env688 {
    struct env346 envinst346;
    struct List_3 *  list1892;
};

struct funenv688 {
    enum Unit_13  (*fun) (  struct env688  ,    char  );
    struct env688 env;
};

static  enum Unit_13   for_dash_each687 (    struct TakeWhile_560  iterable819 ,   struct funenv688  fun821 ) {
    struct TakeWhile_560  temp689 = ( (  into_dash_iter559 ) ( (  iterable819 ) ) );
    struct TakeWhile_560 *  it822 = ( &temp689 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next572 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv688  temp690 = (  fun821 );
            ( temp690.fun ( temp690.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env693 {
    ;
    struct env346 envinst346;
    ;
};

struct funenv693 {
    enum Unit_13  (*fun) (  struct env693  ,    struct StrBuilder_626 *  ,    char  );
    struct env693 env;
};

struct env692 {
    struct StrBuilder_626 *  sb3234;
    struct env693 envinst693;
};

struct funenv692 {
    enum Unit_13  (*fun) (  struct env692  ,    char  );
    struct env692 env;
};

static  enum Unit_13   for_dash_each691 (    struct List_3  iterable819 ,   struct funenv692  fun821 ) {
    struct SliceIter_330  temp694 = ( (  into_dash_iter333 ) ( (  iterable819 ) ) );
    struct SliceIter_330 *  it822 = ( &temp694 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next371 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv692  temp695 = (  fun821 );
            ( temp695.fun ( temp695.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env697 {
    struct env346 envinst346;
    struct StrBuilder_626 *  builder2131;
};

struct funenv697 {
    enum Unit_13  (*fun) (  struct env697  ,    char  );
    struct env697 env;
};

static  enum Unit_13   for_dash_each696 (    struct TakeWhile_562  iterable819 ,   struct funenv697  fun821 ) {
    struct TakeWhile_562  temp698 = ( (  into_dash_iter561 ) ( (  iterable819 ) ) );
    struct TakeWhile_562 *  it822 = ( &temp698 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next573 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv697  temp699 = (  fun821 );
            ( temp699.fun ( temp699.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env701 {
    struct env346 envinst346;
    struct StrBuilder_626 *  builder2131;
};

struct funenv701 {
    enum Unit_13  (*fun) (  struct env701  ,    char  );
    struct env701 env;
};

static  enum Unit_13   for_dash_each700 (    struct TakeWhile_567  iterable819 ,   struct funenv701  fun821 ) {
    struct TakeWhile_567  temp702 = ( (  into_dash_iter566 ) ( (  iterable819 ) ) );
    struct TakeWhile_567 *  it822 = ( &temp702 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next577 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv701  temp703 = (  fun821 );
            ( temp703.fun ( temp703.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_705 {
    struct Slice_322  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_705   into_dash_iter707 (    struct SliceAddressIter_705  self1478 ) {
    return (  self1478 );
}

struct Maybe_708 {
    enum {
        Maybe_708_None_t,
        Maybe_708_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_708_Just_s;
    } stuff;
};

static struct Maybe_708 Maybe_708_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_708 ) { .tag = Maybe_708_Just_t, .stuff = { .Maybe_708_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_708   next709 (    struct SliceAddressIter_705 *  self1481 ) {
    size_t  off1482 = ( ( * (  self1481 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1481 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_708) { .tag = Maybe_708_None_t } );
    }
    struct List_3 *  elem1483 = ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1481 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1482 ) ) ) ) );
    (*  self1481 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_708_Just ) ( (  elem1483 ) ) );
}

static  enum Unit_13   for_dash_each704 (    struct SliceAddressIter_705  iterable819 ,    enum Unit_13 (*  fun821 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_705  temp706 = ( (  into_dash_iter707 ) ( (  iterable819 ) ) );
    struct SliceAddressIter_705 *  it822 = ( &temp706 );
    while ( ( true ) ) {
        struct Maybe_708  dref823 = ( (  next709 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_708_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_708_Just_t ) {
            ( (  fun821 ) ( ( dref823 .stuff .Maybe_708_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env711 {
    ;
    struct Slice_632  s1540;
    ;
    struct Cell_58 (*  fun1542 )(    struct Cell_58  );
    ;
};

struct funenv711 {
    enum Unit_13  (*fun) (  struct env711  ,    int32_t  );
    struct env711 env;
};

static  enum Unit_13   for_dash_each710 (    struct Range_401  iterable819 ,   struct funenv711  fun821 ) {
    struct RangeIter_403  temp712 = ( (  into_dash_iter402 ) ( (  iterable819 ) ) );
    struct RangeIter_403 *  it822 = ( &temp712 );
    while ( ( true ) ) {
        struct Maybe_369  dref823 = ( (  next404 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_369_Just_t ) {
            struct funenv711  temp713 = (  fun821 );
            ( temp713.fun ( temp713.env ,  ( dref823 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_718 {
    ColorPalette_718_Palette8,
    ColorPalette_718_Palette16,
    ColorPalette_718_Palette256,
    ColorPalette_718_PaletteRGB,
};

struct Tui_717 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_718  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_141  f_orig_dash_termios;
};

struct Screen_716 {
    enum CAllocator_4  f_al;
    struct Tui_717 *  f_tui;
    struct Slice_632  f_current;
    struct Slice_632  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_59  f_default_dash_fg;
    struct Color_59  f_default_dash_bg;
};

struct env715 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv715 {
    enum Unit_13  (*fun) (  struct env715  ,    struct Tuple2_387  );
    struct env715 env;
};

static  enum Unit_13   for_dash_each714 (    struct Zip_417  iterable819 ,   struct funenv715  fun821 ) {
    struct Zip_417  temp719 = ( (  into_dash_iter416 ) ( (  iterable819 ) ) );
    struct Zip_417 *  it822 = ( &temp719 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next476 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv715  temp720 = (  fun821 );
            ( temp720.fun ( temp720.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env722 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv722 {
    enum Unit_13  (*fun) (  struct env722  ,    struct Tuple2_387  );
    struct env722 env;
};

static  enum Unit_13   for_dash_each721 (    struct Zip_420  iterable819 ,   struct funenv722  fun821 ) {
    struct Zip_420  temp723 = ( (  into_dash_iter419 ) ( (  iterable819 ) ) );
    struct Zip_420 *  it822 = ( &temp723 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next483 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv722  temp724 = (  fun821 );
            ( temp724.fun ( temp724.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env726 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv726 {
    enum Unit_13  (*fun) (  struct env726  ,    struct Tuple2_387  );
    struct env726 env;
};

static  enum Unit_13   for_dash_each725 (    struct Zip_427  iterable819 ,   struct funenv726  fun821 ) {
    struct Zip_427  temp727 = ( (  into_dash_iter426 ) ( (  iterable819 ) ) );
    struct Zip_427 *  it822 = ( &temp727 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next489 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv726  temp728 = (  fun821 );
            ( temp728.fun ( temp728.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env730 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv730 {
    enum Unit_13  (*fun) (  struct env730  ,    struct Tuple2_387  );
    struct env730 env;
};

static  enum Unit_13   for_dash_each729 (    struct Zip_431  iterable819 ,   struct funenv730  fun821 ) {
    struct Zip_431  temp731 = ( (  into_dash_iter430 ) ( (  iterable819 ) ) );
    struct Zip_431 *  it822 = ( &temp731 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next497 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv730  temp732 = (  fun821 );
            ( temp732.fun ( temp732.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env734 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv734 {
    enum Unit_13  (*fun) (  struct env734  ,    struct Tuple2_387  );
    struct env734 env;
};

static  enum Unit_13   for_dash_each733 (    struct Zip_441  iterable819 ,   struct funenv734  fun821 ) {
    struct Zip_441  temp735 = ( (  into_dash_iter440 ) ( (  iterable819 ) ) );
    struct Zip_441 *  it822 = ( &temp735 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next506 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv734  temp736 = (  fun821 );
            ( temp736.fun ( temp736.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env738 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv738 {
    enum Unit_13  (*fun) (  struct env738  ,    struct Tuple2_387  );
    struct env738 env;
};

static  enum Unit_13   for_dash_each737 (    struct Zip_446  iterable819 ,   struct funenv738  fun821 ) {
    struct Zip_446  temp739 = ( (  into_dash_iter445 ) ( (  iterable819 ) ) );
    struct Zip_446 *  it822 = ( &temp739 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next510 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv738  temp740 = (  fun821 );
            ( temp740.fun ( temp740.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env742 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv742 {
    enum Unit_13  (*fun) (  struct env742  ,    struct Tuple2_387  );
    struct env742 env;
};

static  enum Unit_13   for_dash_each741 (    struct Zip_450  iterable819 ,   struct funenv742  fun821 ) {
    struct Zip_450  temp743 = ( (  into_dash_iter449 ) ( (  iterable819 ) ) );
    struct Zip_450 *  it822 = ( &temp743 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next518 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv742  temp744 = (  fun821 );
            ( temp744.fun ( temp744.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env746 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv746 {
    enum Unit_13  (*fun) (  struct env746  ,    struct Tuple2_387  );
    struct env746 env;
};

static  enum Unit_13   for_dash_each745 (    struct Zip_452  iterable819 ,   struct funenv746  fun821 ) {
    struct Zip_452  temp747 = ( (  into_dash_iter451 ) ( (  iterable819 ) ) );
    struct Zip_452 *  it822 = ( &temp747 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next519 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv746  temp748 = (  fun821 );
            ( temp748.fun ( temp748.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env750 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv750 {
    enum Unit_13  (*fun) (  struct env750  ,    struct Tuple2_387  );
    struct env750 env;
};

static  enum Unit_13   for_dash_each749 (    struct Zip_420  iterable819 ,   struct funenv750  fun821 ) {
    struct Zip_420  temp751 = ( (  into_dash_iter419 ) ( (  iterable819 ) ) );
    struct Zip_420 *  it822 = ( &temp751 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next483 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv750  temp752 = (  fun821 );
            ( temp752.fun ( temp752.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env754 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv754 {
    enum Unit_13  (*fun) (  struct env754  ,    struct Tuple2_387  );
    struct env754 env;
};

static  enum Unit_13   for_dash_each753 (    struct Zip_420  iterable819 ,   struct funenv754  fun821 ) {
    struct Zip_420  temp755 = ( (  into_dash_iter419 ) ( (  iterable819 ) ) );
    struct Zip_420 *  it822 = ( &temp755 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next483 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv754  temp756 = (  fun821 );
            ( temp756.fun ( temp756.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env758 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv758 {
    enum Unit_13  (*fun) (  struct env758  ,    struct Tuple2_387  );
    struct env758 env;
};

static  enum Unit_13   for_dash_each757 (    struct Zip_456  iterable819 ,   struct funenv758  fun821 ) {
    struct Zip_456  temp759 = ( (  into_dash_iter455 ) ( (  iterable819 ) ) );
    struct Zip_456 *  it822 = ( &temp759 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next522 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv758  temp760 = (  fun821 );
            ( temp760.fun ( temp760.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env762 {
    int32_t  x2664;
    ;
    ;
    int32_t  y2661;
    struct Screen_716 *  screen2655;
};

struct funenv762 {
    enum Unit_13  (*fun) (  struct env762  ,    struct Tuple2_387  );
    struct env762 env;
};

static  enum Unit_13   for_dash_each761 (    struct Zip_461  iterable819 ,   struct funenv762  fun821 ) {
    struct Zip_461  temp763 = ( (  into_dash_iter460 ) ( (  iterable819 ) ) );
    struct Zip_461 *  it822 = ( &temp763 );
    while ( ( true ) ) {
        struct Maybe_386  dref823 = ( (  next526 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_386_Just_t ) {
            struct funenv762  temp764 = (  fun821 );
            ( temp764.fun ( temp764.env ,  ( dref823 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_766 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_766   into_dash_iter767 (    struct SmolArray_103  self1689 ) {
    return ( (struct SmolArrayIter_766) { .f_backing = (  self1689 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_773 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_773 StrConcat_773_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_773 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_772 {
    struct StrConcat_773  field0;
    char  field1;
};

static struct StrConcat_772 StrConcat_772_StrConcat (  struct StrConcat_773  field0 ,  char  field1 ) {
    return ( struct StrConcat_772 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_776 {
    const char*  field0;
    struct StrConcat_772  field1;
};

static struct StrConcat_776 StrConcat_776_StrConcat (  const char*  field0 ,  struct StrConcat_772  field1 ) {
    return ( struct StrConcat_776 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_775 {
    struct StrConcat_776  field0;
    char  field1;
};

static struct StrConcat_775 StrConcat_775_StrConcat (  struct StrConcat_776  field0 ,  char  field1 ) {
    return ( struct StrConcat_775 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str780 (    int32_t  self1106 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1106 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str779 (    struct StrConcat_773  self1169 ) {
    struct StrConcat_773  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str780 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str778 (    struct StrConcat_772  self1169 ) {
    struct StrConcat_772  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str779 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str777 (    struct StrConcat_776  self1169 ) {
    struct StrConcat_776  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str778 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str774 (    struct StrConcat_775  self1169 ) {
    struct StrConcat_775  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str777 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic771 (    struct StrConcat_772  errmsg1346 ) {
    ( (  print_dash_str774 ) ( ( ( StrConcat_775_StrConcat ) ( ( ( StrConcat_776_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr770 (    struct Array_104 *  arr1651 ,    size_t  i1654 ) {
    if ( ( (  cmp9 ( (  i1654 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1654 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1654 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1655 = ( ( (  cast_dash_ptr237 ) ( (  arr1651 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1655 ) ,  ( (int64_t ) (  i1654 ) ) ) );
}

static  uint32_t   get769 (    struct Array_104 *  arr1658 ,    size_t  i1661 ) {
    return ( * ( (  get_dash_ptr770 ) ( (  arr1658 ) ,  (  i1661 ) ) ) );
}

static  struct Maybe_366   next768 (    struct SmolArrayIter_766 *  self1696 ) {
    if ( (  cmp9 ( ( ( * (  self1696 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1698 = ( (  get769 ) ( ( & ( ( ( * (  self1696 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1696 ) ) .f_cur ) ) );
    (*  self1696 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1696 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1698 ) ) );
}

static  uint32_t   reduce765 (    struct SmolArray_103  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_766  it844 = ( (  into_dash_iter767 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref845 = ( (  next768 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_366_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_366_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_366_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp781;
    return (  temp781 );
}

struct SmolArrayIter_783 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_783   into_dash_iter784 (    struct SmolArray_109  self1689 ) {
    return ( (struct SmolArrayIter_783) { .f_backing = (  self1689 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr787 (    struct Array_110 *  arr1651 ,    size_t  i1654 ) {
    if ( ( (  cmp9 ( (  i1654 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1654 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1654 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1655 = ( ( (  cast_dash_ptr238 ) ( (  arr1651 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1655 ) ,  ( (int64_t ) (  i1654 ) ) ) );
}

static  uint32_t   get786 (    struct Array_110 *  arr1658 ,    size_t  i1661 ) {
    return ( * ( (  get_dash_ptr787 ) ( (  arr1658 ) ,  (  i1661 ) ) ) );
}

static  struct Maybe_366   next785 (    struct SmolArrayIter_783 *  self1696 ) {
    if ( (  cmp9 ( ( ( * (  self1696 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1698 = ( (  get786 ) ( ( & ( ( ( * (  self1696 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1696 ) ) .f_cur ) ) );
    (*  self1696 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1696 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1698 ) ) );
}

static  uint32_t   reduce782 (    struct SmolArray_109  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_783  it844 = ( (  into_dash_iter784 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref845 = ( (  next785 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_366_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_366_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_366_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp788;
    return (  temp788 );
}

struct SmolArrayIter_790 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_790   into_dash_iter791 (    struct SmolArray_106  self1689 ) {
    return ( (struct SmolArrayIter_790) { .f_backing = (  self1689 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr794 (    struct Array_107 *  arr1651 ,    size_t  i1654 ) {
    if ( ( (  cmp9 ( (  i1654 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1654 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1654 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1655 = ( ( (  cast_dash_ptr241 ) ( (  arr1651 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1655 ) ,  ( (int64_t ) (  i1654 ) ) ) );
}

static  uint32_t   get793 (    struct Array_107 *  arr1658 ,    size_t  i1661 ) {
    return ( * ( (  get_dash_ptr794 ) ( (  arr1658 ) ,  (  i1661 ) ) ) );
}

static  struct Maybe_366   next792 (    struct SmolArrayIter_790 *  self1696 ) {
    if ( (  cmp9 ( ( ( * (  self1696 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1698 = ( (  get793 ) ( ( & ( ( ( * (  self1696 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1696 ) ) .f_cur ) ) );
    (*  self1696 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1696 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1698 ) ) );
}

static  uint32_t   reduce789 (    struct SmolArray_106  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_790  it844 = ( (  into_dash_iter791 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref845 = ( (  next792 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_366_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_366_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_366_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp795;
    return (  temp795 );
}

static  uint32_t   reduce796 (    struct Map_349  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct Map_349  it844 = ( (  into_dash_iter348 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref845 = ( (  next365 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_366_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_366_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_366_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp797;
    return (  temp797 );
}

static  size_t   reduce798 (    struct TakeWhile_558  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_558  it844 = ( (  into_dash_iter557 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next570 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp799;
    return (  temp799 );
}

struct Maybe_801 {
    enum {
        Maybe_801_None_t,
        Maybe_801_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_801_Just_s;
    } stuff;
};

static struct Maybe_801 Maybe_801_Just (  int64_t  field0 ) {
    return ( struct Maybe_801 ) { .tag = Maybe_801_Just_t, .stuff = { .Maybe_801_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_801   reduce800 (    struct TakeWhile_558  iterable838 ,    struct Maybe_801  base840 ,    struct Maybe_801 (*  fun842 )(    char  ,    struct Maybe_801  ) ) {
    struct Maybe_801  x843 = (  base840 );
    struct TakeWhile_558  it844 = ( (  into_dash_iter557 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next570 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_801  temp802;
    return (  temp802 );
}

static  int32_t   reduce803 (    struct Map_352  iterable838 ,    int32_t  base840 ,    int32_t (*  fun842 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x843 = (  base840 );
    struct Map_352  it844 = ( (  into_dash_iter351 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref845 = ( (  next368 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_369_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_369_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_369_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp804;
    return (  temp804 );
}

struct env806 {
    bool (*  fun871 )(    char  );
};

struct funenv806 {
    bool  (*fun) (  struct env806  ,    char  ,    bool  );
    struct env806 env;
};

static  bool   reduce805 (    struct List_3 *  iterable838 ,    bool  base840 ,   struct funenv806  fun842 ) {
    bool  x843 = (  base840 );
    struct SliceIter_330  it844 = ( (  into_dash_iter332 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next371 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            struct funenv806  temp807 = (  fun842 );
            x843 = ( temp807.fun ( temp807.env ,  ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    bool  temp808;
    return (  temp808 );
}

static  size_t   reduce809 (    struct TakeWhile_560  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_560  it844 = ( (  into_dash_iter559 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next572 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp810;
    return (  temp810 );
}

struct env812 {
    bool (*  fun871 )(    struct Tuple2_475  );
};

struct funenv812 {
    bool  (*fun) (  struct env812  ,    struct Tuple2_475  ,    bool  );
    struct env812 env;
};

static  bool   reduce811 (    struct Zip_415  iterable838 ,    bool  base840 ,   struct funenv812  fun842 ) {
    bool  x843 = (  base840 );
    struct Zip_415  it844 = ( (  into_dash_iter414 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_474  dref845 = ( (  next473 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_474_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_474_Just_t ) {
            struct funenv812  temp813 = (  fun842 );
            x843 = ( temp813.fun ( temp813.env ,  ( dref845 .stuff .Maybe_474_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    bool  temp814;
    return (  temp814 );
}

static  struct Maybe_801   reduce815 (    struct TakeWhile_569  iterable838 ,    struct Maybe_801  base840 ,    struct Maybe_801 (*  fun842 )(    char  ,    struct Maybe_801  ) ) {
    struct Maybe_801  x843 = (  base840 );
    struct TakeWhile_569  it844 = ( (  into_dash_iter568 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next578 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_801  temp816;
    return (  temp816 );
}

static  size_t   reduce817 (    struct IntStrIter_418  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct IntStrIter_418  it844 = ( (  into_dash_iter538 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next477 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp818;
    return (  temp818 );
}

static  size_t   reduce819 (    struct StrConcatIter_421  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_421  it844 = ( (  into_dash_iter540 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next484 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp820;
    return (  temp820 );
}

static  size_t   reduce821 (    struct StrConcatIter_428  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_428  it844 = ( (  into_dash_iter542 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next490 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp822;
    return (  temp822 );
}

static  size_t   reduce823 (    struct StrConcatIter_432  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_432  it844 = ( (  into_dash_iter544 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next498 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp824;
    return (  temp824 );
}

static  size_t   reduce825 (    struct StrConcatIter_442  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_442  it844 = ( (  into_dash_iter546 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next507 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp826;
    return (  temp826 );
}

static  size_t   reduce827 (    struct StrConcatIter_447  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_447  it844 = ( (  into_dash_iter548 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next511 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp828;
    return (  temp828 );
}

static  size_t   reduce829 (    struct StrConcatIter_444  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_444  it844 = ( (  into_dash_iter550 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next509 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp830;
    return (  temp830 );
}

static  size_t   reduce831 (    struct StrConcatIter_453  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_453  it844 = ( (  into_dash_iter552 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next520 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp832;
    return (  temp832 );
}

static  size_t   reduce833 (    struct StrConcatIter_457  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_457  it844 = ( (  into_dash_iter554 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next523 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp834;
    return (  temp834 );
}

static  size_t   reduce835 (    struct StrConcatIter_462  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_462  it844 = ( (  into_dash_iter556 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next527 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp836;
    return (  temp836 );
}

static  size_t   lam838 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count837 (    struct TakeWhile_558  it849 ) {
    return ( (  reduce798 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam838 ) ) );
}

static  size_t   lam840 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count839 (    struct TakeWhile_560  it849 ) {
    return ( (  reduce809 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam840 ) ) );
}

static  size_t   lam842 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count841 (    struct IntStrIter_418  it849 ) {
    return ( (  reduce817 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam842 ) ) );
}

static  size_t   lam844 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count843 (    struct StrConcatIter_421  it849 ) {
    return ( (  reduce819 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam844 ) ) );
}

static  size_t   lam846 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count845 (    struct StrConcatIter_428  it849 ) {
    return ( (  reduce821 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam846 ) ) );
}

static  size_t   lam848 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count847 (    struct StrConcatIter_432  it849 ) {
    return ( (  reduce823 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam848 ) ) );
}

static  size_t   lam850 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count849 (    struct StrConcatIter_442  it849 ) {
    return ( (  reduce825 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam850 ) ) );
}

static  size_t   lam852 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count851 (    struct StrConcatIter_447  it849 ) {
    return ( (  reduce827 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam852 ) ) );
}

static  size_t   lam854 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count853 (    struct StrConcatIter_444  it849 ) {
    return ( (  reduce829 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam854 ) ) );
}

static  size_t   lam856 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count855 (    struct StrConcatIter_453  it849 ) {
    return ( (  reduce831 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam856 ) ) );
}

static  size_t   lam858 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count857 (    struct StrConcatIter_457  it849 ) {
    return ( (  reduce833 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam858 ) ) );
}

static  size_t   lam860 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count859 (    struct StrConcatIter_462  it849 ) {
    return ( (  reduce835 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam860 ) ) );
}

static  int32_t   lam862 (    int32_t  v857 ,    int32_t  s859 ) {
    return (  op_dash_add87 ( (  v857 ) , (  s859 ) ) );
}

static  int32_t   sum861 (    struct Map_352  it855 ) {
    return ( (  reduce803 ) ( (  it855 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam862 ) ) );
}

static  bool   lam806 (   struct env806 env ,    char  e873 ,    bool  x875 ) {
    return ( ( ( env.fun871 ) ( (  e873 ) ) ) && (  x875 ) );
}

static  bool   all863 (    struct List_3 *  it869 ,    bool (*  fun871 )(    char  ) ) {
    struct env806 envinst806 = {
        .fun871 =  fun871 ,
    };
    return ( (  reduce805 ) ( (  it869 ) ,  ( true ) ,  ( (struct funenv806){ .fun = lam806, .env = envinst806 } ) ) );
}

static  bool   lam812 (   struct env812 env ,    struct Tuple2_475  e873 ,    bool  x875 ) {
    return ( ( ( env.fun871 ) ( (  e873 ) ) ) && (  x875 ) );
}

static  bool   all864 (    struct Zip_415  it869 ,    bool (*  fun871 )(    struct Tuple2_475  ) ) {
    struct env812 envinst812 = {
        .fun871 =  fun871 ,
    };
    return ( (  reduce811 ) ( (  it869 ) ,  ( true ) ,  ( (struct funenv812){ .fun = lam812, .env = envinst812 } ) ) );
}

static  struct Maybe_355   head865 (    struct List_323 *  it887 ) {
    struct SliceIter_321  temp866 = ( (  into_dash_iter320 ) ( (  it887 ) ) );
    return ( (  next394 ) ( ( &temp866 ) ) );
}

static  struct Maybe_49   head867 (    struct TakeWhile_558  it887 ) {
    struct TakeWhile_558  temp868 = ( (  into_dash_iter557 ) ( (  it887 ) ) );
    return ( (  next570 ) ( ( &temp868 ) ) );
}

static  struct Maybe_49   head869 (    struct TakeWhile_562  it887 ) {
    struct TakeWhile_562  temp870 = ( (  into_dash_iter561 ) ( (  it887 ) ) );
    return ( (  next573 ) ( ( &temp870 ) ) );
}

static  struct Maybe_49   head871 (    struct TakeWhile_569  it887 ) {
    struct TakeWhile_569  temp872 = ( (  into_dash_iter568 ) ( (  it887 ) ) );
    return ( (  next578 ) ( ( &temp872 ) ) );
}

static  bool   null873 (    struct List_323 *  it890 ) {
    struct Maybe_355  dref891 = ( (  head865 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_355_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null874 (    struct TakeWhile_558  it890 ) {
    struct Maybe_49  dref891 = ( (  head867 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null875 (    struct TakeWhile_562  it890 ) {
    struct Maybe_49  dref891 = ( (  head869 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam640 (   struct env640 env ,    int32_t  dref928 ) {
    return ( (  next571 ) ( ( env.it925 ) ) );
}

static  enum Unit_13   drop_prime_876 (    struct Scanner_329 *  it925 ,    size_t  n927 ) {
    struct env640 envinst640 = {
        .it925 =  it925 ,
    };
    ( (  for_dash_each639 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32313 ) ( (  n927 ) ) ) ) ) ,  ( (struct funenv640){ .fun = lam640, .env = envinst640 } ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_878 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_878 Tuple2_878_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_878 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst877 (    struct Tuple2_878  dref989 ) {
    return ( dref989 .field0 );
}

static  uint32_t   snd879 (    struct Tuple2_878  dref992 ) {
    return ( dref992 .field1 );
}

static  bool   is_dash_just880 (    struct Maybe_157  m996 ) {
    struct Maybe_157  dref997 = (  m996 );
    if ( dref997.tag == Maybe_157_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_157_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just881 (    struct Maybe_356  m996 ) {
    struct Maybe_356  dref997 = (  m996 );
    if ( dref997.tag == Maybe_356_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_356_Just_t ) {
        return ( true );
    }
}

struct Maybe_883 {
    enum {
        Maybe_883_None_t,
        Maybe_883_Just_t,
    } tag;
    union {
        struct {
            struct List_160  field0;
        } Maybe_883_Just_s;
    } stuff;
};

static struct Maybe_883 Maybe_883_Just (  struct List_160  field0 ) {
    return ( struct Maybe_883 ) { .tag = Maybe_883_Just_t, .stuff = { .Maybe_883_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just882 (    struct Maybe_883  m996 ) {
    struct Maybe_883  dref997 = (  m996 );
    if ( dref997.tag == Maybe_883_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_883_Just_t ) {
        return ( true );
    }
}

struct Maybe_885 {
    enum {
        Maybe_885_None_t,
        Maybe_885_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_626  field0;
        } Maybe_885_Just_s;
    } stuff;
};

static struct Maybe_885 Maybe_885_Just (  struct StrBuilder_626  field0 ) {
    return ( struct Maybe_885 ) { .tag = Maybe_885_Just_t, .stuff = { .Maybe_885_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just884 (    struct Maybe_885  m996 ) {
    struct Maybe_885  dref997 = (  m996 );
    if ( dref997.tag == Maybe_885_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_885_Just_t ) {
        return ( true );
    }
}

struct Maybe_887 {
    enum {
        Maybe_887_None_t,
        Maybe_887_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_887_Just_s;
    } stuff;
};

static struct Maybe_887 Maybe_887_Just (  struct timespec  field0 ) {
    return ( struct Maybe_887 ) { .tag = Maybe_887_Just_t, .stuff = { .Maybe_887_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just886 (    struct Maybe_887  m996 ) {
    struct Maybe_887  dref997 = (  m996 );
    if ( dref997.tag == Maybe_887_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_887_Just_t ) {
        return ( true );
    }
}

struct Visual_891 {
    int32_t  field0;
};

static struct Visual_891 Visual_891_Visual (  int32_t  field0 ) {
    return ( struct Visual_891 ) { .field0 = field0 };
};

struct Mode_892 {
    enum {
        Mode_892_Normal_t,
        Mode_892_Insert_t,
        Mode_892_Select_t,
        Mode_892_Cmd_t,
        Mode_892_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_626  field0;
        } Mode_892_Cmd_s;
        struct {
            struct StrBuilder_626  field0;
        } Mode_892_SearchBox_s;
    } stuff;
};

static struct Mode_892 Mode_892_Cmd (  struct StrBuilder_626  field0 ) {
    return ( struct Mode_892 ) { .tag = Mode_892_Cmd_t, .stuff = { .Mode_892_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_892 Mode_892_SearchBox (  struct StrBuilder_626  field0 ) {
    return ( struct Mode_892 ) { .tag = Mode_892_SearchBox_t, .stuff = { .Mode_892_SearchBox_s = { .field0 = field0 } } };
};

struct Theme_893 {
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

struct List_895 {
    enum CAllocator_4  f_al;
    struct Slice_413  f_elements;
    size_t  f_count;
};

struct Actions_894 {
    struct List_895  f_list;
    size_t  f_cur;
    struct Maybe_883  f_changeset;
};

struct Editor_890 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_154  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_891  f_goal_dash_x;
    struct List_323  f_current_dash_file;
    struct Maybe_308  f_filename;
    struct Mode_892  f_mode;
    struct Maybe_887  f_anim;
    struct Maybe_157  f_selected;
    struct Theme_893 *  f_theme;
    struct Maybe_885  f_search_dash_term;
    struct Maybe_356  f_msg;
    struct Maybe_356  f_clipboard;
    struct Actions_894  f_actions;
    struct Maybe_157  f_insert_dash_start;
    struct Maybe_885  f_delete_dash_acc;
};

struct env889 {
    ;
    ;
    struct Editor_890 *  ed3355;
};

struct funenv889 {
    struct Maybe_49  (*fun) (  struct env889  ,    struct List_3  );
    struct env889 env;
};

static  struct Maybe_49   and_dash_maybe888 (    struct Maybe_355  m1000 ,   struct funenv889  fun1002 ) {
    struct Maybe_355  dref1003 = (  m1000 );
    if ( dref1003.tag == Maybe_355_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1003.tag == Maybe_355_Just_t ) {
        struct funenv889  temp896 = (  fun1002 );
        return ( temp896.fun ( temp896.env ,  ( dref1003 .stuff .Maybe_355_Just_s .field0 ) ) );
    }
}

static  struct Maybe_157   fmap_dash_maybe897 (    struct Maybe_157  x1007 ,    struct Cursor_154 (*  fun1009 )(    struct Cursor_154  ) ) {
    struct Maybe_157  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_157_None_t ) {
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
    else if ( dref1010.tag == Maybe_157_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_157_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe898 (    struct Maybe_49  x1007 ,    enum CharType_53 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_386   fmap_dash_maybe899 (    struct Maybe_49  x1007 ,    struct Tuple2_387 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_386_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_901 {
    enum {
        Maybe_901_None_t,
        Maybe_901_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_901_Just_s;
    } stuff;
};

static struct Maybe_901 Maybe_901_Just (  size_t  field0 ) {
    return ( struct Maybe_901 ) { .tag = Maybe_901_Just_t, .stuff = { .Maybe_901_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_901   fmap_dash_maybe900 (    struct Maybe_356  x1007 ,    size_t (*  fun1009 )(    struct DynStr_136  ) ) {
    struct Maybe_356  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    else if ( dref1010.tag == Maybe_356_Just_t ) {
        return ( ( Maybe_901_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
    }
}

struct env903 {
    struct Editor_890 *  ed3053;
    ;
};

struct funenv903 {
    struct Cursor_154  (*fun) (  struct env903  ,    struct Cursor_154  );
    struct env903 env;
};

static  struct Cursor_154   maybe902 (    struct Maybe_157  x1014 ,   struct funenv903  fun1016 ,    struct Cursor_154  default1018 ) {
    struct funenv903  temp904 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp904.fun ( temp904.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env906 {
    ;
    struct Editor_890 *  ed3053;
};

struct funenv906 {
    struct Cursor_154  (*fun) (  struct env906  ,    struct Cursor_154  );
    struct env906 env;
};

static  struct Cursor_154   maybe905 (    struct Maybe_157  x1014 ,   struct funenv906  fun1016 ,    struct Cursor_154  default1018 ) {
    struct funenv906  temp907 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp907.fun ( temp907.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env909 {
    ;
    struct Editor_890 *  ed3053;
};

struct funenv909 {
    struct Cursor_154  (*fun) (  struct env909  ,    struct Cursor_154  );
    struct env909 env;
};

static  struct Cursor_154   maybe908 (    struct Maybe_157  x1014 ,   struct funenv909  fun1016 ,    struct Cursor_154  default1018 ) {
    struct funenv909  temp910 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp910.fun ( temp910.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env912 {
    struct Editor_890 *  ed3053;
    ;
};

struct funenv912 {
    struct Cursor_154  (*fun) (  struct env912  ,    struct Cursor_154  );
    struct env912 env;
};

static  struct Cursor_154   maybe911 (    struct Maybe_157  x1014 ,   struct funenv912  fun1016 ,    struct Cursor_154  default1018 ) {
    struct funenv912  temp913 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp913.fun ( temp913.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env915 {
    struct Editor_890 *  ed3157;
    ;
};

struct funenv915 {
    int32_t  (*fun) (  struct env915  ,    struct Cursor_154  );
    struct env915 env;
};

static  int32_t   maybe914 (    struct Maybe_157  x1014 ,   struct funenv915  fun1016 ,    int32_t  default1018 ) {
    struct funenv915  temp916 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp916.fun ( temp916.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env918 {
    ;
    struct Editor_890 *  ed3157;
};

struct funenv918 {
    int32_t  (*fun) (  struct env918  ,    struct Cursor_154  );
    struct env918 env;
};

static  int32_t   maybe917 (    struct Maybe_157  x1014 ,   struct funenv918  fun1016 ,    int32_t  default1018 ) {
    struct funenv918  temp919 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp919.fun ( temp919.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env921 {
    ;
    struct Editor_890 *  ed3175;
};

struct funenv921 {
    int32_t  (*fun) (  struct env921  ,    struct Cursor_154  );
    struct env921 env;
};

static  int32_t   maybe920 (    struct Maybe_157  x1014 ,   struct funenv921  fun1016 ,    int32_t  default1018 ) {
    struct funenv921  temp922 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp922.fun ( temp922.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env924 {
    ;
    struct Editor_890 *  ed3175;
};

struct funenv924 {
    int32_t  (*fun) (  struct env924  ,    struct Cursor_154  );
    struct env924 env;
};

static  int32_t   maybe923 (    struct Maybe_157  x1014 ,   struct funenv924  fun1016 ,    int32_t  default1018 ) {
    struct funenv924  temp925 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp925.fun ( temp925.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env927 {
    struct Editor_890 *  ed3136;
    ;
};

struct funenv927 {
    struct Cursor_154  (*fun) (  struct env927  ,    struct Cursor_154  );
    struct env927 env;
};

static  struct Cursor_154   maybe926 (    struct Maybe_157  x1014 ,   struct funenv927  fun1016 ,    struct Cursor_154  default1018 ) {
    struct funenv927  temp928 = (  fun1016 );
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( temp928.fun ( temp928.env ,  ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe929 (    struct Maybe_157  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_154  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe930 (    struct Maybe_157  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_154  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_157  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_157_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env932 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3390;
};

struct funenv932 {
    bool  (*fun) (  struct env932  ,    char  );
    struct env932 env;
};

static  bool   maybe931 (    struct Maybe_49  x1014 ,   struct funenv932  fun1016 ,    bool  default1018 ) {
    struct funenv932  temp933 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp933.fun ( temp933.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe934 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe935 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env937 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3399;
};

struct funenv937 {
    bool  (*fun) (  struct env937  ,    char  );
    struct env937 env;
};

static  bool   maybe936 (    struct Maybe_49  x1014 ,   struct funenv937  fun1016 ,    bool  default1018 ) {
    struct funenv937  temp938 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp938.fun ( temp938.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe939 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env941 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3406;
};

struct funenv941 {
    bool  (*fun) (  struct env941  ,    char  );
    struct env941 env;
};

static  bool   maybe940 (    struct Maybe_49  x1014 ,   struct funenv941  fun1016 ,    bool  default1018 ) {
    struct funenv941  temp942 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp942.fun ( temp942.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env944 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3406;
};

struct funenv944 {
    bool  (*fun) (  struct env944  ,    char  );
    struct env944 env;
};

static  bool   maybe943 (    struct Maybe_49  x1014 ,   struct funenv944  fun1016 ,    bool  default1018 ) {
    struct funenv944  temp945 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp945.fun ( temp945.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe946 (    struct Maybe_49  x1014 ,    int32_t (*  fun1016 )(    char  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int64_t   mod947 (    int64_t  l968 ,    int64_t  d970 ) {
    int64_t  r971 = (  op_dash_div85 ( (  l968 ) , (  d970 ) ) );
    int64_t  m972 = (  op_dash_sub84 ( (  l968 ) , (  op_dash_mul32 ( (  r971 ) , (  d970 ) ) ) ) );
    if ( (  cmp79 ( (  m972 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d970 ) , (  m972 ) ) );
    } else {
        return (  m972 );
    }
}

static  enum Ordering_10   cmp949 (    struct Cursor_154  l2705 ,    struct Cursor_154  r2707 ) {
    enum Ordering_10  dref2708 = ( (  cmp80 ) ( ( (  l2705 ) .f_y ) ,  ( (  r2707 ) .f_y ) ) );
    switch (  dref2708 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2705 ) .f_x ) ,  ( (  r2707 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2709 =  dref2708;
            return (  els2709 );
            break;
        }
    }
}

static  struct Cursor_154   min948 (    struct Cursor_154  l975 ,    struct Cursor_154  r977 ) {
    if ( (  cmp949 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   min950 (    int32_t  l975 ,    int32_t  r977 ) {
    if ( (  cmp80 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   char_dash_i32953 (    char  c1312 ) {
    return ( (  cast_dash_on_dash_zeroed290 ) ( (  c1312 ) ) );
}

static  enum Ordering_10   cmp952 (    char  l1336 ,    char  r1338 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32953 ) ( (  l1336 ) ) ) ,  ( (  char_dash_i32953 ) ( (  r1338 ) ) ) ) );
}

static  char   min951 (    char  l975 ,    char  r977 ) {
    if ( (  cmp952 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   max954 (    int32_t  l1025 ,    int32_t  r1027 ) {
    if ( (  cmp80 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  struct Cursor_154   max955 (    struct Cursor_154  l1025 ,    struct Cursor_154  r1027 ) {
    if ( (  cmp949 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  char   max956 (    char  l1025 ,    char  r1027 ) {
    if ( (  cmp952 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  bool   between957 (    char  c1042 ,    char  l1044 ,    char  r1046 ) {
    char  from1047 = ( (  min951 ) ( (  l1044 ) ,  (  r1046 ) ) );
    char  to1048 = ( (  max956 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp952 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp952 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  bool   between958 (    struct Cursor_154  c1042 ,    struct Cursor_154  l1044 ,    struct Cursor_154  r1046 ) {
    struct Cursor_154  from1047 = ( (  min948 ) ( (  l1044 ) ,  (  r1046 ) ) );
    struct Cursor_154  to1048 = ( (  max955 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp949 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp949 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  int32_t   clamp959 (    int32_t  x1057 ,    int32_t  mn1059 ,    int32_t  mx1061 ) {
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

static  struct ConstStrIter_350   chars960 (    const char*  self1081 ) {
    return ( (  into_dash_iter375 ) ( (  self1081 ) ) );
}

static  struct AppendIter_425   chars961 (    char  self1087 ) {
    return ( (  single596 ) ( (  self1087 ) ) );
}

static  int32_t   count_dash_digits962 (    size_t  self1102 ) {
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

static  int32_t   count_dash_digits963 (    int32_t  self1102 ) {
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

static  int32_t   count_dash_digits964 (    uint32_t  self1102 ) {
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

static  struct IntStrIter_418   chars965 (    int32_t  self1109 ) {
    return ( (struct IntStrIter_418) { .f_int = (  self1109 ) , .f_len = ( (  count_dash_digits963 ) ( (  self1109 ) ) ) } );
}

static  enum Unit_13   print_dash_str966 (    uint32_t  self1112 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1112 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_429   chars967 (    uint32_t  self1115 ) {
    return ( (struct IntStrIter_429) { .f_int = (  self1115 ) , .f_len = ( (  count_dash_digits964 ) ( (  self1115 ) ) ) } );
}

static  enum Unit_13   print_dash_str968 (    uint8_t  self1118 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32319 ) ( (  self1118 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_448   chars969 (    size_t  self1133 ) {
    return ( (struct IntStrIter_448) { .f_int = (  self1133 ) , .f_len = ( (  count_dash_digits962 ) ( (  self1133 ) ) ) } );
}

struct StrConcat_971 {
    const char*  field0;
    struct Mode_892  field1;
};

static struct StrConcat_971 StrConcat_971_StrConcat (  const char*  field0 ,  struct Mode_892  field1 ) {
    return ( struct StrConcat_971 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_975 {
    const char*  field0;
    struct DynStr_136  field1;
};

static struct StrConcat_975 StrConcat_975_StrConcat (  const char*  field0 ,  struct DynStr_136  field1 ) {
    return ( struct StrConcat_975 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_974 {
    struct StrConcat_975  field0;
    char  field1;
};

static struct StrConcat_974 StrConcat_974_StrConcat (  struct StrConcat_975  field0 ,  char  field1 ) {
    return ( struct StrConcat_974 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_973 {
    enum {
        StrCase_973_StrCase1_t,
        StrCase_973_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_973_StrCase1_s;
        struct {
            struct StrConcat_974  field0;
        } StrCase_973_StrCase2_s;
    } stuff;
};

static struct StrCase_973 StrCase_973_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_973 ) { .tag = StrCase_973_StrCase1_t, .stuff = { .StrCase_973_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_973 StrCase_973_StrCase2 (  struct StrConcat_974  field0 ) {
    return ( struct StrCase_973 ) { .tag = StrCase_973_StrCase2_t, .stuff = { .StrCase_973_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_136   as_dash_str977 (    struct StrBuilder_626 *  builder2165 ) {
    return ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( ( ( * (  builder2165 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2165 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_330   chars984 (    struct DynStr_136  self1604 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1604 ) .f_contents ) ) );
}

static  struct StrConcatIter_424   into_dash_iter983 (    struct StrConcat_975  dref1164 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars984 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars982 (    struct StrConcat_975  self1175 ) {
    return ( (  into_dash_iter983 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter981 (    struct StrConcat_974  dref1164 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars982 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars980 (    struct StrConcat_974  self1175 ) {
    return ( (  into_dash_iter981 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter979 (    struct StrCase_973  self1188 ) {
    struct StrCase_973  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_973_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1189 .stuff .StrCase_973_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_973_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars980 ) ( ( dref1189 .stuff .StrCase_973_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars978 (    struct StrCase_973  self1200 ) {
    return ( (  into_dash_iter979 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_422   chars972 (    struct Mode_892  self2731 ) {
    struct StrCase_973  temp976;
    struct StrCase_973  c2732 = (  temp976 );
    struct Mode_892  dref2733 = (  self2731 );
    if ( dref2733.tag == Mode_892_Normal_t ) {
        c2732 = ( ( StrCase_973_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2733.tag == Mode_892_Insert_t ) {
        c2732 = ( ( StrCase_973_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2733.tag == Mode_892_Select_t ) {
        c2732 = ( ( StrCase_973_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2733.tag == Mode_892_Cmd_t ) {
        struct DynStr_136  ss2735 = ( (  as_dash_str977 ) ( ( & ( dref2733 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
        c2732 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Cmd(" ) ,  (  ss2735 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2733.tag == Mode_892_SearchBox_t ) {
        struct DynStr_136  ss2737 = ( (  as_dash_str977 ) ( ( & ( dref2733 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
        c2732 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Search(" ) ,  (  ss2737 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars978 ) ( (  c2732 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter970 (    struct StrConcat_971  dref1164 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars972 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_986 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_986 StrConcat_986_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_986 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_428   into_dash_iter985 (    struct StrConcat_986  dref1164 ) {
    return ( (struct StrConcatIter_428) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars967 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_988 {
    const char*  field0;
    struct Maybe_386  field1;
};

static struct StrConcat_988 StrConcat_988_StrConcat (  const char*  field0 ,  struct Maybe_386  field1 ) {
    return ( struct StrConcat_988 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_992 {
    const char*  field0;
    struct Tuple2_387  field1;
};

static struct StrConcat_992 StrConcat_992_StrConcat (  const char*  field0 ,  struct Tuple2_387  field1 ) {
    return ( struct StrConcat_992 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_991 {
    struct StrConcat_992  field0;
    char  field1;
};

static struct StrConcat_991 StrConcat_991_StrConcat (  struct StrConcat_992  field0 ,  char  field1 ) {
    return ( struct StrConcat_991 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_990 {
    enum {
        StrCase_990_StrCase1_t,
        StrCase_990_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_990_StrCase1_s;
        struct {
            struct StrConcat_991  field0;
        } StrCase_990_StrCase2_s;
    } stuff;
};

static struct StrCase_990 StrCase_990_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_990 ) { .tag = StrCase_990_StrCase1_t, .stuff = { .StrCase_990_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_990 StrCase_990_StrCase2 (  struct StrConcat_991  field0 ) {
    return ( struct StrCase_990 ) { .tag = StrCase_990_StrCase2_t, .stuff = { .StrCase_990_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_1005 {
    char  field0;
    char  field1;
};

static struct StrConcat_1005 StrConcat_1005_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_1005 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1004 {
    struct StrConcat_1005  field0;
    const char*  field1;
};

static struct StrConcat_1004 StrConcat_1004_StrConcat (  struct StrConcat_1005  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1004 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1003 {
    struct StrConcat_1004  field0;
    int32_t  field1;
};

static struct StrConcat_1003 StrConcat_1003_StrConcat (  struct StrConcat_1004  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1003 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1002 {
    struct StrConcat_1003  field0;
    char  field1;
};

static struct StrConcat_1002 StrConcat_1002_StrConcat (  struct StrConcat_1003  field0 ,  char  field1 ) {
    return ( struct StrConcat_1002 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_439   into_dash_iter1012 (    struct StrConcat_1005  dref1164 ) {
    return ( (struct StrConcatIter_439) { .f_left = ( (  chars961 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_439   chars1011 (    struct StrConcat_1005  self1175 ) {
    return ( (  into_dash_iter1012 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_438   into_dash_iter1010 (    struct StrConcat_1004  dref1164 ) {
    return ( (struct StrConcatIter_438) { .f_left = ( (  chars1011 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars960 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_438   chars1009 (    struct StrConcat_1004  self1175 ) {
    return ( (  into_dash_iter1010 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_437   into_dash_iter1008 (    struct StrConcat_1003  dref1164 ) {
    return ( (struct StrConcatIter_437) { .f_left = ( (  chars1009 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_437   chars1007 (    struct StrConcat_1003  self1175 ) {
    return ( (  into_dash_iter1008 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_436   into_dash_iter1006 (    struct StrConcat_1002  dref1164 ) {
    return ( (struct StrConcatIter_436) { .f_left = ( (  chars1007 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_436   chars1001 (    struct StrConcat_1002  self1175 ) {
    return ( (  into_dash_iter1006 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_436   chars1000 (    struct Tuple2_387  dref1225 ) {
    return ( (  chars1001 ) ( ( ( StrConcat_1002_StrConcat ) ( ( ( StrConcat_1003_StrConcat ) ( ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_1005_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1225 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1225 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_435   into_dash_iter999 (    struct StrConcat_992  dref1164 ) {
    return ( (struct StrConcatIter_435) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1000 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_435   chars998 (    struct StrConcat_992  self1175 ) {
    return ( (  into_dash_iter999 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_434   into_dash_iter997 (    struct StrConcat_991  dref1164 ) {
    return ( (struct StrConcatIter_434) { .f_left = ( (  chars998 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_434   chars996 (    struct StrConcat_991  self1175 ) {
    return ( (  into_dash_iter997 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_433   into_dash_iter995 (    struct StrCase_990  self1188 ) {
    struct StrCase_990  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_990_StrCase1_t ) {
        return ( ( StrCaseIter_433_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1189 .stuff .StrCase_990_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_990_StrCase2_t ) {
        return ( ( StrCaseIter_433_StrCaseIter2 ) ( ( (  chars996 ) ( ( dref1189 .stuff .StrCase_990_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_433   chars994 (    struct StrCase_990  self1200 ) {
    return ( (  into_dash_iter995 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_433   chars989 (    struct Maybe_386  self1214 ) {
    struct StrCase_990  temp993;
    struct StrCase_990  c1215 = (  temp993 );
    struct Maybe_386  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_386_None_t ) {
        c1215 = ( ( StrCase_990_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_386_Just_t ) {
        c1215 = ( ( StrCase_990_StrCase2 ) ( ( ( StrConcat_991_StrConcat ) ( ( ( StrConcat_992_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_386_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars994 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_432   into_dash_iter987 (    struct StrConcat_988  dref1164 ) {
    return ( (struct StrConcatIter_432) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars989 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1016 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_1016 StrConcat_1016_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1016 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1015 {
    struct StrConcat_1016  field0;
    char  field1;
};

static struct StrConcat_1015 StrConcat_1015_StrConcat (  struct StrConcat_1016  field0 ,  char  field1 ) {
    return ( struct StrConcat_1015 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1014 {
    struct StrConcat_1015  field0;
    int32_t  field1;
};

static struct StrConcat_1014 StrConcat_1014_StrConcat (  struct StrConcat_1015  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1014 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_444   into_dash_iter1020 (    struct StrConcat_1016  dref1164 ) {
    return ( (struct StrConcatIter_444) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_444   chars1019 (    struct StrConcat_1016  self1175 ) {
    return ( (  into_dash_iter1020 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_443   into_dash_iter1018 (    struct StrConcat_1015  dref1164 ) {
    return ( (struct StrConcatIter_443) { .f_left = ( (  chars1019 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_443   chars1017 (    struct StrConcat_1015  self1175 ) {
    return ( (  into_dash_iter1018 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_442   into_dash_iter1013 (    struct StrConcat_1014  dref1164 ) {
    return ( (struct StrConcatIter_442) { .f_left = ( (  chars1017 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_447   into_dash_iter1021 (    struct StrConcat_17  dref1164 ) {
    return ( (struct StrConcatIter_447) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars969 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1024 {
    struct StrConcat_1016  field0;
    const char*  field1;
};

static struct StrConcat_1024 StrConcat_1024_StrConcat (  struct StrConcat_1016  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1024 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1023 {
    struct StrConcat_1024  field0;
    int32_t  field1;
};

static struct StrConcat_1023 StrConcat_1023_StrConcat (  struct StrConcat_1024  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1023 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_454   into_dash_iter1026 (    struct StrConcat_1024  dref1164 ) {
    return ( (struct StrConcatIter_454) { .f_left = ( (  chars1019 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars960 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_454   chars1025 (    struct StrConcat_1024  self1175 ) {
    return ( (  into_dash_iter1026 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_453   into_dash_iter1022 (    struct StrConcat_1023  dref1164 ) {
    return ( (struct StrConcatIter_453) { .f_left = ( (  chars1025 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1028 {
    const char*  field0;
    struct Maybe_885  field1;
};

static struct StrConcat_1028 StrConcat_1028_StrConcat (  const char*  field0 ,  struct Maybe_885  field1 ) {
    return ( struct StrConcat_1028 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1032 {
    const char*  field0;
    struct StrBuilder_626  field1;
};

static struct StrConcat_1032 StrConcat_1032_StrConcat (  const char*  field0 ,  struct StrBuilder_626  field1 ) {
    return ( struct StrConcat_1032 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1031 {
    struct StrConcat_1032  field0;
    char  field1;
};

static struct StrConcat_1031 StrConcat_1031_StrConcat (  struct StrConcat_1032  field0 ,  char  field1 ) {
    return ( struct StrConcat_1031 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1030 {
    enum {
        StrCase_1030_StrCase1_t,
        StrCase_1030_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_1030_StrCase1_s;
        struct {
            struct StrConcat_1031  field0;
        } StrCase_1030_StrCase2_s;
    } stuff;
};

static struct StrCase_1030 StrCase_1030_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_1030 ) { .tag = StrCase_1030_StrCase1_t, .stuff = { .StrCase_1030_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1030 StrCase_1030_StrCase2 (  struct StrConcat_1031  field0 ) {
    return ( struct StrCase_1030 ) { .tag = StrCase_1030_StrCase2_t, .stuff = { .StrCase_1030_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_330   chars1040 (    struct StrBuilder_626  s2179 ) {
    return ( (  into_dash_iter333 ) ( ( (  s2179 ) .f_chars ) ) );
}

static  struct StrConcatIter_424   into_dash_iter1039 (    struct StrConcat_1032  dref1164 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1040 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars1038 (    struct StrConcat_1032  self1175 ) {
    return ( (  into_dash_iter1039 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter1037 (    struct StrConcat_1031  dref1164 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars1038 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars1036 (    struct StrConcat_1031  self1175 ) {
    return ( (  into_dash_iter1037 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter1035 (    struct StrCase_1030  self1188 ) {
    struct StrCase_1030  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_1030_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1189 .stuff .StrCase_1030_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_1030_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars1036 ) ( ( dref1189 .stuff .StrCase_1030_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars1034 (    struct StrCase_1030  self1200 ) {
    return ( (  into_dash_iter1035 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_422   chars1029 (    struct Maybe_885  self1214 ) {
    struct StrCase_1030  temp1033;
    struct StrCase_1030  c1215 = (  temp1033 );
    struct Maybe_885  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_885_None_t ) {
        c1215 = ( ( StrCase_1030_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_885_Just_t ) {
        c1215 = ( ( StrCase_1030_StrCase2 ) ( ( ( StrConcat_1031_StrConcat ) ( ( ( StrConcat_1032_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_885_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1034 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1027 (    struct StrConcat_1028  dref1164 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1029 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1042 {
    const char*  field0;
    struct Maybe_356  field1;
};

static struct StrConcat_1042 StrConcat_1042_StrConcat (  const char*  field0 ,  struct Maybe_356  field1 ) {
    return ( struct StrConcat_1042 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_422   chars1043 (    struct Maybe_356  self1214 ) {
    struct StrCase_973  temp1044;
    struct StrCase_973  c1215 = (  temp1044 );
    struct Maybe_356  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_356_None_t ) {
        c1215 = ( ( StrCase_973_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_356_Just_t ) {
        c1215 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars978 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1041 (    struct StrConcat_1042  dref1164 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1043 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1046 {
    const char*  field0;
    struct Maybe_901  field1;
};

static struct StrConcat_1046 StrConcat_1046_StrConcat (  const char*  field0 ,  struct Maybe_901  field1 ) {
    return ( struct StrConcat_1046 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1049 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_1049 StrConcat_1049_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
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

static  struct StrConcatIter_447   chars1055 (    struct StrConcat_17  self1175 ) {
    return ( (  into_dash_iter1021 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_459   into_dash_iter1054 (    struct StrConcat_1049  dref1164 ) {
    return ( (struct StrConcatIter_459) { .f_left = ( (  chars1055 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_459   chars1053 (    struct StrConcat_1049  self1175 ) {
    return ( (  into_dash_iter1054 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_458   into_dash_iter1052 (    struct StrCase_1048  self1188 ) {
    struct StrCase_1048  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_1048_StrCase1_t ) {
        return ( ( StrCaseIter_458_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1189 .stuff .StrCase_1048_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_1048_StrCase2_t ) {
        return ( ( StrCaseIter_458_StrCaseIter2 ) ( ( (  chars1053 ) ( ( dref1189 .stuff .StrCase_1048_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_458   chars1051 (    struct StrCase_1048  self1200 ) {
    return ( (  into_dash_iter1052 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_458   chars1047 (    struct Maybe_901  self1214 ) {
    struct StrCase_1048  temp1050;
    struct StrCase_1048  c1215 = (  temp1050 );
    struct Maybe_901  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_901_None_t ) {
        c1215 = ( ( StrCase_1048_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_901_Just_t ) {
        c1215 = ( ( StrCase_1048_StrCase2 ) ( ( ( StrConcat_1049_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_901_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1051 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_457   into_dash_iter1045 (    struct StrConcat_1046  dref1164 ) {
    return ( (struct StrConcatIter_457) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1047 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1057 {
    struct StrConcat_1049  field0;
    size_t  field1;
};

static struct StrConcat_1057 StrConcat_1057_StrConcat (  struct StrConcat_1049  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_1057 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_462   into_dash_iter1056 (    struct StrConcat_1057  dref1164 ) {
    return ( (struct StrConcatIter_462) { .f_left = ( (  chars1053 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars969 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1060 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_1060 StrConcat_1060_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1060 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1059 {
    struct StrConcat_1060  field0;
    char  field1;
};

static struct StrConcat_1059 StrConcat_1059_StrConcat (  struct StrConcat_1060  field0 ,  char  field1 ) {
    return ( struct StrConcat_1059 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1061 (    struct StrConcat_1060  self1169 ) {
    struct StrConcat_1060  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1058 (    struct StrConcat_1059  self1169 ) {
    struct StrConcat_1059  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1061 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1064 {
    const char*  field0;
    struct StrConcat_1059  field1;
};

static struct StrConcat_1064 StrConcat_1064_StrConcat (  const char*  field0 ,  struct StrConcat_1059  field1 ) {
    return ( struct StrConcat_1064 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1063 {
    struct StrConcat_1064  field0;
    char  field1;
};

static struct StrConcat_1063 StrConcat_1063_StrConcat (  struct StrConcat_1064  field0 ,  char  field1 ) {
    return ( struct StrConcat_1063 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1065 (    struct StrConcat_1064  self1169 ) {
    struct StrConcat_1064  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1058 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1062 (    struct StrConcat_1063  self1169 ) {
    struct StrConcat_1063  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1065 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1067 (    struct StrConcat_1005  self1169 ) {
    struct StrConcat_1005  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1066 (    struct StrConcat_1004  self1169 ) {
    struct StrConcat_1004  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1067 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1070 {
    const char*  field0;
    struct StrConcat_1004  field1;
};

static struct StrConcat_1070 StrConcat_1070_StrConcat (  const char*  field0 ,  struct StrConcat_1004  field1 ) {
    return ( struct StrConcat_1070 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1069 {
    struct StrConcat_1070  field0;
    char  field1;
};

static struct StrConcat_1069 StrConcat_1069_StrConcat (  struct StrConcat_1070  field0 ,  char  field1 ) {
    return ( struct StrConcat_1069 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1071 (    struct StrConcat_1070  self1169 ) {
    struct StrConcat_1070  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1066 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1068 (    struct StrConcat_1069  self1169 ) {
    struct StrConcat_1069  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1071 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1073 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_1073 StrConcat_1073_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1073 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1072 (    struct StrConcat_1073  self1169 ) {
    struct StrConcat_1073  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1076 {
    const char*  field0;
    struct StrConcat_1073  field1;
};

static struct StrConcat_1076 StrConcat_1076_StrConcat (  const char*  field0 ,  struct StrConcat_1073  field1 ) {
    return ( struct StrConcat_1076 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1075 {
    struct StrConcat_1076  field0;
    char  field1;
};

static struct StrConcat_1075 StrConcat_1075_StrConcat (  struct StrConcat_1076  field0 ,  char  field1 ) {
    return ( struct StrConcat_1075 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1077 (    struct StrConcat_1076  self1169 ) {
    struct StrConcat_1076  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1072 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1074 (    struct StrConcat_1075  self1169 ) {
    struct StrConcat_1075  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1077 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1081 (    struct DynStr_136  self1601 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1601 ) .f_contents ) .f_count ) ,  ( ( (  self1601 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1080 (    struct StrConcat_975  self1169 ) {
    struct StrConcat_975  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1081 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1079 (    struct Mode_892  self2723 ) {
    struct Mode_892  dref2724 = (  self2723 );
    if ( dref2724.tag == Mode_892_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2724.tag == Mode_892_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2724.tag == Mode_892_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2724.tag == Mode_892_Cmd_t ) {
        struct DynStr_136  ss2726 = ( (  as_dash_str977 ) ( ( & ( dref2724 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str1080 ) ( ( ( StrConcat_975_StrConcat ) ( ( "Cmd " ) ,  (  ss2726 ) ) ) ) );
    }
    else if ( dref2724.tag == Mode_892_SearchBox_t ) {
        struct DynStr_136  ss2728 = ( (  as_dash_str977 ) ( ( & ( dref2724 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str1080 ) ( ( ( StrConcat_975_StrConcat ) ( ( "Search " ) ,  (  ss2728 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1078 (    struct StrConcat_971  self1169 ) {
    struct StrConcat_971  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1079 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1084 {
    const char*  field0;
    struct StrConcat_971  field1;
};

static struct StrConcat_1084 StrConcat_1084_StrConcat (  const char*  field0 ,  struct StrConcat_971  field1 ) {
    return ( struct StrConcat_1084 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1083 {
    struct StrConcat_1084  field0;
    char  field1;
};

static struct StrConcat_1083 StrConcat_1083_StrConcat (  struct StrConcat_1084  field0 ,  char  field1 ) {
    return ( struct StrConcat_1083 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1085 (    struct StrConcat_1084  self1169 ) {
    struct StrConcat_1084  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1078 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1082 (    struct StrConcat_1083  self1169 ) {
    struct StrConcat_1083  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1085 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1088 {
    const char*  field0;
    struct StrConcat_1060  field1;
};

static struct StrConcat_1088 StrConcat_1088_StrConcat (  const char*  field0 ,  struct StrConcat_1060  field1 ) {
    return ( struct StrConcat_1088 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1087 {
    struct StrConcat_1088  field0;
    char  field1;
};

static struct StrConcat_1087 StrConcat_1087_StrConcat (  struct StrConcat_1088  field0 ,  char  field1 ) {
    return ( struct StrConcat_1087 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1089 (    struct StrConcat_1088  self1169 ) {
    struct StrConcat_1088  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1061 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1086 (    struct StrConcat_1087  self1169 ) {
    struct StrConcat_1087  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1089 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1093 {
    struct StrConcat_986  field0;
    char  field1;
};

static struct StrConcat_1093 StrConcat_1093_StrConcat (  struct StrConcat_986  field0 ,  char  field1 ) {
    return ( struct StrConcat_1093 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1092 {
    struct StrConcat_1093  field0;
    uint32_t  field1;
};

static struct StrConcat_1092 StrConcat_1092_StrConcat (  struct StrConcat_1093  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1092 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1091 {
    struct StrConcat_1092  field0;
    char  field1;
};

static struct StrConcat_1091 StrConcat_1091_StrConcat (  struct StrConcat_1092  field0 ,  char  field1 ) {
    return ( struct StrConcat_1091 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1096 (    struct StrConcat_986  self1169 ) {
    struct StrConcat_986  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str966 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1095 (    struct StrConcat_1093  self1169 ) {
    struct StrConcat_1093  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1096 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1094 (    struct StrConcat_1092  self1169 ) {
    struct StrConcat_1092  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1095 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str966 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1090 (    struct StrConcat_1091  self1169 ) {
    struct StrConcat_1091  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1094 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1099 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_1099 StrConcat_1099_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1099 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1098 {
    struct StrConcat_1099  field0;
    char  field1;
};

static struct StrConcat_1098 StrConcat_1098_StrConcat (  struct StrConcat_1099  field0 ,  char  field1 ) {
    return ( struct StrConcat_1098 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1100 (    struct StrConcat_1099  self1169 ) {
    struct StrConcat_1099  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1097 (    struct StrConcat_1098  self1169 ) {
    struct StrConcat_1098  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1100 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1105 {
    struct StrConcat_1098  field0;
    uint8_t  field1;
};

static struct StrConcat_1105 StrConcat_1105_StrConcat (  struct StrConcat_1098  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1105 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1104 {
    struct StrConcat_1105  field0;
    char  field1;
};

static struct StrConcat_1104 StrConcat_1104_StrConcat (  struct StrConcat_1105  field0 ,  char  field1 ) {
    return ( struct StrConcat_1104 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1103 {
    struct StrConcat_1104  field0;
    uint8_t  field1;
};

static struct StrConcat_1103 StrConcat_1103_StrConcat (  struct StrConcat_1104  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1103 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1102 {
    struct StrConcat_1103  field0;
    char  field1;
};

static struct StrConcat_1102 StrConcat_1102_StrConcat (  struct StrConcat_1103  field0 ,  char  field1 ) {
    return ( struct StrConcat_1102 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1108 (    struct StrConcat_1105  self1169 ) {
    struct StrConcat_1105  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1097 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1107 (    struct StrConcat_1104  self1169 ) {
    struct StrConcat_1104  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1108 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1106 (    struct StrConcat_1103  self1169 ) {
    struct StrConcat_1103  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1107 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1101 (    struct StrConcat_1102  self1169 ) {
    struct StrConcat_1102  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1106 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_421   chars1109 (    struct StrConcat_971  self1175 ) {
    return ( (  into_dash_iter970 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_428   chars1110 (    struct StrConcat_986  self1175 ) {
    return ( (  into_dash_iter985 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_432   chars1111 (    struct StrConcat_988  self1175 ) {
    return ( (  into_dash_iter987 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_442   chars1112 (    struct StrConcat_1014  self1175 ) {
    return ( (  into_dash_iter1013 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_453   chars1113 (    struct StrConcat_1023  self1175 ) {
    return ( (  into_dash_iter1022 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_421   chars1114 (    struct StrConcat_1028  self1175 ) {
    return ( (  into_dash_iter1027 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_421   chars1115 (    struct StrConcat_1042  self1175 ) {
    return ( (  into_dash_iter1041 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_457   chars1116 (    struct StrConcat_1046  self1175 ) {
    return ( (  into_dash_iter1045 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_462   chars1117 (    struct StrConcat_1057  self1175 ) {
    return ( (  into_dash_iter1056 ) ( (  self1175 ) ) );
}

static  struct TakeWhile_558   chars1118 (    struct TakeWhile_558  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_562   chars1119 (    struct TakeWhile_562  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_567   chars1120 (    struct TakeWhile_567  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_569   chars1121 (    struct TakeWhile_569  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_580   chars1122 (    struct TakeWhile_580  self1285 ) {
    return (  self1285 );
}

static  bool   eq1123 (    struct TakeWhile_569  l1295 ,    char  r1297 ) {
    struct TakeWhile_569  temp1124 = ( (  chars1121 ) ( (  l1295 ) ) );
    struct TakeWhile_569 *  l1298 = ( &temp1124 );
    struct AppendIter_425  temp1125 = ( (  chars961 ) ( (  r1297 ) ) );
    struct AppendIter_425 *  r1299 = ( &temp1125 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next578 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next488 ) ( (  r1299 ) ) );
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

static  bool   eq1126 (    struct TakeWhile_569  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_569  temp1127 = ( (  chars1121 ) ( (  l1295 ) ) );
    struct TakeWhile_569 *  l1298 = ( &temp1127 );
    struct ConstStrIter_350  temp1128 = ( (  chars960 ) ( (  r1297 ) ) );
    struct ConstStrIter_350 *  r1299 = ( &temp1128 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next578 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next367 ) ( (  r1299 ) ) );
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

static  bool   eq1129 (    struct TakeWhile_580  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_580  temp1130 = ( (  chars1122 ) ( (  l1295 ) ) );
    struct TakeWhile_580 *  l1298 = ( &temp1130 );
    struct ConstStrIter_350  temp1131 = ( (  chars960 ) ( (  r1297 ) ) );
    struct ConstStrIter_350 *  r1299 = ( &temp1131 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next579 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next367 ) ( (  r1299 ) ) );
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

static  uint8_t   char_dash_u81132 (    char  c1315 ) {
    return ( (  cast220 ) ( (  c1315 ) ) );
}

static  char   i32_dash_char1133 (    int32_t  i1318 ) {
    return ( (  cast224 ) ( (  i1318 ) ) );
}

static  bool   eq1134 (    const char*  l1331 ,    const char*  r1333 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1331 ) ,  (  r1333 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable1135 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined163 ) ( ) );
}

static  enum Unit_13   unreachable1136 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined165 ) ( ) );
}

static  enum Unit_13   panic1137 (    struct StrConcat_1059  errmsg1346 ) {
    ( (  print_dash_str1062 ) ( ( ( StrConcat_1063_StrConcat ) ( ( ( StrConcat_1064_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1138 (    struct StrConcat_1004  errmsg1346 ) {
    ( (  print_dash_str1068 ) ( ( ( StrConcat_1069_StrConcat ) ( ( ( StrConcat_1070_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1139 (    const char*  errmsg1346 ) {
    ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1140 (    struct StrConcat_1073  errmsg1346 ) {
    ( (  print_dash_str1074 ) ( ( ( StrConcat_1075_StrConcat ) ( ( ( StrConcat_1076_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1141 (    struct StrConcat_971  errmsg1346 ) {
    ( (  print_dash_str1082 ) ( ( ( StrConcat_1083_StrConcat ) ( ( ( StrConcat_1084_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1142 (    struct StrConcat_1060  errmsg1346 ) {
    ( (  print_dash_str1086 ) ( ( ( StrConcat_1087_StrConcat ) ( ( ( StrConcat_1088_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   panic_prime_1143 (    const char*  errmsg1349 ) {
    ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1349 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   assert1144 (    bool  cond1352 ,    const char*  msg1354 ) {
    if ( ( ! (  cond1352 ) ) ) {
        ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1354 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1145 (    struct Maybe_308  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_308  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_308_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_308_Just_t ) {
        return ( dref1362 .stuff .Maybe_308_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1146 (    struct Maybe_356  x1359 ,    struct StrConcat_1059  errmsg1361 ) {
    struct Maybe_356  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_356_None_t ) {
        ( (  panic1137 ) ( (  errmsg1361 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_356_Just_t ) {
        return ( dref1362 .stuff .Maybe_356_Just_s .field0 );
    }
}

struct Maybe_1148 {
    enum {
        Maybe_1148_None_t,
        Maybe_1148_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58  field0;
        } Maybe_1148_Just_s;
    } stuff;
};

static struct Maybe_1148 Maybe_1148_Just (  struct Cell_58  field0 ) {
    return ( struct Maybe_1148 ) { .tag = Maybe_1148_Just_t, .stuff = { .Maybe_1148_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58   or_dash_fail1147 (    struct Maybe_1148  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_1148  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1148_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1148_Just_t ) {
        return ( dref1362 .stuff .Maybe_1148_Just_s .field0 );
    }
}

struct Maybe_1150 {
    enum {
        Maybe_1150_None_t,
        Maybe_1150_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1150_Just_s;
    } stuff;
};

static struct Maybe_1150 Maybe_1150_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1150 ) { .tag = Maybe_1150_Just_t, .stuff = { .Maybe_1150_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1149 (    struct Maybe_1150  x1359 ,    struct StrConcat_1004  errmsg1361 ) {
    struct Maybe_1150  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1150_None_t ) {
        ( (  panic1138 ) ( (  errmsg1361 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1150_Just_t ) {
        return ( dref1362 .stuff .Maybe_1150_Just_s .field0 );
    }
}

static  struct Action_152   or_dash_fail1151 (    struct Maybe_466  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_466  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_466_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined151 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_466_Just_t ) {
        return ( dref1362 .stuff .Maybe_466_Just_s .field0 );
    }
}

static  struct DynStr_136   or_dash_fail1152 (    struct Maybe_356  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_356  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_356_None_t ) {
        ( (  panic1139 ) ( (  errmsg1361 ) ) );
        return ( (  undefined135 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_356_Just_t ) {
        return ( dref1362 .stuff .Maybe_356_Just_s .field0 );
    }
}

static  struct List_160   or_dash_fail1153 (    struct Maybe_883  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_883  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_883_None_t ) {
        ( (  panic1139 ) ( (  errmsg1361 ) ) );
        return ( (  undefined159 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_883_Just_t ) {
        return ( dref1362 .stuff .Maybe_883_Just_s .field0 );
    }
}

struct Maybe_1155 {
    enum {
        Maybe_1155_None_t,
        Maybe_1155_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58 *  field0;
        } Maybe_1155_Just_s;
    } stuff;
};

static struct Maybe_1155 Maybe_1155_Just (  struct Cell_58 *  field0 ) {
    return ( struct Maybe_1155 ) { .tag = Maybe_1155_Just_t, .stuff = { .Maybe_1155_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58 *   or_dash_fail1154 (    struct Maybe_1155  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_1155  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1155_None_t ) {
        ( (  panic1139 ) ( (  errmsg1361 ) ) );
        return ( (  undefined167 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1155_Just_t ) {
        return ( dref1362 .stuff .Maybe_1155_Just_s .field0 );
    }
}

static  struct Cursor_154   or_dash_else1156 (    struct Maybe_157  self1366 ,    struct Cursor_154  alt1368 ) {
    struct Maybe_157  dref1369 = (  self1366 );
    if ( dref1369.tag == Maybe_157_None_t ) {
        return (  alt1368 );
    }
    else if ( dref1369.tag == Maybe_157_Just_t ) {
        return ( dref1369 .stuff .Maybe_157_Just_s .field0 );
    }
}

static  struct Slice_322   empty1157 (  ) {
    return ( (struct Slice_322) { .f_ptr = ( (  null_dash_ptr298 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1158 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr299 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_413   empty1159 (  ) {
    return ( (struct Slice_413) { .f_ptr = ( (  null_dash_ptr301 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_161   empty1160 (  ) {
    return ( (struct Slice_161) { .f_ptr = ( (  null_dash_ptr303 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1161 (    struct Slice_322  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1395 = ( (  offset_dash_ptr171 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Cell_58 *   get_dash_ptr1162 (    struct Slice_632  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1395 = ( (  offset_dash_ptr177 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Either_182 *   get_dash_ptr1163 (    struct Slice_413  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Either_182 *  elem_dash_ptr1395 = ( (  offset_dash_ptr181 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Action_152 *   get_dash_ptr1164 (    struct Slice_161  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Action_152 *  elem_dash_ptr1395 = ( (  offset_dash_ptr179 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

struct Slice_1166 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_308   try_dash_get1165 (    struct Slice_1166  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    const char* *  elem_dash_ptr1401 = ( (  offset_dash_ptr169 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_308_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Maybe_1148   try_dash_get1167 (    struct Slice_632  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1148) { .tag = Maybe_1148_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1401 = ( (  offset_dash_ptr177 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_1148_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Maybe_466   try_dash_get1168 (    struct Slice_161  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    struct Action_152 *  elem_dash_ptr1401 = ( (  offset_dash_ptr179 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_466_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  const char*   get1169 (    struct Slice_1166  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1145 ) ( ( (  try_dash_get1165 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1170 (    struct Slice_632  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1147 ) ( ( (  try_dash_get1167 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Action_152   get1171 (    struct Slice_161  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1151 ) ( ( (  try_dash_get1168 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1172 (    struct Slice_322  slice1409 ,    size_t  i1411 ,    struct List_3  x1413 ) {
    struct List_3 *  ep1414 = ( (  get_dash_ptr1161 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1173 (    struct Slice_5  slice1409 ,    size_t  i1411 ,    char  x1413 ) {
    char *  ep1414 = ( (  get_dash_ptr30 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1174 (    struct Slice_632  slice1409 ,    size_t  i1411 ,    struct Cell_58  x1413 ) {
    struct Cell_58 *  ep1414 = ( (  get_dash_ptr1162 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1175 (    struct Slice_161  slice1409 ,    size_t  i1411 ,    struct Action_152  x1413 ) {
    struct Action_152 *  ep1414 = ( (  get_dash_ptr1164 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1176 (    struct Slice_413  slice1409 ,    size_t  i1411 ,    struct Either_182  x1413 ) {
    struct Either_182 *  ep1414 = ( (  get_dash_ptr1163 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  struct Slice_413   subslice1177 (    struct Slice_413  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct Either_182 *  begin_dash_ptr1422 = ( (  offset_dash_ptr181 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_413) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_413) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct Slice_5   from1178 (    struct Slice_5  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice335 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct Slice_413   from1179 (    struct Slice_413  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice1177 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct Slice_322   from1180 (    struct Slice_322  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice326 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct SliceAddressIter_705   addresses1181 (    struct Slice_322  slice1475 ) {
    return ( (struct SliceAddressIter_705) { .f_slice = (  slice1475 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam652 (   struct env652 env ,    struct Tuple2_387  dref1489 ) {
    return ( (  set1173 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size311 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1182 (    struct Slice_5  src1486 ,    struct Slice_5  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1140 ) ( ( ( StrConcat_1073_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env652 envinst652 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each651 ) ( ( (  zip529 ) ( (  src1486 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv652){ .fun = lam652, .env = envinst652 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam660 (   struct env660 env ,    struct Tuple2_392  dref1489 ) {
    return ( (  set1172 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size311 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1183 (    struct Slice_322  src1486 ,    struct Slice_322  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1140 ) ( ( ( StrConcat_1073_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env660 envinst660 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each659 ) ( ( (  zip528 ) ( (  src1486 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv660){ .fun = lam660, .env = envinst660 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1185 (    struct Tuple2_475  dref1497 ) {
    return (  eq47 ( ( dref1497 .field0 ) , ( dref1497 .field1 ) ) );
}

static  bool   eq1184 (    struct Slice_5  l1494 ,    struct Slice_5  r1496 ) {
    if ( ( !  eq45 ( ( (  l1494 ) .f_count ) , ( (  r1496 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all864 ) ( ( (  zip536 ) ( (  l1494 ) ,  (  r1496 ) ) ) ,  (  lam1185 ) ) );
}

static  const char*   elem_dash_get1186 (    struct Slice_1166  self1502 ,    size_t  idx1504 ) {
    return ( (  get1169 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  struct Cell_58   elem_dash_get1187 (    struct Slice_632  self1502 ,    size_t  idx1504 ) {
    return ( (  get1170 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  char   elem_dash_get1188 (    struct Slice_5  self1502 ,    size_t  idx1504 ) {
    return ( (  get358 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  struct Action_152   elem_dash_get1189 (    struct Slice_161  self1502 ,    size_t  idx1504 ) {
    return ( (  get1171 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

struct SliceReversedIter_1191 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1191   reversed1190 (    struct Slice_161  slice1530 ) {
    return ( (struct SliceReversedIter_1191) { .f_slice = (  slice1530 ) , .f_current_dash_offset = ( (  slice1530 ) .f_count ) } );
}

static  struct SliceReversedIter_1191   into_dash_iter1192 (    struct SliceReversedIter_1191  self1533 ) {
    return (  self1533 );
}

static  struct Maybe_466   next1193 (    struct SliceReversedIter_1191 *  self1536 ) {
    size_t  off1537 = ( ( * (  self1536 ) ) .f_current_dash_offset );
    if ( (  eq45 ( (  off1537 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    (*  self1536 ) .f_current_dash_offset = (  op_dash_sub99 ( (  off1537 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_466_Just ) ( (  elem_dash_get1189 ( ( ( * (  self1536 ) ) .f_slice ) , ( ( * (  self1536 ) ) .f_current_dash_offset ) ) ) ) );
}

static  enum Unit_13   lam631 (   struct env631 env ,    int32_t  i1544 ) {
    return ( (  set1174 ) ( ( env.s1540 ) ,  ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ,  ( ( env.fun1542 ) ( (  elem_dash_get1187 ( ( env.s1540 ) , ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1194 (    struct Slice_632  s1540 ,    struct Cell_58 (*  fun1542 )(    struct Cell_58  ) ) {
    struct env631 envinst631 = {
        .s1540 =  s1540 ,
        .fun1542 =  fun1542 ,
    };
    ( (  for_dash_each630 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1540 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv631){ .fun = lam631, .env = envinst631 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam636 (   struct env636 env ,    int32_t  i1544 ) {
    return ( (  set1174 ) ( ( env.s1540 ) ,  ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ,  ( ( env.fun1542 ) ( (  elem_dash_get1187 ( ( env.s1540 ) , ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1195 (    struct Slice_632  s1540 ,    struct Cell_58 (*  fun1542 )(    struct Cell_58  ) ) {
    struct env636 envinst636 = {
        .s1540 =  s1540 ,
        .fun1542 =  fun1542 ,
    };
    ( (  for_dash_each635 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1540 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv636){ .fun = lam636, .env = envinst636 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam711 (   struct env711 env ,    int32_t  i1544 ) {
    return ( (  set1174 ) ( ( env.s1540 ) ,  ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ,  ( ( env.fun1542 ) ( (  elem_dash_get1187 ( ( env.s1540 ) , ( (  i32_dash_size311 ) ( (  i1544 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1196 (    struct Slice_632  s1540 ,    struct Cell_58 (*  fun1542 )(    struct Cell_58  ) ) {
    struct env711 envinst711 = {
        .s1540 =  s1540 ,
        .fun1542 =  fun1542 ,
    };
    ( (  for_dash_each710 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1540 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv711){ .fun = lam711, .env = envinst711 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_901   find_dash_slice1197 (    struct Slice_5  haystack1547 ,    struct Slice_5  needle1549 ) {
    struct RangeIter_403  temp1198 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1547 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1549 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1199 =  next404 (&temp1198);
        if (  __cond1199 .tag == 0 ) {
            break;
        }
        int32_t  i1551 =  __cond1199 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1184 ( ( (  subslice335 ) ( (  haystack1547 ) ,  ( (  i32_dash_size311 ) ( (  i1551 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1551 ) ) ) , ( (  needle1549 ) .f_count ) ) ) ) ) , (  needle1549 ) ) ) ) {
            return ( ( Maybe_901_Just ) ( ( (  i32_dash_size311 ) ( (  i1551 ) ) ) ) );
        }
    }
    return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
}

static  struct Maybe_901   find_dash_last_dash_occurence_dash_of_dash_slice1200 (    struct Slice_5  haystack1554 ,    struct Slice_5  needle1556 ) {
    struct Maybe_901  occ1557 = ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    struct RangeIter_403  temp1201 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1554 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1556 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1202 =  next404 (&temp1201);
        if (  __cond1202 .tag == 0 ) {
            break;
        }
        int32_t  i1559 =  __cond1202 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1184 ( ( (  subslice335 ) ( (  haystack1554 ) ,  ( (  i32_dash_size311 ) ( (  i1559 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1559 ) ) ) , ( (  needle1556 ) .f_count ) ) ) ) ) , (  needle1556 ) ) ) ) {
            occ1557 = ( ( Maybe_901_Just ) ( ( (  i32_dash_size311 ) ( (  i1559 ) ) ) ) );
        }
    }
    return (  occ1557 );
}

static  enum CAllocator_4   idc1203 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_322   allocate1204 (    enum CAllocator_4  dref1571 ,    size_t  count1573 ) {
    if (!(  dref1571 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1574 = ( ( ( (  get_dash_typesize184 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1575 = ( (  cast_dash_ptr230 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1574 ) , (  count1573 ) ) ) ) ) ) );
    return ( (struct Slice_322) { .f_ptr = (  ptr1575 ) , .f_count = (  count1573 ) } );
}

static  struct Slice_5   allocate1205 (    enum CAllocator_4  dref1571 ,    size_t  count1573 ) {
    if (!(  dref1571 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1574 = ( ( ( (  get_dash_typesize187 ) ( ) ) ) .f_size );
    char *  ptr1575 = ( (  cast_dash_ptr233 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1574 ) , (  count1573 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1575 ) , .f_count = (  count1573 ) } );
}

static  struct Slice_632   allocate1206 (    enum CAllocator_4  dref1571 ,    size_t  count1573 ) {
    if (!(  dref1571 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1574 = ( ( ( (  get_dash_typesize190 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1575 = ( (  cast_dash_ptr246 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1574 ) , (  count1573 ) ) ) ) ) ) );
    return ( (struct Slice_632) { .f_ptr = (  ptr1575 ) , .f_count = (  count1573 ) } );
}

static  struct Slice_161   allocate1207 (    enum CAllocator_4  dref1571 ,    size_t  count1573 ) {
    if (!(  dref1571 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1574 = ( ( ( (  get_dash_typesize193 ) ( ) ) ) .f_size );
    struct Action_152 *  ptr1575 = ( (  cast_dash_ptr253 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1574 ) , (  count1573 ) ) ) ) ) ) );
    return ( (struct Slice_161) { .f_ptr = (  ptr1575 ) , .f_count = (  count1573 ) } );
}

static  struct Slice_413   allocate1208 (    enum CAllocator_4  dref1571 ,    size_t  count1573 ) {
    if (!(  dref1571 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1574 = ( ( ( (  get_dash_typesize196 ) ( ) ) ) .f_size );
    struct Either_182 *  ptr1575 = ( (  cast_dash_ptr254 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1574 ) , (  count1573 ) ) ) ) ) ) );
    return ( (struct Slice_413) { .f_ptr = (  ptr1575 ) , .f_count = (  count1573 ) } );
}

static  enum Unit_13   free1209 (    enum CAllocator_4  dref1577 ,    struct Slice_322  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr231 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1210 (    enum CAllocator_4  dref1577 ,    struct Slice_5  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr234 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1211 (    enum CAllocator_4  dref1577 ,    struct Slice_413  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr252 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1212 (    enum CAllocator_4  dref1577 ,    struct Slice_161  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr255 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1214 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1213 (    enum CAllocator_4  dref1577 ,    struct Slice_1214  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr257 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1215 (    enum CAllocator_4  dref1577 ,    struct Slice_632  slice1579 ) {
    if (!(  dref1577 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr259 ) ( ( (  slice1579 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct DynStr_136   clone_dash_01216 (    struct DynStr_136  s1621 ,    enum CAllocator_4  al1623 ) {
    size_t  cnt1624 = ( ( (  s1621 ) .f_contents ) .f_count );
    struct Slice_5  nus1625 = ( (  allocate1205 ) ( (  al1623 ) ,  (  op_dash_add98 ( (  cnt1624 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to1182 ) ( ( (  s1621 ) .f_contents ) ,  (  nus1625 ) ) );
    ( (  set1173 ) ( (  nus1625 ) ,  (  cnt1624 ) ,  ( (  from_dash_charlike1 ) ( ( "\x00" ) ) ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( (  nus1625 ) .f_ptr ) , .f_count = (  cnt1624 ) } ) } );
}

static  struct DynStr_136   clone1217 (    struct DynStr_136  s1628 ,    enum CAllocator_4  al1630 ) {
    return ( (  clone_dash_01216 ) ( (  s1628 ) ,  (  al1630 ) ) );
}

static  uint8_t *   get_dash_ptr1218 (    struct Array_142 *  arr1651 ,    size_t  i1654 ) {
    if ( ( (  cmp9 ( (  i1654 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1654 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1654 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1655 = ( ( (  cast_dash_ptr240 ) ( (  arr1651 ) ) ) );
    return ( (  offset_dash_ptr175 ) ( (  p1655 ) ,  ( (int64_t ) (  i1654 ) ) ) );
}

static  char *   get_dash_ptr1219 (    struct Array_211 *  arr1651 ,    size_t  i1654 ) {
    if ( ( (  cmp9 ( (  i1654 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1654 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1654 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1655 = ( ( (  cast_dash_ptr251 ) ( (  arr1651 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1655 ) ,  ( (int64_t ) (  i1654 ) ) ) );
}

static  enum Unit_13   set1220 (    struct Array_142 *  arr1664 ,    size_t  i1667 ,    uint8_t  e1669 ) {
    uint8_t *  p1670 = ( (  get_dash_ptr1218 ) ( (  arr1664 ) ,  (  i1667 ) ) );
    (*  p1670 ) = (  e1669 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1221 (    struct Array_211 *  arr1664 ,    size_t  i1667 ,    char  e1669 ) {
    char *  p1670 = ( (  get_dash_ptr1219 ) ( (  arr1664 ) ,  (  i1667 ) ) );
    (*  p1670 ) = (  e1669 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1222 (    struct Array_211 *  arr1673 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast222 ) ( (  arr1673 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1223 (    char  c1734 ) {
    return ( ( (  eq47 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1224 (    char  c1737 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c1737 ) ) ) );
}

static  bool   is_dash_alpha1225 (    char  c1743 ) {
    return ( ( (  between957 ) ( (  c1743 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between957 ) ( (  c1743 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1226 (    char  c1746 ) {
    return ( (  between957 ) ( (  c1746 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1227 (    char  c1749 ) {
    return ( ( (  is_dash_alpha1225 ) ( (  c1749 ) ) ) || ( (  is_dash_digit1226 ) ( (  c1749 ) ) ) );
}

static  struct LineIter_342   lines1228 (    struct DynStr_136  s1753 ) {
    return ( (struct LineIter_342) { .f_og = (  s1753 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1229 (    char  c1782 ) {
    return ( (  cmp80 ( ( (  char_dash_i32953 ) ( (  c1782 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32953 ) ( (  c1782 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_369   parse_dash_digit1230 (    char  c1785 ) {
    if ( ( (  is_dash_digit1229 ) ( (  c1785 ) ) ) ) {
        return ( ( Maybe_369_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32953 ) ( (  c1785 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
}

static  struct Maybe_801   sequence_dash_maybe1232 (    char  e1791 ,    struct Maybe_801  b1793 ) {
    struct Maybe_801  dref1794 = (  b1793 );
    if ( dref1794.tag == Maybe_801_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    else if ( dref1794.tag == Maybe_801_Just_t ) {
        struct Maybe_369  dref1796 = ( (  parse_dash_digit1230 ) ( (  e1791 ) ) );
        if ( dref1796.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
        }
        else if ( dref1796.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_801_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1794 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1796 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_801   parse_dash_int1231 (    struct TakeWhile_558  s1788 ) {
    struct TakeWhile_558  cs1798 = ( (  chars1118 ) ( (  s1788 ) ) );
    struct Maybe_49  dref1799 = ( (  head867 ) ( (  cs1798 ) ) );
    if ( dref1799.tag == Maybe_49_Just_t ) {
        return ( (  reduce800 ) ( (  cs1798 ) ,  ( ( Maybe_801_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1232 ) ) );
    }
    else if ( dref1799.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
}

static  struct Maybe_801   sequence_dash_maybe1234 (    char  e1791 ,    struct Maybe_801  b1793 ) {
    struct Maybe_801  dref1794 = (  b1793 );
    if ( dref1794.tag == Maybe_801_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    else if ( dref1794.tag == Maybe_801_Just_t ) {
        struct Maybe_369  dref1796 = ( (  parse_dash_digit1230 ) ( (  e1791 ) ) );
        if ( dref1796.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
        }
        else if ( dref1796.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_801_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1794 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1796 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_801   parse_dash_int1233 (    struct TakeWhile_569  s1788 ) {
    struct TakeWhile_569  cs1798 = ( (  chars1121 ) ( (  s1788 ) ) );
    struct Maybe_49  dref1799 = ( (  head871 ) ( (  cs1798 ) ) );
    if ( dref1799.tag == Maybe_49_Just_t ) {
        return ( (  reduce815 ) ( (  cs1798 ) ,  ( ( Maybe_801_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1234 ) ) );
    }
    else if ( dref1799.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1235 (    struct List_323 *  list1804 ,    size_t  i1806 ) {
    if ( ( (  cmp9 ( (  i1806 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1806 ) , ( ( * (  list1804 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1806 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1804 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1161 ) ( ( ( * (  list1804 ) ) .f_elements ) ,  (  i1806 ) ) );
}

static  struct Either_182 *   get_dash_ptr1236 (    struct List_895 *  list1804 ,    size_t  i1806 ) {
    if ( ( (  cmp9 ( (  i1806 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1806 ) , ( ( * (  list1804 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1806 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1804 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1163 ) ( ( ( * (  list1804 ) ) .f_elements ) ,  (  i1806 ) ) );
}

static  struct List_3   get1237 (    struct List_323 *  list1814 ,    size_t  i1816 ) {
    return ( * ( (  get_dash_ptr1235 ) ( (  list1814 ) ,  (  i1816 ) ) ) );
}

static  struct Either_182   get1238 (    struct List_895 *  list1814 ,    size_t  i1816 ) {
    return ( * ( (  get_dash_ptr1236 ) ( (  list1814 ) ,  (  i1816 ) ) ) );
}

static  struct Maybe_49   try_dash_get1239 (    struct List_3 *  list1819 ,    size_t  i1821 ) {
    if ( (  cmp9 ( (  i1821 ) , ( ( * (  list1819 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1819 ) ,  (  i1821 ) ) ) ) );
}

static  struct Maybe_355   try_dash_get1240 (    struct List_323 *  list1819 ,    size_t  i1821 ) {
    if ( (  cmp9 ( (  i1821 ) , ( ( * (  list1819 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    return ( ( Maybe_355_Just ) ( ( (  get1237 ) ( (  list1819 ) ,  (  i1821 ) ) ) ) );
}

static  enum Unit_13   set1241 (    struct List_3 *  list1824 ,    size_t  i1826 ,    char  elem1828 ) {
    if ( ( (  cmp9 ( (  i1826 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1826 ) , ( ( * (  list1824 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1826 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1824 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1173 ) ( ( ( * (  list1824 ) ) .f_elements ) ,  (  i1826 ) ,  (  elem1828 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1242 (    struct List_323 *  list1824 ,    size_t  i1826 ,    struct List_3  elem1828 ) {
    if ( ( (  cmp9 ( (  i1826 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1826 ) , ( ( * (  list1824 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1826 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1824 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1172 ) ( ( ( * (  list1824 ) ) .f_elements ) ,  (  i1826 ) ,  (  elem1828 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_323   mk1243 (    enum CAllocator_4  al1834 ) {
    struct Slice_322  elements1835 = ( (  empty1157 ) ( ) );
    return ( (struct List_323) { .f_al = (  al1834 ) , .f_elements = (  elements1835 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1244 (    enum CAllocator_4  al1834 ) {
    struct Slice_5  elements1835 = ( (  empty1158 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1834 ) , .f_elements = (  elements1835 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_895   mk1245 (    enum CAllocator_4  al1834 ) {
    struct Slice_413  elements1835 = ( (  empty1159 ) ( ) );
    return ( (struct List_895) { .f_al = (  al1834 ) , .f_elements = (  elements1835 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_160   mk1246 (    enum CAllocator_4  al1834 ) {
    struct Slice_161  elements1835 = ( (  empty1160 ) ( ) );
    return ( (struct List_160) { .f_al = (  al1834 ) , .f_elements = (  elements1835 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1247 (    struct List_3 *  list1838 ) {
    ( (  free1210 ) ( ( ( * (  list1838 ) ) .f_al ) ,  ( ( * (  list1838 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1248 (    struct List_160 *  list1838 ) {
    ( (  free1212 ) ( ( ( * (  list1838 ) ) .f_al ) ,  ( ( * (  list1838 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1249 (    struct List_323 *  list1838 ) {
    ( (  free1209 ) ( ( ( * (  list1838 ) ) .f_al ) ,  ( ( * (  list1838 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam607 (   struct env607 env ,    struct Tuple2_392  dref1846 ) {
    return ( (  set1172 ) ( ( env.new_dash_slice1845 ) ,  ( (  i32_dash_size311 ) ( ( dref1846 .field1 ) ) ) ,  ( dref1846 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full621 (   struct env621 env ,    struct List_323 *  list1844 ) {
    if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1844 ) .f_elements = ( (  allocate1204 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( env.starting_dash_size1839 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , ( ( ( * (  list1844 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_322  new_dash_slice1845 = ( (  allocate1204 ) ( ( ( * (  list1844 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1844 ) ) .f_count ) , ( env.growth_dash_factor1840 ) ) ) ) );
            struct env607 envinst607 = {
                .new_dash_slice1845 =  new_dash_slice1845 ,
            };
            ( (  for_dash_each606 ) ( ( (  zip528 ) ( ( ( * (  list1844 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv607){ .fun = lam607, .env = envinst607 } ) ) );
            ( (  free1209 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( ( * (  list1844 ) ) .f_elements ) ) );
            (*  list1844 ) .f_elements = (  new_dash_slice1845 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam615 (   struct env615 env ,    struct Tuple2_387  dref1846 ) {
    return ( (  set1173 ) ( ( env.new_dash_slice1845 ) ,  ( (  i32_dash_size311 ) ( ( dref1846 .field1 ) ) ) ,  ( dref1846 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full347 (   struct env347 env ,    struct List_3 *  list1844 ) {
    if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1844 ) .f_elements = ( (  allocate1205 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( env.starting_dash_size1839 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , ( ( ( * (  list1844 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1845 = ( (  allocate1205 ) ( ( ( * (  list1844 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1844 ) ) .f_count ) , ( env.growth_dash_factor1840 ) ) ) ) );
            struct env615 envinst615 = {
                .new_dash_slice1845 =  new_dash_slice1845 ,
            };
            ( (  for_dash_each614 ) ( ( (  zip529 ) ( ( ( * (  list1844 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv615){ .fun = lam615, .env = envinst615 } ) ) );
            ( (  free1210 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( ( * (  list1844 ) ) .f_elements ) ) );
            (*  list1844 ) .f_elements = (  new_dash_slice1845 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1250 {
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1840;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1839;
    ;
    ;
};

static  enum Unit_13   lam672 (   struct env672 env ,    struct Tuple2_465  dref1846 ) {
    return ( (  set1175 ) ( ( env.new_dash_slice1845 ) ,  ( (  i32_dash_size311 ) ( ( dref1846 .field1 ) ) ) ,  ( dref1846 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1250 (   struct env1250 env ,    struct List_160 *  list1844 ) {
    if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1844 ) .f_elements = ( (  allocate1207 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( env.starting_dash_size1839 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , ( ( ( * (  list1844 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_161  new_dash_slice1845 = ( (  allocate1207 ) ( ( ( * (  list1844 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1844 ) ) .f_count ) , ( env.growth_dash_factor1840 ) ) ) ) );
            struct env672 envinst672 = {
                .new_dash_slice1845 =  new_dash_slice1845 ,
            };
            ( (  for_dash_each671 ) ( ( (  zip532 ) ( ( ( * (  list1844 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv672){ .fun = lam672, .env = envinst672 } ) ) );
            ( (  free1212 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( ( * (  list1844 ) ) .f_elements ) ) );
            (*  list1844 ) .f_elements = (  new_dash_slice1845 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1251 {
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1840;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1839;
    ;
    ;
};

static  enum Unit_13   lam676 (   struct env676 env ,    struct Tuple2_470  dref1846 ) {
    return ( (  set1176 ) ( ( env.new_dash_slice1845 ) ,  ( (  i32_dash_size311 ) ( ( dref1846 .field1 ) ) ) ,  ( dref1846 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1251 (   struct env1251 env ,    struct List_895 *  list1844 ) {
    if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1844 ) .f_elements = ( (  allocate1208 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( env.starting_dash_size1839 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1844 ) ) .f_count ) , ( ( ( * (  list1844 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_413  new_dash_slice1845 = ( (  allocate1208 ) ( ( ( * (  list1844 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1844 ) ) .f_count ) , ( env.growth_dash_factor1840 ) ) ) ) );
            struct env676 envinst676 = {
                .new_dash_slice1845 =  new_dash_slice1845 ,
            };
            ( (  for_dash_each675 ) ( ( (  zip534 ) ( ( ( * (  list1844 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv676){ .fun = lam676, .env = envinst676 } ) ) );
            ( (  free1211 ) ( ( ( * (  list1844 ) ) .f_al ) ,  ( ( * (  list1844 ) ) .f_elements ) ) );
            (*  list1844 ) .f_elements = (  new_dash_slice1845 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add620 (   struct env620 env ,    struct List_323 *  list1851 ,    struct List_3  elem1853 ) {
    struct funenv621  temp1252 = ( (struct funenv621){ .fun = grow_dash_if_dash_full621, .env =  env.envinst621  } );
    ( temp1252.fun ( temp1252.env ,  (  list1851 ) ) );
    ( (  set1172 ) ( ( ( * (  list1851 ) ) .f_elements ) ,  ( ( * (  list1851 ) ) .f_count ) ,  (  elem1853 ) ) );
    (*  list1851 ) .f_count = (  op_dash_add98 ( ( ( * (  list1851 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add346 (   struct env346 env ,    struct List_3 *  list1851 ,    char  elem1853 ) {
    struct funenv347  temp1253 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1253.fun ( temp1253.env ,  (  list1851 ) ) );
    ( (  set1173 ) ( ( ( * (  list1851 ) ) .f_elements ) ,  ( ( * (  list1851 ) ) .f_count ) ,  (  elem1853 ) ) );
    (*  list1851 ) .f_count = (  op_dash_add98 ( ( ( * (  list1851 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1250 {
    enum Unit_13  (*fun) (  struct env1250  ,    struct List_160 *  );
    struct env1250 env;
};

struct env1254 {
    ;
    ;
    ;
    ;
    ;
    struct env1250 envinst1250;
};

static  enum Unit_13   add1254 (   struct env1254 env ,    struct List_160 *  list1851 ,    struct Action_152  elem1853 ) {
    struct funenv1250  temp1255 = ( (struct funenv1250){ .fun = grow_dash_if_dash_full1250, .env =  env.envinst1250  } );
    ( temp1255.fun ( temp1255.env ,  (  list1851 ) ) );
    ( (  set1175 ) ( ( ( * (  list1851 ) ) .f_elements ) ,  ( ( * (  list1851 ) ) .f_count ) ,  (  elem1853 ) ) );
    (*  list1851 ) .f_count = (  op_dash_add98 ( ( ( * (  list1851 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1251 {
    enum Unit_13  (*fun) (  struct env1251  ,    struct List_895 *  );
    struct env1251 env;
};

struct env1256 {
    ;
    ;
    ;
    ;
    ;
    struct env1251 envinst1251;
};

static  enum Unit_13   add1256 (   struct env1256 env ,    struct List_895 *  list1851 ,    struct Either_182  elem1853 ) {
    struct funenv1251  temp1257 = ( (struct funenv1251){ .fun = grow_dash_if_dash_full1251, .env =  env.envinst1251  } );
    ( temp1257.fun ( temp1257.env ,  (  list1851 ) ) );
    ( (  set1176 ) ( ( ( * (  list1851 ) ) .f_elements ) ,  ( ( * (  list1851 ) ) .f_count ) ,  (  elem1853 ) ) );
    (*  list1851 ) .f_count = (  op_dash_add98 ( ( ( * (  list1851 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1258 {
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
    ;
};

static  enum Unit_13   insert1258 (   struct env1258 env ,    struct List_3 *  list1856 ,    size_t  i1858 ,    char  elem1860 ) {
    if ( ( (  cmp9 ( (  i1858 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1858 ) , ( ( * (  list1856 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1858 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1856 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv346  temp1259 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
        ( temp1259.fun ( temp1259.env ,  (  list1856 ) ,  (  elem1860 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv347  temp1260 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1260.fun ( temp1260.env ,  (  list1856 ) ) );
    size_t  ii1861 = (  op_dash_sub99 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1861 ) , (  i1858 ) ) != 0 ) ) {
        ( (  set1173 ) ( ( ( * (  list1856 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1861 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1856 ) ,  (  ii1861 ) ) ) ) );
        if ( (  eq45 ( (  ii1861 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1861 = (  op_dash_sub99 ( (  ii1861 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1173 ) ( ( ( * (  list1856 ) ) .f_elements ) ,  (  i1858 ) ,  (  elem1860 ) ) );
    (*  list1856 ) .f_count = (  op_dash_add98 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1261 {
    ;
    ;
    ;
    ;
    struct env620 envinst620;
    ;
    ;
    ;
    struct env621 envinst621;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1261 (   struct env1261 env ,    struct List_323 *  list1856 ,    size_t  i1858 ,    struct List_3  elem1860 ) {
    if ( ( (  cmp9 ( (  i1858 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1858 ) , ( ( * (  list1856 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1858 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1856 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv620  temp1262 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
        ( temp1262.fun ( temp1262.env ,  (  list1856 ) ,  (  elem1860 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv621  temp1263 = ( (struct funenv621){ .fun = grow_dash_if_dash_full621, .env =  env.envinst621  } );
    ( temp1263.fun ( temp1263.env ,  (  list1856 ) ) );
    size_t  ii1861 = (  op_dash_sub99 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1861 ) , (  i1858 ) ) != 0 ) ) {
        ( (  set1172 ) ( ( ( * (  list1856 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1861 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1237 ) ( (  list1856 ) ,  (  ii1861 ) ) ) ) );
        if ( (  eq45 ( (  ii1861 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1861 = (  op_dash_sub99 ( (  ii1861 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1172 ) ( ( ( * (  list1856 ) ) .f_elements ) ,  (  i1858 ) ,  (  elem1860 ) ) );
    (*  list1856 ) .f_count = (  op_dash_add98 ( ( ( * (  list1856 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1264 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1841;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam656 (   struct env656 env ,    struct Tuple2_387  dref1867 ) {
    return ( (  set1241 ) ( ( env.list1864 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1867 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1867 .field0 ) ) );
}

static  enum Unit_13   remove1264 (   struct env1264 env ,    struct List_3 *  list1864 ,    size_t  i1866 ) {
    if ( ( (  cmp9 ( (  i1866 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1866 ) , ( ( * (  list1864 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1866 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1864 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env656 envinst656 = {
        .list1864 =  list1864 ,
    };
    ( (  for_dash_each655 ) ( ( (  drop395 ) ( ( (  zip530 ) ( ( * (  list1864 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1866 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv656){ .fun = lam656, .env = envinst656 } ) ) );
    (*  list1864 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1864 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1870 = ( ( ( * (  list1864 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1864 ) ) .f_count ) , ( env.shrink_dash_factor1841 ) ) ) , (  capacity1870 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1864 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1210 ) ( ( ( * (  list1864 ) ) .f_al ) ,  ( ( * (  list1864 ) ) .f_elements ) ) );
            (*  list1864 ) .f_elements = ( (  empty1158 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1871 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1864 ) ) .f_count ) , ( env.shrink_dash_factor1841 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1841 ) ) );
        struct Slice_5  new_dash_slice1872 = ( (  allocate1205 ) ( ( ( * (  list1864 ) ) .f_al ) ,  (  new_dash_size1871 ) ) );
        ( (  copy_dash_to1182 ) ( ( (  subslice335 ) ( ( ( * (  list1864 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1864 ) ) .f_count ) ) ) ,  (  new_dash_slice1872 ) ) );
        ( (  free1210 ) ( ( ( * (  list1864 ) ) .f_al ) ,  ( ( * (  list1864 ) ) .f_elements ) ) );
        (*  list1864 ) .f_elements = (  new_dash_slice1872 );
    }
    return ( Unit_13_Unit );
}

struct env1265 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1841;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam664 (   struct env664 env ,    struct Tuple2_392  dref1867 ) {
    return ( (  set1242 ) ( ( env.list1864 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1867 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1867 .field0 ) ) );
}

static  enum Unit_13   remove1265 (   struct env1265 env ,    struct List_323 *  list1864 ,    size_t  i1866 ) {
    if ( ( (  cmp9 ( (  i1866 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1866 ) , ( ( * (  list1864 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1866 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1864 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env664 envinst664 = {
        .list1864 =  list1864 ,
    };
    ( (  for_dash_each663 ) ( ( (  drop397 ) ( ( (  zip531 ) ( ( * (  list1864 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1866 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv664){ .fun = lam664, .env = envinst664 } ) ) );
    (*  list1864 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1864 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1870 = ( ( ( * (  list1864 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1864 ) ) .f_count ) , ( env.shrink_dash_factor1841 ) ) ) , (  capacity1870 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1864 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1209 ) ( ( ( * (  list1864 ) ) .f_al ) ,  ( ( * (  list1864 ) ) .f_elements ) ) );
            (*  list1864 ) .f_elements = ( (  empty1157 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1871 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1864 ) ) .f_count ) , ( env.shrink_dash_factor1841 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1841 ) ) );
        struct Slice_322  new_dash_slice1872 = ( (  allocate1204 ) ( ( ( * (  list1864 ) ) .f_al ) ,  (  new_dash_size1871 ) ) );
        ( (  copy_dash_to1183 ) ( ( (  subslice326 ) ( ( ( * (  list1864 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1864 ) ) .f_count ) ) ) ,  (  new_dash_slice1872 ) ) );
        ( (  free1209 ) ( ( ( * (  list1864 ) ) .f_al ) ,  ( ( * (  list1864 ) ) .f_elements ) ) );
        (*  list1864 ) .f_elements = (  new_dash_slice1872 );
    }
    return ( Unit_13_Unit );
}

static  struct Either_182   elem_dash_get1266 (    struct List_895  self1875 ,    size_t  k1877 ) {
    return ( (  get1238 ) ( ( & (  self1875 ) ) ,  (  k1877 ) ) );
}

struct funenv1264 {
    enum Unit_13  (*fun) (  struct env1264  ,    struct List_3 *  ,    size_t  );
    struct env1264 env;
};

struct env1267 {
    ;
    ;
    struct env1264 envinst1264;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   pop1267 (   struct env1267 env ,    struct List_3 *  list1886 ) {
    if ( (  eq45 ( ( ( * (  list1886 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1139 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1264  temp1268 = ( (struct funenv1264){ .fun = remove1264, .env =  env.envinst1264  } );
    return ( temp1268.fun ( temp1268.env ,  (  list1886 ) ,  (  op_dash_sub99 ( ( ( * (  list1886 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam611 (   struct env611 env ,    char  x1896 ) {
    struct funenv346  temp1269 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1269.fun ( temp1269.env ,  ( env.list1892 ) ,  (  x1896 ) ) );
}

static  enum Unit_13   add_dash_all345 (   struct env345 env ,    struct List_3 *  list1892 ,    struct DynStr_136  it1894 ) {
    struct env611 envinst611 = {
        .envinst346 = env.envinst346 ,
        .list1892 =  list1892 ,
    };
    ( (  for_dash_each610 ) ( (  it1894 ) ,  ( (struct funenv611){ .fun = lam611, .env = envinst611 } ) ) );
    return ( Unit_13_Unit );
}

struct env1270 {
    ;
    ;
    ;
    ;
    struct env620 envinst620;
    ;
};

static  enum Unit_13   lam619 (   struct env619 env ,    struct List_3  x1896 ) {
    struct funenv620  temp1271 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
    return ( temp1271.fun ( temp1271.env ,  ( env.list1892 ) ,  (  x1896 ) ) );
}

static  enum Unit_13   add_dash_all1270 (   struct env1270 env ,    struct List_323 *  list1892 ,    struct Map_341  it1894 ) {
    struct env619 envinst619 = {
        .envinst620 = env.envinst620 ,
        .list1892 =  list1892 ,
    };
    ( (  for_dash_each618 ) ( (  it1894 ) ,  ( (struct funenv619){ .fun = lam619, .env = envinst619 } ) ) );
    return ( Unit_13_Unit );
}

struct env1272 {
    ;
    ;
    struct env346 envinst346;
    ;
    ;
    ;
};

static  enum Unit_13   lam644 (   struct env644 env ,    char  x1896 ) {
    struct funenv346  temp1273 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1273.fun ( temp1273.env ,  ( env.list1892 ) ,  (  x1896 ) ) );
}

static  enum Unit_13   add_dash_all1272 (   struct env1272 env ,    struct List_3 *  list1892 ,    struct Slice_5  it1894 ) {
    struct env644 envinst644 = {
        .envinst346 = env.envinst346 ,
        .list1892 =  list1892 ,
    };
    ( (  for_dash_each643 ) ( (  it1894 ) ,  ( (struct funenv644){ .fun = lam644, .env = envinst644 } ) ) );
    return ( Unit_13_Unit );
}

struct env1274 {
    ;
    ;
    ;
    struct env346 envinst346;
    ;
    ;
};

static  enum Unit_13   lam648 (   struct env648 env ,    char  x1896 ) {
    struct funenv346  temp1275 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1275.fun ( temp1275.env ,  ( env.list1892 ) ,  (  x1896 ) ) );
}

static  enum Unit_13   add_dash_all1274 (   struct env1274 env ,    struct List_3 *  list1892 ,    struct List_3 *  it1894 ) {
    struct env648 envinst648 = {
        .envinst346 = env.envinst346 ,
        .list1892 =  list1892 ,
    };
    ( (  for_dash_each647 ) ( (  it1894 ) ,  ( (struct funenv648){ .fun = lam648, .env = envinst648 } ) ) );
    return ( Unit_13_Unit );
}

struct env1276 {
    ;
    ;
    ;
    ;
    struct env346 envinst346;
    ;
};

static  enum Unit_13   lam688 (   struct env688 env ,    char  x1896 ) {
    struct funenv346  temp1277 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1277.fun ( temp1277.env ,  ( env.list1892 ) ,  (  x1896 ) ) );
}

static  enum Unit_13   add_dash_all1276 (   struct env1276 env ,    struct List_3 *  list1892 ,    struct TakeWhile_560  it1894 ) {
    struct env688 envinst688 = {
        .envinst346 = env.envinst346 ,
        .list1892 =  list1892 ,
    };
    ( (  for_dash_each687 ) ( (  it1894 ) ,  ( (struct funenv688){ .fun = lam688, .env = envinst688 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1278 (    struct List_3 *  l1899 ,    size_t  new_dash_count1901 ) {
    (*  l1899 ) .f_count = ( (  min327 ) ( (  new_dash_count1901 ) ,  ( ( * (  l1899 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1279 (    struct List_895 *  l1899 ,    size_t  new_dash_count1901 ) {
    (*  l1899 ) .f_count = ( (  min327 ) ( (  new_dash_count1901 ) ,  ( ( * (  l1899 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list344 (   struct env344 env ,    struct DynStr_136  it1904 ,    enum CAllocator_4  al1906 ) {
    struct List_3  temp1280 = ( (  mk1244 ) ( (  al1906 ) ) );
    struct List_3 *  l1907 = ( &temp1280 );
    struct funenv345  temp1281 = ( (struct funenv345){ .fun = add_dash_all345, .env =  env.envinst345  } );
    ( temp1281.fun ( temp1281.env ,  (  l1907 ) ,  (  it1904 ) ) );
    return ( * (  l1907 ) );
}

struct funenv1270 {
    enum Unit_13  (*fun) (  struct env1270  ,    struct List_323 *  ,    struct Map_341  );
    struct env1270 env;
};

struct env1282 {
    ;
    ;
    ;
    ;
    ;
    struct env1270 envinst1270;
};

static  struct List_323   to_dash_list1282 (   struct env1282 env ,    struct Map_341  it1904 ,    enum CAllocator_4  al1906 ) {
    struct List_323  temp1283 = ( (  mk1243 ) ( (  al1906 ) ) );
    struct List_323 *  l1907 = ( &temp1283 );
    struct funenv1270  temp1284 = ( (struct funenv1270){ .fun = add_dash_all1270, .env =  env.envinst1270  } );
    ( temp1284.fun ( temp1284.env ,  (  l1907 ) ,  (  it1904 ) ) );
    return ( * (  l1907 ) );
}

static  struct Slice_5   to_dash_slice1285 (    struct List_3  l1910 ) {
    char *  ptr1911 = ( ( (  l1910 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1911 ) , .f_count = ( (  l1910 ) .f_count ) } );
}

static  struct Slice_413   to_dash_slice1286 (    struct List_895  l1910 ) {
    struct Either_182 *  ptr1911 = ( ( (  l1910 ) .f_elements ) .f_ptr );
    return ( (struct Slice_413) { .f_ptr = (  ptr1911 ) , .f_count = ( (  l1910 ) .f_count ) } );
}

static  struct Slice_322   to_dash_slice1287 (    struct List_323  l1910 ) {
    struct List_3 *  ptr1911 = ( ( (  l1910 ) .f_elements ) .f_ptr );
    return ( (struct Slice_322) { .f_ptr = (  ptr1911 ) , .f_count = ( (  l1910 ) .f_count ) } );
}

static  struct Slice_161   to_dash_slice1288 (    struct List_160  l1910 ) {
    struct Action_152 *  ptr1911 = ( ( (  l1910 ) .f_elements ) .f_ptr );
    return ( (struct Slice_161) { .f_ptr = (  ptr1911 ) , .f_count = ( (  l1910 ) .f_count ) } );
}

static  struct SliceAddressIter_705   addresses1289 (    struct List_323  l1914 ) {
    return ( (  addresses1181 ) ( ( (  to_dash_slice1287 ) ( (  l1914 ) ) ) ) );
}

static  size_t   size1290 (    struct List_3 *  l1917 ) {
    return ( ( * (  l1917 ) ) .f_count );
}

static  size_t   size1291 (    struct List_323 *  l1917 ) {
    return ( ( * (  l1917 ) ) .f_count );
}

static  struct Maybe_1150   hex_dash_digit1292 (    char  c1945 ) {
    if ( ( (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1945 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1945 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp952 ( (  c1945 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1945 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1150) { .tag = Maybe_1150_None_t } );
}

static  uint32_t   lam1294 (    char  c1950 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64318 ) ( ( (  or_dash_fail1149 ) ( ( (  hex_dash_digit1292 ) ( (  c1950 ) ) ) ,  ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_1005_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1950 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1295 (    uint32_t  elem1952 ,    uint32_t  b1954 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1954 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1952 ) ) );
}

static  uint32_t   from_dash_hex1293 (    const char*  arr1948 ) {
    return ( (  reduce796 ) ( ( (  map374 ) ( (  arr1948 ) ,  (  lam1294 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1295 ) ) );
}

static  struct Maybe_308   get1296 (    const char*  s1988 ) {
    return ( (  from_dash_nullable_dash_c_dash_str307 ) ( ( ( getenv ) ( (  s1988 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1297 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1298 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1299 (    uint32_t  x1965 ,    uint32_t  y1967 ) {
    uint32_t  x1968 = (  op_dash_add92 ( (  x1965 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1969 = (  op_dash_add92 ( (  y1967 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str1090 ) ( ( ( StrConcat_1091_StrConcat ) ( ( ( StrConcat_1092_StrConcat ) ( ( ( StrConcat_1093_StrConcat ) ( ( ( StrConcat_986_StrConcat ) ( ( "\x1b[" ) ,  (  y1969 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1968 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1300 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_878   get_dash_dimensions1301 (  ) {
    struct Winsize_207  temp1302 = ( ( (  zeroed274 ) ( ) ) );
    struct Winsize_207 *  ws1973 = ( &temp1302 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws1973 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1973 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_878_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_878_Tuple2 ) ( ( (  u16_dash_u32314 ) ( ( ( * (  ws1973 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32314 ) ( ( ( * (  ws1973 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1303 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1304 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_718   query_dash_palette1305 (  ) {
    struct Maybe_308  colorterm1989 = ( (  get1296 ) ( ( "COLORTERM" ) ) );
    struct Maybe_308  dref1990 = (  colorterm1989 );
    if ( dref1990.tag == Maybe_308_Just_t ) {
        if ( ( (  eq1134 ( ( dref1990 .stuff .Maybe_308_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq1134 ( ( dref1990 .stuff .Maybe_308_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_718_PaletteRGB );
        }
    }
    else if ( dref1990.tag == Maybe_308_None_t ) {
    }
    struct Maybe_308  dref1992 = ( (  get1296 ) ( ( "TERM" ) ) );
    if ( dref1992.tag == Maybe_308_Just_t ) {
        if ( (  eq1134 ( ( dref1992 .stuff .Maybe_308_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_718_Palette8 );
        }
    }
    else if ( dref1992.tag == Maybe_308_None_t ) {
    }
    return ( ColorPalette_718_Palette16 );
}

static  enum Unit_13   set_dash_fg81306 (    enum Color8_60  color2008 ) {
    enum Color8_60  dref2009 = (  color2008 );
    switch (  dref2009 ) {
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

static  enum Unit_13   set_dash_fg161307 (    enum Color16_61  color2012 ) {
    enum Color16_61  dref2013 = (  color2012 );
    switch (  dref2013 ) {
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

static  enum Unit_13   set_dash_bg81308 (    enum Color8_60  color2016 ) {
    enum Color8_60  dref2017 = (  color2016 );
    switch (  dref2017 ) {
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

static  enum Unit_13   set_dash_bg161309 (    enum Color16_61  color2020 ) {
    enum Color16_61  dref2021 = (  color2020 );
    switch (  dref2021 ) {
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

static  enum Unit_13   reset_dash_colors1310 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1311 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561312 (    uint8_t  color2026 ) {
    ( (  print_dash_str1097 ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2026 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561313 (    uint8_t  color2029 ) {
    ( (  print_dash_str1097 ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2029 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1314 (    struct RGB_62  c2049 ) {
    ( (  print_dash_str1101 ) ( ( ( StrConcat_1102_StrConcat ) ( ( ( StrConcat_1103_StrConcat ) ( ( ( StrConcat_1104_StrConcat ) ( ( ( StrConcat_1105_StrConcat ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2049 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2049 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2049 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1315 (    struct RGB_62  c2052 ) {
    ( (  print_dash_str1101 ) ( ( ( StrConcat_1102_StrConcat ) ( ( ( StrConcat_1103_StrConcat ) ( ( ( StrConcat_1104_StrConcat ) ( ( ( StrConcat_1105_StrConcat ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2052 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2052 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2052 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1316 (    struct Color_59  c2070 ) {
    struct Color_59  dref2071 = (  c2070 );
    if ( dref2071.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1303 ) ( ) );
    }
    else if ( dref2071.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81306 ) ( ( dref2071 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2071.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161307 ) ( ( dref2071 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2071.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561312 ) ( ( dref2071 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2071.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1314 ) ( ( dref2071 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1317 (    struct Color_59  c2078 ) {
    struct Color_59  dref2079 = (  c2078 );
    if ( dref2079.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1304 ) ( ) );
    }
    else if ( dref2079.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81308 ) ( ( dref2079 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2079.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161309 ) ( ( dref2079 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2079.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561313 ) ( ( dref2079 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2079.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1315 ) ( ( dref2079 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1318 {
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
    ;
};

static  enum Unit_13   lam625 (   struct env625 env ,    char  c2135 ) {
    struct funenv346  temp1319 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1319.fun ( temp1319.env ,  ( & ( ( * ( env.builder2131 ) ) .f_chars ) ) ,  (  c2135 ) ) );
}

static  enum Unit_13   write1318 (   struct env1318 env ,    struct StrBuilder_626 *  builder2131 ,    const char*  s2133 ) {
    struct env625 envinst625 = {
        .envinst346 = env.envinst346 ,
        .builder2131 =  builder2131 ,
    };
    ( (  for_dash_each624 ) ( ( (  chars960 ) ( (  s2133 ) ) ) ,  ( (struct funenv625){ .fun = lam625, .env = envinst625 } ) ) );
    return ( Unit_13_Unit );
}

struct env1320 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam684 (   struct env684 env ,    char  c2135 ) {
    struct funenv346  temp1321 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1321.fun ( temp1321.env ,  ( & ( ( * ( env.builder2131 ) ) .f_chars ) ) ,  (  c2135 ) ) );
}

static  enum Unit_13   write1320 (   struct env1320 env ,    struct StrBuilder_626 *  builder2131 ,    char  s2133 ) {
    struct env684 envinst684 = {
        .envinst346 = env.envinst346 ,
        .builder2131 =  builder2131 ,
    };
    ( (  for_dash_each683 ) ( ( (  chars961 ) ( (  s2133 ) ) ) ,  ( (struct funenv684){ .fun = lam684, .env = envinst684 } ) ) );
    return ( Unit_13_Unit );
}

struct env1322 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam697 (   struct env697 env ,    char  c2135 ) {
    struct funenv346  temp1323 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1323.fun ( temp1323.env ,  ( & ( ( * ( env.builder2131 ) ) .f_chars ) ) ,  (  c2135 ) ) );
}

static  enum Unit_13   write1322 (   struct env1322 env ,    struct StrBuilder_626 *  builder2131 ,    struct TakeWhile_562  s2133 ) {
    struct env697 envinst697 = {
        .envinst346 = env.envinst346 ,
        .builder2131 =  builder2131 ,
    };
    ( (  for_dash_each696 ) ( ( (  chars1119 ) ( (  s2133 ) ) ) ,  ( (struct funenv697){ .fun = lam697, .env = envinst697 } ) ) );
    return ( Unit_13_Unit );
}

struct env1324 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
};

static  enum Unit_13   lam701 (   struct env701 env ,    char  c2135 ) {
    struct funenv346  temp1325 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1325.fun ( temp1325.env ,  ( & ( ( * ( env.builder2131 ) ) .f_chars ) ) ,  (  c2135 ) ) );
}

static  enum Unit_13   write1324 (   struct env1324 env ,    struct StrBuilder_626 *  builder2131 ,    struct TakeWhile_567  s2133 ) {
    struct env701 envinst701 = {
        .envinst346 = env.envinst346 ,
        .builder2131 =  builder2131 ,
    };
    ( (  for_dash_each700 ) ( ( (  chars1120 ) ( (  s2133 ) ) ) ,  ( (struct funenv701){ .fun = lam701, .env = envinst701 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1272 {
    enum Unit_13  (*fun) (  struct env1272  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1272 env;
};

struct env1326 {
    ;
    ;
    struct env1272 envinst1272;
};

static  enum Unit_13   write_dash_slice1326 (   struct env1326 env ,    struct StrBuilder_626 *  builder2138 ,    struct Slice_5  s2140 ) {
    struct funenv1272  temp1327 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  env.envinst1272  } );
    ( temp1327.fun ( temp1327.env ,  ( & ( ( * (  builder2138 ) ) .f_chars ) ) ,  (  s2140 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char693 (   struct env693 env ,    struct StrBuilder_626 *  builder2143 ,    char  c2145 ) {
    struct funenv346  temp1328 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    ( temp1328.fun ( temp1328.env ,  ( & ( ( * (  builder2143 ) ) .f_chars ) ) ,  (  c2145 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1267 {
    enum Unit_13  (*fun) (  struct env1267  ,    struct List_3 *  );
    struct env1267 env;
};

struct env1329 {
    ;
    struct env1267 envinst1267;
    ;
};

static  enum Unit_13   pop1329 (   struct env1329 env ,    struct StrBuilder_626 *  sb2153 ) {
    struct funenv1267  temp1330 = ( (struct funenv1267){ .fun = pop1267, .env =  env.envinst1267  } );
    return ( temp1330.fun ( temp1330.env ,  ( & ( ( * (  sb2153 ) ) .f_chars ) ) ) );
}

static  size_t   count1331 (    struct StrBuilder_626 *  sb2156 ) {
    return ( ( ( * (  sb2156 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_626   mk1332 (    enum CAllocator_4  al2159 ) {
    return ( (struct StrBuilder_626) { .f_chars = ( (  mk1244 ) ( (  al2159 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1333 (    struct StrBuilder_626 *  builder2168 ) {
    return ( (  to_dash_slice1285 ) ( ( ( * (  builder2168 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1334 (    struct StrBuilder_626 *  builder2171 ) {
    ( (  free1247 ) ( ( & ( ( * (  builder2171 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1318 {
    enum Unit_13  (*fun) (  struct env1318  ,    struct StrBuilder_626 *  ,    const char*  );
    struct env1318 env;
};

struct env1335 {
    struct env1318 envinst1318;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    ;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1335 (   struct env1335 env ,    const char*  s2185 ,    enum CAllocator_4  al2187 ) {
    struct StrBuilder_626  temp1336 = ( (  mk1332 ) ( (  al2187 ) ) );
    struct StrBuilder_626 *  sb2188 = ( &temp1336 );
    struct funenv1318  temp1337 = ( (struct funenv1318){ .fun = write1318, .env =  env.envinst1318  } );
    ( temp1337.fun ( temp1337.env ,  (  sb2188 ) ,  (  s2185 ) ) );
    struct funenv693  temp1338 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
    ( temp1338.fun ( temp1338.env ,  (  sb2188 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2189 = ( (  as_dash_str977 ) ( (  sb2188 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2189 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2189 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1320 {
    enum Unit_13  (*fun) (  struct env1320  ,    struct StrBuilder_626 *  ,    char  );
    struct env1320 env;
};

struct env1339 {
    ;
    struct env1320 envinst1320;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1339 (   struct env1339 env ,    char  s2185 ,    enum CAllocator_4  al2187 ) {
    struct StrBuilder_626  temp1340 = ( (  mk1332 ) ( (  al2187 ) ) );
    struct StrBuilder_626 *  sb2188 = ( &temp1340 );
    struct funenv1320  temp1341 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
    ( temp1341.fun ( temp1341.env ,  (  sb2188 ) ,  (  s2185 ) ) );
    struct funenv693  temp1342 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
    ( temp1342.fun ( temp1342.env ,  (  sb2188 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2189 = ( (  as_dash_str977 ) ( (  sb2188 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2189 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2189 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1322 {
    enum Unit_13  (*fun) (  struct env1322  ,    struct StrBuilder_626 *  ,    struct TakeWhile_562  );
    struct env1322 env;
};

struct env1343 {
    ;
    struct env1322 envinst1322;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1343 (   struct env1343 env ,    struct TakeWhile_562  s2185 ,    enum CAllocator_4  al2187 ) {
    struct StrBuilder_626  temp1344 = ( (  mk1332 ) ( (  al2187 ) ) );
    struct StrBuilder_626 *  sb2188 = ( &temp1344 );
    struct funenv1322  temp1345 = ( (struct funenv1322){ .fun = write1322, .env =  env.envinst1322  } );
    ( temp1345.fun ( temp1345.env ,  (  sb2188 ) ,  (  s2185 ) ) );
    struct funenv693  temp1346 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
    ( temp1346.fun ( temp1346.env ,  (  sb2188 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2189 = ( (  as_dash_str977 ) ( (  sb2188 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2189 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2189 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1324 {
    enum Unit_13  (*fun) (  struct env1324  ,    struct StrBuilder_626 *  ,    struct TakeWhile_567  );
    struct env1324 env;
};

struct env1347 {
    ;
    struct env1324 envinst1324;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    ;
    ;
};

static  struct DynStr_136   mk_dash_dyn_dash_str1347 (   struct env1347 env ,    struct TakeWhile_567  s2185 ,    enum CAllocator_4  al2187 ) {
    struct StrBuilder_626  temp1348 = ( (  mk1332 ) ( (  al2187 ) ) );
    struct StrBuilder_626 *  sb2188 = ( &temp1348 );
    struct funenv1324  temp1349 = ( (struct funenv1324){ .fun = write1324, .env =  env.envinst1324  } );
    ( temp1349.fun ( temp1349.env ,  (  sb2188 ) ,  (  s2185 ) ) );
    struct funenv693  temp1350 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
    ( temp1350.fun ( temp1350.env ,  (  sb2188 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_136  dynstr2189 = ( (  as_dash_str977 ) ( (  sb2188 ) ) );
    return ( (struct DynStr_136) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2189 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2189 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1335 {
    struct DynStr_136  (*fun) (  struct env1335  ,    const char*  ,    enum CAllocator_4  );
    struct env1335 env;
};

struct env1351 {
    ;
    struct env1335 envinst1335;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1351 (   struct env1351 env ,    const char*  s2192 ,    enum CAllocator_4  al2194 ) {
    struct funenv1335  temp1352 = ( (struct funenv1335){ .fun = mk_dash_dyn_dash_str1335, .env =  env.envinst1335  } );
    return ( ( (  cast215 ) ( ( ( ( temp1352.fun ( temp1352.env ,  (  s2192 ) ,  (  al2194 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1343 {
    struct DynStr_136  (*fun) (  struct env1343  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1343 env;
};

struct env1353 {
    ;
    struct env1343 envinst1343;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1353 (   struct env1353 env ,    struct TakeWhile_562  s2192 ,    enum CAllocator_4  al2194 ) {
    struct funenv1343  temp1354 = ( (struct funenv1343){ .fun = mk_dash_dyn_dash_str1343, .env =  env.envinst1343  } );
    return ( ( (  cast215 ) ( ( ( ( temp1354.fun ( temp1354.env ,  (  s2192 ) ,  (  al2194 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1347 {
    struct DynStr_136  (*fun) (  struct env1347  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1347 env;
};

struct env1355 {
    ;
    struct env1347 envinst1347;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1355 (   struct env1355 env ,    struct TakeWhile_567  s2192 ,    enum CAllocator_4  al2194 ) {
    struct funenv1347  temp1356 = ( (struct funenv1347){ .fun = mk_dash_dyn_dash_str1347, .env =  env.envinst1347  } );
    return ( ( (  cast215 ) ( ( ( ( temp1356.fun ( temp1356.env ,  (  s2192 ) ,  (  al2194 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1357 (  ) {
    struct timespec  temp1358 = ( (  undefined138 ) ( ) );
    struct timespec *  t2347 = ( &temp1358 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2347 ) ) );
    return ( * (  t2347 ) );
}

struct Duration_1360 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1359 (    struct Duration_1360  l2356 ,    struct Duration_1360  r2358 ) {
    enum Ordering_10  scmp2359 = ( (  cmp79 ) ( ( (  l2356 ) .f_secs ) ,  ( (  r2358 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2359 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2359 );
    }
    return ( (  cmp79 ) ( ( (  l2356 ) .f_nsecs ) ,  ( (  r2358 ) .f_nsecs ) ) );
}

static  struct Duration_1360   diff1361 (    struct timespec  l2362 ,    struct timespec  r2364 ) {
    int64_t  secdiff2365 = (  op_dash_sub84 ( ( (  l2362 ) .tv_sec ) , ( (  r2364 ) .tv_sec ) ) );
    int64_t  nsdiff2366 = (  op_dash_sub84 ( ( (  l2362 ) .tv_nsec ) , ( (  r2364 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2367 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2366 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2365 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1360) { .f_secs = (  secdiff2365 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2366 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2365 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1360) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2366 ) } );
            } else {
                return ( (struct Duration_1360) { .f_secs = (  op_dash_sub84 ( (  secdiff2365 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2367 ) , (  nsdiff2366 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2365 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1360) { .f_secs = (  secdiff2365 ) , .f_nsecs = (  nsdiff2366 ) } );
        } else {
            return ( (struct Duration_1360) { .f_secs = (  op_dash_sub84 ( (  secdiff2365 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2367 ) , (  nsdiff2366 ) ) ) } );
        }
    }
}

static  struct Duration_1360   duration_dash_from_dash_ns1362 (    int64_t  ns2370 ) {
    int64_t  ns_dash_in_dash_secs2371 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1360) { .f_secs = (  op_dash_div85 ( (  ns2370 ) , (  ns_dash_in_dash_secs2371 ) ) ) , .f_nsecs = ( (  mod947 ) ( (  ns2370 ) ,  (  ns_dash_in_dash_secs2371 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1363 (    struct Duration_1360  d2382 ) {
    int64_t  ns_dash_in_dash_secs2383 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2382 ) .f_secs ) , (  ns_dash_in_dash_secs2383 ) ) ) , ( (  d2382 ) .f_nsecs ) ) );
}

static  uint32_t   u32_dash_or1364 (    uint32_t  l2386 ,    uint32_t  r2388 ) {
    return ( (  l2386 ) | (  r2388 ) );
}

static  uint32_t   u32_dash_ors1365 (    struct SmolArray_103  vals2391 ) {
    return ( (  reduce765 ) ( (  vals2391 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1364 ) ) );
}

static  uint32_t   u32_dash_ors1366 (    struct SmolArray_109  vals2391 ) {
    return ( (  reduce782 ) ( (  vals2391 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1364 ) ) );
}

static  uint32_t   u32_dash_ors1367 (    struct SmolArray_106  vals2391 ) {
    return ( (  reduce789 ) ( (  vals2391 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1364 ) ) );
}

static  uint32_t   u32_dash_and1368 (    uint32_t  l2394 ,    uint32_t  r2396 ) {
    return ( (  l2394 ) & (  r2396 ) );
}

static  uint32_t   u32_dash_neg1369 (    uint32_t  l2399 ) {
    return ( ~ (  l2399 ) );
}

static  struct Scanner_329   mk1370 (    struct DynStr_136  s2438 ) {
    return ( (struct Scanner_329) { .f_s = ( (  chars984 ) ( (  s2438 ) ) ) } );
}

static  struct Maybe_801   scan_dash_int1371 (    struct Scanner_329 *  sc2441 ) {
    struct TakeWhile_558  digit_dash_chars2442 = ( (  take_dash_while581 ) ( (  sc2441 ) ,  (  is_dash_digit1229 ) ) );
    if ( ( (  null874 ) ( (  digit_dash_chars2442 ) ) ) ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    ( (  drop_prime_876 ) ( (  sc2441 ) ,  ( (  count837 ) ( (  digit_dash_chars2442 ) ) ) ) );
    return ( (  parse_dash_int1231 ) ( (  digit_dash_chars2442 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1372 (  ) {
    struct Termios_141  temp1373 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2455 = ( &temp1373 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr239 ) ( (  orig_dash_termios2455 ) ) ) ) );
    struct Termios_141  raw2456 = ( * (  orig_dash_termios2455 ) );
    raw2456 .f_c_dash_lflag = ( (  u32_dash_and1368 ) ( ( (  raw2456 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1369 ) ( ( (  u32_dash_ors1365 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2456 .f_c_dash_iflag = ( (  u32_dash_and1368 ) ( ( (  raw2456 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1369 ) ( ( (  u32_dash_ors1367 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2456 .f_c_dash_oflag = ( (  u32_dash_and1368 ) ( ( (  raw2456 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1369 ) ( ( (  u32_dash_ors1366 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2456 .f_c_dash_cflag = ( (  u32_dash_or1364 ) ( ( (  raw2456 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1220 ) ( ( & ( (  raw2456 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1220 ) ( ( & ( (  raw2456 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr239 ) ( ( & (  raw2456 ) ) ) ) ) );
    return ( * (  orig_dash_termios2455 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1374 (    struct Termios_141 *  og_dash_termios2459 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr239 ) ( (  og_dash_termios2459 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1375 (    int32_t  timeout_dash_ms2463 ) {
    struct Pollfd_249  pfd2464 = ( (struct Pollfd_249) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr248 ) ( ( & (  pfd2464 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2463 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2465 = ( ( (  zeroed264 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr234 ) ( ( & (  c2465 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2465 ) ) );
}

static  enum Unit_13   flush_dash_stdout1376 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr300 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1377 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1378 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1380 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2469;
};

struct env1381 {
    bool *  should_dash_resize2469;
};

struct funenv1381 {
    enum Unit_13  (*fun) (  struct env1381  ,    int32_t  );
    struct env1381 env;
};

struct funenv1381  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1382 ) {
    struct funenv1381  temp1383 = _intr_sigarr [  __intr__sig1382 ];
    temp1383.fun ( temp1383.env ,  __intr__sig1382 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1384 ,   struct funenv1381  __intr__fun1385 ) {
    _intr_sigarr [  __intr__sig1384 ] =  __intr__fun1385;
    signal(  __intr__sig1384 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1381 (   struct env1381 env ,    int32_t  dref2476 ) {
    (* env.should_dash_resize2469 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_717   mk1380 (   struct env1380 env ) {
    struct Termios_141  og_dash_termios2471 = ( (  enable_dash_raw_dash_mode1372 ) ( ) );
    ( (  hide_dash_cursor1298 ) ( ) );
    ( (  reset_dash_colors1310 ) ( ) );
    ( (  clear_dash_screen1311 ) ( ) );
    ( (  enable_dash_mouse1377 ) ( ) );
    ( (  flush_dash_stdout1376 ) ( ) );
    enum ColorPalette_718  palette2472 = ( (  query_dash_palette1305 ) ( ) );
    struct Tuple2_878  dims2473 = ( (  get_dash_dimensions1301 ) ( ) );
    uint32_t  fps2474 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2475 = ( (  now1357 ) ( ) );
    struct env1381 envinst1381 = {
        .should_dash_resize2469 = env.should_dash_resize2469 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1381){ .fun = lam1381, .env = envinst1381 } ) ) );
    return ( (struct Tui_717) { .f_width = ( (  fst877 ) ( (  dims2473 ) ) ) , .f_height = ( (  snd879 ) ( (  dims2473 ) ) ) , .f_target_dash_fps = (  fps2474 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2475 ) , .f_fps_dash_ts = (  last_dash_sync2475 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2471 ) , .f_palette = (  palette2472 ) } );
}

static  enum Unit_13   sync1386 (    struct Tui_717 *  tui2479 ) {
    if ( (  eq42 ( ( ( * (  tui2479 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2480 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size315 ) ( ( ( * (  tui2479 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1387 = ( (  undefined138 ) ( ) );
    struct timespec *  now2481 = ( &temp1387 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2481 ) ) );
    int64_t  elapsed_dash_ns2482 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2481 ) ) .tv_sec ) , ( ( ( * (  tui2479 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2481 ) ) .tv_nsec ) , ( ( ( * (  tui2479 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2483 = (  op_dash_sub84 ( (  frame_dash_ns2480 ) , (  elapsed_dash_ns2482 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2483 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1388 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2483 ) } );
        struct timespec *  ts2484 = ( &temp1388 );
        ( ( nanosleep ) ( (  ts2484 ) ,  ( (  null_dash_ptr304 ) ( ) ) ) );
    }
    struct timespec  temp1389 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2485 = ( &temp1389 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2485 ) ) );
    (*  tui2479 ) .f_last_dash_sync = ( * (  last_dash_sync2485 ) );
    (*  tui2479 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2479 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2486 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2479 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2479 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2479 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2479 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2486 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2479 ) .f_actual_dash_fps = ( ( * (  tui2479 ) ) .f_fps_dash_count );
        (*  tui2479 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2479 ) .f_fps_dash_ts = ( ( * (  tui2479 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1390 (    struct Tui_717 *  tui2489 ) {
    ( (  disable_dash_mouse1378 ) ( ) );
    ( (  show_dash_cursor1297 ) ( ) );
    ( (  reset_dash_colors1310 ) ( ) );
    ( (  clear_dash_screen1311 ) ( ) );
    ( (  reset_dash_cursor_dash_position1300 ) ( ) );
    ( (  disable_dash_raw_dash_mode1374 ) ( ( & ( ( * (  tui2489 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1376 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   btn_dash_to_dash_mouse_dash_button1391 (    int64_t  btn2496 ) {
    return ( {  int32_t  dref2497 = ( (  i64_dash_i32312 ) ( (  btn2496 ) ) ) ;  dref2497 == 0 ? ( MouseButton_149_MouseLeft ) :  dref2497 == 1 ? ( MouseButton_149_MouseMiddle ) :  dref2497 == 2 ? ( MouseButton_149_MouseRight ) :  dref2497 == 64 ? ( MouseButton_149_ScrollUp ) :  dref2497 == 65 ? ( MouseButton_149_ScrollDown ) : ( (  panic_prime_1143 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1393 {
    enum {
        Maybe_1393_None_t,
        Maybe_1393_Just_t,
    } tag;
    union {
        struct {
            struct Key_602  field0;
        } Maybe_1393_Just_s;
    } stuff;
};

static struct Maybe_1393 Maybe_1393_Just (  struct Key_602  field0 ) {
    return ( struct Maybe_1393 ) { .tag = Maybe_1393_Just_t, .stuff = { .Maybe_1393_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1393   parse_dash_ss31392 (    char  c2500 ) {
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2500 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1393_Just ) ( ( (struct Key_602) { .tag = Key_602_F4_t } ) ) );
    }
    return ( (struct Maybe_1393) { .tag = Maybe_1393_None_t } );
}

static  struct Maybe_600   parse_dash_csi1394 (    struct DynStr_136  seq2503 ) {
    if ( (  eq45 ( ( ( (  seq2503 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    char  last2504 = (  elem_dash_get1188 ( ( (  seq2503 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2503 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1188 ( ( (  seq2503 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_329  temp1395 = ( (  mk1370 ) ( ( (  substr363 ) ( (  seq2503 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2503 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_329 *  sc2505 = ( &temp1395 );
        struct Maybe_801  dref2506 = ( (  scan_dash_int1371 ) ( (  sc2505 ) ) );
        if ( dref2506.tag == Maybe_801_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2506.tag == Maybe_801_Just_t ) {
            ( (  next571 ) ( (  sc2505 ) ) );
            struct Maybe_801  dref2508 = ( (  scan_dash_int1371 ) ( (  sc2505 ) ) );
            if ( dref2508.tag == Maybe_801_None_t ) {
                return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
            }
            else if ( dref2508.tag == Maybe_801_Just_t ) {
                ( (  next571 ) ( (  sc2505 ) ) );
                struct Maybe_801  dref2510 = ( (  scan_dash_int1371 ) ( (  sc2505 ) ) );
                if ( dref2510.tag == Maybe_801_None_t ) {
                    return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
                }
                else if ( dref2510.tag == Maybe_801_Just_t ) {
                    return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Mouse ) ( ( (struct MouseEvent_603) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1391 ) ( ( dref2506 .stuff .Maybe_801_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2508 .stuff .Maybe_801_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2510 .stuff .Maybe_801_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2503 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    if ( (  eq47 ( (  last2504 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_329  temp1396 = ( (  mk1370 ) ( (  seq2503 ) ) );
        struct Scanner_329 *  sc2512 = ( &temp1396 );
        struct Maybe_801  dref2513 = ( (  scan_dash_int1371 ) ( (  sc2512 ) ) );
        if ( dref2513.tag == Maybe_801_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2513.tag == Maybe_801_Just_t ) {
            return ( {  int32_t  dref2515 = ( (  i64_dash_i32312 ) ( ( dref2513 .stuff .Maybe_801_Just_s .field0 ) ) ) ;  dref2515 == 1 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) ) ) ) :  dref2515 == 2 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Insert_t } ) ) ) ) ) :  dref2515 == 3 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Delete_t } ) ) ) ) ) :  dref2515 == 4 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) ) ) ) :  dref2515 == 5 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_PageUp_t } ) ) ) ) ) :  dref2515 == 6 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_PageDown_t } ) ) ) ) ) :  dref2515 == 15 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F5_t } ) ) ) ) ) :  dref2515 == 17 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F6_t } ) ) ) ) ) :  dref2515 == 18 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F7_t } ) ) ) ) ) :  dref2515 == 19 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F8_t } ) ) ) ) ) :  dref2515 == 20 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F9_t } ) ) ) ) ) :  dref2515 == 21 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F10_t } ) ) ) ) ) :  dref2515 == 23 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F11_t } ) ) ) ) ) :  dref2515 == 24 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F12_t } ) ) ) ) ) : ( (struct Maybe_600) { .tag = Maybe_600_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
}

static  struct Maybe_600   read_dash_key1397 (  ) {
    char  temp1398 = ( (  undefined133 ) ( ) );
    char *  ch2517 = ( &temp1398 );
    struct Maybe_49  dref2518 = ( (  read_dash_byte1375 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2518.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    else if ( dref2518.tag == Maybe_49_Just_t ) {
        (*  ch2517 ) = ( dref2518 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2520 = ( (  i32_dash_char1133 ) ( ( (  u32_dash_i32317 ) ( ( (  u32_dash_or1364 ) ( ( (  i32_dash_u32309 ) ( ( (  char_dash_i32953 ) ( ( * (  ch2517 ) ) ) ) ) ) ,  ( (  from_dash_hex1293 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( ( Key_602_Ctrl ) ( (  letter2520 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  ch2517 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1397 ) ( ) );
        } else {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( ( Key_602_Char ) ( ( * (  ch2517 ) ) ) ) ) ) ) );
        }
    }
    char  temp1399 = ( (  undefined133 ) ( ) );
    char *  ch22521 = ( &temp1399 );
    struct Maybe_49  dref2522 = ( (  read_dash_byte1375 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2522.tag == Maybe_49_None_t ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
    }
    else if ( dref2522.tag == Maybe_49_Just_t ) {
        (*  ch22521 ) = ( dref2522 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22521 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_211  temp1400 = ( ( (  zeroed280 ) ( ) ) );
        struct Array_211 *  seq2524 = ( &temp1400 );
        int32_t  slen2525 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2525 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1401 = ( (  undefined133 ) ( ) );
            char *  sc2526 = ( &temp1401 );
            struct Maybe_49  dref2527 = ( (  read_dash_byte1375 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2527.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2527.tag == Maybe_49_Just_t ) {
                (*  sc2526 ) = ( dref2527 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1221 ) ( (  seq2524 ) ,  ( (  i32_dash_size311 ) ( (  slen2525 ) ) ) ,  ( * (  sc2526 ) ) ) );
            slen2525 = (  op_dash_add87 ( (  slen2525 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  sc2526 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  sc2526 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1394 ) ( ( (struct DynStr_136) { .f_contents = ( (  subslice335 ) ( ( (  as_dash_slice1222 ) ( (  seq2524 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( (  slen2525 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22521 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1402 = ( (  undefined133 ) ( ) );
        char *  sc2529 = ( &temp1402 );
        struct Maybe_49  dref2530 = ( (  read_dash_byte1375 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2530.tag == Maybe_49_None_t ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
        }
        else if ( dref2530.tag == Maybe_49_Just_t ) {
            (*  sc2529 ) = ( dref2530 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1393  dref2532 = ( (  parse_dash_ss31392 ) ( ( * (  sc2529 ) ) ) );
        if ( dref2532.tag == Maybe_1393_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2532.tag == Maybe_1393_Just_t ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( dref2532 .stuff .Maybe_1393_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
}

struct env1403 {
    ;
    bool *  should_dash_resize2469;
    ;
    ;
};

static  bool   update_dash_dimensions1403 (   struct env1403 env ,    struct Tui_717 *  tui2536 ) {
    if ( ( ! ( * ( env.should_dash_resize2469 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2469 ) = ( false );
    struct Tuple2_878  dim2537 = ( (  get_dash_dimensions1301 ) ( ) );
    uint32_t  w2538 = ( (  fst877 ) ( (  dim2537 ) ) );
    uint32_t  h2539 = ( (  snd879 ) ( (  dim2537 ) ) );
    (*  tui2536 ) .f_width = (  w2538 );
    (*  tui2536 ) .f_height = (  h2539 );
    return ( true );
}

static  struct Cell_58   lam1405 (    struct Cell_58  dref2557 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1406 (    struct Cell_58  dref2559 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_716   mk_dash_screen1404 (    struct Tui_717 *  tui2553 ,    enum CAllocator_4  al2555 ) {
    struct Slice_632  cur2556 = ( (  allocate1206 ) ( (  al2555 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2553 ) ) .f_width ) , ( ( * (  tui2553 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1194 ) ( (  cur2556 ) ,  (  lam1405 ) ) );
    struct Slice_632  prev2558 = ( (  allocate1206 ) ( (  al2555 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2553 ) ) .f_width ) , ( ( * (  tui2553 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1195 ) ( (  prev2558 ) ,  (  lam1406 ) ) );
    return ( (struct Screen_716) { .f_current = (  cur2556 ) , .f_previous = (  prev2558 ) , .f_al = (  al2555 ) , .f_tui = (  tui2553 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1407 (    struct Screen_716 *  screen2562 ) {
    enum CAllocator_4  al2563 = ( ( * (  screen2562 ) ) .f_al );
    ( (  free1215 ) ( (  al2563 ) ,  ( ( * (  screen2562 ) ) .f_current ) ) );
    ( (  free1215 ) ( (  al2563 ) ,  ( ( * (  screen2562 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1409 (    struct Cell_58  dref2567 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1408 (    struct Screen_716 *  screen2566 ) {
    ( (  map1196 ) ( ( ( * (  screen2566 ) ) .f_current ) ,  (  lam1409 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1411 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1410 (    struct RenderState_1411 *  rs2571 ,    struct Cell_58 *  c2573 ,    uint32_t  x2575 ,    uint32_t  y2577 ) {
    if ( ( ( !  eq42 ( (  x2575 ) , ( ( * (  rs2571 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2577 ) , ( ( * (  rs2571 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1299 ) ( (  x2575 ) ,  (  y2577 ) ) );
        (*  rs2571 ) .f_x = (  x2575 );
        (*  rs2571 ) .f_y = (  y2577 );
    }
    char  char2578 = ( ( * (  c2573 ) ) .f_c );
    struct Color_59  bg2579 = ( ( * (  c2573 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2578 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2578 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2578 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2578 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2579 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2571 ) ) .f_fg ) , ( ( * (  c2573 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1316 ) ( ( ( * (  c2573 ) ) .f_fg ) ) );
        (*  rs2571 ) .f_fg = ( ( * (  c2573 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2571 ) ) .f_bg ) , (  bg2579 ) ) ) ) {
        ( (  set_dash_bg1317 ) ( (  bg2579 ) ) );
        (*  rs2571 ) .f_bg = (  bg2579 );
    }
    ( (  print_dash_str28 ) ( (  char2578 ) ) );
    (*  rs2571 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2571 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1412 (    struct Screen_716 *  screen2582 ) {
    int32_t  w2583 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2582 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2584 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2582 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1411  temp1413 = ( (struct RenderState_1411) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1411 *  rs2585 = ( &temp1413 );
    ( (  move_dash_cursor_dash_to1299 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_403  temp1414 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2584 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1415 =  next404 (&temp1414);
        if (  __cond1415 .tag == 0 ) {
            break;
        }
        int32_t  y2587 =  __cond1415 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1416 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2583 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1417 =  next404 (&temp1416);
            if (  __cond1417 .tag == 0 ) {
                break;
            }
            int32_t  x2589 =  __cond1417 .stuff .Maybe_369_Just_s .field0;
            size_t  i2590 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2587 ) , (  w2583 ) ) ) , (  x2589 ) ) ) ) );
            struct Cell_58 *  cur2591 = ( (  get_dash_ptr1162 ) ( ( ( * (  screen2582 ) ) .f_current ) ,  (  i2590 ) ) );
            struct Cell_58 *  prev2592 = ( (  get_dash_ptr1162 ) ( ( ( * (  screen2582 ) ) .f_previous ) ,  (  i2590 ) ) );
            if ( ( ( !  eq57 ( (  cur2591 ) , (  prev2592 ) ) ) || ( ( * (  screen2582 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2585 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2585 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1410 ) ( (  rs2585 ) ,  (  cur2591 ) ,  ( (  i32_dash_u32309 ) ( (  x2589 ) ) ) ,  ( (  i32_dash_u32309 ) ( (  y2587 ) ) ) ) );
                (*  prev2592 ) = ( * (  cur2591 ) );
            }
        }
    }
    (*  screen2582 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1310 ) ( ) );
    ( (  flush_dash_stdout1376 ) ( ) );
    return ( ( * (  rs2585 ) ) .f_changes );
}

struct funenv1403 {
    bool  (*fun) (  struct env1403  ,    struct Tui_717 *  );
    struct env1403 env;
};

struct env1418 {
    ;
    struct env1403 envinst1403;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1418 (   struct env1418 env ,    struct Screen_716 *  screen2595 ) {
    struct Tui_717 *  tui2596 = ( ( * (  screen2595 ) ) .f_tui );
    struct funenv1403  temp1419 = ( (struct funenv1403){ .fun = update_dash_dimensions1403, .env =  env.envinst1403  } );
    if ( ( ! ( temp1419.fun ( temp1419.env ,  (  tui2596 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2595 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2597 = ( ( * ( ( * (  screen2595 ) ) .f_tui ) ) .f_width );
    uint32_t  h2598 = ( ( * ( ( * (  screen2595 ) ) .f_tui ) ) .f_height );
    size_t  nusz2599 = ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( (  w2597 ) , (  h2598 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2599 ) , ( ( ( * (  screen2595 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_716  nuscreen2600 = ( (  mk_dash_screen1404 ) ( (  tui2596 ) ,  ( ( * (  screen2595 ) ) .f_al ) ) );
    (*  screen2595 ) .f_current = ( (  nuscreen2600 ) .f_current );
    (*  screen2595 ) .f_previous = ( (  nuscreen2600 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1420 (    struct Screen_716 *  screen2603 ,    struct Color_59  c2605 ) {
    (*  screen2603 ) .f_default_dash_fg = (  c2605 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1421 (    struct Screen_716 *  screen2608 ,    struct Color_59  c2610 ) {
    (*  screen2608 ) .f_default_dash_bg = (  c2610 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1422 (    struct Screen_716 *  screen2613 ,    struct Color_59  fg2615 ,    struct Color_59  bg2617 ) {
    (*  screen2613 ) .f_default_dash_fg = (  fg2615 );
    (*  screen2613 ) .f_default_dash_bg = (  bg2617 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1155   get_dash_cell_dash_ptr1423 (    struct Screen_716 *  screen2624 ,    int32_t  x2626 ,    int32_t  y2628 ) {
    int32_t  w2629 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2624 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2626 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2626 ) , (  w2629 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1155) { .tag = Maybe_1155_None_t } );
    }
    if ( ( (  cmp80 ( (  y2628 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2628 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2624 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1155) { .tag = Maybe_1155_None_t } );
    }
    size_t  i2630 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2628 ) , (  w2629 ) ) ) , (  x2626 ) ) ) ) );
    return ( ( Maybe_1155_Just ) ( ( (  get_dash_ptr1162 ) ( ( ( * (  screen2624 ) ) .f_current ) ,  (  i2630 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1424 (    struct Screen_716 *  screen2633 ) {
    struct RangeIter_403  temp1425 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2633 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1426 =  next404 (&temp1425);
        if (  __cond1426 .tag == 0 ) {
            break;
        }
        int32_t  y2635 =  __cond1426 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1427 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2633 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1428 =  next404 (&temp1427);
            if (  __cond1428 .tag == 0 ) {
                break;
            }
            int32_t  x2637 =  __cond1428 .stuff .Maybe_369_Just_s .field0;
            struct Cell_58 *  cell2638 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1423 ) ( (  screen2633 ) ,  (  x2637 ) ,  (  y2635 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2638 ) .f_bg = ( ( * (  screen2633 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1429 (    struct Screen_716 *  screen2641 ,    char  c2643 ,    int32_t  x2645 ,    int32_t  y2647 ) {
    int32_t  w2648 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2641 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp80 ( (  x2645 ) , (  w2648 ) ) != 0 ) || (  cmp80 ( (  y2647 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2641 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp80 ( (  x2645 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) || (  cmp80 ( (  y2647 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2649 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2647 ) , (  w2648 ) ) ) , (  x2645 ) ) ) ) );
    struct Color_59  fg2650 = ( ( * (  screen2641 ) ) .f_default_dash_fg );
    struct Color_59  bg2651 = ( ( * (  screen2641 ) ) .f_default_dash_bg );
    char  c2652 = (  c2643 );
    ( (  set1174 ) ( ( ( * (  screen2641 ) ) .f_current ) ,  (  i2649 ) ,  ( (struct Cell_58) { .f_c = (  c2652 ) , .f_fg = (  fg2650 ) , .f_bg = (  bg2651 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam715 (   struct env715 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1430 (    struct Screen_716 *  screen2655 ,    int32_t  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env715 envinst715 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each714 ) ( ( (  zip537 ) ( ( (  chars965 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv715){ .fun = lam715, .env = envinst715 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam722 (   struct env722 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1431 (    struct Screen_716 *  screen2655 ,    struct StrConcat_971  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env722 envinst722 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each721 ) ( ( (  zip539 ) ( ( (  chars1109 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv722){ .fun = lam722, .env = envinst722 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam726 (   struct env726 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1432 (    struct Screen_716 *  screen2655 ,    struct StrConcat_986  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env726 envinst726 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each725 ) ( ( (  zip541 ) ( ( (  chars1110 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv726){ .fun = lam726, .env = envinst726 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam730 (   struct env730 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1433 (    struct Screen_716 *  screen2655 ,    struct StrConcat_988  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env730 envinst730 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each729 ) ( ( (  zip543 ) ( ( (  chars1111 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv730){ .fun = lam730, .env = envinst730 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam734 (   struct env734 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1434 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1014  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env734 envinst734 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each733 ) ( ( (  zip545 ) ( ( (  chars1112 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv734){ .fun = lam734, .env = envinst734 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam738 (   struct env738 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1435 (    struct Screen_716 *  screen2655 ,    struct StrConcat_17  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env738 envinst738 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each737 ) ( ( (  zip547 ) ( ( (  chars1055 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv738){ .fun = lam738, .env = envinst738 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam742 (   struct env742 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1436 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1016  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env742 envinst742 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each741 ) ( ( (  zip549 ) ( ( (  chars1019 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv742){ .fun = lam742, .env = envinst742 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam746 (   struct env746 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1437 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1023  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env746 envinst746 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each745 ) ( ( (  zip551 ) ( ( (  chars1113 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv746){ .fun = lam746, .env = envinst746 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam750 (   struct env750 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1438 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1028  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env750 envinst750 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each749 ) ( ( (  zip539 ) ( ( (  chars1114 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv750){ .fun = lam750, .env = envinst750 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam754 (   struct env754 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1439 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1042  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env754 envinst754 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each753 ) ( ( (  zip539 ) ( ( (  chars1115 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv754){ .fun = lam754, .env = envinst754 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam758 (   struct env758 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1440 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1046  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env758 envinst758 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each757 ) ( ( (  zip553 ) ( ( (  chars1116 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv758){ .fun = lam758, .env = envinst758 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam762 (   struct env762 env ,    struct Tuple2_387  dref2666 ) {
    ( (  put_dash_char1429 ) ( ( env.screen2655 ) ,  ( dref2666 .field0 ) ,  (  op_dash_add87 ( ( env.x2664 ) , ( dref2666 .field1 ) ) ) ,  ( env.y2661 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1441 (    struct Screen_716 *  screen2655 ,    struct StrConcat_1057  s2657 ,    int32_t  x2659 ,    int32_t  y2661 ) {
    int32_t  w2662 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2661 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2655 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2663 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2661 ) , (  w2662 ) ) ) , (  x2659 ) ) );
    int32_t  x2664 = ( (  min950 ) ( (  x2659 ) ,  (  w2662 ) ) );
    size_t  max_dash_len2665 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2662 ) , (  x2664 ) ) ) ) );
    struct env762 envinst762 = {
        .x2664 =  x2664 ,
        .y2661 =  y2661 ,
        .screen2655 =  screen2655 ,
    };
    ( (  for_dash_each761 ) ( ( (  zip555 ) ( ( (  chars1117 ) ( (  s2657 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv762){ .fun = lam762, .env = envinst762 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1442 (    struct Screen_716 *  screen2671 ,    int32_t  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count841 ) ( ( (  chars965 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1430 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1443 (    struct Screen_716 *  screen2671 ,    struct StrConcat_971  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1109 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1431 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1444 (    struct Screen_716 *  screen2671 ,    struct StrConcat_986  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count845 ) ( ( (  chars1110 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1432 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1445 (    struct Screen_716 *  screen2671 ,    struct StrConcat_988  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count847 ) ( ( (  chars1111 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1433 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1446 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1014  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count849 ) ( ( (  chars1112 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1434 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1447 (    struct Screen_716 *  screen2671 ,    struct StrConcat_17  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count851 ) ( ( (  chars1055 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1435 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1448 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1016  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count853 ) ( ( (  chars1019 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1436 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1449 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1023  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count855 ) ( ( (  chars1113 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1437 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1450 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1028  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1114 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1438 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1451 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1042  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1115 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1439 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1452 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1046  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count857 ) ( ( (  chars1116 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1440 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1453 (    struct Screen_716 *  screen2671 ,    struct StrConcat_1057  s2673 ,    int32_t  x2675 ,    int32_t  y2677 ) {
    int32_t  slen2678 = ( (  size_dash_i32313 ) ( ( (  count859 ) ( ( (  chars1117 ) ( (  s2673 ) ) ) ) ) ) );
    int32_t  w2679 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2671 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2680 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2679 ) , (  x2675 ) ) ) , (  slen2678 ) ) );
    ( (  draw_dash_str1441 ) ( (  screen2671 ) ,  (  s2673 ) ,  (  x2680 ) ,  (  y2677 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_356   try_dash_read_dash_contents1454 (    const char*  filename3199 ,    enum CAllocator_4  al3201 ) {
    FILE *  file3202 = ( ( fopen ) ( (  filename3199 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file3202 ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    ( ( fseek ) ( (  file3202 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size3203 = ( ( ftell ) ( (  file3202 ) ) );
    ( ( fseek ) ( (  file3202 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf3204 = ( ( (  allocate1205 ) ( (  al3201 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  file_dash_size3203 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3204 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size3203 ) ,  (  file3202 ) ) );
    ( (  set1173 ) ( (  file_dash_buf3204 ) ,  ( (  i32_dash_size311 ) ( (  file_dash_size3203 ) ) ) ,  ( (  nullchar361 ) ( ) ) ) );
    ( ( fclose ) ( (  file3202 ) ) );
    struct DynStr_136  str3205 = ( (struct DynStr_136) { .f_contents = (  file_dash_buf3204 ) } );
    return ( ( Maybe_356_Just ) ( (  str3205 ) ) );
}

static  struct DynStr_136   read_dash_contents1455 (    const char*  filename3208 ,    enum CAllocator_4  al3210 ) {
    return ( (  or_dash_fail1146 ) ( ( (  try_dash_read_dash_contents1454 ) ( (  filename3208 ) ,  (  al3210 ) ) ) ,  ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "could not open file " ) ,  (  filename3208 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1456 (    const char*  filename3213 ,    struct DynStr_136  contents3215 ) {
    FILE *  file3216 = ( ( fopen ) ( (  filename3213 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file3216 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_330  it3217 = ( (  chars984 ) ( (  contents3215 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref3218 = ( (  next371 ) ( ( & (  it3217 ) ) ) );
        if ( dref3218.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file3216 ) ) );
            return ( true );
        }
        else if ( dref3218.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written3220 = ( ( fprintf ) ( (  file3216 ) ,  ( "%c" ) ,  ( dref3218 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written3220 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable1135 ) ( ) );
}

static  enum Unit_13   write_dash_contents1457 (    const char*  filename3223 ,    struct DynStr_136  contents3225 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1456 ) ( (  filename3223 ) ,  (  contents3225 ) ) ) ) ) {
        ( (  panic1142 ) ( ( ( StrConcat_1060_StrConcat ) ( ( "could not write to file " ) ,  (  filename3223 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1166   get1458 (  ) {
    return ( (struct Slice_1166) { .f_ptr = ( (  offset_dash_ptr169 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1459 (    char  c2683 ) {
    if ( (  eq47 ( (  c2683 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return (  from_dash_integral29 ( 2 ) );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1460 (    char  c2693 ) {
    if ( ( (  is_dash_whitespace1223 ) ( (  c2693 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1227 ) ( (  c2693 ) ) ) || (  eq47 ( (  c2693 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2693 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1463 (    struct Cursor_154  l2700 ,    struct Cursor_154  r2702 ) {
    return ( (  eq41 ( ( (  l2700 ) .f_x ) , ( (  r2702 ) .f_x ) ) ) && (  eq41 ( ( (  l2700 ) .f_y ) , ( (  r2702 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1464 (    struct Visual_891  dref2712 ) {
    return ( dref2712 .field0 );
}

struct Tuple2_1466 {
    struct Mode_892  field0;
    struct Mode_892  field1;
};

static struct Tuple2_1466 Tuple2_1466_Tuple2 (  struct Mode_892  field0 ,  struct Mode_892  field1 ) {
    return ( struct Tuple2_1466 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1465 (    struct Mode_892  l2717 ,    struct Mode_892  r2719 ) {
    struct Tuple2_1466  dref2720 = ( ( Tuple2_1466_Tuple2 ) ( (  l2717 ) ,  (  r2719 ) ) );
    if ( dref2720 .field0.tag == Mode_892_Normal_t && dref2720 .field1.tag == Mode_892_Normal_t ) {
        return ( true );
    }
    else if ( dref2720 .field0.tag == Mode_892_Insert_t && dref2720 .field1.tag == Mode_892_Insert_t ) {
        return ( true );
    }
    else if ( dref2720 .field0.tag == Mode_892_Select_t && dref2720 .field1.tag == Mode_892_Select_t ) {
        return ( true );
    }
    else if ( dref2720 .field0.tag == Mode_892_Cmd_t && dref2720 .field1.tag == Mode_892_Cmd_t ) {
        ( (  panic1139 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2720 .field0.tag == Mode_892_SearchBox_t && dref2720 .field1.tag == Mode_892_SearchBox_t ) {
        ( (  panic1139 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1467 (    struct Editor_890 *  ed2745 ,    int32_t  y2747 ) {
    return ( (  get_dash_ptr1235 ) ( ( & ( ( * (  ed2745 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2747 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1468 (    struct Editor_890 *  ed2750 ) {
    return ( (  get_dash_ptr1235 ) ( ( & ( ( * (  ed2750 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2750 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_560   indent_dash_on_dash_row1469 (    struct Editor_890 *  ed2753 ,    int32_t  y2755 ) {
    return ( (  take_dash_while582 ) ( ( (  get_dash_row1467 ) ( (  ed2753 ) ,  (  y2755 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
}

static  size_t   num_dash_rows1470 (    struct Editor_890 *  ed2758 ) {
    return ( (  size1291 ) ( ( & ( ( * (  ed2758 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1265 {
    enum Unit_13  (*fun) (  struct env1265  ,    struct List_323 *  ,    size_t  );
    struct env1265 env;
};

struct env1471 {
    ;
    struct env1265 envinst1265;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1471 (   struct env1471 env ,    struct Editor_890 *  ed2766 ,    int32_t  y2768 ) {
    struct List_3 *  next_dash_row2769 = ( (  get_dash_row1467 ) ( (  ed2766 ) ,  (  y2768 ) ) );
    ( (  free1247 ) ( (  next_dash_row2769 ) ) );
    struct funenv1265  temp1472 = ( (struct funenv1265){ .fun = remove1265, .env =  env.envinst1265  } );
    ( temp1472.fun ( temp1472.env ,  ( & ( ( * (  ed2766 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2768 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_row_dash_empty1473 (    struct Editor_890 *  ed2772 ,    int32_t  y2774 ) {
    return ( (  all863 ) ( ( (  get_dash_row1467 ) ( (  ed2772 ) ,  (  y2774 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
}

static  struct Maybe_49   char_dash_at1474 (    struct Editor_890 *  ed2777 ,    struct Cursor_154  cur2779 ) {
    return ( (  try_dash_get1239 ) ( ( (  get_dash_row1467 ) ( (  ed2777 ) ,  ( (  cur2779 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur2779 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1475 (    struct Editor_890 *  ed2782 ) {
    return ( (  try_dash_get1239 ) ( ( (  cursor_dash_row1468 ) ( (  ed2782 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2782 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_891   x_dash_to_dash_visual_dash_x1476 (    struct Editor_890 *  ed2785 ,    int32_t  x2787 ,    int32_t  y2789 ) {
    return ( ( Visual_891_Visual ) ( ( (  sum861 ) ( ( (  map376 ) ( ( (  take399 ) ( ( (  get_dash_row1467 ) ( (  ed2785 ) ,  (  y2789 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2787 ) ) ) ) ) ,  (  char_dash_len1459 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1477 (    struct Editor_890 *  ed2792 ,    struct Visual_891  dref2793 ,    int32_t  y2796 ) {
    int32_t  sum_dash_x2797 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2798 = ( (  get_dash_row1467 ) ( (  ed2792 ) ,  (  y2796 ) ) );
    struct RangeIter_403  temp1478 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( * (  chars2798 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1479 =  next404 (&temp1478);
        if (  __cond1479 .tag == 0 ) {
            break;
        }
        int32_t  x2800 =  __cond1479 .stuff .Maybe_369_Just_s .field0;
        sum_dash_x2797 = (  op_dash_add87 ( (  sum_dash_x2797 ) , ( (  char_dash_len1459 ) ( (  elem_dash_get2 ( (  chars2798 ) , ( (  i32_dash_size311 ) ( (  x2800 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2793 .field0 ) , (  sum_dash_x2797 ) ) == 0 ) ) {
            return (  x2800 );
        }
    }
    return ( (  size_dash_i32313 ) ( ( ( * (  chars2798 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1480 (    struct Editor_890 *  ed2803 ,    struct Maybe_157  sel2805 ) {
    if ( ( ( !  eq1465 ( ( ( * (  ed2803 ) ) .f_mode ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) || ( ! ( (  is_dash_just880 ) ( ( ( * (  ed2803 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2803 ) .f_selected = (  sel2805 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1481 (    struct Editor_890 *  ed2808 ) {
    struct Maybe_356  dref2809 = ( ( * (  ed2808 ) ) .f_msg );
    if ( dref2809.tag == Maybe_356_None_t ) {
    }
    else if ( dref2809.tag == Maybe_356_Just_t ) {
        ( (  free1210 ) ( ( ( * (  ed2808 ) ) .f_al ) ,  ( ( dref2809 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
        (*  ed2808 ) .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1482 {
    ;
    ;
    struct env1335 envinst1335;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1482 (   struct env1482 env ,    struct Editor_890 *  ed2813 ,    const char*  s2815 ) {
    ( (  reset_dash_msg1481 ) ( (  ed2813 ) ) );
    struct funenv1335  temp1483 = ( (struct funenv1335){ .fun = mk_dash_dyn_dash_str1335, .env =  env.envinst1335  } );
    struct DynStr_136  s2816 = ( temp1483.fun ( temp1483.env ,  (  s2815 ) ,  ( ( * (  ed2813 ) ) .f_al ) ) );
    (*  ed2813 ) .f_msg = ( ( Maybe_356_Just ) ( (  s2816 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1485 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1484 (    struct Editor_890 *  ed2820 ,    int32_t  x2822 ,    int32_t  y2824 ,    struct Dims_1485  dim2826 ) {
    struct Cursor_154  cur2827 = ( ( * (  ed2820 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2828 = ( !  eq41 ( ( (  cur2827 ) .f_x ) , (  x2822 ) ) );
    int32_t  y2829 = ( (  clamp959 ) ( (  y2824 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2820 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2830 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2829 ) , (  op_dash_add87 ( ( ( * (  ed2820 ) ) .f_screen_dash_top ) , (  funny_dash_space2830 ) ) ) ) == 0 ) ) {
        (*  ed2820 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2829 ) , (  funny_dash_space2830 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2829 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2820 ) ) .f_screen_dash_top ) , ( (  dim2826 ) .f_rows ) ) ) , (  funny_dash_space2830 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2831 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2829 ) , (  funny_dash_space2830 ) ) ) , ( (  dim2826 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2820 ) .f_screen_dash_top = (  onscreen_dash_y2831 );
        } else {
        }
    }
    struct List_3 *  row2832 = ( (  get_dash_row1467 ) ( (  ed2820 ) ,  (  y2829 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2828 ) ) {
        int32_t  x2833 = ( (  clamp959 ) ( (  x2822 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  row2832 ) ) ) ) ) ) );
        (*  ed2820 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1476 ) ( (  ed2820 ) ,  (  x2833 ) ,  (  y2829 ) ) );
    }
    struct Visual_891  vx2834 = ( ( * (  ed2820 ) ) .f_goal_dash_x );
    int32_t  x2835 = ( (  visual_dash_x_dash_to_dash_x1477 ) ( (  ed2820 ) ,  (  vx2834 ) ,  (  y2829 ) ) );
    int32_t  funny_dash_space2836 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2835 ) , (  op_dash_add87 ( ( ( * (  ed2820 ) ) .f_screen_dash_left ) , (  funny_dash_space2836 ) ) ) ) == 0 ) ) {
        (*  ed2820 ) .f_screen_dash_left = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2835 ) , (  funny_dash_space2836 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2835 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2820 ) ) .f_screen_dash_left ) , ( (  dim2826 ) .f_cols ) ) ) , (  funny_dash_space2836 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2837 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2835 ) , (  funny_dash_space2836 ) ) ) , ( (  dim2826 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2820 ) .f_screen_dash_left = (  onscreen_dash_x2837 );
        } else {
        }
    }
    (*  ed2820 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  x2835 ) , .f_y = (  y2829 ) } );
    ( (  set_dash_selection1480 ) ( (  ed2820 ) ,  ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1486 (    struct Editor_890 *  ed2840 ,    int32_t  x2842 ,    struct Dims_1485  dim2844 ) {
    ( (  move_dash_to1484 ) ( (  ed2840 ) ,  (  x2842 ) ,  ( ( ( * (  ed2840 ) ) .f_cursor ) .f_y ) ,  (  dim2844 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1487 (    struct Editor_890 *  ed2847 ,    int32_t  y2849 ,    struct Dims_1485  dim2851 ) {
    ( (  move_dash_to1484 ) ( (  ed2847 ) ,  ( ( ( * (  ed2847 ) ) .f_cursor ) .f_x ) ,  (  y2849 ) ,  (  dim2851 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1488 (    struct Editor_890 *  ed2854 ,    struct Dims_1485  dim2856 ) {
    struct Cursor_154  cur2857 = ( ( * (  ed2854 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2854 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2854 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1487 ) ( (  ed2854 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2854 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2856 ) ) );
            ( (  move_dash_to_dash_col1486 ) ( (  ed2854 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1468 ) ( (  ed2854 ) ) ) ) .f_count ) ) ) ,  (  dim2856 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1486 ) ( (  ed2854 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2854 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2856 ) ) );
    }
    return ( !  eq1463 ( ( ( * (  ed2854 ) ) .f_cursor ) , (  cur2857 ) ) );
}

static  bool   move_dash_right1489 (    struct Editor_890 *  ed2860 ,    struct Dims_1485  dims2862 ) {
    struct Cursor_154  cur2863 = ( ( * (  ed2860 ) ) .f_cursor );
    int32_t  row_dash_len2864 = ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1468 ) ( (  ed2860 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2860 ) ) .f_cursor ) .f_x ) , (  row_dash_len2864 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2860 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2860 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1484 ) ( (  ed2860 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2860 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2862 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1486 ) ( (  ed2860 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2860 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2862 ) ) );
    }
    return ( !  eq1463 ( ( ( * (  ed2860 ) ) .f_cursor ) , (  cur2863 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1490 (    struct Editor_890 *  ed2867 ,    struct Dims_1485  dims2869 ) {
    int32_t  off2870 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( ( (  indent_dash_on_dash_row1469 ) ( (  ed2867 ) ,  ( ( ( * (  ed2867 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1486 ) ( (  ed2867 ) ,  (  off2870 ) ,  (  dims2869 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1491 (    struct Editor_890 *  ed2873 ,    struct Dims_1485  dims2875 ) {
    struct List_3 *  currow2876 = ( (  cursor_dash_row1468 ) ( (  ed2873 ) ) );
    ( (  move_dash_to_dash_col1486 ) ( (  ed2873 ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  currow2876 ) ) ) ) ) ,  (  dims2875 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1492 (    struct Editor_890 *  ed2882 ,    int32_t  col2884 ,    int32_t  row2886 ) {
    return (  eq41 ( (  col2884 ) , ( (  size_dash_i32313 ) ( ( (  size1290 ) ( ( (  get_dash_row1467 ) ( (  ed2882 ) ,  (  row2886 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1493 (    struct Editor_890 *  ed2889 ) {
    return (  eq41 ( ( ( ( * (  ed2889 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  size1290 ) ( ( (  cursor_dash_row1468 ) ( (  ed2889 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1494 (    struct Editor_890 *  ed2892 ,    struct Maybe_356  clip2894 ) {
    struct Maybe_356  dref2895 = ( ( * (  ed2892 ) ) .f_clipboard );
    if ( dref2895.tag == Maybe_356_None_t ) {
    }
    else if ( dref2895.tag == Maybe_356_Just_t ) {
        ( (  free1210 ) ( ( ( * (  ed2892 ) ) .f_al ) ,  ( ( dref2895 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2892 ) .f_clipboard = (  clip2894 );
    return ( Unit_13_Unit );
}

struct funenv1326 {
    enum Unit_13  (*fun) (  struct env1326  ,    struct StrBuilder_626 *  ,    struct Slice_5  );
    struct env1326 env;
};

struct env1495 {
    ;
    ;
    ;
    struct env1326 envinst1326;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1320 envinst1320;
    ;
    ;
};

static  struct Maybe_356   copy_dash_selection1495 (   struct env1495 env ,    struct Editor_890 *  ed2899 ) {
    struct Maybe_157  dref2900 = ( ( * (  ed2899 ) ) .f_selected );
    if ( dref2900.tag == Maybe_157_None_t ) {
        struct Maybe_49  dref2901 = ( (  char_dash_at_dash_cursor1475 ) ( (  ed2899 ) ) );
        if ( dref2901.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
        }
        else if ( dref2901.tag == Maybe_49_Just_t ) {
            struct StrBuilder_626  temp1496 = ( (  mk1332 ) ( ( ( * (  ed2899 ) ) .f_al ) ) );
            struct StrBuilder_626 *  sb2903 = ( &temp1496 );
            struct funenv693  temp1497 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
            ( temp1497.fun ( temp1497.env ,  (  sb2903 ) ,  ( dref2901 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_356_Just ) ( ( (  as_dash_str977 ) ( (  sb2903 ) ) ) ) );
        }
    }
    else if ( dref2900.tag == Maybe_157_Just_t ) {
        struct StrBuilder_626  temp1498 = ( (  mk1332 ) ( ( ( * (  ed2899 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb2905 = ( &temp1498 );
        struct Cursor_154  from2906 = ( (  min948 ) ( ( dref2900 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed2899 ) ) .f_cursor ) ) );
        struct Cursor_154  to2907 = ( (  max955 ) ( ( dref2900 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed2899 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2906 ) .f_y ) , ( (  to2907 ) .f_y ) ) ) ) {
            struct List_3 *  currow2908 = ( (  get_dash_row1467 ) ( (  ed2899 ) ,  ( (  from2906 ) .f_y ) ) );
            struct funenv1326  temp1499 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1499.fun ( temp1499.env ,  (  sb2905 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  currow2908 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from2906 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to2907 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1492 ) ( (  ed2899 ) ,  ( (  to2907 ) .f_x ) ,  ( (  to2907 ) .f_y ) ) ) ) {
                struct funenv1320  temp1500 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
                ( temp1500.fun ( temp1500.env ,  (  sb2905 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        } else {
            ( (  assert1144 ) ( (  cmp80 ( ( (  to2907 ) .f_y ) , ( (  from2906 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2909 = ( (  get_dash_row1467 ) ( (  ed2899 ) ,  ( (  from2906 ) .f_y ) ) );
            struct funenv1326  temp1501 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1501.fun ( temp1501.env ,  (  sb2905 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  currow2909 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from2906 ) .f_x ) ) ) ,  ( (  size1290 ) ( (  currow2909 ) ) ) ) ) ) );
            struct funenv1320  temp1502 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
            ( temp1502.fun ( temp1502.env ,  (  sb2905 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_321  temp1503 =  into_dash_iter325 ( ( (  subslice326 ) ( ( (  to_dash_slice1287 ) ( ( ( * (  ed2899 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from2906 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  to2907 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_355  __cond1504 =  next394 (&temp1503);
                if (  __cond1504 .tag == 0 ) {
                    break;
                }
                struct List_3  row2911 =  __cond1504 .stuff .Maybe_355_Just_s .field0;
                struct funenv1326  temp1505 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
                ( temp1505.fun ( temp1505.env ,  (  sb2905 ) ,  ( (  to_dash_slice1285 ) ( (  row2911 ) ) ) ) );
                struct funenv1320  temp1506 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
                ( temp1506.fun ( temp1506.env ,  (  sb2905 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2912 = ( (  get_dash_row1467 ) ( (  ed2899 ) ,  ( (  to2907 ) .f_y ) ) );
            struct funenv1326  temp1507 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1507.fun ( temp1507.env ,  (  sb2905 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  lastrow2912 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to2907 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1492 ) ( (  ed2899 ) ,  ( (  to2907 ) .f_x ) ,  ( (  to2907 ) .f_y ) ) ) ) {
                struct funenv1320  temp1508 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
                ( temp1508.fun ( temp1508.env ,  (  sb2905 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_136  s2913 = ( (  as_dash_str977 ) ( (  sb2905 ) ) );
        return ( ( Maybe_356_Just ) ( (  s2913 ) ) );
    }
}

struct funenv1495 {
    struct Maybe_356  (*fun) (  struct env1495  ,    struct Editor_890 *  );
    struct env1495 env;
};

struct env1509 {
    ;
    struct env1495 envinst1495;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1509 (   struct env1509 env ,    struct Editor_890 *  ed2916 ) {
    struct funenv1495  temp1510 = ( (struct funenv1495){ .fun = copy_dash_selection1495, .env =  env.envinst1495  } );
    ( (  set_dash_clipboard1494 ) ( (  ed2916 ) ,  ( temp1510.fun ( temp1510.env ,  (  ed2916 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1471 {
    enum Unit_13  (*fun) (  struct env1471  ,    struct Editor_890 *  ,    int32_t  );
    struct env1471 env;
};

struct funenv1274 {
    enum Unit_13  (*fun) (  struct env1274  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1274 env;
};

struct funenv1261 {
    enum Unit_13  (*fun) (  struct env1261  ,    struct List_323 *  ,    size_t  ,    struct List_3  );
    struct env1261 env;
};

struct funenv1258 {
    enum Unit_13  (*fun) (  struct env1258  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1258 env;
};

struct env1511 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1264 envinst1264;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1471 envinst1471;
    ;
    ;
    struct env1272 envinst1272;
    struct env1274 envinst1274;
    ;
    ;
    struct env620 envinst620;
    ;
    ;
    ;
    ;
    ;
    struct env1261 envinst1261;
    struct env1258 envinst1258;
    ;
    ;
    ;
};

static  enum Unit_13   apply_dash_primitive1511 (   struct env1511 env ,    struct Editor_890 *  ed2920 ,    struct Primitive_153  prim2922 ,    struct Dims_1485  dims2924 ) {
    struct Primitive_153  dref2925 = (  prim2922 );
    if ( dref2925.tag == Primitive_153_PrimInsert_t ) {
        int32_t  x2928 = ( ( dref2925 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_x );
        int32_t  y2929 = ( ( dref2925 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_y );
        if ( (  cmp9 ( ( (  i32_dash_size311 ) ( (  y2929 ) ) ) , ( (  num_dash_rows1470 ) ( (  ed2920 ) ) ) ) != 0 ) ) {
            struct funenv620  temp1512 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
            ( temp1512.fun ( temp1512.env ,  ( & ( ( * (  ed2920 ) ) .f_current_dash_file ) ) ,  ( (  mk1244 ) ( ( ( * (  ed2920 ) ) .f_al ) ) ) ) );
        }
        struct SliceIter_330  temp1513 =  into_dash_iter334 ( ( ( dref2925 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) );
        while (true) {
            struct Maybe_49  __cond1514 =  next371 (&temp1513);
            if (  __cond1514 .tag == 0 ) {
                break;
            }
            char  c2931 =  __cond1514 .stuff .Maybe_49_Just_s .field0;
            if ( (  eq47 ( (  c2931 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) {
                struct List_3 *  cur_dash_line2932 = ( (  get_dash_row1467 ) ( (  ed2920 ) ,  (  y2929 ) ) );
                struct List_3  temp1515 = ( (  mk1244 ) ( ( ( * (  ed2920 ) ) .f_al ) ) );
                struct List_3 *  nurow2933 = ( &temp1515 );
                struct funenv1272  temp1516 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  env.envinst1272  } );
                ( temp1516.fun ( temp1516.env ,  (  nurow2933 ) ,  ( (  from1178 ) ( ( (  to_dash_slice1285 ) ( ( * (  cur_dash_line2932 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2928 ) ) ) ) ) ) );
                ( (  trim1278 ) ( (  cur_dash_line2932 ) ,  ( (  i32_dash_size311 ) ( (  x2928 ) ) ) ) );
                struct funenv1261  temp1517 = ( (struct funenv1261){ .fun = insert1261, .env =  env.envinst1261  } );
                ( temp1517.fun ( temp1517.env ,  ( & ( ( * (  ed2920 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  y2929 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2933 ) ) ) );
                y2929 = (  op_dash_add87 ( (  y2929 ) , (  from_dash_integral29 ( 1 ) ) ) );
                x2928 = (  from_dash_integral29 ( 0 ) );
            } else {
                struct funenv1258  temp1518 = ( (struct funenv1258){ .fun = insert1258, .env =  env.envinst1258  } );
                ( temp1518.fun ( temp1518.env ,  ( (  get_dash_row1467 ) ( (  ed2920 ) ,  (  y2929 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2928 ) ) ) ,  (  c2931 ) ) );
                x2928 = (  op_dash_add87 ( (  x2928 ) , (  from_dash_integral29 ( 1 ) ) ) );
            }
        }
        (*  ed2920 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1476 ) ( (  ed2920 ) ,  (  x2928 ) ,  (  y2929 ) ) );
        ( (  move_dash_to1484 ) ( (  ed2920 ) ,  (  x2928 ) ,  (  y2929 ) ,  (  dims2924 ) ) );
    }
    else if ( dref2925.tag == Primitive_153_PrimDelete_t ) {
        struct RangeIter_403  temp1519 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1520 =  next404 (&temp1519);
            if (  __cond1520 .tag == 0 ) {
                break;
            }
            int32_t  dref2936 =  __cond1520 .stuff .Maybe_369_Just_s .field0;
            struct List_3 *  row2937 = ( (  get_dash_row1467 ) ( (  ed2920 ) ,  ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
            if ( (  cmp9 ( ( (  i32_dash_size311 ) ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) , ( ( * (  row2937 ) ) .f_count ) ) != 0 ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( (  num_dash_rows1470 ) ( (  ed2920 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  next_dash_row2938 = ( (  get_dash_row1467 ) ( (  ed2920 ) ,  (  op_dash_add87 ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1274  temp1521 = ( (struct funenv1274){ .fun = add_dash_all1274, .env =  env.envinst1274  } );
                    ( temp1521.fun ( temp1521.env ,  (  row2937 ) ,  (  next_dash_row2938 ) ) );
                    struct funenv1471  temp1522 = ( (struct funenv1471){ .fun = remove_dash_row1471, .env =  env.envinst1471  } );
                    ( temp1522.fun ( temp1522.env ,  (  ed2920 ) ,  (  op_dash_add87 ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                struct funenv1264  temp1523 = ( (struct funenv1264){ .fun = remove1264, .env =  env.envinst1264  } );
                ( temp1523.fun ( temp1523.env ,  (  row2937 ) ,  ( (  i32_dash_size311 ) ( ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) ) );
            }
        }
        (*  ed2920 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1476 ) ( (  ed2920 ) ,  ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
        ( (  move_dash_to1484 ) ( (  ed2920 ) ,  ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2925 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ,  (  dims2924 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_153   invert_dash_primitive1524 (    struct Primitive_153  prim2941 ) {
    struct Primitive_153  dref2942 = (  prim2941 );
    if ( dref2942.tag == Primitive_153_PrimInsert_t ) {
        return ( ( Primitive_153_PrimDelete ) ( ( dref2942 .stuff .Primitive_153_PrimInsert_s .field0 ) ,  ( dref2942 .stuff .Primitive_153_PrimInsert_s .field1 ) ) );
    }
    else if ( dref2942.tag == Primitive_153_PrimDelete_t ) {
        return ( ( Primitive_153_PrimInsert ) ( ( dref2942 .stuff .Primitive_153_PrimDelete_s .field0 ) ,  ( dref2942 .stuff .Primitive_153_PrimDelete_s .field1 ) ) );
    }
}

static  enum Unit_13   free_dash_primitive1525 (    struct Primitive_153  prim2949 ,    enum CAllocator_4  al2951 ) {
    struct Primitive_153  dref2952 = (  prim2949 );
    if ( dref2952.tag == Primitive_153_PrimInsert_t ) {
        ( (  free1210 ) ( (  al2951 ) ,  ( ( dref2952 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) ) );
    }
    else if ( dref2952.tag == Primitive_153_PrimDelete_t ) {
        ( (  free1210 ) ( (  al2951 ) ,  ( ( dref2952 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam668 (   struct env668 env ,    struct Action_152  action2966 ) {
    return ( (  free_dash_primitive1525 ) ( ( (  action2966 ) .f_prim ) ,  ( env.al2961 ) ) );
}

static  enum Unit_13   free_dash_action1526 (    struct Either_182  action2959 ,    enum CAllocator_4  al2961 ) {
    struct Either_182  dref2962 = (  action2959 );
    if ( dref2962.tag == Either_182_Right_t ) {
        ( (  free_dash_primitive1525 ) ( ( ( dref2962 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  al2961 ) ) );
    }
    else if ( dref2962.tag == Either_182_Left_t ) {
        struct env668 envinst668 = {
            .al2961 =  al2961 ,
        };
        ( (  for_dash_each667 ) ( ( dref2962 .stuff .Either_182_Left_s .field0 ) ,  ( (struct funenv668){ .fun = lam668, .env = envinst668 } ) ) );
        ( (  free1212 ) ( (  al2961 ) ,  ( dref2962 .stuff .Either_182_Left_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   start_dash_changeset1527 (    struct Editor_890 *  ed2969 ) {
    ( (  assert1144 ) ( ( ! ( (  is_dash_just882 ) ( ( ( ( * (  ed2969 ) ) .f_actions ) .f_changeset ) ) ) ) ,  ( "unfinished changeset SOMEHOW!" ) ) );
    (*  ed2969 ) .f_actions .f_changeset = ( ( Maybe_883_Just ) ( ( (  mk1246 ) ( ( ( * (  ed2969 ) ) .f_al ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1256 {
    enum Unit_13  (*fun) (  struct env1256  ,    struct List_895 *  ,    struct Either_182  );
    struct env1256 env;
};

struct env1528 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1256 envinst1256;
    ;
    ;
};

static  enum Unit_13   end_dash_changeset1528 (   struct env1528 env ,    struct Editor_890 *  ed2972 ) {
    struct List_160  changeset2973 = ( (  or_dash_fail1153 ) ( ( ( ( * (  ed2972 ) ) .f_actions ) .f_changeset ) ,  ( "nonexistent changeset" ) ) );
    ( (  assert1144 ) ( (  eq45 ( ( ( ( * (  ed2972 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed2972 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  ( "no new changes shouldve been added!" ) ) );
    (*  ed2972 ) .f_actions .f_changeset = ( (struct Maybe_883) { .tag = Maybe_883_None_t } );
    if ( (  eq45 ( ( (  changeset2973 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  free1248 ) ( ( & (  changeset2973 ) ) ) );
        return ( Unit_13_Unit );
    }
    struct Slice_161  changeset2974 = ( (  to_dash_slice1288 ) ( (  changeset2973 ) ) );
    struct funenv1256  temp1529 = ( (struct funenv1256){ .fun = add1256, .env =  env.envinst1256  } );
    ( temp1529.fun ( temp1529.env ,  ( & ( ( ( * (  ed2972 ) ) .f_actions ) .f_list ) ) ,  ( ( Either_182_Left ) ( (  changeset2974 ) ) ) ) );
    (*  ed2972 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed2972 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1254 {
    enum Unit_13  (*fun) (  struct env1254  ,    struct List_160 *  ,    struct Action_152  );
    struct env1254 env;
};

struct env1530 {
    ;
    ;
    ;
    ;
    struct env1254 envinst1254;
    struct env1256 envinst1256;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam680 (   struct env680 env ,    struct Either_182  action2983 ) {
    return ( (  free_dash_action1526 ) ( (  action2983 ) ,  ( env.al2981 ) ) );
}

static  enum Unit_13   push_dash_action1530 (   struct env1530 env ,    struct Actions_894 *  actions2977 ,    struct Action_152  action2979 ,    enum CAllocator_4  al2981 ) {
    struct env680 envinst680 = {
        .al2981 =  al2981 ,
    };
    ( (  for_dash_each679 ) ( ( (  from1179 ) ( ( (  to_dash_slice1286 ) ( ( ( * (  actions2977 ) ) .f_list ) ) ) ,  ( ( * (  actions2977 ) ) .f_cur ) ) ) ,  ( (struct funenv680){ .fun = lam680, .env = envinst680 } ) ) );
    ( (  trim1279 ) ( ( & ( ( * (  actions2977 ) ) .f_list ) ) ,  ( ( * (  actions2977 ) ) .f_cur ) ) );
    struct Actions_894 *  dref2984 = (  actions2977 );
    if ( (* dref2984 ) .f_changeset.tag == Maybe_883_Just_t ) {
        struct funenv1254  temp1531 = ( (struct funenv1254){ .fun = add1254, .env =  env.envinst1254  } );
        ( temp1531.fun ( temp1531.env ,  ( & ( (* dref2984 ) .f_changeset .stuff .Maybe_883_Just_s .field0 ) ) ,  (  action2979 ) ) );
    }
    else if ( true ) {
        struct funenv1256  temp1532 = ( (struct funenv1256){ .fun = add1256, .env =  env.envinst1256  } );
        ( temp1532.fun ( temp1532.env ,  ( & ( ( * (  actions2977 ) ) .f_list ) ) ,  ( ( Either_182_Right ) ( (  action2979 ) ) ) ) );
        (*  actions2977 ) .f_cur = (  op_dash_add98 ( ( ( * (  actions2977 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1530 {
    enum Unit_13  (*fun) (  struct env1530  ,    struct Actions_894 *  ,    struct Action_152  ,    enum CAllocator_4  );
    struct env1530 env;
};

struct env1533 {
    ;
    ;
    ;
    ;
    struct env1326 envinst1326;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env693 envinst693;
    ;
    struct env1530 envinst1530;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1320 envinst1320;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   flush_dash_insert1533 (   struct env1533 env ,    struct Editor_890 *  ed2988 ) {
    struct Maybe_157  dref2989 = ( ( * (  ed2988 ) ) .f_insert_dash_start );
    if ( dref2989.tag == Maybe_157_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2989.tag == Maybe_157_Just_t ) {
        struct Cursor_154  start2991 = ( dref2989 .stuff .Maybe_157_Just_s .field0 );
        (*  ed2988 ) .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        int32_t  del_dash_count2992 = (  from_dash_integral29 ( 0 ) );
        struct Maybe_885  dref2993 = ( ( * (  ed2988 ) ) .f_delete_dash_acc );
        if ( dref2993.tag == Maybe_885_None_t ) {
        }
        else if ( dref2993.tag == Maybe_885_Just_t ) {
            struct DynStr_136  del_dash_text2995 = ( (  as_dash_str977 ) ( ( & ( dref2993 .stuff .Maybe_885_Just_s .field0 ) ) ) );
            (*  ed2988 ) .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
            if ( (  cmp9 ( ( ( (  del_dash_text2995 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                del_dash_count2992 = ( (  size_dash_i32313 ) ( ( ( (  del_dash_text2995 ) .f_contents ) .f_count ) ) );
                struct StrBuilder_626  temp1534 = ( (  mk1332 ) ( ( ( * (  ed2988 ) ) .f_al ) ) );
                struct StrBuilder_626 *  rev_dash_sb2996 = ( &temp1534 );
                struct RangeIter_403  temp1535 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  del_dash_count2992 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_369  __cond1536 =  next404 (&temp1535);
                    if (  __cond1536 .tag == 0 ) {
                        break;
                    }
                    int32_t  i2998 =  __cond1536 .stuff .Maybe_369_Just_s .field0;
                    struct funenv693  temp1537 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
                    ( temp1537.fun ( temp1537.env ,  (  rev_dash_sb2996 ) ,  (  elem_dash_get1188 ( ( (  del_dash_text2995 ) .f_contents ) , ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  op_dash_sub88 ( (  del_dash_count2992 ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  i2998 ) ) ) ) ) ) ) ) );
                }
                ( (  free1210 ) ( ( ( * (  ed2988 ) ) .f_al ) ,  ( (  del_dash_text2995 ) .f_contents ) ) );
                struct DynStr_136  rev_dash_text2999 = ( (  as_dash_str977 ) ( (  rev_dash_sb2996 ) ) );
                struct Cursor_154  del_dash_pos3000 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start2991 ) .f_x ) , (  del_dash_count2992 ) ) ) , .f_y = ( (  start2991 ) .f_y ) } );
                struct funenv1530  temp1538 = ( (struct funenv1530){ .fun = push_dash_action1530, .env =  env.envinst1530  } );
                ( temp1538.fun ( temp1538.env ,  ( & ( ( * (  ed2988 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  del_dash_pos3000 ) ,  (  rev_dash_text2999 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed2988 ) ) .f_al ) ) );
            } else {
                ( (  free1210 ) ( ( ( * (  ed2988 ) ) .f_al ) ,  ( (  del_dash_text2995 ) .f_contents ) ) );
            }
        }
        struct Cursor_154  adj_dash_start3001 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start2991 ) .f_x ) , (  del_dash_count2992 ) ) ) , .f_y = ( (  start2991 ) .f_y ) } );
        if ( (  eq1463 ( (  adj_dash_start3001 ) , ( ( * (  ed2988 ) ) .f_cursor ) ) ) ) {
            return ( Unit_13_Unit );
        }
        struct StrBuilder_626  temp1539 = ( (  mk1332 ) ( ( ( * (  ed2988 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb3002 = ( &temp1539 );
        if ( (  eq41 ( ( (  adj_dash_start3001 ) .f_y ) , ( ( ( * (  ed2988 ) ) .f_cursor ) .f_y ) ) ) ) {
            struct List_3 *  row3003 = ( (  get_dash_row1467 ) ( (  ed2988 ) ,  ( (  adj_dash_start3001 ) .f_y ) ) );
            struct funenv1326  temp1540 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1540.fun ( temp1540.env ,  (  sb3002 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3003 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3001 ) .f_x ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        } else {
            struct List_3 *  first_dash_row3004 = ( (  get_dash_row1467 ) ( (  ed2988 ) ,  ( (  adj_dash_start3001 ) .f_y ) ) );
            struct funenv1326  temp1541 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1541.fun ( temp1541.env ,  (  sb3002 ) ,  ( (  from1178 ) ( ( (  to_dash_slice1285 ) ( ( * (  first_dash_row3004 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3001 ) .f_x ) ) ) ) ) ) );
            struct funenv1320  temp1542 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
            ( temp1542.fun ( temp1542.env ,  (  sb3002 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct Zip_384  temp1543 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1287 ) ( ( ( * (  ed2988 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  adj_dash_start3001 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  adj_dash_start3001 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
            while (true) {
                struct Maybe_391  __cond1544 =  next393 (&temp1543);
                if (  __cond1544 .tag == 0 ) {
                    break;
                }
                struct Tuple2_392  dref3005 =  __cond1544 .stuff .Maybe_391_Just_s .field0;
                struct funenv1326  temp1545 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
                ( temp1545.fun ( temp1545.env ,  (  sb3002 ) ,  ( (  to_dash_slice1285 ) ( ( dref3005 .field0 ) ) ) ) );
                struct funenv1320  temp1546 = ( (struct funenv1320){ .fun = write1320, .env =  env.envinst1320  } );
                ( temp1546.fun ( temp1546.env ,  (  sb3002 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  last_dash_row3008 = ( (  get_dash_row1467 ) ( (  ed2988 ) ,  ( ( ( * (  ed2988 ) ) .f_cursor ) .f_y ) ) );
            struct funenv1326  temp1547 = ( (struct funenv1326){ .fun = write_dash_slice1326, .env =  env.envinst1326  } );
            ( temp1547.fun ( temp1547.env ,  (  sb3002 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  last_dash_row3008 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2988 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        }
        struct DynStr_136  text3009 = ( (  as_dash_str977 ) ( (  sb3002 ) ) );
        if ( (  eq45 ( ( ( (  text3009 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1210 ) ( ( ( * (  ed2988 ) ) .f_al ) ,  ( (  text3009 ) .f_contents ) ) );
            return ( Unit_13_Unit );
        }
        struct funenv1530  temp1548 = ( (struct funenv1530){ .fun = push_dash_action1530, .env =  env.envinst1530  } );
        ( temp1548.fun ( temp1548.env ,  ( & ( ( * (  ed2988 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( (  adj_dash_start3001 ) ,  (  text3009 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed2988 ) ) .f_al ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1533 {
    enum Unit_13  (*fun) (  struct env1533  ,    struct Editor_890 *  );
    struct env1533 env;
};

struct env1549 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1533 envinst1533;
};

static  enum Unit_13   set_dash_mode_dash_normal1549 (   struct env1549 env ,    struct Editor_890 *  ed3012 ) {
    struct funenv1533  temp1550 = ( (struct funenv1533){ .fun = flush_dash_insert1533, .env =  env.envinst1533  } );
    ( temp1550.fun ( temp1550.env ,  (  ed3012 ) ) );
    (*  ed3012 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Normal_t } );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enter_dash_insert_dash_mode1551 (    struct Editor_890 *  ed3015 ) {
    (*  ed3015 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Insert_t } );
    (*  ed3015 ) .f_insert_dash_start = ( ( Maybe_157_Just ) ( ( ( * (  ed3015 ) ) .f_cursor ) ) );
    (*  ed3015 ) .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1511 {
    enum Unit_13  (*fun) (  struct env1511  ,    struct Editor_890 *  ,    struct Primitive_153  ,    struct Dims_1485  );
    struct env1511 env;
};

struct env1552 {
    struct env1511 envinst1511;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1530 envinst1530;
    ;
    struct env1533 envinst1533;
};

static  enum Unit_13   do_dash_action1552 (   struct env1552 env ,    struct Editor_890 *  ed3018 ,    struct Action_152  action3020 ,    struct Dims_1485  dims3022 ) {
    struct funenv1533  temp1553 = ( (struct funenv1533){ .fun = flush_dash_insert1533, .env =  env.envinst1533  } );
    ( temp1553.fun ( temp1553.env ,  (  ed3018 ) ) );
    struct funenv1530  temp1554 = ( (struct funenv1530){ .fun = push_dash_action1530, .env =  env.envinst1530  } );
    ( temp1554.fun ( temp1554.env ,  ( & ( ( * (  ed3018 ) ) .f_actions ) ) ,  (  action3020 ) ,  ( ( * (  ed3018 ) ) .f_al ) ) );
    struct funenv1511  temp1555 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  env.envinst1511  } );
    ( temp1555.fun ( temp1555.env ,  (  ed3018 ) ,  ( (  action3020 ) .f_prim ) ,  (  dims3022 ) ) );
    return ( Unit_13_Unit );
}

struct env1556 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1511 envinst1511;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   undo1556 (   struct env1556 env ,    struct Editor_890 *  ed3025 ,    struct Dims_1485  dims3027 ) {
    if ( (  eq45 ( ( ( ( * (  ed3025 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    (*  ed3025 ) .f_actions .f_cur = (  op_dash_sub99 ( ( ( ( * (  ed3025 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Either_182  action3028 = (  elem_dash_get1266 ( ( ( ( * (  ed3025 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3025 ) ) .f_actions ) .f_cur ) ) );
    struct Action_152  temp1557;
    struct Action_152  last_dash_action3029 = (  temp1557 );
    struct Either_182  dref3030 = (  action3028 );
    if ( dref3030.tag == Either_182_Right_t ) {
        struct funenv1511  temp1558 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  env.envinst1511  } );
        ( temp1558.fun ( temp1558.env ,  (  ed3025 ) ,  ( (  invert_dash_primitive1524 ) ( ( ( dref3030 .stuff .Either_182_Right_s .field0 ) .f_prim ) ) ) ,  (  dims3027 ) ) );
        last_dash_action3029 = ( dref3030 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3030.tag == Either_182_Left_t ) {
        struct SliceReversedIter_1191  temp1559 =  into_dash_iter1192 ( ( (  reversed1190 ) ( ( dref3030 .stuff .Either_182_Left_s .field0 ) ) ) );
        while (true) {
            struct Maybe_466  __cond1560 =  next1193 (&temp1559);
            if (  __cond1560 .tag == 0 ) {
                break;
            }
            struct Action_152  action3034 =  __cond1560 .stuff .Maybe_466_Just_s .field0;
            struct funenv1511  temp1561 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  env.envinst1511  } );
            ( temp1561.fun ( temp1561.env ,  (  ed3025 ) ,  ( (  invert_dash_primitive1524 ) ( ( (  action3034 ) .f_prim ) ) ) ,  (  dims3027 ) ) );
        }
        last_dash_action3029 = (  elem_dash_get1189 ( ( dref3030 .stuff .Either_182_Left_s .field0 ) , (  from_dash_integral11 ( 0 ) ) ) );
    }
    struct Maybe_155  dref3035 = ( (  last_dash_action3029 ) .f_before_dash_pos );
    if ( dref3035.tag == Maybe_155_None_t ) {
    }
    else if ( dref3035.tag == Maybe_155_Just_t ) {
        ( (  move_dash_to1484 ) ( (  ed3025 ) ,  ( ( ( dref3035 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_x ) ,  ( ( ( dref3035 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_y ) ,  (  dims3027 ) ) );
        (*  ed3025 ) .f_selected = ( ( dref3035 .stuff .Maybe_155_Just_s .field0 ) .f_sel );
    }
    return ( Unit_13_Unit );
}

struct env1562 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1511 envinst1511;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   redo1562 (   struct env1562 env ,    struct Editor_890 *  ed3039 ,    struct Dims_1485  dims3041 ) {
    if ( (  cmp9 ( ( ( ( * (  ed3039 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed3039 ) ) .f_actions ) .f_list ) .f_count ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    struct Either_182  action3042 = (  elem_dash_get1266 ( ( ( ( * (  ed3039 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3039 ) ) .f_actions ) .f_cur ) ) );
    (*  ed3039 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed3039 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Action_152  temp1563;
    struct Action_152  last_dash_action3043 = (  temp1563 );
    struct Either_182  dref3044 = (  action3042 );
    if ( dref3044.tag == Either_182_Right_t ) {
        struct funenv1511  temp1564 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  env.envinst1511  } );
        ( temp1564.fun ( temp1564.env ,  (  ed3039 ) ,  ( ( dref3044 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  dims3041 ) ) );
        last_dash_action3043 = ( dref3044 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3044.tag == Either_182_Left_t ) {
        struct SliceIter_409  temp1565 =  into_dash_iter533 ( ( dref3044 .stuff .Either_182_Left_s .field0 ) );
        while (true) {
            struct Maybe_466  __cond1566 =  next467 (&temp1565);
            if (  __cond1566 .tag == 0 ) {
                break;
            }
            struct Action_152  action3048 =  __cond1566 .stuff .Maybe_466_Just_s .field0;
            struct funenv1511  temp1567 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  env.envinst1511  } );
            ( temp1567.fun ( temp1567.env ,  (  ed3039 ) ,  ( (  action3048 ) .f_prim ) ,  (  dims3041 ) ) );
        }
        last_dash_action3043 = (  elem_dash_get1189 ( ( dref3044 .stuff .Either_182_Left_s .field0 ) , (  op_dash_sub99 ( ( ( dref3044 .stuff .Either_182_Left_s .field0 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    }
    struct Primitive_153  dref3049 = ( (  last_dash_action3043 ) .f_prim );
    if ( dref3049.tag == Primitive_153_PrimInsert_t ) {
        ( (  move_dash_left1488 ) ( (  ed3039 ) ,  (  dims3041 ) ) );
        if ( ( (  last_dash_action3043 ) .f_selected ) ) {
            (*  ed3039 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3049 .stuff .Primitive_153_PrimInsert_s .field0 ) ) );
        }
    }
    else if ( true ) {
    }
    return ( Unit_13_Unit );
}

struct funenv1549 {
    enum Unit_13  (*fun) (  struct env1549  ,    struct Editor_890 *  );
    struct env1549 env;
};

struct funenv1552 {
    enum Unit_13  (*fun) (  struct env1552  ,    struct Editor_890 *  ,    struct Action_152  ,    struct Dims_1485  );
    struct env1552 env;
};

struct env1568 {
    ;
    ;
    ;
    struct env1549 envinst1549;
    ;
    ;
    ;
    ;
    struct env1552 envinst1552;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

enum PastePos_1569 {
    PastePos_1569_PasteBefore,
    PastePos_1569_PasteAfter,
};

static  struct Cursor_154   lam909 (   struct env909 env ,    struct Cursor_154  s3065 ) {
    return ( (  max955 ) ( (  s3065 ) ,  ( ( * ( env.ed3053 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam912 (   struct env912 env ,    struct Cursor_154  s3067 ) {
    return ( (  min948 ) ( (  s3067 ) ,  ( ( * ( env.ed3053 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam906 (   struct env906 env ,    struct Cursor_154  s3075 ) {
    return ( (  max955 ) ( (  s3075 ) ,  ( ( * ( env.ed3053 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam903 (   struct env903 env ,    struct Cursor_154  s3078 ) {
    return ( (  min948 ) ( (  s3078 ) ,  ( ( * ( env.ed3053 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1568 (   struct env1568 env ,    struct Editor_890 *  ed3053 ,    enum PastePos_1569  pastepos3055 ,    struct Dims_1485  dims3057 ) {
    if ( ( ! ( (  is_dash_just881 ) ( ( ( * (  ed3053 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_136  cp3058 = ( (  or_dash_fail1152 ) ( ( ( * (  ed3053 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    struct Cursor_154  before_dash_cursor3059 = ( ( * (  ed3053 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3060 = ( ( * (  ed3053 ) ) .f_selected );
    struct Pos_156  before_dash_pos3061 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3059 ) , .f_sel = (  before_dash_sel3060 ) } );
    bool  does_dash_it_dash_end_dash_in_dash_newline3062 = (  eq47 ( (  elem_dash_get1188 ( ( (  cp3058 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp3058 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline3062 ) ) {
        struct env909 envinst909 = {
            .ed3053 =  ed3053 ,
        };
        struct env912 envinst912 = {
            .ed3053 =  ed3053 ,
        };
        int32_t  from_dash_y3068 = ( {  enum PastePos_1569  dref3063 = (  pastepos3055 ) ;  dref3063 == PastePos_1569_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe908 ) ( ( ( * (  ed3053 ) ) .f_selected ) ,  ( (struct funenv909){ .fun = lam909, .env = envinst909 } ) ,  ( ( * (  ed3053 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe911 ) ( ( ( * (  ed3053 ) ) .f_selected ) ,  ( (struct funenv912){ .fun = lam912, .env = envinst912 } ) ,  ( ( * (  ed3053 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Primitive_153  prim3069 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3068 ) } ) ,  ( (  clone1217 ) ( (  cp3058 ) ,  ( ( * (  ed3053 ) ) .f_al ) ) ) ) );
        struct funenv1552  temp1570 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  env.envinst1552  } );
        ( temp1570.fun ( temp1570.env ,  (  ed3053 ) ,  ( (struct Action_152) { .f_prim = (  prim3069 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3061 ) ) ) } ) ,  (  dims3057 ) ) );
        int32_t  last_dash_pasted_dash_y3070 = (  op_dash_sub88 ( ( ( ( * (  ed3053 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        ( (  move_dash_to1484 ) ( (  ed3053 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  get_dash_row1467 ) ( (  ed3053 ) ,  (  last_dash_pasted_dash_y3070 ) ) ) ) .f_count ) ) ) ,  (  last_dash_pasted_dash_y3070 ) ,  (  dims3057 ) ) );
        (*  ed3053 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3068 ) } ) ) );
        struct funenv1549  temp1571 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  env.envinst1549  } );
        ( temp1571.fun ( temp1571.env ,  (  ed3053 ) ) );
    } else {
        size_t  temp1572;
        size_t  from_dash_x3071 = (  temp1572 );
        int32_t  temp1573;
        int32_t  from_dash_y3072 = (  temp1573 );
        enum PastePos_1569  dref3073 = (  pastepos3055 );
        switch (  dref3073 ) {
            case PastePos_1569_PasteAfter : {
                struct env906 envinst906 = {
                    .ed3053 =  ed3053 ,
                };
                struct Cursor_154  from_dash_cur3076 = ( (  maybe905 ) ( ( ( * (  ed3053 ) ) .f_selected ) ,  ( (struct funenv906){ .fun = lam906, .env = envinst906 } ) ,  ( ( * (  ed3053 ) ) .f_cursor ) ) );
                from_dash_x3071 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( ( (  from_dash_cur3076 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y3072 = ( (  from_dash_cur3076 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1492 ) ( (  ed3053 ) ,  ( (  from_dash_cur3076 ) .f_x ) ,  ( (  from_dash_cur3076 ) .f_y ) ) ) ) {
                    from_dash_y3072 = (  op_dash_add87 ( (  from_dash_y3072 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x3071 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1569_PasteBefore : {
                struct env903 envinst903 = {
                    .ed3053 =  ed3053 ,
                };
                struct Cursor_154  from_dash_cur3079 = ( (  maybe902 ) ( ( ( * (  ed3053 ) ) .f_selected ) ,  ( (struct funenv903){ .fun = lam903, .env = envinst903 } ) ,  ( ( * (  ed3053 ) ) .f_cursor ) ) );
                from_dash_x3071 = ( (  i32_dash_size311 ) ( ( (  from_dash_cur3079 ) .f_x ) ) );
                from_dash_y3072 = ( (  from_dash_cur3079 ) .f_y );
                break;
            }
        }
        struct Primitive_153  prim3080 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3071 ) ) ) , .f_y = (  from_dash_y3072 ) } ) ,  ( (  clone1217 ) ( (  cp3058 ) ,  ( ( * (  ed3053 ) ) .f_al ) ) ) ) );
        struct funenv1552  temp1574 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  env.envinst1552  } );
        ( temp1574.fun ( temp1574.env ,  (  ed3053 ) ,  ( (struct Action_152) { .f_prim = (  prim3080 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3061 ) ) ) } ) ,  (  dims3057 ) ) );
        ( (  move_dash_left1488 ) ( (  ed3053 ) ,  (  dims3057 ) ) );
        (*  ed3053 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3071 ) ) ) , .f_y = (  from_dash_y3072 ) } ) ) );
        struct funenv1549  temp1575 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  env.envinst1549  } );
        ( temp1575.fun ( temp1575.env ,  (  ed3053 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1576 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1549 envinst1549;
    struct env1495 envinst1495;
    struct env693 envinst693;
    struct env1552 envinst1552;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   delete_dash_selected1576 (   struct env1576 env ,    struct Editor_890 *  ed3083 ,    struct Dims_1485  dims3085 ) {
    struct Cursor_154  before_dash_cursor3086 = ( ( * (  ed3083 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3087 = ( ( * (  ed3083 ) ) .f_selected );
    struct Pos_156  before_dash_pos3088 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3086 ) , .f_sel = (  before_dash_sel3087 ) } );
    struct Cursor_154  cfrom3091 = ( {  struct Maybe_157  dref3089 = ( ( * (  ed3083 ) ) .f_selected ) ; dref3089.tag == Maybe_157_Just_t ? ( (  min948 ) ( ( dref3089 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed3083 ) ) .f_cursor ) ) ) : ( ( * (  ed3083 ) ) .f_cursor ) ; } );
    struct DynStr_136  temp1577;
    struct DynStr_136  del3092 = (  temp1577 );
    struct funenv1495  temp1578 = ( (struct funenv1495){ .fun = copy_dash_selection1495, .env =  env.envinst1495  } );
    struct Maybe_356  dref3093 = ( temp1578.fun ( temp1578.env ,  (  ed3083 ) ) );
    if ( dref3093.tag == Maybe_356_None_t ) {
        struct StrBuilder_626  temp1579 = ( (  mk1332 ) ( ( ( * (  ed3083 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb3094 = ( &temp1579 );
        struct funenv693  temp1580 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
        ( temp1580.fun ( temp1580.env ,  (  sb3094 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
        del3092 = ( (  as_dash_str977 ) ( (  sb3094 ) ) );
        ( (  set_dash_clipboard1494 ) ( (  ed3083 ) ,  ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) ) );
    }
    else if ( dref3093.tag == Maybe_356_Just_t ) {
        if ( ( (  is_dash_just880 ) ( ( ( * (  ed3083 ) ) .f_selected ) ) ) ) {
            struct funenv1549  temp1581 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  env.envinst1549  } );
            ( temp1581.fun ( temp1581.env ,  (  ed3083 ) ) );
        }
        (*  ed3083 ) .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        del3092 = ( dref3093 .stuff .Maybe_356_Just_s .field0 );
        ( (  set_dash_clipboard1494 ) ( (  ed3083 ) ,  ( ( Maybe_356_Just ) ( ( (  clone1217 ) ( ( dref3093 .stuff .Maybe_356_Just_s .field0 ) ,  ( ( * (  ed3083 ) ) .f_al ) ) ) ) ) ) );
    }
    struct funenv1552  temp1582 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  env.envinst1552  } );
    ( temp1582.fun ( temp1582.env ,  (  ed3083 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  cfrom3091 ) ,  (  del3092 ) ) ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3088 ) ) ) } ) ,  (  dims3085 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1276 {
    enum Unit_13  (*fun) (  struct env1276  ,    struct List_3 *  ,    struct TakeWhile_560  );
    struct env1276 env;
};

struct env1583 {
    ;
    ;
    ;
    struct env1276 envinst1276;
    ;
    ;
    ;
    struct env1261 envinst1261;
    ;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1583 (   struct env1583 env ,    struct Editor_890 *  ed3098 ,    int32_t  y3100 ,    enum CAllocator_4  al3102 ) {
    struct List_3  temp1584 = ( (  mk1244 ) ( (  al3102 ) ) );
    struct List_3 *  nurow3103 = ( &temp1584 );
    struct TakeWhile_560  rowws3104 = ( (  indent_dash_on_dash_row1469 ) ( (  ed3098 ) ,  ( ( ( * (  ed3098 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars3105 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( (  rowws3104 ) ) ) ) );
    struct funenv1276  temp1585 = ( (struct funenv1276){ .fun = add_dash_all1276, .env =  env.envinst1276  } );
    ( temp1585.fun ( temp1585.env ,  (  nurow3103 ) ,  (  rowws3104 ) ) );
    struct funenv1261  temp1586 = ( (struct funenv1261){ .fun = insert1261, .env =  env.envinst1261  } );
    ( temp1586.fun ( temp1586.env ,  ( & ( ( * (  ed3098 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y3100 ) ) ) ,  ( * (  nurow3103 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1587 (    struct Editor_890 *  ed3108 ,    struct Cursor_154  c3110 ) {
    return ( {  struct Maybe_157  dref3111 = ( ( * (  ed3108 ) ) .f_selected ) ; dref3111.tag == Maybe_157_Just_t ? ( (  between958 ) ( (  c3110 ) ,  ( ( * (  ed3108 ) ) .f_cursor ) ,  ( dref3111 .stuff .Maybe_157_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1482 {
    enum Unit_13  (*fun) (  struct env1482  ,    struct Editor_890 *  ,    const char*  );
    struct env1482 env;
};

struct env1588 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1482 envinst1482;
    ;
    ;
    ;
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

static  struct Maybe_157   find_dash_next_dash_occurence1588 (   struct env1588 env ,    struct Editor_890 *  ed3115 ,    struct Slice_5  needle3117 ) {
    struct Cursor_154  from3118 = ( (  max955 ) ( ( ( * (  ed3115 ) ) .f_cursor ) ,  ( (  or_dash_else1156 ) ( ( ( * (  ed3115 ) ) .f_selected ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline3119 = ( (  to_dash_slice1285 ) ( ( * ( (  get_dash_row1467 ) ( (  ed3115 ) ,  ( (  from3118 ) .f_y ) ) ) ) ) );
    struct Maybe_901  dref3120 = ( (  find_dash_slice1197 ) ( ( (  subslice335 ) ( (  curline3119 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3118 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline3119 ) .f_count ) ) ) ,  (  needle3117 ) ) );
    if ( dref3120.tag == Maybe_901_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from3118 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( dref3120 .stuff .Maybe_901_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from3118 ) .f_y ) } ) ) );
    }
    else if ( dref3120.tag == Maybe_901_None_t ) {
        struct Zip_384  temp1589 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  from1180 ) ( ( (  to_dash_slice1287 ) ( ( ( * (  ed3115 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3118 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  from3118 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_391  __cond1590 =  next393 (&temp1589);
            if (  __cond1590 .tag == 0 ) {
                break;
            }
            struct Tuple2_392  dref3122 =  __cond1590 .stuff .Maybe_391_Just_s .field0;
            struct Maybe_901  dref3125 = ( (  find_dash_slice1197 ) ( ( (  to_dash_slice1285 ) ( ( dref3122 .field0 ) ) ) ,  (  needle3117 ) ) );
            if ( dref3125.tag == Maybe_901_None_t ) {
            }
            else if ( dref3125.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3125 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( dref3122 .field1 ) } ) ) );
            }
        }
        struct funenv1482  temp1591 = ( (struct funenv1482){ .fun = send_dash_msg1482, .env =  env.envinst1482  } );
        ( temp1591.fun ( temp1591.env ,  (  ed3115 ) ,  ( "Wrapped!" ) ) );
        struct Zip_384  temp1592 =  into_dash_iter398 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1287 ) ( ( ( * (  ed3115 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3118 ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_391  __cond1593 =  next393 (&temp1592);
            if (  __cond1593 .tag == 0 ) {
                break;
            }
            struct Tuple2_392  dref3127 =  __cond1593 .stuff .Maybe_391_Just_s .field0;
            struct Maybe_901  dref3130 = ( (  find_dash_slice1197 ) ( ( (  to_dash_slice1285 ) ( ( dref3127 .field0 ) ) ) ,  (  needle3117 ) ) );
            if ( dref3130.tag == Maybe_901_None_t ) {
            }
            else if ( dref3130.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3130 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( dref3127 .field1 ) } ) ) );
            }
        }
        struct Maybe_901  dref3132 = ( (  find_dash_slice1197 ) ( (  curline3119 ) ,  (  needle3117 ) ) );
        if ( dref3132.tag == Maybe_901_None_t ) {
        }
        else if ( dref3132.tag == Maybe_901_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3132 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3118 ) .f_y ) } ) ) );
        }
        struct funenv1482  temp1594 = ( (struct funenv1482){ .fun = send_dash_msg1482, .env =  env.envinst1482  } );
        ( temp1594.fun ( temp1594.env ,  (  ed3115 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct env1595 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1482 envinst1482;
    ;
    ;
    ;
    ;
};

static  struct Cursor_154   lam927 (   struct env927 env ,    struct Cursor_154  s3140 ) {
    return ( (  min948 ) ( ( ( * ( env.ed3136 ) ) .f_cursor ) ,  (  s3140 ) ) );
}

static  struct Maybe_157   find_dash_prev_dash_occurence1595 (   struct env1595 env ,    struct Editor_890 *  ed3136 ,    struct Slice_5  needle3138 ) {
    struct env927 envinst927 = {
        .ed3136 =  ed3136 ,
    };
    struct Cursor_154  from3141 = ( (  maybe926 ) ( ( ( * (  ed3136 ) ) .f_selected ) ,  ( (struct funenv927){ .fun = lam927, .env = envinst927 } ) ,  ( ( * (  ed3136 ) ) .f_cursor ) ) );
    struct Slice_5  curline3142 = ( (  to_dash_slice1285 ) ( ( * ( (  get_dash_row1467 ) ( (  ed3136 ) ,  ( (  from3141 ) .f_y ) ) ) ) ) );
    struct Maybe_901  dref3143 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  subslice335 ) ( (  curline3142 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3141 ) .f_x ) ) ) ) ) ,  (  needle3138 ) ) );
    if ( dref3143.tag == Maybe_901_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3143 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3141 ) .f_y ) } ) ) );
    }
    else if ( dref3143.tag == Maybe_901_None_t ) {
        int32_t  from_dash_y3145 = (  op_dash_sub88 ( ( (  from3141 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3145 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row3146 = ( (  get_dash_row1467 ) ( (  ed3136 ) ,  (  from_dash_y3145 ) ) );
            struct Maybe_901  dref3147 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3146 ) ) ) ) ,  (  needle3138 ) ) );
            if ( dref3147.tag == Maybe_901_None_t ) {
            }
            else if ( dref3147.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3147 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3145 ) } ) ) );
            }
            from_dash_y3145 = (  op_dash_sub88 ( (  from_dash_y3145 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1482  temp1596 = ( (struct funenv1482){ .fun = send_dash_msg1482, .env =  env.envinst1482  } );
        ( temp1596.fun ( temp1596.env ,  (  ed3136 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y3149 = (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  num_dash_rows1470 ) ( (  ed3136 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3149 ) , ( (  from3141 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row3150 = ( (  get_dash_row1467 ) ( (  ed3136 ) ,  (  from_dash_y3149 ) ) );
            struct Maybe_901  dref3151 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3150 ) ) ) ) ,  (  needle3138 ) ) );
            if ( dref3151.tag == Maybe_901_None_t ) {
            }
            else if ( dref3151.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3151 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3149 ) } ) ) );
            }
            from_dash_y3149 = (  op_dash_sub88 ( (  from_dash_y3149 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_901  dref3153 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( (  curline3142 ) ,  (  needle3138 ) ) );
        if ( dref3153.tag == Maybe_901_None_t ) {
        }
        else if ( dref3153.tag == Maybe_901_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3153 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3141 ) .f_y ) } ) ) );
        }
        struct funenv1482  temp1597 = ( (struct funenv1482){ .fun = send_dash_msg1482, .env =  env.envinst1482  } );
        ( temp1597.fun ( temp1597.env ,  (  ed3136 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct funenv1528 {
    enum Unit_13  (*fun) (  struct env1528  ,    struct Editor_890 *  );
    struct env1528 env;
};

struct funenv1339 {
    struct DynStr_136  (*fun) (  struct env1339  ,    char  ,    enum CAllocator_4  );
    struct env1339 env;
};

struct env1598 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1528 envinst1528;
    ;
    struct env1339 envinst1339;
    ;
    ;
    struct env1552 envinst1552;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam915 (   struct env915 env ,    struct Cursor_154  s3161 ) {
    return ( (  min950 ) ( ( (  s3161 ) .f_y ) ,  ( ( ( * ( env.ed3157 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam918 (   struct env918 env ,    struct Cursor_154  s3164 ) {
    return ( (  max954 ) ( ( (  s3164 ) .f_y ) ,  ( ( ( * ( env.ed3157 ) ) .f_cursor ) .f_y ) ) );
}

static  struct Cursor_154   lam1605 (    struct Cursor_154  s3172 ) {
    struct Cursor_154  temp1606 = (  s3172 );
    temp1606 .  f_x = (  op_dash_add87 ( ( (  s3172 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( temp1606 );
}

static  enum Unit_13   indent_dash_selection1598 (   struct env1598 env ,    struct Editor_890 *  ed3157 ,    struct Dims_1485  dims3159 ) {
    struct env915 envinst915 = {
        .ed3157 =  ed3157 ,
    };
    int32_t  from_dash_y3162 = ( (  maybe914 ) ( ( ( * (  ed3157 ) ) .f_selected ) ,  ( (struct funenv915){ .fun = lam915, .env = envinst915 } ) ,  ( ( ( * (  ed3157 ) ) .f_cursor ) .f_y ) ) );
    struct env918 envinst918 = {
        .ed3157 =  ed3157 ,
    };
    int32_t  to_dash_y3165 = ( (  maybe917 ) ( ( ( * (  ed3157 ) ) .f_selected ) ,  ( (struct funenv918){ .fun = lam918, .env = envinst918 } ) ,  ( ( ( * (  ed3157 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3166 = ( ( * (  ed3157 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3167 = ( ( * (  ed3157 ) ) .f_selected );
    struct Pos_156  before_dash_pos3168 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3166 ) , .f_sel = (  saved_dash_selected3167 ) } );
    ( (  start_dash_changeset1527 ) ( (  ed3157 ) ) );
    struct RangeIter_403  temp1599 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3162 ) ,  (  to_dash_y3165 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1600 =  next404 (&temp1599);
        if (  __cond1600 .tag == 0 ) {
            break;
        }
        int32_t  rowid3170 =  __cond1600 .stuff .Maybe_369_Just_s .field0;
        if ( ( ! ( (  is_dash_row_dash_empty1473 ) ( (  ed3157 ) ,  (  rowid3170 ) ) ) ) ) {
            struct funenv1552  temp1601 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  env.envinst1552  } );
            struct funenv1339  temp1602 = ( (struct funenv1339){ .fun = mk_dash_dyn_dash_str1339, .env =  env.envinst1339  } );
            ( temp1601.fun ( temp1601.env ,  (  ed3157 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3170 ) } ) ,  ( temp1602.fun ( temp1602.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3157 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3168 ) ) ) } ) ,  (  dims3159 ) ) );
        }
    }
    struct funenv1528  temp1603 = ( (struct funenv1528){ .fun = end_dash_changeset1528, .env =  env.envinst1528  } );
    ( temp1603.fun ( temp1603.env ,  (  ed3157 ) ) );
    struct Cursor_154  temp1604 = (  saved_dash_cursor3166 );
    temp1604 .  f_x = (  op_dash_add87 ( ( (  saved_dash_cursor3166 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    (*  ed3157 ) .f_cursor = ( temp1604 );
    (*  ed3157 ) .f_selected = ( (  fmap_dash_maybe897 ) ( (  saved_dash_selected3167 ) ,  (  lam1605 ) ) );
    return ( Unit_13_Unit );
}

struct env1607 {
    ;
    ;
    ;
    ;
    ;
    struct env1528 envinst1528;
    ;
    ;
    struct env1339 envinst1339;
    ;
    struct env1552 envinst1552;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  int32_t   lam921 (   struct env921 env ,    struct Cursor_154  s3179 ) {
    return ( (  min950 ) ( ( (  s3179 ) .f_y ) ,  ( ( ( * ( env.ed3175 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam924 (   struct env924 env ,    struct Cursor_154  s3182 ) {
    return ( (  max954 ) ( ( (  s3182 ) .f_y ) ,  ( ( ( * ( env.ed3175 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1607 (   struct env1607 env ,    struct Editor_890 *  ed3175 ,    struct Dims_1485  dims3177 ) {
    struct env921 envinst921 = {
        .ed3175 =  ed3175 ,
    };
    int32_t  from_dash_y3180 = ( (  maybe920 ) ( ( ( * (  ed3175 ) ) .f_selected ) ,  ( (struct funenv921){ .fun = lam921, .env = envinst921 } ) ,  ( ( ( * (  ed3175 ) ) .f_cursor ) .f_y ) ) );
    struct env924 envinst924 = {
        .ed3175 =  ed3175 ,
    };
    int32_t  to_dash_y3183 = ( (  maybe923 ) ( ( ( * (  ed3175 ) ) .f_selected ) ,  ( (struct funenv924){ .fun = lam924, .env = envinst924 } ) ,  ( ( ( * (  ed3175 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3184 = ( ( * (  ed3175 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3185 = ( ( * (  ed3175 ) ) .f_selected );
    struct Pos_156  before_dash_pos3186 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3184 ) , .f_sel = (  saved_dash_selected3185 ) } );
    ( (  start_dash_changeset1527 ) ( (  ed3175 ) ) );
    struct RangeIter_403  temp1608 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3180 ) ,  (  to_dash_y3183 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1609 =  next404 (&temp1608);
        if (  __cond1609 .tag == 0 ) {
            break;
        }
        int32_t  rowid3188 =  __cond1609 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1474 ) ( (  ed3175 ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3188 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct funenv1552  temp1610 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  env.envinst1552  } );
            struct funenv1339  temp1611 = ( (struct funenv1339){ .fun = mk_dash_dyn_dash_str1339, .env =  env.envinst1339  } );
            ( temp1610.fun ( temp1610.env ,  (  ed3175 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3188 ) } ) ,  ( temp1611.fun ( temp1611.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3175 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3186 ) ) ) } ) ,  (  dims3177 ) ) );
            if ( (  eq41 ( ( (  saved_dash_cursor3184 ) .f_y ) , (  rowid3188 ) ) ) ) {
                struct Cursor_154  temp1612 = (  saved_dash_cursor3184 );
                temp1612 .  f_x = ( (  cmp80 ( ( (  saved_dash_cursor3184 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( (  saved_dash_cursor3184 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                saved_dash_cursor3184 = ( temp1612 );
            }
            struct Maybe_157  dref3189 = (  saved_dash_selected3185 );
            if ( dref3189.tag == Maybe_157_None_t ) {
            }
            else if ( dref3189.tag == Maybe_157_Just_t ) {
                if ( (  eq41 ( ( ( dref3189 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  rowid3188 ) ) ) ) {
                    struct Cursor_154  temp1613 = ( dref3189 .stuff .Maybe_157_Just_s .field0 );
                    temp1613 .  f_x = ( (  cmp80 ( ( ( dref3189 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( ( dref3189 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                    saved_dash_selected3185 = ( ( Maybe_157_Just ) ( ( temp1613 ) ) );
                }
            }
        }
    }
    struct funenv1528  temp1614 = ( (struct funenv1528){ .fun = end_dash_changeset1528, .env =  env.envinst1528  } );
    ( temp1614.fun ( temp1614.env ,  (  ed3175 ) ) );
    (*  ed3175 ) .f_cursor = (  saved_dash_cursor3184 );
    (*  ed3175 ) .f_selected = (  saved_dash_selected3185 );
    return ( Unit_13_Unit );
}

struct funenv1282 {
    struct List_323  (*fun) (  struct env1282  ,    struct Map_341  ,    enum CAllocator_4  );
    struct env1282 env;
};

struct env1615 {
    ;
    ;
    ;
    ;
    struct env344 envinst344;
    struct env1282 envinst1282;
    struct env620 envinst620;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam343 (   struct env343 env ,    struct DynStr_136  line3227 ) {
    struct funenv344  temp1618 = ( (struct funenv344){ .fun = to_dash_list344, .env =  env.envinst344  } );
    return ( temp1618.fun ( temp1618.env ,  (  line3227 ) ,  ( env.al3196 ) ) );
}

static  struct List_323   load_dash_file1615 (   struct env1615 env ,    const char*  filename3194 ,    enum CAllocator_4  al3196 ) {
    struct funenv1282  temp1617 = ( (struct funenv1282){ .fun = to_dash_list1282, .env =  env.envinst1282  } );
    struct env343 envinst343 = {
        .envinst344 = env.envinst344 ,
        .al3196 =  al3196 ,
    };
    struct List_323  temp1616 = ( temp1617.fun ( temp1617.env ,  ( (  map372 ) ( ( (  lines1228 ) ( ( (  read_dash_contents1455 ) ( (  filename3194 ) ,  (  al3196 ) ) ) ) ) ,  ( (struct funenv343){ .fun = lam343, .env = envinst343 } ) ) ) ,  (  al3196 ) ) );
    struct List_323 *  file3228 = ( &temp1616 );
    if ( ( (  null873 ) ( (  file3228 ) ) ) ) {
        struct funenv620  temp1619 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
        ( temp1619.fun ( temp1619.env ,  (  file3228 ) ,  ( (  mk1244 ) ( (  al3196 ) ) ) ) );
    }
    return ( * (  file3228 ) );
}

struct env1620 {
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al3191;
    struct env693 envinst693;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam692 (   struct env692 env ,    char  c3238 ) {
    struct funenv693  temp1624 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
    return ( temp1624.fun ( temp1624.env ,  ( env.sb3234 ) ,  (  c3238 ) ) );
}

static  enum Unit_13   save_dash_file1620 (   struct env1620 env ,    struct List_323  cf3231 ,    const char*  filename3233 ) {
    struct StrBuilder_626  temp1621 = ( (  mk1332 ) ( ( env.al3191 ) ) );
    struct StrBuilder_626 *  sb3234 = ( &temp1621 );
    struct SliceIter_321  temp1622 =  into_dash_iter324 ( (  cf3231 ) );
    while (true) {
        struct Maybe_355  __cond1623 =  next394 (&temp1622);
        if (  __cond1623 .tag == 0 ) {
            break;
        }
        struct List_3  row3236 =  __cond1623 .stuff .Maybe_355_Just_s .field0;
        struct env692 envinst692 = {
            .sb3234 =  sb3234 ,
            .envinst693 = env.envinst693 ,
        };
        ( (  for_dash_each691 ) ( (  row3236 ) ,  ( (struct funenv692){ .fun = lam692, .env = envinst692 } ) ) );
        struct funenv693  temp1625 = ( (struct funenv693){ .fun = write_dash_char693, .env =  env.envinst693  } );
        ( temp1625.fun ( temp1625.env ,  (  sb3234 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1457 ) ( (  filename3233 ) ,  ( (  as_dash_str977 ) ( (  sb3234 ) ) ) ) );
    ( (  free1334 ) ( (  sb3234 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1626 (    struct List_323  cf3241 ) {
    ( (  for_dash_each704 ) ( ( (  addresses1289 ) ( (  cf3241 ) ) ) ,  (  free1247 ) ) );
    ( (  free1249 ) ( ( & (  cf3241 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1627 {
    int32_t  pad3242;
    ;
    ;
    ;
    ;
};

struct anon_1628 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1628   left_dash_offset1627 (   struct env1627 env ,    struct Editor_890 *  ed3245 ) {
    int32_t  max_dash_digits3246 = ( (  max954 ) ( ( (  count_dash_digits962 ) ( ( ( ( * (  ed3245 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1628) { .f_max_dash_digits = (  max_dash_digits3246 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad3242 ) , (  max_dash_digits3246 ) ) ) , ( env.pad3242 ) ) ) } );
}

struct funenv1627 {
    struct anon_1628  (*fun) (  struct env1627  ,    struct Editor_890 *  );
    struct env1627 env;
};

struct env1629 {
    struct env1627 envinst1627;
    ;
    ;
};

static  struct Dims_1485   screen_dash_dims1629 (   struct env1629 env ,    struct Editor_890 *  ed3249 ,    struct Tui_717 *  tui3251 ) {
    struct funenv1627  temp1630 = ( (struct funenv1627){ .fun = left_dash_offset1627, .env =  env.envinst1627  } );
    return ( (struct Dims_1485) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * (  tui3251 ) ) .f_width ) ) ) , ( ( temp1630.fun ( temp1630.env ,  (  ed3249 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32317 ) ( ( ( * (  tui3251 ) ) .f_height ) ) ) } );
}

struct env1631 {
    ;
    struct env1627 envinst1627;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad3242;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   render_dash_editor1631 (   struct env1631 env ,    struct Screen_716 *  screen3254 ,    struct Editor_890 *  ed3256 ) {
    int32_t  w3257 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3254 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3258 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3254 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y3259 = ( ( * (  ed3256 ) ) .f_screen_dash_top );
    int32_t  from_dash_x3260 = ( ( * (  ed3256 ) ) .f_screen_dash_left );
    int32_t  x3261 = (  from_dash_integral29 ( 0 ) );
    int32_t  y3262 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1144 ) ( (  cmp9 ( ( ( ( * (  ed3256 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1627  temp1632 = ( (struct funenv1627){ .fun = left_dash_offset1627, .env =  env.envinst1627  } );
    struct anon_1628  offstuff3263 = ( temp1632.fun ( temp1632.env ,  (  ed3256 ) ) );
    int32_t  max_dash_digits3264 = ( (  offstuff3263 ) .f_max_dash_digits );
    int32_t  left_dash_off3265 = ( (  offstuff3263 ) .f_total_dash_offset );
    struct Drop_383  temp1633 =  into_dash_iter382 ( ( (  drop397 ) ( ( (  zip531 ) ( ( ( * (  ed3256 ) ) .f_current_dash_file ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_y3259 ) ) ) ) ) );
    while (true) {
        struct Maybe_391  __cond1634 =  next390 (&temp1633);
        if (  __cond1634 .tag == 0 ) {
            break;
        }
        struct Tuple2_392  dref3266 =  __cond1634 .stuff .Maybe_391_Just_s .field0;
        int32_t  row_dash_num3269 = (  op_dash_add87 ( ( dref3266 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1635 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3242 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1636 =  next404 (&temp1635);
            if (  __cond1636 .tag == 0 ) {
                break;
            }
            int32_t  xx3271 =  __cond1636 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1429 ) ( (  screen3254 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx3271 ) ,  (  y3262 ) ) );
        }
        ( (  draw_dash_str_dash_right1442 ) ( (  screen3254 ) ,  (  row_dash_num3269 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3254 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits3264 ) ) ) , ( env.pad3242 ) ) ) ,  (  y3262 ) ) );
        struct RangeIter_403  temp1637 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3242 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1638 =  next404 (&temp1637);
            if (  __cond1638 .tag == 0 ) {
                break;
            }
            int32_t  xx3273 =  __cond1638 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1429 ) ( (  screen3254 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx3273 ) , ( env.pad3242 ) ) ) , (  max_dash_digits3264 ) ) ) ,  (  y3262 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed3256 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num3269 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_403  temp1639 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits3264 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_369  __cond1640 =  next404 (&temp1639);
                if (  __cond1640 .tag == 0 ) {
                    break;
                }
                int32_t  xxx3275 =  __cond1640 .stuff .Maybe_369_Just_s .field0;
                struct Cell_58 *  cp3276 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1423 ) ( (  screen3254 ) ,  (  op_dash_add87 ( (  xxx3275 ) , ( env.pad3242 ) ) ) ,  (  y3262 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp3276 ) .f_fg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp3276 ) .f_bg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_379  temp1641 =  into_dash_iter378 ( ( (  drop395 ) ( ( (  zip530 ) ( ( dref3266 .field0 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_x3260 ) ) ) ) ) );
        while (true) {
            struct Maybe_386  __cond1642 =  next385 (&temp1641);
            if (  __cond1642 .tag == 0 ) {
                break;
            }
            struct Tuple2_387  dref3277 =  __cond1642 .stuff .Maybe_386_Just_s .field0;
            bool  in_dash_selection3280 = ( (  is_dash_in_dash_selection1587 ) ( (  ed3256 ) ,  ( (struct Cursor_154) { .f_x = ( dref3277 .field1 ) , .f_y = ( dref3266 .field1 ) } ) ) );
            if ( (  in_dash_selection3280 ) ) {
                ( (  set_dash_screen_dash_colors1422 ) ( (  screen3254 ) ,  ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref3277 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1429 ) ( (  screen3254 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3265 ) , (  x3261 ) ) ) ,  (  y3262 ) ) );
                x3261 = (  op_dash_add87 ( (  x3261 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1429 ) ( (  screen3254 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3265 ) , (  x3261 ) ) ) ,  (  y3262 ) ) );
            } else {
                ( (  put_dash_char1429 ) ( (  screen3254 ) ,  ( dref3277 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off3265 ) , (  x3261 ) ) ) ,  (  y3262 ) ) );
            }
            if ( (  in_dash_selection3280 ) ) {
                ( (  set_dash_screen_dash_colors1422 ) ( (  screen3254 ) ,  ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x3261 = (  op_dash_add87 ( (  x3261 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x3261 ) , (  w3257 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x3261 ) , (  w3257 ) ) == 0 ) && ( (  is_dash_in_dash_selection1587 ) ( (  ed3256 ) ,  ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( ( dref3266 .field0 ) .f_count ) ) ) , .f_y = ( dref3266 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell3281 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1423 ) ( (  screen3254 ) ,  (  op_dash_add87 ( (  left_dash_off3265 ) , (  x3261 ) ) ) ,  (  y3262 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell3281 ) .f_fg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell3281 ) .f_bg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y3262 = (  op_dash_add87 ( (  y3262 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x3261 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y3262 ) , (  h3258 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_157  dref3282 = ( ( * (  ed3256 ) ) .f_selected );
    if ( dref3282.tag == Maybe_157_None_t ) {
    }
    else if ( dref3282.tag == Maybe_157_Just_t ) {
        int32_t  vx3284 = ( (  from_dash_visual1464 ) ( ( (  x_dash_to_dash_visual_dash_x1476 ) ( (  ed3256 ) ,  ( ( dref3282 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ,  ( ( dref3282 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len3285 = ( (  maybe946 ) ( ( (  try_dash_get1239 ) ( ( (  get_dash_row1467 ) ( (  ed3256 ) ,  ( ( dref3282 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( dref3282 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1459 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1643 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3285 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1644 =  next404 (&temp1643);
            if (  __cond1644 .tag == 0 ) {
                break;
            }
            int32_t  x3287 =  __cond1644 .stuff .Maybe_369_Just_s .field0;
            struct Maybe_1155  dref3288 = ( (  get_dash_cell_dash_ptr1423 ) ( (  screen3254 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3265 ) , ( ( * (  ed3256 ) ) .f_screen_dash_left ) ) ) , (  vx3284 ) ) ) , (  x3287 ) ) ) ,  (  op_dash_sub88 ( ( ( dref3282 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  from_dash_y3259 ) ) ) ) );
            if ( dref3288.tag == Maybe_1155_None_t ) {
            }
            else if ( dref3288.tag == Maybe_1155_Just_t ) {
                (* dref3288 .stuff .Maybe_1155_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref3288 .stuff .Maybe_1155_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_154  cur3290 = ( ( * (  ed3256 ) ) .f_cursor );
    int32_t  vx3291 = ( (  from_dash_visual1464 ) ( ( (  x_dash_to_dash_visual_dash_x1476 ) ( (  ed3256 ) ,  ( (  cur3290 ) .f_x ) ,  ( (  cur3290 ) .f_y ) ) ) ) );
    int32_t  len3292 = ( (  maybe946 ) ( ( (  try_dash_get1239 ) ( ( (  cursor_dash_row1468 ) ( (  ed3256 ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur3290 ) .f_x ) ) ) ) ) ,  (  char_dash_len1459 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_403  temp1645 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3292 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1646 =  next404 (&temp1645);
        if (  __cond1646 .tag == 0 ) {
            break;
        }
        int32_t  x3294 =  __cond1646 .stuff .Maybe_369_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell3295 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1423 ) ( (  screen3254 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3265 ) , ( ( * (  ed3256 ) ) .f_screen_dash_left ) ) ) , (  vx3291 ) ) ) , (  x3294 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3256 ) ) .f_cursor ) .f_y ) , (  from_dash_y3259 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell3295 ) .f_fg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell3295 ) .f_bg = ( ( * ( ( * (  ed3256 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1647 (    struct Maybe_887 *  dref3297 ,    struct Screen_716 *  screen3300 ) {
    struct Maybe_887  dref3301 = ( (* dref3297 ) );
    if ( dref3301.tag == Maybe_887_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3301.tag == Maybe_887_Just_t ) {
        struct Duration_1360  diff3303 = ( (  diff1361 ) ( ( (  now1357 ) ( ) ) ,  ( dref3301 .stuff .Maybe_887_Just_s .field0 ) ) );
        struct Duration_1360  limit3304 = ( (  duration_dash_from_dash_ns1362 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1359 ( (  diff3303 ) , (  limit3304 ) ) == 2 ) ) {
            (* dref3297 ) = ( (struct Maybe_887) { .tag = Maybe_887_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3305 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3306 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3307 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1363 ) ( (  diff3303 ) ) ) , (  x_dash_fill3305 ) ) ) , ( (  duration_dash_to_dash_ns1363 ) ( (  limit3304 ) ) ) ) ) ) );
        int32_t  y_dash_progress3308 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1363 ) ( (  diff3303 ) ) ) , (  y_dash_fill3306 ) ) ) , ( (  duration_dash_to_dash_ns1363 ) ( (  limit3304 ) ) ) ) ) ) );
        uint32_t  center_dash_x3309 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3310 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1421 ) ( (  screen3300 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3311 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  x_dash_fill3305 ) ) ) , (  x_dash_progress3307 ) ) );
        int32_t  y_dash_off3312 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  y_dash_fill3306 ) ) ) , (  y_dash_progress3308 ) ) );
        int32_t  h3313 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3314 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3300 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1648 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3313 ) ) ) );
        while (true) {
            struct Maybe_369  __cond1649 =  next404 (&temp1648);
            if (  __cond1649 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3316 =  __cond1649 .stuff .Maybe_369_Just_s .field0;
            struct RangeIter_403  temp1650 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3314 ) ) ) );
            while (true) {
                struct Maybe_369  __cond1651 =  next404 (&temp1650);
                if (  __cond1651 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3318 =  __cond1651 .stuff .Maybe_369_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3318 ) , (  x_dash_off3311 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3318 ) , (  op_dash_sub88 ( (  w3314 ) , (  x_dash_off3311 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3316 ) , (  y_dash_off3312 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3316 ) , (  op_dash_sub88 ( (  h3313 ) , (  y_dash_off3312 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1429 ) ( (  screen3300 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3318 ) ,  (  screen_dash_y3316 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1620 {
    enum Unit_13  (*fun) (  struct env1620  ,    struct List_323  ,    const char*  );
    struct env1620 env;
};

struct funenv1353 {
    const char*  (*fun) (  struct env1353  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1353 env;
};

struct funenv1355 {
    const char*  (*fun) (  struct env1355  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1355 env;
};

struct funenv1615 {
    struct List_323  (*fun) (  struct env1615  ,    const char*  ,    enum CAllocator_4  );
    struct env1615 env;
};

struct env1652 {
    ;
    ;
    ;
    ;
    struct Theme_893 *  light_dash_theme2696;
    ;
    ;
    struct Theme_893 *  dark_dash_theme2695;
    ;
    ;
    ;
    struct env1620 envinst1620;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1353 envinst1353;
    struct env1355 envinst1355;
    struct env1615 envinst1615;
    ;
    ;
    ;
    ;
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

static  bool   lam1653 (    char  c3332 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c3332 ) ) ) );
}

static  bool   lam1657 (    char  c3340 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c3340 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1652 (   struct env1652 env ,    struct Editor_890 *  ed3321 ,    struct DynStr_136  s3323 ,    struct Dims_1485  dim3325 ,    enum CAllocator_4  al3327 ) {
    struct DropWhile_565  s3328 = ( (  drop_dash_while590 ) ( (  s3323 ) ,  (  is_dash_whitespace1223 ) ) );
    struct TakeWhile_569  cmd3329 = ( (  take_dash_while583 ) ( (  s3328 ) ,  (  is_dash_not_dash_whitespace1224 ) ) );
    struct DropWhile_563  rest3330 = ( (  drop_dash_while593 ) ( ( (  drop_dash_while592 ) ( (  s3328 ) ,  (  is_dash_not_dash_whitespace1224 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
    if ( ( (  eq1123 ) ( (  cmd3329 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_562  filename3333 = ( (  take_dash_while585 ) ( (  rest3330 ) ,  (  lam1653 ) ) );
        const char*  temp1654;
        const char*  alfname3334 = (  temp1654 );
        if ( ( (  null875 ) ( (  filename3333 ) ) ) ) {
            struct Maybe_308  dref3335 = ( ( * (  ed3321 ) ) .f_filename );
            if ( dref3335.tag == Maybe_308_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3335.tag == Maybe_308_Just_t ) {
                alfname3334 = ( dref3335 .stuff .Maybe_308_Just_s .field0 );
            }
        } else {
            struct Maybe_308  dref3337 = ( ( * (  ed3321 ) ) .f_filename );
            if ( dref3337.tag == Maybe_308_None_t ) {
            }
            else if ( dref3337.tag == Maybe_308_Just_t ) {
                ( (  free1213 ) ( (  al3327 ) ,  ( (struct Slice_1214) { .f_ptr = ( (  cast216 ) ( ( dref3337 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1353  temp1655 = ( (struct funenv1353){ .fun = mk_dash_const_dash_str1353, .env =  env.envinst1353  } );
            alfname3334 = ( temp1655.fun ( temp1655.env ,  (  filename3333 ) ,  (  al3327 ) ) );
        }
        struct funenv1620  temp1656 = ( (struct funenv1620){ .fun = save_dash_file1620, .env =  env.envinst1620  } );
        ( temp1656.fun ( temp1656.env ,  ( ( * (  ed3321 ) ) .f_current_dash_file ) ,  (  alfname3334 ) ) );
        (*  ed3321 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3334 ) ) );
    } else {
        if ( ( (  eq1123 ) ( (  cmd3329 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3321 ) .f_running = ( false );
        } else {
            if ( ( (  eq1123 ) ( (  cmd3329 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_567  filename3341 = ( (  take_dash_while587 ) ( (  rest3330 ) ,  (  lam1657 ) ) );
                struct funenv1355  temp1658 = ( (struct funenv1355){ .fun = mk_dash_const_dash_str1355, .env =  env.envinst1355  } );
                const char*  alfname3342 = ( temp1658.fun ( temp1658.env ,  (  filename3341 ) ,  (  al3327 ) ) );
                struct List_323  og3343 = ( ( * (  ed3321 ) ) .f_current_dash_file );
                struct funenv1615  temp1659 = ( (struct funenv1615){ .fun = load_dash_file1615, .env =  env.envinst1615  } );
                (*  ed3321 ) .f_current_dash_file = ( temp1659.fun ( temp1659.env ,  (  alfname3342 ) ,  (  al3327 ) ) );
                struct Maybe_308  dref3344 = ( ( * (  ed3321 ) ) .f_filename );
                if ( dref3344.tag == Maybe_308_None_t ) {
                }
                else if ( dref3344.tag == Maybe_308_Just_t ) {
                    ( (  free1213 ) ( (  al3327 ) ,  ( (struct Slice_1214) { .f_ptr = ( (  cast216 ) ( ( dref3344 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3321 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3342 ) ) );
                (*  ed3321 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3321 ) .f_goal_dash_x = ( ( Visual_891_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3321 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1626 ) ( (  og3343 ) ) );
            } else {
                if ( ( (  eq1126 ) ( (  cmd3329 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_580  theme_dash_name3346 = ( (  take_dash_while588 ) ( (  rest3330 ) ,  (  is_dash_not_dash_whitespace1224 ) ) );
                    if ( ( (  eq1129 ) ( (  theme_dash_name3346 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3321 ) .f_theme = ( env.dark_dash_theme2695 );
                    } else {
                        if ( ( (  eq1129 ) ( (  theme_dash_name3346 ) ,  ( "light" ) ) ) ) {
                            (*  ed3321 ) .f_theme = ( env.light_dash_theme2696 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_801  dref3347 = ( (  parse_dash_int1233 ) ( (  cmd3329 ) ) );
                    if ( dref3347.tag == Maybe_801_Just_t ) {
                        int32_t  newline3349 = ( (  clamp959 ) ( ( (  i64_dash_i32312 ) ( (  op_dash_sub84 ( ( dref3347 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed3321 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1487 ) ( (  ed3321 ) ,  (  newline3349 ) ,  (  dim3325 ) ) );
                    }
                    else if ( dref3347.tag == Maybe_801_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1351 {
    const char*  (*fun) (  struct env1351  ,    const char*  ,    enum CAllocator_4  );
    struct env1351 env;
};

struct funenv1380 {
    struct Tui_717  (*fun) (  struct env1380  );
    struct env1380 env;
};

struct funenv1629 {
    struct Dims_1485  (*fun) (  struct env1629  ,    struct Editor_890 *  ,    struct Tui_717 *  );
    struct env1629 env;
};

struct funenv1556 {
    enum Unit_13  (*fun) (  struct env1556  ,    struct Editor_890 *  ,    struct Dims_1485  );
    struct env1556 env;
};

struct funenv1562 {
    enum Unit_13  (*fun) (  struct env1562  ,    struct Editor_890 *  ,    struct Dims_1485  );
    struct env1562 env;
};

struct funenv1576 {
    enum Unit_13  (*fun) (  struct env1576  ,    struct Editor_890 *  ,    struct Dims_1485  );
    struct env1576 env;
};

struct funenv1509 {
    enum Unit_13  (*fun) (  struct env1509  ,    struct Editor_890 *  );
    struct env1509 env;
};

struct funenv1568 {
    enum Unit_13  (*fun) (  struct env1568  ,    struct Editor_890 *  ,    enum PastePos_1569  ,    struct Dims_1485  );
    struct env1568 env;
};

struct funenv1598 {
    enum Unit_13  (*fun) (  struct env1598  ,    struct Editor_890 *  ,    struct Dims_1485  );
    struct env1598 env;
};

struct funenv1607 {
    enum Unit_13  (*fun) (  struct env1607  ,    struct Editor_890 *  ,    struct Dims_1485  );
    struct env1607 env;
};

struct funenv1583 {
    enum Unit_13  (*fun) (  struct env1583  ,    struct Editor_890 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1583 env;
};

struct funenv1588 {
    struct Maybe_157  (*fun) (  struct env1588  ,    struct Editor_890 *  ,    struct Slice_5  );
    struct env1588 env;
};

struct funenv1595 {
    struct Maybe_157  (*fun) (  struct env1595  ,    struct Editor_890 *  ,    struct Slice_5  );
    struct env1595 env;
};

static  int32_t   lam1709 (    struct Cursor_154  s3383 ) {
    return ( (  s3383 ) .f_x );
}

static  int32_t   lam1712 (    struct Cursor_154  s3387 ) {
    return ( (  s3387 ) .f_x );
}

static  bool   lam932 (   struct env932 env ,    char  c3392 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1460 ) ( (  c3392 ) ) ) ) ) , ( env.cur_dash_char_dash_type3390 ) ) );
}

static  bool   lam1714 (    char  c3394 ) {
    return (  eq55 ( ( (  char_dash_type1460 ) ( (  c3394 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1716 (    char  c3398 ) {
    return (  eq55 ( ( (  char_dash_type1460 ) ( (  c3398 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam937 (   struct env937 env ,    char  c3401 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1460 ) ( (  c3401 ) ) ) ) ) , ( env.cur_dash_char_dash_type3399 ) ) );
}

static  bool   lam1718 (    char  c3405 ) {
    return (  eq55 ( ( (  char_dash_type1460 ) ( (  c3405 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam941 (   struct env941 env ,    char  c3408 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1460 ) ( (  c3408 ) ) ) ) ) , ( env.cur_dash_char_dash_type3406 ) ) );
}

static  bool   lam944 (   struct env944 env ,    char  c3410 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1460 ) ( (  c3410 ) ) ) ) ) , ( env.cur_dash_char_dash_type3406 ) ) );
}

struct funenv1329 {
    enum Unit_13  (*fun) (  struct env1329  ,    struct StrBuilder_626 *  );
    struct env1329 env;
};

struct funenv1652 {
    enum Unit_13  (*fun) (  struct env1652  ,    struct Editor_890 *  ,    struct DynStr_136  ,    struct Dims_1485  ,    enum CAllocator_4  );
    struct env1652 env;
};

struct funenv1418 {
    bool  (*fun) (  struct env1418  ,    struct Screen_716 *  );
    struct env1418 env;
};

struct funenv1631 {
    enum Unit_13  (*fun) (  struct env1631  ,    struct Screen_716 *  ,    struct Editor_890 *  );
    struct env1631 env;
};

static  struct Maybe_49   lam889 (   struct env889 env ,    struct List_3  l3452 ) {
    return ( (  try_dash_get1239 ) ( ( & (  l3452 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * ( env.ed3355 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_387   lam1750 (    char  c3454 ) {
    return ( ( Tuple2_387_Tuple2 ) ( (  c3454 ) ,  ( (  char_dash_i32953 ) ( (  c3454 ) ) ) ) );
}

static  size_t   lam1752 (    struct DynStr_136  s3460 ) {
    return ( ( (  s3460 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1839 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1840 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1841 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env621 envinst621 = {
        .growth_dash_factor1840 =  growth_dash_factor1840 ,
        .starting_dash_size1839 =  starting_dash_size1839 ,
    };
    struct env347 envinst347 = {
        .growth_dash_factor1840 =  growth_dash_factor1840 ,
        .starting_dash_size1839 =  starting_dash_size1839 ,
    };
    struct env1250 envinst1250 = {
        .growth_dash_factor1840 =  growth_dash_factor1840 ,
        .starting_dash_size1839 =  starting_dash_size1839 ,
    };
    struct env1251 envinst1251 = {
        .growth_dash_factor1840 =  growth_dash_factor1840 ,
        .starting_dash_size1839 =  starting_dash_size1839 ,
    };
    struct env620 envinst620 = {
        .envinst621 = envinst621 ,
    };
    struct env346 envinst346 = {
        .envinst347 = envinst347 ,
    };
    struct env1254 envinst1254 = {
        .envinst1250 = envinst1250 ,
    };
    struct env1256 envinst1256 = {
        .envinst1251 = envinst1251 ,
    };
    struct env1258 envinst1258 = {
        .envinst346 = envinst346 ,
        .envinst347 = envinst347 ,
    };
    struct env1261 envinst1261 = {
        .envinst620 = envinst620 ,
        .envinst621 = envinst621 ,
    };
    struct env1264 envinst1264 = {
        .shrink_dash_factor1841 =  shrink_dash_factor1841 ,
    };
    struct env1265 envinst1265 = {
        .shrink_dash_factor1841 =  shrink_dash_factor1841 ,
    };
    struct env1267 envinst1267 = {
        .envinst1264 = envinst1264 ,
    };
    struct env345 envinst345 = {
        .envinst346 = envinst346 ,
    };
    struct env1270 envinst1270 = {
        .envinst620 = envinst620 ,
    };
    struct env1272 envinst1272 = {
        .envinst346 = envinst346 ,
    };
    struct env1274 envinst1274 = {
        .envinst346 = envinst346 ,
    };
    struct env1276 envinst1276 = {
        .envinst346 = envinst346 ,
    };
    struct env344 envinst344 = {
        .envinst345 = envinst345 ,
    };
    struct env1282 envinst1282 = {
        .envinst1270 = envinst1270 ,
    };
    struct env1318 envinst1318 = {
        .envinst346 = envinst346 ,
    };
    struct env1320 envinst1320 = {
        .envinst346 = envinst346 ,
    };
    struct env1322 envinst1322 = {
        .envinst346 = envinst346 ,
    };
    struct env1324 envinst1324 = {
        .envinst346 = envinst346 ,
    };
    struct env1326 envinst1326 = {
        .envinst1272 = envinst1272 ,
    };
    struct env693 envinst693 = {
        .envinst346 = envinst346 ,
    };
    struct env1329 envinst1329 = {
        .envinst1267 = envinst1267 ,
    };
    struct env1335 envinst1335 = {
        .envinst1318 = envinst1318 ,
        .envinst693 = envinst693 ,
    };
    struct env1339 envinst1339 = {
        .envinst1320 = envinst1320 ,
        .envinst693 = envinst693 ,
    };
    struct env1343 envinst1343 = {
        .envinst1322 = envinst1322 ,
        .envinst693 = envinst693 ,
    };
    struct env1347 envinst1347 = {
        .envinst1324 = envinst1324 ,
        .envinst693 = envinst693 ,
    };
    struct env1351 envinst1351 = {
        .envinst1335 = envinst1335 ,
    };
    struct env1353 envinst1353 = {
        .envinst1343 = envinst1343 ,
    };
    struct env1355 envinst1355 = {
        .envinst1347 = envinst1347 ,
    };
    bool  temp1379 = ( false );
    bool *  should_dash_resize2469 = ( &temp1379 );
    struct env1380 envinst1380 = {
        .should_dash_resize2469 =  should_dash_resize2469 ,
    };
    struct env1403 envinst1403 = {
        .should_dash_resize2469 =  should_dash_resize2469 ,
    };
    struct env1418 envinst1418 = {
        .envinst1403 = envinst1403 ,
    };
    struct Theme_893  temp1461 = ( (struct Theme_893) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_893 *  dark_dash_theme2695 = ( &temp1461 );
    struct Theme_893  temp1462 = ( (struct Theme_893) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_893 *  light_dash_theme2696 = ( &temp1462 );
    struct env1471 envinst1471 = {
        .envinst1265 = envinst1265 ,
    };
    struct env1482 envinst1482 = {
        .envinst1335 = envinst1335 ,
    };
    struct env1495 envinst1495 = {
        .envinst1326 = envinst1326 ,
        .envinst693 = envinst693 ,
        .envinst1320 = envinst1320 ,
    };
    struct env1509 envinst1509 = {
        .envinst1495 = envinst1495 ,
    };
    struct env1511 envinst1511 = {
        .envinst1264 = envinst1264 ,
        .envinst1471 = envinst1471 ,
        .envinst1272 = envinst1272 ,
        .envinst1274 = envinst1274 ,
        .envinst620 = envinst620 ,
        .envinst1261 = envinst1261 ,
        .envinst1258 = envinst1258 ,
    };
    struct env1528 envinst1528 = {
        .envinst1256 = envinst1256 ,
    };
    struct env1530 envinst1530 = {
        .envinst1254 = envinst1254 ,
        .envinst1256 = envinst1256 ,
    };
    struct env1533 envinst1533 = {
        .envinst1326 = envinst1326 ,
        .envinst693 = envinst693 ,
        .envinst1530 = envinst1530 ,
        .envinst1320 = envinst1320 ,
    };
    struct env1549 envinst1549 = {
        .envinst1533 = envinst1533 ,
    };
    struct env1552 envinst1552 = {
        .envinst1511 = envinst1511 ,
        .envinst1530 = envinst1530 ,
        .envinst1533 = envinst1533 ,
    };
    struct env1556 envinst1556 = {
        .envinst1511 = envinst1511 ,
    };
    struct env1562 envinst1562 = {
        .envinst1511 = envinst1511 ,
    };
    struct env1568 envinst1568 = {
        .envinst1549 = envinst1549 ,
        .envinst1552 = envinst1552 ,
    };
    struct env1576 envinst1576 = {
        .envinst1549 = envinst1549 ,
        .envinst1495 = envinst1495 ,
        .envinst693 = envinst693 ,
        .envinst1552 = envinst1552 ,
    };
    struct env1583 envinst1583 = {
        .envinst1276 = envinst1276 ,
        .envinst1261 = envinst1261 ,
    };
    struct env1588 envinst1588 = {
        .envinst1482 = envinst1482 ,
    };
    struct env1595 envinst1595 = {
        .envinst1482 = envinst1482 ,
    };
    struct env1598 envinst1598 = {
        .envinst1528 = envinst1528 ,
        .envinst1339 = envinst1339 ,
        .envinst1552 = envinst1552 ,
    };
    struct env1607 envinst1607 = {
        .envinst1528 = envinst1528 ,
        .envinst1339 = envinst1339 ,
        .envinst1552 = envinst1552 ,
    };
    enum CAllocator_4  al3191 = ( (  idc1203 ) ( ) );
    struct env1615 envinst1615 = {
        .envinst344 = envinst344 ,
        .envinst1282 = envinst1282 ,
        .envinst620 = envinst620 ,
    };
    struct env1620 envinst1620 = {
        .al3191 =  al3191 ,
        .envinst693 = envinst693 ,
    };
    int32_t  pad3242 = (  from_dash_integral29 ( 2 ) );
    struct env1627 envinst1627 = {
        .pad3242 =  pad3242 ,
    };
    struct env1629 envinst1629 = {
        .envinst1627 = envinst1627 ,
    };
    struct env1631 envinst1631 = {
        .envinst1627 = envinst1627 ,
        .pad3242 =  pad3242 ,
    };
    struct env1652 envinst1652 = {
        .light_dash_theme2696 =  light_dash_theme2696 ,
        .dark_dash_theme2695 =  dark_dash_theme2695 ,
        .envinst1620 = envinst1620 ,
        .envinst1353 = envinst1353 ,
        .envinst1355 = envinst1355 ,
        .envinst1615 = envinst1615 ,
    };
    struct Slice_1166  args3352 = ( (  get1458 ) ( ) );
    struct List_323  temp1660;
    struct List_323  file3353 = (  temp1660 );
    struct Maybe_308  mfilename3354 = ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    if ( (  eq45 ( ( (  args3352 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3353 = ( (  mk1243 ) ( (  al3191 ) ) );
        struct funenv620  temp1661 = ( (struct funenv620){ .fun = add620, .env =  envinst620  } );
        ( temp1661.fun ( temp1661.env ,  ( & (  file3353 ) ) ,  ( (  mk1244 ) ( (  al3191 ) ) ) ) );
    } else {
        struct funenv1615  temp1662 = ( (struct funenv1615){ .fun = load_dash_file1615, .env =  envinst1615  } );
        file3353 = ( temp1662.fun ( temp1662.env ,  (  elem_dash_get1186 ( (  args3352 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3191 ) ) );
        struct funenv1351  temp1663 = ( (struct funenv1351){ .fun = mk_dash_const_dash_str1351, .env =  envinst1351  } );
        mfilename3354 = ( ( Maybe_308_Just ) ( ( temp1663.fun ( temp1663.env ,  (  elem_dash_get1186 ( (  args3352 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3191 ) ) ) ) );
    }
    struct Editor_890  temp1664 = ( (struct Editor_890) { .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_891_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3353 ) , .f_filename = (  mfilename3354 ) , .f_mode = ( (struct Mode_892) { .tag = Mode_892_Normal_t } ) , .f_anim = ( ( Maybe_887_Just ) ( ( (  now1357 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_theme = (  dark_dash_theme2695 ) , .f_search_dash_term = ( (struct Maybe_885) { .tag = Maybe_885_None_t } ) , .f_al = (  al3191 ) , .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_clipboard = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_actions = ( (struct Actions_894) { .f_list = ( (  mk1245 ) ( (  al3191 ) ) ) , .f_cur = (  from_dash_integral11 ( 0 ) ) , .f_changeset = ( (struct Maybe_883) { .tag = Maybe_883_None_t } ) } ) , .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } ) } );
    struct Editor_890 *  ed3355 = ( &temp1664 );
    struct funenv1380  temp1666 = ( (struct funenv1380){ .fun = mk1380, .env =  envinst1380  } );
    struct Tui_717  temp1665 = ( temp1666.fun ( temp1666.env ) );
    struct Tui_717 *  tui3356 = ( &temp1665 );
    enum CAllocator_4  al3357 = ( (  idc1203 ) ( ) );
    struct Screen_716  temp1667 = ( (  mk_dash_screen1404 ) ( (  tui3356 ) ,  (  al3357 ) ) );
    struct Screen_716 *  screen3358 = ( &temp1667 );
    uint32_t  counter3359 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3360 = ( true );
    while ( ( ( * (  ed3355 ) ) .f_running ) ) {
        int32_t  events3361 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_599  temp1668 =  into_dash_iter598 ( ( (  from_dash_function605 ) ( (  read_dash_key1397 ) ) ) );
        while (true) {
            struct Maybe_600  __cond1669 =  next604 (&temp1668);
            if (  __cond1669 .tag == 0 ) {
                break;
            }
            struct InputEvent_601  ev3363 =  __cond1669 .stuff .Maybe_600_Just_s .field0;
            if ( (  eq41 ( (  events3361 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1481 ) ( (  ed3355 ) ) );
            }
            events3361 = (  op_dash_add87 ( (  events3361 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1403  temp1670 = ( (struct funenv1403){ .fun = update_dash_dimensions1403, .env =  envinst1403  } );
            ( temp1670.fun ( temp1670.env ,  (  tui3356 ) ) );
            struct InputEvent_601  dref3364 = (  ev3363 );
            if ( dref3364.tag == InputEvent_601_Key_t ) {
                struct Key_602  dref3366 = ( dref3364 .stuff .InputEvent_601_Key_s .field0 );
                if ( dref3366.tag == Key_602_Char_t ) {
                    struct Mode_892 *  dref3368 = ( & ( ( * (  ed3355 ) ) .f_mode ) );
                    if ( (* dref3368 ).tag == Mode_892_Insert_t ) {
                        struct funenv1258  temp1671 = ( (struct funenv1258){ .fun = insert1258, .env =  envinst1258  } );
                        ( temp1671.fun ( temp1671.env ,  ( (  cursor_dash_row1468 ) ( (  ed3355 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3366 .stuff .Key_602_Char_s .field0 ) ) );
                        struct funenv1629  temp1672 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                        ( (  move_dash_to_dash_col1486 ) ( (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1672.fun ( temp1672.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                    }
                    else if ( (* dref3368 ).tag == Mode_892_Cmd_t ) {
                        struct funenv693  temp1673 = ( (struct funenv693){ .fun = write_dash_char693, .env =  envinst693  } );
                        ( temp1673.fun ( temp1673.env ,  ( & ( (* dref3368 ) .stuff .Mode_892_Cmd_s .field0 ) ) ,  ( dref3366 .stuff .Key_602_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3368 ).tag == Mode_892_SearchBox_t ) {
                        struct funenv693  temp1674 = ( (struct funenv693){ .fun = write_dash_char693, .env =  envinst693  } );
                        ( temp1674.fun ( temp1674.env ,  ( & ( (* dref3368 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ,  ( dref3366 .stuff .Key_602_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1465 ( ( (* dref3368 ) ) , ( (struct Mode_892) { .tag = Mode_892_Normal_t } ) ) ) || (  eq1465 ( ( (* dref3368 ) ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) ) ) {
                            int32_t  code3372 = ( (  u8_dash_i32319 ) ( ( (  cast220 ) ( ( dref3366 .stuff .Key_602_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3355 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                                struct funenv1556  temp1675 = ( (struct funenv1556){ .fun = undo1556, .env =  envinst1556  } );
                                struct funenv1629  temp1676 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1675.fun ( temp1675.env ,  (  ed3355 ) ,  ( temp1676.fun ( temp1676.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "U" ) ) ) ) ) ) {
                                struct funenv1562  temp1677 = ( (struct funenv1562){ .fun = redo1562, .env =  envinst1562  } );
                                struct funenv1629  temp1678 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1677.fun ( temp1677.env ,  (  ed3355 ) ,  ( temp1678.fun ( temp1678.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1629  temp1679 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1679.fun ( temp1679.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1629  temp1680 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1680.fun ( temp1680.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1629  temp1681 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_left1488 ) ( (  ed3355 ) ,  ( temp1681.fun ( temp1681.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1629  temp1682 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_right1489 ) ( (  ed3355 ) ,  ( temp1682.fun ( temp1682.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1465 ( ( (* dref3368 ) ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) ) {
                                    struct funenv1549  temp1683 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                                    ( temp1683.fun ( temp1683.env ,  (  ed3355 ) ) );
                                } else {
                                    (*  ed3355 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Select_t } );
                                    ( (  set_dash_selection1480 ) ( (  ed3355 ) ,  ( ( Maybe_157_Just ) ( ( ( * (  ed3355 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1576  temp1684 = ( (struct funenv1576){ .fun = delete_dash_selected1576, .env =  envinst1576  } );
                                struct funenv1629  temp1685 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1684.fun ( temp1684.env ,  (  ed3355 ) ,  ( temp1685.fun ( temp1685.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                struct funenv1549  temp1686 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                                ( temp1686.fun ( temp1686.env ,  (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1576  temp1687 = ( (struct funenv1576){ .fun = delete_dash_selected1576, .env =  envinst1576  } );
                                struct funenv1629  temp1688 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1687.fun ( temp1687.env ,  (  ed3355 ) ,  ( temp1688.fun ( temp1688.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1509  temp1689 = ( (struct funenv1509){ .fun = copy_dash_selection_dash_to_dash_clipboard1509, .env =  envinst1509  } );
                                ( temp1689.fun ( temp1689.env ,  (  ed3355 ) ) );
                                struct funenv1549  temp1690 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                                ( temp1690.fun ( temp1690.env ,  (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1568  temp1691 = ( (struct funenv1568){ .fun = paste_dash_clipboard_dash_at_dash_cursor1568, .env =  envinst1568  } );
                                struct funenv1629  temp1692 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1691.fun ( temp1691.env ,  (  ed3355 ) ,  ( PastePos_1569_PasteAfter ) ,  ( temp1692.fun ( temp1692.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1568  temp1693 = ( (struct funenv1568){ .fun = paste_dash_clipboard_dash_at_dash_cursor1568, .env =  envinst1568  } );
                                struct funenv1629  temp1694 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1693.fun ( temp1693.env ,  (  ed3355 ) ,  ( PastePos_1569_PasteBefore ) ,  ( temp1694.fun ( temp1694.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1598  temp1695 = ( (struct funenv1598){ .fun = indent_dash_selection1598, .env =  envinst1598  } );
                                struct funenv1629  temp1696 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1695.fun ( temp1695.env ,  (  ed3355 ) ,  ( temp1696.fun ( temp1696.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1607  temp1697 = ( (struct funenv1607){ .fun = dedent_dash_selection1607, .env =  envinst1607  } );
                                struct funenv1629  temp1698 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( temp1697.fun ( temp1697.env ,  (  ed3355 ) ,  ( temp1698.fun ( temp1698.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1629  temp1699 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1490 ) ( (  ed3355 ) ,  ( temp1699.fun ( temp1699.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1629  temp1700 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1491 ) ( (  ed3355 ) ,  ( temp1700.fun ( temp1700.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1583  temp1701 = ( (struct funenv1583){ .fun = insert_dash_empty_dash_row_dash_at1583, .env =  envinst1583  } );
                                ( temp1701.fun ( temp1701.env ,  (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3357 ) ) );
                                struct List_3 *  currow3373 = ( (  get_dash_row1467 ) ( (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1629  temp1702 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to1484 ) ( (  ed3355 ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  currow3373 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1702.fun ( temp1702.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1583  temp1703 = ( (struct funenv1583){ .fun = insert_dash_empty_dash_row_dash_at1583, .env =  envinst1583  } );
                                ( temp1703.fun ( temp1703.env ,  (  ed3355 ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ,  (  al3357 ) ) );
                                struct funenv1629  temp1704 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1491 ) ( (  ed3355 ) ,  ( temp1704.fun ( temp1704.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3355 ) .f_mode = ( ( Mode_892_Cmd ) ( ( (  mk1332 ) ( (  al3357 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3355 ) .f_mode = ( ( Mode_892_SearchBox ) ( ( (  mk1332 ) ( (  al3357 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_885  dref3374 = ( ( * (  ed3355 ) ) .f_search_dash_term );
                                if ( dref3374.tag == Maybe_885_None_t ) {
                                }
                                else if ( dref3374.tag == Maybe_885_Just_t ) {
                                    struct funenv1588  temp1705 = ( (struct funenv1588){ .fun = find_dash_next_dash_occurence1588, .env =  envinst1588  } );
                                    struct Maybe_157  dref3376 = ( temp1705.fun ( temp1705.env ,  (  ed3355 ) ,  ( (  as_dash_char_dash_slice1333 ) ( ( & ( dref3374 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3376.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3376.tag == Maybe_157_Just_t ) {
                                        struct funenv1629  temp1706 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                        ( (  move_dash_to1484 ) ( (  ed3355 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3376 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1331 ) ( ( & ( dref3374 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3376 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1706.fun ( temp1706.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                        (*  ed3355 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3376 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_885  dref3378 = ( ( * (  ed3355 ) ) .f_search_dash_term );
                                if ( dref3378.tag == Maybe_885_None_t ) {
                                }
                                else if ( dref3378.tag == Maybe_885_Just_t ) {
                                    struct funenv1595  temp1707 = ( (struct funenv1595){ .fun = find_dash_prev_dash_occurence1595, .env =  envinst1595  } );
                                    struct Maybe_157  dref3380 = ( temp1707.fun ( temp1707.env ,  (  ed3355 ) ,  ( (  as_dash_char_dash_slice1333 ) ( ( & ( dref3378 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3380.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3380.tag == Maybe_157_Just_t ) {
                                        struct funenv1629  temp1708 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                        ( (  move_dash_to1484 ) ( (  ed3355 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3380 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1331 ) ( ( & ( dref3378 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3380 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1708.fun ( temp1708.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                        (*  ed3355 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3380 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe929 ) ( ( ( * (  ed3355 ) ) .f_selected ) ,  (  lam1709 ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1493 ) ( (  ed3355 ) ) ) ) ) {
                                    struct funenv1629  temp1710 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                    struct Dims_1485  dims3384 = ( temp1710.fun ( temp1710.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                                    struct Cursor_154  sel3385 = ( (  or_dash_else1156 ) ( ( ( * (  ed3355 ) ) .f_selected ) ,  ( ( * (  ed3355 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3384 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1491 ) ( (  ed3355 ) ,  (  dims3384 ) ) );
                                    (*  ed3355 ) .f_selected = ( ( Maybe_157_Just ) ( (  sel3385 ) ) );
                                } else {
                                    struct funenv1629  temp1711 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1491 ) ( (  ed3355 ) ,  ( temp1711.fun ( temp1711.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                    (*  ed3355 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe930 ) ( ( ( * (  ed3355 ) ) .f_selected ) ,  (  lam1712 ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1629  temp1713 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                struct Dims_1485  dims3388 = ( temp1713.fun ( temp1713.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                                struct Cursor_154  first_dash_pos3389 = ( ( * (  ed3355 ) ) .f_cursor );
                                ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3388 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1474 ) ( (  ed3355 ) ,  (  first_dash_pos3389 ) ) ) ,  (  char_dash_type1460 ) ) ) ) ) ) {
                                    first_dash_pos3389 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1493 ) ( (  ed3355 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3388 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3389 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3390 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) );
                                struct env932 envinst932 = {
                                    .cur_dash_char_dash_type3390 =  cur_dash_char_dash_type3390 ,
                                };
                                while ( ( (  maybe931 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  ( (struct funenv932){ .fun = lam932, .env = envinst932 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3388 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe934 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  lam1714 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3388 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1463 ( (  first_dash_pos3389 ) , ( ( * (  ed3355 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3388 ) ) );
                                    ( (  set_dash_selection1480 ) ( (  ed3355 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3389 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1629  temp1715 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                struct Dims_1485  dims3395 = ( temp1715.fun ( temp1715.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                                struct Cursor_154  first_dash_pos3396 = ( ( * (  ed3355 ) ) .f_cursor );
                                ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3395 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1474 ) ( (  ed3355 ) ,  (  first_dash_pos3396 ) ) ) ,  (  char_dash_type1460 ) ) ) ) ) ) {
                                    first_dash_pos3396 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1493 ) ( (  ed3355 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3395 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3396 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                while ( ( (  maybe935 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  lam1716 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3395 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3399 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) );
                                struct env937 envinst937 = {
                                    .cur_dash_char_dash_type3399 =  cur_dash_char_dash_type3399 ,
                                };
                                while ( ( (  maybe936 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  ( (struct funenv937){ .fun = lam937, .env = envinst937 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3395 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1463 ( (  first_dash_pos3396 ) , ( ( * (  ed3355 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3395 ) ) );
                                    ( (  set_dash_selection1480 ) ( (  ed3355 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3396 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3366 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1629  temp1717 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                struct Dims_1485  dims3402 = ( temp1717.fun ( temp1717.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                                struct Cursor_154  first_dash_pos3403 = ( ( * (  ed3355 ) ) .f_cursor );
                                ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3402 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1474 ) ( (  ed3355 ) ,  (  first_dash_pos3403 ) ) ) ,  (  char_dash_type1460 ) ) ) ) ) ) {
                                    first_dash_pos3403 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1493 ) ( (  ed3355 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3402 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3403 = ( ( * (  ed3355 ) ) .f_cursor );
                                }
                                while ( ( (  maybe939 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  lam1718 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3402 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3406 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  (  char_dash_type1460 ) ) );
                                struct env941 envinst941 = {
                                    .cur_dash_char_dash_type3406 =  cur_dash_char_dash_type3406 ,
                                };
                                while ( ( (  maybe940 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  ( (struct funenv941){ .fun = lam941, .env = envinst941 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3402 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1463 ( (  first_dash_pos3403 ) , ( ( * (  ed3355 ) ) .f_cursor ) ) ) ) {
                                    struct env944 envinst944 = {
                                        .cur_dash_char_dash_type3406 =  cur_dash_char_dash_type3406 ,
                                    };
                                    if ( ( (  maybe943 ) ( ( (  char_dash_at_dash_cursor1475 ) ( (  ed3355 ) ) ) ,  ( (struct funenv944){ .fun = lam944, .env = envinst944 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1489 ) ( (  ed3355 ) ,  (  dims3402 ) ) );
                                    }
                                    ( (  set_dash_selection1480 ) ( (  ed3355 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3403 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1141 ) ( ( ( StrConcat_971_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3368 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3366.tag == Key_602_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3366 .stuff .Key_602_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3355 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3355 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1629  temp1719 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                        ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1719.fun ( temp1719.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3366 .stuff .Key_602_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3355 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3355 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1629  temp1720 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                        ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1720.fun ( temp1720.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                    }
                }
                else if ( dref3366.tag == Key_602_Escape_t ) {
                    struct Mode_892  dref3412 = ( ( * (  ed3355 ) ) .f_mode );
                    if ( dref3412.tag == Mode_892_Normal_t ) {
                    }
                    else if ( dref3412.tag == Mode_892_Insert_t ) {
                        struct funenv1549  temp1721 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1721.fun ( temp1721.env ,  (  ed3355 ) ) );
                    }
                    else if ( dref3412.tag == Mode_892_Cmd_t ) {
                        ( (  free1334 ) ( ( & ( dref3412 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1549  temp1722 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1722.fun ( temp1722.env ,  (  ed3355 ) ) );
                    }
                    else if ( dref3412.tag == Mode_892_SearchBox_t ) {
                        ( (  free1334 ) ( ( & ( dref3412 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
                        struct funenv1549  temp1723 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1723.fun ( temp1723.env ,  (  ed3355 ) ) );
                    }
                    else if ( dref3412.tag == Mode_892_Select_t ) {
                        struct funenv1549  temp1724 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1724.fun ( temp1724.env ,  (  ed3355 ) ) );
                    }
                }
                else if ( dref3366.tag == Key_602_Backspace_t ) {
                    struct Mode_892 *  dref3415 = ( & ( ( * (  ed3355 ) ) .f_mode ) );
                    if ( (* dref3415 ).tag == Mode_892_Normal_t ) {
                    }
                    else if ( (* dref3415 ).tag == Mode_892_Select_t ) {
                    }
                    else if ( (* dref3415 ).tag == Mode_892_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1629  temp1725 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                            struct Dims_1485  dims3416 = ( temp1725.fun ( temp1725.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                            if ( (  eq41 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                                struct Cursor_154  before_dash_merge_dash_cursor3417 = ( ( * (  ed3355 ) ) .f_cursor );
                                struct funenv1549  temp1726 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                                ( temp1726.fun ( temp1726.env ,  (  ed3355 ) ) );
                                ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3416 ) ) );
                                struct StrBuilder_626  temp1727 = ( (  mk1332 ) ( ( ( * (  ed3355 ) ) .f_al ) ) );
                                struct StrBuilder_626 *  sb3418 = ( &temp1727 );
                                struct funenv693  temp1728 = ( (struct funenv693){ .fun = write_dash_char693, .env =  envinst693  } );
                                ( temp1728.fun ( temp1728.env ,  (  sb3418 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
                                struct funenv1552  temp1729 = ( (struct funenv1552){ .fun = do_dash_action1552, .env =  envinst1552  } );
                                ( temp1729.fun ( temp1729.env ,  (  ed3355 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3355 ) ) .f_cursor ) ,  ( (  as_dash_str977 ) ( (  sb3418 ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  (  dims3416 ) ) );
                                ( (  enter_dash_insert_dash_mode1551 ) ( (  ed3355 ) ) );
                            } else {
                                ( (  move_dash_left1488 ) ( (  ed3355 ) ,  (  dims3416 ) ) );
                                struct funenv1495  temp1730 = ( (struct funenv1495){ .fun = copy_dash_selection1495, .env =  envinst1495  } );
                                struct Maybe_356  dref3419 = ( temp1730.fun ( temp1730.env ,  (  ed3355 ) ) );
                                if ( dref3419.tag == Maybe_356_None_t ) {
                                }
                                else if ( dref3419.tag == Maybe_356_Just_t ) {
                                    int32_t  del_dash_acc_dash_count3423 = ( {  struct Maybe_885  dref3421 = ( ( * (  ed3355 ) ) .f_delete_dash_acc ) ; dref3421.tag == Maybe_885_Just_t ? ( (  size_dash_i32313 ) ( ( (  count1331 ) ( ( & ( dref3421 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) : (  from_dash_integral29 ( 0 ) ) ; } );
                                    struct Maybe_157  dref3424 = ( ( * (  ed3355 ) ) .f_insert_dash_start );
                                    if ( dref3424.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3424.tag == Maybe_157_Just_t ) {
                                        if ( ( (  cmp80 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) , (  op_dash_sub88 ( ( ( dref3424 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  del_dash_acc_dash_count3423 ) ) ) ) == 0 ) && (  eq41 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , ( ( dref3424 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) ) {
                                            if ( ( ! ( (  is_dash_just884 ) ( ( ( * (  ed3355 ) ) .f_delete_dash_acc ) ) ) ) ) {
                                                (*  ed3355 ) .f_delete_dash_acc = ( ( Maybe_885_Just ) ( ( (  mk1332 ) ( ( ( * (  ed3355 ) ) .f_al ) ) ) ) );
                                            }
                                            struct Maybe_885 *  dref3426 = ( & ( ( * (  ed3355 ) ) .f_delete_dash_acc ) );
                                            if ( (* dref3426 ).tag == Maybe_885_Just_t ) {
                                                struct funenv693  temp1731 = ( (struct funenv693){ .fun = write_dash_char693, .env =  envinst693  } );
                                                ( temp1731.fun ( temp1731.env ,  ( & ( (* dref3426 ) .stuff .Maybe_885_Just_s .field0 ) ) ,  (  elem_dash_get1188 ( ( ( dref3419 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) ) );
                                            }
                                            else if ( true ) {
                                            }
                                        }
                                    }
                                    struct funenv1511  temp1732 = ( (struct funenv1511){ .fun = apply_dash_primitive1511, .env =  envinst1511  } );
                                    ( temp1732.fun ( temp1732.env ,  (  ed3355 ) ,  ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3355 ) ) .f_cursor ) ,  ( dref3419 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  (  dims3416 ) ) );
                                    ( (  free1210 ) ( ( ( * (  ed3355 ) ) .f_al ) ,  ( ( dref3419 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
                                }
                            }
                        }
                    }
                    else if ( (* dref3415 ).tag == Mode_892_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1331 ) ( ( & ( (* dref3415 ) .stuff .Mode_892_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1329  temp1733 = ( (struct funenv1329){ .fun = pop1329, .env =  envinst1329  } );
                            ( temp1733.fun ( temp1733.env ,  ( & ( (* dref3415 ) .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3415 ).tag == Mode_892_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1331 ) ( ( & ( (* dref3415 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1329  temp1734 = ( (struct funenv1329){ .fun = pop1329, .env =  envinst1329  } );
                            ( temp1734.fun ( temp1734.env ,  ( & ( (* dref3415 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3366.tag == Key_602_Enter_t ) {
                    struct Mode_892  dref3430 = ( ( * (  ed3355 ) ) .f_mode );
                    if ( dref3430.tag == Mode_892_Normal_t ) {
                    }
                    else if ( dref3430.tag == Mode_892_Select_t ) {
                    }
                    else if ( dref3430.tag == Mode_892_Insert_t ) {
                        int32_t  cx3431 = ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1735 = ( (  mk1244 ) ( (  al3357 ) ) );
                        struct List_3 *  nurow3432 = ( &temp1735 );
                        struct TakeWhile_560  rowws3433 = ( (  indent_dash_on_dash_row1469 ) ( (  ed3355 ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3434 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( (  rowws3433 ) ) ) ) );
                        struct funenv1276  temp1736 = ( (struct funenv1276){ .fun = add_dash_all1276, .env =  envinst1276  } );
                        ( temp1736.fun ( temp1736.env ,  (  nurow3432 ) ,  (  rowws3433 ) ) );
                        struct List_3 *  cur_dash_row3435 = ( (  cursor_dash_row1468 ) ( (  ed3355 ) ) );
                        struct funenv1272  temp1737 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  envinst1272  } );
                        ( temp1737.fun ( temp1737.env ,  (  nurow3432 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  cur_dash_row3435 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  cx3431 ) ) ) ,  ( ( * (  cur_dash_row3435 ) ) .f_count ) ) ) ) );
                        ( (  trim1278 ) ( (  cur_dash_row3435 ) ,  ( (  i32_dash_size311 ) ( (  cx3431 ) ) ) ) );
                        struct funenv1261  temp1738 = ( (struct funenv1261){ .fun = insert1261, .env =  envinst1261  } );
                        ( temp1738.fun ( temp1738.env ,  ( & ( ( * (  ed3355 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3432 ) ) ) );
                        struct funenv1629  temp1739 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                        ( (  move_dash_to1484 ) ( (  ed3355 ) ,  (  offchars3434 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1739.fun ( temp1739.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                    }
                    else if ( dref3430.tag == Mode_892_Cmd_t ) {
                        struct DynStr_136  s3437 = ( (  as_dash_str977 ) ( ( & ( dref3430 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1652  temp1740 = ( (struct funenv1652){ .fun = run_dash_cmd1652, .env =  envinst1652  } );
                        struct funenv1629  temp1741 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                        ( temp1740.fun ( temp1740.env ,  (  ed3355 ) ,  (  s3437 ) ,  ( temp1741.fun ( temp1741.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ,  (  al3357 ) ) );
                        ( (  free1334 ) ( ( & ( dref3430 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1549  temp1742 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1742.fun ( temp1742.env ,  (  ed3355 ) ) );
                    }
                    else if ( dref3430.tag == Mode_892_SearchBox_t ) {
                        struct Maybe_885  dref3439 = ( ( * (  ed3355 ) ) .f_search_dash_term );
                        if ( dref3439.tag == Maybe_885_Just_t ) {
                            ( (  free1334 ) ( ( & ( dref3439 .stuff .Maybe_885_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3439.tag == Maybe_885_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1331 ) ( ( & ( dref3430 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3355 ) .f_search_dash_term = ( ( Maybe_885_Just ) ( ( dref3430 .stuff .Mode_892_SearchBox_s .field0 ) ) );
                            struct funenv1588  temp1743 = ( (struct funenv1588){ .fun = find_dash_next_dash_occurence1588, .env =  envinst1588  } );
                            struct Maybe_157  dref3441 = ( temp1743.fun ( temp1743.env ,  (  ed3355 ) ,  ( (  as_dash_char_dash_slice1333 ) ( ( & ( dref3430 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3441.tag == Maybe_157_None_t ) {
                            }
                            else if ( dref3441.tag == Maybe_157_Just_t ) {
                                struct funenv1629  temp1744 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                                ( (  move_dash_to1484 ) ( (  ed3355 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3441 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1331 ) ( ( & ( dref3430 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3441 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1744.fun ( temp1744.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                                (*  ed3355 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3441 .stuff .Maybe_157_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3355 ) .f_search_dash_term = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
                        }
                        struct funenv1549  temp1745 = ( (struct funenv1549){ .fun = set_dash_mode_dash_normal1549, .env =  envinst1549  } );
                        ( temp1745.fun ( temp1745.env ,  (  ed3355 ) ) );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3364.tag == InputEvent_601_Mouse_t ) {
                enum MouseButton_149  dref3444 = ( ( dref3364 .stuff .InputEvent_601_Mouse_s .field0 ) .f_button );
                switch (  dref3444 ) {
                    case MouseButton_149_MouseLeft : {
                        if ( ( ( dref3364 .stuff .InputEvent_601_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3445 = ( (  size_dash_i32313 ) ( ( ( ( * (  ed3355 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3446 = ( (  clamp959 ) ( (  op_dash_add87 ( ( ( * (  ed3355 ) ) .f_screen_dash_top ) , ( ( dref3364 .stuff .InputEvent_601_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3445 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1627  temp1746 = ( (struct funenv1627){ .fun = left_dash_offset1627, .env =  envinst1627  } );
                            struct Visual_891  vx3447 = ( ( Visual_891_Visual ) ( (  op_dash_sub88 ( ( ( dref3364 .stuff .InputEvent_601_Mouse_s .field0 ) .f_x ) , ( ( temp1746.fun ( temp1746.env ,  (  ed3355 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3448 = ( (  visual_dash_x_dash_to_dash_x1477 ) ( (  ed3355 ) ,  (  vx3447 ) ,  (  cy3446 ) ) );
                            (*  ed3355 ) .f_cursor .f_x = (  cx3448 );
                            (*  ed3355 ) .f_goal_dash_x = (  vx3447 );
                            struct funenv1629  temp1747 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                            ( (  move_dash_to_dash_row1487 ) ( (  ed3355 ) ,  (  cy3446 ) ,  ( temp1747.fun ( temp1747.env ,  (  ed3355 ) ,  (  tui3356 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable1136 ) ( ) );
            }
        }
        struct funenv1418  temp1748 = ( (struct funenv1418){ .fun = resize_dash_screen_dash_if_dash_needed1418, .env =  envinst1418  } );
        bool  resized3449 = ( temp1748.fun ( temp1748.env ,  (  screen3358 ) ) );
        if ( ( ( ( (  resized3449 ) || (  cmp80 ( (  events3361 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3360 ) ) || ( (  is_dash_just886 ) ( ( ( * (  ed3355 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3360 = ( false );
            ( (  clear_dash_screen1408 ) ( (  screen3358 ) ) );
            ( (  set_dash_screen_dash_fg1420 ) ( (  screen3358 ) ,  ( ( * ( ( * (  ed3355 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1421 ) ( (  screen3358 ) ,  ( ( * ( ( * (  ed3355 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1424 ) ( (  screen3358 ) ) );
            struct funenv1631  temp1749 = ( (struct funenv1631){ .fun = render_dash_editor1631, .env =  envinst1631  } );
            ( temp1749.fun ( temp1749.env ,  (  screen3358 ) ,  (  ed3355 ) ) );
            bool  debug3450 = ( true );
            if ( (  debug3450 ) ) {
                ( (  draw_dash_str_dash_right1443 ) ( (  screen3358 ) ,  ( ( StrConcat_971_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3355 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1444 ) ( (  screen3358 ) ,  ( ( StrConcat_986_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3356 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env889 envinst889 = {
                    .ed3355 =  ed3355 ,
                };
                struct Maybe_386  charcode3455 = ( (  fmap_dash_maybe899 ) ( ( (  and_dash_maybe888 ) ( ( (  try_dash_get1240 ) ( ( & ( ( * (  ed3355 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv889){ .fun = lam889, .env = envinst889 } ) ) ) ,  (  lam1750 ) ) );
                ( (  draw_dash_str_dash_right1445 ) ( (  screen3358 ) ,  ( ( StrConcat_988_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3455 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1446 ) ( (  screen3358 ) ,  ( ( StrConcat_1014_StrConcat ) ( ( ( StrConcat_1015_StrConcat ) ( ( ( StrConcat_1016_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3456 = ( ( * ( (  get_dash_row1467 ) ( (  ed3355 ) ,  ( ( ( * (  ed3355 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1447 ) ( (  screen3358 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3456 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3457 = ( (  from_dash_visual1464 ) ( ( ( * (  ed3355 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1448 ) ( (  screen3358 ) ,  ( ( StrConcat_1016_StrConcat ) ( ( "goal x: " ) ,  (  gx3457 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1629  temp1751 = ( (struct funenv1629){ .fun = screen_dash_dims1629, .env =  envinst1629  } );
                struct Dims_1485  dim3458 = ( temp1751.fun ( temp1751.env ,  (  ed3355 ) ,  (  tui3356 ) ) );
                ( (  draw_dash_str_dash_right1449 ) ( (  screen3358 ) ,  ( ( StrConcat_1023_StrConcat ) ( ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_1016_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3355 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3458 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1450 ) ( (  screen3358 ) ,  ( ( StrConcat_1028_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3355 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1451 ) ( (  screen3358 ) ,  ( ( StrConcat_1042_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3355 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_901  cpsize3461 = ( (  fmap_dash_maybe900 ) ( ( ( * (  ed3355 ) ) .f_clipboard ) ,  (  lam1752 ) ) );
                ( (  draw_dash_str_dash_right1452 ) ( (  screen3358 ) ,  ( ( StrConcat_1046_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3461 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
                ( (  draw_dash_str_dash_right1453 ) ( (  screen3358 ) ,  ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1049_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "actions: " ) ,  ( ( ( * (  ed3355 ) ) .f_actions ) .f_cur ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ,  ( ( ( ( * (  ed3355 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 10 ) ) ) );
            }
            ( (  update_dash_animation1647 ) ( ( & ( ( * (  ed3355 ) ) .f_anim ) ) ,  (  screen3358 ) ) );
            ( (  render_dash_screen1412 ) ( (  screen3358 ) ) );
        }
        ( (  sync1386 ) ( (  tui3356 ) ) );
    }
    ( (  free_dash_screen1407 ) ( (  screen3358 ) ) );
    ( (  deinit1390 ) ( (  tui3356 ) ) );
}
