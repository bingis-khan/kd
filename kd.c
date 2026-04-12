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

static  bool   eq57 (    struct Cell_52  l2279 ,    struct Cell_52  r2281 ) {
    if ( ( !  eq47 ( ( (  l2279 ) .f_c ) , ( (  r2281 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq58 ( ( (  l2279 ) .f_fg ) , ( (  r2281 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq58 ( ( (  l2279 ) .f_bg ) , ( (  r2281 ) .f_bg ) ) ) ) {
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

static  size_t   op_dash_add90 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub91 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul92 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

static  size_t   op_dash_div93 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) / (  r275 ) );
}

struct Array_96 {
    uint32_t _arr [4];
};

struct SmolArray_95 {
    struct Array_96  f_arr;
};

static  struct SmolArray_95   from_dash_listlike94 (    struct Array_96  arr301 ) {
    return ( (struct SmolArray_95) { .f_arr = (  arr301 ) } );
}

struct Array_99 {
    uint32_t _arr [5];
};

struct SmolArray_98 {
    struct Array_99  f_arr;
};

static  struct SmolArray_98   from_dash_listlike97 (    struct Array_99  arr301 ) {
    return ( (struct SmolArray_98) { .f_arr = (  arr301 ) } );
}

struct Array_102 {
    uint32_t _arr [1];
};

struct SmolArray_101 {
    struct Array_102  f_arr;
};

static  struct SmolArray_101   from_dash_listlike100 (    struct Array_102  arr301 ) {
    return ( (struct SmolArray_101) { .f_arr = (  arr301 ) } );
}

static  int32_t   clock_dash_monotonic103 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   seek_dash_set104 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  int32_t   seek_dash_end105 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  int32_t   stdout_dash_fileno106 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   stdin_dash_fileno107 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  uint32_t   echo108 (  ) {
    return (  from_dash_integral36 ( 8 ) );
}

static  uint32_t   icanon109 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   isig110 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   iexten111 (  ) {
    return (  from_dash_integral36 ( 32768 ) );
}

static  uint32_t   brkint112 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   icrnl113 (  ) {
    return (  from_dash_integral36 ( 256 ) );
}

static  uint32_t   inpck114 (  ) {
    return (  from_dash_integral36 ( 16 ) );
}

static  uint32_t   istrip115 (  ) {
    return (  from_dash_integral36 ( 32 ) );
}

static  uint32_t   ixon116 (  ) {
    return (  from_dash_integral36 ( 1024 ) );
}

static  uint32_t   opost117 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   cs8118 (  ) {
    return (  from_dash_integral36 ( 48 ) );
}

static  size_t   vmin119 (  ) {
    return (  from_dash_integral11 ( 6 ) );
}

static  size_t   vtime120 (  ) {
    return (  from_dash_integral11 ( 5 ) );
}

static  int32_t   tcsa_dash_flush121 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  uint64_t   tiocgwinsz122 (  ) {
    return (  from_dash_integral39 ( 21523 ) );
}

static  const char*   undefined123 (  ) {
    const char*  temp124;
    return (  temp124 );
}

static  char   undefined125 (  ) {
    char  temp126;
    return (  temp126 );
}

struct DynStr_128 {
    struct Slice_5  f_contents;
};

static  struct DynStr_128   undefined127 (  ) {
    struct DynStr_128  temp129;
    return (  temp129 );
}

static  struct timespec   undefined130 (  ) {
    struct timespec  temp131;
    return (  temp131 );
}

struct Array_134 {
    uint8_t _arr [32];
};

struct Termios_133 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_134  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_133   undefined132 (  ) {
    struct Termios_133  temp135;
    return (  temp135 );
}

static  struct Cell_52   undefined136 (  ) {
    struct Cell_52  temp137;
    return (  temp137 );
}

enum MouseButton_139 {
    MouseButton_139_MouseLeft,
    MouseButton_139_MouseMiddle,
    MouseButton_139_MouseRight,
    MouseButton_139_ScrollUp,
    MouseButton_139_ScrollDown,
};

static  enum MouseButton_139   undefined138 (  ) {
    enum MouseButton_139  temp140;
    return (  temp140 );
}

static  bool   undefined141 (  ) {
    bool  temp142;
    return (  temp142 );
}

static  enum Unit_13   undefined143 (  ) {
    enum Unit_13  temp144;
    return (  temp144 );
}

static  struct Cell_52 *   undefined145 (  ) {
    struct Cell_52 *  temp146;
    return (  temp146 );
}

static  const char* *   offset_dash_ptr147 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp148;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp148 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr149 (    struct List_3 *  x450 ,    int64_t  count452 ) {
    struct List_3  temp150;
    return ( (struct List_3 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp150 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr151 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp152;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp152 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr153 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp154;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp154 ) ) ) ) ) ) ) ) );
}

static  struct Cell_52 *   offset_dash_ptr155 (    struct Cell_52 *  x450 ,    int64_t  count452 ) {
    struct Cell_52  temp156;
    return ( (struct Cell_52 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp156 ) ) ) ) ) ) ) ) );
}

struct TypeSize_158 {
    size_t  f_size;
};

static  struct TypeSize_158   get_dash_typesize157 (  ) {
    struct List_3  temp159;
    return ( (struct TypeSize_158) { .f_size = ( sizeof( ( (  temp159 ) ) ) ) } );
}

struct TypeSize_161 {
    size_t  f_size;
};

static  struct TypeSize_161   get_dash_typesize160 (  ) {
    char  temp162;
    return ( (struct TypeSize_161) { .f_size = ( sizeof( ( (  temp162 ) ) ) ) } );
}

struct TypeSize_164 {
    size_t  f_size;
};

static  struct TypeSize_164   get_dash_typesize163 (  ) {
    struct Cell_52  temp165;
    return ( (struct TypeSize_164) { .f_size = ( sizeof( ( (  temp165 ) ) ) ) } );
}

