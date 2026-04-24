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

static  enum Unit_13   print_dash_str22 (    const char*  self1080 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1080 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str27 (    size_t  self1132 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1132 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str26 (    struct StrConcat_17  self1171 ) {
    struct StrConcat_17  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str25 (    struct StrConcat_16  self1171 ) {
    struct StrConcat_16  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str24 (    struct StrConcat_15  self1171 ) {
    struct StrConcat_15  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str28 (    char  self1086 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1086 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str23 (    struct StrConcat_14  self1171 ) {
    struct StrConcat_14  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str21 (    struct StrConcat_20  self1171 ) {
    struct StrConcat_20  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str23 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str18 (    struct StrConcat_19  self1171 ) {
    struct StrConcat_19  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str21 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  int32_t   from_dash_integral29 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  enum Unit_13   panic12 (    struct StrConcat_14  errmsg1348 ) {
    ( (  print_dash_str18 ) ( ( ( StrConcat_19_StrConcat ) ( ( ( StrConcat_20_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  int64_t   op_dash_mul32 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  char *   offset_dash_ptr31 (    char *  x458 ,    int64_t  count460 ) {
    char  temp33;
    return ( (char * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp33 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i6434 (    size_t  x504 ) {
    return ( (int64_t ) (  x504 ) );
}

static  char *   get_dash_ptr30 (    struct Slice_5  slice1394 ,    size_t  i1396 ) {
    if ( ( (  cmp9 ( (  i1396 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1396 ) , ( (  slice1394 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1396 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1394 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1397 = ( (  offset_dash_ptr31 ) ( ( (  slice1394 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1396 ) ) ) ) );
    return (  elem_dash_ptr1397 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1806 ,    size_t  i1808 ) {
    if ( ( (  cmp9 ( (  i1808 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1808 ) , ( ( * (  list1806 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1808 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1806 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1806 ) ) .f_elements ) ,  (  i1808 ) ) );
}

static  char   get7 (    struct List_3 *  list1816 ,    size_t  i1818 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1816 ) ,  (  i1818 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1877 ,    size_t  k1879 ) {
    return ( (  get7 ) ( ( & (  self1877 ) ) ,  (  k1879 ) ) );
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

static  bool   eq55 (    enum CharType_53  l2692 ,    enum CharType_53  r2694 ) {
    struct Tuple2_56  dref2695 = ( ( Tuple2_56_Tuple2 ) ( (  l2692 ) ,  (  r2694 ) ) );
    if (  dref2695 .field0 == CharType_53_CharSpace &&  dref2695 .field1 == CharType_53_CharSpace ) {
        return ( true );
    }
    else if (  dref2695 .field0 == CharType_53_CharWord &&  dref2695 .field1 == CharType_53_CharWord ) {
        return ( true );
    }
    else if (  dref2695 .field0 == CharType_53_CharPunctuation &&  dref2695 .field1 == CharType_53_CharPunctuation ) {
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

static  void *   cast_dash_ptr71 (    int32_t *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  size_t   size_dash_of72 (    int32_t  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  int32_t   zeroed69 (  ) {
    int32_t  temp70;
    int32_t  x481 = (  temp70 );
    ( ( memset ) ( ( (  cast_dash_ptr71 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of72 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  enum Color8_60 *   cast73 (    int32_t *  x471 ) {
    return ( (enum Color8_60 * ) (  x471 ) );
}

static  int32_t   cast_dash_on_dash_zeroed67 (    enum Color8_60  x484 ) {
    int32_t  temp68 = ( (  zeroed69 ) ( ) );
    int32_t *  y485 = ( &temp68 );
    enum Color8_60 *  yp486 = ( (  cast73 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  bool   eq66 (    enum Color8_60  l2002 ,    enum Color8_60  r2004 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed67 ) ( (  l2002 ) ) ) ) , ( (  cast_dash_on_dash_zeroed67 ) ( (  r2004 ) ) ) ) );
}

static  enum Color16_61 *   cast77 (    int32_t *  x471 ) {
    return ( (enum Color16_61 * ) (  x471 ) );
}

static  int32_t   cast_dash_on_dash_zeroed75 (    enum Color16_61  x484 ) {
    int32_t  temp76 = ( (  zeroed69 ) ( ) );
    int32_t *  y485 = ( &temp76 );
    enum Color16_61 *  yp486 = ( (  cast77 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  bool   eq74 (    enum Color16_61  l2008 ,    enum Color16_61  r2010 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed75 ) ( (  l2008 ) ) ) ) , ( (  cast_dash_on_dash_zeroed75 ) ( (  r2010 ) ) ) ) );
}

static  bool   eq78 (    struct RGB_62  l2038 ,    struct RGB_62  r2040 ) {
    return ( ( (  eq43 ( ( (  l2038 ) .f_r ) , ( (  r2040 ) .f_r ) ) ) && (  eq43 ( ( (  l2038 ) .f_g ) , ( (  r2040 ) .f_g ) ) ) ) && (  eq43 ( ( (  l2038 ) .f_b ) , ( (  r2040 ) .f_b ) ) ) );
}

static  bool   eq64 (    struct Color_59  l2061 ,    struct Color_59  r2063 ) {
    return ( {  struct Tuple2_65  dref2064 = ( ( Tuple2_65_Tuple2 ) ( (  l2061 ) ,  (  r2063 ) ) ) ; dref2064 .field0.tag == Color_59_ColorDefault_t && dref2064 .field1.tag == Color_59_ColorDefault_t ? ( true ) : dref2064 .field0.tag == Color_59_Color8_t && dref2064 .field1.tag == Color_59_Color8_t ? (  eq66 ( ( dref2064 .field0 .stuff .Color_59_Color8_s .field0 ) , ( dref2064 .field1 .stuff .Color_59_Color8_s .field0 ) ) ) : dref2064 .field0.tag == Color_59_Color16_t && dref2064 .field1.tag == Color_59_Color16_t ? (  eq74 ( ( dref2064 .field0 .stuff .Color_59_Color16_s .field0 ) , ( dref2064 .field1 .stuff .Color_59_Color16_s .field0 ) ) ) : dref2064 .field0.tag == Color_59_Color256_t && dref2064 .field1.tag == Color_59_Color256_t ? (  eq43 ( ( dref2064 .field0 .stuff .Color_59_Color256_s .field0 ) , ( dref2064 .field1 .stuff .Color_59_Color256_s .field0 ) ) ) : dref2064 .field0.tag == Color_59_ColorRGB_t && dref2064 .field1.tag == Color_59_ColorRGB_t ? (  eq78 ( ( dref2064 .field0 .stuff .Color_59_ColorRGB_s .field0 ) , ( dref2064 .field1 .stuff .Color_59_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq63 (    struct Cell_58  l2548 ,    struct Cell_58  r2550 ) {
    if ( ( !  eq47 ( ( (  l2548 ) .f_c ) , ( (  r2550 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2548 ) .f_fg ) , ( (  r2550 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq64 ( ( (  l2548 ) .f_bg ) , ( (  r2550 ) .f_bg ) ) ) ) {
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
            struct DynStr_134  field1;
        } Primitive_153_PrimInsert_s;
        struct {
            struct Cursor_154  field0;
            struct DynStr_134  field1;
        } Primitive_153_PrimDelete_s;
    } stuff;
};

static struct Primitive_153 Primitive_153_PrimInsert (  struct Cursor_154  field0 ,  struct DynStr_134  field1 ) {
    return ( struct Primitive_153 ) { .tag = Primitive_153_PrimInsert_t, .stuff = { .Primitive_153_PrimInsert_s = { .field0 = field0 ,  .field1 = field1 } } };
};

static struct Primitive_153 Primitive_153_PrimDelete (  struct Cursor_154  field0 ,  struct DynStr_134  field1 ) {
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

static  const char* *   offset_dash_ptr169 (    const char* *  x458 ,    int64_t  count460 ) {
    const char*  temp170;
    return ( (const char* * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp170 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr171 (    struct List_3 *  x458 ,    int64_t  count460 ) {
    struct List_3  temp172;
    return ( (struct List_3 * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp172 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr173 (    uint8_t *  x458 ,    int64_t  count460 ) {
    uint8_t  temp174;
    return ( (uint8_t * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp174 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr175 (    uint32_t *  x458 ,    int64_t  count460 ) {
    uint32_t  temp176;
    return ( (uint32_t * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp176 ) ) ) ) ) ) ) ) );
}

static  struct Cell_58 *   offset_dash_ptr177 (    struct Cell_58 *  x458 ,    int64_t  count460 ) {
    struct Cell_58  temp178;
    return ( (struct Cell_58 * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp178 ) ) ) ) ) ) ) ) );
}

static  struct Action_152 *   offset_dash_ptr179 (    struct Action_152 *  x458 ,    int64_t  count460 ) {
    struct Action_152  temp180;
    return ( (struct Action_152 * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp180 ) ) ) ) ) ) ) ) );
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

static  struct Either_182 *   offset_dash_ptr181 (    struct Either_182 *  x458 ,    int64_t  count460 ) {
    struct Either_182  temp183;
    return ( (struct Either_182 * ) ( ( (void*) (  x458 ) ) + (  op_dash_mul32 ( (  count460 ) , ( (int64_t ) ( sizeof( ( (  temp183 ) ) ) ) ) ) ) ) );
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

static  size_t   size_dash_of199 (    struct List_3 *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of200 (    char *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of201 (    FILE *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of202 (    char  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of203 (    struct Either_182 *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

struct Winsize_205 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of204 (    struct Winsize_205  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of206 (    uint32_t  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of207 (    enum Unit_13 *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of208 (    size_t  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of209 (    int64_t  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

struct Array_211 {
    char _arr [32];
};

static  size_t   size_dash_of210 (    struct Array_211  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of212 (    struct Action_152 *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  size_t   size_dash_of213 (    struct timespec *  x465 ) {
    return ( sizeof( (  x465 ) ) );
}

static  char *   cast214 (    const char*  x471 ) {
    return ( (char * ) (  x471 ) );
}

static  const char*   cast215 (    char *  x471 ) {
    return ( (const char* ) (  x471 ) );
}

static  uint16_t *   cast216 (    uint32_t *  x471 ) {
    return ( (uint16_t * ) (  x471 ) );
}

static  enum Unit_13 *   cast217 (    const char*  x471 ) {
    return ( (enum Unit_13 * ) (  x471 ) );
}

static  uint32_t *   cast218 (    size_t *  x471 ) {
    return ( (uint32_t * ) (  x471 ) );
}

static  uint8_t *   cast219 (    int64_t *  x471 ) {
    return ( (uint8_t * ) (  x471 ) );
}

static  char *   cast220 (    int32_t *  x471 ) {
    return ( (char * ) (  x471 ) );
}

static  uint8_t   cast221 (    char  x471 ) {
    return ( (uint8_t ) (  x471 ) );
}

static  char *   cast222 (    struct Array_211 *  x471 ) {
    return ( (char * ) (  x471 ) );
}

static  int32_t   cast223 (    uint32_t  x471 ) {
    return ( (int32_t ) (  x471 ) );
}

static  char   cast224 (    int32_t  x471 ) {
    return ( (char ) (  x471 ) );
}

static  uint8_t *   cast225 (    int32_t *  x471 ) {
    return ( (uint8_t * ) (  x471 ) );
}

static  char   cast226 (    uint32_t  x471 ) {
    return ( (char ) (  x471 ) );
}

static  char   cast227 (    size_t  x471 ) {
    return ( (char ) (  x471 ) );
}

static  uint32_t *   cast228 (    int64_t *  x471 ) {
    return ( (uint32_t * ) (  x471 ) );
}

static  void *   cast_dash_ptr229 (    struct List_3 * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr230 (    struct List_3 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  struct List_3 *   cast_dash_ptr231 (    void *  p474 ) {
    return ( (struct List_3 * ) (  p474 ) );
}

static  void *   cast_dash_ptr232 (    char * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr233 (    char *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  char *   cast_dash_ptr234 (    void *  p474 ) {
    return ( (char * ) (  p474 ) );
}

static  void *   cast_dash_ptr235 (    FILE * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr236 (    struct Either_182 * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr237 (    struct Winsize_205 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr238 (    uint32_t *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  uint8_t *   cast_dash_ptr239 (    struct Array_142 *  p474 ) {
    return ( (uint8_t * ) (  p474 ) );
}

static  struct termios *   cast_dash_ptr240 (    struct Termios_141 *  p474 ) {
    return ( (struct termios * ) (  p474 ) );
}

static  uint32_t *   cast_dash_ptr241 (    struct Array_107 *  p474 ) {
    return ( (uint32_t * ) (  p474 ) );
}

static  uint32_t *   cast_dash_ptr242 (    struct Array_104 *  p474 ) {
    return ( (uint32_t * ) (  p474 ) );
}

static  uint32_t *   cast_dash_ptr243 (    struct Array_110 *  p474 ) {
    return ( (uint32_t * ) (  p474 ) );
}

static  void *   cast_dash_ptr244 (    enum Unit_13 * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr245 (    size_t *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  struct Cell_58 *   cast_dash_ptr246 (    void *  p474 ) {
    return ( (struct Cell_58 * ) (  p474 ) );
}

static  char *   cast_dash_ptr247 (    struct Array_211 *  p474 ) {
    return ( (char * ) (  p474 ) );
}

static  void *   cast_dash_ptr248 (    int64_t *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr249 (    struct Array_211 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

struct Pollfd_251 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr250 (    struct Pollfd_251 *  p474 ) {
    return ( (struct pollfd * ) (  p474 ) );
}

static  void *   cast_dash_ptr252 (    struct Action_152 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  struct Action_152 *   cast_dash_ptr253 (    void *  p474 ) {
    return ( (struct Action_152 * ) (  p474 ) );
}

static  struct Either_182 *   cast_dash_ptr254 (    void *  p474 ) {
    return ( (struct Either_182 * ) (  p474 ) );
}

static  void *   cast_dash_ptr255 (    struct Either_182 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr256 (    struct Action_152 * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr257 (    enum Unit_13 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr258 (    struct timespec * *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  void *   cast_dash_ptr259 (    struct Cell_58 *  p474 ) {
    return ( (void * ) (  p474 ) );
}

static  struct List_3 *   zeroed260 (  ) {
    struct List_3 *  temp261;
    struct List_3 *  x481 = (  temp261 );
    ( ( memset ) ( ( (  cast_dash_ptr229 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of199 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  char *   zeroed262 (  ) {
    char *  temp263;
    char *  x481 = (  temp263 );
    ( ( memset ) ( ( (  cast_dash_ptr232 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of200 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  FILE *   zeroed264 (  ) {
    FILE *  temp265;
    FILE *  x481 = (  temp265 );
    ( ( memset ) ( ( (  cast_dash_ptr235 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of201 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  char   zeroed266 (  ) {
    char  temp267;
    char  x481 = (  temp267 );
    ( ( memset ) ( ( (  cast_dash_ptr233 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of202 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  struct Either_182 *   zeroed268 (  ) {
    struct Either_182 *  temp269;
    struct Either_182 *  x481 = (  temp269 );
    ( ( memset ) ( ( (  cast_dash_ptr236 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of203 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  struct Winsize_205   zeroed270 (  ) {
    struct Winsize_205  temp271;
    struct Winsize_205  x481 = (  temp271 );
    ( ( memset ) ( ( (  cast_dash_ptr237 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of204 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  uint32_t   zeroed272 (  ) {
    uint32_t  temp273;
    uint32_t  x481 = (  temp273 );
    ( ( memset ) ( ( (  cast_dash_ptr238 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of206 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  enum Unit_13 *   zeroed274 (  ) {
    enum Unit_13 *  temp275;
    enum Unit_13 *  x481 = (  temp275 );
    ( ( memset ) ( ( (  cast_dash_ptr244 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of207 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  size_t   zeroed276 (  ) {
    size_t  temp277;
    size_t  x481 = (  temp277 );
    ( ( memset ) ( ( (  cast_dash_ptr245 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of208 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  int64_t   zeroed278 (  ) {
    int64_t  temp279;
    int64_t  x481 = (  temp279 );
    ( ( memset ) ( ( (  cast_dash_ptr248 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of209 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  struct Array_211   zeroed280 (  ) {
    struct Array_211  temp281;
    struct Array_211  x481 = (  temp281 );
    ( ( memset ) ( ( (  cast_dash_ptr249 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of210 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  struct Action_152 *   zeroed282 (  ) {
    struct Action_152 *  temp283;
    struct Action_152 *  x481 = (  temp283 );
    ( ( memset ) ( ( (  cast_dash_ptr256 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of212 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  struct timespec *   zeroed284 (  ) {
    struct timespec *  temp285;
    struct timespec *  x481 = (  temp285 );
    ( ( memset ) ( ( (  cast_dash_ptr258 ) ( ( & (  x481 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of213 ) ( (  x481 ) ) ) ) );
    return (  x481 );
}

static  uint32_t   cast_dash_on_dash_zeroed286 (    uint16_t  x484 ) {
    uint32_t  temp287 = ( (  zeroed272 ) ( ) );
    uint32_t *  y485 = ( &temp287 );
    uint16_t *  yp486 = ( (  cast216 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  size_t   cast_dash_on_dash_zeroed288 (    uint32_t  x484 ) {
    size_t  temp289 = ( (  zeroed276 ) ( ) );
    size_t *  y485 = ( &temp289 );
    uint32_t *  yp486 = ( (  cast218 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  int64_t   cast_dash_on_dash_zeroed290 (    uint8_t  x484 ) {
    int64_t  temp291 = ( (  zeroed278 ) ( ) );
    int64_t *  y485 = ( &temp291 );
    uint8_t *  yp486 = ( (  cast219 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  int32_t   cast_dash_on_dash_zeroed292 (    char  x484 ) {
    int32_t  temp293 = ( (  zeroed69 ) ( ) );
    int32_t *  y485 = ( &temp293 );
    char *  yp486 = ( (  cast220 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  int32_t   cast_dash_on_dash_zeroed294 (    uint8_t  x484 ) {
    int32_t  temp295 = ( (  zeroed69 ) ( ) );
    int32_t *  y485 = ( &temp295 );
    uint8_t *  yp486 = ( (  cast225 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  int64_t   cast_dash_on_dash_zeroed296 (    uint32_t  x484 ) {
    int64_t  temp297 = ( (  zeroed278 ) ( ) );
    int64_t *  y485 = ( &temp297 );
    uint32_t *  yp486 = ( (  cast228 ) ( (  y485 ) ) );
    (*  yp486 ) = (  x484 );
    return ( * (  y485 ) );
}

static  struct List_3 *   null_dash_ptr298 (  ) {
    return ( (  zeroed260 ) ( ) );
}

static  char *   null_dash_ptr299 (  ) {
    return ( (  zeroed262 ) ( ) );
}

static  FILE *   null_dash_ptr300 (  ) {
    return ( (  zeroed264 ) ( ) );
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

static  bool   is_dash_ptr_dash_null305 (    FILE *  p490 ) {
    return ( (  p490 ) == ( (  null_dash_ptr300 ) ( ) ) );
}

static  bool   ptr_dash_eq306 (    enum Unit_13 *  l496 ,    enum Unit_13 *  r498 ) {
    return ( (  l496 ) == (  r498 ) );
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

static  struct Maybe_308   from_dash_nullable_dash_c_dash_str307 (    const char*  s501 ) {
    if ( ( (  ptr_dash_eq306 ) ( ( (  cast217 ) ( (  s501 ) ) ) ,  ( ( (  null_dash_ptr302 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    } else {
        return ( ( Maybe_308_Just ) ( (  s501 ) ) );
    }
}

static  uint32_t   i32_dash_u32309 (    int32_t  x510 ) {
    return ( (uint32_t ) (  x510 ) );
}

static  int64_t   i32_dash_i64310 (    int32_t  x513 ) {
    return ( (int64_t ) (  x513 ) );
}

static  size_t   i32_dash_size311 (    int32_t  x516 ) {
    return ( (size_t ) ( (int64_t ) (  x516 ) ) );
}

static  int32_t   i64_dash_i32312 (    int64_t  x522 ) {
    return ( (int32_t ) (  x522 ) );
}

static  int32_t   size_dash_i32313 (    size_t  x531 ) {
    return ( (int32_t ) (  x531 ) );
}

static  uint32_t   u16_dash_u32314 (    uint16_t  x537 ) {
    return ( (  cast_dash_on_dash_zeroed286 ) ( (  x537 ) ) );
}

static  size_t   u32_dash_size315 (    uint32_t  x543 ) {
    return ( (  cast_dash_on_dash_zeroed288 ) ( (  x543 ) ) );
}

static  int64_t   u32_dash_i64316 (    uint32_t  x546 ) {
    return ( (  cast_dash_on_dash_zeroed296 ) ( (  x546 ) ) );
}

static  int32_t   u32_dash_i32317 (    uint32_t  x552 ) {
    return ( (  cast223 ) ( (  x552 ) ) );
}

static  int64_t   u8_dash_i64318 (    uint8_t  x558 ) {
    return ( (  cast_dash_on_dash_zeroed290 ) ( (  x558 ) ) );
}

static  int32_t   u8_dash_i32319 (    uint8_t  x561 ) {
    return ( (  cast_dash_on_dash_zeroed294 ) ( (  x561 ) ) );
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

static  struct SliceIter_321   into_dash_iter325 (    struct Slice_322  self1459 ) {
    return ( (struct SliceIter_321) { .f_slice = (  self1459 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min327 (    size_t  l977 ,    size_t  r979 ) {
    if ( (  cmp9 ( (  l977 ) , (  r979 ) ) == 0 ) ) {
        return (  l977 );
    } else {
        return (  r979 );
    }
}

static  struct Slice_322   subslice326 (    struct Slice_322  slice1419 ,    size_t  from1421 ,    size_t  to1423 ) {
    struct List_3 *  begin_dash_ptr1424 = ( (  offset_dash_ptr171 ) ( ( (  slice1419 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1421 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1421 ) , (  to1423 ) ) != 0 ) || (  cmp9 ( (  from1421 ) , ( (  slice1419 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1425 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1423 ) ,  ( (  slice1419 ) .f_count ) ) ) , (  from1421 ) ) );
    return ( (struct Slice_322) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  count1425 ) } );
}

static  struct SliceIter_321   into_dash_iter324 (    struct List_323  self1833 ) {
    return ( (  into_dash_iter325 ) ( ( (  subslice326 ) ( ( (  self1833 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1833 ) .f_count ) ) ) ) );
}

static  struct SliceIter_321   into_dash_iter320 (    struct List_323 *  self567 ) {
    return ( (  into_dash_iter324 ) ( ( * (  self567 ) ) ) );
}

struct SliceIter_330 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_329 {
    struct SliceIter_330  f_s;
};

static  struct Scanner_329   into_dash_iter331 (    struct Scanner_329  self2440 ) {
    return (  self2440 );
}

static  struct Scanner_329   into_dash_iter328 (    struct Scanner_329 *  self567 ) {
    return ( (  into_dash_iter331 ) ( ( * (  self567 ) ) ) );
}

static  struct SliceIter_330   into_dash_iter334 (    struct Slice_5  self1459 ) {
    return ( (struct SliceIter_330) { .f_slice = (  self1459 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice335 (    struct Slice_5  slice1419 ,    size_t  from1421 ,    size_t  to1423 ) {
    char *  begin_dash_ptr1424 = ( (  offset_dash_ptr31 ) ( ( (  slice1419 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1421 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1421 ) , (  to1423 ) ) != 0 ) || (  cmp9 ( (  from1421 ) , ( (  slice1419 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1425 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1423 ) ,  ( (  slice1419 ) .f_count ) ) ) , (  from1421 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  count1425 ) } );
}

static  struct SliceIter_330   into_dash_iter333 (    struct List_3  self1833 ) {
    return ( (  into_dash_iter334 ) ( ( (  subslice335 ) ( ( (  self1833 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1833 ) .f_count ) ) ) ) );
}

static  struct SliceIter_330   into_dash_iter332 (    struct List_3 *  self567 ) {
    return ( (  into_dash_iter333 ) ( ( * (  self567 ) ) ) );
}

enum EmptyIter_337 {
    EmptyIter_337_EmptyIter,
};

static  enum EmptyIter_337   nil336 (  ) {
    return ( EmptyIter_337_EmptyIter );
}

static  enum EmptyIter_337   into_dash_iter338 (    enum EmptyIter_337  self572 ) {
    return (  self572 );
}

static  struct Maybe_49   next339 (    enum EmptyIter_337 *  dref574 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_342 {
    struct DynStr_134  f_og;
    size_t  f_last;
};

struct env347 {
    size_t  growth_dash_factor1842;
    ;
    ;
    ;
    size_t  starting_dash_size1841;
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
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

struct funenv345 {
    enum Unit_13  (*fun) (  struct env345  ,    struct List_3 *  ,    struct DynStr_134  );
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
    struct List_3  (*fun) (  struct env344  ,    struct DynStr_134  ,    enum CAllocator_4  );
    struct env344 env;
};

struct env343 {
    struct env344 envinst344;
    enum CAllocator_4  al3201;
};

struct funenv343 {
    struct List_3  (*fun) (  struct env343  ,    struct DynStr_134  );
    struct env343 env;
};

struct Map_341 {
    struct LineIter_342  field0;
    struct funenv343  field1;
};

static struct Map_341 Map_341_Map (  struct LineIter_342  field0 , struct funenv343  field1 ) {
    return ( struct Map_341 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_341   into_dash_iter340 (    struct Map_341  self578 ) {
    return (  self578 );
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

static  struct Map_349   into_dash_iter348 (    struct Map_349  self578 ) {
    return (  self578 );
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

static  struct Map_352   into_dash_iter351 (    struct Map_352  self578 ) {
    return (  self578 );
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
            struct DynStr_134  field0;
        } Maybe_356_Just_s;
    } stuff;
};

static struct Maybe_356 Maybe_356_Just (  struct DynStr_134  field0 ) {
    return ( struct Maybe_356 ) { .tag = Maybe_356_Just_t, .stuff = { .Maybe_356_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail359 (    struct Maybe_49  x1361 ,    struct StrConcat_14  errmsg1363 ) {
    struct Maybe_49  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1363 ) ) );
        return ( (  undefined136 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_49_Just_t ) {
        return ( dref1364 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get360 (    struct Slice_5  slice1400 ,    size_t  i1402 ) {
    if ( ( (  cmp9 ( (  i1402 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1402 ) , ( (  slice1400 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1403 = ( (  offset_dash_ptr31 ) ( ( (  slice1400 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1402 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1403 ) ) ) );
}

static  char   get358 (    struct Slice_5  slice1406 ,    size_t  i1408 ) {
    return ( (  or_dash_fail359 ) ( ( (  try_dash_get360 ) ( (  slice1406 ) ,  (  i1408 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1408 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1406 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar361 (  ) {
    return ( (  zeroed266 ) ( ) );
}

static  char   newline362 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_134   substr363 (    struct DynStr_134  s1612 ,    size_t  from1614 ,    size_t  to1616 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice335 ) ( ( (  s1612 ) .f_contents ) ,  (  from1614 ) ,  (  to1616 ) ) ) } );
}

static  struct Maybe_356   next357 (    struct LineIter_342 *  self1761 ) {
    if ( ( (  cmp9 ( ( ( * (  self1761 ) ) .f_last ) , ( ( ( ( * (  self1761 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get358 ) ( ( ( ( * (  self1761 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1761 ) ) .f_last ) ) ) , ( (  nullchar361 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    size_t  i1762 = ( ( * (  self1761 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1762 ) , ( ( ( ( * (  self1761 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq47 ( ( (  get358 ) ( ( ( ( * (  self1761 ) ) .f_og ) .f_contents ) ,  (  i1762 ) ) ) , ( (  newline362 ) ( ) ) ) ) ) ) {
        i1762 = (  op_dash_add98 ( (  i1762 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_134  line1763 = ( (  substr363 ) ( ( ( * (  self1761 ) ) .f_og ) ,  ( ( * (  self1761 ) ) .f_last ) ,  (  i1762 ) ) );
    if ( (  cmp9 ( (  i1762 ) , ( ( ( ( * (  self1761 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1762 = (  op_dash_add98 ( (  i1762 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1761 ) .f_last = (  i1762 );
    return ( ( Maybe_356_Just ) ( (  line1763 ) ) );
}

static  struct Maybe_355   next354 (    struct Map_341 *  dref580 ) {
    struct Maybe_356  dref583 = ( (  next357 ) ( ( & ( (* dref580 ) .field0 ) ) ) );
    if ( dref583.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    else if ( dref583.tag == Maybe_356_Just_t ) {
        struct funenv343  temp364 = ( (* dref580 ) .field1 );
        return ( ( Maybe_355_Just ) ( ( temp364.fun ( temp364.env ,  ( dref583 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_49   next367 (    struct ConstStrIter_350 *  self1075 ) {
    if ( (  cmp9 ( ( ( * (  self1075 ) ) .f_i ) , ( (  i32_dash_size311 ) ( ( ( strlen ) ( ( ( * (  self1075 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr1076 = ( ( (  cast214 ) ( ( ( * (  self1075 ) ) .f_ogstr ) ) ) );
    char  c1077 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1076 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1075 ) ) .f_i ) ) ) ) ) );
    (*  self1075 ) .f_i = (  op_dash_add98 ( ( ( * (  self1075 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c1077 ) ) );
}

static  struct Maybe_366   next365 (    struct Map_349 *  dref580 ) {
    struct Maybe_49  dref583 = ( (  next367 ) ( ( & ( (* dref580 ) .field0 ) ) ) );
    if ( dref583.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    else if ( dref583.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_366_Just ) ( ( ( (* dref580 ) .field1 ) ( ( dref583 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_49   next371 (    struct SliceIter_330 *  self1465 ) {
    size_t  off1466 = ( ( * (  self1465 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1465 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1467 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1465 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1466 ) ) ) ) ) );
    (*  self1465 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1467 ) ) );
}

static  struct Maybe_49   next370 (    struct Take_353 *  dref643 ) {
    if ( (  cmp9 ( ( (* dref643 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x646 = ( (  next371 ) ( ( & ( (* dref643 ) .field0 ) ) ) );
        (* dref643 ) .field1 = (  op_dash_sub99 ( ( (* dref643 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x646 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_369   next368 (    struct Map_352 *  dref580 ) {
    struct Maybe_49  dref583 = ( (  next370 ) ( ( & ( (* dref580 ) .field0 ) ) ) );
    if ( dref583.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
    else if ( dref583.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_369_Just ) ( ( ( (* dref580 ) .field1 ) ( ( dref583 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_342   into_dash_iter373 (    struct LineIter_342  self1758 ) {
    return (  self1758 );
}

static  struct Map_341   map372 (    struct LineIter_342  iterable587 ,   struct funenv343  fun589 ) {
    struct LineIter_342  it590 = ( (  into_dash_iter373 ) ( (  iterable587 ) ) );
    return ( ( Map_341_Map ) ( (  it590 ) ,  (  fun589 ) ) );
}

static  struct ConstStrIter_350   into_dash_iter375 (    const char*  self1069 ) {
    return ( (struct ConstStrIter_350) { .f_ogstr = (  self1069 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_349   map374 (    const char*  iterable587 ,    uint32_t (*  fun589 )(    char  ) ) {
    struct ConstStrIter_350  it590 = ( (  into_dash_iter375 ) ( (  iterable587 ) ) );
    return ( ( Map_349_Map ) ( (  it590 ) ,  (  fun589 ) ) );
}

static  struct Take_353   into_dash_iter377 (    struct Take_353  self641 ) {
    return (  self641 );
}

static  struct Map_352   map376 (    struct Take_353  iterable587 ,    int32_t (*  fun589 )(    char  ) ) {
    struct Take_353  it590 = ( (  into_dash_iter377 ) ( (  iterable587 ) ) );
    return ( ( Map_352_Map ) ( (  it590 ) ,  (  fun589 ) ) );
}

struct FromIter_381 {
    int32_t  f_from;
};

struct Zip_380 {
    struct SliceIter_321  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

struct Drop_379 {
    struct Zip_380  field0;
    size_t  field1;
};

static struct Drop_379 Drop_379_Drop (  struct Zip_380  field0 ,  size_t  field1 ) {
    return ( struct Drop_379 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_379   into_dash_iter378 (    struct Drop_379  self627 ) {
    return (  self627 );
}

struct Zip_384 {
    struct SliceIter_330  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

struct Drop_383 {
    struct Zip_384  field0;
    size_t  field1;
};

static struct Drop_383 Drop_383_Drop (  struct Zip_384  field0 ,  size_t  field1 ) {
    return ( struct Drop_383 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_383   into_dash_iter382 (    struct Drop_383  self627 ) {
    return (  self627 );
}

struct Tuple2_387 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_387 Tuple2_387_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_355   next389 (    struct SliceIter_321 *  self1465 ) {
    size_t  off1466 = ( ( * (  self1465 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1465 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    struct List_3  elem1467 = ( * ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1465 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1466 ) ) ) ) ) );
    (*  self1465 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_355_Just ) ( (  elem1467 ) ) );
}

static  struct Maybe_369   next390 (    struct FromIter_381 *  dref687 ) {
    int32_t  v689 = ( ( (* dref687 ) ) .f_from );
    (* dref687 ) .f_from = (  op_dash_add87 ( ( ( (* dref687 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_369_Just ) ( (  v689 ) ) );
}

static  struct Maybe_386   next388 (    struct Zip_380 *  self696 ) {
    struct Zip_380  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_355  dref698 = ( (  next389 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_355_None_t ) {
            return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
        }
        else if ( dref698.tag == Maybe_355_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_386) { .tag = Maybe_386_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next389 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_386_Just ) ( ( ( Tuple2_387_Tuple2 ) ( ( dref698 .stuff .Maybe_355_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_386   next385 (    struct Drop_379 *  dref629 ) {
    while ( (  cmp9 ( ( (* dref629 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next388 ) ( ( & ( (* dref629 ) .field0 ) ) ) );
        (* dref629 ) .field1 = (  op_dash_sub99 ( ( (* dref629 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next388 ) ( ( & ( (* dref629 ) .field0 ) ) ) );
}

struct Tuple2_393 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_393 Tuple2_393_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_393 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_392 {
    enum {
        Maybe_392_None_t,
        Maybe_392_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_393  field0;
        } Maybe_392_Just_s;
    } stuff;
};

static struct Maybe_392 Maybe_392_Just (  struct Tuple2_393  field0 ) {
    return ( struct Maybe_392 ) { .tag = Maybe_392_Just_t, .stuff = { .Maybe_392_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_392   next394 (    struct Zip_384 *  self696 ) {
    struct Zip_384  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next371 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_392   next391 (    struct Drop_383 *  dref629 ) {
    while ( (  cmp9 ( ( (* dref629 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next394 ) ( ( & ( (* dref629 ) .field0 ) ) ) );
        (* dref629 ) .field1 = (  op_dash_sub99 ( ( (* dref629 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next394 ) ( ( & ( (* dref629 ) .field0 ) ) ) );
}

static  struct Zip_380   into_dash_iter396 (    struct Zip_380  self693 ) {
    return (  self693 );
}

static  struct Drop_379   drop395 (    struct Zip_380  iterable634 ,    size_t  i636 ) {
    struct Zip_380  it637 = ( (  into_dash_iter396 ) ( (  iterable634 ) ) );
    return ( ( Drop_379_Drop ) ( (  it637 ) ,  (  i636 ) ) );
}

static  struct Zip_384   into_dash_iter398 (    struct Zip_384  self693 ) {
    return (  self693 );
}

static  struct Drop_383   drop397 (    struct Zip_384  iterable634 ,    size_t  i636 ) {
    struct Zip_384  it637 = ( (  into_dash_iter398 ) ( (  iterable634 ) ) );
    return ( ( Drop_383_Drop ) ( (  it637 ) ,  (  i636 ) ) );
}

static  struct Take_353   take399 (    struct List_3 *  it649 ,    size_t  i651 ) {
    return ( ( Take_353_Take ) ( ( (  into_dash_iter332 ) ( (  it649 ) ) ) ,  (  i651 ) ) );
}

struct Range_401 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_401 Range_401_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_401 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_401   to400 (    int32_t  from656 ,    int32_t  to658 ) {
    return ( ( Range_401_Range ) ( (  from656 ) ,  (  to658 ) ) );
}

struct RangeIter_403 {
    struct Range_401  field0;
    int32_t  field1;
};

static struct RangeIter_403 RangeIter_403_RangeIter (  struct Range_401  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_403 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_403   into_dash_iter402 (    struct Range_401  dref665 ) {
    return ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref665 .field0 ) ,  ( dref665 .field1 ) ) ) ,  ( dref665 .field0 ) ) );
}

static  struct Maybe_369   next404 (    struct RangeIter_403 *  self673 ) {
    struct RangeIter_403  dref674 = ( * (  self673 ) );
    if ( true ) {
        if ( (  cmp80 ( ( dref674 .field1 ) , ( dref674 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
        }
        struct Maybe_369  x678 = ( ( Maybe_369_Just ) ( ( dref674 .field1 ) ) );
        (*  self673 ) = ( ( RangeIter_403_RangeIter ) ( ( ( Range_401_Range ) ( ( dref674 .field0 .field0 ) ,  ( dref674 .field0 .field1 ) ) ) ,  (  op_dash_add87 ( ( dref674 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x678 );
    }
}

static  struct FromIter_381   from405 (    int32_t  f682 ) {
    return ( (struct FromIter_381) { .f_from = (  f682 ) } );
}

static  struct FromIter_381   into_dash_iter406 (    struct FromIter_381  it685 ) {
    return (  it685 );
}

struct SliceIter_409 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_408 {
    struct SliceIter_409  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_408   into_dash_iter407 (    struct Zip_408  self693 ) {
    return (  self693 );
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

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self693 ) {
    return (  self693 );
}

struct Zip_415 {
    struct SliceIter_330  f_left_dash_it;
    struct SliceIter_330  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self693 ) {
    return (  self693 );
}

struct IntStrIter_418 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_417 {
    struct IntStrIter_418  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self693 ) {
    return (  self693 );
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

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self693 ) {
    return (  self693 );
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

static  struct Zip_427   into_dash_iter426 (    struct Zip_427  self693 ) {
    return (  self693 );
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

static  struct Zip_431   into_dash_iter430 (    struct Zip_431  self693 ) {
    return (  self693 );
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

static  struct Zip_441   into_dash_iter440 (    struct Zip_441  self693 ) {
    return (  self693 );
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

static  struct Zip_446   into_dash_iter445 (    struct Zip_446  self693 ) {
    return (  self693 );
}

struct Zip_450 {
    struct StrConcatIter_444  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_450   into_dash_iter449 (    struct Zip_450  self693 ) {
    return (  self693 );
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

static  struct Zip_452   into_dash_iter451 (    struct Zip_452  self693 ) {
    return (  self693 );
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

static  struct Zip_456   into_dash_iter455 (    struct Zip_456  self693 ) {
    return (  self693 );
}

struct StrConcatIter_462 {
    struct StrConcatIter_459  f_left;
    struct IntStrIter_448  f_right;
};

struct Zip_461 {
    struct StrConcatIter_462  f_left_dash_it;
    struct FromIter_381  f_right_dash_it;
};

static  struct Zip_461   into_dash_iter460 (    struct Zip_461  self693 ) {
    return (  self693 );
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

static  struct Maybe_466   next467 (    struct SliceIter_409 *  self1465 ) {
    size_t  off1466 = ( ( * (  self1465 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1465 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    struct Action_152  elem1467 = ( * ( (  offset_dash_ptr179 ) ( ( ( ( * (  self1465 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1466 ) ) ) ) ) );
    (*  self1465 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_466_Just ) ( (  elem1467 ) ) );
}

static  struct Maybe_464   next463 (    struct Zip_408 *  self696 ) {
    struct Zip_408  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_466  dref698 = ( (  next467 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_466_None_t ) {
            return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
        }
        else if ( dref698.tag == Maybe_466_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_464) { .tag = Maybe_464_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next467 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_464_Just ) ( ( ( Tuple2_465_Tuple2 ) ( ( dref698 .stuff .Maybe_466_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_471   next472 (    struct SliceIter_412 *  self1465 ) {
    size_t  off1466 = ( ( * (  self1465 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1465 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_471) { .tag = Maybe_471_None_t } );
    }
    struct Either_182  elem1467 = ( * ( (  offset_dash_ptr181 ) ( ( ( ( * (  self1465 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1466 ) ) ) ) ) );
    (*  self1465 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1466 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_471_Just ) ( (  elem1467 ) ) );
}

static  struct Maybe_469   next468 (    struct Zip_411 *  self696 ) {
    struct Zip_411  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_471  dref698 = ( (  next472 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_471_None_t ) {
            return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
        }
        else if ( dref698.tag == Maybe_471_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_469) { .tag = Maybe_469_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_469_Just ) ( ( ( Tuple2_470_Tuple2 ) ( ( dref698 .stuff .Maybe_471_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_474   next473 (    struct Zip_415 *  self696 ) {
    struct Zip_415  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next371 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_49  dref700 = ( (  next371 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_49_None_t ) {
                return ( (struct Maybe_474) { .tag = Maybe_474_None_t } );
            }
            else if ( dref700.tag == Maybe_49_Just_t ) {
                ( (  next371 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next371 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_474_Just ) ( ( ( Tuple2_475_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env480 {
    ;
    int32_t  base951;
};

struct funenv480 {
    int32_t  (*fun) (  struct env480  ,    int32_t  ,    int32_t  );
    struct env480 env;
};

static  int32_t   reduce479 (    struct Range_401  iterable840 ,    int32_t  base842 ,   struct funenv480  fun844 ) {
    int32_t  x845 = (  base842 );
    struct RangeIter_403  it846 = ( (  into_dash_iter402 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref847 = ( (  next404 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_369_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_369_Just_t ) {
            struct funenv480  temp481 = (  fun844 );
            x845 = ( temp481.fun ( temp481.env ,  ( dref847 .stuff .Maybe_369_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    int32_t  temp482;
    return (  temp482 );
}

static  int32_t   lam480 (   struct env480 env ,    int32_t  item955 ,    int32_t  x957 ) {
    return (  op_dash_mul89 ( (  x957 ) , ( env.base951 ) ) );
}

static  int32_t   pow478 (    int32_t  base951 ,    int32_t  p953 ) {
    struct env480 envinst480 = {
        .base951 =  base951 ,
    };
    return ( (  reduce479 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p953 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv480){ .fun = lam480, .env = envinst480 } ) ) );
}

static  struct Maybe_49   next477 (    struct IntStrIter_418 *  self1096 ) {
    if ( (  cmp80 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1097 = ( (  pow478 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1098 = (  op_dash_div90 ( ( ( * (  self1096 ) ) .f_int ) , (  trim_dash_down1097 ) ) );
    int32_t  upper_dash_mask1099 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1098 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1100 = (  op_dash_sub88 ( (  upper1098 ) , (  upper_dash_mask1099 ) ) );
    (*  self1096 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1101 = ( (  cast224 ) ( (  op_dash_add87 ( (  digit1100 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1101 ) ) );
}

static  struct Maybe_392   next476 (    struct Zip_417 *  self696 ) {
    struct Zip_417  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next477 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next477 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next487 (    struct StrConcatIter_424 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next371 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next488 (    struct AppendIter_425 *  self804 ) {
    struct Maybe_49  dref805 = ( (  next339 ) ( ( & ( ( * (  self804 ) ) .f_it ) ) ) );
    if ( dref805.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref805 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref805.tag == Maybe_49_None_t ) {
        if ( ( ! ( ( * (  self804 ) ) .f_appended ) ) ) {
            (*  self804 ) .f_appended = ( true );
            return ( ( Maybe_49_Just ) ( ( ( * (  self804 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_49   next486 (    struct StrConcatIter_423 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next487 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next485 (    struct StrCaseIter_422 *  self1184 ) {
    struct StrCaseIter_422 *  dref1185 = (  self1184 );
    if ( (* dref1185 ).tag == StrCaseIter_422_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_422_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1185 ).tag == StrCaseIter_422_StrCaseIter2_t ) {
        return ( (  next486 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_422_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next484 (    struct StrConcatIter_421 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next485 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next483 (    struct Zip_420 *  self696 ) {
    struct Zip_420  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next484 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next484 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env494 {
    ;
    uint32_t  base951;
};

struct funenv494 {
    uint32_t  (*fun) (  struct env494  ,    int32_t  ,    uint32_t  );
    struct env494 env;
};

static  uint32_t   reduce493 (    struct Range_401  iterable840 ,    uint32_t  base842 ,   struct funenv494  fun844 ) {
    uint32_t  x845 = (  base842 );
    struct RangeIter_403  it846 = ( (  into_dash_iter402 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref847 = ( (  next404 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_369_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_369_Just_t ) {
            struct funenv494  temp495 = (  fun844 );
            x845 = ( temp495.fun ( temp495.env ,  ( dref847 .stuff .Maybe_369_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    uint32_t  temp496;
    return (  temp496 );
}

static  uint32_t   lam494 (   struct env494 env ,    int32_t  item955 ,    uint32_t  x957 ) {
    return (  op_dash_mul94 ( (  x957 ) , ( env.base951 ) ) );
}

static  uint32_t   pow492 (    uint32_t  base951 ,    int32_t  p953 ) {
    struct env494 envinst494 = {
        .base951 =  base951 ,
    };
    return ( (  reduce493 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p953 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv494){ .fun = lam494, .env = envinst494 } ) ) );
}

static  struct Maybe_49   next491 (    struct IntStrIter_429 *  self1096 ) {
    if ( (  cmp80 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1097 = ( (  pow492 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1098 = (  op_dash_div95 ( ( ( * (  self1096 ) ) .f_int ) , (  trim_dash_down1097 ) ) );
    uint32_t  upper_dash_mask1099 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1098 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1100 = (  op_dash_sub93 ( (  upper1098 ) , (  upper_dash_mask1099 ) ) );
    (*  self1096 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1101 = ( (  cast226 ) ( (  op_dash_add92 ( (  digit1100 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1101 ) ) );
}

static  struct Maybe_49   next490 (    struct StrConcatIter_428 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next491 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next489 (    struct Zip_427 *  self696 ) {
    struct Zip_427  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next490 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next490 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next505 (    struct StrConcatIter_439 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next504 (    struct StrConcatIter_438 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next505 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next503 (    struct StrConcatIter_437 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next504 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next502 (    struct StrConcatIter_436 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next503 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next501 (    struct StrConcatIter_435 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next502 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next500 (    struct StrConcatIter_434 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next501 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next499 (    struct StrCaseIter_433 *  self1184 ) {
    struct StrCaseIter_433 *  dref1185 = (  self1184 );
    if ( (* dref1185 ).tag == StrCaseIter_433_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_433_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1185 ).tag == StrCaseIter_433_StrCaseIter2_t ) {
        return ( (  next500 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_433_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next498 (    struct StrConcatIter_432 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next499 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next497 (    struct Zip_431 *  self696 ) {
    struct Zip_431  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next498 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next498 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next509 (    struct StrConcatIter_444 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next508 (    struct StrConcatIter_443 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next509 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next507 (    struct StrConcatIter_442 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next508 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next506 (    struct Zip_441 *  self696 ) {
    struct Zip_441  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next507 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next507 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env515 {
    ;
    size_t  base951;
};

struct funenv515 {
    size_t  (*fun) (  struct env515  ,    int32_t  ,    size_t  );
    struct env515 env;
};

static  size_t   reduce514 (    struct Range_401  iterable840 ,    size_t  base842 ,   struct funenv515  fun844 ) {
    size_t  x845 = (  base842 );
    struct RangeIter_403  it846 = ( (  into_dash_iter402 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref847 = ( (  next404 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_369_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_369_Just_t ) {
            struct funenv515  temp516 = (  fun844 );
            x845 = ( temp516.fun ( temp516.env ,  ( dref847 .stuff .Maybe_369_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp517;
    return (  temp517 );
}

static  size_t   lam515 (   struct env515 env ,    int32_t  item955 ,    size_t  x957 ) {
    return (  op_dash_mul100 ( (  x957 ) , ( env.base951 ) ) );
}

static  size_t   pow513 (    size_t  base951 ,    int32_t  p953 ) {
    struct env515 envinst515 = {
        .base951 =  base951 ,
    };
    return ( (  reduce514 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  p953 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv515){ .fun = lam515, .env = envinst515 } ) ) );
}

static  struct Maybe_49   next512 (    struct IntStrIter_448 *  self1096 ) {
    if ( (  cmp80 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1097 = ( (  pow513 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1098 = (  op_dash_div101 ( ( ( * (  self1096 ) ) .f_int ) , (  trim_dash_down1097 ) ) );
    size_t  upper_dash_mask1099 = (  op_dash_mul100 ( (  op_dash_div101 ( (  upper1098 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1100 = (  op_dash_sub99 ( (  upper1098 ) , (  upper_dash_mask1099 ) ) );
    (*  self1096 ) .f_len = (  op_dash_sub88 ( ( ( * (  self1096 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1101 = ( (  cast227 ) ( (  op_dash_add98 ( (  digit1100 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1101 ) ) );
}

static  struct Maybe_49   next511 (    struct StrConcatIter_447 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next510 (    struct Zip_446 *  self696 ) {
    struct Zip_446  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next511 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next511 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_392   next518 (    struct Zip_450 *  self696 ) {
    struct Zip_450  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next509 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next509 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next521 (    struct StrConcatIter_454 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next509 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next520 (    struct StrConcatIter_453 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next521 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next477 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next519 (    struct Zip_452 *  self696 ) {
    struct Zip_452  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next520 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next520 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next525 (    struct StrConcatIter_459 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next511 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next488 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next524 (    struct StrCaseIter_458 *  self1184 ) {
    struct StrCaseIter_458 *  dref1185 = (  self1184 );
    if ( (* dref1185 ).tag == StrCaseIter_458_StrCaseIter1_t ) {
        return ( (  next367 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_458_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1185 ).tag == StrCaseIter_458_StrCaseIter2_t ) {
        return ( (  next525 ) ( ( & ( (* dref1185 ) .stuff .StrCaseIter_458_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next523 (    struct StrConcatIter_457 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next367 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next524 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next522 (    struct Zip_456 *  self696 ) {
    struct Zip_456  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next523 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next523 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next527 (    struct StrConcatIter_462 *  self1162 ) {
    struct Maybe_49  dref1163 = ( (  next525 ) ( ( & ( ( * (  self1162 ) ) .f_left ) ) ) );
    if ( dref1163.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1163 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1163.tag == Maybe_49_None_t ) {
        return ( (  next512 ) ( ( & ( ( * (  self1162 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_392   next526 (    struct Zip_461 *  self696 ) {
    struct Zip_461  copy697 = ( * (  self696 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref698 = ( (  next527 ) ( ( & ( (  copy697 ) .f_left_dash_it ) ) ) );
        if ( dref698.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
        }
        else if ( dref698.tag == Maybe_49_Just_t ) {
            struct Maybe_369  dref700 = ( (  next390 ) ( ( & ( (  copy697 ) .f_right_dash_it ) ) ) );
            if ( dref700.tag == Maybe_369_None_t ) {
                return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
            }
            else if ( dref700.tag == Maybe_369_Just_t ) {
                ( (  next527 ) ( ( & ( ( * (  self696 ) ) .f_left_dash_it ) ) ) );
                ( (  next390 ) ( ( & ( ( * (  self696 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_392_Just ) ( ( ( Tuple2_393_Tuple2 ) ( ( dref698 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref700 .stuff .Maybe_369_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_380   zip528 (    struct Slice_322  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_321  left_dash_it707 = ( (  into_dash_iter325 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct Zip_384   zip529 (    struct Slice_5  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_330  left_dash_it707 = ( (  into_dash_iter334 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct Zip_380   zip530 (    struct List_323  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_321  left_dash_it707 = ( (  into_dash_iter324 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct Zip_384   zip531 (    struct List_3  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_330  left_dash_it707 = ( (  into_dash_iter333 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct SliceIter_409   into_dash_iter533 (    struct Slice_161  self1459 ) {
    return ( (struct SliceIter_409) { .f_slice = (  self1459 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_408   zip532 (    struct Slice_161  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_409  left_dash_it707 = ( (  into_dash_iter533 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_408) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct SliceIter_412   into_dash_iter535 (    struct Slice_413  self1459 ) {
    return ( (struct SliceIter_412) { .f_slice = (  self1459 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Zip_411   zip534 (    struct Slice_413  left704 ,    struct FromIter_381  right706 ) {
    struct SliceIter_412  left_dash_it707 = ( (  into_dash_iter535 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct Zip_415   zip536 (    struct Slice_5  left704 ,    struct Slice_5  right706 ) {
    struct SliceIter_330  left_dash_it707 = ( (  into_dash_iter334 ) ( (  left704 ) ) );
    struct SliceIter_330  right_dash_it708 = ( (  into_dash_iter334 ) ( (  right706 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct IntStrIter_418   into_dash_iter538 (    struct IntStrIter_418  self1093 ) {
    return (  self1093 );
}

static  struct Zip_417   zip537 (    struct IntStrIter_418  left704 ,    struct FromIter_381  right706 ) {
    struct IntStrIter_418  left_dash_it707 = ( (  into_dash_iter538 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_421   into_dash_iter540 (    struct StrConcatIter_421  self1159 ) {
    return (  self1159 );
}

static  struct Zip_420   zip539 (    struct StrConcatIter_421  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_421  left_dash_it707 = ( (  into_dash_iter540 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_428   into_dash_iter542 (    struct StrConcatIter_428  self1159 ) {
    return (  self1159 );
}

static  struct Zip_427   zip541 (    struct StrConcatIter_428  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_428  left_dash_it707 = ( (  into_dash_iter542 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_427) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_432   into_dash_iter544 (    struct StrConcatIter_432  self1159 ) {
    return (  self1159 );
}

static  struct Zip_431   zip543 (    struct StrConcatIter_432  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_432  left_dash_it707 = ( (  into_dash_iter544 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_431) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_442   into_dash_iter546 (    struct StrConcatIter_442  self1159 ) {
    return (  self1159 );
}

static  struct Zip_441   zip545 (    struct StrConcatIter_442  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_442  left_dash_it707 = ( (  into_dash_iter546 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_441) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_447   into_dash_iter548 (    struct StrConcatIter_447  self1159 ) {
    return (  self1159 );
}

static  struct Zip_446   zip547 (    struct StrConcatIter_447  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_447  left_dash_it707 = ( (  into_dash_iter548 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_446) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_444   into_dash_iter550 (    struct StrConcatIter_444  self1159 ) {
    return (  self1159 );
}

static  struct Zip_450   zip549 (    struct StrConcatIter_444  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_444  left_dash_it707 = ( (  into_dash_iter550 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_450) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_453   into_dash_iter552 (    struct StrConcatIter_453  self1159 ) {
    return (  self1159 );
}

static  struct Zip_452   zip551 (    struct StrConcatIter_453  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_453  left_dash_it707 = ( (  into_dash_iter552 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_452) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_457   into_dash_iter554 (    struct StrConcatIter_457  self1159 ) {
    return (  self1159 );
}

static  struct Zip_456   zip553 (    struct StrConcatIter_457  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_457  left_dash_it707 = ( (  into_dash_iter554 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_456) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

static  struct StrConcatIter_462   into_dash_iter556 (    struct StrConcatIter_462  self1159 ) {
    return (  self1159 );
}

static  struct Zip_461   zip555 (    struct StrConcatIter_462  left704 ,    struct FromIter_381  right706 ) {
    struct StrConcatIter_462  left_dash_it707 = ( (  into_dash_iter556 ) ( (  left704 ) ) );
    struct FromIter_381  right_dash_it708 = ( (  into_dash_iter406 ) ( (  right706 ) ) );
    return ( (struct Zip_461) { .f_left_dash_it = (  left_dash_it707 ) , .f_right_dash_it = (  right_dash_it708 ) } );
}

struct TakeWhile_558 {
    struct Scanner_329  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_558   into_dash_iter557 (    struct TakeWhile_558  self743 ) {
    return (  self743 );
}

struct TakeWhile_560 {
    struct SliceIter_330  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_560   into_dash_iter559 (    struct TakeWhile_560  self743 ) {
    return (  self743 );
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

static  struct TakeWhile_562   into_dash_iter561 (    struct TakeWhile_562  self743 ) {
    return (  self743 );
}

struct TakeWhile_567 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_567   into_dash_iter566 (    struct TakeWhile_567  self743 ) {
    return (  self743 );
}

struct TakeWhile_569 {
    struct DropWhile_565  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_569   into_dash_iter568 (    struct TakeWhile_569  self743 ) {
    return (  self743 );
}

static  struct Maybe_49   next571 (    struct Scanner_329 *  self2437 ) {
    return ( (  next371 ) ( ( & ( ( * (  self2437 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next570 (    struct TakeWhile_558 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next571 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next572 (    struct TakeWhile_560 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next371 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next576 (    struct DropWhile_565 *  self761 ) {
    if ( ( ( * (  self761 ) ) .f_finished ) ) {
        return ( (  next371 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref762 = ( (  next371 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
        if ( dref762.tag == Maybe_49_None_t ) {
            (*  self761 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref762.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self761 ) ) .f_pred ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self761 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next575 (    struct DropWhile_564 *  self761 ) {
    if ( ( ( * (  self761 ) ) .f_finished ) ) {
        return ( (  next576 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref762 = ( (  next576 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
        if ( dref762.tag == Maybe_49_None_t ) {
            (*  self761 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref762.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self761 ) ) .f_pred ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self761 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next574 (    struct DropWhile_563 *  self761 ) {
    if ( ( ( * (  self761 ) ) .f_finished ) ) {
        return ( (  next575 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref762 = ( (  next575 ) ( ( & ( ( * (  self761 ) ) .f_it ) ) ) );
        if ( dref762.tag == Maybe_49_None_t ) {
            (*  self761 ) .f_finished = ( true );
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
        else if ( dref762.tag == Maybe_49_Just_t ) {
            if ( ( ! ( ( ( * (  self761 ) ) .f_pred ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) ) ) ) {
                (*  self761 ) .f_finished = ( true );
                return ( ( Maybe_49_Just ) ( ( dref762 .stuff .Maybe_49_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_49   next573 (    struct TakeWhile_562 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next574 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next577 (    struct TakeWhile_567 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next574 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct Maybe_49   next578 (    struct TakeWhile_569 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next576 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

struct TakeWhile_580 {
    struct DropWhile_563  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_49   next579 (    struct TakeWhile_580 *  self746 ) {
    struct Maybe_49  mx747 = ( (  next574 ) ( ( & ( ( * (  self746 ) ) .f_it ) ) ) );
    struct Maybe_49  dref748 = (  mx747 );
    if ( dref748.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref748.tag == Maybe_49_Just_t ) {
        if ( ( ( ( * (  self746 ) ) .f_pred ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_49_Just ) ( ( dref748 .stuff .Maybe_49_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
        }
    }
}

static  struct TakeWhile_558   take_dash_while581 (    struct Scanner_329 *  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_558) { .f_it = ( (  into_dash_iter328 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct TakeWhile_560   take_dash_while582 (    struct List_3 *  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_560) { .f_it = ( (  into_dash_iter332 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct DropWhile_565   into_dash_iter584 (    struct DropWhile_565  self758 ) {
    return (  self758 );
}

static  struct TakeWhile_569   take_dash_while583 (    struct DropWhile_565  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_569) { .f_it = ( (  into_dash_iter584 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct DropWhile_563   into_dash_iter586 (    struct DropWhile_563  self758 ) {
    return (  self758 );
}

static  struct TakeWhile_562   take_dash_while585 (    struct DropWhile_563  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_562) { .f_it = ( (  into_dash_iter586 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct TakeWhile_567   take_dash_while587 (    struct DropWhile_563  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_567) { .f_it = ( (  into_dash_iter586 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct TakeWhile_580   take_dash_while588 (    struct DropWhile_563  it752 ,    bool (*  pred754 )(    char  ) ) {
    return ( (struct TakeWhile_580) { .f_it = ( (  into_dash_iter586 ) ( (  it752 ) ) ) , .f_pred = (  pred754 ) } );
}

static  struct DropWhile_564   into_dash_iter589 (    struct DropWhile_564  self758 ) {
    return (  self758 );
}

static  struct SliceIter_330   into_dash_iter591 (    struct DynStr_134  self1609 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1609 ) .f_contents ) ) );
}

static  struct DropWhile_565   drop_dash_while590 (    struct DynStr_134  it766 ,    bool (*  pred768 )(    char  ) ) {
    return ( (struct DropWhile_565) { .f_it = ( (  into_dash_iter591 ) ( (  it766 ) ) ) , .f_pred = (  pred768 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_564   drop_dash_while592 (    struct DropWhile_565  it766 ,    bool (*  pred768 )(    char  ) ) {
    return ( (struct DropWhile_564) { .f_it = ( (  into_dash_iter584 ) ( (  it766 ) ) ) , .f_pred = (  pred768 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_563   drop_dash_while593 (    struct DropWhile_564  it766 ,    bool (*  pred768 )(    char  ) ) {
    return ( (struct DropWhile_563) { .f_it = ( (  into_dash_iter589 ) ( (  it766 ) ) ) , .f_pred = (  pred768 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_425   append594 (    enum EmptyIter_337  it788 ,    char  e790 ) {
    return ( (struct AppendIter_425) { .f_it = ( (  into_dash_iter338 ) ( (  it788 ) ) ) , .f_elem = (  e790 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_425   cons595 (    enum EmptyIter_337  it793 ,    char  e795 ) {
    return ( (  append594 ) ( (  it793 ) ,  (  e795 ) ) );
}

static  struct AppendIter_425   single596 (    char  e798 ) {
    return ( (  cons595 ) ( ( (  nil336 ) ( ) ) ,  (  e798 ) ) );
}

static  struct AppendIter_425   into_dash_iter597 (    struct AppendIter_425  self801 ) {
    return (  self801 );
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

static  struct FunIter_599   into_dash_iter598 (    struct FunIter_599  self810 ) {
    return (  self810 );
}

static  struct Maybe_600   next604 (    struct FunIter_599 *  self813 ) {
    if ( ( ( * (  self813 ) ) .f_finished ) ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    struct Maybe_600  dref814 = ( ( ( * (  self813 ) ) .f_fun ) ( ) );
    if ( dref814.tag == Maybe_600_Just_t ) {
        return ( ( Maybe_600_Just ) ( ( dref814 .stuff .Maybe_600_Just_s .field0 ) ) );
    }
    else if ( dref814.tag == Maybe_600_None_t ) {
        (*  self813 ) .f_finished = ( true );
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
}

static  struct FunIter_599   from_dash_function605 (    struct Maybe_600 (*  fun818 )(  ) ) {
    return ( (struct FunIter_599) { .f_fun = (  fun818 ) , .f_finished = ( false ) } );
}

struct env607 {
    ;
    ;
    struct Slice_322  new_dash_slice1847;
};

struct funenv607 {
    enum Unit_13  (*fun) (  struct env607  ,    struct Tuple2_387  );
    struct env607 env;
};

static  enum Unit_13   for_dash_each606 (    struct Zip_380  iterable821 ,   struct funenv607  fun823 ) {
    struct Zip_380  temp608 = ( (  into_dash_iter396 ) ( (  iterable821 ) ) );
    struct Zip_380 *  it824 = ( &temp608 );
    while ( ( true ) ) {
        struct Maybe_386  dref825 = ( (  next388 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_386_Just_t ) {
            struct funenv607  temp609 = (  fun823 );
            ( temp609.fun ( temp609.env ,  ( dref825 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env611 {
    ;
    ;
    struct Slice_5  new_dash_slice1847;
};

struct funenv611 {
    enum Unit_13  (*fun) (  struct env611  ,    struct Tuple2_393  );
    struct env611 env;
};

static  enum Unit_13   for_dash_each610 (    struct Zip_384  iterable821 ,   struct funenv611  fun823 ) {
    struct Zip_384  temp612 = ( (  into_dash_iter398 ) ( (  iterable821 ) ) );
    struct Zip_384 *  it824 = ( &temp612 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next394 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv611  temp613 = (  fun823 );
            ( temp613.fun ( temp613.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env615 {
    struct env346 envinst346;
    struct List_3 *  list1894;
};

struct funenv615 {
    enum Unit_13  (*fun) (  struct env615  ,    char  );
    struct env615 env;
};

static  enum Unit_13   for_dash_each614 (    struct DynStr_134  iterable821 ,   struct funenv615  fun823 ) {
    struct SliceIter_330  temp616 = ( (  into_dash_iter591 ) ( (  iterable821 ) ) );
    struct SliceIter_330 *  it824 = ( &temp616 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next371 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv615  temp617 = (  fun823 );
            ( temp617.fun ( temp617.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env621 {
    size_t  growth_dash_factor1842;
    ;
    ;
    ;
    size_t  starting_dash_size1841;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct List_323 *  list1894;
};

struct funenv619 {
    enum Unit_13  (*fun) (  struct env619  ,    struct List_3  );
    struct env619 env;
};

static  enum Unit_13   for_dash_each618 (    struct Map_341  iterable821 ,   struct funenv619  fun823 ) {
    struct Map_341  temp622 = ( (  into_dash_iter340 ) ( (  iterable821 ) ) );
    struct Map_341 *  it824 = ( &temp622 );
    while ( ( true ) ) {
        struct Maybe_355  dref825 = ( (  next354 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_355_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_355_Just_t ) {
            struct funenv619  temp623 = (  fun823 );
            ( temp623.fun ( temp623.env ,  ( dref825 .stuff .Maybe_355_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_626 {
    struct List_3  f_chars;
};

struct env625 {
    struct StrBuilder_626 *  builder2136;
    struct env346 envinst346;
};

struct funenv625 {
    enum Unit_13  (*fun) (  struct env625  ,    char  );
    struct env625 env;
};

static  struct ConstStrIter_350   into_dash_iter628 (    struct ConstStrIter_350  self1072 ) {
    return (  self1072 );
}

static  enum Unit_13   for_dash_each624 (    struct ConstStrIter_350  iterable821 ,   struct funenv625  fun823 ) {
    struct ConstStrIter_350  temp627 = ( (  into_dash_iter628 ) ( (  iterable821 ) ) );
    struct ConstStrIter_350 *  it824 = ( &temp627 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next367 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv625  temp629 = (  fun823 );
            ( temp629.fun ( temp629.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_632 {
    struct Cell_58 *  f_ptr;
    size_t  f_count;
};

struct env631 {
    struct Cell_58 (*  fun1544 )(    struct Cell_58  );
    ;
    ;
    struct Slice_632  s1542;
    ;
};

struct funenv631 {
    enum Unit_13  (*fun) (  struct env631  ,    int32_t  );
    struct env631 env;
};

static  enum Unit_13   for_dash_each630 (    struct Range_401  iterable821 ,   struct funenv631  fun823 ) {
    struct RangeIter_403  temp633 = ( (  into_dash_iter402 ) ( (  iterable821 ) ) );
    struct RangeIter_403 *  it824 = ( &temp633 );
    while ( ( true ) ) {
        struct Maybe_369  dref825 = ( (  next404 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_369_Just_t ) {
            struct funenv631  temp634 = (  fun823 );
            ( temp634.fun ( temp634.env ,  ( dref825 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env636 {
    struct Cell_58 (*  fun1544 )(    struct Cell_58  );
    ;
    ;
    struct Slice_632  s1542;
    ;
};

struct funenv636 {
    enum Unit_13  (*fun) (  struct env636  ,    int32_t  );
    struct env636 env;
};

static  enum Unit_13   for_dash_each635 (    struct Range_401  iterable821 ,   struct funenv636  fun823 ) {
    struct RangeIter_403  temp637 = ( (  into_dash_iter402 ) ( (  iterable821 ) ) );
    struct RangeIter_403 *  it824 = ( &temp637 );
    while ( ( true ) ) {
        struct Maybe_369  dref825 = ( (  next404 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_369_Just_t ) {
            struct funenv636  temp638 = (  fun823 );
            ( temp638.fun ( temp638.env ,  ( dref825 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env640 {
    ;
    struct Scanner_329 *  it927;
};

struct funenv640 {
    struct Maybe_49  (*fun) (  struct env640  ,    int32_t  );
    struct env640 env;
};

static  enum Unit_13   for_dash_each639 (    struct Range_401  iterable821 ,   struct funenv640  fun823 ) {
    struct RangeIter_403  temp641 = ( (  into_dash_iter402 ) ( (  iterable821 ) ) );
    struct RangeIter_403 *  it824 = ( &temp641 );
    while ( ( true ) ) {
        struct Maybe_369  dref825 = ( (  next404 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_369_Just_t ) {
            struct funenv640  temp642 = (  fun823 );
            ( temp642.fun ( temp642.env ,  ( dref825 .stuff .Maybe_369_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env644 {
    struct env346 envinst346;
    struct List_3 *  list1894;
};

struct funenv644 {
    enum Unit_13  (*fun) (  struct env644  ,    char  );
    struct env644 env;
};

static  enum Unit_13   for_dash_each643 (    struct Slice_5  iterable821 ,   struct funenv644  fun823 ) {
    struct SliceIter_330  temp645 = ( (  into_dash_iter334 ) ( (  iterable821 ) ) );
    struct SliceIter_330 *  it824 = ( &temp645 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next371 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv644  temp646 = (  fun823 );
            ( temp646.fun ( temp646.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env648 {
    struct env346 envinst346;
    struct List_3 *  list1894;
};

struct funenv648 {
    enum Unit_13  (*fun) (  struct env648  ,    char  );
    struct env648 env;
};

static  enum Unit_13   for_dash_each647 (    struct List_3 *  iterable821 ,   struct funenv648  fun823 ) {
    struct SliceIter_330  temp649 = ( (  into_dash_iter332 ) ( (  iterable821 ) ) );
    struct SliceIter_330 *  it824 = ( &temp649 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next371 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv648  temp650 = (  fun823 );
            ( temp650.fun ( temp650.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env652 {
    struct Slice_322  dest1490;
    ;
    ;
};

struct funenv652 {
    enum Unit_13  (*fun) (  struct env652  ,    struct Tuple2_387  );
    struct env652 env;
};

static  enum Unit_13   for_dash_each651 (    struct Zip_380  iterable821 ,   struct funenv652  fun823 ) {
    struct Zip_380  temp653 = ( (  into_dash_iter396 ) ( (  iterable821 ) ) );
    struct Zip_380 *  it824 = ( &temp653 );
    while ( ( true ) ) {
        struct Maybe_386  dref825 = ( (  next388 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_386_Just_t ) {
            struct funenv652  temp654 = (  fun823 );
            ( temp654.fun ( temp654.env ,  ( dref825 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env656 {
    ;
    ;
    struct List_323 *  list1866;
    ;
    ;
};

struct funenv656 {
    enum Unit_13  (*fun) (  struct env656  ,    struct Tuple2_387  );
    struct env656 env;
};

static  enum Unit_13   for_dash_each655 (    struct Drop_379  iterable821 ,   struct funenv656  fun823 ) {
    struct Drop_379  temp657 = ( (  into_dash_iter378 ) ( (  iterable821 ) ) );
    struct Drop_379 *  it824 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_386  dref825 = ( (  next385 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_386_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_386_Just_t ) {
            struct funenv656  temp658 = (  fun823 );
            ( temp658.fun ( temp658.env ,  ( dref825 .stuff .Maybe_386_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env660 {
    struct Slice_5  dest1490;
    ;
    ;
};

struct funenv660 {
    enum Unit_13  (*fun) (  struct env660  ,    struct Tuple2_393  );
    struct env660 env;
};

static  enum Unit_13   for_dash_each659 (    struct Zip_384  iterable821 ,   struct funenv660  fun823 ) {
    struct Zip_384  temp661 = ( (  into_dash_iter398 ) ( (  iterable821 ) ) );
    struct Zip_384 *  it824 = ( &temp661 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next394 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv660  temp662 = (  fun823 );
            ( temp662.fun ( temp662.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env664 {
    ;
    ;
    struct List_3 *  list1866;
    ;
    ;
};

struct funenv664 {
    enum Unit_13  (*fun) (  struct env664  ,    struct Tuple2_393  );
    struct env664 env;
};

static  enum Unit_13   for_dash_each663 (    struct Drop_383  iterable821 ,   struct funenv664  fun823 ) {
    struct Drop_383  temp665 = ( (  into_dash_iter382 ) ( (  iterable821 ) ) );
    struct Drop_383 *  it824 = ( &temp665 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next391 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv664  temp666 = (  fun823 );
            ( temp666.fun ( temp666.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env668 {
    struct StrBuilder_626 *  builder2136;
    struct env346 envinst346;
};

struct funenv668 {
    enum Unit_13  (*fun) (  struct env668  ,    char  );
    struct env668 env;
};

static  enum Unit_13   for_dash_each667 (    struct AppendIter_425  iterable821 ,   struct funenv668  fun823 ) {
    struct AppendIter_425  temp669 = ( (  into_dash_iter597 ) ( (  iterable821 ) ) );
    struct AppendIter_425 *  it824 = ( &temp669 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next488 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv668  temp670 = (  fun823 );
            ( temp670.fun ( temp670.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env672 {
    ;
    ;
    struct Slice_161  new_dash_slice1847;
};

struct funenv672 {
    enum Unit_13  (*fun) (  struct env672  ,    struct Tuple2_465  );
    struct env672 env;
};

static  enum Unit_13   for_dash_each671 (    struct Zip_408  iterable821 ,   struct funenv672  fun823 ) {
    struct Zip_408  temp673 = ( (  into_dash_iter407 ) ( (  iterable821 ) ) );
    struct Zip_408 *  it824 = ( &temp673 );
    while ( ( true ) ) {
        struct Maybe_464  dref825 = ( (  next463 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_464_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_464_Just_t ) {
            struct funenv672  temp674 = (  fun823 );
            ( temp674.fun ( temp674.env ,  ( dref825 .stuff .Maybe_464_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env676 {
    ;
    ;
    struct Slice_413  new_dash_slice1847;
};

struct funenv676 {
    enum Unit_13  (*fun) (  struct env676  ,    struct Tuple2_470  );
    struct env676 env;
};

static  enum Unit_13   for_dash_each675 (    struct Zip_411  iterable821 ,   struct funenv676  fun823 ) {
    struct Zip_411  temp677 = ( (  into_dash_iter410 ) ( (  iterable821 ) ) );
    struct Zip_411 *  it824 = ( &temp677 );
    while ( ( true ) ) {
        struct Maybe_469  dref825 = ( (  next468 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_469_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_469_Just_t ) {
            struct funenv676  temp678 = (  fun823 );
            ( temp678.fun ( temp678.env ,  ( dref825 .stuff .Maybe_469_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env680 {
    ;
    enum CAllocator_4  al2966;
};

struct funenv680 {
    enum Unit_13  (*fun) (  struct env680  ,    struct Action_152  );
    struct env680 env;
};

static  enum Unit_13   for_dash_each679 (    struct Slice_161  iterable821 ,   struct funenv680  fun823 ) {
    struct SliceIter_409  temp681 = ( (  into_dash_iter533 ) ( (  iterable821 ) ) );
    struct SliceIter_409 *  it824 = ( &temp681 );
    while ( ( true ) ) {
        struct Maybe_466  dref825 = ( (  next467 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_466_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_466_Just_t ) {
            struct funenv680  temp682 = (  fun823 );
            ( temp682.fun ( temp682.env ,  ( dref825 .stuff .Maybe_466_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env684 {
    enum CAllocator_4  al2986;
    ;
};

struct funenv684 {
    enum Unit_13  (*fun) (  struct env684  ,    struct Either_182  );
    struct env684 env;
};

static  enum Unit_13   for_dash_each683 (    struct Slice_413  iterable821 ,   struct funenv684  fun823 ) {
    struct SliceIter_412  temp685 = ( (  into_dash_iter535 ) ( (  iterable821 ) ) );
    struct SliceIter_412 *  it824 = ( &temp685 );
    while ( ( true ) ) {
        struct Maybe_471  dref825 = ( (  next472 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_471_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_471_Just_t ) {
            struct funenv684  temp686 = (  fun823 );
            ( temp686.fun ( temp686.env ,  ( dref825 .stuff .Maybe_471_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env688 {
    struct env346 envinst346;
    struct List_3 *  list1894;
};

struct funenv688 {
    enum Unit_13  (*fun) (  struct env688  ,    char  );
    struct env688 env;
};

static  enum Unit_13   for_dash_each687 (    struct TakeWhile_560  iterable821 ,   struct funenv688  fun823 ) {
    struct TakeWhile_560  temp689 = ( (  into_dash_iter559 ) ( (  iterable821 ) ) );
    struct TakeWhile_560 *  it824 = ( &temp689 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next572 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv688  temp690 = (  fun823 );
            ( temp690.fun ( temp690.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_692 {
    struct Slice_322  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_692   into_dash_iter694 (    struct SliceAddressIter_692  self1480 ) {
    return (  self1480 );
}

struct Maybe_695 {
    enum {
        Maybe_695_None_t,
        Maybe_695_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_695_Just_s;
    } stuff;
};

static struct Maybe_695 Maybe_695_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_695 ) { .tag = Maybe_695_Just_t, .stuff = { .Maybe_695_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_695   next696 (    struct SliceAddressIter_692 *  self1483 ) {
    size_t  off1484 = ( ( * (  self1483 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add98 ( (  off1484 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1483 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_695) { .tag = Maybe_695_None_t } );
    }
    struct List_3 *  elem1485 = ( (  offset_dash_ptr171 ) ( ( ( ( * (  self1483 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1484 ) ) ) ) );
    (*  self1483 ) .f_current_dash_offset = (  op_dash_add98 ( (  off1484 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_695_Just ) ( (  elem1485 ) ) );
}

static  enum Unit_13   for_dash_each691 (    struct SliceAddressIter_692  iterable821 ,    enum Unit_13 (*  fun823 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_692  temp693 = ( (  into_dash_iter694 ) ( (  iterable821 ) ) );
    struct SliceAddressIter_692 *  it824 = ( &temp693 );
    while ( ( true ) ) {
        struct Maybe_695  dref825 = ( (  next696 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_695_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_695_Just_t ) {
            ( (  fun823 ) ( ( dref825 .stuff .Maybe_695_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env699 {
    struct env346 envinst346;
    ;
    ;
};

struct funenv699 {
    enum Unit_13  (*fun) (  struct env699  ,    struct StrBuilder_626 *  ,    char  );
    struct env699 env;
};

struct env698 {
    struct env699 envinst699;
    struct StrBuilder_626 *  sb3239;
};

struct funenv698 {
    enum Unit_13  (*fun) (  struct env698  ,    char  );
    struct env698 env;
};

static  enum Unit_13   for_dash_each697 (    struct List_3  iterable821 ,   struct funenv698  fun823 ) {
    struct SliceIter_330  temp700 = ( (  into_dash_iter333 ) ( (  iterable821 ) ) );
    struct SliceIter_330 *  it824 = ( &temp700 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next371 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv698  temp701 = (  fun823 );
            ( temp701.fun ( temp701.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env703 {
    struct StrBuilder_626 *  builder2136;
    struct env346 envinst346;
};

struct funenv703 {
    enum Unit_13  (*fun) (  struct env703  ,    char  );
    struct env703 env;
};

static  enum Unit_13   for_dash_each702 (    struct TakeWhile_562  iterable821 ,   struct funenv703  fun823 ) {
    struct TakeWhile_562  temp704 = ( (  into_dash_iter561 ) ( (  iterable821 ) ) );
    struct TakeWhile_562 *  it824 = ( &temp704 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next573 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv703  temp705 = (  fun823 );
            ( temp705.fun ( temp705.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env707 {
    struct StrBuilder_626 *  builder2136;
    struct env346 envinst346;
};

struct funenv707 {
    enum Unit_13  (*fun) (  struct env707  ,    char  );
    struct env707 env;
};

static  enum Unit_13   for_dash_each706 (    struct TakeWhile_567  iterable821 ,   struct funenv707  fun823 ) {
    struct TakeWhile_567  temp708 = ( (  into_dash_iter566 ) ( (  iterable821 ) ) );
    struct TakeWhile_567 *  it824 = ( &temp708 );
    while ( ( true ) ) {
        struct Maybe_49  dref825 = ( (  next577 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_49_Just_t ) {
            struct funenv707  temp709 = (  fun823 );
            ( temp709.fun ( temp709.env ,  ( dref825 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env711 {
    struct Cell_58 (*  fun1544 )(    struct Cell_58  );
    ;
    ;
    struct Slice_632  s1542;
    ;
};

struct funenv711 {
    enum Unit_13  (*fun) (  struct env711  ,    int32_t  );
    struct env711 env;
};

static  enum Unit_13   for_dash_each710 (    struct Range_401  iterable821 ,   struct funenv711  fun823 ) {
    struct RangeIter_403  temp712 = ( (  into_dash_iter402 ) ( (  iterable821 ) ) );
    struct RangeIter_403 *  it824 = ( &temp712 );
    while ( ( true ) ) {
        struct Maybe_369  dref825 = ( (  next404 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_369_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_369_Just_t ) {
            struct funenv711  temp713 = (  fun823 );
            ( temp713.fun ( temp713.env ,  ( dref825 .stuff .Maybe_369_Just_s .field0 ) ) );
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
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv715 {
    enum Unit_13  (*fun) (  struct env715  ,    struct Tuple2_393  );
    struct env715 env;
};

static  enum Unit_13   for_dash_each714 (    struct Zip_417  iterable821 ,   struct funenv715  fun823 ) {
    struct Zip_417  temp719 = ( (  into_dash_iter416 ) ( (  iterable821 ) ) );
    struct Zip_417 *  it824 = ( &temp719 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next476 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv715  temp720 = (  fun823 );
            ( temp720.fun ( temp720.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env722 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv722 {
    enum Unit_13  (*fun) (  struct env722  ,    struct Tuple2_393  );
    struct env722 env;
};

static  enum Unit_13   for_dash_each721 (    struct Zip_420  iterable821 ,   struct funenv722  fun823 ) {
    struct Zip_420  temp723 = ( (  into_dash_iter419 ) ( (  iterable821 ) ) );
    struct Zip_420 *  it824 = ( &temp723 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next483 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv722  temp724 = (  fun823 );
            ( temp724.fun ( temp724.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env726 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv726 {
    enum Unit_13  (*fun) (  struct env726  ,    struct Tuple2_393  );
    struct env726 env;
};

static  enum Unit_13   for_dash_each725 (    struct Zip_427  iterable821 ,   struct funenv726  fun823 ) {
    struct Zip_427  temp727 = ( (  into_dash_iter426 ) ( (  iterable821 ) ) );
    struct Zip_427 *  it824 = ( &temp727 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next489 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv726  temp728 = (  fun823 );
            ( temp728.fun ( temp728.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env730 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv730 {
    enum Unit_13  (*fun) (  struct env730  ,    struct Tuple2_393  );
    struct env730 env;
};

static  enum Unit_13   for_dash_each729 (    struct Zip_431  iterable821 ,   struct funenv730  fun823 ) {
    struct Zip_431  temp731 = ( (  into_dash_iter430 ) ( (  iterable821 ) ) );
    struct Zip_431 *  it824 = ( &temp731 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next497 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv730  temp732 = (  fun823 );
            ( temp732.fun ( temp732.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env734 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv734 {
    enum Unit_13  (*fun) (  struct env734  ,    struct Tuple2_393  );
    struct env734 env;
};

static  enum Unit_13   for_dash_each733 (    struct Zip_441  iterable821 ,   struct funenv734  fun823 ) {
    struct Zip_441  temp735 = ( (  into_dash_iter440 ) ( (  iterable821 ) ) );
    struct Zip_441 *  it824 = ( &temp735 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next506 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv734  temp736 = (  fun823 );
            ( temp736.fun ( temp736.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env738 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv738 {
    enum Unit_13  (*fun) (  struct env738  ,    struct Tuple2_393  );
    struct env738 env;
};

static  enum Unit_13   for_dash_each737 (    struct Zip_446  iterable821 ,   struct funenv738  fun823 ) {
    struct Zip_446  temp739 = ( (  into_dash_iter445 ) ( (  iterable821 ) ) );
    struct Zip_446 *  it824 = ( &temp739 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next510 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv738  temp740 = (  fun823 );
            ( temp740.fun ( temp740.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env742 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv742 {
    enum Unit_13  (*fun) (  struct env742  ,    struct Tuple2_393  );
    struct env742 env;
};

static  enum Unit_13   for_dash_each741 (    struct Zip_450  iterable821 ,   struct funenv742  fun823 ) {
    struct Zip_450  temp743 = ( (  into_dash_iter449 ) ( (  iterable821 ) ) );
    struct Zip_450 *  it824 = ( &temp743 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next518 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv742  temp744 = (  fun823 );
            ( temp744.fun ( temp744.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env746 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv746 {
    enum Unit_13  (*fun) (  struct env746  ,    struct Tuple2_393  );
    struct env746 env;
};

static  enum Unit_13   for_dash_each745 (    struct Zip_452  iterable821 ,   struct funenv746  fun823 ) {
    struct Zip_452  temp747 = ( (  into_dash_iter451 ) ( (  iterable821 ) ) );
    struct Zip_452 *  it824 = ( &temp747 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next519 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv746  temp748 = (  fun823 );
            ( temp748.fun ( temp748.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env750 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv750 {
    enum Unit_13  (*fun) (  struct env750  ,    struct Tuple2_393  );
    struct env750 env;
};

static  enum Unit_13   for_dash_each749 (    struct Zip_420  iterable821 ,   struct funenv750  fun823 ) {
    struct Zip_420  temp751 = ( (  into_dash_iter419 ) ( (  iterable821 ) ) );
    struct Zip_420 *  it824 = ( &temp751 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next483 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv750  temp752 = (  fun823 );
            ( temp752.fun ( temp752.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env754 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv754 {
    enum Unit_13  (*fun) (  struct env754  ,    struct Tuple2_393  );
    struct env754 env;
};

static  enum Unit_13   for_dash_each753 (    struct Zip_420  iterable821 ,   struct funenv754  fun823 ) {
    struct Zip_420  temp755 = ( (  into_dash_iter419 ) ( (  iterable821 ) ) );
    struct Zip_420 *  it824 = ( &temp755 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next483 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv754  temp756 = (  fun823 );
            ( temp756.fun ( temp756.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env758 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv758 {
    enum Unit_13  (*fun) (  struct env758  ,    struct Tuple2_393  );
    struct env758 env;
};

static  enum Unit_13   for_dash_each757 (    struct Zip_456  iterable821 ,   struct funenv758  fun823 ) {
    struct Zip_456  temp759 = ( (  into_dash_iter455 ) ( (  iterable821 ) ) );
    struct Zip_456 *  it824 = ( &temp759 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next522 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv758  temp760 = (  fun823 );
            ( temp760.fun ( temp760.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env762 {
    int32_t  y2666;
    ;
    struct Screen_716 *  screen2660;
    ;
    int32_t  x2669;
};

struct funenv762 {
    enum Unit_13  (*fun) (  struct env762  ,    struct Tuple2_393  );
    struct env762 env;
};

static  enum Unit_13   for_dash_each761 (    struct Zip_461  iterable821 ,   struct funenv762  fun823 ) {
    struct Zip_461  temp763 = ( (  into_dash_iter460 ) ( (  iterable821 ) ) );
    struct Zip_461 *  it824 = ( &temp763 );
    while ( ( true ) ) {
        struct Maybe_392  dref825 = ( (  next526 ) ( (  it824 ) ) );
        if ( dref825.tag == Maybe_392_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref825.tag == Maybe_392_Just_t ) {
            struct funenv762  temp764 = (  fun823 );
            ( temp764.fun ( temp764.env ,  ( dref825 .stuff .Maybe_392_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_766 {
    struct SmolArray_106  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_766   into_dash_iter767 (    struct SmolArray_106  self1691 ) {
    return ( (struct SmolArrayIter_766) { .f_backing = (  self1691 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
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

static  enum Unit_13   print_dash_str780 (    int32_t  self1108 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1108 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str779 (    struct StrConcat_773  self1171 ) {
    struct StrConcat_773  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str780 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str778 (    struct StrConcat_772  self1171 ) {
    struct StrConcat_772  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str779 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str777 (    struct StrConcat_776  self1171 ) {
    struct StrConcat_776  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str778 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str774 (    struct StrConcat_775  self1171 ) {
    struct StrConcat_775  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str777 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic771 (    struct StrConcat_772  errmsg1348 ) {
    ( (  print_dash_str774 ) ( ( ( StrConcat_775_StrConcat ) ( ( ( StrConcat_776_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr770 (    struct Array_107 *  arr1653 ,    size_t  i1656 ) {
    if ( ( (  cmp9 ( (  i1656 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1656 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1656 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1657 = ( ( (  cast_dash_ptr241 ) ( (  arr1653 ) ) ) );
    return ( (  offset_dash_ptr175 ) ( (  p1657 ) ,  ( (int64_t ) (  i1656 ) ) ) );
}

static  uint32_t   get769 (    struct Array_107 *  arr1660 ,    size_t  i1663 ) {
    return ( * ( (  get_dash_ptr770 ) ( (  arr1660 ) ,  (  i1663 ) ) ) );
}

static  struct Maybe_366   next768 (    struct SmolArrayIter_766 *  self1698 ) {
    if ( (  cmp9 ( ( ( * (  self1698 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1700 = ( (  get769 ) ( ( & ( ( ( * (  self1698 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1698 ) ) .f_cur ) ) );
    (*  self1698 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1698 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1700 ) ) );
}

static  uint32_t   reduce765 (    struct SmolArray_106  iterable840 ,    uint32_t  base842 ,    uint32_t (*  fun844 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x845 = (  base842 );
    struct SmolArrayIter_766  it846 = ( (  into_dash_iter767 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref847 = ( (  next768 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_366_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_366_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_366_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    uint32_t  temp781;
    return (  temp781 );
}

struct SmolArrayIter_783 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_783   into_dash_iter784 (    struct SmolArray_103  self1691 ) {
    return ( (struct SmolArrayIter_783) { .f_backing = (  self1691 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr787 (    struct Array_104 *  arr1653 ,    size_t  i1656 ) {
    if ( ( (  cmp9 ( (  i1656 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1656 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1656 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1657 = ( ( (  cast_dash_ptr242 ) ( (  arr1653 ) ) ) );
    return ( (  offset_dash_ptr175 ) ( (  p1657 ) ,  ( (int64_t ) (  i1656 ) ) ) );
}

static  uint32_t   get786 (    struct Array_104 *  arr1660 ,    size_t  i1663 ) {
    return ( * ( (  get_dash_ptr787 ) ( (  arr1660 ) ,  (  i1663 ) ) ) );
}

static  struct Maybe_366   next785 (    struct SmolArrayIter_783 *  self1698 ) {
    if ( (  cmp9 ( ( ( * (  self1698 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1700 = ( (  get786 ) ( ( & ( ( ( * (  self1698 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1698 ) ) .f_cur ) ) );
    (*  self1698 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1698 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1700 ) ) );
}

static  uint32_t   reduce782 (    struct SmolArray_103  iterable840 ,    uint32_t  base842 ,    uint32_t (*  fun844 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x845 = (  base842 );
    struct SmolArrayIter_783  it846 = ( (  into_dash_iter784 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref847 = ( (  next785 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_366_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_366_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_366_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    uint32_t  temp788;
    return (  temp788 );
}

struct SmolArrayIter_790 {
    struct SmolArray_109  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_790   into_dash_iter791 (    struct SmolArray_109  self1691 ) {
    return ( (struct SmolArrayIter_790) { .f_backing = (  self1691 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr794 (    struct Array_110 *  arr1653 ,    size_t  i1656 ) {
    if ( ( (  cmp9 ( (  i1656 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1656 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1656 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1657 = ( ( (  cast_dash_ptr243 ) ( (  arr1653 ) ) ) );
    return ( (  offset_dash_ptr175 ) ( (  p1657 ) ,  ( (int64_t ) (  i1656 ) ) ) );
}

static  uint32_t   get793 (    struct Array_110 *  arr1660 ,    size_t  i1663 ) {
    return ( * ( (  get_dash_ptr794 ) ( (  arr1660 ) ,  (  i1663 ) ) ) );
}

static  struct Maybe_366   next792 (    struct SmolArrayIter_790 *  self1698 ) {
    if ( (  cmp9 ( ( ( * (  self1698 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    uint32_t  e1700 = ( (  get793 ) ( ( & ( ( ( * (  self1698 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1698 ) ) .f_cur ) ) );
    (*  self1698 ) .f_cur = (  op_dash_add98 ( ( ( * (  self1698 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_366_Just ) ( (  e1700 ) ) );
}

static  uint32_t   reduce789 (    struct SmolArray_109  iterable840 ,    uint32_t  base842 ,    uint32_t (*  fun844 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x845 = (  base842 );
    struct SmolArrayIter_790  it846 = ( (  into_dash_iter791 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref847 = ( (  next792 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_366_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_366_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_366_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    uint32_t  temp795;
    return (  temp795 );
}

static  uint32_t   reduce796 (    struct Map_349  iterable840 ,    uint32_t  base842 ,    uint32_t (*  fun844 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x845 = (  base842 );
    struct Map_349  it846 = ( (  into_dash_iter348 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_366  dref847 = ( (  next365 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_366_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_366_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_366_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    uint32_t  temp797;
    return (  temp797 );
}

static  size_t   reduce798 (    struct TakeWhile_558  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct TakeWhile_558  it846 = ( (  into_dash_iter557 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next570 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
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

static  struct Maybe_801   reduce800 (    struct TakeWhile_558  iterable840 ,    struct Maybe_801  base842 ,    struct Maybe_801 (*  fun844 )(    char  ,    struct Maybe_801  ) ) {
    struct Maybe_801  x845 = (  base842 );
    struct TakeWhile_558  it846 = ( (  into_dash_iter557 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next570 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    struct Maybe_801  temp802;
    return (  temp802 );
}

static  int32_t   reduce803 (    struct Map_352  iterable840 ,    int32_t  base842 ,    int32_t (*  fun844 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x845 = (  base842 );
    struct Map_352  it846 = ( (  into_dash_iter351 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_369  dref847 = ( (  next368 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_369_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_369_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_369_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    int32_t  temp804;
    return (  temp804 );
}

struct env806 {
    bool (*  fun873 )(    char  );
};

struct funenv806 {
    bool  (*fun) (  struct env806  ,    char  ,    bool  );
    struct env806 env;
};

static  bool   reduce805 (    struct List_3 *  iterable840 ,    bool  base842 ,   struct funenv806  fun844 ) {
    bool  x845 = (  base842 );
    struct SliceIter_330  it846 = ( (  into_dash_iter332 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next371 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            struct funenv806  temp807 = (  fun844 );
            x845 = ( temp807.fun ( temp807.env ,  ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    bool  temp808;
    return (  temp808 );
}

static  size_t   reduce809 (    struct TakeWhile_560  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct TakeWhile_560  it846 = ( (  into_dash_iter559 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next572 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp810;
    return (  temp810 );
}

struct env812 {
    bool (*  fun873 )(    struct Tuple2_475  );
};

struct funenv812 {
    bool  (*fun) (  struct env812  ,    struct Tuple2_475  ,    bool  );
    struct env812 env;
};

static  bool   reduce811 (    struct Zip_415  iterable840 ,    bool  base842 ,   struct funenv812  fun844 ) {
    bool  x845 = (  base842 );
    struct Zip_415  it846 = ( (  into_dash_iter414 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_474  dref847 = ( (  next473 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_474_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_474_Just_t ) {
            struct funenv812  temp813 = (  fun844 );
            x845 = ( temp813.fun ( temp813.env ,  ( dref847 .stuff .Maybe_474_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    bool  temp814;
    return (  temp814 );
}

static  struct Maybe_801   reduce815 (    struct TakeWhile_569  iterable840 ,    struct Maybe_801  base842 ,    struct Maybe_801 (*  fun844 )(    char  ,    struct Maybe_801  ) ) {
    struct Maybe_801  x845 = (  base842 );
    struct TakeWhile_569  it846 = ( (  into_dash_iter568 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next578 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    struct Maybe_801  temp816;
    return (  temp816 );
}

static  size_t   reduce817 (    struct IntStrIter_418  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct IntStrIter_418  it846 = ( (  into_dash_iter538 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next477 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp818;
    return (  temp818 );
}

static  size_t   reduce819 (    struct StrConcatIter_421  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_421  it846 = ( (  into_dash_iter540 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next484 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp820;
    return (  temp820 );
}

static  size_t   reduce821 (    struct StrConcatIter_428  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_428  it846 = ( (  into_dash_iter542 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next490 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp822;
    return (  temp822 );
}

static  size_t   reduce823 (    struct StrConcatIter_432  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_432  it846 = ( (  into_dash_iter544 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next498 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp824;
    return (  temp824 );
}

static  size_t   reduce825 (    struct StrConcatIter_442  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_442  it846 = ( (  into_dash_iter546 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next507 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp826;
    return (  temp826 );
}

static  size_t   reduce827 (    struct StrConcatIter_447  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_447  it846 = ( (  into_dash_iter548 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next511 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp828;
    return (  temp828 );
}

static  size_t   reduce829 (    struct StrConcatIter_444  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_444  it846 = ( (  into_dash_iter550 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next509 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp830;
    return (  temp830 );
}

static  size_t   reduce831 (    struct StrConcatIter_453  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_453  it846 = ( (  into_dash_iter552 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next520 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp832;
    return (  temp832 );
}

static  size_t   reduce833 (    struct StrConcatIter_457  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_457  it846 = ( (  into_dash_iter554 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next523 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp834;
    return (  temp834 );
}

static  size_t   reduce835 (    struct StrConcatIter_462  iterable840 ,    size_t  base842 ,    size_t (*  fun844 )(    char  ,    size_t  ) ) {
    size_t  x845 = (  base842 );
    struct StrConcatIter_462  it846 = ( (  into_dash_iter556 ) ( (  iterable840 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref847 = ( (  next527 ) ( ( & (  it846 ) ) ) );
        if ( dref847.tag == Maybe_49_None_t ) {
            return (  x845 );
        }
        else if ( dref847.tag == Maybe_49_Just_t ) {
            x845 = ( (  fun844 ) ( ( dref847 .stuff .Maybe_49_Just_s .field0 ) ,  (  x845 ) ) );
        }
    }
    size_t  temp836;
    return (  temp836 );
}

static  size_t   lam838 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count837 (    struct TakeWhile_558  it851 ) {
    return ( (  reduce798 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam838 ) ) );
}

static  size_t   lam840 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count839 (    struct TakeWhile_560  it851 ) {
    return ( (  reduce809 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam840 ) ) );
}

static  size_t   lam842 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count841 (    struct IntStrIter_418  it851 ) {
    return ( (  reduce817 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam842 ) ) );
}

static  size_t   lam844 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count843 (    struct StrConcatIter_421  it851 ) {
    return ( (  reduce819 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam844 ) ) );
}

static  size_t   lam846 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count845 (    struct StrConcatIter_428  it851 ) {
    return ( (  reduce821 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam846 ) ) );
}

static  size_t   lam848 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count847 (    struct StrConcatIter_432  it851 ) {
    return ( (  reduce823 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam848 ) ) );
}

static  size_t   lam850 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count849 (    struct StrConcatIter_442  it851 ) {
    return ( (  reduce825 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam850 ) ) );
}

static  size_t   lam852 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count851 (    struct StrConcatIter_447  it851 ) {
    return ( (  reduce827 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam852 ) ) );
}

static  size_t   lam854 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count853 (    struct StrConcatIter_444  it851 ) {
    return ( (  reduce829 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam854 ) ) );
}

static  size_t   lam856 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count855 (    struct StrConcatIter_453  it851 ) {
    return ( (  reduce831 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam856 ) ) );
}

static  size_t   lam858 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count857 (    struct StrConcatIter_457  it851 ) {
    return ( (  reduce833 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam858 ) ) );
}

static  size_t   lam860 (    char  dref852 ,    size_t  x854 ) {
    return (  op_dash_add98 ( (  x854 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count859 (    struct StrConcatIter_462  it851 ) {
    return ( (  reduce835 ) ( (  it851 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam860 ) ) );
}

static  int32_t   lam862 (    int32_t  v859 ,    int32_t  s861 ) {
    return (  op_dash_add87 ( (  v859 ) , (  s861 ) ) );
}

static  int32_t   sum861 (    struct Map_352  it857 ) {
    return ( (  reduce803 ) ( (  it857 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam862 ) ) );
}

static  bool   lam806 (   struct env806 env ,    char  e875 ,    bool  x877 ) {
    return ( ( ( env.fun873 ) ( (  e875 ) ) ) && (  x877 ) );
}

static  bool   all863 (    struct List_3 *  it871 ,    bool (*  fun873 )(    char  ) ) {
    struct env806 envinst806 = {
        .fun873 =  fun873 ,
    };
    return ( (  reduce805 ) ( (  it871 ) ,  ( true ) ,  ( (struct funenv806){ .fun = lam806, .env = envinst806 } ) ) );
}

static  bool   lam812 (   struct env812 env ,    struct Tuple2_475  e875 ,    bool  x877 ) {
    return ( ( ( env.fun873 ) ( (  e875 ) ) ) && (  x877 ) );
}

static  bool   all864 (    struct Zip_415  it871 ,    bool (*  fun873 )(    struct Tuple2_475  ) ) {
    struct env812 envinst812 = {
        .fun873 =  fun873 ,
    };
    return ( (  reduce811 ) ( (  it871 ) ,  ( true ) ,  ( (struct funenv812){ .fun = lam812, .env = envinst812 } ) ) );
}

static  struct Maybe_355   head865 (    struct List_323 *  it889 ) {
    struct SliceIter_321  temp866 = ( (  into_dash_iter320 ) ( (  it889 ) ) );
    return ( (  next389 ) ( ( &temp866 ) ) );
}

static  struct Maybe_49   head867 (    struct TakeWhile_558  it889 ) {
    struct TakeWhile_558  temp868 = ( (  into_dash_iter557 ) ( (  it889 ) ) );
    return ( (  next570 ) ( ( &temp868 ) ) );
}

static  struct Maybe_49   head869 (    struct TakeWhile_562  it889 ) {
    struct TakeWhile_562  temp870 = ( (  into_dash_iter561 ) ( (  it889 ) ) );
    return ( (  next573 ) ( ( &temp870 ) ) );
}

static  struct Maybe_49   head871 (    struct TakeWhile_569  it889 ) {
    struct TakeWhile_569  temp872 = ( (  into_dash_iter568 ) ( (  it889 ) ) );
    return ( (  next578 ) ( ( &temp872 ) ) );
}

static  bool   null873 (    struct List_323 *  it892 ) {
    struct Maybe_355  dref893 = ( (  head865 ) ( (  it892 ) ) );
    if ( dref893.tag == Maybe_355_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null874 (    struct TakeWhile_558  it892 ) {
    struct Maybe_49  dref893 = ( (  head867 ) ( (  it892 ) ) );
    if ( dref893.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null875 (    struct TakeWhile_562  it892 ) {
    struct Maybe_49  dref893 = ( (  head869 ) ( (  it892 ) ) );
    if ( dref893.tag == Maybe_49_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_49   lam640 (   struct env640 env ,    int32_t  dref930 ) {
    return ( (  next571 ) ( ( env.it927 ) ) );
}

static  enum Unit_13   drop_prime_876 (    struct Scanner_329 *  it927 ,    size_t  n929 ) {
    struct env640 envinst640 = {
        .it927 =  it927 ,
    };
    ( (  for_dash_each639 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32313 ) ( (  n929 ) ) ) ) ) ,  ( (struct funenv640){ .fun = lam640, .env = envinst640 } ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_878 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_878 Tuple2_878_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_878 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst877 (    struct Tuple2_878  dref991 ) {
    return ( dref991 .field0 );
}

static  uint32_t   snd879 (    struct Tuple2_878  dref994 ) {
    return ( dref994 .field1 );
}

static  bool   is_dash_just880 (    struct Maybe_157  m998 ) {
    struct Maybe_157  dref999 = (  m998 );
    if ( dref999.tag == Maybe_157_None_t ) {
        return ( false );
    }
    else if ( dref999.tag == Maybe_157_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just881 (    struct Maybe_356  m998 ) {
    struct Maybe_356  dref999 = (  m998 );
    if ( dref999.tag == Maybe_356_None_t ) {
        return ( false );
    }
    else if ( dref999.tag == Maybe_356_Just_t ) {
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

static  bool   is_dash_just882 (    struct Maybe_883  m998 ) {
    struct Maybe_883  dref999 = (  m998 );
    if ( dref999.tag == Maybe_883_None_t ) {
        return ( false );
    }
    else if ( dref999.tag == Maybe_883_Just_t ) {
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

static  bool   is_dash_just884 (    struct Maybe_885  m998 ) {
    struct Maybe_885  dref999 = (  m998 );
    if ( dref999.tag == Maybe_885_None_t ) {
        return ( false );
    }
    else if ( dref999.tag == Maybe_885_Just_t ) {
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

static  bool   is_dash_just886 (    struct Maybe_887  m998 ) {
    struct Maybe_887  dref999 = (  m998 );
    if ( dref999.tag == Maybe_887_None_t ) {
        return ( false );
    }
    else if ( dref999.tag == Maybe_887_Just_t ) {
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
    struct Editor_890 *  ed3360;
    ;
    ;
};

struct funenv889 {
    struct Maybe_49  (*fun) (  struct env889  ,    struct List_3  );
    struct env889 env;
};

static  struct Maybe_49   and_dash_maybe888 (    struct Maybe_355  m1002 ,   struct funenv889  fun1004 ) {
    struct Maybe_355  dref1005 = (  m1002 );
    if ( dref1005.tag == Maybe_355_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref1005.tag == Maybe_355_Just_t ) {
        struct funenv889  temp896 = (  fun1004 );
        return ( temp896.fun ( temp896.env ,  ( dref1005 .stuff .Maybe_355_Just_s .field0 ) ) );
    }
}

static  struct Maybe_157   fmap_dash_maybe897 (    struct Maybe_157  x1009 ,    struct Cursor_154 (*  fun1011 )(    struct Cursor_154  ) ) {
    struct Maybe_157  dref1012 = (  x1009 );
    if ( dref1012.tag == Maybe_157_None_t ) {
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
    else if ( dref1012.tag == Maybe_157_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (  fun1011 ) ( ( dref1012 .stuff .Maybe_157_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_52   fmap_dash_maybe898 (    struct Maybe_49  x1009 ,    enum CharType_53 (*  fun1011 )(    char  ) ) {
    struct Maybe_49  dref1012 = (  x1009 );
    if ( dref1012.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_52) { .tag = Maybe_52_None_t } );
    }
    else if ( dref1012.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_52_Just ) ( ( (  fun1011 ) ( ( dref1012 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_392   fmap_dash_maybe899 (    struct Maybe_49  x1009 ,    struct Tuple2_393 (*  fun1011 )(    char  ) ) {
    struct Maybe_49  dref1012 = (  x1009 );
    if ( dref1012.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_392) { .tag = Maybe_392_None_t } );
    }
    else if ( dref1012.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_392_Just ) ( ( (  fun1011 ) ( ( dref1012 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_901   fmap_dash_maybe900 (    struct Maybe_356  x1009 ,    size_t (*  fun1011 )(    struct DynStr_134  ) ) {
    struct Maybe_356  dref1012 = (  x1009 );
    if ( dref1012.tag == Maybe_356_None_t ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    else if ( dref1012.tag == Maybe_356_Just_t ) {
        return ( ( Maybe_901_Just ) ( ( (  fun1011 ) ( ( dref1012 .stuff .Maybe_356_Just_s .field0 ) ) ) ) );
    }
}

struct env903 {
    struct Editor_890 *  ed3058;
    ;
};

struct funenv903 {
    struct Cursor_154  (*fun) (  struct env903  ,    struct Cursor_154  );
    struct env903 env;
};

static  struct Cursor_154   maybe902 (    struct Maybe_157  x1016 ,   struct funenv903  fun1018 ,    struct Cursor_154  default1020 ) {
    struct funenv903  temp904 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp904.fun ( temp904.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env906 {
    struct Editor_890 *  ed3058;
    ;
};

struct funenv906 {
    struct Cursor_154  (*fun) (  struct env906  ,    struct Cursor_154  );
    struct env906 env;
};

static  struct Cursor_154   maybe905 (    struct Maybe_157  x1016 ,   struct funenv906  fun1018 ,    struct Cursor_154  default1020 ) {
    struct funenv906  temp907 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp907.fun ( temp907.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env909 {
    struct Editor_890 *  ed3058;
    ;
};

struct funenv909 {
    struct Cursor_154  (*fun) (  struct env909  ,    struct Cursor_154  );
    struct env909 env;
};

static  struct Cursor_154   maybe908 (    struct Maybe_157  x1016 ,   struct funenv909  fun1018 ,    struct Cursor_154  default1020 ) {
    struct funenv909  temp910 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp910.fun ( temp910.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env912 {
    struct Editor_890 *  ed3058;
    ;
};

struct funenv912 {
    struct Cursor_154  (*fun) (  struct env912  ,    struct Cursor_154  );
    struct env912 env;
};

static  struct Cursor_154   maybe911 (    struct Maybe_157  x1016 ,   struct funenv912  fun1018 ,    struct Cursor_154  default1020 ) {
    struct funenv912  temp913 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp913.fun ( temp913.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env915 {
    struct Editor_890 *  ed3162;
    ;
};

struct funenv915 {
    int32_t  (*fun) (  struct env915  ,    struct Cursor_154  );
    struct env915 env;
};

static  int32_t   maybe914 (    struct Maybe_157  x1016 ,   struct funenv915  fun1018 ,    int32_t  default1020 ) {
    struct funenv915  temp916 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp916.fun ( temp916.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env918 {
    struct Editor_890 *  ed3162;
    ;
};

struct funenv918 {
    int32_t  (*fun) (  struct env918  ,    struct Cursor_154  );
    struct env918 env;
};

static  int32_t   maybe917 (    struct Maybe_157  x1016 ,   struct funenv918  fun1018 ,    int32_t  default1020 ) {
    struct funenv918  temp919 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp919.fun ( temp919.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env921 {
    struct Editor_890 *  ed3180;
    ;
};

struct funenv921 {
    int32_t  (*fun) (  struct env921  ,    struct Cursor_154  );
    struct env921 env;
};

static  int32_t   maybe920 (    struct Maybe_157  x1016 ,   struct funenv921  fun1018 ,    int32_t  default1020 ) {
    struct funenv921  temp922 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp922.fun ( temp922.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env924 {
    ;
    struct Editor_890 *  ed3180;
};

struct funenv924 {
    int32_t  (*fun) (  struct env924  ,    struct Cursor_154  );
    struct env924 env;
};

static  int32_t   maybe923 (    struct Maybe_157  x1016 ,   struct funenv924  fun1018 ,    int32_t  default1020 ) {
    struct funenv924  temp925 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp925.fun ( temp925.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env927 {
    ;
    struct Editor_890 *  ed3141;
};

struct funenv927 {
    struct Cursor_154  (*fun) (  struct env927  ,    struct Cursor_154  );
    struct env927 env;
};

static  struct Cursor_154   maybe926 (    struct Maybe_157  x1016 ,   struct funenv927  fun1018 ,    struct Cursor_154  default1020 ) {
    struct funenv927  temp928 = (  fun1018 );
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( temp928.fun ( temp928.env ,  ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  int32_t   maybe929 (    struct Maybe_157  x1016 ,    int32_t (*  fun1018 )(    struct Cursor_154  ) ,    int32_t  default1020 ) {
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  int32_t   maybe930 (    struct Maybe_157  x1016 ,    int32_t (*  fun1018 )(    struct Cursor_154  ) ,    int32_t  default1020 ) {
    return ( {  struct Maybe_157  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_157_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_157_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env932 {
    ;
    struct Maybe_52  cur_dash_char_dash_type3395;
    ;
};

struct funenv932 {
    bool  (*fun) (  struct env932  ,    char  );
    struct env932 env;
};

static  bool   maybe931 (    struct Maybe_49  x1016 ,   struct funenv932  fun1018 ,    bool  default1020 ) {
    struct funenv932  temp933 = (  fun1018 );
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( temp933.fun ( temp933.env ,  ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  bool   maybe934 (    struct Maybe_49  x1016 ,    bool (*  fun1018 )(    char  ) ,    bool  default1020 ) {
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  bool   maybe935 (    struct Maybe_49  x1016 ,    bool (*  fun1018 )(    char  ) ,    bool  default1020 ) {
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env937 {
    ;
    struct Maybe_52  cur_dash_char_dash_type3404;
    ;
};

struct funenv937 {
    bool  (*fun) (  struct env937  ,    char  );
    struct env937 env;
};

static  bool   maybe936 (    struct Maybe_49  x1016 ,   struct funenv937  fun1018 ,    bool  default1020 ) {
    struct funenv937  temp938 = (  fun1018 );
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( temp938.fun ( temp938.env ,  ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  bool   maybe939 (    struct Maybe_49  x1016 ,    bool (*  fun1018 )(    char  ) ,    bool  default1020 ) {
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env941 {
    ;
    struct Maybe_52  cur_dash_char_dash_type3411;
    ;
};

struct funenv941 {
    bool  (*fun) (  struct env941  ,    char  );
    struct env941 env;
};

static  bool   maybe940 (    struct Maybe_49  x1016 ,   struct funenv941  fun1018 ,    bool  default1020 ) {
    struct funenv941  temp942 = (  fun1018 );
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( temp942.fun ( temp942.env ,  ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

struct env944 {
    ;
    struct Maybe_52  cur_dash_char_dash_type3411;
    ;
};

struct funenv944 {
    bool  (*fun) (  struct env944  ,    char  );
    struct env944 env;
};

static  bool   maybe943 (    struct Maybe_49  x1016 ,   struct funenv944  fun1018 ,    bool  default1020 ) {
    struct funenv944  temp945 = (  fun1018 );
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( temp945.fun ( temp945.env ,  ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  int32_t   maybe946 (    struct Maybe_49  x1016 ,    int32_t (*  fun1018 )(    char  ) ,    int32_t  default1020 ) {
    return ( {  struct Maybe_49  dref1021 = (  x1016 ) ; dref1021.tag == Maybe_49_Just_t ? ( (  fun1018 ) ( ( dref1021 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default1020 ) ; } );
}

static  int64_t   mod947 (    int64_t  l970 ,    int64_t  d972 ) {
    int64_t  r973 = (  op_dash_div85 ( (  l970 ) , (  d972 ) ) );
    int64_t  m974 = (  op_dash_sub84 ( (  l970 ) , (  op_dash_mul32 ( (  r973 ) , (  d972 ) ) ) ) );
    if ( (  cmp79 ( (  m974 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add83 ( (  d972 ) , (  m974 ) ) );
    } else {
        return (  m974 );
    }
}

static  enum Ordering_10   cmp949 (    struct Cursor_154  l2710 ,    struct Cursor_154  r2712 ) {
    enum Ordering_10  dref2713 = ( (  cmp80 ) ( ( (  l2710 ) .f_y ) ,  ( (  r2712 ) .f_y ) ) );
    switch (  dref2713 ) {
        case Ordering_10_EQ : {
            return ( (  cmp80 ) ( ( (  l2710 ) .f_x ) ,  ( (  r2712 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2714 =  dref2713;
            return (  els2714 );
            break;
        }
    }
}

static  struct Cursor_154   min948 (    struct Cursor_154  l977 ,    struct Cursor_154  r979 ) {
    if ( (  cmp949 ( (  l977 ) , (  r979 ) ) == 0 ) ) {
        return (  l977 );
    } else {
        return (  r979 );
    }
}

static  int32_t   min950 (    int32_t  l977 ,    int32_t  r979 ) {
    if ( (  cmp80 ( (  l977 ) , (  r979 ) ) == 0 ) ) {
        return (  l977 );
    } else {
        return (  r979 );
    }
}

static  int32_t   char_dash_i32953 (    char  c1314 ) {
    return ( (  cast_dash_on_dash_zeroed292 ) ( (  c1314 ) ) );
}

static  enum Ordering_10   cmp952 (    char  l1338 ,    char  r1340 ) {
    return ( (  cmp80 ) ( ( (  char_dash_i32953 ) ( (  l1338 ) ) ) ,  ( (  char_dash_i32953 ) ( (  r1340 ) ) ) ) );
}

static  char   min951 (    char  l977 ,    char  r979 ) {
    if ( (  cmp952 ( (  l977 ) , (  r979 ) ) == 0 ) ) {
        return (  l977 );
    } else {
        return (  r979 );
    }
}

static  int32_t   max954 (    int32_t  l1027 ,    int32_t  r1029 ) {
    if ( (  cmp80 ( (  l1027 ) , (  r1029 ) ) == 2 ) ) {
        return (  l1027 );
    } else {
        return (  r1029 );
    }
}

static  struct Cursor_154   max955 (    struct Cursor_154  l1027 ,    struct Cursor_154  r1029 ) {
    if ( (  cmp949 ( (  l1027 ) , (  r1029 ) ) == 2 ) ) {
        return (  l1027 );
    } else {
        return (  r1029 );
    }
}

static  char   max956 (    char  l1027 ,    char  r1029 ) {
    if ( (  cmp952 ( (  l1027 ) , (  r1029 ) ) == 2 ) ) {
        return (  l1027 );
    } else {
        return (  r1029 );
    }
}

static  bool   between957 (    char  c1044 ,    char  l1046 ,    char  r1048 ) {
    char  from1049 = ( (  min951 ) ( (  l1046 ) ,  (  r1048 ) ) );
    char  to1050 = ( (  max956 ) ( (  l1046 ) ,  (  r1048 ) ) );
    return ( (  cmp952 ( (  from1049 ) , (  c1044 ) ) != 2 ) && (  cmp952 ( (  c1044 ) , (  to1050 ) ) != 2 ) );
}

static  bool   between958 (    struct Cursor_154  c1044 ,    struct Cursor_154  l1046 ,    struct Cursor_154  r1048 ) {
    struct Cursor_154  from1049 = ( (  min948 ) ( (  l1046 ) ,  (  r1048 ) ) );
    struct Cursor_154  to1050 = ( (  max955 ) ( (  l1046 ) ,  (  r1048 ) ) );
    return ( (  cmp949 ( (  from1049 ) , (  c1044 ) ) != 2 ) && (  cmp949 ( (  c1044 ) , (  to1050 ) ) != 2 ) );
}

static  int32_t   clamp959 (    int32_t  x1059 ,    int32_t  mn1061 ,    int32_t  mx1063 ) {
    if ( (  cmp80 ( (  x1059 ) , (  mn1061 ) ) == 0 ) ) {
        return (  mn1061 );
    } else {
        if ( (  cmp80 ( (  x1059 ) , (  mx1063 ) ) == 2 ) ) {
            return (  mx1063 );
        } else {
            return (  x1059 );
        }
    }
}

static  struct ConstStrIter_350   chars960 (    const char*  self1083 ) {
    return ( (  into_dash_iter375 ) ( (  self1083 ) ) );
}

static  struct AppendIter_425   chars961 (    char  self1089 ) {
    return ( (  single596 ) ( (  self1089 ) ) );
}

static  int32_t   count_dash_digits962 (    size_t  self1104 ) {
    if ( (  eq45 ( (  self1104 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1105 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1104 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1104 = (  op_dash_div101 ( (  self1104 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1105 = (  op_dash_add87 ( (  digits1105 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1105 );
}

static  int32_t   count_dash_digits963 (    int32_t  self1104 ) {
    if ( (  eq41 ( (  self1104 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1105 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp80 ( (  self1104 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1104 = (  op_dash_div90 ( (  self1104 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1105 = (  op_dash_add87 ( (  digits1105 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1105 );
}

static  int32_t   count_dash_digits964 (    uint32_t  self1104 ) {
    if ( (  eq42 ( (  self1104 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1105 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp81 ( (  self1104 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1104 = (  op_dash_div95 ( (  self1104 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1105 = (  op_dash_add87 ( (  digits1105 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1105 );
}

static  struct IntStrIter_418   chars965 (    int32_t  self1111 ) {
    return ( (struct IntStrIter_418) { .f_int = (  self1111 ) , .f_len = ( (  count_dash_digits963 ) ( (  self1111 ) ) ) } );
}

static  enum Unit_13   print_dash_str966 (    uint32_t  self1114 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1114 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_429   chars967 (    uint32_t  self1117 ) {
    return ( (struct IntStrIter_429) { .f_int = (  self1117 ) , .f_len = ( (  count_dash_digits964 ) ( (  self1117 ) ) ) } );
}

static  enum Unit_13   print_dash_str968 (    uint8_t  self1120 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32319 ) ( (  self1120 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_448   chars969 (    size_t  self1135 ) {
    return ( (struct IntStrIter_448) { .f_int = (  self1135 ) , .f_len = ( (  count_dash_digits962 ) ( (  self1135 ) ) ) } );
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
    struct DynStr_134  field1;
};

static struct StrConcat_975 StrConcat_975_StrConcat (  const char*  field0 ,  struct DynStr_134  field1 ) {
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

static  struct DynStr_134   as_dash_str977 (    struct StrBuilder_626 *  builder2170 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice335 ) ( ( ( ( * (  builder2170 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2170 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_330   chars984 (    struct DynStr_134  self1606 ) {
    return ( (  into_dash_iter334 ) ( ( (  self1606 ) .f_contents ) ) );
}

static  struct StrConcatIter_424   into_dash_iter983 (    struct StrConcat_975  dref1166 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars984 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars982 (    struct StrConcat_975  self1177 ) {
    return ( (  into_dash_iter983 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter981 (    struct StrConcat_974  dref1166 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars982 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars980 (    struct StrConcat_974  self1177 ) {
    return ( (  into_dash_iter981 ) ( (  self1177 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter979 (    struct StrCase_973  self1190 ) {
    struct StrCase_973  dref1191 = (  self1190 );
    if ( dref1191.tag == StrCase_973_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1191 .stuff .StrCase_973_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1191.tag == StrCase_973_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars980 ) ( ( dref1191 .stuff .StrCase_973_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars978 (    struct StrCase_973  self1202 ) {
    return ( (  into_dash_iter979 ) ( (  self1202 ) ) );
}

static  struct StrCaseIter_422   chars972 (    struct Mode_892  self2736 ) {
    struct StrCase_973  temp976;
    struct StrCase_973  c2737 = (  temp976 );
    struct Mode_892  dref2738 = (  self2736 );
    if ( dref2738.tag == Mode_892_Normal_t ) {
        c2737 = ( ( StrCase_973_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2738.tag == Mode_892_Insert_t ) {
        c2737 = ( ( StrCase_973_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2738.tag == Mode_892_Select_t ) {
        c2737 = ( ( StrCase_973_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2738.tag == Mode_892_Cmd_t ) {
        struct DynStr_134  ss2740 = ( (  as_dash_str977 ) ( ( & ( dref2738 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
        c2737 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Cmd(" ) ,  (  ss2740 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2738.tag == Mode_892_SearchBox_t ) {
        struct DynStr_134  ss2742 = ( (  as_dash_str977 ) ( ( & ( dref2738 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
        c2737 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Search(" ) ,  (  ss2742 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars978 ) ( (  c2737 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter970 (    struct StrConcat_971  dref1166 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars972 ) ( ( dref1166 .field1 ) ) ) } );
}

struct StrConcat_986 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_986 StrConcat_986_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_986 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_428   into_dash_iter985 (    struct StrConcat_986  dref1166 ) {
    return ( (struct StrConcatIter_428) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars967 ) ( ( dref1166 .field1 ) ) ) } );
}

struct StrConcat_988 {
    const char*  field0;
    struct Maybe_392  field1;
};

static struct StrConcat_988 StrConcat_988_StrConcat (  const char*  field0 ,  struct Maybe_392  field1 ) {
    return ( struct StrConcat_988 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_992 {
    const char*  field0;
    struct Tuple2_393  field1;
};

static struct StrConcat_992 StrConcat_992_StrConcat (  const char*  field0 ,  struct Tuple2_393  field1 ) {
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

static  struct StrConcatIter_439   into_dash_iter1012 (    struct StrConcat_1005  dref1166 ) {
    return ( (struct StrConcatIter_439) { .f_left = ( (  chars961 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_439   chars1011 (    struct StrConcat_1005  self1177 ) {
    return ( (  into_dash_iter1012 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_438   into_dash_iter1010 (    struct StrConcat_1004  dref1166 ) {
    return ( (struct StrConcatIter_438) { .f_left = ( (  chars1011 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars960 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_438   chars1009 (    struct StrConcat_1004  self1177 ) {
    return ( (  into_dash_iter1010 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_437   into_dash_iter1008 (    struct StrConcat_1003  dref1166 ) {
    return ( (struct StrConcatIter_437) { .f_left = ( (  chars1009 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_437   chars1007 (    struct StrConcat_1003  self1177 ) {
    return ( (  into_dash_iter1008 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_436   into_dash_iter1006 (    struct StrConcat_1002  dref1166 ) {
    return ( (struct StrConcatIter_436) { .f_left = ( (  chars1007 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_436   chars1001 (    struct StrConcat_1002  self1177 ) {
    return ( (  into_dash_iter1006 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_436   chars1000 (    struct Tuple2_393  dref1227 ) {
    return ( (  chars1001 ) ( ( ( StrConcat_1002_StrConcat ) ( ( ( StrConcat_1003_StrConcat ) ( ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_1005_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1227 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1227 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_435   into_dash_iter999 (    struct StrConcat_992  dref1166 ) {
    return ( (struct StrConcatIter_435) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars1000 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_435   chars998 (    struct StrConcat_992  self1177 ) {
    return ( (  into_dash_iter999 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_434   into_dash_iter997 (    struct StrConcat_991  dref1166 ) {
    return ( (struct StrConcatIter_434) { .f_left = ( (  chars998 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_434   chars996 (    struct StrConcat_991  self1177 ) {
    return ( (  into_dash_iter997 ) ( (  self1177 ) ) );
}

static  struct StrCaseIter_433   into_dash_iter995 (    struct StrCase_990  self1190 ) {
    struct StrCase_990  dref1191 = (  self1190 );
    if ( dref1191.tag == StrCase_990_StrCase1_t ) {
        return ( ( StrCaseIter_433_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1191 .stuff .StrCase_990_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1191.tag == StrCase_990_StrCase2_t ) {
        return ( ( StrCaseIter_433_StrCaseIter2 ) ( ( (  chars996 ) ( ( dref1191 .stuff .StrCase_990_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_433   chars994 (    struct StrCase_990  self1202 ) {
    return ( (  into_dash_iter995 ) ( (  self1202 ) ) );
}

static  struct StrCaseIter_433   chars989 (    struct Maybe_392  self1216 ) {
    struct StrCase_990  temp993;
    struct StrCase_990  c1217 = (  temp993 );
    struct Maybe_392  dref1218 = (  self1216 );
    if ( dref1218.tag == Maybe_392_None_t ) {
        c1217 = ( ( StrCase_990_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1218.tag == Maybe_392_Just_t ) {
        c1217 = ( ( StrCase_990_StrCase2 ) ( ( ( StrConcat_991_StrConcat ) ( ( ( StrConcat_992_StrConcat ) ( ( "Just(" ) ,  ( dref1218 .stuff .Maybe_392_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars994 ) ( (  c1217 ) ) );
}

static  struct StrConcatIter_432   into_dash_iter987 (    struct StrConcat_988  dref1166 ) {
    return ( (struct StrConcatIter_432) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars989 ) ( ( dref1166 .field1 ) ) ) } );
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

static  struct StrConcatIter_444   into_dash_iter1020 (    struct StrConcat_1016  dref1166 ) {
    return ( (struct StrConcatIter_444) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_444   chars1019 (    struct StrConcat_1016  self1177 ) {
    return ( (  into_dash_iter1020 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_443   into_dash_iter1018 (    struct StrConcat_1015  dref1166 ) {
    return ( (struct StrConcatIter_443) { .f_left = ( (  chars1019 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_443   chars1017 (    struct StrConcat_1015  self1177 ) {
    return ( (  into_dash_iter1018 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_442   into_dash_iter1013 (    struct StrConcat_1014  dref1166 ) {
    return ( (struct StrConcatIter_442) { .f_left = ( (  chars1017 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_447   into_dash_iter1021 (    struct StrConcat_17  dref1166 ) {
    return ( (struct StrConcatIter_447) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars969 ) ( ( dref1166 .field1 ) ) ) } );
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

static  struct StrConcatIter_454   into_dash_iter1026 (    struct StrConcat_1024  dref1166 ) {
    return ( (struct StrConcatIter_454) { .f_left = ( (  chars1019 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars960 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_454   chars1025 (    struct StrConcat_1024  self1177 ) {
    return ( (  into_dash_iter1026 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_453   into_dash_iter1022 (    struct StrConcat_1023  dref1166 ) {
    return ( (struct StrConcatIter_453) { .f_left = ( (  chars1025 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars965 ) ( ( dref1166 .field1 ) ) ) } );
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

static  struct SliceIter_330   chars1040 (    struct StrBuilder_626  s2184 ) {
    return ( (  into_dash_iter333 ) ( ( (  s2184 ) .f_chars ) ) );
}

static  struct StrConcatIter_424   into_dash_iter1039 (    struct StrConcat_1032  dref1166 ) {
    return ( (struct StrConcatIter_424) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars1040 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_424   chars1038 (    struct StrConcat_1032  self1177 ) {
    return ( (  into_dash_iter1039 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_423   into_dash_iter1037 (    struct StrConcat_1031  dref1166 ) {
    return ( (struct StrConcatIter_423) { .f_left = ( (  chars1038 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_423   chars1036 (    struct StrConcat_1031  self1177 ) {
    return ( (  into_dash_iter1037 ) ( (  self1177 ) ) );
}

static  struct StrCaseIter_422   into_dash_iter1035 (    struct StrCase_1030  self1190 ) {
    struct StrCase_1030  dref1191 = (  self1190 );
    if ( dref1191.tag == StrCase_1030_StrCase1_t ) {
        return ( ( StrCaseIter_422_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1191 .stuff .StrCase_1030_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1191.tag == StrCase_1030_StrCase2_t ) {
        return ( ( StrCaseIter_422_StrCaseIter2 ) ( ( (  chars1036 ) ( ( dref1191 .stuff .StrCase_1030_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_422   chars1034 (    struct StrCase_1030  self1202 ) {
    return ( (  into_dash_iter1035 ) ( (  self1202 ) ) );
}

static  struct StrCaseIter_422   chars1029 (    struct Maybe_885  self1216 ) {
    struct StrCase_1030  temp1033;
    struct StrCase_1030  c1217 = (  temp1033 );
    struct Maybe_885  dref1218 = (  self1216 );
    if ( dref1218.tag == Maybe_885_None_t ) {
        c1217 = ( ( StrCase_1030_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1218.tag == Maybe_885_Just_t ) {
        c1217 = ( ( StrCase_1030_StrCase2 ) ( ( ( StrConcat_1031_StrConcat ) ( ( ( StrConcat_1032_StrConcat ) ( ( "Just(" ) ,  ( dref1218 .stuff .Maybe_885_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1034 ) ( (  c1217 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1027 (    struct StrConcat_1028  dref1166 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars1029 ) ( ( dref1166 .field1 ) ) ) } );
}

struct StrConcat_1042 {
    const char*  field0;
    struct Maybe_356  field1;
};

static struct StrConcat_1042 StrConcat_1042_StrConcat (  const char*  field0 ,  struct Maybe_356  field1 ) {
    return ( struct StrConcat_1042 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_422   chars1043 (    struct Maybe_356  self1216 ) {
    struct StrCase_973  temp1044;
    struct StrCase_973  c1217 = (  temp1044 );
    struct Maybe_356  dref1218 = (  self1216 );
    if ( dref1218.tag == Maybe_356_None_t ) {
        c1217 = ( ( StrCase_973_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1218.tag == Maybe_356_Just_t ) {
        c1217 = ( ( StrCase_973_StrCase2 ) ( ( ( StrConcat_974_StrConcat ) ( ( ( StrConcat_975_StrConcat ) ( ( "Just(" ) ,  ( dref1218 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars978 ) ( (  c1217 ) ) );
}

static  struct StrConcatIter_421   into_dash_iter1041 (    struct StrConcat_1042  dref1166 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars1043 ) ( ( dref1166 .field1 ) ) ) } );
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

static  struct StrConcatIter_447   chars1055 (    struct StrConcat_17  self1177 ) {
    return ( (  into_dash_iter1021 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_459   into_dash_iter1054 (    struct StrConcat_1049  dref1166 ) {
    return ( (struct StrConcatIter_459) { .f_left = ( (  chars1055 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars961 ) ( ( dref1166 .field1 ) ) ) } );
}

static  struct StrConcatIter_459   chars1053 (    struct StrConcat_1049  self1177 ) {
    return ( (  into_dash_iter1054 ) ( (  self1177 ) ) );
}

static  struct StrCaseIter_458   into_dash_iter1052 (    struct StrCase_1048  self1190 ) {
    struct StrCase_1048  dref1191 = (  self1190 );
    if ( dref1191.tag == StrCase_1048_StrCase1_t ) {
        return ( ( StrCaseIter_458_StrCaseIter1 ) ( ( (  chars960 ) ( ( dref1191 .stuff .StrCase_1048_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1191.tag == StrCase_1048_StrCase2_t ) {
        return ( ( StrCaseIter_458_StrCaseIter2 ) ( ( (  chars1053 ) ( ( dref1191 .stuff .StrCase_1048_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_458   chars1051 (    struct StrCase_1048  self1202 ) {
    return ( (  into_dash_iter1052 ) ( (  self1202 ) ) );
}

static  struct StrCaseIter_458   chars1047 (    struct Maybe_901  self1216 ) {
    struct StrCase_1048  temp1050;
    struct StrCase_1048  c1217 = (  temp1050 );
    struct Maybe_901  dref1218 = (  self1216 );
    if ( dref1218.tag == Maybe_901_None_t ) {
        c1217 = ( ( StrCase_1048_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1218.tag == Maybe_901_Just_t ) {
        c1217 = ( ( StrCase_1048_StrCase2 ) ( ( ( StrConcat_1049_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1218 .stuff .Maybe_901_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars1051 ) ( (  c1217 ) ) );
}

static  struct StrConcatIter_457   into_dash_iter1045 (    struct StrConcat_1046  dref1166 ) {
    return ( (struct StrConcatIter_457) { .f_left = ( (  chars960 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars1047 ) ( ( dref1166 .field1 ) ) ) } );
}

struct StrConcat_1057 {
    struct StrConcat_1049  field0;
    size_t  field1;
};

static struct StrConcat_1057 StrConcat_1057_StrConcat (  struct StrConcat_1049  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_1057 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_462   into_dash_iter1056 (    struct StrConcat_1057  dref1166 ) {
    return ( (struct StrConcatIter_462) { .f_left = ( (  chars1053 ) ( ( dref1166 .field0 ) ) ) , .f_right = ( (  chars969 ) ( ( dref1166 .field1 ) ) ) } );
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

static  enum Unit_13   print_dash_str1061 (    struct StrConcat_1060  self1171 ) {
    struct StrConcat_1060  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1058 (    struct StrConcat_1059  self1171 ) {
    struct StrConcat_1059  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1061 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1065 (    struct StrConcat_1064  self1171 ) {
    struct StrConcat_1064  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1058 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1062 (    struct StrConcat_1063  self1171 ) {
    struct StrConcat_1063  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1065 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1067 (    struct StrConcat_1005  self1171 ) {
    struct StrConcat_1005  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1066 (    struct StrConcat_1004  self1171 ) {
    struct StrConcat_1004  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1067 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1071 (    struct StrConcat_1070  self1171 ) {
    struct StrConcat_1070  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1066 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1068 (    struct StrConcat_1069  self1171 ) {
    struct StrConcat_1069  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1071 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1072 (    struct StrConcat_1073  self1171 ) {
    struct StrConcat_1073  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1077 (    struct StrConcat_1076  self1171 ) {
    struct StrConcat_1076  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1072 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1074 (    struct StrConcat_1075  self1171 ) {
    struct StrConcat_1075  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1077 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1081 (    struct DynStr_134  self1603 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1603 ) .f_contents ) .f_count ) ,  ( ( (  self1603 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1080 (    struct StrConcat_975  self1171 ) {
    struct StrConcat_975  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1081 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1079 (    struct Mode_892  self2728 ) {
    struct Mode_892  dref2729 = (  self2728 );
    if ( dref2729.tag == Mode_892_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2729.tag == Mode_892_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2729.tag == Mode_892_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2729.tag == Mode_892_Cmd_t ) {
        struct DynStr_134  ss2731 = ( (  as_dash_str977 ) ( ( & ( dref2729 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str1080 ) ( ( ( StrConcat_975_StrConcat ) ( ( "Cmd " ) ,  (  ss2731 ) ) ) ) );
    }
    else if ( dref2729.tag == Mode_892_SearchBox_t ) {
        struct DynStr_134  ss2733 = ( (  as_dash_str977 ) ( ( & ( dref2729 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str1080 ) ( ( ( StrConcat_975_StrConcat ) ( ( "Search " ) ,  (  ss2733 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1078 (    struct StrConcat_971  self1171 ) {
    struct StrConcat_971  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1079 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1085 (    struct StrConcat_1084  self1171 ) {
    struct StrConcat_1084  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1078 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1082 (    struct StrConcat_1083  self1171 ) {
    struct StrConcat_1083  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1085 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1089 (    struct StrConcat_1088  self1171 ) {
    struct StrConcat_1088  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str1061 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1086 (    struct StrConcat_1087  self1171 ) {
    struct StrConcat_1087  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1089 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1096 (    struct StrConcat_986  self1171 ) {
    struct StrConcat_986  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str966 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1095 (    struct StrConcat_1093  self1171 ) {
    struct StrConcat_1093  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1096 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1094 (    struct StrConcat_1092  self1171 ) {
    struct StrConcat_1092  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1095 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str966 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1090 (    struct StrConcat_1091  self1171 ) {
    struct StrConcat_1091  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1094 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1100 (    struct StrConcat_1099  self1171 ) {
    struct StrConcat_1099  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1097 (    struct StrConcat_1098  self1171 ) {
    struct StrConcat_1098  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1100 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
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

static  enum Unit_13   print_dash_str1108 (    struct StrConcat_1105  self1171 ) {
    struct StrConcat_1105  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1097 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1107 (    struct StrConcat_1104  self1171 ) {
    struct StrConcat_1104  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1108 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1106 (    struct StrConcat_1103  self1171 ) {
    struct StrConcat_1103  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1107 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str968 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str1101 (    struct StrConcat_1102  self1171 ) {
    struct StrConcat_1102  dref1172 = (  self1171 );
    if ( true ) {
        ( (  print_dash_str1106 ) ( ( dref1172 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1172 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_421   chars1109 (    struct StrConcat_971  self1177 ) {
    return ( (  into_dash_iter970 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_428   chars1110 (    struct StrConcat_986  self1177 ) {
    return ( (  into_dash_iter985 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_432   chars1111 (    struct StrConcat_988  self1177 ) {
    return ( (  into_dash_iter987 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_442   chars1112 (    struct StrConcat_1014  self1177 ) {
    return ( (  into_dash_iter1013 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_453   chars1113 (    struct StrConcat_1023  self1177 ) {
    return ( (  into_dash_iter1022 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_421   chars1114 (    struct StrConcat_1028  self1177 ) {
    return ( (  into_dash_iter1027 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_421   chars1115 (    struct StrConcat_1042  self1177 ) {
    return ( (  into_dash_iter1041 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_457   chars1116 (    struct StrConcat_1046  self1177 ) {
    return ( (  into_dash_iter1045 ) ( (  self1177 ) ) );
}

static  struct StrConcatIter_462   chars1117 (    struct StrConcat_1057  self1177 ) {
    return ( (  into_dash_iter1056 ) ( (  self1177 ) ) );
}

static  struct TakeWhile_558   chars1118 (    struct TakeWhile_558  self1287 ) {
    return (  self1287 );
}

static  struct TakeWhile_562   chars1119 (    struct TakeWhile_562  self1287 ) {
    return (  self1287 );
}

static  struct TakeWhile_567   chars1120 (    struct TakeWhile_567  self1287 ) {
    return (  self1287 );
}

static  struct TakeWhile_569   chars1121 (    struct TakeWhile_569  self1287 ) {
    return (  self1287 );
}

static  struct TakeWhile_580   chars1122 (    struct TakeWhile_580  self1287 ) {
    return (  self1287 );
}

static  bool   eq1123 (    struct TakeWhile_569  l1297 ,    char  r1299 ) {
    struct TakeWhile_569  temp1124 = ( (  chars1121 ) ( (  l1297 ) ) );
    struct TakeWhile_569 *  l1300 = ( &temp1124 );
    struct AppendIter_425  temp1125 = ( (  chars961 ) ( (  r1299 ) ) );
    struct AppendIter_425 *  r1301 = ( &temp1125 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1302 = ( (  next578 ) ( (  l1300 ) ) );
        struct Maybe_49  mrc1303 = ( (  next488 ) ( (  r1301 ) ) );
        struct Tuple2_50  dref1304 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1302 ) ,  (  mrc1303 ) ) );
        if ( dref1304 .field0.tag == Maybe_49_None_t && dref1304 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1304 .field0.tag == Maybe_49_Just_t && dref1304 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1304 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1304 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1126 (    struct TakeWhile_569  l1297 ,    const char*  r1299 ) {
    struct TakeWhile_569  temp1127 = ( (  chars1121 ) ( (  l1297 ) ) );
    struct TakeWhile_569 *  l1300 = ( &temp1127 );
    struct ConstStrIter_350  temp1128 = ( (  chars960 ) ( (  r1299 ) ) );
    struct ConstStrIter_350 *  r1301 = ( &temp1128 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1302 = ( (  next578 ) ( (  l1300 ) ) );
        struct Maybe_49  mrc1303 = ( (  next367 ) ( (  r1301 ) ) );
        struct Tuple2_50  dref1304 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1302 ) ,  (  mrc1303 ) ) );
        if ( dref1304 .field0.tag == Maybe_49_None_t && dref1304 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1304 .field0.tag == Maybe_49_Just_t && dref1304 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1304 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1304 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq1129 (    struct TakeWhile_580  l1297 ,    const char*  r1299 ) {
    struct TakeWhile_580  temp1130 = ( (  chars1122 ) ( (  l1297 ) ) );
    struct TakeWhile_580 *  l1300 = ( &temp1130 );
    struct ConstStrIter_350  temp1131 = ( (  chars960 ) ( (  r1299 ) ) );
    struct ConstStrIter_350 *  r1301 = ( &temp1131 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1302 = ( (  next579 ) ( (  l1300 ) ) );
        struct Maybe_49  mrc1303 = ( (  next367 ) ( (  r1301 ) ) );
        struct Tuple2_50  dref1304 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1302 ) ,  (  mrc1303 ) ) );
        if ( dref1304 .field0.tag == Maybe_49_None_t && dref1304 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1304 .field0.tag == Maybe_49_Just_t && dref1304 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1304 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1304 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  uint8_t   char_dash_u81132 (    char  c1317 ) {
    return ( (  cast221 ) ( (  c1317 ) ) );
}

static  char   i32_dash_char1133 (    int32_t  i1320 ) {
    return ( (  cast224 ) ( (  i1320 ) ) );
}

static  bool   eq1134 (    const char*  l1333 ,    const char*  r1335 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1333 ) ,  (  r1335 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
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

static  enum Unit_13   panic1137 (    const char*  errmsg1348 ) {
    ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1138 (    struct StrConcat_1059  errmsg1348 ) {
    ( (  print_dash_str1062 ) ( ( ( StrConcat_1063_StrConcat ) ( ( ( StrConcat_1064_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1139 (    struct StrConcat_1004  errmsg1348 ) {
    ( (  print_dash_str1068 ) ( ( ( StrConcat_1069_StrConcat ) ( ( ( StrConcat_1070_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1140 (    struct StrConcat_1073  errmsg1348 ) {
    ( (  print_dash_str1074 ) ( ( ( StrConcat_1075_StrConcat ) ( ( ( StrConcat_1076_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1141 (    struct StrConcat_971  errmsg1348 ) {
    ( (  print_dash_str1082 ) ( ( ( StrConcat_1083_StrConcat ) ( ( ( StrConcat_1084_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic1142 (    struct StrConcat_1060  errmsg1348 ) {
    ( (  print_dash_str1086 ) ( ( ( StrConcat_1087_StrConcat ) ( ( ( StrConcat_1088_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1348 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   panic_prime_1143 (    const char*  errmsg1351 ) {
    ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1351 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   assert1144 (    bool  cond1354 ,    const char*  msg1356 ) {
    if ( ( ! (  cond1354 ) ) ) {
        ( (  print_dash_str1058 ) ( ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1356 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail1145 (    struct Maybe_308  x1361 ,    struct StrConcat_14  errmsg1363 ) {
    struct Maybe_308  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_308_None_t ) {
        ( (  panic12 ) ( (  errmsg1363 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_308_Just_t ) {
        return ( dref1364 .stuff .Maybe_308_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1146 (    struct Maybe_356  x1361 ,    struct StrConcat_1059  errmsg1363 ) {
    struct Maybe_356  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_356_None_t ) {
        ( (  panic1138 ) ( (  errmsg1363 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_356_Just_t ) {
        return ( dref1364 .stuff .Maybe_356_Just_s .field0 );
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

static  struct Cell_58   or_dash_fail1147 (    struct Maybe_1148  x1361 ,    struct StrConcat_14  errmsg1363 ) {
    struct Maybe_1148  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_1148_None_t ) {
        ( (  panic12 ) ( (  errmsg1363 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_1148_Just_t ) {
        return ( dref1364 .stuff .Maybe_1148_Just_s .field0 );
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

static  uint8_t   or_dash_fail1149 (    struct Maybe_1150  x1361 ,    struct StrConcat_1004  errmsg1363 ) {
    struct Maybe_1150  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_1150_None_t ) {
        ( (  panic1139 ) ( (  errmsg1363 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_1150_Just_t ) {
        return ( dref1364 .stuff .Maybe_1150_Just_s .field0 );
    }
}

static  struct Action_152   or_dash_fail1151 (    struct Maybe_466  x1361 ,    struct StrConcat_14  errmsg1363 ) {
    struct Maybe_466  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_466_None_t ) {
        ( (  panic12 ) ( (  errmsg1363 ) ) );
        return ( (  undefined151 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_466_Just_t ) {
        return ( dref1364 .stuff .Maybe_466_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1152 (    struct Maybe_356  x1361 ,    const char*  errmsg1363 ) {
    struct Maybe_356  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_356_None_t ) {
        ( (  panic1137 ) ( (  errmsg1363 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_356_Just_t ) {
        return ( dref1364 .stuff .Maybe_356_Just_s .field0 );
    }
}

static  struct List_160   or_dash_fail1153 (    struct Maybe_883  x1361 ,    const char*  errmsg1363 ) {
    struct Maybe_883  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_883_None_t ) {
        ( (  panic1137 ) ( (  errmsg1363 ) ) );
        return ( (  undefined159 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_883_Just_t ) {
        return ( dref1364 .stuff .Maybe_883_Just_s .field0 );
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

static  struct Cell_58 *   or_dash_fail1154 (    struct Maybe_1155  x1361 ,    const char*  errmsg1363 ) {
    struct Maybe_1155  dref1364 = (  x1361 );
    if ( dref1364.tag == Maybe_1155_None_t ) {
        ( (  panic1137 ) ( (  errmsg1363 ) ) );
        return ( (  undefined167 ) ( ) );
    }
    else if ( dref1364.tag == Maybe_1155_Just_t ) {
        return ( dref1364 .stuff .Maybe_1155_Just_s .field0 );
    }
}

static  struct Cursor_154   or_dash_else1156 (    struct Maybe_157  self1368 ,    struct Cursor_154  alt1370 ) {
    struct Maybe_157  dref1371 = (  self1368 );
    if ( dref1371.tag == Maybe_157_None_t ) {
        return (  alt1370 );
    }
    else if ( dref1371.tag == Maybe_157_Just_t ) {
        return ( dref1371 .stuff .Maybe_157_Just_s .field0 );
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

static  struct List_3 *   get_dash_ptr1161 (    struct Slice_322  slice1394 ,    size_t  i1396 ) {
    if ( ( (  cmp9 ( (  i1396 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1396 ) , ( (  slice1394 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1396 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1394 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1397 = ( (  offset_dash_ptr171 ) ( ( (  slice1394 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1396 ) ) ) ) );
    return (  elem_dash_ptr1397 );
}

static  struct Cell_58 *   get_dash_ptr1162 (    struct Slice_632  slice1394 ,    size_t  i1396 ) {
    if ( ( (  cmp9 ( (  i1396 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1396 ) , ( (  slice1394 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1396 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1394 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_58 *  elem_dash_ptr1397 = ( (  offset_dash_ptr177 ) ( ( (  slice1394 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1396 ) ) ) ) );
    return (  elem_dash_ptr1397 );
}

static  struct Either_182 *   get_dash_ptr1163 (    struct Slice_413  slice1394 ,    size_t  i1396 ) {
    if ( ( (  cmp9 ( (  i1396 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1396 ) , ( (  slice1394 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1396 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1394 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Either_182 *  elem_dash_ptr1397 = ( (  offset_dash_ptr181 ) ( ( (  slice1394 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1396 ) ) ) ) );
    return (  elem_dash_ptr1397 );
}

static  struct Action_152 *   get_dash_ptr1164 (    struct Slice_161  slice1394 ,    size_t  i1396 ) {
    if ( ( (  cmp9 ( (  i1396 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1396 ) , ( (  slice1394 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1396 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1394 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Action_152 *  elem_dash_ptr1397 = ( (  offset_dash_ptr179 ) ( ( (  slice1394 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1396 ) ) ) ) );
    return (  elem_dash_ptr1397 );
}

struct Slice_1166 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_308   try_dash_get1165 (    struct Slice_1166  slice1400 ,    size_t  i1402 ) {
    if ( ( (  cmp9 ( (  i1402 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1402 ) , ( (  slice1400 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    const char* *  elem_dash_ptr1403 = ( (  offset_dash_ptr169 ) ( ( (  slice1400 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1402 ) ) ) ) );
    return ( ( Maybe_308_Just ) ( ( * (  elem_dash_ptr1403 ) ) ) );
}

static  struct Maybe_1148   try_dash_get1167 (    struct Slice_632  slice1400 ,    size_t  i1402 ) {
    if ( ( (  cmp9 ( (  i1402 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1402 ) , ( (  slice1400 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1148) { .tag = Maybe_1148_None_t } );
    }
    struct Cell_58 *  elem_dash_ptr1403 = ( (  offset_dash_ptr177 ) ( ( (  slice1400 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1402 ) ) ) ) );
    return ( ( Maybe_1148_Just ) ( ( * (  elem_dash_ptr1403 ) ) ) );
}

static  struct Maybe_466   try_dash_get1168 (    struct Slice_161  slice1400 ,    size_t  i1402 ) {
    if ( ( (  cmp9 ( (  i1402 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1402 ) , ( (  slice1400 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    struct Action_152 *  elem_dash_ptr1403 = ( (  offset_dash_ptr179 ) ( ( (  slice1400 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1402 ) ) ) ) );
    return ( ( Maybe_466_Just ) ( ( * (  elem_dash_ptr1403 ) ) ) );
}

static  const char*   get1169 (    struct Slice_1166  slice1406 ,    size_t  i1408 ) {
    return ( (  or_dash_fail1145 ) ( ( (  try_dash_get1165 ) ( (  slice1406 ) ,  (  i1408 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1408 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1406 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_58   get1170 (    struct Slice_632  slice1406 ,    size_t  i1408 ) {
    return ( (  or_dash_fail1147 ) ( ( (  try_dash_get1167 ) ( (  slice1406 ) ,  (  i1408 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1408 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1406 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Action_152   get1171 (    struct Slice_161  slice1406 ,    size_t  i1408 ) {
    return ( (  or_dash_fail1151 ) ( ( (  try_dash_get1168 ) ( (  slice1406 ) ,  (  i1408 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1408 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1406 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1172 (    struct Slice_322  slice1411 ,    size_t  i1413 ,    struct List_3  x1415 ) {
    struct List_3 *  ep1416 = ( (  get_dash_ptr1161 ) ( (  slice1411 ) ,  (  i1413 ) ) );
    (*  ep1416 ) = (  x1415 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1173 (    struct Slice_5  slice1411 ,    size_t  i1413 ,    char  x1415 ) {
    char *  ep1416 = ( (  get_dash_ptr30 ) ( (  slice1411 ) ,  (  i1413 ) ) );
    (*  ep1416 ) = (  x1415 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1174 (    struct Slice_632  slice1411 ,    size_t  i1413 ,    struct Cell_58  x1415 ) {
    struct Cell_58 *  ep1416 = ( (  get_dash_ptr1162 ) ( (  slice1411 ) ,  (  i1413 ) ) );
    (*  ep1416 ) = (  x1415 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1175 (    struct Slice_161  slice1411 ,    size_t  i1413 ,    struct Action_152  x1415 ) {
    struct Action_152 *  ep1416 = ( (  get_dash_ptr1164 ) ( (  slice1411 ) ,  (  i1413 ) ) );
    (*  ep1416 ) = (  x1415 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1176 (    struct Slice_413  slice1411 ,    size_t  i1413 ,    struct Either_182  x1415 ) {
    struct Either_182 *  ep1416 = ( (  get_dash_ptr1163 ) ( (  slice1411 ) ,  (  i1413 ) ) );
    (*  ep1416 ) = (  x1415 );
    return ( Unit_13_Unit );
}

static  struct Slice_413   subslice1177 (    struct Slice_413  slice1419 ,    size_t  from1421 ,    size_t  to1423 ) {
    struct Either_182 *  begin_dash_ptr1424 = ( (  offset_dash_ptr181 ) ( ( (  slice1419 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1421 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1421 ) , (  to1423 ) ) != 0 ) || (  cmp9 ( (  from1421 ) , ( (  slice1419 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_413) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1425 = (  op_dash_sub99 ( ( (  min327 ) ( (  to1423 ) ,  ( (  slice1419 ) .f_count ) ) ) , (  from1421 ) ) );
    return ( (struct Slice_413) { .f_ptr = (  begin_dash_ptr1424 ) , .f_count = (  count1425 ) } );
}

static  struct Slice_5   from1178 (    struct Slice_5  slice1428 ,    size_t  from1430 ) {
    return ( (  subslice335 ) ( (  slice1428 ) ,  (  from1430 ) ,  ( (  slice1428 ) .f_count ) ) );
}

static  struct Slice_413   from1179 (    struct Slice_413  slice1428 ,    size_t  from1430 ) {
    return ( (  subslice1177 ) ( (  slice1428 ) ,  (  from1430 ) ,  ( (  slice1428 ) .f_count ) ) );
}

static  struct Slice_322   from1180 (    struct Slice_322  slice1428 ,    size_t  from1430 ) {
    return ( (  subslice326 ) ( (  slice1428 ) ,  (  from1430 ) ,  ( (  slice1428 ) .f_count ) ) );
}

static  struct SliceAddressIter_692   addresses1181 (    struct Slice_322  slice1477 ) {
    return ( (struct SliceAddressIter_692) { .f_slice = (  slice1477 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam652 (   struct env652 env ,    struct Tuple2_387  dref1491 ) {
    return ( (  set1172 ) ( ( env.dest1490 ) ,  ( (  i32_dash_size311 ) ( ( dref1491 .field1 ) ) ) ,  ( dref1491 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1182 (    struct Slice_322  src1488 ,    struct Slice_322  dest1490 ) {
    if ( (  cmp9 ( ( (  src1488 ) .f_count ) , ( (  dest1490 ) .f_count ) ) == 2 ) ) {
        ( (  panic1140 ) ( ( ( StrConcat_1073_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1488 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1490 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env652 envinst652 = {
        .dest1490 =  dest1490 ,
    };
    ( (  for_dash_each651 ) ( ( (  zip528 ) ( (  src1488 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv652){ .fun = lam652, .env = envinst652 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam660 (   struct env660 env ,    struct Tuple2_393  dref1491 ) {
    return ( (  set1173 ) ( ( env.dest1490 ) ,  ( (  i32_dash_size311 ) ( ( dref1491 .field1 ) ) ) ,  ( dref1491 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1183 (    struct Slice_5  src1488 ,    struct Slice_5  dest1490 ) {
    if ( (  cmp9 ( ( (  src1488 ) .f_count ) , ( (  dest1490 ) .f_count ) ) == 2 ) ) {
        ( (  panic1140 ) ( ( ( StrConcat_1073_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1488 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1490 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env660 envinst660 = {
        .dest1490 =  dest1490 ,
    };
    ( (  for_dash_each659 ) ( ( (  zip529 ) ( (  src1488 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv660){ .fun = lam660, .env = envinst660 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1185 (    struct Tuple2_475  dref1499 ) {
    return (  eq47 ( ( dref1499 .field0 ) , ( dref1499 .field1 ) ) );
}

static  bool   eq1184 (    struct Slice_5  l1496 ,    struct Slice_5  r1498 ) {
    if ( ( !  eq45 ( ( (  l1496 ) .f_count ) , ( (  r1498 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all864 ) ( ( (  zip536 ) ( (  l1496 ) ,  (  r1498 ) ) ) ,  (  lam1185 ) ) );
}

static  const char*   elem_dash_get1186 (    struct Slice_1166  self1504 ,    size_t  idx1506 ) {
    return ( (  get1169 ) ( (  self1504 ) ,  (  idx1506 ) ) );
}

static  struct Cell_58   elem_dash_get1187 (    struct Slice_632  self1504 ,    size_t  idx1506 ) {
    return ( (  get1170 ) ( (  self1504 ) ,  (  idx1506 ) ) );
}

static  char   elem_dash_get1188 (    struct Slice_5  self1504 ,    size_t  idx1506 ) {
    return ( (  get358 ) ( (  self1504 ) ,  (  idx1506 ) ) );
}

static  struct Action_152   elem_dash_get1189 (    struct Slice_161  self1504 ,    size_t  idx1506 ) {
    return ( (  get1171 ) ( (  self1504 ) ,  (  idx1506 ) ) );
}

struct SliceReversedIter_1191 {
    struct Slice_161  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceReversedIter_1191   reversed1190 (    struct Slice_161  slice1532 ) {
    return ( (struct SliceReversedIter_1191) { .f_slice = (  slice1532 ) , .f_current_dash_offset = ( (  slice1532 ) .f_count ) } );
}

static  struct SliceReversedIter_1191   into_dash_iter1192 (    struct SliceReversedIter_1191  self1535 ) {
    return (  self1535 );
}

static  struct Maybe_466   next1193 (    struct SliceReversedIter_1191 *  self1538 ) {
    size_t  off1539 = ( ( * (  self1538 ) ) .f_current_dash_offset );
    if ( (  eq45 ( (  off1539 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_466) { .tag = Maybe_466_None_t } );
    }
    (*  self1538 ) .f_current_dash_offset = (  op_dash_sub99 ( (  off1539 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_466_Just ) ( (  elem_dash_get1189 ( ( ( * (  self1538 ) ) .f_slice ) , ( ( * (  self1538 ) ) .f_current_dash_offset ) ) ) ) );
}

static  enum Unit_13   lam631 (   struct env631 env ,    int32_t  i1546 ) {
    return ( (  set1174 ) ( ( env.s1542 ) ,  ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ,  ( ( env.fun1544 ) ( (  elem_dash_get1187 ( ( env.s1542 ) , ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1194 (    struct Slice_632  s1542 ,    struct Cell_58 (*  fun1544 )(    struct Cell_58  ) ) {
    struct env631 envinst631 = {
        .fun1544 =  fun1544 ,
        .s1542 =  s1542 ,
    };
    ( (  for_dash_each630 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1542 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv631){ .fun = lam631, .env = envinst631 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam636 (   struct env636 env ,    int32_t  i1546 ) {
    return ( (  set1174 ) ( ( env.s1542 ) ,  ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ,  ( ( env.fun1544 ) ( (  elem_dash_get1187 ( ( env.s1542 ) , ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1195 (    struct Slice_632  s1542 ,    struct Cell_58 (*  fun1544 )(    struct Cell_58  ) ) {
    struct env636 envinst636 = {
        .fun1544 =  fun1544 ,
        .s1542 =  s1542 ,
    };
    ( (  for_dash_each635 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1542 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv636){ .fun = lam636, .env = envinst636 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam711 (   struct env711 env ,    int32_t  i1546 ) {
    return ( (  set1174 ) ( ( env.s1542 ) ,  ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ,  ( ( env.fun1544 ) ( (  elem_dash_get1187 ( ( env.s1542 ) , ( (  i32_dash_size311 ) ( (  i1546 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1196 (    struct Slice_632  s1542 ,    struct Cell_58 (*  fun1544 )(    struct Cell_58  ) ) {
    struct env711 envinst711 = {
        .fun1544 =  fun1544 ,
        .s1542 =  s1542 ,
    };
    ( (  for_dash_each710 ) ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( (  op_dash_sub99 ( ( (  s1542 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv711){ .fun = lam711, .env = envinst711 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_901   find_dash_slice1197 (    struct Slice_5  haystack1549 ,    struct Slice_5  needle1551 ) {
    struct RangeIter_403  temp1198 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1549 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1551 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1199 =  next404 (&temp1198);
        if (  __cond1199 .tag == 0 ) {
            break;
        }
        int32_t  i1553 =  __cond1199 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1184 ( ( (  subslice335 ) ( (  haystack1549 ) ,  ( (  i32_dash_size311 ) ( (  i1553 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1553 ) ) ) , ( (  needle1551 ) .f_count ) ) ) ) ) , (  needle1551 ) ) ) ) {
            return ( ( Maybe_901_Just ) ( ( (  i32_dash_size311 ) ( (  i1553 ) ) ) ) );
        }
    }
    return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
}

static  struct Maybe_901   find_dash_last_dash_occurence_dash_of_dash_slice1200 (    struct Slice_5  haystack1556 ,    struct Slice_5  needle1558 ) {
    struct Maybe_901  occ1559 = ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    struct RangeIter_403  temp1201 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  haystack1556 ) .f_count ) ) ) , ( (  size_dash_i32313 ) ( ( (  needle1558 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1202 =  next404 (&temp1201);
        if (  __cond1202 .tag == 0 ) {
            break;
        }
        int32_t  i1561 =  __cond1202 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq1184 ( ( (  subslice335 ) ( (  haystack1556 ) ,  ( (  i32_dash_size311 ) ( (  i1561 ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  i1561 ) ) ) , ( (  needle1558 ) .f_count ) ) ) ) ) , (  needle1558 ) ) ) ) {
            occ1559 = ( ( Maybe_901_Just ) ( ( (  i32_dash_size311 ) ( (  i1561 ) ) ) ) );
        }
    }
    return (  occ1559 );
}

static  enum CAllocator_4   idc1203 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_322   allocate1204 (    enum CAllocator_4  dref1573 ,    size_t  count1575 ) {
    if (!(  dref1573 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1576 = ( ( ( (  get_dash_typesize184 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1577 = ( (  cast_dash_ptr231 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1576 ) , (  count1575 ) ) ) ) ) ) );
    return ( (struct Slice_322) { .f_ptr = (  ptr1577 ) , .f_count = (  count1575 ) } );
}

static  struct Slice_5   allocate1205 (    enum CAllocator_4  dref1573 ,    size_t  count1575 ) {
    if (!(  dref1573 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1576 = ( ( ( (  get_dash_typesize187 ) ( ) ) ) .f_size );
    char *  ptr1577 = ( (  cast_dash_ptr234 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1576 ) , (  count1575 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1577 ) , .f_count = (  count1575 ) } );
}

static  struct Slice_632   allocate1206 (    enum CAllocator_4  dref1573 ,    size_t  count1575 ) {
    if (!(  dref1573 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1576 = ( ( ( (  get_dash_typesize190 ) ( ) ) ) .f_size );
    struct Cell_58 *  ptr1577 = ( (  cast_dash_ptr246 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1576 ) , (  count1575 ) ) ) ) ) ) );
    return ( (struct Slice_632) { .f_ptr = (  ptr1577 ) , .f_count = (  count1575 ) } );
}

static  struct Slice_161   allocate1207 (    enum CAllocator_4  dref1573 ,    size_t  count1575 ) {
    if (!(  dref1573 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1576 = ( ( ( (  get_dash_typesize193 ) ( ) ) ) .f_size );
    struct Action_152 *  ptr1577 = ( (  cast_dash_ptr253 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1576 ) , (  count1575 ) ) ) ) ) ) );
    return ( (struct Slice_161) { .f_ptr = (  ptr1577 ) , .f_count = (  count1575 ) } );
}

static  struct Slice_413   allocate1208 (    enum CAllocator_4  dref1573 ,    size_t  count1575 ) {
    if (!(  dref1573 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1576 = ( ( ( (  get_dash_typesize196 ) ( ) ) ) .f_size );
    struct Either_182 *  ptr1577 = ( (  cast_dash_ptr254 ) ( ( ( malloc ) ( (  op_dash_mul100 ( (  size1576 ) , (  count1575 ) ) ) ) ) ) );
    return ( (struct Slice_413) { .f_ptr = (  ptr1577 ) , .f_count = (  count1575 ) } );
}

static  enum Unit_13   free1209 (    enum CAllocator_4  dref1579 ,    struct Slice_322  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr230 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1210 (    enum CAllocator_4  dref1579 ,    struct Slice_5  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr233 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1211 (    enum CAllocator_4  dref1579 ,    struct Slice_161  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr252 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1212 (    enum CAllocator_4  dref1579 ,    struct Slice_413  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr255 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1214 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1213 (    enum CAllocator_4  dref1579 ,    struct Slice_1214  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr257 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1215 (    enum CAllocator_4  dref1579 ,    struct Slice_632  slice1581 ) {
    if (!(  dref1579 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr259 ) ( ( (  slice1581 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct DynStr_134   clone_dash_01216 (    struct DynStr_134  s1623 ,    enum CAllocator_4  al1625 ) {
    size_t  cnt1626 = ( ( (  s1623 ) .f_contents ) .f_count );
    struct Slice_5  nus1627 = ( (  allocate1205 ) ( (  al1625 ) ,  (  op_dash_add98 ( (  cnt1626 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to1183 ) ( ( (  s1623 ) .f_contents ) ,  (  nus1627 ) ) );
    ( (  set1173 ) ( (  nus1627 ) ,  (  cnt1626 ) ,  ( (  from_dash_charlike1 ) ( ( "\x00" ) ) ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( (  nus1627 ) .f_ptr ) , .f_count = (  cnt1626 ) } ) } );
}

static  struct DynStr_134   clone1217 (    struct DynStr_134  s1630 ,    enum CAllocator_4  al1632 ) {
    return ( (  clone_dash_01216 ) ( (  s1630 ) ,  (  al1632 ) ) );
}

static  uint8_t *   get_dash_ptr1218 (    struct Array_142 *  arr1653 ,    size_t  i1656 ) {
    if ( ( (  cmp9 ( (  i1656 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1656 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1656 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1657 = ( ( (  cast_dash_ptr239 ) ( (  arr1653 ) ) ) );
    return ( (  offset_dash_ptr173 ) ( (  p1657 ) ,  ( (int64_t ) (  i1656 ) ) ) );
}

static  char *   get_dash_ptr1219 (    struct Array_211 *  arr1653 ,    size_t  i1656 ) {
    if ( ( (  cmp9 ( (  i1656 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1656 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic771 ) ( ( ( StrConcat_772_StrConcat ) ( ( ( StrConcat_773_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1656 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1657 = ( ( (  cast_dash_ptr247 ) ( (  arr1653 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1657 ) ,  ( (int64_t ) (  i1656 ) ) ) );
}

static  enum Unit_13   set1220 (    struct Array_142 *  arr1666 ,    size_t  i1669 ,    uint8_t  e1671 ) {
    uint8_t *  p1672 = ( (  get_dash_ptr1218 ) ( (  arr1666 ) ,  (  i1669 ) ) );
    (*  p1672 ) = (  e1671 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1221 (    struct Array_211 *  arr1666 ,    size_t  i1669 ,    char  e1671 ) {
    char *  p1672 = ( (  get_dash_ptr1219 ) ( (  arr1666 ) ,  (  i1669 ) ) );
    (*  p1672 ) = (  e1671 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1222 (    struct Array_211 *  arr1675 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast222 ) ( (  arr1675 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1223 (    char  c1736 ) {
    return ( ( (  eq47 ( (  c1736 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1736 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1736 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1224 (    char  c1739 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c1739 ) ) ) );
}

static  bool   is_dash_alpha1225 (    char  c1745 ) {
    return ( ( (  between957 ) ( (  c1745 ) ,  ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "z" ) ) ) ) ) || ( (  between957 ) ( (  c1745 ) ,  ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "Z" ) ) ) ) ) );
}

static  bool   is_dash_digit1226 (    char  c1748 ) {
    return ( (  between957 ) ( (  c1748 ) ,  ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) );
}

static  bool   is_dash_alphanumeric1227 (    char  c1751 ) {
    return ( ( (  is_dash_alpha1225 ) ( (  c1751 ) ) ) || ( (  is_dash_digit1226 ) ( (  c1751 ) ) ) );
}

static  struct LineIter_342   lines1228 (    struct DynStr_134  s1755 ) {
    return ( (struct LineIter_342) { .f_og = (  s1755 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1229 (    char  c1784 ) {
    return ( (  cmp80 ( ( (  char_dash_i32953 ) ( (  c1784 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_i32953 ) ( (  c1784 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_369   parse_dash_digit1230 (    char  c1787 ) {
    if ( ( (  is_dash_digit1229 ) ( (  c1787 ) ) ) ) {
        return ( ( Maybe_369_Just ) ( (  op_dash_sub88 ( ( (  char_dash_i32953 ) ( (  c1787 ) ) ) , ( (  char_dash_i32953 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_369) { .tag = Maybe_369_None_t } );
    }
}

static  struct Maybe_801   sequence_dash_maybe1232 (    char  e1793 ,    struct Maybe_801  b1795 ) {
    struct Maybe_801  dref1796 = (  b1795 );
    if ( dref1796.tag == Maybe_801_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    else if ( dref1796.tag == Maybe_801_Just_t ) {
        struct Maybe_369  dref1798 = ( (  parse_dash_digit1230 ) ( (  e1793 ) ) );
        if ( dref1798.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
        }
        else if ( dref1798.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_801_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1796 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1798 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_801   parse_dash_int1231 (    struct TakeWhile_558  s1790 ) {
    struct TakeWhile_558  cs1800 = ( (  chars1118 ) ( (  s1790 ) ) );
    struct Maybe_49  dref1801 = ( (  head867 ) ( (  cs1800 ) ) );
    if ( dref1801.tag == Maybe_49_Just_t ) {
        return ( (  reduce800 ) ( (  cs1800 ) ,  ( ( Maybe_801_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1232 ) ) );
    }
    else if ( dref1801.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
}

static  struct Maybe_801   sequence_dash_maybe1234 (    char  e1793 ,    struct Maybe_801  b1795 ) {
    struct Maybe_801  dref1796 = (  b1795 );
    if ( dref1796.tag == Maybe_801_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    else if ( dref1796.tag == Maybe_801_Just_t ) {
        struct Maybe_369  dref1798 = ( (  parse_dash_digit1230 ) ( (  e1793 ) ) );
        if ( dref1798.tag == Maybe_369_None_t ) {
            return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
        }
        else if ( dref1798.tag == Maybe_369_Just_t ) {
            return ( ( Maybe_801_Just ) ( (  op_dash_add83 ( (  op_dash_mul32 ( ( dref1796 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64310 ) ( ( dref1798 .stuff .Maybe_369_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_801   parse_dash_int1233 (    struct TakeWhile_569  s1790 ) {
    struct TakeWhile_569  cs1800 = ( (  chars1121 ) ( (  s1790 ) ) );
    struct Maybe_49  dref1801 = ( (  head871 ) ( (  cs1800 ) ) );
    if ( dref1801.tag == Maybe_49_Just_t ) {
        return ( (  reduce815 ) ( (  cs1800 ) ,  ( ( Maybe_801_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1234 ) ) );
    }
    else if ( dref1801.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1235 (    struct List_323 *  list1806 ,    size_t  i1808 ) {
    if ( ( (  cmp9 ( (  i1808 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1808 ) , ( ( * (  list1806 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1808 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1806 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1161 ) ( ( ( * (  list1806 ) ) .f_elements ) ,  (  i1808 ) ) );
}

static  struct Either_182 *   get_dash_ptr1236 (    struct List_895 *  list1806 ,    size_t  i1808 ) {
    if ( ( (  cmp9 ( (  i1808 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1808 ) , ( ( * (  list1806 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1808 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1806 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1163 ) ( ( ( * (  list1806 ) ) .f_elements ) ,  (  i1808 ) ) );
}

static  struct List_3   get1237 (    struct List_323 *  list1816 ,    size_t  i1818 ) {
    return ( * ( (  get_dash_ptr1235 ) ( (  list1816 ) ,  (  i1818 ) ) ) );
}

static  struct Either_182   get1238 (    struct List_895 *  list1816 ,    size_t  i1818 ) {
    return ( * ( (  get_dash_ptr1236 ) ( (  list1816 ) ,  (  i1818 ) ) ) );
}

static  struct Maybe_49   try_dash_get1239 (    struct List_3 *  list1821 ,    size_t  i1823 ) {
    if ( (  cmp9 ( (  i1823 ) , ( ( * (  list1821 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1821 ) ,  (  i1823 ) ) ) ) );
}

static  struct Maybe_355   try_dash_get1240 (    struct List_323 *  list1821 ,    size_t  i1823 ) {
    if ( (  cmp9 ( (  i1823 ) , ( ( * (  list1821 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_355) { .tag = Maybe_355_None_t } );
    }
    return ( ( Maybe_355_Just ) ( ( (  get1237 ) ( (  list1821 ) ,  (  i1823 ) ) ) ) );
}

static  enum Unit_13   set1241 (    struct List_323 *  list1826 ,    size_t  i1828 ,    struct List_3  elem1830 ) {
    if ( ( (  cmp9 ( (  i1828 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1828 ) , ( ( * (  list1826 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1828 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1826 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1172 ) ( ( ( * (  list1826 ) ) .f_elements ) ,  (  i1828 ) ,  (  elem1830 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1242 (    struct List_3 *  list1826 ,    size_t  i1828 ,    char  elem1830 ) {
    if ( ( (  cmp9 ( (  i1828 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1828 ) , ( ( * (  list1826 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1828 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1826 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1173 ) ( ( ( * (  list1826 ) ) .f_elements ) ,  (  i1828 ) ,  (  elem1830 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_323   mk1243 (    enum CAllocator_4  al1836 ) {
    struct Slice_322  elements1837 = ( (  empty1157 ) ( ) );
    return ( (struct List_323) { .f_al = (  al1836 ) , .f_elements = (  elements1837 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1244 (    enum CAllocator_4  al1836 ) {
    struct Slice_5  elements1837 = ( (  empty1158 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1836 ) , .f_elements = (  elements1837 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_895   mk1245 (    enum CAllocator_4  al1836 ) {
    struct Slice_413  elements1837 = ( (  empty1159 ) ( ) );
    return ( (struct List_895) { .f_al = (  al1836 ) , .f_elements = (  elements1837 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_160   mk1246 (    enum CAllocator_4  al1836 ) {
    struct Slice_161  elements1837 = ( (  empty1160 ) ( ) );
    return ( (struct List_160) { .f_al = (  al1836 ) , .f_elements = (  elements1837 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1247 (    struct List_3 *  list1840 ) {
    ( (  free1210 ) ( ( ( * (  list1840 ) ) .f_al ) ,  ( ( * (  list1840 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1248 (    struct List_160 *  list1840 ) {
    ( (  free1211 ) ( ( ( * (  list1840 ) ) .f_al ) ,  ( ( * (  list1840 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1249 (    struct List_323 *  list1840 ) {
    ( (  free1209 ) ( ( ( * (  list1840 ) ) .f_al ) ,  ( ( * (  list1840 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam607 (   struct env607 env ,    struct Tuple2_387  dref1848 ) {
    return ( (  set1172 ) ( ( env.new_dash_slice1847 ) ,  ( (  i32_dash_size311 ) ( ( dref1848 .field1 ) ) ) ,  ( dref1848 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full621 (   struct env621 env ,    struct List_323 *  list1846 ) {
    if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1846 ) .f_elements = ( (  allocate1204 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( env.starting_dash_size1841 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , ( ( ( * (  list1846 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_322  new_dash_slice1847 = ( (  allocate1204 ) ( ( ( * (  list1846 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1846 ) ) .f_count ) , ( env.growth_dash_factor1842 ) ) ) ) );
            struct env607 envinst607 = {
                .new_dash_slice1847 =  new_dash_slice1847 ,
            };
            ( (  for_dash_each606 ) ( ( (  zip528 ) ( ( ( * (  list1846 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv607){ .fun = lam607, .env = envinst607 } ) ) );
            ( (  free1209 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( ( * (  list1846 ) ) .f_elements ) ) );
            (*  list1846 ) .f_elements = (  new_dash_slice1847 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam611 (   struct env611 env ,    struct Tuple2_393  dref1848 ) {
    return ( (  set1173 ) ( ( env.new_dash_slice1847 ) ,  ( (  i32_dash_size311 ) ( ( dref1848 .field1 ) ) ) ,  ( dref1848 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full347 (   struct env347 env ,    struct List_3 *  list1846 ) {
    if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1846 ) .f_elements = ( (  allocate1205 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( env.starting_dash_size1841 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , ( ( ( * (  list1846 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1847 = ( (  allocate1205 ) ( ( ( * (  list1846 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1846 ) ) .f_count ) , ( env.growth_dash_factor1842 ) ) ) ) );
            struct env611 envinst611 = {
                .new_dash_slice1847 =  new_dash_slice1847 ,
            };
            ( (  for_dash_each610 ) ( ( (  zip529 ) ( ( ( * (  list1846 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv611){ .fun = lam611, .env = envinst611 } ) ) );
            ( (  free1210 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( ( * (  list1846 ) ) .f_elements ) ) );
            (*  list1846 ) .f_elements = (  new_dash_slice1847 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1250 {
    size_t  growth_dash_factor1842;
    ;
    ;
    ;
    size_t  starting_dash_size1841;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam672 (   struct env672 env ,    struct Tuple2_465  dref1848 ) {
    return ( (  set1175 ) ( ( env.new_dash_slice1847 ) ,  ( (  i32_dash_size311 ) ( ( dref1848 .field1 ) ) ) ,  ( dref1848 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1250 (   struct env1250 env ,    struct List_160 *  list1846 ) {
    if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1846 ) .f_elements = ( (  allocate1207 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( env.starting_dash_size1841 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , ( ( ( * (  list1846 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_161  new_dash_slice1847 = ( (  allocate1207 ) ( ( ( * (  list1846 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1846 ) ) .f_count ) , ( env.growth_dash_factor1842 ) ) ) ) );
            struct env672 envinst672 = {
                .new_dash_slice1847 =  new_dash_slice1847 ,
            };
            ( (  for_dash_each671 ) ( ( (  zip532 ) ( ( ( * (  list1846 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv672){ .fun = lam672, .env = envinst672 } ) ) );
            ( (  free1211 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( ( * (  list1846 ) ) .f_elements ) ) );
            (*  list1846 ) .f_elements = (  new_dash_slice1847 );
        }
    }
    return ( Unit_13_Unit );
}

struct env1251 {
    size_t  growth_dash_factor1842;
    ;
    ;
    ;
    size_t  starting_dash_size1841;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam676 (   struct env676 env ,    struct Tuple2_470  dref1848 ) {
    return ( (  set1176 ) ( ( env.new_dash_slice1847 ) ,  ( (  i32_dash_size311 ) ( ( dref1848 .field1 ) ) ) ,  ( dref1848 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full1251 (   struct env1251 env ,    struct List_895 *  list1846 ) {
    if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1846 ) .f_elements = ( (  allocate1208 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( env.starting_dash_size1841 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1846 ) ) .f_count ) , ( ( ( * (  list1846 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_413  new_dash_slice1847 = ( (  allocate1208 ) ( ( ( * (  list1846 ) ) .f_al ) ,  (  op_dash_mul100 ( ( ( * (  list1846 ) ) .f_count ) , ( env.growth_dash_factor1842 ) ) ) ) );
            struct env676 envinst676 = {
                .new_dash_slice1847 =  new_dash_slice1847 ,
            };
            ( (  for_dash_each675 ) ( ( (  zip534 ) ( ( ( * (  list1846 ) ) .f_elements ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv676){ .fun = lam676, .env = envinst676 } ) ) );
            ( (  free1212 ) ( ( ( * (  list1846 ) ) .f_al ) ,  ( ( * (  list1846 ) ) .f_elements ) ) );
            (*  list1846 ) .f_elements = (  new_dash_slice1847 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add620 (   struct env620 env ,    struct List_323 *  list1853 ,    struct List_3  elem1855 ) {
    struct funenv621  temp1252 = ( (struct funenv621){ .fun = grow_dash_if_dash_full621, .env =  env.envinst621  } );
    ( temp1252.fun ( temp1252.env ,  (  list1853 ) ) );
    ( (  set1172 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  ( ( * (  list1853 ) ) .f_count ) ,  (  elem1855 ) ) );
    (*  list1853 ) .f_count = (  op_dash_add98 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add346 (   struct env346 env ,    struct List_3 *  list1853 ,    char  elem1855 ) {
    struct funenv347  temp1253 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1253.fun ( temp1253.env ,  (  list1853 ) ) );
    ( (  set1173 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  ( ( * (  list1853 ) ) .f_count ) ,  (  elem1855 ) ) );
    (*  list1853 ) .f_count = (  op_dash_add98 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
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

static  enum Unit_13   add1254 (   struct env1254 env ,    struct List_160 *  list1853 ,    struct Action_152  elem1855 ) {
    struct funenv1250  temp1255 = ( (struct funenv1250){ .fun = grow_dash_if_dash_full1250, .env =  env.envinst1250  } );
    ( temp1255.fun ( temp1255.env ,  (  list1853 ) ) );
    ( (  set1175 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  ( ( * (  list1853 ) ) .f_count ) ,  (  elem1855 ) ) );
    (*  list1853 ) .f_count = (  op_dash_add98 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
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

static  enum Unit_13   add1256 (   struct env1256 env ,    struct List_895 *  list1853 ,    struct Either_182  elem1855 ) {
    struct funenv1251  temp1257 = ( (struct funenv1251){ .fun = grow_dash_if_dash_full1251, .env =  env.envinst1251  } );
    ( temp1257.fun ( temp1257.env ,  (  list1853 ) ) );
    ( (  set1176 ) ( ( ( * (  list1853 ) ) .f_elements ) ,  ( ( * (  list1853 ) ) .f_count ) ,  (  elem1855 ) ) );
    (*  list1853 ) .f_count = (  op_dash_add98 ( ( ( * (  list1853 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1258 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env346 envinst346;
    struct env347 envinst347;
    ;
    ;
};

static  enum Unit_13   insert1258 (   struct env1258 env ,    struct List_3 *  list1858 ,    size_t  i1860 ,    char  elem1862 ) {
    if ( ( (  cmp9 ( (  i1860 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1860 ) , ( ( * (  list1858 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1860 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1858 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv346  temp1259 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
        ( temp1259.fun ( temp1259.env ,  (  list1858 ) ,  (  elem1862 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv347  temp1260 = ( (struct funenv347){ .fun = grow_dash_if_dash_full347, .env =  env.envinst347  } );
    ( temp1260.fun ( temp1260.env ,  (  list1858 ) ) );
    size_t  ii1863 = (  op_dash_sub99 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1863 ) , (  i1860 ) ) != 0 ) ) {
        ( (  set1173 ) ( ( ( * (  list1858 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1863 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1858 ) ,  (  ii1863 ) ) ) ) );
        if ( (  eq45 ( (  ii1863 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1863 = (  op_dash_sub99 ( (  ii1863 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1173 ) ( ( ( * (  list1858 ) ) .f_elements ) ,  (  i1860 ) ,  (  elem1862 ) ) );
    (*  list1858 ) .f_count = (  op_dash_add98 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1261 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env620 envinst620;
    struct env621 envinst621;
    ;
    ;
};

static  enum Unit_13   insert1261 (   struct env1261 env ,    struct List_323 *  list1858 ,    size_t  i1860 ,    struct List_3  elem1862 ) {
    if ( ( (  cmp9 ( (  i1860 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1860 ) , ( ( * (  list1858 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1860 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1858 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv620  temp1262 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
        ( temp1262.fun ( temp1262.env ,  (  list1858 ) ,  (  elem1862 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv621  temp1263 = ( (struct funenv621){ .fun = grow_dash_if_dash_full621, .env =  env.envinst621  } );
    ( temp1263.fun ( temp1263.env ,  (  list1858 ) ) );
    size_t  ii1863 = (  op_dash_sub99 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1863 ) , (  i1860 ) ) != 0 ) ) {
        ( (  set1172 ) ( ( ( * (  list1858 ) ) .f_elements ) ,  (  op_dash_add98 ( (  ii1863 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1237 ) ( (  list1858 ) ,  (  ii1863 ) ) ) ) );
        if ( (  eq45 ( (  ii1863 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1863 = (  op_dash_sub99 ( (  ii1863 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1172 ) ( ( ( * (  list1858 ) ) .f_elements ) ,  (  i1860 ) ,  (  elem1862 ) ) );
    (*  list1858 ) .f_count = (  op_dash_add98 ( ( ( * (  list1858 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1843;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam656 (   struct env656 env ,    struct Tuple2_387  dref1869 ) {
    return ( (  set1241 ) ( ( env.list1866 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1869 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1869 .field0 ) ) );
}

static  enum Unit_13   remove1264 (   struct env1264 env ,    struct List_323 *  list1866 ,    size_t  i1868 ) {
    if ( ( (  cmp9 ( (  i1868 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1868 ) , ( ( * (  list1866 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1868 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1866 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env656 envinst656 = {
        .list1866 =  list1866 ,
    };
    ( (  for_dash_each655 ) ( ( (  drop395 ) ( ( (  zip530 ) ( ( * (  list1866 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1868 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv656){ .fun = lam656, .env = envinst656 } ) ) );
    (*  list1866 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1866 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1872 = ( ( ( * (  list1866 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1866 ) ) .f_count ) , ( env.shrink_dash_factor1843 ) ) ) , (  capacity1872 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1866 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1209 ) ( ( ( * (  list1866 ) ) .f_al ) ,  ( ( * (  list1866 ) ) .f_elements ) ) );
            (*  list1866 ) .f_elements = ( (  empty1157 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1873 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1866 ) ) .f_count ) , ( env.shrink_dash_factor1843 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1843 ) ) );
        struct Slice_322  new_dash_slice1874 = ( (  allocate1204 ) ( ( ( * (  list1866 ) ) .f_al ) ,  (  new_dash_size1873 ) ) );
        ( (  copy_dash_to1182 ) ( ( (  subslice326 ) ( ( ( * (  list1866 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1866 ) ) .f_count ) ) ) ,  (  new_dash_slice1874 ) ) );
        ( (  free1209 ) ( ( ( * (  list1866 ) ) .f_al ) ,  ( ( * (  list1866 ) ) .f_elements ) ) );
        (*  list1866 ) .f_elements = (  new_dash_slice1874 );
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1843;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam664 (   struct env664 env ,    struct Tuple2_393  dref1869 ) {
    return ( (  set1242 ) ( ( env.list1866 ) ,  ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( ( dref1869 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1869 .field0 ) ) );
}

static  enum Unit_13   remove1265 (   struct env1265 env ,    struct List_3 *  list1866 ,    size_t  i1868 ) {
    if ( ( (  cmp9 ( (  i1868 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1868 ) , ( ( * (  list1866 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1868 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1866 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env664 envinst664 = {
        .list1866 =  list1866 ,
    };
    ( (  for_dash_each663 ) ( ( (  drop397 ) ( ( (  zip531 ) ( ( * (  list1866 ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add98 ( (  i1868 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv664){ .fun = lam664, .env = envinst664 } ) ) );
    (*  list1866 ) .f_count = (  op_dash_sub99 ( ( ( * (  list1866 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1872 = ( ( ( * (  list1866 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul100 ( ( ( * (  list1866 ) ) .f_count ) , ( env.shrink_dash_factor1843 ) ) ) , (  capacity1872 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1866 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1210 ) ( ( ( * (  list1866 ) ) .f_al ) ,  ( ( * (  list1866 ) ) .f_elements ) ) );
            (*  list1866 ) .f_elements = ( (  empty1158 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1873 = (  op_dash_mul100 ( (  op_dash_add98 ( (  op_dash_div101 ( ( ( * (  list1866 ) ) .f_count ) , ( env.shrink_dash_factor1843 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1843 ) ) );
        struct Slice_5  new_dash_slice1874 = ( (  allocate1205 ) ( ( ( * (  list1866 ) ) .f_al ) ,  (  new_dash_size1873 ) ) );
        ( (  copy_dash_to1183 ) ( ( (  subslice335 ) ( ( ( * (  list1866 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1866 ) ) .f_count ) ) ) ,  (  new_dash_slice1874 ) ) );
        ( (  free1210 ) ( ( ( * (  list1866 ) ) .f_al ) ,  ( ( * (  list1866 ) ) .f_elements ) ) );
        (*  list1866 ) .f_elements = (  new_dash_slice1874 );
    }
    return ( Unit_13_Unit );
}

static  struct Either_182   elem_dash_get1266 (    struct List_895  self1877 ,    size_t  k1879 ) {
    return ( (  get1238 ) ( ( & (  self1877 ) ) ,  (  k1879 ) ) );
}

struct funenv1265 {
    enum Unit_13  (*fun) (  struct env1265  ,    struct List_3 *  ,    size_t  );
    struct env1265 env;
};

struct env1267 {
    ;
    ;
    ;
    struct env1265 envinst1265;
    ;
    ;
    ;
};

static  enum Unit_13   pop1267 (   struct env1267 env ,    struct List_3 *  list1888 ) {
    if ( (  eq45 ( ( ( * (  list1888 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic1137 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1265  temp1268 = ( (struct funenv1265){ .fun = remove1265, .env =  env.envinst1265  } );
    return ( temp1268.fun ( temp1268.env ,  (  list1888 ) ,  (  op_dash_sub99 ( ( ( * (  list1888 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam615 (   struct env615 env ,    char  x1898 ) {
    struct funenv346  temp1269 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1269.fun ( temp1269.env ,  ( env.list1894 ) ,  (  x1898 ) ) );
}

static  enum Unit_13   add_dash_all345 (   struct env345 env ,    struct List_3 *  list1894 ,    struct DynStr_134  it1896 ) {
    struct env615 envinst615 = {
        .envinst346 = env.envinst346 ,
        .list1894 =  list1894 ,
    };
    ( (  for_dash_each614 ) ( (  it1896 ) ,  ( (struct funenv615){ .fun = lam615, .env = envinst615 } ) ) );
    return ( Unit_13_Unit );
}

struct env1270 {
    ;
    struct env620 envinst620;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam619 (   struct env619 env ,    struct List_3  x1898 ) {
    struct funenv620  temp1271 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
    return ( temp1271.fun ( temp1271.env ,  ( env.list1894 ) ,  (  x1898 ) ) );
}

static  enum Unit_13   add_dash_all1270 (   struct env1270 env ,    struct List_323 *  list1894 ,    struct Map_341  it1896 ) {
    struct env619 envinst619 = {
        .envinst620 = env.envinst620 ,
        .list1894 =  list1894 ,
    };
    ( (  for_dash_each618 ) ( (  it1896 ) ,  ( (struct funenv619){ .fun = lam619, .env = envinst619 } ) ) );
    return ( Unit_13_Unit );
}

struct env1272 {
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam644 (   struct env644 env ,    char  x1898 ) {
    struct funenv346  temp1273 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1273.fun ( temp1273.env ,  ( env.list1894 ) ,  (  x1898 ) ) );
}

static  enum Unit_13   add_dash_all1272 (   struct env1272 env ,    struct List_3 *  list1894 ,    struct Slice_5  it1896 ) {
    struct env644 envinst644 = {
        .envinst346 = env.envinst346 ,
        .list1894 =  list1894 ,
    };
    ( (  for_dash_each643 ) ( (  it1896 ) ,  ( (struct funenv644){ .fun = lam644, .env = envinst644 } ) ) );
    return ( Unit_13_Unit );
}

struct env1274 {
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam648 (   struct env648 env ,    char  x1898 ) {
    struct funenv346  temp1275 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1275.fun ( temp1275.env ,  ( env.list1894 ) ,  (  x1898 ) ) );
}

static  enum Unit_13   add_dash_all1274 (   struct env1274 env ,    struct List_3 *  list1894 ,    struct List_3 *  it1896 ) {
    struct env648 envinst648 = {
        .envinst346 = env.envinst346 ,
        .list1894 =  list1894 ,
    };
    ( (  for_dash_each647 ) ( (  it1896 ) ,  ( (struct funenv648){ .fun = lam648, .env = envinst648 } ) ) );
    return ( Unit_13_Unit );
}

struct env1276 {
    ;
    struct env346 envinst346;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam688 (   struct env688 env ,    char  x1898 ) {
    struct funenv346  temp1277 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1277.fun ( temp1277.env ,  ( env.list1894 ) ,  (  x1898 ) ) );
}

static  enum Unit_13   add_dash_all1276 (   struct env1276 env ,    struct List_3 *  list1894 ,    struct TakeWhile_560  it1896 ) {
    struct env688 envinst688 = {
        .envinst346 = env.envinst346 ,
        .list1894 =  list1894 ,
    };
    ( (  for_dash_each687 ) ( (  it1896 ) ,  ( (struct funenv688){ .fun = lam688, .env = envinst688 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1278 (    struct List_3 *  l1901 ,    size_t  new_dash_count1903 ) {
    (*  l1901 ) .f_count = ( (  min327 ) ( (  new_dash_count1903 ) ,  ( ( * (  l1901 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1279 (    struct List_895 *  l1901 ,    size_t  new_dash_count1903 ) {
    (*  l1901 ) .f_count = ( (  min327 ) ( (  new_dash_count1903 ) ,  ( ( * (  l1901 ) ) .f_count ) ) );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list344 (   struct env344 env ,    struct DynStr_134  it1906 ,    enum CAllocator_4  al1908 ) {
    struct List_3  temp1280 = ( (  mk1244 ) ( (  al1908 ) ) );
    struct List_3 *  l1909 = ( &temp1280 );
    struct funenv345  temp1281 = ( (struct funenv345){ .fun = add_dash_all345, .env =  env.envinst345  } );
    ( temp1281.fun ( temp1281.env ,  (  l1909 ) ,  (  it1906 ) ) );
    return ( * (  l1909 ) );
}

struct funenv1270 {
    enum Unit_13  (*fun) (  struct env1270  ,    struct List_323 *  ,    struct Map_341  );
    struct env1270 env;
};

struct env1282 {
    ;
    ;
    ;
    struct env1270 envinst1270;
    ;
    ;
};

static  struct List_323   to_dash_list1282 (   struct env1282 env ,    struct Map_341  it1906 ,    enum CAllocator_4  al1908 ) {
    struct List_323  temp1283 = ( (  mk1243 ) ( (  al1908 ) ) );
    struct List_323 *  l1909 = ( &temp1283 );
    struct funenv1270  temp1284 = ( (struct funenv1270){ .fun = add_dash_all1270, .env =  env.envinst1270  } );
    ( temp1284.fun ( temp1284.env ,  (  l1909 ) ,  (  it1906 ) ) );
    return ( * (  l1909 ) );
}

static  struct Slice_5   to_dash_slice1285 (    struct List_3  l1912 ) {
    char *  ptr1913 = ( ( (  l1912 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1913 ) , .f_count = ( (  l1912 ) .f_count ) } );
}

static  struct Slice_322   to_dash_slice1286 (    struct List_323  l1912 ) {
    struct List_3 *  ptr1913 = ( ( (  l1912 ) .f_elements ) .f_ptr );
    return ( (struct Slice_322) { .f_ptr = (  ptr1913 ) , .f_count = ( (  l1912 ) .f_count ) } );
}

static  struct Slice_413   to_dash_slice1287 (    struct List_895  l1912 ) {
    struct Either_182 *  ptr1913 = ( ( (  l1912 ) .f_elements ) .f_ptr );
    return ( (struct Slice_413) { .f_ptr = (  ptr1913 ) , .f_count = ( (  l1912 ) .f_count ) } );
}

static  struct Slice_161   to_dash_slice1288 (    struct List_160  l1912 ) {
    struct Action_152 *  ptr1913 = ( ( (  l1912 ) .f_elements ) .f_ptr );
    return ( (struct Slice_161) { .f_ptr = (  ptr1913 ) , .f_count = ( (  l1912 ) .f_count ) } );
}

static  struct SliceAddressIter_692   addresses1289 (    struct List_323  l1916 ) {
    return ( (  addresses1181 ) ( ( (  to_dash_slice1286 ) ( (  l1916 ) ) ) ) );
}

static  size_t   size1290 (    struct List_3 *  l1919 ) {
    return ( ( * (  l1919 ) ) .f_count );
}

static  size_t   size1291 (    struct List_323 *  l1919 ) {
    return ( ( * (  l1919 ) ) .f_count );
}

static  struct Maybe_1150   hex_dash_digit1292 (    char  c1947 ) {
    if ( ( (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1947 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1947 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp952 ( (  c1947 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1150_Just ) ( (  op_dash_add96 ( (  op_dash_sub97 ( ( (  char_dash_u81132 ) ( (  c1947 ) ) ) , ( (  char_dash_u81132 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1150) { .tag = Maybe_1150_None_t } );
}

static  uint32_t   lam1294 (    char  c1952 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64318 ) ( ( (  or_dash_fail1149 ) ( ( (  hex_dash_digit1292 ) ( (  c1952 ) ) ) ,  ( ( StrConcat_1004_StrConcat ) ( ( ( StrConcat_1005_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1952 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1295 (    uint32_t  elem1954 ,    uint32_t  b1956 ) {
    return (  op_dash_add92 ( (  op_dash_mul94 ( (  b1956 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1954 ) ) );
}

static  uint32_t   from_dash_hex1293 (    const char*  arr1950 ) {
    return ( (  reduce796 ) ( ( (  map374 ) ( (  arr1950 ) ,  (  lam1294 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1295 ) ) );
}

static  struct Maybe_308   get1296 (    const char*  s1993 ) {
    return ( (  from_dash_nullable_dash_c_dash_str307 ) ( ( ( getenv ) ( (  s1993 ) ) ) ) );
}

static  bool   is_dash_terminal1297 (  ) {
    return (  cmp80 ( ( ( isatty ) ( ( (  stdout_dash_fileno114 ) ( ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) == 2 );
}

static  enum Unit_13   show_dash_cursor1298 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1299 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1300 (    uint32_t  x1970 ,    uint32_t  y1972 ) {
    uint32_t  x1973 = (  op_dash_add92 ( (  x1970 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1974 = (  op_dash_add92 ( (  y1972 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str1090 ) ( ( ( StrConcat_1091_StrConcat ) ( ( ( StrConcat_1092_StrConcat ) ( ( ( StrConcat_1093_StrConcat ) ( ( ( StrConcat_986_StrConcat ) ( ( "\x1b[" ) ,  (  y1974 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1973 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1301 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_878   get_dash_dimensions1302 (  ) {
    struct Winsize_205  temp1303 = ( ( (  zeroed270 ) ( ) ) );
    struct Winsize_205 *  ws1978 = ( &temp1303 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno114 ) ( ) ) ,  ( (  tiocgwinsz130 ) ( ) ) ,  (  ws1978 ) ) ) , (  op_dash_neg91 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1978 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_878_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_878_Tuple2 ) ( ( (  u16_dash_u32314 ) ( ( ( * (  ws1978 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32314 ) ( ( ( * (  ws1978 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1304 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1305 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_718   query_dash_palette1306 (  ) {
    struct Maybe_308  colorterm1994 = ( (  get1296 ) ( ( "COLORTERM" ) ) );
    struct Maybe_308  dref1995 = (  colorterm1994 );
    if ( dref1995.tag == Maybe_308_Just_t ) {
        if ( ( (  eq1134 ( ( dref1995 .stuff .Maybe_308_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq1134 ( ( dref1995 .stuff .Maybe_308_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_718_PaletteRGB );
        }
    }
    else if ( dref1995.tag == Maybe_308_None_t ) {
    }
    struct Maybe_308  dref1997 = ( (  get1296 ) ( ( "TERM" ) ) );
    if ( dref1997.tag == Maybe_308_Just_t ) {
        if ( (  eq1134 ( ( dref1997 .stuff .Maybe_308_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_718_Palette8 );
        }
    }
    else if ( dref1997.tag == Maybe_308_None_t ) {
    }
    return ( ColorPalette_718_Palette16 );
}

static  enum Unit_13   set_dash_fg81307 (    enum Color8_60  color2013 ) {
    enum Color8_60  dref2014 = (  color2013 );
    switch (  dref2014 ) {
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

static  enum Unit_13   set_dash_fg161308 (    enum Color16_61  color2017 ) {
    enum Color16_61  dref2018 = (  color2017 );
    switch (  dref2018 ) {
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

static  enum Unit_13   set_dash_bg81309 (    enum Color8_60  color2021 ) {
    enum Color8_60  dref2022 = (  color2021 );
    switch (  dref2022 ) {
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

static  enum Unit_13   set_dash_bg161310 (    enum Color16_61  color2025 ) {
    enum Color16_61  dref2026 = (  color2025 );
    switch (  dref2026 ) {
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

static  enum Unit_13   reset_dash_colors1311 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1312 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561313 (    uint8_t  color2031 ) {
    ( (  print_dash_str1097 ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2031 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561314 (    uint8_t  color2034 ) {
    ( (  print_dash_str1097 ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2034 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1315 (    struct RGB_62  c2054 ) {
    ( (  print_dash_str1101 ) ( ( ( StrConcat_1102_StrConcat ) ( ( ( StrConcat_1103_StrConcat ) ( ( ( StrConcat_1104_StrConcat ) ( ( ( StrConcat_1105_StrConcat ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2054 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2054 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2054 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1316 (    struct RGB_62  c2057 ) {
    ( (  print_dash_str1101 ) ( ( ( StrConcat_1102_StrConcat ) ( ( ( StrConcat_1103_StrConcat ) ( ( ( StrConcat_1104_StrConcat ) ( ( ( StrConcat_1105_StrConcat ) ( ( ( StrConcat_1098_StrConcat ) ( ( ( StrConcat_1099_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2057 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2057 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2057 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1317 (    struct Color_59  c2075 ) {
    struct Color_59  dref2076 = (  c2075 );
    if ( dref2076.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1304 ) ( ) );
    }
    else if ( dref2076.tag == Color_59_Color8_t ) {
        ( (  set_dash_fg81307 ) ( ( dref2076 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2076.tag == Color_59_Color16_t ) {
        ( (  set_dash_fg161308 ) ( ( dref2076 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2076.tag == Color_59_Color256_t ) {
        ( (  set_dash_fg2561313 ) ( ( dref2076 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2076.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1315 ) ( ( dref2076 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1318 (    struct Color_59  c2083 ) {
    struct Color_59  dref2084 = (  c2083 );
    if ( dref2084.tag == Color_59_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1305 ) ( ) );
    }
    else if ( dref2084.tag == Color_59_Color8_t ) {
        ( (  set_dash_bg81309 ) ( ( dref2084 .stuff .Color_59_Color8_s .field0 ) ) );
    }
    else if ( dref2084.tag == Color_59_Color16_t ) {
        ( (  set_dash_bg161310 ) ( ( dref2084 .stuff .Color_59_Color16_s .field0 ) ) );
    }
    else if ( dref2084.tag == Color_59_Color256_t ) {
        ( (  set_dash_bg2561314 ) ( ( dref2084 .stuff .Color_59_Color256_s .field0 ) ) );
    }
    else if ( dref2084.tag == Color_59_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1316 ) ( ( dref2084 .stuff .Color_59_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1319 {
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam625 (   struct env625 env ,    char  c2140 ) {
    struct funenv346  temp1320 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1320.fun ( temp1320.env ,  ( & ( ( * ( env.builder2136 ) ) .f_chars ) ) ,  (  c2140 ) ) );
}

static  enum Unit_13   write1319 (   struct env1319 env ,    struct StrBuilder_626 *  builder2136 ,    const char*  s2138 ) {
    struct env625 envinst625 = {
        .builder2136 =  builder2136 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each624 ) ( ( (  chars960 ) ( (  s2138 ) ) ) ,  ( (struct funenv625){ .fun = lam625, .env = envinst625 } ) ) );
    return ( Unit_13_Unit );
}

struct env1321 {
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam668 (   struct env668 env ,    char  c2140 ) {
    struct funenv346  temp1322 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1322.fun ( temp1322.env ,  ( & ( ( * ( env.builder2136 ) ) .f_chars ) ) ,  (  c2140 ) ) );
}

static  enum Unit_13   write1321 (   struct env1321 env ,    struct StrBuilder_626 *  builder2136 ,    char  s2138 ) {
    struct env668 envinst668 = {
        .builder2136 =  builder2136 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each667 ) ( ( (  chars961 ) ( (  s2138 ) ) ) ,  ( (struct funenv668){ .fun = lam668, .env = envinst668 } ) ) );
    return ( Unit_13_Unit );
}

struct env1323 {
    ;
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam703 (   struct env703 env ,    char  c2140 ) {
    struct funenv346  temp1324 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1324.fun ( temp1324.env ,  ( & ( ( * ( env.builder2136 ) ) .f_chars ) ) ,  (  c2140 ) ) );
}

static  enum Unit_13   write1323 (   struct env1323 env ,    struct StrBuilder_626 *  builder2136 ,    struct TakeWhile_562  s2138 ) {
    struct env703 envinst703 = {
        .builder2136 =  builder2136 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each702 ) ( ( (  chars1119 ) ( (  s2138 ) ) ) ,  ( (struct funenv703){ .fun = lam703, .env = envinst703 } ) ) );
    return ( Unit_13_Unit );
}

struct env1325 {
    ;
    struct env346 envinst346;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam707 (   struct env707 env ,    char  c2140 ) {
    struct funenv346  temp1326 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    return ( temp1326.fun ( temp1326.env ,  ( & ( ( * ( env.builder2136 ) ) .f_chars ) ) ,  (  c2140 ) ) );
}

static  enum Unit_13   write1325 (   struct env1325 env ,    struct StrBuilder_626 *  builder2136 ,    struct TakeWhile_567  s2138 ) {
    struct env707 envinst707 = {
        .builder2136 =  builder2136 ,
        .envinst346 = env.envinst346 ,
    };
    ( (  for_dash_each706 ) ( ( (  chars1120 ) ( (  s2138 ) ) ) ,  ( (struct funenv707){ .fun = lam707, .env = envinst707 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1272 {
    enum Unit_13  (*fun) (  struct env1272  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1272 env;
};

struct env1327 {
    ;
    struct env1272 envinst1272;
    ;
};

static  enum Unit_13   write_dash_slice1327 (   struct env1327 env ,    struct StrBuilder_626 *  builder2143 ,    struct Slice_5  s2145 ) {
    struct funenv1272  temp1328 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  env.envinst1272  } );
    ( temp1328.fun ( temp1328.env ,  ( & ( ( * (  builder2143 ) ) .f_chars ) ) ,  (  s2145 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char699 (   struct env699 env ,    struct StrBuilder_626 *  builder2148 ,    char  c2150 ) {
    struct funenv346  temp1329 = ( (struct funenv346){ .fun = add346, .env =  env.envinst346  } );
    ( temp1329.fun ( temp1329.env ,  ( & ( ( * (  builder2148 ) ) .f_chars ) ) ,  (  c2150 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1267 {
    enum Unit_13  (*fun) (  struct env1267  ,    struct List_3 *  );
    struct env1267 env;
};

struct env1330 {
    struct env1267 envinst1267;
    ;
    ;
};

static  enum Unit_13   pop1330 (   struct env1330 env ,    struct StrBuilder_626 *  sb2158 ) {
    struct funenv1267  temp1331 = ( (struct funenv1267){ .fun = pop1267, .env =  env.envinst1267  } );
    return ( temp1331.fun ( temp1331.env ,  ( & ( ( * (  sb2158 ) ) .f_chars ) ) ) );
}

static  size_t   count1332 (    struct StrBuilder_626 *  sb2161 ) {
    return ( ( ( * (  sb2161 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_626   mk1333 (    enum CAllocator_4  al2164 ) {
    return ( (struct StrBuilder_626) { .f_chars = ( (  mk1244 ) ( (  al2164 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1334 (    struct StrBuilder_626 *  builder2173 ) {
    return ( (  to_dash_slice1285 ) ( ( ( * (  builder2173 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1335 (    struct StrBuilder_626 *  builder2176 ) {
    ( (  free1247 ) ( ( & ( ( * (  builder2176 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1319 {
    enum Unit_13  (*fun) (  struct env1319  ,    struct StrBuilder_626 *  ,    const char*  );
    struct env1319 env;
};

struct env1336 {
    struct env1319 envinst1319;
    ;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1336 (   struct env1336 env ,    const char*  s2190 ,    enum CAllocator_4  al2192 ) {
    struct StrBuilder_626  temp1337 = ( (  mk1333 ) ( (  al2192 ) ) );
    struct StrBuilder_626 *  sb2193 = ( &temp1337 );
    struct funenv1319  temp1338 = ( (struct funenv1319){ .fun = write1319, .env =  env.envinst1319  } );
    ( temp1338.fun ( temp1338.env ,  (  sb2193 ) ,  (  s2190 ) ) );
    struct funenv699  temp1339 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
    ( temp1339.fun ( temp1339.env ,  (  sb2193 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_134  dynstr2194 = ( (  as_dash_str977 ) ( (  sb2193 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2194 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2194 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1321 {
    enum Unit_13  (*fun) (  struct env1321  ,    struct StrBuilder_626 *  ,    char  );
    struct env1321 env;
};

struct env1340 {
    ;
    struct env1321 envinst1321;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1340 (   struct env1340 env ,    char  s2190 ,    enum CAllocator_4  al2192 ) {
    struct StrBuilder_626  temp1341 = ( (  mk1333 ) ( (  al2192 ) ) );
    struct StrBuilder_626 *  sb2193 = ( &temp1341 );
    struct funenv1321  temp1342 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
    ( temp1342.fun ( temp1342.env ,  (  sb2193 ) ,  (  s2190 ) ) );
    struct funenv699  temp1343 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
    ( temp1343.fun ( temp1343.env ,  (  sb2193 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_134  dynstr2194 = ( (  as_dash_str977 ) ( (  sb2193 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2194 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2194 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1323 {
    enum Unit_13  (*fun) (  struct env1323  ,    struct StrBuilder_626 *  ,    struct TakeWhile_562  );
    struct env1323 env;
};

struct env1344 {
    ;
    ;
    struct env1323 envinst1323;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1344 (   struct env1344 env ,    struct TakeWhile_562  s2190 ,    enum CAllocator_4  al2192 ) {
    struct StrBuilder_626  temp1345 = ( (  mk1333 ) ( (  al2192 ) ) );
    struct StrBuilder_626 *  sb2193 = ( &temp1345 );
    struct funenv1323  temp1346 = ( (struct funenv1323){ .fun = write1323, .env =  env.envinst1323  } );
    ( temp1346.fun ( temp1346.env ,  (  sb2193 ) ,  (  s2190 ) ) );
    struct funenv699  temp1347 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
    ( temp1347.fun ( temp1347.env ,  (  sb2193 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_134  dynstr2194 = ( (  as_dash_str977 ) ( (  sb2193 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2194 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2194 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1325 {
    enum Unit_13  (*fun) (  struct env1325  ,    struct StrBuilder_626 *  ,    struct TakeWhile_567  );
    struct env1325 env;
};

struct env1348 {
    ;
    ;
    struct env1325 envinst1325;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1348 (   struct env1348 env ,    struct TakeWhile_567  s2190 ,    enum CAllocator_4  al2192 ) {
    struct StrBuilder_626  temp1349 = ( (  mk1333 ) ( (  al2192 ) ) );
    struct StrBuilder_626 *  sb2193 = ( &temp1349 );
    struct funenv1325  temp1350 = ( (struct funenv1325){ .fun = write1325, .env =  env.envinst1325  } );
    ( temp1350.fun ( temp1350.env ,  (  sb2193 ) ,  (  s2190 ) ) );
    struct funenv699  temp1351 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
    ( temp1351.fun ( temp1351.env ,  (  sb2193 ) ,  ( (  nullchar361 ) ( ) ) ) );
    struct DynStr_134  dynstr2194 = ( (  as_dash_str977 ) ( (  sb2193 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2194 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub99 ( ( ( (  dynstr2194 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1336 {
    struct DynStr_134  (*fun) (  struct env1336  ,    const char*  ,    enum CAllocator_4  );
    struct env1336 env;
};

struct env1352 {
    ;
    struct env1336 envinst1336;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1352 (   struct env1352 env ,    const char*  s2197 ,    enum CAllocator_4  al2199 ) {
    struct funenv1336  temp1353 = ( (struct funenv1336){ .fun = mk_dash_dyn_dash_str1336, .env =  env.envinst1336  } );
    return ( ( (  cast215 ) ( ( ( ( temp1353.fun ( temp1353.env ,  (  s2197 ) ,  (  al2199 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1344 {
    struct DynStr_134  (*fun) (  struct env1344  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1344 env;
};

struct env1354 {
    ;
    ;
    struct env1344 envinst1344;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1354 (   struct env1354 env ,    struct TakeWhile_562  s2197 ,    enum CAllocator_4  al2199 ) {
    struct funenv1344  temp1355 = ( (struct funenv1344){ .fun = mk_dash_dyn_dash_str1344, .env =  env.envinst1344  } );
    return ( ( (  cast215 ) ( ( ( ( temp1355.fun ( temp1355.env ,  (  s2197 ) ,  (  al2199 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1348 {
    struct DynStr_134  (*fun) (  struct env1348  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1348 env;
};

struct env1356 {
    ;
    ;
    struct env1348 envinst1348;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1356 (   struct env1356 env ,    struct TakeWhile_567  s2197 ,    enum CAllocator_4  al2199 ) {
    struct funenv1348  temp1357 = ( (struct funenv1348){ .fun = mk_dash_dyn_dash_str1348, .env =  env.envinst1348  } );
    return ( ( (  cast215 ) ( ( ( ( temp1357.fun ( temp1357.env ,  (  s2197 ) ,  (  al2199 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1358 (  ) {
    struct timespec  temp1359 = ( (  undefined138 ) ( ) );
    struct timespec *  t2352 = ( &temp1359 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  t2352 ) ) );
    return ( * (  t2352 ) );
}

struct Duration_1361 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1360 (    struct Duration_1361  l2361 ,    struct Duration_1361  r2363 ) {
    enum Ordering_10  scmp2364 = ( (  cmp79 ) ( ( (  l2361 ) .f_secs ) ,  ( (  r2363 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2364 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2364 );
    }
    return ( (  cmp79 ) ( ( (  l2361 ) .f_nsecs ) ,  ( (  r2363 ) .f_nsecs ) ) );
}

static  struct Duration_1361   diff1362 (    struct timespec  l2367 ,    struct timespec  r2369 ) {
    int64_t  secdiff2370 = (  op_dash_sub84 ( ( (  l2367 ) .tv_sec ) , ( (  r2369 ) .tv_sec ) ) );
    int64_t  nsdiff2371 = (  op_dash_sub84 ( ( (  l2367 ) .tv_nsec ) , ( (  r2369 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2372 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp79 ( (  nsdiff2371 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp79 ( (  secdiff2370 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1361) { .f_secs = (  secdiff2370 ) , .f_nsecs = (  op_dash_neg86 ( (  nsdiff2371 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2370 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1361) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2371 ) } );
            } else {
                return ( (struct Duration_1361) { .f_secs = (  op_dash_sub84 ( (  secdiff2370 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add83 ( (  ns_dash_in_dash_secs2372 ) , (  nsdiff2371 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp79 ( (  secdiff2370 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1361) { .f_secs = (  secdiff2370 ) , .f_nsecs = (  nsdiff2371 ) } );
        } else {
            return ( (struct Duration_1361) { .f_secs = (  op_dash_sub84 ( (  secdiff2370 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub84 ( (  ns_dash_in_dash_secs2372 ) , (  nsdiff2371 ) ) ) } );
        }
    }
}

static  struct Duration_1361   duration_dash_from_dash_ns1363 (    int64_t  ns2375 ) {
    int64_t  ns_dash_in_dash_secs2376 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1361) { .f_secs = (  op_dash_div85 ( (  ns2375 ) , (  ns_dash_in_dash_secs2376 ) ) ) , .f_nsecs = ( (  mod947 ) ( (  ns2375 ) ,  (  ns_dash_in_dash_secs2376 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1364 (    struct Duration_1361  d2387 ) {
    int64_t  ns_dash_in_dash_secs2388 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add83 ( (  op_dash_mul32 ( ( (  d2387 ) .f_secs ) , (  ns_dash_in_dash_secs2388 ) ) ) , ( (  d2387 ) .f_nsecs ) ) );
}

static  uint32_t   u32_dash_or1365 (    uint32_t  l2391 ,    uint32_t  r2393 ) {
    return ( (  l2391 ) | (  r2393 ) );
}

static  uint32_t   u32_dash_ors1366 (    struct SmolArray_106  vals2396 ) {
    return ( (  reduce765 ) ( (  vals2396 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1365 ) ) );
}

static  uint32_t   u32_dash_ors1367 (    struct SmolArray_103  vals2396 ) {
    return ( (  reduce782 ) ( (  vals2396 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1365 ) ) );
}

static  uint32_t   u32_dash_ors1368 (    struct SmolArray_109  vals2396 ) {
    return ( (  reduce789 ) ( (  vals2396 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or1365 ) ) );
}

static  uint32_t   u32_dash_and1369 (    uint32_t  l2399 ,    uint32_t  r2401 ) {
    return ( (  l2399 ) & (  r2401 ) );
}

static  uint32_t   u32_dash_neg1370 (    uint32_t  l2404 ) {
    return ( ~ (  l2404 ) );
}

static  struct Scanner_329   mk1371 (    struct DynStr_134  s2443 ) {
    return ( (struct Scanner_329) { .f_s = ( (  chars984 ) ( (  s2443 ) ) ) } );
}

static  struct Maybe_801   scan_dash_int1372 (    struct Scanner_329 *  sc2446 ) {
    struct TakeWhile_558  digit_dash_chars2447 = ( (  take_dash_while581 ) ( (  sc2446 ) ,  (  is_dash_digit1229 ) ) );
    if ( ( (  null874 ) ( (  digit_dash_chars2447 ) ) ) ) {
        return ( (struct Maybe_801) { .tag = Maybe_801_None_t } );
    }
    ( (  drop_prime_876 ) ( (  sc2446 ) ,  ( (  count837 ) ( (  digit_dash_chars2447 ) ) ) ) );
    return ( (  parse_dash_int1231 ) ( (  digit_dash_chars2447 ) ) );
}

static  struct Termios_141   enable_dash_raw_dash_mode1373 (  ) {
    struct Termios_141  temp1374 = ( (  undefined140 ) ( ) );
    struct Termios_141 *  orig_dash_termios2460 = ( &temp1374 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr240 ) ( (  orig_dash_termios2460 ) ) ) ) );
    struct Termios_141  raw2461 = ( * (  orig_dash_termios2460 ) );
    raw2461 .f_c_dash_lflag = ( (  u32_dash_and1369 ) ( ( (  raw2461 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg1370 ) ( ( (  u32_dash_ors1367 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( (  echo116 ) ( ) ) , ( (  icanon117 ) ( ) ) , ( (  isig118 ) ( ) ) , ( ( (  iexten119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2461 .f_c_dash_iflag = ( (  u32_dash_and1369 ) ( ( (  raw2461 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg1370 ) ( ( (  u32_dash_ors1366 ) ( ( (  from_dash_listlike105 ) ( ( (struct Array_107) { ._arr = { ( (  brkint120 ) ( ) ) , ( (  icrnl121 ) ( ) ) , ( (  inpck122 ) ( ) ) , ( (  istrip123 ) ( ) ) , ( ( (  ixon124 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2461 .f_c_dash_oflag = ( (  u32_dash_and1369 ) ( ( (  raw2461 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg1370 ) ( ( (  u32_dash_ors1368 ) ( ( (  from_dash_listlike108 ) ( ( (struct Array_110) { ._arr = { ( ( (  opost125 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2461 .f_c_dash_cflag = ( (  u32_dash_or1365 ) ( ( (  raw2461 ) .f_c_dash_cflag ) ,  ( (  cs8126 ) ( ) ) ) );
    ( (  set1220 ) ( ( & ( (  raw2461 ) .f_c_dash_cc ) ) ,  ( (  vmin127 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1220 ) ( ( & ( (  raw2461 ) .f_c_dash_cc ) ) ,  ( (  vtime128 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr240 ) ( ( & (  raw2461 ) ) ) ) ) );
    return ( * (  orig_dash_termios2460 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1375 (    struct Termios_141 *  og_dash_termios2464 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  tcsa_dash_flush129 ) ( ) ) ,  ( (  cast_dash_ptr240 ) ( (  og_dash_termios2464 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1376 (    int32_t  timeout_dash_ms2468 ) {
    struct Pollfd_251  pfd2469 = ( (struct Pollfd_251) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp80 ( ( ( poll ) ( ( (  cast_dash_ptr250 ) ( ( & (  pfd2469 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2468 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2470 = ( ( (  zeroed266 ) ( ) ) );
    if ( (  cmp80 ( ( ( read ) ( ( (  stdin_dash_fileno115 ) ( ) ) ,  ( (  cast_dash_ptr233 ) ( ( & (  c2470 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2470 ) ) );
}

static  enum Unit_13   flush_dash_stdout1377 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr300 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1378 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1379 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1381 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2474;
    ;
};

struct env1382 {
    bool *  should_dash_resize2474;
};

struct funenv1382 {
    enum Unit_13  (*fun) (  struct env1382  ,    int32_t  );
    struct env1382 env;
};

struct funenv1382  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1383 ) {
    struct funenv1382  temp1384 = _intr_sigarr [  __intr__sig1383 ];
    temp1384.fun ( temp1384.env ,  __intr__sig1383 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1385 ,   struct funenv1382  __intr__fun1386 ) {
    _intr_sigarr [  __intr__sig1385 ] =  __intr__fun1386;
    signal(  __intr__sig1385 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1382 (   struct env1382 env ,    int32_t  dref2481 ) {
    (* env.should_dash_resize2474 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_717   mk1381 (   struct env1381 env ) {
    struct Termios_141  og_dash_termios2476 = ( (  enable_dash_raw_dash_mode1373 ) ( ) );
    ( (  hide_dash_cursor1299 ) ( ) );
    ( (  reset_dash_colors1311 ) ( ) );
    ( (  clear_dash_screen1312 ) ( ) );
    ( (  enable_dash_mouse1378 ) ( ) );
    ( (  flush_dash_stdout1377 ) ( ) );
    enum ColorPalette_718  palette2477 = ( (  query_dash_palette1306 ) ( ) );
    struct Tuple2_878  dims2478 = ( (  get_dash_dimensions1302 ) ( ) );
    uint32_t  fps2479 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2480 = ( (  now1358 ) ( ) );
    struct env1382 envinst1382 = {
        .should_dash_resize2474 = env.should_dash_resize2474 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1382){ .fun = lam1382, .env = envinst1382 } ) ) );
    return ( (struct Tui_717) { .f_width = ( (  fst877 ) ( (  dims2478 ) ) ) , .f_height = ( (  snd879 ) ( (  dims2478 ) ) ) , .f_target_dash_fps = (  fps2479 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2480 ) , .f_fps_dash_ts = (  last_dash_sync2480 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2476 ) , .f_palette = (  palette2477 ) } );
}

static  enum Unit_13   sync1387 (    struct Tui_717 *  tui2484 ) {
    if ( (  eq42 ( ( ( * (  tui2484 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2485 = (  op_dash_div85 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size315 ) ( ( ( * (  tui2484 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1388 = ( (  undefined138 ) ( ) );
    struct timespec *  now2486 = ( &temp1388 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  now2486 ) ) );
    int64_t  elapsed_dash_ns2487 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( * (  now2486 ) ) .tv_sec ) , ( ( ( * (  tui2484 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub84 ( ( ( * (  now2486 ) ) .tv_nsec ) , ( ( ( * (  tui2484 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2488 = (  op_dash_sub84 ( (  frame_dash_ns2485 ) , (  elapsed_dash_ns2487 ) ) );
    if ( (  cmp79 ( (  sleep_dash_ns2488 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1389 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2488 ) } );
        struct timespec *  ts2489 = ( &temp1389 );
        ( ( nanosleep ) ( (  ts2489 ) ,  ( (  null_dash_ptr304 ) ( ) ) ) );
    }
    struct timespec  temp1390 = ( (  undefined138 ) ( ) );
    struct timespec *  last_dash_sync2490 = ( &temp1390 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic111 ) ( ) ) ,  (  last_dash_sync2490 ) ) );
    (*  tui2484 ) .f_last_dash_sync = ( * (  last_dash_sync2490 ) );
    (*  tui2484 ) .f_fps_dash_count = (  op_dash_add92 ( ( ( * (  tui2484 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2491 = (  op_dash_add83 ( (  op_dash_mul32 ( (  op_dash_sub84 ( ( ( ( * (  tui2484 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2484 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div85 ( (  op_dash_sub84 ( ( ( ( * (  tui2484 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2484 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp79 ( (  fps_dash_elapsed_dash_ms2491 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2484 ) .f_actual_dash_fps = ( ( * (  tui2484 ) ) .f_fps_dash_count );
        (*  tui2484 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2484 ) .f_fps_dash_ts = ( ( * (  tui2484 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1391 (    struct Tui_717 *  tui2494 ) {
    ( (  disable_dash_mouse1379 ) ( ) );
    ( (  show_dash_cursor1298 ) ( ) );
    ( (  reset_dash_colors1311 ) ( ) );
    ( (  clear_dash_screen1312 ) ( ) );
    ( (  reset_dash_cursor_dash_position1301 ) ( ) );
    ( (  disable_dash_raw_dash_mode1375 ) ( ( & ( ( * (  tui2494 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1377 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_149   btn_dash_to_dash_mouse_dash_button1392 (    int64_t  btn2501 ) {
    return ( {  int32_t  dref2502 = ( (  i64_dash_i32312 ) ( (  btn2501 ) ) ) ;  dref2502 == 0 ? ( MouseButton_149_MouseLeft ) :  dref2502 == 1 ? ( MouseButton_149_MouseMiddle ) :  dref2502 == 2 ? ( MouseButton_149_MouseRight ) :  dref2502 == 64 ? ( MouseButton_149_ScrollUp ) :  dref2502 == 65 ? ( MouseButton_149_ScrollDown ) : ( (  panic_prime_1143 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1394 {
    enum {
        Maybe_1394_None_t,
        Maybe_1394_Just_t,
    } tag;
    union {
        struct {
            struct Key_602  field0;
        } Maybe_1394_Just_s;
    } stuff;
};

static struct Maybe_1394 Maybe_1394_Just (  struct Key_602  field0 ) {
    return ( struct Maybe_1394 ) { .tag = Maybe_1394_Just_t, .stuff = { .Maybe_1394_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1394   parse_dash_ss31393 (    char  c2505 ) {
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2505 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1394_Just ) ( ( (struct Key_602) { .tag = Key_602_F4_t } ) ) );
    }
    return ( (struct Maybe_1394) { .tag = Maybe_1394_None_t } );
}

static  struct Maybe_600   parse_dash_csi1395 (    struct DynStr_134  seq2508 ) {
    if ( (  eq45 ( ( ( (  seq2508 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    char  last2509 = (  elem_dash_get1188 ( ( (  seq2508 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  seq2508 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get1188 ( ( (  seq2508 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_329  temp1396 = ( (  mk1371 ) ( ( (  substr363 ) ( (  seq2508 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2508 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_329 *  sc2510 = ( &temp1396 );
        struct Maybe_801  dref2511 = ( (  scan_dash_int1372 ) ( (  sc2510 ) ) );
        if ( dref2511.tag == Maybe_801_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2511.tag == Maybe_801_Just_t ) {
            ( (  next571 ) ( (  sc2510 ) ) );
            struct Maybe_801  dref2513 = ( (  scan_dash_int1372 ) ( (  sc2510 ) ) );
            if ( dref2513.tag == Maybe_801_None_t ) {
                return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
            }
            else if ( dref2513.tag == Maybe_801_Just_t ) {
                ( (  next571 ) ( (  sc2510 ) ) );
                struct Maybe_801  dref2515 = ( (  scan_dash_int1372 ) ( (  sc2510 ) ) );
                if ( dref2515.tag == Maybe_801_None_t ) {
                    return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
                }
                else if ( dref2515.tag == Maybe_801_Just_t ) {
                    return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Mouse ) ( ( (struct MouseEvent_603) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1392 ) ( ( dref2511 .stuff .Maybe_801_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2513 .stuff .Maybe_801_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( ( dref2515 .stuff .Maybe_801_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2508 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    if ( (  eq47 ( (  last2509 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_329  temp1397 = ( (  mk1371 ) ( (  seq2508 ) ) );
        struct Scanner_329 *  sc2517 = ( &temp1397 );
        struct Maybe_801  dref2518 = ( (  scan_dash_int1372 ) ( (  sc2517 ) ) );
        if ( dref2518.tag == Maybe_801_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2518.tag == Maybe_801_Just_t ) {
            return ( {  int32_t  dref2520 = ( (  i64_dash_i32312 ) ( ( dref2518 .stuff .Maybe_801_Just_s .field0 ) ) ) ;  dref2520 == 1 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Home_t } ) ) ) ) ) :  dref2520 == 2 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Insert_t } ) ) ) ) ) :  dref2520 == 3 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Delete_t } ) ) ) ) ) :  dref2520 == 4 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_End_t } ) ) ) ) ) :  dref2520 == 5 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_PageUp_t } ) ) ) ) ) :  dref2520 == 6 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_PageDown_t } ) ) ) ) ) :  dref2520 == 15 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F5_t } ) ) ) ) ) :  dref2520 == 17 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F6_t } ) ) ) ) ) :  dref2520 == 18 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F7_t } ) ) ) ) ) :  dref2520 == 19 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F8_t } ) ) ) ) ) :  dref2520 == 20 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F9_t } ) ) ) ) ) :  dref2520 == 21 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F10_t } ) ) ) ) ) :  dref2520 == 23 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F11_t } ) ) ) ) ) :  dref2520 == 24 ? ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_F12_t } ) ) ) ) ) : ( (struct Maybe_600) { .tag = Maybe_600_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
}

static  struct Maybe_600   read_dash_key1398 (  ) {
    char  temp1399 = ( (  undefined136 ) ( ) );
    char *  ch2522 = ( &temp1399 );
    struct Maybe_49  dref2523 = ( (  read_dash_byte1376 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2523.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
    }
    else if ( dref2523.tag == Maybe_49_Just_t ) {
        (*  ch2522 ) = ( dref2523 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2525 = ( (  i32_dash_char1133 ) ( ( (  u32_dash_i32317 ) ( ( (  u32_dash_or1365 ) ( ( (  i32_dash_u32309 ) ( ( (  char_dash_i32953 ) ( ( * (  ch2522 ) ) ) ) ) ) ,  ( (  from_dash_hex1293 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( ( Key_602_Ctrl ) ( (  letter2525 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  ch2522 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1398 ) ( ) );
        } else {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( ( Key_602_Char ) ( ( * (  ch2522 ) ) ) ) ) ) ) );
        }
    }
    char  temp1400 = ( (  undefined136 ) ( ) );
    char *  ch22526 = ( &temp1400 );
    struct Maybe_49  dref2527 = ( (  read_dash_byte1376 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2527.tag == Maybe_49_None_t ) {
        return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
    }
    else if ( dref2527.tag == Maybe_49_Just_t ) {
        (*  ch22526 ) = ( dref2527 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22526 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_211  temp1401 = ( ( (  zeroed280 ) ( ) ) );
        struct Array_211 *  seq2529 = ( &temp1401 );
        int32_t  slen2530 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp80 ( (  slen2530 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1402 = ( (  undefined136 ) ( ) );
            char *  sc2531 = ( &temp1402 );
            struct Maybe_49  dref2532 = ( (  read_dash_byte1376 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2532.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2532.tag == Maybe_49_Just_t ) {
                (*  sc2531 ) = ( dref2532 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set1221 ) ( (  seq2529 ) ,  ( (  i32_dash_size311 ) ( (  slen2530 ) ) ) ,  ( * (  sc2531 ) ) ) );
            slen2530 = (  op_dash_add87 ( (  slen2530 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  sc2531 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp82 ( ( (  char_dash_u81132 ) ( ( * (  sc2531 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1395 ) ( ( (struct DynStr_134) { .f_contents = ( (  subslice335 ) ( ( (  as_dash_slice1222 ) ( (  seq2529 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( (  slen2530 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22526 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1403 = ( (  undefined136 ) ( ) );
        char *  sc2534 = ( &temp1403 );
        struct Maybe_49  dref2535 = ( (  read_dash_byte1376 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2535.tag == Maybe_49_None_t ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
        }
        else if ( dref2535.tag == Maybe_49_Just_t ) {
            (*  sc2534 ) = ( dref2535 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1394  dref2537 = ( (  parse_dash_ss31393 ) ( ( * (  sc2534 ) ) ) );
        if ( dref2537.tag == Maybe_1394_None_t ) {
            return ( (struct Maybe_600) { .tag = Maybe_600_None_t } );
        }
        else if ( dref2537.tag == Maybe_1394_Just_t ) {
            return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( dref2537 .stuff .Maybe_1394_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_600_Just ) ( ( ( InputEvent_601_Key ) ( ( (struct Key_602) { .tag = Key_602_Escape_t } ) ) ) ) );
}

struct env1404 {
    bool *  should_dash_resize2474;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1404 (   struct env1404 env ,    struct Tui_717 *  tui2541 ) {
    if ( ( ! ( * ( env.should_dash_resize2474 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2474 ) = ( false );
    struct Tuple2_878  dim2542 = ( (  get_dash_dimensions1302 ) ( ) );
    uint32_t  w2543 = ( (  fst877 ) ( (  dim2542 ) ) );
    uint32_t  h2544 = ( (  snd879 ) ( (  dim2542 ) ) );
    (*  tui2541 ) .f_width = (  w2543 );
    (*  tui2541 ) .f_height = (  h2544 );
    return ( true );
}

static  struct Cell_58   lam1406 (    struct Cell_58  dref2562 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Cell_58   lam1407 (    struct Cell_58  dref2564 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  struct Screen_716   mk_dash_screen1405 (    struct Tui_717 *  tui2558 ,    enum CAllocator_4  al2560 ) {
    struct Slice_632  cur2561 = ( (  allocate1206 ) ( (  al2560 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2558 ) ) .f_width ) , ( ( * (  tui2558 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1194 ) ( (  cur2561 ) ,  (  lam1406 ) ) );
    struct Slice_632  prev2563 = ( (  allocate1206 ) ( (  al2560 ) ,  ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( ( ( * (  tui2558 ) ) .f_width ) , ( ( * (  tui2558 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1195 ) ( (  prev2563 ) ,  (  lam1407 ) ) );
    return ( (struct Screen_716) { .f_current = (  cur2561 ) , .f_previous = (  prev2563 ) , .f_al = (  al2560 ) , .f_tui = (  tui2558 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1408 (    struct Screen_716 *  screen2567 ) {
    enum CAllocator_4  al2568 = ( ( * (  screen2567 ) ) .f_al );
    ( (  free1215 ) ( (  al2568 ) ,  ( ( * (  screen2567 ) ) .f_current ) ) );
    ( (  free1215 ) ( (  al2568 ) ,  ( ( * (  screen2567 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_58   lam1410 (    struct Cell_58  dref2572 ) {
    return ( (struct Cell_58) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1409 (    struct Screen_716 *  screen2571 ) {
    ( (  map1196 ) ( ( ( * (  screen2571 ) ) .f_current ) ,  (  lam1410 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1412 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_59  f_fg;
    struct Color_59  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1411 (    struct RenderState_1412 *  rs2576 ,    struct Cell_58 *  c2578 ,    uint32_t  x2580 ,    uint32_t  y2582 ) {
    if ( ( ( !  eq42 ( (  x2580 ) , ( ( * (  rs2576 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2582 ) , ( ( * (  rs2576 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1300 ) ( (  x2580 ) ,  (  y2582 ) ) );
        (*  rs2576 ) .f_x = (  x2580 );
        (*  rs2576 ) .f_y = (  y2582 );
    }
    char  char2583 = ( ( * (  c2578 ) ) .f_c );
    struct Color_59  bg2584 = ( ( * (  c2578 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2583 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2583 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2583 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2583 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2584 = ( ( Color_59_Color8 ) ( ( Color8_60_Red8 ) ) );
    }
    if ( ( !  eq64 ( ( ( * (  rs2576 ) ) .f_fg ) , ( ( * (  c2578 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1317 ) ( ( ( * (  c2578 ) ) .f_fg ) ) );
        (*  rs2576 ) .f_fg = ( ( * (  c2578 ) ) .f_fg );
    }
    if ( ( !  eq64 ( ( ( * (  rs2576 ) ) .f_bg ) , (  bg2584 ) ) ) ) {
        ( (  set_dash_bg1318 ) ( (  bg2584 ) ) );
        (*  rs2576 ) .f_bg = (  bg2584 );
    }
    ( (  print_dash_str28 ) ( (  char2583 ) ) );
    (*  rs2576 ) .f_x = (  op_dash_add92 ( ( ( * (  rs2576 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1413 (    struct Screen_716 *  screen2587 ) {
    int32_t  w2588 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2587 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2589 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2587 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1412  temp1414 = ( (struct RenderState_1412) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_bg = ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1412 *  rs2590 = ( &temp1414 );
    ( (  move_dash_cursor_dash_to1300 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_403  temp1415 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  h2589 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1416 =  next404 (&temp1415);
        if (  __cond1416 .tag == 0 ) {
            break;
        }
        int32_t  y2592 =  __cond1416 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1417 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  w2588 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1418 =  next404 (&temp1417);
            if (  __cond1418 .tag == 0 ) {
                break;
            }
            int32_t  x2594 =  __cond1418 .stuff .Maybe_369_Just_s .field0;
            size_t  i2595 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2592 ) , (  w2588 ) ) ) , (  x2594 ) ) ) ) );
            struct Cell_58 *  cur2596 = ( (  get_dash_ptr1162 ) ( ( ( * (  screen2587 ) ) .f_current ) ,  (  i2595 ) ) );
            struct Cell_58 *  prev2597 = ( (  get_dash_ptr1162 ) ( ( ( * (  screen2587 ) ) .f_previous ) ,  (  i2595 ) ) );
            if ( ( ( !  eq57 ( (  cur2596 ) , (  prev2597 ) ) ) || ( ( * (  screen2587 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2590 ) .f_changes = (  op_dash_add92 ( ( ( * (  rs2590 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1411 ) ( (  rs2590 ) ,  (  cur2596 ) ,  ( (  i32_dash_u32309 ) ( (  x2594 ) ) ) ,  ( (  i32_dash_u32309 ) ( (  y2592 ) ) ) ) );
                (*  prev2597 ) = ( * (  cur2596 ) );
            }
        }
    }
    (*  screen2587 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1311 ) ( ) );
    ( (  flush_dash_stdout1377 ) ( ) );
    return ( ( * (  rs2590 ) ) .f_changes );
}

struct funenv1404 {
    bool  (*fun) (  struct env1404  ,    struct Tui_717 *  );
    struct env1404 env;
};

struct env1419 {
    struct env1404 envinst1404;
    ;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1419 (   struct env1419 env ,    struct Screen_716 *  screen2600 ) {
    struct Tui_717 *  tui2601 = ( ( * (  screen2600 ) ) .f_tui );
    struct funenv1404  temp1420 = ( (struct funenv1404){ .fun = update_dash_dimensions1404, .env =  env.envinst1404  } );
    if ( ( ! ( temp1420.fun ( temp1420.env ,  (  tui2601 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2600 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2602 = ( ( * ( ( * (  screen2600 ) ) .f_tui ) ) .f_width );
    uint32_t  h2603 = ( ( * ( ( * (  screen2600 ) ) .f_tui ) ) .f_height );
    size_t  nusz2604 = ( (  u32_dash_size315 ) ( (  op_dash_mul94 ( (  w2602 ) , (  h2603 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2604 ) , ( ( ( * (  screen2600 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_716  nuscreen2605 = ( (  mk_dash_screen1405 ) ( (  tui2601 ) ,  ( ( * (  screen2600 ) ) .f_al ) ) );
    (*  screen2600 ) .f_current = ( (  nuscreen2605 ) .f_current );
    (*  screen2600 ) .f_previous = ( (  nuscreen2605 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1421 (    struct Screen_716 *  screen2608 ,    struct Color_59  c2610 ) {
    (*  screen2608 ) .f_default_dash_fg = (  c2610 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1422 (    struct Screen_716 *  screen2613 ,    struct Color_59  c2615 ) {
    (*  screen2613 ) .f_default_dash_bg = (  c2615 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1423 (    struct Screen_716 *  screen2618 ,    struct Color_59  fg2620 ,    struct Color_59  bg2622 ) {
    (*  screen2618 ) .f_default_dash_fg = (  fg2620 );
    (*  screen2618 ) .f_default_dash_bg = (  bg2622 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1155   get_dash_cell_dash_ptr1424 (    struct Screen_716 *  screen2629 ,    int32_t  x2631 ,    int32_t  y2633 ) {
    int32_t  w2634 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  x2631 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  x2631 ) , (  w2634 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1155) { .tag = Maybe_1155_None_t } );
    }
    if ( ( (  cmp80 ( (  y2633 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2633 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2629 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1155) { .tag = Maybe_1155_None_t } );
    }
    size_t  i2635 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2633 ) , (  w2634 ) ) ) , (  x2631 ) ) ) ) );
    return ( ( Maybe_1155_Just ) ( ( (  get_dash_ptr1162 ) ( ( ( * (  screen2629 ) ) .f_current ) ,  (  i2635 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1425 (    struct Screen_716 *  screen2638 ) {
    struct RangeIter_403  temp1426 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2638 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1427 =  next404 (&temp1426);
        if (  __cond1427 .tag == 0 ) {
            break;
        }
        int32_t  y2640 =  __cond1427 .stuff .Maybe_369_Just_s .field0;
        struct RangeIter_403  temp1428 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2638 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1429 =  next404 (&temp1428);
            if (  __cond1429 .tag == 0 ) {
                break;
            }
            int32_t  x2642 =  __cond1429 .stuff .Maybe_369_Just_s .field0;
            struct Cell_58 *  cell2643 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1424 ) ( (  screen2638 ) ,  (  x2642 ) ,  (  y2640 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2643 ) .f_bg = ( ( * (  screen2638 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1430 (    struct Screen_716 *  screen2646 ,    char  c2648 ,    int32_t  x2650 ,    int32_t  y2652 ) {
    int32_t  w2653 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2646 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp80 ( (  x2650 ) , (  w2653 ) ) != 0 ) || (  cmp80 ( (  y2652 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2646 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp80 ( (  x2650 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) || (  cmp80 ( (  y2652 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2654 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( (  op_dash_mul89 ( (  y2652 ) , (  w2653 ) ) ) , (  x2650 ) ) ) ) );
    struct Color_59  fg2655 = ( ( * (  screen2646 ) ) .f_default_dash_fg );
    struct Color_59  bg2656 = ( ( * (  screen2646 ) ) .f_default_dash_bg );
    char  c2657 = (  c2648 );
    ( (  set1174 ) ( ( ( * (  screen2646 ) ) .f_current ) ,  (  i2654 ) ,  ( (struct Cell_58) { .f_c = (  c2657 ) , .f_fg = (  fg2655 ) , .f_bg = (  bg2656 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam715 (   struct env715 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1431 (    struct Screen_716 *  screen2660 ,    int32_t  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env715 envinst715 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each714 ) ( ( (  zip537 ) ( ( (  chars965 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv715){ .fun = lam715, .env = envinst715 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam722 (   struct env722 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1432 (    struct Screen_716 *  screen2660 ,    struct StrConcat_971  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env722 envinst722 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each721 ) ( ( (  zip539 ) ( ( (  chars1109 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv722){ .fun = lam722, .env = envinst722 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam726 (   struct env726 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1433 (    struct Screen_716 *  screen2660 ,    struct StrConcat_986  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env726 envinst726 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each725 ) ( ( (  zip541 ) ( ( (  chars1110 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv726){ .fun = lam726, .env = envinst726 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam730 (   struct env730 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1434 (    struct Screen_716 *  screen2660 ,    struct StrConcat_988  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env730 envinst730 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each729 ) ( ( (  zip543 ) ( ( (  chars1111 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv730){ .fun = lam730, .env = envinst730 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam734 (   struct env734 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1435 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1014  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env734 envinst734 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each733 ) ( ( (  zip545 ) ( ( (  chars1112 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv734){ .fun = lam734, .env = envinst734 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam738 (   struct env738 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1436 (    struct Screen_716 *  screen2660 ,    struct StrConcat_17  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env738 envinst738 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each737 ) ( ( (  zip547 ) ( ( (  chars1055 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv738){ .fun = lam738, .env = envinst738 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam742 (   struct env742 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1437 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1016  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env742 envinst742 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each741 ) ( ( (  zip549 ) ( ( (  chars1019 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv742){ .fun = lam742, .env = envinst742 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam746 (   struct env746 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1438 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1023  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env746 envinst746 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each745 ) ( ( (  zip551 ) ( ( (  chars1113 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv746){ .fun = lam746, .env = envinst746 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam750 (   struct env750 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1439 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1028  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env750 envinst750 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each749 ) ( ( (  zip539 ) ( ( (  chars1114 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv750){ .fun = lam750, .env = envinst750 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam754 (   struct env754 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1440 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1042  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env754 envinst754 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each753 ) ( ( (  zip539 ) ( ( (  chars1115 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv754){ .fun = lam754, .env = envinst754 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam758 (   struct env758 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1441 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1046  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env758 envinst758 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each757 ) ( ( (  zip553 ) ( ( (  chars1116 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv758){ .fun = lam758, .env = envinst758 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam762 (   struct env762 env ,    struct Tuple2_393  dref2671 ) {
    ( (  put_dash_char1430 ) ( ( env.screen2660 ) ,  ( dref2671 .field0 ) ,  (  op_dash_add87 ( ( env.x2669 ) , ( dref2671 .field1 ) ) ) ,  ( env.y2666 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1442 (    struct Screen_716 *  screen2660 ,    struct StrConcat_1057  s2662 ,    int32_t  x2664 ,    int32_t  y2666 ) {
    int32_t  w2667 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp80 ( (  y2666 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp80 ( (  y2666 ) , ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2660 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  i2668 = (  op_dash_add87 ( (  op_dash_mul89 ( (  y2666 ) , (  w2667 ) ) ) , (  x2664 ) ) );
    int32_t  x2669 = ( (  min950 ) ( (  x2664 ) ,  (  w2667 ) ) );
    size_t  max_dash_len2670 = ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  w2667 ) , (  x2669 ) ) ) ) );
    struct env762 envinst762 = {
        .y2666 =  y2666 ,
        .screen2660 =  screen2660 ,
        .x2669 =  x2669 ,
    };
    ( (  for_dash_each761 ) ( ( (  zip555 ) ( ( (  chars1117 ) ( (  s2662 ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv762){ .fun = lam762, .env = envinst762 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1443 (    struct Screen_716 *  screen2676 ,    int32_t  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count841 ) ( ( (  chars965 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1431 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1444 (    struct Screen_716 *  screen2676 ,    struct StrConcat_971  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1109 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1432 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1445 (    struct Screen_716 *  screen2676 ,    struct StrConcat_986  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count845 ) ( ( (  chars1110 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1433 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1446 (    struct Screen_716 *  screen2676 ,    struct StrConcat_988  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count847 ) ( ( (  chars1111 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1434 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1447 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1014  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count849 ) ( ( (  chars1112 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1435 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1448 (    struct Screen_716 *  screen2676 ,    struct StrConcat_17  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count851 ) ( ( (  chars1055 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1436 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1449 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1016  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count853 ) ( ( (  chars1019 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1437 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1450 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1023  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count855 ) ( ( (  chars1113 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1438 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1451 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1028  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1114 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1439 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1452 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1042  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count843 ) ( ( (  chars1115 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1440 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1453 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1046  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count857 ) ( ( (  chars1116 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1441 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1454 (    struct Screen_716 *  screen2676 ,    struct StrConcat_1057  s2678 ,    int32_t  x2680 ,    int32_t  y2682 ) {
    int32_t  slen2683 = ( (  size_dash_i32313 ) ( ( (  count859 ) ( ( (  chars1117 ) ( (  s2678 ) ) ) ) ) ) );
    int32_t  w2684 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen2676 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2685 = (  op_dash_sub88 ( (  op_dash_sub88 ( (  w2684 ) , (  x2680 ) ) ) , (  slen2683 ) ) );
    ( (  draw_dash_str1442 ) ( (  screen2676 ) ,  (  s2678 ) ,  (  x2685 ) ,  (  y2682 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_356   try_dash_read_dash_contents1455 (    const char*  filename3204 ,    enum CAllocator_4  al3206 ) {
    FILE *  file3207 = ( ( fopen ) ( (  filename3204 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file3207 ) ) ) ) {
        return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    ( ( fseek ) ( (  file3207 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end113 ) ( ) ) ) );
    int32_t  file_dash_size3208 = ( ( ftell ) ( (  file3207 ) ) );
    ( ( fseek ) ( (  file3207 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set112 ) ( ) ) ) );
    struct Slice_5  file_dash_buf3209 = ( ( (  allocate1205 ) ( (  al3206 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  file_dash_size3208 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3209 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size3208 ) ,  (  file3207 ) ) );
    ( (  set1173 ) ( (  file_dash_buf3209 ) ,  ( (  i32_dash_size311 ) ( (  file_dash_size3208 ) ) ) ,  ( (  nullchar361 ) ( ) ) ) );
    ( ( fclose ) ( (  file3207 ) ) );
    struct DynStr_134  str3210 = ( (struct DynStr_134) { .f_contents = (  file_dash_buf3209 ) } );
    return ( ( Maybe_356_Just ) ( (  str3210 ) ) );
}

static  struct DynStr_134   read_dash_contents1456 (    const char*  filename3213 ,    enum CAllocator_4  al3215 ) {
    return ( (  or_dash_fail1146 ) ( ( (  try_dash_read_dash_contents1455 ) ( (  filename3213 ) ,  (  al3215 ) ) ) ,  ( ( StrConcat_1059_StrConcat ) ( ( ( StrConcat_1060_StrConcat ) ( ( "could not open file " ) ,  (  filename3213 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1457 (    const char*  filename3218 ,    struct DynStr_134  contents3220 ) {
    FILE *  file3221 = ( ( fopen ) ( (  filename3218 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null305 ) ( (  file3221 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_330  it3222 = ( (  chars984 ) ( (  contents3220 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref3223 = ( (  next371 ) ( ( & (  it3222 ) ) ) );
        if ( dref3223.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file3221 ) ) );
            return ( true );
        }
        else if ( dref3223.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written3225 = ( ( fprintf ) ( (  file3221 ) ,  ( "%c" ) ,  ( dref3223 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp80 ( (  chars_dash_written3225 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable1135 ) ( ) );
}

static  enum Unit_13   write_dash_contents1458 (    const char*  filename3228 ,    struct DynStr_134  contents3230 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1457 ) ( (  filename3228 ) ,  (  contents3230 ) ) ) ) ) {
        ( (  panic1142 ) ( ( ( StrConcat_1060_StrConcat ) ( ( "could not write to file " ) ,  (  filename3228 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1166   get1459 (  ) {
    return ( (struct Slice_1166) { .f_ptr = ( (  offset_dash_ptr169 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub99 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1460 (    char  c2688 ) {
    if ( (  eq47 ( (  c2688 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return (  from_dash_integral29 ( 2 ) );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  enum CharType_53   char_dash_type1461 (    char  c2698 ) {
    if ( ( (  is_dash_whitespace1223 ) ( (  c2698 ) ) ) ) {
        return ( CharType_53_CharSpace );
    } else {
        if ( ( ( ( (  is_dash_alphanumeric1227 ) ( (  c2698 ) ) ) || (  eq47 ( (  c2698 ) , ( (  from_dash_charlike1 ) ( ( "-" ) ) ) ) ) ) || (  eq47 ( (  c2698 ) , ( (  from_dash_charlike1 ) ( ( "_" ) ) ) ) ) ) ) {
            return ( CharType_53_CharWord );
        } else {
            return ( CharType_53_CharPunctuation );
        }
    }
}

static  bool   eq1464 (    struct Cursor_154  l2705 ,    struct Cursor_154  r2707 ) {
    return ( (  eq41 ( ( (  l2705 ) .f_x ) , ( (  r2707 ) .f_x ) ) ) && (  eq41 ( ( (  l2705 ) .f_y ) , ( (  r2707 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1465 (    struct Visual_891  dref2717 ) {
    return ( dref2717 .field0 );
}

struct Tuple2_1467 {
    struct Mode_892  field0;
    struct Mode_892  field1;
};

static struct Tuple2_1467 Tuple2_1467_Tuple2 (  struct Mode_892  field0 ,  struct Mode_892  field1 ) {
    return ( struct Tuple2_1467 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1466 (    struct Mode_892  l2722 ,    struct Mode_892  r2724 ) {
    struct Tuple2_1467  dref2725 = ( ( Tuple2_1467_Tuple2 ) ( (  l2722 ) ,  (  r2724 ) ) );
    if ( dref2725 .field0.tag == Mode_892_Normal_t && dref2725 .field1.tag == Mode_892_Normal_t ) {
        return ( true );
    }
    else if ( dref2725 .field0.tag == Mode_892_Insert_t && dref2725 .field1.tag == Mode_892_Insert_t ) {
        return ( true );
    }
    else if ( dref2725 .field0.tag == Mode_892_Select_t && dref2725 .field1.tag == Mode_892_Select_t ) {
        return ( true );
    }
    else if ( dref2725 .field0.tag == Mode_892_Cmd_t && dref2725 .field1.tag == Mode_892_Cmd_t ) {
        ( (  panic1137 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2725 .field0.tag == Mode_892_SearchBox_t && dref2725 .field1.tag == Mode_892_SearchBox_t ) {
        ( (  panic1137 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1468 (    struct Editor_890 *  ed2750 ,    int32_t  y2752 ) {
    return ( (  get_dash_ptr1235 ) ( ( & ( ( * (  ed2750 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2752 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1469 (    struct Editor_890 *  ed2755 ) {
    return ( (  get_dash_ptr1235 ) ( ( & ( ( * (  ed2755 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2755 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_560   indent_dash_on_dash_row1470 (    struct Editor_890 *  ed2758 ,    int32_t  y2760 ) {
    return ( (  take_dash_while582 ) ( ( (  get_dash_row1468 ) ( (  ed2758 ) ,  (  y2760 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
}

static  size_t   num_dash_rows1471 (    struct Editor_890 *  ed2763 ) {
    return ( (  size1291 ) ( ( & ( ( * (  ed2763 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1264 {
    enum Unit_13  (*fun) (  struct env1264  ,    struct List_323 *  ,    size_t  );
    struct env1264 env;
};

struct env1472 {
    ;
    ;
    struct env1264 envinst1264;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1472 (   struct env1472 env ,    struct Editor_890 *  ed2771 ,    int32_t  y2773 ) {
    struct List_3 *  next_dash_row2774 = ( (  get_dash_row1468 ) ( (  ed2771 ) ,  (  y2773 ) ) );
    ( (  free1247 ) ( (  next_dash_row2774 ) ) );
    struct funenv1264  temp1473 = ( (struct funenv1264){ .fun = remove1264, .env =  env.envinst1264  } );
    ( temp1473.fun ( temp1473.env ,  ( & ( ( * (  ed2771 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y2773 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_row_dash_empty1474 (    struct Editor_890 *  ed2777 ,    int32_t  y2779 ) {
    return ( (  all863 ) ( ( (  get_dash_row1468 ) ( (  ed2777 ) ,  (  y2779 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
}

static  struct Maybe_49   char_dash_at1475 (    struct Editor_890 *  ed2782 ,    struct Cursor_154  cur2784 ) {
    return ( (  try_dash_get1239 ) ( ( (  get_dash_row1468 ) ( (  ed2782 ) ,  ( (  cur2784 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur2784 ) .f_x ) ) ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1476 (    struct Editor_890 *  ed2787 ) {
    return ( (  try_dash_get1239 ) ( ( (  cursor_dash_row1469 ) ( (  ed2787 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2787 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_891   x_dash_to_dash_visual_dash_x1477 (    struct Editor_890 *  ed2790 ,    int32_t  x2792 ,    int32_t  y2794 ) {
    return ( ( Visual_891_Visual ) ( ( (  sum861 ) ( ( (  map376 ) ( ( (  take399 ) ( ( (  get_dash_row1468 ) ( (  ed2790 ) ,  (  y2794 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2792 ) ) ) ) ) ,  (  char_dash_len1460 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1478 (    struct Editor_890 *  ed2797 ,    struct Visual_891  dref2798 ,    int32_t  y2801 ) {
    int32_t  sum_dash_x2802 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2803 = ( (  get_dash_row1468 ) ( (  ed2797 ) ,  (  y2801 ) ) );
    struct RangeIter_403  temp1479 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( * (  chars2803 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1480 =  next404 (&temp1479);
        if (  __cond1480 .tag == 0 ) {
            break;
        }
        int32_t  x2805 =  __cond1480 .stuff .Maybe_369_Just_s .field0;
        sum_dash_x2802 = (  op_dash_add87 ( (  sum_dash_x2802 ) , ( (  char_dash_len1460 ) ( (  elem_dash_get2 ( (  chars2803 ) , ( (  i32_dash_size311 ) ( (  x2805 ) ) ) ) ) ) ) ) );
        if ( (  cmp80 ( ( dref2798 .field0 ) , (  sum_dash_x2802 ) ) == 0 ) ) {
            return (  x2805 );
        }
    }
    return ( (  size_dash_i32313 ) ( ( ( * (  chars2803 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1481 (    struct Editor_890 *  ed2808 ,    struct Maybe_157  sel2810 ) {
    if ( ( ( !  eq1466 ( ( ( * (  ed2808 ) ) .f_mode ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) || ( ! ( (  is_dash_just880 ) ( ( ( * (  ed2808 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2808 ) .f_selected = (  sel2810 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1482 (    struct Editor_890 *  ed2813 ) {
    struct Maybe_356  dref2814 = ( ( * (  ed2813 ) ) .f_msg );
    if ( dref2814.tag == Maybe_356_None_t ) {
    }
    else if ( dref2814.tag == Maybe_356_Just_t ) {
        ( (  free1210 ) ( ( ( * (  ed2813 ) ) .f_al ) ,  ( ( dref2814 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
        (*  ed2813 ) .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1483 {
    ;
    ;
    struct env1336 envinst1336;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1483 (   struct env1483 env ,    struct Editor_890 *  ed2818 ,    const char*  s2820 ) {
    ( (  reset_dash_msg1482 ) ( (  ed2818 ) ) );
    struct funenv1336  temp1484 = ( (struct funenv1336){ .fun = mk_dash_dyn_dash_str1336, .env =  env.envinst1336  } );
    struct DynStr_134  s2821 = ( temp1484.fun ( temp1484.env ,  (  s2820 ) ,  ( ( * (  ed2818 ) ) .f_al ) ) );
    (*  ed2818 ) .f_msg = ( ( Maybe_356_Just ) ( (  s2821 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1486 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1485 (    struct Editor_890 *  ed2825 ,    int32_t  x2827 ,    int32_t  y2829 ,    struct Dims_1486  dim2831 ) {
    struct Cursor_154  cur2832 = ( ( * (  ed2825 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2833 = ( !  eq41 ( ( (  cur2832 ) .f_x ) , (  x2827 ) ) );
    int32_t  y2834 = ( (  clamp959 ) ( (  y2829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2825 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2835 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  y2834 ) , (  op_dash_add87 ( ( ( * (  ed2825 ) ) .f_screen_dash_top ) , (  funny_dash_space2835 ) ) ) ) == 0 ) ) {
        (*  ed2825 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  y2834 ) , (  funny_dash_space2835 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  y2834 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2825 ) ) .f_screen_dash_top ) , ( (  dim2831 ) .f_rows ) ) ) , (  funny_dash_space2835 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2836 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  y2834 ) , (  funny_dash_space2835 ) ) ) , ( (  dim2831 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2825 ) .f_screen_dash_top = (  onscreen_dash_y2836 );
        } else {
        }
    }
    struct List_3 *  row2837 = ( (  get_dash_row1468 ) ( (  ed2825 ) ,  (  y2834 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2833 ) ) {
        int32_t  x2838 = ( (  clamp959 ) ( (  x2827 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  row2837 ) ) ) ) ) ) );
        (*  ed2825 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1477 ) ( (  ed2825 ) ,  (  x2838 ) ,  (  y2834 ) ) );
    }
    struct Visual_891  vx2839 = ( ( * (  ed2825 ) ) .f_goal_dash_x );
    int32_t  x2840 = ( (  visual_dash_x_dash_to_dash_x1478 ) ( (  ed2825 ) ,  (  vx2839 ) ,  (  y2834 ) ) );
    int32_t  funny_dash_space2841 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp80 ( (  x2840 ) , (  op_dash_add87 ( ( ( * (  ed2825 ) ) .f_screen_dash_left ) , (  funny_dash_space2841 ) ) ) ) == 0 ) ) {
        (*  ed2825 ) .f_screen_dash_left = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  x2840 ) , (  funny_dash_space2841 ) ) ) ) );
    } else {
        if ( (  cmp80 ( (  x2840 ) , (  op_dash_sub88 ( (  op_dash_sub88 ( (  op_dash_add87 ( ( ( * (  ed2825 ) ) .f_screen_dash_left ) , ( (  dim2831 ) .f_cols ) ) ) , (  funny_dash_space2841 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2842 = (  op_dash_add87 ( (  op_dash_sub88 ( (  op_dash_add87 ( (  x2840 ) , (  funny_dash_space2841 ) ) ) , ( (  dim2831 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2825 ) .f_screen_dash_left = (  onscreen_dash_x2842 );
        } else {
        }
    }
    (*  ed2825 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  x2840 ) , .f_y = (  y2834 ) } );
    ( (  set_dash_selection1481 ) ( (  ed2825 ) ,  ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1487 (    struct Editor_890 *  ed2845 ,    int32_t  x2847 ,    struct Dims_1486  dim2849 ) {
    ( (  move_dash_to1485 ) ( (  ed2845 ) ,  (  x2847 ) ,  ( ( ( * (  ed2845 ) ) .f_cursor ) .f_y ) ,  (  dim2849 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1488 (    struct Editor_890 *  ed2852 ,    int32_t  y2854 ,    struct Dims_1486  dim2856 ) {
    ( (  move_dash_to1485 ) ( (  ed2852 ) ,  ( ( ( * (  ed2852 ) ) .f_cursor ) .f_x ) ,  (  y2854 ) ,  (  dim2856 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1489 (    struct Editor_890 *  ed2859 ,    struct Dims_1486  dim2861 ) {
    struct Cursor_154  cur2862 = ( ( * (  ed2859 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2859 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2859 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1488 ) ( (  ed2859 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2859 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2861 ) ) );
            ( (  move_dash_to_dash_col1487 ) ( (  ed2859 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1469 ) ( (  ed2859 ) ) ) ) .f_count ) ) ) ,  (  dim2861 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1487 ) ( (  ed2859 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed2859 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2861 ) ) );
    }
    return ( !  eq1464 ( ( ( * (  ed2859 ) ) .f_cursor ) , (  cur2862 ) ) );
}

static  bool   move_dash_right1490 (    struct Editor_890 *  ed2865 ,    struct Dims_1486  dims2867 ) {
    struct Cursor_154  cur2868 = ( ( * (  ed2865 ) ) .f_cursor );
    int32_t  row_dash_len2869 = ( (  size_dash_i32313 ) ( ( ( * ( (  cursor_dash_row1469 ) ( (  ed2865 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2865 ) ) .f_cursor ) .f_x ) , (  row_dash_len2869 ) ) ) ) {
        if ( (  cmp80 ( ( ( ( * (  ed2865 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed2865 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1485 ) ( (  ed2865 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed2865 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2867 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1487 ) ( (  ed2865 ) ,  (  op_dash_add87 ( ( ( ( * (  ed2865 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2867 ) ) );
    }
    return ( !  eq1464 ( ( ( * (  ed2865 ) ) .f_cursor ) , (  cur2868 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1491 (    struct Editor_890 *  ed2872 ,    struct Dims_1486  dims2874 ) {
    int32_t  off2875 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( ( (  indent_dash_on_dash_row1470 ) ( (  ed2872 ) ,  ( ( ( * (  ed2872 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1487 ) ( (  ed2872 ) ,  (  off2875 ) ,  (  dims2874 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1492 (    struct Editor_890 *  ed2878 ,    struct Dims_1486  dims2880 ) {
    struct List_3 *  currow2881 = ( (  cursor_dash_row1469 ) ( (  ed2878 ) ) );
    ( (  move_dash_to_dash_col1487 ) ( (  ed2878 ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  currow2881 ) ) ) ) ) ,  (  dims2880 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1493 (    struct Editor_890 *  ed2887 ,    int32_t  col2889 ,    int32_t  row2891 ) {
    return (  eq41 ( (  col2889 ) , ( (  size_dash_i32313 ) ( ( (  size1290 ) ( ( (  get_dash_row1468 ) ( (  ed2887 ) ,  (  row2891 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1494 (    struct Editor_890 *  ed2894 ) {
    return (  eq41 ( ( ( ( * (  ed2894 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  size1290 ) ( ( (  cursor_dash_row1469 ) ( (  ed2894 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1495 (    struct Editor_890 *  ed2897 ,    struct Maybe_356  clip2899 ) {
    struct Maybe_356  dref2900 = ( ( * (  ed2897 ) ) .f_clipboard );
    if ( dref2900.tag == Maybe_356_None_t ) {
    }
    else if ( dref2900.tag == Maybe_356_Just_t ) {
        ( (  free1210 ) ( ( ( * (  ed2897 ) ) .f_al ) ,  ( ( dref2900 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2897 ) .f_clipboard = (  clip2899 );
    return ( Unit_13_Unit );
}

struct funenv1327 {
    enum Unit_13  (*fun) (  struct env1327  ,    struct StrBuilder_626 *  ,    struct Slice_5  );
    struct env1327 env;
};

struct env1496 {
    struct env1321 envinst1321;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1327 envinst1327;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct Maybe_356   copy_dash_selection1496 (   struct env1496 env ,    struct Editor_890 *  ed2904 ) {
    struct Maybe_157  dref2905 = ( ( * (  ed2904 ) ) .f_selected );
    if ( dref2905.tag == Maybe_157_None_t ) {
        struct Maybe_49  dref2906 = ( (  char_dash_at_dash_cursor1476 ) ( (  ed2904 ) ) );
        if ( dref2906.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_356) { .tag = Maybe_356_None_t } );
        }
        else if ( dref2906.tag == Maybe_49_Just_t ) {
            struct StrBuilder_626  temp1497 = ( (  mk1333 ) ( ( ( * (  ed2904 ) ) .f_al ) ) );
            struct StrBuilder_626 *  sb2908 = ( &temp1497 );
            struct funenv699  temp1498 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
            ( temp1498.fun ( temp1498.env ,  (  sb2908 ) ,  ( dref2906 .stuff .Maybe_49_Just_s .field0 ) ) );
            return ( ( Maybe_356_Just ) ( ( (  as_dash_str977 ) ( (  sb2908 ) ) ) ) );
        }
    }
    else if ( dref2905.tag == Maybe_157_Just_t ) {
        struct StrBuilder_626  temp1499 = ( (  mk1333 ) ( ( ( * (  ed2904 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb2910 = ( &temp1499 );
        struct Cursor_154  from2911 = ( (  min948 ) ( ( dref2905 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed2904 ) ) .f_cursor ) ) );
        struct Cursor_154  to2912 = ( (  max955 ) ( ( dref2905 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed2904 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2911 ) .f_y ) , ( (  to2912 ) .f_y ) ) ) ) {
            struct List_3 *  currow2913 = ( (  get_dash_row1468 ) ( (  ed2904 ) ,  ( (  from2911 ) .f_y ) ) );
            struct funenv1327  temp1500 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1500.fun ( temp1500.env ,  (  sb2910 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  currow2913 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from2911 ) .f_x ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to2912 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1493 ) ( (  ed2904 ) ,  ( (  to2912 ) .f_x ) ,  ( (  to2912 ) .f_y ) ) ) ) {
                struct funenv1321  temp1501 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
                ( temp1501.fun ( temp1501.env ,  (  sb2910 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        } else {
            ( (  assert1144 ) ( (  cmp80 ( ( (  to2912 ) .f_y ) , ( (  from2911 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2914 = ( (  get_dash_row1468 ) ( (  ed2904 ) ,  ( (  from2911 ) .f_y ) ) );
            struct funenv1327  temp1502 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1502.fun ( temp1502.env ,  (  sb2910 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  currow2914 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  from2911 ) .f_x ) ) ) ,  ( (  size1290 ) ( (  currow2914 ) ) ) ) ) ) );
            struct funenv1321  temp1503 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
            ( temp1503.fun ( temp1503.env ,  (  sb2910 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_321  temp1504 =  into_dash_iter325 ( ( (  subslice326 ) ( ( (  to_dash_slice1286 ) ( ( ( * (  ed2904 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from2911 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  to2912 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_355  __cond1505 =  next389 (&temp1504);
                if (  __cond1505 .tag == 0 ) {
                    break;
                }
                struct List_3  row2916 =  __cond1505 .stuff .Maybe_355_Just_s .field0;
                struct funenv1327  temp1506 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
                ( temp1506.fun ( temp1506.env ,  (  sb2910 ) ,  ( (  to_dash_slice1285 ) ( (  row2916 ) ) ) ) );
                struct funenv1321  temp1507 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
                ( temp1507.fun ( temp1507.env ,  (  sb2910 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2917 = ( (  get_dash_row1468 ) ( (  ed2904 ) ,  ( (  to2912 ) .f_y ) ) );
            struct funenv1327  temp1508 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1508.fun ( temp1508.env ,  (  sb2910 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  lastrow2917 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  to2912 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1493 ) ( (  ed2904 ) ,  ( (  to2912 ) .f_x ) ,  ( (  to2912 ) .f_y ) ) ) ) {
                struct funenv1321  temp1509 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
                ( temp1509.fun ( temp1509.env ,  (  sb2910 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_134  s2918 = ( (  as_dash_str977 ) ( (  sb2910 ) ) );
        return ( ( Maybe_356_Just ) ( (  s2918 ) ) );
    }
}

struct funenv1496 {
    struct Maybe_356  (*fun) (  struct env1496  ,    struct Editor_890 *  );
    struct env1496 env;
};

struct env1510 {
    struct env1496 envinst1496;
    ;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection_dash_to_dash_clipboard1510 (   struct env1510 env ,    struct Editor_890 *  ed2921 ) {
    struct funenv1496  temp1511 = ( (struct funenv1496){ .fun = copy_dash_selection1496, .env =  env.envinst1496  } );
    ( (  set_dash_clipboard1495 ) ( (  ed2921 ) ,  ( temp1511.fun ( temp1511.env ,  (  ed2921 ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1261 {
    enum Unit_13  (*fun) (  struct env1261  ,    struct List_323 *  ,    size_t  ,    struct List_3  );
    struct env1261 env;
};

struct funenv1258 {
    enum Unit_13  (*fun) (  struct env1258  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1258 env;
};

struct funenv1274 {
    enum Unit_13  (*fun) (  struct env1274  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1274 env;
};

struct funenv1472 {
    enum Unit_13  (*fun) (  struct env1472  ,    struct Editor_890 *  ,    int32_t  );
    struct env1472 env;
};

struct env1512 {
    struct env1261 envinst1261;
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
    struct env1265 envinst1265;
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
    ;
    struct env1274 envinst1274;
    ;
    struct env620 envinst620;
    struct env1472 envinst1472;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   apply_dash_primitive1512 (   struct env1512 env ,    struct Editor_890 *  ed2925 ,    struct Primitive_153  prim2927 ,    struct Dims_1486  dims2929 ) {
    struct Primitive_153  dref2930 = (  prim2927 );
    if ( dref2930.tag == Primitive_153_PrimInsert_t ) {
        int32_t  x2933 = ( ( dref2930 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_x );
        int32_t  y2934 = ( ( dref2930 .stuff .Primitive_153_PrimInsert_s .field0 ) .f_y );
        if ( (  cmp9 ( ( (  i32_dash_size311 ) ( (  y2934 ) ) ) , ( (  num_dash_rows1471 ) ( (  ed2925 ) ) ) ) != 0 ) ) {
            struct funenv620  temp1513 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
            ( temp1513.fun ( temp1513.env ,  ( & ( ( * (  ed2925 ) ) .f_current_dash_file ) ) ,  ( (  mk1244 ) ( ( ( * (  ed2925 ) ) .f_al ) ) ) ) );
        }
        struct SliceIter_330  temp1514 =  into_dash_iter334 ( ( ( dref2930 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) );
        while (true) {
            struct Maybe_49  __cond1515 =  next371 (&temp1514);
            if (  __cond1515 .tag == 0 ) {
                break;
            }
            char  c2936 =  __cond1515 .stuff .Maybe_49_Just_s .field0;
            if ( (  eq47 ( (  c2936 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) {
                struct List_3 *  cur_dash_line2937 = ( (  get_dash_row1468 ) ( (  ed2925 ) ,  (  y2934 ) ) );
                struct List_3  temp1516 = ( (  mk1244 ) ( ( ( * (  ed2925 ) ) .f_al ) ) );
                struct List_3 *  nurow2938 = ( &temp1516 );
                struct funenv1272  temp1517 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  env.envinst1272  } );
                ( temp1517.fun ( temp1517.env ,  (  nurow2938 ) ,  ( (  from1178 ) ( ( (  to_dash_slice1285 ) ( ( * (  cur_dash_line2937 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2933 ) ) ) ) ) ) );
                ( (  trim1278 ) ( (  cur_dash_line2937 ) ,  ( (  i32_dash_size311 ) ( (  x2933 ) ) ) ) );
                struct funenv1261  temp1518 = ( (struct funenv1261){ .fun = insert1261, .env =  env.envinst1261  } );
                ( temp1518.fun ( temp1518.env ,  ( & ( ( * (  ed2925 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( (  y2934 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2938 ) ) ) );
                y2934 = (  op_dash_add87 ( (  y2934 ) , (  from_dash_integral29 ( 1 ) ) ) );
                x2933 = (  from_dash_integral29 ( 0 ) );
            } else {
                struct funenv1258  temp1519 = ( (struct funenv1258){ .fun = insert1258, .env =  env.envinst1258  } );
                ( temp1519.fun ( temp1519.env ,  ( (  get_dash_row1468 ) ( (  ed2925 ) ,  (  y2934 ) ) ) ,  ( (  i32_dash_size311 ) ( (  x2933 ) ) ) ,  (  c2936 ) ) );
                x2933 = (  op_dash_add87 ( (  x2933 ) , (  from_dash_integral29 ( 1 ) ) ) );
            }
        }
        (*  ed2925 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1477 ) ( (  ed2925 ) ,  (  x2933 ) ,  (  y2934 ) ) );
        ( (  move_dash_to1485 ) ( (  ed2925 ) ,  (  x2933 ) ,  (  y2934 ) ,  (  dims2929 ) ) );
    }
    else if ( dref2930.tag == Primitive_153_PrimDelete_t ) {
        struct RangeIter_403  temp1520 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1521 =  next404 (&temp1520);
            if (  __cond1521 .tag == 0 ) {
                break;
            }
            int32_t  dref2941 =  __cond1521 .stuff .Maybe_369_Just_s .field0;
            struct List_3 *  row2942 = ( (  get_dash_row1468 ) ( (  ed2925 ) ,  ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
            if ( (  cmp9 ( ( (  i32_dash_size311 ) ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) , ( ( * (  row2942 ) ) .f_count ) ) != 0 ) ) {
                if ( (  cmp80 ( (  op_dash_add87 ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( (  num_dash_rows1471 ) ( (  ed2925 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  next_dash_row2943 = ( (  get_dash_row1468 ) ( (  ed2925 ) ,  (  op_dash_add87 ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1274  temp1522 = ( (struct funenv1274){ .fun = add_dash_all1274, .env =  env.envinst1274  } );
                    ( temp1522.fun ( temp1522.env ,  (  row2942 ) ,  (  next_dash_row2943 ) ) );
                    struct funenv1472  temp1523 = ( (struct funenv1472){ .fun = remove_dash_row1472, .env =  env.envinst1472  } );
                    ( temp1523.fun ( temp1523.env ,  (  ed2925 ) ,  (  op_dash_add87 ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                struct funenv1265  temp1524 = ( (struct funenv1265){ .fun = remove1265, .env =  env.envinst1265  } );
                ( temp1524.fun ( temp1524.env ,  (  row2942 ) ,  ( (  i32_dash_size311 ) ( ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ) ) ) );
            }
        }
        (*  ed2925 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1477 ) ( (  ed2925 ) ,  ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ) );
        ( (  move_dash_to1485 ) ( (  ed2925 ) ,  ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_x ) ,  ( ( dref2930 .stuff .Primitive_153_PrimDelete_s .field0 ) .f_y ) ,  (  dims2929 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Primitive_153   invert_dash_primitive1525 (    struct Primitive_153  prim2946 ) {
    struct Primitive_153  dref2947 = (  prim2946 );
    if ( dref2947.tag == Primitive_153_PrimInsert_t ) {
        return ( ( Primitive_153_PrimDelete ) ( ( dref2947 .stuff .Primitive_153_PrimInsert_s .field0 ) ,  ( dref2947 .stuff .Primitive_153_PrimInsert_s .field1 ) ) );
    }
    else if ( dref2947.tag == Primitive_153_PrimDelete_t ) {
        return ( ( Primitive_153_PrimInsert ) ( ( dref2947 .stuff .Primitive_153_PrimDelete_s .field0 ) ,  ( dref2947 .stuff .Primitive_153_PrimDelete_s .field1 ) ) );
    }
}

static  enum Unit_13   free_dash_primitive1526 (    struct Primitive_153  prim2954 ,    enum CAllocator_4  al2956 ) {
    struct Primitive_153  dref2957 = (  prim2954 );
    if ( dref2957.tag == Primitive_153_PrimInsert_t ) {
        ( (  free1210 ) ( (  al2956 ) ,  ( ( dref2957 .stuff .Primitive_153_PrimInsert_s .field1 ) .f_contents ) ) );
    }
    else if ( dref2957.tag == Primitive_153_PrimDelete_t ) {
        ( (  free1210 ) ( (  al2956 ) ,  ( ( dref2957 .stuff .Primitive_153_PrimDelete_s .field1 ) .f_contents ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam680 (   struct env680 env ,    struct Action_152  action2971 ) {
    return ( (  free_dash_primitive1526 ) ( ( (  action2971 ) .f_prim ) ,  ( env.al2966 ) ) );
}

static  enum Unit_13   free_dash_action1527 (    struct Either_182  action2964 ,    enum CAllocator_4  al2966 ) {
    struct Either_182  dref2967 = (  action2964 );
    if ( dref2967.tag == Either_182_Right_t ) {
        ( (  free_dash_primitive1526 ) ( ( ( dref2967 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  al2966 ) ) );
    }
    else if ( dref2967.tag == Either_182_Left_t ) {
        struct env680 envinst680 = {
            .al2966 =  al2966 ,
        };
        ( (  for_dash_each679 ) ( ( dref2967 .stuff .Either_182_Left_s .field0 ) ,  ( (struct funenv680){ .fun = lam680, .env = envinst680 } ) ) );
        ( (  free1211 ) ( (  al2966 ) ,  ( dref2967 .stuff .Either_182_Left_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   start_dash_changeset1528 (    struct Editor_890 *  ed2974 ) {
    ( (  assert1144 ) ( ( ! ( (  is_dash_just882 ) ( ( ( ( * (  ed2974 ) ) .f_actions ) .f_changeset ) ) ) ) ,  ( "unfinished changeset SOMEHOW!" ) ) );
    (*  ed2974 ) .f_actions .f_changeset = ( ( Maybe_883_Just ) ( ( (  mk1246 ) ( ( ( * (  ed2974 ) ) .f_al ) ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1256 {
    enum Unit_13  (*fun) (  struct env1256  ,    struct List_895 *  ,    struct Either_182  );
    struct env1256 env;
};

struct env1529 {
    ;
    struct env1256 envinst1256;
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

static  enum Unit_13   end_dash_changeset1529 (   struct env1529 env ,    struct Editor_890 *  ed2977 ) {
    struct List_160  changeset2978 = ( (  or_dash_fail1153 ) ( ( ( ( * (  ed2977 ) ) .f_actions ) .f_changeset ) ,  ( "nonexistent changeset" ) ) );
    ( (  assert1144 ) ( (  eq45 ( ( ( ( * (  ed2977 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed2977 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  ( "no new changes shouldve been added!" ) ) );
    (*  ed2977 ) .f_actions .f_changeset = ( (struct Maybe_883) { .tag = Maybe_883_None_t } );
    if ( (  eq45 ( ( (  changeset2978 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  free1248 ) ( ( & (  changeset2978 ) ) ) );
        return ( Unit_13_Unit );
    }
    struct Slice_161  changeset2979 = ( (  to_dash_slice1288 ) ( (  changeset2978 ) ) );
    struct funenv1256  temp1530 = ( (struct funenv1256){ .fun = add1256, .env =  env.envinst1256  } );
    ( temp1530.fun ( temp1530.env ,  ( & ( ( ( * (  ed2977 ) ) .f_actions ) .f_list ) ) ,  ( ( Either_182_Left ) ( (  changeset2979 ) ) ) ) );
    (*  ed2977 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed2977 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1254 {
    enum Unit_13  (*fun) (  struct env1254  ,    struct List_160 *  ,    struct Action_152  );
    struct env1254 env;
};

struct env1531 {
    ;
    ;
    ;
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
};

static  enum Unit_13   lam684 (   struct env684 env ,    struct Either_182  action2988 ) {
    return ( (  free_dash_action1527 ) ( (  action2988 ) ,  ( env.al2986 ) ) );
}

static  enum Unit_13   push_dash_action1531 (   struct env1531 env ,    struct Actions_894 *  actions2982 ,    struct Action_152  action2984 ,    enum CAllocator_4  al2986 ) {
    struct env684 envinst684 = {
        .al2986 =  al2986 ,
    };
    ( (  for_dash_each683 ) ( ( (  from1179 ) ( ( (  to_dash_slice1287 ) ( ( ( * (  actions2982 ) ) .f_list ) ) ) ,  ( ( * (  actions2982 ) ) .f_cur ) ) ) ,  ( (struct funenv684){ .fun = lam684, .env = envinst684 } ) ) );
    ( (  trim1279 ) ( ( & ( ( * (  actions2982 ) ) .f_list ) ) ,  ( ( * (  actions2982 ) ) .f_cur ) ) );
    struct Actions_894 *  dref2989 = (  actions2982 );
    if ( (* dref2989 ) .f_changeset.tag == Maybe_883_Just_t ) {
        struct funenv1254  temp1532 = ( (struct funenv1254){ .fun = add1254, .env =  env.envinst1254  } );
        ( temp1532.fun ( temp1532.env ,  ( & ( (* dref2989 ) .f_changeset .stuff .Maybe_883_Just_s .field0 ) ) ,  (  action2984 ) ) );
    }
    else if ( true ) {
        struct funenv1256  temp1533 = ( (struct funenv1256){ .fun = add1256, .env =  env.envinst1256  } );
        ( temp1533.fun ( temp1533.env ,  ( & ( ( * (  actions2982 ) ) .f_list ) ) ,  ( ( Either_182_Right ) ( (  action2984 ) ) ) ) );
        (*  actions2982 ) .f_cur = (  op_dash_add98 ( ( ( * (  actions2982 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1531 {
    enum Unit_13  (*fun) (  struct env1531  ,    struct Actions_894 *  ,    struct Action_152  ,    enum CAllocator_4  );
    struct env1531 env;
};

struct env1534 {
    ;
    struct env1321 envinst1321;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1327 envinst1327;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1531 envinst1531;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   flush_dash_insert1534 (   struct env1534 env ,    struct Editor_890 *  ed2993 ) {
    struct Maybe_157  dref2994 = ( ( * (  ed2993 ) ) .f_insert_dash_start );
    if ( dref2994.tag == Maybe_157_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2994.tag == Maybe_157_Just_t ) {
        struct Cursor_154  start2996 = ( dref2994 .stuff .Maybe_157_Just_s .field0 );
        (*  ed2993 ) .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        int32_t  del_dash_count2997 = (  from_dash_integral29 ( 0 ) );
        struct Maybe_885  dref2998 = ( ( * (  ed2993 ) ) .f_delete_dash_acc );
        if ( dref2998.tag == Maybe_885_None_t ) {
        }
        else if ( dref2998.tag == Maybe_885_Just_t ) {
            struct DynStr_134  del_dash_text3000 = ( (  as_dash_str977 ) ( ( & ( dref2998 .stuff .Maybe_885_Just_s .field0 ) ) ) );
            (*  ed2993 ) .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
            if ( (  cmp9 ( ( ( (  del_dash_text3000 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                del_dash_count2997 = ( (  size_dash_i32313 ) ( ( ( (  del_dash_text3000 ) .f_contents ) .f_count ) ) );
                struct StrBuilder_626  temp1535 = ( (  mk1333 ) ( ( ( * (  ed2993 ) ) .f_al ) ) );
                struct StrBuilder_626 *  rev_dash_sb3001 = ( &temp1535 );
                struct RangeIter_403  temp1536 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  del_dash_count2997 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_369  __cond1537 =  next404 (&temp1536);
                    if (  __cond1537 .tag == 0 ) {
                        break;
                    }
                    int32_t  i3003 =  __cond1537 .stuff .Maybe_369_Just_s .field0;
                    struct funenv699  temp1538 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
                    ( temp1538.fun ( temp1538.env ,  (  rev_dash_sb3001 ) ,  (  elem_dash_get1188 ( ( (  del_dash_text3000 ) .f_contents ) , ( (  i32_dash_size311 ) ( (  op_dash_sub88 ( (  op_dash_sub88 ( (  del_dash_count2997 ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  i3003 ) ) ) ) ) ) ) ) );
                }
                ( (  free1210 ) ( ( ( * (  ed2993 ) ) .f_al ) ,  ( (  del_dash_text3000 ) .f_contents ) ) );
                struct DynStr_134  rev_dash_text3004 = ( (  as_dash_str977 ) ( (  rev_dash_sb3001 ) ) );
                struct Cursor_154  del_dash_pos3005 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start2996 ) .f_x ) , (  del_dash_count2997 ) ) ) , .f_y = ( (  start2996 ) .f_y ) } );
                struct funenv1531  temp1539 = ( (struct funenv1531){ .fun = push_dash_action1531, .env =  env.envinst1531  } );
                ( temp1539.fun ( temp1539.env ,  ( & ( ( * (  ed2993 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  del_dash_pos3005 ) ,  (  rev_dash_text3004 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed2993 ) ) .f_al ) ) );
            } else {
                ( (  free1210 ) ( ( ( * (  ed2993 ) ) .f_al ) ,  ( (  del_dash_text3000 ) .f_contents ) ) );
            }
        }
        struct Cursor_154  adj_dash_start3006 = ( (struct Cursor_154) { .f_x = (  op_dash_sub88 ( ( (  start2996 ) .f_x ) , (  del_dash_count2997 ) ) ) , .f_y = ( (  start2996 ) .f_y ) } );
        if ( (  eq1464 ( (  adj_dash_start3006 ) , ( ( * (  ed2993 ) ) .f_cursor ) ) ) ) {
            return ( Unit_13_Unit );
        }
        struct StrBuilder_626  temp1540 = ( (  mk1333 ) ( ( ( * (  ed2993 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb3007 = ( &temp1540 );
        if ( (  eq41 ( ( (  adj_dash_start3006 ) .f_y ) , ( ( ( * (  ed2993 ) ) .f_cursor ) .f_y ) ) ) ) {
            struct List_3 *  row3008 = ( (  get_dash_row1468 ) ( (  ed2993 ) ,  ( (  adj_dash_start3006 ) .f_y ) ) );
            struct funenv1327  temp1541 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1541.fun ( temp1541.env ,  (  sb3007 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3008 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3006 ) .f_x ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2993 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        } else {
            struct List_3 *  first_dash_row3009 = ( (  get_dash_row1468 ) ( (  ed2993 ) ,  ( (  adj_dash_start3006 ) .f_y ) ) );
            struct funenv1327  temp1542 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1542.fun ( temp1542.env ,  (  sb3007 ) ,  ( (  from1178 ) ( ( (  to_dash_slice1285 ) ( ( * (  first_dash_row3009 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  adj_dash_start3006 ) .f_x ) ) ) ) ) ) );
            struct funenv1321  temp1543 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
            ( temp1543.fun ( temp1543.env ,  (  sb3007 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct Zip_380  temp1544 =  into_dash_iter396 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1286 ) ( ( ( * (  ed2993 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  adj_dash_start3006 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2993 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  adj_dash_start3006 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
            while (true) {
                struct Maybe_386  __cond1545 =  next388 (&temp1544);
                if (  __cond1545 .tag == 0 ) {
                    break;
                }
                struct Tuple2_387  dref3010 =  __cond1545 .stuff .Maybe_386_Just_s .field0;
                struct funenv1327  temp1546 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
                ( temp1546.fun ( temp1546.env ,  (  sb3007 ) ,  ( (  to_dash_slice1285 ) ( ( dref3010 .field0 ) ) ) ) );
                struct funenv1321  temp1547 = ( (struct funenv1321){ .fun = write1321, .env =  env.envinst1321  } );
                ( temp1547.fun ( temp1547.env ,  (  sb3007 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  last_dash_row3013 = ( (  get_dash_row1468 ) ( (  ed2993 ) ,  ( ( ( * (  ed2993 ) ) .f_cursor ) .f_y ) ) );
            struct funenv1327  temp1548 = ( (struct funenv1327){ .fun = write_dash_slice1327, .env =  env.envinst1327  } );
            ( temp1548.fun ( temp1548.env ,  (  sb3007 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  last_dash_row3013 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed2993 ) ) .f_cursor ) .f_x ) ) ) ) ) ) );
        }
        struct DynStr_134  text3014 = ( (  as_dash_str977 ) ( (  sb3007 ) ) );
        if ( (  eq45 ( ( ( (  text3014 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1210 ) ( ( ( * (  ed2993 ) ) .f_al ) ,  ( (  text3014 ) .f_contents ) ) );
            return ( Unit_13_Unit );
        }
        struct funenv1531  temp1549 = ( (struct funenv1531){ .fun = push_dash_action1531, .env =  env.envinst1531  } );
        ( temp1549.fun ( temp1549.env ,  ( & ( ( * (  ed2993 ) ) .f_actions ) ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( (  adj_dash_start3006 ) ,  (  text3014 ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  ( ( * (  ed2993 ) ) .f_al ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1534 {
    enum Unit_13  (*fun) (  struct env1534  ,    struct Editor_890 *  );
    struct env1534 env;
};

struct env1550 {
    ;
    ;
    ;
    ;
    struct env1534 envinst1534;
    ;
    ;
};

static  enum Unit_13   set_dash_mode_dash_normal1550 (   struct env1550 env ,    struct Editor_890 *  ed3017 ) {
    struct funenv1534  temp1551 = ( (struct funenv1534){ .fun = flush_dash_insert1534, .env =  env.envinst1534  } );
    ( temp1551.fun ( temp1551.env ,  (  ed3017 ) ) );
    (*  ed3017 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Normal_t } );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enter_dash_insert_dash_mode1552 (    struct Editor_890 *  ed3020 ) {
    (*  ed3020 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Insert_t } );
    (*  ed3020 ) .f_insert_dash_start = ( ( Maybe_157_Just ) ( ( ( * (  ed3020 ) ) .f_cursor ) ) );
    (*  ed3020 ) .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1512 {
    enum Unit_13  (*fun) (  struct env1512  ,    struct Editor_890 *  ,    struct Primitive_153  ,    struct Dims_1486  );
    struct env1512 env;
};

struct env1553 {
    ;
    struct env1512 envinst1512;
    ;
    struct env1534 envinst1534;
    ;
    ;
    struct env1531 envinst1531;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   do_dash_action1553 (   struct env1553 env ,    struct Editor_890 *  ed3023 ,    struct Action_152  action3025 ,    struct Dims_1486  dims3027 ) {
    struct funenv1534  temp1554 = ( (struct funenv1534){ .fun = flush_dash_insert1534, .env =  env.envinst1534  } );
    ( temp1554.fun ( temp1554.env ,  (  ed3023 ) ) );
    struct funenv1531  temp1555 = ( (struct funenv1531){ .fun = push_dash_action1531, .env =  env.envinst1531  } );
    ( temp1555.fun ( temp1555.env ,  ( & ( ( * (  ed3023 ) ) .f_actions ) ) ,  (  action3025 ) ,  ( ( * (  ed3023 ) ) .f_al ) ) );
    struct funenv1512  temp1556 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  env.envinst1512  } );
    ( temp1556.fun ( temp1556.env ,  (  ed3023 ) ,  ( (  action3025 ) .f_prim ) ,  (  dims3027 ) ) );
    return ( Unit_13_Unit );
}

struct env1557 {
    ;
    struct env1512 envinst1512;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   undo1557 (   struct env1557 env ,    struct Editor_890 *  ed3030 ,    struct Dims_1486  dims3032 ) {
    if ( (  eq45 ( ( ( ( * (  ed3030 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    (*  ed3030 ) .f_actions .f_cur = (  op_dash_sub99 ( ( ( ( * (  ed3030 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Either_182  action3033 = (  elem_dash_get1266 ( ( ( ( * (  ed3030 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3030 ) ) .f_actions ) .f_cur ) ) );
    struct Action_152  temp1558;
    struct Action_152  last_dash_action3034 = (  temp1558 );
    struct Either_182  dref3035 = (  action3033 );
    if ( dref3035.tag == Either_182_Right_t ) {
        struct funenv1512  temp1559 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  env.envinst1512  } );
        ( temp1559.fun ( temp1559.env ,  (  ed3030 ) ,  ( (  invert_dash_primitive1525 ) ( ( ( dref3035 .stuff .Either_182_Right_s .field0 ) .f_prim ) ) ) ,  (  dims3032 ) ) );
        last_dash_action3034 = ( dref3035 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3035.tag == Either_182_Left_t ) {
        struct SliceReversedIter_1191  temp1560 =  into_dash_iter1192 ( ( (  reversed1190 ) ( ( dref3035 .stuff .Either_182_Left_s .field0 ) ) ) );
        while (true) {
            struct Maybe_466  __cond1561 =  next1193 (&temp1560);
            if (  __cond1561 .tag == 0 ) {
                break;
            }
            struct Action_152  action3039 =  __cond1561 .stuff .Maybe_466_Just_s .field0;
            struct funenv1512  temp1562 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  env.envinst1512  } );
            ( temp1562.fun ( temp1562.env ,  (  ed3030 ) ,  ( (  invert_dash_primitive1525 ) ( ( (  action3039 ) .f_prim ) ) ) ,  (  dims3032 ) ) );
        }
        last_dash_action3034 = (  elem_dash_get1189 ( ( dref3035 .stuff .Either_182_Left_s .field0 ) , (  from_dash_integral11 ( 0 ) ) ) );
    }
    struct Maybe_155  dref3040 = ( (  last_dash_action3034 ) .f_before_dash_pos );
    if ( dref3040.tag == Maybe_155_None_t ) {
    }
    else if ( dref3040.tag == Maybe_155_Just_t ) {
        ( (  move_dash_to1485 ) ( (  ed3030 ) ,  ( ( ( dref3040 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_x ) ,  ( ( ( dref3040 .stuff .Maybe_155_Just_s .field0 ) .f_cur ) .f_y ) ,  (  dims3032 ) ) );
        (*  ed3030 ) .f_selected = ( ( dref3040 .stuff .Maybe_155_Just_s .field0 ) .f_sel );
    }
    return ( Unit_13_Unit );
}

struct env1563 {
    ;
    struct env1512 envinst1512;
    ;
    ;
    ;
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

static  enum Unit_13   redo1563 (   struct env1563 env ,    struct Editor_890 *  ed3044 ,    struct Dims_1486  dims3046 ) {
    if ( (  cmp9 ( ( ( ( * (  ed3044 ) ) .f_actions ) .f_cur ) , ( ( ( ( * (  ed3044 ) ) .f_actions ) .f_list ) .f_count ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    struct Either_182  action3047 = (  elem_dash_get1266 ( ( ( ( * (  ed3044 ) ) .f_actions ) .f_list ) , ( ( ( * (  ed3044 ) ) .f_actions ) .f_cur ) ) );
    (*  ed3044 ) .f_actions .f_cur = (  op_dash_add98 ( ( ( ( * (  ed3044 ) ) .f_actions ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    struct Action_152  temp1564;
    struct Action_152  last_dash_action3048 = (  temp1564 );
    struct Either_182  dref3049 = (  action3047 );
    if ( dref3049.tag == Either_182_Right_t ) {
        struct funenv1512  temp1565 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  env.envinst1512  } );
        ( temp1565.fun ( temp1565.env ,  (  ed3044 ) ,  ( ( dref3049 .stuff .Either_182_Right_s .field0 ) .f_prim ) ,  (  dims3046 ) ) );
        last_dash_action3048 = ( dref3049 .stuff .Either_182_Right_s .field0 );
    }
    else if ( dref3049.tag == Either_182_Left_t ) {
        struct SliceIter_409  temp1566 =  into_dash_iter533 ( ( dref3049 .stuff .Either_182_Left_s .field0 ) );
        while (true) {
            struct Maybe_466  __cond1567 =  next467 (&temp1566);
            if (  __cond1567 .tag == 0 ) {
                break;
            }
            struct Action_152  action3053 =  __cond1567 .stuff .Maybe_466_Just_s .field0;
            struct funenv1512  temp1568 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  env.envinst1512  } );
            ( temp1568.fun ( temp1568.env ,  (  ed3044 ) ,  ( (  action3053 ) .f_prim ) ,  (  dims3046 ) ) );
        }
        last_dash_action3048 = (  elem_dash_get1189 ( ( dref3049 .stuff .Either_182_Left_s .field0 ) , (  op_dash_sub99 ( ( ( dref3049 .stuff .Either_182_Left_s .field0 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    }
    struct Primitive_153  dref3054 = ( (  last_dash_action3048 ) .f_prim );
    if ( dref3054.tag == Primitive_153_PrimInsert_t ) {
        ( (  move_dash_left1489 ) ( (  ed3044 ) ,  (  dims3046 ) ) );
        if ( ( (  last_dash_action3048 ) .f_selected ) ) {
            (*  ed3044 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3054 .stuff .Primitive_153_PrimInsert_s .field0 ) ) );
        }
    }
    else if ( true ) {
    }
    return ( Unit_13_Unit );
}

struct funenv1550 {
    enum Unit_13  (*fun) (  struct env1550  ,    struct Editor_890 *  );
    struct env1550 env;
};

struct funenv1553 {
    enum Unit_13  (*fun) (  struct env1553  ,    struct Editor_890 *  ,    struct Action_152  ,    struct Dims_1486  );
    struct env1553 env;
};

struct env1569 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1550 envinst1550;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1553 envinst1553;
    ;
    ;
    ;
    ;
    ;
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

enum PastePos_1570 {
    PastePos_1570_PasteBefore,
    PastePos_1570_PasteAfter,
};

static  struct Cursor_154   lam903 (   struct env903 env ,    struct Cursor_154  s3070 ) {
    return ( (  max955 ) ( (  s3070 ) ,  ( ( * ( env.ed3058 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam906 (   struct env906 env ,    struct Cursor_154  s3072 ) {
    return ( (  min948 ) ( (  s3072 ) ,  ( ( * ( env.ed3058 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam909 (   struct env909 env ,    struct Cursor_154  s3080 ) {
    return ( (  max955 ) ( (  s3080 ) ,  ( ( * ( env.ed3058 ) ) .f_cursor ) ) );
}

static  struct Cursor_154   lam912 (   struct env912 env ,    struct Cursor_154  s3083 ) {
    return ( (  min948 ) ( (  s3083 ) ,  ( ( * ( env.ed3058 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1569 (   struct env1569 env ,    struct Editor_890 *  ed3058 ,    enum PastePos_1570  pastepos3060 ,    struct Dims_1486  dims3062 ) {
    if ( ( ! ( (  is_dash_just881 ) ( ( ( * (  ed3058 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_134  cp3063 = ( (  or_dash_fail1152 ) ( ( ( * (  ed3058 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    struct Cursor_154  before_dash_cursor3064 = ( ( * (  ed3058 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3065 = ( ( * (  ed3058 ) ) .f_selected );
    struct Pos_156  before_dash_pos3066 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3064 ) , .f_sel = (  before_dash_sel3065 ) } );
    bool  does_dash_it_dash_end_dash_in_dash_newline3067 = (  eq47 ( (  elem_dash_get1188 ( ( (  cp3063 ) .f_contents ) , (  op_dash_sub99 ( ( ( (  cp3063 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline3067 ) ) {
        struct env903 envinst903 = {
            .ed3058 =  ed3058 ,
        };
        struct env906 envinst906 = {
            .ed3058 =  ed3058 ,
        };
        int32_t  from_dash_y3073 = ( {  enum PastePos_1570  dref3068 = (  pastepos3060 ) ;  dref3068 == PastePos_1570_PasteAfter ? (  op_dash_add87 ( ( ( (  maybe902 ) ( ( ( * (  ed3058 ) ) .f_selected ) ,  ( (struct funenv903){ .fun = lam903, .env = envinst903 } ) ,  ( ( * (  ed3058 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe905 ) ( ( ( * (  ed3058 ) ) .f_selected ) ,  ( (struct funenv906){ .fun = lam906, .env = envinst906 } ) ,  ( ( * (  ed3058 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Primitive_153  prim3074 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3073 ) } ) ,  ( (  clone1217 ) ( (  cp3063 ) ,  ( ( * (  ed3058 ) ) .f_al ) ) ) ) );
        struct funenv1553  temp1571 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  env.envinst1553  } );
        ( temp1571.fun ( temp1571.env ,  (  ed3058 ) ,  ( (struct Action_152) { .f_prim = (  prim3074 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3066 ) ) ) } ) ,  (  dims3062 ) ) );
        int32_t  last_dash_pasted_dash_y3075 = (  op_dash_sub88 ( ( ( ( * (  ed3058 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        ( (  move_dash_to1485 ) ( (  ed3058 ) ,  ( (  size_dash_i32313 ) ( ( ( * ( (  get_dash_row1468 ) ( (  ed3058 ) ,  (  last_dash_pasted_dash_y3075 ) ) ) ) .f_count ) ) ) ,  (  last_dash_pasted_dash_y3075 ) ,  (  dims3062 ) ) );
        (*  ed3058 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y3073 ) } ) ) );
        struct funenv1550  temp1572 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  env.envinst1550  } );
        ( temp1572.fun ( temp1572.env ,  (  ed3058 ) ) );
    } else {
        size_t  temp1573;
        size_t  from_dash_x3076 = (  temp1573 );
        int32_t  temp1574;
        int32_t  from_dash_y3077 = (  temp1574 );
        enum PastePos_1570  dref3078 = (  pastepos3060 );
        switch (  dref3078 ) {
            case PastePos_1570_PasteAfter : {
                struct env909 envinst909 = {
                    .ed3058 =  ed3058 ,
                };
                struct Cursor_154  from_dash_cur3081 = ( (  maybe908 ) ( ( ( * (  ed3058 ) ) .f_selected ) ,  ( (struct funenv909){ .fun = lam909, .env = envinst909 } ) ,  ( ( * (  ed3058 ) ) .f_cursor ) ) );
                from_dash_x3076 = ( (  i32_dash_size311 ) ( (  op_dash_add87 ( ( (  from_dash_cur3081 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y3077 = ( (  from_dash_cur3081 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1493 ) ( (  ed3058 ) ,  ( (  from_dash_cur3081 ) .f_x ) ,  ( (  from_dash_cur3081 ) .f_y ) ) ) ) {
                    from_dash_y3077 = (  op_dash_add87 ( (  from_dash_y3077 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x3076 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1570_PasteBefore : {
                struct env912 envinst912 = {
                    .ed3058 =  ed3058 ,
                };
                struct Cursor_154  from_dash_cur3084 = ( (  maybe911 ) ( ( ( * (  ed3058 ) ) .f_selected ) ,  ( (struct funenv912){ .fun = lam912, .env = envinst912 } ) ,  ( ( * (  ed3058 ) ) .f_cursor ) ) );
                from_dash_x3076 = ( (  i32_dash_size311 ) ( ( (  from_dash_cur3084 ) .f_x ) ) );
                from_dash_y3077 = ( (  from_dash_cur3084 ) .f_y );
                break;
            }
        }
        struct Primitive_153  prim3085 = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3076 ) ) ) , .f_y = (  from_dash_y3077 ) } ) ,  ( (  clone1217 ) ( (  cp3063 ) ,  ( ( * (  ed3058 ) ) .f_al ) ) ) ) );
        struct funenv1553  temp1575 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  env.envinst1553  } );
        ( temp1575.fun ( temp1575.env ,  (  ed3058 ) ,  ( (struct Action_152) { .f_prim = (  prim3085 ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3066 ) ) ) } ) ,  (  dims3062 ) ) );
        ( (  move_dash_left1489 ) ( (  ed3058 ) ,  (  dims3062 ) ) );
        (*  ed3058 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( (  from_dash_x3076 ) ) ) , .f_y = (  from_dash_y3077 ) } ) ) );
        struct funenv1550  temp1576 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  env.envinst1550  } );
        ( temp1576.fun ( temp1576.env ,  (  ed3058 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1577 {
    ;
    ;
    struct env1496 envinst1496;
    struct env699 envinst699;
    struct env1553 envinst1553;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1550 envinst1550;
    ;
    ;
    ;
};

static  enum Unit_13   delete_dash_selected1577 (   struct env1577 env ,    struct Editor_890 *  ed3088 ,    struct Dims_1486  dims3090 ) {
    struct Cursor_154  before_dash_cursor3091 = ( ( * (  ed3088 ) ) .f_cursor );
    struct Maybe_157  before_dash_sel3092 = ( ( * (  ed3088 ) ) .f_selected );
    struct Pos_156  before_dash_pos3093 = ( (struct Pos_156) { .f_cur = (  before_dash_cursor3091 ) , .f_sel = (  before_dash_sel3092 ) } );
    struct Cursor_154  cfrom3096 = ( {  struct Maybe_157  dref3094 = ( ( * (  ed3088 ) ) .f_selected ) ; dref3094.tag == Maybe_157_Just_t ? ( (  min948 ) ( ( dref3094 .stuff .Maybe_157_Just_s .field0 ) ,  ( ( * (  ed3088 ) ) .f_cursor ) ) ) : ( ( * (  ed3088 ) ) .f_cursor ) ; } );
    struct DynStr_134  temp1578;
    struct DynStr_134  del3097 = (  temp1578 );
    struct funenv1496  temp1579 = ( (struct funenv1496){ .fun = copy_dash_selection1496, .env =  env.envinst1496  } );
    struct Maybe_356  dref3098 = ( temp1579.fun ( temp1579.env ,  (  ed3088 ) ) );
    if ( dref3098.tag == Maybe_356_None_t ) {
        struct StrBuilder_626  temp1580 = ( (  mk1333 ) ( ( ( * (  ed3088 ) ) .f_al ) ) );
        struct StrBuilder_626 *  sb3099 = ( &temp1580 );
        struct funenv699  temp1581 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
        ( temp1581.fun ( temp1581.env ,  (  sb3099 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
        del3097 = ( (  as_dash_str977 ) ( (  sb3099 ) ) );
        ( (  set_dash_clipboard1495 ) ( (  ed3088 ) ,  ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) ) );
    }
    else if ( dref3098.tag == Maybe_356_Just_t ) {
        if ( ( (  is_dash_just880 ) ( ( ( * (  ed3088 ) ) .f_selected ) ) ) ) {
            struct funenv1550  temp1582 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  env.envinst1550  } );
            ( temp1582.fun ( temp1582.env ,  (  ed3088 ) ) );
        }
        (*  ed3088 ) .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
        del3097 = ( dref3098 .stuff .Maybe_356_Just_s .field0 );
        ( (  set_dash_clipboard1495 ) ( (  ed3088 ) ,  ( ( Maybe_356_Just ) ( ( (  clone1217 ) ( ( dref3098 .stuff .Maybe_356_Just_s .field0 ) ,  ( ( * (  ed3088 ) ) .f_al ) ) ) ) ) ) );
    }
    struct funenv1553  temp1583 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  env.envinst1553  } );
    ( temp1583.fun ( temp1583.env ,  (  ed3088 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( (  cfrom3096 ) ,  (  del3097 ) ) ) , .f_selected = ( true ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3093 ) ) ) } ) ,  (  dims3090 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1276 {
    enum Unit_13  (*fun) (  struct env1276  ,    struct List_3 *  ,    struct TakeWhile_560  );
    struct env1276 env;
};

struct env1584 {
    struct env1261 envinst1261;
    struct env1276 envinst1276;
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

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1584 (   struct env1584 env ,    struct Editor_890 *  ed3103 ,    int32_t  y3105 ,    enum CAllocator_4  al3107 ) {
    struct List_3  temp1585 = ( (  mk1244 ) ( (  al3107 ) ) );
    struct List_3 *  nurow3108 = ( &temp1585 );
    struct TakeWhile_560  rowws3109 = ( (  indent_dash_on_dash_row1470 ) ( (  ed3103 ) ,  ( ( ( * (  ed3103 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars3110 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( (  rowws3109 ) ) ) ) );
    struct funenv1276  temp1586 = ( (struct funenv1276){ .fun = add_dash_all1276, .env =  env.envinst1276  } );
    ( temp1586.fun ( temp1586.env ,  (  nurow3108 ) ,  (  rowws3109 ) ) );
    struct funenv1261  temp1587 = ( (struct funenv1261){ .fun = insert1261, .env =  env.envinst1261  } );
    ( temp1587.fun ( temp1587.env ,  ( & ( ( * (  ed3103 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( (  y3105 ) ) ) ,  ( * (  nurow3108 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1588 (    struct Editor_890 *  ed3113 ,    struct Cursor_154  c3115 ) {
    return ( {  struct Maybe_157  dref3116 = ( ( * (  ed3113 ) ) .f_selected ) ; dref3116.tag == Maybe_157_Just_t ? ( (  between958 ) ( (  c3115 ) ,  ( ( * (  ed3113 ) ) .f_cursor ) ,  ( dref3116 .stuff .Maybe_157_Just_s .field0 ) ) ) : ( false ) ; } );
}

struct funenv1483 {
    enum Unit_13  (*fun) (  struct env1483  ,    struct Editor_890 *  ,    const char*  );
    struct env1483 env;
};

struct env1589 {
    struct env1483 envinst1483;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Maybe_157   find_dash_next_dash_occurence1589 (   struct env1589 env ,    struct Editor_890 *  ed3120 ,    struct Slice_5  needle3122 ) {
    struct Cursor_154  from3123 = ( (  max955 ) ( ( ( * (  ed3120 ) ) .f_cursor ) ,  ( (  or_dash_else1156 ) ( ( ( * (  ed3120 ) ) .f_selected ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline3124 = ( (  to_dash_slice1285 ) ( ( * ( (  get_dash_row1468 ) ( (  ed3120 ) ,  ( (  from3123 ) .f_y ) ) ) ) ) );
    struct Maybe_901  dref3125 = ( (  find_dash_slice1197 ) ( ( (  subslice335 ) ( (  curline3124 ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3123 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline3124 ) .f_count ) ) ) ,  (  needle3122 ) ) );
    if ( dref3125.tag == Maybe_901_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  op_dash_add87 ( (  op_dash_add87 ( ( (  from3123 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32313 ) ( ( dref3125 .stuff .Maybe_901_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from3123 ) .f_y ) } ) ) );
    }
    else if ( dref3125.tag == Maybe_901_None_t ) {
        struct Zip_380  temp1590 =  into_dash_iter396 ( ( (  zip528 ) ( ( (  from1180 ) ( ( (  to_dash_slice1286 ) ( ( ( * (  ed3120 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( (  from3123 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from405 ) ( (  op_dash_add87 ( ( (  from3123 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_386  __cond1591 =  next388 (&temp1590);
            if (  __cond1591 .tag == 0 ) {
                break;
            }
            struct Tuple2_387  dref3127 =  __cond1591 .stuff .Maybe_386_Just_s .field0;
            struct Maybe_901  dref3130 = ( (  find_dash_slice1197 ) ( ( (  to_dash_slice1285 ) ( ( dref3127 .field0 ) ) ) ,  (  needle3122 ) ) );
            if ( dref3130.tag == Maybe_901_None_t ) {
            }
            else if ( dref3130.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3130 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( dref3127 .field1 ) } ) ) );
            }
        }
        struct funenv1483  temp1592 = ( (struct funenv1483){ .fun = send_dash_msg1483, .env =  env.envinst1483  } );
        ( temp1592.fun ( temp1592.env ,  (  ed3120 ) ,  ( "Wrapped!" ) ) );
        struct Zip_380  temp1593 =  into_dash_iter396 ( ( (  zip528 ) ( ( (  subslice326 ) ( ( (  to_dash_slice1286 ) ( ( ( * (  ed3120 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3123 ) .f_y ) ) ) ) ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_386  __cond1594 =  next388 (&temp1593);
            if (  __cond1594 .tag == 0 ) {
                break;
            }
            struct Tuple2_387  dref3132 =  __cond1594 .stuff .Maybe_386_Just_s .field0;
            struct Maybe_901  dref3135 = ( (  find_dash_slice1197 ) ( ( (  to_dash_slice1285 ) ( ( dref3132 .field0 ) ) ) ,  (  needle3122 ) ) );
            if ( dref3135.tag == Maybe_901_None_t ) {
            }
            else if ( dref3135.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3135 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( dref3132 .field1 ) } ) ) );
            }
        }
        struct Maybe_901  dref3137 = ( (  find_dash_slice1197 ) ( (  curline3124 ) ,  (  needle3122 ) ) );
        if ( dref3137.tag == Maybe_901_None_t ) {
        }
        else if ( dref3137.tag == Maybe_901_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3137 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3123 ) .f_y ) } ) ) );
        }
        struct funenv1483  temp1595 = ( (struct funenv1483){ .fun = send_dash_msg1483, .env =  env.envinst1483  } );
        ( temp1595.fun ( temp1595.env ,  (  ed3120 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct env1596 {
    struct env1483 envinst1483;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Cursor_154   lam927 (   struct env927 env ,    struct Cursor_154  s3145 ) {
    return ( (  min948 ) ( ( ( * ( env.ed3141 ) ) .f_cursor ) ,  (  s3145 ) ) );
}

static  struct Maybe_157   find_dash_prev_dash_occurence1596 (   struct env1596 env ,    struct Editor_890 *  ed3141 ,    struct Slice_5  needle3143 ) {
    struct env927 envinst927 = {
        .ed3141 =  ed3141 ,
    };
    struct Cursor_154  from3146 = ( (  maybe926 ) ( ( ( * (  ed3141 ) ) .f_selected ) ,  ( (struct funenv927){ .fun = lam927, .env = envinst927 } ) ,  ( ( * (  ed3141 ) ) .f_cursor ) ) );
    struct Slice_5  curline3147 = ( (  to_dash_slice1285 ) ( ( * ( (  get_dash_row1468 ) ( (  ed3141 ) ,  ( (  from3146 ) .f_y ) ) ) ) ) );
    struct Maybe_901  dref3148 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  subslice335 ) ( (  curline3147 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size311 ) ( ( (  from3146 ) .f_x ) ) ) ) ) ,  (  needle3143 ) ) );
    if ( dref3148.tag == Maybe_901_Just_t ) {
        return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3148 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3146 ) .f_y ) } ) ) );
    }
    else if ( dref3148.tag == Maybe_901_None_t ) {
        int32_t  from_dash_y3150 = (  op_dash_sub88 ( ( (  from3146 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3150 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row3151 = ( (  get_dash_row1468 ) ( (  ed3141 ) ,  (  from_dash_y3150 ) ) );
            struct Maybe_901  dref3152 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3151 ) ) ) ) ,  (  needle3143 ) ) );
            if ( dref3152.tag == Maybe_901_None_t ) {
            }
            else if ( dref3152.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3152 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3150 ) } ) ) );
            }
            from_dash_y3150 = (  op_dash_sub88 ( (  from_dash_y3150 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1483  temp1597 = ( (struct funenv1483){ .fun = send_dash_msg1483, .env =  env.envinst1483  } );
        ( temp1597.fun ( temp1597.env ,  (  ed3141 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y3154 = (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( (  num_dash_rows1471 ) ( (  ed3141 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp80 ( (  from_dash_y3154 ) , ( (  from3146 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row3155 = ( (  get_dash_row1468 ) ( (  ed3141 ) ,  (  from_dash_y3154 ) ) );
            struct Maybe_901  dref3156 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( ( (  to_dash_slice1285 ) ( ( * (  row3155 ) ) ) ) ,  (  needle3143 ) ) );
            if ( dref3156.tag == Maybe_901_None_t ) {
            }
            else if ( dref3156.tag == Maybe_901_Just_t ) {
                return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3156 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = (  from_dash_y3154 ) } ) ) );
            }
            from_dash_y3154 = (  op_dash_sub88 ( (  from_dash_y3154 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_901  dref3158 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1200 ) ( (  curline3147 ) ,  (  needle3143 ) ) );
        if ( dref3158.tag == Maybe_901_None_t ) {
        }
        else if ( dref3158.tag == Maybe_901_Just_t ) {
            return ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( dref3158 .stuff .Maybe_901_Just_s .field0 ) ) ) , .f_y = ( (  from3146 ) .f_y ) } ) ) );
        }
        struct funenv1483  temp1598 = ( (struct funenv1483){ .fun = send_dash_msg1483, .env =  env.envinst1483  } );
        ( temp1598.fun ( temp1598.env ,  (  ed3141 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_157) { .tag = Maybe_157_None_t } );
    }
}

struct funenv1340 {
    struct DynStr_134  (*fun) (  struct env1340  ,    char  ,    enum CAllocator_4  );
    struct env1340 env;
};

struct funenv1529 {
    enum Unit_13  (*fun) (  struct env1529  ,    struct Editor_890 *  );
    struct env1529 env;
};

struct env1599 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1340 envinst1340;
    struct env1553 envinst1553;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1529 envinst1529;
    ;
    ;
};

static  int32_t   lam915 (   struct env915 env ,    struct Cursor_154  s3166 ) {
    return ( (  min950 ) ( ( (  s3166 ) .f_y ) ,  ( ( ( * ( env.ed3162 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam918 (   struct env918 env ,    struct Cursor_154  s3169 ) {
    return ( (  max954 ) ( ( (  s3169 ) .f_y ) ,  ( ( ( * ( env.ed3162 ) ) .f_cursor ) .f_y ) ) );
}

static  struct Cursor_154   lam1606 (    struct Cursor_154  s3177 ) {
    struct Cursor_154  temp1607 = (  s3177 );
    temp1607 .  f_x = (  op_dash_add87 ( ( (  s3177 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( temp1607 );
}

static  enum Unit_13   indent_dash_selection1599 (   struct env1599 env ,    struct Editor_890 *  ed3162 ,    struct Dims_1486  dims3164 ) {
    struct env915 envinst915 = {
        .ed3162 =  ed3162 ,
    };
    int32_t  from_dash_y3167 = ( (  maybe914 ) ( ( ( * (  ed3162 ) ) .f_selected ) ,  ( (struct funenv915){ .fun = lam915, .env = envinst915 } ) ,  ( ( ( * (  ed3162 ) ) .f_cursor ) .f_y ) ) );
    struct env918 envinst918 = {
        .ed3162 =  ed3162 ,
    };
    int32_t  to_dash_y3170 = ( (  maybe917 ) ( ( ( * (  ed3162 ) ) .f_selected ) ,  ( (struct funenv918){ .fun = lam918, .env = envinst918 } ) ,  ( ( ( * (  ed3162 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3171 = ( ( * (  ed3162 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3172 = ( ( * (  ed3162 ) ) .f_selected );
    struct Pos_156  before_dash_pos3173 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3171 ) , .f_sel = (  saved_dash_selected3172 ) } );
    ( (  start_dash_changeset1528 ) ( (  ed3162 ) ) );
    struct RangeIter_403  temp1600 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3167 ) ,  (  to_dash_y3170 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1601 =  next404 (&temp1600);
        if (  __cond1601 .tag == 0 ) {
            break;
        }
        int32_t  rowid3175 =  __cond1601 .stuff .Maybe_369_Just_s .field0;
        if ( ( ! ( (  is_dash_row_dash_empty1474 ) ( (  ed3162 ) ,  (  rowid3175 ) ) ) ) ) {
            struct funenv1553  temp1602 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  env.envinst1553  } );
            struct funenv1340  temp1603 = ( (struct funenv1340){ .fun = mk_dash_dyn_dash_str1340, .env =  env.envinst1340  } );
            ( temp1602.fun ( temp1602.env ,  (  ed3162 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimInsert ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3175 ) } ) ,  ( temp1603.fun ( temp1603.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3162 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3173 ) ) ) } ) ,  (  dims3164 ) ) );
        }
    }
    struct funenv1529  temp1604 = ( (struct funenv1529){ .fun = end_dash_changeset1529, .env =  env.envinst1529  } );
    ( temp1604.fun ( temp1604.env ,  (  ed3162 ) ) );
    struct Cursor_154  temp1605 = (  saved_dash_cursor3171 );
    temp1605 .  f_x = (  op_dash_add87 ( ( (  saved_dash_cursor3171 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) );
    (*  ed3162 ) .f_cursor = ( temp1605 );
    (*  ed3162 ) .f_selected = ( (  fmap_dash_maybe897 ) ( (  saved_dash_selected3172 ) ,  (  lam1606 ) ) );
    return ( Unit_13_Unit );
}

struct env1608 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1529 envinst1529;
    ;
    ;
    ;
    ;
    struct env1340 envinst1340;
    struct env1553 envinst1553;
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

static  int32_t   lam921 (   struct env921 env ,    struct Cursor_154  s3184 ) {
    return ( (  min950 ) ( ( (  s3184 ) .f_y ) ,  ( ( ( * ( env.ed3180 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam924 (   struct env924 env ,    struct Cursor_154  s3187 ) {
    return ( (  max954 ) ( ( (  s3187 ) .f_y ) ,  ( ( ( * ( env.ed3180 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1608 (   struct env1608 env ,    struct Editor_890 *  ed3180 ,    struct Dims_1486  dims3182 ) {
    struct env921 envinst921 = {
        .ed3180 =  ed3180 ,
    };
    int32_t  from_dash_y3185 = ( (  maybe920 ) ( ( ( * (  ed3180 ) ) .f_selected ) ,  ( (struct funenv921){ .fun = lam921, .env = envinst921 } ) ,  ( ( ( * (  ed3180 ) ) .f_cursor ) .f_y ) ) );
    struct env924 envinst924 = {
        .ed3180 =  ed3180 ,
    };
    int32_t  to_dash_y3188 = ( (  maybe923 ) ( ( ( * (  ed3180 ) ) .f_selected ) ,  ( (struct funenv924){ .fun = lam924, .env = envinst924 } ) ,  ( ( ( * (  ed3180 ) ) .f_cursor ) .f_y ) ) );
    struct Cursor_154  saved_dash_cursor3189 = ( ( * (  ed3180 ) ) .f_cursor );
    struct Maybe_157  saved_dash_selected3190 = ( ( * (  ed3180 ) ) .f_selected );
    struct Pos_156  before_dash_pos3191 = ( (struct Pos_156) { .f_cur = (  saved_dash_cursor3189 ) , .f_sel = (  saved_dash_selected3190 ) } );
    ( (  start_dash_changeset1528 ) ( (  ed3180 ) ) );
    struct RangeIter_403  temp1609 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_y3185 ) ,  (  to_dash_y3188 ) ) ) );
    while (true) {
        struct Maybe_369  __cond1610 =  next404 (&temp1609);
        if (  __cond1610 .tag == 0 ) {
            break;
        }
        int32_t  rowid3193 =  __cond1610 .stuff .Maybe_369_Just_s .field0;
        if ( (  eq48 ( ( (  char_dash_at1475 ) ( (  ed3180 ) ,  ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3193 ) } ) ) ) , ( ( Maybe_49_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct funenv1553  temp1611 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  env.envinst1553  } );
            struct funenv1340  temp1612 = ( (struct funenv1340){ .fun = mk_dash_dyn_dash_str1340, .env =  env.envinst1340  } );
            ( temp1611.fun ( temp1611.env ,  (  ed3180 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid3193 ) } ) ,  ( temp1612.fun ( temp1612.env ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ,  ( ( * (  ed3180 ) ) .f_al ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( ( Maybe_155_Just ) ( (  before_dash_pos3191 ) ) ) } ) ,  (  dims3182 ) ) );
            if ( (  eq41 ( ( (  saved_dash_cursor3189 ) .f_y ) , (  rowid3193 ) ) ) ) {
                struct Cursor_154  temp1613 = (  saved_dash_cursor3189 );
                temp1613 .  f_x = ( (  cmp80 ( ( (  saved_dash_cursor3189 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( (  saved_dash_cursor3189 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                saved_dash_cursor3189 = ( temp1613 );
            }
            struct Maybe_157  dref3194 = (  saved_dash_selected3190 );
            if ( dref3194.tag == Maybe_157_None_t ) {
            }
            else if ( dref3194.tag == Maybe_157_Just_t ) {
                if ( (  eq41 ( ( ( dref3194 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  rowid3193 ) ) ) ) {
                    struct Cursor_154  temp1614 = ( dref3194 .stuff .Maybe_157_Just_s .field0 );
                    temp1614 .  f_x = ( (  cmp80 ( ( ( dref3194 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ? (  op_dash_sub88 ( ( ( dref3194 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) : (  from_dash_integral29 ( 0 ) ) );
                    saved_dash_selected3190 = ( ( Maybe_157_Just ) ( ( temp1614 ) ) );
                }
            }
        }
    }
    struct funenv1529  temp1615 = ( (struct funenv1529){ .fun = end_dash_changeset1529, .env =  env.envinst1529  } );
    ( temp1615.fun ( temp1615.env ,  (  ed3180 ) ) );
    (*  ed3180 ) .f_cursor = (  saved_dash_cursor3189 );
    (*  ed3180 ) .f_selected = (  saved_dash_selected3190 );
    return ( Unit_13_Unit );
}

struct funenv1282 {
    struct List_323  (*fun) (  struct env1282  ,    struct Map_341  ,    enum CAllocator_4  );
    struct env1282 env;
};

struct env1616 {
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
    ;
    ;
};

static  struct List_3   lam343 (   struct env343 env ,    struct DynStr_134  line3232 ) {
    struct funenv344  temp1619 = ( (struct funenv344){ .fun = to_dash_list344, .env =  env.envinst344  } );
    return ( temp1619.fun ( temp1619.env ,  (  line3232 ) ,  ( env.al3201 ) ) );
}

static  struct List_323   load_dash_file1616 (   struct env1616 env ,    const char*  filename3199 ,    enum CAllocator_4  al3201 ) {
    struct funenv1282  temp1618 = ( (struct funenv1282){ .fun = to_dash_list1282, .env =  env.envinst1282  } );
    struct env343 envinst343 = {
        .envinst344 = env.envinst344 ,
        .al3201 =  al3201 ,
    };
    struct List_323  temp1617 = ( temp1618.fun ( temp1618.env ,  ( (  map372 ) ( ( (  lines1228 ) ( ( (  read_dash_contents1456 ) ( (  filename3199 ) ,  (  al3201 ) ) ) ) ) ,  ( (struct funenv343){ .fun = lam343, .env = envinst343 } ) ) ) ,  (  al3201 ) ) );
    struct List_323 *  file3233 = ( &temp1617 );
    if ( ( (  null873 ) ( (  file3233 ) ) ) ) {
        struct funenv620  temp1620 = ( (struct funenv620){ .fun = add620, .env =  env.envinst620  } );
        ( temp1620.fun ( temp1620.env ,  (  file3233 ) ,  ( (  mk1244 ) ( (  al3201 ) ) ) ) );
    }
    return ( * (  file3233 ) );
}

struct env1621 {
    ;
    ;
    ;
    struct env699 envinst699;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al3196;
    ;
    ;
};

static  enum Unit_13   lam698 (   struct env698 env ,    char  c3243 ) {
    struct funenv699  temp1625 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
    return ( temp1625.fun ( temp1625.env ,  ( env.sb3239 ) ,  (  c3243 ) ) );
}

static  enum Unit_13   save_dash_file1621 (   struct env1621 env ,    struct List_323  cf3236 ,    const char*  filename3238 ) {
    struct StrBuilder_626  temp1622 = ( (  mk1333 ) ( ( env.al3196 ) ) );
    struct StrBuilder_626 *  sb3239 = ( &temp1622 );
    struct SliceIter_321  temp1623 =  into_dash_iter324 ( (  cf3236 ) );
    while (true) {
        struct Maybe_355  __cond1624 =  next389 (&temp1623);
        if (  __cond1624 .tag == 0 ) {
            break;
        }
        struct List_3  row3241 =  __cond1624 .stuff .Maybe_355_Just_s .field0;
        struct env698 envinst698 = {
            .envinst699 = env.envinst699 ,
            .sb3239 =  sb3239 ,
        };
        ( (  for_dash_each697 ) ( (  row3241 ) ,  ( (struct funenv698){ .fun = lam698, .env = envinst698 } ) ) );
        struct funenv699  temp1626 = ( (struct funenv699){ .fun = write_dash_char699, .env =  env.envinst699  } );
        ( temp1626.fun ( temp1626.env ,  (  sb3239 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1458 ) ( (  filename3238 ) ,  ( (  as_dash_str977 ) ( (  sb3239 ) ) ) ) );
    ( (  free1335 ) ( (  sb3239 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1627 (    struct List_323  cf3246 ) {
    ( (  for_dash_each691 ) ( ( (  addresses1289 ) ( (  cf3246 ) ) ) ,  (  free1247 ) ) );
    ( (  free1249 ) ( ( & (  cf3246 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1628 {
    ;
    ;
    ;
    ;
    int32_t  pad3247;
};

struct anon_1629 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1629   left_dash_offset1628 (   struct env1628 env ,    struct Editor_890 *  ed3250 ) {
    int32_t  max_dash_digits3251 = ( (  max954 ) ( ( (  count_dash_digits962 ) ( ( ( ( * (  ed3250 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1629) { .f_max_dash_digits = (  max_dash_digits3251 ) , .f_total_dash_offset = (  op_dash_add87 ( (  op_dash_add87 ( ( env.pad3247 ) , (  max_dash_digits3251 ) ) ) , ( env.pad3247 ) ) ) } );
}

struct funenv1628 {
    struct anon_1629  (*fun) (  struct env1628  ,    struct Editor_890 *  );
    struct env1628 env;
};

struct env1630 {
    struct env1628 envinst1628;
    ;
    ;
};

static  struct Dims_1486   screen_dash_dims1630 (   struct env1630 env ,    struct Editor_890 *  ed3254 ,    struct Tui_717 *  tui3256 ) {
    struct funenv1628  temp1631 = ( (struct funenv1628){ .fun = left_dash_offset1628, .env =  env.envinst1628  } );
    return ( (struct Dims_1486) { .f_cols = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * (  tui3256 ) ) .f_width ) ) ) , ( ( temp1631.fun ( temp1631.env ,  (  ed3254 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32317 ) ( ( ( * (  tui3256 ) ) .f_height ) ) ) } );
}

struct env1632 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1628 envinst1628;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad3247;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1632 (   struct env1632 env ,    struct Screen_716 *  screen3259 ,    struct Editor_890 *  ed3261 ) {
    int32_t  w3262 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3259 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3263 = ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3259 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y3264 = ( ( * (  ed3261 ) ) .f_screen_dash_top );
    int32_t  from_dash_x3265 = ( ( * (  ed3261 ) ) .f_screen_dash_left );
    int32_t  x3266 = (  from_dash_integral29 ( 0 ) );
    int32_t  y3267 = (  from_dash_integral29 ( 0 ) );
    ( (  assert1144 ) ( (  cmp9 ( ( ( ( * (  ed3261 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1628  temp1633 = ( (struct funenv1628){ .fun = left_dash_offset1628, .env =  env.envinst1628  } );
    struct anon_1629  offstuff3268 = ( temp1633.fun ( temp1633.env ,  (  ed3261 ) ) );
    int32_t  max_dash_digits3269 = ( (  offstuff3268 ) .f_max_dash_digits );
    int32_t  left_dash_off3270 = ( (  offstuff3268 ) .f_total_dash_offset );
    struct Drop_379  temp1634 =  into_dash_iter378 ( ( (  drop395 ) ( ( (  zip530 ) ( ( ( * (  ed3261 ) ) .f_current_dash_file ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_y3264 ) ) ) ) ) );
    while (true) {
        struct Maybe_386  __cond1635 =  next385 (&temp1634);
        if (  __cond1635 .tag == 0 ) {
            break;
        }
        struct Tuple2_387  dref3271 =  __cond1635 .stuff .Maybe_386_Just_s .field0;
        int32_t  row_dash_num3274 = (  op_dash_add87 ( ( dref3271 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1636 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3247 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1637 =  next404 (&temp1636);
            if (  __cond1637 .tag == 0 ) {
                break;
            }
            int32_t  xx3276 =  __cond1637 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1430 ) ( (  screen3259 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx3276 ) ,  (  y3267 ) ) );
        }
        ( (  draw_dash_str_dash_right1443 ) ( (  screen3259 ) ,  (  row_dash_num3274 ) ,  (  op_dash_sub88 ( (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3259 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits3269 ) ) ) , ( env.pad3247 ) ) ) ,  (  y3267 ) ) );
        struct RangeIter_403  temp1638 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( env.pad3247 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1639 =  next404 (&temp1638);
            if (  __cond1639 .tag == 0 ) {
                break;
            }
            int32_t  xx3278 =  __cond1639 .stuff .Maybe_369_Just_s .field0;
            ( (  put_dash_char1430 ) ( (  screen3259 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  xx3278 ) , ( env.pad3247 ) ) ) , (  max_dash_digits3269 ) ) ) ,  (  y3267 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed3261 ) ) .f_cursor ) .f_y ) , (  op_dash_sub88 ( (  row_dash_num3274 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_403  temp1640 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  max_dash_digits3269 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_369  __cond1641 =  next404 (&temp1640);
                if (  __cond1641 .tag == 0 ) {
                    break;
                }
                int32_t  xxx3280 =  __cond1641 .stuff .Maybe_369_Just_s .field0;
                struct Cell_58 *  cp3281 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1424 ) ( (  screen3259 ) ,  (  op_dash_add87 ( (  xxx3280 ) , ( env.pad3247 ) ) ) ,  (  y3267 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp3281 ) .f_fg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp3281 ) .f_bg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_383  temp1642 =  into_dash_iter382 ( ( (  drop397 ) ( ( (  zip531 ) ( ( dref3271 .field0 ) ,  ( (  from405 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  from_dash_x3265 ) ) ) ) ) );
        while (true) {
            struct Maybe_392  __cond1643 =  next391 (&temp1642);
            if (  __cond1643 .tag == 0 ) {
                break;
            }
            struct Tuple2_393  dref3282 =  __cond1643 .stuff .Maybe_392_Just_s .field0;
            bool  in_dash_selection3285 = ( (  is_dash_in_dash_selection1588 ) ( (  ed3261 ) ,  ( (struct Cursor_154) { .f_x = ( dref3282 .field1 ) , .f_y = ( dref3271 .field1 ) } ) ) );
            if ( (  in_dash_selection3285 ) ) {
                ( (  set_dash_screen_dash_colors1423 ) ( (  screen3259 ) ,  ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq47 ( ( dref3282 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1430 ) ( (  screen3259 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3270 ) , (  x3266 ) ) ) ,  (  y3267 ) ) );
                x3266 = (  op_dash_add87 ( (  x3266 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1430 ) ( (  screen3259 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add87 ( (  left_dash_off3270 ) , (  x3266 ) ) ) ,  (  y3267 ) ) );
            } else {
                ( (  put_dash_char1430 ) ( (  screen3259 ) ,  ( dref3282 .field0 ) ,  (  op_dash_add87 ( (  left_dash_off3270 ) , (  x3266 ) ) ) ,  (  y3267 ) ) );
            }
            if ( (  in_dash_selection3285 ) ) {
                ( (  set_dash_screen_dash_colors1423 ) ( (  screen3259 ) ,  ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x3266 = (  op_dash_add87 ( (  x3266 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp80 ( (  x3266 ) , (  w3262 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp80 ( (  x3266 ) , (  w3262 ) ) == 0 ) && ( (  is_dash_in_dash_selection1588 ) ( (  ed3261 ) ,  ( (struct Cursor_154) { .f_x = ( (  size_dash_i32313 ) ( ( ( dref3271 .field0 ) .f_count ) ) ) , .f_y = ( dref3271 .field1 ) } ) ) ) ) ) {
            struct Cell_58 *  cell3286 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1424 ) ( (  screen3259 ) ,  (  op_dash_add87 ( (  left_dash_off3270 ) , (  x3266 ) ) ) ,  (  y3267 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell3286 ) .f_fg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell3286 ) .f_bg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y3267 = (  op_dash_add87 ( (  y3267 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x3266 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp80 ( (  y3267 ) , (  h3263 ) ) != 0 ) ) {
            break;
        }
    }
    struct Maybe_157  dref3287 = ( ( * (  ed3261 ) ) .f_selected );
    if ( dref3287.tag == Maybe_157_None_t ) {
    }
    else if ( dref3287.tag == Maybe_157_Just_t ) {
        int32_t  vx3289 = ( (  from_dash_visual1465 ) ( ( (  x_dash_to_dash_visual_dash_x1477 ) ( (  ed3261 ) ,  ( ( dref3287 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ,  ( ( dref3287 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) );
        int32_t  len3290 = ( (  maybe946 ) ( ( (  try_dash_get1239 ) ( ( (  get_dash_row1468 ) ( (  ed3261 ) ,  ( ( dref3287 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( dref3287 .stuff .Maybe_157_Just_s .field0 ) .f_x ) ) ) ) ) ,  (  char_dash_len1460 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1644 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3290 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_369  __cond1645 =  next404 (&temp1644);
            if (  __cond1645 .tag == 0 ) {
                break;
            }
            int32_t  x3292 =  __cond1645 .stuff .Maybe_369_Just_s .field0;
            struct Maybe_1155  dref3293 = ( (  get_dash_cell_dash_ptr1424 ) ( (  screen3259 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3270 ) , ( ( * (  ed3261 ) ) .f_screen_dash_left ) ) ) , (  vx3289 ) ) ) , (  x3292 ) ) ) ,  (  op_dash_sub88 ( ( ( dref3287 .stuff .Maybe_157_Just_s .field0 ) .f_y ) , (  from_dash_y3264 ) ) ) ) );
            if ( dref3293.tag == Maybe_1155_None_t ) {
            }
            else if ( dref3293.tag == Maybe_1155_Just_t ) {
                (* dref3293 .stuff .Maybe_1155_Just_s .field0 ) .f_fg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_text );
                (* dref3293 .stuff .Maybe_1155_Just_s .field0 ) .f_bg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_selection_dash_cursor_dash_bg );
            }
        }
    }
    struct Cursor_154  cur3295 = ( ( * (  ed3261 ) ) .f_cursor );
    int32_t  vx3296 = ( (  from_dash_visual1465 ) ( ( (  x_dash_to_dash_visual_dash_x1477 ) ( (  ed3261 ) ,  ( (  cur3295 ) .f_x ) ,  ( (  cur3295 ) .f_y ) ) ) ) );
    int32_t  len3297 = ( (  maybe946 ) ( ( (  try_dash_get1239 ) ( ( (  cursor_dash_row1469 ) ( (  ed3261 ) ) ) ,  ( (  i32_dash_size311 ) ( ( (  cur3295 ) .f_x ) ) ) ) ) ,  (  char_dash_len1460 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_403  temp1646 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  len3297 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_369  __cond1647 =  next404 (&temp1646);
        if (  __cond1647 .tag == 0 ) {
            break;
        }
        int32_t  x3299 =  __cond1647 .stuff .Maybe_369_Just_s .field0;
        struct Cell_58 *  cursor_dash_cell3300 = ( (  or_dash_fail1154 ) ( ( (  get_dash_cell_dash_ptr1424 ) ( (  screen3259 ) ,  (  op_dash_add87 ( (  op_dash_add87 ( (  op_dash_sub88 ( (  left_dash_off3270 ) , ( ( * (  ed3261 ) ) .f_screen_dash_left ) ) ) , (  vx3296 ) ) ) , (  x3299 ) ) ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3261 ) ) .f_cursor ) .f_y ) , (  from_dash_y3264 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell3300 ) .f_fg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell3300 ) .f_bg = ( ( * ( ( * (  ed3261 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1648 (    struct Maybe_887 *  dref3302 ,    struct Screen_716 *  screen3305 ) {
    struct Maybe_887  dref3306 = ( (* dref3302 ) );
    if ( dref3306.tag == Maybe_887_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref3306.tag == Maybe_887_Just_t ) {
        struct Duration_1361  diff3308 = ( (  diff1362 ) ( ( (  now1358 ) ( ) ) ,  ( dref3306 .stuff .Maybe_887_Just_s .field0 ) ) );
        struct Duration_1361  limit3309 = ( (  duration_dash_from_dash_ns1363 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1360 ( (  diff3308 ) , (  limit3309 ) ) == 2 ) ) {
            (* dref3302 ) = ( (struct Maybe_887) { .tag = Maybe_887_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill3310 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill3311 = (  op_dash_div85 ( ( (  u32_dash_i64316 ) ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress3312 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1364 ) ( (  diff3308 ) ) ) , (  x_dash_fill3310 ) ) ) , ( (  duration_dash_to_dash_ns1364 ) ( (  limit3309 ) ) ) ) ) ) );
        int32_t  y_dash_progress3313 = ( (  i64_dash_i32312 ) ( (  op_dash_div85 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1364 ) ( (  diff3308 ) ) ) , (  y_dash_fill3311 ) ) ) , ( (  duration_dash_to_dash_ns1364 ) ( (  limit3309 ) ) ) ) ) ) );
        uint32_t  center_dash_x3314 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y3315 = (  op_dash_add92 ( (  op_dash_div95 ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1422 ) ( (  screen3305 ) ,  ( (struct Color_59) { .tag = Color_59_ColorDefault_t } ) ) );
        int32_t  x_dash_off3316 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  x_dash_fill3310 ) ) ) , (  x_dash_progress3312 ) ) );
        int32_t  y_dash_off3317 = (  op_dash_sub88 ( ( (  i64_dash_i32312 ) ( (  y_dash_fill3311 ) ) ) , (  y_dash_progress3313 ) ) );
        int32_t  h3318 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w3319 = (  op_dash_sub88 ( ( (  u32_dash_i32317 ) ( ( ( * ( ( * (  screen3305 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_403  temp1649 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h3318 ) ) ) );
        while (true) {
            struct Maybe_369  __cond1650 =  next404 (&temp1649);
            if (  __cond1650 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y3321 =  __cond1650 .stuff .Maybe_369_Just_s .field0;
            struct RangeIter_403  temp1651 =  into_dash_iter402 ( ( (  to400 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w3319 ) ) ) );
            while (true) {
                struct Maybe_369  __cond1652 =  next404 (&temp1651);
                if (  __cond1652 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x3323 =  __cond1652 .stuff .Maybe_369_Just_s .field0;
                if ( ( ( ( (  cmp80 ( (  screen_dash_x3323 ) , (  x_dash_off3316 ) ) != 2 ) || (  cmp80 ( (  screen_dash_x3323 ) , (  op_dash_sub88 ( (  w3319 ) , (  x_dash_off3316 ) ) ) ) != 0 ) ) || (  cmp80 ( (  screen_dash_y3321 ) , (  y_dash_off3317 ) ) != 2 ) ) || (  cmp80 ( (  screen_dash_y3321 ) , (  op_dash_sub88 ( (  h3318 ) , (  y_dash_off3317 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1430 ) ( (  screen3305 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x3323 ) ,  (  screen_dash_y3321 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1621 {
    enum Unit_13  (*fun) (  struct env1621  ,    struct List_323  ,    const char*  );
    struct env1621 env;
};

struct funenv1616 {
    struct List_323  (*fun) (  struct env1616  ,    const char*  ,    enum CAllocator_4  );
    struct env1616 env;
};

struct funenv1354 {
    const char*  (*fun) (  struct env1354  ,    struct TakeWhile_562  ,    enum CAllocator_4  );
    struct env1354 env;
};

struct funenv1356 {
    const char*  (*fun) (  struct env1356  ,    struct TakeWhile_567  ,    enum CAllocator_4  );
    struct env1356 env;
};

struct env1653 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Theme_893 *  light_dash_theme2701;
    struct env1621 envinst1621;
    ;
    ;
    ;
    ;
    ;
    struct Theme_893 *  dark_dash_theme2700;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1616 envinst1616;
    ;
    struct env1354 envinst1354;
    struct env1356 envinst1356;
    ;
    ;
    ;
};

static  bool   lam1654 (    char  c3337 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c3337 ) ) ) );
}

static  bool   lam1658 (    char  c3345 ) {
    return ( ! ( (  is_dash_whitespace1223 ) ( (  c3345 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1653 (   struct env1653 env ,    struct Editor_890 *  ed3326 ,    struct DynStr_134  s3328 ,    struct Dims_1486  dim3330 ,    enum CAllocator_4  al3332 ) {
    struct DropWhile_565  s3333 = ( (  drop_dash_while590 ) ( (  s3328 ) ,  (  is_dash_whitespace1223 ) ) );
    struct TakeWhile_569  cmd3334 = ( (  take_dash_while583 ) ( (  s3333 ) ,  (  is_dash_not_dash_whitespace1224 ) ) );
    struct DropWhile_563  rest3335 = ( (  drop_dash_while593 ) ( ( (  drop_dash_while592 ) ( (  s3333 ) ,  (  is_dash_not_dash_whitespace1224 ) ) ) ,  (  is_dash_whitespace1223 ) ) );
    if ( ( (  eq1123 ) ( (  cmd3334 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_562  filename3338 = ( (  take_dash_while585 ) ( (  rest3335 ) ,  (  lam1654 ) ) );
        const char*  temp1655;
        const char*  alfname3339 = (  temp1655 );
        if ( ( (  null875 ) ( (  filename3338 ) ) ) ) {
            struct Maybe_308  dref3340 = ( ( * (  ed3326 ) ) .f_filename );
            if ( dref3340.tag == Maybe_308_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref3340.tag == Maybe_308_Just_t ) {
                alfname3339 = ( dref3340 .stuff .Maybe_308_Just_s .field0 );
            }
        } else {
            struct Maybe_308  dref3342 = ( ( * (  ed3326 ) ) .f_filename );
            if ( dref3342.tag == Maybe_308_None_t ) {
            }
            else if ( dref3342.tag == Maybe_308_Just_t ) {
                ( (  free1213 ) ( (  al3332 ) ,  ( (struct Slice_1214) { .f_ptr = ( (  cast217 ) ( ( dref3342 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1354  temp1656 = ( (struct funenv1354){ .fun = mk_dash_const_dash_str1354, .env =  env.envinst1354  } );
            alfname3339 = ( temp1656.fun ( temp1656.env ,  (  filename3338 ) ,  (  al3332 ) ) );
        }
        struct funenv1621  temp1657 = ( (struct funenv1621){ .fun = save_dash_file1621, .env =  env.envinst1621  } );
        ( temp1657.fun ( temp1657.env ,  ( ( * (  ed3326 ) ) .f_current_dash_file ) ,  (  alfname3339 ) ) );
        (*  ed3326 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3339 ) ) );
    } else {
        if ( ( (  eq1123 ) ( (  cmd3334 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed3326 ) .f_running = ( false );
        } else {
            if ( ( (  eq1123 ) ( (  cmd3334 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_567  filename3346 = ( (  take_dash_while587 ) ( (  rest3335 ) ,  (  lam1658 ) ) );
                struct funenv1356  temp1659 = ( (struct funenv1356){ .fun = mk_dash_const_dash_str1356, .env =  env.envinst1356  } );
                const char*  alfname3347 = ( temp1659.fun ( temp1659.env ,  (  filename3346 ) ,  (  al3332 ) ) );
                struct List_323  og3348 = ( ( * (  ed3326 ) ) .f_current_dash_file );
                struct funenv1616  temp1660 = ( (struct funenv1616){ .fun = load_dash_file1616, .env =  env.envinst1616  } );
                (*  ed3326 ) .f_current_dash_file = ( temp1660.fun ( temp1660.env ,  (  alfname3347 ) ,  (  al3332 ) ) );
                struct Maybe_308  dref3349 = ( ( * (  ed3326 ) ) .f_filename );
                if ( dref3349.tag == Maybe_308_None_t ) {
                }
                else if ( dref3349.tag == Maybe_308_Just_t ) {
                    ( (  free1213 ) ( (  al3332 ) ,  ( (struct Slice_1214) { .f_ptr = ( (  cast217 ) ( ( dref3349 .stuff .Maybe_308_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed3326 ) .f_filename = ( ( Maybe_308_Just ) ( (  alfname3347 ) ) );
                (*  ed3326 ) .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed3326 ) .f_goal_dash_x = ( ( Visual_891_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed3326 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1627 ) ( (  og3348 ) ) );
            } else {
                if ( ( (  eq1126 ) ( (  cmd3334 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_580  theme_dash_name3351 = ( (  take_dash_while588 ) ( (  rest3335 ) ,  (  is_dash_not_dash_whitespace1224 ) ) );
                    if ( ( (  eq1129 ) ( (  theme_dash_name3351 ) ,  ( "dark" ) ) ) ) {
                        (*  ed3326 ) .f_theme = ( env.dark_dash_theme2700 );
                    } else {
                        if ( ( (  eq1129 ) ( (  theme_dash_name3351 ) ,  ( "light" ) ) ) ) {
                            (*  ed3326 ) .f_theme = ( env.light_dash_theme2701 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_801  dref3352 = ( (  parse_dash_int1233 ) ( (  cmd3334 ) ) );
                    if ( dref3352.tag == Maybe_801_Just_t ) {
                        int32_t  newline3354 = ( (  clamp959 ) ( ( (  i64_dash_i32312 ) ( (  op_dash_sub84 ( ( dref3352 .stuff .Maybe_801_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( (  size_dash_i32313 ) ( ( ( ( * (  ed3326 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1488 ) ( (  ed3326 ) ,  (  newline3354 ) ,  (  dim3330 ) ) );
                    }
                    else if ( dref3352.tag == Maybe_801_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1352 {
    const char*  (*fun) (  struct env1352  ,    const char*  ,    enum CAllocator_4  );
    struct env1352 env;
};

struct funenv1381 {
    struct Tui_717  (*fun) (  struct env1381  );
    struct env1381 env;
};

struct funenv1630 {
    struct Dims_1486  (*fun) (  struct env1630  ,    struct Editor_890 *  ,    struct Tui_717 *  );
    struct env1630 env;
};

struct funenv1557 {
    enum Unit_13  (*fun) (  struct env1557  ,    struct Editor_890 *  ,    struct Dims_1486  );
    struct env1557 env;
};

struct funenv1563 {
    enum Unit_13  (*fun) (  struct env1563  ,    struct Editor_890 *  ,    struct Dims_1486  );
    struct env1563 env;
};

struct funenv1577 {
    enum Unit_13  (*fun) (  struct env1577  ,    struct Editor_890 *  ,    struct Dims_1486  );
    struct env1577 env;
};

struct funenv1510 {
    enum Unit_13  (*fun) (  struct env1510  ,    struct Editor_890 *  );
    struct env1510 env;
};

struct funenv1569 {
    enum Unit_13  (*fun) (  struct env1569  ,    struct Editor_890 *  ,    enum PastePos_1570  ,    struct Dims_1486  );
    struct env1569 env;
};

struct funenv1599 {
    enum Unit_13  (*fun) (  struct env1599  ,    struct Editor_890 *  ,    struct Dims_1486  );
    struct env1599 env;
};

struct funenv1608 {
    enum Unit_13  (*fun) (  struct env1608  ,    struct Editor_890 *  ,    struct Dims_1486  );
    struct env1608 env;
};

struct funenv1584 {
    enum Unit_13  (*fun) (  struct env1584  ,    struct Editor_890 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1584 env;
};

struct funenv1589 {
    struct Maybe_157  (*fun) (  struct env1589  ,    struct Editor_890 *  ,    struct Slice_5  );
    struct env1589 env;
};

struct funenv1596 {
    struct Maybe_157  (*fun) (  struct env1596  ,    struct Editor_890 *  ,    struct Slice_5  );
    struct env1596 env;
};

static  int32_t   lam1710 (    struct Cursor_154  s3388 ) {
    return ( (  s3388 ) .f_x );
}

static  int32_t   lam1713 (    struct Cursor_154  s3392 ) {
    return ( (  s3392 ) .f_x );
}

static  bool   lam932 (   struct env932 env ,    char  c3397 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1461 ) ( (  c3397 ) ) ) ) ) , ( env.cur_dash_char_dash_type3395 ) ) );
}

static  bool   lam1715 (    char  c3399 ) {
    return (  eq55 ( ( (  char_dash_type1461 ) ( (  c3399 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam1717 (    char  c3403 ) {
    return (  eq55 ( ( (  char_dash_type1461 ) ( (  c3403 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam937 (   struct env937 env ,    char  c3406 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1461 ) ( (  c3406 ) ) ) ) ) , ( env.cur_dash_char_dash_type3404 ) ) );
}

static  bool   lam1719 (    char  c3410 ) {
    return (  eq55 ( ( (  char_dash_type1461 ) ( (  c3410 ) ) ) , ( CharType_53_CharSpace ) ) );
}

static  bool   lam941 (   struct env941 env ,    char  c3413 ) {
    return (  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1461 ) ( (  c3413 ) ) ) ) ) , ( env.cur_dash_char_dash_type3411 ) ) );
}

static  bool   lam944 (   struct env944 env ,    char  c3415 ) {
    return ( !  eq51 ( ( ( Maybe_52_Just ) ( ( (  char_dash_type1461 ) ( (  c3415 ) ) ) ) ) , ( env.cur_dash_char_dash_type3411 ) ) );
}

struct funenv1330 {
    enum Unit_13  (*fun) (  struct env1330  ,    struct StrBuilder_626 *  );
    struct env1330 env;
};

struct funenv1653 {
    enum Unit_13  (*fun) (  struct env1653  ,    struct Editor_890 *  ,    struct DynStr_134  ,    struct Dims_1486  ,    enum CAllocator_4  );
    struct env1653 env;
};

struct funenv1419 {
    bool  (*fun) (  struct env1419  ,    struct Screen_716 *  );
    struct env1419 env;
};

struct funenv1632 {
    enum Unit_13  (*fun) (  struct env1632  ,    struct Screen_716 *  ,    struct Editor_890 *  );
    struct env1632 env;
};

static  struct Maybe_49   lam889 (   struct env889 env ,    struct List_3  l3457 ) {
    return ( (  try_dash_get1239 ) ( ( & (  l3457 ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * ( env.ed3360 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_393   lam1751 (    char  c3459 ) {
    return ( ( Tuple2_393_Tuple2 ) ( (  c3459 ) ,  ( (  char_dash_i32953 ) ( (  c3459 ) ) ) ) );
}

static  size_t   lam1753 (    struct DynStr_134  s3465 ) {
    return ( ( (  s3465 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1841 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1842 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1843 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env621 envinst621 = {
        .growth_dash_factor1842 =  growth_dash_factor1842 ,
        .starting_dash_size1841 =  starting_dash_size1841 ,
    };
    struct env347 envinst347 = {
        .growth_dash_factor1842 =  growth_dash_factor1842 ,
        .starting_dash_size1841 =  starting_dash_size1841 ,
    };
    struct env1250 envinst1250 = {
        .growth_dash_factor1842 =  growth_dash_factor1842 ,
        .starting_dash_size1841 =  starting_dash_size1841 ,
    };
    struct env1251 envinst1251 = {
        .growth_dash_factor1842 =  growth_dash_factor1842 ,
        .starting_dash_size1841 =  starting_dash_size1841 ,
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
        .shrink_dash_factor1843 =  shrink_dash_factor1843 ,
    };
    struct env1265 envinst1265 = {
        .shrink_dash_factor1843 =  shrink_dash_factor1843 ,
    };
    struct env1267 envinst1267 = {
        .envinst1265 = envinst1265 ,
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
    struct env1319 envinst1319 = {
        .envinst346 = envinst346 ,
    };
    struct env1321 envinst1321 = {
        .envinst346 = envinst346 ,
    };
    struct env1323 envinst1323 = {
        .envinst346 = envinst346 ,
    };
    struct env1325 envinst1325 = {
        .envinst346 = envinst346 ,
    };
    struct env1327 envinst1327 = {
        .envinst1272 = envinst1272 ,
    };
    struct env699 envinst699 = {
        .envinst346 = envinst346 ,
    };
    struct env1330 envinst1330 = {
        .envinst1267 = envinst1267 ,
    };
    struct env1336 envinst1336 = {
        .envinst1319 = envinst1319 ,
        .envinst699 = envinst699 ,
    };
    struct env1340 envinst1340 = {
        .envinst1321 = envinst1321 ,
        .envinst699 = envinst699 ,
    };
    struct env1344 envinst1344 = {
        .envinst1323 = envinst1323 ,
        .envinst699 = envinst699 ,
    };
    struct env1348 envinst1348 = {
        .envinst1325 = envinst1325 ,
        .envinst699 = envinst699 ,
    };
    struct env1352 envinst1352 = {
        .envinst1336 = envinst1336 ,
    };
    struct env1354 envinst1354 = {
        .envinst1344 = envinst1344 ,
    };
    struct env1356 envinst1356 = {
        .envinst1348 = envinst1348 ,
    };
    bool  temp1380 = ( false );
    bool *  should_dash_resize2474 = ( &temp1380 );
    struct env1381 envinst1381 = {
        .should_dash_resize2474 =  should_dash_resize2474 ,
    };
    struct env1404 envinst1404 = {
        .should_dash_resize2474 =  should_dash_resize2474 ,
    };
    struct env1419 envinst1419 = {
        .envinst1404 = envinst1404 ,
    };
    struct Theme_893  temp1462 = ( (struct Theme_893) { .f_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_Black16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) } );
    struct Theme_893 *  dark_dash_theme2700 = ( &temp1462 );
    struct Theme_893  temp1463 = ( (struct Theme_893) { .f_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_text = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_White16 ) ) ) , .f_selection_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_selection_dash_cursor_dash_bg = ( ( Color_59_Color16 ) ( ( Color16_61_BrightBlack16 ) ) ) , .f_selection_dash_cursor_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_59_Color8 ) ( ( Color8_60_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_59_Color16 ) ( ( Color16_61_BrightWhite16 ) ) ) } );
    struct Theme_893 *  light_dash_theme2701 = ( &temp1463 );
    struct env1472 envinst1472 = {
        .envinst1264 = envinst1264 ,
    };
    struct env1483 envinst1483 = {
        .envinst1336 = envinst1336 ,
    };
    struct env1496 envinst1496 = {
        .envinst1321 = envinst1321 ,
        .envinst1327 = envinst1327 ,
        .envinst699 = envinst699 ,
    };
    struct env1510 envinst1510 = {
        .envinst1496 = envinst1496 ,
    };
    struct env1512 envinst1512 = {
        .envinst1261 = envinst1261 ,
        .envinst1258 = envinst1258 ,
        .envinst1265 = envinst1265 ,
        .envinst1272 = envinst1272 ,
        .envinst1274 = envinst1274 ,
        .envinst620 = envinst620 ,
        .envinst1472 = envinst1472 ,
    };
    struct env1529 envinst1529 = {
        .envinst1256 = envinst1256 ,
    };
    struct env1531 envinst1531 = {
        .envinst1254 = envinst1254 ,
        .envinst1256 = envinst1256 ,
    };
    struct env1534 envinst1534 = {
        .envinst1321 = envinst1321 ,
        .envinst1327 = envinst1327 ,
        .envinst699 = envinst699 ,
        .envinst1531 = envinst1531 ,
    };
    struct env1550 envinst1550 = {
        .envinst1534 = envinst1534 ,
    };
    struct env1553 envinst1553 = {
        .envinst1512 = envinst1512 ,
        .envinst1534 = envinst1534 ,
        .envinst1531 = envinst1531 ,
    };
    struct env1557 envinst1557 = {
        .envinst1512 = envinst1512 ,
    };
    struct env1563 envinst1563 = {
        .envinst1512 = envinst1512 ,
    };
    struct env1569 envinst1569 = {
        .envinst1550 = envinst1550 ,
        .envinst1553 = envinst1553 ,
    };
    struct env1577 envinst1577 = {
        .envinst1496 = envinst1496 ,
        .envinst699 = envinst699 ,
        .envinst1553 = envinst1553 ,
        .envinst1550 = envinst1550 ,
    };
    struct env1584 envinst1584 = {
        .envinst1261 = envinst1261 ,
        .envinst1276 = envinst1276 ,
    };
    struct env1589 envinst1589 = {
        .envinst1483 = envinst1483 ,
    };
    struct env1596 envinst1596 = {
        .envinst1483 = envinst1483 ,
    };
    struct env1599 envinst1599 = {
        .envinst1340 = envinst1340 ,
        .envinst1553 = envinst1553 ,
        .envinst1529 = envinst1529 ,
    };
    struct env1608 envinst1608 = {
        .envinst1529 = envinst1529 ,
        .envinst1340 = envinst1340 ,
        .envinst1553 = envinst1553 ,
    };
    enum CAllocator_4  al3196 = ( (  idc1203 ) ( ) );
    struct env1616 envinst1616 = {
        .envinst344 = envinst344 ,
        .envinst1282 = envinst1282 ,
        .envinst620 = envinst620 ,
    };
    struct env1621 envinst1621 = {
        .envinst699 = envinst699 ,
        .al3196 =  al3196 ,
    };
    int32_t  pad3247 = (  from_dash_integral29 ( 2 ) );
    struct env1628 envinst1628 = {
        .pad3247 =  pad3247 ,
    };
    struct env1630 envinst1630 = {
        .envinst1628 = envinst1628 ,
    };
    struct env1632 envinst1632 = {
        .envinst1628 = envinst1628 ,
        .pad3247 =  pad3247 ,
    };
    struct env1653 envinst1653 = {
        .light_dash_theme2701 =  light_dash_theme2701 ,
        .envinst1621 = envinst1621 ,
        .dark_dash_theme2700 =  dark_dash_theme2700 ,
        .envinst1616 = envinst1616 ,
        .envinst1354 = envinst1354 ,
        .envinst1356 = envinst1356 ,
    };
    if ( ( ! ( (  is_dash_terminal1297 ) ( ) ) ) ) {
        ( (  panic1137 ) ( ( "not running in a temrinal!" ) ) );
    }
    struct Slice_1166  args3357 = ( (  get1459 ) ( ) );
    struct List_323  temp1661;
    struct List_323  file3358 = (  temp1661 );
    struct Maybe_308  mfilename3359 = ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    if ( (  eq45 ( ( (  args3357 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3358 = ( (  mk1243 ) ( (  al3196 ) ) );
        struct funenv620  temp1662 = ( (struct funenv620){ .fun = add620, .env =  envinst620  } );
        ( temp1662.fun ( temp1662.env ,  ( & (  file3358 ) ) ,  ( (  mk1244 ) ( (  al3196 ) ) ) ) );
    } else {
        struct funenv1616  temp1663 = ( (struct funenv1616){ .fun = load_dash_file1616, .env =  envinst1616  } );
        file3358 = ( temp1663.fun ( temp1663.env ,  (  elem_dash_get1186 ( (  args3357 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3196 ) ) );
        struct funenv1352  temp1664 = ( (struct funenv1352){ .fun = mk_dash_const_dash_str1352, .env =  envinst1352  } );
        mfilename3359 = ( ( Maybe_308_Just ) ( ( temp1664.fun ( temp1664.env ,  (  elem_dash_get1186 ( (  args3357 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al3196 ) ) ) ) );
    }
    struct Editor_890  temp1665 = ( (struct Editor_890) { .f_cursor = ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_891_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3358 ) , .f_filename = (  mfilename3359 ) , .f_mode = ( (struct Mode_892) { .tag = Mode_892_Normal_t } ) , .f_anim = ( ( Maybe_887_Just ) ( ( (  now1358 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_theme = (  dark_dash_theme2700 ) , .f_search_dash_term = ( (struct Maybe_885) { .tag = Maybe_885_None_t } ) , .f_al = (  al3196 ) , .f_msg = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_clipboard = ( (struct Maybe_356) { .tag = Maybe_356_None_t } ) , .f_actions = ( (struct Actions_894) { .f_list = ( (  mk1245 ) ( (  al3196 ) ) ) , .f_cur = (  from_dash_integral11 ( 0 ) ) , .f_changeset = ( (struct Maybe_883) { .tag = Maybe_883_None_t } ) } ) , .f_insert_dash_start = ( (struct Maybe_157) { .tag = Maybe_157_None_t } ) , .f_delete_dash_acc = ( (struct Maybe_885) { .tag = Maybe_885_None_t } ) } );
    struct Editor_890 *  ed3360 = ( &temp1665 );
    struct funenv1381  temp1667 = ( (struct funenv1381){ .fun = mk1381, .env =  envinst1381  } );
    struct Tui_717  temp1666 = ( temp1667.fun ( temp1667.env ) );
    struct Tui_717 *  tui3361 = ( &temp1666 );
    enum CAllocator_4  al3362 = ( (  idc1203 ) ( ) );
    struct Screen_716  temp1668 = ( (  mk_dash_screen1405 ) ( (  tui3361 ) ,  (  al3362 ) ) );
    struct Screen_716 *  screen3363 = ( &temp1668 );
    uint32_t  counter3364 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3365 = ( true );
    while ( ( ( * (  ed3360 ) ) .f_running ) ) {
        int32_t  events3366 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_599  temp1669 =  into_dash_iter598 ( ( (  from_dash_function605 ) ( (  read_dash_key1398 ) ) ) );
        while (true) {
            struct Maybe_600  __cond1670 =  next604 (&temp1669);
            if (  __cond1670 .tag == 0 ) {
                break;
            }
            struct InputEvent_601  ev3368 =  __cond1670 .stuff .Maybe_600_Just_s .field0;
            if ( (  eq41 ( (  events3366 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1482 ) ( (  ed3360 ) ) );
            }
            events3366 = (  op_dash_add87 ( (  events3366 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1404  temp1671 = ( (struct funenv1404){ .fun = update_dash_dimensions1404, .env =  envinst1404  } );
            ( temp1671.fun ( temp1671.env ,  (  tui3361 ) ) );
            struct InputEvent_601  dref3369 = (  ev3368 );
            if ( dref3369.tag == InputEvent_601_Key_t ) {
                struct Key_602  dref3371 = ( dref3369 .stuff .InputEvent_601_Key_s .field0 );
                if ( dref3371.tag == Key_602_Char_t ) {
                    struct Mode_892 *  dref3373 = ( & ( ( * (  ed3360 ) ) .f_mode ) );
                    if ( (* dref3373 ).tag == Mode_892_Insert_t ) {
                        struct funenv1258  temp1672 = ( (struct funenv1258){ .fun = insert1258, .env =  envinst1258  } );
                        ( temp1672.fun ( temp1672.env ,  ( (  cursor_dash_row1469 ) ( (  ed3360 ) ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3371 .stuff .Key_602_Char_s .field0 ) ) );
                        struct funenv1630  temp1673 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                        ( (  move_dash_to_dash_col1487 ) ( (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1673.fun ( temp1673.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                    }
                    else if ( (* dref3373 ).tag == Mode_892_Cmd_t ) {
                        struct funenv699  temp1674 = ( (struct funenv699){ .fun = write_dash_char699, .env =  envinst699  } );
                        ( temp1674.fun ( temp1674.env ,  ( & ( (* dref3373 ) .stuff .Mode_892_Cmd_s .field0 ) ) ,  ( dref3371 .stuff .Key_602_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3373 ).tag == Mode_892_SearchBox_t ) {
                        struct funenv699  temp1675 = ( (struct funenv699){ .fun = write_dash_char699, .env =  envinst699  } );
                        ( temp1675.fun ( temp1675.env ,  ( & ( (* dref3373 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ,  ( dref3371 .stuff .Key_602_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1466 ( ( (* dref3373 ) ) , ( (struct Mode_892) { .tag = Mode_892_Normal_t } ) ) ) || (  eq1466 ( ( (* dref3373 ) ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) ) ) {
                            int32_t  code3377 = ( (  u8_dash_i32319 ) ( ( (  cast221 ) ( ( dref3371 .stuff .Key_602_Char_s .field0 ) ) ) ) );
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3360 ) .f_running = ( false );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                                struct funenv1557  temp1676 = ( (struct funenv1557){ .fun = undo1557, .env =  envinst1557  } );
                                struct funenv1630  temp1677 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1676.fun ( temp1676.env ,  (  ed3360 ) ,  ( temp1677.fun ( temp1677.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "U" ) ) ) ) ) ) {
                                struct funenv1563  temp1678 = ( (struct funenv1563){ .fun = redo1563, .env =  envinst1563  } );
                                struct funenv1630  temp1679 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1678.fun ( temp1678.env ,  (  ed3360 ) ,  ( temp1679.fun ( temp1679.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1630  temp1680 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1680.fun ( temp1680.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1630  temp1681 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1681.fun ( temp1681.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1630  temp1682 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_left1489 ) ( (  ed3360 ) ,  ( temp1682.fun ( temp1682.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1630  temp1683 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_right1490 ) ( (  ed3360 ) ,  ( temp1683.fun ( temp1683.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1466 ( ( (* dref3373 ) ) , ( (struct Mode_892) { .tag = Mode_892_Select_t } ) ) ) ) {
                                    struct funenv1550  temp1684 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                                    ( temp1684.fun ( temp1684.env ,  (  ed3360 ) ) );
                                } else {
                                    (*  ed3360 ) .f_mode = ( (struct Mode_892) { .tag = Mode_892_Select_t } );
                                    ( (  set_dash_selection1481 ) ( (  ed3360 ) ,  ( ( Maybe_157_Just ) ( ( ( * (  ed3360 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1577  temp1685 = ( (struct funenv1577){ .fun = delete_dash_selected1577, .env =  envinst1577  } );
                                struct funenv1630  temp1686 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1685.fun ( temp1685.env ,  (  ed3360 ) ,  ( temp1686.fun ( temp1686.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                struct funenv1550  temp1687 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                                ( temp1687.fun ( temp1687.env ,  (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1577  temp1688 = ( (struct funenv1577){ .fun = delete_dash_selected1577, .env =  envinst1577  } );
                                struct funenv1630  temp1689 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1688.fun ( temp1688.env ,  (  ed3360 ) ,  ( temp1689.fun ( temp1689.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1510  temp1690 = ( (struct funenv1510){ .fun = copy_dash_selection_dash_to_dash_clipboard1510, .env =  envinst1510  } );
                                ( temp1690.fun ( temp1690.env ,  (  ed3360 ) ) );
                                struct funenv1550  temp1691 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                                ( temp1691.fun ( temp1691.env ,  (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1569  temp1692 = ( (struct funenv1569){ .fun = paste_dash_clipboard_dash_at_dash_cursor1569, .env =  envinst1569  } );
                                struct funenv1630  temp1693 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1692.fun ( temp1692.env ,  (  ed3360 ) ,  ( PastePos_1570_PasteAfter ) ,  ( temp1693.fun ( temp1693.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1569  temp1694 = ( (struct funenv1569){ .fun = paste_dash_clipboard_dash_at_dash_cursor1569, .env =  envinst1569  } );
                                struct funenv1630  temp1695 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1694.fun ( temp1694.env ,  (  ed3360 ) ,  ( PastePos_1570_PasteBefore ) ,  ( temp1695.fun ( temp1695.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1599  temp1696 = ( (struct funenv1599){ .fun = indent_dash_selection1599, .env =  envinst1599  } );
                                struct funenv1630  temp1697 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1696.fun ( temp1696.env ,  (  ed3360 ) ,  ( temp1697.fun ( temp1697.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1608  temp1698 = ( (struct funenv1608){ .fun = dedent_dash_selection1608, .env =  envinst1608  } );
                                struct funenv1630  temp1699 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( temp1698.fun ( temp1698.env ,  (  ed3360 ) ,  ( temp1699.fun ( temp1699.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1630  temp1700 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1491 ) ( (  ed3360 ) ,  ( temp1700.fun ( temp1700.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1630  temp1701 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1492 ) ( (  ed3360 ) ,  ( temp1701.fun ( temp1701.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1584  temp1702 = ( (struct funenv1584){ .fun = insert_dash_empty_dash_row_dash_at1584, .env =  envinst1584  } );
                                ( temp1702.fun ( temp1702.env ,  (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3362 ) ) );
                                struct List_3 *  currow3378 = ( (  get_dash_row1468 ) ( (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1630  temp1703 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to1485 ) ( (  ed3360 ) ,  ( (  size_dash_i32313 ) ( ( (  size1290 ) ( (  currow3378 ) ) ) ) ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1703.fun ( temp1703.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1584  temp1704 = ( (struct funenv1584){ .fun = insert_dash_empty_dash_row_dash_at1584, .env =  envinst1584  } );
                                ( temp1704.fun ( temp1704.env ,  (  ed3360 ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ,  (  al3362 ) ) );
                                struct funenv1630  temp1705 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1492 ) ( (  ed3360 ) ,  ( temp1705.fun ( temp1705.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3360 ) .f_mode = ( ( Mode_892_Cmd ) ( ( (  mk1333 ) ( (  al3362 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3360 ) .f_mode = ( ( Mode_892_SearchBox ) ( ( (  mk1333 ) ( (  al3362 ) ) ) ) );
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_885  dref3379 = ( ( * (  ed3360 ) ) .f_search_dash_term );
                                if ( dref3379.tag == Maybe_885_None_t ) {
                                }
                                else if ( dref3379.tag == Maybe_885_Just_t ) {
                                    struct funenv1589  temp1706 = ( (struct funenv1589){ .fun = find_dash_next_dash_occurence1589, .env =  envinst1589  } );
                                    struct Maybe_157  dref3381 = ( temp1706.fun ( temp1706.env ,  (  ed3360 ) ,  ( (  as_dash_char_dash_slice1334 ) ( ( & ( dref3379 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3381.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3381.tag == Maybe_157_Just_t ) {
                                        struct funenv1630  temp1707 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                        ( (  move_dash_to1485 ) ( (  ed3360 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3381 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1332 ) ( ( & ( dref3379 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3381 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1707.fun ( temp1707.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                        (*  ed3360 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3381 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_885  dref3383 = ( ( * (  ed3360 ) ) .f_search_dash_term );
                                if ( dref3383.tag == Maybe_885_None_t ) {
                                }
                                else if ( dref3383.tag == Maybe_885_Just_t ) {
                                    struct funenv1596  temp1708 = ( (struct funenv1596){ .fun = find_dash_prev_dash_occurence1596, .env =  envinst1596  } );
                                    struct Maybe_157  dref3385 = ( temp1708.fun ( temp1708.env ,  (  ed3360 ) ,  ( (  as_dash_char_dash_slice1334 ) ( ( & ( dref3383 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3385.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3385.tag == Maybe_157_Just_t ) {
                                        struct funenv1630  temp1709 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                        ( (  move_dash_to1485 ) ( (  ed3360 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3385 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1332 ) ( ( & ( dref3383 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3385 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1709.fun ( temp1709.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                        (*  ed3360 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3385 .stuff .Maybe_157_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe929 ) ( ( ( * (  ed3360 ) ) .f_selected ) ,  (  lam1710 ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1494 ) ( (  ed3360 ) ) ) ) ) {
                                    struct funenv1630  temp1711 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                    struct Dims_1486  dims3389 = ( temp1711.fun ( temp1711.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                                    struct Cursor_154  sel3390 = ( (  or_dash_else1156 ) ( ( ( * (  ed3360 ) ) .f_selected ) ,  ( ( * (  ed3360 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3389 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1492 ) ( (  ed3360 ) ,  (  dims3389 ) ) );
                                    (*  ed3360 ) .f_selected = ( ( Maybe_157_Just ) ( (  sel3390 ) ) );
                                } else {
                                    struct funenv1630  temp1712 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1492 ) ( (  ed3360 ) ,  ( temp1712.fun ( temp1712.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                    (*  ed3360 ) .f_selected = ( ( Maybe_157_Just ) ( ( (struct Cursor_154) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe930 ) ( ( ( * (  ed3360 ) ) .f_selected ) ,  (  lam1713 ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1630  temp1714 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                struct Dims_1486  dims3393 = ( temp1714.fun ( temp1714.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                                struct Cursor_154  first_dash_pos3394 = ( ( * (  ed3360 ) ) .f_cursor );
                                ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3393 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1475 ) ( (  ed3360 ) ,  (  first_dash_pos3394 ) ) ) ,  (  char_dash_type1461 ) ) ) ) ) ) {
                                    first_dash_pos3394 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1494 ) ( (  ed3360 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3393 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3394 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                struct Maybe_52  cur_dash_char_dash_type3395 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) );
                                struct env932 envinst932 = {
                                    .cur_dash_char_dash_type3395 =  cur_dash_char_dash_type3395 ,
                                };
                                while ( ( (  maybe931 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  ( (struct funenv932){ .fun = lam932, .env = envinst932 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3393 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe934 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  lam1715 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3393 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1464 ( (  first_dash_pos3394 ) , ( ( * (  ed3360 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3393 ) ) );
                                    ( (  set_dash_selection1481 ) ( (  ed3360 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3394 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1630  temp1716 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                struct Dims_1486  dims3400 = ( temp1716.fun ( temp1716.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                                struct Cursor_154  first_dash_pos3401 = ( ( * (  ed3360 ) ) .f_cursor );
                                ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3400 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1475 ) ( (  ed3360 ) ,  (  first_dash_pos3401 ) ) ) ,  (  char_dash_type1461 ) ) ) ) ) ) {
                                    first_dash_pos3401 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1494 ) ( (  ed3360 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3400 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3401 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                while ( ( (  maybe935 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  lam1717 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3400 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3404 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) );
                                struct env937 envinst937 = {
                                    .cur_dash_char_dash_type3404 =  cur_dash_char_dash_type3404 ,
                                };
                                while ( ( (  maybe936 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  ( (struct funenv937){ .fun = lam937, .env = envinst937 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3400 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1464 ( (  first_dash_pos3401 ) , ( ( * (  ed3360 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3400 ) ) );
                                    ( (  set_dash_selection1481 ) ( (  ed3360 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3401 ) ) ) ) );
                                }
                            }
                            if ( (  eq47 ( ( dref3371 .stuff .Key_602_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1630  temp1718 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                struct Dims_1486  dims3407 = ( temp1718.fun ( temp1718.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                                struct Cursor_154  first_dash_pos3408 = ( ( * (  ed3360 ) ) .f_cursor );
                                ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3407 ) ) );
                                if ( ( !  eq51 ( ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) ) , ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at1475 ) ( (  ed3360 ) ,  (  first_dash_pos3408 ) ) ) ,  (  char_dash_type1461 ) ) ) ) ) ) {
                                    first_dash_pos3408 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1494 ) ( (  ed3360 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3407 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3408 = ( ( * (  ed3360 ) ) .f_cursor );
                                }
                                while ( ( (  maybe939 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  lam1719 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3407 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                struct Maybe_52  cur_dash_char_dash_type3411 = ( (  fmap_dash_maybe898 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  (  char_dash_type1461 ) ) );
                                struct env941 envinst941 = {
                                    .cur_dash_char_dash_type3411 =  cur_dash_char_dash_type3411 ,
                                };
                                while ( ( (  maybe940 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  ( (struct funenv941){ .fun = lam941, .env = envinst941 } ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3407 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1464 ( (  first_dash_pos3408 ) , ( ( * (  ed3360 ) ) .f_cursor ) ) ) ) {
                                    struct env944 envinst944 = {
                                        .cur_dash_char_dash_type3411 =  cur_dash_char_dash_type3411 ,
                                    };
                                    if ( ( (  maybe943 ) ( ( (  char_dash_at_dash_cursor1476 ) ( (  ed3360 ) ) ) ,  ( (struct funenv944){ .fun = lam944, .env = envinst944 } ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1490 ) ( (  ed3360 ) ,  (  dims3407 ) ) );
                                    }
                                    ( (  set_dash_selection1481 ) ( (  ed3360 ) ,  ( ( Maybe_157_Just ) ( (  first_dash_pos3408 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic1141 ) ( ( ( StrConcat_971_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3373 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3371.tag == Key_602_Ctrl_t ) {
                    if ( (  eq47 ( ( dref3371 .stuff .Key_602_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3360 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( ( ( * (  ed3360 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1630  temp1720 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                        ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  op_dash_sub88 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1720.fun ( temp1720.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref3371 .stuff .Key_602_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3360 ) .f_screen_dash_top = ( (  max954 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add87 ( ( ( * (  ed3360 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1630  temp1721 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                        ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1721.fun ( temp1721.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                    }
                }
                else if ( dref3371.tag == Key_602_Escape_t ) {
                    struct Mode_892  dref3417 = ( ( * (  ed3360 ) ) .f_mode );
                    if ( dref3417.tag == Mode_892_Normal_t ) {
                    }
                    else if ( dref3417.tag == Mode_892_Insert_t ) {
                        struct funenv1550  temp1722 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1722.fun ( temp1722.env ,  (  ed3360 ) ) );
                    }
                    else if ( dref3417.tag == Mode_892_Cmd_t ) {
                        ( (  free1335 ) ( ( & ( dref3417 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1550  temp1723 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1723.fun ( temp1723.env ,  (  ed3360 ) ) );
                    }
                    else if ( dref3417.tag == Mode_892_SearchBox_t ) {
                        ( (  free1335 ) ( ( & ( dref3417 .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
                        struct funenv1550  temp1724 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1724.fun ( temp1724.env ,  (  ed3360 ) ) );
                    }
                    else if ( dref3417.tag == Mode_892_Select_t ) {
                        struct funenv1550  temp1725 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1725.fun ( temp1725.env ,  (  ed3360 ) ) );
                    }
                }
                else if ( dref3371.tag == Key_602_Backspace_t ) {
                    struct Mode_892 *  dref3420 = ( & ( ( * (  ed3360 ) ) .f_mode ) );
                    if ( (* dref3420 ).tag == Mode_892_Normal_t ) {
                    }
                    else if ( (* dref3420 ).tag == Mode_892_Select_t ) {
                    }
                    else if ( (* dref3420 ).tag == Mode_892_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1630  temp1726 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                            struct Dims_1486  dims3421 = ( temp1726.fun ( temp1726.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                            if ( (  eq41 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                                struct Cursor_154  before_dash_merge_dash_cursor3422 = ( ( * (  ed3360 ) ) .f_cursor );
                                struct funenv1550  temp1727 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                                ( temp1727.fun ( temp1727.env ,  (  ed3360 ) ) );
                                ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3421 ) ) );
                                struct StrBuilder_626  temp1728 = ( (  mk1333 ) ( ( ( * (  ed3360 ) ) .f_al ) ) );
                                struct StrBuilder_626 *  sb3423 = ( &temp1728 );
                                struct funenv699  temp1729 = ( (struct funenv699){ .fun = write_dash_char699, .env =  envinst699  } );
                                ( temp1729.fun ( temp1729.env ,  (  sb3423 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
                                struct funenv1553  temp1730 = ( (struct funenv1553){ .fun = do_dash_action1553, .env =  envinst1553  } );
                                ( temp1730.fun ( temp1730.env ,  (  ed3360 ) ,  ( (struct Action_152) { .f_prim = ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3360 ) ) .f_cursor ) ,  ( (  as_dash_str977 ) ( (  sb3423 ) ) ) ) ) , .f_selected = ( false ) , .f_before_dash_pos = ( (struct Maybe_155) { .tag = Maybe_155_None_t } ) } ) ,  (  dims3421 ) ) );
                                ( (  enter_dash_insert_dash_mode1552 ) ( (  ed3360 ) ) );
                            } else {
                                ( (  move_dash_left1489 ) ( (  ed3360 ) ,  (  dims3421 ) ) );
                                struct funenv1496  temp1731 = ( (struct funenv1496){ .fun = copy_dash_selection1496, .env =  envinst1496  } );
                                struct Maybe_356  dref3424 = ( temp1731.fun ( temp1731.env ,  (  ed3360 ) ) );
                                if ( dref3424.tag == Maybe_356_None_t ) {
                                }
                                else if ( dref3424.tag == Maybe_356_Just_t ) {
                                    int32_t  del_dash_acc_dash_count3428 = ( {  struct Maybe_885  dref3426 = ( ( * (  ed3360 ) ) .f_delete_dash_acc ) ; dref3426.tag == Maybe_885_Just_t ? ( (  size_dash_i32313 ) ( ( (  count1332 ) ( ( & ( dref3426 .stuff .Maybe_885_Just_s .field0 ) ) ) ) ) ) : (  from_dash_integral29 ( 0 ) ) ; } );
                                    struct Maybe_157  dref3429 = ( ( * (  ed3360 ) ) .f_insert_dash_start );
                                    if ( dref3429.tag == Maybe_157_None_t ) {
                                    }
                                    else if ( dref3429.tag == Maybe_157_Just_t ) {
                                        if ( ( (  cmp80 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) , (  op_dash_sub88 ( ( ( dref3429 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , (  del_dash_acc_dash_count3428 ) ) ) ) == 0 ) && (  eq41 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , ( ( dref3429 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ) ) ) ) {
                                            if ( ( ! ( (  is_dash_just884 ) ( ( ( * (  ed3360 ) ) .f_delete_dash_acc ) ) ) ) ) {
                                                (*  ed3360 ) .f_delete_dash_acc = ( ( Maybe_885_Just ) ( ( (  mk1333 ) ( ( ( * (  ed3360 ) ) .f_al ) ) ) ) );
                                            }
                                            struct Maybe_885 *  dref3431 = ( & ( ( * (  ed3360 ) ) .f_delete_dash_acc ) );
                                            if ( (* dref3431 ).tag == Maybe_885_Just_t ) {
                                                struct funenv699  temp1732 = ( (struct funenv699){ .fun = write_dash_char699, .env =  envinst699  } );
                                                ( temp1732.fun ( temp1732.env ,  ( & ( (* dref3431 ) .stuff .Maybe_885_Just_s .field0 ) ) ,  (  elem_dash_get1188 ( ( ( dref3424 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) ) );
                                            }
                                            else if ( true ) {
                                            }
                                        }
                                    }
                                    struct funenv1512  temp1733 = ( (struct funenv1512){ .fun = apply_dash_primitive1512, .env =  envinst1512  } );
                                    ( temp1733.fun ( temp1733.env ,  (  ed3360 ) ,  ( ( Primitive_153_PrimDelete ) ( ( ( * (  ed3360 ) ) .f_cursor ) ,  ( dref3424 .stuff .Maybe_356_Just_s .field0 ) ) ) ,  (  dims3421 ) ) );
                                    ( (  free1210 ) ( ( ( * (  ed3360 ) ) .f_al ) ,  ( ( dref3424 .stuff .Maybe_356_Just_s .field0 ) .f_contents ) ) );
                                }
                            }
                        }
                    }
                    else if ( (* dref3420 ).tag == Mode_892_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1332 ) ( ( & ( (* dref3420 ) .stuff .Mode_892_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1330  temp1734 = ( (struct funenv1330){ .fun = pop1330, .env =  envinst1330  } );
                            ( temp1734.fun ( temp1734.env ,  ( & ( (* dref3420 ) .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3420 ).tag == Mode_892_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1332 ) ( ( & ( (* dref3420 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1330  temp1735 = ( (struct funenv1330){ .fun = pop1330, .env =  envinst1330  } );
                            ( temp1735.fun ( temp1735.env ,  ( & ( (* dref3420 ) .stuff .Mode_892_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3371.tag == Key_602_Enter_t ) {
                    struct Mode_892  dref3435 = ( ( * (  ed3360 ) ) .f_mode );
                    if ( dref3435.tag == Mode_892_Normal_t ) {
                    }
                    else if ( dref3435.tag == Mode_892_Select_t ) {
                    }
                    else if ( dref3435.tag == Mode_892_Insert_t ) {
                        int32_t  cx3436 = ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1736 = ( (  mk1244 ) ( (  al3362 ) ) );
                        struct List_3 *  nurow3437 = ( &temp1736 );
                        struct TakeWhile_560  rowws3438 = ( (  indent_dash_on_dash_row1470 ) ( (  ed3360 ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3439 = ( (  size_dash_i32313 ) ( ( (  count839 ) ( (  rowws3438 ) ) ) ) );
                        struct funenv1276  temp1737 = ( (struct funenv1276){ .fun = add_dash_all1276, .env =  envinst1276  } );
                        ( temp1737.fun ( temp1737.env ,  (  nurow3437 ) ,  (  rowws3438 ) ) );
                        struct List_3 *  cur_dash_row3440 = ( (  cursor_dash_row1469 ) ( (  ed3360 ) ) );
                        struct funenv1272  temp1738 = ( (struct funenv1272){ .fun = add_dash_all1272, .env =  envinst1272  } );
                        ( temp1738.fun ( temp1738.env ,  (  nurow3437 ) ,  ( (  subslice335 ) ( ( (  to_dash_slice1285 ) ( ( * (  cur_dash_row3440 ) ) ) ) ,  ( (  i32_dash_size311 ) ( (  cx3436 ) ) ) ,  ( ( * (  cur_dash_row3440 ) ) .f_count ) ) ) ) );
                        ( (  trim1278 ) ( (  cur_dash_row3440 ) ,  ( (  i32_dash_size311 ) ( (  cx3436 ) ) ) ) );
                        struct funenv1261  temp1739 = ( (struct funenv1261){ .fun = insert1261, .env =  envinst1261  } );
                        ( temp1739.fun ( temp1739.env ,  ( & ( ( * (  ed3360 ) ) .f_current_dash_file ) ) ,  (  op_dash_add98 ( ( (  i32_dash_size311 ) ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3437 ) ) ) );
                        struct funenv1630  temp1740 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                        ( (  move_dash_to1485 ) ( (  ed3360 ) ,  (  offchars3439 ) ,  (  op_dash_add87 ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1740.fun ( temp1740.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                    }
                    else if ( dref3435.tag == Mode_892_Cmd_t ) {
                        struct DynStr_134  s3442 = ( (  as_dash_str977 ) ( ( & ( dref3435 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1653  temp1741 = ( (struct funenv1653){ .fun = run_dash_cmd1653, .env =  envinst1653  } );
                        struct funenv1630  temp1742 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                        ( temp1741.fun ( temp1741.env ,  (  ed3360 ) ,  (  s3442 ) ,  ( temp1742.fun ( temp1742.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ,  (  al3362 ) ) );
                        ( (  free1335 ) ( ( & ( dref3435 .stuff .Mode_892_Cmd_s .field0 ) ) ) );
                        struct funenv1550  temp1743 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1743.fun ( temp1743.env ,  (  ed3360 ) ) );
                    }
                    else if ( dref3435.tag == Mode_892_SearchBox_t ) {
                        struct Maybe_885  dref3444 = ( ( * (  ed3360 ) ) .f_search_dash_term );
                        if ( dref3444.tag == Maybe_885_Just_t ) {
                            ( (  free1335 ) ( ( & ( dref3444 .stuff .Maybe_885_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3444.tag == Maybe_885_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1332 ) ( ( & ( dref3435 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3360 ) .f_search_dash_term = ( ( Maybe_885_Just ) ( ( dref3435 .stuff .Mode_892_SearchBox_s .field0 ) ) );
                            struct funenv1589  temp1744 = ( (struct funenv1589){ .fun = find_dash_next_dash_occurence1589, .env =  envinst1589  } );
                            struct Maybe_157  dref3446 = ( temp1744.fun ( temp1744.env ,  (  ed3360 ) ,  ( (  as_dash_char_dash_slice1334 ) ( ( & ( dref3435 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3446.tag == Maybe_157_None_t ) {
                            }
                            else if ( dref3446.tag == Maybe_157_Just_t ) {
                                struct funenv1630  temp1745 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                                ( (  move_dash_to1485 ) ( (  ed3360 ) ,  (  op_dash_sub88 ( (  op_dash_add87 ( ( ( dref3446 .stuff .Maybe_157_Just_s .field0 ) .f_x ) , ( (  size_dash_i32313 ) ( ( (  count1332 ) ( ( & ( dref3435 .stuff .Mode_892_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3446 .stuff .Maybe_157_Just_s .field0 ) .f_y ) ,  ( temp1745.fun ( temp1745.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
                                (*  ed3360 ) .f_selected = ( ( Maybe_157_Just ) ( ( dref3446 .stuff .Maybe_157_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3360 ) .f_search_dash_term = ( (struct Maybe_885) { .tag = Maybe_885_None_t } );
                        }
                        struct funenv1550  temp1746 = ( (struct funenv1550){ .fun = set_dash_mode_dash_normal1550, .env =  envinst1550  } );
                        ( temp1746.fun ( temp1746.env ,  (  ed3360 ) ) );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3369.tag == InputEvent_601_Mouse_t ) {
                enum MouseButton_149  dref3449 = ( ( dref3369 .stuff .InputEvent_601_Mouse_s .field0 ) .f_button );
                switch (  dref3449 ) {
                    case MouseButton_149_MouseLeft : {
                        if ( ( ( dref3369 .stuff .InputEvent_601_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3450 = ( (  size_dash_i32313 ) ( ( ( ( * (  ed3360 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3451 = ( (  clamp959 ) ( (  op_dash_add87 ( ( ( * (  ed3360 ) ) .f_screen_dash_top ) , ( ( dref3369 .stuff .InputEvent_601_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub88 ( (  linecnt3450 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1628  temp1747 = ( (struct funenv1628){ .fun = left_dash_offset1628, .env =  envinst1628  } );
                            struct Visual_891  vx3452 = ( ( Visual_891_Visual ) ( (  op_dash_sub88 ( ( ( dref3369 .stuff .InputEvent_601_Mouse_s .field0 ) .f_x ) , ( ( temp1747.fun ( temp1747.env ,  (  ed3360 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3453 = ( (  visual_dash_x_dash_to_dash_x1478 ) ( (  ed3360 ) ,  (  vx3452 ) ,  (  cy3451 ) ) );
                            (*  ed3360 ) .f_cursor .f_x = (  cx3453 );
                            (*  ed3360 ) .f_goal_dash_x = (  vx3452 );
                            struct funenv1630  temp1748 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                            ( (  move_dash_to_dash_row1488 ) ( (  ed3360 ) ,  (  cy3451 ) ,  ( temp1748.fun ( temp1748.env ,  (  ed3360 ) ,  (  tui3361 ) ) ) ) );
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
        struct funenv1419  temp1749 = ( (struct funenv1419){ .fun = resize_dash_screen_dash_if_dash_needed1419, .env =  envinst1419  } );
        bool  resized3454 = ( temp1749.fun ( temp1749.env ,  (  screen3363 ) ) );
        if ( ( ( ( (  resized3454 ) || (  cmp80 ( (  events3366 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3365 ) ) || ( (  is_dash_just886 ) ( ( ( * (  ed3360 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3365 = ( false );
            ( (  clear_dash_screen1409 ) ( (  screen3363 ) ) );
            ( (  set_dash_screen_dash_fg1421 ) ( (  screen3363 ) ,  ( ( * ( ( * (  ed3360 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1422 ) ( (  screen3363 ) ,  ( ( * ( ( * (  ed3360 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1425 ) ( (  screen3363 ) ) );
            struct funenv1632  temp1750 = ( (struct funenv1632){ .fun = render_dash_editor1632, .env =  envinst1632  } );
            ( temp1750.fun ( temp1750.env ,  (  screen3363 ) ,  (  ed3360 ) ) );
            bool  debug3455 = ( true );
            if ( (  debug3455 ) ) {
                ( (  draw_dash_str_dash_right1444 ) ( (  screen3363 ) ,  ( ( StrConcat_971_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3360 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1445 ) ( (  screen3363 ) ,  ( ( StrConcat_986_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3361 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env889 envinst889 = {
                    .ed3360 =  ed3360 ,
                };
                struct Maybe_392  charcode3460 = ( (  fmap_dash_maybe899 ) ( ( (  and_dash_maybe888 ) ( ( (  try_dash_get1240 ) ( ( & ( ( * (  ed3360 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size311 ) ( ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv889){ .fun = lam889, .env = envinst889 } ) ) ) ,  (  lam1751 ) ) );
                ( (  draw_dash_str_dash_right1446 ) ( (  screen3363 ) ,  ( ( StrConcat_988_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3460 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1447 ) ( (  screen3363 ) ,  ( ( StrConcat_1014_StrConcat ) ( ( ( StrConcat_1015_StrConcat ) ( ( ( StrConcat_1016_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3461 = ( ( * ( (  get_dash_row1468 ) ( (  ed3360 ) ,  ( ( ( * (  ed3360 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1448 ) ( (  screen3363 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3461 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3462 = ( (  from_dash_visual1465 ) ( ( ( * (  ed3360 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1449 ) ( (  screen3363 ) ,  ( ( StrConcat_1016_StrConcat ) ( ( "goal x: " ) ,  (  gx3462 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1630  temp1752 = ( (struct funenv1630){ .fun = screen_dash_dims1630, .env =  envinst1630  } );
                struct Dims_1486  dim3463 = ( temp1752.fun ( temp1752.env ,  (  ed3360 ) ,  (  tui3361 ) ) );
                ( (  draw_dash_str_dash_right1450 ) ( (  screen3363 ) ,  ( ( StrConcat_1023_StrConcat ) ( ( ( StrConcat_1024_StrConcat ) ( ( ( StrConcat_1016_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3360 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3463 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1451 ) ( (  screen3363 ) ,  ( ( StrConcat_1028_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3360 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1452 ) ( (  screen3363 ) ,  ( ( StrConcat_1042_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3360 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_901  cpsize3466 = ( (  fmap_dash_maybe900 ) ( ( ( * (  ed3360 ) ) .f_clipboard ) ,  (  lam1753 ) ) );
                ( (  draw_dash_str_dash_right1453 ) ( (  screen3363 ) ,  ( ( StrConcat_1046_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3466 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
                ( (  draw_dash_str_dash_right1454 ) ( (  screen3363 ) ,  ( ( StrConcat_1057_StrConcat ) ( ( ( StrConcat_1049_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "actions: " ) ,  ( ( ( * (  ed3360 ) ) .f_actions ) .f_cur ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ,  ( ( ( ( * (  ed3360 ) ) .f_actions ) .f_list ) .f_count ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 10 ) ) ) );
            }
            ( (  update_dash_animation1648 ) ( ( & ( ( * (  ed3360 ) ) .f_anim ) ) ,  (  screen3363 ) ) );
            ( (  render_dash_screen1413 ) ( (  screen3363 ) ) );
        }
        ( (  sync1387 ) ( (  tui3361 ) ) );
    }
    ( (  free_dash_screen1408 ) ( (  screen3363 ) ) );
    ( (  deinit1391 ) ( (  tui3361 ) ) );
}
