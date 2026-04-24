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

static  char *   get_dash_ptr8 (    struct List_3 *  list1793 ,    size_t  i1795 ) {
    if ( ( (  cmp9 ( (  i1795 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1795 ) , ( ( * (  list1793 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1795 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1793 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1793 ) ) .f_elements ) ,  (  i1795 ) ) );
}

static  char   get7 (    struct List_3 *  list1803 ,    size_t  i1805 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1803 ) ,  (  i1805 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1864 ,    size_t  k1866 ) {
    return ( (  get7 ) ( ( & (  self1864 ) ) ,  (  k1866 ) ) );
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

static  bool   eq55 (    enum CharType_53  l2676 ,    enum CharType_53  r2678 ) {
    struct Tuple2_56  dref2679 = ( ( Tuple2_56_Tuple2 ) ( (  l2676 ) ,  (  r2678 ) ) );
    if (  dref2679 .field0 == CharType_53_CharSpace &&  dref2679 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2679 .field0 == CharType_53_CharWord &&  dref2679 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2679 .field0 == CharType_53_CharPunctuation &&  dref2679 .field1 == CharType_53_CharPunctuation ) {
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

static  bool   eq66 (    enum Color8_60  l1986 ,    enum Color8_60  r1988 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l1986 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r1988 ) ) ) ) );
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

static  bool   eq74 (    enum Color16_61  l1992 ,    enum Color16_61  r1994 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l1992 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r1994 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l2022 ,    struct RGB_62  r2024 ) {
    return ( ( (  eq43 ( ( (  l2022 ) .f_r ) , ( (  r2024 ) .f_r ) ) ) && (  eq43 ( ( (  l2022 ) .f_g ) , ( (  r2024 ) .f_g ) ) ) ) && (  eq43 ( ( (  l2022 ) .f_b ) , ( (  r2024 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l2045 ,    struct Color_59  r2047 ) {
    return ( {  struct Tuple2_65  dref2048 = ( ( Tuple2_65_Tuple2 ) ( (  l2045 ) ,  (  r2047 ) ) ) ; dref2048 .field0.tag == Color_59_ColorDefault_t && dref2048 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref2048 .field0.tag == Color_59_Color8_t && dref2048 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref2048 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref2048 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref2048 .field0.tag == Color_59_Color16_t && dref2048 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref2048 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref2048 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref2048 .field0.tag == Color_59_Color256_t && dref2048 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref2048 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref2048 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref2048 .field0.tag == Color_59_ColorRGB_t && dref2048 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref2048 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref2048 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2532 ,    struct Cell_58  r2534 ) {
    if ( ( !  eq47 ( ( (  l2532 ) .f_c ) , ( (  r2534 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2532 ) .f_fg ) , ( (  r2534 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2532 ) .f_bg ) , ( (  r2534 ) .f_bg ) ) ) ) {
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

static  const char* *   offset_dash_ptr157 (    const char* *  x456 ,    int64_t  count458 ) {
    const char*  temp158;
    return ( (const char* * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp158 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr159 (    struct List_3 *  x456 ,    int64_t  count458 ) {
    struct List_3  temp160;
    return ( (struct List_3 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp160 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr161 (    uint8_t *  x456 ,    int64_t  count458 ) {
    uint8_t  temp162;
    return ( (uint8_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp162 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr163 (    uint32_t *  x456 ,    int64_t  count458 ) {
    uint32_t  temp164;
    return ( (uint32_t * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp164 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr165 (    struct Cell_58 *  x456 ,    int64_t  count458 ) {
    struct Cell_58  temp166;
    return ( (struct Cell_58 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp166 ) ) ) ) ) ) ) ) );
}

struct Cursor_170 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Primitive_169 {
    enum {
        Primitive_169_PrimInsert_t,
        Primitive_169_PrimDelete_t,
    } tag;
    union {
        struct {
            struct Cursor_170  field0;
            struct DynStr_134  field1;
        } Primitive_169_PrimInsert_s;
        struct {
            struct Cursor_170  field0;
            struct DynStr_134  field1;
        } Primitive_169_PrimDelete_s;
    } stuff;
};

static struct Primitive_169 Primitive_169_PrimInsert (  struct Cursor_170  field0 ,  struct DynStr_134  field1 ) {
    return ( struct Primitive_169 ) { .tag = Primitive_169_PrimInsert_t, .stuff = { .Primitive_169_PrimInsert_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct Primitive_169 Primitive_169_PrimDelete (  struct Cursor_170  field0 ,  struct DynStr_134  field1 ) {
    return ( struct Primitive_169 ) { .tag = Primitive_169_PrimDelete_t, .stuff = { .Primitive_169_PrimDelete_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct Maybe_171 {
    enum {
        Maybe_171_None_t,
        Maybe_171_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_170  field0;
        } Maybe_171_Just_s;
    } stuff;
};

static struct Maybe_171 Maybe_171_Just (  struct Cursor_170  field0 ) {
    return ( struct Maybe_171 ) { .tag = Maybe_171_Just_t, .stuff = { .Maybe_171_Just_s = { .field0 = field0 } } };
};

struct Action_168 {
    struct Primitive_169  f_prim;
    struct Cursor_170  f_before_dash_cursor;
    struct Maybe_171  f_before_dash_sel;
};

static  struct Action_168 *   offset_dash_ptr167 (    struct Action_168 *  x456 ,    int64_t  count458 ) {
    struct Action_168  temp172;
    return ( (struct Action_168 * ) ( ( (void*) (  x456 ) ) + (  op_dash_mul32 ( (  count458 ) , ( (int64_t ) ( sizeof( ( (  temp172 ) ) ) ) ) ) ) ) );
}

struct TypeSize_174 {
    size_t  f_size;
};

static  struct TypeSize_174   get_dash_typesize173 (  ) {
    struct List_3  temp175;
    return ( (struct TypeSize_174) { .f_size = ( sizeof( ( (  temp175 ) ) ) ) } );
}

struct TypeSize_177 {
    size_t  f_size;
};

static  struct TypeSize_177   get_dash_typesize176 (  ) {
    char  temp178;
    return ( (struct TypeSize_177) { .f_size = ( sizeof( ( (  temp178 ) ) ) ) } );
}

struct TypeSize_180 {
    size_t  f_size;
};

static  struct TypeSize_180   get_dash_typesize179 (  ) {
    struct Cell_58  temp181;
    return ( (struct TypeSize_180) { .f_size = ( sizeof( ( (  temp181 ) ) ) ) } );
}

struct TypeSize_183 {
    size_t  f_size;
};

static  struct TypeSize_183   get_dash_typesize182 (  ) {
    struct Action_168  temp184;
    return ( (struct TypeSize_183) { .f_size = ( sizeof( ( (  temp184 ) ) ) ) } );
}

static  size_t   size_dash_of185 (    struct List_3 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of186 (    char *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of187 (    FILE *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of188 (    char  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of189 (    struct Action_168 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of190 (    enum Unit_13 *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of191 (    uint32_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Winsize_193 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of192 (    struct Winsize_193  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of194 (    size_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

struct Array_196 {
    char _arr [32];
};

static  size_t   size_dash_of195 (    struct Array_196  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of197 (    int64_t  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  size_t   size_dash_of198 (    struct timespec *  x463 ) {
    return ( sizeof( (  x463 ) ) );
}

static  char *   cast199 (    const char*  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  const char*   cast200 (    char *  x469 ) {
    return ( (const char* ) (  x469 ) );
}

static  enum Unit_13 *   cast201 (    const char*  x469 ) {
    return ( (enum Unit_13 * ) (  x469 ) );
}

static  uint16_t *   cast202 (    uint32_t *  x469 ) {
    return ( (uint16_t * ) (  x469 ) );
}

static  uint32_t *   cast203 (    size_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  char *   cast204 (    int32_t *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  uint8_t   cast205 (    char  x469 ) {
    return ( (uint8_t ) (  x469 ) );
}

static  char   cast206 (    int32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  int32_t   cast207 (    uint32_t  x469 ) {
    return ( (int32_t ) (  x469 ) );
}

static  uint8_t *   cast208 (    int64_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char *   cast209 (    struct Array_196 *  x469 ) {
    return ( (char * ) (  x469 ) );
}

static  uint8_t *   cast210 (    int32_t *  x469 ) {
    return ( (uint8_t * ) (  x469 ) );
}

static  char   cast211 (    uint32_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  char   cast212 (    size_t  x469 ) {
    return ( (char ) (  x469 ) );
}

static  uint32_t *   cast213 (    int64_t *  x469 ) {
    return ( (uint32_t * ) (  x469 ) );
}

static  void *   cast_dash_ptr214 (    struct List_3 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr215 (    struct List_3 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   cast_dash_ptr216 (    void *  p472 ) {
    return ( (struct List_3 * ) (  p472 ) );
}

static  void *   cast_dash_ptr217 (    char * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  char *   cast_dash_ptr218 (    void *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr219 (    FILE * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr220 (    char *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr221 (    struct Action_168 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct termios *   cast_dash_ptr222 (    struct Termios_141 *  p472 ) {
    return ( (struct termios * ) (  p472 ) );
}

static  uint8_t *   cast_dash_ptr223 (    struct Array_142 *  p472 ) {
    return ( (uint8_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr224 (    struct Array_104 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr225 (    struct Array_110 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  uint32_t *   cast_dash_ptr226 (    struct Array_107 *  p472 ) {
    return ( (uint32_t * ) (  p472 ) );
}

static  void *   cast_dash_ptr227 (    enum Unit_13 * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr228 (    uint32_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr229 (    struct Winsize_193 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr230 (    size_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct Cell_58 *   cast_dash_ptr231 (    void *  p472 ) {
    return ( (struct Cell_58 * ) (  p472 ) );
}

static  char *   cast_dash_ptr232 (    struct Array_196 *  p472 ) {
    return ( (char * ) (  p472 ) );
}

static  void *   cast_dash_ptr233 (    struct Array_196 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr234 (    int64_t *  p472 ) {
    return ( (void * ) (  p472 ) );
}

struct Pollfd_236 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr235 (    struct Pollfd_236 *  p472 ) {
    return ( (struct pollfd * ) (  p472 ) );
}

static  struct Action_168 *   cast_dash_ptr237 (    void *  p472 ) {
    return ( (struct Action_168 * ) (  p472 ) );
}

static  void *   cast_dash_ptr238 (    struct Action_168 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr239 (    enum Unit_13 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr240 (    struct timespec * *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  void *   cast_dash_ptr241 (    struct Cell_58 *  p472 ) {
    return ( (void * ) (  p472 ) );
}

static  struct List_3 *   zeroed242 (  ) {
    struct List_3 *  temp243;
    struct List_3 *  x479 = (  temp243 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of185 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char *   zeroed244 (  ) {
    char *  temp245;
    char *  x479 = (  temp245 );
    ( ( memset ) ( ( (  cast_dash_ptr217 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of186 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  FILE *   zeroed246 (  ) {
    FILE *  temp247;
    FILE *  x479 = (  temp247 );
    ( ( memset ) ( ( (  cast_dash_ptr219 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of187 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  char   zeroed248 (  ) {
    char  temp249;
    char  x479 = (  temp249 );
    ( ( memset ) ( ( (  cast_dash_ptr220 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of188 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Action_168 *   zeroed250 (  ) {
    struct Action_168 *  temp251;
    struct Action_168 *  x479 = (  temp251 );
    ( ( memset ) ( ( (  cast_dash_ptr221 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of189 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  enum Unit_13 *   zeroed252 (  ) {
    enum Unit_13 *  temp253;
    enum Unit_13 *  x479 = (  temp253 );
    ( ( memset ) ( ( (  cast_dash_ptr227 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of190 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   zeroed254 (  ) {
    uint32_t  temp255;
    uint32_t  x479 = (  temp255 );
    ( ( memset ) ( ( (  cast_dash_ptr228 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Winsize_193   zeroed256 (  ) {
    struct Winsize_193  temp257;
    struct Winsize_193  x479 = (  temp257 );
    ( ( memset ) ( ( (  cast_dash_ptr229 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of192 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  size_t   zeroed258 (  ) {
    size_t  temp259;
    size_t  x479 = (  temp259 );
    ( ( memset ) ( ( (  cast_dash_ptr230 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of194 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct Array_196   zeroed260 (  ) {
    struct Array_196  temp261;
    struct Array_196  x479 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr233 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of195 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  int64_t   zeroed262 (  ) {
    int64_t  temp263;
    int64_t  x479 = (  temp263 );
    ( ( memset ) ( ( (  cast_dash_ptr234 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of197 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  struct timespec *   zeroed264 (  ) {
    struct timespec *  temp265;
    struct timespec *  x479 = (  temp265 );
    ( ( memset ) ( ( (  cast_dash_ptr240 ) ( ( & (  x479 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of198 ) ( (  x479 ) ) ) ) );
    return (  x479 );
}

static  uint32_t   cast_dash_on_dash_zeroed266 (    uint16_t  x482 ) {
    uint32_t  temp267 = ( (  zeroed254 ) ( ) );
    uint32_t *  y483 = ( &temp267 );
    uint16_t *  yp484 = ( (  cast202 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  size_t   cast_dash_on_dash_zeroed268 (    uint32_t  x482 ) {
    size_t  temp269 = ( (  zeroed258 ) ( ) );
    size_t *  y483 = ( &temp269 );
    uint32_t *  yp484 = ( (  cast203 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed270 (    char  x482 ) {
    int32_t  temp271 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp271 );
    char *  yp484 = ( (  cast204 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed272 (    uint8_t  x482 ) {
    int64_t  temp273 = ( (  zeroed262 ) ( ) );
    int64_t *  y483 = ( &temp273 );
    uint8_t *  yp484 = ( (  cast208 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int32_t   cast_dash_on_dash_zeroed274 (    uint8_t  x482 ) {
    int32_t  temp275 = ( (  zeroed69 ) ( ) );
    int32_t *  y483 = ( &temp275 );
    uint8_t *  yp484 = ( (  cast210 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  int64_t   cast_dash_on_dash_zeroed276 (    uint32_t  x482 ) {
    int64_t  temp277 = ( (  zeroed262 ) ( ) );
    int64_t *  y483 = ( &temp277 );
    uint32_t *  yp484 = ( (  cast213 ) ( (  y483 ) ) );
    (*  yp484 ) = (  x482 );
    return ( * (  y483 ) );
}

static  struct List_3 *   null_dash_ptr278 (  ) {
    return ( (  zeroed242 ) ( ) );
}

static  char *   null_dash_ptr279 (  ) {
    return ( (  zeroed244 ) ( ) );
}

static  FILE *   null_dash_ptr280 (  ) {
    return ( (  zeroed246 ) ( ) );
}

static  struct Action_168 *   null_dash_ptr281 (  ) {
    return ( (  zeroed250 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr282 (  ) {
    return ( (  zeroed252 ) ( ) );
}

static  struct timespec *   null_dash_ptr283 (  ) {
    return ( (  zeroed264 ) ( ) );
}

static  bool   is_dash_ptr_dash_null284 (    FILE *  p488 ) {
    return ( (  p488 ) == ( (  null_dash_ptr280 ) ( ) ) );
}

static  bool   ptr_dash_eq285 (    enum Unit_13 *  l494 ,    enum Unit_13 *  r496 ) {
    return ( (  l494 ) == (  r496 ) );
}

struct Maybe_287 {
    enum {
        Maybe_287_None_t,
        Maybe_287_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_287_Just_s;
    } stuff;
};

static struct Maybe_287 Maybe_287_Just (  const char*  field0 ) {
    return ( struct Maybe_287 ) { .tag = Maybe_287_Just_t, .stuff = { .Maybe_287_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_287   from_dash_nullable_dash_c_dash_str286 (    const char*  s499 ) {
    if ( ( (  ptr_dash_eq285 ) ( ( (  cast201 ) ( (  s499 ) ) ) ,  ( ( (  null_dash_ptr282 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_287) { .tag = Maybe_287_None_t } );
    } else {
        return ( ( Maybe_287_Just ) ( (  s499 ) ) );
    }
}

static  uint32_t   i32_dash_u32288 (    int32_t  x508 ) {
    return ( (uint32_t ) (  x508 ) );
}

static  int64_t   i32_dash_i64289 (    int32_t  x511 ) {
    return ( (int64_t ) (  x511 ) );
}

static  size_t   i32_dash_size290 (    int32_t  x514 ) {
    return ( (size_t ) ( (int64_t ) (  x514 ) ) );
}

static  int32_t   i64_dash_i32291 (    int64_t  x520 ) {
    return ( (int32_t ) (  x520 ) );
}

static  int32_t   size_dash_i32292 (    size_t  x529 ) {
    return ( (int32_t ) (  x529 ) );
}

static  uint32_t   u16_dash_u32293 (    uint16_t  x535 ) {
    return ( (  cast_dash_on_dash_zeroed266 ) ( (  x535 ) ) );
}

static  size_t   u32_dash_size294 (    uint32_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed268 ) ( (  x541 ) ) );
}

static  int64_t   u32_dash_i64295 (    uint32_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed276 ) ( (  x544 ) ) );
}

static  int32_t   u32_dash_i32296 (    uint32_t  x550 ) {
    return ( (  cast207 ) ( (  x550 ) ) );
}

static  int64_t   u8_dash_i64297 (    uint8_t  x556 ) {
    return ( (  cast_dash_on_dash_zeroed272 ) ( (  x556 ) ) );
}

static  int32_t   u8_dash_i32298 (    uint8_t  x559 ) {
    return ( (  cast_dash_on_dash_zeroed274 ) ( (  x559 ) ) );
}

struct Slice_301 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_300 {
    struct Slice_301  f_slice;
    size_t  f_current_dash_offset;
};

struct List_302 {
    enum CAllocator_4  f_al;
    struct Slice_301  f_elements;
    size_t  f_count;
};

static  struct SliceIter_300   into_dash_iter304 (    struct Slice_301  self1457 ) {
    return ( (struct SliceIter_300) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min306 (    size_t  l975 ,    size_t  r977 ) {
    if ( (  cmp9 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  struct Slice_301   subslice305 (    struct Slice_301  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct List_3 *  begin_dash_ptr1422 = ( (  offset_dash_ptr159 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_301) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min306 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_301) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_300   into_dash_iter303 (    struct List_302  self1820 ) {
    return ( (  into_dash_iter304 ) ( ( (  subslice305 ) ( ( (  self1820 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1820 ) .f_count ) ) ) ) );
}

static  struct SliceIter_300   into_dash_iter299 (    struct List_302 *  self565 ) {
    return ( (  into_dash_iter303 ) ( ( * (  self565 ) ) ) );
}

struct SliceIter_309 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_308 {
    struct SliceIter_309  f_s;
};

static  struct Scanner_308   into_dash_iter310 (    struct Scanner_308  self2424 ) {
    return (  self2424 );
}

static  struct Scanner_308   into_dash_iter307 (    struct Scanner_308 *  self565 ) {
    return ( (  into_dash_iter310 ) ( ( * (  self565 ) ) ) );
}

static  struct SliceIter_309   into_dash_iter313 (    struct Slice_5  self1457 ) {
    return ( (struct SliceIter_309) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice314 (    struct Slice_5  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    char *  begin_dash_ptr1422 = ( (  offset_dash_ptr31 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min306 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct SliceIter_309   into_dash_iter312 (    struct List_3  self1820 ) {
    return ( (  into_dash_iter313 ) ( ( (  subslice314 ) ( ( (  self1820 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1820 ) .f_count ) ) ) ) );
}

static  struct SliceIter_309   into_dash_iter311 (    struct List_3 *  self565 ) {
    return ( (  into_dash_iter312 ) ( ( * (  self565 ) ) ) );
}

enum EmptyIter_316 {
    EmptyIter_316_EmptyIter,
};

static  enum EmptyIter_316   nil315 (  ) {
    return ( EmptyIter_316_EmptyIter );
}

static  enum EmptyIter_316   into_dash_iter317 (    enum EmptyIter_316  self570 ) {
    return (  self570 );
}

static  struct Maybe_49   next318 (    enum EmptyIter_316 *  dref572 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_321 {
    struct DynStr_134  f_og;
    size_t  f_last;
};

struct env326 {
    ;
    size_t  starting_dash_size1828;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1829;
};

struct funenv326 {
    enum Unit_13  (*fun) (  struct env326  ,    struct List_3 *  );
    struct env326 env;
};

struct env325 {
    ;
    ;
    ;
    struct env326 envinst326;
    ;
    ;
};

struct funenv325 {
    enum Unit_13  (*fun) (  struct env325  ,    struct List_3 *  ,    char  );
    struct env325 env;
};

struct env324 {
    ;
    struct env325 envinst325;
    ;
    ;
    ;
    ;
};

struct funenv324 {
    enum Unit_13  (*fun) (  struct env324  ,    struct List_3 *  ,    struct DynStr_134  );
    struct env324 env;
};

struct env323 {
    ;
    ;
    ;
    struct env324 envinst324;
    ;
    ;
};

struct funenv323 {
    struct List_3  (*fun) (  struct env323  ,    struct DynStr_134  ,    enum CAllocator_4  );
    struct env323 env;
};

struct env322 {
    struct env323 envinst323;
    enum CAllocator_4  al3139;
};

struct funenv322 {
    struct List_3  (*fun) (  struct env322  ,    struct DynStr_134  );
    struct env322 env;
};

struct Map_320 {
    struct LineIter_321  field0;
    struct funenv322  field1;
};

static struct Map_320 Map_320_Map (  struct LineIter_321  field0 , struct funenv322  field1 ) {
    return ( struct Map_320 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_320   into_dash_iter319 (    struct Map_320  self576 ) {
    return (  self576 );
}

struct ConstStrIter_329 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_328 {
    struct ConstStrIter_329  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_328 Map_328_Map (  struct ConstStrIter_329  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_328 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_328   into_dash_iter327 (    struct Map_328  self576 ) {
    return (  self576 );
}

struct Take_332 {
    struct SliceIter_309  field0;
    size_t  field1;
};

static struct Take_332 Take_332_Take (  struct SliceIter_309  field0 ,  size_t  field1 ) {
    return ( struct Take_332 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Map_331 {
    struct Take_332  field0;
    int32_t (*  field1 )(    char  );
};

static struct Map_331 Map_331_Map (  struct Take_332  field0 ,  int32_t (*  field1 )(    char  ) ) {
    return ( struct Map_331 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_331   into_dash_iter330 (    struct Map_331  self576 ) {
    return (  self576 );
}

struct Maybe_334 {
    enum {
        Maybe_334_None_t,
        Maybe_334_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_334_Just_s;
    } stuff;
};

static struct Maybe_334 Maybe_334_Just (  struct List_3  field0 ) {
    return ( struct Maybe_334 ) { .tag = Maybe_334_Just_t, .stuff = { .Maybe_334_Just_s = { .field0 = field0 } } };
};

struct Maybe_335 {
    enum {
        Maybe_335_None_t,
        Maybe_335_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_134  field0;
        } Maybe_335_Just_s;
    } stuff;
};

static struct Maybe_335 Maybe_335_Just (  struct DynStr_134  field0 ) {
    return ( struct Maybe_335 ) { .tag = Maybe_335_Just_t, .stuff = { .Maybe_335_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail338 (    struct Maybe_49  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_49  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined136 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_49_Just_t ) {
        return ( dref1362 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get339 (    struct Slice_5  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1401 = ( (  offset_dash_ptr31 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  char   get337 (    struct Slice_5  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail338 ) ( ( (  try_dash_get339 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar340 (  ) {
    return ( (  zeroed248 ) ( ) );
}

static  char   newline341 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_134   substr342 (    struct DynStr_134  s1599 ,    size_t  from1601 ,    size_t  to1603 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice314 ) ( ( (  s1599 ) .f_contents ) ,  (  from1601 ) ,  (  to1603 ) ) ) } );
}

static  struct Maybe_335   next336 (    struct LineIter_321 *  self1748 ) {
    if ( ( (  cmp9 ( ( ( * (  self1748 ) ) .f_last ) , ( ( ( ( * (  self1748 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get337 ) ( ( ( ( * (  self1748 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1748 ) ) .f_last ) ) ) , ( (  nullchar340 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    size_t  i1749 = ( ( * (  self1748 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1749 ) , ( ( ( ( * (  self1748 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get337 ) ( ( ( ( * (  self1748 ) ) .f_og ) .f_contents ) ,  (  i1749 ) ) ) , ( (  newline341 ) ( ) ) ) ) ) ) {
        i1749 = (  op_dash_add98 ( (  i1749 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_134  line1750 = ( (  substr342 ) ( ( ( * (  self1748 ) ) .f_og ) ,  ( ( * (  self1748 ) ) .f_last ) ,  (  i1749 ) ) );
    if ( (  cmp9 ( (  i1749 ) , ( ( ( ( * (  self1748 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1749 = (  op_dash_add98 ( (  i1749 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1748 ) .f_last = (  i1749 );
    return ( ( Maybe_335_Just ) ( (  line1750 ) ) );
}

static  struct Maybe_334   next333 (    struct Map_320 *  dref578 ) {
    struct Maybe_335  dref581 = ( (  next336 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_335_None_t ) {
        return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
    }
    else if ( dref581.tag == Maybe_335_Just_t ) {
        struct funenv322  temp343 = ( (* dref578 ) .field1 );
        return ( ( Maybe_334_Just ) ( ( temp343.fun ( temp343.env ,  ( dref581 .stuff .Maybe_335_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_345 {
    enum {
        Maybe_345_None_t,
        Maybe_345_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_345_Just_s;
    } stuff;
};

static struct Maybe_345 Maybe_345_Just (  uint32_t  field0 ) {
    return ( struct Maybe_345 ) { .tag = Maybe_345_Just_t, .stuff = { .Maybe_345_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next346 (    struct ConstStrIter_329 *  self1073 ) {
    if ( (  cmp9 ( ( ( * (  self1073 ) ) .f_i ) , ( (  i32_dash_size290 ) ( ( ( strlen ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1074 = ( ( (  cast199 ) ( ( ( * (  self1073 ) ) .f_ogstr ) ) ) );
    char  c1075 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1074 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1073 ) ) .f_i ) ) ) ) ) );
    (*  self1073 ) .f_i = (  op_dash_add98 ( ( ( * (  self1073 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1075 ) ) );
}

static  struct Maybe_345   next344 (    struct Map_328 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next346 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_345_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_348 {
    enum {
        Maybe_348_None_t,
        Maybe_348_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_348_Just_s;
    } stuff;
};

static struct Maybe_348 Maybe_348_Just (  int32_t  field0 ) {
    return ( struct Maybe_348 ) { .tag = Maybe_348_Just_t, .stuff = { .Maybe_348_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next350 (    struct SliceIter_309 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1465 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_49   next349 (    struct Take_332 *  dref641 ) {
    if ( (  cmp9 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x644 = ( (  next350 ) ( ( & ( (* dref641 ) .field0 ) ) ) );
        (* dref641 ) .field1 = (  op_dash_sub99 ( ( (* dref641 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x644 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_348   next347 (    struct Map_331 *  dref578 ) {
    struct Maybe_49  dref581 = ( (  next349 ) ( ( & ( (* dref578 ) .field0 ) ) ) );
    if ( dref581.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
    else if ( dref581.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_348_Just ) ( ( ( (* dref578 ) .field1 ) ( ( dref581 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_321   into_dash_iter352 (    struct LineIter_321  self1745 ) {
    return (  self1745 );
}

static  struct Map_320   map351 (    struct LineIter_321  iterable585 ,   struct funenv322  fun587 ) {
    struct LineIter_321  it588 = ( (  into_dash_iter352 ) ( (  iterable585 ) ) );
    return ( ( Map_320_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct ConstStrIter_329   into_dash_iter354 (    const char*  self1067 ) {
    return ( (struct ConstStrIter_329) { .f_ogstr = (  self1067 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_328   map353 (    const char*  iterable585 ,    uint32_t (*  fun587 )(    char  ) ) {
    struct ConstStrIter_329  it588 = ( (  into_dash_iter354 ) ( (  iterable585 ) ) );
    return ( ( Map_328_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

static  struct Take_332   into_dash_iter356 (    struct Take_332  self639 ) {
    return (  self639 );
}

static  struct Map_331   map355 (    struct Take_332  iterable585 ,    int32_t (*  fun587 )(    char  ) ) {
    struct Take_332  it588 = ( (  into_dash_iter356 ) ( (  iterable585 ) ) );
    return ( ( Map_331_Map ) ( (  it588 ) ,  (  fun587 ) ) );
}

struct FromIter_360 {
    int32_t  f_from;
};

struct Zip_359 {
    struct SliceIter_300  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

struct Drop_358 {
    struct Zip_359  field0;
    size_t  field1;
};

static struct Drop_358 Drop_358_Drop (  struct Zip_359  field0 ,  size_t  field1 ) {
    return ( struct Drop_358 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_358   into_dash_iter357 (    struct Drop_358  self625 ) {
    return (  self625 );
}

struct Zip_363 {
    struct SliceIter_309  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

struct Drop_362 {
    struct Zip_363  field0;
    size_t  field1;
};

static struct Drop_362 Drop_362_Drop (  struct Zip_363  field0 ,  size_t  field1 ) {
    return ( struct Drop_362 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_362   into_dash_iter361 (    struct Drop_362  self625 ) {
    return (  self625 );
}

struct Tuple2_366 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_366 Tuple2_366_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_365 {
    enum {
        Maybe_365_None_t,
        Maybe_365_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_366  field0;
        } Maybe_365_Just_s;
    } stuff;
};

static struct Maybe_365 Maybe_365_Just (  struct Tuple2_366  field0 ) {
    return ( struct Maybe_365 ) { .tag = Maybe_365_Just_t, .stuff = { .Maybe_365_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_334   next368 (    struct SliceIter_300 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
    }
    struct List_3  elem1465 = ( * ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_334_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_348   next369 (    struct FromIter_360 *  dref685 ) {
    int32_t  v687 = ( ( (* dref685 ) ) .f_from );
    (* dref685 ) .f_from = (  op_dash_add87 ( ( ( (* dref685 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_348_Just ) ( (  v687 ) ) );
}

static  struct Maybe_365   next367 (    struct Zip_359 *  self694 ) {
    struct Zip_359  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_334  dref696 = ( (  next368 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_334_None_t ) {
            return ( (struct Maybe_365) { .tag = Maybe_365_None_t } );
        }
        else if ( dref696.tag == Maybe_334_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_365) { .tag = Maybe_365_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next368 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_365_Just ) ( ( ( Tuple2_366_Tuple2 ) ( ( dref696 .stuff .Maybe_334_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_365   next364 (    struct Drop_358 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next367 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next367 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

struct Tuple2_372 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_372 Tuple2_372_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_372 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_371 {
    enum {
        Maybe_371_None_t,
        Maybe_371_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_372  field0;
        } Maybe_371_Just_s;
    } stuff;
};

static struct Maybe_371 Maybe_371_Just (  struct Tuple2_372  field0 ) {
    return ( struct Maybe_371 ) { .tag = Maybe_371_Just_t, .stuff = { .Maybe_371_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_371   next373 (    struct Zip_363 *  self694 ) {
    struct Zip_363  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next350 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next350 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_371   next370 (    struct Drop_362 *  dref627 ) {
    while ( (  cmp9 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next373 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
        (* dref627 ) .field1 = (  op_dash_sub99 ( ( (* dref627 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next373 ) ( ( & ( (* dref627 ) .field0 ) ) ) );
}

static  struct Zip_359   into_dash_iter375 (    struct Zip_359  self691 ) {
    return (  self691 );
}

static  struct Drop_358   drop374 (    struct Zip_359  iterable632 ,    size_t  i634 ) {
    struct Zip_359  it635 = ( (  into_dash_iter375 ) ( (  iterable632 ) ) );
    return ( ( Drop_358_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Zip_363   into_dash_iter377 (    struct Zip_363  self691 ) {
    return (  self691 );
}

static  struct Drop_362   drop376 (    struct Zip_363  iterable632 ,    size_t  i634 ) {
    struct Zip_363  it635 = ( (  into_dash_iter377 ) ( (  iterable632 ) ) );
    return ( ( Drop_362_Drop ) ( (  it635 ) ,  (  i634 ) ) );
}

static  struct Take_332   take378 (    struct List_3 *  it647 ,    size_t  i649 ) {
    return ( ( Take_332_Take ) ( ( (  into_dash_iter311 ) ( (  it647 ) ) ) ,  (  i649 ) ) );
}

struct Range_380 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_380 Range_380_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_380 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_380   to379 (    int32_t  from654 ,    int32_t  to656 ) {
    return ( ( Range_380_Range ) ( (  from654 ) ,  (  to656 ) ) );
}

struct RangeIter_382 {
    struct Range_380  field0;
    int32_t  field1;
};

static struct RangeIter_382 RangeIter_382_RangeIter (  struct Range_380  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_382 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_382   into_dash_iter381 (    struct Range_380  dref663 ) {
    return ( ( RangeIter_382_RangeIter ) ( ( ( Range_380_Range ) ( ( dref663 .field0 ) ,  ( dref663 .field1 ) ) ) ,  ( dref663 .field0 ) ) );
}

static  struct Maybe_348   next383 (    struct RangeIter_382 *  self671 ) {
    struct RangeIter_382  dref672 = ( * (  self671 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref672 .field1 ) , ( dref672 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
        struct Maybe_348  x676 = ( ( Maybe_348_Just ) ( ( dref672 .field1 ) ) );
        (*  self671 ) = ( ( RangeIter_382_RangeIter ) ( ( ( Range_380_Range ) ( ( dref672 .field0 .field0 ) ,  ( dref672 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref672 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x676 );
    }
}

static  struct FromIter_360   from384 (    int32_t  f680 ) {
    return ( (struct FromIter_360) { .f_from = (  f680 ) } );
}

static  struct FromIter_360   into_dash_iter385 (    struct FromIter_360  it683 ) {
    return (  it683 );
}

struct Slice_389 {
    struct Action_168 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_388 {
    struct Slice_389  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_387 {
    struct SliceIter_388  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_387   into_dash_iter386 (    struct Zip_387  self691 ) {
    return (  self691 );
}

struct Zip_391 {
    struct SliceIter_309  f_left_dash_it;
    struct SliceIter_309  f_right_dash_it;
};

static  struct Zip_391   into_dash_iter390 (    struct Zip_391  self691 ) {
    return (  self691 );
}

struct IntStrIter_394 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_393 {
    struct IntStrIter_394  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_393   into_dash_iter392 (    struct Zip_393  self691 ) {
    return (  self691 );
}

struct StrConcatIter_400 {
    struct ConstStrIter_329  f_left;
    struct SliceIter_309  f_right;
};

struct AppendIter_401 {
    enum EmptyIter_316  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_399 {
    struct StrConcatIter_400  f_left;
    struct AppendIter_401  f_right;
};

struct StrCaseIter_398 {
    enum {
        StrCaseIter_398_StrCaseIter1_t,
        StrCaseIter_398_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_329  field0;
        } StrCaseIter_398_StrCaseIter1_s;
        struct {
            struct StrConcatIter_399  field0;
        } StrCaseIter_398_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_398 StrCaseIter_398_StrCaseIter1 (  struct ConstStrIter_329  field0 ) {
    return ( struct StrCaseIter_398 ) { .tag = StrCaseIter_398_StrCaseIter1_t, .stuff = { .StrCaseIter_398_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_398 StrCaseIter_398_StrCaseIter2 (  struct StrConcatIter_399  field0 ) {
    return ( struct StrCaseIter_398 ) { .tag = StrCaseIter_398_StrCaseIter2_t, .stuff = { .StrCaseIter_398_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_397 {
    struct ConstStrIter_329  f_left;
    struct StrCaseIter_398  f_right;
};

struct Zip_396 {
    struct StrConcatIter_397  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_396   into_dash_iter395 (    struct Zip_396  self691 ) {
    return (  self691 );
}

struct IntStrIter_405 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_404 {
    struct ConstStrIter_329  f_left;
    struct IntStrIter_405  f_right;
};

struct Zip_403 {
    struct StrConcatIter_404  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_403   into_dash_iter402 (    struct Zip_403  self691 ) {
    return (  self691 );
}

struct StrConcatIter_415 {
    struct AppendIter_401  f_left;
    struct AppendIter_401  f_right;
};

struct StrConcatIter_414 {
    struct StrConcatIter_415  f_left;
    struct ConstStrIter_329  f_right;
};

struct StrConcatIter_413 {
    struct StrConcatIter_414  f_left;
    struct IntStrIter_394  f_right;
};

struct StrConcatIter_412 {
    struct StrConcatIter_413  f_left;
    struct AppendIter_401  f_right;
};

struct StrConcatIter_411 {
    struct ConstStrIter_329  f_left;
    struct StrConcatIter_412  f_right;
};

struct StrConcatIter_410 {
    struct StrConcatIter_411  f_left;
    struct AppendIter_401  f_right;
};

struct StrCaseIter_409 {
    enum {
        StrCaseIter_409_StrCaseIter1_t,
        StrCaseIter_409_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_329  field0;
        } StrCaseIter_409_StrCaseIter1_s;
        struct {
            struct StrConcatIter_410  field0;
        } StrCaseIter_409_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_409 StrCaseIter_409_StrCaseIter1 (  struct ConstStrIter_329  field0 ) {
    return ( struct StrCaseIter_409 ) { .tag = StrCaseIter_409_StrCaseIter1_t, .stuff = { .StrCaseIter_409_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_409 StrCaseIter_409_StrCaseIter2 (  struct StrConcatIter_410  field0 ) {
    return ( struct StrCaseIter_409 ) { .tag = StrCaseIter_409_StrCaseIter2_t, .stuff = { .StrCaseIter_409_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_408 {
    struct ConstStrIter_329  f_left;
    struct StrCaseIter_409  f_right;
};

struct Zip_407 {
    struct StrConcatIter_408  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_407   into_dash_iter406 (    struct Zip_407  self691 ) {
    return (  self691 );
}

struct StrConcatIter_420 {
    struct ConstStrIter_329  f_left;
    struct IntStrIter_394  f_right;
};

struct StrConcatIter_419 {
    struct StrConcatIter_420  f_left;
    struct AppendIter_401  f_right;
};

struct StrConcatIter_418 {
    struct StrConcatIter_419  f_left;
    struct IntStrIter_394  f_right;
};

struct Zip_417 {
    struct StrConcatIter_418  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self691 ) {
    return (  self691 );
}

struct IntStrIter_424 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_423 {
    struct ConstStrIter_329  f_left;
    struct IntStrIter_424  f_right;
};

struct Zip_422 {
    struct StrConcatIter_423  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_422   into_dash_iter421 (    struct Zip_422  self691 ) {
    return (  self691 );
}

struct Zip_426 {
    struct StrConcatIter_420  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_426   into_dash_iter425 (    struct Zip_426  self691 ) {
    return (  self691 );
}

struct StrConcatIter_430 {
    struct StrConcatIter_420  f_left;
    struct ConstStrIter_329  f_right;
};

struct StrConcatIter_429 {
    struct StrConcatIter_430  f_left;
    struct IntStrIter_394  f_right;
};

struct Zip_428 {
    struct StrConcatIter_429  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_428   into_dash_iter427 (    struct Zip_428  self691 ) {
    return (  self691 );
}

struct StrConcatIter_435 {
    struct StrConcatIter_423  f_left;
    struct AppendIter_401  f_right;
};

struct StrCaseIter_434 {
    enum {
        StrCaseIter_434_StrCaseIter1_t,
        StrCaseIter_434_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_329  field0;
        } StrCaseIter_434_StrCaseIter1_s;
        struct {
            struct StrConcatIter_435  field0;
        } StrCaseIter_434_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_434 StrCaseIter_434_StrCaseIter1 (  struct ConstStrIter_329  field0 ) {
    return ( struct StrCaseIter_434 ) { .tag = StrCaseIter_434_StrCaseIter1_t, .stuff = { .StrCaseIter_434_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_434 StrCaseIter_434_StrCaseIter2 (  struct StrConcatIter_435  field0 ) {
    return ( struct StrCaseIter_434 ) { .tag = StrCaseIter_434_StrCaseIter2_t, .stuff = { .StrCaseIter_434_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_433 {
    struct ConstStrIter_329  f_left;
    struct StrCaseIter_434  f_right;
};

struct Zip_432 {
    struct StrConcatIter_433  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_432   into_dash_iter431 (    struct Zip_432  self691 ) {
    return (  self691 );
}

struct StrConcatIter_438 {
    struct StrConcatIter_435  f_left;
    struct IntStrIter_424  f_right;
};

struct Zip_437 {
    struct StrConcatIter_438  f_left_dash_it;
    struct FromIter_360  f_right_dash_it;
};

static  struct Zip_437   into_dash_iter436 (    struct Zip_437  self691 ) {
    return (  self691 );
}

struct Tuple2_441 {
    struct Action_168  field0;
    int32_t  field1;
};

static struct Tuple2_441 Tuple2_441_Tuple2 (  struct Action_168  field0 ,  int32_t  field1 ) {
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

struct Maybe_442 {
    enum {
        Maybe_442_None_t,
        Maybe_442_Just_t,
    } tag;
    union {
        struct {
            struct Action_168  field0;
        } Maybe_442_Just_s;
    } stuff;
};

static struct Maybe_442 Maybe_442_Just (  struct Action_168  field0 ) {
    return ( struct Maybe_442 ) { .tag = Maybe_442_Just_t, .stuff = { .Maybe_442_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_442   next443 (    struct SliceIter_388 *  self1463 ) {
    size_t  off1464 = ( ( * (  self1463 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1463 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_442) { .tag = Maybe_442_None_t } );
    }
    struct Action_168  elem1465 = ( * ( (  offset_dash_ptr167 ) ( ( ( ( * (  self1463 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1464 ) ) ) ) ) );
    (*  self1463 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1464 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_442_Just ) ( (  elem1465 ) ) );
}

static  struct Maybe_440   next439 (    struct Zip_387 *  self694 ) {
    struct Zip_387  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_442  dref696 = ( (  next443 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_442_None_t ) {
            return ( (struct Maybe_440) { .tag = Maybe_440_None_t } );
        }
        else if ( dref696.tag == Maybe_442_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_440) { .tag = Maybe_440_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next443 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_440_Just ) ( ( ( Tuple2_441_Tuple2 ) ( ( dref696 .stuff .Maybe_442_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_446 {
    char  field0;
    char  field1;
};

static struct Tuple2_446 Tuple2_446_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_446 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_445 {
    enum {
        Maybe_445_None_t,
        Maybe_445_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_446  field0;
        } Maybe_445_Just_s;
    } stuff;
};

static struct Maybe_445 Maybe_445_Just (  struct Tuple2_446  field0 ) {
    return ( struct Maybe_445 ) { .tag = Maybe_445_Just_t, .stuff = { .Maybe_445_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_445   next444 (    struct Zip_391 *  self694 ) {
    struct Zip_391  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next350 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_445) { .tag = Maybe_445_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref698 = ( (  next350 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_445) { .tag = Maybe_445_None_t } );
            }
            else if ( dref698.tag == Maybe_49_Just_t ) {
                ( (  next350 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_445_Just ) ( ( ( Tuple2_446_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env451 {
    ;
    int32_t  base949;
};

struct funenv451 {
    int32_t  (*fun) (  struct env451  ,    int32_t  ,    int32_t  );
    struct env451 env;
};

static  int32_t   reduce450 (    struct Range_380  iterable838 ,    int32_t  base840 ,   struct funenv451  fun842 ) {
    int32_t  x843 = (  base840 );
    struct RangeIter_382  it844 = ( (  into_dash_iter381 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref845 = ( (  next383 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_348_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_348_Just_t ) {
            struct funenv451  temp452 = (  fun842 );
            x843 = ( temp452.fun ( temp452.env ,  ( dref845 .stuff .Maybe_348_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp453;
    return (  temp453 );
}

static  int32_t   lam451 (   struct env451 env ,    int32_t  item953 ,    int32_t  x955 ) {
    return (  op_dash_mul89 ( (  x955 ) , ( env.base949 ) ) );
}

static  int32_t   pow449 (    int32_t  base949 ,    int32_t  p951 ) {
    struct env451 envinst451 = {
        .base949 =  base949 ,
    };
    return ( (  reduce450 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv451){ .fun = lam451, .env = envinst451 } ) ) );
}

static  struct Maybe_49   next448 (    struct IntStrIter_394 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1095 = ( (  pow449 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1096 = (  op_dash_div90 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    int32_t  upper_dash_mask1097 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1096 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1098 = (  op_dash_sub88 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast206 ) ( (  op_dash_add87 ( (  digit1098 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_371   next447 (    struct Zip_393 *  self694 ) {
    struct Zip_393  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next448 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next448 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next458 (    struct StrConcatIter_400 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next350 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next459 (    struct AppendIter_401 *  self802 ) {
    struct Maybe_49  dref803 = ( (  next318 ) ( ( & ( ( * (  self802 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next457 (    struct StrConcatIter_399 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next458 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next456 (    struct StrCaseIter_398 *  self1182 ) {
    struct StrCaseIter_398 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_398_StrCaseIter1_t ) {
        return ( (  next346 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_398_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_398_StrCaseIter2_t ) {
        return ( (  next457 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_398_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next455 (    struct StrConcatIter_397 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next456 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next454 (    struct Zip_396 *  self694 ) {
    struct Zip_396  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next455 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next455 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env465 {
    uint32_t  base949;
    ;
};

struct funenv465 {
    uint32_t  (*fun) (  struct env465  ,    int32_t  ,    uint32_t  );
    struct env465 env;
};

static  uint32_t   reduce464 (    struct Range_380  iterable838 ,    uint32_t  base840 ,   struct funenv465  fun842 ) {
    uint32_t  x843 = (  base840 );
    struct RangeIter_382  it844 = ( (  into_dash_iter381 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref845 = ( (  next383 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_348_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_348_Just_t ) {
            struct funenv465  temp466 = (  fun842 );
            x843 = ( temp466.fun ( temp466.env ,  ( dref845 .stuff .Maybe_348_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp467;
    return (  temp467 );
}

static  uint32_t   lam465 (   struct env465 env ,    int32_t  item953 ,    uint32_t  x955 ) {
    return (  op_dash_mul94 ( (  x955 ) , ( env.base949 ) ) );
}

static  uint32_t   pow463 (    uint32_t  base949 ,    int32_t  p951 ) {
    struct env465 envinst465 = {
        .base949 =  base949 ,
    };
    return ( (  reduce464 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv465){ .fun = lam465, .env = envinst465 } ) ) );
}

static  struct Maybe_49   next462 (    struct IntStrIter_405 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1095 = ( (  pow463 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1096 = (  op_dash_div95 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    uint32_t  upper_dash_mask1097 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1096 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1098 = (  op_dash_sub93 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast211 ) ( (  op_dash_add92 ( (  digit1098 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next461 (    struct StrConcatIter_404 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next462 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next460 (    struct Zip_403 *  self694 ) {
    struct Zip_403  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next461 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next461 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next476 (    struct StrConcatIter_415 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next475 (    struct StrConcatIter_414 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next476 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next474 (    struct StrConcatIter_413 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next475 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next448 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next473 (    struct StrConcatIter_412 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next474 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next472 (    struct StrConcatIter_411 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next473 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next471 (    struct StrConcatIter_410 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next472 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next470 (    struct StrCaseIter_409 *  self1182 ) {
    struct StrCaseIter_409 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_409_StrCaseIter1_t ) {
        return ( (  next346 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_409_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_409_StrCaseIter2_t ) {
        return ( (  next471 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_409_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next469 (    struct StrConcatIter_408 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next470 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next468 (    struct Zip_407 *  self694 ) {
    struct Zip_407  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next469 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next469 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next480 (    struct StrConcatIter_420 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next448 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next479 (    struct StrConcatIter_419 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next480 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next478 (    struct StrConcatIter_418 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next479 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next448 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next477 (    struct Zip_417 *  self694 ) {
    struct Zip_417  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next478 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next478 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env486 {
    size_t  base949;
    ;
};

struct funenv486 {
    size_t  (*fun) (  struct env486  ,    int32_t  ,    size_t  );
    struct env486 env;
};

static  size_t   reduce485 (    struct Range_380  iterable838 ,    size_t  base840 ,   struct funenv486  fun842 ) {
    size_t  x843 = (  base840 );
    struct RangeIter_382  it844 = ( (  into_dash_iter381 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref845 = ( (  next383 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_348_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_348_Just_t ) {
            struct funenv486  temp487 = (  fun842 );
            x843 = ( temp487.fun ( temp487.env ,  ( dref845 .stuff .Maybe_348_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp488;
    return (  temp488 );
}

static  size_t   lam486 (   struct env486 env ,    int32_t  item953 ,    size_t  x955 ) {
    return (  op_dash_mul100 ( (  x955 ) , ( env.base949 ) ) );
}

static  size_t   pow484 (    size_t  base949 ,    int32_t  p951 ) {
    struct env486 envinst486 = {
        .base949 =  base949 ,
    };
    return ( (  reduce485 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p951 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv486){ .fun = lam486, .env = envinst486 } ) ) );
}

static  struct Maybe_49   next483 (    struct IntStrIter_424 *  self1094 ) {
    if ( (  cmp80 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1095 = ( (  pow484 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1096 = (  op_dash_div101 ( ( ( * (  self1094 ) ) .f_int ) , (  trim_dash_down1095 ) ) );
    size_t  upper_dash_mask1097 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1096 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1098 = (  op_dash_sub99 ( (  upper1096 ) , (  upper_dash_mask1097 ) ) );
    (*  self1094 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1094 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1099 = ( (  cast212 ) ( (  op_dash_add98 ( (  digit1098 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1099 ) ) );
}

static  struct Maybe_49   next482 (    struct StrConcatIter_423 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next483 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next481 (    struct Zip_422 *  self694 ) {
    struct Zip_422  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next482 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next482 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_371   next489 (    struct Zip_426 *  self694 ) {
    struct Zip_426  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next480 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next480 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next492 (    struct StrConcatIter_430 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next480 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next491 (    struct StrConcatIter_429 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next492 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next448 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next490 (    struct Zip_428 *  self694 ) {
    struct Zip_428  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next491 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next491 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next496 (    struct StrConcatIter_435 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next482 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next459 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next495 (    struct StrCaseIter_434 *  self1182 ) {
    struct StrCaseIter_434 *  dref1183 = (  self1182 );
    if ( (* dref1183 ).tag == StrCaseIter_434_StrCaseIter1_t ) {
        return ( (  next346 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_434_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1183 ).tag == StrCaseIter_434_StrCaseIter2_t ) {
        return ( (  next496 ) ( ( & ( (* dref1183 ) .stuff .StrCaseIter_434_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next494 (    struct StrConcatIter_433 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next346 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next495 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next493 (    struct Zip_432 *  self694 ) {
    struct Zip_432  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next494 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next494 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next498 (    struct StrConcatIter_438 *  self1160 ) {
    struct Maybe_49  dref1161 = ( (  next496 ) ( ( & ( ( * (  self1160 ) ) .f_left ) ) ) );
    if ( dref1161.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1161 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1161.tag == Maybe_49_None_t ) {
        return ( (  next483 ) ( ( & ( ( * (  self1160 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_371   next497 (    struct Zip_437 *  self694 ) {
    struct Zip_437  copy695 = ( * (  self694 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref696 = ( (  next498 ) ( ( & ( (  copy695 ) .f_left_dash_it ) ) ) );
        if ( dref696.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
        }
        else if ( dref696.tag == Maybe_49_Just_t ) {
            struct Maybe_348  dref698 = ( (  next369 ) ( ( & ( (  copy695 ) .f_right_dash_it ) ) ) );
            if ( dref698.tag == Maybe_348_None_t ) {
                return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
            }
            else if ( dref698.tag == Maybe_348_Just_t ) {
                ( (  next498 ) ( ( & ( ( * (  self694 ) ) .f_left_dash_it ) ) ) );
                ( (  next369 ) ( ( & ( ( * (  self694 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_371_Just ) ( ( ( Tuple2_372_Tuple2 ) ( ( dref696 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref698 .stuff .Maybe_348_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_359   zip499 (    struct Slice_301  left702 ,    struct FromIter_360  right704 ) {
    struct SliceIter_300  left_dash_it705 = ( (  into_dash_iter304 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_359) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_363   zip500 (    struct Slice_5  left702 ,    struct FromIter_360  right704 ) {
    struct SliceIter_309  left_dash_it705 = ( (  into_dash_iter313 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_363) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_359   zip501 (    struct List_302  left702 ,    struct FromIter_360  right704 ) {
    struct SliceIter_300  left_dash_it705 = ( (  into_dash_iter303 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_359) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_363   zip502 (    struct List_3  left702 ,    struct FromIter_360  right704 ) {
    struct SliceIter_309  left_dash_it705 = ( (  into_dash_iter312 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_363) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct SliceIter_388   into_dash_iter504 (    struct Slice_389  self1457 ) {
    return ( (struct SliceIter_388) { .f_slice = (  self1457 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_387   zip503 (    struct Slice_389  left702 ,    struct FromIter_360  right704 ) {
    struct SliceIter_388  left_dash_it705 = ( (  into_dash_iter504 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_387) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct Zip_391   zip505 (    struct Slice_5  left702 ,    struct Slice_5  right704 ) {
    struct SliceIter_309  left_dash_it705 = ( (  into_dash_iter313 ) ( (  left702 ) ) );
    struct SliceIter_309  right_dash_it706 = ( (  into_dash_iter313 ) ( (  right704 ) ) );
    return ( (struct Zip_391) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct IntStrIter_394   into_dash_iter507 (    struct IntStrIter_394  self1091 ) {
    return (  self1091 );
}

static  struct Zip_393   zip506 (    struct IntStrIter_394  left702 ,    struct FromIter_360  right704 ) {
    struct IntStrIter_394  left_dash_it705 = ( (  into_dash_iter507 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_393) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_397   into_dash_iter509 (    struct StrConcatIter_397  self1157 ) {
    return (  self1157 );
}

static  struct Zip_396   zip508 (    struct StrConcatIter_397  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_397  left_dash_it705 = ( (  into_dash_iter509 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_396) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_404   into_dash_iter511 (    struct StrConcatIter_404  self1157 ) {
    return (  self1157 );
}

static  struct Zip_403   zip510 (    struct StrConcatIter_404  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_404  left_dash_it705 = ( (  into_dash_iter511 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_403) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_408   into_dash_iter513 (    struct StrConcatIter_408  self1157 ) {
    return (  self1157 );
}

static  struct Zip_407   zip512 (    struct StrConcatIter_408  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_408  left_dash_it705 = ( (  into_dash_iter513 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_407) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_418   into_dash_iter515 (    struct StrConcatIter_418  self1157 ) {
    return (  self1157 );
}

static  struct Zip_417   zip514 (    struct StrConcatIter_418  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_418  left_dash_it705 = ( (  into_dash_iter515 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_423   into_dash_iter517 (    struct StrConcatIter_423  self1157 ) {
    return (  self1157 );
}

static  struct Zip_422   zip516 (    struct StrConcatIter_423  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_423  left_dash_it705 = ( (  into_dash_iter517 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_422) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_420   into_dash_iter519 (    struct StrConcatIter_420  self1157 ) {
    return (  self1157 );
}

static  struct Zip_426   zip518 (    struct StrConcatIter_420  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_420  left_dash_it705 = ( (  into_dash_iter519 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_426) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_429   into_dash_iter521 (    struct StrConcatIter_429  self1157 ) {
    return (  self1157 );
}

static  struct Zip_428   zip520 (    struct StrConcatIter_429  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_429  left_dash_it705 = ( (  into_dash_iter521 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_428) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_433   into_dash_iter523 (    struct StrConcatIter_433  self1157 ) {
    return (  self1157 );
}

static  struct Zip_432   zip522 (    struct StrConcatIter_433  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_433  left_dash_it705 = ( (  into_dash_iter523 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_432) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

static  struct StrConcatIter_438   into_dash_iter525 (    struct StrConcatIter_438  self1157 ) {
    return (  self1157 );
}

static  struct Zip_437   zip524 (    struct StrConcatIter_438  left702 ,    struct FromIter_360  right704 ) {
    struct StrConcatIter_438  left_dash_it705 = ( (  into_dash_iter525 ) ( (  left702 ) ) );
    struct FromIter_360  right_dash_it706 = ( (  into_dash_iter385 ) ( (  right704 ) ) );
    return ( (struct Zip_437) { .f_left_dash_it = (  left_dash_it705 ) , .f_right_dash_it = (  right_dash_it706 ) } );
}

struct TakeWhile_527 {
    struct Scanner_308  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_527   into_dash_iter526 (    struct TakeWhile_527  self741 ) {
    return (  self741 );
}

struct TakeWhile_529 {
    struct SliceIter_309  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_529   into_dash_iter528 (    struct TakeWhile_529  self741 ) {
    return (  self741 );
}

struct DropWhile_534 {
    struct SliceIter_309  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_533 {
    struct DropWhile_534  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_532 {
    struct DropWhile_533  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_531 {
    struct DropWhile_532  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_531   into_dash_iter530 (    struct TakeWhile_531  self741 ) {
    return (  self741 );
}

struct TakeWhile_536 {
    struct DropWhile_532  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_536   into_dash_iter535 (    struct TakeWhile_536  self741 ) {
    return (  self741 );
}

struct TakeWhile_538 {
    struct DropWhile_534  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_538   into_dash_iter537 (    struct TakeWhile_538  self741 ) {
    return (  self741 );
}

static  struct Maybe_49   next540 (    struct Scanner_308 *  self2421 ) {
    return ( (  next350 ) ( ( & ( ( * (  self2421 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next539 (    struct TakeWhile_527 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next540 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next541 (    struct TakeWhile_529 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next350 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next545 (    struct DropWhile_534 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next350 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next350 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next544 (    struct DropWhile_533 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next545 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next545 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next543 (    struct DropWhile_532 *  self759 ) {
    if ( ( ( * (  self759 ) ) .f_finished ) ) {
        return ( (  next544 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref760 = ( (  next544 ) ( ( & ( ( * (  self759 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next542 (    struct TakeWhile_531 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next543 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next546 (    struct TakeWhile_536 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next543 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next547 (    struct TakeWhile_538 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next545 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

struct TakeWhile_549 {
    struct DropWhile_532  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next548 (    struct TakeWhile_549 *  self744 ) {
    struct Maybe_49  mx745 = ( (  next543 ) ( ( & ( ( * (  self744 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_527   take_dash_while550 (    struct Scanner_308 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_527) { .f_it = ( (  into_dash_iter307 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_529   take_dash_while551 (    struct List_3 *  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_529) { .f_it = ( (  into_dash_iter311 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_534   into_dash_iter553 (    struct DropWhile_534  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_538   take_dash_while552 (    struct DropWhile_534  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_538) { .f_it = ( (  into_dash_iter553 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_532   into_dash_iter555 (    struct DropWhile_532  self756 ) {
    return (  self756 );
}

static  struct TakeWhile_531   take_dash_while554 (    struct DropWhile_532  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_531) { .f_it = ( (  into_dash_iter555 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_536   take_dash_while556 (    struct DropWhile_532  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_536) { .f_it = ( (  into_dash_iter555 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct TakeWhile_549   take_dash_while557 (    struct DropWhile_532  it750 ,    bool (*  pred752 )(    char  ) ) {
    return ( (struct TakeWhile_549) { .f_it = ( (  into_dash_iter555 ) ( (  it750 ) ) ) , .f_pred = (  pred752 ) } );
}

static  struct DropWhile_533   into_dash_iter558 (    struct DropWhile_533  self756 ) {
    return (  self756 );
}

static  struct DropWhile_533   drop_dash_while559 (    struct DropWhile_534  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_533) { .f_it = ( (  into_dash_iter553 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_532   drop_dash_while560 (    struct DropWhile_533  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_532) { .f_it = ( (  into_dash_iter558 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct SliceIter_309   into_dash_iter562 (    struct DynStr_134  self1596 ) {
    return ( (  into_dash_iter313 ) ( ( (  self1596 ) .f_contents ) ) );
}

static  struct DropWhile_534   drop_dash_while561 (    struct DynStr_134  it764 ,    bool (*  pred766 )(    char  ) ) {
    return ( (struct DropWhile_534) { .f_it = ( (  into_dash_iter562 ) ( (  it764 ) ) ) , .f_pred = (  pred766 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_401   append563 (    enum EmptyIter_316  it786 ,    char  e788 ) {
    return ( (struct AppendIter_401) { .f_it = ( (  into_dash_iter317 ) ( (  it786 ) ) ) , .f_elem = (  e788 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_401   cons564 (    enum EmptyIter_316  it791 ,    char  e793 ) {
    return ( (  append563 ) ( (  it791 ) ,  (  e793 ) ) );
}

static  struct AppendIter_401   single565 (    char  e796 ) {
    return ( (  cons564 ) ( ( (  nil315 ) ( ) ) ,  (  e796 ) ) );
}

static  struct AppendIter_401   into_dash_iter566 (    struct AppendIter_401  self799 ) {
    return (  self799 );
}

struct Key_571 {
    enum {
        Key_571_Escape_t,
        Key_571_Enter_t,
        Key_571_Tab_t,
        Key_571_Backspace_t,
        Key_571_Char_t,
        Key_571_Ctrl_t,
        Key_571_Up_t,
        Key_571_Down_t,
        Key_571_Left_t,
        Key_571_Right_t,
        Key_571_Home_t,
        Key_571_End_t,
        Key_571_PageUp_t,
        Key_571_PageDown_t,
        Key_571_Delete_t,
        Key_571_Insert_t,
        Key_571_F1_t,
        Key_571_F2_t,
        Key_571_F3_t,
        Key_571_F4_t,
        Key_571_F5_t,
        Key_571_F6_t,
        Key_571_F7_t,
        Key_571_F8_t,
        Key_571_F9_t,
        Key_571_F10_t,
        Key_571_F11_t,
        Key_571_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_571_Char_s;
        struct {
            char  field0;
        } Key_571_Ctrl_s;
    } stuff;
};

static struct Key_571 Key_571_Char (  char  field0 ) {
    return ( struct Key_571 ) { .tag = Key_571_Char_t, .stuff = { .Key_571_Char_s = { .field0 = field0 } } };
};

static struct Key_571 Key_571_Ctrl (  char  field0 ) {
    return ( struct Key_571 ) { .tag = Key_571_Ctrl_t, .stuff = { .Key_571_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_572 {
    enum MouseButton_149  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_570 {
    enum {
        InputEvent_570_Key_t,
        InputEvent_570_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_571  field0;
        } InputEvent_570_Key_s;
        struct {
            struct MouseEvent_572  field0;
        } InputEvent_570_Mouse_s;
    } stuff;
};

static struct InputEvent_570 InputEvent_570_Key (  struct Key_571  field0 ) {
    return ( struct InputEvent_570 ) { .tag = InputEvent_570_Key_t, .stuff = { .InputEvent_570_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_570 InputEvent_570_Mouse (  struct MouseEvent_572  field0 ) {
    return ( struct InputEvent_570 ) { .tag = InputEvent_570_Mouse_t, .stuff = { .InputEvent_570_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_569 {
    enum {
        Maybe_569_None_t,
        Maybe_569_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_570  field0;
        } Maybe_569_Just_s;
    } stuff;
};

static struct Maybe_569 Maybe_569_Just (  struct InputEvent_570  field0 ) {
    return ( struct Maybe_569 ) { .tag = Maybe_569_Just_t, .stuff = { .Maybe_569_Just_s = { .field0 = field0 } } };
};

struct FunIter_568 {
    struct Maybe_569 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_568   into_dash_iter567 (    struct FunIter_568  self808 ) {
    return (  self808 );
}

static  struct Maybe_569   next573 (    struct FunIter_568 *  self811 ) {
    if ( ( ( * (  self811 ) ) .f_finished ) ) {
        return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
    }
    struct Maybe_569  dref812 = ( ( ( * (  self811 ) ) .f_fun ) ( ) );
    if ( dref812.tag == Maybe_569_Just_t ) {
        return ( ( Maybe_569_Just ) ( ( dref812 .stuff .Maybe_569_Just_s .field0 ) ) );
    }
    else if ( dref812.tag == Maybe_569_None_t ) {
        (*  self811 ) .f_finished = ( true );
        return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
    }
}

static  struct FunIter_568   from_dash_function574 (    struct Maybe_569 (*  fun816 )(  ) ) {
    return ( (struct FunIter_568) { .f_fun = (  fun816 ) , .f_finished = ( false ) } );
}

struct env576 {
    ;
    struct Slice_301  new_dash_slice1834;
    ;
};

struct funenv576 {
    enum Unit_13  (*fun) (  struct env576  ,    struct Tuple2_366  );
    struct env576 env;
};

static  enum Unit_13   for_dash_each575 (    struct Zip_359  iterable819 ,   struct funenv576  fun821 ) {
    struct Zip_359  temp577 = ( (  into_dash_iter375 ) ( (  iterable819 ) ) );
    struct Zip_359 *  it822 = ( &temp577 );
    while ( ( true ) ) {
        struct Maybe_365  dref823 = ( (  next367 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_365_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_365_Just_t ) {
            struct funenv576  temp578 = (  fun821 );
            ( temp578.fun ( temp578.env ,  ( dref823 .stuff .Maybe_365_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env580 {
    struct List_3 *  list1881;
    struct env325 envinst325;
};

struct funenv580 {
    enum Unit_13  (*fun) (  struct env580  ,    char  );
    struct env580 env;
};

static  enum Unit_13   for_dash_each579 (    struct DynStr_134  iterable819 ,   struct funenv580  fun821 ) {
    struct SliceIter_309  temp581 = ( (  into_dash_iter562 ) ( (  iterable819 ) ) );
    struct SliceIter_309 *  it822 = ( &temp581 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next350 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv580  temp582 = (  fun821 );
            ( temp582.fun ( temp582.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env584 {
    ;
    struct Slice_5  new_dash_slice1834;
    ;
};

struct funenv584 {
    enum Unit_13  (*fun) (  struct env584  ,    struct Tuple2_372  );
    struct env584 env;
};

static  enum Unit_13   for_dash_each583 (    struct Zip_363  iterable819 ,   struct funenv584  fun821 ) {
    struct Zip_363  temp585 = ( (  into_dash_iter377 ) ( (  iterable819 ) ) );
    struct Zip_363 *  it822 = ( &temp585 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next373 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv584  temp586 = (  fun821 );
            ( temp586.fun ( temp586.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env590 {
    ;
    size_t  starting_dash_size1828;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1829;
};

struct funenv590 {
    enum Unit_13  (*fun) (  struct env590  ,    struct List_302 *  );
    struct env590 env;
};

struct env589 {
    ;
    ;
    ;
    struct env590 envinst590;
    ;
    ;
};

struct funenv589 {
    enum Unit_13  (*fun) (  struct env589  ,    struct List_302 *  ,    struct List_3  );
    struct env589 env;
};

struct env588 {
    struct List_302 *  list1881;
    struct env589 envinst589;
};

struct funenv588 {
    enum Unit_13  (*fun) (  struct env588  ,    struct List_3  );
    struct env588 env;
};

static  enum Unit_13   for_dash_each587 (    struct Map_320  iterable819 ,   struct funenv588  fun821 ) {
    struct Map_320  temp591 = ( (  into_dash_iter319 ) ( (  iterable819 ) ) );
    struct Map_320 *  it822 = ( &temp591 );
    while ( ( true ) ) {
        struct Maybe_334  dref823 = ( (  next333 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_334_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_334_Just_t ) {
            struct funenv588  temp592 = (  fun821 );
            ( temp592.fun ( temp592.env ,  ( dref823 .stuff .Maybe_334_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_595 {
    struct List_3  f_chars;
};

struct env594 {
    struct StrBuilder_595 *  builder2120;
    struct env325 envinst325;
};

struct funenv594 {
    enum Unit_13  (*fun) (  struct env594  ,    char  );
    struct env594 env;
};

static  struct ConstStrIter_329   into_dash_iter597 (    struct ConstStrIter_329  self1070 ) {
    return (  self1070 );
}

static  enum Unit_13   for_dash_each593 (    struct ConstStrIter_329  iterable819 ,   struct funenv594  fun821 ) {
    struct ConstStrIter_329  temp596 = ( (  into_dash_iter597 ) ( (  iterable819 ) ) );
    struct ConstStrIter_329 *  it822 = ( &temp596 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next346 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv594  temp598 = (  fun821 );
            ( temp598.fun ( temp598.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_601 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env600 {
    ;
    struct Slice_601  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv600 {
    enum Unit_13  (*fun) (  struct env600  ,    int32_t  );
    struct env600 env;
};

static  enum Unit_13   for_dash_each599 (    struct Range_380  iterable819 ,   struct funenv600  fun821 ) {
    struct RangeIter_382  temp602 = ( (  into_dash_iter381 ) ( (  iterable819 ) ) );
    struct RangeIter_382 *  it822 = ( &temp602 );
    while ( ( true ) ) {
        struct Maybe_348  dref823 = ( (  next383 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_348_Just_t ) {
            struct funenv600  temp603 = (  fun821 );
            ( temp603.fun ( temp603.env ,  ( dref823 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env605 {
    ;
    struct Slice_601  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv605 {
    enum Unit_13  (*fun) (  struct env605  ,    int32_t  );
    struct env605 env;
};

static  enum Unit_13   for_dash_each604 (    struct Range_380  iterable819 ,   struct funenv605  fun821 ) {
    struct RangeIter_382  temp606 = ( (  into_dash_iter381 ) ( (  iterable819 ) ) );
    struct RangeIter_382 *  it822 = ( &temp606 );
    while ( ( true ) ) {
        struct Maybe_348  dref823 = ( (  next383 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_348_Just_t ) {
            struct funenv605  temp607 = (  fun821 );
            ( temp607.fun ( temp607.env ,  ( dref823 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env609 {
    ;
    struct Scanner_308 *  it925;
};

struct funenv609 {
    struct Maybe_49  (*fun) (  struct env609  ,    int32_t  );
    struct env609 env;
};

static  enum Unit_13   for_dash_each608 (    struct Range_380  iterable819 ,   struct funenv609  fun821 ) {
    struct RangeIter_382  temp610 = ( (  into_dash_iter381 ) ( (  iterable819 ) ) );
    struct RangeIter_382 *  it822 = ( &temp610 );
    while ( ( true ) ) {
        struct Maybe_348  dref823 = ( (  next383 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_348_Just_t ) {
            struct funenv609  temp611 = (  fun821 );
            ( temp611.fun ( temp611.env ,  ( dref823 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env613 {
    struct Slice_301  dest1488;
    ;
    ;
};

struct funenv613 {
    enum Unit_13  (*fun) (  struct env613  ,    struct Tuple2_366  );
    struct env613 env;
};

static  enum Unit_13   for_dash_each612 (    struct Zip_359  iterable819 ,   struct funenv613  fun821 ) {
    struct Zip_359  temp614 = ( (  into_dash_iter375 ) ( (  iterable819 ) ) );
    struct Zip_359 *  it822 = ( &temp614 );
    while ( ( true ) ) {
        struct Maybe_365  dref823 = ( (  next367 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_365_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_365_Just_t ) {
            struct funenv613  temp615 = (  fun821 );
            ( temp615.fun ( temp615.env ,  ( dref823 .stuff .Maybe_365_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env617 {
    ;
    ;
    ;
    struct List_302 *  list1853;
    ;
};

struct funenv617 {
    enum Unit_13  (*fun) (  struct env617  ,    struct Tuple2_366  );
    struct env617 env;
};

static  enum Unit_13   for_dash_each616 (    struct Drop_358  iterable819 ,   struct funenv617  fun821 ) {
    struct Drop_358  temp618 = ( (  into_dash_iter357 ) ( (  iterable819 ) ) );
    struct Drop_358 *  it822 = ( &temp618 );
    while ( ( true ) ) {
        struct Maybe_365  dref823 = ( (  next364 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_365_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_365_Just_t ) {
            struct funenv617  temp619 = (  fun821 );
            ( temp619.fun ( temp619.env ,  ( dref823 .stuff .Maybe_365_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env621 {
    struct List_3 *  list1881;
    struct env325 envinst325;
};

struct funenv621 {
    enum Unit_13  (*fun) (  struct env621  ,    char  );
    struct env621 env;
};

static  enum Unit_13   for_dash_each620 (    struct Slice_5  iterable819 ,   struct funenv621  fun821 ) {
    struct SliceIter_309  temp622 = ( (  into_dash_iter313 ) ( (  iterable819 ) ) );
    struct SliceIter_309 *  it822 = ( &temp622 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next350 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv621  temp623 = (  fun821 );
            ( temp623.fun ( temp623.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env625 {
    struct List_3 *  list1881;
    struct env325 envinst325;
};

struct funenv625 {
    enum Unit_13  (*fun) (  struct env625  ,    char  );
    struct env625 env;
};

static  enum Unit_13   for_dash_each624 (    struct List_3 *  iterable819 ,   struct funenv625  fun821 ) {
    struct SliceIter_309  temp626 = ( (  into_dash_iter311 ) ( (  iterable819 ) ) );
    struct SliceIter_309 *  it822 = ( &temp626 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next350 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv625  temp627 = (  fun821 );
            ( temp627.fun ( temp627.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env629 {
    struct Slice_5  dest1488;
    ;
    ;
};

struct funenv629 {
    enum Unit_13  (*fun) (  struct env629  ,    struct Tuple2_372  );
    struct env629 env;
};

static  enum Unit_13   for_dash_each628 (    struct Zip_363  iterable819 ,   struct funenv629  fun821 ) {
    struct Zip_363  temp630 = ( (  into_dash_iter377 ) ( (  iterable819 ) ) );
    struct Zip_363 *  it822 = ( &temp630 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next373 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv629  temp631 = (  fun821 );
            ( temp631.fun ( temp631.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env633 {
    ;
    ;
    ;
    struct List_3 *  list1853;
    ;
};

struct funenv633 {
    enum Unit_13  (*fun) (  struct env633  ,    struct Tuple2_372  );
    struct env633 env;
};

static  enum Unit_13   for_dash_each632 (    struct Drop_362  iterable819 ,   struct funenv633  fun821 ) {
    struct Drop_362  temp634 = ( (  into_dash_iter361 ) ( (  iterable819 ) ) );
    struct Drop_362 *  it822 = ( &temp634 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next370 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv633  temp635 = (  fun821 );
            ( temp635.fun ( temp635.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env637 {
    struct StrBuilder_595 *  builder2120;
    struct env325 envinst325;
};

struct funenv637 {
    enum Unit_13  (*fun) (  struct env637  ,    char  );
    struct env637 env;
};

static  enum Unit_13   for_dash_each636 (    struct AppendIter_401  iterable819 ,   struct funenv637  fun821 ) {
    struct AppendIter_401  temp638 = ( (  into_dash_iter566 ) ( (  iterable819 ) ) );
    struct AppendIter_401 *  it822 = ( &temp638 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next459 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv637  temp639 = (  fun821 );
            ( temp639.fun ( temp639.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env641 {
    ;
    struct Slice_389  new_dash_slice1834;
    ;
};

struct funenv641 {
    enum Unit_13  (*fun) (  struct env641  ,    struct Tuple2_441  );
    struct env641 env;
};

static  enum Unit_13   for_dash_each640 (    struct Zip_387  iterable819 ,   struct funenv641  fun821 ) {
    struct Zip_387  temp642 = ( (  into_dash_iter386 ) ( (  iterable819 ) ) );
    struct Zip_387 *  it822 = ( &temp642 );
    while ( ( true ) ) {
        struct Maybe_440  dref823 = ( (  next439 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_440_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_440_Just_t ) {
            struct funenv641  temp643 = (  fun821 );
            ( temp643.fun ( temp643.env ,  ( dref823 .stuff .Maybe_440_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env645 {
    enum CAllocator_4  al2946;
    ;
};

struct funenv645 {
    enum Unit_13  (*fun) (  struct env645  ,    struct Action_168  );
    struct env645 env;
};

static  enum Unit_13   for_dash_each644 (    struct Slice_389  iterable819 ,   struct funenv645  fun821 ) {
    struct SliceIter_388  temp646 = ( (  into_dash_iter504 ) ( (  iterable819 ) ) );
    struct SliceIter_388 *  it822 = ( &temp646 );
    while ( ( true ) ) {
        struct Maybe_442  dref823 = ( (  next443 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_442_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_442_Just_t ) {
            struct funenv645  temp647 = (  fun821 );
            ( temp647.fun ( temp647.env ,  ( dref823 .stuff .Maybe_442_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env649 {
    struct List_3 *  list1881;
    struct env325 envinst325;
};

struct funenv649 {
    enum Unit_13  (*fun) (  struct env649  ,    char  );
    struct env649 env;
};

static  enum Unit_13   for_dash_each648 (    struct TakeWhile_529  iterable819 ,   struct funenv649  fun821 ) {
    struct TakeWhile_529  temp650 = ( (  into_dash_iter528 ) ( (  iterable819 ) ) );
    struct TakeWhile_529 *  it822 = ( &temp650 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next541 ) ( (  it822 ) ) );
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

struct env654 {
    struct env325 envinst325;
    ;
    ;
};

struct funenv654 {
    enum Unit_13  (*fun) (  struct env654  ,    struct StrBuilder_595 *  ,    char  );
    struct env654 env;
};

struct env653 {
    struct StrBuilder_595 *  sb3177;
    struct env654 envinst654;
};

struct funenv653 {
    enum Unit_13  (*fun) (  struct env653  ,    char  );
    struct env653 env;
};

static  enum Unit_13   for_dash_each652 (    struct List_3  iterable819 ,   struct funenv653  fun821 ) {
    struct SliceIter_309  temp655 = ( (  into_dash_iter312 ) ( (  iterable819 ) ) );
    struct SliceIter_309 *  it822 = ( &temp655 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next350 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv653  temp656 = (  fun821 );
            ( temp656.fun ( temp656.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env658 {
    struct StrBuilder_595 *  builder2120;
    struct env325 envinst325;
};

struct funenv658 {
    enum Unit_13  (*fun) (  struct env658  ,    char  );
    struct env658 env;
};

static  enum Unit_13   for_dash_each657 (    struct TakeWhile_531  iterable819 ,   struct funenv658  fun821 ) {
    struct TakeWhile_531  temp659 = ( (  into_dash_iter530 ) ( (  iterable819 ) ) );
    struct TakeWhile_531 *  it822 = ( &temp659 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next542 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv658  temp660 = (  fun821 );
            ( temp660.fun ( temp660.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env662 {
    struct StrBuilder_595 *  builder2120;
    struct env325 envinst325;
};

struct funenv662 {
    enum Unit_13  (*fun) (  struct env662  ,    char  );
    struct env662 env;
};

static  enum Unit_13   for_dash_each661 (    struct TakeWhile_536  iterable819 ,   struct funenv662  fun821 ) {
    struct TakeWhile_536  temp663 = ( (  into_dash_iter535 ) ( (  iterable819 ) ) );
    struct TakeWhile_536 *  it822 = ( &temp663 );
    while ( ( true ) ) {
        struct Maybe_49  dref823 = ( (  next546 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_49_Just_t ) {
            struct funenv662  temp664 = (  fun821 );
            ( temp664.fun ( temp664.env ,  ( dref823 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_666 {
    struct Slice_301  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_666   into_dash_iter668 (    struct SliceAddressIter_666  self1478 ) {
    return (  self1478 );
}

struct Maybe_669 {
    enum {
        Maybe_669_None_t,
        Maybe_669_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_669_Just_s;
    } stuff;
};

static struct Maybe_669 Maybe_669_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_669 ) { .tag = Maybe_669_Just_t, .stuff = { .Maybe_669_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_669   next670 (    struct SliceAddressIter_666 *  self1481 ) {
    size_t  off1482 = ( ( * (  self1481 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1481 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_669) { .tag = Maybe_669_None_t } );
    }
    struct List_3 *  elem1483 = ( (  offset_dash_ptr159 ) ( ( ( ( * (  self1481 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1482 ) ) ) ) );
    (*  self1481 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1482 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_669_Just ) ( (  elem1483 ) ) );
}

static  enum Unit_13   for_dash_each665 (    struct SliceAddressIter_666  iterable819 ,    enum Unit_13 (*  fun821 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_666  temp667 = ( (  into_dash_iter668 ) ( (  iterable819 ) ) );
    struct SliceAddressIter_666 *  it822 = ( &temp667 );
    while ( ( true ) ) {
        struct Maybe_669  dref823 = ( (  next670 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_669_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_669_Just_t ) {
            ( (  fun821 ) ( ( dref823 .stuff .Maybe_669_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env672 {
    ;
    struct Slice_601  s1529;
    struct Cell_58 (*  fun1531 )(    struct Cell_58  );
    ;
    ;
};

struct funenv672 {
    enum Unit_13  (*fun) (  struct env672  ,    int32_t  );
    struct env672 env;
};

static  enum Unit_13   for_dash_each671 (    struct Range_380  iterable819 ,   struct funenv672  fun821 ) {
    struct RangeIter_382  temp673 = ( (  into_dash_iter381 ) ( (  iterable819 ) ) );
    struct RangeIter_382 *  it822 = ( &temp673 );
    while ( ( true ) ) {
        struct Maybe_348  dref823 = ( (  next383 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_348_Just_t ) {
            struct funenv672  temp674 = (  fun821 );
            ( temp674.fun ( temp674.env ,  ( dref823 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_679 {
    ColorPalette_679_Palette8,
    ColorPalette_679_Palette16,
    ColorPalette_679_Palette256,
    ColorPalette_679_PaletteRGB,
};

struct Tui_678 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_679  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_141  f_orig_dash_termios;
};

struct Screen_677 {
    enum CAllocator_4  f_al;
    struct Tui_678 *  f_tui;
    struct Slice_601  f_current;
    struct Slice_601  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_59  f_default_dash_fg;
    struct Color_59  f_default_dash_bg;
};

struct env676 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv676 {
    enum Unit_13  (*fun) (  struct env676  ,    struct Tuple2_372  );
    struct env676 env;
};

static  enum Unit_13   for_dash_each675 (    struct Zip_393  iterable819 ,   struct funenv676  fun821 ) {
    struct Zip_393  temp680 = ( (  into_dash_iter392 ) ( (  iterable819 ) ) );
    struct Zip_393 *  it822 = ( &temp680 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next447 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv676  temp681 = (  fun821 );
            ( temp681.fun ( temp681.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env683 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv683 {
    enum Unit_13  (*fun) (  struct env683  ,    struct Tuple2_372  );
    struct env683 env;
};

static  enum Unit_13   for_dash_each682 (    struct Zip_396  iterable819 ,   struct funenv683  fun821 ) {
    struct Zip_396  temp684 = ( (  into_dash_iter395 ) ( (  iterable819 ) ) );
    struct Zip_396 *  it822 = ( &temp684 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next454 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv683  temp685 = (  fun821 );
            ( temp685.fun ( temp685.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env687 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv687 {
    enum Unit_13  (*fun) (  struct env687  ,    struct Tuple2_372  );
    struct env687 env;
};

static  enum Unit_13   for_dash_each686 (    struct Zip_403  iterable819 ,   struct funenv687  fun821 ) {
    struct Zip_403  temp688 = ( (  into_dash_iter402 ) ( (  iterable819 ) ) );
    struct Zip_403 *  it822 = ( &temp688 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next460 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv687  temp689 = (  fun821 );
            ( temp689.fun ( temp689.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env691 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv691 {
    enum Unit_13  (*fun) (  struct env691  ,    struct Tuple2_372  );
    struct env691 env;
};

static  enum Unit_13   for_dash_each690 (    struct Zip_407  iterable819 ,   struct funenv691  fun821 ) {
    struct Zip_407  temp692 = ( (  into_dash_iter406 ) ( (  iterable819 ) ) );
    struct Zip_407 *  it822 = ( &temp692 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next468 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv691  temp693 = (  fun821 );
            ( temp693.fun ( temp693.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env695 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv695 {
    enum Unit_13  (*fun) (  struct env695  ,    struct Tuple2_372  );
    struct env695 env;
};

static  enum Unit_13   for_dash_each694 (    struct Zip_417  iterable819 ,   struct funenv695  fun821 ) {
    struct Zip_417  temp696 = ( (  into_dash_iter416 ) ( (  iterable819 ) ) );
    struct Zip_417 *  it822 = ( &temp696 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next477 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv695  temp697 = (  fun821 );
            ( temp697.fun ( temp697.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env699 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv699 {
    enum Unit_13  (*fun) (  struct env699  ,    struct Tuple2_372  );
    struct env699 env;
};

static  enum Unit_13   for_dash_each698 (    struct Zip_422  iterable819 ,   struct funenv699  fun821 ) {
    struct Zip_422  temp700 = ( (  into_dash_iter421 ) ( (  iterable819 ) ) );
    struct Zip_422 *  it822 = ( &temp700 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next481 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv699  temp701 = (  fun821 );
            ( temp701.fun ( temp701.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env703 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv703 {
    enum Unit_13  (*fun) (  struct env703  ,    struct Tuple2_372  );
    struct env703 env;
};

static  enum Unit_13   for_dash_each702 (    struct Zip_426  iterable819 ,   struct funenv703  fun821 ) {
    struct Zip_426  temp704 = ( (  into_dash_iter425 ) ( (  iterable819 ) ) );
    struct Zip_426 *  it822 = ( &temp704 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next489 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv703  temp705 = (  fun821 );
            ( temp705.fun ( temp705.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env707 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv707 {
    enum Unit_13  (*fun) (  struct env707  ,    struct Tuple2_372  );
    struct env707 env;
};

static  enum Unit_13   for_dash_each706 (    struct Zip_428  iterable819 ,   struct funenv707  fun821 ) {
    struct Zip_428  temp708 = ( (  into_dash_iter427 ) ( (  iterable819 ) ) );
    struct Zip_428 *  it822 = ( &temp708 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next490 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv707  temp709 = (  fun821 );
            ( temp709.fun ( temp709.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env711 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv711 {
    enum Unit_13  (*fun) (  struct env711  ,    struct Tuple2_372  );
    struct env711 env;
};

static  enum Unit_13   for_dash_each710 (    struct Zip_396  iterable819 ,   struct funenv711  fun821 ) {
    struct Zip_396  temp712 = ( (  into_dash_iter395 ) ( (  iterable819 ) ) );
    struct Zip_396 *  it822 = ( &temp712 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next454 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv711  temp713 = (  fun821 );
            ( temp713.fun ( temp713.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env715 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv715 {
    enum Unit_13  (*fun) (  struct env715  ,    struct Tuple2_372  );
    struct env715 env;
};

static  enum Unit_13   for_dash_each714 (    struct Zip_396  iterable819 ,   struct funenv715  fun821 ) {
    struct Zip_396  temp716 = ( (  into_dash_iter395 ) ( (  iterable819 ) ) );
    struct Zip_396 *  it822 = ( &temp716 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next454 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv715  temp717 = (  fun821 );
            ( temp717.fun ( temp717.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env719 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv719 {
    enum Unit_13  (*fun) (  struct env719  ,    struct Tuple2_372  );
    struct env719 env;
};

static  enum Unit_13   for_dash_each718 (    struct Zip_432  iterable819 ,   struct funenv719  fun821 ) {
    struct Zip_432  temp720 = ( (  into_dash_iter431 ) ( (  iterable819 ) ) );
    struct Zip_432 *  it822 = ( &temp720 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next493 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv719  temp721 = (  fun821 );
            ( temp721.fun ( temp721.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env723 {
    int32_t  y2650;
    ;
    struct Screen_677 *  screen2644;
    ;
    int32_t  x2653;
};

struct funenv723 {
    enum Unit_13  (*fun) (  struct env723  ,    struct Tuple2_372  );
    struct env723 env;
};

static  enum Unit_13   for_dash_each722 (    struct Zip_437  iterable819 ,   struct funenv723  fun821 ) {
    struct Zip_437  temp724 = ( (  into_dash_iter436 ) ( (  iterable819 ) ) );
    struct Zip_437 *  it822 = ( &temp724 );
    while ( ( true ) ) {
        struct Maybe_371  dref823 = ( (  next497 ) ( (  it822 ) ) );
        if ( dref823.tag == Maybe_371_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref823.tag == Maybe_371_Just_t ) {
            struct funenv723  temp725 = (  fun821 );
            ( temp725.fun ( temp725.env ,  ( dref823 .stuff .Maybe_371_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_727 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_727   into_dash_iter728 (    struct SmolArray_103  self1678 ) {
    return ( (struct SmolArrayIter_727) { .f_backing = (  self1678 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_734 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_734 StrConcat_734_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_734 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_733 {
    struct StrConcat_734  field0;
    char  field1;
};

static struct StrConcat_733 StrConcat_733_StrConcat (  struct StrConcat_734  field0 ,  char  field1 ) {
    return ( struct StrConcat_733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_737 {
    const char*  field0;
    struct StrConcat_733  field1;
};

static struct StrConcat_737 StrConcat_737_StrConcat (  const char*  field0 ,  struct StrConcat_733  field1 ) {
    return ( struct StrConcat_737 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_736 {
    struct StrConcat_737  field0;
    char  field1;
};

static struct StrConcat_736 StrConcat_736_StrConcat (  struct StrConcat_737  field0 ,  char  field1 ) {
    return ( struct StrConcat_736 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str741 (    int32_t  self1106 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1106 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str740 (    struct StrConcat_734  self1169 ) {
    struct StrConcat_734  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str741 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str739 (    struct StrConcat_733  self1169 ) {
    struct StrConcat_733  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str740 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str738 (    struct StrConcat_737  self1169 ) {
    struct StrConcat_737  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str739 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str735 (    struct StrConcat_736  self1169 ) {
    struct StrConcat_736  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str738 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic732 (    struct StrConcat_733  errmsg1346 ) {
    ( (  print_dash_str735 ) ( ( ( StrConcat_736_StrConcat ) ( ( ( StrConcat_737_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr731 (    struct Array_104 *  arr1640 ,    size_t  i1643 ) {
    if ( ( (  cmp9 ( (  i1643 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1643 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1643 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1644 = ( ( (  cast_dash_ptr224 ) ( (  arr1640 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1644 ) ,  ( (int64_t ) (  i1643 ) ) ) );
}

static  uint32_t   get730 (    struct Array_104 *  arr1647 ,    size_t  i1650 ) {
    return ( * ( (  get_dash_ptr731 ) ( (  arr1647 ) ,  (  i1650 ) ) ) );
}

static  struct Maybe_345   next729 (    struct SmolArrayIter_727 *  self1685 ) {
    if ( (  cmp9 ( ( ( * (  self1685 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    uint32_t  e1687 = ( (  get730 ) ( ( & ( ( ( * (  self1685 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1685 ) ) .f_cur ) ) );
    (*  self1685 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1685 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_345_Just ) ( (  e1687 ) ) );
}

static  uint32_t   reduce726 (    struct SmolArray_103  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_727  it844 = ( (  into_dash_iter728 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref845 = ( (  next729 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_345_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_345_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_345_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp742;
    return (  temp742 );
}

struct SmolArrayIter_744 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_744   into_dash_iter745 (    struct SmolArray_109  self1678 ) {
    return ( (struct SmolArrayIter_744) { .f_backing = (  self1678 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr748 (    struct Array_110 *  arr1640 ,    size_t  i1643 ) {
    if ( ( (  cmp9 ( (  i1643 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1643 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1643 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1644 = ( ( (  cast_dash_ptr225 ) ( (  arr1640 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1644 ) ,  ( (int64_t ) (  i1643 ) ) ) );
}

static  uint32_t   get747 (    struct Array_110 *  arr1647 ,    size_t  i1650 ) {
    return ( * ( (  get_dash_ptr748 ) ( (  arr1647 ) ,  (  i1650 ) ) ) );
}

static  struct Maybe_345   next746 (    struct SmolArrayIter_744 *  self1685 ) {
    if ( (  cmp9 ( ( ( * (  self1685 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    uint32_t  e1687 = ( (  get747 ) ( ( & ( ( ( * (  self1685 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1685 ) ) .f_cur ) ) );
    (*  self1685 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1685 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_345_Just ) ( (  e1687 ) ) );
}

static  uint32_t   reduce743 (    struct SmolArray_109  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_744  it844 = ( (  into_dash_iter745 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref845 = ( (  next746 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_345_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_345_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_345_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp749;
    return (  temp749 );
}

struct SmolArrayIter_751 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_751   into_dash_iter752 (    struct SmolArray_106  self1678 ) {
    return ( (struct SmolArrayIter_751) { .f_backing = (  self1678 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr755 (    struct Array_107 *  arr1640 ,    size_t  i1643 ) {
    if ( ( (  cmp9 ( (  i1643 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1643 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1643 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1644 = ( ( (  cast_dash_ptr226 ) ( (  arr1640 ) ) ) );
    return ( (  offset_dash_ptr163 ) ( (  p1644 ) ,  ( (int64_t ) (  i1643 ) ) ) );
}

static  uint32_t   get754 (    struct Array_107 *  arr1647 ,    size_t  i1650 ) {
    return ( * ( (  get_dash_ptr755 ) ( (  arr1647 ) ,  (  i1650 ) ) ) );
}

static  struct Maybe_345   next753 (    struct SmolArrayIter_751 *  self1685 ) {
    if ( (  cmp9 ( ( ( * (  self1685 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_345) { .tag = Maybe_345_None_t } );
    }
    uint32_t  e1687 = ( (  get754 ) ( ( & ( ( ( * (  self1685 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1685 ) ) .f_cur ) ) );
    (*  self1685 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1685 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_345_Just ) ( (  e1687 ) ) );
}

static  uint32_t   reduce750 (    struct SmolArray_106  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct SmolArrayIter_751  it844 = ( (  into_dash_iter752 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref845 = ( (  next753 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_345_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_345_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_345_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp756;
    return (  temp756 );
}

static  uint32_t   reduce757 (    struct Map_328  iterable838 ,    uint32_t  base840 ,    uint32_t (*  fun842 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x843 = (  base840 );
    struct Map_328  it844 = ( (  into_dash_iter327 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_345  dref845 = ( (  next344 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_345_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_345_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_345_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    uint32_t  temp758;
    return (  temp758 );
}

static  size_t   reduce759 (    struct TakeWhile_527  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_527  it844 = ( (  into_dash_iter526 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next539 ) ( ( & (  it844 ) ) ) );
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

struct Maybe_762 {
    enum {
        Maybe_762_None_t,
        Maybe_762_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_762_Just_s;
    } stuff;
};

static struct Maybe_762 Maybe_762_Just (  int64_t  field0 ) {
    return ( struct Maybe_762 ) { .tag = Maybe_762_Just_t, .stuff = { .Maybe_762_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_762   reduce761 (    struct TakeWhile_527  iterable838 ,    struct Maybe_762  base840 ,    struct Maybe_762 (*  fun842 )(    char  ,    struct Maybe_762  ) ) {
    struct Maybe_762  x843 = (  base840 );
    struct TakeWhile_527  it844 = ( (  into_dash_iter526 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next539 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_762  temp763;
    return (  temp763 );
}

static  int32_t   reduce764 (    struct Map_331  iterable838 ,    int32_t  base840 ,    int32_t (*  fun842 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x843 = (  base840 );
    struct Map_331  it844 = ( (  into_dash_iter330 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_348  dref845 = ( (  next347 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_348_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_348_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_348_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    int32_t  temp765;
    return (  temp765 );
}

static  size_t   reduce766 (    struct TakeWhile_529  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct TakeWhile_529  it844 = ( (  into_dash_iter528 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next541 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp767;
    return (  temp767 );
}

struct env769 {
    bool (*  fun871 )(    struct Tuple2_446  );
};

struct funenv769 {
    bool  (*fun) (  struct env769  ,    struct Tuple2_446  ,    bool  );
    struct env769 env;
};

static  bool   reduce768 (    struct Zip_391  iterable838 ,    bool  base840 ,   struct funenv769  fun842 ) {
    bool  x843 = (  base840 );
    struct Zip_391  it844 = ( (  into_dash_iter390 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_445  dref845 = ( (  next444 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_445_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_445_Just_t ) {
            struct funenv769  temp770 = (  fun842 );
            x843 = ( temp770.fun ( temp770.env ,  ( dref845 .stuff .Maybe_445_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    bool  temp771;
    return (  temp771 );
}

static  struct Maybe_762   reduce772 (    struct TakeWhile_538  iterable838 ,    struct Maybe_762  base840 ,    struct Maybe_762 (*  fun842 )(    char  ,    struct Maybe_762  ) ) {
    struct Maybe_762  x843 = (  base840 );
    struct TakeWhile_538  it844 = ( (  into_dash_iter537 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next547 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    struct Maybe_762  temp773;
    return (  temp773 );
}

static  size_t   reduce774 (    struct IntStrIter_394  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct IntStrIter_394  it844 = ( (  into_dash_iter507 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next448 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp775;
    return (  temp775 );
}

static  size_t   reduce776 (    struct StrConcatIter_397  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_397  it844 = ( (  into_dash_iter509 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next455 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp777;
    return (  temp777 );
}

static  size_t   reduce778 (    struct StrConcatIter_404  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_404  it844 = ( (  into_dash_iter511 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next461 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp779;
    return (  temp779 );
}

static  size_t   reduce780 (    struct StrConcatIter_408  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_408  it844 = ( (  into_dash_iter513 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next469 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp781;
    return (  temp781 );
}

static  size_t   reduce782 (    struct StrConcatIter_418  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_418  it844 = ( (  into_dash_iter515 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next478 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp783;
    return (  temp783 );
}

static  size_t   reduce784 (    struct StrConcatIter_423  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_423  it844 = ( (  into_dash_iter517 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next482 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp785;
    return (  temp785 );
}

static  size_t   reduce786 (    struct StrConcatIter_420  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_420  it844 = ( (  into_dash_iter519 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next480 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp787;
    return (  temp787 );
}

static  size_t   reduce788 (    struct StrConcatIter_429  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_429  it844 = ( (  into_dash_iter521 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next491 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp789;
    return (  temp789 );
}

static  size_t   reduce790 (    struct StrConcatIter_433  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_433  it844 = ( (  into_dash_iter523 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next494 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp791;
    return (  temp791 );
}

static  size_t   reduce792 (    struct StrConcatIter_438  iterable838 ,    size_t  base840 ,    size_t (*  fun842 )(    char  ,    size_t  ) ) {
    size_t  x843 = (  base840 );
    struct StrConcatIter_438  it844 = ( (  into_dash_iter525 ) ( (  iterable838 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref845 = ( (  next498 ) ( ( & (  it844 ) ) ) );
        if ( dref845.tag == Maybe_49_None_t ) {
            return (  x843 );
        }
        else if ( dref845.tag == Maybe_49_Just_t ) {
            x843 = ( (  fun842 ) ( ( dref845 .stuff .Maybe_49_Just_s .field0 ) ,  (  x843 ) ) );
        }
    }
    size_t  temp793;
    return (  temp793 );
}

static  size_t   lam795 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count794 (    struct TakeWhile_527  it849 ) {
    return ( (  reduce759 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam795 ) ) );
}

static  size_t   lam797 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count796 (    struct TakeWhile_529  it849 ) {
    return ( (  reduce766 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam797 ) ) );
}

static  size_t   lam799 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count798 (    struct IntStrIter_394  it849 ) {
    return ( (  reduce774 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam799 ) ) );
}

static  size_t   lam801 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count800 (    struct StrConcatIter_397  it849 ) {
    return ( (  reduce776 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam801 ) ) );
}

static  size_t   lam803 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count802 (    struct StrConcatIter_404  it849 ) {
    return ( (  reduce778 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam803 ) ) );
}

static  size_t   lam805 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count804 (    struct StrConcatIter_408  it849 ) {
    return ( (  reduce780 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam805 ) ) );
}

static  size_t   lam807 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count806 (    struct StrConcatIter_418  it849 ) {
    return ( (  reduce782 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam807 ) ) );
}

static  size_t   lam809 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count808 (    struct StrConcatIter_423  it849 ) {
    return ( (  reduce784 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam809 ) ) );
}

static  size_t   lam811 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count810 (    struct StrConcatIter_420  it849 ) {
    return ( (  reduce786 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam811 ) ) );
}

static  size_t   lam813 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count812 (    struct StrConcatIter_429  it849 ) {
    return ( (  reduce788 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam813 ) ) );
}

static  size_t   lam815 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count814 (    struct StrConcatIter_433  it849 ) {
    return ( (  reduce790 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam815 ) ) );
}

static  size_t   lam817 (    char  dref850 ,    size_t  x852 ) {
    return (  op_dash_add98 ( (  x852 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count816 (    struct StrConcatIter_438  it849 ) {
    return ( (  reduce792 ) ( (  it849 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam817 ) ) );
}

static  int32_t   lam819 (    int32_t  v857 ,    int32_t  s859 ) {
    return (  op_dash_add87 ( (  v857 ) , (  s859 ) ) );
}

static  int32_t   sum818 (    struct Map_331  it855 ) {
    return ( (  reduce764 ) ( (  it855 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam819 ) ) );
}

static  bool   lam769 (   struct env769 env ,    struct Tuple2_446  e873 ,    bool  x875 ) {
    return ( ( ( env.fun871 ) ( (  e873 ) ) ) && (  x875 ) );
}

static  bool   all820 (    struct Zip_391  it869 ,    bool (*  fun871 )(    struct Tuple2_446  ) ) {
    struct env769 envinst769 = {
        .fun871 =  fun871 ,
    };
    return ( (  reduce768 ) ( (  it869 ) ,  ( true ) ,  ( (struct funenv769){ .fun = lam769, .env = envinst769 } ) ) );
}

static  struct Maybe_334   head821 (    struct List_302 *  it887 ) {
    struct SliceIter_300  temp822 = ( (  into_dash_iter299 ) ( (  it887 ) ) );
    return ( (  next368 ) ( ( &temp822 ) ) );
}

static  struct Maybe_49   head823 (    struct TakeWhile_527  it887 ) {
    struct TakeWhile_527  temp824 = ( (  into_dash_iter526 ) ( (  it887 ) ) );
    return ( (  next539 ) ( ( &temp824 ) ) );
}

static  struct Maybe_49   head825 (    struct TakeWhile_531  it887 ) {
    struct TakeWhile_531  temp826 = ( (  into_dash_iter530 ) ( (  it887 ) ) );
    return ( (  next542 ) ( ( &temp826 ) ) );
}

static  struct Maybe_49   head827 (    struct TakeWhile_538  it887 ) {
    struct TakeWhile_538  temp828 = ( (  into_dash_iter537 ) ( (  it887 ) ) );
    return ( (  next547 ) ( ( &temp828 ) ) );
}

static  bool   null829 (    struct List_302 *  it890 ) {
    struct Maybe_334  dref891 = ( (  head821 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_334_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null830 (    struct TakeWhile_527  it890 ) {
    struct Maybe_49  dref891 = ( (  head823 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null831 (    struct TakeWhile_531  it890 ) {
    struct Maybe_49  dref891 = ( (  head825 ) ( (  it890 ) ) );
    if ( dref891.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam609 (   struct env609 env ,    int32_t  dref928 ) {
    return ( (  next540 ) ( ( env.it925 ) ) );
}

static  enum Unit_13   drop_prime_832 (    struct Scanner_308 *  it925 ,    size_t  n927 ) {
    struct env609 envinst609 = {
        .it925 =  it925 ,
    };
    ( (  for_dash_each608 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32292 ) ( (  n927 ) ) ) ) ) ,  ( (struct funenv609){ .fun = lam609, .env = envinst609 } ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_834 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_834 Tuple2_834_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_834 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst833 (    struct Tuple2_834  dref989 ) {
    return ( dref989 .field0 );
}

static  uint32_t   snd835 (    struct Tuple2_834  dref992 ) {
    return ( dref992 .field1 );
}

static  bool   is_dash_just836 (    struct Maybe_171  m996 ) {
    struct Maybe_171  dref997 = (  m996 );
    if ( dref997.tag == Maybe_171_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_171_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just837 (    struct Maybe_335  m996 ) {
    struct Maybe_335  dref997 = (  m996 );
    if ( dref997.tag == Maybe_335_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_335_Just_t ) {
        return ( true );
    }
}

struct Maybe_839 {
    enum {
        Maybe_839_None_t,
        Maybe_839_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_595  field0;
        } Maybe_839_Just_s;
    } stuff;
};

static struct Maybe_839 Maybe_839_Just (  struct StrBuilder_595  field0 ) {
    return ( struct Maybe_839 ) { .tag = Maybe_839_Just_t, .stuff = { .Maybe_839_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just838 (    struct Maybe_839  m996 ) {
    struct Maybe_839  dref997 = (  m996 );
    if ( dref997.tag == Maybe_839_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_839_Just_t ) {
        return ( true );
    }
}

struct Maybe_841 {
    enum {
        Maybe_841_None_t,
        Maybe_841_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_841_Just_s;
    } stuff;
};

static struct Maybe_841 Maybe_841_Just (  struct timespec  field0 ) {
    return ( struct Maybe_841 ) { .tag = Maybe_841_Just_t, .stuff = { .Maybe_841_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just840 (    struct Maybe_841  m996 ) {
    struct Maybe_841  dref997 = (  m996 );
    if ( dref997.tag == Maybe_841_None_t ) {
        return ( false );
    }
    else if ( dref997.tag == Maybe_841_Just_t ) {
        return ( true );
    }
}

struct Visual_845 {
    int32_t  field0;
};

static struct Visual_845 Visual_845_Visual (  int32_t  field0 ) {
    return ( struct Visual_845 ) { .field0 = field0 };
};

struct Mode_846 {
    enum {
        Mode_846_Normal_t,
        Mode_846_Insert_t,
        Mode_846_Select_t,
        Mode_846_Cmd_t,
        Mode_846_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_595  field0;
        } Mode_846_Cmd_s;
        struct {
            struct StrBuilder_595  field0;
        } Mode_846_SearchBox_s;
    } stuff;
};

static struct Mode_846 Mode_846_Cmd (  struct StrBuilder_595  field0 ) {
    return ( struct Mode_846 ) { .tag = Mode_846_Cmd_t, .stuff = { .Mode_846_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_846 Mode_846_SearchBox (  struct StrBuilder_595  field0 ) {
    return ( struct Mode_846 ) { .tag = Mode_846_SearchBox_t, .stuff = { .Mode_846_SearchBox_s = { .field0 = field0 } } };
};

struct Theme_847 {
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

struct List_849 {
    enum CAllocator_4  f_al;
    struct Slice_389  f_elements;
    size_t  f_count;
};

struct Actions_848 {
    struct List_849  f_list;
    size_t  f_cur;
};

struct Editor_844 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_170  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_845  f_goal_dash_x;
    struct List_302  f_current_dash_file;
    struct Maybe_287  f_filename;
    struct Mode_846  f_mode;
    struct Maybe_841  f_anim;
    struct Maybe_171  f_selected;
    struct Theme_847 *  f_theme;
    struct Maybe_839  f_search_dash_term;
    struct Maybe_335  f_msg;
    struct Maybe_335  f_clipboard;
    struct Actions_848  f_actions;
    struct Maybe_171  f_insert_dash_start;
    struct Maybe_839  f_delete_dash_acc;
};

struct env843 {
    ;
    ;
    struct Editor_844 *  ed3298;
};

struct funenv843 {
    struct Maybe_49  (*fun) (  struct env843  ,    struct List_3  );
    struct env843 env;
};

static  struct Maybe_49   and_dash_maybe842 (    struct Maybe_334  m1000 ,   struct funenv843  fun1002 ) {
    struct Maybe_334  dref1003 = (  m1000 );
    if ( dref1003.tag == Maybe_334_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1003.tag == Maybe_334_Just_t ) {
        struct funenv843  temp850 = (  fun1002 );
        return ( temp850.fun ( temp850.env ,  ( dref1003 .stuff .Maybe_334_Just_s .field0 ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe851 (    struct Maybe_49  x1007 ,    enum CharType_53 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_371   fmap_dash_maybe852 (    struct Maybe_49  x1007 ,    struct Tuple2_372 (*  fun1009 )(    char  ) ) {
    struct Maybe_49  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_371) { .tag = Maybe_371_None_t } );
    }
    else if ( dref1010.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_371_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_854 {
    enum {
        Maybe_854_None_t,
        Maybe_854_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_854_Just_s;
    } stuff;
};

static struct Maybe_854 Maybe_854_Just (  size_t  field0 ) {
    return ( struct Maybe_854 ) { .tag = Maybe_854_Just_t, .stuff = { .Maybe_854_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_854   fmap_dash_maybe853 (    struct Maybe_335  x1007 ,    size_t (*  fun1009 )(    struct DynStr_134  ) ) {
    struct Maybe_335  dref1010 = (  x1007 );
    if ( dref1010.tag == Maybe_335_None_t ) {
        return ( (struct Maybe_854) { .tag = Maybe_854_None_t } );
    }
    else if ( dref1010.tag == Maybe_335_Just_t ) {
        return ( ( Maybe_854_Just ) ( ( (  fun1009 ) ( ( dref1010 .stuff .Maybe_335_Just_s .field0 ) ) ) ) );
    }
}

struct env856 {
    struct Editor_844 *  ed3004;
    ;
};

struct funenv856 {
    struct Cursor_170  (*fun) (  struct env856  ,    struct Cursor_170  );
    struct env856 env;
};

static  struct Cursor_170   maybe855 (    struct Maybe_171  x1014 ,   struct funenv856  fun1016 ,    struct Cursor_170  default1018 ) {
    struct funenv856  temp857 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp857.fun ( temp857.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env859 {
    struct Editor_844 *  ed3004;
    ;
};

struct funenv859 {
    struct Cursor_170  (*fun) (  struct env859  ,    struct Cursor_170  );
    struct env859 env;
};

static  struct Cursor_170   maybe858 (    struct Maybe_171  x1014 ,   struct funenv859  fun1016 ,    struct Cursor_170  default1018 ) {
    struct funenv859  temp860 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp860.fun ( temp860.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env862 {
    struct Editor_844 *  ed3004;
    ;
};

struct funenv862 {
    struct Cursor_170  (*fun) (  struct env862  ,    struct Cursor_170  );
    struct env862 env;
};

static  struct Cursor_170   maybe861 (    struct Maybe_171  x1014 ,   struct funenv862  fun1016 ,    struct Cursor_170  default1018 ) {
    struct funenv862  temp863 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp863.fun ( temp863.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env865 {
    struct Editor_844 *  ed3004;
    ;
};

struct funenv865 {
    struct Cursor_170  (*fun) (  struct env865  ,    struct Cursor_170  );
    struct env865 env;
};

static  struct Cursor_170   maybe864 (    struct Maybe_171  x1014 ,   struct funenv865  fun1016 ,    struct Cursor_170  default1018 ) {
    struct funenv865  temp866 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp866.fun ( temp866.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env868 {
    struct Editor_844 *  ed3106;
    ;
};

struct funenv868 {
    int32_t  (*fun) (  struct env868  ,    struct Cursor_170  );
    struct env868 env;
};

static  int32_t   maybe867 (    struct Maybe_171  x1014 ,   struct funenv868  fun1016 ,    int32_t  default1018 ) {
    struct funenv868  temp869 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp869.fun ( temp869.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env871 {
    struct Editor_844 *  ed3106;
    ;
};

struct funenv871 {
    int32_t  (*fun) (  struct env871  ,    struct Cursor_170  );
    struct env871 env;
};

static  int32_t   maybe870 (    struct Maybe_171  x1014 ,   struct funenv871  fun1016 ,    int32_t  default1018 ) {
    struct funenv871  temp872 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp872.fun ( temp872.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env874 {
    struct Editor_844 *  ed3121;
    ;
};

struct funenv874 {
    int32_t  (*fun) (  struct env874  ,    struct Cursor_170  );
    struct env874 env;
};

static  int32_t   maybe873 (    struct Maybe_171  x1014 ,   struct funenv874  fun1016 ,    int32_t  default1018 ) {
    struct funenv874  temp875 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp875.fun ( temp875.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env877 {
    struct Editor_844 *  ed3121;
    ;
};

struct funenv877 {
    int32_t  (*fun) (  struct env877  ,    struct Cursor_170  );
    struct env877 env;
};

static  int32_t   maybe876 (    struct Maybe_171  x1014 ,   struct funenv877  fun1016 ,    int32_t  default1018 ) {
    struct funenv877  temp878 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp878.fun ( temp878.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env880 {
    struct Editor_844 *  ed3085;
    ;
};

struct funenv880 {
    struct Cursor_170  (*fun) (  struct env880  ,    struct Cursor_170  );
    struct env880 env;
};

static  struct Cursor_170   maybe879 (    struct Maybe_171  x1014 ,   struct funenv880  fun1016 ,    struct Cursor_170  default1018 ) {
    struct funenv880  temp881 = (  fun1016 );
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( temp881.fun ( temp881.env ,  ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe882 (    struct Maybe_171  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_170  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe883 (    struct Maybe_171  x1014 ,    int32_t (*  fun1016 )(    struct Cursor_170  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_171  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_171_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_171_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env885 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3333;
};

struct funenv885 {
    bool  (*fun) (  struct env885  ,    char  );
    struct env885 env;
};

static  bool   maybe884 (    struct Maybe_49  x1014 ,   struct funenv885  fun1016 ,    bool  default1018 ) {
    struct funenv885  temp886 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp886.fun ( temp886.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe887 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe888 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env890 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3342;
};

struct funenv890 {
    bool  (*fun) (  struct env890  ,    char  );
    struct env890 env;
};

static  bool   maybe889 (    struct Maybe_49  x1014 ,   struct funenv890  fun1016 ,    bool  default1018 ) {
    struct funenv890  temp891 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp891.fun ( temp891.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  bool   maybe892 (    struct Maybe_49  x1014 ,    bool (*  fun1016 )(    char  ) ,    bool  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env894 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3349;
};

struct funenv894 {
    bool  (*fun) (  struct env894  ,    char  );
    struct env894 env;
};

static  bool   maybe893 (    struct Maybe_49  x1014 ,   struct funenv894  fun1016 ,    bool  default1018 ) {
    struct funenv894  temp895 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp895.fun ( temp895.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

struct env897 {
    ;
    ;
    struct Maybe_52  cur_dash_char_dash_type3349;
};

struct funenv897 {
    bool  (*fun) (  struct env897  ,    char  );
    struct env897 env;
};

static  bool   maybe896 (    struct Maybe_49  x1014 ,   struct funenv897  fun1016 ,    bool  default1018 ) {
    struct funenv897  temp898 = (  fun1016 );
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( temp898.fun ( temp898.env ,  ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int32_t   maybe899 (    struct Maybe_49  x1014 ,    int32_t (*  fun1016 )(    char  ) ,    int32_t  default1018 ) {
    return ( {  struct Maybe_49  dref1019 = (  x1014 ) ; dref1019.tag == Maybe_49_Just_t ? ( (  fun1016 ) ( ( dref1019 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1018 ) ; } );
}

static  int64_t   mod900 (    int64_t  l968 ,    int64_t  d970 ) {
    int64_t  r971 = (  op_dash_div85 ( (  l968 ) , (  d970 ) ) );
    int64_t  m972 = (  op_dash_sub84 ( (  l968 ) , (  op_dash_mul32 ( (  r971 ) , (  d970 ) ) ) ) );
    if ( (  cmp79 ( (  m972 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d970 ) , (  m972 ) ) );
    } else {
        return (  m972 );
    }
}

static  enum Ordering_10   cmp902 (    struct Cursor_170  l2694 ,    struct Cursor_170  r2696 ) {
    enum Ordering_10  dref2697 = ( (  cmp80 ) ( ( (  l2694 ) .f_y ) ,  ( (  r2696 ) .f_y ) ) );
    switch (  dref2697 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2694 ) .f_x ) ,  ( (  r2696 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2698 =  dref2697;
            return (  els2698 );
            break;
        }
    }
}

static  struct Cursor_170   min901 (    struct Cursor_170  l975 ,    struct Cursor_170  r977 ) {
    if ( (  cmp902 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   min903 (    int32_t  l975 ,    int32_t  r977 ) {
    if ( (  cmp80 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   char_dash_i32906 (    char  c1312 ) {
    return ( (  cast_dash_on_dash_zeroed270 ) ( (  c1312 ) ) );
}

static  enum Ordering_10   cmp905 (    char  l1336 ,    char  r1338 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32906 ) ( (  l1336 ) ) ) ,  ( (  char_dash_i32906 ) ( (  r1338 ) ) ) ) );
}

static  char   min904 (    char  l975 ,    char  r977 ) {
    if ( (  cmp905 ( (  l975 ) , (  r977 ) ) == 0 ) ) {
        return (  l975 );
    } else {
        return (  r977 );
    }
}

static  int32_t   max907 (    int32_t  l1025 ,    int32_t  r1027 ) {
    if ( (  cmp80 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  struct Cursor_170   max908 (    struct Cursor_170  l1025 ,    struct Cursor_170  r1027 ) {
    if ( (  cmp902 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  char   max909 (    char  l1025 ,    char  r1027 ) {
    if ( (  cmp905 ( (  l1025 ) , (  r1027 ) ) == 2 ) ) {
        return (  l1025 );
    } else {
        return (  r1027 );
    }
}

static  bool   between910 (    char  c1042 ,    char  l1044 ,    char  r1046 ) {
    char  from1047 = ( (  min904 ) ( (  l1044 ) ,  (  r1046 ) ) );
    char  to1048 = ( (  max909 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp905 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp905 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  bool   between911 (    struct Cursor_170  c1042 ,    struct Cursor_170  l1044 ,    struct Cursor_170  r1046 ) {
    struct Cursor_170  from1047 = ( (  min901 ) ( (  l1044 ) ,  (  r1046 ) ) );
    struct Cursor_170  to1048 = ( (  max908 ) ( (  l1044 ) ,  (  r1046 ) ) );
    return ( (  cmp902 ( (  from1047 ) , (  c1042 ) ) != 2 ) && (  cmp902 ( (  c1042 ) , (  to1048 ) ) != 2 ) );
}

static  int32_t   clamp912 (    int32_t  x1057 ,    int32_t  mn1059 ,    int32_t  mx1061 ) {
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

static  struct ConstStrIter_329   chars913 (    const char*  self1081 ) {
    return ( (  into_dash_iter354 ) ( (  self1081 ) ) );
}

static  struct AppendIter_401   chars914 (    char  self1087 ) {
    return ( (  single565 ) ( (  self1087 ) ) );
}

static  int32_t   count_dash_digits915 (    size_t  self1102 ) {
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

static  int32_t   count_dash_digits916 (    int32_t  self1102 ) {
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

static  int32_t   count_dash_digits917 (    uint32_t  self1102 ) {
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

static  struct IntStrIter_394   chars918 (    int32_t  self1109 ) {
    return ( (struct IntStrIter_394) { .f_int = (  self1109 ) , .f_len = ( (  count_dash_digits916 ) ( (  self1109 ) ) ) } );
}

static  enum Unit_13   print_dash_str919 (    uint32_t  self1112 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1112 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_405   chars920 (    uint32_t  self1115 ) {
    return ( (struct IntStrIter_405) { .f_int = (  self1115 ) , .f_len = ( (  count_dash_digits917 ) ( (  self1115 ) ) ) } );
}

static  enum Unit_13   print_dash_str921 (    uint8_t  self1118 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32298 ) ( (  self1118 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_424   chars922 (    size_t  self1133 ) {
    return ( (struct IntStrIter_424) { .f_int = (  self1133 ) , .f_len = ( (  count_dash_digits915 ) ( (  self1133 ) ) ) } );
}

struct StrConcat_924 {
    const char*  field0;
    struct Mode_846  field1;
};

static struct StrConcat_924 StrConcat_924_StrConcat (  const char*  field0 ,  struct Mode_846  field1 ) {
    return ( struct StrConcat_924 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_928 {
    const char*  field0;
    struct DynStr_134  field1;
};

static struct StrConcat_928 StrConcat_928_StrConcat (  const char*  field0 ,  struct DynStr_134  field1 ) {
    return ( struct StrConcat_928 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_927 {
    struct StrConcat_928  field0;
    char  field1;
};

static struct StrConcat_927 StrConcat_927_StrConcat (  struct StrConcat_928  field0 ,  char  field1 ) {
    return ( struct StrConcat_927 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_926 {
    enum {
        StrCase_926_StrCase1_t,
        StrCase_926_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_926_StrCase1_s;
        struct {
            struct StrConcat_927  field0;
        } StrCase_926_StrCase2_s;
    } stuff;
};

static struct StrCase_926 StrCase_926_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_926 ) { .tag = StrCase_926_StrCase1_t, .stuff = { .StrCase_926_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_926 StrCase_926_StrCase2 (  struct StrConcat_927  field0 ) {
    return ( struct StrCase_926 ) { .tag = StrCase_926_StrCase2_t, .stuff = { .StrCase_926_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_134   as_dash_str930 (    struct StrBuilder_595 *  builder2154 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice314 ) ( ( ( ( * (  builder2154 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2154 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_309   chars937 (    struct DynStr_134  self1593 ) {
    return ( (  into_dash_iter313 ) ( ( (  self1593 ) .f_contents ) ) );
}

static  struct StrConcatIter_400   into_dash_iter936 (    struct StrConcat_928  dref1164 ) {
    return ( (struct StrConcatIter_400) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars937 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_400   chars935 (    struct StrConcat_928  self1175 ) {
    return ( (  into_dash_iter936 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_399   into_dash_iter934 (    struct StrConcat_927  dref1164 ) {
    return ( (struct StrConcatIter_399) { .f_left = ( (  chars935 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_399   chars933 (    struct StrConcat_927  self1175 ) {
    return ( (  into_dash_iter934 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_398   into_dash_iter932 (    struct StrCase_926  self1188 ) {
    struct StrCase_926  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_926_StrCase1_t ) {
        return ( ( StrCaseIter_398_StrCaseIter1 ) ( ( (  chars913 ) ( ( dref1189 .stuff .StrCase_926_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_926_StrCase2_t ) {
        return ( ( StrCaseIter_398_StrCaseIter2 ) ( ( (  chars933 ) ( ( dref1189 .stuff .StrCase_926_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_398   chars931 (    struct StrCase_926  self1200 ) {
    return ( (  into_dash_iter932 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_398   chars925 (    struct Mode_846  self2720 ) {
    struct StrCase_926  temp929;
    struct StrCase_926  c2721 = (  temp929 );
    struct Mode_846  dref2722 = (  self2720 );
    if ( dref2722.tag == Mode_846_Normal_t ) {
        c2721 = ( ( StrCase_926_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2722.tag == Mode_846_Insert_t ) {
        c2721 = ( ( StrCase_926_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2722.tag == Mode_846_Select_t ) {
        c2721 = ( ( StrCase_926_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2722.tag == Mode_846_Cmd_t ) {
        struct DynStr_134  ss2724 = ( (  as_dash_str930 ) ( ( & ( dref2722 .stuff .Mode_846_Cmd_s .field0 ) ) ) );
        c2721 = ( ( StrCase_926_StrCase2 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_928_StrConcat ) ( ( "Cmd(" ) ,  (  ss2724 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2722.tag == Mode_846_SearchBox_t ) {
        struct DynStr_134  ss2726 = ( (  as_dash_str930 ) ( ( & ( dref2722 .stuff .Mode_846_SearchBox_s .field0 ) ) ) );
        c2721 = ( ( StrCase_926_StrCase2 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_928_StrConcat ) ( ( "Search(" ) ,  (  ss2726 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars931 ) ( (  c2721 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter923 (    struct StrConcat_924  dref1164 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars925 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_939 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_939 StrConcat_939_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_939 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_404   into_dash_iter938 (    struct StrConcat_939  dref1164 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars920 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_941 {
    const char*  field0;
    struct Maybe_371  field1;
};

static struct StrConcat_941 StrConcat_941_StrConcat (  const char*  field0 ,  struct Maybe_371  field1 ) {
    return ( struct StrConcat_941 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_945 {
    const char*  field0;
    struct Tuple2_372  field1;
};

static struct StrConcat_945 StrConcat_945_StrConcat (  const char*  field0 ,  struct Tuple2_372  field1 ) {
    return ( struct StrConcat_945 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_944 {
    struct StrConcat_945  field0;
    char  field1;
};

static struct StrConcat_944 StrConcat_944_StrConcat (  struct StrConcat_945  field0 ,  char  field1 ) {
    return ( struct StrConcat_944 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_943 {
    enum {
        StrCase_943_StrCase1_t,
        StrCase_943_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_943_StrCase1_s;
        struct {
            struct StrConcat_944  field0;
        } StrCase_943_StrCase2_s;
    } stuff;
};

static struct StrCase_943 StrCase_943_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_943 ) { .tag = StrCase_943_StrCase1_t, .stuff = { .StrCase_943_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_943 StrCase_943_StrCase2 (  struct StrConcat_944  field0 ) {
    return ( struct StrCase_943 ) { .tag = StrCase_943_StrCase2_t, .stuff = { .StrCase_943_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_958 {
    char  field0;
    char  field1;
};

static struct StrConcat_958 StrConcat_958_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_958 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_957 {
    struct StrConcat_958  field0;
    const char*  field1;
};

static struct StrConcat_957 StrConcat_957_StrConcat (  struct StrConcat_958  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_957 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_956 {
    struct StrConcat_957  field0;
    int32_t  field1;
};

static struct StrConcat_956 StrConcat_956_StrConcat (  struct StrConcat_957  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_956 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_955 {
    struct StrConcat_956  field0;
    char  field1;
};

static struct StrConcat_955 StrConcat_955_StrConcat (  struct StrConcat_956  field0 ,  char  field1 ) {
    return ( struct StrConcat_955 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_415   into_dash_iter965 (    struct StrConcat_958  dref1164 ) {
    return ( (struct StrConcatIter_415) { .f_left = ( (  chars914 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_415   chars964 (    struct StrConcat_958  self1175 ) {
    return ( (  into_dash_iter965 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_414   into_dash_iter963 (    struct StrConcat_957  dref1164 ) {
    return ( (struct StrConcatIter_414) { .f_left = ( (  chars964 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_414   chars962 (    struct StrConcat_957  self1175 ) {
    return ( (  into_dash_iter963 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_413   into_dash_iter961 (    struct StrConcat_956  dref1164 ) {
    return ( (struct StrConcatIter_413) { .f_left = ( (  chars962 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars918 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_413   chars960 (    struct StrConcat_956  self1175 ) {
    return ( (  into_dash_iter961 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_412   into_dash_iter959 (    struct StrConcat_955  dref1164 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars960 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_412   chars954 (    struct StrConcat_955  self1175 ) {
    return ( (  into_dash_iter959 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_412   chars953 (    struct Tuple2_372  dref1225 ) {
    return ( (  chars954 ) ( ( ( StrConcat_955_StrConcat ) ( ( ( StrConcat_956_StrConcat ) ( ( ( StrConcat_957_StrConcat ) ( ( ( StrConcat_958_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1225 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1225 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_411   into_dash_iter952 (    struct StrConcat_945  dref1164 ) {
    return ( (struct StrConcatIter_411) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars953 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_411   chars951 (    struct StrConcat_945  self1175 ) {
    return ( (  into_dash_iter952 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_410   into_dash_iter950 (    struct StrConcat_944  dref1164 ) {
    return ( (struct StrConcatIter_410) { .f_left = ( (  chars951 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_410   chars949 (    struct StrConcat_944  self1175 ) {
    return ( (  into_dash_iter950 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_409   into_dash_iter948 (    struct StrCase_943  self1188 ) {
    struct StrCase_943  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_943_StrCase1_t ) {
        return ( ( StrCaseIter_409_StrCaseIter1 ) ( ( (  chars913 ) ( ( dref1189 .stuff .StrCase_943_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_943_StrCase2_t ) {
        return ( ( StrCaseIter_409_StrCaseIter2 ) ( ( (  chars949 ) ( ( dref1189 .stuff .StrCase_943_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_409   chars947 (    struct StrCase_943  self1200 ) {
    return ( (  into_dash_iter948 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_409   chars942 (    struct Maybe_371  self1214 ) {
    struct StrCase_943  temp946;
    struct StrCase_943  c1215 = (  temp946 );
    struct Maybe_371  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_371_None_t ) {
        c1215 = ( ( StrCase_943_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_371_Just_t ) {
        c1215 = ( ( StrCase_943_StrCase2 ) ( ( ( StrConcat_944_StrConcat ) ( ( ( StrConcat_945_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_371_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars947 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_408   into_dash_iter940 (    struct StrConcat_941  dref1164 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars942 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_969 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_969 StrConcat_969_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_969 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_968 {
    struct StrConcat_969  field0;
    char  field1;
};

static struct StrConcat_968 StrConcat_968_StrConcat (  struct StrConcat_969  field0 ,  char  field1 ) {
    return ( struct StrConcat_968 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_967 {
    struct StrConcat_968  field0;
    int32_t  field1;
};

static struct StrConcat_967 StrConcat_967_StrConcat (  struct StrConcat_968  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_967 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_420   into_dash_iter973 (    struct StrConcat_969  dref1164 ) {
    return ( (struct StrConcatIter_420) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars918 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_420   chars972 (    struct StrConcat_969  self1175 ) {
    return ( (  into_dash_iter973 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_419   into_dash_iter971 (    struct StrConcat_968  dref1164 ) {
    return ( (struct StrConcatIter_419) { .f_left = ( (  chars972 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_419   chars970 (    struct StrConcat_968  self1175 ) {
    return ( (  into_dash_iter971 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_418   into_dash_iter966 (    struct StrConcat_967  dref1164 ) {
    return ( (struct StrConcatIter_418) { .f_left = ( (  chars970 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars918 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   into_dash_iter974 (    struct StrConcat_17  dref1164 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars922 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_977 {
    struct StrConcat_969  field0;
    const char*  field1;
};

static struct StrConcat_977 StrConcat_977_StrConcat (  struct StrConcat_969  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_977 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_976 {
    struct StrConcat_977  field0;
    int32_t  field1;
};

static struct StrConcat_976 StrConcat_976_StrConcat (  struct StrConcat_977  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_976 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_430   into_dash_iter979 (    struct StrConcat_977  dref1164 ) {
    return ( (struct StrConcatIter_430) { .f_left = ( (  chars972 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars913 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_430   chars978 (    struct StrConcat_977  self1175 ) {
    return ( (  into_dash_iter979 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_429   into_dash_iter975 (    struct StrConcat_976  dref1164 ) {
    return ( (struct StrConcatIter_429) { .f_left = ( (  chars978 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars918 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_981 {
    const char*  field0;
    struct Maybe_839  field1;
};

static struct StrConcat_981 StrConcat_981_StrConcat (  const char*  field0 ,  struct Maybe_839  field1 ) {
    return ( struct StrConcat_981 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_985 {
    const char*  field0;
    struct StrBuilder_595  field1;
};

static struct StrConcat_985 StrConcat_985_StrConcat (  const char*  field0 ,  struct StrBuilder_595  field1 ) {
    return ( struct StrConcat_985 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_984 {
    struct StrConcat_985  field0;
    char  field1;
};

static struct StrConcat_984 StrConcat_984_StrConcat (  struct StrConcat_985  field0 ,  char  field1 ) {
    return ( struct StrConcat_984 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_983 {
    enum {
        StrCase_983_StrCase1_t,
        StrCase_983_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_983_StrCase1_s;
        struct {
            struct StrConcat_984  field0;
        } StrCase_983_StrCase2_s;
    } stuff;
};

static struct StrCase_983 StrCase_983_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_983 ) { .tag = StrCase_983_StrCase1_t, .stuff = { .StrCase_983_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_983 StrCase_983_StrCase2 (  struct StrConcat_984  field0 ) {
    return ( struct StrCase_983 ) { .tag = StrCase_983_StrCase2_t, .stuff = { .StrCase_983_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_309   chars993 (    struct StrBuilder_595  s2168 ) {
    return ( (  into_dash_iter312 ) ( ( (  s2168 ) .f_chars ) ) );
}

static  struct StrConcatIter_400   into_dash_iter992 (    struct StrConcat_985  dref1164 ) {
    return ( (struct StrConcatIter_400) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars993 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_400   chars991 (    struct StrConcat_985  self1175 ) {
    return ( (  into_dash_iter992 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_399   into_dash_iter990 (    struct StrConcat_984  dref1164 ) {
    return ( (struct StrConcatIter_399) { .f_left = ( (  chars991 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_399   chars989 (    struct StrConcat_984  self1175 ) {
    return ( (  into_dash_iter990 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_398   into_dash_iter988 (    struct StrCase_983  self1188 ) {
    struct StrCase_983  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_983_StrCase1_t ) {
        return ( ( StrCaseIter_398_StrCaseIter1 ) ( ( (  chars913 ) ( ( dref1189 .stuff .StrCase_983_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_983_StrCase2_t ) {
        return ( ( StrCaseIter_398_StrCaseIter2 ) ( ( (  chars989 ) ( ( dref1189 .stuff .StrCase_983_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_398   chars987 (    struct StrCase_983  self1200 ) {
    return ( (  into_dash_iter988 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_398   chars982 (    struct Maybe_839  self1214 ) {
    struct StrCase_983  temp986;
    struct StrCase_983  c1215 = (  temp986 );
    struct Maybe_839  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_839_None_t ) {
        c1215 = ( ( StrCase_983_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_839_Just_t ) {
        c1215 = ( ( StrCase_983_StrCase2 ) ( ( ( StrConcat_984_StrConcat ) ( ( ( StrConcat_985_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_839_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars987 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter980 (    struct StrConcat_981  dref1164 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars982 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_995 {
    const char*  field0;
    struct Maybe_335  field1;
};

static struct StrConcat_995 StrConcat_995_StrConcat (  const char*  field0 ,  struct Maybe_335  field1 ) {
    return ( struct StrConcat_995 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_398   chars996 (    struct Maybe_335  self1214 ) {
    struct StrCase_926  temp997;
    struct StrCase_926  c1215 = (  temp997 );
    struct Maybe_335  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_335_None_t ) {
        c1215 = ( ( StrCase_926_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_335_Just_t ) {
        c1215 = ( ( StrCase_926_StrCase2 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_928_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_335_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars931 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter994 (    struct StrConcat_995  dref1164 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars996 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_999 {
    const char*  field0;
    struct Maybe_854  field1;
};

static struct StrConcat_999 StrConcat_999_StrConcat (  const char*  field0 ,  struct Maybe_854  field1 ) {
    return ( struct StrConcat_999 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1002 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_1002 StrConcat_1002_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_1002 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1001 {
    enum {
        StrCase_1001_StrCase1_t,
        StrCase_1001_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_1001_StrCase1_s;
        struct {
            struct StrConcat_1002  field0;
        } StrCase_1001_StrCase2_s;
    } stuff;
};

static struct StrCase_1001 StrCase_1001_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_1001 ) { .tag = StrCase_1001_StrCase1_t, .stuff = { .StrCase_1001_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1001 StrCase_1001_StrCase2 (  struct StrConcat_1002  field0 ) {
    return ( struct StrCase_1001 ) { .tag = StrCase_1001_StrCase2_t, .stuff = { .StrCase_1001_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_423   chars1008 (    struct StrConcat_17  self1175 ) {
    return ( (  into_dash_iter974 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_435   into_dash_iter1007 (    struct StrConcat_1002  dref1164 ) {
    return ( (struct StrConcatIter_435) { .f_left = ( (  chars1008 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars914 ) ( ( dref1164 .field1 ) ) ) } );
}

static  struct StrConcatIter_435   chars1006 (    struct StrConcat_1002  self1175 ) {
    return ( (  into_dash_iter1007 ) ( (  self1175 ) ) );
}

static  struct StrCaseIter_434   into_dash_iter1005 (    struct StrCase_1001  self1188 ) {
    struct StrCase_1001  dref1189 = (  self1188 );
    if ( dref1189.tag == StrCase_1001_StrCase1_t ) {
        return ( ( StrCaseIter_434_StrCaseIter1 ) ( ( (  chars913 ) ( ( dref1189 .stuff .StrCase_1001_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1189.tag == StrCase_1001_StrCase2_t ) {
        return ( ( StrCaseIter_434_StrCaseIter2 ) ( ( (  chars1006 ) ( ( dref1189 .stuff .StrCase_1001_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_434   chars1004 (    struct StrCase_1001  self1200 ) {
    return ( (  into_dash_iter1005 ) ( (  self1200 ) ) );
}

static  struct StrCaseIter_434   chars1000 (    struct Maybe_854  self1214 ) {
    struct StrCase_1001  temp1003;
    struct StrCase_1001  c1215 = (  temp1003 );
    struct Maybe_854  dref1216 = (  self1214 );
    if ( dref1216.tag == Maybe_854_None_t ) {
        c1215 = ( ( StrCase_1001_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1216.tag == Maybe_854_Just_t ) {
        c1215 = ( ( StrCase_1001_StrCase2 ) ( ( ( StrConcat_1002_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1216 .stuff .Maybe_854_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1004 ) ( (  c1215 ) ) );
}

static  struct StrConcatIter_433   into_dash_iter998 (    struct StrConcat_999  dref1164 ) {
    return ( (struct StrConcatIter_433) { .f_left = ( (  chars913 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars1000 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1010 {
    struct StrConcat_1002  field0;
    size_t  field1;
};

static struct StrConcat_1010 StrConcat_1010_StrConcat (  struct StrConcat_1002  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_1010 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_438   into_dash_iter1009 (    struct StrConcat_1010  dref1164 ) {
    return ( (struct StrConcatIter_438) { .f_left = ( (  chars1006 ) ( ( dref1164 .field0 ) ) ) , .f_right = ( (  chars922 ) ( ( dref1164 .field1 ) ) ) } );
}

struct StrConcat_1013 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_1013 StrConcat_1013_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1013 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1012 {
    struct StrConcat_1013  field0;
    char  field1;
};

static struct StrConcat_1012 StrConcat_1012_StrConcat (  struct StrConcat_1013  field0 ,  char  field1 ) {
    return ( struct StrConcat_1012 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1014 (    struct StrConcat_1013  self1169 ) {
    struct StrConcat_1013  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1011 (    struct StrConcat_1012  self1169 ) {
    struct StrConcat_1012  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1014 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1017 {
    const char*  field0;
    struct StrConcat_1012  field1;
};

static struct StrConcat_1017 StrConcat_1017_StrConcat (  const char*  field0 ,  struct StrConcat_1012  field1 ) {
    return ( struct StrConcat_1017 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1016 {
    struct StrConcat_1017  field0;
    char  field1;
};

static struct StrConcat_1016 StrConcat_1016_StrConcat (  struct StrConcat_1017  field0 ,  char  field1 ) {
    return ( struct StrConcat_1016 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1018 (    struct StrConcat_1017  self1169 ) {
    struct StrConcat_1017  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1011 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1015 (    struct StrConcat_1016  self1169 ) {
    struct StrConcat_1016  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1018 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1020 (    struct StrConcat_958  self1169 ) {
    struct StrConcat_958  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1019 (    struct StrConcat_957  self1169 ) {
    struct StrConcat_957  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1020 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1023 {
    const char*  field0;
    struct StrConcat_957  field1;
};

static struct StrConcat_1023 StrConcat_1023_StrConcat (  const char*  field0 ,  struct StrConcat_957  field1 ) {
    return ( struct StrConcat_1023 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1022 {
    struct StrConcat_1023  field0;
    char  field1;
};

static struct StrConcat_1022 StrConcat_1022_StrConcat (  struct StrConcat_1023  field0 ,  char  field1 ) {
    return ( struct StrConcat_1022 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1024 (    struct StrConcat_1023  self1169 ) {
    struct StrConcat_1023  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1019 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1021 (    struct StrConcat_1022  self1169 ) {
    struct StrConcat_1022  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1024 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1026 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_1026 StrConcat_1026_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_1026 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1025 (    struct StrConcat_1026  self1169 ) {
    struct StrConcat_1026  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1029 {
    const char*  field0;
    struct StrConcat_1026  field1;
};

static struct StrConcat_1029 StrConcat_1029_StrConcat (  const char*  field0 ,  struct StrConcat_1026  field1 ) {
    return ( struct StrConcat_1029 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1028 {
    struct StrConcat_1029  field0;
    char  field1;
};

static struct StrConcat_1028 StrConcat_1028_StrConcat (  struct StrConcat_1029  field0 ,  char  field1 ) {
    return ( struct StrConcat_1028 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1030 (    struct StrConcat_1029  self1169 ) {
    struct StrConcat_1029  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1025 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1027 (    struct StrConcat_1028  self1169 ) {
    struct StrConcat_1028  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1030 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1034 (    struct DynStr_134  self1590 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1590 ) .f_contents ) .f_count ) ,  ( ( (  self1590 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1033 (    struct StrConcat_928  self1169 ) {
    struct StrConcat_928  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1034 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1032 (    struct Mode_846  self2712 ) {
    struct Mode_846  dref2713 = (  self2712 );
    if ( dref2713.tag == Mode_846_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2713.tag == Mode_846_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2713.tag == Mode_846_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2713.tag == Mode_846_Cmd_t ) {
        struct DynStr_134  ss2715 = ( (  as_dash_str930 ) ( ( & ( dref2713 .stuff .Mode_846_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str1033 ) ( ( ( StrConcat_928_StrConcat ) ( ( "Cmd " ) ,  (  ss2715 ) ) ) ) );
    }
    else if ( dref2713.tag == Mode_846_SearchBox_t ) {
        struct DynStr_134  ss2717 = ( (  as_dash_str930 ) ( ( & ( dref2713 .stuff .Mode_846_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str1033 ) ( ( ( StrConcat_928_StrConcat ) ( ( "Search " ) ,  (  ss2717 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1031 (    struct StrConcat_924  self1169 ) {
    struct StrConcat_924  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1032 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1037 {
    const char*  field0;
    struct StrConcat_924  field1;
};

static struct StrConcat_1037 StrConcat_1037_StrConcat (  const char*  field0 ,  struct StrConcat_924  field1 ) {
    return ( struct StrConcat_1037 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1036 {
    struct StrConcat_1037  field0;
    char  field1;
};

static struct StrConcat_1036 StrConcat_1036_StrConcat (  struct StrConcat_1037  field0 ,  char  field1 ) {
    return ( struct StrConcat_1036 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1038 (    struct StrConcat_1037  self1169 ) {
    struct StrConcat_1037  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1031 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1035 (    struct StrConcat_1036  self1169 ) {
    struct StrConcat_1036  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1038 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1041 {
    const char*  field0;
    struct StrConcat_1013  field1;
};

static struct StrConcat_1041 StrConcat_1041_StrConcat (  const char*  field0 ,  struct StrConcat_1013  field1 ) {
    return ( struct StrConcat_1041 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1040 {
    struct StrConcat_1041  field0;
    char  field1;
};

static struct StrConcat_1040 StrConcat_1040_StrConcat (  struct StrConcat_1041  field0 ,  char  field1 ) {
    return ( struct StrConcat_1040 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1042 (    struct StrConcat_1041  self1169 ) {
    struct StrConcat_1041  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str1014 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1039 (    struct StrConcat_1040  self1169 ) {
    struct StrConcat_1040  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1042 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1046 {
    struct StrConcat_939  field0;
    char  field1;
};

static struct StrConcat_1046 StrConcat_1046_StrConcat (  struct StrConcat_939  field0 ,  char  field1 ) {
    return ( struct StrConcat_1046 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1045 {
    struct StrConcat_1046  field0;
    uint32_t  field1;
};

static struct StrConcat_1045 StrConcat_1045_StrConcat (  struct StrConcat_1046  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1045 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1044 {
    struct StrConcat_1045  field0;
    char  field1;
};

static struct StrConcat_1044 StrConcat_1044_StrConcat (  struct StrConcat_1045  field0 ,  char  field1 ) {
    return ( struct StrConcat_1044 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1049 (    struct StrConcat_939  self1169 ) {
    struct StrConcat_939  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str919 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1048 (    struct StrConcat_1046  self1169 ) {
    struct StrConcat_1046  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1049 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1047 (    struct StrConcat_1045  self1169 ) {
    struct StrConcat_1045  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1048 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str919 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1043 (    struct StrConcat_1044  self1169 ) {
    struct StrConcat_1044  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1047 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1052 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_1052 StrConcat_1052_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1052 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1051 {
    struct StrConcat_1052  field0;
    char  field1;
};

static struct StrConcat_1051 StrConcat_1051_StrConcat (  struct StrConcat_1052  field0 ,  char  field1 ) {
    return ( struct StrConcat_1051 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1053 (    struct StrConcat_1052  self1169 ) {
    struct StrConcat_1052  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str921 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1050 (    struct StrConcat_1051  self1169 ) {
    struct StrConcat_1051  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1053 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_1058 {
    struct StrConcat_1051  field0;
    uint8_t  field1;
};

static struct StrConcat_1058 StrConcat_1058_StrConcat (  struct StrConcat_1051  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1058 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1057 {
    struct StrConcat_1058  field0;
    char  field1;
};

static struct StrConcat_1057 StrConcat_1057_StrConcat (  struct StrConcat_1058  field0 ,  char  field1 ) {
    return ( struct StrConcat_1057 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1056 {
    struct StrConcat_1057  field0;
    uint8_t  field1;
};

static struct StrConcat_1056 StrConcat_1056_StrConcat (  struct StrConcat_1057  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1056 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1055 {
    struct StrConcat_1056  field0;
    char  field1;
};

static struct StrConcat_1055 StrConcat_1055_StrConcat (  struct StrConcat_1056  field0 ,  char  field1 ) {
    return ( struct StrConcat_1055 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str1061 (    struct StrConcat_1058  self1169 ) {
    struct StrConcat_1058  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1050 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str921 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1060 (    struct StrConcat_1057  self1169 ) {
    struct StrConcat_1057  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1061 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1059 (    struct StrConcat_1056  self1169 ) {
    struct StrConcat_1056  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1060 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str921 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1054 (    struct StrConcat_1055  self1169 ) {
    struct StrConcat_1055  dref1170 = (  self1169 );
    if ( true ) {
        ( (  print_dash_str1059 ) ( ( dref1170 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1170 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_397   chars1062 (    struct StrConcat_924  self1175 ) {
    return ( (  into_dash_iter923 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_404   chars1063 (    struct StrConcat_939  self1175 ) {
    return ( (  into_dash_iter938 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_408   chars1064 (    struct StrConcat_941  self1175 ) {
    return ( (  into_dash_iter940 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_418   chars1065 (    struct StrConcat_967  self1175 ) {
    return ( (  into_dash_iter966 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_429   chars1066 (    struct StrConcat_976  self1175 ) {
    return ( (  into_dash_iter975 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_397   chars1067 (    struct StrConcat_981  self1175 ) {
    return ( (  into_dash_iter980 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_397   chars1068 (    struct StrConcat_995  self1175 ) {
    return ( (  into_dash_iter994 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_433   chars1069 (    struct StrConcat_999  self1175 ) {
    return ( (  into_dash_iter998 ) ( (  self1175 ) ) );
}

static  struct StrConcatIter_438   chars1070 (    struct StrConcat_1010  self1175 ) {
    return ( (  into_dash_iter1009 ) ( (  self1175 ) ) );
}

static  struct TakeWhile_527   chars1071 (    struct TakeWhile_527  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_531   chars1072 (    struct TakeWhile_531  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_536   chars1073 (    struct TakeWhile_536  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_538   chars1074 (    struct TakeWhile_538  self1285 ) {
    return (  self1285 );
}

static  struct TakeWhile_549   chars1075 (    struct TakeWhile_549  self1285 ) {
    return (  self1285 );
}

static  bool   eq1076 (    struct TakeWhile_538  l1295 ,    char  r1297 ) {
    struct TakeWhile_538  temp1077 = ( (  chars1074 ) ( (  l1295 ) ) );
    struct TakeWhile_538 *  l1298 = ( &temp1077 );
    struct AppendIter_401  temp1078 = ( (  chars914 ) ( (  r1297 ) ) );
    struct AppendIter_401 *  r1299 = ( &temp1078 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next547 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next459 ) ( (  r1299 ) ) );
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

static  bool   eq1079 (    struct TakeWhile_538  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_538  temp1080 = ( (  chars1074 ) ( (  l1295 ) ) );
    struct TakeWhile_538 *  l1298 = ( &temp1080 );
    struct ConstStrIter_329  temp1081 = ( (  chars913 ) ( (  r1297 ) ) );
    struct ConstStrIter_329 *  r1299 = ( &temp1081 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next547 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next346 ) ( (  r1299 ) ) );
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

static  bool   eq1082 (    struct TakeWhile_549  l1295 ,    const char*  r1297 ) {
    struct TakeWhile_549  temp1083 = ( (  chars1075 ) ( (  l1295 ) ) );
    struct TakeWhile_549 *  l1298 = ( &temp1083 );
    struct ConstStrIter_329  temp1084 = ( (  chars913 ) ( (  r1297 ) ) );
    struct ConstStrIter_329 *  r1299 = ( &temp1084 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1300 = ( (  next548 ) ( (  l1298 ) ) );
        struct Maybe_49  mrc1301 = ( (  next346 ) ( (  r1299 ) ) );
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

static  uint8_t   char_dash_u81085 (    char  c1315 ) {
    return ( (  cast205 ) ( (  c1315 ) ) );
}

static  char   i32_dash_char1086 (    int32_t  i1318 ) {
    return ( (  cast206 ) ( (  i1318 ) ) );
}

static  bool   eq1087 (    const char*  l1331 ,    const char*  r1333 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1331 ) ,  (  r1333 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable1088 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined151 ) ( ) );
}

static  enum Unit_13   unreachable1089 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined153 ) ( ) );
}

static  enum Unit_13   panic1090 (    struct StrConcat_1012  errmsg1346 ) {
    ( (  print_dash_str1015 ) ( ( ( StrConcat_1016_StrConcat ) ( ( ( StrConcat_1017_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1091 (    struct StrConcat_957  errmsg1346 ) {
    ( (  print_dash_str1021 ) ( ( ( StrConcat_1022_StrConcat ) ( ( ( StrConcat_1023_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1092 (    const char*  errmsg1346 ) {
    ( (  print_dash_str1011 ) ( ( ( StrConcat_1012_StrConcat ) ( ( ( StrConcat_1013_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1093 (    struct StrConcat_1026  errmsg1346 ) {
    ( (  print_dash_str1027 ) ( ( ( StrConcat_1028_StrConcat ) ( ( ( StrConcat_1029_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1094 (    struct StrConcat_924  errmsg1346 ) {
    ( (  print_dash_str1035 ) ( ( ( StrConcat_1036_StrConcat ) ( ( ( StrConcat_1037_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1095 (    struct StrConcat_1013  errmsg1346 ) {
    ( (  print_dash_str1039 ) ( ( ( StrConcat_1040_StrConcat ) ( ( ( StrConcat_1041_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1346 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   panic_prime_1096 (    const char*  errmsg1349 ) {
    ( (  print_dash_str1011 ) ( ( ( StrConcat_1012_StrConcat ) ( ( ( StrConcat_1013_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1349 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   assert1097 (    bool  cond1352 ,    const char*  msg1354 ) {
    if ( ( ! (  cond1352 ) ) ) {
        ( (  print_dash_str1011 ) ( ( ( StrConcat_1012_StrConcat ) ( ( ( StrConcat_1013_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1354 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1098 (    struct Maybe_287  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_287  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_287_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_287_Just_t ) {
        return ( dref1362 .stuff .Maybe_287_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1099 (    struct Maybe_335  x1359 ,    struct StrConcat_1012  errmsg1361 ) {
    struct Maybe_335  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_335_None_t ) {
        ( (  panic1090 ) ( (  errmsg1361 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_335_Just_t ) {
        return ( dref1362 .stuff .Maybe_335_Just_s .field0 );
    }
}

struct Maybe_1101 {
    enum {
        Maybe_1101_None_t,
        Maybe_1101_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58  field0;
        } Maybe_1101_Just_s;
    } stuff;
};

static struct Maybe_1101 Maybe_1101_Just (  struct Cell_58  field0 ) {
    return ( struct Maybe_1101 ) { .tag = Maybe_1101_Just_t, .stuff = { .Maybe_1101_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58   or_dash_fail1100 (    struct Maybe_1101  x1359 ,    struct StrConcat_14  errmsg1361 ) {
    struct Maybe_1101  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1101_None_t ) {
        ( (  panic12 ) ( (  errmsg1361 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1101_Just_t ) {
        return ( dref1362 .stuff .Maybe_1101_Just_s .field0 );
    }
}

struct Maybe_1103 {
    enum {
        Maybe_1103_None_t,
        Maybe_1103_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1103_Just_s;
    } stuff;
};

static struct Maybe_1103 Maybe_1103_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1103 ) { .tag = Maybe_1103_Just_t, .stuff = { .Maybe_1103_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1102 (    struct Maybe_1103  x1359 ,    struct StrConcat_957  errmsg1361 ) {
    struct Maybe_1103  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1103_None_t ) {
        ( (  panic1091 ) ( (  errmsg1361 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1103_Just_t ) {
        return ( dref1362 .stuff .Maybe_1103_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1104 (    struct Maybe_335  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_335  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_335_None_t ) {
        ( (  panic1092 ) ( (  errmsg1361 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_335_Just_t ) {
        return ( dref1362 .stuff .Maybe_335_Just_s .field0 );
    }
}

struct Maybe_1106 {
    enum {
        Maybe_1106_None_t,
        Maybe_1106_Just_t,
    } tag;
    union {
        struct {
            struct Cell_58 *  field0;
        } Maybe_1106_Just_s;
    } stuff;
};

static struct Maybe_1106 Maybe_1106_Just (  struct Cell_58 *  field0 ) {
    return ( struct Maybe_1106 ) { .tag = Maybe_1106_Just_t, .stuff = { .Maybe_1106_Just_s = { .field0 = field0 } } };
};

static  struct Cell_58 *   or_dash_fail1105 (    struct Maybe_1106  x1359 ,    const char*  errmsg1361 ) {
    struct Maybe_1106  dref1362 = (  x1359 );
    if ( dref1362.tag == Maybe_1106_None_t ) {
        ( (  panic1092 ) ( (  errmsg1361 ) ) );
        return ( (  undefined155 ) ( ) );
    }
    else if ( dref1362.tag == Maybe_1106_Just_t ) {
        return ( dref1362 .stuff .Maybe_1106_Just_s .field0 );
    }
}

static  struct Cursor_170   or_dash_else1107 (    struct Maybe_171  self1366 ,    struct Cursor_170  alt1368 ) {
    struct Maybe_171  dref1369 = (  self1366 );
    if ( dref1369.tag == Maybe_171_None_t ) {
        return (  alt1368 );
    }
    else if ( dref1369.tag == Maybe_171_Just_t ) {
        return ( dref1369 .stuff .Maybe_171_Just_s .field0 );
    }
}

static  struct Slice_301   empty1108 (  ) {
    return ( (struct Slice_301) { .f_ptr = ( (  null_dash_ptr278 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1109 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr279 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_389   empty1110 (  ) {
    return ( (struct Slice_389) { .f_ptr = ( (  null_dash_ptr281 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1111 (    struct Slice_301  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1395 = ( (  offset_dash_ptr159 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Cell_58 *   get_dash_ptr1112 (    struct Slice_601  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1395 = ( (  offset_dash_ptr165 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

static  struct Action_168 *   get_dash_ptr1113 (    struct Slice_389  slice1392 ,    size_t  i1394 ) {
    if ( ( (  cmp9 ( (  i1394 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1394 ) , ( (  slice1392 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1394 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1392 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Action_168 *  elem_dash_ptr1395 = ( (  offset_dash_ptr167 ) ( ( (  slice1392 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1394 ) ) ) ) );
    return (  elem_dash_ptr1395 );
}

struct Slice_1115 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_287   try_dash_get1114 (    struct Slice_1115  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_287) { .tag = Maybe_287_None_t } );
    }
    const char* *  elem_dash_ptr1401 = ( (  offset_dash_ptr157 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_287_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  struct Maybe_1101   try_dash_get1116 (    struct Slice_601  slice1398 ,    size_t  i1400 ) {
    if ( ( (  cmp9 ( (  i1400 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1400 ) , ( (  slice1398 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1101) { .tag = Maybe_1101_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1401 = ( (  offset_dash_ptr165 ) ( ( (  slice1398 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1400 ) ) ) ) );
    return ( ( Maybe_1101_Just ) ( ( * (  elem_dash_ptr1401 ) ) ) );
}

static  const char*   get1117 (    struct Slice_1115  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1098 ) ( ( (  try_dash_get1114 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1118 (    struct Slice_601  slice1404 ,    size_t  i1406 ) {
    return ( (  or_dash_fail1100 ) ( ( (  try_dash_get1116 ) ( (  slice1404 ) ,  (  i1406 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1406 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1404 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1119 (    struct Slice_301  slice1409 ,    size_t  i1411 ,    struct List_3  x1413 ) {
    struct List_3 *  ep1414 = ( (  get_dash_ptr1111 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1120 (    struct Slice_5  slice1409 ,    size_t  i1411 ,    char  x1413 ) {
    char *  ep1414 = ( (  get_dash_ptr30 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1121 (    struct Slice_601  slice1409 ,    size_t  i1411 ,    struct Cell_58  x1413 ) {
    struct Cell_58 *  ep1414 = ( (  get_dash_ptr1112 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1122 (    struct Slice_389  slice1409 ,    size_t  i1411 ,    struct Action_168  x1413 ) {
    struct Action_168 *  ep1414 = ( (  get_dash_ptr1113 ) ( (  slice1409 ) ,  (  i1411 ) ) );
    (*  ep1414 ) = (  x1413 );
    return ( Unit_13_Unit );
}

static  struct Slice_389   subslice1123 (    struct Slice_389  slice1417 ,    size_t  from1419 ,    size_t  to1421 ) {
    struct Action_168 *  begin_dash_ptr1422 = ( (  offset_dash_ptr167 ) ( ( (  slice1417 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1419 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1419 ) , (  to1421 ) ) != 0 ) || (  cmp9 ( (  from1419 ) , ( (  slice1417 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_389) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1423 = (  op_dash_sub99 ( ( (  min306 ) ( (  to1421 ) ,  ( (  slice1417 ) .f_count ) ) ) , (  from1419 ) ) );
    return ( (struct Slice_389) { .f_ptr = (  begin_dash_ptr1422 ) , .f_count = (  count1423 ) } );
}

static  struct Slice_5   from1124 (    struct Slice_5  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice314 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct Slice_389   from1125 (    struct Slice_389  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice1123 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct Slice_301   from1126 (    struct Slice_301  slice1426 ,    size_t  from1428 ) {
    return ( (  subslice305 ) ( (  slice1426 ) ,  (  from1428 ) ,  ( (  slice1426 ) .f_count ) ) );
}

static  struct SliceAddressIter_666   addresses1127 (    struct Slice_301  slice1475 ) {
    return ( (struct SliceAddressIter_666) { .f_slice = (  slice1475 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam613 (   struct env613 env ,    struct Tuple2_366  dref1489 ) {
    return ( (  set1119 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size290 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1128 (    struct Slice_301  src1486 ,    struct Slice_301  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1093 ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env613 envinst613 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each612 ) ( ( (  zip499 ) ( (  src1486 ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv613){ .fun = lam613, .env = envinst613 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam629 (   struct env629 env ,    struct Tuple2_372  dref1489 ) {
    return ( (  set1120 ) ( ( env.dest1488 ) ,  ( (  i32_dash_size290 ) ( ( dref1489 .field1 ) ) ) ,  ( dref1489 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1129 (    struct Slice_5  src1486 ,    struct Slice_5  dest1488 ) {
    if ( (  cmp9 ( ( (  src1486 ) .f_count ) , ( (  dest1488 ) .f_count ) ) == 2 ) ) {
        ( (  panic1093 ) ( ( ( StrConcat_1026_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1486 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1488 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env629 envinst629 = {
        .dest1488 =  dest1488 ,
    };
    ( (  for_dash_each628 ) ( ( (  zip500 ) ( (  src1486 ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv629){ .fun = lam629, .env = envinst629 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1131 (    struct Tuple2_446  dref1497 ) {
    return (  eq47 ( ( dref1497 .field0 ) , ( dref1497 .field1 ) ) );
}

static  bool   eq1130 (    struct Slice_5  l1494 ,    struct Slice_5  r1496 ) {
    if ( ( !  eq45 ( ( (  l1494 ) .f_count ) , ( (  r1496 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all820 ) ( ( (  zip505 ) ( (  l1494 ) ,  (  r1496 ) ) ) ,  (  lam1131 ) ) );
}

static  const char*   elem_dash_get1132 (    struct Slice_1115  self1502 ,    size_t  idx1504 ) {
    return ( (  get1117 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  struct Cell_58   elem_dash_get1133 (    struct Slice_601  self1502 ,    size_t  idx1504 ) {
    return ( (  get1118 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  char   elem_dash_get1134 (    struct Slice_5  self1502 ,    size_t  idx1504 ) {
    return ( (  get337 ) ( (  self1502 ) ,  (  idx1504 ) ) );
}

static  enum Unit_13   lam600 (   struct env600 env ,    int32_t  i1533 ) {
    return ( (  set1121 ) ( ( env.s1529 ) ,  ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1133 ( ( env.s1529 ) , ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1135 (    struct Slice_601  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env600 envinst600 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each599 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32292 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv600){ .fun = lam600, .env = envinst600 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam605 (   struct env605 env ,    int32_t  i1533 ) {
    return ( (  set1121 ) ( ( env.s1529 ) ,  ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1133 ( ( env.s1529 ) , ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1136 (    struct Slice_601  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env605 envinst605 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each604 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32292 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv605){ .fun = lam605, .env = envinst605 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam672 (   struct env672 env ,    int32_t  i1533 ) {
    return ( (  set1121 ) ( ( env.s1529 ) ,  ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ,  ( ( env.fun1531 ) ( (  elem_dash_get1133 ( ( env.s1529 ) , ( (  i32_dash_size290 ) ( (  i1533 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1137 (    struct Slice_601  s1529 ,    struct Cell_58 (*  fun1531 )(    struct Cell_58  ) ) {
    struct env672 envinst672 = {
        .s1529 =  s1529 ,
        .fun1531 =  fun1531 ,
    };
    ( (  for_dash_each671 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32292 ) ( (  op_dash_sub99 ( ( (  s1529 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv672){ .fun = lam672, .env = envinst672 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_854   find_dash_slice1138 (    struct Slice_5  haystack1536 ,    struct Slice_5  needle1538 ) {
    struct RangeIter_382  temp1139 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( (  haystack1536 ) .f_count ) ) ) , ( (  size_dash_i32292 ) ( ( (  needle1538 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1140 =  next383 (&temp1139);
        if (  __cond1140 .tag == 0 ) {
            break;
        }
        int32_t  i1540 =  __cond1140 .stuff .Maybe_348_Just_s .field0;
        if ( (  eq1130 ( ( (  subslice314 ) ( (  haystack1536 ) ,  ( (  i32_dash_size290 ) ( (  i1540 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( (  i1540 ) ) ) , ( (  needle1538 ) .f_count ) ) ) ) ) , (  needle1538 ) ) ) ) {
            return ( ( Maybe_854_Just ) ( ( (  i32_dash_size290 ) ( (  i1540 ) ) ) ) );
        }
    }
    return ( (struct Maybe_854) { .tag = Maybe_854_None_t } );
}

static  struct Maybe_854   find_dash_last_dash_occurence_dash_of_dash_slice1141 (    struct Slice_5  haystack1543 ,    struct Slice_5  needle1545 ) {
    struct Maybe_854  occ1546 = ( (struct Maybe_854) { .tag = Maybe_854_None_t } );
    struct RangeIter_382  temp1142 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( (  haystack1543 ) .f_count ) ) ) , ( (  size_dash_i32292 ) ( ( (  needle1545 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1143 =  next383 (&temp1142);
        if (  __cond1143 .tag == 0 ) {
            break;
        }
        int32_t  i1548 =  __cond1143 .stuff .Maybe_348_Just_s .field0;
        if ( (  eq1130 ( ( (  subslice314 ) ( (  haystack1543 ) ,  ( (  i32_dash_size290 ) ( (  i1548 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( (  i1548 ) ) ) , ( (  needle1545 ) .f_count ) ) ) ) ) , (  needle1545 ) ) ) ) {
            occ1546 = ( ( Maybe_854_Just ) ( ( (  i32_dash_size290 ) ( (  i1548 ) ) ) ) );
        }
    }
    return (  occ1546 );
}

static  enum CAllocator_4   idc1144 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_301   allocate1145 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize173 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1564 = ( (  cast_dash_ptr216 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_301) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_5   allocate1146 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize176 ) ( ) ) ) .f_size );
    char *  ptr1564 = ( (  cast_dash_ptr218 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_601   allocate1147 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize179 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1564 = ( (  cast_dash_ptr231 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_601) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  struct Slice_389   allocate1148 (    enum CAllocator_4  dref1560 ,    size_t  count1562 ) {
    if (!(  dref1560 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1563 = ( ( ( (  get_dash_typesize182 ) ( ) ) ) .f_size );
    struct Action_168 *  ptr1564 = ( (  cast_dash_ptr237 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1563 ) , (  count1562 ) ) ) ) ) ) );
    return ( (struct Slice_389) { .f_ptr = (  ptr1564 ) , .f_count = (  count1562 ) } );
}

static  enum Unit_13   free1149 (    enum CAllocator_4  dref1566 ,    struct Slice_301  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr215 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1150 (    enum CAllocator_4  dref1566 ,    struct Slice_5  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1151 (    enum CAllocator_4  dref1566 ,    struct Slice_389  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr238 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1153 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1152 (    enum CAllocator_4  dref1566 ,    struct Slice_1153  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr239 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1154 (    enum CAllocator_4  dref1566 ,    struct Slice_601  slice1568 ) {
    if (!(  dref1566 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr241 ) ( ( (  slice1568 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct DynStr_134   clone_dash_01155 (    struct DynStr_134  s1610 ,    enum CAllocator_4  al1612 ) {
    size_t  cnt1613 = ( ( (  s1610 ) .f_contents ) .f_count );
    struct Slice_5  nus1614 = ( (  allocate1146 ) ( (  al1612 ) ,  (  op_dash_add98 ( (  cnt1613 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to1129 ) ( ( (  s1610 ) .f_contents ) ,  (  nus1614 ) ) );
    ( (  set1120 ) ( (  nus1614 ) ,  (  cnt1613 ) ,  ( (  from_dash_charlike1 ) ( ( "\x00" ) ) ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( (  nus1614 ) .f_ptr ) , .f_count = (  cnt1613 ) } ) } );
}

static  struct DynStr_134   clone1156 (    struct DynStr_134  s1617 ,    enum CAllocator_4  al1619 ) {
    return ( (  clone_dash_01155 ) ( (  s1617 ) ,  (  al1619 ) ) );
}

static  uint8_t *   get_dash_ptr1157 (    struct Array_142 *  arr1640 ,    size_t  i1643 ) {
    if ( ( (  cmp9 ( (  i1643 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1643 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1643 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1644 = ( ( (  cast_dash_ptr223 ) ( (  arr1640 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1644 ) ,  ( (int64_t ) (  i1643 ) ) ) );
}

static  char *   get_dash_ptr1158 (    struct Array_196 *  arr1640 ,    size_t  i1643 ) {
    if ( ( (  cmp9 ( (  i1643 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1643 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic732 ) ( ( ( StrConcat_733_StrConcat ) ( ( ( StrConcat_734_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1643 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1644 = ( ( (  cast_dash_ptr232 ) ( (  arr1640 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1644 ) ,  ( (int64_t ) (  i1643 ) ) ) );
}

static  enum Unit_13   set1159 (    struct Array_142 *  arr1653 ,    size_t  i1656 ,    uint8_t  e1658 ) {
    uint8_t *  p1659 = ( (  get_dash_ptr1157 ) ( (  arr1653 ) ,  (  i1656 ) ) );
    (*  p1659 ) = (  e1658 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1160 (    struct Array_196 *  arr1653 ,    size_t  i1656 ,    char  e1658 ) {
    char *  p1659 = ( (  get_dash_ptr1158 ) ( (  arr1653 ) ,  (  i1656 ) ) );
    (*  p1659 ) = (  e1658 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1161 (    struct Array_196 *  arr1662 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast209 ) ( (  arr1662 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1162 (    char  c1723 ) {
    return ( ( (  eq47 ( (  c1723 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1723 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1723 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1163 (    char  c1726 ) {
    return ( ! ( (  is_dash_whitespace1162 ) ( (  c1726 ) ) ) );
}

static  bool   is_dash_alpha1164 (    char  c1732 ) {
    return ( ( (  between910 ) ( (  c1732 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between910 ) ( (  c1732 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1165 (    char  c1735 ) {
    return ( (  between910 ) ( (  c1735 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1166 (    char  c1738 ) {
    return ( ( (  is_dash_alpha1164 ) ( (  c1738 ) ) ) || ( (  is_dash_digit1165 ) ( (  c1738 ) ) ) );
}

static  struct LineIter_321   lines1167 (    struct DynStr_134  s1742 ) {
    return ( (struct LineIter_321) { .f_og = (  s1742 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1168 (    char  c1771 ) {
    return ( (  cmp80 ( ( (  char_dash_i32906 ) ( (  c1771 ) ) ) , ( (  char_dash_i32906 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32906 ) ( (  c1771 ) ) ) , ( (  char_dash_i32906 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_348   parse_dash_digit1169 (    char  c1774 ) {
    if ( ( (  is_dash_digit1168 ) ( (  c1774 ) ) ) ) {
        return ( ( Maybe_348_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32906 ) ( (  c1774 ) ) ) , ( (  char_dash_i32906 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
    }
}

static  struct Maybe_762   sequence_dash_maybe1171 (    char  e1780 ,    struct Maybe_762  b1782 ) {
    struct Maybe_762  dref1783 = (  b1782 );
    if ( dref1783.tag == Maybe_762_None_t ) {
        return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
    }
    else if ( dref1783.tag == Maybe_762_Just_t ) {
        struct Maybe_348  dref1785 = ( (  parse_dash_digit1169 ) ( (  e1780 ) ) );
        if ( dref1785.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
        }
        else if ( dref1785.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_762_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1783 .stuff .Maybe_762_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64289 ) ( ( dref1785 .stuff .Maybe_348_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_762   parse_dash_int1170 (    struct TakeWhile_527  s1777 ) {
    struct TakeWhile_527  cs1787 = ( (  chars1071 ) ( (  s1777 ) ) );
    struct Maybe_49  dref1788 = ( (  head823 ) ( (  cs1787 ) ) );
    if ( dref1788.tag == Maybe_49_Just_t ) {
        return ( (  reduce761 ) ( (  cs1787 ) ,  ( ( Maybe_762_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1171 ) ) );
    }
    else if ( dref1788.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
    }
}

static  struct Maybe_762   sequence_dash_maybe1173 (    char  e1780 ,    struct Maybe_762  b1782 ) {
    struct Maybe_762  dref1783 = (  b1782 );
    if ( dref1783.tag == Maybe_762_None_t ) {
        return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
    }
    else if ( dref1783.tag == Maybe_762_Just_t ) {
        struct Maybe_348  dref1785 = ( (  parse_dash_digit1169 ) ( (  e1780 ) ) );
        if ( dref1785.tag == Maybe_348_None_t ) {
            return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
        }
        else if ( dref1785.tag == Maybe_348_Just_t ) {
            return ( ( Maybe_762_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1783 .stuff .Maybe_762_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64289 ) ( ( dref1785 .stuff .Maybe_348_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_762   parse_dash_int1172 (    struct TakeWhile_538  s1777 ) {
    struct TakeWhile_538  cs1787 = ( (  chars1074 ) ( (  s1777 ) ) );
    struct Maybe_49  dref1788 = ( (  head827 ) ( (  cs1787 ) ) );
    if ( dref1788.tag == Maybe_49_Just_t ) {
        return ( (  reduce772 ) ( (  cs1787 ) ,  ( ( Maybe_762_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1173 ) ) );
    }
    else if ( dref1788.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1174 (    struct List_302 *  list1793 ,    size_t  i1795 ) {
    if ( ( (  cmp9 ( (  i1795 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1795 ) , ( ( * (  list1793 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1795 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1793 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1111 ) ( ( ( * (  list1793 ) ) .f_elements ) ,  (  i1795 ) ) );
}

static  struct Action_168 *   get_dash_ptr1175 (    struct List_849 *  list1793 ,    size_t  i1795 ) {
    if ( ( (  cmp9 ( (  i1795 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1795 ) , ( ( * (  list1793 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1795 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1793 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1113 ) ( ( ( * (  list1793 ) ) .f_elements ) ,  (  i1795 ) ) );
}

static  struct Action_168   get1176 (    struct List_849 *  list1803 ,    size_t  i1805 ) {
    return ( * ( (  get_dash_ptr1175 ) ( (  list1803 ) ,  (  i1805 ) ) ) );
}

static  struct List_3   get1177 (    struct List_302 *  list1803 ,    size_t  i1805 ) {
    return ( * ( (  get_dash_ptr1174 ) ( (  list1803 ) ,  (  i1805 ) ) ) );
}

static  struct Maybe_49   try_dash_get1178 (    struct List_3 *  list1808 ,    size_t  i1810 ) {
    if ( (  cmp9 ( (  i1810 ) , ( ( * (  list1808 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1808 ) ,  (  i1810 ) ) ) ) );
}

static  struct Maybe_334   try_dash_get1179 (    struct List_302 *  list1808 ,    size_t  i1810 ) {
    if ( (  cmp9 ( (  i1810 ) , ( ( * (  list1808 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_334) { .tag = Maybe_334_None_t } );
    }
    return ( ( Maybe_334_Just ) ( ( (  get1177 ) ( (  list1808 ) ,  (  i1810 ) ) ) ) );
}

static  enum Unit_13   set1180 (    struct List_302 *  list1813 ,    size_t  i1815 ,    struct List_3  elem1817 ) {
    if ( ( (  cmp9 ( (  i1815 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1815 ) , ( ( * (  list1813 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1815 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1813 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1119 ) ( ( ( * (  list1813 ) ) .f_elements ) ,  (  i1815 ) ,  (  elem1817 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1181 (    struct List_3 *  list1813 ,    size_t  i1815 ,    char  elem1817 ) {
    if ( ( (  cmp9 ( (  i1815 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1815 ) , ( ( * (  list1813 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1815 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1813 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1120 ) ( ( ( * (  list1813 ) ) .f_elements ) ,  (  i1815 ) ,  (  elem1817 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_302   mk1182 (    enum CAllocator_4  al1823 ) {
    struct Slice_301  elements1824 = ( (  empty1108 ) ( ) );
    return ( (struct List_302) { .f_al = (  al1823 ) , .f_elements = (  elements1824 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1183 (    enum CAllocator_4  al1823 ) {
    struct Slice_5  elements1824 = ( (  empty1109 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1823 ) , .f_elements = (  elements1824 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_849   mk1184 (    enum CAllocator_4  al1823 ) {
    struct Slice_389  elements1824 = ( (  empty1110 ) ( ) );
    return ( (struct List_849) { .f_al = (  al1823 ) , .f_elements = (  elements1824 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1185 (    struct List_3 *  list1827 ) {
    ( (  free1150 ) ( ( ( * (  list1827 ) ) .f_al ) ,  ( ( * (  list1827 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1186 (    struct List_302 *  list1827 ) {
    ( (  free1149 ) ( ( ( * (  list1827 ) ) .f_al ) ,  ( ( * (  list1827 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam576 (   struct env576 env ,    struct Tuple2_366  dref1835 ) {
    return ( (  set1119 ) ( ( env.new_dash_slice1834 ) ,  ( (  i32_dash_size290 ) ( ( dref1835 .field1 ) ) ) ,  ( dref1835 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full590 (   struct env590 env ,    struct List_302 *  list1833 ) {
    if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1833 ) .f_elements = ( (  allocate1145 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( env.starting_dash_size1828 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , ( ( ( * (  list1833 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_301  new_dash_slice1834 = ( (  allocate1145 ) ( ( ( * (  list1833 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1833 ) ) .f_count ) , ( env.growth_dash_factor1829 ) ) ) ) );
            struct env576 envinst576 = {
                .new_dash_slice1834 =  new_dash_slice1834 ,
            };
            ( (  for_dash_each575 ) ( ( (  zip499 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv576){ .fun = lam576, .env = envinst576 } ) ) );
            ( (  free1149 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( ( * (  list1833 ) ) .f_elements ) ) );
            (*  list1833 ) .f_elements = (  new_dash_slice1834 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam584 (   struct env584 env ,    struct Tuple2_372  dref1835 ) {
    return ( (  set1120 ) ( ( env.new_dash_slice1834 ) ,  ( (  i32_dash_size290 ) ( ( dref1835 .field1 ) ) ) ,  ( dref1835 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full326 (   struct env326 env ,    struct List_3 *  list1833 ) {
    if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1833 ) .f_elements = ( (  allocate1146 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( env.starting_dash_size1828 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , ( ( ( * (  list1833 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1834 = ( (  allocate1146 ) ( ( ( * (  list1833 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1833 ) ) .f_count ) , ( env.growth_dash_factor1829 ) ) ) ) );
            struct env584 envinst584 = {
                .new_dash_slice1834 =  new_dash_slice1834 ,
            };
            ( (  for_dash_each583 ) ( ( (  zip500 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv584){ .fun = lam584, .env = envinst584 } ) ) );
            ( (  free1150 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( ( * (  list1833 ) ) .f_elements ) ) );
            (*  list1833 ) .f_elements = (  new_dash_slice1834 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1187 {
    ;
    size_t  starting_dash_size1828;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1829;
};

static  enum Unit_13   lam641 (   struct env641 env ,    struct Tuple2_441  dref1835 ) {
    return ( (  set1122 ) ( ( env.new_dash_slice1834 ) ,  ( (  i32_dash_size290 ) ( ( dref1835 .field1 ) ) ) ,  ( dref1835 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1187 (   struct env1187 env ,    struct List_849 *  list1833 ) {
    if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1833 ) .f_elements = ( (  allocate1148 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( env.starting_dash_size1828 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1833 ) ) .f_count ) , ( ( ( * (  list1833 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_389  new_dash_slice1834 = ( (  allocate1148 ) ( ( ( * (  list1833 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1833 ) ) .f_count ) , ( env.growth_dash_factor1829 ) ) ) ) );
            struct env641 envinst641 = {
                .new_dash_slice1834 =  new_dash_slice1834 ,
            };
            ( (  for_dash_each640 ) ( ( (  zip503 ) ( ( ( * (  list1833 ) ) .f_elements ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv641){ .fun = lam641, .env = envinst641 } ) ) );
            ( (  free1151 ) ( ( ( * (  list1833 ) ) .f_al ) ,  ( ( * (  list1833 ) ) .f_elements ) ) );
            (*  list1833 ) .f_elements = (  new_dash_slice1834 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add589 (   struct env589 env ,    struct List_302 *  list1840 ,    struct List_3  elem1842 ) {
    struct funenv590  temp1188 = ( (struct funenv590){ .fun = grow_dash_if_dash_full590, .env =  env.envinst590  } );
    ( temp1188.fun ( temp1188.env ,  (  list1840 ) ) );
    ( (  set1119 ) ( ( ( * (  list1840 ) ) .f_elements ) ,  ( ( * (  list1840 ) ) .f_count ) ,  (  elem1842 ) ) );
    (*  list1840 ) .f_count = (  op_dash_add98 ( ( ( * (  list1840 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add325 (   struct env325 env ,    struct List_3 *  list1840 ,    char  elem1842 ) {
    struct funenv326  temp1189 = ( (struct funenv326){ .fun = grow_dash_if_dash_full326, .env =  env.envinst326  } );
    ( temp1189.fun ( temp1189.env ,  (  list1840 ) ) );
    ( (  set1120 ) ( ( ( * (  list1840 ) ) .f_elements ) ,  ( ( * (  list1840 ) ) .f_count ) ,  (  elem1842 ) ) );
    (*  list1840 ) .f_count = (  op_dash_add98 ( ( ( * (  list1840 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1187 {
    enum Unit_13  (*fun) (  struct env1187  ,    struct List_849 *  );
    struct env1187 env;
};

struct env1190 {
    ;
    ;
    ;
    struct env1187 envinst1187;
    ;
    ;
};

static  enum Unit_13   add1190 (   struct env1190 env ,    struct List_849 *  list1840 ,    struct Action_168  elem1842 ) {
    struct funenv1187  temp1191 = ( (struct funenv1187){ .fun = grow_dash_if_dash_full1187, .env =  env.envinst1187  } );
    ( temp1191.fun ( temp1191.env ,  (  list1840 ) ) );
    ( (  set1122 ) ( ( ( * (  list1840 ) ) .f_elements ) ,  ( ( * (  list1840 ) ) .f_count ) ,  (  elem1842 ) ) );
    (*  list1840 ) .f_count = (  op_dash_add98 ( ( ( * (  list1840 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1192 {
    ;
    ;
    ;
    ;
    struct env325 envinst325;
    ;
    ;
    ;
    struct env326 envinst326;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1192 (   struct env1192 env ,    struct List_3 *  list1845 ,    size_t  i1847 ,    char  elem1849 ) {
    if ( ( (  cmp9 ( (  i1847 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1847 ) , ( ( * (  list1845 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1847 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1845 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv325  temp1193 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
        ( temp1193.fun ( temp1193.env ,  (  list1845 ) ,  (  elem1849 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv326  temp1194 = ( (struct funenv326){ .fun = grow_dash_if_dash_full326, .env =  env.envinst326  } );
    ( temp1194.fun ( temp1194.env ,  (  list1845 ) ) );
    size_t  ii1850 = (  op_dash_sub99 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1850 ) , (  i1847 ) ) != 0 ) ) {
        ( (  set1120 ) ( ( ( * (  list1845 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1850 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1845 ) ,  (  ii1850 ) ) ) ) );
        if ( (  eq45 ( (  ii1850 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1850 = (  op_dash_sub99 ( (  ii1850 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1120 ) ( ( ( * (  list1845 ) ) .f_elements ) ,  (  i1847 ) ,  (  elem1849 ) ) );
    (*  list1845 ) .f_count = (  op_dash_add98 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1195 {
    ;
    ;
    ;
    ;
    struct env589 envinst589;
    ;
    ;
    ;
    struct env590 envinst590;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1195 (   struct env1195 env ,    struct List_302 *  list1845 ,    size_t  i1847 ,    struct List_3  elem1849 ) {
    if ( ( (  cmp9 ( (  i1847 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1847 ) , ( ( * (  list1845 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1847 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1845 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv589  temp1196 = ( (struct funenv589){ .fun = add589, .env =  env.envinst589  } );
        ( temp1196.fun ( temp1196.env ,  (  list1845 ) ,  (  elem1849 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv590  temp1197 = ( (struct funenv590){ .fun = grow_dash_if_dash_full590, .env =  env.envinst590  } );
    ( temp1197.fun ( temp1197.env ,  (  list1845 ) ) );
    size_t  ii1850 = (  op_dash_sub99 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1850 ) , (  i1847 ) ) != 0 ) ) {
        ( (  set1119 ) ( ( ( * (  list1845 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1850 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1177 ) ( (  list1845 ) ,  (  ii1850 ) ) ) ) );
        if ( (  eq45 ( (  ii1850 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1850 = (  op_dash_sub99 ( (  ii1850 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1119 ) ( ( ( * (  list1845 ) ) .f_elements ) ,  (  i1847 ) ,  (  elem1849 ) ) );
    (*  list1845 ) .f_count = (  op_dash_add98 ( ( ( * (  list1845 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1198 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1830;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam617 (   struct env617 env ,    struct Tuple2_366  dref1856 ) {
    return ( (  set1180 ) ( ( env.list1853 ) ,  ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( ( dref1856 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_13   remove1198 (   struct env1198 env ,    struct List_302 *  list1853 ,    size_t  i1855 ) {
    if ( ( (  cmp9 ( (  i1855 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1855 ) , ( ( * (  list1853 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1855 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1853 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env617 envinst617 = {
        .list1853 =  list1853 ,
    };
    ( (  for_dash_each616 ) ( ( (  drop374 ) ( ( (  zip501 ) ( ( * (  list1853 ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1855 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv617){ .fun = lam617, .env = envinst617 } ) ) );
    (*  list1853 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1859 = ( ( ( * (  list1853 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1853 ) ) .f_count ) , ( env.shrink_dash_factor1830 ) ) ) , (  capacity1859 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1149 ) ( ( ( * (  list1853 ) ) .f_al ) ,  ( ( * (  list1853 ) ) .f_elements ) ) );
            (*  list1853 ) .f_elements = ( (  empty1108 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1860 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1853 ) ) .f_count ) , ( env.shrink_dash_factor1830 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1830 ) ) );
        struct Slice_301  new_dash_slice1861 = ( (  allocate1145 ) ( ( ( * (  list1853 ) ) .f_al ) ,  (  new_dash_size1860 ) ) );
        ( (  copy_dash_to1128 ) ( ( (  subslice305 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1853 ) ) .f_count ) ) ) ,  (  new_dash_slice1861 ) ) );
        ( (  free1149 ) ( ( ( * (  list1853 ) ) .f_al ) ,  ( ( * (  list1853 ) ) .f_elements ) ) );
        (*  list1853 ) .f_elements = (  new_dash_slice1861 );
    }
    return ( Unit_13_Unit );
}

struct env1199 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1830;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam633 (   struct env633 env ,    struct Tuple2_372  dref1856 ) {
    return ( (  set1181 ) ( ( env.list1853 ) ,  ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( ( dref1856 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1856 .field0 ) ) );
}

static  enum Unit_13   remove1199 (   struct env1199 env ,    struct List_3 *  list1853 ,    size_t  i1855 ) {
    if ( ( (  cmp9 ( (  i1855 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1855 ) , ( ( * (  list1853 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1855 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1853 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env633 envinst633 = {
        .list1853 =  list1853 ,
    };
    ( (  for_dash_each632 ) ( ( (  drop376 ) ( ( (  zip502 ) ( ( * (  list1853 ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1855 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv633){ .fun = lam633, .env = envinst633 } ) ) );
    (*  list1853 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1859 = ( ( ( * (  list1853 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1853 ) ) .f_count ) , ( env.shrink_dash_factor1830 ) ) ) , (  capacity1859 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1150 ) ( ( ( * (  list1853 ) ) .f_al ) ,  ( ( * (  list1853 ) ) .f_elements ) ) );
            (*  list1853 ) .f_elements = ( (  empty1109 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1860 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1853 ) ) .f_count ) , ( env.shrink_dash_factor1830 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1830 ) ) );
        struct Slice_5  new_dash_slice1861 = ( (  allocate1146 ) ( ( ( * (  list1853 ) ) .f_al ) ,  (  new_dash_size1860 ) ) );
        ( (  copy_dash_to1129 ) ( ( (  subslice314 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1853 ) ) .f_count ) ) ) ,  (  new_dash_slice1861 ) ) );
        ( (  free1150 ) ( ( ( * (  list1853 ) ) .f_al ) ,  ( ( * (  list1853 ) ) .f_elements ) ) );
        (*  list1853 ) .f_elements = (  new_dash_slice1861 );
    }
    return ( Unit_13_Unit );
}

static  struct Action_168   elem_dash_get1200 (    struct List_849  self1864 ,    size_t  k1866 ) {
    return ( (  get1176 ) ( ( & (  self1864 ) ) ,  (  k1866 ) ) );
}

struct funenv1199 {
    enum Unit_13  (*fun) (  struct env1199  ,    struct List_3 *  ,    size_t  );
    struct env1199 env;
};

struct env1201 {
    ;
    struct env1199 envinst1199;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   pop1201 (   struct env1201 env ,    struct List_3 *  list1875 ) {
    if ( (  eq45 ( ( ( * (  list1875 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1092 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1199  temp1202 = ( (struct funenv1199){ .fun = remove1199, .env =  env.envinst1199  } );
    return ( temp1202.fun ( temp1202.env ,  (  list1875 ) ,  (  op_dash_sub99 ( ( ( * (  list1875 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam580 (   struct env580 env ,    char  x1885 ) {
    struct funenv325  temp1203 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1203.fun ( temp1203.env ,  ( env.list1881 ) ,  (  x1885 ) ) );
}

static  enum Unit_13   add_dash_all324 (   struct env324 env ,    struct List_3 *  list1881 ,    struct DynStr_134  it1883 ) {
    struct env580 envinst580 = {
        .list1881 =  list1881 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each579 ) ( (  it1883 ) ,  ( (struct funenv580){ .fun = lam580, .env = envinst580 } ) ) );
    return ( Unit_13_Unit );
}

struct env1204 {
    struct env589 envinst589;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam588 (   struct env588 env ,    struct List_3  x1885 ) {
    struct funenv589  temp1205 = ( (struct funenv589){ .fun = add589, .env =  env.envinst589  } );
    return ( temp1205.fun ( temp1205.env ,  ( env.list1881 ) ,  (  x1885 ) ) );
}

static  enum Unit_13   add_dash_all1204 (   struct env1204 env ,    struct List_302 *  list1881 ,    struct Map_320  it1883 ) {
    struct env588 envinst588 = {
        .list1881 =  list1881 ,
        .envinst589 = env.envinst589 ,
    };
    ( (  for_dash_each587 ) ( (  it1883 ) ,  ( (struct funenv588){ .fun = lam588, .env = envinst588 } ) ) );
    return ( Unit_13_Unit );
}

struct env1206 {
    ;
    struct env325 envinst325;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam621 (   struct env621 env ,    char  x1885 ) {
    struct funenv325  temp1207 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1207.fun ( temp1207.env ,  ( env.list1881 ) ,  (  x1885 ) ) );
}

static  enum Unit_13   add_dash_all1206 (   struct env1206 env ,    struct List_3 *  list1881 ,    struct Slice_5  it1883 ) {
    struct env621 envinst621 = {
        .list1881 =  list1881 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each620 ) ( (  it1883 ) ,  ( (struct funenv621){ .fun = lam621, .env = envinst621 } ) ) );
    return ( Unit_13_Unit );
}

struct env1208 {
    ;
    ;
    struct env325 envinst325;
    ;
    ;
    ;
};

static  enum Unit_13   lam625 (   struct env625 env ,    char  x1885 ) {
    struct funenv325  temp1209 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1209.fun ( temp1209.env ,  ( env.list1881 ) ,  (  x1885 ) ) );
}

static  enum Unit_13   add_dash_all1208 (   struct env1208 env ,    struct List_3 *  list1881 ,    struct List_3 *  it1883 ) {
    struct env625 envinst625 = {
        .list1881 =  list1881 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each624 ) ( (  it1883 ) ,  ( (struct funenv625){ .fun = lam625, .env = envinst625 } ) ) );
    return ( Unit_13_Unit );
}

struct env1210 {
    ;
    ;
    ;
    struct env325 envinst325;
    ;
    ;
};

static  enum Unit_13   lam649 (   struct env649 env ,    char  x1885 ) {
    struct funenv325  temp1211 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1211.fun ( temp1211.env ,  ( env.list1881 ) ,  (  x1885 ) ) );
}

static  enum Unit_13   add_dash_all1210 (   struct env1210 env ,    struct List_3 *  list1881 ,    struct TakeWhile_529  it1883 ) {
    struct env649 envinst649 = {
        .list1881 =  list1881 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each648 ) ( (  it1883 ) ,  ( (struct funenv649){ .fun = lam649, .env = envinst649 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1212 (    struct List_3 *  l1888 ,    size_t  new_dash_count1890 ) {
    (*  l1888 ) .f_count = ( (  min306 ) ( (  new_dash_count1890 ) ,  ( ( * (  l1888 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1213 (    struct List_849 *  l1888 ,    size_t  new_dash_count1890 ) {
    (*  l1888 ) .f_count = ( (  min306 ) ( (  new_dash_count1890 ) ,  ( ( * (  l1888 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list323 (   struct env323 env ,    struct DynStr_134  it1893 ,    enum CAllocator_4  al1895 ) {
    struct List_3  temp1214 = ( (  mk1183 ) ( (  al1895 ) ) );
    struct List_3 *  l1896 = ( &temp1214 );
    struct funenv324  temp1215 = ( (struct funenv324){ .fun = add_dash_all324, .env =  env.envinst324  } );
    ( temp1215.fun ( temp1215.env ,  (  l1896 ) ,  (  it1893 ) ) );
    return ( * (  l1896 ) );
}

struct funenv1204 {
    enum Unit_13  (*fun) (  struct env1204  ,    struct List_302 *  ,    struct Map_320  );
    struct env1204 env;
};

struct env1216 {
    ;
    ;
    ;
    struct env1204 envinst1204;
    ;
    ;
};

static  struct List_302   to_dash_list1216 (   struct env1216 env ,    struct Map_320  it1893 ,    enum CAllocator_4  al1895 ) {
    struct List_302  temp1217 = ( (  mk1182 ) ( (  al1895 ) ) );
    struct List_302 *  l1896 = ( &temp1217 );
    struct funenv1204  temp1218 = ( (struct funenv1204){ .fun = add_dash_all1204, .env =  env.envinst1204  } );
    ( temp1218.fun ( temp1218.env ,  (  l1896 ) ,  (  it1893 ) ) );
    return ( * (  l1896 ) );
}

static  struct Slice_5   to_dash_slice1219 (    struct List_3  l1899 ) {
    char *  ptr1900 = ( ( (  l1899 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1900 ) , .f_count = ( (  l1899 ) .f_count ) } );
}

static  struct Slice_389   to_dash_slice1220 (    struct List_849  l1899 ) {
    struct Action_168 *  ptr1900 = ( ( (  l1899 ) .f_elements ) .f_ptr );
    return ( (struct Slice_389) { .f_ptr = (  ptr1900 ) , .f_count = ( (  l1899 ) .f_count ) } );
}

static  struct Slice_301   to_dash_slice1221 (    struct List_302  l1899 ) {
    struct List_3 *  ptr1900 = ( ( (  l1899 ) .f_elements ) .f_ptr );
    return ( (struct Slice_301) { .f_ptr = (  ptr1900 ) , .f_count = ( (  l1899 ) .f_count ) } );
}

static  struct SliceAddressIter_666   addresses1222 (    struct List_302  l1903 ) {
    return ( (  addresses1127 ) ( ( (  to_dash_slice1221 ) ( (  l1903 ) ) ) ) );
}

static  size_t   size1223 (    struct List_3 *  l1906 ) {
    return ( ( * (  l1906 ) ) .f_count );
}

static  size_t   size1224 (    struct List_302 *  l1906 ) {
    return ( ( * (  l1906 ) ) .f_count );
}

static  struct Maybe_1103   hex_dash_digit1225 (    char  c1934 ) {
    if ( ( (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1103_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u81085 ) ( (  c1934 ) ) ) , ( (  char_dash_u81085 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1103_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81085 ) ( (  c1934 ) ) ) , ( (  char_dash_u81085 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp905 ( (  c1934 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1103_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81085 ) ( (  c1934 ) ) ) , ( (  char_dash_u81085 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1103) { .tag = Maybe_1103_None_t } );
}

static  uint32_t   lam1227 (    char  c1939 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64297 ) ( ( (  or_dash_fail1102 ) ( ( (  hex_dash_digit1225 ) ( (  c1939 ) ) ) ,  ( ( StrConcat_957_StrConcat ) ( ( ( StrConcat_958_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1939 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1228 (    uint32_t  elem1941 ,    uint32_t  b1943 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1943 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1941 ) ) );
}

static  uint32_t   from_dash_hex1226 (    const char*  arr1937 ) {
    return ( (  reduce757 ) ( ( (  map353 ) ( (  arr1937 ) ,  (  lam1227 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1228 ) ) );
}

static  struct Maybe_287   get1229 (    const char*  s1977 ) {
    return ( (  from_dash_nullable_dash_c_dash_str286 ) ( ( ( getenv ) ( (  s1977 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1230 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1231 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1232 (    uint32_t  x1954 ,    uint32_t  y1956 ) {
    uint32_t  x1957 = (  op_dash_add92 ( (  x1954 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1958 = (  op_dash_add92 ( (  y1956 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str1043 ) ( ( ( StrConcat_1044_StrConcat ) ( ( ( StrConcat_1045_StrConcat ) ( ( ( StrConcat_1046_StrConcat ) ( ( ( StrConcat_939_StrConcat ) ( ( "\x1b[" ) ,  (  y1958 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1957 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1233 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_834   get_dash_dimensions1234 (  ) {
    struct Winsize_193  temp1235 = ( ( (  zeroed256 ) ( ) ) );
    struct Winsize_193 *  ws1962 = ( &temp1235 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws1962 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1962 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_834_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_834_Tuple2 ) ( ( (  u16_dash_u32293 ) ( ( ( * (  ws1962 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32293 ) ( ( ( * (  ws1962 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1236 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1237 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_679   query_dash_palette1238 (  ) {
    struct Maybe_287  colorterm1978 = ( (  get1229 ) ( ( "COLORTERM" ) ) );
    struct Maybe_287  dref1979 = (  colorterm1978 );
    if ( dref1979.tag == Maybe_287_Just_t ) {
        if ( ( (  eq1087 ( ( dref1979 .stuff .Maybe_287_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq1087 ( ( dref1979 .stuff .Maybe_287_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_679_PaletteRGB );
        }
    }
    else if ( dref1979.tag == Maybe_287_None_t ) {
    }
    struct Maybe_287  dref1981 = ( (  get1229 ) ( ( "TERM" ) ) );
    if ( dref1981.tag == Maybe_287_Just_t ) {
        if ( (  eq1087 ( ( dref1981 .stuff .Maybe_287_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_679_Palette8 );
        }
    }
    else if ( dref1981.tag == Maybe_287_None_t ) {
    }
    return ( ColorPalette_679_Palette16 );
}

static  enum Unit_13   set_dash_fg81239 (    enum Color8_60  color1997 ) {
    enum Color8_60  dref1998 = (  color1997 );
    switch (  dref1998 ) {
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

static  enum Unit_13   set_dash_fg161240 (    enum Color16_61  color2001 ) {
    enum Color16_61  dref2002 = (  color2001 );
    switch (  dref2002 ) {
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

static  enum Unit_13   set_dash_bg81241 (    enum Color8_60  color2005 ) {
    enum Color8_60  dref2006 = (  color2005 );
    switch (  dref2006 ) {
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

static  enum Unit_13   set_dash_bg161242 (    enum Color16_61  color2009 ) {
    enum Color16_61  dref2010 = (  color2009 );
    switch (  dref2010 ) {
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

static  enum Unit_13   reset_dash_colors1243 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1244 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561245 (    uint8_t  color2015 ) {
    ( (  print_dash_str1050 ) ( ( ( StrConcat_1051_StrConcat ) ( ( ( StrConcat_1052_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2015 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561246 (    uint8_t  color2018 ) {
    ( (  print_dash_str1050 ) ( ( ( StrConcat_1051_StrConcat ) ( ( ( StrConcat_1052_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2018 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1247 (    struct RGB_62  c2038 ) {
    ( (  print_dash_str1054 ) ( ( ( StrConcat_1055_StrConcat ) ( ( ( StrConcat_1056_StrConcat ) ( ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1058_StrConcat ) ( ( ( StrConcat_1051_StrConcat ) ( ( ( StrConcat_1052_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2038 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2038 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2038 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1248 (    struct RGB_62  c2041 ) {
    ( (  print_dash_str1054 ) ( ( ( StrConcat_1055_StrConcat ) ( ( ( StrConcat_1056_StrConcat ) ( ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1058_StrConcat ) ( ( ( StrConcat_1051_StrConcat ) ( ( ( StrConcat_1052_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2041 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2041 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2041 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1249 (    struct Color_59  c2059 ) {
    struct Color_59  dref2060 = (  c2059 );
    if ( dref2060.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1236 ) ( ) );
    }
    else if ( dref2060.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81239 ) ( ( dref2060 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2060.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161240 ) ( ( dref2060 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2060.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561245 ) ( ( dref2060 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2060.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1247 ) ( ( dref2060 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1250 (    struct Color_59  c2067 ) {
    struct Color_59  dref2068 = (  c2067 );
    if ( dref2068.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1237 ) ( ) );
    }
    else if ( dref2068.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81241 ) ( ( dref2068 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2068.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161242 ) ( ( dref2068 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2068.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561246 ) ( ( dref2068 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2068.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1248 ) ( ( dref2068 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1251 {
    ;
    ;
    ;
    ;
    ;
    struct env325 envinst325;
    ;
};

static  enum Unit_13   lam594 (   struct env594 env ,    char  c2124 ) {
    struct funenv325  temp1252 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1252.fun ( temp1252.env ,  ( & ( ( * ( env.builder2120 ) ) .f_chars ) ) ,  (  c2124 ) ) );
}

static  enum Unit_13   write1251 (   struct env1251 env ,    struct StrBuilder_595 *  builder2120 ,    const char*  s2122 ) {
    struct env594 envinst594 = {
        .builder2120 =  builder2120 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each593 ) ( ( (  chars913 ) ( (  s2122 ) ) ) ,  ( (struct funenv594){ .fun = lam594, .env = envinst594 } ) ) );
    return ( Unit_13_Unit );
}

struct env1253 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env325 envinst325;
};

static  enum Unit_13   lam637 (   struct env637 env ,    char  c2124 ) {
    struct funenv325  temp1254 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1254.fun ( temp1254.env ,  ( & ( ( * ( env.builder2120 ) ) .f_chars ) ) ,  (  c2124 ) ) );
}

static  enum Unit_13   write1253 (   struct env1253 env ,    struct StrBuilder_595 *  builder2120 ,    char  s2122 ) {
    struct env637 envinst637 = {
        .builder2120 =  builder2120 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each636 ) ( ( (  chars914 ) ( (  s2122 ) ) ) ,  ( (struct funenv637){ .fun = lam637, .env = envinst637 } ) ) );
    return ( Unit_13_Unit );
}

struct env1255 {
    ;
    ;
    ;
    ;
    ;
    struct env325 envinst325;
    ;
};

static  enum Unit_13   lam658 (   struct env658 env ,    char  c2124 ) {
    struct funenv325  temp1256 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1256.fun ( temp1256.env ,  ( & ( ( * ( env.builder2120 ) ) .f_chars ) ) ,  (  c2124 ) ) );
}

static  enum Unit_13   write1255 (   struct env1255 env ,    struct StrBuilder_595 *  builder2120 ,    struct TakeWhile_531  s2122 ) {
    struct env658 envinst658 = {
        .builder2120 =  builder2120 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each657 ) ( ( (  chars1072 ) ( (  s2122 ) ) ) ,  ( (struct funenv658){ .fun = lam658, .env = envinst658 } ) ) );
    return ( Unit_13_Unit );
}

struct env1257 {
    ;
    ;
    ;
    ;
    ;
    struct env325 envinst325;
    ;
};

static  enum Unit_13   lam662 (   struct env662 env ,    char  c2124 ) {
    struct funenv325  temp1258 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    return ( temp1258.fun ( temp1258.env ,  ( & ( ( * ( env.builder2120 ) ) .f_chars ) ) ,  (  c2124 ) ) );
}

static  enum Unit_13   write1257 (   struct env1257 env ,    struct StrBuilder_595 *  builder2120 ,    struct TakeWhile_536  s2122 ) {
    struct env662 envinst662 = {
        .builder2120 =  builder2120 ,
        .envinst325 = env.envinst325 ,
    };
    ( (  for_dash_each661 ) ( ( (  chars1073 ) ( (  s2122 ) ) ) ,  ( (struct funenv662){ .fun = lam662, .env = envinst662 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1206 {
    enum Unit_13  (*fun) (  struct env1206  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1206 env;
};

struct env1259 {
    ;
    struct env1206 envinst1206;
    ;
};

static  enum Unit_13   write_dash_slice1259 (   struct env1259 env ,    struct StrBuilder_595 *  builder2127 ,    struct Slice_5  s2129 ) {
    struct funenv1206  temp1260 = ( (struct funenv1206){ .fun = add_dash_all1206, .env =  env.envinst1206  } );
    ( temp1260.fun ( temp1260.env ,  ( & ( ( * (  builder2127 ) ) .f_chars ) ) ,  (  s2129 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char654 (   struct env654 env ,    struct StrBuilder_595 *  builder2132 ,    char  c2134 ) {
    struct funenv325  temp1261 = ( (struct funenv325){ .fun = add325, .env =  env.envinst325  } );
    ( temp1261.fun ( temp1261.env ,  ( & ( ( * (  builder2132 ) ) .f_chars ) ) ,  (  c2134 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1201 {
    enum Unit_13  (*fun) (  struct env1201  ,    struct List_3 *  );
    struct env1201 env;
};

struct env1262 {
    struct env1201 envinst1201;
    ;
    ;
};

static  enum Unit_13   pop1262 (   struct env1262 env ,    struct StrBuilder_595 *  sb2142 ) {
    struct funenv1201  temp1263 = ( (struct funenv1201){ .fun = pop1201, .env =  env.envinst1201  } );
    return ( temp1263.fun ( temp1263.env ,  ( & ( ( * (  sb2142 ) ) .f_chars ) ) ) );
}

static  size_t   count1264 (    struct StrBuilder_595 *  sb2145 ) {
    return ( ( ( * (  sb2145 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_595   mk1265 (    enum CAllocator_4  al2148 ) {
    return ( (struct StrBuilder_595) { .f_chars = ( (  mk1183 ) ( (  al2148 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1266 (    struct StrBuilder_595 *  builder2157 ) {
    return ( (  to_dash_slice1219 ) ( ( ( * (  builder2157 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1267 (    struct StrBuilder_595 *  builder2160 ) {
    ( (  free1185 ) ( ( & ( ( * (  builder2160 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1251 {
    enum Unit_13  (*fun) (  struct env1251  ,    struct StrBuilder_595 *  ,    const char*  );
    struct env1251 env;
};

struct env1268 {
    struct env1251 envinst1251;
    ;
    ;
    ;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1268 (   struct env1268 env ,    const char*  s2174 ,    enum CAllocator_4  al2176 ) {
    struct StrBuilder_595  temp1269 = ( (  mk1265 ) ( (  al2176 ) ) );
    struct StrBuilder_595 *  sb2177 = ( &temp1269 );
    struct funenv1251  temp1270 = ( (struct funenv1251){ .fun = write1251, .env =  env.envinst1251  } );
    ( temp1270.fun ( temp1270.env ,  (  sb2177 ) ,  (  s2174 ) ) );
    struct funenv654  temp1271 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
    ( temp1271.fun ( temp1271.env ,  (  sb2177 ) ,  ( (  nullchar340 ) ( ) ) ) );
    struct DynStr_134  dynstr2178 = ( (  as_dash_str930 ) ( (  sb2177 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2178 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2178 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1253 {
    enum Unit_13  (*fun) (  struct env1253  ,    struct StrBuilder_595 *  ,    char  );
    struct env1253 env;
};

struct env1272 {
    ;
    struct env1253 envinst1253;
    ;
    ;
    ;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1272 (   struct env1272 env ,    char  s2174 ,    enum CAllocator_4  al2176 ) {
    struct StrBuilder_595  temp1273 = ( (  mk1265 ) ( (  al2176 ) ) );
    struct StrBuilder_595 *  sb2177 = ( &temp1273 );
    struct funenv1253  temp1274 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
    ( temp1274.fun ( temp1274.env ,  (  sb2177 ) ,  (  s2174 ) ) );
    struct funenv654  temp1275 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
    ( temp1275.fun ( temp1275.env ,  (  sb2177 ) ,  ( (  nullchar340 ) ( ) ) ) );
    struct DynStr_134  dynstr2178 = ( (  as_dash_str930 ) ( (  sb2177 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2178 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2178 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1255 {
    enum Unit_13  (*fun) (  struct env1255  ,    struct StrBuilder_595 *  ,    struct TakeWhile_531  );
    struct env1255 env;
};

struct env1276 {
    ;
    struct env1255 envinst1255;
    ;
    ;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1276 (   struct env1276 env ,    struct TakeWhile_531  s2174 ,    enum CAllocator_4  al2176 ) {
    struct StrBuilder_595  temp1277 = ( (  mk1265 ) ( (  al2176 ) ) );
    struct StrBuilder_595 *  sb2177 = ( &temp1277 );
    struct funenv1255  temp1278 = ( (struct funenv1255){ .fun = write1255, .env =  env.envinst1255  } );
    ( temp1278.fun ( temp1278.env ,  (  sb2177 ) ,  (  s2174 ) ) );
    struct funenv654  temp1279 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
    ( temp1279.fun ( temp1279.env ,  (  sb2177 ) ,  ( (  nullchar340 ) ( ) ) ) );
    struct DynStr_134  dynstr2178 = ( (  as_dash_str930 ) ( (  sb2177 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2178 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2178 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1257 {
    enum Unit_13  (*fun) (  struct env1257  ,    struct StrBuilder_595 *  ,    struct TakeWhile_536  );
    struct env1257 env;
};

struct env1280 {
    ;
    struct env1257 envinst1257;
    ;
    ;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1280 (   struct env1280 env ,    struct TakeWhile_536  s2174 ,    enum CAllocator_4  al2176 ) {
    struct StrBuilder_595  temp1281 = ( (  mk1265 ) ( (  al2176 ) ) );
    struct StrBuilder_595 *  sb2177 = ( &temp1281 );
    struct funenv1257  temp1282 = ( (struct funenv1257){ .fun = write1257, .env =  env.envinst1257  } );
    ( temp1282.fun ( temp1282.env ,  (  sb2177 ) ,  (  s2174 ) ) );
    struct funenv654  temp1283 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
    ( temp1283.fun ( temp1283.env ,  (  sb2177 ) ,  ( (  nullchar340 ) ( ) ) ) );
    struct DynStr_134  dynstr2178 = ( (  as_dash_str930 ) ( (  sb2177 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2178 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2178 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1268 {
    struct DynStr_134  (*fun) (  struct env1268  ,    const char*  ,    enum CAllocator_4  );
    struct env1268 env;
};

struct env1284 {
    struct env1268 envinst1268;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1284 (   struct env1284 env ,    const char*  s2181 ,    enum CAllocator_4  al2183 ) {
    struct funenv1268  temp1285 = ( (struct funenv1268){ .fun = mk_dash_dyn_dash_str1268, .env =  env.envinst1268  } );
    return ( ( (  cast200 ) ( ( ( ( temp1285.fun ( temp1285.env ,  (  s2181 ) ,  (  al2183 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1276 {
    struct DynStr_134  (*fun) (  struct env1276  ,    struct TakeWhile_531  ,    enum CAllocator_4  );
    struct env1276 env;
};

struct env1286 {
    ;
    struct env1276 envinst1276;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1286 (   struct env1286 env ,    struct TakeWhile_531  s2181 ,    enum CAllocator_4  al2183 ) {
    struct funenv1276  temp1287 = ( (struct funenv1276){ .fun = mk_dash_dyn_dash_str1276, .env =  env.envinst1276  } );
    return ( ( (  cast200 ) ( ( ( ( temp1287.fun ( temp1287.env ,  (  s2181 ) ,  (  al2183 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1280 {
    struct DynStr_134  (*fun) (  struct env1280  ,    struct TakeWhile_536  ,    enum CAllocator_4  );
    struct env1280 env;
};

struct env1288 {
    ;
    struct env1280 envinst1280;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1288 (   struct env1288 env ,    struct TakeWhile_536  s2181 ,    enum CAllocator_4  al2183 ) {
    struct funenv1280  temp1289 = ( (struct funenv1280){ .fun = mk_dash_dyn_dash_str1280, .env =  env.envinst1280  } );
    return ( ( (  cast200 ) ( ( ( ( temp1289.fun ( temp1289.env ,  (  s2181 ) ,  (  al2183 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1290 (  ) {
    struct timespec  temp1291 = ( (  undefined138 ) ( ) );
    struct timespec *  t2336 = ( &temp1291 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2336 ) ) );
    return ( * (  t2336 ) );
}

struct Duration_1293 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1292 (    struct Duration_1293  l2345 ,    struct Duration_1293  r2347 ) {
    enum Ordering_10  scmp2348 = ( (  cmp79 ) ( ( (  l2345 ) .f_secs ) ,  ( (  r2347 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2348 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2348 );
    }
    return ( (  cmp79 ) ( ( (  l2345 ) .f_nsecs ) ,  ( (  r2347 ) .f_nsecs ) ) );
}

static  struct Duration_1293   diff1294 (    struct timespec  l2351 ,    struct timespec  r2353 ) {
    int64_t  secdiff2354 = (  op_dash_sub84 ( ( (  l2351 ) .tv_sec ) , ( (  r2353 ) .tv_sec ) ) );
    int64_t  nsdiff2355 = (  op_dash_sub84 ( ( (  l2351 ) .tv_nsec ) , ( (  r2353 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2356 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2355 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2354 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1293) { .f_secs = (  secdiff2354 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2355 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2354 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1293) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2355 ) } );
            } else {
                return ( (struct Duration_1293) { .f_secs = (  op_dash_sub84 ( (  secdiff2354 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2356 ) , (  nsdiff2355 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2354 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1293) { .f_secs = (  secdiff2354 ) , .f_nsecs = (  nsdiff2355 ) } );
        } else {
            return ( (struct Duration_1293) { .f_secs = (  op_dash_sub84 ( (  secdiff2354 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2356 ) , (  nsdiff2355 ) ) ) } );
        }
    }
}

static  struct Duration_1293   duration_dash_from_dash_ns1295 (    int64_t  ns2359 ) {
    int64_t  ns_dash_in_dash_secs2360 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1293) { .f_secs = (  op_dash_div85 ( (  ns2359 ) , (  ns_dash_in_dash_secs2360 ) ) ) , .f_nsecs = ( (  mod900 ) ( (  ns2359 ) ,  (  ns_dash_in_dash_secs2360 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1296 (    struct Duration_1293  d2371 ) {
    int64_t  ns_dash_in_dash_secs2372 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2371 ) .f_secs ) , (  ns_dash_in_dash_secs2372 ) ) ) , ( (  d2371 ) .f_nsecs ) ) );
}

static  uint32_t   u32_dash_or1297 (    uint32_t  l2375 ,    uint32_t  r2377 ) {
    return ( (  l2375 ) | (  r2377 ) );
}

static  uint32_t   u32_dash_ors1298 (    struct SmolArray_103  vals2380 ) {
    return ( (  reduce726 ) ( (  vals2380 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1297 ) ) );
}

static  uint32_t   u32_dash_ors1299 (    struct SmolArray_109  vals2380 ) {
    return ( (  reduce743 ) ( (  vals2380 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1297 ) ) );
}

static  uint32_t   u32_dash_ors1300 (    struct SmolArray_106  vals2380 ) {
    return ( (  reduce750 ) ( (  vals2380 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1297 ) ) );
}

static  uint32_t   u32_dash_and1301 (    uint32_t  l2383 ,    uint32_t  r2385 ) {
    return ( (  l2383 ) & (  r2385 ) );
}

static  uint32_t   u32_dash_neg1302 (    uint32_t  l2388 ) {
    return ( ~ (  l2388 ) );
}

static  struct Scanner_308   mk1303 (    struct DynStr_134  s2427 ) {
    return ( (struct Scanner_308) { .f_s = ( (  chars937 ) ( (  s2427 ) ) ) } );
}

static  struct Maybe_762   scan_dash_int1304 (    struct Scanner_308 *  sc2430 ) {
    struct TakeWhile_527  digit_dash_chars2431 = ( (  take_dash_while550 ) ( (  sc2430 ) ,  (  is_dash_digit1168 ) ) );
    if ( ( (  null830 ) ( (  digit_dash_chars2431 ) ) ) ) {
        return ( (struct Maybe_762) { .tag = Maybe_762_None_t } );
    }
    ( (  drop_prime_832 ) ( (  sc2430 ) ,  ( (  count794 ) ( (  digit_dash_chars2431 ) ) ) ) );
    return ( (  parse_dash_int1170 ) ( (  digit_dash_chars2431 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1305 (  ) {
    struct Termios_141  temp1306 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2444 = ( &temp1306 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr222 ) ( (  orig_dash_termios2444 ) ) ) ) );
    struct Termios_141  raw2445 = ( * (  orig_dash_termios2444 ) );
    raw2445 .f_c_dash_lflag = ( (  u32_dash_and1301 ) ( ( (  raw2445 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1302 ) ( ( (  u32_dash_ors1298 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2445 .f_c_dash_iflag = ( (  u32_dash_and1301 ) ( ( (  raw2445 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1302 ) ( ( (  u32_dash_ors1300 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2445 .f_c_dash_oflag = ( (  u32_dash_and1301 ) ( ( (  raw2445 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1302 ) ( ( (  u32_dash_ors1299 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2445 .f_c_dash_cflag = ( (  u32_dash_or1297 ) ( ( (  raw2445 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1159 ) ( ( & ( (  raw2445 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1159 ) ( ( & ( (  raw2445 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr222 ) ( ( & (  raw2445 ) ) ) ) ) );
    return ( * (  orig_dash_termios2444 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1307 (    struct Termios_141 *  og_dash_termios2448 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr222 ) ( (  og_dash_termios2448 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1308 (    int32_t  timeout_dash_ms2452 ) {
    struct Pollfd_236  pfd2453 = ( (struct Pollfd_236) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr235 ) ( ( & (  pfd2453 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2452 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2454 = ( ( (  zeroed248 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr220 ) ( ( & (  c2454 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2454 ) ) );
}

static  enum Unit_13   flush_dash_stdout1309 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr280 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1310 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1311 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1313 {
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2458;
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

struct env1314 {
    bool *  should_dash_resize2458;
};

struct funenv1314 {
    enum Unit_13  (*fun) (  struct env1314  ,    int32_t  );
    struct env1314 env;
};

struct funenv1314  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1315 ) {
    struct funenv1314  temp1316 = _intr_sigarr [  __intr__sig1315 ];
    temp1316.fun ( temp1316.env ,  __intr__sig1315 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1317 ,   struct funenv1314  __intr__fun1318 ) {
    _intr_sigarr [  __intr__sig1317 ] =  __intr__fun1318;
    signal(  __intr__sig1317 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1314 (   struct env1314 env ,    int32_t  dref2465 ) {
    (* env.should_dash_resize2458 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_678   mk1313 (   struct env1313 env ) {
    struct Termios_141  og_dash_termios2460 = ( (  enable_dash_raw_dash_mode1305 ) ( ) );
    ( (  hide_dash_cursor1231 ) ( ) );
    ( (  reset_dash_colors1243 ) ( ) );
    ( (  clear_dash_screen1244 ) ( ) );
    ( (  enable_dash_mouse1310 ) ( ) );
    ( (  flush_dash_stdout1309 ) ( ) );
    enum ColorPalette_679  palette2461 = ( (  query_dash_palette1238 ) ( ) );
    struct Tuple2_834  dims2462 = ( (  get_dash_dimensions1234 ) ( ) );
    uint32_t  fps2463 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2464 = ( (  now1290 ) ( ) );
    struct env1314 envinst1314 = {
        .should_dash_resize2458 = env.should_dash_resize2458 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1314){ .fun = lam1314, .env = envinst1314 } ) ) );
    return ( (struct Tui_678) { .f_width = ( (  fst833 ) ( (  dims2462 ) ) ) , .f_height = ( (  snd835 ) ( (  dims2462 ) ) ) , .f_target_dash_fps = (  fps2463 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2464 ) , .f_fps_dash_ts = (  last_dash_sync2464 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2460 ) , .f_palette = (  palette2461 ) } );
}

static  enum Unit_13   sync1319 (    struct Tui_678 *  tui2468 ) {
    if ( (  eq42 ( ( ( * (  tui2468 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2469 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size294 ) ( ( ( * (  tui2468 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1320 = ( (  undefined138 ) ( ) );
    struct timespec *  now2470 = ( &temp1320 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2470 ) ) );
    int64_t  elapsed_dash_ns2471 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2470 ) ) .tv_sec ) , ( ( ( * (  tui2468 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2470 ) ) .tv_nsec ) , ( ( ( * (  tui2468 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2472 = (  op_dash_sub84 ( (  frame_dash_ns2469 ) , (  elapsed_dash_ns2471 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2472 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1321 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2472 ) } );
        struct timespec *  ts2473 = ( &temp1321 );
        ( ( nanosleep ) ( (  ts2473 ) ,  ( (  null_dash_ptr283 ) ( ) ) ) );
    }
    struct timespec  temp1322 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2474 = ( &temp1322 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2474 ) ) );
    (*  tui2468 ) .f_last_dash_sync = ( * (  last_dash_sync2474 ) );
    (*  tui2468 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2468 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2475 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2468 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2468 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2468 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2468 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2475 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2468 ) .f_actual_dash_fps = ( ( * (  tui2468 ) ) .f_fps_dash_count );
        (*  tui2468 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2468 ) .f_fps_dash_ts = ( ( * (  tui2468 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1323 (    struct Tui_678 *  tui2478 ) {
    ( (  disable_dash_mouse1311 ) ( ) );
    ( (  show_dash_cursor1230 ) ( ) );
    ( (  reset_dash_colors1243 ) ( ) );
    ( (  clear_dash_screen1244 ) ( ) );
    ( (  reset_dash_cursor_dash_position1233 ) ( ) );
    ( (  disable_dash_raw_dash_mode1307 ) ( ( & ( ( * (  tui2478 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1309 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   btn_dash_to_dash_mouse_dash_button1324 (    int64_t  btn2485 ) {
    return ( {  int32_t  dref2486 = ( (  i64_dash_i32291 ) ( (  btn2485 ) ) ) ;  dref2486 == 0 ? ( MouseButton_149_MouseLeft ) :  dref2486 == 1 ? ( MouseButton_149_MouseMiddle ) :  dref2486 == 2 ? ( MouseButton_149_MouseRight ) :  dref2486 == 64 ? ( MouseButton_149_ScrollUp ) :  dref2486 == 65 ? ( MouseButton_149_ScrollDown ) : ( (  panic_prime_1096 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1326 {
    enum {
        Maybe_1326_None_t,
        Maybe_1326_Just_t,
    } tag;
    union {
        struct {
            struct Key_571  field0;
        } Maybe_1326_Just_s;
    } stuff;
};

static struct Maybe_1326 Maybe_1326_Just (  struct Key_571  field0 ) {
    return ( struct Maybe_1326 ) { .tag = Maybe_1326_Just_t, .stuff = { .Maybe_1326_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1326   parse_dash_ss31325 (    char  c2489 ) {
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2489 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1326_Just ) ( ( (struct Key_571) { .tag = Key_571_F4_t } ) ) );
    }
    return ( (struct Maybe_1326) { .tag = Maybe_1326_None_t } );
}

static  struct Maybe_569   parse_dash_csi1327 (    struct DynStr_134  seq2492 ) {
    if ( (  eq45 ( ( ( (  seq2492 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
    }
    char  last2493 = (  elem_dash_get1134 ( ( (  seq2492 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2492 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1134 ( ( (  seq2492 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_308  temp1328 = ( (  mk1303 ) ( ( (  substr342 ) ( (  seq2492 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2492 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_308 *  sc2494 = ( &temp1328 );
        struct Maybe_762  dref2495 = ( (  scan_dash_int1304 ) ( (  sc2494 ) ) );
        if ( dref2495.tag == Maybe_762_None_t ) {
            return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
        }
        else if ( dref2495.tag == Maybe_762_Just_t ) {
            ( (  next540 ) ( (  sc2494 ) ) );
            struct Maybe_762  dref2497 = ( (  scan_dash_int1304 ) ( (  sc2494 ) ) );
            if ( dref2497.tag == Maybe_762_None_t ) {
                return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
            }
            else if ( dref2497.tag == Maybe_762_Just_t ) {
                ( (  next540 ) ( (  sc2494 ) ) );
                struct Maybe_762  dref2499 = ( (  scan_dash_int1304 ) ( (  sc2494 ) ) );
                if ( dref2499.tag == Maybe_762_None_t ) {
                    return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
                }
                else if ( dref2499.tag == Maybe_762_Just_t ) {
                    return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Mouse ) ( ( (struct MouseEvent_572) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1324 ) ( ( dref2495 .stuff .Maybe_762_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32291 ) ( ( dref2497 .stuff .Maybe_762_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32291 ) ( ( dref2499 .stuff .Maybe_762_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2492 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
    }
    if ( (  eq47 ( (  last2493 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_308  temp1329 = ( (  mk1303 ) ( (  seq2492 ) ) );
        struct Scanner_308 *  sc2501 = ( &temp1329 );
        struct Maybe_762  dref2502 = ( (  scan_dash_int1304 ) ( (  sc2501 ) ) );
        if ( dref2502.tag == Maybe_762_None_t ) {
            return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
        }
        else if ( dref2502.tag == Maybe_762_Just_t ) {
            return ( {  int32_t  dref2504 = ( (  i64_dash_i32291 ) ( ( dref2502 .stuff .Maybe_762_Just_s .field0 ) ) ) ;  dref2504 == 1 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Home_t } ) ) ) ) ) :  dref2504 == 2 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Insert_t } ) ) ) ) ) :  dref2504 == 3 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Delete_t } ) ) ) ) ) :  dref2504 == 4 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_End_t } ) ) ) ) ) :  dref2504 == 5 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_PageUp_t } ) ) ) ) ) :  dref2504 == 6 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_PageDown_t } ) ) ) ) ) :  dref2504 == 15 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F5_t } ) ) ) ) ) :  dref2504 == 17 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F6_t } ) ) ) ) ) :  dref2504 == 18 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F7_t } ) ) ) ) ) :  dref2504 == 19 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F8_t } ) ) ) ) ) :  dref2504 == 20 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F9_t } ) ) ) ) ) :  dref2504 == 21 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F10_t } ) ) ) ) ) :  dref2504 == 23 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F11_t } ) ) ) ) ) :  dref2504 == 24 ? ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_F12_t } ) ) ) ) ) : ( (struct Maybe_569) { .tag = Maybe_569_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
}

static  struct Maybe_569   read_dash_key1330 (  ) {
    char  temp1331 = ( (  undefined136 ) ( ) );
    char *  ch2506 = ( &temp1331 );
    struct Maybe_49  dref2507 = ( (  read_dash_byte1308 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2507.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
    }
    else if ( dref2507.tag == Maybe_49_Just_t ) {
        (*  ch2506 ) = ( dref2507 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2509 = ( (  i32_dash_char1086 ) ( ( (  u32_dash_i32296 ) ( ( (  u32_dash_or1297 ) ( ( (  i32_dash_u32288 ) ( ( (  char_dash_i32906 ) ( ( * (  ch2506 ) ) ) ) ) ) ,  ( (  from_dash_hex1226 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( ( Key_571_Ctrl ) ( (  letter2509 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u81085 ) ( ( * (  ch2506 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1330 ) ( ) );
        } else {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( ( Key_571_Char ) ( ( * (  ch2506 ) ) ) ) ) ) ) );
        }
    }
    char  temp1332 = ( (  undefined136 ) ( ) );
    char *  ch22510 = ( &temp1332 );
    struct Maybe_49  dref2511 = ( (  read_dash_byte1308 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2511.tag == Maybe_49_None_t ) {
        return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Escape_t } ) ) ) ) );
    }
    else if ( dref2511.tag == Maybe_49_Just_t ) {
        (*  ch22510 ) = ( dref2511 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22510 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_196  temp1333 = ( ( (  zeroed260 ) ( ) ) );
        struct Array_196 *  seq2513 = ( &temp1333 );
        int32_t  slen2514 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2514 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1334 = ( (  undefined136 ) ( ) );
            char *  sc2515 = ( &temp1334 );
            struct Maybe_49  dref2516 = ( (  read_dash_byte1308 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2516.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2516.tag == Maybe_49_Just_t ) {
                (*  sc2515 ) = ( dref2516 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1160 ) ( (  seq2513 ) ,  ( (  i32_dash_size290 ) ( (  slen2514 ) ) ) ,  ( * (  sc2515 ) ) ) );
            slen2514 = (  op_dash_add87 ( (  slen2514 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u81085 ) ( ( * (  sc2515 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u81085 ) ( ( * (  sc2515 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1327 ) ( ( (struct DynStr_134) { .f_contents = ( (  subslice314 ) ( ( (  as_dash_slice1161 ) ( (  seq2513 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size290 ) ( (  slen2514 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22510 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1335 = ( (  undefined136 ) ( ) );
        char *  sc2518 = ( &temp1335 );
        struct Maybe_49  dref2519 = ( (  read_dash_byte1308 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2519.tag == Maybe_49_None_t ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Escape_t } ) ) ) ) );
        }
        else if ( dref2519.tag == Maybe_49_Just_t ) {
            (*  sc2518 ) = ( dref2519 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1326  dref2521 = ( (  parse_dash_ss31325 ) ( ( * (  sc2518 ) ) ) );
        if ( dref2521.tag == Maybe_1326_None_t ) {
            return ( (struct Maybe_569) { .tag = Maybe_569_None_t } );
        }
        else if ( dref2521.tag == Maybe_1326_Just_t ) {
            return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( dref2521 .stuff .Maybe_1326_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_569_Just ) ( ( ( InputEvent_570_Key ) ( ( (struct Key_571) { .tag = Key_571_Escape_t } ) ) ) ) );
}

struct env1336 {
    bool *  should_dash_resize2458;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1336 (   struct env1336 env ,    struct Tui_678 *  tui2525 ) {
    if ( ( ! ( * ( env.should_dash_resize2458 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2458 ) = ( false );
    struct Tuple2_834  dim2526 = ( (  get_dash_dimensions1234 ) ( ) );
    uint32_t  w2527 = ( (  fst833 ) ( (  dim2526 ) ) );
    uint32_t  h2528 = ( (  snd835 ) ( (  dim2526 ) ) );
    (*  tui2525 ) .f_width = (  w2527 );
    (*  tui2525 ) .f_height = (  h2528 );
    return ( true );
}

static  struct Cell_58   lam1338 (    struct Cell_58  dref2546 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1339 (    struct Cell_58  dref2548 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_677   mk_dash_screen1337 (    struct Tui_678 *  tui2542 ,    enum CAllocator_4  al2544 ) {
    struct Slice_601  cur2545 = ( (  allocate1147 ) ( (  al2544 ) ,  ( (  u32_dash_size294 ) ( (  op_dash_mul94 ( ( ( * (  tui2542 ) ) .f_width ) , ( ( * (  tui2542 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1135 ) ( (  cur2545 ) ,  (  lam1338 ) ) );
    struct Slice_601  prev2547 = ( (  allocate1147 ) ( (  al2544 ) ,  ( (  u32_dash_size294 ) ( (  op_dash_mul94 ( ( ( * (  tui2542 ) ) .f_width ) , ( ( * (  tui2542 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1136 ) ( (  prev2547 ) ,  (  lam1339 ) ) );
    return ( (struct Screen_677) { .f_current = (  cur2545 ) , .f_previous = (  prev2547 ) , .f_al = (  al2544 ) , .f_tui = (  tui2542 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1340 (    struct Screen_677 *  screen2551 ) {
    enum CAllocator_4  al2552 = ( ( * (  screen2551 ) ) .f_al );
    ( (  free1154 ) ( (  al2552 ) ,  ( ( * (  screen2551 ) ) .f_current ) ) );
    ( (  free1154 ) ( (  al2552 ) ,  ( ( * (  screen2551 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1342 (    struct Cell_58  dref2556 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1341 (    struct Screen_677 *  screen2555 ) {
    ( (  map1137 ) ( ( ( * (  screen2555 ) ) .f_current ) ,  (  lam1342 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1344 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1343 (    struct RenderState_1344 *  rs2560 ,    struct Cell_58 *  c2562 ,    uint32_t  x2564 ,    uint32_t  y2566 ) {
    if ( ( ( !  eq42 ( (  x2564 ) , ( ( * (  rs2560 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2566 ) , ( ( * (  rs2560 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1232 ) ( (  x2564 ) ,  (  y2566 ) ) );
        (*  rs2560 ) .f_x = (  x2564 );
        (*  rs2560 ) .f_y = (  y2566 );
    }
    char  char2567 = ( ( * (  c2562 ) ) .f_c );
    struct Color_59  bg2568 = ( ( * (  c2562 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2567 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2567 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2567 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2567 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2568 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2560 ) ) .f_fg ) , ( ( * (  c2562 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1249 ) ( ( ( * (  c2562 ) ) .f_fg ) ) );
        (*  rs2560 ) .f_fg = ( ( * (  c2562 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2560 ) ) .f_bg ) , (  bg2568 ) ) ) ) {
        ( (  set_dash_bg1250 ) ( (  bg2568 ) ) );
        (*  rs2560 ) .f_bg = (  bg2568 );
    }
    ( (  print_dash_str28 ) ( (  char2567 ) ) );
    (*  rs2560 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2560 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1345 (    struct Screen_677 *  screen2571 ) {
    int32_t  w2572 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2571 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2573 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2571 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1344  temp1346 = ( (struct RenderState_1344) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1344 *  rs2574 = ( &temp1346 );
    ( (  move_dash_cursor_dash_to1232 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_382  temp1347 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2573 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1348 =  next383 (&temp1347);
        if (  __cond1348 .tag == 0 ) {
            break;
        }
        int32_t  y2576 =  __cond1348 .stuff .Maybe_348_Just_s .field0;
        struct RangeIter_382  temp1349 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2572 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1350 =  next383 (&temp1349);
            if (  __cond1350 .tag == 0 ) {
                break;
            }
            int32_t  x2578 =  __cond1350 .stuff .Maybe_348_Just_s .field0;
            size_t  i2579 = ( (  i32_dash_size290 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2576 ) , (  w2572 ) ) ) , (  x2578 ) ) ) ) );
            struct Cell_58 *  cur2580 = ( (  get_dash_ptr1112 ) ( ( ( * (  screen2571 ) ) .f_current ) ,  (  i2579 ) ) );
            struct Cell_58 *  prev2581 = ( (  get_dash_ptr1112 ) ( ( ( * (  screen2571 ) ) .f_previous ) ,  (  i2579 ) ) );
            if ( ( ( !  eq57 ( (  cur2580 ) , (  prev2581 ) ) ) || ( ( * (  screen2571 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2574 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2574 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1343 ) ( (  rs2574 ) ,  (  cur2580 ) ,  ( (  i32_dash_u32288 ) ( (  x2578 ) ) ) ,  ( (  i32_dash_u32288 ) ( (  y2576 ) ) ) ) );
                (*  prev2581 ) = ( * (  cur2580 ) );
            }
        }
    }
    (*  screen2571 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1243 ) ( ) );
    ( (  flush_dash_stdout1309 ) ( ) );
    return ( ( * (  rs2574 ) ) .f_changes );
}

struct funenv1336 {
    bool  (*fun) (  struct env1336  ,    struct Tui_678 *  );
    struct env1336 env;
};

struct env1351 {
    struct env1336 envinst1336;
    ;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1351 (   struct env1351 env ,    struct Screen_677 *  screen2584 ) {
    struct Tui_678 *  tui2585 = ( ( * (  screen2584 ) ) .f_tui );
    struct funenv1336  temp1352 = ( (struct funenv1336){ .fun = update_dash_dimensions1336, .env =  env.envinst1336  } );
    if ( ( ! ( temp1352.fun ( temp1352.env ,  (  tui2585 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2584 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2586 = ( ( * ( ( * (  screen2584 ) ) .f_tui ) ) .f_width );
    uint32_t  h2587 = ( ( * ( ( * (  screen2584 ) ) .f_tui ) ) .f_height );
    size_t  nusz2588 = ( (  u32_dash_size294 ) ( (  op_dash_mul94 ( (  w2586 ) , (  h2587 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2588 ) , ( ( ( * (  screen2584 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_677  nuscreen2589 = ( (  mk_dash_screen1337 ) ( (  tui2585 ) ,  ( ( * (  screen2584 ) ) .f_al ) ) );
    (*  screen2584 ) .f_current = ( (  nuscreen2589 ) .f_current );
    (*  screen2584 ) .f_previous = ( (  nuscreen2589 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1353 (    struct Screen_677 *  screen2592 ,    struct Color_59  c2594 ) {
    (*  screen2592 ) .f_default_dash_fg = (  c2594 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1354 (    struct Screen_677 *  screen2597 ,    struct Color_59  c2599 ) {
    (*  screen2597 ) .f_default_dash_bg = (  c2599 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1355 (    struct Screen_677 *  screen2602 ,    struct Color_59  fg2604 ,    struct Color_59  bg2606 ) {
    (*  screen2602 ) .f_default_dash_fg = (  fg2604 );
    (*  screen2602 ) .f_default_dash_bg = (  bg2606 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1106   get_dash_cell_dash_ptr1356 (    struct Screen_677 *  screen2613 ,    int32_t  x2615 ,    int32_t  y2617 ) {
    int32_t  w2618 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2613 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2615 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2615 ) , (  w2618 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1106) { .tag = Maybe_1106_None_t } );
    }
    if ( ( (  cmp80 ( (  y2617 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2617 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2613 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1106) { .tag = Maybe_1106_None_t } );
    }
    size_t  i2619 = ( (  i32_dash_size290 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2617 ) , (  w2618 ) ) ) , (  x2615 ) ) ) ) );
    return ( ( Maybe_1106_Just ) ( ( (  get_dash_ptr1112 ) ( ( ( * (  screen2613 ) ) .f_current ) ,  (  i2619 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1357 (    struct Screen_677 *  screen2622 ) {
    struct RangeIter_382  temp1358 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2622 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1359 =  next383 (&temp1358);
        if (  __cond1359 .tag == 0 ) {
            break;
        }
        int32_t  y2624 =  __cond1359 .stuff .Maybe_348_Just_s .field0;
        struct RangeIter_382  temp1360 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2622 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1361 =  next383 (&temp1360);
            if (  __cond1361 .tag == 0 ) {
                break;
            }
            int32_t  x2626 =  __cond1361 .stuff .Maybe_348_Just_s .field0;
            struct Cell_58 *  cell2627 = ( (  or_dash_fail1105 ) ( ( (  get_dash_cell_dash_ptr1356 ) ( (  screen2622 ) ,  (  x2626 ) ,  (  y2624 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2627 ) .f_bg = ( ( * (  screen2622 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1362 (    struct Screen_677 *  screen2630 ,    char  c2632 ,    int32_t  x2634 ,    int32_t  y2636 ) {
    int32_t  w2637 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2630 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp80 ( (  x2634 ) , (  w2637 ) ) != 0 ) || (  cmp80 ( (  y2636 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2630 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp80 ( (  x2634 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) || (  cmp80 ( (  y2636 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2638 = ( (  i32_dash_size290 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2636 ) , (  w2637 ) ) ) , (  x2634 ) ) ) ) );
    struct Color_59  fg2639 = ( ( * (  screen2630 ) ) .f_default_dash_fg );
    struct Color_59  bg2640 = ( ( * (  screen2630 ) ) .f_default_dash_bg );
    char  c2641 = (  c2632 );
    ( (  set1121 ) ( ( ( * (  screen2630 ) ) .f_current ) ,  (  i2638 ) ,  ( (struct Cell_58) { .f_c = (  c2641 ) , .f_fg = (  fg2639 ) , .f_bg = (  bg2640 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam676 (   struct env676 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1363 (    struct Screen_677 *  screen2644 ,    int32_t  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env676 envinst676 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each675 ) ( ( (  zip506 ) ( ( (  chars918 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv676){ .fun = lam676, .env = envinst676 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam683 (   struct env683 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1364 (    struct Screen_677 *  screen2644 ,    struct StrConcat_924  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env683 envinst683 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each682 ) ( ( (  zip508 ) ( ( (  chars1062 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv683){ .fun = lam683, .env = envinst683 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam687 (   struct env687 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1365 (    struct Screen_677 *  screen2644 ,    struct StrConcat_939  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env687 envinst687 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each686 ) ( ( (  zip510 ) ( ( (  chars1063 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv687){ .fun = lam687, .env = envinst687 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam691 (   struct env691 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1366 (    struct Screen_677 *  screen2644 ,    struct StrConcat_941  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env691 envinst691 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each690 ) ( ( (  zip512 ) ( ( (  chars1064 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv691){ .fun = lam691, .env = envinst691 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam695 (   struct env695 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1367 (    struct Screen_677 *  screen2644 ,    struct StrConcat_967  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env695 envinst695 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each694 ) ( ( (  zip514 ) ( ( (  chars1065 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv695){ .fun = lam695, .env = envinst695 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam699 (   struct env699 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1368 (    struct Screen_677 *  screen2644 ,    struct StrConcat_17  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env699 envinst699 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each698 ) ( ( (  zip516 ) ( ( (  chars1008 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv699){ .fun = lam699, .env = envinst699 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam703 (   struct env703 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1369 (    struct Screen_677 *  screen2644 ,    struct StrConcat_969  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env703 envinst703 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each702 ) ( ( (  zip518 ) ( ( (  chars972 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv703){ .fun = lam703, .env = envinst703 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam707 (   struct env707 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1370 (    struct Screen_677 *  screen2644 ,    struct StrConcat_976  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env707 envinst707 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each706 ) ( ( (  zip520 ) ( ( (  chars1066 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv707){ .fun = lam707, .env = envinst707 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam711 (   struct env711 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1371 (    struct Screen_677 *  screen2644 ,    struct StrConcat_981  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env711 envinst711 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each710 ) ( ( (  zip508 ) ( ( (  chars1067 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv711){ .fun = lam711, .env = envinst711 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam715 (   struct env715 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1372 (    struct Screen_677 *  screen2644 ,    struct StrConcat_995  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env715 envinst715 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each714 ) ( ( (  zip508 ) ( ( (  chars1068 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv715){ .fun = lam715, .env = envinst715 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam719 (   struct env719 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1373 (    struct Screen_677 *  screen2644 ,    struct StrConcat_999  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env719 envinst719 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each718 ) ( ( (  zip522 ) ( ( (  chars1069 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv719){ .fun = lam719, .env = envinst719 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam723 (   struct env723 env ,    struct Tuple2_372  dref2655 ) {
    ( (  put_dash_char1362 ) ( ( env.screen2644 ) ,  ( dref2655 .field0 ) ,  (  op_dash_add87 ( ( env.x2653 ) , ( dref2655 .field1 ) ) ) ,  ( env.y2650 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1374 (    struct Screen_677 *  screen2644 ,    struct StrConcat_1010  s2646 ,    int32_t  x2648 ,    int32_t  y2650 ) {
    int32_t  w2651 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2650 ) , ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2644 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2652 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2650 ) , (  w2651 ) ) ) , (  x2648 ) ) );
    int32_t  x2653 = ( (  min903 ) ( (  x2648 ) ,  (  w2651 ) ) );
    size_t  max_dash_len2654 = ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  w2651 ) , (  x2653 ) ) ) ) );
    struct env723 envinst723 = {
        .y2650 =  y2650 ,
        .screen2644 =  screen2644 ,
        .x2653 =  x2653 ,
    };
    ( (  for_dash_each722 ) ( ( (  zip524 ) ( ( (  chars1070 ) ( (  s2646 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv723){ .fun = lam723, .env = envinst723 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1375 (    struct Screen_677 *  screen2660 ,    int32_t  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count798 ) ( ( (  chars918 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1363 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1376 (    struct Screen_677 *  screen2660 ,    struct StrConcat_924  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count800 ) ( ( (  chars1062 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1364 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1377 (    struct Screen_677 *  screen2660 ,    struct StrConcat_939  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count802 ) ( ( (  chars1063 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1365 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1378 (    struct Screen_677 *  screen2660 ,    struct StrConcat_941  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count804 ) ( ( (  chars1064 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1366 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1379 (    struct Screen_677 *  screen2660 ,    struct StrConcat_967  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count806 ) ( ( (  chars1065 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1367 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1380 (    struct Screen_677 *  screen2660 ,    struct StrConcat_17  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count808 ) ( ( (  chars1008 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1368 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1381 (    struct Screen_677 *  screen2660 ,    struct StrConcat_969  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count810 ) ( ( (  chars972 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1369 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1382 (    struct Screen_677 *  screen2660 ,    struct StrConcat_976  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count812 ) ( ( (  chars1066 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1370 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1383 (    struct Screen_677 *  screen2660 ,    struct StrConcat_981  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count800 ) ( ( (  chars1067 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1371 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1384 (    struct Screen_677 *  screen2660 ,    struct StrConcat_995  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count800 ) ( ( (  chars1068 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1372 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1385 (    struct Screen_677 *  screen2660 ,    struct StrConcat_999  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count814 ) ( ( (  chars1069 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1373 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1386 (    struct Screen_677 *  screen2660 ,    struct StrConcat_1010  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  slen2667 = ( (  size_dash_i32292 ) ( ( (  count816 ) ( ( (  chars1070 ) ( (  s2662 ) ) ) ) ) ) );
    int32_t  w2668 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2669 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2668 ) , (  x2664 ) ) ) , (  slen2667 ) ) );
    ( (  draw_dash_str1374 ) ( (  screen2660 ) ,  (  s2662 ) ,  (  x2669 ) ,  (  y2666 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_335   try_dash_read_dash_contents1387 (    const char*  filename3142 ,    enum CAllocator_4  al3144 ) {
    FILE *  file3145 = ( ( fopen ) ( (  filename3142 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null284 ) ( (  file3145 ) ) ) ) {
        return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    ( ( fseek ) ( (  file3145 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size3146 = ( ( ftell ) ( (  file3145 ) ) );
    ( ( fseek ) ( (  file3145 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf3147 = ( ( (  allocate1146 ) ( (  al3144 ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( (  file_dash_size3146 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3147 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size3146 ) ,  (  file3145 ) ) );
    ( (  set1120 ) ( (  file_dash_buf3147 ) ,  ( (  i32_dash_size290 ) ( (  file_dash_size3146 ) ) ) ,  ( (  nullchar340 ) ( ) ) ) );
    ( ( fclose ) ( (  file3145 ) ) );
    struct DynStr_134  str3148 = ( (struct DynStr_134) { .f_contents = (  file_dash_buf3147 ) } );
    return ( ( Maybe_335_Just ) ( (  str3148 ) ) );
}

static  struct DynStr_134   read_dash_contents1388 (    const char*  filename3151 ,    enum CAllocator_4  al3153 ) {
    return ( (  or_dash_fail1099 ) ( ( (  try_dash_read_dash_contents1387 ) ( (  filename3151 ) ,  (  al3153 ) ) ) ,  ( ( StrConcat_1012_StrConcat ) ( ( ( StrConcat_1013_StrConcat ) ( ( "could not open file " ) ,  (  filename3151 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1389 (    const char*  filename3156 ,    struct DynStr_134  contents3158 ) {
    FILE *  file3159 = ( ( fopen ) ( (  filename3156 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null284 ) ( (  file3159 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_309  it3160 = ( (  chars937 ) ( (  contents3158 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref3161 = ( (  next350 ) ( ( & (  it3160 ) ) ) );
        if ( dref3161.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file3159 ) ) );
            return ( true );
        }
        else if ( dref3161.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written3163 = ( ( fprintf ) ( (  file3159 ) ,  ( "%c" ) ,  ( dref3161 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written3163 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable1088 ) ( ) );
}

static  enum Unit_13   write_dash_contents1390 (    const char*  filename3166 ,    struct DynStr_134  contents3168 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1389 ) ( (  filename3166 ) ,  (  contents3168 ) ) ) ) ) {
        ( (  panic1095 ) ( ( ( StrConcat_1013_StrConcat ) ( ( "could not write to file " ) ,  (  filename3166 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1115   get1391 (  ) {
    return ( (struct Slice_1115) { .f_ptr = ( (  offset_dash_ptr157 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1392 (    char  c2672 ) {
    if ( (  eq47 ( (  c2672 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return (  from_dash_integral29 ( 2 ) );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1393 (    char  c2682 ) {
    if ( ( (  is_dash_whitespace1162 ) ( (  c2682 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1166 ) ( (  c2682 ) ) ) || (  eq47 ( (  c2682 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2682 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1396 (    struct Cursor_170  l2689 ,    struct Cursor_170  r2691 ) {
    return ( (  eq41 ( ( (  l2689 ) .f_x ) , ( (  r2691 ) .f_x ) ) ) && (  eq41 ( ( (  l2689 ) .f_y ) , ( (  r2691 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1397 (    struct Visual_845  dref2701 ) {
    return ( dref2701 .field0 );
}

struct Tuple2_1399 {
    struct Mode_846  field0;
    struct Mode_846  field1;
};

static struct Tuple2_1399 Tuple2_1399_Tuple2 (  struct Mode_846  field0 ,  struct Mode_846  field1 ) {
    return ( struct Tuple2_1399 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1398 (    struct Mode_846  l2706 ,    struct Mode_846  r2708 ) {
    struct Tuple2_1399  dref2709 = ( ( Tuple2_1399_Tuple2 ) ( (  l2706 ) ,  (  r2708 ) ) );
    if ( dref2709 .field0.tag == Mode_846_Normal_t && dref2709 .field1.tag == Mode_846_Normal_t ) {
        return ( true );
    }
    else if ( dref2709 .field0.tag == Mode_846_Insert_t && dref2709 .field1.tag == Mode_846_Insert_t ) {
        return ( true );
    }
    else if ( dref2709 .field0.tag == Mode_846_Select_t && dref2709 .field1.tag == Mode_846_Select_t ) {
        return ( true );
    }
    else if ( dref2709 .field0.tag == Mode_846_Cmd_t && dref2709 .field1.tag == Mode_846_Cmd_t ) {
        ( (  panic1092 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2709 .field0.tag == Mode_846_SearchBox_t && dref2709 .field1.tag == Mode_846_SearchBox_t ) {
        ( (  panic1092 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1400 (    struct Editor_844 *  ed2733 ,    int32_t  y2735 ) {
    return ( (  get_dash_ptr1174 ) ( ( & ( ( * (  ed2733 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size290 ) ( (  y2735 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1401 (    struct Editor_844 *  ed2738 ) {
    return ( (  get_dash_ptr1174 ) ( ( & ( ( * (  ed2738 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_529   indent_dash_on_dash_row1402 (    struct Editor_844 *  ed2741 ,    int32_t  y2743 ) {
    return ( (  take_dash_while551 ) ( ( (  get_dash_row1400 ) ( (  ed2741 ) ,  (  y2743 ) ) ) ,  (  is_dash_whitespace1162 ) ) );
}

static  size_t   num_dash_rows1403 (    struct Editor_844 *  ed2746 ) {
    return ( (  size1224 ) ( ( & ( ( * (  ed2746 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1198 {
    enum Unit_13  (*fun) (  struct env1198  ,    struct List_302 *  ,    size_t  );
    struct env1198 env;
};

struct env1404 {
    ;
    ;
    struct env1198 envinst1198;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1404 (   struct env1404 env ,    struct Editor_844 *  ed2754 ,    int32_t  y2756 ) {
    struct List_3 *  next_dash_row2757 = ( (  get_dash_row1400 ) ( (  ed2754 ) ,  (  y2756 ) ) );
    ( (  free1185 ) ( (  next_dash_row2757 ) ) );
    struct funenv1198  temp1405 = ( (struct funenv1198){ .fun = remove1198, .env =  env.envinst1198  } );
    ( temp1405.fun ( temp1405.env ,  ( & ( ( * (  ed2754 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size290 ) ( (  y2756 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   char_dash_at1406 (    struct Editor_844 *  ed2760 ,    struct Cursor_170  cur2762 ) {
    return ( (  try_dash_get1178 ) ( ( (  get_dash_row1400 ) ( (  ed2760 ) ,  ( (  cur2762 ) .f_y ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  cur2762 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1407 (    struct Editor_844 *  ed2765 ) {
    return ( (  try_dash_get1178 ) ( ( (  cursor_dash_row1401 ) ( (  ed2765 ) ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed2765 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_845   x_dash_to_dash_visual_dash_x1408 (    struct Editor_844 *  ed2768 ,    int32_t  x2770 ,    int32_t  y2772 ) {
    return ( ( Visual_845_Visual ) ( ( (  sum818 ) ( ( (  map355 ) ( ( (  take378 ) ( ( (  get_dash_row1400 ) ( (  ed2768 ) ,  (  y2772 ) ) ) ,  ( (  i32_dash_size290 ) ( (  x2770 ) ) ) ) ) ,  (  char_dash_len1392 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1409 (    struct Editor_844 *  ed2775 ,    struct Visual_845  dref2776 ,    int32_t  y2779 ) {
    int32_t  sum_dash_x2780 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2781 = ( (  get_dash_row1400 ) ( (  ed2775 ) ,  (  y2779 ) ) );
    struct RangeIter_382  temp1410 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( ( * (  chars2781 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1411 =  next383 (&temp1410);
        if (  __cond1411 .tag == 0 ) {
            break;
        }
        int32_t  x2783 =  __cond1411 .stuff .Maybe_348_Just_s .field0;
        sum_dash_x2780 = (  op_dash_add87 ( (  sum_dash_x2780 ) , ( (  char_dash_len1392 ) ( (  elem_dash_get2 ( (  chars2781 ) , ( (  i32_dash_size290 ) ( (  x2783 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2776 .field0 ) , (  sum_dash_x2780 ) ) == 0 ) ) {
            return (  x2783 );
        }
    }
    return ( (  size_dash_i32292 ) ( ( ( * (  chars2781 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1412 (    struct Editor_844 *  ed2786 ,    struct Maybe_171  sel2788 ) {
    if ( ( ( !  eq1398 ( ( ( * (  ed2786 ) ) .f_mode ) , ( (struct Mode_846) { .tag = Mode_846_Select_t } ) ) ) || ( ! ( (  is_dash_just836 ) ( ( ( * (  ed2786 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2786 ) .f_selected = (  sel2788 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1413 (    struct Editor_844 *  ed2791 ) {
    struct Maybe_335  dref2792 = ( ( * (  ed2791 ) ) .f_msg );
    if ( dref2792.tag == Maybe_335_None_t ) {
    }
    else if ( dref2792.tag == Maybe_335_Just_t ) {
        ( (  free1150 ) ( ( ( * (  ed2791 ) ) .f_al ) ,  ( ( dref2792 .stuff .Maybe_335_Just_s .field0 ) .f_contents ) ) );
        (*  ed2791 ) .f_msg = ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1414 {
    struct env1268 envinst1268;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1414 (   struct env1414 env ,    struct Editor_844 *  ed2796 ,    const char*  s2798 ) {
    ( (  reset_dash_msg1413 ) ( (  ed2796 ) ) );
    struct funenv1268  temp1415 = ( (struct funenv1268){ .fun = mk_dash_dyn_dash_str1268, .env =  env.envinst1268  } );
    struct DynStr_134  s2799 = ( temp1415.fun ( temp1415.env ,  (  s2798 ) ,  ( ( * (  ed2796 ) ) .f_al ) ) );
    (*  ed2796 ) .f_msg = ( ( Maybe_335_Just ) ( (  s2799 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1417 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1416 (    struct Editor_844 *  ed2803 ,    int32_t  x2805 ,    int32_t  y2807 ,    struct Dims_1417  dim2809 ) {
    struct Cursor_170  cur2810 = ( ( * (  ed2803 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2811 = ( !  eq41 ( ( (  cur2810 ) .f_x ) , (  x2805 ) ) );
    int32_t  y2812 = ( (  clamp912 ) ( (  y2807 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( ( ( * (  ed2803 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2813 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2812 ) , (  op_dash_add87 ( ( ( * (  ed2803 ) ) .f_screen_dash_top ) , (  funny_dash_space2813 ) ) ) ) == 0 ) ) {
        (*  ed2803 ) .f_screen_dash_top = ( (  max907 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2812 ) , (  funny_dash_space2813 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2812 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2803 ) ) .f_screen_dash_top ) , ( (  dim2809 ) .f_rows ) ) ) , (  funny_dash_space2813 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2814 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2812 ) , (  funny_dash_space2813 ) ) ) , ( (  dim2809 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2803 ) .f_screen_dash_top = (  onscreen_dash_y2814 );
        } else {
        }
    }
    struct List_3 *  row2815 = ( (  get_dash_row1400 ) ( (  ed2803 ) ,  (  y2812 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2811 ) ) {
        int32_t  x2816 = ( (  clamp912 ) ( (  x2805 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32292 ) ( ( (  size1223 ) ( (  row2815 ) ) ) ) ) ) );
        (*  ed2803 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1408 ) ( (  ed2803 ) ,  (  x2816 ) ,  (  y2812 ) ) );
    }
    struct Visual_845  vx2817 = ( ( * (  ed2803 ) ) .f_goal_dash_x );
    int32_t  x2818 = ( (  visual_dash_x_dash_to_dash_x1409 ) ( (  ed2803 ) ,  (  vx2817 ) ,  (  y2812 ) ) );
    int32_t  funny_dash_space2819 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2818 ) , (  op_dash_add87 ( ( ( * (  ed2803 ) ) .f_screen_dash_left ) , (  funny_dash_space2819 ) ) ) ) == 0 ) ) {
        (*  ed2803 ) .f_screen_dash_left = ( (  max907 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2818 ) , (  funny_dash_space2819 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2818 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2803 ) ) .f_screen_dash_left ) , ( (  dim2809 ) .f_cols ) ) ) , (  funny_dash_space2819 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2820 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2818 ) , (  funny_dash_space2819 ) ) ) , ( (  dim2809 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2803 ) .f_screen_dash_left = (  onscreen_dash_x2820 );
        } else {
        }
    }
    (*  ed2803 ) .f_cursor = ( (struct Cursor_170) { .f_x = (  x2818 ) , .f_y = (  y2812 ) } );
    ( (  set_dash_selection1412 ) ( (  ed2803 ) ,  ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1418 (    struct Editor_844 *  ed2823 ,    int32_t  x2825 ,    struct Dims_1417  dim2827 ) {
    ( (  move_dash_to1416 ) ( (  ed2823 ) ,  (  x2825 ) ,  ( ( ( * (  ed2823 ) ) .f_cursor ) .f_y ) ,  (  dim2827 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1419 (    struct Editor_844 *  ed2830 ,    int32_t  y2832 ,    struct Dims_1417  dim2834 ) {
    ( (  move_dash_to1416 ) ( (  ed2830 ) ,  ( ( ( * (  ed2830 ) ) .f_cursor ) .f_x ) ,  (  y2832 ) ,  (  dim2834 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1420 (    struct Editor_844 *  ed2837 ,    struct Dims_1417  dim2839 ) {
    struct Cursor_170  cur2840 = ( ( * (  ed2837 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2837 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2837 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1419 ) ( (  ed2837 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2837 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2839 ) ) );
            ( (  move_dash_to_dash_col1418 ) ( (  ed2837 ) ,  ( (  size_dash_i32292 ) ( ( ( * ( (  cursor_dash_row1401 ) ( (  ed2837 ) ) ) ) .f_count ) ) ) ,  (  dim2839 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1418 ) ( (  ed2837 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2837 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2839 ) ) );
    }
    return ( !  eq1396 ( ( ( * (  ed2837 ) ) .f_cursor ) , (  cur2840 ) ) );
}

static  bool   move_dash_right1421 (    struct Editor_844 *  ed2843 ,    struct Dims_1417  dims2845 ) {
    struct Cursor_170  cur2846 = ( ( * (  ed2843 ) ) .f_cursor );
    int32_t  row_dash_len2847 = ( (  size_dash_i32292 ) ( ( ( * ( (  cursor_dash_row1401 ) ( (  ed2843 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2843 ) ) .f_cursor ) .f_x ) , (  row_dash_len2847 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2843 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( ( ( * (  ed2843 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1416 ) ( (  ed2843 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2843 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2845 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1418 ) ( (  ed2843 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2843 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2845 ) ) );
    }
    return ( !  eq1396 ( ( ( * (  ed2843 ) ) .f_cursor ) , (  cur2846 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1422 (    struct Editor_844 *  ed2850 ,    struct Dims_1417  dims2852 ) {
    int32_t  off2853 = ( (  size_dash_i32292 ) ( ( (  count796 ) ( ( (  indent_dash_on_dash_row1402 ) ( (  ed2850 ) ,  ( ( ( * (  ed2850 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1418 ) ( (  ed2850 ) ,  (  off2853 ) ,  (  dims2852 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1423 (    struct Editor_844 *  ed2856 ,    struct Dims_1417  dims2858 ) {
    struct List_3 *  currow2859 = ( (  cursor_dash_row1401 ) ( (  ed2856 ) ) );
    ( (  move_dash_to_dash_col1418 ) ( (  ed2856 ) ,  ( (  size_dash_i32292 ) ( ( (  size1223 ) ( (  currow2859 ) ) ) ) ) ,  (  dims2858 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1424 (    struct Editor_844 *  ed2865 ,    int32_t  col2867 ,    int32_t  row2869 ) {
    return (  eq41 ( (  col2867 ) , ( (  size_dash_i32292 ) ( ( (  size1223 ) ( ( (  get_dash_row1400 ) ( (  ed2865 ) ,  (  row2869 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1425 (    struct Editor_844 *  ed2872 ) {
    return (  eq41 ( ( ( ( * (  ed2872 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32292 ) ( ( (  size1223 ) ( ( (  cursor_dash_row1401 ) ( (  ed2872 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1426 (    struct Editor_844 *  ed2875 ,    struct Maybe_335  clip2877 ) {
    struct Maybe_335  dref2878 = ( ( * (  ed2875 ) ) .f_clipboard );
    if ( dref2878.tag == Maybe_335_None_t ) {
    }
    else if ( dref2878.tag == Maybe_335_Just_t ) {
        ( (  free1150 ) ( ( ( * (  ed2875 ) ) .f_al ) ,  ( ( dref2878 .stuff .Maybe_335_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2875 ) .f_clipboard = (  clip2877 );
    return ( Unit_13_Unit );
}

struct funenv1259 {
    enum Unit_13  (*fun) (  struct env1259  ,    struct StrBuilder_595 *  ,    struct Slice_5  );
    struct env1259 env;
};

struct env1427 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1253 envinst1253;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1259 envinst1259;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
};

static  struct Maybe_335   copy_dash_selection1427 (   struct env1427 env ,    struct Editor_844 *  ed2882 ) {
    struct Maybe_171  dref2883 = ( ( * (  ed2882 ) ) .f_selected );
    if ( dref2883.tag == Maybe_171_None_t ) {
        struct Maybe_49  dref2884 = ( (  char_dash_at_dash_cursor1407 ) ( (  ed2882 ) ) );
        if ( dref2884.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_335) { .tag = Maybe_335_None_t } );
        }
        else if ( dref2884.tag == Maybe_49_Just_t ) {
            struct StrBuilder_595  temp1428 = ( (  mk1265 ) ( ( ( * (  ed2882 ) ) .f_al ) ) );
            struct StrBuilder_595 *  sb2886 = ( &temp1428 );
            struct funenv654  temp1429 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
            ( temp1429.fun ( temp1429.env ,  (  sb2886 ) ,  ( dref2884 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_335_Just ) ( ( (  as_dash_str930 ) ( (  sb2886 ) ) ) ) );
        }
    }
    else if ( dref2883.tag == Maybe_171_Just_t ) {
        struct StrBuilder_595  temp1430 = ( (  mk1265 ) ( ( ( * (  ed2882 ) ) .f_al ) ) );
        struct StrBuilder_595 *  sb2888 = ( &temp1430 );
        struct Cursor_170  from2889 = ( (  min901 ) ( ( dref2883 .stuff .Maybe_171_Just_s .field0 ) ,  ( ( * (  ed2882 ) ) .f_cursor ) ) );
        struct Cursor_170  to2890 = ( (  max908 ) ( ( dref2883 .stuff .Maybe_171_Just_s .field0 ) ,  ( ( * (  ed2882 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2889 ) .f_y ) , ( (  to2890 ) .f_y ) ) ) ) {
            struct List_3 *  currow2891 = ( (  get_dash_row1400 ) ( (  ed2882 ) ,  ( (  from2889 ) .f_y ) ) );
            struct funenv1259  temp1431 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1431.fun ( temp1431.env ,  (  sb2888 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  currow2891 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  from2889 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  to2890 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1424 ) ( (  ed2882 ) ,  ( (  to2890 ) .f_x ) ,  ( (  to2890 ) .f_y ) ) ) ) {
                struct funenv1253  temp1432 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
                ( temp1432.fun ( temp1432.env ,  (  sb2888 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        } else {
            ( (  assert1097 ) ( (  cmp80 ( ( (  to2890 ) .f_y ) , ( (  from2889 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2892 = ( (  get_dash_row1400 ) ( (  ed2882 ) ,  ( (  from2889 ) .f_y ) ) );
            struct funenv1259  temp1433 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1433.fun ( temp1433.env ,  (  sb2888 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  currow2892 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  from2889 ) .f_x ) ) ) ,  ( (  size1223 ) ( (  currow2892 ) ) ) ) ) ) );
            struct funenv1253  temp1434 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
            ( temp1434.fun ( temp1434.env ,  (  sb2888 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_300  temp1435 =  into_dash_iter304 ( ( (  subslice305 ) ( ( (  to_dash_slice1221 ) ( ( ( * (  ed2882 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  from2889 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  to2890 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_334  __cond1436 =  next368 (&temp1435);
                if (  __cond1436 .tag == 0 ) {
                    break;
                }
                struct List_3  row2894 =  __cond1436 .stuff .Maybe_334_Just_s .field0;
                struct funenv1259  temp1437 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
                ( temp1437.fun ( temp1437.env ,  (  sb2888 ) ,  ( (  to_dash_slice1219 ) ( (  row2894 ) ) ) ) );
                struct funenv1253  temp1438 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
                ( temp1438.fun ( temp1438.env ,  (  sb2888 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2895 = ( (  get_dash_row1400 ) ( (  ed2882 ) ,  ( (  to2890 ) .f_y ) ) );
            struct funenv1259  temp1439 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1439.fun ( temp1439.env ,  (  sb2888 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  lastrow2895 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  to2890 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1424 ) ( (  ed2882 ) ,  ( (  to2890 ) .f_x ) ,  ( (  to2890 ) .f_y ) ) ) ) {
                struct funenv1253  temp1440 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
                ( temp1440.fun ( temp1440.env ,  (  sb2888 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_134  s2896 = ( (  as_dash_str930 ) ( (  sb2888 ) ) );
        return ( ( Maybe_335_Just ) ( (  s2896 ) ) );
    }
}

struct funenv1427 {
    struct Maybe_335  (*fun) (  struct env1427  ,    struct Editor_844 *  );
    struct env1427 env;
};

struct env1441 {
    struct env1427 envinst1427;
    ;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1441 (   struct env1441 env ,    struct Editor_844 *  ed2899 ) {
    struct funenv1427  temp1442 = ( (struct funenv1427){ .fun = copy_dash_selection1427, .env =  env.envinst1427  } );
    ( (  set_dash_clipboard1426 ) ( (  ed2899 ) ,  ( temp1442.fun ( temp1442.env ,  (  ed2899 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1404 {
    enum Unit_13  (*fun) (  struct env1404  ,    struct Editor_844 *  ,    int32_t  );
    struct env1404 env;
};

struct funenv1208 {
    enum Unit_13  (*fun) (  struct env1208  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1208 env;
};

struct funenv1195 {
    enum Unit_13  (*fun) (  struct env1195  ,    struct List_302 *  ,    size_t  ,    struct List_3  );
    struct env1195 env;
};

struct funenv1192 {
    enum Unit_13  (*fun) (  struct env1192  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1192 env;
};

struct env1443 {
    ;
    struct env1404 envinst1404;
    ;
    ;
    ;
    struct env1206 envinst1206;
    struct env1208 envinst1208;
    ;
    ;
    struct env589 envinst589;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1195 envinst1195;
    ;
    struct env1192 envinst1192;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1199 envinst1199;
    ;
    ;
};

static  enum Unit_13   apply_dash_primitive1443 (   struct env1443 env ,    struct Editor_844 *  ed2903 ,    struct Primitive_169  prim2905 ,    struct Dims_1417  dims2907 ) {
    struct Primitive_169  dref2908 = (  prim2905 );
    if ( dref2908.tag == Primitive_169_PrimInsert_t ) {
        int32_t  x2911 = ( ( dref2908 .stuff .Primitive_169_PrimInsert_s .field0 ) .f_x );
        int32_t  y2912 = ( ( dref2908 .stuff .Primitive_169_PrimInsert_s .field0 ) .f_y );
        if ( (  cmp9 ( ( (  i32_dash_size290 ) ( (  y2912 ) ) ) , ( (  num_dash_rows1403 ) ( (  ed2903 ) ) ) ) != 0 ) ) {
            struct funenv589  temp1444 = ( (struct funenv589){ .fun = add589, .env =  env.envinst589  } );
            ( temp1444.fun ( temp1444.env ,  ( & ( ( * (  ed2903 ) ) .f_current_dash_file ) ) ,  ( (  mk1183 ) ( ( ( * (  ed2903 ) ) .f_al ) ) ) ) );
        }
        struct SliceIter_309  temp1445 =  into_dash_iter313 ( ( ( dref2908 .stuff .Primitive_169_PrimInsert_s .field1 ) .f_contents ) );
        while (true) {
            struct Maybe_49  __cond1446 =  next350 (&temp1445);
            if (  __cond1446 .tag == 0 ) {
                break;
            }
            char  c2914 =  __cond1446 .stuff .Maybe_49_Just_s .field0;
            if ( (  eq47 ( (  c2914 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) {
                struct List_3 *  cur_dash_line2915 = ( (  get_dash_row1400 ) ( (  ed2903 ) ,  (  y2912 ) ) );
                struct List_3  temp1447 = ( (  mk1183 ) ( ( ( * (  ed2903 ) ) .f_al ) ) );
                struct List_3 *  nurow2916 = ( &temp1447 );
                struct funenv1206  temp1448 = ( (struct funenv1206){ .fun = add_dash_all1206, .env =  env.envinst1206  } );
                ( temp1448.fun ( temp1448.env ,  (  nurow2916 ) ,  ( (  from1124 ) ( ( (  to_dash_slice1219 ) ( ( * (  cur_dash_line2915 ) ) ) ) ,  ( (  i32_dash_size290 ) ( (  x2911 ) ) ) ) ) ) );
                ( (  trim1212 ) ( (  cur_dash_line2915 ) ,  ( (  i32_dash_size290 ) ( (  x2911 ) ) ) ) );
                struct funenv1195  temp1449 = ( (struct funenv1195){ .fun = insert1195, .env =  env.envinst1195  } );
                ( temp1449.fun ( temp1449.env ,  ( & ( ( * (  ed2903 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( (  y2912 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2916 ) ) ) );
                y2912 = (  op_dash_add87 ( (  y2912 ) , (  from_dash_integral29 ( 1 ) ) ) );
                x2911 = (  from_dash_integral29 ( 0 ) );
            } else {
                struct funenv1192  temp1450 = ( (struct funenv1192){ .fun = insert1192, .env =  env.envinst1192  } );
                ( temp1450.fun ( temp1450.env ,  ( (  get_dash_row1400 ) ( (  ed2903 ) ,  (  y2912 ) ) ) ,  ( (  i32_dash_size290 ) ( (  x2911 ) ) ) ,  (  c2914 ) ) );
                x2911 = (  op_dash_add87 ( (  x2911 ) , (  from_dash_integral29 ( 1 ) ) ) );
            }
        }
        (*  ed2903 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1408 ) ( (  ed2903 ) ,  (  x2911 ) ,  (  y2912 ) ) );
        ( (  move_dash_to1416 ) ( (  ed2903 ) ,  (  x2911 ) ,  (  y2912 ) ,  (  dims2907 ) ) );
    }
    else if ( dref2908.tag == Primitive_169_PrimDelete_t ) {
        struct RangeIter_382  temp1451 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field1 ) .f_contents ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1452 =  next383 (&temp1451);
            if (  __cond1452 .tag == 0 ) {
                break;
            }
            int32_t  dref2919 =  __cond1452 .stuff .Maybe_348_Just_s .field0;
            struct List_3 *  row2920 = ( (  get_dash_row1400 ) ( (  ed2903 ) ,  ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) ) );
            if ( (  cmp9 ( ( (  i32_dash_size290 ) ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_x ) ) ) , ( ( * (  row2920 ) ) .f_count ) ) != 0 ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32292 ) ( ( (  num_dash_rows1403 ) ( (  ed2903 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  next_dash_row2921 = ( (  get_dash_row1400 ) ( (  ed2903 ) ,  (  op_dash_add87 ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1208  temp1453 = ( (struct funenv1208){ .fun = add_dash_all1208, .env =  env.envinst1208  } );
                    ( temp1453.fun ( temp1453.env ,  (  row2920 ) ,  (  next_dash_row2921 ) ) );
                    struct funenv1404  temp1454 = ( (struct funenv1404){ .fun = remove_dash_row1404, .env =  env.envinst1404  } );
                    ( temp1454.fun ( temp1454.env ,  (  ed2903 ) ,  (  op_dash_add87 ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                struct funenv1199  temp1455 = ( (struct funenv1199){ .fun = remove1199, .env =  env.envinst1199  } );
                ( temp1455.fun ( temp1455.env ,  (  row2920 ) ,  ( (  i32_dash_size290 ) ( ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_x ) ) ) ) );
            }
        }
        (*  ed2903 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1408 ) ( (  ed2903 ) ,  ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) ) );
        ( (  move_dash_to1416 ) ( (  ed2903 ) ,  ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2908 .stuff .Primitive_169_PrimDelete_s .field0 ) .f_y ) ,  (  dims2907 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_169   invert_dash_primitive1456 (    struct Primitive_169  prim2924 ) {
    struct Primitive_169  dref2925 = (  prim2924 );
    if ( dref2925.tag == Primitive_169_PrimInsert_t ) {
        return ( ( Primitive_169_PrimDelete ) ( ( dref2925 .stuff .Primitive_169_PrimInsert_s .field0 ) ,  ( dref2925 .stuff .Primitive_169_PrimInsert_s .field1 ) ) );
    }
    else if ( dref2925.tag == Primitive_169_PrimDelete_t ) {
        return ( ( Primitive_169_PrimInsert ) ( ( dref2925 .stuff .Primitive_169_PrimDelete_s .field0 ) ,  ( dref2925 .stuff .Primitive_169_PrimDelete_s .field1 ) ) );
    }
}

static  enum Unit_13   free_dash_primitive1457 (    struct Primitive_169  prim2932 ,    enum CAllocator_4  al2934 ) {
    struct Primitive_169  dref2935 = (  prim2932 );
    if ( dref2935.tag == Primitive_169_PrimInsert_t ) {
        ( (  free1150 ) ( (  al2934 ) ,  ( ( dref2935 .stuff .Primitive_169_PrimInsert_s .field1 ) .f_contents ) ) );
    }
    else if ( dref2935.tag == Primitive_169_PrimDelete_t ) {
        ( (  free1150 ) ( (  al2934 ) ,  ( ( dref2935 .stuff .Primitive_169_PrimDelete_s .field1 ) .f_contents ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1190 {
    enum Unit_13  (*fun) (  struct env1190  ,    struct List_849 *  ,    struct Action_168  );
    struct env1190 env;
};

struct env1458 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1190 envinst1190;
    ;
    ;
    ;
};

static  enum Unit_13   lam645 (   struct env645 env ,    struct Action_168  x2948 ) {
    return ( (  free_dash_primitive1457 ) ( ( (  x2948 ) .f_prim ) ,  ( env.al2946 ) ) );
}

static  enum Unit_13   push_dash_action1458 (   struct env1458 env ,    struct Actions_848 *  actions2942 ,    struct Action_168  action2944 ,    enum CAllocator_4  al2946 ) {
    struct env645 envinst645 = {
        .al2946 =  al2946 ,
    };
    ( (  for_dash_each644 ) ( ( (  from1125 ) ( ( (  to_dash_slice1220 ) ( ( ( * (  actions2942 ) ) .f_list ) ) ) ,  ( ( * (  actions2942 ) ) .f_cur ) ) ) ,  ( (struct funenv645){ .fun = lam645, .env = envinst645 } ) ) );
    ( (  trim1213 ) ( ( & ( ( * (  actions2942 ) ) .f_list ) ) ,  ( ( * (  actions2942 ) ) .f_cur ) ) );
    struct funenv1190  temp1459 = ( (struct funenv1190){ .fun = add1190, .env =  env.envinst1190  } );
    ( temp1459.fun ( temp1459.env ,  ( & ( ( * (  actions2942 ) ) .f_list ) ) ,  (  action2944 ) ) );
    (*  actions2942 ) .f_cur = (  op_dash_add98 ( ( ( * (  actions2942 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1458 {
    enum Unit_13  (*fun) (  struct env1458  ,    struct Actions_848 *  ,    struct Action_168  ,    enum CAllocator_4  );
    struct env1458 env;
};

struct env1460 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1253 envinst1253;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1259 envinst1259;
    ;
    ;
    ;
    ;
    ;
    struct env1458 envinst1458;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   flush_dash_insert1460 (   struct env1460 env ,    struct Editor_844 *  ed2951 ) {
    struct Maybe_171  dref2952 = ( ( * (  ed2951 ) ) .f_insert_dash_start );
    if ( dref2952.tag == Maybe_171_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2952.tag == Maybe_171_Just_t ) {
        struct Cursor_170  start2954 = ( dref2952 .stuff .Maybe_171_Just_s .field0 );
        (*  ed2951 ) .f_insert_dash_start = ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
        int32_t  del_dash_count2955 = (  from_dash_integral29 ( 0 ) );
        struct Maybe_839  dref2956 = ( ( * (  ed2951 ) ) .f_delete_dash_acc );
        if ( dref2956.tag == Maybe_839_None_t ) {
        }
        else if ( dref2956.tag == Maybe_839_Just_t ) {
            struct DynStr_134  del_dash_text2958 = ( (  as_dash_str930 ) ( ( & ( dref2956 .stuff .Maybe_839_Just_s .field0 ) ) ) );
            (*  ed2951 ) .f_delete_dash_acc = ( (struct Maybe_839) { .tag = Maybe_839_None_t } );
            if ( (  cmp9 ( ( ( (  del_dash_text2958 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                del_dash_count2955 = ( (  size_dash_i32292 ) ( ( ( (  del_dash_text2958 ) .f_contents ) .f_count ) ) );
                struct StrBuilder_595  temp1461 = ( (  mk1265 ) ( ( ( * (  ed2951 ) ) .f_al ) ) );
                struct StrBuilder_595 *  rev_dash_sb2959 = ( &temp1461 );
                struct RangeIter_382  temp1462 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  del_dash_count2955 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_348  __cond1463 =  next383 (&temp1462);
                    if (  __cond1463 .tag == 0 ) {
                        break;
                    }
                    int32_t  i2961 =  __cond1463 .stuff .Maybe_348_Just_s .field0;
                    struct funenv654  temp1464 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
                    ( temp1464.fun ( temp1464.env ,  (  rev_dash_sb2959 ) ,  (  elem_dash_get1134 ( ( (  del_dash_text2958 ) .f_contents ) , ( (  i32_dash_size290 ) ( (  op_dash_sub88 ( (  op_dash_sub88 ( (  del_dash_count2955 ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  i2961 ) ) ) ) ) ) ) ) );
                }
                ( (  free1150 ) ( ( ( * (  ed2951 ) ) .f_al ) ,  ( (  del_dash_text2958 ) .f_contents ) ) );
                struct DynStr_134  rev_dash_text2962 = ( (  as_dash_str930 ) ( (  rev_dash_sb2959 ) ) );
                struct Cursor_170  del_dash_pos2963 = ( (struct Cursor_170) { .f_x = (  op_dash_sub88 ( ( (  start2954 ) .f_x ) , (  del_dash_count2955 ) ) ) , .f_y = ( (  start2954 ) .f_y ) } );
                struct funenv1458  temp1465 = ( (struct funenv1458){ .fun = push_dash_action1458, .env =  env.envinst1458  } );
                ( temp1465.fun ( temp1465.env ,  ( & ( ( * (  ed2951 ) ) .f_actions ) ) ,  ( (struct Action_168) { .f_prim = ( ( Primitive_169_PrimDelete ) ( (  del_dash_pos2963 ) ,  (  rev_dash_text2962 ) ) ) , .f_before_dash_cursor = (  start2954 ) , .f_before_dash_sel = ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) } ) ,  ( ( * (  ed2951 ) ) .f_al ) ) );
            } else {
                ( (  free1150 ) ( ( ( * (  ed2951 ) ) .f_al ) ,  ( (  del_dash_text2958 ) .f_contents ) ) );
            }
        }
        struct Cursor_170  adj_dash_start2964 = ( (struct Cursor_170) { .f_x = (  op_dash_sub88 ( ( (  start2954 ) .f_x ) , (  del_dash_count2955 ) ) ) , .f_y = ( (  start2954 ) .f_y ) } );
        if ( (  eq1396 ( (  adj_dash_start2964 ) , ( ( * (  ed2951 ) ) .f_cursor ) ) ) ) {
            return ( Unit_13_Unit );
        }
        struct StrBuilder_595  temp1466 = ( (  mk1265 ) ( ( ( * (  ed2951 ) ) .f_al ) ) );
        struct StrBuilder_595 *  sb2965 = ( &temp1466 );
        if ( (  eq41 ( ( (  adj_dash_start2964 ) .f_y ) , ( ( ( * (  ed2951 ) ) .f_cursor ) .f_y ) ) ) ) {
            struct List_3 *  row2966 = ( (  get_dash_row1400 ) ( (  ed2951 ) ,  ( (  adj_dash_start2964 ) .f_y ) ) );
            struct funenv1259  temp1467 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1467.fun ( temp1467.env ,  (  sb2965 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  row2966 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  adj_dash_start2964 ) .f_x ) ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed2951 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        } else {
            struct List_3 *  first_dash_row2967 = ( (  get_dash_row1400 ) ( (  ed2951 ) ,  ( (  adj_dash_start2964 ) .f_y ) ) );
            struct funenv1259  temp1468 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1468.fun ( temp1468.env ,  (  sb2965 ) ,  ( (  from1124 ) ( ( (  to_dash_slice1219 ) ( ( * (  first_dash_row2967 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  adj_dash_start2964 ) .f_x ) ) ) ) ) ) );
            struct funenv1253  temp1469 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
            ( temp1469.fun ( temp1469.env ,  (  sb2965 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct Zip_359  temp1470 =  into_dash_iter375 ( ( (  zip499 ) ( ( (  subslice305 ) ( ( (  to_dash_slice1221 ) ( ( ( * (  ed2951 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  adj_dash_start2964 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed2951 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (  from384 ) ( (  op_dash_add87 ( ( (  adj_dash_start2964 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
            while (true) {
                struct Maybe_365  __cond1471 =  next367 (&temp1470);
                if (  __cond1471 .tag == 0 ) {
                    break;
                }
                struct Tuple2_366  dref2968 =  __cond1471 .stuff .Maybe_365_Just_s .field0;
                struct funenv1259  temp1472 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
                ( temp1472.fun ( temp1472.env ,  (  sb2965 ) ,  ( (  to_dash_slice1219 ) ( ( dref2968 .field0 ) ) ) ) );
                struct funenv1253  temp1473 = ( (struct funenv1253){ .fun = write1253, .env =  env.envinst1253  } );
                ( temp1473.fun ( temp1473.env ,  (  sb2965 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  last_dash_row2971 = ( (  get_dash_row1400 ) ( (  ed2951 ) ,  ( ( ( * (  ed2951 ) ) .f_cursor ) .f_y ) ) );
            struct funenv1259  temp1474 = ( (struct funenv1259){ .fun = write_dash_slice1259, .env =  env.envinst1259  } );
            ( temp1474.fun ( temp1474.env ,  (  sb2965 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  last_dash_row2971 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed2951 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        }
        struct DynStr_134  text2972 = ( (  as_dash_str930 ) ( (  sb2965 ) ) );
        if ( (  eq45 ( ( ( (  text2972 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1150 ) ( ( ( * (  ed2951 ) ) .f_al ) ,  ( (  text2972 ) .f_contents ) ) );
            return ( Unit_13_Unit );
        }
        struct funenv1458  temp1475 = ( (struct funenv1458){ .fun = push_dash_action1458, .env =  env.envinst1458  } );
        ( temp1475.fun ( temp1475.env ,  ( & ( ( * (  ed2951 ) ) .f_actions ) ) ,  ( (struct Action_168) { .f_prim = ( ( Primitive_169_PrimInsert ) ( (  adj_dash_start2964 ) ,  (  text2972 ) ) ) , .f_before_dash_cursor = (  adj_dash_start2964 ) , .f_before_dash_sel = ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) } ) ,  ( ( * (  ed2951 ) ) .f_al ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1460 {
    enum Unit_13  (*fun) (  struct env1460  ,    struct Editor_844 *  );
    struct env1460 env;
};

struct env1476 {
    ;
    ;
    ;
    ;
    struct env1460 envinst1460;
};

static  enum Unit_13   set_dash_mode_dash_normal1476 (   struct env1476 env ,    struct Editor_844 *  ed2975 ) {
    struct funenv1460  temp1477 = ( (struct funenv1460){ .fun = flush_dash_insert1460, .env =  env.envinst1460  } );
    ( temp1477.fun ( temp1477.env ,  (  ed2975 ) ) );
    (*  ed2975 ) .f_mode = ( (struct Mode_846) { .tag = Mode_846_Normal_t } );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enter_dash_insert_dash_mode1478 (    struct Editor_844 *  ed2978 ) {
    (*  ed2978 ) .f_mode = ( (struct Mode_846) { .tag = Mode_846_Insert_t } );
    (*  ed2978 ) .f_insert_dash_start = ( ( Maybe_171_Just ) ( ( ( * (  ed2978 ) ) .f_cursor ) ) );
    (*  ed2978 ) .f_delete_dash_acc = ( (struct Maybe_839) { .tag = Maybe_839_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1443 {
    enum Unit_13  (*fun) (  struct env1443  ,    struct Editor_844 *  ,    struct Primitive_169  ,    struct Dims_1417  );
    struct env1443 env;
};

struct env1479 {
    struct env1460 envinst1460;
    struct env1458 envinst1458;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1443 envinst1443;
};

static  enum Unit_13   do_dash_action1479 (   struct env1479 env ,    struct Editor_844 *  ed2981 ,    struct Primitive_169  prim2983 ,    struct Dims_1417  dims2985 ,    struct Cursor_170  before_dash_cursor2987 ,    struct Maybe_171  before_dash_sel2989 ) {
    struct funenv1460  temp1480 = ( (struct funenv1460){ .fun = flush_dash_insert1460, .env =  env.envinst1460  } );
    ( temp1480.fun ( temp1480.env ,  (  ed2981 ) ) );
    struct funenv1458  temp1481 = ( (struct funenv1458){ .fun = push_dash_action1458, .env =  env.envinst1458  } );
    ( temp1481.fun ( temp1481.env ,  ( & ( ( * (  ed2981 ) ) .f_actions ) ) ,  ( (struct Action_168) { .f_prim = (  prim2983 ) , .f_before_dash_cursor = (  before_dash_cursor2987 ) , .f_before_dash_sel = (  before_dash_sel2989 ) } ) ,  ( ( * (  ed2981 ) ) .f_al ) ) );
    struct funenv1443  temp1482 = ( (struct funenv1443){ .fun = apply_dash_primitive1443, .env =  env.envinst1443  } );
    ( temp1482.fun ( temp1482.env ,  (  ed2981 ) ,  (  prim2983 ) ,  (  dims2985 ) ) );
    return ( Unit_13_Unit );
}

struct env1483 {
    ;
    struct env1443 envinst1443;
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

static  enum Unit_13   undo1483 (   struct env1483 env ,    struct Editor_844 *  ed2992 ,    struct Dims_1417  dims2994 ) {
    if ( (  eq45 ( ( ( ( * (  ed2992 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    (*  ed2992 ) .f_actions .f_cur = (  op_dash_sub99 ( ( ( ( * (  ed2992 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Action_168  action2995 = (  elem_dash_get1200 ( ( ( ( * (  ed2992 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed2992 ) ) .f_actions ) .f_cur ) ) );
    struct funenv1443  temp1484 = ( (struct funenv1443){ .fun = apply_dash_primitive1443, .env =  env.envinst1443  } );
    ( temp1484.fun ( temp1484.env ,  (  ed2992 ) ,  ( (  invert_dash_primitive1456 ) ( ( (  action2995 ) .f_prim ) ) ) ,  (  dims2994 ) ) );
    ( (  move_dash_to1416 ) ( (  ed2992 ) ,  ( ( (  action2995 ) .f_before_dash_cursor ) .f_x ) ,  ( ( (  action2995 ) .f_before_dash_cursor ) .f_y ) ,  (  dims2994 ) ) );
    (*  ed2992 ) .f_selected = ( (  action2995 ) .f_before_dash_sel );
    return ( Unit_13_Unit );
}

struct env1485 {
    struct env1443 envinst1443;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   redo1485 (   struct env1485 env ,    struct Editor_844 *  ed2998 ,    struct Dims_1417  dims3000 ) {
    if ( (  cmp9 ( ( ( ( * (  ed2998 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed2998 ) ) .f_actions ) .f_list ) .f_count ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    struct Action_168  action3001 = (  elem_dash_get1200 ( ( ( ( * (  ed2998 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed2998 ) ) .f_actions ) .f_cur ) ) );
    struct funenv1443  temp1486 = ( (struct funenv1443){ .fun = apply_dash_primitive1443, .env =  env.envinst1443  } );
    ( temp1486.fun ( temp1486.env ,  (  ed2998 ) ,  ( (  action3001 ) .f_prim ) ,  (  dims3000 ) ) );
    (*  ed2998 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed2998 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1476 {
    enum Unit_13  (*fun) (  struct env1476  ,    struct Editor_844 *  );
    struct env1476 env;
};

struct funenv1479 {
    enum Unit_13  (*fun) (  struct env1479  ,    struct Editor_844 *  ,    struct Primitive_169  ,    struct Dims_1417  ,    struct Cursor_170  ,    struct Maybe_171  );
    struct env1479 env;
};

struct env1487 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1476 envinst1476;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1479 envinst1479;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum PastePos_1488 {
    PastePos_1488_PasteBefore,
    PastePos_1488_PasteAfter,
};

static  struct Cursor_170   lam862 (   struct env862 env ,    struct Cursor_170  s3015 ) {
    return ( (  max908 ) ( (  s3015 ) ,  ( ( * ( env.ed3004 ) ) .f_cursor ) ) );
}

static  struct Cursor_170   lam865 (   struct env865 env ,    struct Cursor_170  s3017 ) {
    return ( (  min901 ) ( (  s3017 ) ,  ( ( * ( env.ed3004 ) ) .f_cursor ) ) );
}

static  struct Cursor_170   lam859 (   struct env859 env ,    struct Cursor_170  s3025 ) {
    return ( (  max908 ) ( (  s3025 ) ,  ( ( * ( env.ed3004 ) ) .f_cursor ) ) );
}

static  struct Cursor_170   lam856 (   struct env856 env ,    struct Cursor_170  s3028 ) {
    return ( (  min901 ) ( (  s3028 ) ,  ( ( * ( env.ed3004 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1487 (   struct env1487 env ,    struct Editor_844 *  ed3004 ,    enum PastePos_1488  pastepos3006 ,    struct Dims_1417  dims3008 ) {
    if ( ( ! ( (  is_dash_just837 ) ( ( ( * (  ed3004 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_134  cp3009 = ( (  or_dash_fail1104 ) ( ( ( * (  ed3004 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    struct Cursor_170  before_dash_cursor3010 = ( ( * (  ed3004 ) ) .f_cursor );
    struct Maybe_171  before_dash_sel3011 = ( ( * (  ed3004 ) ) .f_selected );
    bool  does_dash_it_dash_end_dash_in_dash_newline3012 = (  eq47 ( (  elem_dash_get1134 ( ( (  cp3009 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp3009 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline3012 ) ) {
        struct env862 envinst862 = {
            .ed3004 =  ed3004 ,
        };
        struct env865 envinst865 = {
            .ed3004 =  ed3004 ,
        };
        int32_t  from_dash_y3018 = ( {  enum PastePos_1488  dref3013 = (  pastepos3006 ) ;  dref3013 == PastePos_1488_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe861 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  ( (struct funenv862){ .fun = lam862, .env = envinst862 } ) ,  ( ( * (  ed3004 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe864 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  ( (struct funenv865){ .fun = lam865, .env = envinst865 } ) ,  ( ( * (  ed3004 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Primitive_169  prim3019 = ( ( Primitive_169_PrimInsert ) ( ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3018 ) } ) ,  ( (  clone1156 ) ( (  cp3009 ) ,  ( ( * (  ed3004 ) ) .f_al ) ) ) ) );
        struct funenv1479  temp1489 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  env.envinst1479  } );
        ( temp1489.fun ( temp1489.env ,  (  ed3004 ) ,  (  prim3019 ) ,  (  dims3008 ) ,  (  before_dash_cursor3010 ) ,  (  before_dash_sel3011 ) ) );
        int32_t  last_dash_pasted_dash_y3020 = (  op_dash_sub88 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        ( (  move_dash_to1416 ) ( (  ed3004 ) ,  ( (  size_dash_i32292 ) ( ( ( * ( (  get_dash_row1400 ) ( (  ed3004 ) ,  (  last_dash_pasted_dash_y3020 ) ) ) ) .f_count ) ) ) ,  (  last_dash_pasted_dash_y3020 ) ,  (  dims3008 ) ) );
        (*  ed3004 ) .f_selected = ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3018 ) } ) ) );
        struct funenv1476  temp1490 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  env.envinst1476  } );
        ( temp1490.fun ( temp1490.env ,  (  ed3004 ) ) );
    } else {
        size_t  temp1491;
        size_t  from_dash_x3021 = (  temp1491 );
        int32_t  temp1492;
        int32_t  from_dash_y3022 = (  temp1492 );
        enum PastePos_1488  dref3023 = (  pastepos3006 );
        switch (  dref3023 ) {
            case PastePos_1488_PasteAfter : {
                struct env859 envinst859 = {
                    .ed3004 =  ed3004 ,
                };
                struct Cursor_170  from_dash_cur3026 = ( (  maybe858 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  ( (struct funenv859){ .fun = lam859, .env = envinst859 } ) ,  ( ( * (  ed3004 ) ) .f_cursor ) ) );
                from_dash_x3021 = ( (  i32_dash_size290 ) ( (  op_dash_add87 ( ( (  from_dash_cur3026 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y3022 = ( (  from_dash_cur3026 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1424 ) ( (  ed3004 ) ,  ( (  from_dash_cur3026 ) .f_x ) ,  ( (  from_dash_cur3026 ) .f_y ) ) ) ) {
                    from_dash_y3022 = (  op_dash_add87 ( (  from_dash_y3022 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x3021 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1488_PasteBefore : {
                struct env856 envinst856 = {
                    .ed3004 =  ed3004 ,
                };
                struct Cursor_170  from_dash_cur3029 = ( (  maybe855 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  ( (struct funenv856){ .fun = lam856, .env = envinst856 } ) ,  ( ( * (  ed3004 ) ) .f_cursor ) ) );
                from_dash_x3021 = ( (  i32_dash_size290 ) ( ( (  from_dash_cur3029 ) .f_x ) ) );
                from_dash_y3022 = ( (  from_dash_cur3029 ) .f_y );
                break;
            }
        }
        struct Primitive_169  prim3030 = ( ( Primitive_169_PrimInsert ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( (  from_dash_x3021 ) ) ) , .f_y = (  from_dash_y3022 ) } ) ,  ( (  clone1156 ) ( (  cp3009 ) ,  ( ( * (  ed3004 ) ) .f_al ) ) ) ) );
        struct funenv1479  temp1493 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  env.envinst1479  } );
        ( temp1493.fun ( temp1493.env ,  (  ed3004 ) ,  (  prim3030 ) ,  (  dims3008 ) ,  (  before_dash_cursor3010 ) ,  (  before_dash_sel3011 ) ) );
        ( (  move_dash_left1420 ) ( (  ed3004 ) ,  (  dims3008 ) ) );
        (*  ed3004 ) .f_selected = ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( (  from_dash_x3021 ) ) ) , .f_y = (  from_dash_y3022 ) } ) ) );
        struct funenv1476  temp1494 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  env.envinst1476  } );
        ( temp1494.fun ( temp1494.env ,  (  ed3004 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1495 {
    struct env1427 envinst1427;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1479 envinst1479;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    struct env1476 envinst1476;
    ;
    ;
};

static  enum Unit_13   delete_dash_selected1495 (   struct env1495 env ,    struct Editor_844 *  ed3033 ,    struct Dims_1417  dims3035 ) {
    struct Cursor_170  before_dash_cursor3036 = ( ( * (  ed3033 ) ) .f_cursor );
    struct Maybe_171  before_dash_sel3037 = ( ( * (  ed3033 ) ) .f_selected );
    struct Cursor_170  cfrom3040 = ( {  struct Maybe_171  dref3038 = ( ( * (  ed3033 ) ) .f_selected ) ; dref3038.tag == Maybe_171_Just_t ? ( (  min901 ) ( ( dref3038 .stuff .Maybe_171_Just_s .field0 ) ,  ( ( * (  ed3033 ) ) .f_cursor ) ) ) : ( ( * (  ed3033 ) ) .f_cursor ) ; } );
    struct DynStr_134  temp1496;
    struct DynStr_134  del3041 = (  temp1496 );
    struct funenv1427  temp1497 = ( (struct funenv1427){ .fun = copy_dash_selection1427, .env =  env.envinst1427  } );
    struct Maybe_335  dref3042 = ( temp1497.fun ( temp1497.env ,  (  ed3033 ) ) );
    if ( dref3042.tag == Maybe_335_None_t ) {
        struct StrBuilder_595  temp1498 = ( (  mk1265 ) ( ( ( * (  ed3033 ) ) .f_al ) ) );
        struct StrBuilder_595 *  sb3043 = ( &temp1498 );
        struct funenv654  temp1499 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
        ( temp1499.fun ( temp1499.env ,  (  sb3043 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
        del3041 = ( (  as_dash_str930 ) ( (  sb3043 ) ) );
        ( (  set_dash_clipboard1426 ) ( (  ed3033 ) ,  ( (struct Maybe_335) { .tag = Maybe_335_None_t } ) ) );
    }
    else if ( dref3042.tag == Maybe_335_Just_t ) {
        if ( ( (  is_dash_just836 ) ( ( ( * (  ed3033 ) ) .f_selected ) ) ) ) {
            struct funenv1476  temp1500 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  env.envinst1476  } );
            ( temp1500.fun ( temp1500.env ,  (  ed3033 ) ) );
        }
        (*  ed3033 ) .f_selected = ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
        del3041 = ( dref3042 .stuff .Maybe_335_Just_s .field0 );
        ( (  set_dash_clipboard1426 ) ( (  ed3033 ) ,  ( ( Maybe_335_Just ) ( ( (  clone1156 ) ( ( dref3042 .stuff .Maybe_335_Just_s .field0 ) ,  ( ( * (  ed3033 ) ) .f_al ) ) ) ) ) ) );
    }
    struct funenv1479  temp1501 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  env.envinst1479  } );
    ( temp1501.fun ( temp1501.env ,  (  ed3033 ) ,  ( ( Primitive_169_PrimDelete ) ( (  cfrom3040 ) ,  (  del3041 ) ) ) ,  (  dims3035 ) ,  (  before_dash_cursor3036 ) ,  (  before_dash_sel3037 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1210 {
    enum Unit_13  (*fun) (  struct env1210  ,    struct List_3 *  ,    struct TakeWhile_529  );
    struct env1210 env;
};

struct env1502 {
    ;
    ;
    struct env1210 envinst1210;
    ;
    ;
    ;
    struct env1195 envinst1195;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1502 (   struct env1502 env ,    struct Editor_844 *  ed3047 ,    int32_t  y3049 ,    enum CAllocator_4  al3051 ) {
    struct List_3  temp1503 = ( (  mk1183 ) ( (  al3051 ) ) );
    struct List_3 *  nurow3052 = ( &temp1503 );
    struct TakeWhile_529  rowws3053 = ( (  indent_dash_on_dash_row1402 ) ( (  ed3047 ) ,  ( ( ( * (  ed3047 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars3054 = ( (  size_dash_i32292 ) ( ( (  count796 ) ( (  rowws3053 ) ) ) ) );
    struct funenv1210  temp1504 = ( (struct funenv1210){ .fun = add_dash_all1210, .env =  env.envinst1210  } );
    ( temp1504.fun ( temp1504.env ,  (  nurow3052 ) ,  (  rowws3053 ) ) );
    struct funenv1195  temp1505 = ( (struct funenv1195){ .fun = insert1195, .env =  env.envinst1195  } );
    ( temp1505.fun ( temp1505.env ,  ( & ( ( * (  ed3047 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size290 ) ( (  y3049 ) ) ) ,  ( * (  nurow3052 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1506 (    struct Editor_844 *  ed3057 ,    struct Cursor_170  c3059 ) {
    return ( {  struct Maybe_171  dref3060 = ( ( * (  ed3057 ) ) .f_selected ) ; dref3060.tag == Maybe_171_Just_t ? ( (  between911 ) ( (  c3059 ) ,  ( ( * (  ed3057 ) ) .f_cursor ) ,  ( dref3060 .stuff .Maybe_171_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1414 {
    enum Unit_13  (*fun) (  struct env1414  ,    struct Editor_844 *  ,    const char*  );
    struct env1414 env;
};

struct env1507 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1414 envinst1414;
    ;
};

static  struct Maybe_171   find_dash_next_dash_occurence1507 (   struct env1507 env ,    struct Editor_844 *  ed3064 ,    struct Slice_5  needle3066 ) {
    struct Cursor_170  from3067 = ( (  max908 ) ( ( ( * (  ed3064 ) ) .f_cursor ) ,  ( (  or_dash_else1107 ) ( ( ( * (  ed3064 ) ) .f_selected ) ,  ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline3068 = ( (  to_dash_slice1219 ) ( ( * ( (  get_dash_row1400 ) ( (  ed3064 ) ,  ( (  from3067 ) .f_y ) ) ) ) ) );
    struct Maybe_854  dref3069 = ( (  find_dash_slice1138 ) ( ( (  subslice314 ) ( (  curline3068 ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  from3067 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline3068 ) .f_count ) ) ) ,  (  needle3066 ) ) );
    if ( dref3069.tag == Maybe_854_Just_t ) {
        return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from3067 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32292 ) ( ( dref3069 .stuff .Maybe_854_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from3067 ) .f_y ) } ) ) );
    }
    else if ( dref3069.tag == Maybe_854_None_t ) {
        struct Zip_359  temp1508 =  into_dash_iter375 ( ( (  zip499 ) ( ( (  from1126 ) ( ( (  to_dash_slice1221 ) ( ( ( * (  ed3064 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( (  from3067 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from384 ) ( (  op_dash_add87 ( ( (  from3067 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_365  __cond1509 =  next367 (&temp1508);
            if (  __cond1509 .tag == 0 ) {
                break;
            }
            struct Tuple2_366  dref3071 =  __cond1509 .stuff .Maybe_365_Just_s .field0;
            struct Maybe_854  dref3074 = ( (  find_dash_slice1138 ) ( ( (  to_dash_slice1219 ) ( ( dref3071 .field0 ) ) ) ,  (  needle3066 ) ) );
            if ( dref3074.tag == Maybe_854_None_t ) {
            }
            else if ( dref3074.tag == Maybe_854_Just_t ) {
                return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3074 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = ( dref3071 .field1 ) } ) ) );
            }
        }
        struct funenv1414  temp1510 = ( (struct funenv1414){ .fun = send_dash_msg1414, .env =  env.envinst1414  } );
        ( temp1510.fun ( temp1510.env ,  (  ed3064 ) ,  ( "Wrapped!" ) ) );
        struct Zip_359  temp1511 =  into_dash_iter375 ( ( (  zip499 ) ( ( (  subslice305 ) ( ( (  to_dash_slice1221 ) ( ( ( * (  ed3064 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size290 ) ( ( (  from3067 ) .f_y ) ) ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_365  __cond1512 =  next367 (&temp1511);
            if (  __cond1512 .tag == 0 ) {
                break;
            }
            struct Tuple2_366  dref3076 =  __cond1512 .stuff .Maybe_365_Just_s .field0;
            struct Maybe_854  dref3079 = ( (  find_dash_slice1138 ) ( ( (  to_dash_slice1219 ) ( ( dref3076 .field0 ) ) ) ,  (  needle3066 ) ) );
            if ( dref3079.tag == Maybe_854_None_t ) {
            }
            else if ( dref3079.tag == Maybe_854_Just_t ) {
                return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3079 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = ( dref3076 .field1 ) } ) ) );
            }
        }
        struct Maybe_854  dref3081 = ( (  find_dash_slice1138 ) ( (  curline3068 ) ,  (  needle3066 ) ) );
        if ( dref3081.tag == Maybe_854_None_t ) {
        }
        else if ( dref3081.tag == Maybe_854_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3081 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = ( (  from3067 ) .f_y ) } ) ) );
        }
        struct funenv1414  temp1513 = ( (struct funenv1414){ .fun = send_dash_msg1414, .env =  env.envinst1414  } );
        ( temp1513.fun ( temp1513.env ,  (  ed3064 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
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
    struct env1414 envinst1414;
};

static  struct Cursor_170   lam880 (   struct env880 env ,    struct Cursor_170  s3089 ) {
    return ( (  min901 ) ( ( ( * ( env.ed3085 ) ) .f_cursor ) ,  (  s3089 ) ) );
}

static  struct Maybe_171   find_dash_prev_dash_occurence1514 (   struct env1514 env ,    struct Editor_844 *  ed3085 ,    struct Slice_5  needle3087 ) {
    struct env880 envinst880 = {
        .ed3085 =  ed3085 ,
    };
    struct Cursor_170  from3090 = ( (  maybe879 ) ( ( ( * (  ed3085 ) ) .f_selected ) ,  ( (struct funenv880){ .fun = lam880, .env = envinst880 } ) ,  ( ( * (  ed3085 ) ) .f_cursor ) ) );
    struct Slice_5  curline3091 = ( (  to_dash_slice1219 ) ( ( * ( (  get_dash_row1400 ) ( (  ed3085 ) ,  ( (  from3090 ) .f_y ) ) ) ) ) );
    struct Maybe_854  dref3092 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1141 ) ( ( (  subslice314 ) ( (  curline3091 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size290 ) ( ( (  from3090 ) .f_x ) ) ) ) ) ,  (  needle3087 ) ) );
    if ( dref3092.tag == Maybe_854_Just_t ) {
        return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3092 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = ( (  from3090 ) .f_y ) } ) ) );
    }
    else if ( dref3092.tag == Maybe_854_None_t ) {
        int32_t  from_dash_y3094 = (  op_dash_sub88 ( ( (  from3090 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3094 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row3095 = ( (  get_dash_row1400 ) ( (  ed3085 ) ,  (  from_dash_y3094 ) ) );
            struct Maybe_854  dref3096 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1141 ) ( ( (  to_dash_slice1219 ) ( ( * (  row3095 ) ) ) ) ,  (  needle3087 ) ) );
            if ( dref3096.tag == Maybe_854_None_t ) {
            }
            else if ( dref3096.tag == Maybe_854_Just_t ) {
                return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3096 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3094 ) } ) ) );
            }
            from_dash_y3094 = (  op_dash_sub88 ( (  from_dash_y3094 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1414  temp1515 = ( (struct funenv1414){ .fun = send_dash_msg1414, .env =  env.envinst1414  } );
        ( temp1515.fun ( temp1515.env ,  (  ed3085 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y3098 = (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( (  num_dash_rows1403 ) ( (  ed3085 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3098 ) , ( (  from3090 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row3099 = ( (  get_dash_row1400 ) ( (  ed3085 ) ,  (  from_dash_y3098 ) ) );
            struct Maybe_854  dref3100 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1141 ) ( ( (  to_dash_slice1219 ) ( ( * (  row3099 ) ) ) ) ,  (  needle3087 ) ) );
            if ( dref3100.tag == Maybe_854_None_t ) {
            }
            else if ( dref3100.tag == Maybe_854_Just_t ) {
                return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3100 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3098 ) } ) ) );
            }
            from_dash_y3098 = (  op_dash_sub88 ( (  from_dash_y3098 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_854  dref3102 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1141 ) ( (  curline3091 ) ,  (  needle3087 ) ) );
        if ( dref3102.tag == Maybe_854_None_t ) {
        }
        else if ( dref3102.tag == Maybe_854_Just_t ) {
            return ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( dref3102 .stuff .Maybe_854_Just_s .field0 ) ) ) , .f_y = ( (  from3090 ) .f_y ) } ) ) );
        }
        struct funenv1414  temp1516 = ( (struct funenv1414){ .fun = send_dash_msg1414, .env =  env.envinst1414  } );
        ( temp1516.fun ( temp1516.env ,  (  ed3085 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_171) { .tag = Maybe_171_None_t } );
    }
}

struct funenv1272 {
    struct DynStr_134  (*fun) (  struct env1272  ,    char  ,    enum CAllocator_4  );
    struct env1272 env;
};

struct env1517 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1479 envinst1479;
    ;
    ;
    struct env1272 envinst1272;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam868 (   struct env868 env ,    struct Cursor_170  s3110 ) {
    return ( (  min903 ) ( ( (  s3110 ) .f_y ) ,  ( ( ( * ( env.ed3106 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam871 (   struct env871 env ,    struct Cursor_170  s3113 ) {
    return ( (  max907 ) ( ( (  s3113 ) .f_y ) ,  ( ( ( * ( env.ed3106 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   indent_dash_selection1517 (   struct env1517 env ,    struct Editor_844 *  ed3106 ,    struct Dims_1417  dims3108 ) {
    struct env868 envinst868 = {
        .ed3106 =  ed3106 ,
    };
    int32_t  from_dash_y3111 = ( (  maybe867 ) ( ( ( * (  ed3106 ) ) .f_selected ) ,  ( (struct funenv868){ .fun = lam868, .env = envinst868 } ) ,  ( ( ( * (  ed3106 ) ) .f_cursor ) .f_y ) ) );
    struct env871 envinst871 = {
        .ed3106 =  ed3106 ,
    };
    int32_t  to_dash_y3114 = ( (  maybe870 ) ( ( ( * (  ed3106 ) ) .f_selected ) ,  ( (struct funenv871){ .fun = lam871, .env = envinst871 } ) ,  ( ( ( * (  ed3106 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_170  saved_dash_cursor3115 = ( ( * (  ed3106 ) ) .f_cursor );
    struct Maybe_171  saved_dash_selected3116 = ( ( * (  ed3106 ) ) .f_selected );
    struct RangeIter_382  temp1518 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_y3111 ) ,  (  to_dash_y3114 ) ) ) );
    while (true) {
        struct Maybe_348  __cond1519 =  next383 (&temp1518);
        if (  __cond1519 .tag == 0 ) {
            break;
        }
        int32_t  rowid3118 =  __cond1519 .stuff .Maybe_348_Just_s .field0;
        struct funenv1479  temp1520 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  env.envinst1479  } );
        struct funenv1272  temp1521 = ( (struct funenv1272){ .fun = mk_dash_dyn_dash_str1272, .env =  env.envinst1272  } );
        ( temp1520.fun ( temp1520.env ,  (  ed3106 ) ,  ( ( Primitive_169_PrimInsert ) ( ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3118 ) } ) ,  ( temp1521.fun ( temp1521.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3106 ) ) .f_al ) ) ) ) ) ,  (  dims3108 ) ,  (  saved_dash_cursor3115 ) ,  (  saved_dash_selected3116 ) ) );
    }
    (*  ed3106 ) .f_cursor = (  saved_dash_cursor3115 );
    (*  ed3106 ) .f_selected = (  saved_dash_selected3116 );
    return ( Unit_13_Unit );
}

struct env1522 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1479 envinst1479;
    ;
    ;
    ;
    ;
    struct env1272 envinst1272;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   lam874 (   struct env874 env ,    struct Cursor_170  s3125 ) {
    return ( (  min903 ) ( ( (  s3125 ) .f_y ) ,  ( ( ( * ( env.ed3121 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam877 (   struct env877 env ,    struct Cursor_170  s3128 ) {
    return ( (  max907 ) ( ( (  s3128 ) .f_y ) ,  ( ( ( * ( env.ed3121 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1522 (   struct env1522 env ,    struct Editor_844 *  ed3121 ,    struct Dims_1417  dims3123 ) {
    struct env874 envinst874 = {
        .ed3121 =  ed3121 ,
    };
    int32_t  from_dash_y3126 = ( (  maybe873 ) ( ( ( * (  ed3121 ) ) .f_selected ) ,  ( (struct funenv874){ .fun = lam874, .env = envinst874 } ) ,  ( ( ( * (  ed3121 ) ) .f_cursor ) .f_y ) ) );
    struct env877 envinst877 = {
        .ed3121 =  ed3121 ,
    };
    int32_t  to_dash_y3129 = ( (  maybe876 ) ( ( ( * (  ed3121 ) ) .f_selected ) ,  ( (struct funenv877){ .fun = lam877, .env = envinst877 } ) ,  ( ( ( * (  ed3121 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_170  saved_dash_cursor3130 = ( ( * (  ed3121 ) ) .f_cursor );
    struct Maybe_171  saved_dash_selected3131 = ( ( * (  ed3121 ) ) .f_selected );
    struct RangeIter_382  temp1523 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_y3126 ) ,  (  to_dash_y3129 ) ) ) );
    while (true) {
        struct Maybe_348  __cond1524 =  next383 (&temp1523);
        if (  __cond1524 .tag == 0 ) {
            break;
        }
        int32_t  rowid3133 =  __cond1524 .stuff .Maybe_348_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1406 ) ( (  ed3121 ) ,  ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3133 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct funenv1479  temp1525 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  env.envinst1479  } );
            struct funenv1272  temp1526 = ( (struct funenv1272){ .fun = mk_dash_dyn_dash_str1272, .env =  env.envinst1272  } );
            ( temp1525.fun ( temp1525.env ,  (  ed3121 ) ,  ( ( Primitive_169_PrimDelete ) ( ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3133 ) } ) ,  ( temp1526.fun ( temp1526.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3121 ) ) .f_al ) ) ) ) ) ,  (  dims3123 ) ,  (  saved_dash_cursor3130 ) ,  (  saved_dash_selected3131 ) ) );
        }
    }
    (*  ed3121 ) .f_cursor = (  saved_dash_cursor3130 );
    (*  ed3121 ) .f_selected = (  saved_dash_selected3131 );
    return ( Unit_13_Unit );
}

struct funenv1216 {
    struct List_302  (*fun) (  struct env1216  ,    struct Map_320  ,    enum CAllocator_4  );
    struct env1216 env;
};

struct env1527 {
    ;
    ;
    ;
    ;
    ;
    struct env323 envinst323;
    ;
    struct env1216 envinst1216;
    struct env589 envinst589;
    ;
    ;
    ;
};

static  struct List_3   lam322 (   struct env322 env ,    struct DynStr_134  line3170 ) {
    struct funenv323  temp1530 = ( (struct funenv323){ .fun = to_dash_list323, .env =  env.envinst323  } );
    return ( temp1530.fun ( temp1530.env ,  (  line3170 ) ,  ( env.al3139 ) ) );
}

static  struct List_302   load_dash_file1527 (   struct env1527 env ,    const char*  filename3137 ,    enum CAllocator_4  al3139 ) {
    struct funenv1216  temp1529 = ( (struct funenv1216){ .fun = to_dash_list1216, .env =  env.envinst1216  } );
    struct env322 envinst322 = {
        .envinst323 = env.envinst323 ,
        .al3139 =  al3139 ,
    };
    struct List_302  temp1528 = ( temp1529.fun ( temp1529.env ,  ( (  map351 ) ( ( (  lines1167 ) ( ( (  read_dash_contents1388 ) ( (  filename3137 ) ,  (  al3139 ) ) ) ) ) ,  ( (struct funenv322){ .fun = lam322, .env = envinst322 } ) ) ) ,  (  al3139 ) ) );
    struct List_302 *  file3171 = ( &temp1528 );
    if ( ( (  null829 ) ( (  file3171 ) ) ) ) {
        struct funenv589  temp1531 = ( (struct funenv589){ .fun = add589, .env =  env.envinst589  } );
        ( temp1531.fun ( temp1531.env ,  (  file3171 ) ,  ( (  mk1183 ) ( (  al3139 ) ) ) ) );
    }
    return ( * (  file3171 ) );
}

struct env1532 {
    ;
    enum CAllocator_4  al3134;
    ;
    ;
    ;
    struct env654 envinst654;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam653 (   struct env653 env ,    char  c3181 ) {
    struct funenv654  temp1536 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
    return ( temp1536.fun ( temp1536.env ,  ( env.sb3177 ) ,  (  c3181 ) ) );
}

static  enum Unit_13   save_dash_file1532 (   struct env1532 env ,    struct List_302  cf3174 ,    const char*  filename3176 ) {
    struct StrBuilder_595  temp1533 = ( (  mk1265 ) ( ( env.al3134 ) ) );
    struct StrBuilder_595 *  sb3177 = ( &temp1533 );
    struct SliceIter_300  temp1534 =  into_dash_iter303 ( (  cf3174 ) );
    while (true) {
        struct Maybe_334  __cond1535 =  next368 (&temp1534);
        if (  __cond1535 .tag == 0 ) {
            break;
        }
        struct List_3  row3179 =  __cond1535 .stuff .Maybe_334_Just_s .field0;
        struct env653 envinst653 = {
            .sb3177 =  sb3177 ,
            .envinst654 = env.envinst654 ,
        };
        ( (  for_dash_each652 ) ( (  row3179 ) ,  ( (struct funenv653){ .fun = lam653, .env = envinst653 } ) ) );
        struct funenv654  temp1537 = ( (struct funenv654){ .fun = write_dash_char654, .env =  env.envinst654  } );
        ( temp1537.fun ( temp1537.env ,  (  sb3177 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1390 ) ( (  filename3176 ) ,  ( (  as_dash_str930 ) ( (  sb3177 ) ) ) ) );
    ( (  free1267 ) ( (  sb3177 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1538 (    struct List_302  cf3184 ) {
    ( (  for_dash_each665 ) ( ( (  addresses1222 ) ( (  cf3184 ) ) ) ,  (  free1185 ) ) );
    ( (  free1186 ) ( ( & (  cf3184 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1539 {
    int32_t  pad3185;
    ;
    ;
    ;
    ;
};

struct anon_1540 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1540   left_dash_offset1539 (   struct env1539 env ,    struct Editor_844 *  ed3188 ) {
    int32_t  max_dash_digits3189 = ( (  max907 ) ( ( (  count_dash_digits915 ) ( ( ( ( * (  ed3188 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1540) { .f_max_dash_digits = (  max_dash_digits3189 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad3185 ) , (  max_dash_digits3189 ) ) ) , ( env.pad3185 ) ) ) } );
}

struct funenv1539 {
    struct anon_1540  (*fun) (  struct env1539  ,    struct Editor_844 *  );
    struct env1539 env;
};

struct env1541 {
    ;
    ;
    struct env1539 envinst1539;
};

static  struct Dims_1417   screen_dash_dims1541 (   struct env1541 env ,    struct Editor_844 *  ed3192 ,    struct Tui_678 *  tui3194 ) {
    struct funenv1539  temp1542 = ( (struct funenv1539){ .fun = left_dash_offset1539, .env =  env.envinst1539  } );
    return ( (struct Dims_1417) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * (  tui3194 ) ) .f_width ) ) ) , ( ( temp1542.fun ( temp1542.env ,  (  ed3192 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32296 ) ( ( ( * (  tui3194 ) ) .f_height ) ) ) } );
}

struct env1543 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1539 envinst1539;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad3185;
    ;
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

static  enum Unit_13   render_dash_editor1543 (   struct env1543 env ,    struct Screen_677 *  screen3197 ,    struct Editor_844 *  ed3199 ) {
    int32_t  w3200 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen3197 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3201 = ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen3197 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y3202 = ( ( * (  ed3199 ) ) .f_screen_dash_top );
    int32_t  from_dash_x3203 = ( ( * (  ed3199 ) ) .f_screen_dash_left );
    int32_t  x3204 = (  from_dash_integral29 ( 0 ) );
    int32_t  y3205 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1097 ) ( (  cmp9 ( ( ( ( * (  ed3199 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1539  temp1544 = ( (struct funenv1539){ .fun = left_dash_offset1539, .env =  env.envinst1539  } );
    struct anon_1540  offstuff3206 = ( temp1544.fun ( temp1544.env ,  (  ed3199 ) ) );
    int32_t  max_dash_digits3207 = ( (  offstuff3206 ) .f_max_dash_digits );
    int32_t  left_dash_off3208 = ( (  offstuff3206 ) .f_total_dash_offset );
    struct Drop_358  temp1545 =  into_dash_iter357 ( ( (  drop374 ) ( ( (  zip501 ) ( ( ( * (  ed3199 ) ) .f_current_dash_file ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size290 ) ( (  from_dash_y3202 ) ) ) ) ) );
    while (true) {
        struct Maybe_365  __cond1546 =  next364 (&temp1545);
        if (  __cond1546 .tag == 0 ) {
            break;
        }
        struct Tuple2_366  dref3209 =  __cond1546 .stuff .Maybe_365_Just_s .field0;
        int32_t  row_dash_num3212 = (  op_dash_add87 ( ( dref3209 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_382  temp1547 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3185 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1548 =  next383 (&temp1547);
            if (  __cond1548 .tag == 0 ) {
                break;
            }
            int32_t  xx3214 =  __cond1548 .stuff .Maybe_348_Just_s .field0;
            ( (  put_dash_char1362 ) ( (  screen3197 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx3214 ) ,  (  y3205 ) ) );
        }
        ( (  draw_dash_str_dash_right1375 ) ( (  screen3197 ) ,  (  row_dash_num3212 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen3197 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits3207 ) ) ) , ( env.pad3185 ) ) ) ,  (  y3205 ) ) );
        struct RangeIter_382  temp1549 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3185 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1550 =  next383 (&temp1549);
            if (  __cond1550 .tag == 0 ) {
                break;
            }
            int32_t  xx3216 =  __cond1550 .stuff .Maybe_348_Just_s .field0;
            ( (  put_dash_char1362 ) ( (  screen3197 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx3216 ) , ( env.pad3185 ) ) ) , (  max_dash_digits3207 ) ) ) ,  (  y3205 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed3199 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num3212 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_382  temp1551 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits3207 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_348  __cond1552 =  next383 (&temp1551);
                if (  __cond1552 .tag == 0 ) {
                    break;
                }
                int32_t  xxx3218 =  __cond1552 .stuff .Maybe_348_Just_s .field0;
                struct Cell_58 *  cp3219 = ( (  or_dash_fail1105 ) ( ( (  get_dash_cell_dash_ptr1356 ) ( (  screen3197 ) ,  (  op_dash_add87 ( (  xxx3218 ) , ( env.pad3185 ) ) ) ,  (  y3205 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp3219 ) .f_fg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp3219 ) .f_bg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_362  temp1553 =  into_dash_iter361 ( ( (  drop376 ) ( ( (  zip502 ) ( ( dref3209 .field0 ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size290 ) ( (  from_dash_x3203 ) ) ) ) ) );
        while (true) {
            struct Maybe_371  __cond1554 =  next370 (&temp1553);
            if (  __cond1554 .tag == 0 ) {
                break;
            }
            struct Tuple2_372  dref3220 =  __cond1554 .stuff .Maybe_371_Just_s .field0;
            bool  in_dash_selection3223 = ( (  is_dash_in_dash_selection1506 ) ( (  ed3199 ) ,  ( (struct Cursor_170) { .f_x = ( dref3220 .field1 ) , .f_y = ( dref3209 .field1 ) } ) ) );
            if ( (  in_dash_selection3223 ) ) {
                ( (  set_dash_screen_dash_colors1355 ) ( (  screen3197 ) ,  ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref3220 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1362 ) ( (  screen3197 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3208 ) , (  x3204 ) ) ) ,  (  y3205 ) ) );
                x3204 = (  op_dash_add87 ( (  x3204 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1362 ) ( (  screen3197 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3208 ) , (  x3204 ) ) ) ,  (  y3205 ) ) );
            } else {
                ( (  put_dash_char1362 ) ( (  screen3197 ) ,  ( dref3220 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off3208 ) , (  x3204 ) ) ) ,  (  y3205 ) ) );
            }
            if ( (  in_dash_selection3223 ) ) {
                ( (  set_dash_screen_dash_colors1355 ) ( (  screen3197 ) ,  ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x3204 = (  op_dash_add87 ( (  x3204 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x3204 ) , (  w3200 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x3204 ) , (  w3200 ) ) == 0 ) && ( (  is_dash_in_dash_selection1506 ) ( (  ed3199 ) ,  ( (struct Cursor_170) { .f_x = ( (  size_dash_i32292 ) ( ( ( dref3209 .field0 ) .f_count ) ) ) , .f_y = ( dref3209 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell3224 = ( (  or_dash_fail1105 ) ( ( (  get_dash_cell_dash_ptr1356 ) ( (  screen3197 ) ,  (  op_dash_add87 ( (  left_dash_off3208 ) , (  x3204 ) ) ) ,  (  y3205 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell3224 ) .f_fg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell3224 ) .f_bg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y3205 = (  op_dash_add87 ( (  y3205 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x3204 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y3205 ) , (  h3201 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_171  dref3225 = ( ( * (  ed3199 ) ) .f_selected );
    if ( dref3225.tag == Maybe_171_None_t ) {
    }
    else if ( dref3225.tag == Maybe_171_Just_t ) {
        int32_t  vx3227 = ( (  from_dash_visual1397 ) ( ( (  x_dash_to_dash_visual_dash_x1408 ) ( (  ed3199 ) ,  ( ( dref3225 .stuff .Maybe_171_Just_s .field0 ) .f_x ) ,  ( ( dref3225 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len3228 = ( (  maybe899 ) ( ( (  try_dash_get1178 ) ( ( (  get_dash_row1400 ) ( (  ed3199 ) ,  ( ( dref3225 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size290 ) ( ( ( dref3225 .stuff .Maybe_171_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1392 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_382  temp1555 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3228 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1556 =  next383 (&temp1555);
            if (  __cond1556 .tag == 0 ) {
                break;
            }
            int32_t  x3230 =  __cond1556 .stuff .Maybe_348_Just_s .field0;
            struct Maybe_1106  dref3231 = ( (  get_dash_cell_dash_ptr1356 ) ( (  screen3197 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3208 ) , ( ( * (  ed3199 ) ) .f_screen_dash_left ) ) ) , (  vx3227 ) ) ) , (  x3230 ) ) ) ,  (  op_dash_sub88 ( ( ( dref3225 .stuff .Maybe_171_Just_s .field0 ) .f_y ) , (  from_dash_y3202 ) ) ) ) );
            if ( dref3231.tag == Maybe_1106_None_t ) {
            }
            else if ( dref3231.tag == Maybe_1106_Just_t ) {
                (* dref3231 .stuff .Maybe_1106_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref3231 .stuff .Maybe_1106_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_170  cur3233 = ( ( * (  ed3199 ) ) .f_cursor );
    int32_t  vx3234 = ( (  from_dash_visual1397 ) ( ( (  x_dash_to_dash_visual_dash_x1408 ) ( (  ed3199 ) ,  ( (  cur3233 ) .f_x ) ,  ( (  cur3233 ) .f_y ) ) ) ) );
    int32_t  len3235 = ( (  maybe899 ) ( ( (  try_dash_get1178 ) ( ( (  cursor_dash_row1401 ) ( (  ed3199 ) ) ) ,  ( (  i32_dash_size290 ) ( ( (  cur3233 ) .f_x ) ) ) ) ) ,  (  char_dash_len1392 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_382  temp1557 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3235 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1558 =  next383 (&temp1557);
        if (  __cond1558 .tag == 0 ) {
            break;
        }
        int32_t  x3237 =  __cond1558 .stuff .Maybe_348_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell3238 = ( (  or_dash_fail1105 ) ( ( (  get_dash_cell_dash_ptr1356 ) ( (  screen3197 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3208 ) , ( ( * (  ed3199 ) ) .f_screen_dash_left ) ) ) , (  vx3234 ) ) ) , (  x3237 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3199 ) ) .f_cursor ) .f_y ) , (  from_dash_y3202 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell3238 ) .f_fg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell3238 ) .f_bg = ( ( * ( ( * (  ed3199 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1559 (    struct Maybe_841 *  dref3240 ,    struct Screen_677 *  screen3243 ) {
    struct Maybe_841  dref3244 = ( (* dref3240 ) );
    if ( dref3244.tag == Maybe_841_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3244.tag == Maybe_841_Just_t ) {
        struct Duration_1293  diff3246 = ( (  diff1294 ) ( ( (  now1290 ) ( ) ) ,  ( dref3244 .stuff .Maybe_841_Just_s .field0 ) ) );
        struct Duration_1293  limit3247 = ( (  duration_dash_from_dash_ns1295 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1292 ( (  diff3246 ) , (  limit3247 ) ) == 2 ) ) {
            (* dref3240 ) = ( (struct Maybe_841) { .tag = Maybe_841_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3248 = (  op_dash_div85 ( ( (  u32_dash_i64295 ) ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3249 = (  op_dash_div85 ( ( (  u32_dash_i64295 ) ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3250 = ( (  i64_dash_i32291 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1296 ) ( (  diff3246 ) ) ) , (  x_dash_fill3248 ) ) ) , ( (  duration_dash_to_dash_ns1296 ) ( (  limit3247 ) ) ) ) ) ) );
        int32_t  y_dash_progress3251 = ( (  i64_dash_i32291 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1296 ) ( (  diff3246 ) ) ) , (  y_dash_fill3249 ) ) ) , ( (  duration_dash_to_dash_ns1296 ) ( (  limit3247 ) ) ) ) ) ) );
        uint32_t  center_dash_x3252 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3253 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1354 ) ( (  screen3243 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3254 = (  op_dash_sub88 ( ( (  i64_dash_i32291 ) ( (  x_dash_fill3248 ) ) ) , (  x_dash_progress3250 ) ) );
        int32_t  y_dash_off3255 = (  op_dash_sub88 ( ( (  i64_dash_i32291 ) ( (  y_dash_fill3249 ) ) ) , (  y_dash_progress3251 ) ) );
        int32_t  h3256 = (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3257 = (  op_dash_sub88 ( ( (  u32_dash_i32296 ) ( ( ( * ( ( * (  screen3243 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_382  temp1560 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3256 ) ) ) );
        while (true) {
            struct Maybe_348  __cond1561 =  next383 (&temp1560);
            if (  __cond1561 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3259 =  __cond1561 .stuff .Maybe_348_Just_s .field0;
            struct RangeIter_382  temp1562 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3257 ) ) ) );
            while (true) {
                struct Maybe_348  __cond1563 =  next383 (&temp1562);
                if (  __cond1563 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3261 =  __cond1563 .stuff .Maybe_348_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3261 ) , (  x_dash_off3254 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3261 ) , (  op_dash_sub88 ( (  w3257 ) , (  x_dash_off3254 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3259 ) , (  y_dash_off3255 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3259 ) , (  op_dash_sub88 ( (  h3256 ) , (  y_dash_off3255 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1362 ) ( (  screen3243 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3261 ) ,  (  screen_dash_y3259 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1286 {
    const char*  (*fun) (  struct env1286  ,    struct TakeWhile_531  ,    enum CAllocator_4  );
    struct env1286 env;
};

struct funenv1288 {
    const char*  (*fun) (  struct env1288  ,    struct TakeWhile_536  ,    enum CAllocator_4  );
    struct env1288 env;
};

struct funenv1532 {
    enum Unit_13  (*fun) (  struct env1532  ,    struct List_302  ,    const char*  );
    struct env1532 env;
};

struct funenv1527 {
    struct List_302  (*fun) (  struct env1527  ,    const char*  ,    enum CAllocator_4  );
    struct env1527 env;
};

struct env1564 {
    ;
    ;
    ;
    ;
    ;
    struct env1286 envinst1286;
    struct env1288 envinst1288;
    ;
    ;
    ;
    ;
    ;
    struct Theme_847 *  light_dash_theme2685;
    ;
    ;
    ;
    ;
    ;
    struct Theme_847 *  dark_dash_theme2684;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1532 envinst1532;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1527 envinst1527;
};

static  bool   lam1565 (    char  c3275 ) {
    return ( ! ( (  is_dash_whitespace1162 ) ( (  c3275 ) ) ) );
}

static  bool   lam1569 (    char  c3283 ) {
    return ( ! ( (  is_dash_whitespace1162 ) ( (  c3283 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1564 (   struct env1564 env ,    struct Editor_844 *  ed3264 ,    struct DynStr_134  s3266 ,    struct Dims_1417  dim3268 ,    enum CAllocator_4  al3270 ) {
    struct DropWhile_534  s3271 = ( (  drop_dash_while561 ) ( (  s3266 ) ,  (  is_dash_whitespace1162 ) ) );
    struct TakeWhile_538  cmd3272 = ( (  take_dash_while552 ) ( (  s3271 ) ,  (  is_dash_not_dash_whitespace1163 ) ) );
    struct DropWhile_532  rest3273 = ( (  drop_dash_while560 ) ( ( (  drop_dash_while559 ) ( (  s3271 ) ,  (  is_dash_not_dash_whitespace1163 ) ) ) ,  (  is_dash_whitespace1162 ) ) );
    if ( ( (  eq1076 ) ( (  cmd3272 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_531  filename3276 = ( (  take_dash_while554 ) ( (  rest3273 ) ,  (  lam1565 ) ) );
        const char*  temp1566;
        const char*  alfname3277 = (  temp1566 );
        if ( ( (  null831 ) ( (  filename3276 ) ) ) ) {
            struct Maybe_287  dref3278 = ( ( * (  ed3264 ) ) .f_filename );
            if ( dref3278.tag == Maybe_287_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3278.tag == Maybe_287_Just_t ) {
                alfname3277 = ( dref3278 .stuff .Maybe_287_Just_s .field0 );
            }
        } else {
            struct Maybe_287  dref3280 = ( ( * (  ed3264 ) ) .f_filename );
            if ( dref3280.tag == Maybe_287_None_t ) {
            }
            else if ( dref3280.tag == Maybe_287_Just_t ) {
                ( (  free1152 ) ( (  al3270 ) ,  ( (struct Slice_1153) { .f_ptr = ( (  cast201 ) ( ( dref3280 .stuff .Maybe_287_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1286  temp1567 = ( (struct funenv1286){ .fun = mk_dash_const_dash_str1286, .env =  env.envinst1286  } );
            alfname3277 = ( temp1567.fun ( temp1567.env ,  (  filename3276 ) ,  (  al3270 ) ) );
        }
        struct funenv1532  temp1568 = ( (struct funenv1532){ .fun = save_dash_file1532, .env =  env.envinst1532  } );
        ( temp1568.fun ( temp1568.env ,  ( ( * (  ed3264 ) ) .f_current_dash_file ) ,  (  alfname3277 ) ) );
        (*  ed3264 ) .f_filename = ( ( Maybe_287_Just ) ( (  alfname3277 ) ) );
    } else {
        if ( ( (  eq1076 ) ( (  cmd3272 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3264 ) .f_running = ( false );
        } else {
            if ( ( (  eq1076 ) ( (  cmd3272 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_536  filename3284 = ( (  take_dash_while556 ) ( (  rest3273 ) ,  (  lam1569 ) ) );
                struct funenv1288  temp1570 = ( (struct funenv1288){ .fun = mk_dash_const_dash_str1288, .env =  env.envinst1288  } );
                const char*  alfname3285 = ( temp1570.fun ( temp1570.env ,  (  filename3284 ) ,  (  al3270 ) ) );
                struct List_302  og3286 = ( ( * (  ed3264 ) ) .f_current_dash_file );
                struct funenv1527  temp1571 = ( (struct funenv1527){ .fun = load_dash_file1527, .env =  env.envinst1527  } );
                (*  ed3264 ) .f_current_dash_file = ( temp1571.fun ( temp1571.env ,  (  alfname3285 ) ,  (  al3270 ) ) );
                struct Maybe_287  dref3287 = ( ( * (  ed3264 ) ) .f_filename );
                if ( dref3287.tag == Maybe_287_None_t ) {
                }
                else if ( dref3287.tag == Maybe_287_Just_t ) {
                    ( (  free1152 ) ( (  al3270 ) ,  ( (struct Slice_1153) { .f_ptr = ( (  cast201 ) ( ( dref3287 .stuff .Maybe_287_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3264 ) .f_filename = ( ( Maybe_287_Just ) ( (  alfname3285 ) ) );
                (*  ed3264 ) .f_cursor = ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3264 ) .f_goal_dash_x = ( ( Visual_845_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3264 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1538 ) ( (  og3286 ) ) );
            } else {
                if ( ( (  eq1079 ) ( (  cmd3272 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_549  theme_dash_name3289 = ( (  take_dash_while557 ) ( (  rest3273 ) ,  (  is_dash_not_dash_whitespace1163 ) ) );
                    if ( ( (  eq1082 ) ( (  theme_dash_name3289 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3264 ) .f_theme = ( env.dark_dash_theme2684 );
                    } else {
                        if ( ( (  eq1082 ) ( (  theme_dash_name3289 ) ,  ( "light" ) ) ) ) {
                            (*  ed3264 ) .f_theme = ( env.light_dash_theme2685 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_762  dref3290 = ( (  parse_dash_int1172 ) ( (  cmd3272 ) ) );
                    if ( dref3290.tag == Maybe_762_Just_t ) {
                        int32_t  newline3292 = ( (  clamp912 ) ( ( (  i64_dash_i32291 ) ( (  op_dash_sub84 ( ( dref3290 .stuff .Maybe_762_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32292 ) ( ( ( ( * (  ed3264 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1419 ) ( (  ed3264 ) ,  (  newline3292 ) ,  (  dim3268 ) ) );
                    }
                    else if ( dref3290.tag == Maybe_762_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1284 {
    const char*  (*fun) (  struct env1284  ,    const char*  ,    enum CAllocator_4  );
    struct env1284 env;
};

struct funenv1313 {
    struct Tui_678  (*fun) (  struct env1313  );
    struct env1313 env;
};

struct funenv1541 {
    struct Dims_1417  (*fun) (  struct env1541  ,    struct Editor_844 *  ,    struct Tui_678 *  );
    struct env1541 env;
};

struct funenv1483 {
    enum Unit_13  (*fun) (  struct env1483  ,    struct Editor_844 *  ,    struct Dims_1417  );
    struct env1483 env;
};

struct funenv1485 {
    enum Unit_13  (*fun) (  struct env1485  ,    struct Editor_844 *  ,    struct Dims_1417  );
    struct env1485 env;
};

struct funenv1495 {
    enum Unit_13  (*fun) (  struct env1495  ,    struct Editor_844 *  ,    struct Dims_1417  );
    struct env1495 env;
};

struct funenv1441 {
    enum Unit_13  (*fun) (  struct env1441  ,    struct Editor_844 *  );
    struct env1441 env;
};

struct funenv1487 {
    enum Unit_13  (*fun) (  struct env1487  ,    struct Editor_844 *  ,    enum PastePos_1488  ,    struct Dims_1417  );
    struct env1487 env;
};

struct funenv1517 {
    enum Unit_13  (*fun) (  struct env1517  ,    struct Editor_844 *  ,    struct Dims_1417  );
    struct env1517 env;
};

struct funenv1522 {
    enum Unit_13  (*fun) (  struct env1522  ,    struct Editor_844 *  ,    struct Dims_1417  );
    struct env1522 env;
};

struct funenv1502 {
    enum Unit_13  (*fun) (  struct env1502  ,    struct Editor_844 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1502 env;
};

struct funenv1507 {
    struct Maybe_171  (*fun) (  struct env1507  ,    struct Editor_844 *  ,    struct Slice_5  );
    struct env1507 env;
};

struct funenv1514 {
    struct Maybe_171  (*fun) (  struct env1514  ,    struct Editor_844 *  ,    struct Slice_5  );
    struct env1514 env;
};

static  int32_t   lam1621 (    struct Cursor_170  s3326 ) {
    return ( (  s3326 ) .f_x );
}

static  int32_t   lam1624 (    struct Cursor_170  s3330 ) {
    return ( (  s3330 ) .f_x );
}

static  bool   lam885 (   struct env885 env ,    char  c3335 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1393 ) ( (  c3335 ) ) ) ) ) , ( env.cur_dash_char_dash_type3333 ) ) );
}

static  bool   lam1626 (    char  c3337 ) {
    return (  eq55 ( ( (  char_dash_type1393 ) ( (  c3337 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1628 (    char  c3341 ) {
    return (  eq55 ( ( (  char_dash_type1393 ) ( (  c3341 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam890 (   struct env890 env ,    char  c3344 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1393 ) ( (  c3344 ) ) ) ) ) , ( env.cur_dash_char_dash_type3342 ) ) );
}

static  bool   lam1630 (    char  c3348 ) {
    return (  eq55 ( ( (  char_dash_type1393 ) ( (  c3348 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam894 (   struct env894 env ,    char  c3351 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1393 ) ( (  c3351 ) ) ) ) ) , ( env.cur_dash_char_dash_type3349 ) ) );
}

static  bool   lam897 (   struct env897 env ,    char  c3353 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1393 ) ( (  c3353 ) ) ) ) ) , ( env.cur_dash_char_dash_type3349 ) ) );
}

struct funenv1262 {
    enum Unit_13  (*fun) (  struct env1262  ,    struct StrBuilder_595 *  );
    struct env1262 env;
};

struct funenv1564 {
    enum Unit_13  (*fun) (  struct env1564  ,    struct Editor_844 *  ,    struct DynStr_134  ,    struct Dims_1417  ,    enum CAllocator_4  );
    struct env1564 env;
};

struct funenv1351 {
    bool  (*fun) (  struct env1351  ,    struct Screen_677 *  );
    struct env1351 env;
};

struct funenv1543 {
    enum Unit_13  (*fun) (  struct env1543  ,    struct Screen_677 *  ,    struct Editor_844 *  );
    struct env1543 env;
};

static  struct Maybe_49   lam843 (   struct env843 env ,    struct List_3  l3395 ) {
    return ( (  try_dash_get1178 ) ( ( & (  l3395 ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * ( env.ed3298 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_372   lam1662 (    char  c3397 ) {
    return ( ( Tuple2_372_Tuple2 ) ( (  c3397 ) ,  ( (  char_dash_i32906 ) ( (  c3397 ) ) ) ) );
}

static  size_t   lam1664 (    struct DynStr_134  s3403 ) {
    return ( ( (  s3403 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1828 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1829 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1830 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env590 envinst590 = {
        .starting_dash_size1828 =  starting_dash_size1828 ,
        .growth_dash_factor1829 =  growth_dash_factor1829 ,
    };
    struct env326 envinst326 = {
        .starting_dash_size1828 =  starting_dash_size1828 ,
        .growth_dash_factor1829 =  growth_dash_factor1829 ,
    };
    struct env1187 envinst1187 = {
        .starting_dash_size1828 =  starting_dash_size1828 ,
        .growth_dash_factor1829 =  growth_dash_factor1829 ,
    };
    struct env589 envinst589 = {
        .envinst590 = envinst590 ,
    };
    struct env325 envinst325 = {
        .envinst326 = envinst326 ,
    };
    struct env1190 envinst1190 = {
        .envinst1187 = envinst1187 ,
    };
    struct env1192 envinst1192 = {
        .envinst325 = envinst325 ,
        .envinst326 = envinst326 ,
    };
    struct env1195 envinst1195 = {
        .envinst589 = envinst589 ,
        .envinst590 = envinst590 ,
    };
    struct env1198 envinst1198 = {
        .shrink_dash_factor1830 =  shrink_dash_factor1830 ,
    };
    struct env1199 envinst1199 = {
        .shrink_dash_factor1830 =  shrink_dash_factor1830 ,
    };
    struct env1201 envinst1201 = {
        .envinst1199 = envinst1199 ,
    };
    struct env324 envinst324 = {
        .envinst325 = envinst325 ,
    };
    struct env1204 envinst1204 = {
        .envinst589 = envinst589 ,
    };
    struct env1206 envinst1206 = {
        .envinst325 = envinst325 ,
    };
    struct env1208 envinst1208 = {
        .envinst325 = envinst325 ,
    };
    struct env1210 envinst1210 = {
        .envinst325 = envinst325 ,
    };
    struct env323 envinst323 = {
        .envinst324 = envinst324 ,
    };
    struct env1216 envinst1216 = {
        .envinst1204 = envinst1204 ,
    };
    struct env1251 envinst1251 = {
        .envinst325 = envinst325 ,
    };
    struct env1253 envinst1253 = {
        .envinst325 = envinst325 ,
    };
    struct env1255 envinst1255 = {
        .envinst325 = envinst325 ,
    };
    struct env1257 envinst1257 = {
        .envinst325 = envinst325 ,
    };
    struct env1259 envinst1259 = {
        .envinst1206 = envinst1206 ,
    };
    struct env654 envinst654 = {
        .envinst325 = envinst325 ,
    };
    struct env1262 envinst1262 = {
        .envinst1201 = envinst1201 ,
    };
    struct env1268 envinst1268 = {
        .envinst1251 = envinst1251 ,
        .envinst654 = envinst654 ,
    };
    struct env1272 envinst1272 = {
        .envinst1253 = envinst1253 ,
        .envinst654 = envinst654 ,
    };
    struct env1276 envinst1276 = {
        .envinst1255 = envinst1255 ,
        .envinst654 = envinst654 ,
    };
    struct env1280 envinst1280 = {
        .envinst1257 = envinst1257 ,
        .envinst654 = envinst654 ,
    };
    struct env1284 envinst1284 = {
        .envinst1268 = envinst1268 ,
    };
    struct env1286 envinst1286 = {
        .envinst1276 = envinst1276 ,
    };
    struct env1288 envinst1288 = {
        .envinst1280 = envinst1280 ,
    };
    bool  temp1312 = ( false );
    bool *  should_dash_resize2458 = ( &temp1312 );
    struct env1313 envinst1313 = {
        .should_dash_resize2458 =  should_dash_resize2458 ,
    };
    struct env1336 envinst1336 = {
        .should_dash_resize2458 =  should_dash_resize2458 ,
    };
    struct env1351 envinst1351 = {
        .envinst1336 = envinst1336 ,
    };
    struct Theme_847  temp1394 = ( (struct Theme_847) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_847 *  dark_dash_theme2684 = ( &temp1394 );
    struct Theme_847  temp1395 = ( (struct Theme_847) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_847 *  light_dash_theme2685 = ( &temp1395 );
    struct env1404 envinst1404 = {
        .envinst1198 = envinst1198 ,
    };
    struct env1414 envinst1414 = {
        .envinst1268 = envinst1268 ,
    };
    struct env1427 envinst1427 = {
        .envinst1253 = envinst1253 ,
        .envinst1259 = envinst1259 ,
        .envinst654 = envinst654 ,
    };
    struct env1441 envinst1441 = {
        .envinst1427 = envinst1427 ,
    };
    struct env1443 envinst1443 = {
        .envinst1404 = envinst1404 ,
        .envinst1206 = envinst1206 ,
        .envinst1208 = envinst1208 ,
        .envinst589 = envinst589 ,
        .envinst1195 = envinst1195 ,
        .envinst1192 = envinst1192 ,
        .envinst1199 = envinst1199 ,
    };
    struct env1458 envinst1458 = {
        .envinst1190 = envinst1190 ,
    };
    struct env1460 envinst1460 = {
        .envinst1253 = envinst1253 ,
        .envinst1259 = envinst1259 ,
        .envinst1458 = envinst1458 ,
        .envinst654 = envinst654 ,
    };
    struct env1476 envinst1476 = {
        .envinst1460 = envinst1460 ,
    };
    struct env1479 envinst1479 = {
        .envinst1460 = envinst1460 ,
        .envinst1458 = envinst1458 ,
        .envinst1443 = envinst1443 ,
    };
    struct env1483 envinst1483 = {
        .envinst1443 = envinst1443 ,
    };
    struct env1485 envinst1485 = {
        .envinst1443 = envinst1443 ,
    };
    struct env1487 envinst1487 = {
        .envinst1476 = envinst1476 ,
        .envinst1479 = envinst1479 ,
    };
    struct env1495 envinst1495 = {
        .envinst1427 = envinst1427 ,
        .envinst1479 = envinst1479 ,
        .envinst654 = envinst654 ,
        .envinst1476 = envinst1476 ,
    };
    struct env1502 envinst1502 = {
        .envinst1210 = envinst1210 ,
        .envinst1195 = envinst1195 ,
    };
    struct env1507 envinst1507 = {
        .envinst1414 = envinst1414 ,
    };
    struct env1514 envinst1514 = {
        .envinst1414 = envinst1414 ,
    };
    struct env1517 envinst1517 = {
        .envinst1479 = envinst1479 ,
        .envinst1272 = envinst1272 ,
    };
    struct env1522 envinst1522 = {
        .envinst1479 = envinst1479 ,
        .envinst1272 = envinst1272 ,
    };
    enum CAllocator_4  al3134 = ( (  idc1144 ) ( ) );
    struct env1527 envinst1527 = {
        .envinst323 = envinst323 ,
        .envinst1216 = envinst1216 ,
        .envinst589 = envinst589 ,
    };
    struct env1532 envinst1532 = {
        .al3134 =  al3134 ,
        .envinst654 = envinst654 ,
    };
    int32_t  pad3185 = (  from_dash_integral29 ( 2 ) );
    struct env1539 envinst1539 = {
        .pad3185 =  pad3185 ,
    };
    struct env1541 envinst1541 = {
        .envinst1539 = envinst1539 ,
    };
    struct env1543 envinst1543 = {
        .envinst1539 = envinst1539 ,
        .pad3185 =  pad3185 ,
    };
    struct env1564 envinst1564 = {
        .envinst1286 = envinst1286 ,
        .envinst1288 = envinst1288 ,
        .light_dash_theme2685 =  light_dash_theme2685 ,
        .dark_dash_theme2684 =  dark_dash_theme2684 ,
        .envinst1532 = envinst1532 ,
        .envinst1527 = envinst1527 ,
    };
    struct Slice_1115  args3295 = ( (  get1391 ) ( ) );
    struct List_302  temp1572;
    struct List_302  file3296 = (  temp1572 );
    struct Maybe_287  mfilename3297 = ( (struct Maybe_287) { .tag = Maybe_287_None_t } );
    if ( (  eq45 ( ( (  args3295 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3296 = ( (  mk1182 ) ( (  al3134 ) ) );
        struct funenv589  temp1573 = ( (struct funenv589){ .fun = add589, .env =  envinst589  } );
        ( temp1573.fun ( temp1573.env ,  ( & (  file3296 ) ) ,  ( (  mk1183 ) ( (  al3134 ) ) ) ) );
    } else {
        struct funenv1527  temp1574 = ( (struct funenv1527){ .fun = load_dash_file1527, .env =  envinst1527  } );
        file3296 = ( temp1574.fun ( temp1574.env ,  (  elem_dash_get1132 ( (  args3295 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3134 ) ) );
        struct funenv1284  temp1575 = ( (struct funenv1284){ .fun = mk_dash_const_dash_str1284, .env =  envinst1284  } );
        mfilename3297 = ( ( Maybe_287_Just ) ( ( temp1575.fun ( temp1575.env ,  (  elem_dash_get1132 ( (  args3295 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3134 ) ) ) ) );
    }
    struct Editor_844  temp1576 = ( (struct Editor_844) { .f_cursor = ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_845_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3296 ) , .f_filename = (  mfilename3297 ) , .f_mode = ( (struct Mode_846) { .tag = Mode_846_Normal_t } ) , .f_anim = ( ( Maybe_841_Just ) ( ( (  now1290 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) , .f_theme = (  dark_dash_theme2684 ) , .f_search_dash_term = ( (struct Maybe_839) { .tag = Maybe_839_None_t } ) , .f_al = (  al3134 ) , .f_msg = ( (struct Maybe_335) { .tag = Maybe_335_None_t } ) , .f_clipboard = ( (struct Maybe_335) { .tag = Maybe_335_None_t } ) , .f_actions = ( (struct Actions_848) { .f_list = ( (  mk1184 ) ( (  al3134 ) ) ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } ) , .f_insert_dash_start = ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) , .f_delete_dash_acc = ( (struct Maybe_839) { .tag = Maybe_839_None_t } ) } );
    struct Editor_844 *  ed3298 = ( &temp1576 );
    struct funenv1313  temp1578 = ( (struct funenv1313){ .fun = mk1313, .env =  envinst1313  } );
    struct Tui_678  temp1577 = ( temp1578.fun ( temp1578.env ) );
    struct Tui_678 *  tui3299 = ( &temp1577 );
    enum CAllocator_4  al3300 = ( (  idc1144 ) ( ) );
    struct Screen_677  temp1579 = ( (  mk_dash_screen1337 ) ( (  tui3299 ) ,  (  al3300 ) ) );
    struct Screen_677 *  screen3301 = ( &temp1579 );
    uint32_t  counter3302 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3303 = ( true );
    while ( ( ( * (  ed3298 ) ) .f_running ) ) {
        int32_t  events3304 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_568  temp1580 =  into_dash_iter567 ( ( (  from_dash_function574 ) ( (  read_dash_key1330 ) ) ) );
        while (true) {
            struct Maybe_569  __cond1581 =  next573 (&temp1580);
            if (  __cond1581 .tag == 0 ) {
                break;
            }
            struct InputEvent_570  ev3306 =  __cond1581 .stuff .Maybe_569_Just_s .field0;
            if ( (  eq41 ( (  events3304 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1413 ) ( (  ed3298 ) ) );
            }
            events3304 = (  op_dash_add87 ( (  events3304 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1336  temp1582 = ( (struct funenv1336){ .fun = update_dash_dimensions1336, .env =  envinst1336  } );
            ( temp1582.fun ( temp1582.env ,  (  tui3299 ) ) );
            struct InputEvent_570  dref3307 = (  ev3306 );
            if ( dref3307.tag == InputEvent_570_Key_t ) {
                struct Key_571  dref3309 = ( dref3307 .stuff .InputEvent_570_Key_s .field0 );
                if ( dref3309.tag == Key_571_Char_t ) {
                    struct Mode_846 *  dref3311 = ( & ( ( * (  ed3298 ) ) .f_mode ) );
                    if ( (* dref3311 ).tag == Mode_846_Insert_t ) {
                        struct funenv1192  temp1583 = ( (struct funenv1192){ .fun = insert1192, .env =  envinst1192  } );
                        ( temp1583.fun ( temp1583.env ,  ( (  cursor_dash_row1401 ) ( (  ed3298 ) ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3309 .stuff .Key_571_Char_s .field0 ) ) );
                        struct funenv1541  temp1584 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                        ( (  move_dash_to_dash_col1418 ) ( (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1584.fun ( temp1584.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                    }
                    else if ( (* dref3311 ).tag == Mode_846_Cmd_t ) {
                        struct funenv654  temp1585 = ( (struct funenv654){ .fun = write_dash_char654, .env =  envinst654  } );
                        ( temp1585.fun ( temp1585.env ,  ( & ( (* dref3311 ) .stuff .Mode_846_Cmd_s .field0 ) ) ,  ( dref3309 .stuff .Key_571_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3311 ).tag == Mode_846_SearchBox_t ) {
                        struct funenv654  temp1586 = ( (struct funenv654){ .fun = write_dash_char654, .env =  envinst654  } );
                        ( temp1586.fun ( temp1586.env ,  ( & ( (* dref3311 ) .stuff .Mode_846_SearchBox_s .field0 ) ) ,  ( dref3309 .stuff .Key_571_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1398 ( ( (* dref3311 ) ) , ( (struct Mode_846) { .tag = Mode_846_Normal_t } ) ) ) || (  eq1398 ( ( (* dref3311 ) ) , ( (struct Mode_846) { .tag = Mode_846_Select_t } ) ) ) ) ) {
                            int32_t  code3315 = ( (  u8_dash_i32298 ) ( ( (  cast205 ) ( ( dref3309 .stuff .Key_571_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3298 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                                struct funenv1483  temp1587 = ( (struct funenv1483){ .fun = undo1483, .env =  envinst1483  } );
                                struct funenv1541  temp1588 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1587.fun ( temp1587.env ,  (  ed3298 ) ,  ( temp1588.fun ( temp1588.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "U" ) ) ) ) ) ) {
                                struct funenv1485  temp1589 = ( (struct funenv1485){ .fun = redo1485, .env =  envinst1485  } );
                                struct funenv1541  temp1590 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1589.fun ( temp1589.env ,  (  ed3298 ) ,  ( temp1590.fun ( temp1590.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1541  temp1591 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1591.fun ( temp1591.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1541  temp1592 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1592.fun ( temp1592.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1541  temp1593 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_left1420 ) ( (  ed3298 ) ,  ( temp1593.fun ( temp1593.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1541  temp1594 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_right1421 ) ( (  ed3298 ) ,  ( temp1594.fun ( temp1594.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1398 ( ( (* dref3311 ) ) , ( (struct Mode_846) { .tag = Mode_846_Select_t } ) ) ) ) {
                                    struct funenv1476  temp1595 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                                    ( temp1595.fun ( temp1595.env ,  (  ed3298 ) ) );
                                } else {
                                    (*  ed3298 ) .f_mode = ( (struct Mode_846) { .tag = Mode_846_Select_t } );
                                    ( (  set_dash_selection1412 ) ( (  ed3298 ) ,  ( ( Maybe_171_Just ) ( ( ( * (  ed3298 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1495  temp1596 = ( (struct funenv1495){ .fun = delete_dash_selected1495, .env =  envinst1495  } );
                                struct funenv1541  temp1597 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1596.fun ( temp1596.env ,  (  ed3298 ) ,  ( temp1597.fun ( temp1597.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                struct funenv1476  temp1598 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                                ( temp1598.fun ( temp1598.env ,  (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1495  temp1599 = ( (struct funenv1495){ .fun = delete_dash_selected1495, .env =  envinst1495  } );
                                struct funenv1541  temp1600 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1599.fun ( temp1599.env ,  (  ed3298 ) ,  ( temp1600.fun ( temp1600.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1441  temp1601 = ( (struct funenv1441){ .fun = copy_dash_selection_dash_to_dash_clipboard1441, .env =  envinst1441  } );
                                ( temp1601.fun ( temp1601.env ,  (  ed3298 ) ) );
                                struct funenv1476  temp1602 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                                ( temp1602.fun ( temp1602.env ,  (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1487  temp1603 = ( (struct funenv1487){ .fun = paste_dash_clipboard_dash_at_dash_cursor1487, .env =  envinst1487  } );
                                struct funenv1541  temp1604 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1603.fun ( temp1603.env ,  (  ed3298 ) ,  ( PastePos_1488_PasteAfter ) ,  ( temp1604.fun ( temp1604.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1487  temp1605 = ( (struct funenv1487){ .fun = paste_dash_clipboard_dash_at_dash_cursor1487, .env =  envinst1487  } );
                                struct funenv1541  temp1606 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1605.fun ( temp1605.env ,  (  ed3298 ) ,  ( PastePos_1488_PasteBefore ) ,  ( temp1606.fun ( temp1606.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1517  temp1607 = ( (struct funenv1517){ .fun = indent_dash_selection1517, .env =  envinst1517  } );
                                struct funenv1541  temp1608 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1607.fun ( temp1607.env ,  (  ed3298 ) ,  ( temp1608.fun ( temp1608.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1522  temp1609 = ( (struct funenv1522){ .fun = dedent_dash_selection1522, .env =  envinst1522  } );
                                struct funenv1541  temp1610 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( temp1609.fun ( temp1609.env ,  (  ed3298 ) ,  ( temp1610.fun ( temp1610.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1541  temp1611 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1422 ) ( (  ed3298 ) ,  ( temp1611.fun ( temp1611.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1541  temp1612 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1423 ) ( (  ed3298 ) ,  ( temp1612.fun ( temp1612.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1502  temp1613 = ( (struct funenv1502){ .fun = insert_dash_empty_dash_row_dash_at1502, .env =  envinst1502  } );
                                ( temp1613.fun ( temp1613.env ,  (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3300 ) ) );
                                struct List_3 *  currow3316 = ( (  get_dash_row1400 ) ( (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1541  temp1614 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to1416 ) ( (  ed3298 ) ,  ( (  size_dash_i32292 ) ( ( (  size1223 ) ( (  currow3316 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1614.fun ( temp1614.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1502  temp1615 = ( (struct funenv1502){ .fun = insert_dash_empty_dash_row_dash_at1502, .env =  envinst1502  } );
                                ( temp1615.fun ( temp1615.env ,  (  ed3298 ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ,  (  al3300 ) ) );
                                struct funenv1541  temp1616 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1423 ) ( (  ed3298 ) ,  ( temp1616.fun ( temp1616.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3298 ) .f_mode = ( ( Mode_846_Cmd ) ( ( (  mk1265 ) ( (  al3300 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3298 ) .f_mode = ( ( Mode_846_SearchBox ) ( ( (  mk1265 ) ( (  al3300 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_839  dref3317 = ( ( * (  ed3298 ) ) .f_search_dash_term );
                                if ( dref3317.tag == Maybe_839_None_t ) {
                                }
                                else if ( dref3317.tag == Maybe_839_Just_t ) {
                                    struct funenv1507  temp1617 = ( (struct funenv1507){ .fun = find_dash_next_dash_occurence1507, .env =  envinst1507  } );
                                    struct Maybe_171  dref3319 = ( temp1617.fun ( temp1617.env ,  (  ed3298 ) ,  ( (  as_dash_char_dash_slice1266 ) ( ( & ( dref3317 .stuff .Maybe_839_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3319.tag == Maybe_171_None_t ) {
                                    }
                                    else if ( dref3319.tag == Maybe_171_Just_t ) {
                                        struct funenv1541  temp1618 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                        ( (  move_dash_to1416 ) ( (  ed3298 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3319 .stuff .Maybe_171_Just_s .field0 ) .f_x ) , ( (  size_dash_i32292 ) ( ( (  count1264 ) ( ( & ( dref3317 .stuff .Maybe_839_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3319 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ,  ( temp1618.fun ( temp1618.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                        (*  ed3298 ) .f_selected = ( ( Maybe_171_Just ) ( ( dref3319 .stuff .Maybe_171_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_839  dref3321 = ( ( * (  ed3298 ) ) .f_search_dash_term );
                                if ( dref3321.tag == Maybe_839_None_t ) {
                                }
                                else if ( dref3321.tag == Maybe_839_Just_t ) {
                                    struct funenv1514  temp1619 = ( (struct funenv1514){ .fun = find_dash_prev_dash_occurence1514, .env =  envinst1514  } );
                                    struct Maybe_171  dref3323 = ( temp1619.fun ( temp1619.env ,  (  ed3298 ) ,  ( (  as_dash_char_dash_slice1266 ) ( ( & ( dref3321 .stuff .Maybe_839_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3323.tag == Maybe_171_None_t ) {
                                    }
                                    else if ( dref3323.tag == Maybe_171_Just_t ) {
                                        struct funenv1541  temp1620 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                        ( (  move_dash_to1416 ) ( (  ed3298 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3323 .stuff .Maybe_171_Just_s .field0 ) .f_x ) , ( (  size_dash_i32292 ) ( ( (  count1264 ) ( ( & ( dref3321 .stuff .Maybe_839_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3323 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ,  ( temp1620.fun ( temp1620.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                        (*  ed3298 ) .f_selected = ( ( Maybe_171_Just ) ( ( dref3323 .stuff .Maybe_171_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe882 ) ( ( ( * (  ed3298 ) ) .f_selected ) ,  (  lam1621 ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1425 ) ( (  ed3298 ) ) ) ) ) {
                                    struct funenv1541  temp1622 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                    struct Dims_1417  dims3327 = ( temp1622.fun ( temp1622.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                                    struct Cursor_170  sel3328 = ( (  or_dash_else1107 ) ( ( ( * (  ed3298 ) ) .f_selected ) ,  ( ( * (  ed3298 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3327 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1423 ) ( (  ed3298 ) ,  (  dims3327 ) ) );
                                    (*  ed3298 ) .f_selected = ( ( Maybe_171_Just ) ( (  sel3328 ) ) );
                                } else {
                                    struct funenv1541  temp1623 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1423 ) ( (  ed3298 ) ,  ( temp1623.fun ( temp1623.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                    (*  ed3298 ) .f_selected = ( ( Maybe_171_Just ) ( ( (struct Cursor_170) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe883 ) ( ( ( * (  ed3298 ) ) .f_selected ) ,  (  lam1624 ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1541  temp1625 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                struct Dims_1417  dims3331 = ( temp1625.fun ( temp1625.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                                struct Cursor_170  first_dash_pos3332 = ( ( * (  ed3298 ) ) .f_cursor );
                                ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3331 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) ) , ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at1406 ) ( (  ed3298 ) ,  (  first_dash_pos3332 ) ) ) ,  (  char_dash_type1393 ) ) ) ) ) ) {
                                    first_dash_pos3332 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1425 ) ( (  ed3298 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3331 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3332 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3333 = ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) );
                                struct env885 envinst885 = {
                                    .cur_dash_char_dash_type3333 =  cur_dash_char_dash_type3333 ,
                                };
                                while ( ( (  maybe884 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  ( (struct funenv885){ .fun = lam885, .env = envinst885 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3331 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe887 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  lam1626 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3331 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1396 ( (  first_dash_pos3332 ) , ( ( * (  ed3298 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3331 ) ) );
                                    ( (  set_dash_selection1412 ) ( (  ed3298 ) ,  ( ( Maybe_171_Just ) ( (  first_dash_pos3332 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1541  temp1627 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                struct Dims_1417  dims3338 = ( temp1627.fun ( temp1627.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                                struct Cursor_170  first_dash_pos3339 = ( ( * (  ed3298 ) ) .f_cursor );
                                ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3338 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) ) , ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at1406 ) ( (  ed3298 ) ,  (  first_dash_pos3339 ) ) ) ,  (  char_dash_type1393 ) ) ) ) ) ) {
                                    first_dash_pos3339 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1425 ) ( (  ed3298 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3338 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3339 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                while ( ( (  maybe888 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  lam1628 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3338 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3342 = ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) );
                                struct env890 envinst890 = {
                                    .cur_dash_char_dash_type3342 =  cur_dash_char_dash_type3342 ,
                                };
                                while ( ( (  maybe889 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  ( (struct funenv890){ .fun = lam890, .env = envinst890 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3338 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1396 ( (  first_dash_pos3339 ) , ( ( * (  ed3298 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3338 ) ) );
                                    ( (  set_dash_selection1412 ) ( (  ed3298 ) ,  ( ( Maybe_171_Just ) ( (  first_dash_pos3339 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3309 .stuff .Key_571_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1541  temp1629 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                struct Dims_1417  dims3345 = ( temp1629.fun ( temp1629.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                                struct Cursor_170  first_dash_pos3346 = ( ( * (  ed3298 ) ) .f_cursor );
                                ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3345 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) ) , ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at1406 ) ( (  ed3298 ) ,  (  first_dash_pos3346 ) ) ) ,  (  char_dash_type1393 ) ) ) ) ) ) {
                                    first_dash_pos3346 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1425 ) ( (  ed3298 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3345 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3346 = ( ( * (  ed3298 ) ) .f_cursor );
                                }
                                while ( ( (  maybe892 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  lam1630 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3345 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3349 = ( (  fmap_dash_maybe851 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  (  char_dash_type1393 ) ) );
                                struct env894 envinst894 = {
                                    .cur_dash_char_dash_type3349 =  cur_dash_char_dash_type3349 ,
                                };
                                while ( ( (  maybe893 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  ( (struct funenv894){ .fun = lam894, .env = envinst894 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3345 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1396 ( (  first_dash_pos3346 ) , ( ( * (  ed3298 ) ) .f_cursor ) ) ) ) {
                                    struct env897 envinst897 = {
                                        .cur_dash_char_dash_type3349 =  cur_dash_char_dash_type3349 ,
                                    };
                                    if ( ( (  maybe896 ) ( ( (  char_dash_at_dash_cursor1407 ) ( (  ed3298 ) ) ) ,  ( (struct funenv897){ .fun = lam897, .env = envinst897 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1421 ) ( (  ed3298 ) ,  (  dims3345 ) ) );
                                    }
                                    ( (  set_dash_selection1412 ) ( (  ed3298 ) ,  ( ( Maybe_171_Just ) ( (  first_dash_pos3346 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1094 ) ( ( ( StrConcat_924_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3311 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3309.tag == Key_571_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3309 .stuff .Key_571_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3298 ) .f_screen_dash_top = ( (  max907 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3298 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1541  temp1631 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                        ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1631.fun ( temp1631.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3309 .stuff .Key_571_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3298 ) .f_screen_dash_top = ( (  max907 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3298 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1541  temp1632 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                        ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1632.fun ( temp1632.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                    }
                }
                else if ( dref3309.tag == Key_571_Escape_t ) {
                    struct Mode_846  dref3355 = ( ( * (  ed3298 ) ) .f_mode );
                    if ( dref3355.tag == Mode_846_Normal_t ) {
                    }
                    else if ( dref3355.tag == Mode_846_Insert_t ) {
                        struct funenv1476  temp1633 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1633.fun ( temp1633.env ,  (  ed3298 ) ) );
                    }
                    else if ( dref3355.tag == Mode_846_Cmd_t ) {
                        ( (  free1267 ) ( ( & ( dref3355 .stuff .Mode_846_Cmd_s .field0 ) ) ) );
                        struct funenv1476  temp1634 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1634.fun ( temp1634.env ,  (  ed3298 ) ) );
                    }
                    else if ( dref3355.tag == Mode_846_SearchBox_t ) {
                        ( (  free1267 ) ( ( & ( dref3355 .stuff .Mode_846_SearchBox_s .field0 ) ) ) );
                        struct funenv1476  temp1635 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1635.fun ( temp1635.env ,  (  ed3298 ) ) );
                    }
                    else if ( dref3355.tag == Mode_846_Select_t ) {
                        struct funenv1476  temp1636 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1636.fun ( temp1636.env ,  (  ed3298 ) ) );
                    }
                }
                else if ( dref3309.tag == Key_571_Backspace_t ) {
                    struct Mode_846 *  dref3358 = ( & ( ( * (  ed3298 ) ) .f_mode ) );
                    if ( (* dref3358 ).tag == Mode_846_Normal_t ) {
                    }
                    else if ( (* dref3358 ).tag == Mode_846_Select_t ) {
                    }
                    else if ( (* dref3358 ).tag == Mode_846_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1541  temp1637 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                            struct Dims_1417  dims3359 = ( temp1637.fun ( temp1637.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                            if ( (  eq41 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                                struct Cursor_170  before_dash_merge_dash_cursor3360 = ( ( * (  ed3298 ) ) .f_cursor );
                                struct funenv1476  temp1638 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                                ( temp1638.fun ( temp1638.env ,  (  ed3298 ) ) );
                                ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3359 ) ) );
                                struct StrBuilder_595  temp1639 = ( (  mk1265 ) ( ( ( * (  ed3298 ) ) .f_al ) ) );
                                struct StrBuilder_595 *  sb3361 = ( &temp1639 );
                                struct funenv654  temp1640 = ( (struct funenv654){ .fun = write_dash_char654, .env =  envinst654  } );
                                ( temp1640.fun ( temp1640.env ,  (  sb3361 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
                                struct funenv1479  temp1641 = ( (struct funenv1479){ .fun = do_dash_action1479, .env =  envinst1479  } );
                                ( temp1641.fun ( temp1641.env ,  (  ed3298 ) ,  ( ( Primitive_169_PrimDelete ) ( ( ( * (  ed3298 ) ) .f_cursor ) ,  ( (  as_dash_str930 ) ( (  sb3361 ) ) ) ) ) ,  (  dims3359 ) ,  (  before_dash_merge_dash_cursor3360 ) ,  ( (struct Maybe_171) { .tag = Maybe_171_None_t } ) ) );
                                ( (  enter_dash_insert_dash_mode1478 ) ( (  ed3298 ) ) );
                            } else {
                                ( (  move_dash_left1420 ) ( (  ed3298 ) ,  (  dims3359 ) ) );
                                struct funenv1427  temp1642 = ( (struct funenv1427){ .fun = copy_dash_selection1427, .env =  envinst1427  } );
                                struct Maybe_335  dref3362 = ( temp1642.fun ( temp1642.env ,  (  ed3298 ) ) );
                                if ( dref3362.tag == Maybe_335_None_t ) {
                                }
                                else if ( dref3362.tag == Maybe_335_Just_t ) {
                                    int32_t  del_dash_acc_dash_count3366 = ( {  struct Maybe_839  dref3364 = ( ( * (  ed3298 ) ) .f_delete_dash_acc ) ; dref3364.tag == Maybe_839_Just_t ? ( (  size_dash_i32292 ) ( ( (  count1264 ) ( ( & ( dref3364 .stuff .Maybe_839_Just_s .field0 ) ) ) ) ) ) : (  from_dash_integral29 ( 0 ) ) ; } );
                                    struct Maybe_171  dref3367 = ( ( * (  ed3298 ) ) .f_insert_dash_start );
                                    if ( dref3367.tag == Maybe_171_None_t ) {
                                    }
                                    else if ( dref3367.tag == Maybe_171_Just_t ) {
                                        if ( ( (  cmp80 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) , (  op_dash_sub88 ( ( ( dref3367 .stuff .Maybe_171_Just_s .field0 ) .f_x ) , (  del_dash_acc_dash_count3366 ) ) ) ) == 0 ) && (  eq41 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , ( ( dref3367 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ) ) ) ) {
                                            if ( ( ! ( (  is_dash_just838 ) ( ( ( * (  ed3298 ) ) .f_delete_dash_acc ) ) ) ) ) {
                                                (*  ed3298 ) .f_delete_dash_acc = ( ( Maybe_839_Just ) ( ( (  mk1265 ) ( ( ( * (  ed3298 ) ) .f_al ) ) ) ) );
                                            }
                                            struct Maybe_839 *  dref3369 = ( & ( ( * (  ed3298 ) ) .f_delete_dash_acc ) );
                                            if ( (* dref3369 ).tag == Maybe_839_Just_t ) {
                                                struct funenv654  temp1643 = ( (struct funenv654){ .fun = write_dash_char654, .env =  envinst654  } );
                                                ( temp1643.fun ( temp1643.env ,  ( & ( (* dref3369 ) .stuff .Maybe_839_Just_s .field0 ) ) ,  (  elem_dash_get1134 ( ( ( dref3362 .stuff .Maybe_335_Just_s .field0 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) ) );
                                            }
                                            else if ( true ) {
                                            }
                                        }
                                    }
                                    struct funenv1443  temp1644 = ( (struct funenv1443){ .fun = apply_dash_primitive1443, .env =  envinst1443  } );
                                    ( temp1644.fun ( temp1644.env ,  (  ed3298 ) ,  ( ( Primitive_169_PrimDelete ) ( ( ( * (  ed3298 ) ) .f_cursor ) ,  ( dref3362 .stuff .Maybe_335_Just_s .field0 ) ) ) ,  (  dims3359 ) ) );
                                    ( (  free1150 ) ( ( ( * (  ed3298 ) ) .f_al ) ,  ( ( dref3362 .stuff .Maybe_335_Just_s .field0 ) .f_contents ) ) );
                                }
                            }
                        }
                    }
                    else if ( (* dref3358 ).tag == Mode_846_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1264 ) ( ( & ( (* dref3358 ) .stuff .Mode_846_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1262  temp1645 = ( (struct funenv1262){ .fun = pop1262, .env =  envinst1262  } );
                            ( temp1645.fun ( temp1645.env ,  ( & ( (* dref3358 ) .stuff .Mode_846_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3358 ).tag == Mode_846_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1264 ) ( ( & ( (* dref3358 ) .stuff .Mode_846_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1262  temp1646 = ( (struct funenv1262){ .fun = pop1262, .env =  envinst1262  } );
                            ( temp1646.fun ( temp1646.env ,  ( & ( (* dref3358 ) .stuff .Mode_846_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3309.tag == Key_571_Enter_t ) {
                    struct Mode_846  dref3373 = ( ( * (  ed3298 ) ) .f_mode );
                    if ( dref3373.tag == Mode_846_Normal_t ) {
                    }
                    else if ( dref3373.tag == Mode_846_Select_t ) {
                    }
                    else if ( dref3373.tag == Mode_846_Insert_t ) {
                        int32_t  cx3374 = ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1647 = ( (  mk1183 ) ( (  al3300 ) ) );
                        struct List_3 *  nurow3375 = ( &temp1647 );
                        struct TakeWhile_529  rowws3376 = ( (  indent_dash_on_dash_row1402 ) ( (  ed3298 ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3377 = ( (  size_dash_i32292 ) ( ( (  count796 ) ( (  rowws3376 ) ) ) ) );
                        struct funenv1210  temp1648 = ( (struct funenv1210){ .fun = add_dash_all1210, .env =  envinst1210  } );
                        ( temp1648.fun ( temp1648.env ,  (  nurow3375 ) ,  (  rowws3376 ) ) );
                        struct List_3 *  cur_dash_row3378 = ( (  cursor_dash_row1401 ) ( (  ed3298 ) ) );
                        struct funenv1206  temp1649 = ( (struct funenv1206){ .fun = add_dash_all1206, .env =  envinst1206  } );
                        ( temp1649.fun ( temp1649.env ,  (  nurow3375 ) ,  ( (  subslice314 ) ( ( (  to_dash_slice1219 ) ( ( * (  cur_dash_row3378 ) ) ) ) ,  ( (  i32_dash_size290 ) ( (  cx3374 ) ) ) ,  ( ( * (  cur_dash_row3378 ) ) .f_count ) ) ) ) );
                        ( (  trim1212 ) ( (  cur_dash_row3378 ) ,  ( (  i32_dash_size290 ) ( (  cx3374 ) ) ) ) );
                        struct funenv1195  temp1650 = ( (struct funenv1195){ .fun = insert1195, .env =  envinst1195  } );
                        ( temp1650.fun ( temp1650.env ,  ( & ( ( * (  ed3298 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size290 ) ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3375 ) ) ) );
                        struct funenv1541  temp1651 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                        ( (  move_dash_to1416 ) ( (  ed3298 ) ,  (  offchars3377 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1651.fun ( temp1651.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                    }
                    else if ( dref3373.tag == Mode_846_Cmd_t ) {
                        struct DynStr_134  s3380 = ( (  as_dash_str930 ) ( ( & ( dref3373 .stuff .Mode_846_Cmd_s .field0 ) ) ) );
                        struct funenv1564  temp1652 = ( (struct funenv1564){ .fun = run_dash_cmd1564, .env =  envinst1564  } );
                        struct funenv1541  temp1653 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                        ( temp1652.fun ( temp1652.env ,  (  ed3298 ) ,  (  s3380 ) ,  ( temp1653.fun ( temp1653.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ,  (  al3300 ) ) );
                        ( (  free1267 ) ( ( & ( dref3373 .stuff .Mode_846_Cmd_s .field0 ) ) ) );
                        struct funenv1476  temp1654 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1654.fun ( temp1654.env ,  (  ed3298 ) ) );
                    }
                    else if ( dref3373.tag == Mode_846_SearchBox_t ) {
                        struct Maybe_839  dref3382 = ( ( * (  ed3298 ) ) .f_search_dash_term );
                        if ( dref3382.tag == Maybe_839_Just_t ) {
                            ( (  free1267 ) ( ( & ( dref3382 .stuff .Maybe_839_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3382.tag == Maybe_839_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1264 ) ( ( & ( dref3373 .stuff .Mode_846_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3298 ) .f_search_dash_term = ( ( Maybe_839_Just ) ( ( dref3373 .stuff .Mode_846_SearchBox_s .field0 ) ) );
                            struct funenv1507  temp1655 = ( (struct funenv1507){ .fun = find_dash_next_dash_occurence1507, .env =  envinst1507  } );
                            struct Maybe_171  dref3384 = ( temp1655.fun ( temp1655.env ,  (  ed3298 ) ,  ( (  as_dash_char_dash_slice1266 ) ( ( & ( dref3373 .stuff .Mode_846_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3384.tag == Maybe_171_None_t ) {
                            }
                            else if ( dref3384.tag == Maybe_171_Just_t ) {
                                struct funenv1541  temp1656 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                                ( (  move_dash_to1416 ) ( (  ed3298 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3384 .stuff .Maybe_171_Just_s .field0 ) .f_x ) , ( (  size_dash_i32292 ) ( ( (  count1264 ) ( ( & ( dref3373 .stuff .Mode_846_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3384 .stuff .Maybe_171_Just_s .field0 ) .f_y ) ,  ( temp1656.fun ( temp1656.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                                (*  ed3298 ) .f_selected = ( ( Maybe_171_Just ) ( ( dref3384 .stuff .Maybe_171_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3298 ) .f_search_dash_term = ( (struct Maybe_839) { .tag = Maybe_839_None_t } );
                        }
                        struct funenv1476  temp1657 = ( (struct funenv1476){ .fun = set_dash_mode_dash_normal1476, .env =  envinst1476  } );
                        ( temp1657.fun ( temp1657.env ,  (  ed3298 ) ) );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3307.tag == InputEvent_570_Mouse_t ) {
                enum MouseButton_149  dref3387 = ( ( dref3307 .stuff .InputEvent_570_Mouse_s .field0 ) .f_button );
                switch (  dref3387 ) {
                    case MouseButton_149_MouseLeft : {
                        if ( ( ( dref3307 .stuff .InputEvent_570_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3388 = ( (  size_dash_i32292 ) ( ( ( ( * (  ed3298 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3389 = ( (  clamp912 ) ( (  op_dash_add87 ( ( ( * (  ed3298 ) ) .f_screen_dash_top ) , ( ( dref3307 .stuff .InputEvent_570_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3388 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1539  temp1658 = ( (struct funenv1539){ .fun = left_dash_offset1539, .env =  envinst1539  } );
                            struct Visual_845  vx3390 = ( ( Visual_845_Visual ) ( (  op_dash_sub88 ( ( ( dref3307 .stuff .InputEvent_570_Mouse_s .field0 ) .f_x ) , ( ( temp1658.fun ( temp1658.env ,  (  ed3298 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3391 = ( (  visual_dash_x_dash_to_dash_x1409 ) ( (  ed3298 ) ,  (  vx3390 ) ,  (  cy3389 ) ) );
                            (*  ed3298 ) .f_cursor .f_x = (  cx3391 );
                            (*  ed3298 ) .f_goal_dash_x = (  vx3390 );
                            struct funenv1541  temp1659 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                            ( (  move_dash_to_dash_row1419 ) ( (  ed3298 ) ,  (  cy3389 ) ,  ( temp1659.fun ( temp1659.env ,  (  ed3298 ) ,  (  tui3299 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable1089 ) ( ) );
            }
        }
        struct funenv1351  temp1660 = ( (struct funenv1351){ .fun = resize_dash_screen_dash_if_dash_needed1351, .env =  envinst1351  } );
        bool  resized3392 = ( temp1660.fun ( temp1660.env ,  (  screen3301 ) ) );
        if ( ( ( ( (  resized3392 ) || (  cmp80 ( (  events3304 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3303 ) ) || ( (  is_dash_just840 ) ( ( ( * (  ed3298 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3303 = ( false );
            ( (  clear_dash_screen1341 ) ( (  screen3301 ) ) );
            ( (  set_dash_screen_dash_fg1353 ) ( (  screen3301 ) ,  ( ( * ( ( * (  ed3298 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1354 ) ( (  screen3301 ) ,  ( ( * ( ( * (  ed3298 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1357 ) ( (  screen3301 ) ) );
            struct funenv1543  temp1661 = ( (struct funenv1543){ .fun = render_dash_editor1543, .env =  envinst1543  } );
            ( temp1661.fun ( temp1661.env ,  (  screen3301 ) ,  (  ed3298 ) ) );
            bool  debug3393 = ( true );
            if ( (  debug3393 ) ) {
                ( (  draw_dash_str_dash_right1376 ) ( (  screen3301 ) ,  ( ( StrConcat_924_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3298 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1377 ) ( (  screen3301 ) ,  ( ( StrConcat_939_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3299 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env843 envinst843 = {
                    .ed3298 =  ed3298 ,
                };
                struct Maybe_371  charcode3398 = ( (  fmap_dash_maybe852 ) ( ( (  and_dash_maybe842 ) ( ( (  try_dash_get1179 ) ( ( & ( ( * (  ed3298 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size290 ) ( ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv843){ .fun = lam843, .env = envinst843 } ) ) ) ,  (  lam1662 ) ) );
                ( (  draw_dash_str_dash_right1378 ) ( (  screen3301 ) ,  ( ( StrConcat_941_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3398 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1379 ) ( (  screen3301 ) ,  ( ( StrConcat_967_StrConcat ) ( ( ( StrConcat_968_StrConcat ) ( ( ( StrConcat_969_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3399 = ( ( * ( (  get_dash_row1400 ) ( (  ed3298 ) ,  ( ( ( * (  ed3298 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1380 ) ( (  screen3301 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3399 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3400 = ( (  from_dash_visual1397 ) ( ( ( * (  ed3298 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1381 ) ( (  screen3301 ) ,  ( ( StrConcat_969_StrConcat ) ( ( "goal x: " ) ,  (  gx3400 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1541  temp1663 = ( (struct funenv1541){ .fun = screen_dash_dims1541, .env =  envinst1541  } );
                struct Dims_1417  dim3401 = ( temp1663.fun ( temp1663.env ,  (  ed3298 ) ,  (  tui3299 ) ) );
                ( (  draw_dash_str_dash_right1382 ) ( (  screen3301 ) ,  ( ( StrConcat_976_StrConcat ) ( ( ( StrConcat_977_StrConcat ) ( ( ( StrConcat_969_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3298 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3401 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1383 ) ( (  screen3301 ) ,  ( ( StrConcat_981_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3298 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1384 ) ( (  screen3301 ) ,  ( ( StrConcat_995_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3298 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_854  cpsize3404 = ( (  fmap_dash_maybe853 ) ( ( ( * (  ed3298 ) ) .f_clipboard ) ,  (  lam1664 ) ) );
                ( (  draw_dash_str_dash_right1385 ) ( (  screen3301 ) ,  ( ( StrConcat_999_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3404 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
                ( (  draw_dash_str_dash_right1386 ) ( (  screen3301 ) ,  ( ( StrConcat_1010_StrConcat ) ( ( ( StrConcat_1002_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "actions: " ) ,  ( ( ( * (  ed3298 ) ) .f_actions ) .f_cur ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ,  ( ( ( ( * (  ed3298 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 10 ) ) ) );
            }
            ( (  update_dash_animation1559 ) ( ( & ( ( * (  ed3298 ) ) .f_anim ) ) ,  (  screen3301 ) ) );
            ( (  render_dash_screen1345 ) ( (  screen3301 ) ) );
        }
        ( (  sync1319 ) ( (  tui3299 ) ) );
    }
    ( (  free_dash_screen1340 ) ( (  screen3301 ) ) );
    ( (  deinit1323 ) ( (  tui3299 ) ) );
}