static  size_t   size_dash_of166 (    struct List_3 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of167 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of168 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of169 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of170 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Winsize_172 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of171 (    struct Winsize_172  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of173 (    enum Unit_13 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of174 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_176 {
    char _arr [32];
};

static  size_t   size_dash_of175 (    struct Array_176  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of177 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of178 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  char *   cast179 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  const char*   cast180 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  uint16_t *   cast181 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast182 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast183 (    struct Array_96 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast184 (    struct Array_99 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast185 (    struct Array_102 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t *   cast186 (    struct Array_134 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast187 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t   cast188 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  char *   cast189 (    struct Array_176 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char *   cast190 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  uint8_t *   cast191 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  int32_t   cast192 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  char   cast193 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast194 (    uint32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast195 (    size_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint32_t *   cast196 (    int64_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr197 (    struct List_3 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   cast_dash_ptr198 (    void *  p466 ) {
    return ( (struct List_3 * ) (  p466 ) );
}

static  void *   cast_dash_ptr199 (    struct List_3 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr200 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr201 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr202 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr203 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr204 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr205 (    struct Winsize_172 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr206 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr207 (    struct Termios_133 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  struct Cell_52 *   cast_dash_ptr208 (    void *  p466 ) {
    return ( (struct Cell_52 * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_211 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr210 (    struct Pollfd_211 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr212 (    struct Array_176 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr213 (    enum Unit_13 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr214 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr215 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr216 (    struct Cell_52 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   zeroed217 (  ) {
    struct List_3 *  temp218;
    struct List_3 *  x473 = (  temp218 );
    ( ( memset ) ( ( (  cast_dash_ptr197 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of166 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed219 (  ) {
    char *  temp220;
    char *  x473 = (  temp220 );
    ( ( memset ) ( ( (  cast_dash_ptr200 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of167 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed221 (  ) {
    char  temp222;
    char  x473 = (  temp222 );
    ( ( memset ) ( ( (  cast_dash_ptr202 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of168 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed223 (  ) {
    FILE *  temp224;
    FILE *  x473 = (  temp224 );
    ( ( memset ) ( ( (  cast_dash_ptr203 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of169 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed225 (  ) {
    uint32_t  temp226;
    uint32_t  x473 = (  temp226 );
    ( ( memset ) ( ( (  cast_dash_ptr204 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of170 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_172   zeroed227 (  ) {
    struct Winsize_172  temp228;
    struct Winsize_172  x473 = (  temp228 );
    ( ( memset ) ( ( (  cast_dash_ptr205 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of171 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed229 (  ) {
    enum Unit_13 *  temp230;
    enum Unit_13 *  x473 = (  temp230 );
    ( ( memset ) ( ( (  cast_dash_ptr206 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed231 (  ) {
    size_t  temp232;
    size_t  x473 = (  temp232 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of174 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_176   zeroed233 (  ) {
    struct Array_176  temp234;
    struct Array_176  x473 = (  temp234 );
    ( ( memset ) ( ( (  cast_dash_ptr212 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed235 (  ) {
    int64_t  temp236;
    int64_t  x473 = (  temp236 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of177 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed237 (  ) {
    struct timespec *  temp238;
    struct timespec *  x473 = (  temp238 );
    ( ( memset ) ( ( (  cast_dash_ptr215 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed239 (    uint16_t  x476 ) {
    uint32_t  temp240 = ( (  zeroed225 ) ( ) );
    uint32_t *  y477 = ( &temp240 );
    uint16_t *  yp478 = ( (  cast181 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed241 (    uint32_t  x476 ) {
    size_t  temp242 = ( (  zeroed231 ) ( ) );
    size_t *  y477 = ( &temp242 );
    uint32_t *  yp478 = ( (  cast187 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed243 (    char  x476 ) {
    int32_t  temp244 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp244 );
    char *  yp478 = ( (  cast190 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed245 (    uint8_t  x476 ) {
    int32_t  temp246 = ( (  zeroed63 ) ( ) );
    int32_t *  y477 = ( &temp246 );
    uint8_t *  yp478 = ( (  cast191 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed247 (    uint32_t  x476 ) {
    int64_t  temp248 = ( (  zeroed235 ) ( ) );
    int64_t *  y477 = ( &temp248 );
    uint32_t *  yp478 = ( (  cast196 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  struct List_3 *   null_dash_ptr249 (  ) {
    return ( (  zeroed217 ) ( ) );
}

static  char *   null_dash_ptr250 (  ) {
    return ( (  zeroed219 ) ( ) );
}

static  FILE *   null_dash_ptr251 (  ) {
    return ( (  zeroed223 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr252 (  ) {
    return ( (  zeroed229 ) ( ) );
}

static  struct timespec *   null_dash_ptr253 (  ) {
    return ( (  zeroed237 ) ( ) );
}

static  bool   is_dash_ptr_dash_null254 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr251 ) ( ) ) );
}

static  bool   ptr_dash_eq255 (    enum Unit_13 *  l488 ,    enum Unit_13 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_257 {
    enum {
        Maybe_257_None_t,
        Maybe_257_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_257_Just_s;
    } stuff;
};

static struct Maybe_257 Maybe_257_Just (  const char*  field0 ) {
    return ( struct Maybe_257 ) { .tag = Maybe_257_Just_t, .stuff = { .Maybe_257_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_257   from_dash_nullable_dash_c_dash_str256 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq255 ) ( ( (  cast182 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr252 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_257) { .tag = Maybe_257_None_t } );
    } else {
        return ( ( Maybe_257_Just ) ( (  s493 ) ) );
    }
}

static  uint32_t   i32_dash_u32258 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64259 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size260 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  int32_t   i64_dash_i32261 (    int64_t  x511 ) {
    return ( (int32_t ) (  x511 ) );
}

static  int32_t   size_dash_i32262 (    size_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   u16_dash_u32263 (    uint16_t  x520 ) {
    return ( (  cast_dash_on_dash_zeroed239 ) ( (  x520 ) ) );
}

static  size_t   u32_dash_size264 (    uint32_t  x526 ) {
    return ( (  cast_dash_on_dash_zeroed241 ) ( (  x526 ) ) );
}

static  int64_t   u32_dash_i64265 (    uint32_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed247 ) ( (  x529 ) ) );
}

static  int32_t   u32_dash_i32266 (    uint32_t  x535 ) {
    return ( (  cast192 ) ( (  x535 ) ) );
}

static  int32_t   u8_dash_i32267 (    uint8_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed245 ) ( (  x544 ) ) );
}

struct SliceIter_270 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_269 {
    struct SliceIter_270  f_s;
};

static  struct Scanner_269   into_dash_iter271 (    struct Scanner_269  self2178 ) {
    return (  self2178 );
}

static  struct Scanner_269   into_dash_iter268 (    struct Scanner_269 *  self547 ) {
    return ( (  into_dash_iter271 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_270   into_dash_iter274 (    struct Slice_5  self1329 ) {
    return ( (struct SliceIter_270) { .f_slice = (  self1329 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_281 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_281 StrConcat_281_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_281 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_280 {
    struct StrConcat_281  field0;
    size_t  field1;
};

static struct StrConcat_280 StrConcat_280_StrConcat (  struct StrConcat_281  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_280 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_279 {
    struct StrConcat_280  field0;
    const char*  field1;
};

static struct StrConcat_279 StrConcat_279_StrConcat (  struct StrConcat_280  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_279 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_278 {
    struct StrConcat_279  field0;
    size_t  field1;
};

static struct StrConcat_278 StrConcat_278_StrConcat (  struct StrConcat_279  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_278 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_277 {
    struct StrConcat_278  field0;
    const char*  field1;
};

static struct StrConcat_277 StrConcat_277_StrConcat (  struct StrConcat_278  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_277 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_284 {
    const char*  field0;
    struct StrConcat_277  field1;
};

static struct StrConcat_284 StrConcat_284_StrConcat (  const char*  field0 ,  struct StrConcat_277  field1 ) {
    return ( struct StrConcat_284 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_283 {
    struct StrConcat_284  field0;
    char  field1;
};

static struct StrConcat_283 StrConcat_283_StrConcat (  struct StrConcat_284  field0 ,  char  field1 ) {
    return ( struct StrConcat_283 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str290 (    struct StrConcat_281  self1092 ) {
    struct StrConcat_281  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str289 (    struct StrConcat_280  self1092 ) {
    struct StrConcat_280  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str290 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str288 (    struct StrConcat_279  self1092 ) {
    struct StrConcat_279  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str289 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str287 (    struct StrConcat_278  self1092 ) {
    struct StrConcat_278  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str288 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str286 (    struct StrConcat_277  self1092 ) {
    struct StrConcat_277  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str287 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str285 (    struct StrConcat_284  self1092 ) {
    struct StrConcat_284  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str286 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str282 (    struct StrConcat_283  self1092 ) {
    struct StrConcat_283  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str285 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic276 (    struct StrConcat_277  errmsg1244 ) {
    ( (  print_dash_str282 ) ( ( ( StrConcat_283_StrConcat ) ( ( ( StrConcat_284_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Slice_5   subslice275 (    struct Slice_5  slice1315 ,    size_t  from1317 ,    size_t  to1319 ) {
    if ( ( (  cmp9 ( (  from1317 ) , ( (  slice1315 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1319 ) , ( (  slice1315 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic276 ) ( ( ( StrConcat_277_StrConcat ) ( ( ( StrConcat_278_StrConcat ) ( ( ( StrConcat_279_StrConcat ) ( ( ( StrConcat_280_StrConcat ) ( ( ( StrConcat_281_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1317 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1319 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1315 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    char *  begin_dash_ptr1320 = ( (  offset_dash_ptr31 ) ( ( (  slice1315 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1317 ) ) ) ) );
    size_t  count1321 = (  op_dash_sub91 ( (  to1319 ) , (  from1317 ) ) );
    if ( (  cmp9 ( (  count1321 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1321 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1320 ) , .f_count = (  count1321 ) } );
}

static  struct SliceIter_270   into_dash_iter273 (    struct List_3  self1610 ) {
    return ( (  into_dash_iter274 ) ( ( (  subslice275 ) ( ( (  self1610 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1610 ) .f_count ) ) ) ) );
}

static  struct SliceIter_270   into_dash_iter272 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter273 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_292 {
    EmptyIter_292_EmptyIter,
};

static  enum EmptyIter_292   nil291 (  ) {
    return ( EmptyIter_292_EmptyIter );
}

static  enum EmptyIter_292   into_dash_iter293 (    enum EmptyIter_292  self552 ) {
    return (  self552 );
}

static  struct Maybe_49   next294 (    enum EmptyIter_292 *  dref554 ) {
    return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
}

struct LineIter_297 {
    struct DynStr_128  f_og;
    size_t  f_last;
};

struct env302 {
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

struct funenv302 {
    enum Unit_13  (*fun) (  struct env302  ,    struct List_3 *  );
    struct env302 env;
};

struct env301 {
    ;
    ;
    ;
    ;
    ;
    struct env302 envinst302;
};

struct funenv301 {
    enum Unit_13  (*fun) (  struct env301  ,    struct List_3 *  ,    char  );
    struct env301 env;
};

struct env300 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
};

struct funenv300 {
    enum Unit_13  (*fun) (  struct env300  ,    struct List_3 *  ,    struct DynStr_128  );
    struct env300 env;
};

struct env299 {
    struct env300 envinst300;
    ;
    ;
    ;
    ;
    ;
};

struct funenv299 {
    struct List_3  (*fun) (  struct env299  ,    struct DynStr_128  ,    enum CAllocator_4  );
    struct env299 env;
};

struct env298 {
    enum CAllocator_4  al2569;
    struct env299 envinst299;
};

struct funenv298 {
    struct List_3  (*fun) (  struct env298  ,    struct DynStr_128  );
    struct env298 env;
};

struct Map_296 {
    struct LineIter_297  field0;
    struct funenv298  field1;
};

static struct Map_296 Map_296_Map (  struct LineIter_297  field0 , struct funenv298  field1 ) {
    return ( struct Map_296 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_296   into_dash_iter295 (    struct Map_296  self558 ) {
    return (  self558 );
}

struct Take_305 {
    struct SliceIter_270  field0;
    size_t  field1;
};

static struct Take_305 Take_305_Take (  struct SliceIter_270  field0 ,  size_t  field1 ) {
    return ( struct Take_305 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env306 {
    int32_t  tab_dash_size2412;
    ;
    ;
    ;
};

struct funenv306 {
    int32_t  (*fun) (  struct env306  ,    char  );
    struct env306 env;
};

struct Map_304 {
    struct Take_305  field0;
    struct funenv306  field1;
};

static struct Map_304 Map_304_Map (  struct Take_305  field0 , struct funenv306  field1 ) {
    return ( struct Map_304 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_304   into_dash_iter303 (    struct Map_304  self558 ) {
    return (  self558 );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  struct List_3  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

struct Maybe_309 {
    enum {
        Maybe_309_None_t,
        Maybe_309_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_128  field0;
        } Maybe_309_Just_s;
    } stuff;
};

static struct Maybe_309 Maybe_309_Just (  struct DynStr_128  field0 ) {
    return ( struct Maybe_309 ) { .tag = Maybe_309_Just_t, .stuff = { .Maybe_309_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail312 (    struct Maybe_49  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_49  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_49_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined125 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_49_Just_t ) {
        return ( dref1260 .stuff .Maybe_49_Just_s .field0 );
    }
}

static  struct Maybe_49   try_dash_get313 (    struct Slice_5  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  elem_dash_ptr1299 = ( (  offset_dash_ptr31 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_49_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  char   get311 (    struct Slice_5  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail312 ) ( ( (  try_dash_get313 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar314 (  ) {
    return ( (  zeroed221 ) ( ) );
}

static  char   newline315 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_128   substr316 (    struct DynStr_128  s1425 ,    size_t  from1427 ,    size_t  to1429 ) {
    return ( (struct DynStr_128) { .f_contents = ( (  subslice275 ) ( ( (  s1425 ) .f_contents ) ,  (  from1427 ) ,  (  to1429 ) ) ) } );
}

static  struct Maybe_309   next310 (    struct LineIter_297 *  self1538 ) {
    if ( ( (  cmp9 ( ( ( * (  self1538 ) ) .f_last ) , ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq47 ( ( (  get311 ) ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1538 ) ) .f_last ) ) ) , ( (  nullchar314 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    size_t  i1539 = ( ( * (  self1538 ) ) .f_last );
    while ( ( ! ( (  eq47 ( ( (  get311 ) ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) ,  (  i1539 ) ) ) , ( (  newline315 ) ( ) ) ) ) && (  cmp9 ( (  i1539 ) , ( ( ( ( * (  self1538 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) ) ) {
        i1539 = (  op_dash_add90 ( (  i1539 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_128  line1540 = ( (  substr316 ) ( ( ( * (  self1538 ) ) .f_og ) ,  ( ( * (  self1538 ) ) .f_last ) ,  (  i1539 ) ) );
    i1539 = (  op_dash_add90 ( (  i1539 ) , (  from_dash_integral11 ( 1 ) ) ) );
    (*  self1538 ) .f_last = (  i1539 );
    return ( ( Maybe_309_Just ) ( (  line1540 ) ) );
}

static  struct Maybe_308   next307 (    struct Map_296 *  dref560 ) {
    struct Maybe_309  dref563 = ( (  next310 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_309_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else if ( dref563.tag == Maybe_309_Just_t ) {
        struct funenv298  temp317 = ( (* dref560 ) .field1 );
        return ( ( Maybe_308_Just ) ( ( temp317.fun ( temp317.env ,  ( dref563 .stuff .Maybe_309_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_319 {
    enum {
        Maybe_319_None_t,
        Maybe_319_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_319_Just_s;
    } stuff;
};

static struct Maybe_319 Maybe_319_Just (  int32_t  field0 ) {
    return ( struct Maybe_319 ) { .tag = Maybe_319_Just_t, .stuff = { .Maybe_319_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_49   next321 (    struct SliceIter_270 *  self1335 ) {
    size_t  off1336 = ( ( * (  self1335 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add90 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1335 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  elem1337 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1335 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1336 ) ) ) ) ) );
    (*  self1335 ) .f_current_dash_offset = (  op_dash_add90 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  elem1337 ) ) );
}

static  struct Maybe_49   next320 (    struct Take_305 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_49  x626 = ( (  next321 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub91 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
}

static  struct Maybe_319   next318 (    struct Map_304 *  dref560 ) {
    struct Maybe_49  dref563 = ( (  next320 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
    else if ( dref563.tag == Maybe_49_Just_t ) {
        struct funenv306  temp322 = ( (* dref560 ) .field1 );
        return ( ( Maybe_319_Just ) ( ( temp322.fun ( temp322.env ,  ( dref563 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_297   into_dash_iter324 (    struct LineIter_297  self1535 ) {
    return (  self1535 );
}

static  struct Map_296   map323 (    struct LineIter_297  iterable567 ,   struct funenv298  fun569 ) {
    struct LineIter_297  it570 = ( (  into_dash_iter324 ) ( (  iterable567 ) ) );
    return ( ( Map_296_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_305   into_dash_iter326 (    struct Take_305  self621 ) {
    return (  self621 );
}

static  struct Map_304   map325 (    struct Take_305  iterable567 ,   struct funenv306  fun569 ) {
    struct Take_305  it570 = ( (  into_dash_iter326 ) ( (  iterable567 ) ) );
    return ( ( Map_304_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct Slice_331 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_330 {
    struct Slice_331  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_332 {
    int32_t  f_from;
};

struct Zip_329 {
    struct SliceIter_330  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

struct Drop_328 {
    struct Zip_329  field0;
    size_t  field1;
};

static struct Drop_328 Drop_328_Drop (  struct Zip_329  field0 ,  size_t  field1 ) {
    return ( struct Drop_328 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_328   into_dash_iter327 (    struct Drop_328  self607 ) {
    return (  self607 );
}

struct Zip_335 {
    struct SliceIter_270  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

struct Drop_334 {
    struct Zip_335  field0;
    size_t  field1;
};

static struct Drop_334 Drop_334_Drop (  struct Zip_335  field0 ,  size_t  field1 ) {
    return ( struct Drop_334 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_334   into_dash_iter333 (    struct Drop_334  self607 ) {
    return (  self607 );
}

struct Drop_337 {
    struct SliceIter_270  field0;
    size_t  field1;
};

static struct Drop_337 Drop_337_Drop (  struct SliceIter_270  field0 ,  size_t  field1 ) {
    return ( struct Drop_337 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_337   into_dash_iter336 (    struct Drop_337  self607 ) {
    return (  self607 );
}

struct Drop_339 {
    struct SliceIter_330  field0;
    size_t  field1;
};

static struct Drop_339 Drop_339_Drop (  struct SliceIter_330  field0 ,  size_t  field1 ) {
    return ( struct Drop_339 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_339   into_dash_iter338 (    struct Drop_339  self607 ) {
    return (  self607 );
}

struct Tuple2_342 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_342 Tuple2_342_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_342 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_341 {
    enum {
        Maybe_341_None_t,
        Maybe_341_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_342  field0;
        } Maybe_341_Just_s;
    } stuff;
};

static struct Maybe_341 Maybe_341_Just (  struct Tuple2_342  field0 ) {
    return ( struct Maybe_341 ) { .tag = Maybe_341_Just_t, .stuff = { .Maybe_341_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_308   next344 (    struct SliceIter_330 *  self1335 ) {
    size_t  off1336 = ( ( * (  self1335 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add90 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1335 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    struct List_3  elem1337 = ( * ( (  offset_dash_ptr149 ) ( ( ( ( * (  self1335 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1336 ) ) ) ) ) );
    (*  self1335 ) .f_current_dash_offset = (  op_dash_add90 ( (  off1336 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_308_Just ) ( (  elem1337 ) ) );
}

static  struct Maybe_319   next345 (    struct FromIter_332 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add81 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_319_Just ) ( (  v669 ) ) );
}

static  struct Maybe_341   next343 (    struct Zip_329 *  self676 ) {
    struct Zip_329  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_308  dref678 = ( (  next344 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_308_None_t ) {
            return ( (struct Maybe_341) { .tag = Maybe_341_None_t } );
        }
        else if ( dref678.tag == Maybe_308_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_341) { .tag = Maybe_341_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next344 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_341_Just ) ( ( ( Tuple2_342_Tuple2 ) ( ( dref678 .stuff .Maybe_308_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_341   next340 (    struct Drop_328 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next343 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub91 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next343 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_348 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_348 Tuple2_348_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_348 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_347 {
    enum {
        Maybe_347_None_t,
        Maybe_347_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_348  field0;
        } Maybe_347_Just_s;
    } stuff;
};

static struct Maybe_347 Maybe_347_Just (  struct Tuple2_348  field0 ) {
    return ( struct Maybe_347 ) { .tag = Maybe_347_Just_t, .stuff = { .Maybe_347_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_347   next349 (    struct Zip_335 *  self676 ) {
    struct Zip_335  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next321 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next321 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_347   next346 (    struct Drop_334 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next349 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub91 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next349 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_308   next350 (    struct Drop_339 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next344 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub91 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next344 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_49   next351 (    struct Drop_337 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next321 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub91 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next321 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_329   into_dash_iter353 (    struct Zip_329  self673 ) {
    return (  self673 );
}

static  struct Drop_328   drop352 (    struct Zip_329  iterable614 ,    size_t  i616 ) {
    struct Zip_329  it617 = ( (  into_dash_iter353 ) ( (  iterable614 ) ) );
    return ( ( Drop_328_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_335   into_dash_iter355 (    struct Zip_335  self673 ) {
    return (  self673 );
}

static  struct Drop_334   drop354 (    struct Zip_335  iterable614 ,    size_t  i616 ) {
    struct Zip_335  it617 = ( (  into_dash_iter355 ) ( (  iterable614 ) ) );
    return ( ( Drop_334_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

struct List_357 {
    enum CAllocator_4  f_al;
    struct Slice_331  f_elements;
    size_t  f_count;
};

static  struct SliceIter_330   into_dash_iter359 (    struct Slice_331  self1329 ) {
    return ( (struct SliceIter_330) { .f_slice = (  self1329 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_331   subslice360 (    struct Slice_331  slice1315 ,    size_t  from1317 ,    size_t  to1319 ) {
    if ( ( (  cmp9 ( (  from1317 ) , ( (  slice1315 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1319 ) , ( (  slice1315 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic276 ) ( ( ( StrConcat_277_StrConcat ) ( ( ( StrConcat_278_StrConcat ) ( ( ( StrConcat_279_StrConcat ) ( ( ( StrConcat_280_StrConcat ) ( ( ( StrConcat_281_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1317 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1319 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1315 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    struct List_3 *  begin_dash_ptr1320 = ( (  offset_dash_ptr149 ) ( ( (  slice1315 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1317 ) ) ) ) );
    size_t  count1321 = (  op_dash_sub91 ( (  to1319 ) , (  from1317 ) ) );
    if ( (  cmp9 ( (  count1321 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1321 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_331) { .f_ptr = (  begin_dash_ptr1320 ) , .f_count = (  count1321 ) } );
}

static  struct SliceIter_330   into_dash_iter358 (    struct List_357  self1610 ) {
    return ( (  into_dash_iter359 ) ( ( (  subslice360 ) ( ( (  self1610 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1610 ) .f_count ) ) ) ) );
}

static  struct Drop_339   drop356 (    struct List_357  iterable614 ,    size_t  i616 ) {
    struct SliceIter_330  it617 = ( (  into_dash_iter358 ) ( (  iterable614 ) ) );
    return ( ( Drop_339_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Drop_337   drop361 (    struct List_3  iterable614 ,    size_t  i616 ) {
    struct SliceIter_270  it617 = ( (  into_dash_iter273 ) ( (  iterable614 ) ) );
    return ( ( Drop_337_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_305   take362 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_305_Take ) ( ( (  into_dash_iter272 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_364 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_364 Range_364_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_364 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_364   to363 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_364_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_366 {
    struct Range_364  field0;
    int32_t  field1;
};

static struct RangeIter_366 RangeIter_366_RangeIter (  struct Range_364  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_366 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_366   into_dash_iter365 (    struct Range_364  dref645 ) {
    return ( ( RangeIter_366_RangeIter ) ( ( ( Range_364_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_319   next367 (    struct RangeIter_366 *  self653 ) {
    struct RangeIter_366  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp74 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
        }
        struct Maybe_319  x658 = ( ( Maybe_319_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_366_RangeIter ) ( ( ( Range_364_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add81 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_332   from368 (    int32_t  f662 ) {
    return ( (struct FromIter_332) { .f_from = (  f662 ) } );
}

static  struct FromIter_332   into_dash_iter369 (    struct FromIter_332  it665 ) {
    return (  it665 );
}

struct Zip_371 {
    struct Drop_339  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_371   into_dash_iter370 (    struct Zip_371  self673 ) {
    return (  self673 );
}

struct Zip_373 {
    struct Drop_337  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_373   into_dash_iter372 (    struct Zip_373  self673 ) {
    return (  self673 );
}

struct IntStrIter_376 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_375 {
    struct IntStrIter_376  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_375   into_dash_iter374 (    struct Zip_375  self673 ) {
    return (  self673 );
}

struct ConstStrIter_380 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct StrConcatIter_383 {
    struct ConstStrIter_380  f_left;
    struct SliceIter_270  f_right;
};

struct AppendIter_384 {
    enum EmptyIter_292  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_382 {
    struct StrConcatIter_383  f_left;
    struct AppendIter_384  f_right;
};

struct StrCaseIter_381 {
    enum {
        StrCaseIter_381_StrCaseIter1_t,
        StrCaseIter_381_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_380  field0;
        } StrCaseIter_381_StrCaseIter1_s;
        struct {
            struct StrConcatIter_382  field0;
        } StrCaseIter_381_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_381 StrCaseIter_381_StrCaseIter1 (  struct ConstStrIter_380  field0 ) {
    return ( struct StrCaseIter_381 ) { .tag = StrCaseIter_381_StrCaseIter1_t, .stuff = { .StrCaseIter_381_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_381 StrCaseIter_381_StrCaseIter2 (  struct StrConcatIter_382  field0 ) {
    return ( struct StrCaseIter_381 ) { .tag = StrCaseIter_381_StrCaseIter2_t, .stuff = { .StrCaseIter_381_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_379 {
    struct ConstStrIter_380  f_left;
    struct StrCaseIter_381  f_right;
};

struct Zip_378 {
    struct StrConcatIter_379  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_378   into_dash_iter377 (    struct Zip_378  self673 ) {
    return (  self673 );
}

struct IntStrIter_388 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_387 {
    struct ConstStrIter_380  f_left;
    struct IntStrIter_388  f_right;
};

struct Zip_386 {
    struct StrConcatIter_387  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_386   into_dash_iter385 (    struct Zip_386  self673 ) {
    return (  self673 );
}

struct StrConcatIter_398 {
    struct AppendIter_384  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_397 {
    struct StrConcatIter_398  f_left;
    struct ConstStrIter_380  f_right;
};

struct StrConcatIter_396 {
    struct StrConcatIter_397  f_left;
    struct IntStrIter_376  f_right;
};

struct StrConcatIter_395 {
    struct StrConcatIter_396  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_394 {
    struct ConstStrIter_380  f_left;
    struct StrConcatIter_395  f_right;
};

struct StrConcatIter_393 {
    struct StrConcatIter_394  f_left;
    struct AppendIter_384  f_right;
};

struct StrCaseIter_392 {
    enum {
        StrCaseIter_392_StrCaseIter1_t,
        StrCaseIter_392_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_380  field0;
        } StrCaseIter_392_StrCaseIter1_s;
        struct {
            struct StrConcatIter_393  field0;
        } StrCaseIter_392_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_392 StrCaseIter_392_StrCaseIter1 (  struct ConstStrIter_380  field0 ) {
    return ( struct StrCaseIter_392 ) { .tag = StrCaseIter_392_StrCaseIter1_t, .stuff = { .StrCaseIter_392_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_392 StrCaseIter_392_StrCaseIter2 (  struct StrConcatIter_393  field0 ) {
    return ( struct StrCaseIter_392 ) { .tag = StrCaseIter_392_StrCaseIter2_t, .stuff = { .StrCaseIter_392_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_391 {
    struct ConstStrIter_380  f_left;
    struct StrCaseIter_392  f_right;
};

struct Zip_390 {
    struct StrConcatIter_391  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_390   into_dash_iter389 (    struct Zip_390  self673 ) {
    return (  self673 );
}

struct StrConcatIter_403 {
    struct ConstStrIter_380  f_left;
    struct IntStrIter_376  f_right;
};

struct StrConcatIter_402 {
    struct StrConcatIter_403  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_401 {
    struct StrConcatIter_402  f_left;
    struct IntStrIter_376  f_right;
};

struct Zip_400 {
    struct StrConcatIter_401  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_400   into_dash_iter399 (    struct Zip_400  self673 ) {
    return (  self673 );
}

struct IntStrIter_407 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_406 {
    struct ConstStrIter_380  f_left;
    struct IntStrIter_407  f_right;
};

struct Zip_405 {
    struct StrConcatIter_406  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_405   into_dash_iter404 (    struct Zip_405  self673 ) {
    return (  self673 );
}

struct Zip_409 {
    struct StrConcatIter_403  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_409   into_dash_iter408 (    struct Zip_409  self673 ) {
    return (  self673 );
}

struct StrConcatIter_413 {
    struct StrConcatIter_403  f_left;
    struct ConstStrIter_380  f_right;
};

struct StrConcatIter_412 {
    struct StrConcatIter_413  f_left;
    struct IntStrIter_376  f_right;
};

struct Zip_411 {
    struct StrConcatIter_412  f_left_dash_it;
    struct FromIter_332  f_right_dash_it;
};

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self673 ) {
    return (  self673 );
}

struct env418 {
    ;
    int32_t  base922;
};

struct funenv418 {
    int32_t  (*fun) (  struct env418  ,    int32_t  ,    int32_t  );
    struct env418 env;
};

static  int32_t   reduce417 (    struct Range_364  iterable812 ,    int32_t  base814 ,   struct funenv418  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_366  it818 = ( (  into_dash_iter365 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_319  dref819 = ( (  next367 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_319_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_319_Just_t ) {
            struct funenv418  temp419 = (  fun816 );
            x817 = ( temp419.fun ( temp419.env ,  ( dref819 .stuff .Maybe_319_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp420;
    return (  temp420 );
}

static  int32_t   lam418 (   struct env418 env ,    int32_t  item926 ,    int32_t  x928 ) {
    return (  op_dash_mul83 ( (  x928 ) , ( env.base922 ) ) );
}

static  int32_t   pow416 (    int32_t  base922 ,    int32_t  p924 ) {
    struct env418 envinst418 = {
        .base922 =  base922 ,
    };
    return ( (  reduce417 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv418){ .fun = lam418, .env = envinst418 } ) ) );
}

static  struct Maybe_49   next415 (    struct IntStrIter_376 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    int32_t  trim_dash_down1018 = ( (  pow416 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1019 = (  op_dash_div84 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    int32_t  upper_dash_mask1020 = (  op_dash_mul83 ( (  op_dash_div84 ( (  upper1019 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1021 = (  op_dash_sub82 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast193 ) ( (  op_dash_add81 ( (  digit1021 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_347   next414 (    struct Zip_375 *  self676 ) {
    struct Zip_375  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next415 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next415 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_341   next421 (    struct Zip_371 *  self676 ) {
    struct Zip_371  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_308  dref678 = ( (  next350 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_308_None_t ) {
            return ( (struct Maybe_341) { .tag = Maybe_341_None_t } );
        }
        else if ( dref678.tag == Maybe_308_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_341) { .tag = Maybe_341_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_341_Just ) ( ( ( Tuple2_342_Tuple2 ) ( ( dref678 .stuff .Maybe_308_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_347   next422 (    struct Zip_373 *  self676 ) {
    struct Zip_373  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next351 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next351 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next425 (    struct ConstStrIter_380 *  self996 ) {
    if ( (  cmp9 ( ( ( * (  self996 ) ) .f_i ) , ( (  i32_dash_size260 ) ( ( ( strlen ) ( ( ( * (  self996 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char *  char_dash_ptr997 = ( ( (  cast179 ) ( ( ( * (  self996 ) ) .f_ogstr ) ) ) );
    char  c998 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr997 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self996 ) ) .f_i ) ) ) ) ) );
    (*  self996 ) .f_i = (  op_dash_add90 ( ( ( * (  self996 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_49_Just ) ( (  c998 ) ) );
}

static  struct Maybe_49   next428 (    struct StrConcatIter_383 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next321 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next429 (    struct AppendIter_384 *  self776 ) {
    struct Maybe_49  dref777 = ( (  next294 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next427 (    struct StrConcatIter_382 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next428 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next426 (    struct StrCaseIter_381 *  self1105 ) {
    struct StrCaseIter_381 *  dref1106 = (  self1105 );
    if ( (* dref1106 ).tag == StrCaseIter_381_StrCaseIter1_t ) {
        return ( (  next425 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_381_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1106 ).tag == StrCaseIter_381_StrCaseIter2_t ) {
        return ( (  next427 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_381_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next424 (    struct StrConcatIter_379 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next426 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next423 (    struct Zip_378 *  self676 ) {
    struct Zip_378  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next424 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next424 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env435 {
    uint32_t  base922;
    ;
};

struct funenv435 {
    uint32_t  (*fun) (  struct env435  ,    int32_t  ,    uint32_t  );
    struct env435 env;
};

static  uint32_t   reduce434 (    struct Range_364  iterable812 ,    uint32_t  base814 ,   struct funenv435  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_366  it818 = ( (  into_dash_iter365 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_319  dref819 = ( (  next367 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_319_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_319_Just_t ) {
            struct funenv435  temp436 = (  fun816 );
            x817 = ( temp436.fun ( temp436.env ,  ( dref819 .stuff .Maybe_319_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp437;
    return (  temp437 );
}

static  uint32_t   lam435 (   struct env435 env ,    int32_t  item926 ,    uint32_t  x928 ) {
    return (  op_dash_mul88 ( (  x928 ) , ( env.base922 ) ) );
}

static  uint32_t   pow433 (    uint32_t  base922 ,    int32_t  p924 ) {
    struct env435 envinst435 = {
        .base922 =  base922 ,
    };
    return ( (  reduce434 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv435){ .fun = lam435, .env = envinst435 } ) ) );
}

static  struct Maybe_49   next432 (    struct IntStrIter_388 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    uint32_t  trim_dash_down1018 = ( (  pow433 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1019 = (  op_dash_div89 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    uint32_t  upper_dash_mask1020 = (  op_dash_mul88 ( (  op_dash_div89 ( (  upper1019 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1021 = (  op_dash_sub87 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast194 ) ( (  op_dash_add86 ( (  digit1021 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_49   next431 (    struct StrConcatIter_387 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next430 (    struct Zip_386 *  self676 ) {
    struct Zip_386  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next431 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next431 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next446 (    struct StrConcatIter_398 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next445 (    struct StrConcatIter_397 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next446 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next444 (    struct StrConcatIter_396 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next445 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next415 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next443 (    struct StrConcatIter_395 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next444 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next442 (    struct StrConcatIter_394 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next441 (    struct StrConcatIter_393 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next442 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next440 (    struct StrCaseIter_392 *  self1105 ) {
    struct StrCaseIter_392 *  dref1106 = (  self1105 );
    if ( (* dref1106 ).tag == StrCaseIter_392_StrCaseIter1_t ) {
        return ( (  next425 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_392_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1106 ).tag == StrCaseIter_392_StrCaseIter2_t ) {
        return ( (  next441 ) ( ( & ( (* dref1106 ) .stuff .StrCaseIter_392_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_49   next439 (    struct StrConcatIter_391 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next438 (    struct Zip_390 *  self676 ) {
    struct Zip_390  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next439 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next439 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next450 (    struct StrConcatIter_403 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next415 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next449 (    struct StrConcatIter_402 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next450 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next448 (    struct StrConcatIter_401 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next449 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next415 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next447 (    struct Zip_400 *  self676 ) {
    struct Zip_400  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next448 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next448 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env456 {
    size_t  base922;
    ;
};

struct funenv456 {
    size_t  (*fun) (  struct env456  ,    int32_t  ,    size_t  );
    struct env456 env;
};

static  size_t   reduce455 (    struct Range_364  iterable812 ,    size_t  base814 ,   struct funenv456  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_366  it818 = ( (  into_dash_iter365 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_319  dref819 = ( (  next367 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_319_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_319_Just_t ) {
            struct funenv456  temp457 = (  fun816 );
            x817 = ( temp457.fun ( temp457.env ,  ( dref819 .stuff .Maybe_319_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp458;
    return (  temp458 );
}

static  size_t   lam456 (   struct env456 env ,    int32_t  item926 ,    size_t  x928 ) {
    return (  op_dash_mul92 ( (  x928 ) , ( env.base922 ) ) );
}

static  size_t   pow454 (    size_t  base922 ,    int32_t  p924 ) {
    struct env456 envinst456 = {
        .base922 =  base922 ,
    };
    return ( (  reduce455 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  p924 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv456){ .fun = lam456, .env = envinst456 } ) ) );
}

static  struct Maybe_49   next453 (    struct IntStrIter_407 *  self1017 ) {
    if ( (  cmp74 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    size_t  trim_dash_down1018 = ( (  pow454 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1019 = (  op_dash_div93 ( ( ( * (  self1017 ) ) .f_int ) , (  trim_dash_down1018 ) ) );
    size_t  upper_dash_mask1020 = (  op_dash_mul92 ( (  op_dash_div93 ( (  upper1019 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1021 = (  op_dash_sub91 ( (  upper1019 ) , (  upper_dash_mask1020 ) ) );
    (*  self1017 ) .f_len = (  op_dash_sub82 ( ( ( * (  self1017 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1022 = ( (  cast195 ) ( (  op_dash_add90 ( (  digit1021 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_49_Just ) ( (  digit_dash_char1022 ) ) );
}

static  struct Maybe_49   next452 (    struct StrConcatIter_406 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next453 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next451 (    struct Zip_405 *  self676 ) {
    struct Zip_405  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next452 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next452 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_347   next459 (    struct Zip_409 *  self676 ) {
    struct Zip_409  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next450 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_49   next462 (    struct StrConcatIter_413 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next450 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next425 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_49   next461 (    struct StrConcatIter_412 *  self1083 ) {
    struct Maybe_49  dref1084 = ( (  next462 ) ( ( & ( ( * (  self1083 ) ) .f_left ) ) ) );
    if ( dref1084.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_49_Just ) ( ( dref1084 .stuff .Maybe_49_Just_s .field0 ) ) );
    }
    else if ( dref1084.tag == Maybe_49_None_t ) {
        return ( (  next415 ) ( ( & ( ( * (  self1083 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_347   next460 (    struct Zip_411 *  self676 ) {
    struct Zip_411  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_49  dref678 = ( (  next461 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_49_None_t ) {
            return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
        }
        else if ( dref678.tag == Maybe_49_Just_t ) {
            struct Maybe_319  dref680 = ( (  next345 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_319_None_t ) {
                return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
            }
            else if ( dref680.tag == Maybe_319_Just_t ) {
                ( (  next461 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next345 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_347_Just ) ( ( ( Tuple2_348_Tuple2 ) ( ( dref678 .stuff .Maybe_49_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_319_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_329   zip463 (    struct Slice_331  left684 ,    struct FromIter_332  right686 ) {
    struct SliceIter_330  left_dash_it687 = ( (  into_dash_iter359 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_329) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_335   zip464 (    struct Slice_5  left684 ,    struct FromIter_332  right686 ) {
    struct SliceIter_270  left_dash_it687 = ( (  into_dash_iter274 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_335) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_329   zip465 (    struct List_357  left684 ,    struct FromIter_332  right686 ) {
    struct SliceIter_330  left_dash_it687 = ( (  into_dash_iter358 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_329) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_335   zip466 (    struct List_3  left684 ,    struct FromIter_332  right686 ) {
    struct SliceIter_270  left_dash_it687 = ( (  into_dash_iter273 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_335) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_376   into_dash_iter468 (    struct IntStrIter_376  self1014 ) {
    return (  self1014 );
}

static  struct Zip_375   zip467 (    struct IntStrIter_376  left684 ,    struct FromIter_332  right686 ) {
    struct IntStrIter_376  left_dash_it687 = ( (  into_dash_iter468 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_375) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_373   zip469 (    struct Drop_337  left684 ,    struct FromIter_332  right686 ) {
    struct Drop_337  left_dash_it687 = ( (  into_dash_iter336 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_373) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_371   zip470 (    struct Drop_339  left684 ,    struct FromIter_332  right686 ) {
    struct Drop_339  left_dash_it687 = ( (  into_dash_iter338 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_371) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_379   into_dash_iter472 (    struct StrConcatIter_379  self1080 ) {
    return (  self1080 );
}

static  struct Zip_378   zip471 (    struct StrConcatIter_379  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_379  left_dash_it687 = ( (  into_dash_iter472 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_378) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_387   into_dash_iter474 (    struct StrConcatIter_387  self1080 ) {
    return (  self1080 );
}

static  struct Zip_386   zip473 (    struct StrConcatIter_387  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_387  left_dash_it687 = ( (  into_dash_iter474 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_386) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_391   into_dash_iter476 (    struct StrConcatIter_391  self1080 ) {
    return (  self1080 );
}

static  struct Zip_390   zip475 (    struct StrConcatIter_391  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_391  left_dash_it687 = ( (  into_dash_iter476 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_390) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_401   into_dash_iter478 (    struct StrConcatIter_401  self1080 ) {
    return (  self1080 );
}

static  struct Zip_400   zip477 (    struct StrConcatIter_401  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_401  left_dash_it687 = ( (  into_dash_iter478 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_400) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_406   into_dash_iter480 (    struct StrConcatIter_406  self1080 ) {
    return (  self1080 );
}

static  struct Zip_405   zip479 (    struct StrConcatIter_406  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_406  left_dash_it687 = ( (  into_dash_iter480 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_405) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_403   into_dash_iter482 (    struct StrConcatIter_403  self1080 ) {
    return (  self1080 );
}

static  struct Zip_409   zip481 (    struct StrConcatIter_403  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_403  left_dash_it687 = ( (  into_dash_iter482 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_409) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_412   into_dash_iter484 (    struct StrConcatIter_412  self1080 ) {
    return (  self1080 );
}

static  struct Zip_411   zip483 (    struct StrConcatIter_412  left684 ,    struct FromIter_332  right686 ) {
    struct StrConcatIter_412  left_dash_it687 = ( (  into_dash_iter484 ) ( (  left684 ) ) );
    struct FromIter_332  right_dash_it688 = ( (  into_dash_iter369 ) ( (  right686 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_486 {
    struct Scanner_269  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_486   into_dash_iter485 (    struct TakeWhile_486  self718 ) {
    return (  self718 );
}

struct TakeWhile_488 {
    struct SliceIter_270  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_488   into_dash_iter487 (    struct TakeWhile_488  self718 ) {
    return (  self718 );
}

struct DropWhile_491 {
    struct SliceIter_270  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_490 {
    struct DropWhile_491  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_490   into_dash_iter489 (    struct TakeWhile_490  self718 ) {
    return (  self718 );
}

struct DropWhile_495 {
    struct DropWhile_491  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_494 {
    struct DropWhile_495  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_493 {
    struct DropWhile_494  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_493   into_dash_iter492 (    struct TakeWhile_493  self718 ) {
    return (  self718 );
}

struct TakeWhile_497 {
    struct DropWhile_494  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_497   into_dash_iter496 (    struct TakeWhile_497  self718 ) {
    return (  self718 );
}

static  struct Maybe_49   next499 (    struct Scanner_269 *  self2175 ) {
    return ( (  next321 ) ( ( & ( ( * (  self2175 ) ) .f_s ) ) ) );
}

static  struct Maybe_49   next498 (    struct TakeWhile_486 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next499 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next500 (    struct TakeWhile_488 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next321 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next502 (    struct DropWhile_491 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next321 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next321 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next501 (    struct TakeWhile_490 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next502 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next505 (    struct DropWhile_495 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next502 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next502 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next504 (    struct DropWhile_494 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next505 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_49  dref737 = ( (  next505 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next503 (    struct TakeWhile_493 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next504 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_49   next506 (    struct TakeWhile_497 *  self721 ) {
    struct Maybe_49  mx722 = ( (  next504 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_486   take_dash_while507 (    struct Scanner_269 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_486) { .f_it = ( (  into_dash_iter268 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_488   take_dash_while508 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_488) { .f_it = ( (  into_dash_iter272 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_494   into_dash_iter510 (    struct DropWhile_494  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_497   take_dash_while509 (    struct DropWhile_494  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_497) { .f_it = ( (  into_dash_iter510 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_493   take_dash_while511 (    struct DropWhile_494  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_493) { .f_it = ( (  into_dash_iter510 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_491   into_dash_iter513 (    struct DropWhile_491  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_490   take_dash_while512 (    struct DropWhile_491  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_490) { .f_it = ( (  into_dash_iter513 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_495   into_dash_iter514 (    struct DropWhile_495  self733 ) {
    return (  self733 );
}

static  struct SliceIter_270   into_dash_iter516 (    struct DynStr_128  self1422 ) {
    return ( (  into_dash_iter274 ) ( ( (  self1422 ) .f_contents ) ) );
}

static  struct DropWhile_491   drop_dash_while515 (    struct DynStr_128  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_491) { .f_it = ( (  into_dash_iter516 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_495   drop_dash_while517 (    struct DropWhile_491  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_495) { .f_it = ( (  into_dash_iter513 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_494   drop_dash_while518 (    struct DropWhile_495  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_494) { .f_it = ( (  into_dash_iter514 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_384   append519 (    enum EmptyIter_292  it760 ,    char  e762 ) {
    return ( (struct AppendIter_384) { .f_it = ( (  into_dash_iter293 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_384   cons520 (    enum EmptyIter_292  it765 ,    char  e767 ) {
    return ( (  append519 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_384   single521 (    char  e770 ) {
    return ( (  cons520 ) ( ( (  nil291 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_526 {
    enum {
        Key_526_Escape_t,
        Key_526_Enter_t,
        Key_526_Tab_t,
        Key_526_Backspace_t,
        Key_526_Char_t,
        Key_526_Up_t,
        Key_526_Down_t,
        Key_526_Left_t,
        Key_526_Right_t,
        Key_526_Home_t,
        Key_526_End_t,
        Key_526_PageUp_t,
        Key_526_PageDown_t,
        Key_526_Delete_t,
        Key_526_Insert_t,
        Key_526_F1_t,
        Key_526_F2_t,
        Key_526_F3_t,
        Key_526_F4_t,
        Key_526_F5_t,
        Key_526_F6_t,
        Key_526_F7_t,
        Key_526_F8_t,
        Key_526_F9_t,
        Key_526_F10_t,
        Key_526_F11_t,
        Key_526_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_526_Char_s;
    } stuff;
};

static struct Key_526 Key_526_Char (  char  field0 ) {
    return ( struct Key_526 ) { .tag = Key_526_Char_t, .stuff = { .Key_526_Char_s = { .field0 = field0 } } };
};

struct MouseEvent_527 {
    enum MouseButton_139  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_525 {
    enum {
        InputEvent_525_Key_t,
        InputEvent_525_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_526  field0;
        } InputEvent_525_Key_s;
        struct {
            struct MouseEvent_527  field0;
        } InputEvent_525_Mouse_s;
    } stuff;
};

static struct InputEvent_525 InputEvent_525_Key (  struct Key_526  field0 ) {
    return ( struct InputEvent_525 ) { .tag = InputEvent_525_Key_t, .stuff = { .InputEvent_525_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_525 InputEvent_525_Mouse (  struct MouseEvent_527  field0 ) {
    return ( struct InputEvent_525 ) { .tag = InputEvent_525_Mouse_t, .stuff = { .InputEvent_525_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_524 {
    enum {
        Maybe_524_None_t,
        Maybe_524_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_525  field0;
        } Maybe_524_Just_s;
    } stuff;
};

static struct Maybe_524 Maybe_524_Just (  struct InputEvent_525  field0 ) {
    return ( struct Maybe_524 ) { .tag = Maybe_524_Just_t, .stuff = { .Maybe_524_Just_s = { .field0 = field0 } } };
};

struct FunIter_523 {
    struct Maybe_524 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_523   into_dash_iter522 (    struct FunIter_523  self782 ) {
    return (  self782 );
}

static  struct Maybe_524   next528 (    struct FunIter_523 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
    }
    struct Maybe_524  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_524_Just_t ) {
        return ( ( Maybe_524_Just ) ( ( dref786 .stuff .Maybe_524_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_524_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
    }
}

static  struct FunIter_523   from_dash_function529 (    struct Maybe_524 (*  fun790 )(  ) ) {
    return ( (struct FunIter_523) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env531 {
    struct Slice_331  new_dash_slice1624;
    ;
    ;
};

struct funenv531 {
    enum Unit_13  (*fun) (  struct env531  ,    struct Tuple2_342  );
    struct env531 env;
};

static  enum Unit_13   for_dash_each530 (    struct Zip_329  iterable793 ,   struct funenv531  fun795 ) {
    struct Zip_329  temp532 = ( (  into_dash_iter353 ) ( (  iterable793 ) ) );
    struct Zip_329 *  it796 = ( &temp532 );
    while ( ( true ) ) {
        struct Maybe_341  dref797 = ( (  next343 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_341_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_341_Just_t ) {
            struct funenv531  temp533 = (  fun795 );
            ( temp533.fun ( temp533.env ,  ( dref797 .stuff .Maybe_341_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env535 {
    struct Slice_5  new_dash_slice1624;
    ;
    ;
};

struct funenv535 {
    enum Unit_13  (*fun) (  struct env535  ,    struct Tuple2_348  );
    struct env535 env;
};

static  enum Unit_13   for_dash_each534 (    struct Zip_335  iterable793 ,   struct funenv535  fun795 ) {
    struct Zip_335  temp536 = ( (  into_dash_iter355 ) ( (  iterable793 ) ) );
    struct Zip_335 *  it796 = ( &temp536 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next349 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv535  temp537 = (  fun795 );
            ( temp537.fun ( temp537.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env539 {
    struct env301 envinst301;
    struct List_3 *  list1671;
};

struct funenv539 {
    enum Unit_13  (*fun) (  struct env539  ,    char  );
    struct env539 env;
};

static  enum Unit_13   for_dash_each538 (    struct DynStr_128  iterable793 ,   struct funenv539  fun795 ) {
    struct SliceIter_270  temp540 = ( (  into_dash_iter516 ) ( (  iterable793 ) ) );
    struct SliceIter_270 *  it796 = ( &temp540 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next321 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv539  temp541 = (  fun795 );
            ( temp541.fun ( temp541.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env545 {
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

struct funenv545 {
    enum Unit_13  (*fun) (  struct env545  ,    struct List_357 *  );
    struct env545 env;
};

struct env544 {
    ;
    ;
    ;
    ;
    ;
    struct env545 envinst545;
};

struct funenv544 {
    enum Unit_13  (*fun) (  struct env544  ,    struct List_357 *  ,    struct List_3  );
    struct env544 env;
};

struct env543 {
    struct env544 envinst544;
    struct List_357 *  list1671;
};

struct funenv543 {
    enum Unit_13  (*fun) (  struct env543  ,    struct List_3  );
    struct env543 env;
};

static  enum Unit_13   for_dash_each542 (    struct Map_296  iterable793 ,   struct funenv543  fun795 ) {
    struct Map_296  temp546 = ( (  into_dash_iter295 ) ( (  iterable793 ) ) );
    struct Map_296 *  it796 = ( &temp546 );
    while ( ( true ) ) {
        struct Maybe_308  dref797 = ( (  next307 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_308_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_308_Just_t ) {
            struct funenv543  temp547 = (  fun795 );
            ( temp547.fun ( temp547.env ,  ( dref797 .stuff .Maybe_308_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_550 {
    struct List_3  f_chars;
};

struct env549 {
    struct env301 envinst301;
    struct StrBuilder_550 *  builder1910;
};

struct funenv549 {
    enum Unit_13  (*fun) (  struct env549  ,    char  );
    struct env549 env;
};

static  struct ConstStrIter_380   into_dash_iter552 (    struct ConstStrIter_380  self993 ) {
    return (  self993 );
}

static  enum Unit_13   for_dash_each548 (    struct ConstStrIter_380  iterable793 ,   struct funenv549  fun795 ) {
    struct ConstStrIter_380  temp551 = ( (  into_dash_iter552 ) ( (  iterable793 ) ) );
    struct ConstStrIter_380 *  it796 = ( &temp551 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next425 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv549  temp553 = (  fun795 );
            ( temp553.fun ( temp553.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_556 {
    struct Cell_52 *  f_ptr;
    size_t  f_count;
};

struct env555 {
    struct Slice_556  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv555 {
    enum Unit_13  (*fun) (  struct env555  ,    int32_t  );
    struct env555 env;
};

static  enum Unit_13   for_dash_each554 (    struct Range_364  iterable793 ,   struct funenv555  fun795 ) {
    struct RangeIter_366  temp557 = ( (  into_dash_iter365 ) ( (  iterable793 ) ) );
    struct RangeIter_366 *  it796 = ( &temp557 );
    while ( ( true ) ) {
        struct Maybe_319  dref797 = ( (  next367 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_319_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_319_Just_t ) {
            struct funenv555  temp558 = (  fun795 );
            ( temp558.fun ( temp558.env ,  ( dref797 .stuff .Maybe_319_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env560 {
    struct Slice_556  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv560 {
    enum Unit_13  (*fun) (  struct env560  ,    int32_t  );
    struct env560 env;
};

static  enum Unit_13   for_dash_each559 (    struct Range_364  iterable793 ,   struct funenv560  fun795 ) {
    struct RangeIter_366  temp561 = ( (  into_dash_iter365 ) ( (  iterable793 ) ) );
    struct RangeIter_366 *  it796 = ( &temp561 );
    while ( ( true ) ) {
        struct Maybe_319  dref797 = ( (  next367 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_319_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_319_Just_t ) {
            struct funenv560  temp562 = (  fun795 );
            ( temp562.fun ( temp562.env ,  ( dref797 .stuff .Maybe_319_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env564 {
    struct Scanner_269 *  it898;
    ;
};

struct funenv564 {
    struct Maybe_49  (*fun) (  struct env564  ,    int32_t  );
    struct env564 env;
};

static  enum Unit_13   for_dash_each563 (    struct Range_364  iterable793 ,   struct funenv564  fun795 ) {
    struct RangeIter_366  temp565 = ( (  into_dash_iter365 ) ( (  iterable793 ) ) );
    struct RangeIter_366 *  it796 = ( &temp565 );
    while ( ( true ) ) {
        struct Maybe_319  dref797 = ( (  next367 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_319_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_319_Just_t ) {
            struct funenv564  temp566 = (  fun795 );
            ( temp566.fun ( temp566.env ,  ( dref797 .stuff .Maybe_319_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env568 {
    struct env301 envinst301;
    struct List_3 *  list1671;
};

struct funenv568 {
    enum Unit_13  (*fun) (  struct env568  ,    char  );
    struct env568 env;
};

static  enum Unit_13   for_dash_each567 (    struct List_3 *  iterable793 ,   struct funenv568  fun795 ) {
    struct SliceIter_270  temp569 = ( (  into_dash_iter272 ) ( (  iterable793 ) ) );
    struct SliceIter_270 *  it796 = ( &temp569 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next321 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv568  temp570 = (  fun795 );
            ( temp570.fun ( temp570.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env572 {
    ;
    ;
    struct List_357 *  list1643;
    ;
    ;
};

struct funenv572 {
    enum Unit_13  (*fun) (  struct env572  ,    struct Tuple2_342  );
    struct env572 env;
};

static  enum Unit_13   for_dash_each571 (    struct Drop_328  iterable793 ,   struct funenv572  fun795 ) {
    struct Drop_328  temp573 = ( (  into_dash_iter327 ) ( (  iterable793 ) ) );
    struct Drop_328 *  it796 = ( &temp573 );
    while ( ( true ) ) {
        struct Maybe_341  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_341_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_341_Just_t ) {
            struct funenv572  temp574 = (  fun795 );
            ( temp574.fun ( temp574.env ,  ( dref797 .stuff .Maybe_341_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env576 {
    struct Slice_331  dest1360;
    ;
    ;
};

struct funenv576 {
    enum Unit_13  (*fun) (  struct env576  ,    struct Tuple2_342  );
    struct env576 env;
};

static  enum Unit_13   for_dash_each575 (    struct Zip_329  iterable793 ,   struct funenv576  fun795 ) {
    struct Zip_329  temp577 = ( (  into_dash_iter353 ) ( (  iterable793 ) ) );
    struct Zip_329 *  it796 = ( &temp577 );
    while ( ( true ) ) {
        struct Maybe_341  dref797 = ( (  next343 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_341_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_341_Just_t ) {
            struct funenv576  temp578 = (  fun795 );
            ( temp578.fun ( temp578.env ,  ( dref797 .stuff .Maybe_341_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env580 {
    ;
    ;
    struct List_3 *  list1643;
    ;
    ;
};

struct funenv580 {
    enum Unit_13  (*fun) (  struct env580  ,    struct Tuple2_348  );
    struct env580 env;
};

static  enum Unit_13   for_dash_each579 (    struct Drop_334  iterable793 ,   struct funenv580  fun795 ) {
    struct Drop_334  temp581 = ( (  into_dash_iter333 ) ( (  iterable793 ) ) );
    struct Drop_334 *  it796 = ( &temp581 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next346 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv580  temp582 = (  fun795 );
            ( temp582.fun ( temp582.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env584 {
    struct Slice_5  dest1360;
    ;
    ;
};

struct funenv584 {
    enum Unit_13  (*fun) (  struct env584  ,    struct Tuple2_348  );
    struct env584 env;
};

static  enum Unit_13   for_dash_each583 (    struct Zip_335  iterable793 ,   struct funenv584  fun795 ) {
    struct Zip_335  temp585 = ( (  into_dash_iter355 ) ( (  iterable793 ) ) );
    struct Zip_335 *  it796 = ( &temp585 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next349 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv584  temp586 = (  fun795 );
            ( temp586.fun ( temp586.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env588 {
    struct env301 envinst301;
    struct List_3 *  list1671;
};

struct funenv588 {
    enum Unit_13  (*fun) (  struct env588  ,    char  );
    struct env588 env;
};

static  enum Unit_13   for_dash_each587 (    struct TakeWhile_488  iterable793 ,   struct funenv588  fun795 ) {
    struct TakeWhile_488  temp589 = ( (  into_dash_iter487 ) ( (  iterable793 ) ) );
    struct TakeWhile_488 *  it796 = ( &temp589 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next500 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv588  temp590 = (  fun795 );
            ( temp590.fun ( temp590.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env592 {
    struct env301 envinst301;
    struct List_3 *  list1671;
};

struct funenv592 {
    enum Unit_13  (*fun) (  struct env592  ,    char  );
    struct env592 env;
};

static  enum Unit_13   for_dash_each591 (    struct Slice_5  iterable793 ,   struct funenv592  fun795 ) {
    struct SliceIter_270  temp593 = ( (  into_dash_iter274 ) ( (  iterable793 ) ) );
    struct SliceIter_270 *  it796 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next321 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv592  temp594 = (  fun795 );
            ( temp594.fun ( temp594.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env596 {
    struct env301 envinst301;
    struct StrBuilder_550 *  builder1910;
};

struct funenv596 {
    enum Unit_13  (*fun) (  struct env596  ,    char  );
    struct env596 env;
};

static  enum Unit_13   for_dash_each595 (    struct TakeWhile_493  iterable793 ,   struct funenv596  fun795 ) {
    struct TakeWhile_493  temp597 = ( (  into_dash_iter492 ) ( (  iterable793 ) ) );
    struct TakeWhile_493 *  it796 = ( &temp597 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next503 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv596  temp598 = (  fun795 );
            ( temp598.fun ( temp598.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env600 {
    struct env301 envinst301;
    struct StrBuilder_550 *  builder1910;
};

struct funenv600 {
    enum Unit_13  (*fun) (  struct env600  ,    char  );
    struct env600 env;
};

static  enum Unit_13   for_dash_each599 (    struct TakeWhile_497  iterable793 ,   struct funenv600  fun795 ) {
    struct TakeWhile_497  temp601 = ( (  into_dash_iter496 ) ( (  iterable793 ) ) );
    struct TakeWhile_497 *  it796 = ( &temp601 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next506 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv600  temp602 = (  fun795 );
            ( temp602.fun ( temp602.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env605 {
    ;
    ;
    struct env301 envinst301;
};

struct funenv605 {
    enum Unit_13  (*fun) (  struct env605  ,    struct StrBuilder_550 *  ,    char  );
    struct env605 env;
};

struct env604 {
    struct env605 envinst605;
    struct StrBuilder_550 *  sb2606;
};

struct funenv604 {
    enum Unit_13  (*fun) (  struct env604  ,    char  );
    struct env604 env;
};

static  enum Unit_13   for_dash_each603 (    struct List_3  iterable793 ,   struct funenv604  fun795 ) {
    struct SliceIter_270  temp606 = ( (  into_dash_iter273 ) ( (  iterable793 ) ) );
    struct SliceIter_270 *  it796 = ( &temp606 );
    while ( ( true ) ) {
        struct Maybe_49  dref797 = ( (  next321 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_49_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_49_Just_t ) {
            struct funenv604  temp607 = (  fun795 );
            ( temp607.fun ( temp607.env ,  ( dref797 .stuff .Maybe_49_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_609 {
    struct Slice_331  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_609   into_dash_iter611 (    struct SliceAddressIter_609  self1350 ) {
    return (  self1350 );
}

struct Maybe_612 {
    enum {
        Maybe_612_None_t,
        Maybe_612_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_612_Just_s;
    } stuff;
};

static struct Maybe_612 Maybe_612_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_612 ) { .tag = Maybe_612_Just_t, .stuff = { .Maybe_612_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_612   next613 (    struct SliceAddressIter_609 *  self1353 ) {
    size_t  off1354 = ( ( * (  self1353 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add90 ( (  off1354 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1353 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_612) { .tag = Maybe_612_None_t } );
    }
    struct List_3 *  elem1355 = ( (  offset_dash_ptr149 ) ( ( ( ( * (  self1353 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1354 ) ) ) ) );
    (*  self1353 ) .f_current_dash_offset = (  op_dash_add90 ( (  off1354 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_612_Just ) ( (  elem1355 ) ) );
}

static  enum Unit_13   for_dash_each608 (    struct SliceAddressIter_609  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_609  temp610 = ( (  into_dash_iter611 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_609 *  it796 = ( &temp610 );
    while ( ( true ) ) {
        struct Maybe_612  dref797 = ( (  next613 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_612_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_612_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_612_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env615 {
    struct Slice_556  s1393;
    ;
    struct Cell_52 (*  fun1395 )(    struct Cell_52  );
    ;
    ;
};

struct funenv615 {
    enum Unit_13  (*fun) (  struct env615  ,    int32_t  );
    struct env615 env;
};

static  enum Unit_13   for_dash_each614 (    struct Range_364  iterable793 ,   struct funenv615  fun795 ) {
    struct RangeIter_366  temp616 = ( (  into_dash_iter365 ) ( (  iterable793 ) ) );
    struct RangeIter_366 *  it796 = ( &temp616 );
    while ( ( true ) ) {
        struct Maybe_319  dref797 = ( (  next367 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_319_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_319_Just_t ) {
            struct funenv615  temp617 = (  fun795 );
            ( temp617.fun ( temp617.env ,  ( dref797 .stuff .Maybe_319_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_622 {
    ColorPalette_622_Palette8,
    ColorPalette_622_Palette16,
    ColorPalette_622_Palette256,
    ColorPalette_622_PaletteRGB,
};

struct Tui_621 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_622  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_133  f_orig_dash_termios;
};

struct Screen_620 {
    enum CAllocator_4  f_al;
    struct Tui_621 *  f_tui;
    struct Slice_556  f_current;
    struct Slice_556  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_53  f_default_dash_fg;
    struct Color_53  f_default_dash_bg;
};

struct env619 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv619 {
    enum Unit_13  (*fun) (  struct env619  ,    struct Tuple2_348  );
    struct env619 env;
};

static  enum Unit_13   for_dash_each618 (    struct Zip_375  iterable793 ,   struct funenv619  fun795 ) {
    struct Zip_375  temp623 = ( (  into_dash_iter374 ) ( (  iterable793 ) ) );
    struct Zip_375 *  it796 = ( &temp623 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next414 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv619  temp624 = (  fun795 );
            ( temp624.fun ( temp624.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env626 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv626 {
    enum Unit_13  (*fun) (  struct env626  ,    struct Tuple2_348  );
    struct env626 env;
};

static  enum Unit_13   for_dash_each625 (    struct Zip_378  iterable793 ,   struct funenv626  fun795 ) {
    struct Zip_378  temp627 = ( (  into_dash_iter377 ) ( (  iterable793 ) ) );
    struct Zip_378 *  it796 = ( &temp627 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next423 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv626  temp628 = (  fun795 );
            ( temp628.fun ( temp628.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env630 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv630 {
    enum Unit_13  (*fun) (  struct env630  ,    struct Tuple2_348  );
    struct env630 env;
};

static  enum Unit_13   for_dash_each629 (    struct Zip_386  iterable793 ,   struct funenv630  fun795 ) {
    struct Zip_386  temp631 = ( (  into_dash_iter385 ) ( (  iterable793 ) ) );
    struct Zip_386 *  it796 = ( &temp631 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next430 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv630  temp632 = (  fun795 );
            ( temp632.fun ( temp632.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env634 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv634 {
    enum Unit_13  (*fun) (  struct env634  ,    struct Tuple2_348  );
    struct env634 env;
};

static  enum Unit_13   for_dash_each633 (    struct Zip_390  iterable793 ,   struct funenv634  fun795 ) {
    struct Zip_390  temp635 = ( (  into_dash_iter389 ) ( (  iterable793 ) ) );
    struct Zip_390 *  it796 = ( &temp635 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next438 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv634  temp636 = (  fun795 );
            ( temp636.fun ( temp636.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env638 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv638 {
    enum Unit_13  (*fun) (  struct env638  ,    struct Tuple2_348  );
    struct env638 env;
};

static  enum Unit_13   for_dash_each637 (    struct Zip_400  iterable793 ,   struct funenv638  fun795 ) {
    struct Zip_400  temp639 = ( (  into_dash_iter399 ) ( (  iterable793 ) ) );
    struct Zip_400 *  it796 = ( &temp639 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next447 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv638  temp640 = (  fun795 );
            ( temp640.fun ( temp640.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env642 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv642 {
    enum Unit_13  (*fun) (  struct env642  ,    struct Tuple2_348  );
    struct env642 env;
};

static  enum Unit_13   for_dash_each641 (    struct Zip_405  iterable793 ,   struct funenv642  fun795 ) {
    struct Zip_405  temp643 = ( (  into_dash_iter404 ) ( (  iterable793 ) ) );
    struct Zip_405 *  it796 = ( &temp643 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next451 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv642  temp644 = (  fun795 );
            ( temp644.fun ( temp644.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env646 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv646 {
    enum Unit_13  (*fun) (  struct env646  ,    struct Tuple2_348  );
    struct env646 env;
};

static  enum Unit_13   for_dash_each645 (    struct Zip_409  iterable793 ,   struct funenv646  fun795 ) {
    struct Zip_409  temp647 = ( (  into_dash_iter408 ) ( (  iterable793 ) ) );
    struct Zip_409 *  it796 = ( &temp647 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next459 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv646  temp648 = (  fun795 );
            ( temp648.fun ( temp648.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env650 {
    struct Screen_620 *  screen2384;
    ;
    struct Color_53  fg2395;
    size_t  i2392;
    ;
    struct Color_53  bg2396;
    ;
};

struct funenv650 {
    enum Unit_13  (*fun) (  struct env650  ,    struct Tuple2_348  );
    struct env650 env;
};

static  enum Unit_13   for_dash_each649 (    struct Zip_411  iterable793 ,   struct funenv650  fun795 ) {
    struct Zip_411  temp651 = ( (  into_dash_iter410 ) ( (  iterable793 ) ) );
    struct Zip_411 *  it796 = ( &temp651 );
    while ( ( true ) ) {
        struct Maybe_347  dref797 = ( (  next460 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_347_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_347_Just_t ) {
            struct funenv650  temp652 = (  fun795 );
            ( temp652.fun ( temp652.env ,  ( dref797 .stuff .Maybe_347_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_654 {
    struct SmolArray_95  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_654   into_dash_iter655 (    struct SmolArray_95  self1477 ) {
    return ( (struct SmolArrayIter_654) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct Maybe_656 {
    enum {
        Maybe_656_None_t,
        Maybe_656_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_656_Just_s;
    } stuff;
};

static struct Maybe_656 Maybe_656_Just (  uint32_t  field0 ) {
    return ( struct Maybe_656 ) { .tag = Maybe_656_Just_t, .stuff = { .Maybe_656_Just_s = { .field0 = field0 } } };
};

struct StrConcat_662 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_662 StrConcat_662_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_662 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_661 {
    struct StrConcat_662  field0;
    char  field1;
};

static struct StrConcat_661 StrConcat_661_StrConcat (  struct StrConcat_662  field0 ,  char  field1 ) {
    return ( struct StrConcat_661 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_665 {
    const char*  field0;
    struct StrConcat_661  field1;
};

static struct StrConcat_665 StrConcat_665_StrConcat (  const char*  field0 ,  struct StrConcat_661  field1 ) {
    return ( struct StrConcat_665 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_664 {
    struct StrConcat_665  field0;
    char  field1;
};

static struct StrConcat_664 StrConcat_664_StrConcat (  struct StrConcat_665  field0 ,  char  field1 ) {
    return ( struct StrConcat_664 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str669 (    int32_t  self1029 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1029 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str668 (    struct StrConcat_662  self1092 ) {
    struct StrConcat_662  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str669 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str667 (    struct StrConcat_661  self1092 ) {
    struct StrConcat_661  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str668 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str666 (    struct StrConcat_665  self1092 ) {
    struct StrConcat_665  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str667 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str663 (    struct StrConcat_664  self1092 ) {
    struct StrConcat_664  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str666 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic660 (    struct StrConcat_661  errmsg1244 ) {
    ( (  print_dash_str663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr659 (    struct Array_96 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast183 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr151 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get658 (    struct Array_96 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr659 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_656   next657 (    struct SmolArrayIter_654 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_656) { .tag = Maybe_656_None_t } );
    }
    uint32_t  e1486 = ( (  get658 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add90 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_656_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce653 (    struct SmolArray_95  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_654  it818 = ( (  into_dash_iter655 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_656  dref819 = ( (  next657 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_656_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_656_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_656_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp670;
    return (  temp670 );
}

struct SmolArrayIter_672 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_672   into_dash_iter673 (    struct SmolArray_98  self1477 ) {
    return ( (struct SmolArrayIter_672) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr676 (    struct Array_99 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast184 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr151 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get675 (    struct Array_99 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr676 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_656   next674 (    struct SmolArrayIter_672 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_656) { .tag = Maybe_656_None_t } );
    }
    uint32_t  e1486 = ( (  get675 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add90 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_656_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce671 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_672  it818 = ( (  into_dash_iter673 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_656  dref819 = ( (  next674 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_656_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_656_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_656_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp677;
    return (  temp677 );
}

struct SmolArrayIter_679 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_679   into_dash_iter680 (    struct SmolArray_101  self1477 ) {
    return ( (struct SmolArrayIter_679) { .f_backing = (  self1477 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr683 (    struct Array_102 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1453 = ( ( (  cast185 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr151 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  uint32_t   get682 (    struct Array_102 *  arr1456 ,    size_t  i1459 ) {
    return ( * ( (  get_dash_ptr683 ) ( (  arr1456 ) ,  (  i1459 ) ) ) );
}

static  struct Maybe_656   next681 (    struct SmolArrayIter_679 *  self1484 ) {
    if ( (  cmp9 ( ( ( * (  self1484 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_656) { .tag = Maybe_656_None_t } );
    }
    uint32_t  e1486 = ( (  get682 ) ( ( & ( ( ( * (  self1484 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1484 ) ) .f_cur ) ) );
    (*  self1484 ) .f_cur = (  op_dash_add90 ( ( ( * (  self1484 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_656_Just ) ( (  e1486 ) ) );
}

static  uint32_t   reduce678 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_679  it818 = ( (  into_dash_iter680 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_656  dref819 = ( (  next681 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_656_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_656_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_656_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp684;
    return (  temp684 );
}

struct Maybe_686 {
    enum {
        Maybe_686_None_t,
        Maybe_686_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_686_Just_s;
    } stuff;
};

static struct Maybe_686 Maybe_686_Just (  int64_t  field0 ) {
    return ( struct Maybe_686 ) { .tag = Maybe_686_Just_t, .stuff = { .Maybe_686_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_686   reduce685 (    struct TakeWhile_486  iterable812 ,    struct Maybe_686  base814 ,    struct Maybe_686 (*  fun816 )(    char  ,    struct Maybe_686  ) ) {
    struct Maybe_686  x817 = (  base814 );
    struct TakeWhile_486  it818 = ( (  into_dash_iter485 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next498 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_686  temp687;
    return (  temp687 );
}

static  size_t   reduce688 (    struct TakeWhile_486  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_486  it818 = ( (  into_dash_iter485 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next498 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp689;
    return (  temp689 );
}

static  int32_t   reduce690 (    struct Map_304  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_304  it818 = ( (  into_dash_iter303 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_319  dref819 = ( (  next318 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_319_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_319_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_319_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp691;
    return (  temp691 );
}

static  size_t   reduce692 (    struct TakeWhile_488  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_488  it818 = ( (  into_dash_iter487 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next500 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp693;
    return (  temp693 );
}

static  struct Maybe_686   reduce694 (    struct TakeWhile_490  iterable812 ,    struct Maybe_686  base814 ,    struct Maybe_686 (*  fun816 )(    char  ,    struct Maybe_686  ) ) {
    struct Maybe_686  x817 = (  base814 );
    struct TakeWhile_490  it818 = ( (  into_dash_iter489 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next501 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_686  temp695;
    return (  temp695 );
}

static  size_t   reduce696 (    struct IntStrIter_376  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_376  it818 = ( (  into_dash_iter468 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next415 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp697;
    return (  temp697 );
}

static  size_t   reduce698 (    struct StrConcatIter_379  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_379  it818 = ( (  into_dash_iter472 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next424 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp699;
    return (  temp699 );
}

static  size_t   reduce700 (    struct StrConcatIter_387  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_387  it818 = ( (  into_dash_iter474 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next431 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp701;
    return (  temp701 );
}

static  size_t   reduce702 (    struct StrConcatIter_391  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_391  it818 = ( (  into_dash_iter476 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next439 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp703;
    return (  temp703 );
}

static  size_t   reduce704 (    struct StrConcatIter_401  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_401  it818 = ( (  into_dash_iter478 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next448 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp705;
    return (  temp705 );
}

static  size_t   reduce706 (    struct StrConcatIter_406  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_406  it818 = ( (  into_dash_iter480 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next452 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp707;
    return (  temp707 );
}

static  size_t   reduce708 (    struct StrConcatIter_403  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_403  it818 = ( (  into_dash_iter482 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next450 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp709;
    return (  temp709 );
}

static  size_t   reduce710 (    struct StrConcatIter_412  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_412  it818 = ( (  into_dash_iter484 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref819 = ( (  next461 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_49_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_49_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_49_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp711;
    return (  temp711 );
}

static  size_t   lam713 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count712 (    struct TakeWhile_486  it823 ) {
    return ( (  reduce688 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam713 ) ) );
}

static  size_t   lam715 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count714 (    struct TakeWhile_488  it823 ) {
    return ( (  reduce692 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam715 ) ) );
}

static  size_t   lam717 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count716 (    struct IntStrIter_376  it823 ) {
    return ( (  reduce696 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam717 ) ) );
}

static  size_t   lam719 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count718 (    struct StrConcatIter_379  it823 ) {
    return ( (  reduce698 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam719 ) ) );
}

static  size_t   lam721 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count720 (    struct StrConcatIter_387  it823 ) {
    return ( (  reduce700 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam721 ) ) );
}

static  size_t   lam723 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count722 (    struct StrConcatIter_391  it823 ) {
    return ( (  reduce702 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam723 ) ) );
}

static  size_t   lam725 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count724 (    struct StrConcatIter_401  it823 ) {
    return ( (  reduce704 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam725 ) ) );
}

static  size_t   lam727 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count726 (    struct StrConcatIter_406  it823 ) {
    return ( (  reduce706 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam727 ) ) );
}

static  size_t   lam729 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count728 (    struct StrConcatIter_403  it823 ) {
    return ( (  reduce708 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam729 ) ) );
}

static  size_t   lam731 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add90 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count730 (    struct StrConcatIter_412  it823 ) {
    return ( (  reduce710 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam731 ) ) );
}

static  int32_t   lam733 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add81 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum732 (    struct Map_304  it829 ) {
    return ( (  reduce690 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam733 ) ) );
}

static  struct Maybe_49   head734 (    struct TakeWhile_486  it861 ) {
    struct TakeWhile_486  temp735 = ( (  into_dash_iter485 ) ( (  it861 ) ) );
    return ( (  next498 ) ( ( &temp735 ) ) );
}

static  struct Maybe_49   head736 (    struct TakeWhile_490  it861 ) {
    struct TakeWhile_490  temp737 = ( (  into_dash_iter489 ) ( (  it861 ) ) );
    return ( (  next501 ) ( ( &temp737 ) ) );
}

static  struct Maybe_49   head738 (    struct TakeWhile_493  it861 ) {
    struct TakeWhile_493  temp739 = ( (  into_dash_iter492 ) ( (  it861 ) ) );
    return ( (  next503 ) ( ( &temp739 ) ) );
}

static  bool   null740 (    struct TakeWhile_486  it864 ) {
    return (  eq48 ( ( (  head734 ) ( (  it864 ) ) ) , ( (struct Maybe_49) { .tag = Maybe_49_None_t } ) ) );
}

static  bool   null741 (    struct TakeWhile_493  it864 ) {
    return (  eq48 ( ( (  head738 ) ( (  it864 ) ) ) , ( (struct Maybe_49) { .tag = Maybe_49_None_t } ) ) );
}

static  struct Maybe_49   lam564 (   struct env564 env ,    int32_t  dref901 ) {
    return ( (  next499 ) ( ( env.it898 ) ) );
}

static  enum Unit_13   drop_prime_742 (    struct Scanner_269 *  it898 ,    size_t  n900 ) {
    struct env564 envinst564 = {
        .it898 =  it898 ,
    };
    ( (  for_dash_each563 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32262 ) ( (  n900 ) ) ) ) ) ,  ( (struct funenv564){ .fun = lam564, .env = envinst564 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or743 (    uint32_t  l941 ,    uint32_t  r943 ) {
    return ( (  l941 ) | (  r943 ) );
}

static  uint32_t   u32_dash_ors744 (    struct SmolArray_95  vals946 ) {
    return ( (  reduce653 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or743 ) ) );
}

static  uint32_t   u32_dash_ors745 (    struct SmolArray_98  vals946 ) {
    return ( (  reduce671 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or743 ) ) );
}

static  uint32_t   u32_dash_ors746 (    struct SmolArray_101  vals946 ) {
    return ( (  reduce678 ) ( (  vals946 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or743 ) ) );
}

static  uint32_t   u32_dash_and747 (    uint32_t  l949 ,    uint32_t  r951 ) {
    return ( (  l949 ) & (  r951 ) );
}

static  uint32_t   u32_dash_neg748 (    uint32_t  l954 ) {
    return ( ~ (  l954 ) );
}

static  int64_t   mod749 (    int64_t  l957 ,    int64_t  d959 ) {
    int64_t  r960 = (  op_dash_div79 ( (  l957 ) , (  d959 ) ) );
    int64_t  m961 = (  op_dash_sub78 ( (  l957 ) , (  op_dash_mul32 ( (  r960 ) , (  d959 ) ) ) ) );
    if ( (  cmp73 ( (  m961 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add77 ( (  d959 ) , (  m961 ) ) );
    } else {
        return (  m961 );
    }
}

static  int32_t   min750 (    int32_t  l964 ,    int32_t  r966 ) {
    if ( (  cmp74 ( (  l964 ) , (  r966 ) ) == 0 ) ) {
        return (  l964 );
    } else {
        return (  r966 );
    }
}

static  int32_t   max751 (    int32_t  l969 ,    int32_t  r971 ) {
    if ( (  cmp74 ( (  l969 ) , (  r971 ) ) == 2 ) ) {
        return (  l969 );
    } else {
        return (  r971 );
    }
}

static  int32_t   clamp752 (    int32_t  x980 ,    int32_t  mn982 ,    int32_t  mx984 ) {
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

static  struct ConstStrIter_380   into_dash_iter753 (    const char*  self990 ) {
    return ( (struct ConstStrIter_380) { .f_ogstr = (  self990 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct ConstStrIter_380   chars754 (    const char*  self1004 ) {
    return ( (  into_dash_iter753 ) ( (  self1004 ) ) );
}

static  struct AppendIter_384   chars755 (    char  self1010 ) {
    return ( (  single521 ) ( (  self1010 ) ) );
}

static  int32_t   count_dash_digits756 (    size_t  self1025 ) {
    if ( (  eq45 ( (  self1025 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1026 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1025 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1025 = (  op_dash_div93 ( (  self1025 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1026 = (  op_dash_add81 ( (  digits1026 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1026 );
}

static  int32_t   count_dash_digits757 (    int32_t  self1025 ) {
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

static  int32_t   count_dash_digits758 (    uint32_t  self1025 ) {
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

static  struct IntStrIter_376   chars759 (    int32_t  self1032 ) {
    return ( (struct IntStrIter_376) { .f_int = (  self1032 ) , .f_len = ( (  count_dash_digits757 ) ( (  self1032 ) ) ) } );
}

static  enum Unit_13   print_dash_str760 (    uint32_t  self1035 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1035 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_388   chars761 (    uint32_t  self1038 ) {
    return ( (struct IntStrIter_388) { .f_int = (  self1038 ) , .f_len = ( (  count_dash_digits758 ) ( (  self1038 ) ) ) } );
}

static  enum Unit_13   print_dash_str762 (    uint8_t  self1041 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32267 ) ( (  self1041 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_407   chars763 (    size_t  self1056 ) {
    return ( (struct IntStrIter_407) { .f_int = (  self1056 ) , .f_len = ( (  count_dash_digits756 ) ( (  self1056 ) ) ) } );
}

struct Mode_766 {
    enum {
        Mode_766_Normal_t,
        Mode_766_Insert_t,
        Mode_766_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_550  field0;
        } Mode_766_Cmd_s;
    } stuff;
};

static struct Mode_766 Mode_766_Cmd (  struct StrBuilder_550  field0 ) {
    return ( struct Mode_766 ) { .tag = Mode_766_Cmd_t, .stuff = { .Mode_766_Cmd_s = { .field0 = field0 } } };
};

struct StrConcat_765 {
    const char*  field0;
    struct Mode_766  field1;
};

static struct StrConcat_765 StrConcat_765_StrConcat (  const char*  field0 ,  struct Mode_766  field1 ) {
    return ( struct StrConcat_765 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_770 {
    const char*  field0;
    struct DynStr_128  field1;
};

static struct StrConcat_770 StrConcat_770_StrConcat (  const char*  field0 ,  struct DynStr_128  field1 ) {
    return ( struct StrConcat_770 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_769 {
    struct StrConcat_770  field0;
    char  field1;
};

static struct StrConcat_769 StrConcat_769_StrConcat (  struct StrConcat_770  field0 ,  char  field1 ) {
    return ( struct StrConcat_769 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_768 {
    enum {
        StrCase_768_StrCase1_t,
        StrCase_768_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_768_StrCase1_s;
        struct {
            struct StrConcat_769  field0;
        } StrCase_768_StrCase2_s;
    } stuff;
};

static struct StrCase_768 StrCase_768_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_768 ) { .tag = StrCase_768_StrCase1_t, .stuff = { .StrCase_768_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_768 StrCase_768_StrCase2 (  struct StrConcat_769  field0 ) {
    return ( struct StrCase_768 ) { .tag = StrCase_768_StrCase2_t, .stuff = { .StrCase_768_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_128   as_dash_str772 (    struct StrBuilder_550 *  builder1936 ) {
    return ( (struct DynStr_128) { .f_contents = ( (  subslice275 ) ( ( ( ( * (  builder1936 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder1936 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_270   chars779 (    struct DynStr_128  self1419 ) {
    return ( (  into_dash_iter274 ) ( ( (  self1419 ) .f_contents ) ) );
}

static  struct StrConcatIter_383   into_dash_iter778 (    struct StrConcat_770  dref1087 ) {
    return ( (struct StrConcatIter_383) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars779 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_383   chars777 (    struct StrConcat_770  self1098 ) {
    return ( (  into_dash_iter778 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_382   into_dash_iter776 (    struct StrConcat_769  dref1087 ) {
    return ( (struct StrConcatIter_382) { .f_left = ( (  chars777 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars755 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_382   chars775 (    struct StrConcat_769  self1098 ) {
    return ( (  into_dash_iter776 ) ( (  self1098 ) ) );
}

static  struct StrCaseIter_381   into_dash_iter774 (    struct StrCase_768  self1111 ) {
    struct StrCase_768  dref1112 = (  self1111 );
    if ( dref1112.tag == StrCase_768_StrCase1_t ) {
        return ( ( StrCaseIter_381_StrCaseIter1 ) ( ( (  chars754 ) ( ( dref1112 .stuff .StrCase_768_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1112.tag == StrCase_768_StrCase2_t ) {
        return ( ( StrCaseIter_381_StrCaseIter2 ) ( ( (  chars775 ) ( ( dref1112 .stuff .StrCase_768_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_381   chars773 (    struct StrCase_768  self1123 ) {
    return ( (  into_dash_iter774 ) ( (  self1123 ) ) );
}

static  struct StrCaseIter_381   chars767 (    struct Mode_766  self2435 ) {
    struct StrCase_768  temp771;
    struct StrCase_768  c2436 = (  temp771 );
    struct Mode_766  dref2437 = (  self2435 );
    if ( dref2437.tag == Mode_766_Normal_t ) {
        c2436 = ( ( StrCase_768_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2437.tag == Mode_766_Insert_t ) {
        c2436 = ( ( StrCase_768_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2437.tag == Mode_766_Cmd_t ) {
        struct DynStr_128  ss2439 = ( (  as_dash_str772 ) ( ( & ( dref2437 .stuff .Mode_766_Cmd_s .field0 ) ) ) );
        c2436 = ( ( StrCase_768_StrCase2 ) ( ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_770_StrConcat ) ( ( "Cmd(" ) ,  (  ss2439 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars773 ) ( (  c2436 ) ) );
}

static  struct StrConcatIter_379   into_dash_iter764 (    struct StrConcat_765  dref1087 ) {
    return ( (struct StrConcatIter_379) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars767 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_781 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_387   into_dash_iter780 (    struct StrConcat_781  dref1087 ) {
    return ( (struct StrConcatIter_387) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars761 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_783 {
    const char*  field0;
    struct Maybe_347  field1;
};

static struct StrConcat_783 StrConcat_783_StrConcat (  const char*  field0 ,  struct Maybe_347  field1 ) {
    return ( struct StrConcat_783 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_787 {
    const char*  field0;
    struct Tuple2_348  field1;
};

static struct StrConcat_787 StrConcat_787_StrConcat (  const char*  field0 ,  struct Tuple2_348  field1 ) {
    return ( struct StrConcat_787 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_786 {
    struct StrConcat_787  field0;
    char  field1;
};

static struct StrConcat_786 StrConcat_786_StrConcat (  struct StrConcat_787  field0 ,  char  field1 ) {
    return ( struct StrConcat_786 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_785 {
    enum {
        StrCase_785_StrCase1_t,
        StrCase_785_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_785_StrCase1_s;
        struct {
            struct StrConcat_786  field0;
        } StrCase_785_StrCase2_s;
    } stuff;
};

static struct StrCase_785 StrCase_785_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_785 ) { .tag = StrCase_785_StrCase1_t, .stuff = { .StrCase_785_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_785 StrCase_785_StrCase2 (  struct StrConcat_786  field0 ) {
    return ( struct StrCase_785 ) { .tag = StrCase_785_StrCase2_t, .stuff = { .StrCase_785_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_800 {
    char  field0;
    char  field1;
};

static struct StrConcat_800 StrConcat_800_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_800 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_799 {
    struct StrConcat_800  field0;
    const char*  field1;
};

static struct StrConcat_799 StrConcat_799_StrConcat (  struct StrConcat_800  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_799 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_798 {
    struct StrConcat_799  field0;
    int32_t  field1;
};

static struct StrConcat_798 StrConcat_798_StrConcat (  struct StrConcat_799  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_798 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_797 {
    struct StrConcat_798  field0;
    char  field1;
};

static struct StrConcat_797 StrConcat_797_StrConcat (  struct StrConcat_798  field0 ,  char  field1 ) {
    return ( struct StrConcat_797 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_398   into_dash_iter807 (    struct StrConcat_800  dref1087 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars755 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars755 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   chars806 (    struct StrConcat_800  self1098 ) {
    return ( (  into_dash_iter807 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter805 (    struct StrConcat_799  dref1087 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars806 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars804 (    struct StrConcat_799  self1098 ) {
    return ( (  into_dash_iter805 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_396   into_dash_iter803 (    struct StrConcat_798  dref1087 ) {
    return ( (struct StrConcatIter_396) { .f_left = ( (  chars804 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars759 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_396   chars802 (    struct StrConcat_798  self1098 ) {
    return ( (  into_dash_iter803 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter801 (    struct StrConcat_797  dref1087 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars802 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars755 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_395   chars796 (    struct StrConcat_797  self1098 ) {
    return ( (  into_dash_iter801 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_395   chars795 (    struct Tuple2_348  dref1148 ) {
    return ( (  chars796 ) ( ( ( StrConcat_797_StrConcat ) ( ( ( StrConcat_798_StrConcat ) ( ( ( StrConcat_799_StrConcat ) ( ( ( StrConcat_800_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1148 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1148 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_394   into_dash_iter794 (    struct StrConcat_787  dref1087 ) {
    return ( (struct StrConcatIter_394) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars795 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_394   chars793 (    struct StrConcat_787  self1098 ) {
    return ( (  into_dash_iter794 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter792 (    struct StrConcat_786  dref1087 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars793 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars755 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_393   chars791 (    struct StrConcat_786  self1098 ) {
    return ( (  into_dash_iter792 ) ( (  self1098 ) ) );
}

static  struct StrCaseIter_392   into_dash_iter790 (    struct StrCase_785  self1111 ) {
    struct StrCase_785  dref1112 = (  self1111 );
    if ( dref1112.tag == StrCase_785_StrCase1_t ) {
        return ( ( StrCaseIter_392_StrCaseIter1 ) ( ( (  chars754 ) ( ( dref1112 .stuff .StrCase_785_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1112.tag == StrCase_785_StrCase2_t ) {
        return ( ( StrCaseIter_392_StrCaseIter2 ) ( ( (  chars791 ) ( ( dref1112 .stuff .StrCase_785_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_392   chars789 (    struct StrCase_785  self1123 ) {
    return ( (  into_dash_iter790 ) ( (  self1123 ) ) );
}

static  struct StrCaseIter_392   chars784 (    struct Maybe_347  self1137 ) {
    struct StrCase_785  temp788;
    struct StrCase_785  c1138 = (  temp788 );
    struct Maybe_347  dref1139 = (  self1137 );
    if ( dref1139.tag == Maybe_347_None_t ) {
        c1138 = ( ( StrCase_785_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1139.tag == Maybe_347_Just_t ) {
        c1138 = ( ( StrCase_785_StrCase2 ) ( ( ( StrConcat_786_StrConcat ) ( ( ( StrConcat_787_StrConcat ) ( ( "Just(" ) ,  ( dref1139 .stuff .Maybe_347_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars789 ) ( (  c1138 ) ) );
}

static  struct StrConcatIter_391   into_dash_iter782 (    struct StrConcat_783  dref1087 ) {
    return ( (struct StrConcatIter_391) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars784 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_811 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_811 StrConcat_811_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_811 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_810 {
    struct StrConcat_811  field0;
    char  field1;
};

static struct StrConcat_810 StrConcat_810_StrConcat (  struct StrConcat_811  field0 ,  char  field1 ) {
    return ( struct StrConcat_810 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_809 {
    struct StrConcat_810  field0;
    int32_t  field1;
};

static struct StrConcat_809 StrConcat_809_StrConcat (  struct StrConcat_810  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_809 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_403   into_dash_iter815 (    struct StrConcat_811  dref1087 ) {
    return ( (struct StrConcatIter_403) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars759 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_403   chars814 (    struct StrConcat_811  self1098 ) {
    return ( (  into_dash_iter815 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_402   into_dash_iter813 (    struct StrConcat_810  dref1087 ) {
    return ( (struct StrConcatIter_402) { .f_left = ( (  chars814 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars755 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_402   chars812 (    struct StrConcat_810  self1098 ) {
    return ( (  into_dash_iter813 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_401   into_dash_iter808 (    struct StrConcat_809  dref1087 ) {
    return ( (struct StrConcatIter_401) { .f_left = ( (  chars812 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars759 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_406   into_dash_iter816 (    struct StrConcat_17  dref1087 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars754 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars763 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_819 {
    struct StrConcat_811  field0;
    const char*  field1;
};

static struct StrConcat_819 StrConcat_819_StrConcat (  struct StrConcat_811  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_819 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_818 {
    struct StrConcat_819  field0;
    int32_t  field1;
};

static struct StrConcat_818 StrConcat_818_StrConcat (  struct StrConcat_819  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_818 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_413   into_dash_iter821 (    struct StrConcat_819  dref1087 ) {
    return ( (struct StrConcatIter_413) { .f_left = ( (  chars814 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1087 .field1 ) ) ) } );
}

static  struct StrConcatIter_413   chars820 (    struct StrConcat_819  self1098 ) {
    return ( (  into_dash_iter821 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_412   into_dash_iter817 (    struct StrConcat_818  dref1087 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars820 ) ( ( dref1087 .field0 ) ) ) , .f_right = ( (  chars759 ) ( ( dref1087 .field1 ) ) ) } );
}

struct StrConcat_824 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_824 StrConcat_824_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_824 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_823 {
    struct StrConcat_824  field0;
    char  field1;
};

static struct StrConcat_823 StrConcat_823_StrConcat (  struct StrConcat_824  field0 ,  char  field1 ) {
    return ( struct StrConcat_823 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str825 (    struct StrConcat_824  self1092 ) {
    struct StrConcat_824  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str822 (    struct StrConcat_823  self1092 ) {
    struct StrConcat_823  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str825 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_828 {
    const char*  field0;
    struct StrConcat_823  field1;
};

static struct StrConcat_828 StrConcat_828_StrConcat (  const char*  field0 ,  struct StrConcat_823  field1 ) {
    return ( struct StrConcat_828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_827 {
    struct StrConcat_828  field0;
    char  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  struct StrConcat_828  field0 ,  char  field1 ) {
    return ( struct StrConcat_827 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str829 (    struct StrConcat_828  self1092 ) {
    struct StrConcat_828  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str822 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str826 (    struct StrConcat_827  self1092 ) {
    struct StrConcat_827  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str829 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_831 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_831 StrConcat_831_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_831 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str830 (    struct StrConcat_831  self1092 ) {
    struct StrConcat_831  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_834 {
    const char*  field0;
    struct StrConcat_831  field1;
};

static struct StrConcat_834 StrConcat_834_StrConcat (  const char*  field0 ,  struct StrConcat_831  field1 ) {
    return ( struct StrConcat_834 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_833 {
    struct StrConcat_834  field0;
    char  field1;
};

static struct StrConcat_833 StrConcat_833_StrConcat (  struct StrConcat_834  field0 ,  char  field1 ) {
    return ( struct StrConcat_833 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str835 (    struct StrConcat_834  self1092 ) {
    struct StrConcat_834  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str830 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str832 (    struct StrConcat_833  self1092 ) {
    struct StrConcat_833  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str835 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_838 {
    const char*  field0;
    struct StrConcat_824  field1;
};

static struct StrConcat_838 StrConcat_838_StrConcat (  const char*  field0 ,  struct StrConcat_824  field1 ) {
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
        ( (  print_dash_str825 ) ( ( dref1093 .field1 ) ) );
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
    uint8_t  field1;
};

static struct StrConcat_842 StrConcat_842_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
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
        ( (  print_dash_str762 ) ( ( dref1093 .field1 ) ) );
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

struct StrConcat_848 {
    struct StrConcat_841  field0;
    uint8_t  field1;
};

static struct StrConcat_848 StrConcat_848_StrConcat (  struct StrConcat_841  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_847 {
    struct StrConcat_848  field0;
    char  field1;
};

static struct StrConcat_847 StrConcat_847_StrConcat (  struct StrConcat_848  field0 ,  char  field1 ) {
    return ( struct StrConcat_847 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_846 {
    struct StrConcat_847  field0;
    uint8_t  field1;
};

static struct StrConcat_846 StrConcat_846_StrConcat (  struct StrConcat_847  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_846 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_845 {
    struct StrConcat_846  field0;
    char  field1;
};

static struct StrConcat_845 StrConcat_845_StrConcat (  struct StrConcat_846  field0 ,  char  field1 ) {
    return ( struct StrConcat_845 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str851 (    struct StrConcat_848  self1092 ) {
    struct StrConcat_848  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str840 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str762 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str850 (    struct StrConcat_847  self1092 ) {
    struct StrConcat_847  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str851 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str849 (    struct StrConcat_846  self1092 ) {
    struct StrConcat_846  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str850 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str762 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str844 (    struct StrConcat_845  self1092 ) {
    struct StrConcat_845  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str849 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_855 {
    struct StrConcat_781  field0;
    char  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  struct StrConcat_781  field0 ,  char  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_854 {
    struct StrConcat_855  field0;
    uint32_t  field1;
};

static struct StrConcat_854 StrConcat_854_StrConcat (  struct StrConcat_855  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_854 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_853 {
    struct StrConcat_854  field0;
    char  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  struct StrConcat_854  field0 ,  char  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str858 (    struct StrConcat_781  self1092 ) {
    struct StrConcat_781  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str857 (    struct StrConcat_855  self1092 ) {
    struct StrConcat_855  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str858 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str856 (    struct StrConcat_854  self1092 ) {
    struct StrConcat_854  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str857 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str852 (    struct StrConcat_853  self1092 ) {
    struct StrConcat_853  dref1093 = (  self1092 );
    if ( true ) {
        ( (  print_dash_str856 ) ( ( dref1093 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1093 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_379   chars859 (    struct StrConcat_765  self1098 ) {
    return ( (  into_dash_iter764 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_387   chars860 (    struct StrConcat_781  self1098 ) {
    return ( (  into_dash_iter780 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_391   chars861 (    struct StrConcat_783  self1098 ) {
    return ( (  into_dash_iter782 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_401   chars862 (    struct StrConcat_809  self1098 ) {
    return ( (  into_dash_iter808 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_406   chars863 (    struct StrConcat_17  self1098 ) {
    return ( (  into_dash_iter816 ) ( (  self1098 ) ) );
}

static  struct StrConcatIter_412   chars864 (    struct StrConcat_818  self1098 ) {
    return ( (  into_dash_iter817 ) ( (  self1098 ) ) );
}

static  struct TakeWhile_486   chars865 (    struct TakeWhile_486  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_490   chars866 (    struct TakeWhile_490  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_493   chars867 (    struct TakeWhile_493  self1183 ) {
    return (  self1183 );
}

static  struct TakeWhile_497   chars868 (    struct TakeWhile_497  self1183 ) {
    return (  self1183 );
}

static  bool   eq869 (    struct TakeWhile_490  l1193 ,    char  r1195 ) {
    struct TakeWhile_490  temp870 = ( (  chars866 ) ( (  l1193 ) ) );
    struct TakeWhile_490 *  l1196 = ( &temp870 );
    struct AppendIter_384  temp871 = ( (  chars755 ) ( (  r1195 ) ) );
    struct AppendIter_384 *  r1197 = ( &temp871 );
    while ( ( true ) ) {
        struct Maybe_49  mlc1198 = ( (  next501 ) ( (  l1196 ) ) );
        struct Maybe_49  mrc1199 = ( (  next429 ) ( (  r1197 ) ) );
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

static  int32_t   char_dash_i32872 (    char  c1210 ) {
    return ( (  cast_dash_on_dash_zeroed243 ) ( (  c1210 ) ) );
}

static  uint8_t   char_dash_u8873 (    char  c1213 ) {
    return ( (  cast188 ) ( (  c1213 ) ) );
}

static  bool   eq874 (    const char*  l1229 ,    const char*  r1231 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1229 ) ,  (  r1231 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  bool   unreachable875 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined141 ) ( ) );
}

static  enum Unit_13   unreachable876 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   panic877 (    struct StrConcat_823  errmsg1244 ) {
    ( (  print_dash_str826 ) ( ( ( StrConcat_827_StrConcat ) ( ( ( StrConcat_828_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic878 (    struct StrConcat_831  errmsg1244 ) {
    ( (  print_dash_str832 ) ( ( ( StrConcat_833_StrConcat ) ( ( ( StrConcat_834_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic879 (    const char*  errmsg1244 ) {
    ( (  print_dash_str822 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic880 (    struct StrConcat_824  errmsg1244 ) {
    ( (  print_dash_str836 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1244 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_139   panic_prime_881 (    const char*  errmsg1247 ) {
    ( (  print_dash_str822 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1247 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined138 ) ( ) );
}

static  enum Unit_13   assert882 (    bool  cond1250 ,    const char*  msg1252 ) {
    if ( ( ! (  cond1250 ) ) ) {
        ( (  print_dash_str822 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1252 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail883 (    struct Maybe_257  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_257  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_257_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined123 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_257_Just_t ) {
        return ( dref1260 .stuff .Maybe_257_Just_s .field0 );
    }
}

static  struct DynStr_128   or_dash_fail884 (    struct Maybe_309  x1257 ,    struct StrConcat_823  errmsg1259 ) {
    struct Maybe_309  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_309_None_t ) {
        ( (  panic877 ) ( (  errmsg1259 ) ) );
        return ( (  undefined127 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_309_Just_t ) {
        return ( dref1260 .stuff .Maybe_309_Just_s .field0 );
    }
}

struct Maybe_886 {
    enum {
        Maybe_886_None_t,
        Maybe_886_Just_t,
    } tag;
    union {
        struct {
            struct Cell_52  field0;
        } Maybe_886_Just_s;
    } stuff;
};

static struct Maybe_886 Maybe_886_Just (  struct Cell_52  field0 ) {
    return ( struct Maybe_886 ) { .tag = Maybe_886_Just_t, .stuff = { .Maybe_886_Just_s = { .field0 = field0 } } };
};

static  struct Cell_52   or_dash_fail885 (    struct Maybe_886  x1257 ,    struct StrConcat_14  errmsg1259 ) {
    struct Maybe_886  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_886_None_t ) {
        ( (  panic12 ) ( (  errmsg1259 ) ) );
        return ( (  undefined136 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_886_Just_t ) {
        return ( dref1260 .stuff .Maybe_886_Just_s .field0 );
    }
}

struct Maybe_888 {
    enum {
        Maybe_888_None_t,
        Maybe_888_Just_t,
    } tag;
    union {
        struct {
            struct Cell_52 *  field0;
        } Maybe_888_Just_s;
    } stuff;
};

static struct Maybe_888 Maybe_888_Just (  struct Cell_52 *  field0 ) {
    return ( struct Maybe_888 ) { .tag = Maybe_888_Just_t, .stuff = { .Maybe_888_Just_s = { .field0 = field0 } } };
};

static  struct Cell_52 *   or_dash_fail887 (    struct Maybe_888  x1257 ,    const char*  errmsg1259 ) {
    struct Maybe_888  dref1260 = (  x1257 );
    if ( dref1260.tag == Maybe_888_None_t ) {
        ( (  panic879 ) ( (  errmsg1259 ) ) );
        return ( (  undefined145 ) ( ) );
    }
    else if ( dref1260.tag == Maybe_888_Just_t ) {
        return ( dref1260 .stuff .Maybe_888_Just_s .field0 );
    }
}

static  struct Slice_331   empty889 (  ) {
    return ( (struct Slice_331) { .f_ptr = ( (  null_dash_ptr249 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty890 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr250 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr891 (    struct Slice_331  slice1290 ,    size_t  i1292 ) {
    if ( ( (  cmp9 ( (  i1292 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1292 ) , ( (  slice1290 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1292 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1290 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1293 = ( (  offset_dash_ptr149 ) ( ( (  slice1290 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1292 ) ) ) ) );
    return (  elem_dash_ptr1293 );
}

static  struct Cell_52 *   get_dash_ptr892 (    struct Slice_556  slice1290 ,    size_t  i1292 ) {
    if ( ( (  cmp9 ( (  i1292 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1292 ) , ( (  slice1290 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1292 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1290 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_52 *  elem_dash_ptr1293 = ( (  offset_dash_ptr155 ) ( ( (  slice1290 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1292 ) ) ) ) );
    return (  elem_dash_ptr1293 );
}

struct Slice_894 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_257   try_dash_get893 (    struct Slice_894  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_257) { .tag = Maybe_257_None_t } );
    }
    const char* *  elem_dash_ptr1299 = ( (  offset_dash_ptr147 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_257_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  struct Maybe_886   try_dash_get895 (    struct Slice_556  slice1296 ,    size_t  i1298 ) {
    if ( ( (  cmp9 ( (  i1298 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1298 ) , ( (  slice1296 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_886) { .tag = Maybe_886_None_t } );
    }
    struct Cell_52 *  elem_dash_ptr1299 = ( (  offset_dash_ptr155 ) ( ( (  slice1296 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1298 ) ) ) ) );
    return ( ( Maybe_886_Just ) ( ( * (  elem_dash_ptr1299 ) ) ) );
}

static  const char*   get896 (    struct Slice_894  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail883 ) ( ( (  try_dash_get893 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_52   get897 (    struct Slice_556  slice1302 ,    size_t  i1304 ) {
    return ( (  or_dash_fail885 ) ( ( (  try_dash_get895 ) ( (  slice1302 ) ,  (  i1304 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1304 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1302 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set898 (    struct Slice_331  slice1307 ,    size_t  i1309 ,    struct List_3  x1311 ) {
    struct List_3 *  ep1312 = ( (  get_dash_ptr891 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set899 (    struct Slice_5  slice1307 ,    size_t  i1309 ,    char  x1311 ) {
    char *  ep1312 = ( (  get_dash_ptr30 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set900 (    struct Slice_556  slice1307 ,    size_t  i1309 ,    struct Cell_52  x1311 ) {
    struct Cell_52 *  ep1312 = ( (  get_dash_ptr892 ) ( (  slice1307 ) ,  (  i1309 ) ) );
    (*  ep1312 ) = (  x1311 );
    return ( Unit_13_Unit );
}

static  struct SliceAddressIter_609   addresses901 (    struct Slice_331  slice1347 ) {
    return ( (struct SliceAddressIter_609) { .f_slice = (  slice1347 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam576 (   struct env576 env ,    struct Tuple2_342  dref1361 ) {
    return ( (  set898 ) ( ( env.dest1360 ) ,  ( (  i32_dash_size260 ) ( ( dref1361 .field1 ) ) ) ,  ( dref1361 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to902 (    struct Slice_331  src1358 ,    struct Slice_331  dest1360 ) {
    if ( (  cmp9 ( ( (  src1358 ) .f_count ) , ( (  dest1360 ) .f_count ) ) == 2 ) ) {
        ( (  panic878 ) ( ( ( StrConcat_831_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1358 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1360 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env576 envinst576 = {
        .dest1360 =  dest1360 ,
    };
    ( (  for_dash_each575 ) ( ( (  zip463 ) ( (  src1358 ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv576){ .fun = lam576, .env = envinst576 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam584 (   struct env584 env ,    struct Tuple2_348  dref1361 ) {
    return ( (  set899 ) ( ( env.dest1360 ) ,  ( (  i32_dash_size260 ) ( ( dref1361 .field1 ) ) ) ,  ( dref1361 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to903 (    struct Slice_5  src1358 ,    struct Slice_5  dest1360 ) {
    if ( (  cmp9 ( ( (  src1358 ) .f_count ) , ( (  dest1360 ) .f_count ) ) == 2 ) ) {
        ( (  panic878 ) ( ( ( StrConcat_831_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1358 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1360 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env584 envinst584 = {
        .dest1360 =  dest1360 ,
    };
    ( (  for_dash_each583 ) ( ( (  zip464 ) ( (  src1358 ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv584){ .fun = lam584, .env = envinst584 } ) ) );
    return ( Unit_13_Unit );
}

static  const char*   elem_dash_get904 (    struct Slice_894  self1366 ,    size_t  idx1368 ) {
    return ( (  get896 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  struct Cell_52   elem_dash_get905 (    struct Slice_556  self1366 ,    size_t  idx1368 ) {
    return ( (  get897 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  char   elem_dash_get906 (    struct Slice_5  self1366 ,    size_t  idx1368 ) {
    return ( (  get311 ) ( (  self1366 ) ,  (  idx1368 ) ) );
}

static  enum Unit_13   lam555 (   struct env555 env ,    int32_t  i1397 ) {
    return ( (  set900 ) ( ( env.s1393 ) ,  ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get905 ( ( env.s1393 ) , ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map907 (    struct Slice_556  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env555 envinst555 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each554 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32262 ) ( (  op_dash_sub91 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv555){ .fun = lam555, .env = envinst555 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam560 (   struct env560 env ,    int32_t  i1397 ) {
    return ( (  set900 ) ( ( env.s1393 ) ,  ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get905 ( ( env.s1393 ) , ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map908 (    struct Slice_556  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env560 envinst560 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each559 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32262 ) ( (  op_dash_sub91 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv560){ .fun = lam560, .env = envinst560 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam615 (   struct env615 env ,    int32_t  i1397 ) {
    return ( (  set900 ) ( ( env.s1393 ) ,  ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ,  ( ( env.fun1395 ) ( (  elem_dash_get905 ( ( env.s1393 ) , ( (  i32_dash_size260 ) ( (  i1397 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map909 (    struct Slice_556  s1393 ,    struct Cell_52 (*  fun1395 )(    struct Cell_52  ) ) {
    struct env615 envinst615 = {
        .s1393 =  s1393 ,
        .fun1395 =  fun1395 ,
    };
    ( (  for_dash_each614 ) ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32262 ) ( (  op_dash_sub91 ( ( (  s1393 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv615){ .fun = lam615, .env = envinst615 } ) ) );
    return ( Unit_13_Unit );
}

static  enum CAllocator_4   idc910 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_331   allocate911 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize157 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1408 = ( (  cast_dash_ptr198 ) ( ( ( malloc ) ( (  op_dash_mul92 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_331) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  struct Slice_5   allocate912 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize160 ) ( ) ) ) .f_size );
    char *  ptr1408 = ( (  cast_dash_ptr201 ) ( ( ( malloc ) ( (  op_dash_mul92 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  struct Slice_556   allocate913 (    enum CAllocator_4  dref1404 ,    size_t  count1406 ) {
    if (!(  dref1404 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1407 = ( ( ( (  get_dash_typesize163 ) ( ) ) ) .f_size );
    struct Cell_52 *  ptr1408 = ( (  cast_dash_ptr208 ) ( ( ( malloc ) ( (  op_dash_mul92 ( (  size1407 ) , (  count1406 ) ) ) ) ) ) );
    return ( (struct Slice_556) { .f_ptr = (  ptr1408 ) , .f_count = (  count1406 ) } );
}

static  enum Unit_13   free914 (    enum CAllocator_4  dref1410 ,    struct Slice_331  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr199 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free915 (    enum CAllocator_4  dref1410 ,    struct Slice_5  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr202 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_917 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free916 (    enum CAllocator_4  dref1410 ,    struct Slice_917  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr213 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free918 (    enum CAllocator_4  dref1410 ,    struct Slice_556  slice1412 ) {
    if (!(  dref1410 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr216 ) ( ( (  slice1412 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr919 (    struct Array_134 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1453 = ( ( (  cast186 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr153 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  char *   get_dash_ptr920 (    struct Array_176 *  arr1449 ,    size_t  i1452 ) {
    if ( ( (  cmp9 ( (  i1452 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1452 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1452 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1453 = ( ( (  cast189 ) ( (  arr1449 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1453 ) ,  ( (int64_t ) (  i1452 ) ) ) );
}

static  enum Unit_13   set921 (    struct Array_134 *  arr1462 ,    size_t  i1465 ,    uint8_t  e1467 ) {
    uint8_t *  p1468 = ( (  get_dash_ptr919 ) ( (  arr1462 ) ,  (  i1465 ) ) );
    (*  p1468 ) = (  e1467 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set922 (    struct Array_176 *  arr1462 ,    size_t  i1465 ,    char  e1467 ) {
    char *  p1468 = ( (  get_dash_ptr920 ) ( (  arr1462 ) ,  (  i1465 ) ) );
    (*  p1468 ) = (  e1467 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice923 (    struct Array_176 *  arr1471 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast189 ) ( (  arr1471 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace924 (    char  c1522 ) {
    return ( ( (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq47 ( (  c1522 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace925 (    char  c1525 ) {
    return ( ! ( (  is_dash_whitespace924 ) ( (  c1525 ) ) ) );
}

static  struct LineIter_297   lines926 (    struct DynStr_128  s1532 ) {
    return ( (struct LineIter_297) { .f_og = (  s1532 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit927 (    char  c1561 ) {
    return ( (  cmp74 ( ( (  char_dash_i32872 ) ( (  c1561 ) ) ) , ( (  char_dash_i32872 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp74 ( ( (  char_dash_i32872 ) ( (  c1561 ) ) ) , ( (  char_dash_i32872 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_319   parse_dash_digit928 (    char  c1564 ) {
    if ( ( (  is_dash_digit927 ) ( (  c1564 ) ) ) ) {
        return ( ( Maybe_319_Just ) ( (  op_dash_sub82 ( ( (  char_dash_i32872 ) ( (  c1564 ) ) ) , ( (  char_dash_i32872 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_319) { .tag = Maybe_319_None_t } );
    }
}

static  struct Maybe_686   sequence_dash_maybe930 (    char  e1570 ,    struct Maybe_686  b1572 ) {
    struct Maybe_686  dref1573 = (  b1572 );
    if ( dref1573.tag == Maybe_686_None_t ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    else if ( dref1573.tag == Maybe_686_Just_t ) {
        struct Maybe_319  dref1575 = ( (  parse_dash_digit928 ) ( (  e1570 ) ) );
        if ( dref1575.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
        }
        else if ( dref1575.tag == Maybe_319_Just_t ) {
            return ( ( Maybe_686_Just ) ( (  op_dash_add77 ( (  op_dash_mul32 ( ( dref1573 .stuff .Maybe_686_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64259 ) ( ( dref1575 .stuff .Maybe_319_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_686   parse_dash_int929 (    struct TakeWhile_486  s1567 ) {
    struct TakeWhile_486  cs1577 = ( (  chars865 ) ( (  s1567 ) ) );
    struct Maybe_49  dref1578 = ( (  head734 ) ( (  cs1577 ) ) );
    if ( dref1578.tag == Maybe_49_Just_t ) {
        return ( (  reduce685 ) ( (  cs1577 ) ,  ( ( Maybe_686_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe930 ) ) );
    }
    else if ( dref1578.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
}

static  struct Maybe_686   sequence_dash_maybe932 (    char  e1570 ,    struct Maybe_686  b1572 ) {
    struct Maybe_686  dref1573 = (  b1572 );
    if ( dref1573.tag == Maybe_686_None_t ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    else if ( dref1573.tag == Maybe_686_Just_t ) {
        struct Maybe_319  dref1575 = ( (  parse_dash_digit928 ) ( (  e1570 ) ) );
        if ( dref1575.tag == Maybe_319_None_t ) {
            return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
        }
        else if ( dref1575.tag == Maybe_319_Just_t ) {
            return ( ( Maybe_686_Just ) ( (  op_dash_add77 ( (  op_dash_mul32 ( ( dref1573 .stuff .Maybe_686_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64259 ) ( ( dref1575 .stuff .Maybe_319_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_686   parse_dash_int931 (    struct TakeWhile_490  s1567 ) {
    struct TakeWhile_490  cs1577 = ( (  chars866 ) ( (  s1567 ) ) );
    struct Maybe_49  dref1578 = ( (  head736 ) ( (  cs1577 ) ) );
    if ( dref1578.tag == Maybe_49_Just_t ) {
        return ( (  reduce694 ) ( (  cs1577 ) ,  ( ( Maybe_686_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe932 ) ) );
    }
    else if ( dref1578.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr933 (    struct List_357 *  list1583 ,    size_t  i1585 ) {
    if ( ( (  cmp9 ( (  i1585 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1585 ) , ( ( * (  list1583 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1585 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1583 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr891 ) ( ( ( * (  list1583 ) ) .f_elements ) ,  (  i1585 ) ) );
}

static  struct List_3   get934 (    struct List_357 *  list1593 ,    size_t  i1595 ) {
    return ( * ( (  get_dash_ptr933 ) ( (  list1593 ) ,  (  i1595 ) ) ) );
}

static  struct Maybe_49   try_dash_get935 (    struct List_3 *  list1598 ,    size_t  i1600 ) {
    if ( (  cmp9 ( (  i1600 ) , ( ( * (  list1598 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( ( (  get7 ) ( (  list1598 ) ,  (  i1600 ) ) ) ) );
}

static  struct Maybe_308   try_dash_get936 (    struct List_357 *  list1598 ,    size_t  i1600 ) {
    if ( (  cmp9 ( (  i1600 ) , ( ( * (  list1598 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    return ( ( Maybe_308_Just ) ( ( (  get934 ) ( (  list1598 ) ,  (  i1600 ) ) ) ) );
}

static  enum Unit_13   set937 (    struct List_357 *  list1603 ,    size_t  i1605 ,    struct List_3  elem1607 ) {
    if ( ( (  cmp9 ( (  i1605 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1605 ) , ( ( * (  list1603 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1605 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1603 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set898 ) ( ( ( * (  list1603 ) ) .f_elements ) ,  (  i1605 ) ,  (  elem1607 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set938 (    struct List_3 *  list1603 ,    size_t  i1605 ,    char  elem1607 ) {
    if ( ( (  cmp9 ( (  i1605 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1605 ) , ( ( * (  list1603 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1605 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1603 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set899 ) ( ( ( * (  list1603 ) ) .f_elements ) ,  (  i1605 ) ,  (  elem1607 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_357   mk939 (    enum CAllocator_4  al1613 ) {
    struct Slice_331  elements1614 = ( (  empty889 ) ( ) );
    return ( (struct List_357) { .f_al = (  al1613 ) , .f_elements = (  elements1614 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk940 (    enum CAllocator_4  al1613 ) {
    struct Slice_5  elements1614 = ( (  empty890 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1613 ) , .f_elements = (  elements1614 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free941 (    struct List_3 *  list1617 ) {
    ( (  free915 ) ( ( ( * (  list1617 ) ) .f_al ) ,  ( ( * (  list1617 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free942 (    struct List_357 *  list1617 ) {
    ( (  free914 ) ( ( ( * (  list1617 ) ) .f_al ) ,  ( ( * (  list1617 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam531 (   struct env531 env ,    struct Tuple2_342  dref1625 ) {
    return ( (  set898 ) ( ( env.new_dash_slice1624 ) ,  ( (  i32_dash_size260 ) ( ( dref1625 .field1 ) ) ) ,  ( dref1625 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full545 (   struct env545 env ,    struct List_357 *  list1623 ) {
    if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1623 ) .f_elements = ( (  allocate911 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( env.starting_dash_size1618 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , ( ( ( * (  list1623 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_331  new_dash_slice1624 = ( (  allocate911 ) ( ( ( * (  list1623 ) ) .f_al ) ,  (  op_dash_mul92 ( ( ( * (  list1623 ) ) .f_count ) , ( env.growth_dash_factor1619 ) ) ) ) );
            struct env531 envinst531 = {
                .new_dash_slice1624 =  new_dash_slice1624 ,
            };
            ( (  for_dash_each530 ) ( ( (  zip463 ) ( ( ( * (  list1623 ) ) .f_elements ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv531){ .fun = lam531, .env = envinst531 } ) ) );
            ( (  free914 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( ( * (  list1623 ) ) .f_elements ) ) );
            (*  list1623 ) .f_elements = (  new_dash_slice1624 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam535 (   struct env535 env ,    struct Tuple2_348  dref1625 ) {
    return ( (  set899 ) ( ( env.new_dash_slice1624 ) ,  ( (  i32_dash_size260 ) ( ( dref1625 .field1 ) ) ) ,  ( dref1625 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full302 (   struct env302 env ,    struct List_3 *  list1623 ) {
    if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1623 ) .f_elements = ( (  allocate912 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( env.starting_dash_size1618 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1623 ) ) .f_count ) , ( ( ( * (  list1623 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1624 = ( (  allocate912 ) ( ( ( * (  list1623 ) ) .f_al ) ,  (  op_dash_mul92 ( ( ( * (  list1623 ) ) .f_count ) , ( env.growth_dash_factor1619 ) ) ) ) );
            struct env535 envinst535 = {
                .new_dash_slice1624 =  new_dash_slice1624 ,
            };
            ( (  for_dash_each534 ) ( ( (  zip464 ) ( ( ( * (  list1623 ) ) .f_elements ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv535){ .fun = lam535, .env = envinst535 } ) ) );
            ( (  free915 ) ( ( ( * (  list1623 ) ) .f_al ) ,  ( ( * (  list1623 ) ) .f_elements ) ) );
            (*  list1623 ) .f_elements = (  new_dash_slice1624 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add544 (   struct env544 env ,    struct List_357 *  list1630 ,    struct List_3  elem1632 ) {
    struct funenv545  temp943 = ( (struct funenv545){ .fun = grow_dash_if_dash_full545, .env =  env.envinst545  } );
    ( temp943.fun ( temp943.env ,  (  list1630 ) ) );
    ( (  set898 ) ( ( ( * (  list1630 ) ) .f_elements ) ,  ( ( * (  list1630 ) ) .f_count ) ,  (  elem1632 ) ) );
    (*  list1630 ) .f_count = (  op_dash_add90 ( ( ( * (  list1630 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add301 (   struct env301 env ,    struct List_3 *  list1630 ,    char  elem1632 ) {
    struct funenv302  temp944 = ( (struct funenv302){ .fun = grow_dash_if_dash_full302, .env =  env.envinst302  } );
    ( temp944.fun ( temp944.env ,  (  list1630 ) ) );
    ( (  set899 ) ( ( ( * (  list1630 ) ) .f_elements ) ,  ( ( * (  list1630 ) ) .f_count ) ,  (  elem1632 ) ) );
    (*  list1630 ) .f_count = (  op_dash_add90 ( ( ( * (  list1630 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env945 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env544 envinst544;
    struct env545 envinst545;
};

static  enum Unit_13   insert945 (   struct env945 env ,    struct List_357 *  list1635 ,    size_t  i1637 ,    struct List_3  elem1639 ) {
    if ( ( (  cmp9 ( (  i1637 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1637 ) , ( ( * (  list1635 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1637 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1635 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv544  temp946 = ( (struct funenv544){ .fun = add544, .env =  env.envinst544  } );
        ( temp946.fun ( temp946.env ,  (  list1635 ) ,  (  elem1639 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv545  temp947 = ( (struct funenv545){ .fun = grow_dash_if_dash_full545, .env =  env.envinst545  } );
    ( temp947.fun ( temp947.env ,  (  list1635 ) ) );
    size_t  ii1640 = (  op_dash_sub91 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1640 ) , (  i1637 ) ) != 0 ) ) {
        ( (  set898 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  op_dash_add90 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get934 ) ( (  list1635 ) ,  (  ii1640 ) ) ) ) );
        if ( (  eq45 ( (  ii1640 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1640 = (  op_dash_sub91 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set898 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  i1637 ) ,  (  elem1639 ) ) );
    (*  list1635 ) .f_count = (  op_dash_add90 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env948 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env301 envinst301;
    struct env302 envinst302;
};

static  enum Unit_13   insert948 (   struct env948 env ,    struct List_3 *  list1635 ,    size_t  i1637 ,    char  elem1639 ) {
    if ( ( (  cmp9 ( (  i1637 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1637 ) , ( ( * (  list1635 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1637 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1635 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv301  temp949 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
        ( temp949.fun ( temp949.env ,  (  list1635 ) ,  (  elem1639 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv302  temp950 = ( (struct funenv302){ .fun = grow_dash_if_dash_full302, .env =  env.envinst302  } );
    ( temp950.fun ( temp950.env ,  (  list1635 ) ) );
    size_t  ii1640 = (  op_dash_sub91 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1640 ) , (  i1637 ) ) != 0 ) ) {
        ( (  set899 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  op_dash_add90 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1635 ) ,  (  ii1640 ) ) ) ) );
        if ( (  eq45 ( (  ii1640 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1640 = (  op_dash_sub91 ( (  ii1640 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set899 ) ( ( ( * (  list1635 ) ) .f_elements ) ,  (  i1637 ) ,  (  elem1639 ) ) );
    (*  list1635 ) .f_count = (  op_dash_add90 ( ( ( * (  list1635 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env951 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam572 (   struct env572 env ,    struct Tuple2_342  dref1646 ) {
    return ( (  set937 ) ( ( env.list1643 ) ,  ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( ( dref1646 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1646 .field0 ) ) );
}

static  enum Unit_13   remove951 (   struct env951 env ,    struct List_357 *  list1643 ,    size_t  i1645 ) {
    if ( ( (  cmp9 ( (  i1645 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1645 ) , ( ( * (  list1643 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1645 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env572 envinst572 = {
        .list1643 =  list1643 ,
    };
    ( (  for_dash_each571 ) ( ( (  drop352 ) ( ( (  zip465 ) ( ( * (  list1643 ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add90 ( (  i1645 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv572){ .fun = lam572, .env = envinst572 } ) ) );
    (*  list1643 ) .f_count = (  op_dash_sub91 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1649 = ( ( ( * (  list1643 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul92 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  capacity1649 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free914 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
            (*  list1643 ) .f_elements = ( (  empty889 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1650 = (  op_dash_mul92 ( (  op_dash_add90 ( (  op_dash_div93 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1620 ) ) );
        struct Slice_331  new_dash_slice1651 = ( (  allocate911 ) ( ( ( * (  list1643 ) ) .f_al ) ,  (  new_dash_size1650 ) ) );
        ( (  copy_dash_to902 ) ( ( (  subslice360 ) ( ( ( * (  list1643 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  (  new_dash_slice1651 ) ) );
        ( (  free914 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
        (*  list1643 ) .f_elements = (  new_dash_slice1651 );
    }
    return ( Unit_13_Unit );
}

struct env952 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam580 (   struct env580 env ,    struct Tuple2_348  dref1646 ) {
    return ( (  set938 ) ( ( env.list1643 ) ,  ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( ( dref1646 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1646 .field0 ) ) );
}

static  enum Unit_13   remove952 (   struct env952 env ,    struct List_3 *  list1643 ,    size_t  i1645 ) {
    if ( ( (  cmp9 ( (  i1645 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1645 ) , ( ( * (  list1643 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1645 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env580 envinst580 = {
        .list1643 =  list1643 ,
    };
    ( (  for_dash_each579 ) ( ( (  drop354 ) ( ( (  zip466 ) ( ( * (  list1643 ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add90 ( (  i1645 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv580){ .fun = lam580, .env = envinst580 } ) ) );
    (*  list1643 ) .f_count = (  op_dash_sub91 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1649 = ( ( ( * (  list1643 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul92 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  capacity1649 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1643 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free915 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
            (*  list1643 ) .f_elements = ( (  empty890 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1650 = (  op_dash_mul92 ( (  op_dash_add90 ( (  op_dash_div93 ( ( ( * (  list1643 ) ) .f_count ) , ( env.shrink_dash_factor1620 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1620 ) ) );
        struct Slice_5  new_dash_slice1651 = ( (  allocate912 ) ( ( ( * (  list1643 ) ) .f_al ) ,  (  new_dash_size1650 ) ) );
        ( (  copy_dash_to903 ) ( ( (  subslice275 ) ( ( ( * (  list1643 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1643 ) ) .f_count ) ) ) ,  (  new_dash_slice1651 ) ) );
        ( (  free915 ) ( ( ( * (  list1643 ) ) .f_al ) ,  ( ( * (  list1643 ) ) .f_elements ) ) );
        (*  list1643 ) .f_elements = (  new_dash_slice1651 );
    }
    return ( Unit_13_Unit );
}

struct funenv952 {
    enum Unit_13  (*fun) (  struct env952  ,    struct List_3 *  ,    size_t  );
    struct env952 env;
};

struct env953 {
    ;
    ;
    ;
    ;
    struct env952 envinst952;
    ;
    ;
};

static  enum Unit_13   pop953 (   struct env953 env ,    struct List_3 *  list1665 ) {
    if ( (  eq45 ( ( ( * (  list1665 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic879 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv952  temp954 = ( (struct funenv952){ .fun = remove952, .env =  env.envinst952  } );
    return ( temp954.fun ( temp954.env ,  (  list1665 ) ,  (  op_dash_sub91 ( ( ( * (  list1665 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam539 (   struct env539 env ,    char  x1675 ) {
    struct funenv301  temp955 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp955.fun ( temp955.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all300 (   struct env300 env ,    struct List_3 *  list1671 ,    struct DynStr_128  it1673 ) {
    struct env539 envinst539 = {
        .envinst301 = env.envinst301 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each538 ) ( (  it1673 ) ,  ( (struct funenv539){ .fun = lam539, .env = envinst539 } ) ) );
    return ( Unit_13_Unit );
}

struct env956 {
    ;
    ;
    struct env544 envinst544;
    ;
    ;
    ;
};

static  enum Unit_13   lam543 (   struct env543 env ,    struct List_3  x1675 ) {
    struct funenv544  temp957 = ( (struct funenv544){ .fun = add544, .env =  env.envinst544  } );
    return ( temp957.fun ( temp957.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all956 (   struct env956 env ,    struct List_357 *  list1671 ,    struct Map_296  it1673 ) {
    struct env543 envinst543 = {
        .envinst544 = env.envinst544 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each542 ) ( (  it1673 ) ,  ( (struct funenv543){ .fun = lam543, .env = envinst543 } ) ) );
    return ( Unit_13_Unit );
}

struct env958 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
};

static  enum Unit_13   lam568 (   struct env568 env ,    char  x1675 ) {
    struct funenv301  temp959 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp959.fun ( temp959.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all958 (   struct env958 env ,    struct List_3 *  list1671 ,    struct List_3 *  it1673 ) {
    struct env568 envinst568 = {
        .envinst301 = env.envinst301 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each567 ) ( (  it1673 ) ,  ( (struct funenv568){ .fun = lam568, .env = envinst568 } ) ) );
    return ( Unit_13_Unit );
}

struct env960 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
};

static  enum Unit_13   lam588 (   struct env588 env ,    char  x1675 ) {
    struct funenv301  temp961 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp961.fun ( temp961.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all960 (   struct env960 env ,    struct List_3 *  list1671 ,    struct TakeWhile_488  it1673 ) {
    struct env588 envinst588 = {
        .envinst301 = env.envinst301 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each587 ) ( (  it1673 ) ,  ( (struct funenv588){ .fun = lam588, .env = envinst588 } ) ) );
    return ( Unit_13_Unit );
}

struct env962 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
};

static  enum Unit_13   lam592 (   struct env592 env ,    char  x1675 ) {
    struct funenv301  temp963 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp963.fun ( temp963.env ,  ( env.list1671 ) ,  (  x1675 ) ) );
}

static  enum Unit_13   add_dash_all962 (   struct env962 env ,    struct List_3 *  list1671 ,    struct Slice_5  it1673 ) {
    struct env592 envinst592 = {
        .envinst301 = env.envinst301 ,
        .list1671 =  list1671 ,
    };
    ( (  for_dash_each591 ) ( (  it1673 ) ,  ( (struct funenv592){ .fun = lam592, .env = envinst592 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim964 (    struct List_3 *  l1678 ,    size_t  new_dash_count1680 ) {
    (*  l1678 ) .f_count = (  new_dash_count1680 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list299 (   struct env299 env ,    struct DynStr_128  it1683 ,    enum CAllocator_4  al1685 ) {
    struct List_3  temp965 = ( (  mk940 ) ( (  al1685 ) ) );
    struct List_3 *  l1686 = ( &temp965 );
    struct funenv300  temp966 = ( (struct funenv300){ .fun = add_dash_all300, .env =  env.envinst300  } );
    ( temp966.fun ( temp966.env ,  (  l1686 ) ,  (  it1683 ) ) );
    return ( * (  l1686 ) );
}

struct funenv956 {
    enum Unit_13  (*fun) (  struct env956  ,    struct List_357 *  ,    struct Map_296  );
    struct env956 env;
};

struct env967 {
    ;
    ;
    ;
    ;
    ;
    struct env956 envinst956;
};

static  struct List_357   to_dash_list967 (   struct env967 env ,    struct Map_296  it1683 ,    enum CAllocator_4  al1685 ) {
    struct List_357  temp968 = ( (  mk939 ) ( (  al1685 ) ) );
    struct List_357 *  l1686 = ( &temp968 );
    struct funenv956  temp969 = ( (struct funenv956){ .fun = add_dash_all956, .env =  env.envinst956  } );
    ( temp969.fun ( temp969.env ,  (  l1686 ) ,  (  it1683 ) ) );
    return ( * (  l1686 ) );
}

static  struct Slice_5   to_dash_slice970 (    struct List_3  l1689 ) {
    char *  ptr1690 = ( ( (  l1689 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1690 ) , .f_count = ( (  l1689 ) .f_count ) } );
}

static  struct Slice_331   to_dash_slice971 (    struct List_357  l1689 ) {
    struct List_3 *  ptr1690 = ( ( (  l1689 ) .f_elements ) .f_ptr );
    return ( (struct Slice_331) { .f_ptr = (  ptr1690 ) , .f_count = ( (  l1689 ) .f_count ) } );
}

static  struct SliceAddressIter_609   addresses972 (    struct List_357  l1693 ) {
    return ( (  addresses901 ) ( ( (  to_dash_slice971 ) ( (  l1693 ) ) ) ) );
}

static  size_t   size973 (    struct List_3 *  l1696 ) {
    return ( ( * (  l1696 ) ) .f_count );
}

static  struct Maybe_257   get974 (    const char*  s1767 ) {
    return ( (  from_dash_nullable_dash_c_dash_str256 ) ( ( ( getenv ) ( (  s1767 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor975 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor976 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to977 (    uint32_t  x1744 ,    uint32_t  y1746 ) {
    uint32_t  x1747 = (  op_dash_add86 ( (  x1744 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1748 = (  op_dash_add86 ( (  y1746 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str852 ) ( ( ( StrConcat_853_StrConcat ) ( ( ( StrConcat_854_StrConcat ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_781_StrConcat ) ( ( "\x1b[" ) ,  (  y1748 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1747 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position978 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_980 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_980 Tuple2_980_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_980 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_980   get_dash_dimensions979 (  ) {
    struct Winsize_172  temp981 = ( ( (  zeroed227 ) ( ) ) );
    struct Winsize_172 *  ws1752 = ( &temp981 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno106 ) ( ) ) ,  ( (  tiocgwinsz122 ) ( ) ) ,  (  ws1752 ) ) ) , (  op_dash_neg85 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1752 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_980_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_980_Tuple2 ) ( ( (  u16_dash_u32263 ) ( ( ( * (  ws1752 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32263 ) ( ( ( * (  ws1752 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg982 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg983 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_622   query_dash_palette984 (  ) {
    struct Maybe_257  colorterm1768 = ( (  get974 ) ( ( "COLORTERM" ) ) );
    struct Maybe_257  dref1769 = (  colorterm1768 );
    if ( dref1769.tag == Maybe_257_Just_t ) {
        if ( ( (  eq874 ( ( dref1769 .stuff .Maybe_257_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq874 ( ( dref1769 .stuff .Maybe_257_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_622_PaletteRGB );
        }
    }
    else if ( dref1769.tag == Maybe_257_None_t ) {
    }
    struct Maybe_257  dref1771 = ( (  get974 ) ( ( "TERM" ) ) );
    if ( dref1771.tag == Maybe_257_Just_t ) {
        if ( (  eq874 ( ( dref1771 .stuff .Maybe_257_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_622_Palette8 );
        }
    }
    else if ( dref1771.tag == Maybe_257_None_t ) {
    }
    return ( ColorPalette_622_Palette16 );
}

static  enum Unit_13   set_dash_fg8985 (    enum Color8_54  color1787 ) {
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

static  enum Unit_13   set_dash_fg16986 (    enum Color16_55  color1791 ) {
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

static  enum Unit_13   set_dash_bg8987 (    enum Color8_54  color1795 ) {
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

static  enum Unit_13   set_dash_bg16988 (    enum Color16_55  color1799 ) {
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

static  enum Unit_13   reset_dash_colors989 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen990 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg256991 (    uint8_t  color1805 ) {
    ( (  print_dash_str840 ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1805 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg256992 (    uint8_t  color1808 ) {
    ( (  print_dash_str840 ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1808 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb993 (    struct RGB_56  c1828 ) {
    ( (  print_dash_str844 ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1828 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1828 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1828 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb994 (    struct RGB_56  c1831 ) {
    ( (  print_dash_str844 ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1831 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1831 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1831 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg995 (    struct Color_53  c1849 ) {
    struct Color_53  dref1850 = (  c1849 );
    if ( dref1850.tag == Color_53_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg982 ) ( ) );
    }
    else if ( dref1850.tag == Color_53_Color8_t ) {
        ( (  set_dash_fg8985 ) ( ( dref1850 .stuff .Color_53_Color8_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_Color16_t ) {
        ( (  set_dash_fg16986 ) ( ( dref1850 .stuff .Color_53_Color16_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_Color256_t ) {
        ( (  set_dash_fg256991 ) ( ( dref1850 .stuff .Color_53_Color256_s .field0 ) ) );
    }
    else if ( dref1850.tag == Color_53_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb993 ) ( ( dref1850 .stuff .Color_53_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg996 (    struct Color_53  c1857 ) {
    struct Color_53  dref1858 = (  c1857 );
    if ( dref1858.tag == Color_53_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg983 ) ( ) );
    }
    else if ( dref1858.tag == Color_53_Color8_t ) {
        ( (  set_dash_bg8987 ) ( ( dref1858 .stuff .Color_53_Color8_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_Color16_t ) {
        ( (  set_dash_bg16988 ) ( ( dref1858 .stuff .Color_53_Color16_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_Color256_t ) {
        ( (  set_dash_bg256992 ) ( ( dref1858 .stuff .Color_53_Color256_s .field0 ) ) );
    }
    else if ( dref1858.tag == Color_53_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb994 ) ( ( dref1858 .stuff .Color_53_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env997 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam549 (   struct env549 env ,    char  c1914 ) {
    struct funenv301  temp998 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp998.fun ( temp998.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write997 (   struct env997 env ,    struct StrBuilder_550 *  builder1910 ,    const char*  s1912 ) {
    struct env549 envinst549 = {
        .envinst301 = env.envinst301 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each548 ) ( ( (  chars754 ) ( (  s1912 ) ) ) ,  ( (struct funenv549){ .fun = lam549, .env = envinst549 } ) ) );
    return ( Unit_13_Unit );
}

struct env999 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam596 (   struct env596 env ,    char  c1914 ) {
    struct funenv301  temp1000 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp1000.fun ( temp1000.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write999 (   struct env999 env ,    struct StrBuilder_550 *  builder1910 ,    struct TakeWhile_493  s1912 ) {
    struct env596 envinst596 = {
        .envinst301 = env.envinst301 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each595 ) ( ( (  chars867 ) ( (  s1912 ) ) ) ,  ( (struct funenv596){ .fun = lam596, .env = envinst596 } ) ) );
    return ( Unit_13_Unit );
}

struct env1001 {
    ;
    ;
    struct env301 envinst301;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam600 (   struct env600 env ,    char  c1914 ) {
    struct funenv301  temp1002 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    return ( temp1002.fun ( temp1002.env ,  ( & ( ( * ( env.builder1910 ) ) .f_chars ) ) ,  (  c1914 ) ) );
}

static  enum Unit_13   write1001 (   struct env1001 env ,    struct StrBuilder_550 *  builder1910 ,    struct TakeWhile_497  s1912 ) {
    struct env600 envinst600 = {
        .envinst301 = env.envinst301 ,
        .builder1910 =  builder1910 ,
    };
    ( (  for_dash_each599 ) ( ( (  chars868 ) ( (  s1912 ) ) ) ,  ( (struct funenv600){ .fun = lam600, .env = envinst600 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char605 (   struct env605 env ,    struct StrBuilder_550 *  builder1917 ,    char  c1919 ) {
    struct funenv301  temp1003 = ( (struct funenv301){ .fun = add301, .env =  env.envinst301  } );
    ( temp1003.fun ( temp1003.env ,  ( & ( ( * (  builder1917 ) ) .f_chars ) ) ,  (  c1919 ) ) );
    return ( Unit_13_Unit );
}

struct funenv953 {
    enum Unit_13  (*fun) (  struct env953  ,    struct List_3 *  );
    struct env953 env;
};

struct env1004 {
    ;
    ;
    struct env953 envinst953;
};

static  enum Unit_13   pop1004 (   struct env1004 env ,    struct StrBuilder_550 *  sb1927 ) {
    struct funenv953  temp1005 = ( (struct funenv953){ .fun = pop953, .env =  env.envinst953  } );
    return ( temp1005.fun ( temp1005.env ,  ( & ( ( * (  sb1927 ) ) .f_chars ) ) ) );
}

static  size_t   count1006 (    struct StrBuilder_550 *  sb1930 ) {
    return ( ( ( * (  sb1930 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_550   mk1007 (    enum CAllocator_4  al1933 ) {
    return ( (struct StrBuilder_550) { .f_chars = ( (  mk940 ) ( (  al1933 ) ) ) } );
}

static  enum Unit_13   free1008 (    struct StrBuilder_550 *  builder1939 ) {
    ( (  free941 ) ( ( & ( ( * (  builder1939 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv997 {
    enum Unit_13  (*fun) (  struct env997  ,    struct StrBuilder_550 *  ,    const char*  );
    struct env997 env;
};

struct env1009 {
    ;
    ;
    struct env605 envinst605;
    ;
    ;
    ;
    ;
    ;
    struct env997 envinst997;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1009 (   struct env1009 env ,    const char*  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_550  temp1010 = ( (  mk1007 ) ( (  al1955 ) ) );
    struct StrBuilder_550 *  sb1956 = ( &temp1010 );
    struct funenv997  temp1011 = ( (struct funenv997){ .fun = write997, .env =  env.envinst997  } );
    ( temp1011.fun ( temp1011.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv605  temp1012 = ( (struct funenv605){ .fun = write_dash_char605, .env =  env.envinst605  } );
    ( temp1012.fun ( temp1012.env ,  (  sb1956 ) ,  ( (  nullchar314 ) ( ) ) ) );
    return ( ( (  cast180 ) ( ( ( ( (  as_dash_str772 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv999 {
    enum Unit_13  (*fun) (  struct env999  ,    struct StrBuilder_550 *  ,    struct TakeWhile_493  );
    struct env999 env;
};

struct env1013 {
    ;
    ;
    struct env605 envinst605;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env999 envinst999;
    ;
};

static  const char*   mk_dash_const_dash_str1013 (   struct env1013 env ,    struct TakeWhile_493  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_550  temp1014 = ( (  mk1007 ) ( (  al1955 ) ) );
    struct StrBuilder_550 *  sb1956 = ( &temp1014 );
    struct funenv999  temp1015 = ( (struct funenv999){ .fun = write999, .env =  env.envinst999  } );
    ( temp1015.fun ( temp1015.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv605  temp1016 = ( (struct funenv605){ .fun = write_dash_char605, .env =  env.envinst605  } );
    ( temp1016.fun ( temp1016.env ,  (  sb1956 ) ,  ( (  nullchar314 ) ( ) ) ) );
    return ( ( (  cast180 ) ( ( ( ( (  as_dash_str772 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1001 {
    enum Unit_13  (*fun) (  struct env1001  ,    struct StrBuilder_550 *  ,    struct TakeWhile_497  );
    struct env1001 env;
};

struct env1017 {
    ;
    ;
    struct env605 envinst605;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1001 envinst1001;
    ;
};

static  const char*   mk_dash_const_dash_str1017 (   struct env1017 env ,    struct TakeWhile_497  s1953 ,    enum CAllocator_4  al1955 ) {
    struct StrBuilder_550  temp1018 = ( (  mk1007 ) ( (  al1955 ) ) );
    struct StrBuilder_550 *  sb1956 = ( &temp1018 );
    struct funenv1001  temp1019 = ( (struct funenv1001){ .fun = write1001, .env =  env.envinst1001  } );
    ( temp1019.fun ( temp1019.env ,  (  sb1956 ) ,  (  s1953 ) ) );
    struct funenv605  temp1020 = ( (struct funenv605){ .fun = write_dash_char605, .env =  env.envinst605  } );
    ( temp1020.fun ( temp1020.env ,  (  sb1956 ) ,  ( (  nullchar314 ) ( ) ) ) );
    return ( ( (  cast180 ) ( ( ( ( (  as_dash_str772 ) ( (  sb1956 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  uint32_t   fst1021 (    struct Tuple2_980  dref1995 ) {
    return ( dref1995 .field0 );
}

static  uint32_t   snd1022 (    struct Tuple2_980  dref1998 ) {
    return ( dref1998 .field1 );
}

struct Maybe_1024 {
    enum {
        Maybe_1024_None_t,
        Maybe_1024_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1024_Just_s;
    } stuff;
};

static struct Maybe_1024 Maybe_1024_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1024 ) { .tag = Maybe_1024_Just_t, .stuff = { .Maybe_1024_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1023 (    struct Maybe_1024  m2002 ) {
    struct Maybe_1024  dref2003 = (  m2002 );
    if ( dref2003.tag == Maybe_1024_None_t ) {
        return ( false );
    }
    else if ( dref2003.tag == Maybe_1024_Just_t ) {
        return ( true );
    }
}

struct Cursor_1028 {
    int32_t  f_x;
    int32_t  f_y;
};

struct Visual_1029 {
    int32_t  field0;
};

static struct Visual_1029 Visual_1029_Visual (  int32_t  field0 ) {
    return ( struct Visual_1029 ) { .field0 = field0 };
};

struct Editor_1027 {
    bool  f_running;
    struct Cursor_1028  f_cursor;
    struct Visual_1029  f_goal_dash_x;
    struct List_357  f_current_dash_file;
    struct Maybe_257  f_filename;
    struct Mode_766  f_mode;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Maybe_1024  f_anim;
};

struct env1026 {
    ;
    struct Editor_1027 *  ed2716;
    ;
};

struct funenv1026 {
    struct Maybe_49  (*fun) (  struct env1026  ,    struct List_3  );
    struct env1026 env;
};

static  struct Maybe_49   and_dash_maybe1025 (    struct Maybe_308  m2006 ,   struct funenv1026  fun2008 ) {
    struct Maybe_308  dref2009 = (  m2006 );
    if ( dref2009.tag == Maybe_308_None_t ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    else if ( dref2009.tag == Maybe_308_Just_t ) {
        struct funenv1026  temp1030 = (  fun2008 );
        return ( temp1030.fun ( temp1030.env ,  ( dref2009 .stuff .Maybe_308_Just_s .field0 ) ) );
    }
}

static  struct Maybe_347   fmap_dash_maybe1031 (    struct Maybe_49  x2013 ,    struct Tuple2_348 (*  fun2015 )(    char  ) ) {
    struct Maybe_49  dref2016 = (  x2013 );
    if ( dref2016.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_347) { .tag = Maybe_347_None_t } );
    }
    else if ( dref2016.tag == Maybe_49_Just_t ) {
        return ( ( Maybe_347_Just ) ( ( (  fun2015 ) ( ( dref2016 .stuff .Maybe_49_Just_s .field0 ) ) ) ) );
    }
}

static  bool   maybe1032 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1033 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1034 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1035 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1036 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  bool   maybe1037 (    struct Maybe_49  x2020 ,    bool (*  fun2022 )(    char  ) ,    bool  default2024 ) {
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( (  fun2022 ) ( ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  int32_t   maybe1038 (    struct Maybe_49  x2020 ,   struct funenv306  fun2022 ,    int32_t  default2024 ) {
    struct funenv306  temp1039 = (  fun2022 );
    return ( {  struct Maybe_49  dref2025 = (  x2020 ) ; dref2025.tag == Maybe_49_Just_t ? ( temp1039.fun ( temp1039.env ,  ( dref2025 .stuff .Maybe_49_Just_s .field0 ) ) ) : (  default2024 ) ; } );
}

static  struct timespec   now1040 (  ) {
    struct timespec  temp1041 = ( (  undefined130 ) ( ) );
    struct timespec *  t2140 = ( &temp1041 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic103 ) ( ) ) ,  (  t2140 ) ) );
    return ( * (  t2140 ) );
}

struct Duration_1043 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1042 (    struct Duration_1043  l2144 ,    struct Duration_1043  r2146 ) {
    enum Ordering_10  scmp2147 = ( (  cmp73 ) ( ( (  l2144 ) .f_secs ) ,  ( (  r2146 ) .f_secs ) ) );
    if ( ( !  eq46 ( (  scmp2147 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2147 );
    }
    return ( (  cmp73 ) ( ( (  l2144 ) .f_nsecs ) ,  ( (  r2146 ) .f_nsecs ) ) );
}

static  struct Duration_1043   diff1044 (    struct timespec  l2150 ,    struct timespec  r2152 ) {
    int64_t  secdiff2153 = (  op_dash_sub78 ( ( (  l2150 ) .tv_sec ) , ( (  r2152 ) .tv_sec ) ) );
    int64_t  nsdiff2154 = (  op_dash_sub78 ( ( (  l2150 ) .tv_nsec ) , ( (  r2152 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2155 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp73 ( (  nsdiff2154 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp73 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1043) { .f_secs = (  secdiff2153 ) , .f_nsecs = (  op_dash_neg80 ( (  nsdiff2154 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1043) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2154 ) } );
            } else {
                return ( (struct Duration_1043) { .f_secs = (  op_dash_sub78 ( (  secdiff2153 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add77 ( (  ns_dash_in_dash_secs2155 ) , (  nsdiff2154 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp73 ( (  secdiff2153 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1043) { .f_secs = (  secdiff2153 ) , .f_nsecs = (  nsdiff2154 ) } );
        } else {
            return ( (struct Duration_1043) { .f_secs = (  op_dash_sub78 ( (  secdiff2153 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub78 ( (  ns_dash_in_dash_secs2155 ) , (  nsdiff2154 ) ) ) } );
        }
    }
}

static  struct Duration_1043   duration_dash_from_dash_ns1045 (    int64_t  ns2158 ) {
    int64_t  ns_dash_in_dash_secs2159 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1043) { .f_secs = (  op_dash_div79 ( (  ns2158 ) , (  ns_dash_in_dash_secs2159 ) ) ) , .f_nsecs = ( (  mod749 ) ( (  ns2158 ) ,  (  ns_dash_in_dash_secs2159 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1046 (    struct Duration_1043  d2170 ) {
    int64_t  ns_dash_in_dash_secs2171 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add77 ( (  op_dash_mul32 ( ( (  d2170 ) .f_secs ) , (  ns_dash_in_dash_secs2171 ) ) ) , ( (  d2170 ) .f_nsecs ) ) );
}

static  struct Scanner_269   mk1047 (    struct DynStr_128  s2181 ) {
    return ( (struct Scanner_269) { .f_s = ( (  chars779 ) ( (  s2181 ) ) ) } );
}

static  struct Maybe_686   scan_dash_int1048 (    struct Scanner_269 *  sc2184 ) {
    struct TakeWhile_486  digit_dash_chars2185 = ( (  take_dash_while507 ) ( (  sc2184 ) ,  (  is_dash_digit927 ) ) );
    if ( ( (  null740 ) ( (  digit_dash_chars2185 ) ) ) ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    ( (  drop_prime_742 ) ( (  sc2184 ) ,  ( (  count712 ) ( (  digit_dash_chars2185 ) ) ) ) );
    return ( (  parse_dash_int929 ) ( (  digit_dash_chars2185 ) ) );
}

static  struct Termios_133   enable_dash_raw_dash_mode1049 (  ) {
    struct Termios_133  temp1050 = ( (  undefined132 ) ( ) );
    struct Termios_133 *  orig_dash_termios2192 = ( &temp1050 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno107 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( (  orig_dash_termios2192 ) ) ) ) );
    struct Termios_133  raw2193 = ( * (  orig_dash_termios2192 ) );
    raw2193 .f_c_dash_lflag = ( (  u32_dash_and747 ) ( ( (  raw2193 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg748 ) ( ( (  u32_dash_ors744 ) ( ( (  from_dash_listlike94 ) ( ( (struct Array_96) { ._arr = { ( (  echo108 ) ( ) ) , ( (  icanon109 ) ( ) ) , ( (  isig110 ) ( ) ) , ( ( (  iexten111 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_iflag = ( (  u32_dash_and747 ) ( ( (  raw2193 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg748 ) ( ( (  u32_dash_ors745 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  brkint112 ) ( ) ) , ( (  icrnl113 ) ( ) ) , ( (  inpck114 ) ( ) ) , ( (  istrip115 ) ( ) ) , ( ( (  ixon116 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_oflag = ( (  u32_dash_and747 ) ( ( (  raw2193 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg748 ) ( ( (  u32_dash_ors746 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( ( (  opost117 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2193 .f_c_dash_cflag = ( (  u32_dash_or743 ) ( ( (  raw2193 ) .f_c_dash_cflag ) ,  ( (  cs8118 ) ( ) ) ) );
    ( (  set921 ) ( ( & ( (  raw2193 ) .f_c_dash_cc ) ) ,  ( (  vmin119 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set921 ) ( ( & ( (  raw2193 ) .f_c_dash_cc ) ) ,  ( (  vtime120 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno107 ) ( ) ) ,  ( (  tcsa_dash_flush121 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( ( & (  raw2193 ) ) ) ) ) );
    return ( * (  orig_dash_termios2192 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1051 (    struct Termios_133 *  og_dash_termios2196 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno107 ) ( ) ) ,  ( (  tcsa_dash_flush121 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( (  og_dash_termios2196 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_49   read_dash_byte1052 (    int32_t  timeout_dash_ms2200 ) {
    struct Pollfd_211  pfd2201 = ( (struct Pollfd_211) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp74 ( ( ( poll ) ( ( (  cast_dash_ptr210 ) ( ( & (  pfd2201 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2200 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    char  c2202 = ( ( (  zeroed221 ) ( ) ) );
    if ( (  cmp74 ( ( ( read ) ( ( (  stdin_dash_fileno107 ) ( ) ) ,  ( (  cast_dash_ptr202 ) ( ( & (  c2202 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_49) { .tag = Maybe_49_None_t } );
    }
    return ( ( Maybe_49_Just ) ( (  c2202 ) ) );
}

static  enum Unit_13   flush_dash_stdout1053 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr251 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1054 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1055 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1057 {
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

struct env1058 {
    bool *  should_dash_resize2206;
};

struct funenv1058 {
    enum Unit_13  (*fun) (  struct env1058  ,    int32_t  );
    struct env1058 env;
};

struct funenv1058  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1059 ) {
    struct funenv1058  temp1060 = _intr_sigarr [  __intr__sig1059 ];
    temp1060.fun ( temp1060.env ,  __intr__sig1059 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1061 ,   struct funenv1058  __intr__fun1062 ) {
    _intr_sigarr [  __intr__sig1061 ] =  __intr__fun1062;
    signal(  __intr__sig1061 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1058 (   struct env1058 env ,    int32_t  dref2213 ) {
    (* env.should_dash_resize2206 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_621   mk1057 (   struct env1057 env ) {
    struct Termios_133  og_dash_termios2208 = ( (  enable_dash_raw_dash_mode1049 ) ( ) );
    ( (  hide_dash_cursor976 ) ( ) );
    ( (  reset_dash_colors989 ) ( ) );
    ( (  clear_dash_screen990 ) ( ) );
    ( (  enable_dash_mouse1054 ) ( ) );
    ( (  flush_dash_stdout1053 ) ( ) );
    enum ColorPalette_622  palette2209 = ( (  query_dash_palette984 ) ( ) );
    struct Tuple2_980  dims2210 = ( (  get_dash_dimensions979 ) ( ) );
    uint32_t  fps2211 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2212 = ( (  now1040 ) ( ) );
    struct env1058 envinst1058 = {
        .should_dash_resize2206 = env.should_dash_resize2206 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1058){ .fun = lam1058, .env = envinst1058 } ) ) );
    return ( (struct Tui_621) { .f_width = ( (  fst1021 ) ( (  dims2210 ) ) ) , .f_height = ( (  snd1022 ) ( (  dims2210 ) ) ) , .f_target_dash_fps = (  fps2211 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2212 ) , .f_fps_dash_ts = (  last_dash_sync2212 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2208 ) , .f_palette = (  palette2209 ) } );
}

static  enum Unit_13   sync1063 (    struct Tui_621 *  tui2216 ) {
    if ( (  eq42 ( ( ( * (  tui2216 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2217 = (  op_dash_div79 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size264 ) ( ( ( * (  tui2216 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1064 = ( (  undefined130 ) ( ) );
    struct timespec *  now2218 = ( &temp1064 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic103 ) ( ) ) ,  (  now2218 ) ) );
    int64_t  elapsed_dash_ns2219 = (  op_dash_add77 ( (  op_dash_mul32 ( (  op_dash_sub78 ( ( ( * (  now2218 ) ) .tv_sec ) , ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub78 ( ( ( * (  now2218 ) ) .tv_nsec ) , ( ( ( * (  tui2216 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2220 = (  op_dash_sub78 ( (  frame_dash_ns2217 ) , (  elapsed_dash_ns2219 ) ) );
    if ( (  cmp73 ( (  sleep_dash_ns2220 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1065 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2220 ) } );
        struct timespec *  ts2221 = ( &temp1065 );
        ( ( nanosleep ) ( (  ts2221 ) ,  ( (  null_dash_ptr253 ) ( ) ) ) );
    }
    struct timespec  temp1066 = ( (  undefined130 ) ( ) );
    struct timespec *  last_dash_sync2222 = ( &temp1066 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic103 ) ( ) ) ,  (  last_dash_sync2222 ) ) );
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

static  enum Unit_13   deinit1067 (    struct Tui_621 *  tui2226 ) {
    ( (  disable_dash_mouse1055 ) ( ) );
    ( (  show_dash_cursor975 ) ( ) );
    ( (  reset_dash_colors989 ) ( ) );
    ( (  clear_dash_screen990 ) ( ) );
    ( (  reset_dash_cursor_dash_position978 ) ( ) );
    ( (  disable_dash_raw_dash_mode1051 ) ( ( & ( ( * (  tui2226 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1053 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_139   btn_dash_to_dash_mouse_dash_button1068 (    int64_t  btn2233 ) {
    return ( {  int32_t  dref2234 = ( (  i64_dash_i32261 ) ( (  btn2233 ) ) ) ;  dref2234 == 0 ? ( MouseButton_139_MouseLeft ) :  dref2234 == 1 ? ( MouseButton_139_MouseMiddle ) :  dref2234 == 2 ? ( MouseButton_139_MouseRight ) :  dref2234 == 64 ? ( MouseButton_139_ScrollUp ) :  dref2234 == 65 ? ( MouseButton_139_ScrollDown ) : ( (  panic_prime_881 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1070 {
    enum {
        Maybe_1070_None_t,
        Maybe_1070_Just_t,
    } tag;
    union {
        struct {
            struct Key_526  field0;
        } Maybe_1070_Just_s;
    } stuff;
};

static struct Maybe_1070 Maybe_1070_Just (  struct Key_526  field0 ) {
    return ( struct Maybe_1070 ) { .tag = Maybe_1070_Just_t, .stuff = { .Maybe_1070_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1070   parse_dash_ss31069 (    char  c2237 ) {
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_Up_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_Down_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_Right_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_Left_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_Home_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_End_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_F1_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_F2_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_F3_t } ) ) );
    }
    if ( (  eq47 ( (  c2237 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1070_Just ) ( ( (struct Key_526) { .tag = Key_526_F4_t } ) ) );
    }
    return ( (struct Maybe_1070) { .tag = Maybe_1070_None_t } );
}

static  struct Maybe_524   parse_dash_csi1071 (    struct DynStr_128  seq2240 ) {
    if ( (  eq45 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
    }
    char  last2241 = (  elem_dash_get906 ( ( (  seq2240 ) .f_contents ) , (  op_dash_sub91 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq47 ( (  elem_dash_get906 ( ( (  seq2240 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_269  temp1072 = ( (  mk1047 ) ( ( (  substr316 ) ( (  seq2240 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2240 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_269 *  sc2242 = ( &temp1072 );
        struct Maybe_686  dref2243 = ( (  scan_dash_int1048 ) ( (  sc2242 ) ) );
        if ( dref2243.tag == Maybe_686_None_t ) {
            return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
        }
        else if ( dref2243.tag == Maybe_686_Just_t ) {
            ( (  next499 ) ( (  sc2242 ) ) );
            struct Maybe_686  dref2245 = ( (  scan_dash_int1048 ) ( (  sc2242 ) ) );
            if ( dref2245.tag == Maybe_686_None_t ) {
                return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
            }
            else if ( dref2245.tag == Maybe_686_Just_t ) {
                ( (  next499 ) ( (  sc2242 ) ) );
                struct Maybe_686  dref2247 = ( (  scan_dash_int1048 ) ( (  sc2242 ) ) );
                if ( dref2247.tag == Maybe_686_None_t ) {
                    return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
                }
                else if ( dref2247.tag == Maybe_686_Just_t ) {
                    return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Mouse ) ( ( (struct MouseEvent_527) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1068 ) ( ( dref2243 .stuff .Maybe_686_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub82 ( ( (  i64_dash_i32261 ) ( ( dref2245 .stuff .Maybe_686_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub82 ( ( (  i64_dash_i32261 ) ( ( dref2247 .stuff .Maybe_686_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2240 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Up_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Down_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Right_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Left_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Home_t } ) ) ) ) );
        }
        if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
    }
    if ( (  eq47 ( (  last2241 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_269  temp1073 = ( (  mk1047 ) ( (  seq2240 ) ) );
        struct Scanner_269 *  sc2249 = ( &temp1073 );
        struct Maybe_686  dref2250 = ( (  scan_dash_int1048 ) ( (  sc2249 ) ) );
        if ( dref2250.tag == Maybe_686_None_t ) {
            return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
        }
        else if ( dref2250.tag == Maybe_686_Just_t ) {
            return ( {  int32_t  dref2252 = ( (  i64_dash_i32261 ) ( ( dref2250 .stuff .Maybe_686_Just_s .field0 ) ) ) ;  dref2252 == 1 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Home_t } ) ) ) ) ) :  dref2252 == 2 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Insert_t } ) ) ) ) ) :  dref2252 == 3 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Delete_t } ) ) ) ) ) :  dref2252 == 4 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_End_t } ) ) ) ) ) :  dref2252 == 5 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_PageUp_t } ) ) ) ) ) :  dref2252 == 6 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_PageDown_t } ) ) ) ) ) :  dref2252 == 15 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F5_t } ) ) ) ) ) :  dref2252 == 17 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F6_t } ) ) ) ) ) :  dref2252 == 18 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F7_t } ) ) ) ) ) :  dref2252 == 19 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F8_t } ) ) ) ) ) :  dref2252 == 20 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F9_t } ) ) ) ) ) :  dref2252 == 21 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F10_t } ) ) ) ) ) :  dref2252 == 23 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F11_t } ) ) ) ) ) :  dref2252 == 24 ? ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_F12_t } ) ) ) ) ) : ( (struct Maybe_524) { .tag = Maybe_524_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
}

static  struct Maybe_524   read_dash_key1074 (  ) {
    char  temp1075 = ( (  undefined125 ) ( ) );
    char *  ch2254 = ( &temp1075 );
    struct Maybe_49  dref2255 = ( (  read_dash_byte1052 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2255.tag == Maybe_49_None_t ) {
        return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
    }
    else if ( dref2255.tag == Maybe_49_Just_t ) {
        (*  ch2254 ) = ( dref2255 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8873 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8873 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Backspace_t } ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8873 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp76 ( ( (  char_dash_u8873 ) ( ( * (  ch2254 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1074 ) ( ) );
        } else {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( ( Key_526_Char ) ( ( * (  ch2254 ) ) ) ) ) ) ) );
        }
    }
    char  temp1076 = ( (  undefined125 ) ( ) );
    char *  ch22257 = ( &temp1076 );
    struct Maybe_49  dref2258 = ( (  read_dash_byte1052 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2258.tag == Maybe_49_None_t ) {
        return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Escape_t } ) ) ) ) );
    }
    else if ( dref2258.tag == Maybe_49_Just_t ) {
        (*  ch22257 ) = ( dref2258 .stuff .Maybe_49_Just_s .field0 );
    }
    if ( (  eq47 ( ( * (  ch22257 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_176  temp1077 = ( ( (  zeroed233 ) ( ) ) );
        struct Array_176 *  seq2260 = ( &temp1077 );
        int32_t  slen2261 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp74 ( (  slen2261 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1078 = ( (  undefined125 ) ( ) );
            char *  sc2262 = ( &temp1078 );
            struct Maybe_49  dref2263 = ( (  read_dash_byte1052 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2263.tag == Maybe_49_None_t ) {
                break;
            }
            else if ( dref2263.tag == Maybe_49_Just_t ) {
                (*  sc2262 ) = ( dref2263 .stuff .Maybe_49_Just_s .field0 );
            }
            ( (  set922 ) ( (  seq2260 ) ,  ( (  i32_dash_size260 ) ( (  slen2261 ) ) ) ,  ( * (  sc2262 ) ) ) );
            slen2261 = (  op_dash_add81 ( (  slen2261 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp76 ( ( (  char_dash_u8873 ) ( ( * (  sc2262 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp76 ( ( (  char_dash_u8873 ) ( ( * (  sc2262 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1071 ) ( ( (struct DynStr_128) { .f_contents = ( (  subslice275 ) ( ( (  as_dash_slice923 ) ( (  seq2260 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size260 ) ( (  slen2261 ) ) ) ) ) } ) ) );
    }
    if ( (  eq47 ( ( * (  ch22257 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1079 = ( (  undefined125 ) ( ) );
        char *  sc2265 = ( &temp1079 );
        struct Maybe_49  dref2266 = ( (  read_dash_byte1052 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2266.tag == Maybe_49_None_t ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Escape_t } ) ) ) ) );
        }
        else if ( dref2266.tag == Maybe_49_Just_t ) {
            (*  sc2265 ) = ( dref2266 .stuff .Maybe_49_Just_s .field0 );
        }
        struct Maybe_1070  dref2268 = ( (  parse_dash_ss31069 ) ( ( * (  sc2265 ) ) ) );
        if ( dref2268.tag == Maybe_1070_None_t ) {
            return ( (struct Maybe_524) { .tag = Maybe_524_None_t } );
        }
        else if ( dref2268.tag == Maybe_1070_Just_t ) {
            return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( dref2268 .stuff .Maybe_1070_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_524_Just ) ( ( ( InputEvent_525_Key ) ( ( (struct Key_526) { .tag = Key_526_Escape_t } ) ) ) ) );
}

struct env1080 {
    ;
    ;
    bool *  should_dash_resize2206;
    ;
};

static  bool   update_dash_dimensions1080 (   struct env1080 env ,    struct Tui_621 *  tui2272 ) {
    if ( ( ! ( * ( env.should_dash_resize2206 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2206 ) = ( false );
    struct Tuple2_980  dim2273 = ( (  get_dash_dimensions979 ) ( ) );
    uint32_t  w2274 = ( (  fst1021 ) ( (  dim2273 ) ) );
    uint32_t  h2275 = ( (  snd1022 ) ( (  dim2273 ) ) );
    (*  tui2272 ) .f_width = (  w2274 );
    (*  tui2272 ) .f_height = (  h2275 );
    return ( true );
}

static  struct Cell_52   lam1082 (    struct Cell_52  dref2293 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  struct Cell_52   lam1083 (    struct Cell_52  dref2295 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  struct Screen_620   mk_dash_screen1081 (    struct Tui_621 *  tui2289 ,    enum CAllocator_4  al2291 ) {
    struct Slice_556  cur2292 = ( (  allocate913 ) ( (  al2291 ) ,  ( (  u32_dash_size264 ) ( (  op_dash_mul88 ( ( ( * (  tui2289 ) ) .f_width ) , ( ( * (  tui2289 ) ) .f_height ) ) ) ) ) ) );
    ( (  map908 ) ( (  cur2292 ) ,  (  lam1082 ) ) );
    struct Slice_556  prev2294 = ( (  allocate913 ) ( (  al2291 ) ,  ( (  u32_dash_size264 ) ( (  op_dash_mul88 ( ( ( * (  tui2289 ) ) .f_width ) , ( ( * (  tui2289 ) ) .f_height ) ) ) ) ) ) );
    ( (  map907 ) ( (  prev2294 ) ,  (  lam1083 ) ) );
    return ( (struct Screen_620) { .f_current = (  cur2292 ) , .f_previous = (  prev2294 ) , .f_al = (  al2291 ) , .f_tui = (  tui2289 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1084 (    struct Screen_620 *  screen2298 ) {
    enum CAllocator_4  al2299 = ( ( * (  screen2298 ) ) .f_al );
    ( (  free918 ) ( (  al2299 ) ,  ( ( * (  screen2298 ) ) .f_current ) ) );
    ( (  free918 ) ( (  al2299 ) ,  ( ( * (  screen2298 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_52   lam1086 (    struct Cell_52  dref2303 ) {
    return ( (struct Cell_52) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1085 (    struct Screen_620 *  screen2302 ) {
    ( (  map909 ) ( ( ( * (  screen2302 ) ) .f_current ) ,  (  lam1086 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1088 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_53  f_fg;
    struct Color_53  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1087 (    struct RenderState_1088 *  rs2307 ,    struct Cell_52 *  c2309 ,    uint32_t  x2311 ,    uint32_t  y2313 ) {
    if ( ( ( !  eq42 ( (  x2311 ) , ( ( * (  rs2307 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2313 ) , ( ( * (  rs2307 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to977 ) ( (  x2311 ) ,  (  y2313 ) ) );
        (*  rs2307 ) .f_x = (  x2311 );
        (*  rs2307 ) .f_y = (  y2313 );
    }
    char  char2314 = ( ( * (  c2309 ) ) .f_c );
    struct Color_53  bg2315 = ( ( * (  c2309 ) ) .f_bg );
    if ( ( ( (  eq47 ( (  char2314 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq47 ( (  char2314 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq47 ( (  char2314 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2314 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2315 = ( ( Color_53_Color8 ) ( ( Color8_54_Red8 ) ) );
    }
    if ( ( !  eq58 ( ( ( * (  rs2307 ) ) .f_fg ) , ( ( * (  c2309 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg995 ) ( ( ( * (  c2309 ) ) .f_fg ) ) );
        (*  rs2307 ) .f_fg = ( ( * (  c2309 ) ) .f_fg );
    }
    if ( ( !  eq58 ( ( ( * (  rs2307 ) ) .f_bg ) , (  bg2315 ) ) ) ) {
        ( (  set_dash_bg996 ) ( (  bg2315 ) ) );
        (*  rs2307 ) .f_bg = (  bg2315 );
    }
    ( (  print_dash_str28 ) ( (  char2314 ) ) );
    (*  rs2307 ) .f_x = (  op_dash_add86 ( ( ( * (  rs2307 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1089 (    struct Screen_620 *  screen2318 ) {
    int32_t  w2319 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2318 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2320 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2318 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1088  temp1090 = ( (struct RenderState_1088) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_bg = ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1088 *  rs2321 = ( &temp1090 );
    ( (  move_dash_cursor_dash_to977 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_366  temp1091 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  h2320 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_319  __cond1092 =  next367 (&temp1091);
        if (  __cond1092 .tag == 0 ) {
            break;
        }
        int32_t  y2323 =  __cond1092 .stuff .Maybe_319_Just_s .field0;
        struct RangeIter_366  temp1093 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  w2319 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_319  __cond1094 =  next367 (&temp1093);
            if (  __cond1094 .tag == 0 ) {
                break;
            }
            int32_t  x2325 =  __cond1094 .stuff .Maybe_319_Just_s .field0;
            size_t  i2326 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2323 ) , (  w2319 ) ) ) , (  x2325 ) ) ) ) );
            struct Cell_52 *  cur2327 = ( (  get_dash_ptr892 ) ( ( ( * (  screen2318 ) ) .f_current ) ,  (  i2326 ) ) );
            struct Cell_52 *  prev2328 = ( (  get_dash_ptr892 ) ( ( ( * (  screen2318 ) ) .f_previous ) ,  (  i2326 ) ) );
            if ( ( ( !  eq51 ( (  cur2327 ) , (  prev2328 ) ) ) || ( ( * (  screen2318 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2321 ) .f_changes = (  op_dash_add86 ( ( ( * (  rs2321 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1087 ) ( (  rs2321 ) ,  (  cur2327 ) ,  ( (  i32_dash_u32258 ) ( (  x2325 ) ) ) ,  ( (  i32_dash_u32258 ) ( (  y2323 ) ) ) ) );
                (*  prev2328 ) = ( * (  cur2327 ) );
            }
        }
    }
    (*  screen2318 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors989 ) ( ) );
    ( (  flush_dash_stdout1053 ) ( ) );
    return ( ( * (  rs2321 ) ) .f_changes );
}

struct funenv1080 {
    bool  (*fun) (  struct env1080  ,    struct Tui_621 *  );
    struct env1080 env;
};

struct env1095 {
    ;
    ;
    ;
    ;
    struct env1080 envinst1080;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1095 (   struct env1095 env ,    struct Screen_620 *  screen2331 ) {
    struct Tui_621 *  tui2332 = ( ( * (  screen2331 ) ) .f_tui );
    struct funenv1080  temp1096 = ( (struct funenv1080){ .fun = update_dash_dimensions1080, .env =  env.envinst1080  } );
    if ( ( ! ( temp1096.fun ( temp1096.env ,  (  tui2332 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2331 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2333 = ( ( * ( ( * (  screen2331 ) ) .f_tui ) ) .f_width );
    uint32_t  h2334 = ( ( * ( ( * (  screen2331 ) ) .f_tui ) ) .f_height );
    size_t  nusz2335 = ( (  u32_dash_size264 ) ( (  op_dash_mul88 ( (  w2333 ) , (  h2334 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2335 ) , ( ( ( * (  screen2331 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_620  nuscreen2336 = ( (  mk_dash_screen1081 ) ( (  tui2332 ) ,  ( ( * (  screen2331 ) ) .f_al ) ) );
    (*  screen2331 ) .f_current = ( (  nuscreen2336 ) .f_current );
    (*  screen2331 ) .f_previous = ( (  nuscreen2336 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1097 (    struct Screen_620 *  screen2339 ,    struct Color_53  c2341 ) {
    (*  screen2339 ) .f_default_dash_fg = (  c2341 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1098 (    struct Screen_620 *  screen2344 ,    struct Color_53  c2346 ) {
    (*  screen2344 ) .f_default_dash_bg = (  c2346 );
    return ( Unit_13_Unit );
}

static  struct Maybe_888   get_dash_cell_dash_ptr1099 (    struct Screen_620 *  screen2353 ,    int32_t  x2355 ,    int32_t  y2357 ) {
    int32_t  w2358 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2353 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp74 ( (  x2355 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp74 ( (  x2355 ) , (  w2358 ) ) != 0 ) ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    if ( ( (  cmp74 ( (  y2357 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp74 ( (  y2357 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2353 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_888) { .tag = Maybe_888_None_t } );
    }
    size_t  i2359 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2357 ) , (  w2358 ) ) ) , (  x2355 ) ) ) ) );
    return ( ( Maybe_888_Just ) ( ( (  get_dash_ptr892 ) ( ( ( * (  screen2353 ) ) .f_current ) ,  (  i2359 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1100 (    struct Screen_620 *  screen2362 ) {
    struct RangeIter_366  temp1101 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2362 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_319  __cond1102 =  next367 (&temp1101);
        if (  __cond1102 .tag == 0 ) {
            break;
        }
        int32_t  y2364 =  __cond1102 .stuff .Maybe_319_Just_s .field0;
        struct RangeIter_366  temp1103 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2362 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_319  __cond1104 =  next367 (&temp1103);
            if (  __cond1104 .tag == 0 ) {
                break;
            }
            int32_t  x2366 =  __cond1104 .stuff .Maybe_319_Just_s .field0;
            struct Cell_52 *  cell2367 = ( (  or_dash_fail887 ) ( ( (  get_dash_cell_dash_ptr1099 ) ( (  screen2362 ) ,  (  x2366 ) ,  (  y2364 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2367 ) .f_bg = ( ( * (  screen2362 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1105 (    struct Screen_620 *  screen2370 ,    char  c2372 ,    int32_t  x2374 ,    int32_t  y2376 ) {
    int32_t  w2377 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2370 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp74 ( (  x2374 ) , (  w2377 ) ) != 0 ) || (  cmp74 ( (  y2376 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2370 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2378 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2376 ) , (  w2377 ) ) ) , (  x2374 ) ) ) ) );
    struct Color_53  fg2379 = ( ( * (  screen2370 ) ) .f_default_dash_fg );
    struct Color_53  bg2380 = ( ( * (  screen2370 ) ) .f_default_dash_bg );
    char  c2381 = (  c2372 );
    ( (  set900 ) ( ( ( * (  screen2370 ) ) .f_current ) ,  (  i2378 ) ,  ( (struct Cell_52) { .f_c = (  c2381 ) , .f_fg = (  fg2379 ) , .f_bg = (  bg2380 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam619 (   struct env619 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1106 (    struct Screen_620 *  screen2384 ,    int32_t  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env619 envinst619 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each618 ) ( ( (  zip467 ) ( ( (  chars759 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv619){ .fun = lam619, .env = envinst619 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam626 (   struct env626 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1107 (    struct Screen_620 *  screen2384 ,    struct StrConcat_765  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env626 envinst626 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each625 ) ( ( (  zip471 ) ( ( (  chars859 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv626){ .fun = lam626, .env = envinst626 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam630 (   struct env630 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1108 (    struct Screen_620 *  screen2384 ,    struct StrConcat_781  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env630 envinst630 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each629 ) ( ( (  zip473 ) ( ( (  chars860 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv630){ .fun = lam630, .env = envinst630 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam634 (   struct env634 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1109 (    struct Screen_620 *  screen2384 ,    struct StrConcat_783  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env634 envinst634 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each633 ) ( ( (  zip475 ) ( ( (  chars861 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv634){ .fun = lam634, .env = envinst634 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam638 (   struct env638 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1110 (    struct Screen_620 *  screen2384 ,    struct StrConcat_809  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env638 envinst638 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each637 ) ( ( (  zip477 ) ( ( (  chars862 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv638){ .fun = lam638, .env = envinst638 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam642 (   struct env642 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1111 (    struct Screen_620 *  screen2384 ,    struct StrConcat_17  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env642 envinst642 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each641 ) ( ( (  zip479 ) ( ( (  chars863 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv642){ .fun = lam642, .env = envinst642 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam646 (   struct env646 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1112 (    struct Screen_620 *  screen2384 ,    struct StrConcat_811  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env646 envinst646 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each645 ) ( ( (  zip481 ) ( ( (  chars814 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv646){ .fun = lam646, .env = envinst646 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam650 (   struct env650 env ,    struct Tuple2_348  dref2397 ) {
    ( (  set900 ) ( ( ( * ( env.screen2384 ) ) .f_current ) ,  (  op_dash_add90 ( ( env.i2392 ) , ( (  i32_dash_size260 ) ( ( dref2397 .field1 ) ) ) ) ) ,  ( (struct Cell_52) { .f_c = ( dref2397 .field0 ) , .f_fg = ( env.fg2395 ) , .f_bg = ( env.bg2396 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1113 (    struct Screen_620 *  screen2384 ,    struct StrConcat_818  s2386 ,    int32_t  x2388 ,    int32_t  y2390 ) {
    if ( (  cmp74 ( (  y2390 ) , ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2391 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2384 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2392 = ( (  i32_dash_size260 ) ( (  op_dash_add81 ( (  op_dash_mul83 ( (  y2390 ) , (  w2391 ) ) ) , (  x2388 ) ) ) ) );
    int32_t  x2393 = ( (  min750 ) ( (  x2388 ) ,  (  w2391 ) ) );
    size_t  max_dash_len2394 = ( (  i32_dash_size260 ) ( (  op_dash_sub82 ( (  w2391 ) , (  x2393 ) ) ) ) );
    struct Color_53  fg2395 = ( ( * (  screen2384 ) ) .f_default_dash_fg );
    struct Color_53  bg2396 = ( ( * (  screen2384 ) ) .f_default_dash_bg );
    struct env650 envinst650 = {
        .screen2384 =  screen2384 ,
        .fg2395 =  fg2395 ,
        .i2392 =  i2392 ,
        .bg2396 =  bg2396 ,
    };
    ( (  for_dash_each649 ) ( ( (  zip483 ) ( ( (  chars864 ) ( (  s2386 ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv650){ .fun = lam650, .env = envinst650 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1114 (    struct Screen_620 *  screen2402 ,    int32_t  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count716 ) ( ( (  chars759 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1106 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1115 (    struct Screen_620 *  screen2402 ,    struct StrConcat_765  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count718 ) ( ( (  chars859 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1107 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1116 (    struct Screen_620 *  screen2402 ,    struct StrConcat_781  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count720 ) ( ( (  chars860 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1108 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1117 (    struct Screen_620 *  screen2402 ,    struct StrConcat_783  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count722 ) ( ( (  chars861 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1109 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1118 (    struct Screen_620 *  screen2402 ,    struct StrConcat_809  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count724 ) ( ( (  chars862 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1110 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1119 (    struct Screen_620 *  screen2402 ,    struct StrConcat_17  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count726 ) ( ( (  chars863 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1111 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1120 (    struct Screen_620 *  screen2402 ,    struct StrConcat_811  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count728 ) ( ( (  chars814 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1112 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1121 (    struct Screen_620 *  screen2402 ,    struct StrConcat_818  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    int32_t  slen2409 = ( (  size_dash_i32262 ) ( ( (  count730 ) ( ( (  chars864 ) ( (  s2404 ) ) ) ) ) ) );
    int32_t  w2410 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2411 = (  op_dash_sub82 ( (  op_dash_sub82 ( (  w2410 ) , (  x2406 ) ) ) , (  slen2409 ) ) );
    ( (  draw_dash_str1113 ) ( (  screen2402 ) ,  (  s2404 ) ,  (  x2411 ) ,  (  y2408 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_309   try_dash_read_dash_contents1122 (    const char*  filename2572 ,    enum CAllocator_4  al2574 ) {
    FILE *  file2575 = ( ( fopen ) ( (  filename2572 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null254 ) ( (  file2575 ) ) ) ) {
        return ( (struct Maybe_309) { .tag = Maybe_309_None_t } );
    }
    ( ( fseek ) ( (  file2575 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end105 ) ( ) ) ) );
    int32_t  file_dash_size2576 = ( ( ftell ) ( (  file2575 ) ) );
    ( ( fseek ) ( (  file2575 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set104 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2577 = ( ( (  allocate912 ) ( (  al2574 ) ,  (  op_dash_add90 ( ( (  i32_dash_size260 ) ( (  file_dash_size2576 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2577 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2576 ) ,  (  file2575 ) ) );
    ( (  set899 ) ( (  file_dash_buf2577 ) ,  ( (  i32_dash_size260 ) ( (  file_dash_size2576 ) ) ) ,  ( (  nullchar314 ) ( ) ) ) );
    ( ( fclose ) ( (  file2575 ) ) );
    struct DynStr_128  str2578 = ( (struct DynStr_128) { .f_contents = (  file_dash_buf2577 ) } );
    return ( ( Maybe_309_Just ) ( (  str2578 ) ) );
}

static  struct DynStr_128   read_dash_contents1123 (    const char*  filename2581 ,    enum CAllocator_4  al2583 ) {
    return ( (  or_dash_fail884 ) ( ( (  try_dash_read_dash_contents1122 ) ( (  filename2581 ) ,  (  al2583 ) ) ) ,  ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "could not open file " ) ,  (  filename2581 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1124 (    const char*  filename2586 ,    struct DynStr_128  contents2588 ) {
    FILE *  file2589 = ( ( fopen ) ( (  filename2586 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null254 ) ( (  file2589 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_270  it2590 = ( (  chars779 ) ( (  contents2588 ) ) );
    while ( ( true ) ) {
        struct Maybe_49  dref2591 = ( (  next321 ) ( ( & (  it2590 ) ) ) );
        if ( dref2591.tag == Maybe_49_None_t ) {
            ( ( fclose ) ( (  file2589 ) ) );
            return ( true );
        }
        else if ( dref2591.tag == Maybe_49_Just_t ) {
            int32_t  chars_dash_written2593 = ( ( fprintf ) ( (  file2589 ) ,  ( "%c" ) ,  ( dref2591 .stuff .Maybe_49_Just_s .field0 ) ) );
            if ( (  cmp74 ( (  chars_dash_written2593 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable875 ) ( ) );
}

static  enum Unit_13   write_dash_contents1125 (    const char*  filename2596 ,    struct DynStr_128  contents2598 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1124 ) ( (  filename2596 ) ,  (  contents2598 ) ) ) ) ) {
        ( (  panic880 ) ( ( ( StrConcat_824_StrConcat ) ( ( "could not write to file " ) ,  (  filename2596 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_894   get1126 (  ) {
    return ( (struct Slice_894) { .f_ptr = ( (  offset_dash_ptr147 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub91 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len306 (   struct env306 env ,    char  c2415 ) {
    if ( (  eq47 ( (  c2415 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2412 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1127 (    struct Cursor_1028  l2419 ,    struct Cursor_1028  r2421 ) {
    return ( (  eq41 ( ( (  l2419 ) .f_x ) , ( (  r2421 ) .f_x ) ) ) && (  eq41 ( ( (  l2419 ) .f_y ) , ( (  r2421 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1128 (    struct Visual_1029  dref2424 ) {
    return ( dref2424 .field0 );
}

static  struct List_3 *   get_dash_row1129 (    struct Editor_1027 *  ed2443 ,    int32_t  y2445 ) {
    return ( (  get_dash_ptr933 ) ( ( & ( ( * (  ed2443 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size260 ) ( (  y2445 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1130 (    struct Editor_1027 *  ed2448 ) {
    return ( (  get_dash_ptr933 ) ( ( & ( ( * (  ed2448 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * (  ed2448 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_488   indent_dash_on_dash_row1131 (    struct Editor_1027 *  ed2451 ,    int32_t  y2453 ) {
    return ( (  take_dash_while508 ) ( ( (  get_dash_row1129 ) ( (  ed2451 ) ,  (  y2453 ) ) ) ,  (  is_dash_whitespace924 ) ) );
}

static  struct Maybe_49   char_dash_at_dash_cursor1132 (    struct Editor_1027 *  ed2456 ) {
    return ( (  try_dash_get935 ) ( ( (  cursor_dash_row1130 ) ( (  ed2456 ) ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * (  ed2456 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1133 {
    ;
    ;
    ;
    ;
    ;
    struct env306 envinst306;
};

static  struct Visual_1029   x_dash_to_dash_visual_dash_x1133 (   struct env1133 env ,    struct Editor_1027 *  ed2459 ,    int32_t  x2461 ,    int32_t  y2463 ) {
    return ( ( Visual_1029_Visual ) ( ( (  sum732 ) ( ( (  map325 ) ( ( (  take362 ) ( ( (  get_dash_row1129 ) ( (  ed2459 ) ,  (  y2463 ) ) ) ,  ( (  i32_dash_size260 ) ( (  x2461 ) ) ) ) ) ,  ( (struct funenv306){ .fun = char_dash_len306, .env =  env.envinst306  } ) ) ) ) ) ) );
}

struct env1134 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
};

static  int32_t   visual_dash_x_dash_to_dash_x1134 (   struct env1134 env ,    struct Editor_1027 *  ed2466 ,    struct Visual_1029  dref2467 ,    int32_t  y2470 ) {
    int32_t  sum_dash_x2471 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2472 = ( (  get_dash_row1129 ) ( (  ed2466 ) ,  (  y2470 ) ) );
    struct RangeIter_366  temp1135 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32262 ) ( ( ( * (  chars2472 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_319  __cond1136 =  next367 (&temp1135);
        if (  __cond1136 .tag == 0 ) {
            break;
        }
        int32_t  x2474 =  __cond1136 .stuff .Maybe_319_Just_s .field0;
        struct funenv306  temp1137 = ( (struct funenv306){ .fun = char_dash_len306, .env =  env.envinst306  } );
        sum_dash_x2471 = (  op_dash_add81 ( (  sum_dash_x2471 ) , ( temp1137.fun ( temp1137.env ,  (  elem_dash_get2 ( (  chars2472 ) , ( (  i32_dash_size260 ) ( (  x2474 ) ) ) ) ) ) ) ) );
        if ( (  cmp74 ( ( dref2467 .field0 ) , (  sum_dash_x2471 ) ) == 0 ) ) {
            return (  x2474 );
        }
    }
    return ( (  size_dash_i32262 ) ( ( ( * (  chars2472 ) ) .f_count ) ) );
}

struct funenv1134 {
    int32_t  (*fun) (  struct env1134  ,    struct Editor_1027 *  ,    struct Visual_1029  ,    int32_t  );
    struct env1134 env;
};

struct funenv1133 {
    struct Visual_1029  (*fun) (  struct env1133  ,    struct Editor_1027 *  ,    int32_t  ,    int32_t  );
    struct env1133 env;
};

struct env1138 {
    ;
    struct env1134 envinst1134;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1133 envinst1133;
    ;
    ;
};

struct Dims_1139 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1138 (   struct env1138 env ,    struct Editor_1027 *  ed2478 ,    int32_t  x2480 ,    int32_t  y2482 ,    struct Dims_1139  dim2484 ) {
    struct Cursor_1028  cur2485 = ( ( * (  ed2478 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2486 = ( !  eq41 ( ( (  cur2485 ) .f_x ) , (  x2480 ) ) );
    int32_t  y2487 = ( (  clamp752 ) ( (  y2482 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32262 ) ( ( ( ( * (  ed2478 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2488 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp74 ( (  y2487 ) , (  op_dash_add81 ( ( ( * (  ed2478 ) ) .f_screen_dash_top ) , (  funny_dash_space2488 ) ) ) ) == 0 ) ) {
        (*  ed2478 ) .f_screen_dash_top = ( (  max751 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  y2487 ) , (  funny_dash_space2488 ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  y2487 ) , (  op_dash_sub82 ( (  op_dash_sub82 ( (  op_dash_add81 ( ( ( * (  ed2478 ) ) .f_screen_dash_top ) , ( (  dim2484 ) .f_rows ) ) ) , (  funny_dash_space2488 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2489 = (  op_dash_add81 ( (  op_dash_sub82 ( (  op_dash_add81 ( (  y2487 ) , (  funny_dash_space2488 ) ) ) , ( (  dim2484 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2478 ) .f_screen_dash_top = (  onscreen_dash_y2489 );
        } else {
        }
    }
    struct List_3 *  row2490 = ( (  get_dash_row1129 ) ( (  ed2478 ) ,  (  y2487 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2486 ) ) {
        int32_t  x2491 = ( (  clamp752 ) ( (  x2480 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32262 ) ( ( (  size973 ) ( (  row2490 ) ) ) ) ) ) );
        struct funenv1133  temp1140 = ( (struct funenv1133){ .fun = x_dash_to_dash_visual_dash_x1133, .env =  env.envinst1133  } );
        (*  ed2478 ) .f_goal_dash_x = ( temp1140.fun ( temp1140.env ,  (  ed2478 ) ,  (  x2491 ) ,  (  y2487 ) ) );
    }
    struct Visual_1029  vx2492 = ( ( * (  ed2478 ) ) .f_goal_dash_x );
    struct funenv1134  temp1141 = ( (struct funenv1134){ .fun = visual_dash_x_dash_to_dash_x1134, .env =  env.envinst1134  } );
    int32_t  x2493 = ( temp1141.fun ( temp1141.env ,  (  ed2478 ) ,  (  vx2492 ) ,  (  y2487 ) ) );
    int32_t  funny_dash_space2494 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp74 ( (  x2493 ) , (  op_dash_add81 ( ( ( * (  ed2478 ) ) .f_screen_dash_left ) , (  funny_dash_space2494 ) ) ) ) == 0 ) ) {
        (*  ed2478 ) .f_screen_dash_left = ( (  max751 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  x2493 ) , (  funny_dash_space2494 ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  x2493 ) , (  op_dash_sub82 ( (  op_dash_sub82 ( (  op_dash_add81 ( ( ( * (  ed2478 ) ) .f_screen_dash_left ) , ( (  dim2484 ) .f_cols ) ) ) , (  funny_dash_space2494 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2495 = (  op_dash_add81 ( (  op_dash_sub82 ( (  op_dash_add81 ( (  x2493 ) , (  funny_dash_space2494 ) ) ) , ( (  dim2484 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2478 ) .f_screen_dash_left = (  onscreen_dash_x2495 );
        } else {
        }
    }
    (*  ed2478 ) .f_cursor = ( (struct Cursor_1028) { .f_x = (  x2493 ) , .f_y = (  y2487 ) } );
    return ( Unit_13_Unit );
}

struct funenv1138 {
    enum Unit_13  (*fun) (  struct env1138  ,    struct Editor_1027 *  ,    int32_t  ,    int32_t  ,    struct Dims_1139  );
    struct env1138 env;
};

struct env1142 {
    struct env1138 envinst1138;
};

static  enum Unit_13   move_dash_to_dash_col1142 (   struct env1142 env ,    struct Editor_1027 *  ed2498 ,    int32_t  x2500 ,    struct Dims_1139  dim2502 ) {
    struct funenv1138  temp1143 = ( (struct funenv1138){ .fun = move_dash_to1138, .env =  env.envinst1138  } );
    ( temp1143.fun ( temp1143.env ,  (  ed2498 ) ,  (  x2500 ) ,  ( ( ( * (  ed2498 ) ) .f_cursor ) .f_y ) ,  (  dim2502 ) ) );
    return ( Unit_13_Unit );
}

struct env1144 {
    struct env1138 envinst1138;
};

static  enum Unit_13   move_dash_to_dash_row1144 (   struct env1144 env ,    struct Editor_1027 *  ed2505 ,    int32_t  y2507 ,    struct Dims_1139  dim2509 ) {
    struct funenv1138  temp1145 = ( (struct funenv1138){ .fun = move_dash_to1138, .env =  env.envinst1138  } );
    ( temp1145.fun ( temp1145.env ,  (  ed2505 ) ,  ( ( ( * (  ed2505 ) ) .f_cursor ) .f_x ) ,  (  y2507 ) ,  (  dim2509 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1142 {
    enum Unit_13  (*fun) (  struct env1142  ,    struct Editor_1027 *  ,    int32_t  ,    struct Dims_1139  );
    struct env1142 env;
};

struct funenv1144 {
    enum Unit_13  (*fun) (  struct env1144  ,    struct Editor_1027 *  ,    int32_t  ,    struct Dims_1139  );
    struct env1144 env;
};

struct env1146 {
    struct env1142 envinst1142;
    ;
    ;
    ;
    ;
    struct env1144 envinst1144;
    ;
    ;
    ;
};

static  bool   move_dash_left1146 (   struct env1146 env ,    struct Editor_1027 *  ed2512 ,    struct Dims_1139  dim2514 ) {
    struct Cursor_1028  cur2515 = ( ( * (  ed2512 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2512 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp74 ( ( ( ( * (  ed2512 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1144  temp1147 = ( (struct funenv1144){ .fun = move_dash_to_dash_row1144, .env =  env.envinst1144  } );
            ( temp1147.fun ( temp1147.env ,  (  ed2512 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2512 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2514 ) ) );
            struct funenv1142  temp1148 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  env.envinst1142  } );
            ( temp1148.fun ( temp1148.env ,  (  ed2512 ) ,  ( (  size_dash_i32262 ) ( ( ( * ( (  cursor_dash_row1130 ) ( (  ed2512 ) ) ) ) .f_count ) ) ) ,  (  dim2514 ) ) );
        }
    } else {
        struct funenv1142  temp1149 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  env.envinst1142  } );
        ( temp1149.fun ( temp1149.env ,  (  ed2512 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2512 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2514 ) ) );
    }
    return ( !  eq1127 ( ( ( * (  ed2512 ) ) .f_cursor ) , (  cur2515 ) ) );
}

struct env1150 {
    ;
    struct env1142 envinst1142;
    ;
    ;
    struct env1138 envinst1138;
    ;
    ;
    ;
    ;
    ;
};

static  bool   move_dash_right1150 (   struct env1150 env ,    struct Editor_1027 *  ed2518 ,    struct Dims_1139  dims2520 ) {
    struct Cursor_1028  cur2521 = ( ( * (  ed2518 ) ) .f_cursor );
    int32_t  row_dash_len2522 = ( (  size_dash_i32262 ) ( ( ( * ( (  cursor_dash_row1130 ) ( (  ed2518 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2518 ) ) .f_cursor ) .f_x ) , (  row_dash_len2522 ) ) ) ) {
        if ( (  cmp74 ( ( ( ( * (  ed2518 ) ) .f_cursor ) .f_y ) , (  op_dash_sub82 ( ( (  size_dash_i32262 ) ( ( ( ( * (  ed2518 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1138  temp1151 = ( (struct funenv1138){ .fun = move_dash_to1138, .env =  env.envinst1138  } );
            ( temp1151.fun ( temp1151.env ,  (  ed2518 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add81 ( ( ( ( * (  ed2518 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2520 ) ) );
        }
    } else {
        struct funenv1142  temp1152 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  env.envinst1142  } );
        ( temp1152.fun ( temp1152.env ,  (  ed2518 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2518 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2520 ) ) );
    }
    return ( !  eq1127 ( ( ( * (  ed2518 ) ) .f_cursor ) , (  cur2521 ) ) );
}

struct env1153 {
    ;
    struct env1142 envinst1142;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1153 (   struct env1153 env ,    struct Editor_1027 *  ed2525 ,    struct Dims_1139  dims2527 ) {
    int32_t  off2528 = ( (  size_dash_i32262 ) ( ( (  count714 ) ( ( (  indent_dash_on_dash_row1131 ) ( (  ed2525 ) ,  ( ( ( * (  ed2525 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1142  temp1154 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  env.envinst1142  } );
    ( temp1154.fun ( temp1154.env ,  (  ed2525 ) ,  (  off2528 ) ,  (  dims2527 ) ) );
    return ( Unit_13_Unit );
}

struct env1155 {
    struct env1142 envinst1142;
    ;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1155 (   struct env1155 env ,    struct Editor_1027 *  ed2531 ,    struct Dims_1139  dims2533 ) {
    struct List_3 *  currow2534 = ( (  cursor_dash_row1130 ) ( (  ed2531 ) ) );
    struct funenv1142  temp1156 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  env.envinst1142  } );
    ( temp1156.fun ( temp1156.env ,  (  ed2531 ) ,  ( (  size_dash_i32262 ) ( ( (  size973 ) ( (  currow2534 ) ) ) ) ) ,  (  dims2533 ) ) );
    return ( Unit_13_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1157 (    struct Editor_1027 *  ed2540 ) {
    return (  eq41 ( ( ( ( * (  ed2540 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32262 ) ( ( (  size973 ) ( ( (  cursor_dash_row1130 ) ( (  ed2540 ) ) ) ) ) ) ) ) );
}

struct funenv958 {
    enum Unit_13  (*fun) (  struct env958  ,    struct List_3 *  ,    struct List_3 *  );
    struct env958 env;
};

struct funenv951 {
    enum Unit_13  (*fun) (  struct env951  ,    struct List_357 *  ,    size_t  );
    struct env951 env;
};

struct env1158 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env958 envinst958;
    ;
    ;
    ;
    ;
    struct env951 envinst951;
    struct env952 envinst952;
    ;
};

static  enum Unit_13   delete_dash_at_dash_current1158 (   struct env1158 env ,    struct Editor_1027 *  ed2543 ) {
    struct List_3 *  row2544 = ( (  cursor_dash_row1130 ) ( (  ed2543 ) ) );
    if ( (  cmp9 ( ( (  i32_dash_size260 ) ( ( ( ( * (  ed2543 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2544 ) ) .f_count ) ) == 0 ) ) {
        struct funenv952  temp1159 = ( (struct funenv952){ .fun = remove952, .env =  env.envinst952  } );
        ( temp1159.fun ( temp1159.env ,  ( (  cursor_dash_row1130 ) ( (  ed2543 ) ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * (  ed2543 ) ) .f_cursor ) .f_x ) ) ) ) );
    } else {
        if ( (  cmp74 ( (  op_dash_add81 ( ( ( ( * (  ed2543 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32262 ) ( ( ( ( * (  ed2543 ) ) .f_current_dash_file ) .f_count ) ) ) ) == 0 ) ) {
            struct List_3 *  cur_dash_row2545 = ( (  cursor_dash_row1130 ) ( (  ed2543 ) ) );
            int32_t  next_dash_row_dash_id2546 = (  op_dash_add81 ( ( ( ( * (  ed2543 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct List_3 *  next_dash_row2547 = ( (  get_dash_row1129 ) ( (  ed2543 ) ,  (  next_dash_row_dash_id2546 ) ) );
            struct funenv958  temp1160 = ( (struct funenv958){ .fun = add_dash_all958, .env =  env.envinst958  } );
            ( temp1160.fun ( temp1160.env ,  (  cur_dash_row2545 ) ,  (  next_dash_row2547 ) ) );
            ( (  free941 ) ( (  next_dash_row2547 ) ) );
            struct funenv951  temp1161 = ( (struct funenv951){ .fun = remove951, .env =  env.envinst951  } );
            ( temp1161.fun ( temp1161.env ,  ( & ( ( * (  ed2543 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size260 ) ( (  next_dash_row_dash_id2546 ) ) ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct funenv945 {
    enum Unit_13  (*fun) (  struct env945  ,    struct List_357 *  ,    size_t  ,    struct List_3  );
    struct env945 env;
};

struct funenv960 {
    enum Unit_13  (*fun) (  struct env960  ,    struct List_3 *  ,    struct TakeWhile_488  );
    struct env960 env;
};

struct env1162 {
    ;
    ;
    ;
    struct env945 envinst945;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env960 envinst960;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1162 (   struct env1162 env ,    struct Editor_1027 *  ed2550 ,    int32_t  y2552 ,    enum CAllocator_4  al2554 ) {
    struct List_3  temp1163 = ( (  mk940 ) ( (  al2554 ) ) );
    struct List_3 *  nurow2555 = ( &temp1163 );
    struct TakeWhile_488  rowws2556 = ( (  indent_dash_on_dash_row1131 ) ( (  ed2550 ) ,  ( ( ( * (  ed2550 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2557 = ( (  size_dash_i32262 ) ( ( (  count714 ) ( (  rowws2556 ) ) ) ) );
    struct funenv960  temp1164 = ( (struct funenv960){ .fun = add_dash_all960, .env =  env.envinst960  } );
    ( temp1164.fun ( temp1164.env ,  (  nurow2555 ) ,  (  rowws2556 ) ) );
    struct funenv945  temp1165 = ( (struct funenv945){ .fun = insert945, .env =  env.envinst945  } );
    ( temp1165.fun ( temp1165.env ,  ( & ( ( * (  ed2550 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size260 ) ( (  y2552 ) ) ) ,  ( * (  nurow2555 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_word_dash_char1166 (    char  c2560 ) {
    return ( (  is_dash_not_dash_whitespace925 ) ( (  c2560 ) ) );
}

struct funenv967 {
    struct List_357  (*fun) (  struct env967  ,    struct Map_296  ,    enum CAllocator_4  );
    struct env967 env;
};

struct env1167 {
    ;
    ;
    struct env299 envinst299;
    struct env967 envinst967;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam298 (   struct env298 env ,    struct DynStr_128  line2600 ) {
    struct funenv299  temp1169 = ( (struct funenv299){ .fun = to_dash_list299, .env =  env.envinst299  } );
    return ( temp1169.fun ( temp1169.env ,  (  line2600 ) ,  ( env.al2569 ) ) );
}

static  struct List_357   load_dash_file1167 (   struct env1167 env ,    const char*  filename2567 ,    enum CAllocator_4  al2569 ) {
    struct funenv967  temp1168 = ( (struct funenv967){ .fun = to_dash_list967, .env =  env.envinst967  } );
    struct env298 envinst298 = {
        .al2569 =  al2569 ,
        .envinst299 = env.envinst299 ,
    };
    return ( temp1168.fun ( temp1168.env ,  ( (  map323 ) ( ( (  lines926 ) ( ( (  read_dash_contents1123 ) ( (  filename2567 ) ,  (  al2569 ) ) ) ) ) ,  ( (struct funenv298){ .fun = lam298, .env = envinst298 } ) ) ) ,  (  al2569 ) ) );
}

struct env1170 {
    ;
    ;
    struct env605 envinst605;
    ;
    enum CAllocator_4  al2564;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam604 (   struct env604 env ,    char  c2610 ) {
    struct funenv605  temp1174 = ( (struct funenv605){ .fun = write_dash_char605, .env =  env.envinst605  } );
    return ( temp1174.fun ( temp1174.env ,  ( env.sb2606 ) ,  (  c2610 ) ) );
}

static  enum Unit_13   save_dash_file1170 (   struct env1170 env ,    struct List_357  cf2603 ,    const char*  filename2605 ) {
    struct StrBuilder_550  temp1171 = ( (  mk1007 ) ( ( env.al2564 ) ) );
    struct StrBuilder_550 *  sb2606 = ( &temp1171 );
    struct SliceIter_330  temp1172 =  into_dash_iter358 ( (  cf2603 ) );
    while (true) {
        struct Maybe_308  __cond1173 =  next344 (&temp1172);
        if (  __cond1173 .tag == 0 ) {
            break;
        }
        struct List_3  row2608 =  __cond1173 .stuff .Maybe_308_Just_s .field0;
        struct env604 envinst604 = {
            .envinst605 = env.envinst605 ,
            .sb2606 =  sb2606 ,
        };
        ( (  for_dash_each603 ) ( (  row2608 ) ,  ( (struct funenv604){ .fun = lam604, .env = envinst604 } ) ) );
        struct funenv605  temp1175 = ( (struct funenv605){ .fun = write_dash_char605, .env =  env.envinst605  } );
        ( temp1175.fun ( temp1175.env ,  (  sb2606 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1125 ) ( (  filename2605 ) ,  ( (  as_dash_str772 ) ( (  sb2606 ) ) ) ) );
    ( (  free1008 ) ( (  sb2606 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1176 (    struct List_357  cf2613 ) {
    ( (  for_dash_each608 ) ( ( (  addresses972 ) ( (  cf2613 ) ) ) ,  (  free941 ) ) );
    ( (  free942 ) ( ( & (  cf2613 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1177 {
    int32_t  pad2614;
    ;
    ;
    ;
    ;
};

struct anon_1178 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1178   left_dash_offset1177 (   struct env1177 env ,    struct Editor_1027 *  ed2617 ) {
    int32_t  max_dash_digits2618 = ( (  max751 ) ( ( (  count_dash_digits756 ) ( ( ( ( * (  ed2617 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1178) { .f_max_dash_digits = (  max_dash_digits2618 ) , .f_total_dash_offset = (  op_dash_add81 ( (  op_dash_add81 ( ( env.pad2614 ) , (  max_dash_digits2618 ) ) ) , ( env.pad2614 ) ) ) } );
}

struct funenv1177 {
    struct anon_1178  (*fun) (  struct env1177  ,    struct Editor_1027 *  );
    struct env1177 env;
};

struct env1179 {
    ;
    struct env1177 envinst1177;
    ;
};

static  struct Dims_1139   screen_dash_dims1179 (   struct env1179 env ,    struct Editor_1027 *  ed2621 ,    struct Tui_621 *  tui2623 ) {
    struct funenv1177  temp1180 = ( (struct funenv1177){ .fun = left_dash_offset1177, .env =  env.envinst1177  } );
    return ( (struct Dims_1139) { .f_cols = (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * (  tui2623 ) ) .f_width ) ) ) , ( ( temp1180.fun ( temp1180.env ,  (  ed2621 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32266 ) ( ( ( * (  tui2623 ) ) .f_height ) ) ) } );
}

struct env1181 {
    ;
    ;
    ;
    ;
    int32_t  pad2614;
    struct env306 envinst306;
    struct env1133 envinst1133;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1177 envinst1177;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   render_dash_editor1181 (   struct env1181 env ,    struct Screen_620 *  screen2626 ,    struct Editor_1027 *  ed2628 ) {
    int32_t  w2629 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2626 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2630 = ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2626 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2631 = ( ( * (  ed2628 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2632 = ( ( * (  ed2628 ) ) .f_screen_dash_left );
    int32_t  x2633 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2634 = (  from_dash_integral29 ( 0 ) );
    ( (  assert882 ) ( (  cmp9 ( ( ( ( * (  ed2628 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1177  temp1182 = ( (struct funenv1177){ .fun = left_dash_offset1177, .env =  env.envinst1177  } );
    struct anon_1178  offstuff2635 = ( temp1182.fun ( temp1182.env ,  (  ed2628 ) ) );
    int32_t  max_dash_digits2636 = ( (  offstuff2635 ) .f_max_dash_digits );
    int32_t  left_dash_off2637 = ( (  offstuff2635 ) .f_total_dash_offset );
    struct Zip_371  temp1183 =  into_dash_iter370 ( ( (  zip470 ) ( ( (  drop356 ) ( ( ( * (  ed2628 ) ) .f_current_dash_file ) ,  ( (  i32_dash_size260 ) ( (  from_dash_y2631 ) ) ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_341  __cond1184 =  next421 (&temp1183);
        if (  __cond1184 .tag == 0 ) {
            break;
        }
        struct Tuple2_342  dref2638 =  __cond1184 .stuff .Maybe_341_Just_s .field0;
        int32_t  row_dash_num2641 = (  op_dash_add81 ( (  op_dash_add81 ( ( dref2638 .field1 ) , ( ( * (  ed2628 ) ) .f_screen_dash_top ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_366  temp1185 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( env.pad2614 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_319  __cond1186 =  next367 (&temp1185);
            if (  __cond1186 .tag == 0 ) {
                break;
            }
            int32_t  xx2643 =  __cond1186 .stuff .Maybe_319_Just_s .field0;
            ( (  put_dash_char1105 ) ( (  screen2626 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2643 ) ,  (  y2634 ) ) );
        }
        ( (  draw_dash_str_dash_right1114 ) ( (  screen2626 ) ,  (  row_dash_num2641 ) ,  (  op_dash_sub82 ( (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2626 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2636 ) ) ) , ( env.pad2614 ) ) ) ,  ( dref2638 .field1 ) ) );
        struct RangeIter_366  temp1187 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( env.pad2614 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_319  __cond1188 =  next367 (&temp1187);
            if (  __cond1188 .tag == 0 ) {
                break;
            }
            int32_t  xx2645 =  __cond1188 .stuff .Maybe_319_Just_s .field0;
            ( (  put_dash_char1105 ) ( (  screen2626 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  op_dash_add81 ( (  xx2645 ) , ( env.pad2614 ) ) ) , (  max_dash_digits2636 ) ) ) ,  (  y2634 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2628 ) ) .f_cursor ) .f_y ) , (  op_dash_sub82 ( (  row_dash_num2641 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct Color_53  fg2646 = ( ( * (  screen2626 ) ) .f_default_dash_fg );
            struct Color_53  bg2647 = ( ( * (  screen2626 ) ) .f_default_dash_bg );
            struct RangeIter_366  temp1189 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  max_dash_digits2636 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_319  __cond1190 =  next367 (&temp1189);
                if (  __cond1190 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2649 =  __cond1190 .stuff .Maybe_319_Just_s .field0;
                struct Cell_52 *  cp2650 = ( (  or_dash_fail887 ) ( ( (  get_dash_cell_dash_ptr1099 ) ( (  screen2626 ) ,  (  op_dash_add81 ( (  xxx2649 ) , ( env.pad2614 ) ) ) ,  (  y2634 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2650 ) .f_fg = (  bg2647 );
                (*  cp2650 ) .f_bg = (  fg2646 );
            }
        }
        struct Zip_373  temp1191 =  into_dash_iter372 ( ( (  zip469 ) ( ( (  drop361 ) ( ( dref2638 .field0 ) ,  ( (  i32_dash_size260 ) ( (  from_dash_x2632 ) ) ) ) ) ,  ( (  from368 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_347  __cond1192 =  next422 (&temp1191);
            if (  __cond1192 .tag == 0 ) {
                break;
            }
            struct Tuple2_348  dref2651 =  __cond1192 .stuff .Maybe_347_Just_s .field0;
            if ( (  eq47 ( ( dref2651 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1105 ) ( (  screen2626 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  left_dash_off2637 ) , (  x2633 ) ) ) ,  (  y2634 ) ) );
                x2633 = (  op_dash_add81 ( (  x2633 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1105 ) ( (  screen2626 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add81 ( (  left_dash_off2637 ) , (  x2633 ) ) ) ,  (  y2634 ) ) );
            } else {
                ( (  put_dash_char1105 ) ( (  screen2626 ) ,  ( dref2651 .field0 ) ,  (  op_dash_add81 ( (  left_dash_off2637 ) , (  x2633 ) ) ) ,  (  y2634 ) ) );
            }
            x2633 = (  op_dash_add81 ( (  x2633 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp74 ( (  x2633 ) , (  w2629 ) ) != 0 ) ) {
                break;
            }
        }
        y2634 = (  op_dash_add81 ( (  y2634 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2633 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp74 ( (  y2634 ) , (  h2630 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_1028  cur2654 = ( ( * (  ed2628 ) ) .f_cursor );
    struct funenv1133  temp1193 = ( (struct funenv1133){ .fun = x_dash_to_dash_visual_dash_x1133, .env =  env.envinst1133  } );
    int32_t  vx2655 = ( (  from_dash_visual1128 ) ( ( temp1193.fun ( temp1193.env ,  (  ed2628 ) ,  ( (  cur2654 ) .f_x ) ,  ( (  cur2654 ) .f_y ) ) ) ) );
    int32_t  len2656 = ( (  maybe1038 ) ( ( (  try_dash_get935 ) ( ( (  cursor_dash_row1130 ) ( (  ed2628 ) ) ) ,  ( (  i32_dash_size260 ) ( ( (  cur2654 ) .f_x ) ) ) ) ) ,  ( (struct funenv306){ .fun = char_dash_len306, .env =  env.envinst306  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_366  temp1194 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  len2656 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_319  __cond1195 =  next367 (&temp1194);
        if (  __cond1195 .tag == 0 ) {
            break;
        }
        int32_t  x2658 =  __cond1195 .stuff .Maybe_319_Just_s .field0;
        struct Cell_52 *  cursor_dash_cell2659 = ( (  or_dash_fail887 ) ( ( (  get_dash_cell_dash_ptr1099 ) ( (  screen2626 ) ,  (  op_dash_add81 ( (  op_dash_add81 ( (  op_dash_sub82 ( (  left_dash_off2637 ) , ( ( * (  ed2628 ) ) .f_screen_dash_left ) ) ) , (  vx2655 ) ) ) , (  x2658 ) ) ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2628 ) ) .f_cursor ) .f_y ) , (  from_dash_y2631 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2659 ) .f_fg = ( ( Color_53_Color8 ) ( ( Color8_54_Black8 ) ) );
        (*  cursor_dash_cell2659 ) .f_bg = ( ( Color_53_Color8 ) ( ( Color8_54_White8 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1196 (    struct Maybe_1024 *  dref2661 ,    struct Screen_620 *  screen2664 ) {
    struct Maybe_1024  dref2665 = ( (* dref2661 ) );
    if ( dref2665.tag == Maybe_1024_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2665.tag == Maybe_1024_Just_t ) {
        struct Duration_1043  diff2667 = ( (  diff1044 ) ( ( (  now1040 ) ( ) ) ,  ( dref2665 .stuff .Maybe_1024_Just_s .field0 ) ) );
        struct Duration_1043  limit2668 = ( (  duration_dash_from_dash_ns1045 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1042 ( (  diff2667 ) , (  limit2668 ) ) == 2 ) ) {
            (* dref2661 ) = ( (struct Maybe_1024) { .tag = Maybe_1024_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2669 = (  op_dash_div79 ( ( (  u32_dash_i64265 ) ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2670 = (  op_dash_div79 ( ( (  u32_dash_i64265 ) ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2671 = ( (  i64_dash_i32261 ) ( (  op_dash_div79 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1046 ) ( (  diff2667 ) ) ) , (  x_dash_fill2669 ) ) ) , ( (  duration_dash_to_dash_ns1046 ) ( (  limit2668 ) ) ) ) ) ) );
        int32_t  y_dash_progress2672 = ( (  i64_dash_i32261 ) ( (  op_dash_div79 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1046 ) ( (  diff2667 ) ) ) , (  y_dash_fill2670 ) ) ) , ( (  duration_dash_to_dash_ns1046 ) ( (  limit2668 ) ) ) ) ) ) );
        uint32_t  center_dash_x2673 = (  op_dash_add86 ( (  op_dash_div89 ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2674 = (  op_dash_add86 ( (  op_dash_div89 ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1098 ) ( (  screen2664 ) ,  ( (struct Color_53) { .tag = Color_53_ColorDefault_t } ) ) );
        int32_t  x_dash_off2675 = (  op_dash_sub82 ( ( (  i64_dash_i32261 ) ( (  x_dash_fill2669 ) ) ) , (  x_dash_progress2671 ) ) );
        int32_t  y_dash_off2676 = (  op_dash_sub82 ( ( (  i64_dash_i32261 ) ( (  y_dash_fill2670 ) ) ) , (  y_dash_progress2672 ) ) );
        int32_t  h2677 = (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2678 = (  op_dash_sub82 ( ( (  u32_dash_i32266 ) ( ( ( * ( ( * (  screen2664 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_366  temp1197 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2677 ) ) ) );
        while (true) {
            struct Maybe_319  __cond1198 =  next367 (&temp1197);
            if (  __cond1198 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2680 =  __cond1198 .stuff .Maybe_319_Just_s .field0;
            struct RangeIter_366  temp1199 =  into_dash_iter365 ( ( (  to363 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2678 ) ) ) );
            while (true) {
                struct Maybe_319  __cond1200 =  next367 (&temp1199);
                if (  __cond1200 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2682 =  __cond1200 .stuff .Maybe_319_Just_s .field0;
                if ( ( ( ( (  cmp74 ( (  screen_dash_x2682 ) , (  x_dash_off2675 ) ) != 2 ) || (  cmp74 ( (  screen_dash_x2682 ) , (  op_dash_sub82 ( (  w2678 ) , (  x_dash_off2675 ) ) ) ) != 0 ) ) || (  cmp74 ( (  screen_dash_y2680 ) , (  y_dash_off2676 ) ) != 2 ) ) || (  cmp74 ( (  screen_dash_y2680 ) , (  op_dash_sub82 ( (  h2677 ) , (  y_dash_off2676 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1105 ) ( (  screen2664 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2682 ) ,  (  screen_dash_y2680 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1167 {
    struct List_357  (*fun) (  struct env1167  ,    const char*  ,    enum CAllocator_4  );
    struct env1167 env;
};

struct funenv1013 {
    const char*  (*fun) (  struct env1013  ,    struct TakeWhile_493  ,    enum CAllocator_4  );
    struct env1013 env;
};

struct funenv1017 {
    const char*  (*fun) (  struct env1017  ,    struct TakeWhile_497  ,    enum CAllocator_4  );
    struct env1017 env;
};

struct funenv1170 {
    enum Unit_13  (*fun) (  struct env1170  ,    struct List_357  ,    const char*  );
    struct env1170 env;
};

struct env1201 {
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
    struct env1144 envinst1144;
    ;
    ;
    ;
    ;
    struct env1013 envinst1013;
    struct env1017 envinst1017;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1170 envinst1170;
    ;
};

static  bool   lam1202 (    char  c2696 ) {
    return ( ! ( (  is_dash_whitespace924 ) ( (  c2696 ) ) ) );
}

static  bool   lam1206 (    char  c2704 ) {
    return ( ! ( (  is_dash_whitespace924 ) ( (  c2704 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1201 (   struct env1201 env ,    struct Editor_1027 *  ed2685 ,    struct DynStr_128  s2687 ,    struct Dims_1139  dim2689 ,    enum CAllocator_4  al2691 ) {
    struct DropWhile_491  s2692 = ( (  drop_dash_while515 ) ( (  s2687 ) ,  (  is_dash_whitespace924 ) ) );
    struct TakeWhile_490  cmd2693 = ( (  take_dash_while512 ) ( (  s2692 ) ,  (  is_dash_not_dash_whitespace925 ) ) );
    struct DropWhile_494  rest2694 = ( (  drop_dash_while518 ) ( ( (  drop_dash_while517 ) ( (  s2692 ) ,  (  is_dash_not_dash_whitespace925 ) ) ) ,  (  is_dash_whitespace924 ) ) );
    if ( ( (  eq869 ) ( (  cmd2693 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_493  filename2697 = ( (  take_dash_while511 ) ( (  rest2694 ) ,  (  lam1202 ) ) );
        const char*  temp1203;
        const char*  alfname2698 = (  temp1203 );
        if ( ( (  null741 ) ( (  filename2697 ) ) ) ) {
            struct Maybe_257  dref2699 = ( ( * (  ed2685 ) ) .f_filename );
            if ( dref2699.tag == Maybe_257_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2699.tag == Maybe_257_Just_t ) {
                alfname2698 = ( dref2699 .stuff .Maybe_257_Just_s .field0 );
            }
        } else {
            struct Maybe_257  dref2701 = ( ( * (  ed2685 ) ) .f_filename );
            if ( dref2701.tag == Maybe_257_None_t ) {
            }
            else if ( dref2701.tag == Maybe_257_Just_t ) {
                ( (  free916 ) ( (  al2691 ) ,  ( (struct Slice_917) { .f_ptr = ( (  cast182 ) ( ( dref2701 .stuff .Maybe_257_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1013  temp1204 = ( (struct funenv1013){ .fun = mk_dash_const_dash_str1013, .env =  env.envinst1013  } );
            alfname2698 = ( temp1204.fun ( temp1204.env ,  (  filename2697 ) ,  (  al2691 ) ) );
        }
        struct funenv1170  temp1205 = ( (struct funenv1170){ .fun = save_dash_file1170, .env =  env.envinst1170  } );
        ( temp1205.fun ( temp1205.env ,  ( ( * (  ed2685 ) ) .f_current_dash_file ) ,  (  alfname2698 ) ) );
        (*  ed2685 ) .f_filename = ( ( Maybe_257_Just ) ( (  alfname2698 ) ) );
    } else {
        if ( ( (  eq869 ) ( (  cmd2693 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2685 ) .f_running = ( false );
        } else {
            if ( ( (  eq869 ) ( (  cmd2693 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_497  filename2705 = ( (  take_dash_while509 ) ( (  rest2694 ) ,  (  lam1206 ) ) );
                struct funenv1017  temp1207 = ( (struct funenv1017){ .fun = mk_dash_const_dash_str1017, .env =  env.envinst1017  } );
                const char*  alfname2706 = ( temp1207.fun ( temp1207.env ,  (  filename2705 ) ,  (  al2691 ) ) );
                struct List_357  og2707 = ( ( * (  ed2685 ) ) .f_current_dash_file );
                struct funenv1167  temp1208 = ( (struct funenv1167){ .fun = load_dash_file1167, .env =  env.envinst1167  } );
                (*  ed2685 ) .f_current_dash_file = ( temp1208.fun ( temp1208.env ,  (  alfname2706 ) ,  (  al2691 ) ) );
                (*  ed2685 ) .f_cursor = ( (struct Cursor_1028) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2685 ) .f_goal_dash_x = ( ( Visual_1029_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2685 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1176 ) ( (  og2707 ) ) );
                ( (  free916 ) ( (  al2691 ) ,  ( (struct Slice_917) { .f_ptr = ( (  cast182 ) ( (  alfname2706 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            } else {
                struct Maybe_686  dref2708 = ( (  parse_dash_int931 ) ( (  cmd2693 ) ) );
                if ( dref2708.tag == Maybe_686_Just_t ) {
                    int32_t  newline2710 = ( (  clamp752 ) ( ( (  i64_dash_i32261 ) ( (  op_dash_sub78 ( ( dref2708 .stuff .Maybe_686_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( ( (  size_dash_i32262 ) ( ( ( ( * (  ed2685 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1144  temp1209 = ( (struct funenv1144){ .fun = move_dash_to_dash_row1144, .env =  env.envinst1144  } );
                    ( temp1209.fun ( temp1209.env ,  (  ed2685 ) ,  (  newline2710 ) ,  (  dim2689 ) ) );
                }
                else if ( dref2708.tag == Maybe_686_None_t ) {
                    return ( Unit_13_Unit );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1009 {
    const char*  (*fun) (  struct env1009  ,    const char*  ,    enum CAllocator_4  );
    struct env1009 env;
};

struct funenv1057 {
    struct Tui_621  (*fun) (  struct env1057  );
    struct env1057 env;
};

struct funenv1179 {
    struct Dims_1139  (*fun) (  struct env1179  ,    struct Editor_1027 *  ,    struct Tui_621 *  );
    struct env1179 env;
};

struct funenv1146 {
    bool  (*fun) (  struct env1146  ,    struct Editor_1027 *  ,    struct Dims_1139  );
    struct env1146 env;
};

struct funenv1150 {
    bool  (*fun) (  struct env1150  ,    struct Editor_1027 *  ,    struct Dims_1139  );
    struct env1150 env;
};

struct funenv1158 {
    enum Unit_13  (*fun) (  struct env1158  ,    struct Editor_1027 *  );
    struct env1158 env;
};

struct funenv1153 {
    enum Unit_13  (*fun) (  struct env1153  ,    struct Editor_1027 *  ,    struct Dims_1139  );
    struct env1153 env;
};

struct funenv1155 {
    enum Unit_13  (*fun) (  struct env1155  ,    struct Editor_1027 *  ,    struct Dims_1139  );
    struct env1155 env;
};

struct funenv1162 {
    enum Unit_13  (*fun) (  struct env1162  ,    struct Editor_1027 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1162 env;
};

static  bool   lam1244 (    char  c2735 ) {
    return ( (  is_dash_word_dash_char1166 ) ( (  c2735 ) ) );
}

static  bool   lam1246 (    char  c2737 ) {
    return ( ! ( (  is_dash_word_dash_char1166 ) ( (  c2737 ) ) ) );
}

static  bool   lam1252 (    char  c2741 ) {
    return ( ! ( (  is_dash_word_dash_char1166 ) ( (  c2741 ) ) ) );
}

static  bool   lam1254 (    char  c2743 ) {
    return ( (  is_dash_word_dash_char1166 ) ( (  c2743 ) ) );
}

static  bool   lam1260 (    char  c2747 ) {
    return ( ! ( (  is_dash_word_dash_char1166 ) ( (  c2747 ) ) ) );
}

static  bool   lam1262 (    char  c2749 ) {
    return ( (  is_dash_word_dash_char1166 ) ( (  c2749 ) ) );
}

struct funenv948 {
    enum Unit_13  (*fun) (  struct env948  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env948 env;
};

struct funenv1004 {
    enum Unit_13  (*fun) (  struct env1004  ,    struct StrBuilder_550 *  );
    struct env1004 env;
};

struct funenv962 {
    enum Unit_13  (*fun) (  struct env962  ,    struct List_3 *  ,    struct Slice_5  );
    struct env962 env;
};

struct funenv1201 {
    enum Unit_13  (*fun) (  struct env1201  ,    struct Editor_1027 *  ,    struct DynStr_128  ,    struct Dims_1139  ,    enum CAllocator_4  );
    struct env1201 env;
};

struct funenv1095 {
    bool  (*fun) (  struct env1095  ,    struct Screen_620 *  );
    struct env1095 env;
};

struct funenv1181 {
    enum Unit_13  (*fun) (  struct env1181  ,    struct Screen_620 *  ,    struct Editor_1027 *  );
    struct env1181 env;
};

static  struct Maybe_49   lam1026 (   struct env1026 env ,    struct List_3  l2772 ) {
    return ( (  try_dash_get935 ) ( ( & (  l2772 ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * ( env.ed2716 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_348   lam1287 (    char  c2774 ) {
    return ( ( Tuple2_348_Tuple2 ) ( (  c2774 ) ,  ( (  char_dash_i32872 ) ( (  c2774 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1618 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1619 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1620 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env545 envinst545 = {
        .starting_dash_size1618 =  starting_dash_size1618 ,
        .growth_dash_factor1619 =  growth_dash_factor1619 ,
    };
    struct env302 envinst302 = {
        .starting_dash_size1618 =  starting_dash_size1618 ,
        .growth_dash_factor1619 =  growth_dash_factor1619 ,
    };
    struct env544 envinst544 = {
        .envinst545 = envinst545 ,
    };
    struct env301 envinst301 = {
        .envinst302 = envinst302 ,
    };
    struct env945 envinst945 = {
        .envinst544 = envinst544 ,
        .envinst545 = envinst545 ,
    };
    struct env948 envinst948 = {
        .envinst301 = envinst301 ,
        .envinst302 = envinst302 ,
    };
    struct env951 envinst951 = {
        .shrink_dash_factor1620 =  shrink_dash_factor1620 ,
    };
    struct env952 envinst952 = {
        .shrink_dash_factor1620 =  shrink_dash_factor1620 ,
    };
    struct env953 envinst953 = {
        .envinst952 = envinst952 ,
    };
    struct env300 envinst300 = {
        .envinst301 = envinst301 ,
    };
    struct env956 envinst956 = {
        .envinst544 = envinst544 ,
    };
    struct env958 envinst958 = {
        .envinst301 = envinst301 ,
    };
    struct env960 envinst960 = {
        .envinst301 = envinst301 ,
    };
    struct env962 envinst962 = {
        .envinst301 = envinst301 ,
    };
    struct env299 envinst299 = {
        .envinst300 = envinst300 ,
    };
    struct env967 envinst967 = {
        .envinst956 = envinst956 ,
    };
    struct env997 envinst997 = {
        .envinst301 = envinst301 ,
    };
    struct env999 envinst999 = {
        .envinst301 = envinst301 ,
    };
    struct env1001 envinst1001 = {
        .envinst301 = envinst301 ,
    };
    struct env605 envinst605 = {
        .envinst301 = envinst301 ,
    };
    struct env1004 envinst1004 = {
        .envinst953 = envinst953 ,
    };
    struct env1009 envinst1009 = {
        .envinst605 = envinst605 ,
        .envinst997 = envinst997 ,
    };
    struct env1013 envinst1013 = {
        .envinst605 = envinst605 ,
        .envinst999 = envinst999 ,
    };
    struct env1017 envinst1017 = {
        .envinst605 = envinst605 ,
        .envinst1001 = envinst1001 ,
    };
    bool  temp1056 = ( false );
    bool *  should_dash_resize2206 = ( &temp1056 );
    struct env1057 envinst1057 = {
        .should_dash_resize2206 =  should_dash_resize2206 ,
    };
    struct env1080 envinst1080 = {
        .should_dash_resize2206 =  should_dash_resize2206 ,
    };
    struct env1095 envinst1095 = {
        .envinst1080 = envinst1080 ,
    };
    int32_t  tab_dash_size2412 = (  from_dash_integral29 ( 2 ) );
    struct env306 envinst306 = {
        .tab_dash_size2412 =  tab_dash_size2412 ,
    };
    struct env1133 envinst1133 = {
        .envinst306 = envinst306 ,
    };
    struct env1134 envinst1134 = {
        .envinst306 = envinst306 ,
    };
    struct env1138 envinst1138 = {
        .envinst1134 = envinst1134 ,
        .envinst1133 = envinst1133 ,
    };
    struct env1142 envinst1142 = {
        .envinst1138 = envinst1138 ,
    };
    struct env1144 envinst1144 = {
        .envinst1138 = envinst1138 ,
    };
    struct env1146 envinst1146 = {
        .envinst1142 = envinst1142 ,
        .envinst1144 = envinst1144 ,
    };
    struct env1150 envinst1150 = {
        .envinst1142 = envinst1142 ,
        .envinst1138 = envinst1138 ,
    };
    struct env1153 envinst1153 = {
        .envinst1142 = envinst1142 ,
    };
    struct env1155 envinst1155 = {
        .envinst1142 = envinst1142 ,
    };
    struct env1158 envinst1158 = {
        .envinst958 = envinst958 ,
        .envinst951 = envinst951 ,
        .envinst952 = envinst952 ,
    };
    struct env1162 envinst1162 = {
        .envinst945 = envinst945 ,
        .envinst960 = envinst960 ,
    };
    enum CAllocator_4  al2564 = ( (  idc910 ) ( ) );
    struct env1167 envinst1167 = {
        .envinst299 = envinst299 ,
        .envinst967 = envinst967 ,
    };
    struct env1170 envinst1170 = {
        .envinst605 = envinst605 ,
        .al2564 =  al2564 ,
    };
    int32_t  pad2614 = (  from_dash_integral29 ( 2 ) );
    struct env1177 envinst1177 = {
        .pad2614 =  pad2614 ,
    };
    struct env1179 envinst1179 = {
        .envinst1177 = envinst1177 ,
    };
    struct env1181 envinst1181 = {
        .pad2614 =  pad2614 ,
        .envinst306 = envinst306 ,
        .envinst1133 = envinst1133 ,
        .envinst1177 = envinst1177 ,
    };
    struct env1201 envinst1201 = {
        .envinst1167 = envinst1167 ,
        .envinst1144 = envinst1144 ,
        .envinst1013 = envinst1013 ,
        .envinst1017 = envinst1017 ,
        .envinst1170 = envinst1170 ,
    };
    struct Slice_894  args2713 = ( (  get1126 ) ( ) );
    struct List_357  temp1210;
    struct List_357  file2714 = (  temp1210 );
    struct Maybe_257  mfilename2715 = ( (struct Maybe_257) { .tag = Maybe_257_None_t } );
    if ( (  eq45 ( ( (  args2713 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2714 = ( (  mk939 ) ( (  al2564 ) ) );
        struct funenv544  temp1211 = ( (struct funenv544){ .fun = add544, .env =  envinst544  } );
        ( temp1211.fun ( temp1211.env ,  ( & (  file2714 ) ) ,  ( (  mk940 ) ( (  al2564 ) ) ) ) );
    } else {
        struct funenv1167  temp1212 = ( (struct funenv1167){ .fun = load_dash_file1167, .env =  envinst1167  } );
        file2714 = ( temp1212.fun ( temp1212.env ,  (  elem_dash_get904 ( (  args2713 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2564 ) ) );
        struct funenv1009  temp1213 = ( (struct funenv1009){ .fun = mk_dash_const_dash_str1009, .env =  envinst1009  } );
        mfilename2715 = ( ( Maybe_257_Just ) ( ( temp1213.fun ( temp1213.env ,  (  elem_dash_get904 ( (  args2713 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2564 ) ) ) ) );
    }
    struct Editor_1027  temp1214 = ( (struct Editor_1027) { .f_cursor = ( (struct Cursor_1028) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1029_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2714 ) , .f_filename = (  mfilename2715 ) , .f_mode = ( (struct Mode_766) { .tag = Mode_766_Normal_t } ) , .f_anim = ( ( Maybe_1024_Just ) ( ( (  now1040 ) ( ) ) ) ) } );
    struct Editor_1027 *  ed2716 = ( &temp1214 );
    struct funenv1057  temp1216 = ( (struct funenv1057){ .fun = mk1057, .env =  envinst1057  } );
    struct Tui_621  temp1215 = ( temp1216.fun ( temp1216.env ) );
    struct Tui_621 *  tui2717 = ( &temp1215 );
    enum CAllocator_4  al2718 = ( (  idc910 ) ( ) );
    struct Screen_620  temp1217 = ( (  mk_dash_screen1081 ) ( (  tui2717 ) ,  (  al2718 ) ) );
    struct Screen_620 *  screen2719 = ( &temp1217 );
    uint32_t  counter2720 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2721 = ( true );
    while ( ( ( * (  ed2716 ) ) .f_running ) ) {
        int32_t  events2722 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_523  temp1218 =  into_dash_iter522 ( ( (  from_dash_function529 ) ( (  read_dash_key1074 ) ) ) );
        while (true) {
            struct Maybe_524  __cond1219 =  next528 (&temp1218);
            if (  __cond1219 .tag == 0 ) {
                break;
            }
            struct InputEvent_525  ev2724 =  __cond1219 .stuff .Maybe_524_Just_s .field0;
            events2722 = (  op_dash_add81 ( (  events2722 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1080  temp1220 = ( (struct funenv1080){ .fun = update_dash_dimensions1080, .env =  envinst1080  } );
            ( temp1220.fun ( temp1220.env ,  (  tui2717 ) ) );
            struct InputEvent_525  dref2725 = (  ev2724 );
            if ( dref2725.tag == InputEvent_525_Key_t ) {
                struct Key_526  dref2727 = ( dref2725 .stuff .InputEvent_525_Key_s .field0 );
                if ( dref2727.tag == Key_526_Char_t ) {
                    struct Mode_766 *  dref2729 = ( & ( ( * (  ed2716 ) ) .f_mode ) );
                    if ( (* dref2729 ).tag == Mode_766_Normal_t ) {
                        int32_t  code2730 = ( (  u8_dash_i32267 ) ( ( (  cast188 ) ( ( dref2727 .stuff .Key_526_Char_s .field0 ) ) ) ) );
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                            (*  ed2716 ) .f_running = ( false );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                            struct funenv1144  temp1221 = ( (struct funenv1144){ .fun = move_dash_to_dash_row1144, .env =  envinst1144  } );
                            struct funenv1179  temp1222 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1221.fun ( temp1221.env ,  (  ed2716 ) ,  (  op_dash_sub82 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1222.fun ( temp1222.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                            struct funenv1144  temp1223 = ( (struct funenv1144){ .fun = move_dash_to_dash_row1144, .env =  envinst1144  } );
                            struct funenv1179  temp1224 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1223.fun ( temp1223.env ,  (  ed2716 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1224.fun ( temp1224.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                            struct funenv1146  temp1225 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                            struct funenv1179  temp1226 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1225.fun ( temp1225.env ,  (  ed2716 ) ,  ( temp1226.fun ( temp1226.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                            struct funenv1150  temp1227 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                            struct funenv1179  temp1228 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1227.fun ( temp1227.env ,  (  ed2716 ) ,  ( temp1228.fun ( temp1228.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                            struct funenv1158  temp1229 = ( (struct funenv1158){ .fun = delete_dash_at_dash_current1158, .env =  envinst1158  } );
                            ( temp1229.fun ( temp1229.env ,  (  ed2716 ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                            struct funenv1158  temp1230 = ( (struct funenv1158){ .fun = delete_dash_at_dash_current1158, .env =  envinst1158  } );
                            ( temp1230.fun ( temp1230.env ,  (  ed2716 ) ) );
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                            struct funenv1153  temp1231 = ( (struct funenv1153){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1153, .env =  envinst1153  } );
                            struct funenv1179  temp1232 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1231.fun ( temp1231.env ,  (  ed2716 ) ,  ( temp1232.fun ( temp1232.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                            struct funenv1155  temp1233 = ( (struct funenv1155){ .fun = move_dash_to_dash_end_dash_of_dash_line1155, .env =  envinst1155  } );
                            struct funenv1179  temp1234 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1233.fun ( temp1233.env ,  (  ed2716 ) ,  ( temp1234.fun ( temp1234.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                            struct funenv1162  temp1235 = ( (struct funenv1162){ .fun = insert_dash_empty_dash_row_dash_at1162, .env =  envinst1162  } );
                            ( temp1235.fun ( temp1235.env ,  (  ed2716 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2718 ) ) );
                            struct List_3 *  currow2731 = ( (  get_dash_row1129 ) ( (  ed2716 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1138  temp1236 = ( (struct funenv1138){ .fun = move_dash_to1138, .env =  envinst1138  } );
                            struct funenv1179  temp1237 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1236.fun ( temp1236.env ,  (  ed2716 ) ,  ( (  size_dash_i32262 ) ( ( (  size973 ) ( (  currow2731 ) ) ) ) ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1237.fun ( temp1237.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                            struct funenv1162  temp1238 = ( (struct funenv1162){ .fun = insert_dash_empty_dash_row_dash_at1162, .env =  envinst1162  } );
                            ( temp1238.fun ( temp1238.env ,  (  ed2716 ) ,  ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ,  (  al2718 ) ) );
                            struct funenv1155  temp1239 = ( (struct funenv1155){ .fun = move_dash_to_dash_end_dash_of_dash_line1155, .env =  envinst1155  } );
                            struct funenv1179  temp1240 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1239.fun ( temp1239.env ,  (  ed2716 ) ,  ( temp1240.fun ( temp1240.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                            (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Insert_t } );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                            (*  ed2716 ) .f_mode = ( ( Mode_766_Cmd ) ( ( (  mk1007 ) ( (  al2718 ) ) ) ) );
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                            struct funenv1179  temp1241 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            struct Dims_1139  dims2732 = ( temp1241.fun ( temp1241.env ,  (  ed2716 ) ,  (  tui2717 ) ) );
                            struct funenv1150  temp1242 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                            ( temp1242.fun ( temp1242.env ,  (  ed2716 ) ,  (  dims2732 ) ) );
                            bool  changed2733 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1157 ) ( (  ed2716 ) ) ) ) {
                                struct funenv1150  temp1243 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1243.fun ( temp1243.env ,  (  ed2716 ) ,  (  dims2732 ) ) ) ) ) {
                                    changed2733 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1032 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1244 ) ,  ( false ) ) ) ) {
                                struct funenv1150  temp1245 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1245.fun ( temp1245.env ,  (  ed2716 ) ,  (  dims2732 ) ) ) ) ) {
                                    changed2733 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1033 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1246 ) ,  ( false ) ) ) ) {
                                struct funenv1150  temp1247 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1247.fun ( temp1247.env ,  (  ed2716 ) ,  (  dims2732 ) ) ) ) ) {
                                    changed2733 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2733 ) ) {
                                struct funenv1146  temp1248 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                                ( temp1248.fun ( temp1248.env ,  (  ed2716 ) ,  (  dims2732 ) ) );
                            }
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                            struct funenv1179  temp1249 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            struct Dims_1139  dims2738 = ( temp1249.fun ( temp1249.env ,  (  ed2716 ) ,  (  tui2717 ) ) );
                            struct funenv1150  temp1250 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                            ( temp1250.fun ( temp1250.env ,  (  ed2716 ) ,  (  dims2738 ) ) );
                            bool  changed2739 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1157 ) ( (  ed2716 ) ) ) ) {
                                struct funenv1150  temp1251 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1251.fun ( temp1251.env ,  (  ed2716 ) ,  (  dims2738 ) ) ) ) ) {
                                    changed2739 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1034 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1252 ) ,  ( false ) ) ) ) {
                                struct funenv1150  temp1253 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1253.fun ( temp1253.env ,  (  ed2716 ) ,  (  dims2738 ) ) ) ) ) {
                                    changed2739 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1035 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1254 ) ,  ( false ) ) ) ) {
                                struct funenv1150  temp1255 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                if ( ( ! ( temp1255.fun ( temp1255.env ,  (  ed2716 ) ,  (  dims2738 ) ) ) ) ) {
                                    changed2739 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2739 ) ) {
                                struct funenv1146  temp1256 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                                ( temp1256.fun ( temp1256.env ,  (  ed2716 ) ,  (  dims2738 ) ) );
                            }
                        }
                        if ( (  eq47 ( ( dref2727 .stuff .Key_526_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                            struct funenv1179  temp1257 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            struct Dims_1139  dims2744 = ( temp1257.fun ( temp1257.env ,  (  ed2716 ) ,  (  tui2717 ) ) );
                            struct funenv1146  temp1258 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                            ( temp1258.fun ( temp1258.env ,  (  ed2716 ) ,  (  dims2744 ) ) );
                            bool  changed2745 = ( true );
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1157 ) ( (  ed2716 ) ) ) ) {
                                struct funenv1146  temp1259 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                                if ( ( ! ( temp1259.fun ( temp1259.env ,  (  ed2716 ) ,  (  dims2744 ) ) ) ) ) {
                                    changed2745 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1036 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1260 ) ,  ( false ) ) ) ) {
                                struct funenv1146  temp1261 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                                if ( ( ! ( temp1261.fun ( temp1261.env ,  (  ed2716 ) ,  (  dims2744 ) ) ) ) ) {
                                    changed2745 = ( false );
                                    break;
                                }
                            }
                            while ( ( (  maybe1037 ) ( ( (  char_dash_at_dash_cursor1132 ) ( (  ed2716 ) ) ) ,  (  lam1262 ) ,  ( false ) ) ) ) {
                                struct funenv1146  temp1263 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                                if ( ( ! ( temp1263.fun ( temp1263.env ,  (  ed2716 ) ,  (  dims2744 ) ) ) ) ) {
                                    changed2745 = ( false );
                                    break;
                                }
                            }
                            if ( (  changed2745 ) ) {
                                struct funenv1150  temp1264 = ( (struct funenv1150){ .fun = move_dash_right1150, .env =  envinst1150  } );
                                ( temp1264.fun ( temp1264.env ,  (  ed2716 ) ,  (  dims2744 ) ) );
                            }
                        }
                    }
                    else if ( (* dref2729 ).tag == Mode_766_Insert_t ) {
                        struct funenv948  temp1265 = ( (struct funenv948){ .fun = insert948, .env =  envinst948  } );
                        ( temp1265.fun ( temp1265.env ,  ( (  cursor_dash_row1130 ) ( (  ed2716 ) ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2727 .stuff .Key_526_Char_s .field0 ) ) );
                        struct funenv1142  temp1266 = ( (struct funenv1142){ .fun = move_dash_to_dash_col1142, .env =  envinst1142  } );
                        struct funenv1179  temp1267 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                        ( temp1266.fun ( temp1266.env ,  (  ed2716 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1267.fun ( temp1267.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                    }
                    else if ( (* dref2729 ).tag == Mode_766_Cmd_t ) {
                        struct funenv605  temp1268 = ( (struct funenv605){ .fun = write_dash_char605, .env =  envinst605  } );
                        ( temp1268.fun ( temp1268.env ,  ( & ( (* dref2729 ) .stuff .Mode_766_Cmd_s .field0 ) ) ,  ( dref2727 .stuff .Key_526_Char_s .field0 ) ) );
                    }
                }
                else if ( dref2727.tag == Key_526_Escape_t ) {
                    struct Mode_766  dref2751 = ( ( * (  ed2716 ) ) .f_mode );
                    if ( dref2751.tag == Mode_766_Normal_t ) {
                    }
                    else if ( dref2751.tag == Mode_766_Insert_t ) {
                        (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Normal_t } );
                    }
                    else if ( dref2751.tag == Mode_766_Cmd_t ) {
                        ( (  free1008 ) ( ( & ( dref2751 .stuff .Mode_766_Cmd_s .field0 ) ) ) );
                        (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Normal_t } );
                    }
                }
                else if ( dref2727.tag == Key_526_Backspace_t ) {
                    struct Mode_766 *  dref2753 = ( & ( ( * (  ed2716 ) ) .f_mode ) );
                    if ( (* dref2753 ).tag == Mode_766_Normal_t ) {
                    }
                    else if ( (* dref2753 ).tag == Mode_766_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1146  temp1269 = ( (struct funenv1146){ .fun = move_dash_left1146, .env =  envinst1146  } );
                            struct funenv1179  temp1270 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1269.fun ( temp1269.env ,  (  ed2716 ) ,  ( temp1270.fun ( temp1270.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                            struct funenv1158  temp1271 = ( (struct funenv1158){ .fun = delete_dash_at_dash_current1158, .env =  envinst1158  } );
                            ( temp1271.fun ( temp1271.env ,  (  ed2716 ) ) );
                        }
                    }
                    else if ( (* dref2753 ).tag == Mode_766_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1006 ) ( ( & ( (* dref2753 ) .stuff .Mode_766_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1004  temp1272 = ( (struct funenv1004){ .fun = pop1004, .env =  envinst1004  } );
                            ( temp1272.fun ( temp1272.env ,  ( & ( (* dref2753 ) .stuff .Mode_766_Cmd_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2727.tag == Key_526_Enter_t ) {
                    struct Mode_766  dref2755 = ( ( * (  ed2716 ) ) .f_mode );
                    if ( dref2755.tag == Mode_766_Normal_t ) {
                    }
                    else if ( dref2755.tag == Mode_766_Insert_t ) {
                        int32_t  cx2756 = ( ( ( * (  ed2716 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1273 = ( (  mk940 ) ( (  al2718 ) ) );
                        struct List_3 *  nurow2757 = ( &temp1273 );
                        struct TakeWhile_488  rowws2758 = ( (  indent_dash_on_dash_row1131 ) ( (  ed2716 ) ,  ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2759 = ( (  size_dash_i32262 ) ( ( (  count714 ) ( (  rowws2758 ) ) ) ) );
                        struct funenv960  temp1274 = ( (struct funenv960){ .fun = add_dash_all960, .env =  envinst960  } );
                        ( temp1274.fun ( temp1274.env ,  (  nurow2757 ) ,  (  rowws2758 ) ) );
                        struct List_3 *  cur_dash_row2760 = ( (  cursor_dash_row1130 ) ( (  ed2716 ) ) );
                        struct funenv962  temp1275 = ( (struct funenv962){ .fun = add_dash_all962, .env =  envinst962  } );
                        ( temp1275.fun ( temp1275.env ,  (  nurow2757 ) ,  ( (  subslice275 ) ( ( (  to_dash_slice970 ) ( ( * (  cur_dash_row2760 ) ) ) ) ,  ( (  i32_dash_size260 ) ( (  cx2756 ) ) ) ,  ( ( * (  cur_dash_row2760 ) ) .f_count ) ) ) ) );
                        ( (  trim964 ) ( (  cur_dash_row2760 ) ,  ( (  i32_dash_size260 ) ( (  cx2756 ) ) ) ) );
                        struct funenv945  temp1276 = ( (struct funenv945){ .fun = insert945, .env =  envinst945  } );
                        ( temp1276.fun ( temp1276.env ,  ( & ( ( * (  ed2716 ) ) .f_current_dash_file ) ) ,  (  op_dash_add90 ( ( (  i32_dash_size260 ) ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2757 ) ) ) );
                        struct funenv1138  temp1277 = ( (struct funenv1138){ .fun = move_dash_to1138, .env =  envinst1138  } );
                        struct funenv1179  temp1278 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                        ( temp1277.fun ( temp1277.env ,  (  ed2716 ) ,  (  offchars2759 ) ,  (  op_dash_add81 ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1278.fun ( temp1278.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                    }
                    else if ( dref2755.tag == Mode_766_Cmd_t ) {
                        struct DynStr_128  s2762 = ( (  as_dash_str772 ) ( ( & ( dref2755 .stuff .Mode_766_Cmd_s .field0 ) ) ) );
                        struct funenv1201  temp1279 = ( (struct funenv1201){ .fun = run_dash_cmd1201, .env =  envinst1201  } );
                        struct funenv1179  temp1280 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                        ( temp1279.fun ( temp1279.env ,  (  ed2716 ) ,  (  s2762 ) ,  ( temp1280.fun ( temp1280.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ,  (  al2718 ) ) );
                        ( (  free1008 ) ( ( & ( dref2755 .stuff .Mode_766_Cmd_s .field0 ) ) ) );
                        (*  ed2716 ) .f_mode = ( (struct Mode_766) { .tag = Mode_766_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2725.tag == InputEvent_525_Mouse_t ) {
                enum MouseButton_139  dref2764 = ( ( dref2725 .stuff .InputEvent_525_Mouse_s .field0 ) .f_button );
                switch (  dref2764 ) {
                    case MouseButton_139_MouseLeft : {
                        if ( ( ( dref2725 .stuff .InputEvent_525_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2765 = ( (  size_dash_i32262 ) ( ( ( ( * (  ed2716 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2766 = ( (  clamp752 ) ( (  op_dash_add81 ( ( ( * (  ed2716 ) ) .f_screen_dash_top ) , ( ( dref2725 .stuff .InputEvent_525_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub82 ( (  linecnt2765 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1177  temp1281 = ( (struct funenv1177){ .fun = left_dash_offset1177, .env =  envinst1177  } );
                            struct Visual_1029  vx2767 = ( ( Visual_1029_Visual ) ( (  op_dash_sub82 ( ( ( dref2725 .stuff .InputEvent_525_Mouse_s .field0 ) .f_x ) , ( ( temp1281.fun ( temp1281.env ,  (  ed2716 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1134  temp1282 = ( (struct funenv1134){ .fun = visual_dash_x_dash_to_dash_x1134, .env =  envinst1134  } );
                            int32_t  cx2768 = ( temp1282.fun ( temp1282.env ,  (  ed2716 ) ,  (  vx2767 ) ,  (  cy2766 ) ) );
                            (*  ed2716 ) .f_cursor .f_x = (  cx2768 );
                            (*  ed2716 ) .f_goal_dash_x = (  vx2767 );
                            struct funenv1144  temp1283 = ( (struct funenv1144){ .fun = move_dash_to_dash_row1144, .env =  envinst1144  } );
                            struct funenv1179  temp1284 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                            ( temp1283.fun ( temp1283.env ,  (  ed2716 ) ,  (  cy2766 ) ,  ( temp1284.fun ( temp1284.env ,  (  ed2716 ) ,  (  tui2717 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable876 ) ( ) );
            }
        }
        struct funenv1095  temp1285 = ( (struct funenv1095){ .fun = resize_dash_screen_dash_if_dash_needed1095, .env =  envinst1095  } );
        bool  resized2769 = ( temp1285.fun ( temp1285.env ,  (  screen2719 ) ) );
        if ( ( ( ( (  resized2769 ) || (  cmp74 ( (  events2722 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2721 ) ) || ( (  is_dash_just1023 ) ( ( ( * (  ed2716 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2721 = ( false );
            ( (  clear_dash_screen1085 ) ( (  screen2719 ) ) );
            ( (  set_dash_screen_dash_fg1097 ) ( (  screen2719 ) ,  ( ( Color_53_Color16 ) ( ( Color16_55_White16 ) ) ) ) );
            ( (  set_dash_screen_dash_bg1098 ) ( (  screen2719 ) ,  ( ( Color_53_Color16 ) ( ( Color16_55_Black16 ) ) ) ) );
            ( (  fill_dash_default1100 ) ( (  screen2719 ) ) );
            struct funenv1181  temp1286 = ( (struct funenv1181){ .fun = render_dash_editor1181, .env =  envinst1181  } );
            ( temp1286.fun ( temp1286.env ,  (  screen2719 ) ,  (  ed2716 ) ) );
            bool  debug2770 = ( true );
            if ( (  debug2770 ) ) {
                ( (  draw_dash_str_dash_right1115 ) ( (  screen2719 ) ,  ( ( StrConcat_765_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2716 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1116 ) ( (  screen2719 ) ,  ( ( StrConcat_781_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2717 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1026 envinst1026 = {
                    .ed2716 =  ed2716 ,
                };
                struct Maybe_347  charcode2775 = ( (  fmap_dash_maybe1031 ) ( ( (  and_dash_maybe1025 ) ( ( (  try_dash_get936 ) ( ( & ( ( * (  ed2716 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size260 ) ( ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1026){ .fun = lam1026, .env = envinst1026 } ) ) ) ,  (  lam1287 ) ) );
                ( (  draw_dash_str_dash_right1117 ) ( (  screen2719 ) ,  ( ( StrConcat_783_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2775 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1118 ) ( (  screen2719 ) ,  ( ( StrConcat_809_StrConcat ) ( ( ( StrConcat_810_StrConcat ) ( ( ( StrConcat_811_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2716 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2776 = ( ( * ( (  get_dash_row1129 ) ( (  ed2716 ) ,  ( ( ( * (  ed2716 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1119 ) ( (  screen2719 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2776 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2777 = ( (  from_dash_visual1128 ) ( ( ( * (  ed2716 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1120 ) ( (  screen2719 ) ,  ( ( StrConcat_811_StrConcat ) ( ( "goal x: " ) ,  (  gx2777 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1179  temp1288 = ( (struct funenv1179){ .fun = screen_dash_dims1179, .env =  envinst1179  } );
                struct Dims_1139  dim2778 = ( temp1288.fun ( temp1288.env ,  (  ed2716 ) ,  (  tui2717 ) ) );
                ( (  draw_dash_str_dash_right1121 ) ( (  screen2719 ) ,  ( ( StrConcat_818_StrConcat ) ( ( ( StrConcat_819_StrConcat ) ( ( ( StrConcat_811_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2716 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2778 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
            }
            ( (  update_dash_animation1196 ) ( ( & ( ( * (  ed2716 ) ) .f_anim ) ) ,  (  screen2719 ) ) );
            ( (  render_dash_screen1089 ) ( (  screen2719 ) ) );
        }
        ( (  sync1063 ) ( (  tui2717 ) ) );
    }
    ( (  free_dash_screen1084 ) ( (  screen2719 ) ) );
    ( (  deinit1067 ) ( (  tui2717 ) ) );
}
