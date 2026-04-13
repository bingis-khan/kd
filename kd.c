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

static  enum Unit_13   print_dash_str22 (    const char*  self1001 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1001 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str27 (    size_t  self1053 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1053 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str26 (    struct StrConcat_17  self1092 ) {
    struct StrConcat_17  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str25 (    struct StrConcat_16  self1092 ) {
    struct StrConcat_16  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str24 (    struct StrConcat_15  self1092 ) {
    struct StrConcat_15  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str28 (    char  self1007 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1007 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str23 (    struct StrConcat_14  self1092 ) {
    struct StrConcat_14  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str21 (    struct StrConcat_20  self1092 ) {
    struct StrConcat_20  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str23 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str18 (    struct StrConcat_19  self1092 ) {
    struct StrConcat_19  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str21 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  int32_t   from_dash_integral29 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  enum Unit_13   panic12 (    struct StrConcat_14  errmsg1244 ) {
    ( (  print_dash_str18 ) ( ( ( StrConcat_19_StrConcat ) ( ( ( StrConcat_20_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
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

static  char *   get_dash_ptr30 (    struct Slice_5  slice1290 ,    size_t  i1292 ) {
    if ( ( (  cmp9 ( (  i1292 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1292 ) , ( (  slice1290 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1292 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1290 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1293 = ( (  offset_dash_ptr31 ) ( ( (  slice1290 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1292 ) ) ) ) );
    return (  elem_dash_ptr1293 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1583 ,    size_t  i1585 ) {
    if ( ( (  cmp9 ( (  i1585 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1585 ) , ( ( * (  list1583 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1585 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1583 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1583 ) ) .f_elements ) ,  (  i1585 ) ) );
}

static  char   get7 (    struct List_3 *  list1593 ,    size_t  i1595 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1593 ) ,  (  i1595 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1654 ,    size_t  k1656 ) {
    return ( (  get7 ) ( ( & (  self1654 ) ) ,  (  k1656 ) ) );
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

enum Color8_54 {
    Color8_54_Black8,
    Color8_54_Red8,
    Color8_54_Green8,
    Color8_54_Yellow8,
    Color8_54_Blue8,
    Color8_54_Magenta8,
    Color8_54_Cyan8,
    Color8_54_White8,
};

enum Color16_55 {
    Color16_55_Black16,
    Color16_55_Red16,
    Color16_55_Green16,
    Color16_55_Yellow16,
    Color16_55_Blue16,
    Color16_55_Magenta16,
    Color16_55_Cyan16,
    Color16_55_White16,
    Color16_55_BrightBlack16,
    Color16_55_BrightRed16,
    Color16_55_BrightGreen16,
    Color16_55_BrightYellow16,
    Color16_55_BrightBlue16,
    Color16_55_BrightMagenta16,
    Color16_55_BrightCyan16,
    Color16_55_BrightWhite16,
};

struct RGB_56 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_53 {
    enum {
        Color_53_ColorDefault_t,
        Color_53_Color8_t,
        Color_53_Color16_t,
        Color_53_Color256_t,
        Color_53_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_54  field0;
        } Color_53_Color8_s;
        struct {
            enum Color16_55  field0;
        } Color_53_Color16_s;
        struct {
            uint8_t  field0;
        } Color_53_Color256_s;
        struct {
            struct RGB_56  field0;
        } Color_53_ColorRGB_s;
    } stuff;
};

static struct Color_53 Color_53_Color8 (  enum Color8_54  field0 ) {
    return ( struct Color_53 ) { .tag = Color_53_Color8_t, .stuff = { .Color_53_Color8_s = { .field0 = field0 } } };
};

static struct Color_53 Color_53_Color16 (  enum Color16_55  field0 ) {
    return ( struct Color_53 ) { .tag = Color_53_Color16_t, .stuff = { .Color_53_Color16_s = { .field0 = field0 } } };
};

static struct Color_53 Color_53_Color256 (  uint8_t  field0 ) {
    return ( struct Color_53 ) { .tag = Color_53_Color256_t, .stuff = { .Color_53_Color256_s = { .field0 = field0 } } };
};

static struct Color_53 Color_53_ColorRGB (  struct RGB_56  field0 ) {
    return ( struct Color_53 ) { .tag = Color_53_ColorRGB_t, .stuff = { .Color_53_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_52 {
    char  f_c;
    struct Color_53  f_fg;
    struct Color_53  f_bg;
};

struct Tuple2_59 {
    struct Color_53  field0;
    struct Color_53  field1;
};

static struct Tuple2_59 Tuple2_59_Tuple2 (  struct Color_53  field0 ,  struct Color_53  field1 ) {
    return ( struct Tuple2_59 ) { .field0 = field0 ,  .field1 = field1 };
};

static  void *   cast_dash_ptr65 (    int32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  size_t   size_dash_of66 (    int32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  int32_t   zeroed63 (  ) {
    int32_t  temp64;
    int32_t  x473 = (  temp64 );
    ( ( memset ) ( ( (  cast_dash_ptr65 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of66 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Color8_54 *   cast67 (    int32_t *  x463 ) {
    return ( (enum Color8_54 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed61 (    enum Color8_54  x476 ) {
    int32_t  temp62 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp62 );
    enum Color8_54 *  yp478 = ( (  cast67 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq60 (    enum Color8_54  l1776 ,    enum Color8_54  r1778 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed61 ) ( (  l1776 ) ) ) ) , ( (  cast_dash_on_dash_zeroed61 ) ( (  r1778 ) ) ) ) );
}

static  enum Color16_55 *   cast71 (    int32_t *  x463 ) {
    return ( (enum Color16_55 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed69 (    enum Color16_55  x476 ) {
    int32_t  temp70 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp70 );
    enum Color16_55 *  yp478 = ( (  cast71 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq68 (    enum Color16_55  l1782 ,    enum Color16_55  r1784 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed69 ) ( (  l1782 ) ) ) ) , ( (  cast_dash_on_dash_zeroed69 ) ( (  r1784 ) ) ) ) );
}

static  bool   eq72 (    struct RGB_56  l1812 ,    struct RGB_56  r1814 ) {
    return ( ( (  eq43 ( ( (  l1812 ) .f_r ) , ( (  r1814 ) .f_r ) ) ) && (  eq43 ( ( (  l1812 ) .f_g ) , ( (  r1814 ) .f_g ) ) ) ) && (  eq43 ( ( (  l1812 ) .f_b ) , ( (  r1814 ) .f_b ) ) ) );
}

static  bool   eq58 (    struct Color_53  l1835 ,    struct Color_53  r1837 ) {
    return ( {  struct Tuple2_59  dref1838 = ( ( Tuple2_59_Tuple2 ) ( (  l1835 ) ,  (  r1837 ) ) ) ; dref1838 .field0.tag == Color_53_ColorDefault_t && dref1838 .field1.tag == Color_53_ColorDefault_t ? ( true ) : dref1838 .field0.tag == Color_53_Color8_t && dref1838 .field1.tag == Color_53_Color8_t ? (  eq60 ( ( dref1838 .field0 .stuff .Color_53_Color8_s .field0 ) , ( dref1838 .field1 .stuff .Color_53_Color8_s .field0 ) ) ) : dref1838 .field0.tag == Color_53_Color16_t && dref1838 .field1.tag == Color_53_Color16_t ? (  eq68 ( ( dref1838 .field0 .stuff .Color_53_Color16_s .field0 ) , ( dref1838 .field1 .stuff .Color_53_Color16_s .field0 ) ) ) : dref1838 .field0.tag == Color_53_Color256_t && dref1838 .field1.tag == Color_53_Color256_t ? (  eq43 ( ( dref1838 .field0 .stuff .Color_53_Color256_s .field0 ) , ( dref1838 .field1 .stuff .Color_53_Color256_s .field0 ) ) ) : dref1838 .field0.tag == Color_53_ColorRGB_t && dref1838 .field1.tag == Color_53_ColorRGB_t ? (  eq72 ( ( dref1838 .field0 .stuff .Color_53_ColorRGB_s .field0 ) , ( dref1838 .field1 .stuff .Color_53_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq57 (    struct Cell_52  l2280 ,    struct Cell_52  r2282 ) {
    if ( ( !  eq47 ( ( (  l2280 ) .f_c ) , ( (  r2282 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq58 ( ( (  l2280 ) .f_fg ) , ( (  r2282 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq58 ( ( (  l2280 ) .f_bg ) , ( (  r2282 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq51 (    struct Cell_52 *  dref141 ,    struct Cell_52 *  dref143 ) {
    return (  eq57 ( ( (* dref141 ) ) , ( (* dref143 ) ) ) );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp73 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp74 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp75 (    uint32_t  l162 ,    uint32_t  r164 ) {
    return ( builtin_uint32_tcmp( (  l162 ) , (  r164 ) ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp76 (    uint8_t  l167 ,    uint8_t  r169 ) {
    return ( builtin_uint8_tcmp( (  l167 ) , (  r169 ) ) );
}

static  int64_t   op_dash_add77 (    int64_t  l172 ,    int64_t  r174 ) {
    return ( (  l172 ) + (  r174 ) );
}

static  int64_t   op_dash_sub78 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) - (  r179 ) );
}

static  int64_t   op_dash_div79 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) / (  r189 ) );
}

static  int64_t   op_dash_neg80 (    int64_t  l192 ) {
    return ( (  from_dash_integral35 ( 0 ) ) - (  l192 ) );
}

static  int32_t   op_dash_add81 (    int32_t  l195 ,    int32_t  r197 ) {
    return ( (  l195 ) + (  r197 ) );
}

static  int32_t   op_dash_sub82 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) - (  r202 ) );
}

static  int32_t   op_dash_mul83 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) * (  r207 ) );
}

static  int32_t   op_dash_div84 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) / (  r212 ) );
}

static  int32_t   op_dash_neg85 (    int32_t  x215 ) {
    return ( (  from_dash_integral29 ( 0 ) ) - (  x215 ) );
}

static  uint32_t   op_dash_add86 (    uint32_t  l218 ,    uint32_t  r220 ) {
    return ( (  l218 ) + (  r220 ) );
}

static  uint32_t   op_dash_sub87 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) - (  r225 ) );
}

static  uint32_t   op_dash_mul88 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) * (  r230 ) );
}

static  uint32_t   op_dash_div89 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) / (  r235 ) );
}

static  uint8_t   op_dash_add90 (    uint8_t  l238 ,    uint8_t  r240 ) {
    return ( (  l238 ) + (  r240 ) );
}

static  uint8_t   op_dash_sub91 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) - (  r245 ) );
}

static  size_t   op_dash_add92 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub93 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul94 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

static  size_t   op_dash_div95 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) / (  r275 ) );
}

struct Array_98 {
    uint32_t _arr [4];
};

struct SmolArray_97 {
    struct Array_98  f_arr;
};

static  struct SmolArray_97   from_dash_listlike96 (    struct Array_98  arr301 ) {
    return ( (struct SmolArray_97) { .f_arr = (  arr301 ) } );
}

struct Array_101 {
    uint32_t _arr [5];
};

struct SmolArray_100 {
    struct Array_101  f_arr;
};

static  struct SmolArray_100   from_dash_listlike99 (    struct Array_101  arr301 ) {
    return ( (struct SmolArray_100) { .f_arr = (  arr301 ) } );
}

struct Array_104 {
    uint32_t _arr [1];
};

struct SmolArray_103 {
    struct Array_104  f_arr;
};

static  struct SmolArray_103   from_dash_listlike102 (    struct Array_104  arr301 ) {
    return ( (struct SmolArray_103) { .f_arr = (  arr301 ) } );
}

static  int32_t   clock_dash_monotonic105 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   seek_dash_set106 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  int32_t   seek_dash_end107 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  int32_t   stdout_dash_fileno108 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   stdin_dash_fileno109 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  uint32_t   echo110 (  ) {
    return (  from_dash_integral36 ( 8 ) );
}

static  uint32_t   icanon111 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   isig112 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   iexten113 (  ) {
    return (  from_dash_integral36 ( 32768 ) );
}

static  uint32_t   brkint114 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   icrnl115 (  ) {
    return (  from_dash_integral36 ( 256 ) );
}

static  uint32_t   inpck116 (  ) {
    return (  from_dash_integral36 ( 16 ) );
}

static  uint32_t   istrip117 (  ) {
    return (  from_dash_integral36 ( 32 ) );
}

static  uint32_t   ixon118 (  ) {
    return (  from_dash_integral36 ( 1024 ) );
}

static  uint32_t   opost119 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   cs8120 (  ) {
    return (  from_dash_integral36 ( 48 ) );
}

static  size_t   vmin121 (  ) {
    return (  from_dash_integral11 ( 6 ) );
}

static  size_t   vtime122 (  ) {
    return (  from_dash_integral11 ( 5 ) );
}

static  int32_t   tcsa_dash_flush123 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  uint64_t   tiocgwinsz124 (  ) {
    return (  from_dash_integral39 ( 21523 ) );
}

static  const char*   undefined125 (  ) {
    const char*  temp126;
    return (  temp126 );
}

static  char   undefined127 (  ) {
    char  temp128;
    return (  temp128 );
}

struct DynStr_130 {
    struct Slice_5  f_contents;
};

static  struct DynStr_130   undefined129 (  ) {
    struct DynStr_130  temp131;
    return (  temp131 );
}

static  struct timespec   undefined132 (  ) {
    struct timespec  temp133;
    return (  temp133 );
}

struct Array_136 {
    uint8_t _arr [32];
};

struct Termios_135 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_136  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_135   undefined134 (  ) {
    struct Termios_135  temp137;
    return (  temp137 );
}

static  struct Cell_52   undefined138 (  ) {
    struct Cell_52  temp139;
    return (  temp139 );
}

static  uint8_t   undefined140 (  ) {
    uint8_t  temp141;
    return (  temp141 );
}

enum MouseButton_143 {
    MouseButton_143_MouseLeft,
    MouseButton_143_MouseMiddle,
    MouseButton_143_MouseRight,
    MouseButton_143_ScrollUp,
    MouseButton_143_ScrollDown,
};

static  enum MouseButton_143   undefined142 (  ) {
    enum MouseButton_143  temp144;
    return (  temp144 );
}

static  bool   undefined145 (  ) {
    bool  temp146;
    return (  temp146 );
}

static  enum Unit_13   undefined147 (  ) {
    enum Unit_13  temp148;
    return (  temp148 );
}

static  struct Cell_52 *   undefined149 (  ) {
    struct Cell_52 *  temp150;
    return (  temp150 );
}

static  const char* *   offset_dash_ptr151 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp152;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp152 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr153 (    struct List_3 *  x450 ,    int64_t  count452 ) {
    struct List_3  temp154;
    return ( (struct List_3 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp154 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr155 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp156;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp156 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr157 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp158;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp158 ) ) ) ) ) ) ) ) );
}

static  struct Cell_52 *   offset_dash_ptr159 (    struct Cell_52 *  x450 ,    int64_t  count452 ) {
    struct Cell_52  temp160;
    return ( (struct Cell_52 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp160 ) ) ) ) ) ) ) ) );
}

struct TypeSize_162 {
    size_t  f_size;
};

static  struct TypeSize_162   get_dash_typesize161 (  ) {
    struct List_3  temp163;
    return ( (struct TypeSize_162) { .f_size = ( sizeof( ( (  temp163 ) ) ) ) } );
}

struct TypeSize_165 {
    size_t  f_size;
};

static  struct TypeSize_165   get_dash_typesize164 (  ) {
    char  temp166;
    return ( (struct TypeSize_165) { .f_size = ( sizeof( ( (  temp166 ) ) ) ) } );
}

struct TypeSize_168 {
    size_t  f_size;
};

static  struct TypeSize_168   get_dash_typesize167 (  ) {
    struct Cell_52  temp169;
    return ( (struct TypeSize_168) { .f_size = ( sizeof( ( (  temp169 ) ) ) ) } );
}

static  size_t   size_dash_of170 (    struct List_3 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of171 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of172 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of173 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of174 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Winsize_176 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of175 (    struct Winsize_176  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of177 (    enum Unit_13 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of178 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_180 {
    char _arr [32];
};

static  size_t   size_dash_of179 (    struct Array_180  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of181 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of182 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  char *   cast183 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  const char*   cast184 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  uint16_t *   cast185 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast186 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast187 (    struct Array_98 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast188 (    struct Array_101 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast189 (    struct Array_104 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t *   cast190 (    struct Array_136 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast191 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  char *   cast192 (    struct Array_180 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char *   cast193 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  uint8_t   cast194 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  uint8_t *   cast195 (    int64_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char   cast196 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  int32_t   cast197 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  uint8_t *   cast198 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char   cast199 (    uint32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast200 (    size_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint32_t *   cast201 (    int64_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr202 (    struct List_3 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   cast_dash_ptr203 (    void *  p466 ) {
    return ( (struct List_3 * ) (  p466 ) );
}

static  void *   cast_dash_ptr204 (    struct List_3 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr205 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr206 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr207 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr208 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr210 (    struct Winsize_176 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr211 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr212 (    struct Termios_135 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  struct Cell_52 *   cast_dash_ptr213 (    void *  p466 ) {
    return ( (struct Cell_52 * ) (  p466 ) );
}

static  void *   cast_dash_ptr214 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_216 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr215 (    struct Pollfd_216 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr217 (    struct Array_180 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr218 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr219 (    enum Unit_13 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr220 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr221 (    struct Cell_52 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   zeroed222 (  ) {
    struct List_3 *  temp223;
    struct List_3 *  x473 = (  temp223 );
    ( ( memset ) ( ( (  cast_dash_ptr202 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of170 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed224 (  ) {
    char *  temp225;
    char *  x473 = (  temp225 );
    ( ( memset ) ( ( (  cast_dash_ptr205 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of171 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed226 (  ) {
    char  temp227;
    char  x473 = (  temp227 );
    ( ( memset ) ( ( (  cast_dash_ptr207 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of172 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed228 (  ) {
    FILE *  temp229;
    FILE *  x473 = (  temp229 );
    ( ( memset ) ( ( (  cast_dash_ptr208 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed230 (  ) {
    uint32_t  temp231;
    uint32_t  x473 = (  temp231 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of174 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_176   zeroed232 (  ) {
    struct Winsize_176  temp233;
    struct Winsize_176  x473 = (  temp233 );
    ( ( memset ) ( ( (  cast_dash_ptr210 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed234 (  ) {
    enum Unit_13 *  temp235;
    enum Unit_13 *  x473 = (  temp235 );
    ( ( memset ) ( ( (  cast_dash_ptr211 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of177 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed236 (  ) {
    size_t  temp237;
    size_t  x473 = (  temp237 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_180   zeroed238 (  ) {
    struct Array_180  temp239;
    struct Array_180  x473 = (  temp239 );
    ( ( memset ) ( ( (  cast_dash_ptr217 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of179 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed240 (  ) {
    int64_t  temp241;
    int64_t  x473 = (  temp241 );
    ( ( memset ) ( ( (  cast_dash_ptr218 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of181 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed242 (  ) {
    struct timespec *  temp243;
    struct timespec *  x473 = (  temp243 );
    ( ( memset ) ( ( (  cast_dash_ptr220 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of182 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed244 (    uint16_t  x476 ) {
    uint32_t  temp245 = ( (  zeroed230 ) ( ) );
    uint32_t *  y477 = ( &temp245 );
    uint16_t *  yp478 = ( (  cast185 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed246 (    uint32_t  x476 ) {
    size_t  temp247 = ( (  zeroed236 ) ( ) );
    size_t *  y477 = ( &temp247 );
    uint32_t *  yp478 = ( (  cast191 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed248 (    char  x476 ) {
    int32_t  temp249 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp249 );
    char *  yp478 = ( (  cast193 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed250 (    uint8_t  x476 ) {
    int64_t  temp251 = ( (  zeroed240 ) ( ) );
    int64_t *  y477 = ( &temp251 );
    uint8_t *  yp478 = ( (  cast195 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed252 (    uint8_t  x476 ) {
    int32_t  temp253 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp253 );
    uint8_t *  yp478 = ( (  cast198 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed254 (    uint32_t  x476 ) {
    int64_t  temp255 = ( (  zeroed240 ) ( ) );
    int64_t *  y477 = ( &temp255 );
    uint32_t *  yp478 = ( (  cast201 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  struct List_3 *   null_dash_ptr256 (  ) {
    return ( (  zeroed222 ) ( ) );
}

static  char *   null_dash_ptr257 (  ) {
    return ( (  zeroed224 ) ( ) );
}

static  FILE *   null_dash_ptr258 (  ) {
    return ( (  zeroed228 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr259 (  ) {
    return ( (  zeroed234 ) ( ) );
}

static  struct timespec *   null_dash_ptr260 (  ) {
    return ( (  zeroed242 ) ( ) );
}

static  bool   is_dash_ptr_dash_null261 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr258 ) ( ) ) );
}

static  bool   ptr_dash_eq262 (    enum Unit_13 *  l488 ,    enum Unit_13 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_264 {
    enum {
        Maybe_264_None_t,
        Maybe_264_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_264_Just_s;
    } stuff;
};

static struct Maybe_264 Maybe_264_Just (  const char*  field0 ) {
    return ( struct Maybe_264 ) { .tag = Maybe_264_Just_t, .stuff = { .Maybe_264_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_264   from_dash_nullable_dash_c_dash_str263 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq262 ) ( ( (  cast186 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr259 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    } else {
        return ( ( Maybe_264_Just ) ( (  s493 ) ) );
    }
}

static  uint32_t   i32_dash_u32265 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64266 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size267 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  int32_t   i64_dash_i32268 (    int64_t  x511 ) {
    return ( (int32_t ) (  x511 ) );
}

static  int32_t   size_dash_i32269 (    size_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   u16_dash_u32270 (    uint16_t  x520 ) {
    return ( (  cast_dash_on_dash_zeroed244 ) ( (  x520 ) ) );
}

static  size_t   u32_dash_size271 (    uint32_t  x526 ) {
    return ( (  cast_dash_on_dash_zeroed246 ) ( (  x526 ) ) );
}

static  int64_t   u32_dash_i64272 (    uint32_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed254 ) ( (  x529 ) ) );
}

static  int32_t   u32_dash_i32273 (    uint32_t  x535 ) {
    return ( (  cast197 ) ( (  x535 ) ) );
}

static  int64_t   u8_dash_i64274 (    uint8_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed250 ) ( (  x541 ) ) );
}

static  int32_t   u8_dash_i32275 (    uint8_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed252 ) ( (  x544 ) ) );
}

struct SliceIter_278 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_277 {
    struct SliceIter_278  f_s;
};

static  struct Scanner_277   into_dash_iter279 (    struct Scanner_277  self2178 ) {
    return (  self2178 );
}

static  struct Scanner_277   into_dash_iter276 (    struct Scanner_277 *  self547 ) {
    return ( (  into_dash_iter279 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_278   into_dash_iter282 (    struct Slice_5  self1329 ) {
    return ( (struct SliceIter_278) { .f_slice = (  self1329 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_289 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_289 StrConcat_289_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_289 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_288 {
    struct StrConcat_289  field0;
    size_t  field1;
};

static struct StrConcat_288 StrConcat_288_StrConcat (  struct StrConcat_289  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_288 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_287 {
    struct StrConcat_288  field0;
    const char*  field1;
};

static struct StrConcat_287 StrConcat_287_StrConcat (  struct StrConcat_288  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_287 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_286 {
    struct StrConcat_287  field0;
    size_t  field1;
};

static struct StrConcat_286 StrConcat_286_StrConcat (  struct StrConcat_287  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_286 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_285 {
    struct StrConcat_286  field0;
    const char*  field1;
};

static struct StrConcat_285 StrConcat_285_StrConcat (  struct StrConcat_286  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_285 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_292 {
    const char*  field0;
    struct StrConcat_285  field1;
};

static struct StrConcat_292 StrConcat_292_StrConcat (  const char*  field0 ,  struct StrConcat_285  field1 ) {
    return ( struct StrConcat_292 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_291 {
    struct StrConcat_292  field0;
    char  field1;
};

static struct StrConcat_291 StrConcat_291_StrConcat (  struct StrConcat_292  field0 ,  char  field1 ) {
    return ( struct StrConcat_291 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str298 (    struct StrConcat_289  self1092 ) {
    struct StrConcat_289  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str297 (    struct StrConcat_288  self1092 ) {
    struct StrConcat_288  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str298 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str296 (    struct StrConcat_287  self1092 ) {
    struct StrConcat_287  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str295 (    struct StrConcat_286  self1092 ) {
    struct StrConcat_286  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str296 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str294 (    struct StrConcat_285  self1092 ) {
    struct StrConcat_285  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str295 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str293 (    struct StrConcat_292  self1092 ) {
    struct StrConcat_292  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str294 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str290 (    struct StrConcat_291  self1092 ) {
    struct StrConcat_291  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic284 (    struct StrConcat_285  errmsg1244 ) {
    ( (  print_dash_str290 ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_292_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Slice_5   subslice283 (    struct Slice_5  slice1315 ,    size_t  from1317 ,    size_t  to1319 ) {
    if ( ( (  cmp9 ( (  from1317 ) , ( (  slice1315 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1319 ) , ( (  slice1315 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic284 ) ( ( ( StrConcat_285_StrConcat ) ( ( ( StrConcat_286_StrConcat ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1317 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1319 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1315 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    char *  begin_dash_ptr1320 = ( (  offset_dash_ptr31 ) ( ( (  slice1315 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1317 ) ) ) ) );
    size_t  count1321 = (  op_dash_sub93 ( (  to1319 ) , (  from1317 ) ) );
    if ( (  cmp9 ( (  count1321 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1321 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1320 ) , .f_count = (  count1321 ) } );
}

static  struct SliceIter_278   into_dash_iter281 (    struct List_3  self1610 ) {
    return ( (  into_dash_iter282 ) ( ( (  subslice283 ) ( ( (  self1610 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1610 ) .f_count ) ) ) ) );
}

static  struct SliceIter_278   into_dash_iter280 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter281 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_300 {
    EmptyIter_300_EmptyIter,
};

static  enum EmptyIter_300   nil299 (  ) {
    return ( EmptyIter_300_EmptyIter );
}

static  enum EmptyIter_300   into_dash_iter301 (    enum EmptyIter_300  self552 ) {
    return (  self552 );
}

static  struct Maybe_49   next302 (    enum EmptyIter_300 *  dref554 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_305 {
    struct DynStr_130  f_og;
    size_t  f_last;
};

struct env310 {
    size_t  starting_dash_size1618;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1619;
    ;
    ;
    ;
};

struct funenv310 {
    enum Unit_13  (*fun) (  struct env310  ,    struct List_3 *  );
    struct env310 env;
};

struct env309 {
    ;
    ;
    ;
    ;
    ;
    struct env310 envinst310;
};

struct funenv309 {
    enum Unit_13  (*fun) (  struct env309  ,    struct List_3 *  ,    char  );
    struct env309 env;
};

struct env308 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
};

struct funenv308 {
    enum Unit_13  (*fun) (  struct env308  ,    struct List_3 *  ,    struct DynStr_130  );
    struct env308 env;
};

struct env307 {
    struct env308 envinst308;
    ;
    ;
    ;
    ;
    ;
};

struct funenv307 {
    struct List_3  (*fun) (  struct env307  ,    struct DynStr_130  ,    enum CAllocator_4  );
    struct env307 env;
};

struct env306 {
    enum CAllocator_4  al2570;
    struct env307 envinst307;
};

struct funenv306 {
    struct List_3  (*fun) (  struct env306  ,    struct DynStr_130  );
    struct env306 env;
};

struct Map_304 {
    struct LineIter_305  field0;
    struct funenv306  field1;
};

static struct Map_304 Map_304_Map (  struct LineIter_305  field0 , struct funenv306  field1 ) {
    return ( struct Map_304 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_304   into_dash_iter303 (    struct Map_304  self558 ) {
    return (  self558 );
}

struct ConstStrIter_313 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_312 {
    struct ConstStrIter_313  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_312 Map_312_Map (  struct ConstStrIter_313  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_312 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_312   into_dash_iter311 (    struct Map_312  self558 ) {
    return (  self558 );
}

struct Take_316 {
    struct SliceIter_278  field0;
    size_t  field1;
};

static struct Take_316 Take_316_Take (  struct SliceIter_278  field0 ,  size_t  field1 ) {
    return ( struct Take_316 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env317 {
    ;
    int32_t  tab_dash_size2413;
    ;
    ;
};

struct funenv317 {
    int32_t  (*fun) (  struct env317  ,    char  );
    struct env317 env;
};

struct Map_315 {
    struct Take_316  field0;
    struct funenv317  field1;
};

static struct Map_315 Map_315_Map (  struct Take_316  field0 , struct funenv317  field1 ) {
    return ( struct Map_315 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_315   into_dash_iter314 (    struct Map_315  self558 ) {
    return (  self558 );
}

struct Maybe_319 {
    enum {
        Maybe_319_None_t,
        Maybe_319_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_319_Just_s;
    } stuff;
};

static struct Maybe_319 Maybe_319_Just (  struct List_3  field0 ) {
    return ( struct Maybe_319 ) { .tag = Maybe_319_Just_t, .stuff = { .Maybe_319_Just_s = { .field0 = field0 } } };
};

struct Maybe_320 {
    enum {
        Maybe_320_None_t,
        Maybe_320_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_130  field0;
        } Maybe_320_Just_s;
    } stuff;
};

static struct Maybe_320 Maybe_320_Just (  struct DynStr_130  field0 ) {
    return ( struct Maybe_320 ) { .tag = Maybe_320_Just_t, .stuff = { .Maybe_320_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail323 (    struct Maybe_49  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_49  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined127 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_49_Just_t ) {
        return ( dref1260 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get324 (    struct Slice_5  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1299 = ( (  offset_dash_ptr31 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  char   get322 (    struct Slice_5  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail323 ) ( ( (  try_dash_get324 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar325 (  ) {
    return ( (  zeroed226 ) ( ) );
}

static  char   newline326 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_130   substr327 (    struct DynStr_130  s1425 ,    size_t  from1427 ,    size_t  to1429 ) {
    return ( (struct DynStr_130) { .f_contents = ( (  subslice283 ) ( ( (  s1425 ) .f_contents ) ,  (  from1427 ) ,  (  to1429 ) ) ) } );
}

static  struct Maybe_320   next321 (    struct LineIter_305 *  self1538 ) {
    if ( ( (  cmp9 ( ( ( * (  self1538 ) ) .f_last ) , ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get322 ) ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1538 ) ) .f_last ) ) ) , ( (  nullchar325 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    }
    size_t  i1539 = ( ( * (  self1538 ) ) .f_last );
    while ( ( ! ( (  eq47 ( ( (  get322 ) ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) ,  (  i1539 ) ) ) , ( (  newline326 ) ( ) ) ) ) && (  cmp9 ( (  i1539 ) , ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) ) ) {
        i1539 = (  op_dash_add92 ( (  i1539 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_130  line1540 = ( (  substr327 ) ( ( ( * (  self1538 ) ) .f_og ) ,  ( ( * (  self1538 ) ) .f_last ) ,  (  i1539 ) ) );
    i1539 = (  op_dash_add92 ( (  i1539 ) , (  from_dash_integral11 ( 1 ) ) ) );
    (*  self1538 ) .f_last = (  i1539 );
    return ( ( Maybe_320_Just ) ( (  line1540 ) ) );
}

static  struct Maybe_319   next318 (    struct Map_304 *  dref560 ) {
    struct Maybe_320  dref563 = ( (  next321 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_320_None_t ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    else if ( dref563.tag == Maybe_320_Just_t ) {
        struct funenv306  temp328 = ( (* dref560 ) .field1 );
        return ( ( Maybe_319_Just ) ( ( temp328.fun ( temp328.env ,  ( dref563 .stuff .Maybe_320_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_330 {
    enum {
        Maybe_330_None_t,
        Maybe_330_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_330_Just_s;
    } stuff;
};

static struct Maybe_330 Maybe_330_Just (  uint32_t  field0 ) {
    return ( struct Maybe_330 ) { .tag = Maybe_330_Just_t, .stuff = { .Maybe_330_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next331 (    struct ConstStrIter_313 *  self996 ) {
    if ( (  cmp9 ( ( ( * (  self996 ) ) .f_i ) , ( (  i32_dash_size267 ) ( ( ( strlen ) ( ( ( * (  self996 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr997 = ( ( (  cast183 ) ( ( ( * (  self996 ) ) .f_ogstr ) ) ) );
    char  c998 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr997 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self996 ) ) .f_i ) ) ) ) ) );
    (*  self996 ) .f_i = (  op_dash_add92 ( ( ( * (  self996 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c998 ) ) );
}

static  struct Maybe_330   next329 (    struct Map_312 *  dref560 ) {
    struct Maybe_49  dref563 = ( (  next331 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
    }
    else if ( dref563.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_330_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_333 {
    enum {
        Maybe_333_None_t,
        Maybe_333_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_333_Just_s;
    } stuff;
};

static struct Maybe_333 Maybe_333_Just (  int32_t  field0 ) {
    return ( struct Maybe_333 ) { .tag = Maybe_333_Just_t, .stuff = { .Maybe_333_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next335 (    struct SliceIter_278 *  self1335 ) {
    size_t  off1336 = ( ( * (  self1335 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add92 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1335 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1337 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1335 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1336 ) ) ) ) ) );
    (*  self1335 ) .f_current_dash_offset = (  op_dash_add92 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1337 ) ) );
}

static  struct Maybe_49   next334 (    struct Take_316 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x626 = ( (  next335 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub93 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_333   next332 (    struct Map_315 *  dref560 ) {
    struct Maybe_49  dref563 = ( (  next334 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
    }
    else if ( dref563.tag == Maybe_49_Just_t ) {
        struct funenv317  temp336 = ( (* dref560 ) .field1 );
        return ( ( Maybe_333_Just ) ( ( temp336.fun ( temp336.env ,  ( dref563 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_305   into_dash_iter338 (    struct LineIter_305  self1535 ) {
    return (  self1535 );
}

static  struct Map_304   map337 (    struct LineIter_305  iterable567 ,   struct funenv306  fun569 ) {
    struct LineIter_305  it570 = ( (  into_dash_iter338 ) ( (  iterable567 ) ) );
    return ( ( Map_304_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct ConstStrIter_313   into_dash_iter340 (    const char*  self990 ) {
    return ( (struct ConstStrIter_313) { .f_ogstr = (  self990 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_312   map339 (    const char*  iterable567 ,    uint32_t (*  fun569 )(    char  ) ) {
    struct ConstStrIter_313  it570 = ( (  into_dash_iter340 ) ( (  iterable567 ) ) );
    return ( ( Map_312_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_316   into_dash_iter342 (    struct Take_316  self621 ) {
    return (  self621 );
}

static  struct Map_315   map341 (    struct Take_316  iterable567 ,   struct funenv317  fun569 ) {
    struct Take_316  it570 = ( (  into_dash_iter342 ) ( (  iterable567 ) ) );
    return ( ( Map_315_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct FromIter_346 {
    int32_t  f_from;
};

struct Zip_345 {
    struct SliceIter_278  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

struct Drop_344 {
    struct Zip_345  field0;
    size_t  field1;
};

static struct Drop_344 Drop_344_Drop (  struct Zip_345  field0 ,  size_t  field1 ) {
    return ( struct Drop_344 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_344   into_dash_iter343 (    struct Drop_344  self607 ) {
    return (  self607 );
}

struct Slice_351 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_350 {
    struct Slice_351  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_349 {
    struct SliceIter_350  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
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

struct Drop_353 {
    struct SliceIter_350  field0;
    size_t  field1;
};

static struct Drop_353 Drop_353_Drop (  struct SliceIter_350  field0 ,  size_t  field1 ) {
    return ( struct Drop_353 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_353   into_dash_iter352 (    struct Drop_353  self607 ) {
    return (  self607 );
}

struct Drop_355 {
    struct SliceIter_278  field0;
    size_t  field1;
};

static struct Drop_355 Drop_355_Drop (  struct SliceIter_278  field0 ,  size_t  field1 ) {
    return ( struct Drop_355 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_355   into_dash_iter354 (    struct Drop_355  self607 ) {
    return (  self607 );
}

struct Tuple2_358 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_358 Tuple2_358_Tuple2 (  char  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_333   next360 (    struct FromIter_346 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add81 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_333_Just ) ( (  v669 ) ) );
}

static  struct Maybe_357   next359 (    struct Zip_345 *  self676 ) {
    struct Zip_345  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next335 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next335 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_357   next356 (    struct Drop_344 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next359 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub93 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next359 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_363 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_363 Tuple2_363_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_363 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_362 {
    enum {
        Maybe_362_None_t,
        Maybe_362_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_363  field0;
        } Maybe_362_Just_s;
    } stuff;
};

static struct Maybe_362 Maybe_362_Just (  struct Tuple2_363  field0 ) {
    return ( struct Maybe_362 ) { .tag = Maybe_362_Just_t, .stuff = { .Maybe_362_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_319   next365 (    struct SliceIter_350 *  self1335 ) {
    size_t  off1336 = ( ( * (  self1335 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add92 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1335 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    struct List_3  elem1337 = ( * ( (  offset_dash_ptr153 ) ( ( ( ( * (  self1335 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1336 ) ) ) ) ) );
    (*  self1335 ) .f_current_dash_offset = (  op_dash_add92 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_319_Just ) ( (  elem1337 ) ) );
}

static  struct Maybe_362   next364 (    struct Zip_349 *  self676 ) {
    struct Zip_349  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_319  dref678 = ( (  next365 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
        }
        else if ( dref678.tag == Maybe_319_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next365 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_362_Just ) ( ( ( Tuple2_363_Tuple2 ) ( ( dref678 .stuff .Maybe_319_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_362   next361 (    struct Drop_348 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next364 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub93 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next364 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_319   next366 (    struct Drop_353 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next365 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub93 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next365 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_49   next367 (    struct Drop_355 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next335 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub93 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next335 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_345   into_dash_iter369 (    struct Zip_345  self673 ) {
    return (  self673 );
}

static  struct Drop_344   drop368 (    struct Zip_345  iterable614 ,    size_t  i616 ) {
    struct Zip_345  it617 = ( (  into_dash_iter369 ) ( (  iterable614 ) ) );
    return ( ( Drop_344_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_349   into_dash_iter371 (    struct Zip_349  self673 ) {
    return (  self673 );
}

static  struct Drop_348   drop370 (    struct Zip_349  iterable614 ,    size_t  i616 ) {
    struct Zip_349  it617 = ( (  into_dash_iter371 ) ( (  iterable614 ) ) );
    return ( ( Drop_348_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

struct List_373 {
    enum CAllocator_4  f_al;
    struct Slice_351  f_elements;
    size_t  f_count;
};

static  struct SliceIter_350   into_dash_iter375 (    struct Slice_351  self1329 ) {
    return ( (struct SliceIter_350) { .f_slice = (  self1329 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_351   subslice376 (    struct Slice_351  slice1315 ,    size_t  from1317 ,    size_t  to1319 ) {
    if ( ( (  cmp9 ( (  from1317 ) , ( (  slice1315 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1319 ) , ( (  slice1315 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic284 ) ( ( ( StrConcat_285_StrConcat ) ( ( ( StrConcat_286_StrConcat ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1317 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1319 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1315 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    struct List_3 *  begin_dash_ptr1320 = ( (  offset_dash_ptr153 ) ( ( (  slice1315 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1317 ) ) ) ) );
    size_t  count1321 = (  op_dash_sub93 ( (  to1319 ) , (  from1317 ) ) );
    if ( (  cmp9 ( (  count1321 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1321 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_351) { .f_ptr = (  begin_dash_ptr1320 ) , .f_count = (  count1321 ) } );
}

static  struct SliceIter_350   into_dash_iter374 (    struct List_373  self1610 ) {
    return ( (  into_dash_iter375 ) ( ( (  subslice376 ) ( ( (  self1610 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1610 ) .f_count ) ) ) ) );
}

static  struct Drop_353   drop372 (    struct List_373  iterable614 ,    size_t  i616 ) {
    struct SliceIter_350  it617 = ( (  into_dash_iter374 ) ( (  iterable614 ) ) );
    return ( ( Drop_353_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Drop_355   drop377 (    struct List_3  iterable614 ,    size_t  i616 ) {
    struct SliceIter_278  it617 = ( (  into_dash_iter281 ) ( (  iterable614 ) ) );
    return ( ( Drop_355_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_316   take378 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_316_Take ) ( ( (  into_dash_iter280 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_380 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_380 Range_380_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_380 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_380   to379 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_380_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_382 {
    struct Range_380  field0;
    int32_t  field1;
};

static struct RangeIter_382 RangeIter_382_RangeIter (  struct Range_380  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_382 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_382   into_dash_iter381 (    struct Range_380  dref645 ) {
    return ( ( RangeIter_382_RangeIter ) ( ( ( Range_380_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_333   next383 (    struct RangeIter_382 *  self653 ) {
    struct RangeIter_382  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp74 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
        }
        struct Maybe_333  x658 = ( ( Maybe_333_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_382_RangeIter ) ( ( ( Range_380_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add81 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_346   from384 (    int32_t  f662 ) {
    return ( (struct FromIter_346) { .f_from = (  f662 ) } );
}

static  struct FromIter_346   into_dash_iter385 (    struct FromIter_346  it665 ) {
    return (  it665 );
}

struct Zip_387 {
    struct Drop_353  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_387   into_dash_iter386 (    struct Zip_387  self673 ) {
    return (  self673 );
}

struct Zip_389 {
    struct Drop_355  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_389   into_dash_iter388 (    struct Zip_389  self673 ) {
    return (  self673 );
}

struct IntStrIter_392 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_391 {
    struct IntStrIter_392  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_391   into_dash_iter390 (    struct Zip_391  self673 ) {
    return (  self673 );
}

struct StrConcatIter_398 {
    struct ConstStrIter_313  f_left;
    struct SliceIter_278  f_right;
};

struct AppendIter_399 {
    enum EmptyIter_300  f_it;
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
            struct ConstStrIter_313  field0;
        } StrCaseIter_396_StrCaseIter1_s;
        struct {
            struct StrConcatIter_397  field0;
        } StrCaseIter_396_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_396 StrCaseIter_396_StrCaseIter1 (  struct ConstStrIter_313  field0 ) {
    return ( struct StrCaseIter_396 ) { .tag = StrCaseIter_396_StrCaseIter1_t, .stuff = { .StrCaseIter_396_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_396 StrCaseIter_396_StrCaseIter2 (  struct StrConcatIter_397  field0 ) {
    return ( struct StrCaseIter_396 ) { .tag = StrCaseIter_396_StrCaseIter2_t, .stuff = { .StrCaseIter_396_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_395 {
    struct ConstStrIter_313  f_left;
    struct StrCaseIter_396  f_right;
};

struct Zip_394 {
    struct StrConcatIter_395  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_394   into_dash_iter393 (    struct Zip_394  self673 ) {
    return (  self673 );
}

struct IntStrIter_403 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_402 {
    struct ConstStrIter_313  f_left;
    struct IntStrIter_403  f_right;
};

struct Zip_401 {
    struct StrConcatIter_402  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_401   into_dash_iter400 (    struct Zip_401  self673 ) {
    return (  self673 );
}

struct StrConcatIter_413 {
    struct AppendIter_399  f_left;
    struct AppendIter_399  f_right;
};

struct StrConcatIter_412 {
    struct StrConcatIter_413  f_left;
    struct ConstStrIter_313  f_right;
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
    struct ConstStrIter_313  f_left;
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
            struct ConstStrIter_313  field0;
        } StrCaseIter_407_StrCaseIter1_s;
        struct {
            struct StrConcatIter_408  field0;
        } StrCaseIter_407_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_407 StrCaseIter_407_StrCaseIter1 (  struct ConstStrIter_313  field0 ) {
    return ( struct StrCaseIter_407 ) { .tag = StrCaseIter_407_StrCaseIter1_t, .stuff = { .StrCaseIter_407_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_407 StrCaseIter_407_StrCaseIter2 (  struct StrConcatIter_408  field0 ) {
    return ( struct StrCaseIter_407 ) { .tag = StrCaseIter_407_StrCaseIter2_t, .stuff = { .StrCaseIter_407_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_406 {
    struct ConstStrIter_313  f_left;
    struct StrCaseIter_407  f_right;
};

struct Zip_405 {
    struct StrConcatIter_406  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_405   into_dash_iter404 (    struct Zip_405  self673 ) {
    return (  self673 );
}

struct StrConcatIter_418 {
    struct ConstStrIter_313  f_left;
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
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self673 ) {
    return (  self673 );
}

struct IntStrIter_422 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_421 {
    struct ConstStrIter_313  f_left;
    struct IntStrIter_422  f_right;
};

struct Zip_420 {
    struct StrConcatIter_421  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_420   into_dash_iter419 (    struct Zip_420  self673 ) {
    return (  self673 );
}

struct Zip_424 {
    struct StrConcatIter_418  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_424   into_dash_iter423 (    struct Zip_424  self673 ) {
    return (  self673 );
}

struct StrConcatIter_428 {
    struct StrConcatIter_418  f_left;
    struct ConstStrIter_313  f_right;
};

struct StrConcatIter_427 {
    struct StrConcatIter_428  f_left;
    struct IntStrIter_392  f_right;
};

struct Zip_426 {
    struct StrConcatIter_427  f_left_dash_it;
    struct FromIter_346  f_right_dash_it;
};

static  struct Zip_426   into_dash_iter425 (    struct Zip_426  self673 ) {
    return (  self673 );
}

struct env433 {
    ;
    int32_t  base922;
};

struct funenv433 {
    int32_t  (*fun) (  struct env433  ,    int32_t  ,    int32_t  );
    struct env433 env;
};

static  int32_t   reduce432 (    struct Range_380  iterable812 ,    int32_t  base814 ,   struct funenv433  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_382  it818 = ( (  into_dash_iter381 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_333  dref819 = ( (  next383 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_333_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_333_Just_t ) {
            struct funenv433  temp434 = (  fun816 );
            x817 = ( temp434.fun ( temp434.env ,  ( dref819 .stuff .Maybe_333_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp435;
    return (  temp435 );
}

static  int32_t   lam433 (   struct env433 env ,    int32_t  item926 ,    int32_t  x928 ) {
    return (  op_dash_mul83 ( (  x928 ) , ( env.base922 ) ) );
}

static  int32_t   pow431 (    int32_t  base922 ,    int32_t  p924 ) {
    struct env433 envinst433 = {
        .base922 =  base922 ,
    };
    return ( (  reduce432 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv433){ .fun = lam433, .env = envinst433 } ) ) );
}

static  struct Maybe_49   next430 (    struct IntStrIter_392 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1018 = ( (  pow431 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1019 = (  op_dash_div84 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    int32_t  upper_dash_mask1020 = (  op_dash_mul83 ( (  op_dash_div84 ( (  upper1019 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1021 = (  op_dash_sub82 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast196 ) ( (  op_dash_add81 ( (  digit1021 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_357   next429 (    struct Zip_391 *  self676 ) {
    struct Zip_391  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next430 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next430 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_362   next436 (    struct Zip_387 *  self676 ) {
    struct Zip_387  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_319  dref678 = ( (  next366 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
        }
        else if ( dref678.tag == Maybe_319_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_362) { .tag = Maybe_362_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next366 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_362_Just ) ( ( ( Tuple2_363_Tuple2 ) ( ( dref678 .stuff .Maybe_319_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_357   next437 (    struct Zip_389 *  self676 ) {
    struct Zip_389  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next367 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next367 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next442 (    struct StrConcatIter_398 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next335 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next443 (    struct AppendIter_399 *  self776 ) {
    struct Maybe_49  dref777 = ( (  next302 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next441 (    struct StrConcatIter_397 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next442 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next440 (    struct StrCaseIter_396 *  self1105 ) {
    struct StrCaseIter_396 *  dref1106 = (  self1105 );
    if ( (* dref1106 ).tag == StrCaseIter_396_StrCaseIter1_t ) {
        return ( (  next331 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_396_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1106 ).tag == StrCaseIter_396_StrCaseIter2_t ) {
        return ( (  next441 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_396_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next439 (    struct StrConcatIter_395 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next438 (    struct Zip_394 *  self676 ) {
    struct Zip_394  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next439 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next439 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env449 {
    uint32_t  base922;
    ;
};

struct funenv449 {
    uint32_t  (*fun) (  struct env449  ,    int32_t  ,    uint32_t  );
    struct env449 env;
};

static  uint32_t   reduce448 (    struct Range_380  iterable812 ,    uint32_t  base814 ,   struct funenv449  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_382  it818 = ( (  into_dash_iter381 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_333  dref819 = ( (  next383 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_333_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_333_Just_t ) {
            struct funenv449  temp450 = (  fun816 );
            x817 = ( temp450.fun ( temp450.env ,  ( dref819 .stuff .Maybe_333_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp451;
    return (  temp451 );
}

static  uint32_t   lam449 (   struct env449 env ,    int32_t  item926 ,    uint32_t  x928 ) {
    return (  op_dash_mul88 ( (  x928 ) , ( env.base922 ) ) );
}

static  uint32_t   pow447 (    uint32_t  base922 ,    int32_t  p924 ) {
    struct env449 envinst449 = {
        .base922 =  base922 ,
    };
    return ( (  reduce448 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv449){ .fun = lam449, .env = envinst449 } ) ) );
}

static  struct Maybe_49   next446 (    struct IntStrIter_403 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1018 = ( (  pow447 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1019 = (  op_dash_div89 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    uint32_t  upper_dash_mask1020 = (  op_dash_mul88 ( (  op_dash_div89 ( (  upper1019 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1021 = (  op_dash_sub87 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast199 ) ( (  op_dash_add86 ( (  digit1021 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_49   next445 (    struct StrConcatIter_402 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next446 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next444 (    struct Zip_401 *  self676 ) {
    struct Zip_401  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next445 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next445 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next460 (    struct StrConcatIter_413 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next459 (    struct StrConcatIter_412 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next460 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next458 (    struct StrConcatIter_411 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next459 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next430 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next457 (    struct StrConcatIter_410 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next458 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next456 (    struct StrConcatIter_409 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next457 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next455 (    struct StrConcatIter_408 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next456 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next454 (    struct StrCaseIter_407 *  self1105 ) {
    struct StrCaseIter_407 *  dref1106 = (  self1105 );
    if ( (* dref1106 ).tag == StrCaseIter_407_StrCaseIter1_t ) {
        return ( (  next331 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_407_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1106 ).tag == StrCaseIter_407_StrCaseIter2_t ) {
        return ( (  next455 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_407_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next453 (    struct StrConcatIter_406 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next452 (    struct Zip_405 *  self676 ) {
    struct Zip_405  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next453 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next453 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next464 (    struct StrConcatIter_418 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next430 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next463 (    struct StrConcatIter_417 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next464 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next462 (    struct StrConcatIter_416 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next463 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next430 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next461 (    struct Zip_415 *  self676 ) {
    struct Zip_415  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next462 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next462 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env470 {
    size_t  base922;
    ;
};

struct funenv470 {
    size_t  (*fun) (  struct env470  ,    int32_t  ,    size_t  );
    struct env470 env;
};

static  size_t   reduce469 (    struct Range_380  iterable812 ,    size_t  base814 ,   struct funenv470  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_382  it818 = ( (  into_dash_iter381 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_333  dref819 = ( (  next383 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_333_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_333_Just_t ) {
            struct funenv470  temp471 = (  fun816 );
            x817 = ( temp471.fun ( temp471.env ,  ( dref819 .stuff .Maybe_333_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp472;
    return (  temp472 );
}

static  size_t   lam470 (   struct env470 env ,    int32_t  item926 ,    size_t  x928 ) {
    return (  op_dash_mul94 ( (  x928 ) , ( env.base922 ) ) );
}

static  size_t   pow468 (    size_t  base922 ,    int32_t  p924 ) {
    struct env470 envinst470 = {
        .base922 =  base922 ,
    };
    return ( (  reduce469 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv470){ .fun = lam470, .env = envinst470 } ) ) );
}

static  struct Maybe_49   next467 (    struct IntStrIter_422 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1018 = ( (  pow468 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1019 = (  op_dash_div95 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    size_t  upper_dash_mask1020 = (  op_dash_mul94 ( (  op_dash_div95 ( (  upper1019 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1021 = (  op_dash_sub93 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast200 ) ( (  op_dash_add92 ( (  digit1021 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_49   next466 (    struct StrConcatIter_421 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next467 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next465 (    struct Zip_420 *  self676 ) {
    struct Zip_420  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next466 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next466 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_357   next473 (    struct Zip_424 *  self676 ) {
    struct Zip_424  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next464 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next464 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next476 (    struct StrConcatIter_428 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next464 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next331 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next475 (    struct StrConcatIter_427 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next476 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next430 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_357   next474 (    struct Zip_426 *  self676 ) {
    struct Zip_426  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next475 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_333  dref680 = ( (  next360 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_333_None_t ) {
                return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
            }
            else if ( dref680.tag == Maybe_333_Just_t ) {
                ( (  next475 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next360 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_357_Just ) ( ( ( Tuple2_358_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_333_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_349   zip477 (    struct Slice_351  left684 ,    struct FromIter_346  right686 ) {
    struct SliceIter_350  left_dash_it687 = ( (  into_dash_iter375 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_349) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_345   zip478 (    struct Slice_5  left684 ,    struct FromIter_346  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_345) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_345   zip479 (    struct List_3  left684 ,    struct FromIter_346  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_345) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_349   zip480 (    struct List_373  left684 ,    struct FromIter_346  right686 ) {
    struct SliceIter_350  left_dash_it687 = ( (  into_dash_iter374 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_349) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_387   zip481 (    struct Drop_353  left684 ,    struct FromIter_346  right686 ) {
    struct Drop_353  left_dash_it687 = ( (  into_dash_iter352 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_387) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_392   into_dash_iter483 (    struct IntStrIter_392  self1014 ) {
    return (  self1014 );
}

static  struct Zip_391   zip482 (    struct IntStrIter_392  left684 ,    struct FromIter_346  right686 ) {
    struct IntStrIter_392  left_dash_it687 = ( (  into_dash_iter483 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_391) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_389   zip484 (    struct Drop_355  left684 ,    struct FromIter_346  right686 ) {
    struct Drop_355  left_dash_it687 = ( (  into_dash_iter354 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_389) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_395   into_dash_iter486 (    struct StrConcatIter_395  self1080 ) {
    return (  self1080 );
}

static  struct Zip_394   zip485 (    struct StrConcatIter_395  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_395  left_dash_it687 = ( (  into_dash_iter486 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_394) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_402   into_dash_iter488 (    struct StrConcatIter_402  self1080 ) {
    return (  self1080 );
}

static  struct Zip_401   zip487 (    struct StrConcatIter_402  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_402  left_dash_it687 = ( (  into_dash_iter488 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_401) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_406   into_dash_iter490 (    struct StrConcatIter_406  self1080 ) {
    return (  self1080 );
}

static  struct Zip_405   zip489 (    struct StrConcatIter_406  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_406  left_dash_it687 = ( (  into_dash_iter490 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_405) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_416   into_dash_iter492 (    struct StrConcatIter_416  self1080 ) {
    return (  self1080 );
}

static  struct Zip_415   zip491 (    struct StrConcatIter_416  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_416  left_dash_it687 = ( (  into_dash_iter492 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_421   into_dash_iter494 (    struct StrConcatIter_421  self1080 ) {
    return (  self1080 );
}

static  struct Zip_420   zip493 (    struct StrConcatIter_421  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_421  left_dash_it687 = ( (  into_dash_iter494 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_420) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_418   into_dash_iter496 (    struct StrConcatIter_418  self1080 ) {
    return (  self1080 );
}

static  struct Zip_424   zip495 (    struct StrConcatIter_418  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_418  left_dash_it687 = ( (  into_dash_iter496 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_424) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_427   into_dash_iter498 (    struct StrConcatIter_427  self1080 ) {
    return (  self1080 );
}

static  struct Zip_426   zip497 (    struct StrConcatIter_427  left684 ,    struct FromIter_346  right686 ) {
    struct StrConcatIter_427  left_dash_it687 = ( (  into_dash_iter498 ) ( (  left684 ) ) );
    struct FromIter_346  right_dash_it688 = ( (  into_dash_iter385 ) ( (  right686 ) ) );
    return ( (struct Zip_426) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_500 {
    struct Scanner_277  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_500   into_dash_iter499 (    struct TakeWhile_500  self718 ) {
    return (  self718 );
}

struct TakeWhile_502 {
    struct SliceIter_278  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_502   into_dash_iter501 (    struct TakeWhile_502  self718 ) {
    return (  self718 );
}

struct DropWhile_505 {
    struct SliceIter_278  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_504 {
    struct DropWhile_505  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_504   into_dash_iter503 (    struct TakeWhile_504  self718 ) {
    return (  self718 );
}

struct DropWhile_509 {
    struct DropWhile_505  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_508 {
    struct DropWhile_509  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_507 {
    struct DropWhile_508  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_507   into_dash_iter506 (    struct TakeWhile_507  self718 ) {
    return (  self718 );
}

struct TakeWhile_511 {
    struct DropWhile_508  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_511   into_dash_iter510 (    struct TakeWhile_511  self718 ) {
    return (  self718 );
}

static  struct Maybe_49   next513 (    struct Scanner_277 *  self2175 ) {
    return ( (  next335 ) ( ( & ( ( * (  self2175 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next512 (    struct TakeWhile_500 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next513 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next514 (    struct TakeWhile_502 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next335 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next516 (    struct DropWhile_505 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next335 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next335 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next515 (    struct TakeWhile_504 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next516 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next519 (    struct DropWhile_509 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next516 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next516 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next518 (    struct DropWhile_508 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next519 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next519 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next517 (    struct TakeWhile_507 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next518 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next520 (    struct TakeWhile_511 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next518 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_500   take_dash_while521 (    struct Scanner_277 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_500) { .f_it = ( (  into_dash_iter276 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_502   take_dash_while522 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_502) { .f_it = ( (  into_dash_iter280 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_508   into_dash_iter524 (    struct DropWhile_508  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_511   take_dash_while523 (    struct DropWhile_508  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_511) { .f_it = ( (  into_dash_iter524 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_507   take_dash_while525 (    struct DropWhile_508  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_507) { .f_it = ( (  into_dash_iter524 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_505   into_dash_iter527 (    struct DropWhile_505  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_504   take_dash_while526 (    struct DropWhile_505  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_504) { .f_it = ( (  into_dash_iter527 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_509   into_dash_iter528 (    struct DropWhile_509  self733 ) {
    return (  self733 );
}

static  struct SliceIter_278   into_dash_iter530 (    struct DynStr_130  self1422 ) {
    return ( (  into_dash_iter282 ) ( ( (  self1422 ) .f_contents ) ) );
}

static  struct DropWhile_505   drop_dash_while529 (    struct DynStr_130  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_505) { .f_it = ( (  into_dash_iter530 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_509   drop_dash_while531 (    struct DropWhile_505  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_509) { .f_it = ( (  into_dash_iter527 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_508   drop_dash_while532 (    struct DropWhile_509  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_508) { .f_it = ( (  into_dash_iter528 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_399   append533 (    enum EmptyIter_300  it760 ,    char  e762 ) {
    return ( (struct AppendIter_399) { .f_it = ( (  into_dash_iter301 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_399   cons534 (    enum EmptyIter_300  it765 ,    char  e767 ) {
    return ( (  append533 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_399   single535 (    char  e770 ) {
    return ( (  cons534 ) ( ( (  nil299 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_540 {
    enum {
        Key_540_Escape_t,
        Key_540_Enter_t,
        Key_540_Tab_t,
        Key_540_Backspace_t,
        Key_540_Char_t,
        Key_540_Ctrl_t,
        Key_540_Up_t,
        Key_540_Down_t,
        Key_540_Left_t,
        Key_540_Right_t,
        Key_540_Home_t,
        Key_540_End_t,
        Key_540_PageUp_t,
        Key_540_PageDown_t,
        Key_540_Delete_t,
        Key_540_Insert_t,
        Key_540_F1_t,
        Key_540_F2_t,
        Key_540_F3_t,
        Key_540_F4_t,
        Key_540_F5_t,
        Key_540_F6_t,
        Key_540_F7_t,
        Key_540_F8_t,
        Key_540_F9_t,
        Key_540_F10_t,
        Key_540_F11_t,
        Key_540_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_540_Char_s;
        struct {
            char  field0;
        } Key_540_Ctrl_s;
    } stuff;
};

static struct Key_540 Key_540_Char (  char  field0 ) {
    return ( struct Key_540 ) { .tag = Key_540_Char_t, .stuff = { .Key_540_Char_s = { .field0 = field0 } } };
};

static struct Key_540 Key_540_Ctrl (  char  field0 ) {
    return ( struct Key_540 ) { .tag = Key_540_Ctrl_t, .stuff = { .Key_540_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_541 {
    enum MouseButton_143  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_539 {
    enum {
        InputEvent_539_Key_t,
        InputEvent_539_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_540  field0;
        } InputEvent_539_Key_s;
        struct {
            struct MouseEvent_541  field0;
        } InputEvent_539_Mouse_s;
    } stuff;
};

static struct InputEvent_539 InputEvent_539_Key (  struct Key_540  field0 ) {
    return ( struct InputEvent_539 ) { .tag = InputEvent_539_Key_t, .stuff = { .InputEvent_539_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_539 InputEvent_539_Mouse (  struct MouseEvent_541  field0 ) {
    return ( struct InputEvent_539 ) { .tag = InputEvent_539_Mouse_t, .stuff = { .InputEvent_539_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_538 {
    enum {
        Maybe_538_None_t,
        Maybe_538_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_539  field0;
        } Maybe_538_Just_s;
    } stuff;
};

static struct Maybe_538 Maybe_538_Just (  struct InputEvent_539  field0 ) {
    return ( struct Maybe_538 ) { .tag = Maybe_538_Just_t, .stuff = { .Maybe_538_Just_s = { .field0 = field0 } } };
};

struct FunIter_537 {
    struct Maybe_538 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_537   into_dash_iter536 (    struct FunIter_537  self782 ) {
    return (  self782 );
}

static  struct Maybe_538   next542 (    struct FunIter_537 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
    }
    struct Maybe_538  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_538_Just_t ) {
        return ( ( Maybe_538_Just ) ( ( dref786 .stuff .Maybe_538_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_538_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
    }
}

static  struct FunIter_537   from_dash_function543 (    struct Maybe_538 (*  fun790 )(  ) ) {
    return ( (struct FunIter_537) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env545 {
    struct Slice_351  new_dash_slice1624;
    ;
    ;
};

struct funenv545 {
    enum Unit_13  (*fun) (  struct env545  ,    struct Tuple2_363  );
    struct env545 env;
};

static  enum Unit_13   for_dash_each544 (    struct Zip_349  iterable793 ,   struct funenv545  fun795 ) {
    struct Zip_349  temp546 = ( (  into_dash_iter371 ) ( (  iterable793 ) ) );
    struct Zip_349 *  it796 = ( &temp546 );
    while ( ( true ) ) {
        struct Maybe_362  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_362_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_362_Just_t ) {
            struct funenv545  temp547 = (  fun795 );
            ( temp547.fun ( temp547.env ,  ( dref797 .stuff .Maybe_362_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env549 {
    struct Slice_5  new_dash_slice1624;
    ;
    ;
};

struct funenv549 {
    enum Unit_13  (*fun) (  struct env549  ,    struct Tuple2_358  );
    struct env549 env;
};

static  enum Unit_13   for_dash_each548 (    struct Zip_345  iterable793 ,   struct funenv549  fun795 ) {
    struct Zip_345  temp550 = ( (  into_dash_iter369 ) ( (  iterable793 ) ) );
    struct Zip_345 *  it796 = ( &temp550 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next359 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv549  temp551 = (  fun795 );
            ( temp551.fun ( temp551.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env553 {
    struct env309 envinst309;
    struct List_3 *  list1671;
};

struct funenv553 {
    enum Unit_13  (*fun) (  struct env553  ,    char  );
    struct env553 env;
};

static  enum Unit_13   for_dash_each552 (    struct DynStr_130  iterable793 ,   struct funenv553  fun795 ) {
    struct SliceIter_278  temp554 = ( (  into_dash_iter530 ) ( (  iterable793 ) ) );
    struct SliceIter_278 *  it796 = ( &temp554 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next335 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv553  temp555 = (  fun795 );
            ( temp555.fun ( temp555.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env559 {
    size_t  starting_dash_size1618;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1619;
    ;
    ;
    ;
};

struct funenv559 {
    enum Unit_13  (*fun) (  struct env559  ,    struct List_373 *  );
    struct env559 env;
};

struct env558 {
    ;
    ;
    ;
    ;
    ;
    struct env559 envinst559;
};

struct funenv558 {
    enum Unit_13  (*fun) (  struct env558  ,    struct List_373 *  ,    struct List_3  );
    struct env558 env;
};

struct env557 {
    struct env558 envinst558;
    struct List_373 *  list1671;
};

struct funenv557 {
    enum Unit_13  (*fun) (  struct env557  ,    struct List_3  );
    struct env557 env;
};

static  enum Unit_13   for_dash_each556 (    struct Map_304  iterable793 ,   struct funenv557  fun795 ) {
    struct Map_304  temp560 = ( (  into_dash_iter303 ) ( (  iterable793 ) ) );
    struct Map_304 *  it796 = ( &temp560 );
    while ( ( true ) ) {
        struct Maybe_319  dref797 = ( (  next318 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_319_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_319_Just_t ) {
            struct funenv557  temp561 = (  fun795 );
            ( temp561.fun ( temp561.env ,  ( dref797 .stuff .Maybe_319_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_564 {
    struct List_3  f_chars;
};

struct env563 {
    struct env309 envinst309;
    struct StrBuilder_564 *  builder1910;
};

struct funenv563 {
    enum Unit_13  (*fun) (  struct env563  ,    char  );
    struct env563 env;
};

static  struct ConstStrIter_313   into_dash_iter566 (    struct ConstStrIter_313  self993 ) {
    return (  self993 );
}

static  enum Unit_13   for_dash_each562 (    struct ConstStrIter_313  iterable793 ,   struct funenv563  fun795 ) {
    struct ConstStrIter_313  temp565 = ( (  into_dash_iter566 ) ( (  iterable793 ) ) );
    struct ConstStrIter_313 *  it796 = ( &temp565 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next331 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv563  temp567 = (  fun795 );
            ( temp567.fun ( temp567.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_570 {
    struct Cell_52 *  f_ptr;
    size_t  f_count;
};

struct env569 {
    struct Slice_570  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv569 {
    enum Unit_13  (*fun) (  struct env569  ,    int32_t  );
    struct env569 env;
};

static  enum Unit_13   for_dash_each568 (    struct Range_380  iterable793 ,   struct funenv569  fun795 ) {
    struct RangeIter_382  temp571 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct RangeIter_382 *  it796 = ( &temp571 );
    while ( ( true ) ) {
        struct Maybe_333  dref797 = ( (  next383 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_333_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_333_Just_t ) {
            struct funenv569  temp572 = (  fun795 );
            ( temp572.fun ( temp572.env ,  ( dref797 .stuff .Maybe_333_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env574 {
    struct Slice_570  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv574 {
    enum Unit_13  (*fun) (  struct env574  ,    int32_t  );
    struct env574 env;
};

static  enum Unit_13   for_dash_each573 (    struct Range_380  iterable793 ,   struct funenv574  fun795 ) {
    struct RangeIter_382  temp575 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct RangeIter_382 *  it796 = ( &temp575 );
    while ( ( true ) ) {
        struct Maybe_333  dref797 = ( (  next383 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_333_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_333_Just_t ) {
            struct funenv574  temp576 = (  fun795 );
            ( temp576.fun ( temp576.env ,  ( dref797 .stuff .Maybe_333_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env578 {
    struct Scanner_277 *  it898;
    ;
};

struct funenv578 {
    struct Maybe_49  (*fun) (  struct env578  ,    int32_t  );
    struct env578 env;
};

static  enum Unit_13   for_dash_each577 (    struct Range_380  iterable793 ,   struct funenv578  fun795 ) {
    struct RangeIter_382  temp579 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct RangeIter_382 *  it796 = ( &temp579 );
    while ( ( true ) ) {
        struct Maybe_333  dref797 = ( (  next383 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_333_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_333_Just_t ) {
            struct funenv578  temp580 = (  fun795 );
            ( temp580.fun ( temp580.env ,  ( dref797 .stuff .Maybe_333_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env582 {
    struct env309 envinst309;
    struct List_3 *  list1671;
};

struct funenv582 {
    enum Unit_13  (*fun) (  struct env582  ,    char  );
    struct env582 env;
};

static  enum Unit_13   for_dash_each581 (    struct List_3 *  iterable793 ,   struct funenv582  fun795 ) {
    struct SliceIter_278  temp583 = ( (  into_dash_iter280 ) ( (  iterable793 ) ) );
    struct SliceIter_278 *  it796 = ( &temp583 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next335 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv582  temp584 = (  fun795 );
            ( temp584.fun ( temp584.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env586 {
    ;
    ;
    struct List_3 *  list1643;
    ;
    ;
};

struct funenv586 {
    enum Unit_13  (*fun) (  struct env586  ,    struct Tuple2_358  );
    struct env586 env;
};

static  enum Unit_13   for_dash_each585 (    struct Drop_344  iterable793 ,   struct funenv586  fun795 ) {
    struct Drop_344  temp587 = ( (  into_dash_iter343 ) ( (  iterable793 ) ) );
    struct Drop_344 *  it796 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next356 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv586  temp588 = (  fun795 );
            ( temp588.fun ( temp588.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env590 {
    struct Slice_5  dest1360;
    ;
    ;
};

struct funenv590 {
    enum Unit_13  (*fun) (  struct env590  ,    struct Tuple2_358  );
    struct env590 env;
};

static  enum Unit_13   for_dash_each589 (    struct Zip_345  iterable793 ,   struct funenv590  fun795 ) {
    struct Zip_345  temp591 = ( (  into_dash_iter369 ) ( (  iterable793 ) ) );
    struct Zip_345 *  it796 = ( &temp591 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next359 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv590  temp592 = (  fun795 );
            ( temp592.fun ( temp592.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env594 {
    ;
    ;
    struct List_373 *  list1643;
    ;
    ;
};

struct funenv594 {
    enum Unit_13  (*fun) (  struct env594  ,    struct Tuple2_363  );
    struct env594 env;
};

static  enum Unit_13   for_dash_each593 (    struct Drop_348  iterable793 ,   struct funenv594  fun795 ) {
    struct Drop_348  temp595 = ( (  into_dash_iter347 ) ( (  iterable793 ) ) );
    struct Drop_348 *  it796 = ( &temp595 );
    while ( ( true ) ) {
        struct Maybe_362  dref797 = ( (  next361 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_362_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_362_Just_t ) {
            struct funenv594  temp596 = (  fun795 );
            ( temp596.fun ( temp596.env ,  ( dref797 .stuff .Maybe_362_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env598 {
    struct Slice_351  dest1360;
    ;
    ;
};

struct funenv598 {
    enum Unit_13  (*fun) (  struct env598  ,    struct Tuple2_363  );
    struct env598 env;
};

static  enum Unit_13   for_dash_each597 (    struct Zip_349  iterable793 ,   struct funenv598  fun795 ) {
    struct Zip_349  temp599 = ( (  into_dash_iter371 ) ( (  iterable793 ) ) );
    struct Zip_349 *  it796 = ( &temp599 );
    while ( ( true ) ) {
        struct Maybe_362  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_362_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_362_Just_t ) {
            struct funenv598  temp600 = (  fun795 );
            ( temp600.fun ( temp600.env ,  ( dref797 .stuff .Maybe_362_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env602 {
    struct env309 envinst309;
    struct List_3 *  list1671;
};

struct funenv602 {
    enum Unit_13  (*fun) (  struct env602  ,    char  );
    struct env602 env;
};

static  enum Unit_13   for_dash_each601 (    struct TakeWhile_502  iterable793 ,   struct funenv602  fun795 ) {
    struct TakeWhile_502  temp603 = ( (  into_dash_iter501 ) ( (  iterable793 ) ) );
    struct TakeWhile_502 *  it796 = ( &temp603 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next514 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv602  temp604 = (  fun795 );
            ( temp604.fun ( temp604.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env606 {
    struct env309 envinst309;
    struct List_3 *  list1671;
};

struct funenv606 {
    enum Unit_13  (*fun) (  struct env606  ,    char  );
    struct env606 env;
};

static  enum Unit_13   for_dash_each605 (    struct Slice_5  iterable793 ,   struct funenv606  fun795 ) {
    struct SliceIter_278  temp607 = ( (  into_dash_iter282 ) ( (  iterable793 ) ) );
    struct SliceIter_278 *  it796 = ( &temp607 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next335 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv606  temp608 = (  fun795 );
            ( temp608.fun ( temp608.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_610 {
    struct Slice_351  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_610   into_dash_iter612 (    struct SliceAddressIter_610  self1350 ) {
    return (  self1350 );
}

struct Maybe_613 {
    enum {
        Maybe_613_None_t,
        Maybe_613_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_613_Just_s;
    } stuff;
};

static struct Maybe_613 Maybe_613_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_613 ) { .tag = Maybe_613_Just_t, .stuff = { .Maybe_613_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_613   next614 (    struct SliceAddressIter_610 *  self1353 ) {
    size_t  off1354 = ( ( * (  self1353 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add92 ( (  off1354 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1353 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    struct List_3 *  elem1355 = ( (  offset_dash_ptr153 ) ( ( ( ( * (  self1353 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1354 ) ) ) ) );
    (*  self1353 ) .f_current_dash_offset = (  op_dash_add92 ( (  off1354 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_613_Just ) ( (  elem1355 ) ) );
}

static  enum Unit_13   for_dash_each609 (    struct SliceAddressIter_610  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_610  temp611 = ( (  into_dash_iter612 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_610 *  it796 = ( &temp611 );
    while ( ( true ) ) {
        struct Maybe_613  dref797 = ( (  next614 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_613_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_613_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_613_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env616 {
    struct env309 envinst309;
    struct StrBuilder_564 *  builder1910;
};

struct funenv616 {
    enum Unit_13  (*fun) (  struct env616  ,    char  );
    struct env616 env;
};

static  enum Unit_13   for_dash_each615 (    struct TakeWhile_511  iterable793 ,   struct funenv616  fun795 ) {
    struct TakeWhile_511  temp617 = ( (  into_dash_iter510 ) ( (  iterable793 ) ) );
    struct TakeWhile_511 *  it796 = ( &temp617 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next520 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv616  temp618 = (  fun795 );
            ( temp618.fun ( temp618.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env620 {
    struct env309 envinst309;
    struct StrBuilder_564 *  builder1910;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    char  );
    struct env620 env;
};

static  enum Unit_13   for_dash_each619 (    struct TakeWhile_507  iterable793 ,   struct funenv620  fun795 ) {
    struct TakeWhile_507  temp621 = ( (  into_dash_iter506 ) ( (  iterable793 ) ) );
    struct TakeWhile_507 *  it796 = ( &temp621 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next517 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv620  temp622 = (  fun795 );
            ( temp622.fun ( temp622.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env625 {
    ;
    ;
    struct env309 envinst309;
};

struct funenv625 {
    enum Unit_13  (*fun) (  struct env625  ,    struct StrBuilder_564 *  ,    char  );
    struct env625 env;
};

struct env624 {
    struct env625 envinst625;
    struct StrBuilder_564 *  sb2607;
};

struct funenv624 {
    enum Unit_13  (*fun) (  struct env624  ,    char  );
    struct env624 env;
};

static  enum Unit_13   for_dash_each623 (    struct List_3  iterable793 ,   struct funenv624  fun795 ) {
    struct SliceIter_278  temp626 = ( (  into_dash_iter281 ) ( (  iterable793 ) ) );
    struct SliceIter_278 *  it796 = ( &temp626 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next335 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv624  temp627 = (  fun795 );
            ( temp627.fun ( temp627.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env629 {
    struct Slice_570  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv629 {
    enum Unit_13  (*fun) (  struct env629  ,    int32_t  );
    struct env629 env;
};

static  enum Unit_13   for_dash_each628 (    struct Range_380  iterable793 ,   struct funenv629  fun795 ) {
    struct RangeIter_382  temp630 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct RangeIter_382 *  it796 = ( &temp630 );
    while ( ( true ) ) {
        struct Maybe_333  dref797 = ( (  next383 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_333_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_333_Just_t ) {
            struct funenv629  temp631 = (  fun795 );
            ( temp631.fun ( temp631.env ,  ( dref797 .stuff .Maybe_333_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_636 {
    ColorPalette_636_Palette8,
    ColorPalette_636_Palette16,
    ColorPalette_636_Palette256,
    ColorPalette_636_PaletteRGB,
};

struct Tui_635 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_636  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_135  f_orig_dash_termios;
};

struct Screen_634 {
    enum CAllocator_4  f_al;
    struct Tui_635 *  f_tui;
    struct Slice_570  f_current;
    struct Slice_570  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_53  f_default_dash_fg;
    struct Color_53  f_default_dash_bg;
};

struct env633 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv633 {
    enum Unit_13  (*fun) (  struct env633  ,    struct Tuple2_358  );
    struct env633 env;
};

static  enum Unit_13   for_dash_each632 (    struct Zip_391  iterable793 ,   struct funenv633  fun795 ) {
    struct Zip_391  temp637 = ( (  into_dash_iter390 ) ( (  iterable793 ) ) );
    struct Zip_391 *  it796 = ( &temp637 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next429 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv633  temp638 = (  fun795 );
            ( temp638.fun ( temp638.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env640 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv640 {
    enum Unit_13  (*fun) (  struct env640  ,    struct Tuple2_358  );
    struct env640 env;
};

static  enum Unit_13   for_dash_each639 (    struct Zip_394  iterable793 ,   struct funenv640  fun795 ) {
    struct Zip_394  temp641 = ( (  into_dash_iter393 ) ( (  iterable793 ) ) );
    struct Zip_394 *  it796 = ( &temp641 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next438 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv640  temp642 = (  fun795 );
            ( temp642.fun ( temp642.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env644 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv644 {
    enum Unit_13  (*fun) (  struct env644  ,    struct Tuple2_358  );
    struct env644 env;
};

static  enum Unit_13   for_dash_each643 (    struct Zip_401  iterable793 ,   struct funenv644  fun795 ) {
    struct Zip_401  temp645 = ( (  into_dash_iter400 ) ( (  iterable793 ) ) );
    struct Zip_401 *  it796 = ( &temp645 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next444 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv644  temp646 = (  fun795 );
            ( temp646.fun ( temp646.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env648 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv648 {
    enum Unit_13  (*fun) (  struct env648  ,    struct Tuple2_358  );
    struct env648 env;
};

static  enum Unit_13   for_dash_each647 (    struct Zip_405  iterable793 ,   struct funenv648  fun795 ) {
    struct Zip_405  temp649 = ( (  into_dash_iter404 ) ( (  iterable793 ) ) );
    struct Zip_405 *  it796 = ( &temp649 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next452 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv648  temp650 = (  fun795 );
            ( temp650.fun ( temp650.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env652 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv652 {
    enum Unit_13  (*fun) (  struct env652  ,    struct Tuple2_358  );
    struct env652 env;
};

static  enum Unit_13   for_dash_each651 (    struct Zip_415  iterable793 ,   struct funenv652  fun795 ) {
    struct Zip_415  temp653 = ( (  into_dash_iter414 ) ( (  iterable793 ) ) );
    struct Zip_415 *  it796 = ( &temp653 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next461 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv652  temp654 = (  fun795 );
            ( temp654.fun ( temp654.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env656 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv656 {
    enum Unit_13  (*fun) (  struct env656  ,    struct Tuple2_358  );
    struct env656 env;
};

static  enum Unit_13   for_dash_each655 (    struct Zip_420  iterable793 ,   struct funenv656  fun795 ) {
    struct Zip_420  temp657 = ( (  into_dash_iter419 ) ( (  iterable793 ) ) );
    struct Zip_420 *  it796 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next465 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv656  temp658 = (  fun795 );
            ( temp658.fun ( temp658.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env660 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv660 {
    enum Unit_13  (*fun) (  struct env660  ,    struct Tuple2_358  );
    struct env660 env;
};

static  enum Unit_13   for_dash_each659 (    struct Zip_424  iterable793 ,   struct funenv660  fun795 ) {
    struct Zip_424  temp661 = ( (  into_dash_iter423 ) ( (  iterable793 ) ) );
    struct Zip_424 *  it796 = ( &temp661 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next473 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv660  temp662 = (  fun795 );
            ( temp662.fun ( temp662.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env664 {
    ;
    size_t  i2393;
    struct Color_53  bg2397;
    struct Screen_634 *  screen2385;
    ;
    struct Color_53  fg2396;
    ;
};

struct funenv664 {
    enum Unit_13  (*fun) (  struct env664  ,    struct Tuple2_358  );
    struct env664 env;
};

static  enum Unit_13   for_dash_each663 (    struct Zip_426  iterable793 ,   struct funenv664  fun795 ) {
    struct Zip_426  temp665 = ( (  into_dash_iter425 ) ( (  iterable793 ) ) );
    struct Zip_426 *  it796 = ( &temp665 );
    while ( ( true ) ) {
        struct Maybe_357  dref797 = ( (  next474 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_357_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_357_Just_t ) {
            struct funenv664  temp666 = (  fun795 );
            ( temp666.fun ( temp666.env ,  ( dref797 .stuff .Maybe_357_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_668 {
    struct SmolArray_97  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_668   into_dash_iter669 (    struct SmolArray_97  self1477 ) {
    return ( (struct SmolArrayIter_668) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_675 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_675 StrConcat_675_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_675 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_674 {
    struct StrConcat_675  field0;
    char  field1;
};

static struct StrConcat_674 StrConcat_674_StrConcat (  struct StrConcat_675  field0 ,  char  field1 ) {
    return ( struct StrConcat_674 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_678 {
    const char*  field0;
    struct StrConcat_674  field1;
};

static struct StrConcat_678 StrConcat_678_StrConcat (  const char*  field0 ,  struct StrConcat_674  field1 ) {
    return ( struct StrConcat_678 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_677 {
    struct StrConcat_678  field0;
    char  field1;
};

static struct StrConcat_677 StrConcat_677_StrConcat (  struct StrConcat_678  field0 ,  char  field1 ) {
    return ( struct StrConcat_677 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str682 (    int32_t  self1029 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1029 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str681 (    struct StrConcat_675  self1092 ) {
    struct StrConcat_675  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str682 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str680 (    struct StrConcat_674  self1092 ) {
    struct StrConcat_674  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str681 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str679 (    struct StrConcat_678  self1092 ) {
    struct StrConcat_678  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str680 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str676 (    struct StrConcat_677  self1092 ) {
    struct StrConcat_677  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str679 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic673 (    struct StrConcat_674  errmsg1244 ) {
    ( (  print_dash_str676 ) ( ( ( StrConcat_677_StrConcat ) ( ( ( StrConcat_678_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr672 (    struct Array_98 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic673 ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_675_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast187 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr155 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get671 (    struct Array_98 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr672 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_330   next670 (    struct SmolArrayIter_668 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
    }
    uint32_t  e1486 = ( (  get671 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add92 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_330_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce667 (    struct SmolArray_97  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_668  it818 = ( (  into_dash_iter669 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_330  dref819 = ( (  next670 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_330_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_330_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_330_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp683;
    return (  temp683 );
}

struct SmolArrayIter_685 {
    struct SmolArray_100  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_685   into_dash_iter686 (    struct SmolArray_100  self1477 ) {
    return ( (struct SmolArrayIter_685) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr689 (    struct Array_101 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic673 ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_675_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast188 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr155 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get688 (    struct Array_101 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr689 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_330   next687 (    struct SmolArrayIter_685 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
    }
    uint32_t  e1486 = ( (  get688 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add92 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_330_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce684 (    struct SmolArray_100  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_685  it818 = ( (  into_dash_iter686 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_330  dref819 = ( (  next687 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_330_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_330_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_330_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp690;
    return (  temp690 );
}

struct SmolArrayIter_692 {
    struct SmolArray_103  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_692   into_dash_iter693 (    struct SmolArray_103  self1477 ) {
    return ( (struct SmolArrayIter_692) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr696 (    struct Array_104 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic673 ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_675_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast189 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr155 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get695 (    struct Array_104 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr696 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_330   next694 (    struct SmolArrayIter_692 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
    }
    uint32_t  e1486 = ( (  get695 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add92 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_330_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce691 (    struct SmolArray_103  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_692  it818 = ( (  into_dash_iter693 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_330  dref819 = ( (  next694 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_330_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_330_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_330_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp697;
    return (  temp697 );
}

static  uint32_t   reduce698 (    struct Map_312  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct Map_312  it818 = ( (  into_dash_iter311 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_330  dref819 = ( (  next329 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_330_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_330_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_330_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp699;
    return (  temp699 );
}

struct Maybe_701 {
    enum {
        Maybe_701_None_t,
        Maybe_701_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_701_Just_s;
    } stuff;
};

static struct Maybe_701 Maybe_701_Just (  int64_t  field0 ) {
    return ( struct Maybe_701 ) { .tag = Maybe_701_Just_t, .stuff = { .Maybe_701_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_701   reduce700 (    struct TakeWhile_500  iterable812 ,    struct Maybe_701  base814 ,    struct Maybe_701 (*  fun816 )(    char  ,    struct Maybe_701  ) ) {
    struct Maybe_701  x817 = (  base814 );
    struct TakeWhile_500  it818 = ( (  into_dash_iter499 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next512 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_701  temp702;
    return (  temp702 );
}

static  size_t   reduce703 (    struct TakeWhile_500  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_500  it818 = ( (  into_dash_iter499 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next512 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp704;
    return (  temp704 );
}

static  int32_t   reduce705 (    struct Map_315  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_315  it818 = ( (  into_dash_iter314 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_333  dref819 = ( (  next332 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_333_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_333_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_333_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp706;
    return (  temp706 );
}

static  size_t   reduce707 (    struct TakeWhile_502  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_502  it818 = ( (  into_dash_iter501 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next514 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp708;
    return (  temp708 );
}

static  struct Maybe_701   reduce709 (    struct TakeWhile_504  iterable812 ,    struct Maybe_701  base814 ,    struct Maybe_701 (*  fun816 )(    char  ,    struct Maybe_701  ) ) {
    struct Maybe_701  x817 = (  base814 );
    struct TakeWhile_504  it818 = ( (  into_dash_iter503 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next515 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_701  temp710;
    return (  temp710 );
}

static  size_t   reduce711 (    struct IntStrIter_392  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_392  it818 = ( (  into_dash_iter483 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next430 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp712;
    return (  temp712 );
}

static  size_t   reduce713 (    struct StrConcatIter_395  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_395  it818 = ( (  into_dash_iter486 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next439 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp714;
    return (  temp714 );
}

static  size_t   reduce715 (    struct StrConcatIter_402  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_402  it818 = ( (  into_dash_iter488 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next445 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp716;
    return (  temp716 );
}

static  size_t   reduce717 (    struct StrConcatIter_406  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_406  it818 = ( (  into_dash_iter490 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next453 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp718;
    return (  temp718 );
}

static  size_t   reduce719 (    struct StrConcatIter_416  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_416  it818 = ( (  into_dash_iter492 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next462 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp720;
    return (  temp720 );
}

static  size_t   reduce721 (    struct StrConcatIter_421  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_421  it818 = ( (  into_dash_iter494 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next466 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp722;
    return (  temp722 );
}

static  size_t   reduce723 (    struct StrConcatIter_418  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_418  it818 = ( (  into_dash_iter496 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next464 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp724;
    return (  temp724 );
}

static  size_t   reduce725 (    struct StrConcatIter_427  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_427  it818 = ( (  into_dash_iter498 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next475 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp726;
    return (  temp726 );
}

static  size_t   lam728 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count727 (    struct TakeWhile_500  it823 ) {
    return ( (  reduce703 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam728 ) ) );
}

static  size_t   lam730 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count729 (    struct TakeWhile_502  it823 ) {
    return ( (  reduce707 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam730 ) ) );
}

static  size_t   lam732 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count731 (    struct IntStrIter_392  it823 ) {
    return ( (  reduce711 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam732 ) ) );
}

static  size_t   lam734 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count733 (    struct StrConcatIter_395  it823 ) {
    return ( (  reduce713 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam734 ) ) );
}

static  size_t   lam736 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count735 (    struct StrConcatIter_402  it823 ) {
    return ( (  reduce715 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam736 ) ) );
}

static  size_t   lam738 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count737 (    struct StrConcatIter_406  it823 ) {
    return ( (  reduce717 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam738 ) ) );
}

static  size_t   lam740 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count739 (    struct StrConcatIter_416  it823 ) {
    return ( (  reduce719 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam740 ) ) );
}

static  size_t   lam742 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count741 (    struct StrConcatIter_421  it823 ) {
    return ( (  reduce721 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam742 ) ) );
}

static  size_t   lam744 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count743 (    struct StrConcatIter_418  it823 ) {
    return ( (  reduce723 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam744 ) ) );
}

static  size_t   lam746 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add92 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count745 (    struct StrConcatIter_427  it823 ) {
    return ( (  reduce725 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam746 ) ) );
}

static  int32_t   lam748 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add81 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum747 (    struct Map_315  it829 ) {
    return ( (  reduce705 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam748 ) ) );
}

static  struct Maybe_49   head749 (    struct TakeWhile_500  it861 ) {
    struct TakeWhile_500  temp750 = ( (  into_dash_iter499 ) ( (  it861 ) ) );
    return ( (  next512 ) ( ( &temp750 ) ) );
}

static  struct Maybe_49   head751 (    struct TakeWhile_504  it861 ) {
    struct TakeWhile_504  temp752 = ( (  into_dash_iter503 ) ( (  it861 ) ) );
    return ( (  next515 ) ( ( &temp752 ) ) );
}

static  struct Maybe_49   head753 (    struct TakeWhile_507  it861 ) {
    struct TakeWhile_507  temp754 = ( (  into_dash_iter506 ) ( (  it861 ) ) );
    return ( (  next517 ) ( ( &temp754 ) ) );
}

static  bool   null755 (    struct TakeWhile_500  it864 ) {
    return (  eq48 ( ( (  head749 ) ( (  it864 ) ) ) , ( (struct Maybe_49) { .tag = Maybe_49_None_t } ) ) );
}

static  bool   null756 (    struct TakeWhile_507  it864 ) {
    return (  eq48 ( ( (  head753 ) ( (  it864 ) ) ) , ( (struct Maybe_49) { .tag = Maybe_49_None_t } ) ) );
}

static  struct Maybe_49   lam578 (   struct env578 env ,    int32_t  dref901 ) {
    return ( (  next513 ) ( ( env.it898 ) ) );
}

static  enum Unit_13   drop_prime_757 (    struct Scanner_277 *  it898 ,    size_t  n900 ) {
    struct env578 envinst578 = {
        .it898 =  it898 ,
    };
    ( (  for_dash_each577 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32269 ) ( (  n900 ) ) ) ) ) ,  ( (struct funenv578){ .fun = lam578, .env = envinst578 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or758 (    uint32_t  l941 ,    uint32_t  r943 ) {
    return ( (  l941 ) | (  r943 ) );
}

static  uint32_t   u32_dash_ors759 (    struct SmolArray_97  vals946 ) {
    return ( (  reduce667 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or758 ) ) );
}

static  uint32_t   u32_dash_ors760 (    struct SmolArray_100  vals946 ) {
    return ( (  reduce684 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or758 ) ) );
}

static  uint32_t   u32_dash_ors761 (    struct SmolArray_103  vals946 ) {
    return ( (  reduce691 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or758 ) ) );
}

static  uint32_t   u32_dash_and762 (    uint32_t  l949 ,    uint32_t  r951 ) {
    return ( (  l949 ) & (  r951 ) );
}

static  uint32_t   u32_dash_neg763 (    uint32_t  l954 ) {
    return ( ~ (  l954 ) );
}

static  int64_t   mod764 (    int64_t  l957 ,    int64_t  d959 ) {
    int64_t  r960 = (  op_dash_div79 ( (  l957 ) , (  d959 ) ) );
    int64_t  m961 = (  op_dash_sub78 ( (  l957 ) , (  op_dash_mul32 ( (  r960 ) , (  d959 ) ) ) ) );
    if ( (  cmp73 ( (  m961 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add77 ( (  d959 ) , (  m961 ) ) );
    } else {
        return (  m961 );
    }
}

static  int32_t   min765 (    int32_t  l964 ,    int32_t  r966 ) {
    if ( (  cmp74 ( (  l964 ) , (  r966 ) ) == 0 ) ) {
        return (  l964 );
    } else {
        return (  r966 );
    }
}

static  int32_t   max766 (    int32_t  l969 ,    int32_t  r971 ) {
    if ( (  cmp74 ( (  l969 ) , (  r971 ) ) == 2 ) ) {
        return (  l969 );
    } else {
        return (  r971 );
    }
}

static  int32_t   clamp767 (    int32_t  x980 ,    int32_t  mn982 ,    int32_t  mx984 ) {
    if ( (  cmp74 ( (  x980 ) , (  mn982 ) ) == 0 ) ) {
        return (  mn982 );
    } else {
        if ( (  cmp74 ( (  x980 ) , (  mx984 ) ) == 2 ) ) {
            return (  mx984 );
        } else {
            return (  x980 );
        }
    }
}

static  struct ConstStrIter_313   chars768 (    const char*  self1004 ) {
    return ( (  into_dash_iter340 ) ( (  self1004 ) ) );
}

static  struct AppendIter_399   chars769 (    char  self1010 ) {
    return ( (  single535 ) ( (  self1010 ) ) );
}

static  int32_t   count_dash_digits770 (    size_t  self1025 ) {
    if ( (  eq45 ( (  self1025 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1026 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1025 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1025 = (  op_dash_div95 ( (  self1025 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1026 = (  op_dash_add81 ( (  digits1026 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1026 );
}

static  int32_t   count_dash_digits771 (    int32_t  self1025 ) {
    if ( (  eq41 ( (  self1025 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1026 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp74 ( (  self1025 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1025 = (  op_dash_div84 ( (  self1025 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1026 = (  op_dash_add81 ( (  digits1026 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1026 );
}

static  int32_t   count_dash_digits772 (    uint32_t  self1025 ) {
    if ( (  eq42 ( (  self1025 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1026 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp75 ( (  self1025 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1025 = (  op_dash_div89 ( (  self1025 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1026 = (  op_dash_add81 ( (  digits1026 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1026 );
}

static  struct IntStrIter_392   chars773 (    int32_t  self1032 ) {
    return ( (struct IntStrIter_392) { .f_int = (  self1032 ) , .f_len = ( (  count_dash_digits771 ) ( (  self1032 ) ) ) } );
}

static  enum Unit_13   print_dash_str774 (    uint32_t  self1035 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1035 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_403   chars775 (    uint32_t  self1038 ) {
    return ( (struct IntStrIter_403) { .f_int = (  self1038 ) , .f_len = ( (  count_dash_digits772 ) ( (  self1038 ) ) ) } );
}

static  enum Unit_13   print_dash_str776 (    uint8_t  self1041 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32275 ) ( (  self1041 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_422   chars777 (    size_t  self1056 ) {
    return ( (struct IntStrIter_422) { .f_int = (  self1056 ) , .f_len = ( (  count_dash_digits770 ) ( (  self1056 ) ) ) } );
}

struct Mode_780 {
    enum {
        Mode_780_Normal_t,
        Mode_780_Insert_t,
        Mode_780_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_564  field0;
        } Mode_780_Cmd_s;
    } stuff;
};

static struct Mode_780 Mode_780_Cmd (  struct StrBuilder_564  field0 ) {
    return ( struct Mode_780 ) { .tag = Mode_780_Cmd_t, .stuff = { .Mode_780_Cmd_s = { .field0 = field0 } } };
};

struct StrConcat_779 {
    const char*  field0;
    struct Mode_780  field1;
};

static struct StrConcat_779 StrConcat_779_StrConcat (  const char*  field0 ,  struct Mode_780  field1 ) {
    return ( struct StrConcat_779 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_784 {
    const char*  field0;
    struct DynStr_130  field1;
};

static struct StrConcat_784 StrConcat_784_StrConcat (  const char*  field0 ,  struct DynStr_130  field1 ) {
    return ( struct StrConcat_784 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_783 {
    struct StrConcat_784  field0;
    char  field1;
};

static struct StrConcat_783 StrConcat_783_StrConcat (  struct StrConcat_784  field0 ,  char  field1 ) {
    return ( struct StrConcat_783 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_782 {
    enum {
        StrCase_782_StrCase1_t,
        StrCase_782_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_782_StrCase1_s;
        struct {
            struct StrConcat_783  field0;
        } StrCase_782_StrCase2_s;
    } stuff;
};

static struct StrCase_782 StrCase_782_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_782 ) { .tag = StrCase_782_StrCase1_t, .stuff = { .StrCase_782_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_782 StrCase_782_StrCase2 (  struct StrConcat_783  field0 ) {
    return ( struct StrCase_782 ) { .tag = StrCase_782_StrCase2_t, .stuff = { .StrCase_782_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_130   as_dash_str786 (    struct StrBuilder_564 *  builder1936 ) {
    return ( (struct DynStr_130) { .f_contents = ( (  subslice283 ) ( ( ( ( * (  builder1936 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder1936 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_278   chars793 (    struct DynStr_130  self1419 ) {
    return ( (  into_dash_iter282 ) ( ( (  self1419 ) .f_contents ) ) );
}

static  struct StrConcatIter_398   into_dash_iter792 (    struct StrConcat_784  dref1087 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars793 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   chars791 (    struct StrConcat_784  self1098 ) {
    return ( (  into_dash_iter792 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter790 (    struct StrConcat_783  dref1087 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars791 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars769 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars789 (    struct StrConcat_783  self1098 ) {
    return ( (  into_dash_iter790 ) ( (  self1098 ) ) );
}

static  struct StrCaseIter_396   into_dash_iter788 (    struct StrCase_782  self1111 ) {
    struct StrCase_782  dref1112 = (  self1111 );
    if ( dref1112.tag == StrCase_782_StrCase1_t ) {
        return ( ( StrCaseIter_396_StrCaseIter1 ) ( ( (  chars768 ) ( ( dref1112 .stuff .StrCase_782_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1112.tag == StrCase_782_StrCase2_t ) {
        return ( ( StrCaseIter_396_StrCaseIter2 ) ( ( (  chars789 ) ( ( dref1112 .stuff .StrCase_782_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_396   chars787 (    struct StrCase_782  self1123 ) {
    return ( (  into_dash_iter788 ) ( (  self1123 ) ) );
}

static  struct StrCaseIter_396   chars781 (    struct Mode_780  self2436 ) {
    struct StrCase_782  temp785;
    struct StrCase_782  c2437 = (  temp785 );
    struct Mode_780  dref2438 = (  self2436 );
    if ( dref2438.tag == Mode_780_Normal_t ) {
        c2437 = ( ( StrCase_782_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2438.tag == Mode_780_Insert_t ) {
        c2437 = ( ( StrCase_782_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2438.tag == Mode_780_Cmd_t ) {
        struct DynStr_130  ss2440 = ( (  as_dash_str786 ) ( ( & ( dref2438 .stuff .Mode_780_Cmd_s .field0 ) ) ) );
        c2437 = ( ( StrCase_782_StrCase2 ) ( ( ( StrConcat_783_StrConcat ) ( ( ( StrConcat_784_StrConcat ) ( ( "Cmd(" ) ,  (  ss2440 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars787 ) ( (  c2437 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter778 (    struct StrConcat_779  dref1087 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars781 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_795 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_795 StrConcat_795_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_795 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_402   into_dash_iter794 (    struct StrConcat_795  dref1087 ) {
    return ( (struct StrConcatIter_402) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars775 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_797 {
    const char*  field0;
    struct Maybe_357  field1;
};

static struct StrConcat_797 StrConcat_797_StrConcat (  const char*  field0 ,  struct Maybe_357  field1 ) {
    return ( struct StrConcat_797 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_801 {
    const char*  field0;
    struct Tuple2_358  field1;
};

static struct StrConcat_801 StrConcat_801_StrConcat (  const char*  field0 ,  struct Tuple2_358  field1 ) {
    return ( struct StrConcat_801 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_800 {
    struct StrConcat_801  field0;
    char  field1;
};

static struct StrConcat_800 StrConcat_800_StrConcat (  struct StrConcat_801  field0 ,  char  field1 ) {
    return ( struct StrConcat_800 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_799 {
    enum {
        StrCase_799_StrCase1_t,
        StrCase_799_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_799_StrCase1_s;
        struct {
            struct StrConcat_800  field0;
        } StrCase_799_StrCase2_s;
    } stuff;
};

static struct StrCase_799 StrCase_799_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_799 ) { .tag = StrCase_799_StrCase1_t, .stuff = { .StrCase_799_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_799 StrCase_799_StrCase2 (  struct StrConcat_800  field0 ) {
    return ( struct StrCase_799 ) { .tag = StrCase_799_StrCase2_t, .stuff = { .StrCase_799_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_814 {
    char  field0;
    char  field1;
};

static struct StrConcat_814 StrConcat_814_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_814 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_813 {
    struct StrConcat_814  field0;
    const char*  field1;
};

static struct StrConcat_813 StrConcat_813_StrConcat (  struct StrConcat_814  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_813 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_812 {
    struct StrConcat_813  field0;
    int32_t  field1;
};

static struct StrConcat_812 StrConcat_812_StrConcat (  struct StrConcat_813  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_812 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_811 {
    struct StrConcat_812  field0;
    char  field1;
};

static struct StrConcat_811 StrConcat_811_StrConcat (  struct StrConcat_812  field0 ,  char  field1 ) {
    return ( struct StrConcat_811 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_413   into_dash_iter821 (    struct StrConcat_814  dref1087 ) {
    return ( (struct StrConcatIter_413) { .f_left = ( (  chars769 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars769 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_413   chars820 (    struct StrConcat_814  self1098 ) {
    return ( (  into_dash_iter821 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_412   into_dash_iter819 (    struct StrConcat_813  dref1087 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars820 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_412   chars818 (    struct StrConcat_813  self1098 ) {
    return ( (  into_dash_iter819 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_411   into_dash_iter817 (    struct StrConcat_812  dref1087 ) {
    return ( (struct StrConcatIter_411) { .f_left = ( (  chars818 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars773 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_411   chars816 (    struct StrConcat_812  self1098 ) {
    return ( (  into_dash_iter817 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_410   into_dash_iter815 (    struct StrConcat_811  dref1087 ) {
    return ( (struct StrConcatIter_410) { .f_left = ( (  chars816 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars769 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_410   chars810 (    struct StrConcat_811  self1098 ) {
    return ( (  into_dash_iter815 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_410   chars809 (    struct Tuple2_358  dref1148 ) {
    return ( (  chars810 ) ( ( ( StrConcat_811_StrConcat ) ( ( ( StrConcat_812_StrConcat ) ( ( ( StrConcat_813_StrConcat ) ( ( ( StrConcat_814_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1148 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1148 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_409   into_dash_iter808 (    struct StrConcat_801  dref1087 ) {
    return ( (struct StrConcatIter_409) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars809 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_409   chars807 (    struct StrConcat_801  self1098 ) {
    return ( (  into_dash_iter808 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_408   into_dash_iter806 (    struct StrConcat_800  dref1087 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars807 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars769 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_408   chars805 (    struct StrConcat_800  self1098 ) {
    return ( (  into_dash_iter806 ) ( (  self1098 ) ) );
}

static  struct StrCaseIter_407   into_dash_iter804 (    struct StrCase_799  self1111 ) {
    struct StrCase_799  dref1112 = (  self1111 );
    if ( dref1112.tag == StrCase_799_StrCase1_t ) {
        return ( ( StrCaseIter_407_StrCaseIter1 ) ( ( (  chars768 ) ( ( dref1112 .stuff .StrCase_799_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1112.tag == StrCase_799_StrCase2_t ) {
        return ( ( StrCaseIter_407_StrCaseIter2 ) ( ( (  chars805 ) ( ( dref1112 .stuff .StrCase_799_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_407   chars803 (    struct StrCase_799  self1123 ) {
    return ( (  into_dash_iter804 ) ( (  self1123 ) ) );
}

static  struct StrCaseIter_407   chars798 (    struct Maybe_357  self1137 ) {
    struct StrCase_799  temp802;
    struct StrCase_799  c1138 = (  temp802 );
    struct Maybe_357  dref1139 = (  self1137 );
    if ( dref1139.tag == Maybe_357_None_t ) {
        c1138 = ( ( StrCase_799_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1139.tag == Maybe_357_Just_t ) {
        c1138 = ( ( StrCase_799_StrCase2 ) ( ( ( StrConcat_800_StrConcat ) ( ( ( StrConcat_801_StrConcat ) ( ( "Just(" ) ,  ( dref1139 .stuff .Maybe_357_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars803 ) ( (  c1138 ) ) );
}

static  struct StrConcatIter_406   into_dash_iter796 (    struct StrConcat_797  dref1087 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars798 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_825 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_825 StrConcat_825_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_825 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_824 {
    struct StrConcat_825  field0;
    char  field1;
};

static struct StrConcat_824 StrConcat_824_StrConcat (  struct StrConcat_825  field0 ,  char  field1 ) {
    return ( struct StrConcat_824 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_823 {
    struct StrConcat_824  field0;
    int32_t  field1;
};

static struct StrConcat_823 StrConcat_823_StrConcat (  struct StrConcat_824  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_823 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_418   into_dash_iter829 (    struct StrConcat_825  dref1087 ) {
    return ( (struct StrConcatIter_418) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars773 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_418   chars828 (    struct StrConcat_825  self1098 ) {
    return ( (  into_dash_iter829 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_417   into_dash_iter827 (    struct StrConcat_824  dref1087 ) {
    return ( (struct StrConcatIter_417) { .f_left = ( (  chars828 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars769 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_417   chars826 (    struct StrConcat_824  self1098 ) {
    return ( (  into_dash_iter827 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_416   into_dash_iter822 (    struct StrConcat_823  dref1087 ) {
    return ( (struct StrConcatIter_416) { .f_left = ( (  chars826 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars773 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_421   into_dash_iter830 (    struct StrConcat_17  dref1087 ) {
    return ( (struct StrConcatIter_421) { .f_left = ( (  chars768 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars777 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_833 {
    struct StrConcat_825  field0;
    const char*  field1;
};

static struct StrConcat_833 StrConcat_833_StrConcat (  struct StrConcat_825  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_833 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_832 {
    struct StrConcat_833  field0;
    int32_t  field1;
};

static struct StrConcat_832 StrConcat_832_StrConcat (  struct StrConcat_833  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_832 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_428   into_dash_iter835 (    struct StrConcat_833  dref1087 ) {
    return ( (struct StrConcatIter_428) { .f_left = ( (  chars828 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_428   chars834 (    struct StrConcat_833  self1098 ) {
    return ( (  into_dash_iter835 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_427   into_dash_iter831 (    struct StrConcat_832  dref1087 ) {
    return ( (struct StrConcatIter_427) { .f_left = ( (  chars834 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars773 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_838 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_838 StrConcat_838_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_838 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_837 {
    struct StrConcat_838  field0;
    char  field1;
};

static struct StrConcat_837 StrConcat_837_StrConcat (  struct StrConcat_838  field0 ,  char  field1 ) {
    return ( struct StrConcat_837 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str839 (    struct StrConcat_838  self1092 ) {
    struct StrConcat_838  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str836 (    struct StrConcat_837  self1092 ) {
    struct StrConcat_837  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str839 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_842 {
    const char*  field0;
    struct StrConcat_837  field1;
};

static struct StrConcat_842 StrConcat_842_StrConcat (  const char*  field0 ,  struct StrConcat_837  field1 ) {
    return ( struct StrConcat_842 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_841 {
    struct StrConcat_842  field0;
    char  field1;
};

static struct StrConcat_841 StrConcat_841_StrConcat (  struct StrConcat_842  field0 ,  char  field1 ) {
    return ( struct StrConcat_841 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str843 (    struct StrConcat_842  self1092 ) {
    struct StrConcat_842  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str836 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str840 (    struct StrConcat_841  self1092 ) {
    struct StrConcat_841  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str843 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str845 (    struct StrConcat_814  self1092 ) {
    struct StrConcat_814  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str844 (    struct StrConcat_813  self1092 ) {
    struct StrConcat_813  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str845 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_848 {
    const char*  field0;
    struct StrConcat_813  field1;
};

static struct StrConcat_848 StrConcat_848_StrConcat (  const char*  field0 ,  struct StrConcat_813  field1 ) {
    return ( struct StrConcat_848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_847 {
    struct StrConcat_848  field0;
    char  field1;
};

static struct StrConcat_847 StrConcat_847_StrConcat (  struct StrConcat_848  field0 ,  char  field1 ) {
    return ( struct StrConcat_847 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str849 (    struct StrConcat_848  self1092 ) {
    struct StrConcat_848  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str844 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str846 (    struct StrConcat_847  self1092 ) {
    struct StrConcat_847  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str849 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_851 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_851 StrConcat_851_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_851 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str850 (    struct StrConcat_851  self1092 ) {
    struct StrConcat_851  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_854 {
    const char*  field0;
    struct StrConcat_851  field1;
};

static struct StrConcat_854 StrConcat_854_StrConcat (  const char*  field0 ,  struct StrConcat_851  field1 ) {
    return ( struct StrConcat_854 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_853 {
    struct StrConcat_854  field0;
    char  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  struct StrConcat_854  field0 ,  char  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str855 (    struct StrConcat_854  self1092 ) {
    struct StrConcat_854  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str850 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str852 (    struct StrConcat_853  self1092 ) {
    struct StrConcat_853  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str855 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_858 {
    const char*  field0;
    struct StrConcat_838  field1;
};

static struct StrConcat_858 StrConcat_858_StrConcat (  const char*  field0 ,  struct StrConcat_838  field1 ) {
    return ( struct StrConcat_858 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_857 {
    struct StrConcat_858  field0;
    char  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  struct StrConcat_858  field0 ,  char  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str859 (    struct StrConcat_858  self1092 ) {
    struct StrConcat_858  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str839 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str856 (    struct StrConcat_857  self1092 ) {
    struct StrConcat_857  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str859 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_862 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_862 StrConcat_862_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_862 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_861 {
    struct StrConcat_862  field0;
    char  field1;
};

static struct StrConcat_861 StrConcat_861_StrConcat (  struct StrConcat_862  field0 ,  char  field1 ) {
    return ( struct StrConcat_861 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str863 (    struct StrConcat_862  self1092 ) {
    struct StrConcat_862  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str776 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str860 (    struct StrConcat_861  self1092 ) {
    struct StrConcat_861  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str863 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_868 {
    struct StrConcat_861  field0;
    uint8_t  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  struct StrConcat_861  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_868 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_867 {
    struct StrConcat_868  field0;
    char  field1;
};

static struct StrConcat_867 StrConcat_867_StrConcat (  struct StrConcat_868  field0 ,  char  field1 ) {
    return ( struct StrConcat_867 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_866 {
    struct StrConcat_867  field0;
    uint8_t  field1;
};

static struct StrConcat_866 StrConcat_866_StrConcat (  struct StrConcat_867  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_866 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_865 {
    struct StrConcat_866  field0;
    char  field1;
};

static struct StrConcat_865 StrConcat_865_StrConcat (  struct StrConcat_866  field0 ,  char  field1 ) {
    return ( struct StrConcat_865 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str871 (    struct StrConcat_868  self1092 ) {
    struct StrConcat_868  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str860 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str776 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str870 (    struct StrConcat_867  self1092 ) {
    struct StrConcat_867  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str871 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str869 (    struct StrConcat_866  self1092 ) {
    struct StrConcat_866  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str870 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str776 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str864 (    struct StrConcat_865  self1092 ) {
    struct StrConcat_865  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str869 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_875 {
    struct StrConcat_795  field0;
    char  field1;
};

static struct StrConcat_875 StrConcat_875_StrConcat (  struct StrConcat_795  field0 ,  char  field1 ) {
    return ( struct StrConcat_875 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_874 {
    struct StrConcat_875  field0;
    uint32_t  field1;
};

static struct StrConcat_874 StrConcat_874_StrConcat (  struct StrConcat_875  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_874 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_873 {
    struct StrConcat_874  field0;
    char  field1;
};

static struct StrConcat_873 StrConcat_873_StrConcat (  struct StrConcat_874  field0 ,  char  field1 ) {
    return ( struct StrConcat_873 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str878 (    struct StrConcat_795  self1092 ) {
    struct StrConcat_795  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str774 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str877 (    struct StrConcat_875  self1092 ) {
    struct StrConcat_875  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str878 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str876 (    struct StrConcat_874  self1092 ) {
    struct StrConcat_874  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str877 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str774 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str872 (    struct StrConcat_873  self1092 ) {
    struct StrConcat_873  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str876 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_395   chars879 (    struct StrConcat_779  self1098 ) {
    return ( (  into_dash_iter778 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_402   chars880 (    struct StrConcat_795  self1098 ) {
    return ( (  into_dash_iter794 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_406   chars881 (    struct StrConcat_797  self1098 ) {
    return ( (  into_dash_iter796 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_416   chars882 (    struct StrConcat_823  self1098 ) {
    return ( (  into_dash_iter822 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_421   chars883 (    struct StrConcat_17  self1098 ) {
    return ( (  into_dash_iter830 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_427   chars884 (    struct StrConcat_832  self1098 ) {
    return ( (  into_dash_iter831 ) ( (  self1098 ) ) );
}

static  struct TakeWhile_500   chars885 (    struct TakeWhile_500  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_504   chars886 (    struct TakeWhile_504  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_511   chars887 (    struct TakeWhile_511  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_507   chars888 (    struct TakeWhile_507  self1183 ) {
    return (  self1183 );
}

static  bool   eq889 (    struct TakeWhile_504  l1193 ,    char  r1195 ) {
    struct TakeWhile_504  temp890 = ( (  chars886 ) ( (  l1193 ) ) );
    struct TakeWhile_504 *  l1196 = ( &temp890 );
    struct AppendIter_399  temp891 = ( (  chars769 ) ( (  r1195 ) ) );
    struct AppendIter_399 *  r1197 = ( &temp891 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1198 = ( (  next515 ) ( (  l1196 ) ) );
        struct Maybe_49  mrc1199 = ( (  next443 ) ( (  r1197 ) ) );
        struct Tuple2_50  dref1200 = ( ( Tuple2_50_Tuple2 ) ( (  mlc1198 ) ,  (  mrc1199 ) ) );
        if ( dref1200 .field0.tag == Maybe_49_None_t && dref1200 .field1.tag == Maybe_49_None_t ) {
            return ( true );
        }
        else if ( dref1200 .field0.tag == Maybe_49_Just_t && dref1200 .field1.tag == Maybe_49_Just_t ) {
            if ( ( !  eq47 ( ( dref1200 .field0 .stuff .Maybe_49_Just_s .field0 ) , ( dref1200 .field1 .stuff .Maybe_49_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  int32_t   char_dash_i32892 (    char  c1210 ) {
    return ( (  cast_dash_on_dash_zeroed248 ) ( (  c1210 ) ) );
}

static  uint8_t   char_dash_u8893 (    char  c1213 ) {
    return ( (  cast194 ) ( (  c1213 ) ) );
}

static  char   i32_dash_char894 (    int32_t  i1216 ) {
    return ( (  cast196 ) ( (  i1216 ) ) );
}

static  bool   eq895 (    const char*  l1229 ,    const char*  r1231 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1229 ) ,  (  r1231 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp896 (    char  l1234 ,    char  r1236 ) {
    return ( (  cmp74 ) ( ( (  char_dash_i32892 ) ( (  l1234 ) ) ) ,  ( (  char_dash_i32892 ) ( (  r1236 ) ) ) ) );
}

static  bool   unreachable897 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined145 ) ( ) );
}

static  enum Unit_13   unreachable898 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined147 ) ( ) );
}

static  enum Unit_13   panic899 (    struct StrConcat_837  errmsg1244 ) {
    ( (  print_dash_str840 ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic900 (    struct StrConcat_813  errmsg1244 ) {
    ( (  print_dash_str846 ) ( ( ( StrConcat_847_StrConcat ) ( ( ( StrConcat_848_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic901 (    struct StrConcat_851  errmsg1244 ) {
    ( (  print_dash_str852 ) ( ( ( StrConcat_853_StrConcat ) ( ( ( StrConcat_854_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic902 (    const char*  errmsg1244 ) {
    ( (  print_dash_str836 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic903 (    struct StrConcat_838  errmsg1244 ) {
    ( (  print_dash_str856 ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_858_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_143   panic_prime_904 (    const char*  errmsg1247 ) {
    ( (  print_dash_str836 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1247 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined142 ) ( ) );
}

static  enum Unit_13   assert905 (    bool  cond1250 ,    const char*  msg1252 ) {
    if ( ( ! (  cond1250 ) ) ) {
        ( (  print_dash_str836 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1252 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail906 (    struct Maybe_264  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_264  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_264_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined125 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_264_Just_t ) {
        return ( dref1260 .stuff .Maybe_264_Just_s .field0 );
    }
}

static  struct DynStr_130   or_dash_fail907 (    struct Maybe_320  x1257 ,    struct StrConcat_837  errmsg1259 ) {
    struct Maybe_320  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_320_None_t ) {
        ( (  panic899 ) ( (  errmsg1259 ) ) );
        return ( (  undefined129 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_320_Just_t ) {
        return ( dref1260 .stuff .Maybe_320_Just_s .field0 );
    }
}

struct Maybe_909 {
    enum {
        Maybe_909_None_t,
        Maybe_909_Just_t,
    } tag;
    union {
        struct {
            struct Cell_52  field0;
        } Maybe_909_Just_s;
    } stuff;
};

static struct Maybe_909 Maybe_909_Just (  struct Cell_52  field0 ) {
    return ( struct Maybe_909 ) { .tag = Maybe_909_Just_t, .stuff = { .Maybe_909_Just_s = { .field0 = field0 } } };
};

static  struct Cell_52   or_dash_fail908 (    struct Maybe_909  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_909  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_909_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined138 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_909_Just_t ) {
        return ( dref1260 .stuff .Maybe_909_Just_s .field0 );
    }
}

struct Maybe_911 {
    enum {
        Maybe_911_None_t,
        Maybe_911_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_911_Just_s;
    } stuff;
};

static struct Maybe_911 Maybe_911_Just (  uint8_t  field0 ) {
    return ( struct Maybe_911 ) { .tag = Maybe_911_Just_t, .stuff = { .Maybe_911_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail910 (    struct Maybe_911  x1257 ,    struct StrConcat_813  errmsg1259 ) {
    struct Maybe_911  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_911_None_t ) {
        ( (  panic900 ) ( (  errmsg1259 ) ) );
        return ( (  undefined140 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_911_Just_t ) {
        return ( dref1260 .stuff .Maybe_911_Just_s .field0 );
    }
}

struct Maybe_913 {
    enum {
        Maybe_913_None_t,
        Maybe_913_Just_t,
    } tag;
    union {
        struct {
            struct Cell_52 *  field0;
        } Maybe_913_Just_s;
    } stuff;
};

static struct Maybe_913 Maybe_913_Just (  struct Cell_52 *  field0 ) {
    return ( struct Maybe_913 ) { .tag = Maybe_913_Just_t, .stuff = { .Maybe_913_Just_s = { .field0 = field0 } } };
};

static  struct Cell_52 *   or_dash_fail912 (    struct Maybe_913  x1257 ,    const char*  errmsg1259 ) {
    struct Maybe_913  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_913_None_t ) {
        ( (  panic902 ) ( (  errmsg1259 ) ) );
        return ( (  undefined149 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_913_Just_t ) {
        return ( dref1260 .stuff .Maybe_913_Just_s .field0 );
    }
}

static  struct Slice_351   empty914 (  ) {
    return ( (struct Slice_351) { .f_ptr = ( (  null_dash_ptr256 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty915 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr916 (    struct Slice_351  slice1290 ,    size_t  i1292 ) {
    if ( ( (  cmp9 ( (  i1292 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1292 ) , ( (  slice1290 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1292 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1290 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1293 = ( (  offset_dash_ptr153 ) ( ( (  slice1290 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1292 ) ) ) ) );
    return (  elem_dash_ptr1293 );
}

static  struct Cell_52 *   get_dash_ptr917 (    struct Slice_570  slice1290 ,    size_t  i1292 ) {
    if ( ( (  cmp9 ( (  i1292 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1292 ) , ( (  slice1290 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1292 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1290 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_52 *  elem_dash_ptr1293 = ( (  offset_dash_ptr159 ) ( ( (  slice1290 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1292 ) ) ) ) );
    return (  elem_dash_ptr1293 );
}

struct Slice_919 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_264   try_dash_get918 (    struct Slice_919  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    }
    const char* *  elem_dash_ptr1299 = ( (  offset_dash_ptr151 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_264_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  struct Maybe_909   try_dash_get920 (    struct Slice_570  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_909) { .tag = Maybe_909_None_t } );
    }
    struct Cell_52 *  elem_dash_ptr1299 = ( (  offset_dash_ptr159 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_909_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  const char*   get921 (    struct Slice_919  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail906 ) ( ( (  try_dash_get918 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_52   get922 (    struct Slice_570  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail908 ) ( ( (  try_dash_get920 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set923 (    struct Slice_351  slice1307 ,    size_t  i1309 ,    struct List_3  x1311 ) {
    struct List_3 *  ep1312 = ( (  get_dash_ptr916 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set924 (    struct Slice_5  slice1307 ,    size_t  i1309 ,    char  x1311 ) {
    char *  ep1312 = ( (  get_dash_ptr30 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set925 (    struct Slice_570  slice1307 ,    size_t  i1309 ,    struct Cell_52  x1311 ) {
    struct Cell_52 *  ep1312 = ( (  get_dash_ptr917 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  struct SliceAddressIter_610   addresses926 (    struct Slice_351  slice1347 ) {
    return ( (struct SliceAddressIter_610) { .f_slice = (  slice1347 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam590 (   struct env590 env ,    struct Tuple2_358  dref1361 ) {
    return ( (  set924 ) ( ( env.dest1360 ) ,  ( (  i32_dash_size267 ) ( ( dref1361 .field1 ) ) ) ,  ( dref1361 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to927 (    struct Slice_5  src1358 ,    struct Slice_5  dest1360 ) {
    if ( (  cmp9 ( ( (  src1358 ) .f_count ) , ( (  dest1360 ) .f_count ) ) == 2 ) ) {
        ( (  panic901 ) ( ( ( StrConcat_851_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1358 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1360 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env590 envinst590 = {
        .dest1360 =  dest1360 ,
    };
    ( (  for_dash_each589 ) ( ( (  zip478 ) ( (  src1358 ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv590){ .fun = lam590, .env = envinst590 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam598 (   struct env598 env ,    struct Tuple2_363  dref1361 ) {
    return ( (  set923 ) ( ( env.dest1360 ) ,  ( (  i32_dash_size267 ) ( ( dref1361 .field1 ) ) ) ,  ( dref1361 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to928 (    struct Slice_351  src1358 ,    struct Slice_351  dest1360 ) {
    if ( (  cmp9 ( ( (  src1358 ) .f_count ) , ( (  dest1360 ) .f_count ) ) == 2 ) ) {
        ( (  panic901 ) ( ( ( StrConcat_851_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1358 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1360 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env598 envinst598 = {
        .dest1360 =  dest1360 ,
    };
    ( (  for_dash_each597 ) ( ( (  zip477 ) ( (  src1358 ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv598){ .fun = lam598, .env = envinst598 } ) ) );
    return ( Unit_13_Unit );
}

static  const char*   elem_dash_get929 (    struct Slice_919  self1366 ,    size_t  idx1368 ) {
    return ( (  get921 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  struct Cell_52   elem_dash_get930 (    struct Slice_570  self1366 ,    size_t  idx1368 ) {
    return ( (  get922 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  char   elem_dash_get931 (    struct Slice_5  self1366 ,    size_t  idx1368 ) {
    return ( (  get322 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  enum Unit_13   lam569 (   struct env569 env ,    int32_t  i1397 ) {
    return ( (  set925 ) ( ( env.s1393 ) ,  ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get930 ( ( env.s1393 ) , ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map932 (    struct Slice_570  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env569 envinst569 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each568 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32269 ) ( (  op_dash_sub93 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv569){ .fun = lam569, .env = envinst569 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam574 (   struct env574 env ,    int32_t  i1397 ) {
    return ( (  set925 ) ( ( env.s1393 ) ,  ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get930 ( ( env.s1393 ) , ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map933 (    struct Slice_570  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env574 envinst574 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each573 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32269 ) ( (  op_dash_sub93 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv574){ .fun = lam574, .env = envinst574 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam629 (   struct env629 env ,    int32_t  i1397 ) {
    return ( (  set925 ) ( ( env.s1393 ) ,  ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get930 ( ( env.s1393 ) , ( (  i32_dash_size267 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map934 (    struct Slice_570  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env629 envinst629 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each628 ) ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32269 ) ( (  op_dash_sub93 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv629){ .fun = lam629, .env = envinst629 } ) ) );
    return ( Unit_13_Unit );
}

static  enum CAllocator_4   idc935 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_351   allocate936 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize161 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1408 = ( (  cast_dash_ptr203 ) ( ( ( malloc ) ( (  op_dash_mul94 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_351) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  struct Slice_5   allocate937 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize164 ) ( ) ) ) .f_size );
    char *  ptr1408 = ( (  cast_dash_ptr206 ) ( ( ( malloc ) ( (  op_dash_mul94 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  struct Slice_570   allocate938 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize167 ) ( ) ) ) .f_size );
    struct Cell_52 *  ptr1408 = ( (  cast_dash_ptr213 ) ( ( ( malloc ) ( (  op_dash_mul94 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_570) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  enum Unit_13   free939 (    enum CAllocator_4  dref1410 ,    struct Slice_351  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr204 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free940 (    enum CAllocator_4  dref1410 ,    struct Slice_5  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr207 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_942 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free941 (    enum CAllocator_4  dref1410 ,    struct Slice_942  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr219 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free943 (    enum CAllocator_4  dref1410 ,    struct Slice_570  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr221 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr944 (    struct Array_136 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic673 ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_675_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1453 = ( ( (  cast190 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr157 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  char *   get_dash_ptr945 (    struct Array_180 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic673 ) ( ( ( StrConcat_674_StrConcat ) ( ( ( StrConcat_675_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1453 = ( ( (  cast192 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  enum Unit_13   set946 (    struct Array_136 *  arr1462 ,    size_t  i1465 ,    uint8_t  e1467 ) {
    uint8_t *  p1468 = ( (  get_dash_ptr944 ) ( (  arr1462 ) ,  (  i1465 ) ) );
    (*  p1468 ) = (  e1467 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set947 (    struct Array_180 *  arr1462 ,    size_t  i1465 ,    char  e1467 ) {
    char *  p1468 = ( (  get_dash_ptr945 ) ( (  arr1462 ) ,  (  i1465 ) ) );
    (*  p1468 ) = (  e1467 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice948 (    struct Array_180 *  arr1471 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast192 ) ( (  arr1471 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace949 (    char  c1522 ) {
    return ( ( (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace950 (    char  c1525 ) {
    return ( ! ( (  is_dash_whitespace949 ) ( (  c1525 ) ) ) );
}

static  struct LineIter_305   lines951 (    struct DynStr_130  s1532 ) {
    return ( (struct LineIter_305) { .f_og = (  s1532 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit952 (    char  c1561 ) {
    return ( (  cmp74 ( ( (  char_dash_i32892 ) ( (  c1561 ) ) ) , ( (  char_dash_i32892 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp74 ( ( (  char_dash_i32892 ) ( (  c1561 ) ) ) , ( (  char_dash_i32892 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_333   parse_dash_digit953 (    char  c1564 ) {
    if ( ( (  is_dash_digit952 ) ( (  c1564 ) ) ) ) {
        return ( ( Maybe_333_Just ) ( (  op_dash_sub82 ( ( (  char_dash_i32892 ) ( (  c1564 ) ) ) , ( (  char_dash_i32892 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_333) { .tag = Maybe_333_None_t } );
    }
}

static  struct Maybe_701   sequence_dash_maybe955 (    char  e1570 ,    struct Maybe_701  b1572 ) {
    struct Maybe_701  dref1573 = (  b1572 );
    if ( dref1573.tag == Maybe_701_None_t ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    else if ( dref1573.tag == Maybe_701_Just_t ) {
        struct Maybe_333  dref1575 = ( (  parse_dash_digit953 ) ( (  e1570 ) ) );
        if ( dref1575.tag == Maybe_333_None_t ) {
            return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
        }
        else if ( dref1575.tag == Maybe_333_Just_t ) {
            return ( ( Maybe_701_Just ) ( (  op_dash_add77 ( (  op_dash_mul32 ( ( dref1573 .stuff .Maybe_701_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64266 ) ( ( dref1575 .stuff .Maybe_333_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_701   parse_dash_int954 (    struct TakeWhile_500  s1567 ) {
    struct TakeWhile_500  cs1577 = ( (  chars885 ) ( (  s1567 ) ) );
    struct Maybe_49  dref1578 = ( (  head749 ) ( (  cs1577 ) ) );
    if ( dref1578.tag == Maybe_49_Just_t ) {
        return ( (  reduce700 ) ( (  cs1577 ) ,  ( ( Maybe_701_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe955 ) ) );
    }
    else if ( dref1578.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
}

static  struct Maybe_701   sequence_dash_maybe957 (    char  e1570 ,    struct Maybe_701  b1572 ) {
    struct Maybe_701  dref1573 = (  b1572 );
    if ( dref1573.tag == Maybe_701_None_t ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    else if ( dref1573.tag == Maybe_701_Just_t ) {
        struct Maybe_333  dref1575 = ( (  parse_dash_digit953 ) ( (  e1570 ) ) );
        if ( dref1575.tag == Maybe_333_None_t ) {
            return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
        }
        else if ( dref1575.tag == Maybe_333_Just_t ) {
            return ( ( Maybe_701_Just ) ( (  op_dash_add77 ( (  op_dash_mul32 ( ( dref1573 .stuff .Maybe_701_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64266 ) ( ( dref1575 .stuff .Maybe_333_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_701   parse_dash_int956 (    struct TakeWhile_504  s1567 ) {
    struct TakeWhile_504  cs1577 = ( (  chars886 ) ( (  s1567 ) ) );
    struct Maybe_49  dref1578 = ( (  head751 ) ( (  cs1577 ) ) );
    if ( dref1578.tag == Maybe_49_Just_t ) {
        return ( (  reduce709 ) ( (  cs1577 ) ,  ( ( Maybe_701_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe957 ) ) );
    }
    else if ( dref1578.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr958 (    struct List_373 *  list1583 ,    size_t  i1585 ) {
    if ( ( (  cmp9 ( (  i1585 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1585 ) , ( ( * (  list1583 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1585 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1583 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr916 ) ( ( ( * (  list1583 ) ) .f_elements ) ,  (  i1585 ) ) );
}

static  struct List_3   get959 (    struct List_373 *  list1593 ,    size_t  i1595 ) {
    return ( * ( (  get_dash_ptr958 ) ( (  list1593 ) ,  (  i1595 ) ) ) );
}

static  struct Maybe_49   try_dash_get960 (    struct List_3 *  list1598 ,    size_t  i1600 ) {
    if ( (  cmp9 ( (  i1600 ) , ( ( * (  list1598 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1598 ) ,  (  i1600 ) ) ) ) );
}

static  struct Maybe_319   try_dash_get961 (    struct List_373 *  list1598 ,    size_t  i1600 ) {
    if ( (  cmp9 ( (  i1600 ) , ( ( * (  list1598 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    return ( ( Maybe_319_Just ) ( ( (  get959 ) ( (  list1598 ) ,  (  i1600 ) ) ) ) );
}

static  enum Unit_13   set962 (    struct List_3 *  list1603 ,    size_t  i1605 ,    char  elem1607 ) {
    if ( ( (  cmp9 ( (  i1605 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1605 ) , ( ( * (  list1603 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1605 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1603 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set924 ) ( ( ( * (  list1603 ) ) .f_elements ) ,  (  i1605 ) ,  (  elem1607 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set963 (    struct List_373 *  list1603 ,    size_t  i1605 ,    struct List_3  elem1607 ) {
    if ( ( (  cmp9 ( (  i1605 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1605 ) , ( ( * (  list1603 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1605 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1603 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set923 ) ( ( ( * (  list1603 ) ) .f_elements ) ,  (  i1605 ) ,  (  elem1607 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_373   mk964 (    enum CAllocator_4  al1613 ) {
    struct Slice_351  elements1614 = ( (  empty914 ) ( ) );
    return ( (struct List_373) { .f_al = (  al1613 ) , .f_elements = (  elements1614 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk965 (    enum CAllocator_4  al1613 ) {
    struct Slice_5  elements1614 = ( (  empty915 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1613 ) , .f_elements = (  elements1614 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free966 (    struct List_3 *  list1617 ) {
    ( (  free940 ) ( ( ( * (  list1617 ) ) .f_al ) ,  ( ( * (  list1617 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free967 (    struct List_373 *  list1617 ) {
    ( (  free939 ) ( ( ( * (  list1617 ) ) .f_al ) ,  ( ( * (  list1617 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam545 (   struct env545 env ,    struct Tuple2_363  dref1625 ) {
    return ( (  set923 ) ( ( env.new_dash_slice1624 ) ,  ( (  i32_dash_size267 ) ( ( dref1625 .field1 ) ) ) ,  ( dref1625 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full559 (   struct env559 env ,    struct List_373 *  list1623 ) {
    if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1623 ) .f_elements = ( (  allocate936 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( env.starting_dash_size1618 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , ( ( ( * (  list1623 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_351  new_dash_slice1624 = ( (  allocate936 ) ( ( ( * (  list1623 ) ) .f_al ) ,  (  op_dash_mul94 ( ( ( * (  list1623 ) ) .f_count ) , ( env.growth_dash_factor1619 ) ) ) ) );
            struct env545 envinst545 = {
                .new_dash_slice1624 =  new_dash_slice1624 ,
            };
            ( (  for_dash_each544 ) ( ( (  zip477 ) ( ( ( * (  list1623 ) ) .f_elements ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv545){ .fun = lam545, .env = envinst545 } ) ) );
            ( (  free939 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( ( * (  list1623 ) ) .f_elements ) ) );
            (*  list1623 ) .f_elements = (  new_dash_slice1624 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam549 (   struct env549 env ,    struct Tuple2_358  dref1625 ) {
    return ( (  set924 ) ( ( env.new_dash_slice1624 ) ,  ( (  i32_dash_size267 ) ( ( dref1625 .field1 ) ) ) ,  ( dref1625 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full310 (   struct env310 env ,    struct List_3 *  list1623 ) {
    if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1623 ) .f_elements = ( (  allocate937 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( env.starting_dash_size1618 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , ( ( ( * (  list1623 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1624 = ( (  allocate937 ) ( ( ( * (  list1623 ) ) .f_al ) ,  (  op_dash_mul94 ( ( ( * (  list1623 ) ) .f_count ) , ( env.growth_dash_factor1619 ) ) ) ) );
            struct env549 envinst549 = {
                .new_dash_slice1624 =  new_dash_slice1624 ,
            };
            ( (  for_dash_each548 ) ( ( (  zip478 ) ( ( ( * (  list1623 ) ) .f_elements ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv549){ .fun = lam549, .env = envinst549 } ) ) );
            ( (  free940 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( ( * (  list1623 ) ) .f_elements ) ) );
            (*  list1623 ) .f_elements = (  new_dash_slice1624 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add558 (   struct env558 env ,    struct List_373 *  list1630 ,    struct List_3  elem1632 ) {
    struct funenv559  temp968 = ( (struct funenv559){ .fun = grow_dash_if_dash_full559, .env =  env.envinst559  } );
    ( temp968.fun ( temp968.env ,  (  list1630 ) ) );
    ( (  set923 ) ( ( ( * (  list1630 ) ) .f_elements ) ,  ( ( * (  list1630 ) ) .f_count ) ,  (  elem1632 ) ) );
    (*  list1630 ) .f_count = (  op_dash_add92 ( ( ( * (  list1630 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add309 (   struct env309 env ,    struct List_3 *  list1630 ,    char  elem1632 ) {
    struct funenv310  temp969 = ( (struct funenv310){ .fun = grow_dash_if_dash_full310, .env =  env.envinst310  } );
    ( temp969.fun ( temp969.env ,  (  list1630 ) ) );
    ( (  set924 ) ( ( ( * (  list1630 ) ) .f_elements ) ,  ( ( * (  list1630 ) ) .f_count ) ,  (  elem1632 ) ) );
    (*  list1630 ) .f_count = (  op_dash_add92 ( ( ( * (  list1630 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env970 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env558 envinst558;
    struct env559 envinst559;
};

static  enum Unit_13   insert970 (   struct env970 env ,    struct List_373 *  list1635 ,    size_t  i1637 ,    struct List_3  elem1639 ) {
    if ( ( (  cmp9 ( (  i1637 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1637 ) , ( ( * (  list1635 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1637 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1635 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv558  temp971 = ( (struct funenv558){ .fun = add558, .env =  env.envinst558  } );
        ( temp971.fun ( temp971.env ,  (  list1635 ) ,  (  elem1639 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv559  temp972 = ( (struct funenv559){ .fun = grow_dash_if_dash_full559, .env =  env.envinst559  } );
    ( temp972.fun ( temp972.env ,  (  list1635 ) ) );
    size_t  ii1640 = (  op_dash_sub93 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1640 ) , (  i1637 ) ) != 0 ) ) {
        ( (  set923 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  op_dash_add92 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get959 ) ( (  list1635 ) ,  (  ii1640 ) ) ) ) );
        if ( (  eq45 ( (  ii1640 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1640 = (  op_dash_sub93 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set923 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  i1637 ) ,  (  elem1639 ) ) );
    (*  list1635 ) .f_count = (  op_dash_add92 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env973 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env309 envinst309;
    struct env310 envinst310;
};

static  enum Unit_13   insert973 (   struct env973 env ,    struct List_3 *  list1635 ,    size_t  i1637 ,    char  elem1639 ) {
    if ( ( (  cmp9 ( (  i1637 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1637 ) , ( ( * (  list1635 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1637 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1635 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv309  temp974 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
        ( temp974.fun ( temp974.env ,  (  list1635 ) ,  (  elem1639 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv310  temp975 = ( (struct funenv310){ .fun = grow_dash_if_dash_full310, .env =  env.envinst310  } );
    ( temp975.fun ( temp975.env ,  (  list1635 ) ) );
    size_t  ii1640 = (  op_dash_sub93 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1640 ) , (  i1637 ) ) != 0 ) ) {
        ( (  set924 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  op_dash_add92 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1635 ) ,  (  ii1640 ) ) ) ) );
        if ( (  eq45 ( (  ii1640 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1640 = (  op_dash_sub93 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set924 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  i1637 ) ,  (  elem1639 ) ) );
    (*  list1635 ) .f_count = (  op_dash_add92 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env976 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1620;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam586 (   struct env586 env ,    struct Tuple2_358  dref1646 ) {
    return ( (  set962 ) ( ( env.list1643 ) ,  ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( ( dref1646 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1646 .field0 ) ) );
}

static  enum Unit_13   remove976 (   struct env976 env ,    struct List_3 *  list1643 ,    size_t  i1645 ) {
    if ( ( (  cmp9 ( (  i1645 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1645 ) , ( ( * (  list1643 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1645 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env586 envinst586 = {
        .list1643 =  list1643 ,
    };
    ( (  for_dash_each585 ) ( ( (  drop368 ) ( ( (  zip479 ) ( ( * (  list1643 ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add92 ( (  i1645 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv586){ .fun = lam586, .env = envinst586 } ) ) );
    (*  list1643 ) .f_count = (  op_dash_sub93 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1649 = ( ( ( * (  list1643 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul94 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  capacity1649 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free940 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
            (*  list1643 ) .f_elements = ( (  empty915 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1650 = (  op_dash_mul94 ( (  op_dash_add92 ( (  op_dash_div95 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1620 ) ) );
        struct Slice_5  new_dash_slice1651 = ( (  allocate937 ) ( ( ( * (  list1643 ) ) .f_al ) ,  (  new_dash_size1650 ) ) );
        ( (  copy_dash_to927 ) ( ( (  subslice283 ) ( ( ( * (  list1643 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  (  new_dash_slice1651 ) ) );
        ( (  free940 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
        (*  list1643 ) .f_elements = (  new_dash_slice1651 );
    }
    return ( Unit_13_Unit );
}

struct env977 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1620;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam594 (   struct env594 env ,    struct Tuple2_363  dref1646 ) {
    return ( (  set963 ) ( ( env.list1643 ) ,  ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( ( dref1646 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1646 .field0 ) ) );
}

static  enum Unit_13   remove977 (   struct env977 env ,    struct List_373 *  list1643 ,    size_t  i1645 ) {
    if ( ( (  cmp9 ( (  i1645 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1645 ) , ( ( * (  list1643 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1645 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env594 envinst594 = {
        .list1643 =  list1643 ,
    };
    ( (  for_dash_each593 ) ( ( (  drop370 ) ( ( (  zip480 ) ( ( * (  list1643 ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add92 ( (  i1645 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv594){ .fun = lam594, .env = envinst594 } ) ) );
    (*  list1643 ) .f_count = (  op_dash_sub93 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1649 = ( ( ( * (  list1643 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul94 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  capacity1649 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free939 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
            (*  list1643 ) .f_elements = ( (  empty914 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1650 = (  op_dash_mul94 ( (  op_dash_add92 ( (  op_dash_div95 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1620 ) ) );
        struct Slice_351  new_dash_slice1651 = ( (  allocate936 ) ( ( ( * (  list1643 ) ) .f_al ) ,  (  new_dash_size1650 ) ) );
        ( (  copy_dash_to928 ) ( ( (  subslice376 ) ( ( ( * (  list1643 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  (  new_dash_slice1651 ) ) );
        ( (  free939 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
        (*  list1643 ) .f_elements = (  new_dash_slice1651 );
    }
    return ( Unit_13_Unit );
}

struct funenv976 {
    enum Unit_13  (*fun) (  struct env976  ,    struct List_3 *  ,    size_t  );
    struct env976 env;
};

struct env978 {
    ;
    ;
    ;
    ;
    struct env976 envinst976;
    ;
    ;
};

static  enum Unit_13   pop978 (   struct env978 env ,    struct List_3 *  list1665 ) {
    if ( (  eq45 ( ( ( * (  list1665 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic902 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv976  temp979 = ( (struct funenv976){ .fun = remove976, .env =  env.envinst976  } );
    return ( temp979.fun ( temp979.env ,  (  list1665 ) ,  (  op_dash_sub93 ( ( ( * (  list1665 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam553 (   struct env553 env ,    char  x1675 ) {
    struct funenv309  temp980 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp980.fun ( temp980.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all308 (   struct env308 env ,    struct List_3 *  list1671 ,    struct DynStr_130  it1673 ) {
    struct env553 envinst553 = {
        .envinst309 = env.envinst309 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each552 ) ( (  it1673 ) ,  ( (struct funenv553){ .fun = lam553, .env = envinst553 } ) ) );
    return ( Unit_13_Unit );
}

struct env981 {
    ;
    ;
    struct env558 envinst558;
    ;
    ;
    ;
};

static  enum Unit_13   lam557 (   struct env557 env ,    struct List_3  x1675 ) {
    struct funenv558  temp982 = ( (struct funenv558){ .fun = add558, .env =  env.envinst558  } );
    return ( temp982.fun ( temp982.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all981 (   struct env981 env ,    struct List_373 *  list1671 ,    struct Map_304  it1673 ) {
    struct env557 envinst557 = {
        .envinst558 = env.envinst558 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each556 ) ( (  it1673 ) ,  ( (struct funenv557){ .fun = lam557, .env = envinst557 } ) ) );
    return ( Unit_13_Unit );
}

struct env983 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
};

static  enum Unit_13   lam582 (   struct env582 env ,    char  x1675 ) {
    struct funenv309  temp984 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp984.fun ( temp984.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all983 (   struct env983 env ,    struct List_3 *  list1671 ,    struct List_3 *  it1673 ) {
    struct env582 envinst582 = {
        .envinst309 = env.envinst309 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each581 ) ( (  it1673 ) ,  ( (struct funenv582){ .fun = lam582, .env = envinst582 } ) ) );
    return ( Unit_13_Unit );
}

struct env985 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
};

static  enum Unit_13   lam602 (   struct env602 env ,    char  x1675 ) {
    struct funenv309  temp986 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp986.fun ( temp986.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all985 (   struct env985 env ,    struct List_3 *  list1671 ,    struct TakeWhile_502  it1673 ) {
    struct env602 envinst602 = {
        .envinst309 = env.envinst309 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each601 ) ( (  it1673 ) ,  ( (struct funenv602){ .fun = lam602, .env = envinst602 } ) ) );
    return ( Unit_13_Unit );
}

struct env987 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
};

static  enum Unit_13   lam606 (   struct env606 env ,    char  x1675 ) {
    struct funenv309  temp988 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp988.fun ( temp988.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all987 (   struct env987 env ,    struct List_3 *  list1671 ,    struct Slice_5  it1673 ) {
    struct env606 envinst606 = {
        .envinst309 = env.envinst309 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each605 ) ( (  it1673 ) ,  ( (struct funenv606){ .fun = lam606, .env = envinst606 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim989 (    struct List_3 *  l1678 ,    size_t  new_dash_count1680 ) {
    (*  l1678 ) .f_count = (  new_dash_count1680 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list307 (   struct env307 env ,    struct DynStr_130  it1683 ,    enum CAllocator_4  al1685 ) {
    struct List_3  temp990 = ( (  mk965 ) ( (  al1685 ) ) );
    struct List_3 *  l1686 = ( &temp990 );
    struct funenv308  temp991 = ( (struct funenv308){ .fun = add_dash_all308, .env =  env.envinst308  } );
    ( temp991.fun ( temp991.env ,  (  l1686 ) ,  (  it1683 ) ) );
    return ( * (  l1686 ) );
}

struct funenv981 {
    enum Unit_13  (*fun) (  struct env981  ,    struct List_373 *  ,    struct Map_304  );
    struct env981 env;
};

struct env992 {
    ;
    ;
    ;
    ;
    ;
    struct env981 envinst981;
};

static  struct List_373   to_dash_list992 (   struct env992 env ,    struct Map_304  it1683 ,    enum CAllocator_4  al1685 ) {
    struct List_373  temp993 = ( (  mk964 ) ( (  al1685 ) ) );
    struct List_373 *  l1686 = ( &temp993 );
    struct funenv981  temp994 = ( (struct funenv981){ .fun = add_dash_all981, .env =  env.envinst981  } );
    ( temp994.fun ( temp994.env ,  (  l1686 ) ,  (  it1683 ) ) );
    return ( * (  l1686 ) );
}

static  struct Slice_5   to_dash_slice995 (    struct List_3  l1689 ) {
    char *  ptr1690 = ( ( (  l1689 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1690 ) , .f_count = ( (  l1689 ) .f_count ) } );
}

static  struct Slice_351   to_dash_slice996 (    struct List_373  l1689 ) {
    struct List_3 *  ptr1690 = ( ( (  l1689 ) .f_elements ) .f_ptr );
    return ( (struct Slice_351) { .f_ptr = (  ptr1690 ) , .f_count = ( (  l1689 ) .f_count ) } );
}

static  struct SliceAddressIter_610   addresses997 (    struct List_373  l1693 ) {
    return ( (  addresses926 ) ( ( (  to_dash_slice996 ) ( (  l1693 ) ) ) ) );
}

static  size_t   size998 (    struct List_3 *  l1696 ) {
    return ( ( * (  l1696 ) ) .f_count );
}

static  struct Maybe_911   hex_dash_digit999 (    char  c1724 ) {
    if ( ( (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_911_Just ) ( (  op_dash_sub91 ( ( (  char_dash_u8893 ) ( (  c1724 ) ) ) , ( (  char_dash_u8893 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_911_Just ) ( (  op_dash_add90 ( (  op_dash_sub91 ( ( (  char_dash_u8893 ) ( (  c1724 ) ) ) , ( (  char_dash_u8893 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp896 ( (  c1724 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_911_Just ) ( (  op_dash_add90 ( (  op_dash_sub91 ( ( (  char_dash_u8893 ) ( (  c1724 ) ) ) , ( (  char_dash_u8893 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_911) { .tag = Maybe_911_None_t } );
}

static  uint32_t   lam1001 (    char  c1729 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64274 ) ( ( (  or_dash_fail910 ) ( ( (  hex_dash_digit999 ) ( (  c1729 ) ) ) ,  ( ( StrConcat_813_StrConcat ) ( ( ( StrConcat_814_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1729 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1002 (    uint32_t  elem1731 ,    uint32_t  b1733 ) {
    return (  op_dash_add86 ( (  op_dash_mul88 ( (  b1733 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1731 ) ) );
}

static  uint32_t   from_dash_hex1000 (    const char*  arr1727 ) {
    return ( (  reduce698 ) ( ( (  map339 ) ( (  arr1727 ) ,  (  lam1001 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1002 ) ) );
}

static  struct Maybe_264   get1003 (    const char*  s1767 ) {
    return ( (  from_dash_nullable_dash_c_dash_str263 ) ( ( ( getenv ) ( (  s1767 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1004 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1005 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1006 (    uint32_t  x1744 ,    uint32_t  y1746 ) {
    uint32_t  x1747 = (  op_dash_add86 ( (  x1744 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1748 = (  op_dash_add86 ( (  y1746 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str872 ) ( ( ( StrConcat_873_StrConcat ) ( ( ( StrConcat_874_StrConcat ) ( ( ( StrConcat_875_StrConcat ) ( ( ( StrConcat_795_StrConcat ) ( ( "\x1b[" ) ,  (  y1748 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1747 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1007 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_1009 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1009 Tuple2_1009_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1009 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_1009   get_dash_dimensions1008 (  ) {
    struct Winsize_176  temp1010 = ( ( (  zeroed232 ) ( ) ) );
    struct Winsize_176 *  ws1752 = ( &temp1010 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno108 ) ( ) ) ,  ( (  tiocgwinsz124 ) ( ) ) ,  (  ws1752 ) ) ) , (  op_dash_neg85 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1752 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1009_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1009_Tuple2 ) ( ( (  u16_dash_u32270 ) ( ( ( * (  ws1752 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32270 ) ( ( ( * (  ws1752 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1011 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1012 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_636   query_dash_palette1013 (  ) {
    struct Maybe_264  colorterm1768 = ( (  get1003 ) ( ( "COLORTERM" ) ) );
    struct Maybe_264  dref1769 = (  colorterm1768 );
    if ( dref1769.tag == Maybe_264_Just_t ) {
        if ( ( (  eq895 ( ( dref1769 .stuff .Maybe_264_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq895 ( ( dref1769 .stuff .Maybe_264_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_636_PaletteRGB );
        }
    }
    else if ( dref1769.tag == Maybe_264_None_t ) {
    }
    struct Maybe_264  dref1771 = ( (  get1003 ) ( ( "TERM" ) ) );
    if ( dref1771.tag == Maybe_264_Just_t ) {
        if ( (  eq895 ( ( dref1771 .stuff .Maybe_264_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_636_Palette8 );
        }
    }
    else if ( dref1771.tag == Maybe_264_None_t ) {
    }
    return ( ColorPalette_636_Palette16 );
}

static  enum Unit_13   set_dash_fg81014 (    enum Color8_54  color1787 ) {
    enum Color8_54  dref1788 = (  color1787 );
    switch (  dref1788 ) {
        case Color8_54_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_54_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_54_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_54_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_54_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_54_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_54_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_54_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg161015 (    enum Color16_55  color1791 ) {
    enum Color16_55  dref1792 = (  color1791 );
    switch (  dref1792 ) {
        case Color16_55_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_55_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_55_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_55_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_55_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_55_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_55_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_55_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_55_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_55_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_55_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_55_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_55_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_55_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_55_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_55_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg81016 (    enum Color8_54  color1795 ) {
    enum Color8_54  dref1796 = (  color1795 );
    switch (  dref1796 ) {
        case Color8_54_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_54_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_54_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_54_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_54_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_54_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_54_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_54_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg161017 (    enum Color16_55  color1799 ) {
    enum Color16_55  dref1800 = (  color1799 );
    switch (  dref1800 ) {
        case Color16_55_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_55_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_55_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_55_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_55_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_55_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_55_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_55_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_55_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_55_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_55_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_55_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_55_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_55_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_55_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_55_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[107m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_colors1018 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1019 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561020 (    uint8_t  color1805 ) {
    ( (  print_dash_str860 ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1805 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561021 (    uint8_t  color1808 ) {
    ( (  print_dash_str860 ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1808 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1022 (    struct RGB_56  c1828 ) {
    ( (  print_dash_str864 ) ( ( ( StrConcat_865_StrConcat ) ( ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1828 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1828 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1828 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1023 (    struct RGB_56  c1831 ) {
    ( (  print_dash_str864 ) ( ( ( StrConcat_865_StrConcat ) ( ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1831 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1831 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1831 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1024 (    struct Color_53  c1849 ) {
    struct Color_53  dref1850 = (  c1849 );
    if ( dref1850.tag == Color_53_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1011 ) ( ) );
    }
    else if ( dref1850.tag == Color_53_Color8_t ) {
        ( (  set_dash_fg81014 ) ( ( dref1850 .stuff .Color_53_Color8_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_Color16_t ) {
        ( (  set_dash_fg161015 ) ( ( dref1850 .stuff .Color_53_Color16_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_Color256_t ) {
        ( (  set_dash_fg2561020 ) ( ( dref1850 .stuff .Color_53_Color256_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1022 ) ( ( dref1850 .stuff .Color_53_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1025 (    struct Color_53  c1857 ) {
    struct Color_53  dref1858 = (  c1857 );
    if ( dref1858.tag == Color_53_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1012 ) ( ) );
    }
    else if ( dref1858.tag == Color_53_Color8_t ) {
        ( (  set_dash_bg81016 ) ( ( dref1858 .stuff .Color_53_Color8_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_Color16_t ) {
        ( (  set_dash_bg161017 ) ( ( dref1858 .stuff .Color_53_Color16_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_Color256_t ) {
        ( (  set_dash_bg2561021 ) ( ( dref1858 .stuff .Color_53_Color256_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1023 ) ( ( dref1858 .stuff .Color_53_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1026 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam563 (   struct env563 env ,    char  c1914 ) {
    struct funenv309  temp1027 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp1027.fun ( temp1027.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write1026 (   struct env1026 env ,    struct StrBuilder_564 *  builder1910 ,    const char*  s1912 ) {
    struct env563 envinst563 = {
        .envinst309 = env.envinst309 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each562 ) ( ( (  chars768 ) ( (  s1912 ) ) ) ,  ( (struct funenv563){ .fun = lam563, .env = envinst563 } ) ) );
    return ( Unit_13_Unit );
}

struct env1028 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam616 (   struct env616 env ,    char  c1914 ) {
    struct funenv309  temp1029 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp1029.fun ( temp1029.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write1028 (   struct env1028 env ,    struct StrBuilder_564 *  builder1910 ,    struct TakeWhile_511  s1912 ) {
    struct env616 envinst616 = {
        .envinst309 = env.envinst309 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each615 ) ( ( (  chars887 ) ( (  s1912 ) ) ) ,  ( (struct funenv616){ .fun = lam616, .env = envinst616 } ) ) );
    return ( Unit_13_Unit );
}

struct env1030 {
    ;
    ;
    struct env309 envinst309;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam620 (   struct env620 env ,    char  c1914 ) {
    struct funenv309  temp1031 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    return ( temp1031.fun ( temp1031.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write1030 (   struct env1030 env ,    struct StrBuilder_564 *  builder1910 ,    struct TakeWhile_507  s1912 ) {
    struct env620 envinst620 = {
        .envinst309 = env.envinst309 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each619 ) ( ( (  chars888 ) ( (  s1912 ) ) ) ,  ( (struct funenv620){ .fun = lam620, .env = envinst620 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char625 (   struct env625 env ,    struct StrBuilder_564 *  builder1917 ,    char  c1919 ) {
    struct funenv309  temp1032 = ( (struct funenv309){ .fun = add309, .env =  env.envinst309  } );
    ( temp1032.fun ( temp1032.env ,  ( & ( ( * (  builder1917 ) ) .f_chars ) ) ,  (  c1919 ) ) );
    return ( Unit_13_Unit );
}

struct funenv978 {
    enum Unit_13  (*fun) (  struct env978  ,    struct List_3 *  );
    struct env978 env;
};

struct env1033 {
    ;
    ;
    struct env978 envinst978;
};

static  enum Unit_13   pop1033 (   struct env1033 env ,    struct StrBuilder_564 *  sb1927 ) {
    struct funenv978  temp1034 = ( (struct funenv978){ .fun = pop978, .env =  env.envinst978  } );
    return ( temp1034.fun ( temp1034.env ,  ( & ( ( * (  sb1927 ) ) .f_chars ) ) ) );
}

static  size_t   count1035 (    struct StrBuilder_564 *  sb1930 ) {
    return ( ( ( * (  sb1930 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_564   mk1036 (    enum CAllocator_4  al1933 ) {
    return ( (struct StrBuilder_564) { .f_chars = ( (  mk965 ) ( (  al1933 ) ) ) } );
}

static  enum Unit_13   free1037 (    struct StrBuilder_564 *  builder1939 ) {
    ( (  free966 ) ( ( & ( ( * (  builder1939 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1026 {
    enum Unit_13  (*fun) (  struct env1026  ,    struct StrBuilder_564 *  ,    const char*  );
    struct env1026 env;
};

struct env1038 {
    ;
    ;
    struct env625 envinst625;
    ;
    ;
    ;
    ;
    ;
    struct env1026 envinst1026;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1038 (   struct env1038 env ,    const char*  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_564  temp1039 = ( (  mk1036 ) ( (  al1955 ) ) );
    struct StrBuilder_564 *  sb1956 = ( &temp1039 );
    struct funenv1026  temp1040 = ( (struct funenv1026){ .fun = write1026, .env =  env.envinst1026  } );
    ( temp1040.fun ( temp1040.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv625  temp1041 = ( (struct funenv625){ .fun = write_dash_char625, .env =  env.envinst625  } );
    ( temp1041.fun ( temp1041.env ,  (  sb1956 ) ,  ( (  nullchar325 ) ( ) ) ) );
    return ( ( (  cast184 ) ( ( ( ( (  as_dash_str786 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1028 {
    enum Unit_13  (*fun) (  struct env1028  ,    struct StrBuilder_564 *  ,    struct TakeWhile_511  );
    struct env1028 env;
};

struct env1042 {
    ;
    ;
    struct env625 envinst625;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1028 envinst1028;
    ;
};

static  const char*   mk_dash_const_dash_str1042 (   struct env1042 env ,    struct TakeWhile_511  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_564  temp1043 = ( (  mk1036 ) ( (  al1955 ) ) );
    struct StrBuilder_564 *  sb1956 = ( &temp1043 );
    struct funenv1028  temp1044 = ( (struct funenv1028){ .fun = write1028, .env =  env.envinst1028  } );
    ( temp1044.fun ( temp1044.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv625  temp1045 = ( (struct funenv625){ .fun = write_dash_char625, .env =  env.envinst625  } );
    ( temp1045.fun ( temp1045.env ,  (  sb1956 ) ,  ( (  nullchar325 ) ( ) ) ) );
    return ( ( (  cast184 ) ( ( ( ( (  as_dash_str786 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1030 {
    enum Unit_13  (*fun) (  struct env1030  ,    struct StrBuilder_564 *  ,    struct TakeWhile_507  );
    struct env1030 env;
};

struct env1046 {
    ;
    ;
    struct env625 envinst625;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1030 envinst1030;
    ;
};

static  const char*   mk_dash_const_dash_str1046 (   struct env1046 env ,    struct TakeWhile_507  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_564  temp1047 = ( (  mk1036 ) ( (  al1955 ) ) );
    struct StrBuilder_564 *  sb1956 = ( &temp1047 );
    struct funenv1030  temp1048 = ( (struct funenv1030){ .fun = write1030, .env =  env.envinst1030  } );
    ( temp1048.fun ( temp1048.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv625  temp1049 = ( (struct funenv625){ .fun = write_dash_char625, .env =  env.envinst625  } );
    ( temp1049.fun ( temp1049.env ,  (  sb1956 ) ,  ( (  nullchar325 ) ( ) ) ) );
    return ( ( (  cast184 ) ( ( ( ( (  as_dash_str786 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  uint32_t   fst1050 (    struct Tuple2_1009  dref1995 ) {
    return ( dref1995 .field0 );
}

static  uint32_t   snd1051 (    struct Tuple2_1009  dref1998 ) {
    return ( dref1998 .field1 );
}

struct Maybe_1053 {
    enum {
        Maybe_1053_None_t,
        Maybe_1053_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1053_Just_s;
    } stuff;
};

static struct Maybe_1053 Maybe_1053_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1053 ) { .tag = Maybe_1053_Just_t, .stuff = { .Maybe_1053_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1052 (    struct Maybe_1053  m2002 ) {
    struct Maybe_1053  dref2003 = (  m2002 );
    if ( dref2003.tag == Maybe_1053_None_t ) {
        return ( false );
    }
    else if ( dref2003.tag == Maybe_1053_Just_t ) {
        return ( true );
    }
}

struct Cursor_1057 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Visual_1058 {
    int32_t  field0;
};

static struct Visual_1058 Visual_1058_Visual (  int32_t  field0 ) {
    return ( struct Visual_1058 ) { .field0 = field0 };
};

struct Maybe_1059 {
    enum {
        Maybe_1059_None_t,
        Maybe_1059_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_1057  field0;
        } Maybe_1059_Just_s;
    } stuff;
};

static struct Maybe_1059 Maybe_1059_Just (  struct Cursor_1057  field0 ) {
    return ( struct Maybe_1059 ) { .tag = Maybe_1059_Just_t, .stuff = { .Maybe_1059_Just_s = { .field0 = field0 } } };
};

struct Editor_1056 {
    bool  f_running;
    struct Cursor_1057  f_cursor;
    struct Visual_1058  f_goal_dash_x;
    struct List_373  f_current_dash_file;
    struct Maybe_264  f_filename;
    struct Mode_780  f_mode;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Maybe_1053  f_anim;
    struct Maybe_1059  f_selected;
};

struct env1055 {
    ;
    ;
    struct Editor_1056 *  ed2719;
};

struct funenv1055 {
    struct Maybe_49  (*fun) (  struct env1055  ,    struct List_3  );
    struct env1055 env;
};

static  struct Maybe_49   and_dash_maybe1054 (    struct Maybe_319  m2006 ,   struct funenv1055  fun2008 ) {
    struct Maybe_319  dref2009 = (  m2006 );
    if ( dref2009.tag == Maybe_319_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref2009.tag == Maybe_319_Just_t ) {
        struct funenv1055  temp1060 = (  fun2008 );
        return ( temp1060.fun ( temp1060.env ,  ( dref2009 .stuff .Maybe_319_Just_s .field0 ) ) );
    }
}

static  struct Maybe_357   fmap_dash_maybe1061 (    struct Maybe_49  x2013 ,    struct Tuple2_358 (*  fun2015 )(    char  ) ) {
    struct Maybe_49  dref2016 = (  x2013 );
    if ( dref2016.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_357) { .tag = Maybe_357_None_t } );
    }
    else if ( dref2016.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_357_Just ) ( ( (  fun2015 ) ( ( dref2016 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  bool   maybe1062 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1063 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1064 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1065 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1066 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1067 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  int32_t   maybe1068 (    struct Maybe_49  x2020 ,   struct funenv317  fun2022 ,    int32_t  default2024 ) {
    struct funenv317  temp1069 = (  fun2022 );
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( temp1069.fun ( temp1069.env ,  ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  struct timespec   now1070 (  ) {
    struct timespec  temp1071 = ( (  undefined132 ) ( ) );
    struct timespec *  t2140 = ( &temp1071 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic105 ) ( ) ) ,  (  t2140 ) ) );
    return ( * (  t2140 ) );
}

struct Duration_1073 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1072 (    struct Duration_1073  l2144 ,    struct Duration_1073  r2146 ) {
    enum Ordering_10  scmp2147 = ( (  cmp73 ) ( ( (  l2144 ) .f_secs ) ,  ( (  r2146 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2147 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2147 );
    }
    return ( (  cmp73 ) ( ( (  l2144 ) .f_nsecs ) ,  ( (  r2146 ) .f_nsecs ) ) );
}

static  struct Duration_1073   diff1074 (    struct timespec  l2150 ,    struct timespec  r2152 ) {
    int64_t  secdiff2153 = (  op_dash_sub78 ( ( (  l2150 ) .tv_sec ) , ( (  r2152 ) .tv_sec ) ) );
    int64_t  nsdiff2154 = (  op_dash_sub78 ( ( (  l2150 ) .tv_nsec ) , ( (  r2152 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2155 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp73 ( (  nsdiff2154 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp73 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1073) { .f_secs = (  secdiff2153 ) , .f_nsecs = (  op_dash_neg80 ( (  nsdiff2154 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1073) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2154 ) } );
            } else {
                return ( (struct Duration_1073) { .f_secs = (  op_dash_sub78 ( (  secdiff2153 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add77 ( (  ns_dash_in_dash_secs2155 ) , (  nsdiff2154 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp73 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1073) { .f_secs = (  secdiff2153 ) , .f_nsecs = (  nsdiff2154 ) } );
        } else {
            return ( (struct Duration_1073) { .f_secs = (  op_dash_sub78 ( (  secdiff2153 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub78 ( (  ns_dash_in_dash_secs2155 ) , (  nsdiff2154 ) ) ) } );
        }
    }
}

static  struct Duration_1073   duration_dash_from_dash_ns1075 (    int64_t  ns2158 ) {
    int64_t  ns_dash_in_dash_secs2159 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1073) { .f_secs = (  op_dash_div79 ( (  ns2158 ) , (  ns_dash_in_dash_secs2159 ) ) ) , .f_nsecs = ( (  mod764 ) ( (  ns2158 ) ,  (  ns_dash_in_dash_secs2159 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1076 (    struct Duration_1073  d2170 ) {
    int64_t  ns_dash_in_dash_secs2171 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add77 ( (  op_dash_mul32 ( ( (  d2170 ) .f_secs ) , (  ns_dash_in_dash_secs2171 ) ) ) , ( (  d2170 ) .f_nsecs ) ) );
}

static  struct Scanner_277   mk1077 (    struct DynStr_130  s2181 ) {
    return ( (struct Scanner_277) { .f_s = ( (  chars793 ) ( (  s2181 ) ) ) } );
}

static  struct Maybe_701   scan_dash_int1078 (    struct Scanner_277 *  sc2184 ) {
    struct TakeWhile_500  digit_dash_chars2185 = ( (  take_dash_while521 ) ( (  sc2184 ) ,  (  is_dash_digit952 ) ) );
    if ( ( (  null755 ) ( (  digit_dash_chars2185 ) ) ) ) {
        return ( (struct Maybe_701) { .tag = Maybe_701_None_t } );
    }
    ( (  drop_prime_757 ) ( (  sc2184 ) ,  ( (  count727 ) ( (  digit_dash_chars2185 ) ) ) ) );
    return ( (  parse_dash_int954 ) ( (  digit_dash_chars2185 ) ) );
}

static  struct Termios_135   enable_dash_raw_dash_mode1079 (  ) {
    struct Termios_135  temp1080 = ( (  undefined134 ) ( ) );
    struct Termios_135 *  orig_dash_termios2192 = ( &temp1080 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno109 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( (  orig_dash_termios2192 ) ) ) ) );
    struct Termios_135  raw2193 = ( * (  orig_dash_termios2192 ) );
    raw2193 .f_c_dash_lflag = ( (  u32_dash_and762 ) ( ( (  raw2193 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg763 ) ( ( (  u32_dash_ors759 ) ( ( (  from_dash_listlike96 ) ( ( (struct Array_98) { ._arr = { ( (  echo110 ) ( ) ) , ( (  icanon111 ) ( ) ) , ( (  isig112 ) ( ) ) , ( ( (  iexten113 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_iflag = ( (  u32_dash_and762 ) ( ( (  raw2193 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg763 ) ( ( (  u32_dash_ors760 ) ( ( (  from_dash_listlike99 ) ( ( (struct Array_101) { ._arr = { ( (  brkint114 ) ( ) ) , ( (  icrnl115 ) ( ) ) , ( (  inpck116 ) ( ) ) , ( (  istrip117 ) ( ) ) , ( ( (  ixon118 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_oflag = ( (  u32_dash_and762 ) ( ( (  raw2193 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg763 ) ( ( (  u32_dash_ors761 ) ( ( (  from_dash_listlike102 ) ( ( (struct Array_104) { ._arr = { ( ( (  opost119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_cflag = ( (  u32_dash_or758 ) ( ( (  raw2193 ) .f_c_dash_cflag ) ,  ( (  cs8120 ) ( ) ) ) );
    ( (  set946 ) ( ( & ( (  raw2193 ) .f_c_dash_cc ) ) ,  ( (  vmin121 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set946 ) ( ( & ( (  raw2193 ) .f_c_dash_cc ) ) ,  ( (  vtime122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno109 ) ( ) ) ,  ( (  tcsa_dash_flush123 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( ( & (  raw2193 ) ) ) ) ) );
    return ( * (  orig_dash_termios2192 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1081 (    struct Termios_135 *  og_dash_termios2196 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno109 ) ( ) ) ,  ( (  tcsa_dash_flush123 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( (  og_dash_termios2196 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1082 (    int32_t  timeout_dash_ms2200 ) {
    struct Pollfd_216  pfd2201 = ( (struct Pollfd_216) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp74 ( ( ( poll ) ( ( (  cast_dash_ptr215 ) ( ( & (  pfd2201 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2200 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2202 = ( ( (  zeroed226 ) ( ) ) );
    if ( (  cmp74 ( ( ( read ) ( ( (  stdin_dash_fileno109 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( ( & (  c2202 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2202 ) ) );
}

static  enum Unit_13   flush_dash_stdout1083 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr258 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1084 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1085 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1087 {
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2206;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env1088 {
    bool *  should_dash_resize2206;
};

struct funenv1088 {
    enum Unit_13  (*fun) (  struct env1088  ,    int32_t  );
    struct env1088 env;
};

struct funenv1088  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1089 ) {
    struct funenv1088  temp1090 = _intr_sigarr [  __intr__sig1089 ];
    temp1090.fun ( temp1090.env ,  __intr__sig1089 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1091 ,   struct funenv1088  __intr__fun1092 ) {
    _intr_sigarr [  __intr__sig1091 ] =  __intr__fun1092;
    signal(  __intr__sig1091 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1088 (   struct env1088 env ,    int32_t  dref2213 ) {
    (* env.should_dash_resize2206 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_635   mk1087 (   struct env1087 env ) {
    struct Termios_135  og_dash_termios2208 = ( (  enable_dash_raw_dash_mode1079 ) ( ) );
    ( (  hide_dash_cursor1005 ) ( ) );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  clear_dash_screen1019 ) ( ) );
    ( (  enable_dash_mouse1084 ) ( ) );
    ( (  flush_dash_stdout1083 ) ( ) );
    enum ColorPalette_636  palette2209 = ( (  query_dash_palette1013 ) ( ) );
    struct Tuple2_1009  dims2210 = ( (  get_dash_dimensions1008 ) ( ) );
    uint32_t  fps2211 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2212 = ( (  now1070 ) ( ) );
    struct env1088 envinst1088 = {
        .should_dash_resize2206 = env.should_dash_resize2206 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1088){ .fun = lam1088, .env = envinst1088 } ) ) );
    return ( (struct Tui_635) { .f_width = ( (  fst1050 ) ( (  dims2210 ) ) ) , .f_height = ( (  snd1051 ) ( (  dims2210 ) ) ) , .f_target_dash_fps = (  fps2211 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2212 ) , .f_fps_dash_ts = (  last_dash_sync2212 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2208 ) , .f_palette = (  palette2209 ) } );
}

static  enum Unit_13   sync1093 (    struct Tui_635 *  tui2216 ) {
    if ( (  eq42 ( ( ( * (  tui2216 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2217 = (  op_dash_div79 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size271 ) ( ( ( * (  tui2216 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1094 = ( (  undefined132 ) ( ) );
    struct timespec *  now2218 = ( &temp1094 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic105 ) ( ) ) ,  (  now2218 ) ) );
    int64_t  elapsed_dash_ns2219 = (  op_dash_add77 ( (  op_dash_mul32 ( (  op_dash_sub78 ( ( ( * (  now2218 ) ) .tv_sec ) , ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub78 ( ( ( * (  now2218 ) ) .tv_nsec ) , ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2220 = (  op_dash_sub78 ( (  frame_dash_ns2217 ) , (  elapsed_dash_ns2219 ) ) );
    if ( (  cmp73 ( (  sleep_dash_ns2220 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1095 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2220 ) } );
        struct timespec *  ts2221 = ( &temp1095 );
        ( ( nanosleep ) ( (  ts2221 ) ,  ( (  null_dash_ptr260 ) ( ) ) ) );
    }
    struct timespec  temp1096 = ( (  undefined132 ) ( ) );
    struct timespec *  last_dash_sync2222 = ( &temp1096 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic105 ) ( ) ) ,  (  last_dash_sync2222 ) ) );
    (*  tui2216 ) .f_last_dash_sync = ( * (  last_dash_sync2222 ) );
    (*  tui2216 ) .f_fps_dash_count = (  op_dash_add86 ( ( ( * (  tui2216 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2223 = (  op_dash_add77 ( (  op_dash_mul32 ( (  op_dash_sub78 ( ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2216 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div79 ( (  op_dash_sub78 ( ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2216 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp73 ( (  fps_dash_elapsed_dash_ms2223 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2216 ) .f_actual_dash_fps = ( ( * (  tui2216 ) ) .f_fps_dash_count );
        (*  tui2216 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2216 ) .f_fps_dash_ts = ( ( * (  tui2216 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1097 (    struct Tui_635 *  tui2226 ) {
    ( (  disable_dash_mouse1085 ) ( ) );
    ( (  show_dash_cursor1004 ) ( ) );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  clear_dash_screen1019 ) ( ) );
    ( (  reset_dash_cursor_dash_position1007 ) ( ) );
    ( (  disable_dash_raw_dash_mode1081 ) ( ( & ( ( * (  tui2226 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1083 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_143   btn_dash_to_dash_mouse_dash_button1098 (    int64_t  btn2233 ) {
    return ( {  int32_t  dref2234 = ( (  i64_dash_i32268 ) ( (  btn2233 ) ) ) ;  dref2234 == 0 ? ( MouseButton_143_MouseLeft ) :  dref2234 == 1 ? ( MouseButton_143_MouseMiddle ) :  dref2234 == 2 ? ( MouseButton_143_MouseRight ) :  dref2234 == 64 ? ( MouseButton_143_ScrollUp ) :  dref2234 == 65 ? ( MouseButton_143_ScrollDown ) : ( (  panic_prime_904 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1100 {
    enum {
        Maybe_1100_None_t,
        Maybe_1100_Just_t,
    } tag;
    union {
        struct {
            struct Key_540  field0;
        } Maybe_1100_Just_s;
    } stuff;
};

static struct Maybe_1100 Maybe_1100_Just (  struct Key_540  field0 ) {
    return ( struct Maybe_1100 ) { .tag = Maybe_1100_Just_t, .stuff = { .Maybe_1100_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1100   parse_dash_ss31099 (    char  c2237 ) {
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1100_Just ) ( ( (struct Key_540) { .tag = Key_540_F4_t } ) ) );
    }
    return ( (struct Maybe_1100) { .tag = Maybe_1100_None_t } );
}

static  struct Maybe_538   parse_dash_csi1101 (    struct DynStr_130  seq2240 ) {
    if ( (  eq45 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
    }
    char  last2241 = (  elem_dash_get931 ( ( (  seq2240 ) .f_contents ) , (  op_dash_sub93 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get931 ( ( (  seq2240 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_277  temp1102 = ( (  mk1077 ) ( ( (  substr327 ) ( (  seq2240 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2240 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_277 *  sc2242 = ( &temp1102 );
        struct Maybe_701  dref2243 = ( (  scan_dash_int1078 ) ( (  sc2242 ) ) );
        if ( dref2243.tag == Maybe_701_None_t ) {
            return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
        }
        else if ( dref2243.tag == Maybe_701_Just_t ) {
            ( (  next513 ) ( (  sc2242 ) ) );
            struct Maybe_701  dref2245 = ( (  scan_dash_int1078 ) ( (  sc2242 ) ) );
            if ( dref2245.tag == Maybe_701_None_t ) {
                return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
            }
            else if ( dref2245.tag == Maybe_701_Just_t ) {
                ( (  next513 ) ( (  sc2242 ) ) );
                struct Maybe_701  dref2247 = ( (  scan_dash_int1078 ) ( (  sc2242 ) ) );
                if ( dref2247.tag == Maybe_701_None_t ) {
                    return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
                }
                else if ( dref2247.tag == Maybe_701_Just_t ) {
                    return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Mouse ) ( ( (struct MouseEvent_541) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1098 ) ( ( dref2243 .stuff .Maybe_701_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub82 ( ( (  i64_dash_i32268 ) ( ( dref2245 .stuff .Maybe_701_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub82 ( ( (  i64_dash_i32268 ) ( ( dref2247 .stuff .Maybe_701_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
    }
    if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_277  temp1103 = ( (  mk1077 ) ( (  seq2240 ) ) );
        struct Scanner_277 *  sc2249 = ( &temp1103 );
        struct Maybe_701  dref2250 = ( (  scan_dash_int1078 ) ( (  sc2249 ) ) );
        if ( dref2250.tag == Maybe_701_None_t ) {
            return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
        }
        else if ( dref2250.tag == Maybe_701_Just_t ) {
            return ( {  int32_t  dref2252 = ( (  i64_dash_i32268 ) ( ( dref2250 .stuff .Maybe_701_Just_s .field0 ) ) ) ;  dref2252 == 1 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Home_t } ) ) ) ) ) :  dref2252 == 2 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Insert_t } ) ) ) ) ) :  dref2252 == 3 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Delete_t } ) ) ) ) ) :  dref2252 == 4 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_End_t } ) ) ) ) ) :  dref2252 == 5 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_PageUp_t } ) ) ) ) ) :  dref2252 == 6 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_PageDown_t } ) ) ) ) ) :  dref2252 == 15 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F5_t } ) ) ) ) ) :  dref2252 == 17 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F6_t } ) ) ) ) ) :  dref2252 == 18 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F7_t } ) ) ) ) ) :  dref2252 == 19 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F8_t } ) ) ) ) ) :  dref2252 == 20 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F9_t } ) ) ) ) ) :  dref2252 == 21 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F10_t } ) ) ) ) ) :  dref2252 == 23 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F11_t } ) ) ) ) ) :  dref2252 == 24 ? ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_F12_t } ) ) ) ) ) : ( (struct Maybe_538) { .tag = Maybe_538_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
}

static  struct Maybe_538   read_dash_key1104 (  ) {
    char  temp1105 = ( (  undefined127 ) ( ) );
    char *  ch2254 = ( &temp1105 );
    struct Maybe_49  dref2255 = ( (  read_dash_byte1082 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2255.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
    }
    else if ( dref2255.tag == Maybe_49_Just_t ) {
        (*  ch2254 ) = ( dref2255 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp76 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2257 = ( (  i32_dash_char894 ) ( ( (  u32_dash_i32273 ) ( ( (  u32_dash_or758 ) ( ( (  i32_dash_u32265 ) ( ( (  char_dash_i32892 ) ( ( * (  ch2254 ) ) ) ) ) ) ,  ( (  from_dash_hex1000 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( ( Key_540_Ctrl ) ( (  letter2257 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp76 ( ( (  char_dash_u8893 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1104 ) ( ) );
        } else {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( ( Key_540_Char ) ( ( * (  ch2254 ) ) ) ) ) ) ) );
        }
    }
    char  temp1106 = ( (  undefined127 ) ( ) );
    char *  ch22258 = ( &temp1106 );
    struct Maybe_49  dref2259 = ( (  read_dash_byte1082 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2259.tag == Maybe_49_None_t ) {
        return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Escape_t } ) ) ) ) );
    }
    else if ( dref2259.tag == Maybe_49_Just_t ) {
        (*  ch22258 ) = ( dref2259 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22258 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_180  temp1107 = ( ( (  zeroed238 ) ( ) ) );
        struct Array_180 *  seq2261 = ( &temp1107 );
        int32_t  slen2262 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp74 ( (  slen2262 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1108 = ( (  undefined127 ) ( ) );
            char *  sc2263 = ( &temp1108 );
            struct Maybe_49  dref2264 = ( (  read_dash_byte1082 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2264.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2264.tag == Maybe_49_Just_t ) {
                (*  sc2263 ) = ( dref2264 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set947 ) ( (  seq2261 ) ,  ( (  i32_dash_size267 ) ( (  slen2262 ) ) ) ,  ( * (  sc2263 ) ) ) );
            slen2262 = (  op_dash_add81 ( (  slen2262 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp76 ( ( (  char_dash_u8893 ) ( ( * (  sc2263 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp76 ( ( (  char_dash_u8893 ) ( ( * (  sc2263 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1101 ) ( ( (struct DynStr_130) { .f_contents = ( (  subslice283 ) ( ( (  as_dash_slice948 ) ( (  seq2261 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size267 ) ( (  slen2262 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22258 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1109 = ( (  undefined127 ) ( ) );
        char *  sc2266 = ( &temp1109 );
        struct Maybe_49  dref2267 = ( (  read_dash_byte1082 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2267.tag == Maybe_49_None_t ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Escape_t } ) ) ) ) );
        }
        else if ( dref2267.tag == Maybe_49_Just_t ) {
            (*  sc2266 ) = ( dref2267 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1100  dref2269 = ( (  parse_dash_ss31099 ) ( ( * (  sc2266 ) ) ) );
        if ( dref2269.tag == Maybe_1100_None_t ) {
            return ( (struct Maybe_538) { .tag = Maybe_538_None_t } );
        }
        else if ( dref2269.tag == Maybe_1100_Just_t ) {
            return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( dref2269 .stuff .Maybe_1100_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_538_Just ) ( ( ( InputEvent_539_Key ) ( ( (struct Key_540) { .tag = Key_540_Escape_t } ) ) ) ) );
}

struct env1110 {
    ;
    ;
    bool *  should_dash_resize2206;
    ;
};

static  bool   update_dash_dimensions1110 (   struct env1110 env ,    struct Tui_635 *  tui2273 ) {
    if ( ( ! ( * ( env.should_dash_resize2206 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2206 ) = ( false );
    struct Tuple2_1009  dim2274 = ( (  get_dash_dimensions1008 ) ( ) );
    uint32_t  w2275 = ( (  fst1050 ) ( (  dim2274 ) ) );
    uint32_t  h2276 = ( (  snd1051 ) ( (  dim2274 ) ) );
    (*  tui2273 ) .f_width = (  w2275 );
    (*  tui2273 ) .f_height = (  h2276 );
    return ( true );
}

static  struct Cell_52   lam1112 (    struct Cell_52  dref2294 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  struct Cell_52   lam1113 (    struct Cell_52  dref2296 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  struct Screen_634   mk_dash_screen1111 (    struct Tui_635 *  tui2290 ,    enum CAllocator_4  al2292 ) {
    struct Slice_570  cur2293 = ( (  allocate938 ) ( (  al2292 ) ,  ( (  u32_dash_size271 ) ( (  op_dash_mul88 ( ( ( * (  tui2290 ) ) .f_width ) , ( ( * (  tui2290 ) ) .f_height ) ) ) ) ) ) );
    ( (  map933 ) ( (  cur2293 ) ,  (  lam1112 ) ) );
    struct Slice_570  prev2295 = ( (  allocate938 ) ( (  al2292 ) ,  ( (  u32_dash_size271 ) ( (  op_dash_mul88 ( ( ( * (  tui2290 ) ) .f_width ) , ( ( * (  tui2290 ) ) .f_height ) ) ) ) ) ) );
    ( (  map932 ) ( (  prev2295 ) ,  (  lam1113 ) ) );
    return ( (struct Screen_634) { .f_current = (  cur2293 ) , .f_previous = (  prev2295 ) , .f_al = (  al2292 ) , .f_tui = (  tui2290 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1114 (    struct Screen_634 *  screen2299 ) {
    enum CAllocator_4  al2300 = ( ( * (  screen2299 ) ) .f_al );
    ( (  free943 ) ( (  al2300 ) ,  ( ( * (  screen2299 ) ) .f_current ) ) );
    ( (  free943 ) ( (  al2300 ) ,  ( ( * (  screen2299 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_52   lam1116 (    struct Cell_52  dref2304 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1115 (    struct Screen_634 *  screen2303 ) {
    ( (  map934 ) ( ( ( * (  screen2303 ) ) .f_current ) ,  (  lam1116 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1118 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_53  f_fg;
    struct Color_53  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1117 (    struct RenderState_1118 *  rs2308 ,    struct Cell_52 *  c2310 ,    uint32_t  x2312 ,    uint32_t  y2314 ) {
    if ( ( ( !  eq42 ( (  x2312 ) , ( ( * (  rs2308 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2314 ) , ( ( * (  rs2308 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1006 ) ( (  x2312 ) ,  (  y2314 ) ) );
        (*  rs2308 ) .f_x = (  x2312 );
        (*  rs2308 ) .f_y = (  y2314 );
    }
    char  char2315 = ( ( * (  c2310 ) ) .f_c );
    struct Color_53  bg2316 = ( ( * (  c2310 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2315 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2315 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2315 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2315 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2316 = ( ( Color_53_Color8 ) ( ( Color8_54_Red8 ) ) );
    }
    if ( ( !  eq58 ( ( ( * (  rs2308 ) ) .f_fg ) , ( ( * (  c2310 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1024 ) ( ( ( * (  c2310 ) ) .f_fg ) ) );
        (*  rs2308 ) .f_fg = ( ( * (  c2310 ) ) .f_fg );
    }
    if ( ( !  eq58 ( ( ( * (  rs2308 ) ) .f_bg ) , (  bg2316 ) ) ) ) {
        ( (  set_dash_bg1025 ) ( (  bg2316 ) ) );
        (*  rs2308 ) .f_bg = (  bg2316 );
    }
    ( (  print_dash_str28 ) ( (  char2315 ) ) );
    (*  rs2308 ) .f_x = (  op_dash_add86 ( ( ( * (  rs2308 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1119 (    struct Screen_634 *  screen2319 ) {
    int32_t  w2320 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2319 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2321 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2319 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1118  temp1120 = ( (struct RenderState_1118) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1118 *  rs2322 = ( &temp1120 );
    ( (  move_dash_cursor_dash_to1006 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_382  temp1121 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  h2321 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_333  __cond1122 =  next383 (&temp1121);
        if (  __cond1122 .tag == 0 ) {
            break;
        }
        int32_t  y2324 =  __cond1122 .stuff .Maybe_333_Just_s .field0;
        struct RangeIter_382  temp1123 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  w2320 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_333  __cond1124 =  next383 (&temp1123);
            if (  __cond1124 .tag == 0 ) {
                break;
            }
            int32_t  x2326 =  __cond1124 .stuff .Maybe_333_Just_s .field0;
            size_t  i2327 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2324 ) , (  w2320 ) ) ) , (  x2326 ) ) ) ) );
            struct Cell_52 *  cur2328 = ( (  get_dash_ptr917 ) ( ( ( * (  screen2319 ) ) .f_current ) ,  (  i2327 ) ) );
            struct Cell_52 *  prev2329 = ( (  get_dash_ptr917 ) ( ( ( * (  screen2319 ) ) .f_previous ) ,  (  i2327 ) ) );
            if ( ( ( !  eq51 ( (  cur2328 ) , (  prev2329 ) ) ) || ( ( * (  screen2319 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2322 ) .f_changes = (  op_dash_add86 ( ( ( * (  rs2322 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1117 ) ( (  rs2322 ) ,  (  cur2328 ) ,  ( (  i32_dash_u32265 ) ( (  x2326 ) ) ) ,  ( (  i32_dash_u32265 ) ( (  y2324 ) ) ) ) );
                (*  prev2329 ) = ( * (  cur2328 ) );
            }
        }
    }
    (*  screen2319 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  flush_dash_stdout1083 ) ( ) );
    return ( ( * (  rs2322 ) ) .f_changes );
}

struct funenv1110 {
    bool  (*fun) (  struct env1110  ,    struct Tui_635 *  );
    struct env1110 env;
};

struct env1125 {
    ;
    ;
    ;
    ;
    ;
    struct env1110 envinst1110;
};

static  bool   resize_dash_screen_dash_if_dash_needed1125 (   struct env1125 env ,    struct Screen_634 *  screen2332 ) {
    struct Tui_635 *  tui2333 = ( ( * (  screen2332 ) ) .f_tui );
    struct funenv1110  temp1126 = ( (struct funenv1110){ .fun = update_dash_dimensions1110, .env =  env.envinst1110  } );
    if ( ( ! ( temp1126.fun ( temp1126.env ,  (  tui2333 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2332 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2334 = ( ( * ( ( * (  screen2332 ) ) .f_tui ) ) .f_width );
    uint32_t  h2335 = ( ( * ( ( * (  screen2332 ) ) .f_tui ) ) .f_height );
    size_t  nusz2336 = ( (  u32_dash_size271 ) ( (  op_dash_mul88 ( (  w2334 ) , (  h2335 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2336 ) , ( ( ( * (  screen2332 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_634  nuscreen2337 = ( (  mk_dash_screen1111 ) ( (  tui2333 ) ,  ( ( * (  screen2332 ) ) .f_al ) ) );
    (*  screen2332 ) .f_current = ( (  nuscreen2337 ) .f_current );
    (*  screen2332 ) .f_previous = ( (  nuscreen2337 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1127 (    struct Screen_634 *  screen2340 ,    struct Color_53  c2342 ) {
    (*  screen2340 ) .f_default_dash_fg = (  c2342 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1128 (    struct Screen_634 *  screen2345 ,    struct Color_53  c2347 ) {
    (*  screen2345 ) .f_default_dash_bg = (  c2347 );
    return ( Unit_13_Unit );
}

static  struct Maybe_913   get_dash_cell_dash_ptr1129 (    struct Screen_634 *  screen2354 ,    int32_t  x2356 ,    int32_t  y2358 ) {
    int32_t  w2359 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2354 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp74 ( (  x2356 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp74 ( (  x2356 ) , (  w2359 ) ) != 0 ) ) ) {
        return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    }
    if ( ( (  cmp74 ( (  y2358 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp74 ( (  y2358 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2354 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_913) { .tag = Maybe_913_None_t } );
    }
    size_t  i2360 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2358 ) , (  w2359 ) ) ) , (  x2356 ) ) ) ) );
    return ( ( Maybe_913_Just ) ( ( (  get_dash_ptr917 ) ( ( ( * (  screen2354 ) ) .f_current ) ,  (  i2360 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1130 (    struct Screen_634 *  screen2363 ) {
    struct RangeIter_382  temp1131 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2363 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_333  __cond1132 =  next383 (&temp1131);
        if (  __cond1132 .tag == 0 ) {
            break;
        }
        int32_t  y2365 =  __cond1132 .stuff .Maybe_333_Just_s .field0;
        struct RangeIter_382  temp1133 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2363 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_333  __cond1134 =  next383 (&temp1133);
            if (  __cond1134 .tag == 0 ) {
                break;
            }
            int32_t  x2367 =  __cond1134 .stuff .Maybe_333_Just_s .field0;
            struct Cell_52 *  cell2368 = ( (  or_dash_fail912 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2363 ) ,  (  x2367 ) ,  (  y2365 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2368 ) .f_bg = ( ( * (  screen2363 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1135 (    struct Screen_634 *  screen2371 ,    char  c2373 ,    int32_t  x2375 ,    int32_t  y2377 ) {
    int32_t  w2378 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp74 ( (  x2375 ) , (  w2378 ) ) != 0 ) || (  cmp74 ( (  y2377 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2379 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2377 ) , (  w2378 ) ) ) , (  x2375 ) ) ) ) );
    struct Color_53  fg2380 = ( ( * (  screen2371 ) ) .f_default_dash_fg );
    struct Color_53  bg2381 = ( ( * (  screen2371 ) ) .f_default_dash_bg );
    char  c2382 = (  c2373 );
    ( (  set925 ) ( ( ( * (  screen2371 ) ) .f_current ) ,  (  i2379 ) ,  ( (struct Cell_52) { .f_c = (  c2382 ) , .f_fg = (  fg2380 ) , .f_bg = (  bg2381 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam633 (   struct env633 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1136 (    struct Screen_634 *  screen2385 ,    int32_t  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env633 envinst633 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each632 ) ( ( (  zip482 ) ( ( (  chars773 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv633){ .fun = lam633, .env = envinst633 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam640 (   struct env640 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1137 (    struct Screen_634 *  screen2385 ,    struct StrConcat_779  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env640 envinst640 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each639 ) ( ( (  zip485 ) ( ( (  chars879 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv640){ .fun = lam640, .env = envinst640 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam644 (   struct env644 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1138 (    struct Screen_634 *  screen2385 ,    struct StrConcat_795  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env644 envinst644 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each643 ) ( ( (  zip487 ) ( ( (  chars880 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv644){ .fun = lam644, .env = envinst644 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam648 (   struct env648 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1139 (    struct Screen_634 *  screen2385 ,    struct StrConcat_797  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env648 envinst648 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each647 ) ( ( (  zip489 ) ( ( (  chars881 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv648){ .fun = lam648, .env = envinst648 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam652 (   struct env652 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1140 (    struct Screen_634 *  screen2385 ,    struct StrConcat_823  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env652 envinst652 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each651 ) ( ( (  zip491 ) ( ( (  chars882 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv652){ .fun = lam652, .env = envinst652 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam656 (   struct env656 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1141 (    struct Screen_634 *  screen2385 ,    struct StrConcat_17  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env656 envinst656 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each655 ) ( ( (  zip493 ) ( ( (  chars883 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv656){ .fun = lam656, .env = envinst656 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam660 (   struct env660 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1142 (    struct Screen_634 *  screen2385 ,    struct StrConcat_825  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env660 envinst660 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each659 ) ( ( (  zip495 ) ( ( (  chars828 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv660){ .fun = lam660, .env = envinst660 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam664 (   struct env664 env ,    struct Tuple2_358  dref2398 ) {
    ( (  set925 ) ( ( ( * ( env.screen2385 ) ) .f_current ) ,  (  op_dash_add92 ( ( env.i2393 ) , ( (  i32_dash_size267 ) ( ( dref2398 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2398 .field0 ) , .f_fg = ( env.fg2396 ) , .f_bg = ( env.bg2397 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1143 (    struct Screen_634 *  screen2385 ,    struct StrConcat_832  s2387 ,    int32_t  x2389 ,    int32_t  y2391 ) {
    if ( (  cmp74 ( (  y2391 ) , ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2392 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2385 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2393 = ( (  i32_dash_size267 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2391 ) , (  w2392 ) ) ) , (  x2389 ) ) ) ) );
    int32_t  x2394 = ( (  min765 ) ( (  x2389 ) ,  (  w2392 ) ) );
    size_t  max_dash_len2395 = ( (  i32_dash_size267 ) ( (  op_dash_sub82 ( (  w2392 ) , (  x2394 ) ) ) ) );
    struct Color_53  fg2396 = ( ( * (  screen2385 ) ) .f_default_dash_fg );
    struct Color_53  bg2397 = ( ( * (  screen2385 ) ) .f_default_dash_bg );
    struct env664 envinst664 = {
        .i2393 =  i2393 ,
        .bg2397 =  bg2397 ,
        .screen2385 =  screen2385 ,
        .fg2396 =  fg2396 ,
    };
    ( (  for_dash_each663 ) ( ( (  zip497 ) ( ( (  chars884 ) ( (  s2387 ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv664){ .fun = lam664, .env = envinst664 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1144 (    struct Screen_634 *  screen2403 ,    int32_t  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count731 ) ( ( (  chars773 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1136 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1145 (    struct Screen_634 *  screen2403 ,    struct StrConcat_779  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count733 ) ( ( (  chars879 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1137 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1146 (    struct Screen_634 *  screen2403 ,    struct StrConcat_795  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count735 ) ( ( (  chars880 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1138 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1147 (    struct Screen_634 *  screen2403 ,    struct StrConcat_797  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count737 ) ( ( (  chars881 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1139 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1148 (    struct Screen_634 *  screen2403 ,    struct StrConcat_823  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count739 ) ( ( (  chars882 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1140 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1149 (    struct Screen_634 *  screen2403 ,    struct StrConcat_17  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count741 ) ( ( (  chars883 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1141 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1150 (    struct Screen_634 *  screen2403 ,    struct StrConcat_825  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count743 ) ( ( (  chars828 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1142 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1151 (    struct Screen_634 *  screen2403 ,    struct StrConcat_832  s2405 ,    int32_t  x2407 ,    int32_t  y2409 ) {
    int32_t  slen2410 = ( (  size_dash_i32269 ) ( ( (  count745 ) ( ( (  chars884 ) ( (  s2405 ) ) ) ) ) ) );
    int32_t  w2411 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2403 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2412 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2411 ) , (  x2407 ) ) ) , (  slen2410 ) ) );
    ( (  draw_dash_str1143 ) ( (  screen2403 ) ,  (  s2405 ) ,  (  x2412 ) ,  (  y2409 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_320   try_dash_read_dash_contents1152 (    const char*  filename2573 ,    enum CAllocator_4  al2575 ) {
    FILE *  file2576 = ( ( fopen ) ( (  filename2573 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null261 ) ( (  file2576 ) ) ) ) {
        return ( (struct Maybe_320) { .tag = Maybe_320_None_t } );
    }
    ( ( fseek ) ( (  file2576 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end107 ) ( ) ) ) );
    int32_t  file_dash_size2577 = ( ( ftell ) ( (  file2576 ) ) );
    ( ( fseek ) ( (  file2576 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set106 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2578 = ( ( (  allocate937 ) ( (  al2575 ) ,  (  op_dash_add92 ( ( (  i32_dash_size267 ) ( (  file_dash_size2577 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2578 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2577 ) ,  (  file2576 ) ) );
    ( (  set924 ) ( (  file_dash_buf2578 ) ,  ( (  i32_dash_size267 ) ( (  file_dash_size2577 ) ) ) ,  ( (  nullchar325 ) ( ) ) ) );
    ( ( fclose ) ( (  file2576 ) ) );
    struct DynStr_130  str2579 = ( (struct DynStr_130) { .f_contents = (  file_dash_buf2578 ) } );
    return ( ( Maybe_320_Just ) ( (  str2579 ) ) );
}

static  struct DynStr_130   read_dash_contents1153 (    const char*  filename2582 ,    enum CAllocator_4  al2584 ) {
    return ( (  or_dash_fail907 ) ( ( (  try_dash_read_dash_contents1152 ) ( (  filename2582 ) ,  (  al2584 ) ) ) ,  ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "could not open file " ) ,  (  filename2582 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1154 (    const char*  filename2587 ,    struct DynStr_130  contents2589 ) {
    FILE *  file2590 = ( ( fopen ) ( (  filename2587 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null261 ) ( (  file2590 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_278  it2591 = ( (  chars793 ) ( (  contents2589 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref2592 = ( (  next335 ) ( ( & (  it2591 ) ) ) );
        if ( dref2592.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file2590 ) ) );
            return ( true );
        }
        else if ( dref2592.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written2594 = ( ( fprintf ) ( (  file2590 ) ,  ( "%c" ) ,  ( dref2592 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp74 ( (  chars_dash_written2594 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable897 ) ( ) );
}

static  enum Unit_13   write_dash_contents1155 (    const char*  filename2597 ,    struct DynStr_130  contents2599 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1154 ) ( (  filename2597 ) ,  (  contents2599 ) ) ) ) ) {
        ( (  panic903 ) ( ( ( StrConcat_838_StrConcat ) ( ( "could not write to file " ) ,  (  filename2597 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_919   get1156 (  ) {
    return ( (struct Slice_919) { .f_ptr = ( (  offset_dash_ptr151 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub93 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len317 (   struct env317 env ,    char  c2416 ) {
    if ( (  eq47 ( (  c2416 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2413 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1157 (    struct Cursor_1057  l2420 ,    struct Cursor_1057  r2422 ) {
    return ( (  eq41 ( ( (  l2420 ) .f_x ) , ( (  r2422 ) .f_x ) ) ) && (  eq41 ( ( (  l2420 ) .f_y ) , ( (  r2422 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1158 (    struct Visual_1058  dref2425 ) {
    return ( dref2425 .field0 );
}

static  struct List_3 *   get_dash_row1159 (    struct Editor_1056 *  ed2444 ,    int32_t  y2446 ) {
    return ( (  get_dash_ptr958 ) ( ( & ( ( * (  ed2444 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size267 ) ( (  y2446 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1160 (    struct Editor_1056 *  ed2449 ) {
    return ( (  get_dash_ptr958 ) ( ( & ( ( * (  ed2449 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * (  ed2449 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_502   indent_dash_on_dash_row1161 (    struct Editor_1056 *  ed2452 ,    int32_t  y2454 ) {
    return ( (  take_dash_while522 ) ( ( (  get_dash_row1159 ) ( (  ed2452 ) ,  (  y2454 ) ) ) ,  (  is_dash_whitespace949 ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1162 (    struct Editor_1056 *  ed2457 ) {
    return ( (  try_dash_get960 ) ( ( (  cursor_dash_row1160 ) ( (  ed2457 ) ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * (  ed2457 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1163 {
    ;
    ;
    struct env317 envinst317;
    ;
    ;
    ;
};

static  struct Visual_1058   x_dash_to_dash_visual_dash_x1163 (   struct env1163 env ,    struct Editor_1056 *  ed2460 ,    int32_t  x2462 ,    int32_t  y2464 ) {
    return ( ( Visual_1058_Visual ) ( ( (  sum747 ) ( ( (  map341 ) ( ( (  take378 ) ( ( (  get_dash_row1159 ) ( (  ed2460 ) ,  (  y2464 ) ) ) ,  ( (  i32_dash_size267 ) ( (  x2462 ) ) ) ) ) ,  ( (struct funenv317){ .fun = char_dash_len317, .env =  env.envinst317  } ) ) ) ) ) ) );
}

struct env1164 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env317 envinst317;
    ;
    ;
    ;
};

static  int32_t   visual_dash_x_dash_to_dash_x1164 (   struct env1164 env ,    struct Editor_1056 *  ed2467 ,    struct Visual_1058  dref2468 ,    int32_t  y2471 ) {
    int32_t  sum_dash_x2472 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2473 = ( (  get_dash_row1159 ) ( (  ed2467 ) ,  (  y2471 ) ) );
    struct RangeIter_382  temp1165 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32269 ) ( ( ( * (  chars2473 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_333  __cond1166 =  next383 (&temp1165);
        if (  __cond1166 .tag == 0 ) {
            break;
        }
        int32_t  x2475 =  __cond1166 .stuff .Maybe_333_Just_s .field0;
        struct funenv317  temp1167 = ( (struct funenv317){ .fun = char_dash_len317, .env =  env.envinst317  } );
        sum_dash_x2472 = (  op_dash_add81 ( (  sum_dash_x2472 ) , ( temp1167.fun ( temp1167.env ,  (  elem_dash_get2 ( (  chars2473 ) , ( (  i32_dash_size267 ) ( (  x2475 ) ) ) ) ) ) ) ) );
        if ( (  cmp74 ( ( dref2468 .field0 ) , (  sum_dash_x2472 ) ) == 0 ) ) {
            return (  x2475 );
        }
    }
    return ( (  size_dash_i32269 ) ( ( ( * (  chars2473 ) ) .f_count ) ) );
}

struct funenv1164 {
    int32_t  (*fun) (  struct env1164  ,    struct Editor_1056 *  ,    struct Visual_1058  ,    int32_t  );
    struct env1164 env;
};

struct funenv1163 {
    struct Visual_1058  (*fun) (  struct env1163  ,    struct Editor_1056 *  ,    int32_t  ,    int32_t  );
    struct env1163 env;
};

struct env1168 {
    ;
    ;
    ;
    struct env1164 envinst1164;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1163 envinst1163;
};

struct Dims_1169 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1168 (   struct env1168 env ,    struct Editor_1056 *  ed2479 ,    int32_t  x2481 ,    int32_t  y2483 ,    struct Dims_1169  dim2485 ) {
    struct Cursor_1057  cur2486 = ( ( * (  ed2479 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2487 = ( !  eq41 ( ( (  cur2486 ) .f_x ) , (  x2481 ) ) );
    int32_t  y2488 = ( (  clamp767 ) ( (  y2483 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32269 ) ( ( ( ( * (  ed2479 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2489 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp74 ( (  y2488 ) , (  op_dash_add81 ( ( ( * (  ed2479 ) ) .f_screen_dash_top ) , (  funny_dash_space2489 ) ) ) ) == 0 ) ) {
        (*  ed2479 ) .f_screen_dash_top = ( (  max766 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  y2488 ) , (  funny_dash_space2489 ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  y2488 ) , (  op_dash_sub82 ( (  op_dash_sub82 ( (  op_dash_add81 ( ( ( * (  ed2479 ) ) .f_screen_dash_top ) , ( (  dim2485 ) .f_rows ) ) ) , (  funny_dash_space2489 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2490 = (  op_dash_add81 ( (  op_dash_sub82 ( (  op_dash_add81 ( (  y2488 ) , (  funny_dash_space2489 ) ) ) , ( (  dim2485 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2479 ) .f_screen_dash_top = (  onscreen_dash_y2490 );
        } else {
        }
    }
    struct List_3 *  row2491 = ( (  get_dash_row1159 ) ( (  ed2479 ) ,  (  y2488 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2487 ) ) {
        int32_t  x2492 = ( (  clamp767 ) ( (  x2481 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32269 ) ( ( (  size998 ) ( (  row2491 ) ) ) ) ) ) );
        struct funenv1163  temp1170 = ( (struct funenv1163){ .fun = x_dash_to_dash_visual_dash_x1163, .env =  env.envinst1163  } );
        (*  ed2479 ) .f_goal_dash_x = ( temp1170.fun ( temp1170.env ,  (  ed2479 ) ,  (  x2492 ) ,  (  y2488 ) ) );
    }
    struct Visual_1058  vx2493 = ( ( * (  ed2479 ) ) .f_goal_dash_x );
    struct funenv1164  temp1171 = ( (struct funenv1164){ .fun = visual_dash_x_dash_to_dash_x1164, .env =  env.envinst1164  } );
    int32_t  x2494 = ( temp1171.fun ( temp1171.env ,  (  ed2479 ) ,  (  vx2493 ) ,  (  y2488 ) ) );
    int32_t  funny_dash_space2495 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp74 ( (  x2494 ) , (  op_dash_add81 ( ( ( * (  ed2479 ) ) .f_screen_dash_left ) , (  funny_dash_space2495 ) ) ) ) == 0 ) ) {
        (*  ed2479 ) .f_screen_dash_left = ( (  max766 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  x2494 ) , (  funny_dash_space2495 ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  x2494 ) , (  op_dash_sub82 ( (  op_dash_sub82 ( (  op_dash_add81 ( ( ( * (  ed2479 ) ) .f_screen_dash_left ) , ( (  dim2485 ) .f_cols ) ) ) , (  funny_dash_space2495 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2496 = (  op_dash_add81 ( (  op_dash_sub82 ( (  op_dash_add81 ( (  x2494 ) , (  funny_dash_space2495 ) ) ) , ( (  dim2485 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2479 ) .f_screen_dash_left = (  onscreen_dash_x2496 );
        } else {
        }
    }
    (*  ed2479 ) .f_cursor = ( (struct Cursor_1057) { .f_x = (  x2494 ) , .f_y = (  y2488 ) } );
    return ( Unit_13_Unit );
}

struct funenv1168 {
    enum Unit_13  (*fun) (  struct env1168  ,    struct Editor_1056 *  ,    int32_t  ,    int32_t  ,    struct Dims_1169  );
    struct env1168 env;
};

struct env1172 {
    struct env1168 envinst1168;
};

static  enum Unit_13   move_dash_to_dash_col1172 (   struct env1172 env ,    struct Editor_1056 *  ed2499 ,    int32_t  x2501 ,    struct Dims_1169  dim2503 ) {
    struct funenv1168  temp1173 = ( (struct funenv1168){ .fun = move_dash_to1168, .env =  env.envinst1168  } );
    ( temp1173.fun ( temp1173.env ,  (  ed2499 ) ,  (  x2501 ) ,  ( ( ( * (  ed2499 ) ) .f_cursor ) .f_y ) ,  (  dim2503 ) ) );
    return ( Unit_13_Unit );
}

struct env1174 {
    struct env1168 envinst1168;
};

static  enum Unit_13   move_dash_to_dash_row1174 (   struct env1174 env ,    struct Editor_1056 *  ed2506 ,    int32_t  y2508 ,    struct Dims_1169  dim2510 ) {
    struct funenv1168  temp1175 = ( (struct funenv1168){ .fun = move_dash_to1168, .env =  env.envinst1168  } );
    ( temp1175.fun ( temp1175.env ,  (  ed2506 ) ,  ( ( ( * (  ed2506 ) ) .f_cursor ) .f_x ) ,  (  y2508 ) ,  (  dim2510 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1172 {
    enum Unit_13  (*fun) (  struct env1172  ,    struct Editor_1056 *  ,    int32_t  ,    struct Dims_1169  );
    struct env1172 env;
};

struct funenv1174 {
    enum Unit_13  (*fun) (  struct env1174  ,    struct Editor_1056 *  ,    int32_t  ,    struct Dims_1169  );
    struct env1174 env;
};

struct env1176 {
    ;
    ;
    ;
    struct env1172 envinst1172;
    ;
    ;
    struct env1174 envinst1174;
    ;
    ;
};

static  bool   move_dash_left1176 (   struct env1176 env ,    struct Editor_1056 *  ed2513 ,    struct Dims_1169  dim2515 ) {
    struct Cursor_1057  cur2516 = ( ( * (  ed2513 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2513 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp74 ( ( ( ( * (  ed2513 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1174  temp1177 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  env.envinst1174  } );
            ( temp1177.fun ( temp1177.env ,  (  ed2513 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2513 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2515 ) ) );
            struct funenv1172  temp1178 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  env.envinst1172  } );
            ( temp1178.fun ( temp1178.env ,  (  ed2513 ) ,  ( (  size_dash_i32269 ) ( ( ( * ( (  cursor_dash_row1160 ) ( (  ed2513 ) ) ) ) .f_count ) ) ) ,  (  dim2515 ) ) );
        }
    } else {
        struct funenv1172  temp1179 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  env.envinst1172  } );
        ( temp1179.fun ( temp1179.env ,  (  ed2513 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2513 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2515 ) ) );
    }
    return ( !  eq1157 ( ( ( * (  ed2513 ) ) .f_cursor ) , (  cur2516 ) ) );
}

struct env1180 {
    ;
    ;
    ;
    struct env1172 envinst1172;
    ;
    ;
    ;
    struct env1168 envinst1168;
    ;
    ;
};

static  bool   move_dash_right1180 (   struct env1180 env ,    struct Editor_1056 *  ed2519 ,    struct Dims_1169  dims2521 ) {
    struct Cursor_1057  cur2522 = ( ( * (  ed2519 ) ) .f_cursor );
    int32_t  row_dash_len2523 = ( (  size_dash_i32269 ) ( ( ( * ( (  cursor_dash_row1160 ) ( (  ed2519 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2519 ) ) .f_cursor ) .f_x ) , (  row_dash_len2523 ) ) ) ) {
        if ( (  cmp74 ( ( ( ( * (  ed2519 ) ) .f_cursor ) .f_y ) , (  op_dash_sub82 ( ( (  size_dash_i32269 ) ( ( ( ( * (  ed2519 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1168  temp1181 = ( (struct funenv1168){ .fun = move_dash_to1168, .env =  env.envinst1168  } );
            ( temp1181.fun ( temp1181.env ,  (  ed2519 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add81 ( ( ( ( * (  ed2519 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2521 ) ) );
        }
    } else {
        struct funenv1172  temp1182 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  env.envinst1172  } );
        ( temp1182.fun ( temp1182.env ,  (  ed2519 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2519 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2521 ) ) );
    }
    return ( !  eq1157 ( ( ( * (  ed2519 ) ) .f_cursor ) , (  cur2522 ) ) );
}

struct env1183 {
    ;
    struct env1172 envinst1172;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1183 (   struct env1183 env ,    struct Editor_1056 *  ed2526 ,    struct Dims_1169  dims2528 ) {
    int32_t  off2529 = ( (  size_dash_i32269 ) ( ( (  count729 ) ( ( (  indent_dash_on_dash_row1161 ) ( (  ed2526 ) ,  ( ( ( * (  ed2526 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1172  temp1184 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  env.envinst1172  } );
    ( temp1184.fun ( temp1184.env ,  (  ed2526 ) ,  (  off2529 ) ,  (  dims2528 ) ) );
    return ( Unit_13_Unit );
}

struct env1185 {
    ;
    ;
    struct env1172 envinst1172;
    ;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1185 (   struct env1185 env ,    struct Editor_1056 *  ed2532 ,    struct Dims_1169  dims2534 ) {
    struct List_3 *  currow2535 = ( (  cursor_dash_row1160 ) ( (  ed2532 ) ) );
    struct funenv1172  temp1186 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  env.envinst1172  } );
    ( temp1186.fun ( temp1186.env ,  (  ed2532 ) ,  ( (  size_dash_i32269 ) ( ( (  size998 ) ( (  currow2535 ) ) ) ) ) ,  (  dims2534 ) ) );
    return ( Unit_13_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1187 (    struct Editor_1056 *  ed2541 ) {
    return (  eq41 ( ( ( ( * (  ed2541 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32269 ) ( ( (  size998 ) ( ( (  cursor_dash_row1160 ) ( (  ed2541 ) ) ) ) ) ) ) ) );
}

struct funenv983 {
    enum Unit_13  (*fun) (  struct env983  ,    struct List_3 *  ,    struct List_3 *  );
    struct env983 env;
};

struct funenv977 {
    enum Unit_13  (*fun) (  struct env977  ,    struct List_373 *  ,    size_t  );
    struct env977 env;
};

struct env1188 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env983 envinst983;
    ;
    ;
    ;
    ;
    ;
    struct env976 envinst976;
    struct env977 envinst977;
    ;
};

static  enum Unit_13   delete_dash_at_dash_current1188 (   struct env1188 env ,    struct Editor_1056 *  ed2544 ) {
    struct List_3 *  row2545 = ( (  cursor_dash_row1160 ) ( (  ed2544 ) ) );
    if ( (  cmp9 ( ( (  i32_dash_size267 ) ( ( ( ( * (  ed2544 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2545 ) ) .f_count ) ) == 0 ) ) {
        struct funenv976  temp1189 = ( (struct funenv976){ .fun = remove976, .env =  env.envinst976  } );
        ( temp1189.fun ( temp1189.env ,  ( (  cursor_dash_row1160 ) ( (  ed2544 ) ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * (  ed2544 ) ) .f_cursor ) .f_x ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  op_dash_add81 ( ( ( ( * (  ed2544 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32269 ) ( ( ( ( * (  ed2544 ) ) .f_current_dash_file ) .f_count ) ) ) ) == 0 ) ) {
            struct List_3 *  cur_dash_row2546 = ( (  cursor_dash_row1160 ) ( (  ed2544 ) ) );
            int32_t  next_dash_row_dash_id2547 = (  op_dash_add81 ( ( ( ( * (  ed2544 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct List_3 *  next_dash_row2548 = ( (  get_dash_row1159 ) ( (  ed2544 ) ,  (  next_dash_row_dash_id2547 ) ) );
            struct funenv983  temp1190 = ( (struct funenv983){ .fun = add_dash_all983, .env =  env.envinst983  } );
            ( temp1190.fun ( temp1190.env ,  (  cur_dash_row2546 ) ,  (  next_dash_row2548 ) ) );
            ( (  free966 ) ( (  next_dash_row2548 ) ) );
            struct funenv977  temp1191 = ( (struct funenv977){ .fun = remove977, .env =  env.envinst977  } );
            ( temp1191.fun ( temp1191.env ,  ( & ( ( * (  ed2544 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size267 ) ( (  next_dash_row_dash_id2547 ) ) ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct funenv970 {
    enum Unit_13  (*fun) (  struct env970  ,    struct List_373 *  ,    size_t  ,    struct List_3  );
    struct env970 env;
};

struct funenv985 {
    enum Unit_13  (*fun) (  struct env985  ,    struct List_3 *  ,    struct TakeWhile_502  );
    struct env985 env;
};

struct env1192 {
    ;
    ;
    ;
    struct env970 envinst970;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env985 envinst985;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1192 (   struct env1192 env ,    struct Editor_1056 *  ed2551 ,    int32_t  y2553 ,    enum CAllocator_4  al2555 ) {
    struct List_3  temp1193 = ( (  mk965 ) ( (  al2555 ) ) );
    struct List_3 *  nurow2556 = ( &temp1193 );
    struct TakeWhile_502  rowws2557 = ( (  indent_dash_on_dash_row1161 ) ( (  ed2551 ) ,  ( ( ( * (  ed2551 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2558 = ( (  size_dash_i32269 ) ( ( (  count729 ) ( (  rowws2557 ) ) ) ) );
    struct funenv985  temp1194 = ( (struct funenv985){ .fun = add_dash_all985, .env =  env.envinst985  } );
    ( temp1194.fun ( temp1194.env ,  (  nurow2556 ) ,  (  rowws2557 ) ) );
    struct funenv970  temp1195 = ( (struct funenv970){ .fun = insert970, .env =  env.envinst970  } );
    ( temp1195.fun ( temp1195.env ,  ( & ( ( * (  ed2551 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size267 ) ( (  y2553 ) ) ) ,  ( * (  nurow2556 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_word_dash_char1196 (    char  c2561 ) {
    return ( (  is_dash_not_dash_whitespace950 ) ( (  c2561 ) ) );
}

struct funenv992 {
    struct List_373  (*fun) (  struct env992  ,    struct Map_304  ,    enum CAllocator_4  );
    struct env992 env;
};

struct env1197 {
    ;
    ;
    struct env307 envinst307;
    struct env992 envinst992;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam306 (   struct env306 env ,    struct DynStr_130  line2601 ) {
    struct funenv307  temp1199 = ( (struct funenv307){ .fun = to_dash_list307, .env =  env.envinst307  } );
    return ( temp1199.fun ( temp1199.env ,  (  line2601 ) ,  ( env.al2570 ) ) );
}

static  struct List_373   load_dash_file1197 (   struct env1197 env ,    const char*  filename2568 ,    enum CAllocator_4  al2570 ) {
    struct funenv992  temp1198 = ( (struct funenv992){ .fun = to_dash_list992, .env =  env.envinst992  } );
    struct env306 envinst306 = {
        .al2570 =  al2570 ,
        .envinst307 = env.envinst307 ,
    };
    return ( temp1198.fun ( temp1198.env ,  ( (  map337 ) ( ( (  lines951 ) ( ( (  read_dash_contents1153 ) ( (  filename2568 ) ,  (  al2570 ) ) ) ) ) ,  ( (struct funenv306){ .fun = lam306, .env = envinst306 } ) ) ) ,  (  al2570 ) ) );
}

struct env1200 {
    ;
    ;
    struct env625 envinst625;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al2565;
    ;
    ;
};

static  enum Unit_13   lam624 (   struct env624 env ,    char  c2611 ) {
    struct funenv625  temp1204 = ( (struct funenv625){ .fun = write_dash_char625, .env =  env.envinst625  } );
    return ( temp1204.fun ( temp1204.env ,  ( env.sb2607 ) ,  (  c2611 ) ) );
}

static  enum Unit_13   save_dash_file1200 (   struct env1200 env ,    struct List_373  cf2604 ,    const char*  filename2606 ) {
    struct StrBuilder_564  temp1201 = ( (  mk1036 ) ( ( env.al2565 ) ) );
    struct StrBuilder_564 *  sb2607 = ( &temp1201 );
    struct SliceIter_350  temp1202 =  into_dash_iter374 ( (  cf2604 ) );
    while (true) {
        struct Maybe_319  __cond1203 =  next365 (&temp1202);
        if (  __cond1203 .tag == 0 ) {
            break;
        }
        struct List_3  row2609 =  __cond1203 .stuff .Maybe_319_Just_s .field0;
        struct env624 envinst624 = {
            .envinst625 = env.envinst625 ,
            .sb2607 =  sb2607 ,
        };
        ( (  for_dash_each623 ) ( (  row2609 ) ,  ( (struct funenv624){ .fun = lam624, .env = envinst624 } ) ) );
        struct funenv625  temp1205 = ( (struct funenv625){ .fun = write_dash_char625, .env =  env.envinst625  } );
        ( temp1205.fun ( temp1205.env ,  (  sb2607 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1155 ) ( (  filename2606 ) ,  ( (  as_dash_str786 ) ( (  sb2607 ) ) ) ) );
    ( (  free1037 ) ( (  sb2607 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1206 (    struct List_373  cf2614 ) {
    ( (  for_dash_each609 ) ( ( (  addresses997 ) ( (  cf2614 ) ) ) ,  (  free966 ) ) );
    ( (  free967 ) ( ( & (  cf2614 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1207 {
    int32_t  pad2615;
    ;
    ;
    ;
    ;
};

struct anon_1208 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1208   left_dash_offset1207 (   struct env1207 env ,    struct Editor_1056 *  ed2618 ) {
    int32_t  max_dash_digits2619 = ( (  max766 ) ( ( (  count_dash_digits770 ) ( ( ( ( * (  ed2618 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1208) { .f_max_dash_digits = (  max_dash_digits2619 ) , .f_total_dash_offset = (  op_dash_add81 ( (  op_dash_add81 ( ( env.pad2615 ) , (  max_dash_digits2619 ) ) ) , ( env.pad2615 ) ) ) } );
}

struct funenv1207 {
    struct anon_1208  (*fun) (  struct env1207  ,    struct Editor_1056 *  );
    struct env1207 env;
};

struct env1209 {
    struct env1207 envinst1207;
    ;
    ;
};

static  struct Dims_1169   screen_dash_dims1209 (   struct env1209 env ,    struct Editor_1056 *  ed2622 ,    struct Tui_635 *  tui2624 ) {
    struct funenv1207  temp1210 = ( (struct funenv1207){ .fun = left_dash_offset1207, .env =  env.envinst1207  } );
    return ( (struct Dims_1169) { .f_cols = (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * (  tui2624 ) ) .f_width ) ) ) , ( ( temp1210.fun ( temp1210.env ,  (  ed2622 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32273 ) ( ( ( * (  tui2624 ) ) .f_height ) ) ) } );
}

struct env1211 {
    ;
    int32_t  pad2615;
    ;
    ;
    ;
    struct env317 envinst317;
    ;
    ;
    struct env1163 envinst1163;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1207 envinst1207;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   render_dash_editor1211 (   struct env1211 env ,    struct Screen_634 *  screen2627 ,    struct Editor_1056 *  ed2629 ) {
    int32_t  w2630 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2627 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2631 = ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2627 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2632 = ( ( * (  ed2629 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2633 = ( ( * (  ed2629 ) ) .f_screen_dash_left );
    int32_t  x2634 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2635 = (  from_dash_integral29 ( 0 ) );
    ( (  assert905 ) ( (  cmp9 ( ( ( ( * (  ed2629 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1207  temp1212 = ( (struct funenv1207){ .fun = left_dash_offset1207, .env =  env.envinst1207  } );
    struct anon_1208  offstuff2636 = ( temp1212.fun ( temp1212.env ,  (  ed2629 ) ) );
    int32_t  max_dash_digits2637 = ( (  offstuff2636 ) .f_max_dash_digits );
    int32_t  left_dash_off2638 = ( (  offstuff2636 ) .f_total_dash_offset );
    struct Zip_387  temp1213 =  into_dash_iter386 ( ( (  zip481 ) ( ( (  drop372 ) ( ( ( * (  ed2629 ) ) .f_current_dash_file ) ,  ( (  i32_dash_size267 ) ( (  from_dash_y2632 ) ) ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_362  __cond1214 =  next436 (&temp1213);
        if (  __cond1214 .tag == 0 ) {
            break;
        }
        struct Tuple2_363  dref2639 =  __cond1214 .stuff .Maybe_362_Just_s .field0;
        int32_t  row_dash_num2642 = (  op_dash_add81 ( (  op_dash_add81 ( ( dref2639 .field1 ) , ( ( * (  ed2629 ) ) .f_screen_dash_top ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_382  temp1215 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( env.pad2615 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_333  __cond1216 =  next383 (&temp1215);
            if (  __cond1216 .tag == 0 ) {
                break;
            }
            int32_t  xx2644 =  __cond1216 .stuff .Maybe_333_Just_s .field0;
            ( (  put_dash_char1135 ) ( (  screen2627 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2644 ) ,  (  y2635 ) ) );
        }
        ( (  draw_dash_str_dash_right1144 ) ( (  screen2627 ) ,  (  row_dash_num2642 ) ,  (  op_dash_sub82 ( (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2627 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2637 ) ) ) , ( env.pad2615 ) ) ) ,  ( dref2639 .field1 ) ) );
        struct RangeIter_382  temp1217 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( env.pad2615 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_333  __cond1218 =  next383 (&temp1217);
            if (  __cond1218 .tag == 0 ) {
                break;
            }
            int32_t  xx2646 =  __cond1218 .stuff .Maybe_333_Just_s .field0;
            ( (  put_dash_char1135 ) ( (  screen2627 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  op_dash_add81 ( (  xx2646 ) , ( env.pad2615 ) ) ) , (  max_dash_digits2637 ) ) ) ,  (  y2635 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2629 ) ) .f_cursor ) .f_y ) , (  op_dash_sub82 ( (  row_dash_num2642 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct Color_53  fg2647 = ( ( * (  screen2627 ) ) .f_default_dash_fg );
            struct Color_53  bg2648 = ( ( * (  screen2627 ) ) .f_default_dash_bg );
            struct RangeIter_382  temp1219 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  max_dash_digits2637 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_333  __cond1220 =  next383 (&temp1219);
                if (  __cond1220 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2650 =  __cond1220 .stuff .Maybe_333_Just_s .field0;
                struct Cell_52 *  cp2651 = ( (  or_dash_fail912 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2627 ) ,  (  op_dash_add81 ( (  xxx2650 ) , ( env.pad2615 ) ) ) ,  (  y2635 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2651 ) .f_fg = (  bg2648 );
                (*  cp2651 ) .f_bg = (  fg2647 );
            }
        }
        struct Zip_389  temp1221 =  into_dash_iter388 ( ( (  zip484 ) ( ( (  drop377 ) ( ( dref2639 .field0 ) ,  ( (  i32_dash_size267 ) ( (  from_dash_x2633 ) ) ) ) ) ,  ( (  from384 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_357  __cond1222 =  next437 (&temp1221);
            if (  __cond1222 .tag == 0 ) {
                break;
            }
            struct Tuple2_358  dref2652 =  __cond1222 .stuff .Maybe_357_Just_s .field0;
            if ( (  eq47 ( ( dref2652 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1135 ) ( (  screen2627 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  left_dash_off2638 ) , (  x2634 ) ) ) ,  (  y2635 ) ) );
                x2634 = (  op_dash_add81 ( (  x2634 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1135 ) ( (  screen2627 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  left_dash_off2638 ) , (  x2634 ) ) ) ,  (  y2635 ) ) );
            } else {
                ( (  put_dash_char1135 ) ( (  screen2627 ) ,  ( dref2652 .field0 ) ,  (  op_dash_add81 ( (  left_dash_off2638 ) , (  x2634 ) ) ) ,  (  y2635 ) ) );
            }
            x2634 = (  op_dash_add81 ( (  x2634 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp74 ( (  x2634 ) , (  w2630 ) ) != 0 ) ) {
                break;
            }
        }
        y2635 = (  op_dash_add81 ( (  y2635 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2634 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp74 ( (  y2635 ) , (  h2631 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_1057  cur2655 = ( ( * (  ed2629 ) ) .f_cursor );
    struct funenv1163  temp1223 = ( (struct funenv1163){ .fun = x_dash_to_dash_visual_dash_x1163, .env =  env.envinst1163  } );
    int32_t  vx2656 = ( (  from_dash_visual1158 ) ( ( temp1223.fun ( temp1223.env ,  (  ed2629 ) ,  ( (  cur2655 ) .f_x ) ,  ( (  cur2655 ) .f_y ) ) ) ) );
    int32_t  len2657 = ( (  maybe1068 ) ( ( (  try_dash_get960 ) ( ( (  cursor_dash_row1160 ) ( (  ed2629 ) ) ) ,  ( (  i32_dash_size267 ) ( ( (  cur2655 ) .f_x ) ) ) ) ) ,  ( (struct funenv317){ .fun = char_dash_len317, .env =  env.envinst317  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_382  temp1224 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  len2657 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_333  __cond1225 =  next383 (&temp1224);
        if (  __cond1225 .tag == 0 ) {
            break;
        }
        int32_t  x2659 =  __cond1225 .stuff .Maybe_333_Just_s .field0;
        struct Cell_52 *  cursor_dash_cell2660 = ( (  or_dash_fail912 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2627 ) ,  (  op_dash_add81 ( (  op_dash_add81 ( (  op_dash_sub82 ( (  left_dash_off2638 ) , ( ( * (  ed2629 ) ) .f_screen_dash_left ) ) ) , (  vx2656 ) ) ) , (  x2659 ) ) ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2629 ) ) .f_cursor ) .f_y ) , (  from_dash_y2632 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2660 ) .f_fg = ( ( Color_53_Color8 ) ( ( Color8_54_Black8 ) ) );
        (*  cursor_dash_cell2660 ) .f_bg = ( ( Color_53_Color8 ) ( ( Color8_54_White8 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1226 (    struct Maybe_1053 *  dref2662 ,    struct Screen_634 *  screen2665 ) {
    struct Maybe_1053  dref2666 = ( (* dref2662 ) );
    if ( dref2666.tag == Maybe_1053_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2666.tag == Maybe_1053_Just_t ) {
        struct Duration_1073  diff2668 = ( (  diff1074 ) ( ( (  now1070 ) ( ) ) ,  ( dref2666 .stuff .Maybe_1053_Just_s .field0 ) ) );
        struct Duration_1073  limit2669 = ( (  duration_dash_from_dash_ns1075 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1072 ( (  diff2668 ) , (  limit2669 ) ) == 2 ) ) {
            (* dref2662 ) = ( (struct Maybe_1053) { .tag = Maybe_1053_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2670 = (  op_dash_div79 ( ( (  u32_dash_i64272 ) ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2671 = (  op_dash_div79 ( ( (  u32_dash_i64272 ) ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2672 = ( (  i64_dash_i32268 ) ( (  op_dash_div79 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1076 ) ( (  diff2668 ) ) ) , (  x_dash_fill2670 ) ) ) , ( (  duration_dash_to_dash_ns1076 ) ( (  limit2669 ) ) ) ) ) ) );
        int32_t  y_dash_progress2673 = ( (  i64_dash_i32268 ) ( (  op_dash_div79 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1076 ) ( (  diff2668 ) ) ) , (  y_dash_fill2671 ) ) ) , ( (  duration_dash_to_dash_ns1076 ) ( (  limit2669 ) ) ) ) ) ) );
        uint32_t  center_dash_x2674 = (  op_dash_add86 ( (  op_dash_div89 ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2675 = (  op_dash_add86 ( (  op_dash_div89 ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1128 ) ( (  screen2665 ) ,  ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) ) );
        int32_t  x_dash_off2676 = (  op_dash_sub82 ( ( (  i64_dash_i32268 ) ( (  x_dash_fill2670 ) ) ) , (  x_dash_progress2672 ) ) );
        int32_t  y_dash_off2677 = (  op_dash_sub82 ( ( (  i64_dash_i32268 ) ( (  y_dash_fill2671 ) ) ) , (  y_dash_progress2673 ) ) );
        int32_t  h2678 = (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2679 = (  op_dash_sub82 ( ( (  u32_dash_i32273 ) ( ( ( * ( ( * (  screen2665 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_382  temp1227 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2678 ) ) ) );
        while (true) {
            struct Maybe_333  __cond1228 =  next383 (&temp1227);
            if (  __cond1228 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2681 =  __cond1228 .stuff .Maybe_333_Just_s .field0;
            struct RangeIter_382  temp1229 =  into_dash_iter381 ( ( (  to379 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2679 ) ) ) );
            while (true) {
                struct Maybe_333  __cond1230 =  next383 (&temp1229);
                if (  __cond1230 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2683 =  __cond1230 .stuff .Maybe_333_Just_s .field0;
                if ( ( ( ( (  cmp74 ( (  screen_dash_x2683 ) , (  x_dash_off2676 ) ) != 2 ) || (  cmp74 ( (  screen_dash_x2683 ) , (  op_dash_sub82 ( (  w2679 ) , (  x_dash_off2676 ) ) ) ) != 0 ) ) || (  cmp74 ( (  screen_dash_y2681 ) , (  y_dash_off2677 ) ) != 2 ) ) || (  cmp74 ( (  screen_dash_y2681 ) , (  op_dash_sub82 ( (  h2678 ) , (  y_dash_off2677 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1135 ) ( (  screen2665 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2683 ) ,  (  screen_dash_y2681 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1197 {
    struct List_373  (*fun) (  struct env1197  ,    const char*  ,    enum CAllocator_4  );
    struct env1197 env;
};

struct funenv1042 {
    const char*  (*fun) (  struct env1042  ,    struct TakeWhile_511  ,    enum CAllocator_4  );
    struct env1042 env;
};

struct funenv1046 {
    const char*  (*fun) (  struct env1046  ,    struct TakeWhile_507  ,    enum CAllocator_4  );
    struct env1046 env;
};

struct funenv1200 {
    enum Unit_13  (*fun) (  struct env1200  ,    struct List_373  ,    const char*  );
    struct env1200 env;
};

struct env1231 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1197 envinst1197;
    ;
    ;
    struct env1174 envinst1174;
    ;
    ;
    ;
    struct env1042 envinst1042;
    struct env1046 envinst1046;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1200 envinst1200;
    ;
};

static  bool   lam1232 (    char  c2697 ) {
    return ( ! ( (  is_dash_whitespace949 ) ( (  c2697 ) ) ) );
}

static  bool   lam1236 (    char  c2705 ) {
    return ( ! ( (  is_dash_whitespace949 ) ( (  c2705 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1231 (   struct env1231 env ,    struct Editor_1056 *  ed2686 ,    struct DynStr_130  s2688 ,    struct Dims_1169  dim2690 ,    enum CAllocator_4  al2692 ) {
    struct DropWhile_505  s2693 = ( (  drop_dash_while529 ) ( (  s2688 ) ,  (  is_dash_whitespace949 ) ) );
    struct TakeWhile_504  cmd2694 = ( (  take_dash_while526 ) ( (  s2693 ) ,  (  is_dash_not_dash_whitespace950 ) ) );
    struct DropWhile_508  rest2695 = ( (  drop_dash_while532 ) ( ( (  drop_dash_while531 ) ( (  s2693 ) ,  (  is_dash_not_dash_whitespace950 ) ) ) ,  (  is_dash_whitespace949 ) ) );
    if ( ( (  eq889 ) ( (  cmd2694 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_507  filename2698 = ( (  take_dash_while525 ) ( (  rest2695 ) ,  (  lam1232 ) ) );
        const char*  temp1233;
        const char*  alfname2699 = (  temp1233 );
        if ( ( (  null756 ) ( (  filename2698 ) ) ) ) {
            struct Maybe_264  dref2700 = ( ( * (  ed2686 ) ) .f_filename );
            if ( dref2700.tag == Maybe_264_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2700.tag == Maybe_264_Just_t ) {
                alfname2699 = ( dref2700 .stuff .Maybe_264_Just_s .field0 );
            }
        } else {
            struct Maybe_264  dref2702 = ( ( * (  ed2686 ) ) .f_filename );
            if ( dref2702.tag == Maybe_264_None_t ) {
            }
            else if ( dref2702.tag == Maybe_264_Just_t ) {
                ( (  free941 ) ( (  al2692 ) ,  ( (struct Slice_942) { .f_ptr = ( (  cast186 ) ( ( dref2702 .stuff .Maybe_264_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1046  temp1234 = ( (struct funenv1046){ .fun = mk_dash_const_dash_str1046, .env =  env.envinst1046  } );
            alfname2699 = ( temp1234.fun ( temp1234.env ,  (  filename2698 ) ,  (  al2692 ) ) );
        }
        struct funenv1200  temp1235 = ( (struct funenv1200){ .fun = save_dash_file1200, .env =  env.envinst1200  } );
        ( temp1235.fun ( temp1235.env ,  ( ( * (  ed2686 ) ) .f_current_dash_file ) ,  (  alfname2699 ) ) );
        (*  ed2686 ) .f_filename = ( ( Maybe_264_Just ) ( (  alfname2699 ) ) );
    } else {
        if ( ( (  eq889 ) ( (  cmd2694 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2686 ) .f_running = ( false );
        } else {
            if ( ( (  eq889 ) ( (  cmd2694 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_511  filename2706 = ( (  take_dash_while523 ) ( (  rest2695 ) ,  (  lam1236 ) ) );
                struct funenv1042  temp1237 = ( (struct funenv1042){ .fun = mk_dash_const_dash_str1042, .env =  env.envinst1042  } );
                const char*  alfname2707 = ( temp1237.fun ( temp1237.env ,  (  filename2706 ) ,  (  al2692 ) ) );
                struct List_373  og2708 = ( ( * (  ed2686 ) ) .f_current_dash_file );
                struct funenv1197  temp1238 = ( (struct funenv1197){ .fun = load_dash_file1197, .env =  env.envinst1197  } );
                (*  ed2686 ) .f_current_dash_file = ( temp1238.fun ( temp1238.env ,  (  alfname2707 ) ,  (  al2692 ) ) );
                struct Maybe_264  dref2709 = ( ( * (  ed2686 ) ) .f_filename );
                if ( dref2709.tag == Maybe_264_None_t ) {
                }
                else if ( dref2709.tag == Maybe_264_Just_t ) {
                    ( (  free941 ) ( (  al2692 ) ,  ( (struct Slice_942) { .f_ptr = ( (  cast186 ) ( ( dref2709 .stuff .Maybe_264_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2686 ) .f_filename = ( ( Maybe_264_Just ) ( (  alfname2707 ) ) );
                (*  ed2686 ) .f_cursor = ( (struct Cursor_1057) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2686 ) .f_goal_dash_x = ( ( Visual_1058_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2686 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1206 ) ( (  og2708 ) ) );
            } else {
                struct Maybe_701  dref2711 = ( (  parse_dash_int956 ) ( (  cmd2694 ) ) );
                if ( dref2711.tag == Maybe_701_Just_t ) {
                    int32_t  newline2713 = ( (  clamp767 ) ( ( (  i64_dash_i32268 ) ( (  op_dash_sub78 ( ( dref2711 .stuff .Maybe_701_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32269 ) ( ( ( ( * (  ed2686 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1174  temp1239 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  env.envinst1174  } );
                    ( temp1239.fun ( temp1239.env ,  (  ed2686 ) ,  (  newline2713 ) ,  (  dim2690 ) ) );
                }
                else if ( dref2711.tag == Maybe_701_None_t ) {
                    return ( Unit_13_Unit );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1038 {
    const char*  (*fun) (  struct env1038  ,    const char*  ,    enum CAllocator_4  );
    struct env1038 env;
};

struct funenv1087 {
    struct Tui_635  (*fun) (  struct env1087  );
    struct env1087 env;
};

struct funenv1209 {
    struct Dims_1169  (*fun) (  struct env1209  ,    struct Editor_1056 *  ,    struct Tui_635 *  );
    struct env1209 env;
};

struct funenv1176 {
    bool  (*fun) (  struct env1176  ,    struct Editor_1056 *  ,    struct Dims_1169  );
    struct env1176 env;
};

struct funenv1180 {
    bool  (*fun) (  struct env1180  ,    struct Editor_1056 *  ,    struct Dims_1169  );
    struct env1180 env;
};

struct funenv1188 {
    enum Unit_13  (*fun) (  struct env1188  ,    struct Editor_1056 *  );
    struct env1188 env;
};

struct funenv1183 {
    enum Unit_13  (*fun) (  struct env1183  ,    struct Editor_1056 *  ,    struct Dims_1169  );
    struct env1183 env;
};

struct funenv1185 {
    enum Unit_13  (*fun) (  struct env1185  ,    struct Editor_1056 *  ,    struct Dims_1169  );
    struct env1185 env;
};

struct funenv1192 {
    enum Unit_13  (*fun) (  struct env1192  ,    struct Editor_1056 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1192 env;
};

static  bool   lam1274 (    char  c2738 ) {
    return ( (  is_dash_word_dash_char1196 ) ( (  c2738 ) ) );
}

static  bool   lam1276 (    char  c2740 ) {
    return ( ! ( (  is_dash_word_dash_char1196 ) ( (  c2740 ) ) ) );
}

static  bool   lam1282 (    char  c2744 ) {
    return ( ! ( (  is_dash_word_dash_char1196 ) ( (  c2744 ) ) ) );
}

static  bool   lam1284 (    char  c2746 ) {
    return ( (  is_dash_word_dash_char1196 ) ( (  c2746 ) ) );
}

static  bool   lam1290 (    char  c2750 ) {
    return ( ! ( (  is_dash_word_dash_char1196 ) ( (  c2750 ) ) ) );
}

static  bool   lam1292 (    char  c2752 ) {
    return ( (  is_dash_word_dash_char1196 ) ( (  c2752 ) ) );
}

struct funenv973 {
    enum Unit_13  (*fun) (  struct env973  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env973 env;
};

struct funenv1033 {
    enum Unit_13  (*fun) (  struct env1033  ,    struct StrBuilder_564 *  );
    struct env1033 env;
};

struct funenv987 {
    enum Unit_13  (*fun) (  struct env987  ,    struct List_3 *  ,    struct Slice_5  );
    struct env987 env;
};

struct funenv1231 {
    enum Unit_13  (*fun) (  struct env1231  ,    struct Editor_1056 *  ,    struct DynStr_130  ,    struct Dims_1169  ,    enum CAllocator_4  );
    struct env1231 env;
};

struct funenv1125 {
    bool  (*fun) (  struct env1125  ,    struct Screen_634 *  );
    struct env1125 env;
};

struct funenv1211 {
    enum Unit_13  (*fun) (  struct env1211  ,    struct Screen_634 *  ,    struct Editor_1056 *  );
    struct env1211 env;
};

static  struct Maybe_49   lam1055 (   struct env1055 env ,    struct List_3  l2776 ) {
    return ( (  try_dash_get960 ) ( ( & (  l2776 ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * ( env.ed2719 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_358   lam1321 (    char  c2778 ) {
    return ( ( Tuple2_358_Tuple2 ) ( (  c2778 ) ,  ( (  char_dash_i32892 ) ( (  c2778 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1618 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1619 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1620 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env559 envinst559 = {
        .starting_dash_size1618 =  starting_dash_size1618 ,
        .growth_dash_factor1619 =  growth_dash_factor1619 ,
    };
    struct env310 envinst310 = {
        .starting_dash_size1618 =  starting_dash_size1618 ,
        .growth_dash_factor1619 =  growth_dash_factor1619 ,
    };
    struct env558 envinst558 = {
        .envinst559 = envinst559 ,
    };
    struct env309 envinst309 = {
        .envinst310 = envinst310 ,
    };
    struct env970 envinst970 = {
        .envinst558 = envinst558 ,
        .envinst559 = envinst559 ,
    };
    struct env973 envinst973 = {
        .envinst309 = envinst309 ,
        .envinst310 = envinst310 ,
    };
    struct env976 envinst976 = {
        .shrink_dash_factor1620 =  shrink_dash_factor1620 ,
    };
    struct env977 envinst977 = {
        .shrink_dash_factor1620 =  shrink_dash_factor1620 ,
    };
    struct env978 envinst978 = {
        .envinst976 = envinst976 ,
    };
    struct env308 envinst308 = {
        .envinst309 = envinst309 ,
    };
    struct env981 envinst981 = {
        .envinst558 = envinst558 ,
    };
    struct env983 envinst983 = {
        .envinst309 = envinst309 ,
    };
    struct env985 envinst985 = {
        .envinst309 = envinst309 ,
    };
    struct env987 envinst987 = {
        .envinst309 = envinst309 ,
    };
    struct env307 envinst307 = {
        .envinst308 = envinst308 ,
    };
    struct env992 envinst992 = {
        .envinst981 = envinst981 ,
    };
    struct env1026 envinst1026 = {
        .envinst309 = envinst309 ,
    };
    struct env1028 envinst1028 = {
        .envinst309 = envinst309 ,
    };
    struct env1030 envinst1030 = {
        .envinst309 = envinst309 ,
    };
    struct env625 envinst625 = {
        .envinst309 = envinst309 ,
    };
    struct env1033 envinst1033 = {
        .envinst978 = envinst978 ,
    };
    struct env1038 envinst1038 = {
        .envinst625 = envinst625 ,
        .envinst1026 = envinst1026 ,
    };
    struct env1042 envinst1042 = {
        .envinst625 = envinst625 ,
        .envinst1028 = envinst1028 ,
    };
    struct env1046 envinst1046 = {
        .envinst625 = envinst625 ,
        .envinst1030 = envinst1030 ,
    };
    bool  temp1086 = ( false );
    bool *  should_dash_resize2206 = ( &temp1086 );
    struct env1087 envinst1087 = {
        .should_dash_resize2206 =  should_dash_resize2206 ,
    };
    struct env1110 envinst1110 = {
        .should_dash_resize2206 =  should_dash_resize2206 ,
    };
    struct env1125 envinst1125 = {
        .envinst1110 = envinst1110 ,
    };
    int32_t  tab_dash_size2413 = (  from_dash_integral29 ( 2 ) );
    struct env317 envinst317 = {
        .tab_dash_size2413 =  tab_dash_size2413 ,
    };
    struct env1163 envinst1163 = {
        .envinst317 = envinst317 ,
    };
    struct env1164 envinst1164 = {
        .envinst317 = envinst317 ,
    };
    struct env1168 envinst1168 = {
        .envinst1164 = envinst1164 ,
        .envinst1163 = envinst1163 ,
    };
    struct env1172 envinst1172 = {
        .envinst1168 = envinst1168 ,
    };
    struct env1174 envinst1174 = {
        .envinst1168 = envinst1168 ,
    };
    struct env1176 envinst1176 = {
        .envinst1172 = envinst1172 ,
        .envinst1174 = envinst1174 ,
    };
    struct env1180 envinst1180 = {
        .envinst1172 = envinst1172 ,
        .envinst1168 = envinst1168 ,
    };
    struct env1183 envinst1183 = {
        .envinst1172 = envinst1172 ,
    };
    struct env1185 envinst1185 = {
        .envinst1172 = envinst1172 ,
    };
    struct env1188 envinst1188 = {
        .envinst983 = envinst983 ,
        .envinst976 = envinst976 ,
        .envinst977 = envinst977 ,
    };
    struct env1192 envinst1192 = {
        .envinst970 = envinst970 ,
        .envinst985 = envinst985 ,
    };
    enum CAllocator_4  al2565 = ( (  idc935 ) ( ) );
    struct env1197 envinst1197 = {
        .envinst307 = envinst307 ,
        .envinst992 = envinst992 ,
    };
    struct env1200 envinst1200 = {
        .envinst625 = envinst625 ,
        .al2565 =  al2565 ,
    };
    int32_t  pad2615 = (  from_dash_integral29 ( 2 ) );
    struct env1207 envinst1207 = {
        .pad2615 =  pad2615 ,
    };
    struct env1209 envinst1209 = {
        .envinst1207 = envinst1207 ,
    };
    struct env1211 envinst1211 = {
        .pad2615 =  pad2615 ,
        .envinst317 = envinst317 ,
        .envinst1163 = envinst1163 ,
        .envinst1207 = envinst1207 ,
    };
    struct env1231 envinst1231 = {
        .envinst1197 = envinst1197 ,
        .envinst1174 = envinst1174 ,
        .envinst1042 = envinst1042 ,
        .envinst1046 = envinst1046 ,
        .envinst1200 = envinst1200 ,
    };
    struct Slice_919  args2716 = ( (  get1156 ) ( ) );
    struct List_373  temp1240;
    struct List_373  file2717 = (  temp1240 );
    struct Maybe_264  mfilename2718 = ( (struct Maybe_264) { .tag = Maybe_264_None_t } );
    if ( (  eq45 ( ( (  args2716 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2717 = ( (  mk964 ) ( (  al2565 ) ) );
        struct funenv558  temp1241 = ( (struct funenv558){ .fun = add558, .env =  envinst558  } );
        ( temp1241.fun ( temp1241.env ,  ( & (  file2717 ) ) ,  ( (  mk965 ) ( (  al2565 ) ) ) ) );
    } else {
        struct funenv1197  temp1242 = ( (struct funenv1197){ .fun = load_dash_file1197, .env =  envinst1197  } );
        file2717 = ( temp1242.fun ( temp1242.env ,  (  elem_dash_get929 ( (  args2716 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2565 ) ) );
        struct funenv1038  temp1243 = ( (struct funenv1038){ .fun = mk_dash_const_dash_str1038, .env =  envinst1038  } );
        mfilename2718 = ( ( Maybe_264_Just ) ( ( temp1243.fun ( temp1243.env ,  (  elem_dash_get929 ( (  args2716 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2565 ) ) ) ) );
    }
    struct Editor_1056  temp1244 = ( (struct Editor_1056) { .f_cursor = ( (struct Cursor_1057) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1058_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2717 ) , .f_filename = (  mfilename2718 ) , .f_mode = ( (struct Mode_780) { .tag = Mode_780_Normal_t } ) , .f_anim = ( ( Maybe_1053_Just ) ( ( (  now1070 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_1059) { .tag = Maybe_1059_None_t } ) } );
    struct Editor_1056 *  ed2719 = ( &temp1244 );
    struct funenv1087  temp1246 = ( (struct funenv1087){ .fun = mk1087, .env =  envinst1087  } );
    struct Tui_635  temp1245 = ( temp1246.fun ( temp1246.env ) );
    struct Tui_635 *  tui2720 = ( &temp1245 );
    enum CAllocator_4  al2721 = ( (  idc935 ) ( ) );
    struct Screen_634  temp1247 = ( (  mk_dash_screen1111 ) ( (  tui2720 ) ,  (  al2721 ) ) );
    struct Screen_634 *  screen2722 = ( &temp1247 );
    uint32_t  counter2723 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2724 = ( true );
    while ( ( ( * (  ed2719 ) ) .f_running ) ) {
        int32_t  events2725 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_537  temp1248 =  into_dash_iter536 ( ( (  from_dash_function543 ) ( (  read_dash_key1104 ) ) ) );
        while (true) {
            struct Maybe_538  __cond1249 =  next542 (&temp1248);
            if (  __cond1249 .tag == 0 ) {
                break;
            }
            struct InputEvent_539  ev2727 =  __cond1249 .stuff .Maybe_538_Just_s .field0;
            events2725 = (  op_dash_add81 ( (  events2725 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1110  temp1250 = ( (struct funenv1110){ .fun = update_dash_dimensions1110, .env =  envinst1110  } );
            ( temp1250.fun ( temp1250.env ,  (  tui2720 ) ) );
            struct InputEvent_539  dref2728 = (  ev2727 );
            if ( dref2728.tag == InputEvent_539_Key_t ) {
                struct Key_540  dref2730 = ( dref2728 .stuff .InputEvent_539_Key_s .field0 );
                if ( dref2730.tag == Key_540_Char_t ) {
                    struct Mode_780 *  dref2732 = ( & ( ( * (  ed2719 ) ) .f_mode ) );
                    if ( (* dref2732 ).tag == Mode_780_Normal_t ) {
                        int32_t  code2733 = ( (  u8_dash_i32275 ) ( ( (  cast194 ) ( ( dref2730 .stuff .Key_540_Char_s .field0 ) ) ) ) );
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                            (*  ed2719 ) .f_running = ( false );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                            struct funenv1174  temp1251 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  envinst1174  } );
                            struct funenv1209  temp1252 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1251.fun ( temp1251.env ,  (  ed2719 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1252.fun ( temp1252.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                            struct funenv1174  temp1253 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  envinst1174  } );
                            struct funenv1209  temp1254 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1253.fun ( temp1253.env ,  (  ed2719 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1254.fun ( temp1254.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                            struct funenv1176  temp1255 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                            struct funenv1209  temp1256 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1255.fun ( temp1255.env ,  (  ed2719 ) ,  ( temp1256.fun ( temp1256.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                            struct funenv1180  temp1257 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                            struct funenv1209  temp1258 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1257.fun ( temp1257.env ,  (  ed2719 ) ,  ( temp1258.fun ( temp1258.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                            struct funenv1188  temp1259 = ( (struct funenv1188){ .fun = delete_dash_at_dash_current1188, .env =  envinst1188  } );
                            ( temp1259.fun ( temp1259.env ,  (  ed2719 ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                            struct funenv1188  temp1260 = ( (struct funenv1188){ .fun = delete_dash_at_dash_current1188, .env =  envinst1188  } );
                            ( temp1260.fun ( temp1260.env ,  (  ed2719 ) ) );
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                            struct funenv1183  temp1261 = ( (struct funenv1183){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1183, .env =  envinst1183  } );
                            struct funenv1209  temp1262 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1261.fun ( temp1261.env ,  (  ed2719 ) ,  ( temp1262.fun ( temp1262.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                            struct funenv1185  temp1263 = ( (struct funenv1185){ .fun = move_dash_to_dash_end_dash_of_dash_line1185, .env =  envinst1185  } );
                            struct funenv1209  temp1264 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1263.fun ( temp1263.env ,  (  ed2719 ) ,  ( temp1264.fun ( temp1264.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                            struct funenv1192  temp1265 = ( (struct funenv1192){ .fun = insert_dash_empty_dash_row_dash_at1192, .env =  envinst1192  } );
                            ( temp1265.fun ( temp1265.env ,  (  ed2719 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2721 ) ) );
                            struct List_3 *  currow2734 = ( (  get_dash_row1159 ) ( (  ed2719 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1168  temp1266 = ( (struct funenv1168){ .fun = move_dash_to1168, .env =  envinst1168  } );
                            struct funenv1209  temp1267 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1266.fun ( temp1266.env ,  (  ed2719 ) ,  ( (  size_dash_i32269 ) ( ( (  size998 ) ( (  currow2734 ) ) ) ) ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1267.fun ( temp1267.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                            struct funenv1192  temp1268 = ( (struct funenv1192){ .fun = insert_dash_empty_dash_row_dash_at1192, .env =  envinst1192  } );
                            ( temp1268.fun ( temp1268.env ,  (  ed2719 ) ,  ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ,  (  al2721 ) ) );
                            struct funenv1185  temp1269 = ( (struct funenv1185){ .fun = move_dash_to_dash_end_dash_of_dash_line1185, .env =  envinst1185  } );
                            struct funenv1209  temp1270 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1269.fun ( temp1269.env ,  (  ed2719 ) ,  ( temp1270.fun ( temp1270.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                            (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                            (*  ed2719 ) .f_mode = ( ( Mode_780_Cmd ) ( ( (  mk1036 ) ( (  al2721 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                            struct funenv1209  temp1271 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            struct Dims_1169  dims2735 = ( temp1271.fun ( temp1271.env ,  (  ed2719 ) ,  (  tui2720 ) ) );
                            struct funenv1180  temp1272 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                            ( temp1272.fun ( temp1272.env ,  (  ed2719 ) ,  (  dims2735 ) ) );
                            bool  changed2736 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1187 ) ( (  ed2719 ) ) ) ) {
                                struct funenv1180  temp1273 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1273.fun ( temp1273.env ,  (  ed2719 ) ,  (  dims2735 ) ) ) ) ) {
                                    changed2736 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1062 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1274 ) ,  ( false ) ) ) ) {
                                struct funenv1180  temp1275 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1275.fun ( temp1275.env ,  (  ed2719 ) ,  (  dims2735 ) ) ) ) ) {
                                    changed2736 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1063 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1276 ) ,  ( false ) ) ) ) {
                                struct funenv1180  temp1277 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1277.fun ( temp1277.env ,  (  ed2719 ) ,  (  dims2735 ) ) ) ) ) {
                                    changed2736 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2736 ) ) {
                                struct funenv1176  temp1278 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                                ( temp1278.fun ( temp1278.env ,  (  ed2719 ) ,  (  dims2735 ) ) );
                            }
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                            struct funenv1209  temp1279 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            struct Dims_1169  dims2741 = ( temp1279.fun ( temp1279.env ,  (  ed2719 ) ,  (  tui2720 ) ) );
                            struct funenv1180  temp1280 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                            ( temp1280.fun ( temp1280.env ,  (  ed2719 ) ,  (  dims2741 ) ) );
                            bool  changed2742 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1187 ) ( (  ed2719 ) ) ) ) {
                                struct funenv1180  temp1281 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1281.fun ( temp1281.env ,  (  ed2719 ) ,  (  dims2741 ) ) ) ) ) {
                                    changed2742 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1064 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1282 ) ,  ( false ) ) ) ) {
                                struct funenv1180  temp1283 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1283.fun ( temp1283.env ,  (  ed2719 ) ,  (  dims2741 ) ) ) ) ) {
                                    changed2742 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1065 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1284 ) ,  ( false ) ) ) ) {
                                struct funenv1180  temp1285 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                if ( ( ! ( temp1285.fun ( temp1285.env ,  (  ed2719 ) ,  (  dims2741 ) ) ) ) ) {
                                    changed2742 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2742 ) ) {
                                struct funenv1176  temp1286 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                                ( temp1286.fun ( temp1286.env ,  (  ed2719 ) ,  (  dims2741 ) ) );
                            }
                        }
                        if ( (  eq47 ( ( dref2730 .stuff .Key_540_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                            struct funenv1209  temp1287 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            struct Dims_1169  dims2747 = ( temp1287.fun ( temp1287.env ,  (  ed2719 ) ,  (  tui2720 ) ) );
                            struct funenv1176  temp1288 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                            ( temp1288.fun ( temp1288.env ,  (  ed2719 ) ,  (  dims2747 ) ) );
                            bool  changed2748 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1187 ) ( (  ed2719 ) ) ) ) {
                                struct funenv1176  temp1289 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                                if ( ( ! ( temp1289.fun ( temp1289.env ,  (  ed2719 ) ,  (  dims2747 ) ) ) ) ) {
                                    changed2748 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1066 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1290 ) ,  ( false ) ) ) ) {
                                struct funenv1176  temp1291 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                                if ( ( ! ( temp1291.fun ( temp1291.env ,  (  ed2719 ) ,  (  dims2747 ) ) ) ) ) {
                                    changed2748 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1067 ) ( ( (  char_dash_at_dash_cursor1162 ) ( (  ed2719 ) ) ) ,  (  lam1292 ) ,  ( false ) ) ) ) {
                                struct funenv1176  temp1293 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                                if ( ( ! ( temp1293.fun ( temp1293.env ,  (  ed2719 ) ,  (  dims2747 ) ) ) ) ) {
                                    changed2748 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2748 ) ) {
                                struct funenv1180  temp1294 = ( (struct funenv1180){ .fun = move_dash_right1180, .env =  envinst1180  } );
                                ( temp1294.fun ( temp1294.env ,  (  ed2719 ) ,  (  dims2747 ) ) );
                            }
                        }
                    }
                    else if ( (* dref2732 ).tag == Mode_780_Insert_t ) {
                        struct funenv973  temp1295 = ( (struct funenv973){ .fun = insert973, .env =  envinst973  } );
                        ( temp1295.fun ( temp1295.env ,  ( (  cursor_dash_row1160 ) ( (  ed2719 ) ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2730 .stuff .Key_540_Char_s .field0 ) ) );
                        struct funenv1172  temp1296 = ( (struct funenv1172){ .fun = move_dash_to_dash_col1172, .env =  envinst1172  } );
                        struct funenv1209  temp1297 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                        ( temp1296.fun ( temp1296.env ,  (  ed2719 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1297.fun ( temp1297.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                    }
                    else if ( (* dref2732 ).tag == Mode_780_Cmd_t ) {
                        struct funenv625  temp1298 = ( (struct funenv625){ .fun = write_dash_char625, .env =  envinst625  } );
                        ( temp1298.fun ( temp1298.env ,  ( & ( (* dref2732 ) .stuff .Mode_780_Cmd_s .field0 ) ) ,  ( dref2730 .stuff .Key_540_Char_s .field0 ) ) );
                    }
                }
                else if ( dref2730.tag == Key_540_Ctrl_t ) {
                    if ( (  eq47 ( ( dref2730 .stuff .Key_540_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2719 ) .f_screen_dash_top = ( (  max766 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( ( * (  ed2719 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1174  temp1299 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  envinst1174  } );
                        struct funenv1209  temp1300 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                        ( temp1299.fun ( temp1299.env ,  (  ed2719 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1300.fun ( temp1300.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                    }
                    if ( (  eq47 ( ( dref2730 .stuff .Key_540_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2719 ) .f_screen_dash_top = ( (  max766 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add81 ( ( ( * (  ed2719 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1174  temp1301 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  envinst1174  } );
                        struct funenv1209  temp1302 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                        ( temp1301.fun ( temp1301.env ,  (  ed2719 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1302.fun ( temp1302.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                    }
                }
                else if ( dref2730.tag == Key_540_Escape_t ) {
                    struct Mode_780  dref2755 = ( ( * (  ed2719 ) ) .f_mode );
                    if ( dref2755.tag == Mode_780_Normal_t ) {
                    }
                    else if ( dref2755.tag == Mode_780_Insert_t ) {
                        (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Normal_t } );
                    }
                    else if ( dref2755.tag == Mode_780_Cmd_t ) {
                        ( (  free1037 ) ( ( & ( dref2755 .stuff .Mode_780_Cmd_s .field0 ) ) ) );
                        (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Normal_t } );
                    }
                }
                else if ( dref2730.tag == Key_540_Backspace_t ) {
                    struct Mode_780 *  dref2757 = ( & ( ( * (  ed2719 ) ) .f_mode ) );
                    if ( (* dref2757 ).tag == Mode_780_Normal_t ) {
                    }
                    else if ( (* dref2757 ).tag == Mode_780_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1176  temp1303 = ( (struct funenv1176){ .fun = move_dash_left1176, .env =  envinst1176  } );
                            struct funenv1209  temp1304 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1303.fun ( temp1303.env ,  (  ed2719 ) ,  ( temp1304.fun ( temp1304.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                            struct funenv1188  temp1305 = ( (struct funenv1188){ .fun = delete_dash_at_dash_current1188, .env =  envinst1188  } );
                            ( temp1305.fun ( temp1305.env ,  (  ed2719 ) ) );
                        }
                    }
                    else if ( (* dref2757 ).tag == Mode_780_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1035 ) ( ( & ( (* dref2757 ) .stuff .Mode_780_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1033  temp1306 = ( (struct funenv1033){ .fun = pop1033, .env =  envinst1033  } );
                            ( temp1306.fun ( temp1306.env ,  ( & ( (* dref2757 ) .stuff .Mode_780_Cmd_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2730.tag == Key_540_Enter_t ) {
                    struct Mode_780  dref2759 = ( ( * (  ed2719 ) ) .f_mode );
                    if ( dref2759.tag == Mode_780_Normal_t ) {
                    }
                    else if ( dref2759.tag == Mode_780_Insert_t ) {
                        int32_t  cx2760 = ( ( ( * (  ed2719 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1307 = ( (  mk965 ) ( (  al2721 ) ) );
                        struct List_3 *  nurow2761 = ( &temp1307 );
                        struct TakeWhile_502  rowws2762 = ( (  indent_dash_on_dash_row1161 ) ( (  ed2719 ) ,  ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2763 = ( (  size_dash_i32269 ) ( ( (  count729 ) ( (  rowws2762 ) ) ) ) );
                        struct funenv985  temp1308 = ( (struct funenv985){ .fun = add_dash_all985, .env =  envinst985  } );
                        ( temp1308.fun ( temp1308.env ,  (  nurow2761 ) ,  (  rowws2762 ) ) );
                        struct List_3 *  cur_dash_row2764 = ( (  cursor_dash_row1160 ) ( (  ed2719 ) ) );
                        struct funenv987  temp1309 = ( (struct funenv987){ .fun = add_dash_all987, .env =  envinst987  } );
                        ( temp1309.fun ( temp1309.env ,  (  nurow2761 ) ,  ( (  subslice283 ) ( ( (  to_dash_slice995 ) ( ( * (  cur_dash_row2764 ) ) ) ) ,  ( (  i32_dash_size267 ) ( (  cx2760 ) ) ) ,  ( ( * (  cur_dash_row2764 ) ) .f_count ) ) ) ) );
                        ( (  trim989 ) ( (  cur_dash_row2764 ) ,  ( (  i32_dash_size267 ) ( (  cx2760 ) ) ) ) );
                        struct funenv970  temp1310 = ( (struct funenv970){ .fun = insert970, .env =  envinst970  } );
                        ( temp1310.fun ( temp1310.env ,  ( & ( ( * (  ed2719 ) ) .f_current_dash_file ) ) ,  (  op_dash_add92 ( ( (  i32_dash_size267 ) ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2761 ) ) ) );
                        struct funenv1168  temp1311 = ( (struct funenv1168){ .fun = move_dash_to1168, .env =  envinst1168  } );
                        struct funenv1209  temp1312 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                        ( temp1311.fun ( temp1311.env ,  (  ed2719 ) ,  (  offchars2763 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1312.fun ( temp1312.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                    }
                    else if ( dref2759.tag == Mode_780_Cmd_t ) {
                        struct DynStr_130  s2766 = ( (  as_dash_str786 ) ( ( & ( dref2759 .stuff .Mode_780_Cmd_s .field0 ) ) ) );
                        struct funenv1231  temp1313 = ( (struct funenv1231){ .fun = run_dash_cmd1231, .env =  envinst1231  } );
                        struct funenv1209  temp1314 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                        ( temp1313.fun ( temp1313.env ,  (  ed2719 ) ,  (  s2766 ) ,  ( temp1314.fun ( temp1314.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ,  (  al2721 ) ) );
                        ( (  free1037 ) ( ( & ( dref2759 .stuff .Mode_780_Cmd_s .field0 ) ) ) );
                        (*  ed2719 ) .f_mode = ( (struct Mode_780) { .tag = Mode_780_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2728.tag == InputEvent_539_Mouse_t ) {
                enum MouseButton_143  dref2768 = ( ( dref2728 .stuff .InputEvent_539_Mouse_s .field0 ) .f_button );
                switch (  dref2768 ) {
                    case MouseButton_143_MouseLeft : {
                        if ( ( ( dref2728 .stuff .InputEvent_539_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2769 = ( (  size_dash_i32269 ) ( ( ( ( * (  ed2719 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2770 = ( (  clamp767 ) ( (  op_dash_add81 ( ( ( * (  ed2719 ) ) .f_screen_dash_top ) , ( ( dref2728 .stuff .InputEvent_539_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  linecnt2769 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1207  temp1315 = ( (struct funenv1207){ .fun = left_dash_offset1207, .env =  envinst1207  } );
                            struct Visual_1058  vx2771 = ( ( Visual_1058_Visual ) ( (  op_dash_sub82 ( ( ( dref2728 .stuff .InputEvent_539_Mouse_s .field0 ) .f_x ) , ( ( temp1315.fun ( temp1315.env ,  (  ed2719 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1164  temp1316 = ( (struct funenv1164){ .fun = visual_dash_x_dash_to_dash_x1164, .env =  envinst1164  } );
                            int32_t  cx2772 = ( temp1316.fun ( temp1316.env ,  (  ed2719 ) ,  (  vx2771 ) ,  (  cy2770 ) ) );
                            (*  ed2719 ) .f_cursor .f_x = (  cx2772 );
                            (*  ed2719 ) .f_goal_dash_x = (  vx2771 );
                            struct funenv1174  temp1317 = ( (struct funenv1174){ .fun = move_dash_to_dash_row1174, .env =  envinst1174  } );
                            struct funenv1209  temp1318 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                            ( temp1317.fun ( temp1317.env ,  (  ed2719 ) ,  (  cy2770 ) ,  ( temp1318.fun ( temp1318.env ,  (  ed2719 ) ,  (  tui2720 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable898 ) ( ) );
            }
        }
        struct funenv1125  temp1319 = ( (struct funenv1125){ .fun = resize_dash_screen_dash_if_dash_needed1125, .env =  envinst1125  } );
        bool  resized2773 = ( temp1319.fun ( temp1319.env ,  (  screen2722 ) ) );
        if ( ( ( ( (  resized2773 ) || (  cmp74 ( (  events2725 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2724 ) ) || ( (  is_dash_just1052 ) ( ( ( * (  ed2719 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2724 = ( false );
            ( (  clear_dash_screen1115 ) ( (  screen2722 ) ) );
            ( (  set_dash_screen_dash_fg1127 ) ( (  screen2722 ) ,  ( ( Color_53_Color16 ) ( ( Color16_55_White16 ) ) ) ) );
            ( (  set_dash_screen_dash_bg1128 ) ( (  screen2722 ) ,  ( ( Color_53_Color16 ) ( ( Color16_55_Black16 ) ) ) ) );
            ( (  fill_dash_default1130 ) ( (  screen2722 ) ) );
            struct funenv1211  temp1320 = ( (struct funenv1211){ .fun = render_dash_editor1211, .env =  envinst1211  } );
            ( temp1320.fun ( temp1320.env ,  (  screen2722 ) ,  (  ed2719 ) ) );
            bool  debug2774 = ( true );
            if ( (  debug2774 ) ) {
                ( (  draw_dash_str_dash_right1145 ) ( (  screen2722 ) ,  ( ( StrConcat_779_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2719 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1146 ) ( (  screen2722 ) ,  ( ( StrConcat_795_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2720 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1055 envinst1055 = {
                    .ed2719 =  ed2719 ,
                };
                struct Maybe_357  charcode2779 = ( (  fmap_dash_maybe1061 ) ( ( (  and_dash_maybe1054 ) ( ( (  try_dash_get961 ) ( ( & ( ( * (  ed2719 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size267 ) ( ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1055){ .fun = lam1055, .env = envinst1055 } ) ) ) ,  (  lam1321 ) ) );
                ( (  draw_dash_str_dash_right1147 ) ( (  screen2722 ) ,  ( ( StrConcat_797_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2779 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1148 ) ( (  screen2722 ) ,  ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2719 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2780 = ( ( * ( (  get_dash_row1159 ) ( (  ed2719 ) ,  ( ( ( * (  ed2719 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1149 ) ( (  screen2722 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2780 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2781 = ( (  from_dash_visual1158 ) ( ( ( * (  ed2719 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1150 ) ( (  screen2722 ) ,  ( ( StrConcat_825_StrConcat ) ( ( "goal x: " ) ,  (  gx2781 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1209  temp1322 = ( (struct funenv1209){ .fun = screen_dash_dims1209, .env =  envinst1209  } );
                struct Dims_1169  dim2782 = ( temp1322.fun ( temp1322.env ,  (  ed2719 ) ,  (  tui2720 ) ) );
                ( (  draw_dash_str_dash_right1151 ) ( (  screen2722 ) ,  ( ( StrConcat_832_StrConcat ) ( ( ( StrConcat_833_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2719 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2782 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
            }
            ( (  update_dash_animation1226 ) ( ( & ( ( * (  ed2719 ) ) .f_anim ) ) ,  (  screen2722 ) ) );
            ( (  render_dash_screen1119 ) ( (  screen2722 ) ) );
        }
        ( (  sync1093 ) ( (  tui2720 ) ) );
    }
    ( (  free_dash_screen1114 ) ( (  screen2722 ) ) );
    ( (  deinit1097 ) ( (  tui2720 ) ) );
}
