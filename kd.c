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

static  char *   get_dash_ptr30 (    struct Slice_5  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1303 = ( (  offset_dash_ptr31 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1593 ,    size_t  i1595 ) {
    if ( ( (  cmp9 ( (  i1595 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1595 ) , ( ( * (  list1593 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1595 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1593 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1593 ) ) .f_elements ) ,  (  i1595 ) ) );
}

static  char   get7 (    struct List_3 *  list1603 ,    size_t  i1605 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1603 ) ,  (  i1605 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1664 ,    size_t  k1666 ) {
    return ( (  get7 ) ( ( & (  self1664 ) ) ,  (  k1666 ) ) );
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

static  bool   eq46 (    bool  l119 ,    bool  r121 ) {
    return ( (  l119 ) == (  r121 ) );
}

static  bool   eq47 (    enum Ordering_10  l124 ,    enum Ordering_10  r126 ) {
    return ( (  l124 ) == (  r126 ) );
}

static  bool   eq48 (    char  l129 ,    char  r131 ) {
    return ( (  l129 ) == (  r131 ) );
}

struct Maybe_50 {
    enum {
        Maybe_50_None_t,
        Maybe_50_Just_t,
    } tag;
    union {
        struct {
            bool  field0;
        } Maybe_50_Just_s;
    } stuff;
};

static struct Maybe_50 Maybe_50_Just (  bool  field0 ) {
    return ( struct Maybe_50 ) { .tag = Maybe_50_Just_t, .stuff = { .Maybe_50_Just_s = { .field0 = field0 } } };
};

struct Tuple2_51 {
    struct Maybe_50  field0;
    struct Maybe_50  field1;
};

static struct Tuple2_51 Tuple2_51_Tuple2 (  struct Maybe_50  field0 ,  struct Maybe_50  field1 ) {
    return ( struct Tuple2_51 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq49 (    struct Maybe_50  l134 ,    struct Maybe_50  r136 ) {
    struct Tuple2_51  dref137 = ( ( Tuple2_51_Tuple2 ) ( (  l134 ) ,  (  r136 ) ) );
    if ( dref137 .field0.tag == Maybe_50_None_t && dref137 .field1.tag == Maybe_50_None_t ) {
        return ( true );
    }
    else if ( dref137 .field0.tag == Maybe_50_Just_t && dref137 .field1.tag == Maybe_50_Just_t ) {
        return (  eq46 ( ( dref137 .field0 .stuff .Maybe_50_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

enum Color8_55 {
    Color8_55_Black8,
    Color8_55_Red8,
    Color8_55_Green8,
    Color8_55_Yellow8,
    Color8_55_Blue8,
    Color8_55_Magenta8,
    Color8_55_Cyan8,
    Color8_55_White8,
};

enum Color16_56 {
    Color16_56_Black16,
    Color16_56_Red16,
    Color16_56_Green16,
    Color16_56_Yellow16,
    Color16_56_Blue16,
    Color16_56_Magenta16,
    Color16_56_Cyan16,
    Color16_56_White16,
    Color16_56_BrightBlack16,
    Color16_56_BrightRed16,
    Color16_56_BrightGreen16,
    Color16_56_BrightYellow16,
    Color16_56_BrightBlue16,
    Color16_56_BrightMagenta16,
    Color16_56_BrightCyan16,
    Color16_56_BrightWhite16,
};

struct RGB_57 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_54 {
    enum {
        Color_54_ColorDefault_t,
        Color_54_Color8_t,
        Color_54_Color16_t,
        Color_54_Color256_t,
        Color_54_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_55  field0;
        } Color_54_Color8_s;
        struct {
            enum Color16_56  field0;
        } Color_54_Color16_s;
        struct {
            uint8_t  field0;
        } Color_54_Color256_s;
        struct {
            struct RGB_57  field0;
        } Color_54_ColorRGB_s;
    } stuff;
};

static struct Color_54 Color_54_Color8 (  enum Color8_55  field0 ) {
    return ( struct Color_54 ) { .tag = Color_54_Color8_t, .stuff = { .Color_54_Color8_s = { .field0 = field0 } } };
};

static struct Color_54 Color_54_Color16 (  enum Color16_56  field0 ) {
    return ( struct Color_54 ) { .tag = Color_54_Color16_t, .stuff = { .Color_54_Color16_s = { .field0 = field0 } } };
};

static struct Color_54 Color_54_Color256 (  uint8_t  field0 ) {
    return ( struct Color_54 ) { .tag = Color_54_Color256_t, .stuff = { .Color_54_Color256_s = { .field0 = field0 } } };
};

static struct Color_54 Color_54_ColorRGB (  struct RGB_57  field0 ) {
    return ( struct Color_54 ) { .tag = Color_54_ColorRGB_t, .stuff = { .Color_54_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_53 {
    char  f_c;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
};

struct Tuple2_60 {
    struct Color_54  field0;
    struct Color_54  field1;
};

static struct Tuple2_60 Tuple2_60_Tuple2 (  struct Color_54  field0 ,  struct Color_54  field1 ) {
    return ( struct Tuple2_60 ) { .field0 = field0 ,  .field1 = field1 };
};

static  void *   cast_dash_ptr66 (    int32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  size_t   size_dash_of67 (    int32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  int32_t   zeroed64 (  ) {
    int32_t  temp65;
    int32_t  x473 = (  temp65 );
    ( ( memset ) ( ( (  cast_dash_ptr66 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of67 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Color8_55 *   cast68 (    int32_t *  x463 ) {
    return ( (enum Color8_55 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed62 (    enum Color8_55  x476 ) {
    int32_t  temp63 = ( (  zeroed64 ) ( ) );
    int32_t *  y477 = ( &temp63 );
    enum Color8_55 *  yp478 = ( (  cast68 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq61 (    enum Color8_55  l1786 ,    enum Color8_55  r1788 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed62 ) ( (  l1786 ) ) ) ) , ( (  cast_dash_on_dash_zeroed62 ) ( (  r1788 ) ) ) ) );
}

static  enum Color16_56 *   cast72 (    int32_t *  x463 ) {
    return ( (enum Color16_56 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed70 (    enum Color16_56  x476 ) {
    int32_t  temp71 = ( (  zeroed64 ) ( ) );
    int32_t *  y477 = ( &temp71 );
    enum Color16_56 *  yp478 = ( (  cast72 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq69 (    enum Color16_56  l1792 ,    enum Color16_56  r1794 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed70 ) ( (  l1792 ) ) ) ) , ( (  cast_dash_on_dash_zeroed70 ) ( (  r1794 ) ) ) ) );
}

static  bool   eq73 (    struct RGB_57  l1822 ,    struct RGB_57  r1824 ) {
    return ( ( (  eq43 ( ( (  l1822 ) .f_r ) , ( (  r1824 ) .f_r ) ) ) && (  eq43 ( ( (  l1822 ) .f_g ) , ( (  r1824 ) .f_g ) ) ) ) && (  eq43 ( ( (  l1822 ) .f_b ) , ( (  r1824 ) .f_b ) ) ) );
}

static  bool   eq59 (    struct Color_54  l1845 ,    struct Color_54  r1847 ) {
    return ( {  struct Tuple2_60  dref1848 = ( ( Tuple2_60_Tuple2 ) ( (  l1845 ) ,  (  r1847 ) ) ) ; dref1848 .field0.tag == Color_54_ColorDefault_t && dref1848 .field1.tag == Color_54_ColorDefault_t ? ( true ) : dref1848 .field0.tag == Color_54_Color8_t && dref1848 .field1.tag == Color_54_Color8_t ? (  eq61 ( ( dref1848 .field0 .stuff .Color_54_Color8_s .field0 ) , ( dref1848 .field1 .stuff .Color_54_Color8_s .field0 ) ) ) : dref1848 .field0.tag == Color_54_Color16_t && dref1848 .field1.tag == Color_54_Color16_t ? (  eq69 ( ( dref1848 .field0 .stuff .Color_54_Color16_s .field0 ) , ( dref1848 .field1 .stuff .Color_54_Color16_s .field0 ) ) ) : dref1848 .field0.tag == Color_54_Color256_t && dref1848 .field1.tag == Color_54_Color256_t ? (  eq43 ( ( dref1848 .field0 .stuff .Color_54_Color256_s .field0 ) , ( dref1848 .field1 .stuff .Color_54_Color256_s .field0 ) ) ) : dref1848 .field0.tag == Color_54_ColorRGB_t && dref1848 .field1.tag == Color_54_ColorRGB_t ? (  eq73 ( ( dref1848 .field0 .stuff .Color_54_ColorRGB_s .field0 ) , ( dref1848 .field1 .stuff .Color_54_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq58 (    struct Cell_53  l2290 ,    struct Cell_53  r2292 ) {
    if ( ( !  eq48 ( ( (  l2290 ) .f_c ) , ( (  r2292 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2290 ) .f_fg ) , ( (  r2292 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2290 ) .f_bg ) , ( (  r2292 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq52 (    struct Cell_53 *  dref141 ,    struct Cell_53 *  dref143 ) {
    return (  eq58 ( ( (* dref141 ) ) , ( (* dref143 ) ) ) );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp74 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp75 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp76 (    uint32_t  l162 ,    uint32_t  r164 ) {
    return ( builtin_uint32_tcmp( (  l162 ) , (  r164 ) ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp77 (    uint8_t  l167 ,    uint8_t  r169 ) {
    return ( builtin_uint8_tcmp( (  l167 ) , (  r169 ) ) );
}

static  int64_t   op_dash_add78 (    int64_t  l172 ,    int64_t  r174 ) {
    return ( (  l172 ) + (  r174 ) );
}

static  int64_t   op_dash_sub79 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) - (  r179 ) );
}

static  int64_t   op_dash_div80 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) / (  r189 ) );
}

static  int64_t   op_dash_neg81 (    int64_t  l192 ) {
    return ( (  from_dash_integral35 ( 0 ) ) - (  l192 ) );
}

static  int32_t   op_dash_add82 (    int32_t  l195 ,    int32_t  r197 ) {
    return ( (  l195 ) + (  r197 ) );
}

static  int32_t   op_dash_sub83 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) - (  r202 ) );
}

static  int32_t   op_dash_mul84 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) * (  r207 ) );
}

static  int32_t   op_dash_div85 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) / (  r212 ) );
}

static  int32_t   op_dash_neg86 (    int32_t  x215 ) {
    return ( (  from_dash_integral29 ( 0 ) ) - (  x215 ) );
}

static  uint32_t   op_dash_add87 (    uint32_t  l218 ,    uint32_t  r220 ) {
    return ( (  l218 ) + (  r220 ) );
}

static  uint32_t   op_dash_sub88 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) - (  r225 ) );
}

static  uint32_t   op_dash_mul89 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) * (  r230 ) );
}

static  uint32_t   op_dash_div90 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) / (  r235 ) );
}

static  uint8_t   op_dash_add91 (    uint8_t  l238 ,    uint8_t  r240 ) {
    return ( (  l238 ) + (  r240 ) );
}

static  uint8_t   op_dash_sub92 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) - (  r245 ) );
}

static  size_t   op_dash_add93 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub94 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul95 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

static  size_t   op_dash_div96 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) / (  r275 ) );
}

struct Array_99 {
    uint32_t _arr [4];
};

struct SmolArray_98 {
    struct Array_99  f_arr;
};

static  struct SmolArray_98   from_dash_listlike97 (    struct Array_99  arr301 ) {
    return ( (struct SmolArray_98) { .f_arr = (  arr301 ) } );
}

struct Array_102 {
    uint32_t _arr [5];
};

struct SmolArray_101 {
    struct Array_102  f_arr;
};

static  struct SmolArray_101   from_dash_listlike100 (    struct Array_102  arr301 ) {
    return ( (struct SmolArray_101) { .f_arr = (  arr301 ) } );
}

struct Array_105 {
    uint32_t _arr [1];
};

struct SmolArray_104 {
    struct Array_105  f_arr;
};

static  struct SmolArray_104   from_dash_listlike103 (    struct Array_105  arr301 ) {
    return ( (struct SmolArray_104) { .f_arr = (  arr301 ) } );
}

static  int32_t   clock_dash_monotonic106 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   seek_dash_set107 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  int32_t   seek_dash_end108 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  int32_t   stdout_dash_fileno109 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   stdin_dash_fileno110 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  uint32_t   echo111 (  ) {
    return (  from_dash_integral36 ( 8 ) );
}

static  uint32_t   icanon112 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   isig113 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   iexten114 (  ) {
    return (  from_dash_integral36 ( 32768 ) );
}

static  uint32_t   brkint115 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   icrnl116 (  ) {
    return (  from_dash_integral36 ( 256 ) );
}

static  uint32_t   inpck117 (  ) {
    return (  from_dash_integral36 ( 16 ) );
}

static  uint32_t   istrip118 (  ) {
    return (  from_dash_integral36 ( 32 ) );
}

static  uint32_t   ixon119 (  ) {
    return (  from_dash_integral36 ( 1024 ) );
}

static  uint32_t   opost120 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   cs8121 (  ) {
    return (  from_dash_integral36 ( 48 ) );
}

static  size_t   vmin122 (  ) {
    return (  from_dash_integral11 ( 6 ) );
}

static  size_t   vtime123 (  ) {
    return (  from_dash_integral11 ( 5 ) );
}

static  int32_t   tcsa_dash_flush124 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  uint64_t   tiocgwinsz125 (  ) {
    return (  from_dash_integral39 ( 21523 ) );
}

static  const char*   undefined126 (  ) {
    const char*  temp127;
    return (  temp127 );
}

static  char   undefined128 (  ) {
    char  temp129;
    return (  temp129 );
}

struct DynStr_131 {
    struct Slice_5  f_contents;
};

static  struct DynStr_131   undefined130 (  ) {
    struct DynStr_131  temp132;
    return (  temp132 );
}

static  struct timespec   undefined133 (  ) {
    struct timespec  temp134;
    return (  temp134 );
}

struct Array_137 {
    uint8_t _arr [32];
};

struct Termios_136 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_137  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_136   undefined135 (  ) {
    struct Termios_136  temp138;
    return (  temp138 );
}

static  struct Cell_53   undefined139 (  ) {
    struct Cell_53  temp140;
    return (  temp140 );
}

static  uint8_t   undefined141 (  ) {
    uint8_t  temp142;
    return (  temp142 );
}

enum MouseButton_144 {
    MouseButton_144_MouseLeft,
    MouseButton_144_MouseMiddle,
    MouseButton_144_MouseRight,
    MouseButton_144_ScrollUp,
    MouseButton_144_ScrollDown,
};

static  enum MouseButton_144   undefined143 (  ) {
    enum MouseButton_144  temp145;
    return (  temp145 );
}

static  bool   undefined146 (  ) {
    bool  temp147;
    return (  temp147 );
}

static  enum Unit_13   undefined148 (  ) {
    enum Unit_13  temp149;
    return (  temp149 );
}

static  struct Cell_53 *   undefined150 (  ) {
    struct Cell_53 *  temp151;
    return (  temp151 );
}

static  const char* *   offset_dash_ptr152 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp153;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp153 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr154 (    struct List_3 *  x450 ,    int64_t  count452 ) {
    struct List_3  temp155;
    return ( (struct List_3 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp155 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr156 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp157;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp157 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr158 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp159;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp159 ) ) ) ) ) ) ) ) );
}

static  struct Cell_53 *   offset_dash_ptr160 (    struct Cell_53 *  x450 ,    int64_t  count452 ) {
    struct Cell_53  temp161;
    return ( (struct Cell_53 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp161 ) ) ) ) ) ) ) ) );
}

struct TypeSize_163 {
    size_t  f_size;
};

static  struct TypeSize_163   get_dash_typesize162 (  ) {
    struct List_3  temp164;
    return ( (struct TypeSize_163) { .f_size = ( sizeof( ( (  temp164 ) ) ) ) } );
}

struct TypeSize_166 {
    size_t  f_size;
};

static  struct TypeSize_166   get_dash_typesize165 (  ) {
    char  temp167;
    return ( (struct TypeSize_166) { .f_size = ( sizeof( ( (  temp167 ) ) ) ) } );
}

struct TypeSize_169 {
    size_t  f_size;
};

static  struct TypeSize_169   get_dash_typesize168 (  ) {
    struct Cell_53  temp170;
    return ( (struct TypeSize_169) { .f_size = ( sizeof( ( (  temp170 ) ) ) ) } );
}

static  size_t   size_dash_of171 (    struct List_3 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of172 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of173 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of174 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of175 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Winsize_177 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of176 (    struct Winsize_177  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of178 (    enum Unit_13 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of179 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_181 {
    char _arr [32];
};

static  size_t   size_dash_of180 (    struct Array_181  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of182 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of183 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  char *   cast184 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  const char*   cast185 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  uint16_t *   cast186 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast187 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast188 (    struct Array_99 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast189 (    struct Array_102 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast190 (    struct Array_105 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t *   cast191 (    struct Array_137 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast192 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
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

static  char *   cast196 (    struct Array_181 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char   cast197 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  int32_t   cast198 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  uint8_t *   cast199 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char   cast200 (    uint32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast201 (    size_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint32_t *   cast202 (    int64_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr203 (    struct List_3 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   cast_dash_ptr204 (    void *  p466 ) {
    return ( (struct List_3 * ) (  p466 ) );
}

static  void *   cast_dash_ptr205 (    struct List_3 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr206 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr207 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr208 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr210 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr211 (    struct Winsize_177 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr212 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr213 (    struct Termios_136 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  struct Cell_53 *   cast_dash_ptr214 (    void *  p466 ) {
    return ( (struct Cell_53 * ) (  p466 ) );
}

static  void *   cast_dash_ptr215 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr216 (    struct Array_181 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr217 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_219 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr218 (    struct Pollfd_219 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr220 (    enum Unit_13 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr221 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr222 (    struct Cell_53 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   zeroed223 (  ) {
    struct List_3 *  temp224;
    struct List_3 *  x473 = (  temp224 );
    ( ( memset ) ( ( (  cast_dash_ptr203 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of171 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed225 (  ) {
    char *  temp226;
    char *  x473 = (  temp226 );
    ( ( memset ) ( ( (  cast_dash_ptr206 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of172 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed227 (  ) {
    char  temp228;
    char  x473 = (  temp228 );
    ( ( memset ) ( ( (  cast_dash_ptr208 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed229 (  ) {
    FILE *  temp230;
    FILE *  x473 = (  temp230 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of174 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed231 (  ) {
    uint32_t  temp232;
    uint32_t  x473 = (  temp232 );
    ( ( memset ) ( ( (  cast_dash_ptr210 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_177   zeroed233 (  ) {
    struct Winsize_177  temp234;
    struct Winsize_177  x473 = (  temp234 );
    ( ( memset ) ( ( (  cast_dash_ptr211 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of176 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed235 (  ) {
    enum Unit_13 *  temp236;
    enum Unit_13 *  x473 = (  temp236 );
    ( ( memset ) ( ( (  cast_dash_ptr212 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed237 (  ) {
    size_t  temp238;
    size_t  x473 = (  temp238 );
    ( ( memset ) ( ( (  cast_dash_ptr215 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of179 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_181   zeroed239 (  ) {
    struct Array_181  temp240;
    struct Array_181  x473 = (  temp240 );
    ( ( memset ) ( ( (  cast_dash_ptr216 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of180 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed241 (  ) {
    int64_t  temp242;
    int64_t  x473 = (  temp242 );
    ( ( memset ) ( ( (  cast_dash_ptr217 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of182 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed243 (  ) {
    struct timespec *  temp244;
    struct timespec *  x473 = (  temp244 );
    ( ( memset ) ( ( (  cast_dash_ptr221 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of183 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed245 (    uint16_t  x476 ) {
    uint32_t  temp246 = ( (  zeroed231 ) ( ) );
    uint32_t *  y477 = ( &temp246 );
    uint16_t *  yp478 = ( (  cast186 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed247 (    uint32_t  x476 ) {
    size_t  temp248 = ( (  zeroed237 ) ( ) );
    size_t *  y477 = ( &temp248 );
    uint32_t *  yp478 = ( (  cast192 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed249 (    char  x476 ) {
    int32_t  temp250 = ( (  zeroed64 ) ( ) );
    int32_t *  y477 = ( &temp250 );
    char *  yp478 = ( (  cast193 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed251 (    uint8_t  x476 ) {
    int64_t  temp252 = ( (  zeroed241 ) ( ) );
    int64_t *  y477 = ( &temp252 );
    uint8_t *  yp478 = ( (  cast195 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed253 (    uint8_t  x476 ) {
    int32_t  temp254 = ( (  zeroed64 ) ( ) );
    int32_t *  y477 = ( &temp254 );
    uint8_t *  yp478 = ( (  cast199 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed255 (    uint32_t  x476 ) {
    int64_t  temp256 = ( (  zeroed241 ) ( ) );
    int64_t *  y477 = ( &temp256 );
    uint32_t *  yp478 = ( (  cast202 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  struct List_3 *   null_dash_ptr257 (  ) {
    return ( (  zeroed223 ) ( ) );
}

static  char *   null_dash_ptr258 (  ) {
    return ( (  zeroed225 ) ( ) );
}

static  FILE *   null_dash_ptr259 (  ) {
    return ( (  zeroed229 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr260 (  ) {
    return ( (  zeroed235 ) ( ) );
}

static  struct timespec *   null_dash_ptr261 (  ) {
    return ( (  zeroed243 ) ( ) );
}

static  bool   is_dash_ptr_dash_null262 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr259 ) ( ) ) );
}

static  bool   ptr_dash_eq263 (    enum Unit_13 *  l488 ,    enum Unit_13 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_265 {
    enum {
        Maybe_265_None_t,
        Maybe_265_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_265_Just_s;
    } stuff;
};

static struct Maybe_265 Maybe_265_Just (  const char*  field0 ) {
    return ( struct Maybe_265 ) { .tag = Maybe_265_Just_t, .stuff = { .Maybe_265_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_265   from_dash_nullable_dash_c_dash_str264 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq263 ) ( ( (  cast187 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr260 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    } else {
        return ( ( Maybe_265_Just ) ( (  s493 ) ) );
    }
}

static  uint32_t   i32_dash_u32266 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64267 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size268 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  int32_t   i64_dash_i32269 (    int64_t  x511 ) {
    return ( (int32_t ) (  x511 ) );
}

static  int32_t   size_dash_i32270 (    size_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   u16_dash_u32271 (    uint16_t  x520 ) {
    return ( (  cast_dash_on_dash_zeroed245 ) ( (  x520 ) ) );
}

static  size_t   u32_dash_size272 (    uint32_t  x526 ) {
    return ( (  cast_dash_on_dash_zeroed247 ) ( (  x526 ) ) );
}

static  int64_t   u32_dash_i64273 (    uint32_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed255 ) ( (  x529 ) ) );
}

static  int32_t   u32_dash_i32274 (    uint32_t  x535 ) {
    return ( (  cast198 ) ( (  x535 ) ) );
}

static  int64_t   u8_dash_i64275 (    uint8_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed251 ) ( (  x541 ) ) );
}

static  int32_t   u8_dash_i32276 (    uint8_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed253 ) ( (  x544 ) ) );
}

struct Slice_279 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_278 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

struct List_280 {
    enum CAllocator_4  f_al;
    struct Slice_279  f_elements;
    size_t  f_count;
};

static  struct SliceIter_278   into_dash_iter282 (    struct Slice_279  self1339 ) {
    return ( (struct SliceIter_278) { .f_slice = (  self1339 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
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

static  enum Unit_13   print_dash_str298 (    struct StrConcat_289  self1102 ) {
    struct StrConcat_289  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str297 (    struct StrConcat_288  self1102 ) {
    struct StrConcat_288  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str298 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str296 (    struct StrConcat_287  self1102 ) {
    struct StrConcat_287  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str297 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str295 (    struct StrConcat_286  self1102 ) {
    struct StrConcat_286  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str296 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str294 (    struct StrConcat_285  self1102 ) {
    struct StrConcat_285  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str295 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str293 (    struct StrConcat_292  self1102 ) {
    struct StrConcat_292  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str294 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str290 (    struct StrConcat_291  self1102 ) {
    struct StrConcat_291  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic284 (    struct StrConcat_285  errmsg1254 ) {
    ( (  print_dash_str290 ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_292_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Slice_279   subslice283 (    struct Slice_279  slice1325 ,    size_t  from1327 ,    size_t  to1329 ) {
    if ( ( (  cmp9 ( (  from1327 ) , ( (  slice1325 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1329 ) , ( (  slice1325 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic284 ) ( ( ( StrConcat_285_StrConcat ) ( ( ( StrConcat_286_StrConcat ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1327 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1329 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1325 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    struct List_3 *  begin_dash_ptr1330 = ( (  offset_dash_ptr154 ) ( ( (  slice1325 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1327 ) ) ) ) );
    size_t  count1331 = (  op_dash_sub94 ( (  to1329 ) , (  from1327 ) ) );
    if ( (  cmp9 ( (  count1331 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1331 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  count1331 ) } );
}

static  struct SliceIter_278   into_dash_iter281 (    struct List_280  self1620 ) {
    return ( (  into_dash_iter282 ) ( ( (  subslice283 ) ( ( (  self1620 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1620 ) .f_count ) ) ) ) );
}

static  struct SliceIter_278   into_dash_iter277 (    struct List_280 *  self547 ) {
    return ( (  into_dash_iter281 ) ( ( * (  self547 ) ) ) );
}

struct SliceIter_301 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_300 {
    struct SliceIter_301  f_s;
};

static  struct Scanner_300   into_dash_iter302 (    struct Scanner_300  self2188 ) {
    return (  self2188 );
}

static  struct Scanner_300   into_dash_iter299 (    struct Scanner_300 *  self547 ) {
    return ( (  into_dash_iter302 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_301   into_dash_iter305 (    struct Slice_5  self1339 ) {
    return ( (struct SliceIter_301) { .f_slice = (  self1339 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice306 (    struct Slice_5  slice1325 ,    size_t  from1327 ,    size_t  to1329 ) {
    if ( ( (  cmp9 ( (  from1327 ) , ( (  slice1325 ) .f_count ) ) == 2 ) || (  cmp9 ( (  to1329 ) , ( (  slice1325 ) .f_count ) ) == 2 ) ) ) {
        ( (  panic284 ) ( ( ( StrConcat_285_StrConcat ) ( ( ( StrConcat_286_StrConcat ) ( ( ( StrConcat_287_StrConcat ) ( ( ( StrConcat_288_StrConcat ) ( ( ( StrConcat_289_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "tried to sublice [" ) ,  (  from1327 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  to1329 ) ) ) ,  ( "], but slice has " ) ) ) ,  ( (  slice1325 ) .f_count ) ) ) ,  ( " elements" ) ) ) ) );
    }
    char *  begin_dash_ptr1330 = ( (  offset_dash_ptr31 ) ( ( (  slice1325 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1327 ) ) ) ) );
    size_t  count1331 = (  op_dash_sub94 ( (  to1329 ) , (  from1327 ) ) );
    if ( (  cmp9 ( (  count1331 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) ) {
        count1331 = (  from_dash_integral11 ( 0 ) );
    }
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  count1331 ) } );
}

static  struct SliceIter_301   into_dash_iter304 (    struct List_3  self1620 ) {
    return ( (  into_dash_iter305 ) ( ( (  subslice306 ) ( ( (  self1620 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1620 ) .f_count ) ) ) ) );
}

static  struct SliceIter_301   into_dash_iter303 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter304 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_308 {
    EmptyIter_308_EmptyIter,
};

static  enum EmptyIter_308   nil307 (  ) {
    return ( EmptyIter_308_EmptyIter );
}

static  enum EmptyIter_308   into_dash_iter309 (    enum EmptyIter_308  self552 ) {
    return (  self552 );
}

struct Maybe_311 {
    enum {
        Maybe_311_None_t,
        Maybe_311_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_311_Just_s;
    } stuff;
};

static struct Maybe_311 Maybe_311_Just (  char  field0 ) {
    return ( struct Maybe_311 ) { .tag = Maybe_311_Just_t, .stuff = { .Maybe_311_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_311   next310 (    enum EmptyIter_308 *  dref554 ) {
    return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
}

struct LineIter_314 {
    struct DynStr_131  f_og;
    size_t  f_last;
};

struct env319 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1629;
    size_t  starting_dash_size1628;
    ;
    ;
    ;
};

struct funenv319 {
    enum Unit_13  (*fun) (  struct env319  ,    struct List_3 *  );
    struct env319 env;
};

struct env318 {
    ;
    ;
    ;
    ;
    struct env319 envinst319;
    ;
};

struct funenv318 {
    enum Unit_13  (*fun) (  struct env318  ,    struct List_3 *  ,    char  );
    struct env318 env;
};

struct env317 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
};

struct funenv317 {
    enum Unit_13  (*fun) (  struct env317  ,    struct List_3 *  ,    struct DynStr_131  );
    struct env317 env;
};

struct env316 {
    ;
    ;
    ;
    ;
    struct env317 envinst317;
    ;
};

struct funenv316 {
    struct List_3  (*fun) (  struct env316  ,    struct DynStr_131  ,    enum CAllocator_4  );
    struct env316 env;
};

struct env315 {
    struct env316 envinst316;
    enum CAllocator_4  al2635;
};

struct funenv315 {
    struct List_3  (*fun) (  struct env315  ,    struct DynStr_131  );
    struct env315 env;
};

struct Map_313 {
    struct LineIter_314  field0;
    struct funenv315  field1;
};

static struct Map_313 Map_313_Map (  struct LineIter_314  field0 , struct funenv315  field1 ) {
    return ( struct Map_313 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_313   into_dash_iter312 (    struct Map_313  self558 ) {
    return (  self558 );
}

struct ConstStrIter_322 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_321 {
    struct ConstStrIter_322  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_321 Map_321_Map (  struct ConstStrIter_322  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_321 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_321   into_dash_iter320 (    struct Map_321  self558 ) {
    return (  self558 );
}

struct Take_325 {
    struct SliceIter_301  field0;
    size_t  field1;
};

static struct Take_325 Take_325_Take (  struct SliceIter_301  field0 ,  size_t  field1 ) {
    return ( struct Take_325 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env326 {
    ;
    ;
    ;
    int32_t  tab_dash_size2430;
};

struct funenv326 {
    int32_t  (*fun) (  struct env326  ,    char  );
    struct env326 env;
};

struct Map_324 {
    struct Take_325  field0;
    struct funenv326  field1;
};

static struct Map_324 Map_324_Map (  struct Take_325  field0 , struct funenv326  field1 ) {
    return ( struct Map_324 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_324   into_dash_iter323 (    struct Map_324  self558 ) {
    return (  self558 );
}

struct Maybe_328 {
    enum {
        Maybe_328_None_t,
        Maybe_328_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_328_Just_s;
    } stuff;
};

static struct Maybe_328 Maybe_328_Just (  struct List_3  field0 ) {
    return ( struct Maybe_328 ) { .tag = Maybe_328_Just_t, .stuff = { .Maybe_328_Just_s = { .field0 = field0 } } };
};

struct Maybe_329 {
    enum {
        Maybe_329_None_t,
        Maybe_329_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_131  field0;
        } Maybe_329_Just_s;
    } stuff;
};

static struct Maybe_329 Maybe_329_Just (  struct DynStr_131  field0 ) {
    return ( struct Maybe_329 ) { .tag = Maybe_329_Just_t, .stuff = { .Maybe_329_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail332 (    struct Maybe_311  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_311  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_311_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined128 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_311_Just_t ) {
        return ( dref1270 .stuff .Maybe_311_Just_s .field0 );
    }
}

static  struct Maybe_311   try_dash_get333 (    struct Slice_5  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    char *  elem_dash_ptr1309 = ( (  offset_dash_ptr31 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_311_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  char   get331 (    struct Slice_5  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail332 ) ( ( (  try_dash_get333 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar334 (  ) {
    return ( (  zeroed227 ) ( ) );
}

static  char   newline335 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_131   substr336 (    struct DynStr_131  s1435 ,    size_t  from1437 ,    size_t  to1439 ) {
    return ( (struct DynStr_131) { .f_contents = ( (  subslice306 ) ( ( (  s1435 ) .f_contents ) ,  (  from1437 ) ,  (  to1439 ) ) ) } );
}

static  struct Maybe_329   next330 (    struct LineIter_314 *  self1548 ) {
    if ( ( (  cmp9 ( ( ( * (  self1548 ) ) .f_last ) , ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq48 ( ( (  get331 ) ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1548 ) ) .f_last ) ) ) , ( (  nullchar334 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    }
    size_t  i1549 = ( ( * (  self1548 ) ) .f_last );
    while ( ( ! ( (  eq48 ( ( (  get331 ) ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) ,  (  i1549 ) ) ) , ( (  newline335 ) ( ) ) ) ) && (  cmp9 ( (  i1549 ) , ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) ) ) {
        i1549 = (  op_dash_add93 ( (  i1549 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_131  line1550 = ( (  substr336 ) ( ( ( * (  self1548 ) ) .f_og ) ,  ( ( * (  self1548 ) ) .f_last ) ,  (  i1549 ) ) );
    i1549 = (  op_dash_add93 ( (  i1549 ) , (  from_dash_integral11 ( 1 ) ) ) );
    (*  self1548 ) .f_last = (  i1549 );
    return ( ( Maybe_329_Just ) ( (  line1550 ) ) );
}

static  struct Maybe_328   next327 (    struct Map_313 *  dref560 ) {
    struct Maybe_329  dref563 = ( (  next330 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_329_None_t ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
    else if ( dref563.tag == Maybe_329_Just_t ) {
        struct funenv315  temp337 = ( (* dref560 ) .field1 );
        return ( ( Maybe_328_Just ) ( ( temp337.fun ( temp337.env ,  ( dref563 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_339 {
    enum {
        Maybe_339_None_t,
        Maybe_339_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_339_Just_s;
    } stuff;
};

static struct Maybe_339 Maybe_339_Just (  uint32_t  field0 ) {
    return ( struct Maybe_339 ) { .tag = Maybe_339_Just_t, .stuff = { .Maybe_339_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_311   next340 (    struct ConstStrIter_322 *  self1006 ) {
    if ( (  cmp9 ( ( ( * (  self1006 ) ) .f_i ) , ( (  i32_dash_size268 ) ( ( ( strlen ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    char *  char_dash_ptr1007 = ( ( (  cast184 ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) );
    char  c1008 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1007 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1006 ) ) .f_i ) ) ) ) ) );
    (*  self1006 ) .f_i = (  op_dash_add93 ( ( ( * (  self1006 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_311_Just ) ( (  c1008 ) ) );
}

static  struct Maybe_339   next338 (    struct Map_321 *  dref560 ) {
    struct Maybe_311  dref563 = ( (  next340 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_339) { .tag = Maybe_339_None_t } );
    }
    else if ( dref563.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_339_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_311_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_342 {
    enum {
        Maybe_342_None_t,
        Maybe_342_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_342_Just_s;
    } stuff;
};

static struct Maybe_342 Maybe_342_Just (  int32_t  field0 ) {
    return ( struct Maybe_342 ) { .tag = Maybe_342_Just_t, .stuff = { .Maybe_342_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_311   next344 (    struct SliceIter_301 *  self1345 ) {
    size_t  off1346 = ( ( * (  self1345 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1345 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    char  elem1347 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1345 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1346 ) ) ) ) ) );
    (*  self1345 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_311_Just ) ( (  elem1347 ) ) );
}

static  struct Maybe_311   next343 (    struct Take_325 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_311  x626 = ( (  next344 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub94 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
}

static  struct Maybe_342   next341 (    struct Map_324 *  dref560 ) {
    struct Maybe_311  dref563 = ( (  next343 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_342) { .tag = Maybe_342_None_t } );
    }
    else if ( dref563.tag == Maybe_311_Just_t ) {
        struct funenv326  temp345 = ( (* dref560 ) .field1 );
        return ( ( Maybe_342_Just ) ( ( temp345.fun ( temp345.env ,  ( dref563 .stuff .Maybe_311_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_314   into_dash_iter347 (    struct LineIter_314  self1545 ) {
    return (  self1545 );
}

static  struct Map_313   map346 (    struct LineIter_314  iterable567 ,   struct funenv315  fun569 ) {
    struct LineIter_314  it570 = ( (  into_dash_iter347 ) ( (  iterable567 ) ) );
    return ( ( Map_313_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct ConstStrIter_322   into_dash_iter349 (    const char*  self1000 ) {
    return ( (struct ConstStrIter_322) { .f_ogstr = (  self1000 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_321   map348 (    const char*  iterable567 ,    uint32_t (*  fun569 )(    char  ) ) {
    struct ConstStrIter_322  it570 = ( (  into_dash_iter349 ) ( (  iterable567 ) ) );
    return ( ( Map_321_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_325   into_dash_iter351 (    struct Take_325  self621 ) {
    return (  self621 );
}

static  struct Map_324   map350 (    struct Take_325  iterable567 ,   struct funenv326  fun569 ) {
    struct Take_325  it570 = ( (  into_dash_iter351 ) ( (  iterable567 ) ) );
    return ( ( Map_324_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct FromIter_355 {
    int32_t  f_from;
};

struct Zip_354 {
    struct SliceIter_278  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

struct Drop_353 {
    struct Zip_354  field0;
    size_t  field1;
};

static struct Drop_353 Drop_353_Drop (  struct Zip_354  field0 ,  size_t  field1 ) {
    return ( struct Drop_353 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_353   into_dash_iter352 (    struct Drop_353  self607 ) {
    return (  self607 );
}

struct Zip_358 {
    struct SliceIter_301  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

struct Drop_357 {
    struct Zip_358  field0;
    size_t  field1;
};

static struct Drop_357 Drop_357_Drop (  struct Zip_358  field0 ,  size_t  field1 ) {
    return ( struct Drop_357 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_357   into_dash_iter356 (    struct Drop_357  self607 ) {
    return (  self607 );
}

struct Tuple2_361 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_361 Tuple2_361_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_361 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_360 {
    enum {
        Maybe_360_None_t,
        Maybe_360_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_361  field0;
        } Maybe_360_Just_s;
    } stuff;
};

static struct Maybe_360 Maybe_360_Just (  struct Tuple2_361  field0 ) {
    return ( struct Maybe_360 ) { .tag = Maybe_360_Just_t, .stuff = { .Maybe_360_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_328   next363 (    struct SliceIter_278 *  self1345 ) {
    size_t  off1346 = ( ( * (  self1345 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1345 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
    struct List_3  elem1347 = ( * ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1345 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1346 ) ) ) ) ) );
    (*  self1345 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_328_Just ) ( (  elem1347 ) ) );
}

static  struct Maybe_342   next364 (    struct FromIter_355 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add82 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_342_Just ) ( (  v669 ) ) );
}

static  struct Maybe_360   next362 (    struct Zip_354 *  self676 ) {
    struct Zip_354  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_328  dref678 = ( (  next363 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_360) { .tag = Maybe_360_None_t } );
        }
        else if ( dref678.tag == Maybe_328_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_360) { .tag = Maybe_360_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next363 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_360_Just ) ( ( ( Tuple2_361_Tuple2 ) ( ( dref678 .stuff .Maybe_328_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_360   next359 (    struct Drop_353 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next362 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next362 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_367 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_367 Tuple2_367_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_366 {
    enum {
        Maybe_366_None_t,
        Maybe_366_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_367  field0;
        } Maybe_366_Just_s;
    } stuff;
};

static struct Maybe_366 Maybe_366_Just (  struct Tuple2_367  field0 ) {
    return ( struct Maybe_366 ) { .tag = Maybe_366_Just_t, .stuff = { .Maybe_366_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_366   next368 (    struct Zip_358 *  self676 ) {
    struct Zip_358  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next344 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next344 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_366   next365 (    struct Drop_357 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next368 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next368 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_354   into_dash_iter370 (    struct Zip_354  self673 ) {
    return (  self673 );
}

static  struct Drop_353   drop369 (    struct Zip_354  iterable614 ,    size_t  i616 ) {
    struct Zip_354  it617 = ( (  into_dash_iter370 ) ( (  iterable614 ) ) );
    return ( ( Drop_353_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_358   into_dash_iter372 (    struct Zip_358  self673 ) {
    return (  self673 );
}

static  struct Drop_357   drop371 (    struct Zip_358  iterable614 ,    size_t  i616 ) {
    struct Zip_358  it617 = ( (  into_dash_iter372 ) ( (  iterable614 ) ) );
    return ( ( Drop_357_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_325   take373 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_325_Take ) ( ( (  into_dash_iter303 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_375 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_375 Range_375_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_375 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_375   to374 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_375_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_377 {
    struct Range_375  field0;
    int32_t  field1;
};

static struct RangeIter_377 RangeIter_377_RangeIter (  struct Range_375  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_377 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_377   into_dash_iter376 (    struct Range_375  dref645 ) {
    return ( ( RangeIter_377_RangeIter ) ( ( ( Range_375_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_342   next378 (    struct RangeIter_377 *  self653 ) {
    struct RangeIter_377  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp75 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_342) { .tag = Maybe_342_None_t } );
        }
        struct Maybe_342  x658 = ( ( Maybe_342_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_377_RangeIter ) ( ( ( Range_375_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add82 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_355   from379 (    int32_t  f662 ) {
    return ( (struct FromIter_355) { .f_from = (  f662 ) } );
}

static  struct FromIter_355   into_dash_iter380 (    struct FromIter_355  it665 ) {
    return (  it665 );
}

struct IntStrIter_383 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_382 {
    struct IntStrIter_383  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_382   into_dash_iter381 (    struct Zip_382  self673 ) {
    return (  self673 );
}

struct StrConcatIter_389 {
    struct ConstStrIter_322  f_left;
    struct SliceIter_301  f_right;
};

struct AppendIter_390 {
    enum EmptyIter_308  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_388 {
    struct StrConcatIter_389  f_left;
    struct AppendIter_390  f_right;
};

struct StrCaseIter_387 {
    enum {
        StrCaseIter_387_StrCaseIter1_t,
        StrCaseIter_387_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_322  field0;
        } StrCaseIter_387_StrCaseIter1_s;
        struct {
            struct StrConcatIter_388  field0;
        } StrCaseIter_387_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_387 StrCaseIter_387_StrCaseIter1 (  struct ConstStrIter_322  field0 ) {
    return ( struct StrCaseIter_387 ) { .tag = StrCaseIter_387_StrCaseIter1_t, .stuff = { .StrCaseIter_387_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_387 StrCaseIter_387_StrCaseIter2 (  struct StrConcatIter_388  field0 ) {
    return ( struct StrCaseIter_387 ) { .tag = StrCaseIter_387_StrCaseIter2_t, .stuff = { .StrCaseIter_387_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_386 {
    struct ConstStrIter_322  f_left;
    struct StrCaseIter_387  f_right;
};

struct Zip_385 {
    struct StrConcatIter_386  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_385   into_dash_iter384 (    struct Zip_385  self673 ) {
    return (  self673 );
}

struct IntStrIter_394 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_393 {
    struct ConstStrIter_322  f_left;
    struct IntStrIter_394  f_right;
};

struct Zip_392 {
    struct StrConcatIter_393  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_392   into_dash_iter391 (    struct Zip_392  self673 ) {
    return (  self673 );
}

struct StrConcatIter_404 {
    struct AppendIter_390  f_left;
    struct AppendIter_390  f_right;
};

struct StrConcatIter_403 {
    struct StrConcatIter_404  f_left;
    struct ConstStrIter_322  f_right;
};

struct StrConcatIter_402 {
    struct StrConcatIter_403  f_left;
    struct IntStrIter_383  f_right;
};

struct StrConcatIter_401 {
    struct StrConcatIter_402  f_left;
    struct AppendIter_390  f_right;
};

struct StrConcatIter_400 {
    struct ConstStrIter_322  f_left;
    struct StrConcatIter_401  f_right;
};

struct StrConcatIter_399 {
    struct StrConcatIter_400  f_left;
    struct AppendIter_390  f_right;
};

struct StrCaseIter_398 {
    enum {
        StrCaseIter_398_StrCaseIter1_t,
        StrCaseIter_398_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_322  field0;
        } StrCaseIter_398_StrCaseIter1_s;
        struct {
            struct StrConcatIter_399  field0;
        } StrCaseIter_398_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_398 StrCaseIter_398_StrCaseIter1 (  struct ConstStrIter_322  field0 ) {
    return ( struct StrCaseIter_398 ) { .tag = StrCaseIter_398_StrCaseIter1_t, .stuff = { .StrCaseIter_398_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_398 StrCaseIter_398_StrCaseIter2 (  struct StrConcatIter_399  field0 ) {
    return ( struct StrCaseIter_398 ) { .tag = StrCaseIter_398_StrCaseIter2_t, .stuff = { .StrCaseIter_398_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_397 {
    struct ConstStrIter_322  f_left;
    struct StrCaseIter_398  f_right;
};

struct Zip_396 {
    struct StrConcatIter_397  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_396   into_dash_iter395 (    struct Zip_396  self673 ) {
    return (  self673 );
}

struct StrConcatIter_409 {
    struct ConstStrIter_322  f_left;
    struct IntStrIter_383  f_right;
};

struct StrConcatIter_408 {
    struct StrConcatIter_409  f_left;
    struct AppendIter_390  f_right;
};

struct StrConcatIter_407 {
    struct StrConcatIter_408  f_left;
    struct IntStrIter_383  f_right;
};

struct Zip_406 {
    struct StrConcatIter_407  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_406   into_dash_iter405 (    struct Zip_406  self673 ) {
    return (  self673 );
}

struct IntStrIter_413 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_412 {
    struct ConstStrIter_322  f_left;
    struct IntStrIter_413  f_right;
};

struct Zip_411 {
    struct StrConcatIter_412  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self673 ) {
    return (  self673 );
}

struct Zip_415 {
    struct StrConcatIter_409  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_415   into_dash_iter414 (    struct Zip_415  self673 ) {
    return (  self673 );
}

struct StrConcatIter_419 {
    struct StrConcatIter_409  f_left;
    struct ConstStrIter_322  f_right;
};

struct StrConcatIter_418 {
    struct StrConcatIter_419  f_left;
    struct IntStrIter_383  f_right;
};

struct Zip_417 {
    struct StrConcatIter_418  f_left_dash_it;
    struct FromIter_355  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self673 ) {
    return (  self673 );
}

struct env424 {
    ;
    int32_t  base923;
};

struct funenv424 {
    int32_t  (*fun) (  struct env424  ,    int32_t  ,    int32_t  );
    struct env424 env;
};

static  int32_t   reduce423 (    struct Range_375  iterable812 ,    int32_t  base814 ,   struct funenv424  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_377  it818 = ( (  into_dash_iter376 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_342  dref819 = ( (  next378 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_342_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_342_Just_t ) {
            struct funenv424  temp425 = (  fun816 );
            x817 = ( temp425.fun ( temp425.env ,  ( dref819 .stuff .Maybe_342_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp426;
    return (  temp426 );
}

static  int32_t   lam424 (   struct env424 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul84 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow422 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env424 envinst424 = {
        .base923 =  base923 ,
    };
    return ( (  reduce423 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv424){ .fun = lam424, .env = envinst424 } ) ) );
}

static  struct Maybe_311   next421 (    struct IntStrIter_383 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow422 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div85 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul84 ( (  op_dash_div85 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub83 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast197 ) ( (  op_dash_add82 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_311_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_366   next420 (    struct Zip_382 *  self676 ) {
    struct Zip_382  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next421 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next421 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_311   next431 (    struct StrConcatIter_389 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next344 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next432 (    struct AppendIter_390 *  self776 ) {
    struct Maybe_311  dref777 = ( (  next310 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
    if ( dref777.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref777 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref777.tag == Maybe_311_None_t ) {
        if ( ( ! ( ( * (  self776 ) ) .f_appended ) ) ) {
            (*  self776 ) .f_appended = ( true );
            return ( ( Maybe_311_Just ) ( ( ( * (  self776 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
}

static  struct Maybe_311   next430 (    struct StrConcatIter_388 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next431 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next429 (    struct StrCaseIter_387 *  self1115 ) {
    struct StrCaseIter_387 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_387_StrCaseIter1_t ) {
        return ( (  next340 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_387_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_387_StrCaseIter2_t ) {
        return ( (  next430 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_387_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_311   next428 (    struct StrConcatIter_386 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next427 (    struct Zip_385 *  self676 ) {
    struct Zip_385  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next428 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next428 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env438 {
    uint32_t  base923;
    ;
};

struct funenv438 {
    uint32_t  (*fun) (  struct env438  ,    int32_t  ,    uint32_t  );
    struct env438 env;
};

static  uint32_t   reduce437 (    struct Range_375  iterable812 ,    uint32_t  base814 ,   struct funenv438  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_377  it818 = ( (  into_dash_iter376 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_342  dref819 = ( (  next378 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_342_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_342_Just_t ) {
            struct funenv438  temp439 = (  fun816 );
            x817 = ( temp439.fun ( temp439.env ,  ( dref819 .stuff .Maybe_342_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp440;
    return (  temp440 );
}

static  uint32_t   lam438 (   struct env438 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul89 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow436 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env438 envinst438 = {
        .base923 =  base923 ,
    };
    return ( (  reduce437 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv438){ .fun = lam438, .env = envinst438 } ) ) );
}

static  struct Maybe_311   next435 (    struct IntStrIter_394 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow436 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div90 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub88 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast200 ) ( (  op_dash_add87 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_311_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_311   next434 (    struct StrConcatIter_393 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next435 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next433 (    struct Zip_392 *  self676 ) {
    struct Zip_392  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next434 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next434 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_311   next449 (    struct StrConcatIter_404 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next448 (    struct StrConcatIter_403 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next449 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next447 (    struct StrConcatIter_402 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next448 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next421 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next446 (    struct StrConcatIter_401 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next447 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next445 (    struct StrConcatIter_400 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next446 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next444 (    struct StrConcatIter_399 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next445 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next443 (    struct StrCaseIter_398 *  self1115 ) {
    struct StrCaseIter_398 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_398_StrCaseIter1_t ) {
        return ( (  next340 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_398_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_398_StrCaseIter2_t ) {
        return ( (  next444 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_398_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_311   next442 (    struct StrConcatIter_397 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next441 (    struct Zip_396 *  self676 ) {
    struct Zip_396  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next442 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next442 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_311   next453 (    struct StrConcatIter_409 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next421 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next452 (    struct StrConcatIter_408 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next453 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next451 (    struct StrConcatIter_407 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next452 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next421 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next450 (    struct Zip_406 *  self676 ) {
    struct Zip_406  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next451 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next451 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env459 {
    size_t  base923;
    ;
};

struct funenv459 {
    size_t  (*fun) (  struct env459  ,    int32_t  ,    size_t  );
    struct env459 env;
};

static  size_t   reduce458 (    struct Range_375  iterable812 ,    size_t  base814 ,   struct funenv459  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_377  it818 = ( (  into_dash_iter376 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_342  dref819 = ( (  next378 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_342_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_342_Just_t ) {
            struct funenv459  temp460 = (  fun816 );
            x817 = ( temp460.fun ( temp460.env ,  ( dref819 .stuff .Maybe_342_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp461;
    return (  temp461 );
}

static  size_t   lam459 (   struct env459 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul95 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow457 (    size_t  base923 ,    int32_t  p925 ) {
    struct env459 envinst459 = {
        .base923 =  base923 ,
    };
    return ( (  reduce458 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv459){ .fun = lam459, .env = envinst459 } ) ) );
}

static  struct Maybe_311   next456 (    struct IntStrIter_413 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow457 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div96 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul95 ( (  op_dash_div96 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub94 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast201 ) ( (  op_dash_add93 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_311_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_311   next455 (    struct StrConcatIter_412 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next456 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next454 (    struct Zip_411 *  self676 ) {
    struct Zip_411  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next455 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next455 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_366   next462 (    struct Zip_415 *  self676 ) {
    struct Zip_415  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next453 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next453 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_311   next465 (    struct StrConcatIter_419 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next453 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next340 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_311   next464 (    struct StrConcatIter_418 *  self1093 ) {
    struct Maybe_311  dref1094 = ( (  next465 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_311_Just ) ( ( dref1094 .stuff .Maybe_311_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_311_None_t ) {
        return ( (  next421 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_366   next463 (    struct Zip_417 *  self676 ) {
    struct Zip_417  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_311  dref678 = ( (  next464 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_311_None_t ) {
            return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
        }
        else if ( dref678.tag == Maybe_311_Just_t ) {
            struct Maybe_342  dref680 = ( (  next364 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_342_None_t ) {
                return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
            }
            else if ( dref680.tag == Maybe_342_Just_t ) {
                ( (  next464 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next364 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_366_Just ) ( ( ( Tuple2_367_Tuple2 ) ( ( dref678 .stuff .Maybe_311_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_342_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_354   zip466 (    struct Slice_279  left684 ,    struct FromIter_355  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_354) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_358   zip467 (    struct Slice_5  left684 ,    struct FromIter_355  right686 ) {
    struct SliceIter_301  left_dash_it687 = ( (  into_dash_iter305 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_358) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_354   zip468 (    struct List_280  left684 ,    struct FromIter_355  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_354) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_358   zip469 (    struct List_3  left684 ,    struct FromIter_355  right686 ) {
    struct SliceIter_301  left_dash_it687 = ( (  into_dash_iter304 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_358) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_383   into_dash_iter471 (    struct IntStrIter_383  self1024 ) {
    return (  self1024 );
}

static  struct Zip_382   zip470 (    struct IntStrIter_383  left684 ,    struct FromIter_355  right686 ) {
    struct IntStrIter_383  left_dash_it687 = ( (  into_dash_iter471 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_382) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_386   into_dash_iter473 (    struct StrConcatIter_386  self1090 ) {
    return (  self1090 );
}

static  struct Zip_385   zip472 (    struct StrConcatIter_386  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_386  left_dash_it687 = ( (  into_dash_iter473 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_385) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_393   into_dash_iter475 (    struct StrConcatIter_393  self1090 ) {
    return (  self1090 );
}

static  struct Zip_392   zip474 (    struct StrConcatIter_393  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_393  left_dash_it687 = ( (  into_dash_iter475 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_392) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_397   into_dash_iter477 (    struct StrConcatIter_397  self1090 ) {
    return (  self1090 );
}

static  struct Zip_396   zip476 (    struct StrConcatIter_397  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_397  left_dash_it687 = ( (  into_dash_iter477 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_396) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_407   into_dash_iter479 (    struct StrConcatIter_407  self1090 ) {
    return (  self1090 );
}

static  struct Zip_406   zip478 (    struct StrConcatIter_407  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_407  left_dash_it687 = ( (  into_dash_iter479 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_406) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_412   into_dash_iter481 (    struct StrConcatIter_412  self1090 ) {
    return (  self1090 );
}

static  struct Zip_411   zip480 (    struct StrConcatIter_412  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_412  left_dash_it687 = ( (  into_dash_iter481 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_409   into_dash_iter483 (    struct StrConcatIter_409  self1090 ) {
    return (  self1090 );
}

static  struct Zip_415   zip482 (    struct StrConcatIter_409  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_409  left_dash_it687 = ( (  into_dash_iter483 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_415) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_418   into_dash_iter485 (    struct StrConcatIter_418  self1090 ) {
    return (  self1090 );
}

static  struct Zip_417   zip484 (    struct StrConcatIter_418  left684 ,    struct FromIter_355  right686 ) {
    struct StrConcatIter_418  left_dash_it687 = ( (  into_dash_iter485 ) ( (  left684 ) ) );
    struct FromIter_355  right_dash_it688 = ( (  into_dash_iter380 ) ( (  right686 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_487 {
    struct Scanner_300  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_487   into_dash_iter486 (    struct TakeWhile_487  self718 ) {
    return (  self718 );
}

struct TakeWhile_489 {
    struct SliceIter_301  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_489   into_dash_iter488 (    struct TakeWhile_489  self718 ) {
    return (  self718 );
}

struct DropWhile_494 {
    struct SliceIter_301  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_493 {
    struct DropWhile_494  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_492 {
    struct DropWhile_493  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_491 {
    struct DropWhile_492  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_491   into_dash_iter490 (    struct TakeWhile_491  self718 ) {
    return (  self718 );
}

struct TakeWhile_496 {
    struct DropWhile_494  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_496   into_dash_iter495 (    struct TakeWhile_496  self718 ) {
    return (  self718 );
}

struct TakeWhile_498 {
    struct DropWhile_492  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_498   into_dash_iter497 (    struct TakeWhile_498  self718 ) {
    return (  self718 );
}

static  struct Maybe_311   next500 (    struct Scanner_300 *  self2185 ) {
    return ( (  next344 ) ( ( & ( ( * (  self2185 ) ) .f_s ) ) ) );
}

static  struct Maybe_311   next499 (    struct TakeWhile_487 *  self721 ) {
    struct Maybe_311  mx722 = ( (  next500 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_311  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref723.tag == Maybe_311_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_311_Just ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
    }
}

static  struct Maybe_311   next501 (    struct TakeWhile_489 *  self721 ) {
    struct Maybe_311  mx722 = ( (  next344 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_311  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref723.tag == Maybe_311_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_311_Just ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
    }
}

static  struct Maybe_311   next505 (    struct DropWhile_494 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next344 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_311  dref737 = ( (  next344 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_311_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
        else if ( dref737.tag == Maybe_311_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_311_Just ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_311   next504 (    struct DropWhile_493 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next505 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_311  dref737 = ( (  next505 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_311_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
        else if ( dref737.tag == Maybe_311_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_311_Just ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_311   next503 (    struct DropWhile_492 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next504 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_311  dref737 = ( (  next504 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_311_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
        else if ( dref737.tag == Maybe_311_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_311_Just ) ( ( dref737 .stuff .Maybe_311_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_311   next502 (    struct TakeWhile_491 *  self721 ) {
    struct Maybe_311  mx722 = ( (  next503 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_311  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref723.tag == Maybe_311_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_311_Just ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
    }
}

static  struct Maybe_311   next506 (    struct TakeWhile_496 *  self721 ) {
    struct Maybe_311  mx722 = ( (  next505 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_311  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref723.tag == Maybe_311_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_311_Just ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
    }
}

static  struct Maybe_311   next507 (    struct TakeWhile_498 *  self721 ) {
    struct Maybe_311  mx722 = ( (  next503 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_311  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref723.tag == Maybe_311_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_311_Just ) ( ( dref723 .stuff .Maybe_311_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
        }
    }
}

static  struct TakeWhile_487   take_dash_while508 (    struct Scanner_300 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_487) { .f_it = ( (  into_dash_iter299 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_489   take_dash_while509 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_489) { .f_it = ( (  into_dash_iter303 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_492   into_dash_iter511 (    struct DropWhile_492  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_498   take_dash_while510 (    struct DropWhile_492  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_498) { .f_it = ( (  into_dash_iter511 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_491   take_dash_while512 (    struct DropWhile_492  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_491) { .f_it = ( (  into_dash_iter511 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_494   into_dash_iter514 (    struct DropWhile_494  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_496   take_dash_while513 (    struct DropWhile_494  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_496) { .f_it = ( (  into_dash_iter514 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_493   into_dash_iter515 (    struct DropWhile_493  self733 ) {
    return (  self733 );
}

static  struct SliceIter_301   into_dash_iter517 (    struct DynStr_131  self1432 ) {
    return ( (  into_dash_iter305 ) ( ( (  self1432 ) .f_contents ) ) );
}

static  struct DropWhile_494   drop_dash_while516 (    struct DynStr_131  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_494) { .f_it = ( (  into_dash_iter517 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_493   drop_dash_while518 (    struct DropWhile_494  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_493) { .f_it = ( (  into_dash_iter514 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_492   drop_dash_while519 (    struct DropWhile_493  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_492) { .f_it = ( (  into_dash_iter515 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_390   append520 (    enum EmptyIter_308  it760 ,    char  e762 ) {
    return ( (struct AppendIter_390) { .f_it = ( (  into_dash_iter309 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_390   cons521 (    enum EmptyIter_308  it765 ,    char  e767 ) {
    return ( (  append520 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_390   single522 (    char  e770 ) {
    return ( (  cons521 ) ( ( (  nil307 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_527 {
    enum {
        Key_527_Escape_t,
        Key_527_Enter_t,
        Key_527_Tab_t,
        Key_527_Backspace_t,
        Key_527_Char_t,
        Key_527_Ctrl_t,
        Key_527_Up_t,
        Key_527_Down_t,
        Key_527_Left_t,
        Key_527_Right_t,
        Key_527_Home_t,
        Key_527_End_t,
        Key_527_PageUp_t,
        Key_527_PageDown_t,
        Key_527_Delete_t,
        Key_527_Insert_t,
        Key_527_F1_t,
        Key_527_F2_t,
        Key_527_F3_t,
        Key_527_F4_t,
        Key_527_F5_t,
        Key_527_F6_t,
        Key_527_F7_t,
        Key_527_F8_t,
        Key_527_F9_t,
        Key_527_F10_t,
        Key_527_F11_t,
        Key_527_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_527_Char_s;
        struct {
            char  field0;
        } Key_527_Ctrl_s;
    } stuff;
};

static struct Key_527 Key_527_Char (  char  field0 ) {
    return ( struct Key_527 ) { .tag = Key_527_Char_t, .stuff = { .Key_527_Char_s = { .field0 = field0 } } };
};

static struct Key_527 Key_527_Ctrl (  char  field0 ) {
    return ( struct Key_527 ) { .tag = Key_527_Ctrl_t, .stuff = { .Key_527_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_528 {
    enum MouseButton_144  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_526 {
    enum {
        InputEvent_526_Key_t,
        InputEvent_526_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_527  field0;
        } InputEvent_526_Key_s;
        struct {
            struct MouseEvent_528  field0;
        } InputEvent_526_Mouse_s;
    } stuff;
};

static struct InputEvent_526 InputEvent_526_Key (  struct Key_527  field0 ) {
    return ( struct InputEvent_526 ) { .tag = InputEvent_526_Key_t, .stuff = { .InputEvent_526_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_526 InputEvent_526_Mouse (  struct MouseEvent_528  field0 ) {
    return ( struct InputEvent_526 ) { .tag = InputEvent_526_Mouse_t, .stuff = { .InputEvent_526_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_525 {
    enum {
        Maybe_525_None_t,
        Maybe_525_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_526  field0;
        } Maybe_525_Just_s;
    } stuff;
};

static struct Maybe_525 Maybe_525_Just (  struct InputEvent_526  field0 ) {
    return ( struct Maybe_525 ) { .tag = Maybe_525_Just_t, .stuff = { .Maybe_525_Just_s = { .field0 = field0 } } };
};

struct FunIter_524 {
    struct Maybe_525 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_524   into_dash_iter523 (    struct FunIter_524  self782 ) {
    return (  self782 );
}

static  struct Maybe_525   next529 (    struct FunIter_524 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
    struct Maybe_525  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_525_Just_t ) {
        return ( ( Maybe_525_Just ) ( ( dref786 .stuff .Maybe_525_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_525_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
}

static  struct FunIter_524   from_dash_function530 (    struct Maybe_525 (*  fun790 )(  ) ) {
    return ( (struct FunIter_524) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env532 {
    ;
    struct Slice_279  new_dash_slice1634;
    ;
};

struct funenv532 {
    enum Unit_13  (*fun) (  struct env532  ,    struct Tuple2_361  );
    struct env532 env;
};

static  enum Unit_13   for_dash_each531 (    struct Zip_354  iterable793 ,   struct funenv532  fun795 ) {
    struct Zip_354  temp533 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_354 *  it796 = ( &temp533 );
    while ( ( true ) ) {
        struct Maybe_360  dref797 = ( (  next362 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_360_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_360_Just_t ) {
            struct funenv532  temp534 = (  fun795 );
            ( temp534.fun ( temp534.env ,  ( dref797 .stuff .Maybe_360_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env536 {
    ;
    struct Slice_5  new_dash_slice1634;
    ;
};

struct funenv536 {
    enum Unit_13  (*fun) (  struct env536  ,    struct Tuple2_367  );
    struct env536 env;
};

static  enum Unit_13   for_dash_each535 (    struct Zip_358  iterable793 ,   struct funenv536  fun795 ) {
    struct Zip_358  temp537 = ( (  into_dash_iter372 ) ( (  iterable793 ) ) );
    struct Zip_358 *  it796 = ( &temp537 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv536  temp538 = (  fun795 );
            ( temp538.fun ( temp538.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env540 {
    struct List_3 *  list1681;
    struct env318 envinst318;
};

struct funenv540 {
    enum Unit_13  (*fun) (  struct env540  ,    char  );
    struct env540 env;
};

static  enum Unit_13   for_dash_each539 (    struct DynStr_131  iterable793 ,   struct funenv540  fun795 ) {
    struct SliceIter_301  temp541 = ( (  into_dash_iter517 ) ( (  iterable793 ) ) );
    struct SliceIter_301 *  it796 = ( &temp541 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next344 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv540  temp542 = (  fun795 );
            ( temp542.fun ( temp542.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env546 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1629;
    size_t  starting_dash_size1628;
    ;
    ;
    ;
};

struct funenv546 {
    enum Unit_13  (*fun) (  struct env546  ,    struct List_280 *  );
    struct env546 env;
};

struct env545 {
    ;
    ;
    ;
    ;
    struct env546 envinst546;
    ;
};

struct funenv545 {
    enum Unit_13  (*fun) (  struct env545  ,    struct List_280 *  ,    struct List_3  );
    struct env545 env;
};

struct env544 {
    struct List_280 *  list1681;
    struct env545 envinst545;
};

struct funenv544 {
    enum Unit_13  (*fun) (  struct env544  ,    struct List_3  );
    struct env544 env;
};

static  enum Unit_13   for_dash_each543 (    struct Map_313  iterable793 ,   struct funenv544  fun795 ) {
    struct Map_313  temp547 = ( (  into_dash_iter312 ) ( (  iterable793 ) ) );
    struct Map_313 *  it796 = ( &temp547 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next327 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv544  temp548 = (  fun795 );
            ( temp548.fun ( temp548.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_551 {
    struct List_3  f_chars;
};

struct env550 {
    struct StrBuilder_551 *  builder1920;
    struct env318 envinst318;
};

struct funenv550 {
    enum Unit_13  (*fun) (  struct env550  ,    char  );
    struct env550 env;
};

static  struct ConstStrIter_322   into_dash_iter553 (    struct ConstStrIter_322  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each549 (    struct ConstStrIter_322  iterable793 ,   struct funenv550  fun795 ) {
    struct ConstStrIter_322  temp552 = ( (  into_dash_iter553 ) ( (  iterable793 ) ) );
    struct ConstStrIter_322 *  it796 = ( &temp552 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next340 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv550  temp554 = (  fun795 );
            ( temp554.fun ( temp554.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_557 {
    struct Cell_53 *  f_ptr;
    size_t  f_count;
};

struct env556 {
    ;
    ;
    struct Slice_557  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv556 {
    enum Unit_13  (*fun) (  struct env556  ,    int32_t  );
    struct env556 env;
};

static  enum Unit_13   for_dash_each555 (    struct Range_375  iterable793 ,   struct funenv556  fun795 ) {
    struct RangeIter_377  temp558 = ( (  into_dash_iter376 ) ( (  iterable793 ) ) );
    struct RangeIter_377 *  it796 = ( &temp558 );
    while ( ( true ) ) {
        struct Maybe_342  dref797 = ( (  next378 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_342_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_342_Just_t ) {
            struct funenv556  temp559 = (  fun795 );
            ( temp559.fun ( temp559.env ,  ( dref797 .stuff .Maybe_342_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env561 {
    ;
    ;
    struct Slice_557  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv561 {
    enum Unit_13  (*fun) (  struct env561  ,    int32_t  );
    struct env561 env;
};

static  enum Unit_13   for_dash_each560 (    struct Range_375  iterable793 ,   struct funenv561  fun795 ) {
    struct RangeIter_377  temp562 = ( (  into_dash_iter376 ) ( (  iterable793 ) ) );
    struct RangeIter_377 *  it796 = ( &temp562 );
    while ( ( true ) ) {
        struct Maybe_342  dref797 = ( (  next378 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_342_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_342_Just_t ) {
            struct funenv561  temp563 = (  fun795 );
            ( temp563.fun ( temp563.env ,  ( dref797 .stuff .Maybe_342_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env565 {
    struct Scanner_300 *  it899;
    ;
};

struct funenv565 {
    struct Maybe_311  (*fun) (  struct env565  ,    int32_t  );
    struct env565 env;
};

static  enum Unit_13   for_dash_each564 (    struct Range_375  iterable793 ,   struct funenv565  fun795 ) {
    struct RangeIter_377  temp566 = ( (  into_dash_iter376 ) ( (  iterable793 ) ) );
    struct RangeIter_377 *  it796 = ( &temp566 );
    while ( ( true ) ) {
        struct Maybe_342  dref797 = ( (  next378 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_342_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_342_Just_t ) {
            struct funenv565  temp567 = (  fun795 );
            ( temp567.fun ( temp567.env ,  ( dref797 .stuff .Maybe_342_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env569 {
    ;
    struct Slice_279  dest1370;
    ;
};

struct funenv569 {
    enum Unit_13  (*fun) (  struct env569  ,    struct Tuple2_361  );
    struct env569 env;
};

static  enum Unit_13   for_dash_each568 (    struct Zip_354  iterable793 ,   struct funenv569  fun795 ) {
    struct Zip_354  temp570 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_354 *  it796 = ( &temp570 );
    while ( ( true ) ) {
        struct Maybe_360  dref797 = ( (  next362 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_360_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_360_Just_t ) {
            struct funenv569  temp571 = (  fun795 );
            ( temp571.fun ( temp571.env ,  ( dref797 .stuff .Maybe_360_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env573 {
    ;
    ;
    struct List_280 *  list1653;
    ;
    ;
};

struct funenv573 {
    enum Unit_13  (*fun) (  struct env573  ,    struct Tuple2_361  );
    struct env573 env;
};

static  enum Unit_13   for_dash_each572 (    struct Drop_353  iterable793 ,   struct funenv573  fun795 ) {
    struct Drop_353  temp574 = ( (  into_dash_iter352 ) ( (  iterable793 ) ) );
    struct Drop_353 *  it796 = ( &temp574 );
    while ( ( true ) ) {
        struct Maybe_360  dref797 = ( (  next359 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_360_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_360_Just_t ) {
            struct funenv573  temp575 = (  fun795 );
            ( temp575.fun ( temp575.env ,  ( dref797 .stuff .Maybe_360_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env577 {
    ;
    struct Slice_5  dest1370;
    ;
};

struct funenv577 {
    enum Unit_13  (*fun) (  struct env577  ,    struct Tuple2_367  );
    struct env577 env;
};

static  enum Unit_13   for_dash_each576 (    struct Zip_358  iterable793 ,   struct funenv577  fun795 ) {
    struct Zip_358  temp578 = ( (  into_dash_iter372 ) ( (  iterable793 ) ) );
    struct Zip_358 *  it796 = ( &temp578 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv577  temp579 = (  fun795 );
            ( temp579.fun ( temp579.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env581 {
    ;
    ;
    struct List_3 *  list1653;
    ;
    ;
};

struct funenv581 {
    enum Unit_13  (*fun) (  struct env581  ,    struct Tuple2_367  );
    struct env581 env;
};

static  enum Unit_13   for_dash_each580 (    struct Drop_357  iterable793 ,   struct funenv581  fun795 ) {
    struct Drop_357  temp582 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Drop_357 *  it796 = ( &temp582 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next365 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv581  temp583 = (  fun795 );
            ( temp583.fun ( temp583.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env585 {
    struct List_3 *  list1681;
    struct env318 envinst318;
};

struct funenv585 {
    enum Unit_13  (*fun) (  struct env585  ,    char  );
    struct env585 env;
};

static  enum Unit_13   for_dash_each584 (    struct List_3 *  iterable793 ,   struct funenv585  fun795 ) {
    struct SliceIter_301  temp586 = ( (  into_dash_iter303 ) ( (  iterable793 ) ) );
    struct SliceIter_301 *  it796 = ( &temp586 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next344 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv585  temp587 = (  fun795 );
            ( temp587.fun ( temp587.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env589 {
    struct List_3 *  list1681;
    struct env318 envinst318;
};

struct funenv589 {
    enum Unit_13  (*fun) (  struct env589  ,    char  );
    struct env589 env;
};

static  enum Unit_13   for_dash_each588 (    struct Slice_5  iterable793 ,   struct funenv589  fun795 ) {
    struct SliceIter_301  temp590 = ( (  into_dash_iter305 ) ( (  iterable793 ) ) );
    struct SliceIter_301 *  it796 = ( &temp590 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next344 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv589  temp591 = (  fun795 );
            ( temp591.fun ( temp591.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env593 {
    struct List_3 *  list1681;
    struct env318 envinst318;
};

struct funenv593 {
    enum Unit_13  (*fun) (  struct env593  ,    char  );
    struct env593 env;
};

static  enum Unit_13   for_dash_each592 (    struct TakeWhile_489  iterable793 ,   struct funenv593  fun795 ) {
    struct TakeWhile_489  temp594 = ( (  into_dash_iter488 ) ( (  iterable793 ) ) );
    struct TakeWhile_489 *  it796 = ( &temp594 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next501 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv593  temp595 = (  fun795 );
            ( temp595.fun ( temp595.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env597 {
    struct StrBuilder_551 *  builder1920;
    struct env318 envinst318;
};

struct funenv597 {
    enum Unit_13  (*fun) (  struct env597  ,    char  );
    struct env597 env;
};

static  enum Unit_13   for_dash_each596 (    struct TakeWhile_491  iterable793 ,   struct funenv597  fun795 ) {
    struct TakeWhile_491  temp598 = ( (  into_dash_iter490 ) ( (  iterable793 ) ) );
    struct TakeWhile_491 *  it796 = ( &temp598 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next502 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv597  temp599 = (  fun795 );
            ( temp599.fun ( temp599.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env601 {
    struct StrBuilder_551 *  builder1920;
    struct env318 envinst318;
};

struct funenv601 {
    enum Unit_13  (*fun) (  struct env601  ,    char  );
    struct env601 env;
};

static  enum Unit_13   for_dash_each600 (    struct TakeWhile_498  iterable793 ,   struct funenv601  fun795 ) {
    struct TakeWhile_498  temp602 = ( (  into_dash_iter497 ) ( (  iterable793 ) ) );
    struct TakeWhile_498 *  it796 = ( &temp602 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next507 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv601  temp603 = (  fun795 );
            ( temp603.fun ( temp603.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env606 {
    ;
    struct env318 envinst318;
    ;
};

struct funenv606 {
    enum Unit_13  (*fun) (  struct env606  ,    struct StrBuilder_551 *  ,    char  );
    struct env606 env;
};

struct env605 {
    struct StrBuilder_551 *  sb2673;
    struct env606 envinst606;
};

struct funenv605 {
    enum Unit_13  (*fun) (  struct env605  ,    char  );
    struct env605 env;
};

static  enum Unit_13   for_dash_each604 (    struct List_3  iterable793 ,   struct funenv605  fun795 ) {
    struct SliceIter_301  temp607 = ( (  into_dash_iter304 ) ( (  iterable793 ) ) );
    struct SliceIter_301 *  it796 = ( &temp607 );
    while ( ( true ) ) {
        struct Maybe_311  dref797 = ( (  next344 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_311_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_311_Just_t ) {
            struct funenv605  temp608 = (  fun795 );
            ( temp608.fun ( temp608.env ,  ( dref797 .stuff .Maybe_311_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_610 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_610   into_dash_iter612 (    struct SliceAddressIter_610  self1360 ) {
    return (  self1360 );
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

static  struct Maybe_613   next614 (    struct SliceAddressIter_610 *  self1363 ) {
    size_t  off1364 = ( ( * (  self1363 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1363 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_613) { .tag = Maybe_613_None_t } );
    }
    struct List_3 *  elem1365 = ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1363 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1364 ) ) ) ) );
    (*  self1363 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_613_Just ) ( (  elem1365 ) ) );
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
    ;
    ;
    struct Slice_557  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv616 {
    enum Unit_13  (*fun) (  struct env616  ,    int32_t  );
    struct env616 env;
};

static  enum Unit_13   for_dash_each615 (    struct Range_375  iterable793 ,   struct funenv616  fun795 ) {
    struct RangeIter_377  temp617 = ( (  into_dash_iter376 ) ( (  iterable793 ) ) );
    struct RangeIter_377 *  it796 = ( &temp617 );
    while ( ( true ) ) {
        struct Maybe_342  dref797 = ( (  next378 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_342_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_342_Just_t ) {
            struct funenv616  temp618 = (  fun795 );
            ( temp618.fun ( temp618.env ,  ( dref797 .stuff .Maybe_342_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_623 {
    ColorPalette_623_Palette8,
    ColorPalette_623_Palette16,
    ColorPalette_623_Palette256,
    ColorPalette_623_PaletteRGB,
};

struct Tui_622 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_623  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_136  f_orig_dash_termios;
};

struct Screen_621 {
    enum CAllocator_4  f_al;
    struct Tui_622 *  f_tui;
    struct Slice_557  f_current;
    struct Slice_557  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_54  f_default_dash_fg;
    struct Color_54  f_default_dash_bg;
};

struct env620 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    struct Tuple2_367  );
    struct env620 env;
};

static  enum Unit_13   for_dash_each619 (    struct Zip_382  iterable793 ,   struct funenv620  fun795 ) {
    struct Zip_382  temp624 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct Zip_382 *  it796 = ( &temp624 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next420 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv620  temp625 = (  fun795 );
            ( temp625.fun ( temp625.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env627 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv627 {
    enum Unit_13  (*fun) (  struct env627  ,    struct Tuple2_367  );
    struct env627 env;
};

static  enum Unit_13   for_dash_each626 (    struct Zip_385  iterable793 ,   struct funenv627  fun795 ) {
    struct Zip_385  temp628 = ( (  into_dash_iter384 ) ( (  iterable793 ) ) );
    struct Zip_385 *  it796 = ( &temp628 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next427 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv627  temp629 = (  fun795 );
            ( temp629.fun ( temp629.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env631 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv631 {
    enum Unit_13  (*fun) (  struct env631  ,    struct Tuple2_367  );
    struct env631 env;
};

static  enum Unit_13   for_dash_each630 (    struct Zip_392  iterable793 ,   struct funenv631  fun795 ) {
    struct Zip_392  temp632 = ( (  into_dash_iter391 ) ( (  iterable793 ) ) );
    struct Zip_392 *  it796 = ( &temp632 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next433 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv631  temp633 = (  fun795 );
            ( temp633.fun ( temp633.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env635 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv635 {
    enum Unit_13  (*fun) (  struct env635  ,    struct Tuple2_367  );
    struct env635 env;
};

static  enum Unit_13   for_dash_each634 (    struct Zip_396  iterable793 ,   struct funenv635  fun795 ) {
    struct Zip_396  temp636 = ( (  into_dash_iter395 ) ( (  iterable793 ) ) );
    struct Zip_396 *  it796 = ( &temp636 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next441 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv635  temp637 = (  fun795 );
            ( temp637.fun ( temp637.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env639 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv639 {
    enum Unit_13  (*fun) (  struct env639  ,    struct Tuple2_367  );
    struct env639 env;
};

static  enum Unit_13   for_dash_each638 (    struct Zip_406  iterable793 ,   struct funenv639  fun795 ) {
    struct Zip_406  temp640 = ( (  into_dash_iter405 ) ( (  iterable793 ) ) );
    struct Zip_406 *  it796 = ( &temp640 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next450 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv639  temp641 = (  fun795 );
            ( temp641.fun ( temp641.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env643 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv643 {
    enum Unit_13  (*fun) (  struct env643  ,    struct Tuple2_367  );
    struct env643 env;
};

static  enum Unit_13   for_dash_each642 (    struct Zip_411  iterable793 ,   struct funenv643  fun795 ) {
    struct Zip_411  temp644 = ( (  into_dash_iter410 ) ( (  iterable793 ) ) );
    struct Zip_411 *  it796 = ( &temp644 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next454 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv643  temp645 = (  fun795 );
            ( temp645.fun ( temp645.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env647 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv647 {
    enum Unit_13  (*fun) (  struct env647  ,    struct Tuple2_367  );
    struct env647 env;
};

static  enum Unit_13   for_dash_each646 (    struct Zip_415  iterable793 ,   struct funenv647  fun795 ) {
    struct Zip_415  temp648 = ( (  into_dash_iter414 ) ( (  iterable793 ) ) );
    struct Zip_415 *  it796 = ( &temp648 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next462 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv647  temp649 = (  fun795 );
            ( temp649.fun ( temp649.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env651 {
    ;
    struct Screen_621 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv651 {
    enum Unit_13  (*fun) (  struct env651  ,    struct Tuple2_367  );
    struct env651 env;
};

static  enum Unit_13   for_dash_each650 (    struct Zip_417  iterable793 ,   struct funenv651  fun795 ) {
    struct Zip_417  temp652 = ( (  into_dash_iter416 ) ( (  iterable793 ) ) );
    struct Zip_417 *  it796 = ( &temp652 );
    while ( ( true ) ) {
        struct Maybe_366  dref797 = ( (  next463 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_366_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_366_Just_t ) {
            struct funenv651  temp653 = (  fun795 );
            ( temp653.fun ( temp653.env ,  ( dref797 .stuff .Maybe_366_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_655 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_655   into_dash_iter656 (    struct SmolArray_98  self1487 ) {
    return ( (struct SmolArrayIter_655) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

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

static  enum Unit_13   print_dash_str669 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str668 (    struct StrConcat_662  self1102 ) {
    struct StrConcat_662  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str669 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str667 (    struct StrConcat_661  self1102 ) {
    struct StrConcat_661  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str668 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str666 (    struct StrConcat_665  self1102 ) {
    struct StrConcat_665  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str667 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str663 (    struct StrConcat_664  self1102 ) {
    struct StrConcat_664  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str666 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic660 (    struct StrConcat_661  errmsg1254 ) {
    ( (  print_dash_str663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr659 (    struct Array_99 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast188 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get658 (    struct Array_99 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr659 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_339   next657 (    struct SmolArrayIter_655 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_339) { .tag = Maybe_339_None_t } );
    }
    uint32_t  e1496 = ( (  get658 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_339_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce654 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_655  it818 = ( (  into_dash_iter656 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_339  dref819 = ( (  next657 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_339_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_339_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_339_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp670;
    return (  temp670 );
}

struct SmolArrayIter_672 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_672   into_dash_iter673 (    struct SmolArray_101  self1487 ) {
    return ( (struct SmolArrayIter_672) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr676 (    struct Array_102 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast189 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get675 (    struct Array_102 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr676 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_339   next674 (    struct SmolArrayIter_672 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_339) { .tag = Maybe_339_None_t } );
    }
    uint32_t  e1496 = ( (  get675 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_339_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce671 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_672  it818 = ( (  into_dash_iter673 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_339  dref819 = ( (  next674 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_339_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_339_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_339_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp677;
    return (  temp677 );
}

struct SmolArrayIter_679 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_679   into_dash_iter680 (    struct SmolArray_104  self1487 ) {
    return ( (struct SmolArrayIter_679) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr683 (    struct Array_105 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast190 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get682 (    struct Array_105 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr683 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_339   next681 (    struct SmolArrayIter_679 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_339) { .tag = Maybe_339_None_t } );
    }
    uint32_t  e1496 = ( (  get682 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_339_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce678 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_679  it818 = ( (  into_dash_iter680 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_339  dref819 = ( (  next681 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_339_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_339_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_339_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp684;
    return (  temp684 );
}

static  uint32_t   reduce685 (    struct Map_321  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct Map_321  it818 = ( (  into_dash_iter320 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_339  dref819 = ( (  next338 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_339_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_339_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_339_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp686;
    return (  temp686 );
}

struct Maybe_688 {
    enum {
        Maybe_688_None_t,
        Maybe_688_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_688_Just_s;
    } stuff;
};

static struct Maybe_688 Maybe_688_Just (  int64_t  field0 ) {
    return ( struct Maybe_688 ) { .tag = Maybe_688_Just_t, .stuff = { .Maybe_688_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_688   reduce687 (    struct TakeWhile_487  iterable812 ,    struct Maybe_688  base814 ,    struct Maybe_688 (*  fun816 )(    char  ,    struct Maybe_688  ) ) {
    struct Maybe_688  x817 = (  base814 );
    struct TakeWhile_487  it818 = ( (  into_dash_iter486 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next499 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_688  temp689;
    return (  temp689 );
}

static  size_t   reduce690 (    struct TakeWhile_487  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_487  it818 = ( (  into_dash_iter486 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next499 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp691;
    return (  temp691 );
}

static  int32_t   reduce692 (    struct Map_324  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_324  it818 = ( (  into_dash_iter323 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_342  dref819 = ( (  next341 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_342_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_342_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_342_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp693;
    return (  temp693 );
}

static  size_t   reduce694 (    struct TakeWhile_489  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_489  it818 = ( (  into_dash_iter488 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next501 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp695;
    return (  temp695 );
}

static  struct Maybe_688   reduce696 (    struct TakeWhile_496  iterable812 ,    struct Maybe_688  base814 ,    struct Maybe_688 (*  fun816 )(    char  ,    struct Maybe_688  ) ) {
    struct Maybe_688  x817 = (  base814 );
    struct TakeWhile_496  it818 = ( (  into_dash_iter495 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next506 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_688  temp697;
    return (  temp697 );
}

static  size_t   reduce698 (    struct IntStrIter_383  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_383  it818 = ( (  into_dash_iter471 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next421 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp699;
    return (  temp699 );
}

static  size_t   reduce700 (    struct StrConcatIter_386  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_386  it818 = ( (  into_dash_iter473 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next428 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp701;
    return (  temp701 );
}

static  size_t   reduce702 (    struct StrConcatIter_393  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_393  it818 = ( (  into_dash_iter475 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next434 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp703;
    return (  temp703 );
}

static  size_t   reduce704 (    struct StrConcatIter_397  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_397  it818 = ( (  into_dash_iter477 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next442 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp705;
    return (  temp705 );
}

static  size_t   reduce706 (    struct StrConcatIter_407  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_407  it818 = ( (  into_dash_iter479 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next451 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp707;
    return (  temp707 );
}

static  size_t   reduce708 (    struct StrConcatIter_412  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_412  it818 = ( (  into_dash_iter481 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next455 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp709;
    return (  temp709 );
}

static  size_t   reduce710 (    struct StrConcatIter_409  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_409  it818 = ( (  into_dash_iter483 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next453 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp711;
    return (  temp711 );
}

static  size_t   reduce712 (    struct StrConcatIter_418  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_418  it818 = ( (  into_dash_iter485 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref819 = ( (  next464 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_311_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_311_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_311_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp713;
    return (  temp713 );
}

static  size_t   lam715 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count714 (    struct TakeWhile_487  it823 ) {
    return ( (  reduce690 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam715 ) ) );
}

static  size_t   lam717 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count716 (    struct TakeWhile_489  it823 ) {
    return ( (  reduce694 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam717 ) ) );
}

static  size_t   lam719 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count718 (    struct IntStrIter_383  it823 ) {
    return ( (  reduce698 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam719 ) ) );
}

static  size_t   lam721 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count720 (    struct StrConcatIter_386  it823 ) {
    return ( (  reduce700 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam721 ) ) );
}

static  size_t   lam723 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count722 (    struct StrConcatIter_393  it823 ) {
    return ( (  reduce702 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam723 ) ) );
}

static  size_t   lam725 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count724 (    struct StrConcatIter_397  it823 ) {
    return ( (  reduce704 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam725 ) ) );
}

static  size_t   lam727 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count726 (    struct StrConcatIter_407  it823 ) {
    return ( (  reduce706 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam727 ) ) );
}

static  size_t   lam729 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count728 (    struct StrConcatIter_412  it823 ) {
    return ( (  reduce708 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam729 ) ) );
}

static  size_t   lam731 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count730 (    struct StrConcatIter_409  it823 ) {
    return ( (  reduce710 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam731 ) ) );
}

static  size_t   lam733 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count732 (    struct StrConcatIter_418  it823 ) {
    return ( (  reduce712 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam733 ) ) );
}

static  int32_t   lam735 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add82 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum734 (    struct Map_324  it829 ) {
    return ( (  reduce692 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam735 ) ) );
}

static  struct Maybe_328   head736 (    struct List_280 *  it861 ) {
    struct SliceIter_278  temp737 = ( (  into_dash_iter277 ) ( (  it861 ) ) );
    return ( (  next363 ) ( ( &temp737 ) ) );
}

static  struct Maybe_311   head738 (    struct TakeWhile_487  it861 ) {
    struct TakeWhile_487  temp739 = ( (  into_dash_iter486 ) ( (  it861 ) ) );
    return ( (  next499 ) ( ( &temp739 ) ) );
}

static  struct Maybe_311   head740 (    struct TakeWhile_491  it861 ) {
    struct TakeWhile_491  temp741 = ( (  into_dash_iter490 ) ( (  it861 ) ) );
    return ( (  next502 ) ( ( &temp741 ) ) );
}

static  struct Maybe_311   head742 (    struct TakeWhile_496  it861 ) {
    struct TakeWhile_496  temp743 = ( (  into_dash_iter495 ) ( (  it861 ) ) );
    return ( (  next506 ) ( ( &temp743 ) ) );
}

static  bool   null744 (    struct List_280 *  it864 ) {
    struct Maybe_328  dref865 = ( (  head736 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_328_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null745 (    struct TakeWhile_487  it864 ) {
    struct Maybe_311  dref865 = ( (  head738 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_311_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null746 (    struct TakeWhile_491  it864 ) {
    struct Maybe_311  dref865 = ( (  head740 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_311_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_311   lam565 (   struct env565 env ,    int32_t  dref902 ) {
    return ( (  next500 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_747 (    struct Scanner_300 *  it899 ,    size_t  n901 ) {
    struct env565 envinst565 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each564 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32270 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv565){ .fun = lam565, .env = envinst565 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or748 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors749 (    struct SmolArray_98  vals947 ) {
    return ( (  reduce654 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or748 ) ) );
}

static  uint32_t   u32_dash_ors750 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce671 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or748 ) ) );
}

static  uint32_t   u32_dash_ors751 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce678 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or748 ) ) );
}

static  uint32_t   u32_dash_and752 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg753 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod754 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div80 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub79 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp74 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add78 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_756 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp757 (    struct Cursor_756  l2442 ,    struct Cursor_756  r2444 ) {
    enum Ordering_10  dref2445 = ( (  cmp75 ) ( ( (  l2442 ) .f_y ) ,  ( (  r2444 ) .f_y ) ) );
    switch (  dref2445 ) {
        case Ordering_10_EQ : {
            return ( (  cmp75 ) ( ( (  l2442 ) .f_x ) ,  ( (  r2444 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2446 =  dref2445;
            return (  els2446 );
            break;
        }
    }
}

static  struct Cursor_756   min755 (    struct Cursor_756  l965 ,    struct Cursor_756  r967 ) {
    if ( (  cmp757 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min758 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp75 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max759 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp75 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_756   max760 (    struct Cursor_756  l970 ,    struct Cursor_756  r972 ) {
    if ( (  cmp757 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between761 (    struct Cursor_756  c975 ,    struct Cursor_756  l977 ,    struct Cursor_756  r979 ) {
    struct Cursor_756  from980 = ( (  min755 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_756  to981 = ( (  max760 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp757 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp757 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp762 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
    if ( (  cmp75 ( (  x990 ) , (  mn992 ) ) == 0 ) ) {
        return (  mn992 );
    } else {
        if ( (  cmp75 ( (  x990 ) , (  mx994 ) ) == 2 ) ) {
            return (  mx994 );
        } else {
            return (  x990 );
        }
    }
}

static  struct ConstStrIter_322   chars763 (    const char*  self1014 ) {
    return ( (  into_dash_iter349 ) ( (  self1014 ) ) );
}

static  struct AppendIter_390   chars764 (    char  self1020 ) {
    return ( (  single522 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits765 (    size_t  self1035 ) {
    if ( (  eq45 ( (  self1035 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp9 ( (  self1035 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div96 ( (  self1035 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1036 = (  op_dash_add82 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits766 (    int32_t  self1035 ) {
    if ( (  eq41 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp75 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div85 ( (  self1035 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1036 = (  op_dash_add82 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits767 (    uint32_t  self1035 ) {
    if ( (  eq42 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp76 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div90 ( (  self1035 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1036 = (  op_dash_add82 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  struct IntStrIter_383   chars768 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_383) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits766 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str769 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_394   chars770 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_394) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits767 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str771 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32276 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_413   chars772 (    size_t  self1066 ) {
    return ( (struct IntStrIter_413) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits765 ) ( (  self1066 ) ) ) } );
}

struct Mode_775 {
    enum {
        Mode_775_Normal_t,
        Mode_775_Insert_t,
        Mode_775_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_551  field0;
        } Mode_775_Cmd_s;
    } stuff;
};

static struct Mode_775 Mode_775_Cmd (  struct StrBuilder_551  field0 ) {
    return ( struct Mode_775 ) { .tag = Mode_775_Cmd_t, .stuff = { .Mode_775_Cmd_s = { .field0 = field0 } } };
};

struct StrConcat_774 {
    const char*  field0;
    struct Mode_775  field1;
};

static struct StrConcat_774 StrConcat_774_StrConcat (  const char*  field0 ,  struct Mode_775  field1 ) {
    return ( struct StrConcat_774 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_779 {
    const char*  field0;
    struct DynStr_131  field1;
};

static struct StrConcat_779 StrConcat_779_StrConcat (  const char*  field0 ,  struct DynStr_131  field1 ) {
    return ( struct StrConcat_779 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_778 {
    struct StrConcat_779  field0;
    char  field1;
};

static struct StrConcat_778 StrConcat_778_StrConcat (  struct StrConcat_779  field0 ,  char  field1 ) {
    return ( struct StrConcat_778 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_777 {
    enum {
        StrCase_777_StrCase1_t,
        StrCase_777_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_777_StrCase1_s;
        struct {
            struct StrConcat_778  field0;
        } StrCase_777_StrCase2_s;
    } stuff;
};

static struct StrCase_777 StrCase_777_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_777 ) { .tag = StrCase_777_StrCase1_t, .stuff = { .StrCase_777_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_777 StrCase_777_StrCase2 (  struct StrConcat_778  field0 ) {
    return ( struct StrCase_777 ) { .tag = StrCase_777_StrCase2_t, .stuff = { .StrCase_777_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_131   as_dash_str781 (    struct StrBuilder_551 *  builder1946 ) {
    return ( (struct DynStr_131) { .f_contents = ( (  subslice306 ) ( ( ( ( * (  builder1946 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder1946 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_301   chars788 (    struct DynStr_131  self1429 ) {
    return ( (  into_dash_iter305 ) ( ( (  self1429 ) .f_contents ) ) );
}

static  struct StrConcatIter_389   into_dash_iter787 (    struct StrConcat_779  dref1097 ) {
    return ( (struct StrConcatIter_389) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars788 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_389   chars786 (    struct StrConcat_779  self1108 ) {
    return ( (  into_dash_iter787 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_388   into_dash_iter785 (    struct StrConcat_778  dref1097 ) {
    return ( (struct StrConcatIter_388) { .f_left = ( (  chars786 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars764 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_388   chars784 (    struct StrConcat_778  self1108 ) {
    return ( (  into_dash_iter785 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_387   into_dash_iter783 (    struct StrCase_777  self1121 ) {
    struct StrCase_777  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_777_StrCase1_t ) {
        return ( ( StrCaseIter_387_StrCaseIter1 ) ( ( (  chars763 ) ( ( dref1122 .stuff .StrCase_777_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_777_StrCase2_t ) {
        return ( ( StrCaseIter_387_StrCaseIter2 ) ( ( (  chars784 ) ( ( dref1122 .stuff .StrCase_777_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_387   chars782 (    struct StrCase_777  self1133 ) {
    return ( (  into_dash_iter783 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_387   chars776 (    struct Mode_775  self2460 ) {
    struct StrCase_777  temp780;
    struct StrCase_777  c2461 = (  temp780 );
    struct Mode_775  dref2462 = (  self2460 );
    if ( dref2462.tag == Mode_775_Normal_t ) {
        c2461 = ( ( StrCase_777_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2462.tag == Mode_775_Insert_t ) {
        c2461 = ( ( StrCase_777_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2462.tag == Mode_775_Cmd_t ) {
        struct DynStr_131  ss2464 = ( (  as_dash_str781 ) ( ( & ( dref2462 .stuff .Mode_775_Cmd_s .field0 ) ) ) );
        c2461 = ( ( StrCase_777_StrCase2 ) ( ( ( StrConcat_778_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( "Cmd(" ) ,  (  ss2464 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars782 ) ( (  c2461 ) ) );
}

static  struct StrConcatIter_386   into_dash_iter773 (    struct StrConcat_774  dref1097 ) {
    return ( (struct StrConcatIter_386) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars776 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_790 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_790 StrConcat_790_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_790 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_393   into_dash_iter789 (    struct StrConcat_790  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars770 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_792 {
    const char*  field0;
    struct Maybe_366  field1;
};

static struct StrConcat_792 StrConcat_792_StrConcat (  const char*  field0 ,  struct Maybe_366  field1 ) {
    return ( struct StrConcat_792 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_796 {
    const char*  field0;
    struct Tuple2_367  field1;
};

static struct StrConcat_796 StrConcat_796_StrConcat (  const char*  field0 ,  struct Tuple2_367  field1 ) {
    return ( struct StrConcat_796 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_795 {
    struct StrConcat_796  field0;
    char  field1;
};

static struct StrConcat_795 StrConcat_795_StrConcat (  struct StrConcat_796  field0 ,  char  field1 ) {
    return ( struct StrConcat_795 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_794 {
    enum {
        StrCase_794_StrCase1_t,
        StrCase_794_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_794_StrCase1_s;
        struct {
            struct StrConcat_795  field0;
        } StrCase_794_StrCase2_s;
    } stuff;
};

static struct StrCase_794 StrCase_794_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_794 ) { .tag = StrCase_794_StrCase1_t, .stuff = { .StrCase_794_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_794 StrCase_794_StrCase2 (  struct StrConcat_795  field0 ) {
    return ( struct StrCase_794 ) { .tag = StrCase_794_StrCase2_t, .stuff = { .StrCase_794_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_809 {
    char  field0;
    char  field1;
};

static struct StrConcat_809 StrConcat_809_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_809 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_808 {
    struct StrConcat_809  field0;
    const char*  field1;
};

static struct StrConcat_808 StrConcat_808_StrConcat (  struct StrConcat_809  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_808 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_807 {
    struct StrConcat_808  field0;
    int32_t  field1;
};

static struct StrConcat_807 StrConcat_807_StrConcat (  struct StrConcat_808  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_807 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_806 {
    struct StrConcat_807  field0;
    char  field1;
};

static struct StrConcat_806 StrConcat_806_StrConcat (  struct StrConcat_807  field0 ,  char  field1 ) {
    return ( struct StrConcat_806 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_404   into_dash_iter816 (    struct StrConcat_809  dref1097 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars764 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars764 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_404   chars815 (    struct StrConcat_809  self1108 ) {
    return ( (  into_dash_iter816 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_403   into_dash_iter814 (    struct StrConcat_808  dref1097 ) {
    return ( (struct StrConcatIter_403) { .f_left = ( (  chars815 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars763 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_403   chars813 (    struct StrConcat_808  self1108 ) {
    return ( (  into_dash_iter814 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_402   into_dash_iter812 (    struct StrConcat_807  dref1097 ) {
    return ( (struct StrConcatIter_402) { .f_left = ( (  chars813 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_402   chars811 (    struct StrConcat_807  self1108 ) {
    return ( (  into_dash_iter812 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_401   into_dash_iter810 (    struct StrConcat_806  dref1097 ) {
    return ( (struct StrConcatIter_401) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars764 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_401   chars805 (    struct StrConcat_806  self1108 ) {
    return ( (  into_dash_iter810 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_401   chars804 (    struct Tuple2_367  dref1158 ) {
    return ( (  chars805 ) ( ( ( StrConcat_806_StrConcat ) ( ( ( StrConcat_807_StrConcat ) ( ( ( StrConcat_808_StrConcat ) ( ( ( StrConcat_809_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_400   into_dash_iter803 (    struct StrConcat_796  dref1097 ) {
    return ( (struct StrConcatIter_400) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars804 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_400   chars802 (    struct StrConcat_796  self1108 ) {
    return ( (  into_dash_iter803 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_399   into_dash_iter801 (    struct StrConcat_795  dref1097 ) {
    return ( (struct StrConcatIter_399) { .f_left = ( (  chars802 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars764 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_399   chars800 (    struct StrConcat_795  self1108 ) {
    return ( (  into_dash_iter801 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_398   into_dash_iter799 (    struct StrCase_794  self1121 ) {
    struct StrCase_794  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_794_StrCase1_t ) {
        return ( ( StrCaseIter_398_StrCaseIter1 ) ( ( (  chars763 ) ( ( dref1122 .stuff .StrCase_794_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_794_StrCase2_t ) {
        return ( ( StrCaseIter_398_StrCaseIter2 ) ( ( (  chars800 ) ( ( dref1122 .stuff .StrCase_794_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_398   chars798 (    struct StrCase_794  self1133 ) {
    return ( (  into_dash_iter799 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_398   chars793 (    struct Maybe_366  self1147 ) {
    struct StrCase_794  temp797;
    struct StrCase_794  c1148 = (  temp797 );
    struct Maybe_366  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_366_None_t ) {
        c1148 = ( ( StrCase_794_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_366_Just_t ) {
        c1148 = ( ( StrCase_794_StrCase2 ) ( ( ( StrConcat_795_StrConcat ) ( ( ( StrConcat_796_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_366_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars798 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter791 (    struct StrConcat_792  dref1097 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars793 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_820 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_820 StrConcat_820_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_820 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_819 {
    struct StrConcat_820  field0;
    char  field1;
};

static struct StrConcat_819 StrConcat_819_StrConcat (  struct StrConcat_820  field0 ,  char  field1 ) {
    return ( struct StrConcat_819 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_818 {
    struct StrConcat_819  field0;
    int32_t  field1;
};

static struct StrConcat_818 StrConcat_818_StrConcat (  struct StrConcat_819  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_818 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_409   into_dash_iter824 (    struct StrConcat_820  dref1097 ) {
    return ( (struct StrConcatIter_409) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_409   chars823 (    struct StrConcat_820  self1108 ) {
    return ( (  into_dash_iter824 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_408   into_dash_iter822 (    struct StrConcat_819  dref1097 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars823 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars764 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_408   chars821 (    struct StrConcat_819  self1108 ) {
    return ( (  into_dash_iter822 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_407   into_dash_iter817 (    struct StrConcat_818  dref1097 ) {
    return ( (struct StrConcatIter_407) { .f_left = ( (  chars821 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_412   into_dash_iter825 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_412) { .f_left = ( (  chars763 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_828 {
    struct StrConcat_820  field0;
    const char*  field1;
};

static struct StrConcat_828 StrConcat_828_StrConcat (  struct StrConcat_820  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_827 {
    struct StrConcat_828  field0;
    int32_t  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  struct StrConcat_828  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_827 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_419   into_dash_iter830 (    struct StrConcat_828  dref1097 ) {
    return ( (struct StrConcatIter_419) { .f_left = ( (  chars823 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars763 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_419   chars829 (    struct StrConcat_828  self1108 ) {
    return ( (  into_dash_iter830 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_418   into_dash_iter826 (    struct StrConcat_827  dref1097 ) {
    return ( (struct StrConcatIter_418) { .f_left = ( (  chars829 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars768 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_835 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_835 StrConcat_835_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_835 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_834 {
    struct StrConcat_835  field0;
    char  field1;
};

static struct StrConcat_834 StrConcat_834_StrConcat (  struct StrConcat_835  field0 ,  char  field1 ) {
    return ( struct StrConcat_834 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_833 {
    const char*  field0;
    struct StrConcat_834  field1;
};

static struct StrConcat_833 StrConcat_833_StrConcat (  const char*  field0 ,  struct StrConcat_834  field1 ) {
    return ( struct StrConcat_833 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_832 {
    struct StrConcat_833  field0;
    char  field1;
};

static struct StrConcat_832 StrConcat_832_StrConcat (  struct StrConcat_833  field0 ,  char  field1 ) {
    return ( struct StrConcat_832 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str838 (    struct StrConcat_835  self1102 ) {
    struct StrConcat_835  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str837 (    struct StrConcat_834  self1102 ) {
    struct StrConcat_834  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str838 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str836 (    struct StrConcat_833  self1102 ) {
    struct StrConcat_833  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str837 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str831 (    struct StrConcat_832  self1102 ) {
    struct StrConcat_832  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str836 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_841 {
    const char*  field0;
    struct StrConcat_808  field1;
};

static struct StrConcat_841 StrConcat_841_StrConcat (  const char*  field0 ,  struct StrConcat_808  field1 ) {
    return ( struct StrConcat_841 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_840 {
    struct StrConcat_841  field0;
    char  field1;
};

static struct StrConcat_840 StrConcat_840_StrConcat (  struct StrConcat_841  field0 ,  char  field1 ) {
    return ( struct StrConcat_840 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str844 (    struct StrConcat_809  self1102 ) {
    struct StrConcat_809  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str843 (    struct StrConcat_808  self1102 ) {
    struct StrConcat_808  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str844 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str842 (    struct StrConcat_841  self1102 ) {
    struct StrConcat_841  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str843 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str839 (    struct StrConcat_840  self1102 ) {
    struct StrConcat_840  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str842 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_848 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_848 StrConcat_848_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_848 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_847 {
    const char*  field0;
    struct StrConcat_848  field1;
};

static struct StrConcat_847 StrConcat_847_StrConcat (  const char*  field0 ,  struct StrConcat_848  field1 ) {
    return ( struct StrConcat_847 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_846 {
    struct StrConcat_847  field0;
    char  field1;
};

static struct StrConcat_846 StrConcat_846_StrConcat (  struct StrConcat_847  field0 ,  char  field1 ) {
    return ( struct StrConcat_846 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str850 (    struct StrConcat_848  self1102 ) {
    struct StrConcat_848  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str849 (    struct StrConcat_847  self1102 ) {
    struct StrConcat_847  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str850 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str845 (    struct StrConcat_846  self1102 ) {
    struct StrConcat_846  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str849 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_853 {
    const char*  field0;
    struct StrConcat_835  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  const char*  field0 ,  struct StrConcat_835  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_852 {
    struct StrConcat_853  field0;
    char  field1;
};

static struct StrConcat_852 StrConcat_852_StrConcat (  struct StrConcat_853  field0 ,  char  field1 ) {
    return ( struct StrConcat_852 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str854 (    struct StrConcat_853  self1102 ) {
    struct StrConcat_853  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str838 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str851 (    struct StrConcat_852  self1102 ) {
    struct StrConcat_852  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str854 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_861 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_861 StrConcat_861_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_860 {
    struct StrConcat_861  field0;
    char  field1;
};

static struct StrConcat_860 StrConcat_860_StrConcat (  struct StrConcat_861  field0 ,  char  field1 ) {
    return ( struct StrConcat_860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_859 {
    struct StrConcat_860  field0;
    uint8_t  field1;
};

static struct StrConcat_859 StrConcat_859_StrConcat (  struct StrConcat_860  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_858 {
    struct StrConcat_859  field0;
    char  field1;
};

static struct StrConcat_858 StrConcat_858_StrConcat (  struct StrConcat_859  field0 ,  char  field1 ) {
    return ( struct StrConcat_858 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_857 {
    struct StrConcat_858  field0;
    uint8_t  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  struct StrConcat_858  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrConcat_857  field0;
    char  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_857  field0 ,  char  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str866 (    struct StrConcat_861  self1102 ) {
    struct StrConcat_861  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str771 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str865 (    struct StrConcat_860  self1102 ) {
    struct StrConcat_860  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str866 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str864 (    struct StrConcat_859  self1102 ) {
    struct StrConcat_859  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str865 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str771 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str863 (    struct StrConcat_858  self1102 ) {
    struct StrConcat_858  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str864 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str862 (    struct StrConcat_857  self1102 ) {
    struct StrConcat_857  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str863 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str771 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str855 (    struct StrConcat_856  self1102 ) {
    struct StrConcat_856  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str862 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_870 {
    struct StrConcat_790  field0;
    char  field1;
};

static struct StrConcat_870 StrConcat_870_StrConcat (  struct StrConcat_790  field0 ,  char  field1 ) {
    return ( struct StrConcat_870 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_869 {
    struct StrConcat_870  field0;
    uint32_t  field1;
};

static struct StrConcat_869 StrConcat_869_StrConcat (  struct StrConcat_870  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_869 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_868 {
    struct StrConcat_869  field0;
    char  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  struct StrConcat_869  field0 ,  char  field1 ) {
    return ( struct StrConcat_868 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str873 (    struct StrConcat_790  self1102 ) {
    struct StrConcat_790  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str769 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str872 (    struct StrConcat_870  self1102 ) {
    struct StrConcat_870  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str873 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str871 (    struct StrConcat_869  self1102 ) {
    struct StrConcat_869  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str872 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str769 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str867 (    struct StrConcat_868  self1102 ) {
    struct StrConcat_868  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str871 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_386   chars874 (    struct StrConcat_774  self1108 ) {
    return ( (  into_dash_iter773 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   chars875 (    struct StrConcat_790  self1108 ) {
    return ( (  into_dash_iter789 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_397   chars876 (    struct StrConcat_792  self1108 ) {
    return ( (  into_dash_iter791 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_407   chars877 (    struct StrConcat_818  self1108 ) {
    return ( (  into_dash_iter817 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_412   chars878 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter825 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_418   chars879 (    struct StrConcat_827  self1108 ) {
    return ( (  into_dash_iter826 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_487   chars880 (    struct TakeWhile_487  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_496   chars881 (    struct TakeWhile_496  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_491   chars882 (    struct TakeWhile_491  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_498   chars883 (    struct TakeWhile_498  self1193 ) {
    return (  self1193 );
}

struct Tuple2_887 {
    struct Maybe_311  field0;
    struct Maybe_311  field1;
};

static struct Tuple2_887 Tuple2_887_Tuple2 (  struct Maybe_311  field0 ,  struct Maybe_311  field1 ) {
    return ( struct Tuple2_887 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq884 (    struct TakeWhile_496  l1203 ,    char  r1205 ) {
    struct TakeWhile_496  temp885 = ( (  chars881 ) ( (  l1203 ) ) );
    struct TakeWhile_496 *  l1206 = ( &temp885 );
    struct AppendIter_390  temp886 = ( (  chars764 ) ( (  r1205 ) ) );
    struct AppendIter_390 *  r1207 = ( &temp886 );
    while ( ( true ) ) {
        struct Maybe_311  mlc1208 = ( (  next506 ) ( (  l1206 ) ) );
        struct Maybe_311  mrc1209 = ( (  next432 ) ( (  r1207 ) ) );
        struct Tuple2_887  dref1210 = ( ( Tuple2_887_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_311_None_t && dref1210 .field1.tag == Maybe_311_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_311_Just_t && dref1210 .field1.tag == Maybe_311_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_311_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_311_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  int32_t   char_dash_i32888 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed249 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8889 (    char  c1223 ) {
    return ( (  cast194 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char890 (    int32_t  i1226 ) {
    return ( (  cast197 ) ( (  i1226 ) ) );
}

static  bool   eq891 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp892 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp75 ) ( ( (  char_dash_i32888 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32888 ) ( (  r1246 ) ) ) ) );
}

static  bool   unreachable893 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   unreachable894 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   panic895 (    struct StrConcat_834  errmsg1254 ) {
    ( (  print_dash_str831 ) ( ( ( StrConcat_832_StrConcat ) ( ( ( StrConcat_833_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic896 (    struct StrConcat_808  errmsg1254 ) {
    ( (  print_dash_str839 ) ( ( ( StrConcat_840_StrConcat ) ( ( ( StrConcat_841_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic897 (    struct StrConcat_848  errmsg1254 ) {
    ( (  print_dash_str845 ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic898 (    const char*  errmsg1254 ) {
    ( (  print_dash_str837 ) ( ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic899 (    struct StrConcat_835  errmsg1254 ) {
    ( (  print_dash_str851 ) ( ( ( StrConcat_852_StrConcat ) ( ( ( StrConcat_853_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   panic_prime_900 (    const char*  errmsg1257 ) {
    ( (  print_dash_str837 ) ( ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   assert901 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str837 ) ( ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail902 (    struct Maybe_265  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_265  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_265_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined126 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_265_Just_t ) {
        return ( dref1270 .stuff .Maybe_265_Just_s .field0 );
    }
}

static  struct DynStr_131   or_dash_fail903 (    struct Maybe_329  x1267 ,    struct StrConcat_834  errmsg1269 ) {
    struct Maybe_329  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_329_None_t ) {
        ( (  panic895 ) ( (  errmsg1269 ) ) );
        return ( (  undefined130 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_329_Just_t ) {
        return ( dref1270 .stuff .Maybe_329_Just_s .field0 );
    }
}

struct Maybe_905 {
    enum {
        Maybe_905_None_t,
        Maybe_905_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53  field0;
        } Maybe_905_Just_s;
    } stuff;
};

static struct Maybe_905 Maybe_905_Just (  struct Cell_53  field0 ) {
    return ( struct Maybe_905 ) { .tag = Maybe_905_Just_t, .stuff = { .Maybe_905_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53   or_dash_fail904 (    struct Maybe_905  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_905  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_905_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_905_Just_t ) {
        return ( dref1270 .stuff .Maybe_905_Just_s .field0 );
    }
}

struct Maybe_907 {
    enum {
        Maybe_907_None_t,
        Maybe_907_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_907_Just_s;
    } stuff;
};

static struct Maybe_907 Maybe_907_Just (  uint8_t  field0 ) {
    return ( struct Maybe_907 ) { .tag = Maybe_907_Just_t, .stuff = { .Maybe_907_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail906 (    struct Maybe_907  x1267 ,    struct StrConcat_808  errmsg1269 ) {
    struct Maybe_907  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_907_None_t ) {
        ( (  panic896 ) ( (  errmsg1269 ) ) );
        return ( (  undefined141 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_907_Just_t ) {
        return ( dref1270 .stuff .Maybe_907_Just_s .field0 );
    }
}

struct Maybe_909 {
    enum {
        Maybe_909_None_t,
        Maybe_909_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53 *  field0;
        } Maybe_909_Just_s;
    } stuff;
};

static struct Maybe_909 Maybe_909_Just (  struct Cell_53 *  field0 ) {
    return ( struct Maybe_909 ) { .tag = Maybe_909_Just_t, .stuff = { .Maybe_909_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53 *   or_dash_fail908 (    struct Maybe_909  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_909  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_909_None_t ) {
        ( (  panic898 ) ( (  errmsg1269 ) ) );
        return ( (  undefined150 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_909_Just_t ) {
        return ( dref1270 .stuff .Maybe_909_Just_s .field0 );
    }
}

struct Maybe_911 {
    enum {
        Maybe_911_None_t,
        Maybe_911_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_756  field0;
        } Maybe_911_Just_s;
    } stuff;
};

static struct Maybe_911 Maybe_911_Just (  struct Cursor_756  field0 ) {
    return ( struct Maybe_911 ) { .tag = Maybe_911_Just_t, .stuff = { .Maybe_911_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_756   or_dash_else910 (    struct Maybe_911  self1274 ,    struct Cursor_756  alt1276 ) {
    struct Maybe_911  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_911_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_911_Just_t ) {
        return ( dref1277 .stuff .Maybe_911_Just_s .field0 );
    }
}

static  struct Slice_279   empty912 (  ) {
    return ( (struct Slice_279) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty913 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr258 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr914 (    struct Slice_279  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1303 = ( (  offset_dash_ptr154 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

static  struct Cell_53 *   get_dash_ptr915 (    struct Slice_557  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_53 *  elem_dash_ptr1303 = ( (  offset_dash_ptr160 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

struct Slice_917 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_265   try_dash_get916 (    struct Slice_917  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    }
    const char* *  elem_dash_ptr1309 = ( (  offset_dash_ptr152 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_265_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  struct Maybe_905   try_dash_get918 (    struct Slice_557  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    struct Cell_53 *  elem_dash_ptr1309 = ( (  offset_dash_ptr160 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_905_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  const char*   get919 (    struct Slice_917  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail902 ) ( ( (  try_dash_get916 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_53   get920 (    struct Slice_557  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail904 ) ( ( (  try_dash_get918 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set921 (    struct Slice_279  slice1317 ,    size_t  i1319 ,    struct List_3  x1321 ) {
    struct List_3 *  ep1322 = ( (  get_dash_ptr914 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set922 (    struct Slice_5  slice1317 ,    size_t  i1319 ,    char  x1321 ) {
    char *  ep1322 = ( (  get_dash_ptr30 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set923 (    struct Slice_557  slice1317 ,    size_t  i1319 ,    struct Cell_53  x1321 ) {
    struct Cell_53 *  ep1322 = ( (  get_dash_ptr915 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  struct SliceAddressIter_610   addresses924 (    struct Slice_279  slice1357 ) {
    return ( (struct SliceAddressIter_610) { .f_slice = (  slice1357 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam569 (   struct env569 env ,    struct Tuple2_361  dref1371 ) {
    return ( (  set921 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to925 (    struct Slice_279  src1368 ,    struct Slice_279  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic897 ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env569 envinst569 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each568 ) ( ( (  zip466 ) ( (  src1368 ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv569){ .fun = lam569, .env = envinst569 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam577 (   struct env577 env ,    struct Tuple2_367  dref1371 ) {
    return ( (  set922 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to926 (    struct Slice_5  src1368 ,    struct Slice_5  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic897 ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env577 envinst577 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each576 ) ( ( (  zip467 ) ( (  src1368 ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv577){ .fun = lam577, .env = envinst577 } ) ) );
    return ( Unit_13_Unit );
}

static  const char*   elem_dash_get927 (    struct Slice_917  self1376 ,    size_t  idx1378 ) {
    return ( (  get919 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  struct Cell_53   elem_dash_get928 (    struct Slice_557  self1376 ,    size_t  idx1378 ) {
    return ( (  get920 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  char   elem_dash_get929 (    struct Slice_5  self1376 ,    size_t  idx1378 ) {
    return ( (  get331 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  enum Unit_13   lam556 (   struct env556 env ,    int32_t  i1407 ) {
    return ( (  set923 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get928 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map930 (    struct Slice_557  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env556 envinst556 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each555 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv556){ .fun = lam556, .env = envinst556 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam561 (   struct env561 env ,    int32_t  i1407 ) {
    return ( (  set923 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get928 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map931 (    struct Slice_557  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env561 envinst561 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each560 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv561){ .fun = lam561, .env = envinst561 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam616 (   struct env616 env ,    int32_t  i1407 ) {
    return ( (  set923 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get928 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map932 (    struct Slice_557  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env616 envinst616 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each615 ) ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv616){ .fun = lam616, .env = envinst616 } ) ) );
    return ( Unit_13_Unit );
}

static  enum CAllocator_4   idc933 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_279   allocate934 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize162 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1418 = ( (  cast_dash_ptr204 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_5   allocate935 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    char *  ptr1418 = ( (  cast_dash_ptr207 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_557   allocate936 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    struct Cell_53 *  ptr1418 = ( (  cast_dash_ptr214 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_557) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  enum Unit_13   free937 (    enum CAllocator_4  dref1420 ,    struct Slice_279  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr205 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free938 (    enum CAllocator_4  dref1420 ,    struct Slice_5  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr208 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_940 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free939 (    enum CAllocator_4  dref1420 ,    struct Slice_940  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free941 (    enum CAllocator_4  dref1420 ,    struct Slice_557  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr222 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr942 (    struct Array_137 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1463 = ( ( (  cast191 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  char *   get_dash_ptr943 (    struct Array_181 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic660 ) ( ( ( StrConcat_661_StrConcat ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1463 = ( ( (  cast196 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  enum Unit_13   set944 (    struct Array_137 *  arr1472 ,    size_t  i1475 ,    uint8_t  e1477 ) {
    uint8_t *  p1478 = ( (  get_dash_ptr942 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set945 (    struct Array_181 *  arr1472 ,    size_t  i1475 ,    char  e1477 ) {
    char *  p1478 = ( (  get_dash_ptr943 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice946 (    struct Array_181 *  arr1481 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast196 ) ( (  arr1481 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace947 (    char  c1532 ) {
    return ( ( (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace948 (    char  c1535 ) {
    return ( ! ( (  is_dash_whitespace947 ) ( (  c1535 ) ) ) );
}

static  struct LineIter_314   lines949 (    struct DynStr_131  s1542 ) {
    return ( (struct LineIter_314) { .f_og = (  s1542 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit950 (    char  c1571 ) {
    return ( (  cmp75 ( ( (  char_dash_i32888 ) ( (  c1571 ) ) ) , ( (  char_dash_i32888 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp75 ( ( (  char_dash_i32888 ) ( (  c1571 ) ) ) , ( (  char_dash_i32888 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_342   parse_dash_digit951 (    char  c1574 ) {
    if ( ( (  is_dash_digit950 ) ( (  c1574 ) ) ) ) {
        return ( ( Maybe_342_Just ) ( (  op_dash_sub83 ( ( (  char_dash_i32888 ) ( (  c1574 ) ) ) , ( (  char_dash_i32888 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_342) { .tag = Maybe_342_None_t } );
    }
}

static  struct Maybe_688   sequence_dash_maybe953 (    char  e1580 ,    struct Maybe_688  b1582 ) {
    struct Maybe_688  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_688_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    else if ( dref1583.tag == Maybe_688_Just_t ) {
        struct Maybe_342  dref1585 = ( (  parse_dash_digit951 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_342_None_t ) {
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
        else if ( dref1585.tag == Maybe_342_Just_t ) {
            return ( ( Maybe_688_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_688_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_342_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_688   parse_dash_int952 (    struct TakeWhile_487  s1577 ) {
    struct TakeWhile_487  cs1587 = ( (  chars880 ) ( (  s1577 ) ) );
    struct Maybe_311  dref1588 = ( (  head738 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_311_Just_t ) {
        return ( (  reduce687 ) ( (  cs1587 ) ,  ( ( Maybe_688_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe953 ) ) );
    }
    else if ( dref1588.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
}

static  struct Maybe_688   sequence_dash_maybe955 (    char  e1580 ,    struct Maybe_688  b1582 ) {
    struct Maybe_688  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_688_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    else if ( dref1583.tag == Maybe_688_Just_t ) {
        struct Maybe_342  dref1585 = ( (  parse_dash_digit951 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_342_None_t ) {
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
        else if ( dref1585.tag == Maybe_342_Just_t ) {
            return ( ( Maybe_688_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_688_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_342_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_688   parse_dash_int954 (    struct TakeWhile_496  s1577 ) {
    struct TakeWhile_496  cs1587 = ( (  chars881 ) ( (  s1577 ) ) );
    struct Maybe_311  dref1588 = ( (  head742 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_311_Just_t ) {
        return ( (  reduce696 ) ( (  cs1587 ) ,  ( ( Maybe_688_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe955 ) ) );
    }
    else if ( dref1588.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr956 (    struct List_280 *  list1593 ,    size_t  i1595 ) {
    if ( ( (  cmp9 ( (  i1595 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1595 ) , ( ( * (  list1593 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1595 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1593 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr914 ) ( ( ( * (  list1593 ) ) .f_elements ) ,  (  i1595 ) ) );
}

static  struct List_3   get957 (    struct List_280 *  list1603 ,    size_t  i1605 ) {
    return ( * ( (  get_dash_ptr956 ) ( (  list1603 ) ,  (  i1605 ) ) ) );
}

static  struct Maybe_311   try_dash_get958 (    struct List_3 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    return ( ( Maybe_311_Just ) ( ( (  get7 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  struct Maybe_328   try_dash_get959 (    struct List_280 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
    return ( ( Maybe_328_Just ) ( ( (  get957 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  enum Unit_13   set960 (    struct List_280 *  list1613 ,    size_t  i1615 ,    struct List_3  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set921 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set961 (    struct List_3 *  list1613 ,    size_t  i1615 ,    char  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set922 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_280   mk962 (    enum CAllocator_4  al1623 ) {
    struct Slice_279  elements1624 = ( (  empty912 ) ( ) );
    return ( (struct List_280) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk963 (    enum CAllocator_4  al1623 ) {
    struct Slice_5  elements1624 = ( (  empty913 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free964 (    struct List_3 *  list1627 ) {
    ( (  free938 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free965 (    struct List_280 *  list1627 ) {
    ( (  free937 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam532 (   struct env532 env ,    struct Tuple2_361  dref1635 ) {
    return ( (  set921 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full546 (   struct env546 env ,    struct List_280 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate934 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_279  new_dash_slice1634 = ( (  allocate934 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env532 envinst532 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each531 ) ( ( (  zip466 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv532){ .fun = lam532, .env = envinst532 } ) ) );
            ( (  free937 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam536 (   struct env536 env ,    struct Tuple2_367  dref1635 ) {
    return ( (  set922 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full319 (   struct env319 env ,    struct List_3 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate935 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1634 = ( (  allocate935 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env536 envinst536 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each535 ) ( ( (  zip467 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv536){ .fun = lam536, .env = envinst536 } ) ) );
            ( (  free938 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add545 (   struct env545 env ,    struct List_280 *  list1640 ,    struct List_3  elem1642 ) {
    struct funenv546  temp966 = ( (struct funenv546){ .fun = grow_dash_if_dash_full546, .env =  env.envinst546  } );
    ( temp966.fun ( temp966.env ,  (  list1640 ) ) );
    ( (  set921 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add318 (   struct env318 env ,    struct List_3 *  list1640 ,    char  elem1642 ) {
    struct funenv319  temp967 = ( (struct funenv319){ .fun = grow_dash_if_dash_full319, .env =  env.envinst319  } );
    ( temp967.fun ( temp967.env ,  (  list1640 ) ) );
    ( (  set922 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env968 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env545 envinst545;
    struct env546 envinst546;
};

static  enum Unit_13   insert968 (   struct env968 env ,    struct List_280 *  list1645 ,    size_t  i1647 ,    struct List_3  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv545  temp969 = ( (struct funenv545){ .fun = add545, .env =  env.envinst545  } );
        ( temp969.fun ( temp969.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv546  temp970 = ( (struct funenv546){ .fun = grow_dash_if_dash_full546, .env =  env.envinst546  } );
    ( temp970.fun ( temp970.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set921 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get957 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set921 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env971 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env318 envinst318;
    struct env319 envinst319;
};

static  enum Unit_13   insert971 (   struct env971 env ,    struct List_3 *  list1645 ,    size_t  i1647 ,    char  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv318  temp972 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
        ( temp972.fun ( temp972.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv319  temp973 = ( (struct funenv319){ .fun = grow_dash_if_dash_full319, .env =  env.envinst319  } );
    ( temp973.fun ( temp973.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set922 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set922 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env974 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1630;
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

static  enum Unit_13   lam573 (   struct env573 env ,    struct Tuple2_361  dref1656 ) {
    return ( (  set960 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove974 (   struct env974 env ,    struct List_280 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env573 envinst573 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each572 ) ( ( (  drop369 ) ( ( (  zip468 ) ( ( * (  list1653 ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv573){ .fun = lam573, .env = envinst573 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free937 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty912 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_279  new_dash_slice1661 = ( (  allocate934 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to925 ) ( ( (  subslice283 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free937 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
    return ( Unit_13_Unit );
}

struct env975 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1630;
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

static  enum Unit_13   lam581 (   struct env581 env ,    struct Tuple2_367  dref1656 ) {
    return ( (  set961 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove975 (   struct env975 env ,    struct List_3 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env581 envinst581 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each580 ) ( ( (  drop371 ) ( ( (  zip469 ) ( ( * (  list1653 ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv581){ .fun = lam581, .env = envinst581 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free938 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty913 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_5  new_dash_slice1661 = ( (  allocate935 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to926 ) ( ( (  subslice306 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free938 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
    return ( Unit_13_Unit );
}

struct funenv975 {
    enum Unit_13  (*fun) (  struct env975  ,    struct List_3 *  ,    size_t  );
    struct env975 env;
};

struct env976 {
    ;
    ;
    ;
    ;
    struct env975 envinst975;
    ;
    ;
};

static  enum Unit_13   pop976 (   struct env976 env ,    struct List_3 *  list1675 ) {
    if ( (  eq45 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic898 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv975  temp977 = ( (struct funenv975){ .fun = remove975, .env =  env.envinst975  } );
    return ( temp977.fun ( temp977.env ,  (  list1675 ) ,  (  op_dash_sub94 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam540 (   struct env540 env ,    char  x1685 ) {
    struct funenv318  temp978 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp978.fun ( temp978.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all317 (   struct env317 env ,    struct List_3 *  list1681 ,    struct DynStr_131  it1683 ) {
    struct env540 envinst540 = {
        .list1681 =  list1681 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each539 ) ( (  it1683 ) ,  ( (struct funenv540){ .fun = lam540, .env = envinst540 } ) ) );
    return ( Unit_13_Unit );
}

struct env979 {
    ;
    struct env545 envinst545;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam544 (   struct env544 env ,    struct List_3  x1685 ) {
    struct funenv545  temp980 = ( (struct funenv545){ .fun = add545, .env =  env.envinst545  } );
    return ( temp980.fun ( temp980.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all979 (   struct env979 env ,    struct List_280 *  list1681 ,    struct Map_313  it1683 ) {
    struct env544 envinst544 = {
        .list1681 =  list1681 ,
        .envinst545 = env.envinst545 ,
    };
    ( (  for_dash_each543 ) ( (  it1683 ) ,  ( (struct funenv544){ .fun = lam544, .env = envinst544 } ) ) );
    return ( Unit_13_Unit );
}

struct env981 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam585 (   struct env585 env ,    char  x1685 ) {
    struct funenv318  temp982 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp982.fun ( temp982.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all981 (   struct env981 env ,    struct List_3 *  list1681 ,    struct List_3 *  it1683 ) {
    struct env585 envinst585 = {
        .list1681 =  list1681 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each584 ) ( (  it1683 ) ,  ( (struct funenv585){ .fun = lam585, .env = envinst585 } ) ) );
    return ( Unit_13_Unit );
}

struct env983 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam589 (   struct env589 env ,    char  x1685 ) {
    struct funenv318  temp984 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp984.fun ( temp984.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all983 (   struct env983 env ,    struct List_3 *  list1681 ,    struct Slice_5  it1683 ) {
    struct env589 envinst589 = {
        .list1681 =  list1681 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each588 ) ( (  it1683 ) ,  ( (struct funenv589){ .fun = lam589, .env = envinst589 } ) ) );
    return ( Unit_13_Unit );
}

struct env985 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam593 (   struct env593 env ,    char  x1685 ) {
    struct funenv318  temp986 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp986.fun ( temp986.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all985 (   struct env985 env ,    struct List_3 *  list1681 ,    struct TakeWhile_489  it1683 ) {
    struct env593 envinst593 = {
        .list1681 =  list1681 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each592 ) ( (  it1683 ) ,  ( (struct funenv593){ .fun = lam593, .env = envinst593 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim987 (    struct List_3 *  l1688 ,    size_t  new_dash_count1690 ) {
    (*  l1688 ) .f_count = (  new_dash_count1690 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list316 (   struct env316 env ,    struct DynStr_131  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_3  temp988 = ( (  mk963 ) ( (  al1695 ) ) );
    struct List_3 *  l1696 = ( &temp988 );
    struct funenv317  temp989 = ( (struct funenv317){ .fun = add_dash_all317, .env =  env.envinst317  } );
    ( temp989.fun ( temp989.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

struct funenv979 {
    enum Unit_13  (*fun) (  struct env979  ,    struct List_280 *  ,    struct Map_313  );
    struct env979 env;
};

struct env990 {
    ;
    ;
    ;
    ;
    struct env979 envinst979;
    ;
};

static  struct List_280   to_dash_list990 (   struct env990 env ,    struct Map_313  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_280  temp991 = ( (  mk962 ) ( (  al1695 ) ) );
    struct List_280 *  l1696 = ( &temp991 );
    struct funenv979  temp992 = ( (struct funenv979){ .fun = add_dash_all979, .env =  env.envinst979  } );
    ( temp992.fun ( temp992.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

static  struct Slice_5   to_dash_slice993 (    struct List_3  l1699 ) {
    char *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct Slice_279   to_dash_slice994 (    struct List_280  l1699 ) {
    struct List_3 *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_279) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct SliceAddressIter_610   addresses995 (    struct List_280  l1703 ) {
    return ( (  addresses924 ) ( ( (  to_dash_slice994 ) ( (  l1703 ) ) ) ) );
}

static  size_t   size996 (    struct List_3 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   size997 (    struct List_280 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   clamp_dash_uint998 (    int32_t  self1724 ) {
    if ( (  cmp75 ( (  self1724 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size272 ) ( ( (uint32_t ) (  self1724 ) ) ) );
    }
}

static  struct Maybe_907   hex_dash_digit999 (    char  c1734 ) {
    if ( ( (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_907_Just ) ( (  op_dash_sub92 ( ( (  char_dash_u8889 ) ( (  c1734 ) ) ) , ( (  char_dash_u8889 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_907_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8889 ) ( (  c1734 ) ) ) , ( (  char_dash_u8889 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp892 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_907_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8889 ) ( (  c1734 ) ) ) , ( (  char_dash_u8889 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_907) { .tag = Maybe_907_None_t } );
}

static  uint32_t   lam1001 (    char  c1739 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64275 ) ( ( (  or_dash_fail906 ) ( ( (  hex_dash_digit999 ) ( (  c1739 ) ) ) ,  ( ( StrConcat_808_StrConcat ) ( ( ( StrConcat_809_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1739 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1002 (    uint32_t  elem1741 ,    uint32_t  b1743 ) {
    return (  op_dash_add87 ( (  op_dash_mul89 ( (  b1743 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1741 ) ) );
}

static  uint32_t   from_dash_hex1000 (    const char*  arr1737 ) {
    return ( (  reduce685 ) ( ( (  map348 ) ( (  arr1737 ) ,  (  lam1001 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1002 ) ) );
}

static  struct Maybe_265   get1003 (    const char*  s1777 ) {
    return ( (  from_dash_nullable_dash_c_dash_str264 ) ( ( ( getenv ) ( (  s1777 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1004 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1005 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1006 (    uint32_t  x1754 ,    uint32_t  y1756 ) {
    uint32_t  x1757 = (  op_dash_add87 ( (  x1754 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1758 = (  op_dash_add87 ( (  y1756 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str867 ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_869_StrConcat ) ( ( ( StrConcat_870_StrConcat ) ( ( ( StrConcat_790_StrConcat ) ( ( "\x1b[" ) ,  (  y1758 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1757 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
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
    struct Winsize_177  temp1010 = ( ( (  zeroed233 ) ( ) ) );
    struct Winsize_177 *  ws1762 = ( &temp1010 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno109 ) ( ) ) ,  ( (  tiocgwinsz125 ) ( ) ) ,  (  ws1762 ) ) ) , (  op_dash_neg86 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1009_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1009_Tuple2 ) ( ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1011 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1012 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_623   query_dash_palette1013 (  ) {
    struct Maybe_265  colorterm1778 = ( (  get1003 ) ( ( "COLORTERM" ) ) );
    struct Maybe_265  dref1779 = (  colorterm1778 );
    if ( dref1779.tag == Maybe_265_Just_t ) {
        if ( ( (  eq891 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq891 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_623_PaletteRGB );
        }
    }
    else if ( dref1779.tag == Maybe_265_None_t ) {
    }
    struct Maybe_265  dref1781 = ( (  get1003 ) ( ( "TERM" ) ) );
    if ( dref1781.tag == Maybe_265_Just_t ) {
        if ( (  eq891 ( ( dref1781 .stuff .Maybe_265_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_623_Palette8 );
        }
    }
    else if ( dref1781.tag == Maybe_265_None_t ) {
    }
    return ( ColorPalette_623_Palette16 );
}

static  enum Unit_13   set_dash_fg81014 (    enum Color8_55  color1797 ) {
    enum Color8_55  dref1798 = (  color1797 );
    switch (  dref1798 ) {
        case Color8_55_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_55_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_55_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_55_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_55_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_55_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_55_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_55_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg161015 (    enum Color16_56  color1801 ) {
    enum Color16_56  dref1802 = (  color1801 );
    switch (  dref1802 ) {
        case Color16_56_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_56_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_56_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_56_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_56_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_56_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_56_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_56_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_56_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_56_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_56_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_56_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_56_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_56_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_56_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_56_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg81016 (    enum Color8_55  color1805 ) {
    enum Color8_55  dref1806 = (  color1805 );
    switch (  dref1806 ) {
        case Color8_55_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_55_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_55_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_55_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_55_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_55_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_55_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_55_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg161017 (    enum Color16_56  color1809 ) {
    enum Color16_56  dref1810 = (  color1809 );
    switch (  dref1810 ) {
        case Color16_56_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_56_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_56_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_56_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_56_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_56_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_56_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_56_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_56_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_56_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_56_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_56_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_56_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_56_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_56_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_56_BrightWhite16 : {
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

static  enum Unit_13   set_dash_fg2561020 (    uint8_t  color1815 ) {
    ( (  print_dash_str865 ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1815 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561021 (    uint8_t  color1818 ) {
    ( (  print_dash_str865 ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1818 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1022 (    struct RGB_57  c1838 ) {
    ( (  print_dash_str855 ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_858_StrConcat ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1838 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1023 (    struct RGB_57  c1841 ) {
    ( (  print_dash_str855 ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_858_StrConcat ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1841 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1024 (    struct Color_54  c1859 ) {
    struct Color_54  dref1860 = (  c1859 );
    if ( dref1860.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1011 ) ( ) );
    }
    else if ( dref1860.tag == Color_54_Color8_t ) {
        ( (  set_dash_fg81014 ) ( ( dref1860 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color16_t ) {
        ( (  set_dash_fg161015 ) ( ( dref1860 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color256_t ) {
        ( (  set_dash_fg2561020 ) ( ( dref1860 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1022 ) ( ( dref1860 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1025 (    struct Color_54  c1867 ) {
    struct Color_54  dref1868 = (  c1867 );
    if ( dref1868.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1012 ) ( ) );
    }
    else if ( dref1868.tag == Color_54_Color8_t ) {
        ( (  set_dash_bg81016 ) ( ( dref1868 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color16_t ) {
        ( (  set_dash_bg161017 ) ( ( dref1868 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color256_t ) {
        ( (  set_dash_bg2561021 ) ( ( dref1868 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1023 ) ( ( dref1868 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1026 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam550 (   struct env550 env ,    char  c1924 ) {
    struct funenv318  temp1027 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp1027.fun ( temp1027.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1026 (   struct env1026 env ,    struct StrBuilder_551 *  builder1920 ,    const char*  s1922 ) {
    struct env550 envinst550 = {
        .builder1920 =  builder1920 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each549 ) ( ( (  chars763 ) ( (  s1922 ) ) ) ,  ( (struct funenv550){ .fun = lam550, .env = envinst550 } ) ) );
    return ( Unit_13_Unit );
}

struct env1028 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam597 (   struct env597 env ,    char  c1924 ) {
    struct funenv318  temp1029 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp1029.fun ( temp1029.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1028 (   struct env1028 env ,    struct StrBuilder_551 *  builder1920 ,    struct TakeWhile_491  s1922 ) {
    struct env597 envinst597 = {
        .builder1920 =  builder1920 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each596 ) ( ( (  chars882 ) ( (  s1922 ) ) ) ,  ( (struct funenv597){ .fun = lam597, .env = envinst597 } ) ) );
    return ( Unit_13_Unit );
}

struct env1030 {
    ;
    struct env318 envinst318;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam601 (   struct env601 env ,    char  c1924 ) {
    struct funenv318  temp1031 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    return ( temp1031.fun ( temp1031.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1030 (   struct env1030 env ,    struct StrBuilder_551 *  builder1920 ,    struct TakeWhile_498  s1922 ) {
    struct env601 envinst601 = {
        .builder1920 =  builder1920 ,
        .envinst318 = env.envinst318 ,
    };
    ( (  for_dash_each600 ) ( ( (  chars883 ) ( (  s1922 ) ) ) ,  ( (struct funenv601){ .fun = lam601, .env = envinst601 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char606 (   struct env606 env ,    struct StrBuilder_551 *  builder1927 ,    char  c1929 ) {
    struct funenv318  temp1032 = ( (struct funenv318){ .fun = add318, .env =  env.envinst318  } );
    ( temp1032.fun ( temp1032.env ,  ( & ( ( * (  builder1927 ) ) .f_chars ) ) ,  (  c1929 ) ) );
    return ( Unit_13_Unit );
}

struct funenv976 {
    enum Unit_13  (*fun) (  struct env976  ,    struct List_3 *  );
    struct env976 env;
};

struct env1033 {
    ;
    struct env976 envinst976;
    ;
};

static  enum Unit_13   pop1033 (   struct env1033 env ,    struct StrBuilder_551 *  sb1937 ) {
    struct funenv976  temp1034 = ( (struct funenv976){ .fun = pop976, .env =  env.envinst976  } );
    return ( temp1034.fun ( temp1034.env ,  ( & ( ( * (  sb1937 ) ) .f_chars ) ) ) );
}

static  size_t   count1035 (    struct StrBuilder_551 *  sb1940 ) {
    return ( ( ( * (  sb1940 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_551   mk1036 (    enum CAllocator_4  al1943 ) {
    return ( (struct StrBuilder_551) { .f_chars = ( (  mk963 ) ( (  al1943 ) ) ) } );
}

static  enum Unit_13   free1037 (    struct StrBuilder_551 *  builder1949 ) {
    ( (  free964 ) ( ( & ( ( * (  builder1949 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1026 {
    enum Unit_13  (*fun) (  struct env1026  ,    struct StrBuilder_551 *  ,    const char*  );
    struct env1026 env;
};

struct env1038 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1026 envinst1026;
    ;
    ;
    struct env606 envinst606;
};

static  const char*   mk_dash_const_dash_str1038 (   struct env1038 env ,    const char*  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_551  temp1039 = ( (  mk1036 ) ( (  al1965 ) ) );
    struct StrBuilder_551 *  sb1966 = ( &temp1039 );
    struct funenv1026  temp1040 = ( (struct funenv1026){ .fun = write1026, .env =  env.envinst1026  } );
    ( temp1040.fun ( temp1040.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv606  temp1041 = ( (struct funenv606){ .fun = write_dash_char606, .env =  env.envinst606  } );
    ( temp1041.fun ( temp1041.env ,  (  sb1966 ) ,  ( (  nullchar334 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str781 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1028 {
    enum Unit_13  (*fun) (  struct env1028  ,    struct StrBuilder_551 *  ,    struct TakeWhile_491  );
    struct env1028 env;
};

struct env1042 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1028 envinst1028;
    ;
    struct env606 envinst606;
};

static  const char*   mk_dash_const_dash_str1042 (   struct env1042 env ,    struct TakeWhile_491  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_551  temp1043 = ( (  mk1036 ) ( (  al1965 ) ) );
    struct StrBuilder_551 *  sb1966 = ( &temp1043 );
    struct funenv1028  temp1044 = ( (struct funenv1028){ .fun = write1028, .env =  env.envinst1028  } );
    ( temp1044.fun ( temp1044.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv606  temp1045 = ( (struct funenv606){ .fun = write_dash_char606, .env =  env.envinst606  } );
    ( temp1045.fun ( temp1045.env ,  (  sb1966 ) ,  ( (  nullchar334 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str781 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1030 {
    enum Unit_13  (*fun) (  struct env1030  ,    struct StrBuilder_551 *  ,    struct TakeWhile_498  );
    struct env1030 env;
};

struct env1046 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1030 envinst1030;
    ;
    struct env606 envinst606;
};

static  const char*   mk_dash_const_dash_str1046 (   struct env1046 env ,    struct TakeWhile_498  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_551  temp1047 = ( (  mk1036 ) ( (  al1965 ) ) );
    struct StrBuilder_551 *  sb1966 = ( &temp1047 );
    struct funenv1030  temp1048 = ( (struct funenv1030){ .fun = write1030, .env =  env.envinst1030  } );
    ( temp1048.fun ( temp1048.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv606  temp1049 = ( (struct funenv606){ .fun = write_dash_char606, .env =  env.envinst606  } );
    ( temp1049.fun ( temp1049.env ,  (  sb1966 ) ,  ( (  nullchar334 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str781 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  uint32_t   fst1050 (    struct Tuple2_1009  dref2005 ) {
    return ( dref2005 .field0 );
}

static  uint32_t   snd1051 (    struct Tuple2_1009  dref2008 ) {
    return ( dref2008 .field1 );
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

static  bool   is_dash_just1052 (    struct Maybe_1053  m2012 ) {
    struct Maybe_1053  dref2013 = (  m2012 );
    if ( dref2013.tag == Maybe_1053_None_t ) {
        return ( false );
    }
    else if ( dref2013.tag == Maybe_1053_Just_t ) {
        return ( true );
    }
}

struct Visual_1057 {
    int32_t  field0;
};

static struct Visual_1057 Visual_1057_Visual (  int32_t  field0 ) {
    return ( struct Visual_1057 ) { .field0 = field0 };
};

struct Editor_1056 {
    bool  f_running;
    struct Cursor_756  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1057  f_goal_dash_x;
    struct List_280  f_current_dash_file;
    struct Maybe_265  f_filename;
    struct Mode_775  f_mode;
    struct Maybe_1053  f_anim;
    struct Maybe_911  f_selected;
};

struct env1055 {
    ;
    struct Editor_1056 *  ed2788;
    ;
};

struct funenv1055 {
    struct Maybe_311  (*fun) (  struct env1055  ,    struct List_3  );
    struct env1055 env;
};

static  struct Maybe_311   and_dash_maybe1054 (    struct Maybe_328  m2016 ,   struct funenv1055  fun2018 ) {
    struct Maybe_328  dref2019 = (  m2016 );
    if ( dref2019.tag == Maybe_328_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else if ( dref2019.tag == Maybe_328_Just_t ) {
        struct funenv1055  temp1058 = (  fun2018 );
        return ( temp1058.fun ( temp1058.env ,  ( dref2019 .stuff .Maybe_328_Just_s .field0 ) ) );
    }
}

static  struct Maybe_50   fmap_dash_maybe1059 (    struct Maybe_311  x2023 ,    bool (*  fun2025 )(    char  ) ) {
    struct Maybe_311  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref2026.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_311_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_366   fmap_dash_maybe1060 (    struct Maybe_311  x2023 ,    struct Tuple2_367 (*  fun2025 )(    char  ) ) {
    struct Maybe_311  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_366) { .tag = Maybe_366_None_t } );
    }
    else if ( dref2026.tag == Maybe_311_Just_t ) {
        return ( ( Maybe_366_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_311_Just_s .field0 ) ) ) ) );
    }
}

static  int32_t   maybe1061 (    struct Maybe_911  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_756  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_911  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_911_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_911_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1062 (    struct Maybe_911  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_756  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_911  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_911_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_911_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1063 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1064 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1065 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1066 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1067 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1068 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1069 (    struct Maybe_311  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1070 (    struct Maybe_311  x2030 ,   struct funenv326  fun2032 ,    int32_t  default2034 ) {
    struct funenv326  temp1071 = (  fun2032 );
    return ( {  struct Maybe_311  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_311_Just_t ? ( temp1071.fun ( temp1071.env ,  ( dref2035 .stuff .Maybe_311_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  struct timespec   now1072 (  ) {
    struct timespec  temp1073 = ( (  undefined133 ) ( ) );
    struct timespec *  t2150 = ( &temp1073 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  t2150 ) ) );
    return ( * (  t2150 ) );
}

struct Duration_1075 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1074 (    struct Duration_1075  l2154 ,    struct Duration_1075  r2156 ) {
    enum Ordering_10  scmp2157 = ( (  cmp74 ) ( ( (  l2154 ) .f_secs ) ,  ( (  r2156 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2157 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2157 );
    }
    return ( (  cmp74 ) ( ( (  l2154 ) .f_nsecs ) ,  ( (  r2156 ) .f_nsecs ) ) );
}

static  struct Duration_1075   diff1076 (    struct timespec  l2160 ,    struct timespec  r2162 ) {
    int64_t  secdiff2163 = (  op_dash_sub79 ( ( (  l2160 ) .tv_sec ) , ( (  r2162 ) .tv_sec ) ) );
    int64_t  nsdiff2164 = (  op_dash_sub79 ( ( (  l2160 ) .tv_nsec ) , ( (  r2162 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2165 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp74 ( (  nsdiff2164 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1075) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  op_dash_neg81 ( (  nsdiff2164 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1075) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2164 ) } );
            } else {
                return ( (struct Duration_1075) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add78 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1075) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  nsdiff2164 ) } );
        } else {
            return ( (struct Duration_1075) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub79 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
        }
    }
}

static  struct Duration_1075   duration_dash_from_dash_ns1077 (    int64_t  ns2168 ) {
    int64_t  ns_dash_in_dash_secs2169 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1075) { .f_secs = (  op_dash_div80 ( (  ns2168 ) , (  ns_dash_in_dash_secs2169 ) ) ) , .f_nsecs = ( (  mod754 ) ( (  ns2168 ) ,  (  ns_dash_in_dash_secs2169 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1078 (    struct Duration_1075  d2180 ) {
    int64_t  ns_dash_in_dash_secs2181 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add78 ( (  op_dash_mul32 ( ( (  d2180 ) .f_secs ) , (  ns_dash_in_dash_secs2181 ) ) ) , ( (  d2180 ) .f_nsecs ) ) );
}

static  struct Scanner_300   mk1079 (    struct DynStr_131  s2191 ) {
    return ( (struct Scanner_300) { .f_s = ( (  chars788 ) ( (  s2191 ) ) ) } );
}

static  struct Maybe_688   scan_dash_int1080 (    struct Scanner_300 *  sc2194 ) {
    struct TakeWhile_487  digit_dash_chars2195 = ( (  take_dash_while508 ) ( (  sc2194 ) ,  (  is_dash_digit950 ) ) );
    if ( ( (  null745 ) ( (  digit_dash_chars2195 ) ) ) ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    ( (  drop_prime_747 ) ( (  sc2194 ) ,  ( (  count714 ) ( (  digit_dash_chars2195 ) ) ) ) );
    return ( (  parse_dash_int952 ) ( (  digit_dash_chars2195 ) ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1081 (  ) {
    struct Termios_136  temp1082 = ( (  undefined135 ) ( ) );
    struct Termios_136 *  orig_dash_termios2202 = ( &temp1082 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  orig_dash_termios2202 ) ) ) ) );
    struct Termios_136  raw2203 = ( * (  orig_dash_termios2202 ) );
    raw2203 .f_c_dash_lflag = ( (  u32_dash_and752 ) ( ( (  raw2203 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg753 ) ( ( (  u32_dash_ors749 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_iflag = ( (  u32_dash_and752 ) ( ( (  raw2203 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg753 ) ( ( (  u32_dash_ors750 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  brkint115 ) ( ) ) , ( (  icrnl116 ) ( ) ) , ( (  inpck117 ) ( ) ) , ( (  istrip118 ) ( ) ) , ( ( (  ixon119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_oflag = ( (  u32_dash_and752 ) ( ( (  raw2203 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg753 ) ( ( (  u32_dash_ors751 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( ( (  opost120 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_cflag = ( (  u32_dash_or748 ) ( ( (  raw2203 ) .f_c_dash_cflag ) ,  ( (  cs8121 ) ( ) ) ) );
    ( (  set944 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vmin122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set944 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vtime123 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( ( & (  raw2203 ) ) ) ) ) );
    return ( * (  orig_dash_termios2202 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1083 (    struct Termios_136 *  og_dash_termios2206 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  og_dash_termios2206 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_311   read_dash_byte1084 (    int32_t  timeout_dash_ms2210 ) {
    struct Pollfd_219  pfd2211 = ( (struct Pollfd_219) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp75 ( ( ( poll ) ( ( (  cast_dash_ptr218 ) ( ( & (  pfd2211 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2210 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    char  c2212 = ( ( (  zeroed227 ) ( ) ) );
    if ( (  cmp75 ( ( ( read ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr208 ) ( ( & (  c2212 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    return ( ( Maybe_311_Just ) ( (  c2212 ) ) );
}

static  enum Unit_13   flush_dash_stdout1085 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr259 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1086 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1087 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1089 {
    ;
    ;
    ;
    bool *  should_dash_resize2216;
    ;
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

struct env1090 {
    bool *  should_dash_resize2216;
};

struct funenv1090 {
    enum Unit_13  (*fun) (  struct env1090  ,    int32_t  );
    struct env1090 env;
};

struct funenv1090  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1091 ) {
    struct funenv1090  temp1092 = _intr_sigarr [  __intr__sig1091 ];
    temp1092.fun ( temp1092.env ,  __intr__sig1091 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1093 ,   struct funenv1090  __intr__fun1094 ) {
    _intr_sigarr [  __intr__sig1093 ] =  __intr__fun1094;
    signal(  __intr__sig1093 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1090 (   struct env1090 env ,    int32_t  dref2223 ) {
    (* env.should_dash_resize2216 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_622   mk1089 (   struct env1089 env ) {
    struct Termios_136  og_dash_termios2218 = ( (  enable_dash_raw_dash_mode1081 ) ( ) );
    ( (  hide_dash_cursor1005 ) ( ) );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  clear_dash_screen1019 ) ( ) );
    ( (  enable_dash_mouse1086 ) ( ) );
    ( (  flush_dash_stdout1085 ) ( ) );
    enum ColorPalette_623  palette2219 = ( (  query_dash_palette1013 ) ( ) );
    struct Tuple2_1009  dims2220 = ( (  get_dash_dimensions1008 ) ( ) );
    uint32_t  fps2221 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2222 = ( (  now1072 ) ( ) );
    struct env1090 envinst1090 = {
        .should_dash_resize2216 = env.should_dash_resize2216 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1090){ .fun = lam1090, .env = envinst1090 } ) ) );
    return ( (struct Tui_622) { .f_width = ( (  fst1050 ) ( (  dims2220 ) ) ) , .f_height = ( (  snd1051 ) ( (  dims2220 ) ) ) , .f_target_dash_fps = (  fps2221 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2222 ) , .f_fps_dash_ts = (  last_dash_sync2222 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2218 ) , .f_palette = (  palette2219 ) } );
}

static  enum Unit_13   sync1095 (    struct Tui_622 *  tui2226 ) {
    if ( (  eq42 ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2227 = (  op_dash_div80 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size272 ) ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1096 = ( (  undefined133 ) ( ) );
    struct timespec *  now2228 = ( &temp1096 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  now2228 ) ) );
    int64_t  elapsed_dash_ns2229 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_sec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_nsec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2230 = (  op_dash_sub79 ( (  frame_dash_ns2227 ) , (  elapsed_dash_ns2229 ) ) );
    if ( (  cmp74 ( (  sleep_dash_ns2230 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1097 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2230 ) } );
        struct timespec *  ts2231 = ( &temp1097 );
        ( ( nanosleep ) ( (  ts2231 ) ,  ( (  null_dash_ptr261 ) ( ) ) ) );
    }
    struct timespec  temp1098 = ( (  undefined133 ) ( ) );
    struct timespec *  last_dash_sync2232 = ( &temp1098 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  last_dash_sync2232 ) ) );
    (*  tui2226 ) .f_last_dash_sync = ( * (  last_dash_sync2232 ) );
    (*  tui2226 ) .f_fps_dash_count = (  op_dash_add87 ( ( ( * (  tui2226 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2233 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2226 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div80 ( (  op_dash_sub79 ( ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2226 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp74 ( (  fps_dash_elapsed_dash_ms2233 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2226 ) .f_actual_dash_fps = ( ( * (  tui2226 ) ) .f_fps_dash_count );
        (*  tui2226 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2226 ) .f_fps_dash_ts = ( ( * (  tui2226 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1099 (    struct Tui_622 *  tui2236 ) {
    ( (  disable_dash_mouse1087 ) ( ) );
    ( (  show_dash_cursor1004 ) ( ) );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  clear_dash_screen1019 ) ( ) );
    ( (  reset_dash_cursor_dash_position1007 ) ( ) );
    ( (  disable_dash_raw_dash_mode1083 ) ( ( & ( ( * (  tui2236 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1085 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   btn_dash_to_dash_mouse_dash_button1100 (    int64_t  btn2243 ) {
    return ( {  int32_t  dref2244 = ( (  i64_dash_i32269 ) ( (  btn2243 ) ) ) ;  dref2244 == 0 ? ( MouseButton_144_MouseLeft ) :  dref2244 == 1 ? ( MouseButton_144_MouseMiddle ) :  dref2244 == 2 ? ( MouseButton_144_MouseRight ) :  dref2244 == 64 ? ( MouseButton_144_ScrollUp ) :  dref2244 == 65 ? ( MouseButton_144_ScrollDown ) : ( (  panic_prime_900 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1102 {
    enum {
        Maybe_1102_None_t,
        Maybe_1102_Just_t,
    } tag;
    union {
        struct {
            struct Key_527  field0;
        } Maybe_1102_Just_s;
    } stuff;
};

static struct Maybe_1102 Maybe_1102_Just (  struct Key_527  field0 ) {
    return ( struct Maybe_1102 ) { .tag = Maybe_1102_Just_t, .stuff = { .Maybe_1102_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1102   parse_dash_ss31101 (    char  c2247 ) {
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1102_Just ) ( ( (struct Key_527) { .tag = Key_527_F4_t } ) ) );
    }
    return ( (struct Maybe_1102) { .tag = Maybe_1102_None_t } );
}

static  struct Maybe_525   parse_dash_csi1103 (    struct DynStr_131  seq2250 ) {
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
    char  last2251 = (  elem_dash_get929 ( ( (  seq2250 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get929 ( ( (  seq2250 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_300  temp1104 = ( (  mk1079 ) ( ( (  substr336 ) ( (  seq2250 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2250 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_300 *  sc2252 = ( &temp1104 );
        struct Maybe_688  dref2253 = ( (  scan_dash_int1080 ) ( (  sc2252 ) ) );
        if ( dref2253.tag == Maybe_688_None_t ) {
            return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
        }
        else if ( dref2253.tag == Maybe_688_Just_t ) {
            ( (  next500 ) ( (  sc2252 ) ) );
            struct Maybe_688  dref2255 = ( (  scan_dash_int1080 ) ( (  sc2252 ) ) );
            if ( dref2255.tag == Maybe_688_None_t ) {
                return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
            }
            else if ( dref2255.tag == Maybe_688_Just_t ) {
                ( (  next500 ) ( (  sc2252 ) ) );
                struct Maybe_688  dref2257 = ( (  scan_dash_int1080 ) ( (  sc2252 ) ) );
                if ( dref2257.tag == Maybe_688_None_t ) {
                    return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
                }
                else if ( dref2257.tag == Maybe_688_Just_t ) {
                    return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Mouse ) ( ( (struct MouseEvent_528) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1100 ) ( ( dref2253 .stuff .Maybe_688_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2255 .stuff .Maybe_688_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2257 .stuff .Maybe_688_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Up_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Down_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Right_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Left_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Home_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
    if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_300  temp1105 = ( (  mk1079 ) ( (  seq2250 ) ) );
        struct Scanner_300 *  sc2259 = ( &temp1105 );
        struct Maybe_688  dref2260 = ( (  scan_dash_int1080 ) ( (  sc2259 ) ) );
        if ( dref2260.tag == Maybe_688_None_t ) {
            return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
        }
        else if ( dref2260.tag == Maybe_688_Just_t ) {
            return ( {  int32_t  dref2262 = ( (  i64_dash_i32269 ) ( ( dref2260 .stuff .Maybe_688_Just_s .field0 ) ) ) ;  dref2262 == 1 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Home_t } ) ) ) ) ) :  dref2262 == 2 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Insert_t } ) ) ) ) ) :  dref2262 == 3 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Delete_t } ) ) ) ) ) :  dref2262 == 4 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_End_t } ) ) ) ) ) :  dref2262 == 5 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_PageUp_t } ) ) ) ) ) :  dref2262 == 6 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_PageDown_t } ) ) ) ) ) :  dref2262 == 15 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F5_t } ) ) ) ) ) :  dref2262 == 17 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F6_t } ) ) ) ) ) :  dref2262 == 18 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F7_t } ) ) ) ) ) :  dref2262 == 19 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F8_t } ) ) ) ) ) :  dref2262 == 20 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F9_t } ) ) ) ) ) :  dref2262 == 21 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F10_t } ) ) ) ) ) :  dref2262 == 23 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F11_t } ) ) ) ) ) :  dref2262 == 24 ? ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_F12_t } ) ) ) ) ) : ( (struct Maybe_525) { .tag = Maybe_525_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
}

static  struct Maybe_525   read_dash_key1106 (  ) {
    char  temp1107 = ( (  undefined128 ) ( ) );
    char *  ch2264 = ( &temp1107 );
    struct Maybe_311  dref2265 = ( (  read_dash_byte1084 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2265.tag == Maybe_311_None_t ) {
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
    else if ( dref2265.tag == Maybe_311_Just_t ) {
        (*  ch2264 ) = ( dref2265 .stuff .Maybe_311_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp77 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2267 = ( (  i32_dash_char890 ) ( ( (  u32_dash_i32274 ) ( ( (  u32_dash_or748 ) ( ( (  i32_dash_u32266 ) ( ( (  char_dash_i32888 ) ( ( * (  ch2264 ) ) ) ) ) ) ,  ( (  from_dash_hex1000 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( ( Key_527_Ctrl ) ( (  letter2267 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp77 ( ( (  char_dash_u8889 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1106 ) ( ) );
        } else {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( ( Key_527_Char ) ( ( * (  ch2264 ) ) ) ) ) ) ) );
        }
    }
    char  temp1108 = ( (  undefined128 ) ( ) );
    char *  ch22268 = ( &temp1108 );
    struct Maybe_311  dref2269 = ( (  read_dash_byte1084 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2269.tag == Maybe_311_None_t ) {
        return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Escape_t } ) ) ) ) );
    }
    else if ( dref2269.tag == Maybe_311_Just_t ) {
        (*  ch22268 ) = ( dref2269 .stuff .Maybe_311_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_181  temp1109 = ( ( (  zeroed239 ) ( ) ) );
        struct Array_181 *  seq2271 = ( &temp1109 );
        int32_t  slen2272 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp75 ( (  slen2272 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1110 = ( (  undefined128 ) ( ) );
            char *  sc2273 = ( &temp1110 );
            struct Maybe_311  dref2274 = ( (  read_dash_byte1084 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2274.tag == Maybe_311_None_t ) {
                break;
            }
            else if ( dref2274.tag == Maybe_311_Just_t ) {
                (*  sc2273 ) = ( dref2274 .stuff .Maybe_311_Just_s .field0 );
            }
            ( (  set945 ) ( (  seq2271 ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ,  ( * (  sc2273 ) ) ) );
            slen2272 = (  op_dash_add82 ( (  slen2272 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp77 ( ( (  char_dash_u8889 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp77 ( ( (  char_dash_u8889 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1103 ) ( ( (struct DynStr_131) { .f_contents = ( (  subslice306 ) ( ( (  as_dash_slice946 ) ( (  seq2271 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1111 = ( (  undefined128 ) ( ) );
        char *  sc2276 = ( &temp1111 );
        struct Maybe_311  dref2277 = ( (  read_dash_byte1084 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2277.tag == Maybe_311_None_t ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Escape_t } ) ) ) ) );
        }
        else if ( dref2277.tag == Maybe_311_Just_t ) {
            (*  sc2276 ) = ( dref2277 .stuff .Maybe_311_Just_s .field0 );
        }
        struct Maybe_1102  dref2279 = ( (  parse_dash_ss31101 ) ( ( * (  sc2276 ) ) ) );
        if ( dref2279.tag == Maybe_1102_None_t ) {
            return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
        }
        else if ( dref2279.tag == Maybe_1102_Just_t ) {
            return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( dref2279 .stuff .Maybe_1102_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_525_Just ) ( ( ( InputEvent_526_Key ) ( ( (struct Key_527) { .tag = Key_527_Escape_t } ) ) ) ) );
}

struct env1112 {
    bool *  should_dash_resize2216;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1112 (   struct env1112 env ,    struct Tui_622 *  tui2283 ) {
    if ( ( ! ( * ( env.should_dash_resize2216 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2216 ) = ( false );
    struct Tuple2_1009  dim2284 = ( (  get_dash_dimensions1008 ) ( ) );
    uint32_t  w2285 = ( (  fst1050 ) ( (  dim2284 ) ) );
    uint32_t  h2286 = ( (  snd1051 ) ( (  dim2284 ) ) );
    (*  tui2283 ) .f_width = (  w2285 );
    (*  tui2283 ) .f_height = (  h2286 );
    return ( true );
}

static  struct Cell_53   lam1114 (    struct Cell_53  dref2304 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Cell_53   lam1115 (    struct Cell_53  dref2306 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Screen_621   mk_dash_screen1113 (    struct Tui_622 *  tui2300 ,    enum CAllocator_4  al2302 ) {
    struct Slice_557  cur2303 = ( (  allocate936 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map930 ) ( (  cur2303 ) ,  (  lam1114 ) ) );
    struct Slice_557  prev2305 = ( (  allocate936 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map931 ) ( (  prev2305 ) ,  (  lam1115 ) ) );
    return ( (struct Screen_621) { .f_current = (  cur2303 ) , .f_previous = (  prev2305 ) , .f_al = (  al2302 ) , .f_tui = (  tui2300 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1116 (    struct Screen_621 *  screen2309 ) {
    enum CAllocator_4  al2310 = ( ( * (  screen2309 ) ) .f_al );
    ( (  free941 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_current ) ) );
    ( (  free941 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_53   lam1118 (    struct Cell_53  dref2314 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1117 (    struct Screen_621 *  screen2313 ) {
    ( (  map932 ) ( ( ( * (  screen2313 ) ) .f_current ) ,  (  lam1118 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1120 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1119 (    struct RenderState_1120 *  rs2318 ,    struct Cell_53 *  c2320 ,    uint32_t  x2322 ,    uint32_t  y2324 ) {
    if ( ( ( !  eq42 ( (  x2322 ) , ( ( * (  rs2318 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2324 ) , ( ( * (  rs2318 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1006 ) ( (  x2322 ) ,  (  y2324 ) ) );
        (*  rs2318 ) .f_x = (  x2322 );
        (*  rs2318 ) .f_y = (  y2324 );
    }
    char  char2325 = ( ( * (  c2320 ) ) .f_c );
    struct Color_54  bg2326 = ( ( * (  c2320 ) ) .f_bg );
    if ( ( ( (  eq48 ( (  char2325 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq48 ( (  char2325 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq48 ( (  char2325 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2325 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2326 = ( ( Color_54_Color8 ) ( ( Color8_55_Red8 ) ) );
    }
    if ( ( !  eq59 ( ( ( * (  rs2318 ) ) .f_fg ) , ( ( * (  c2320 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1024 ) ( ( ( * (  c2320 ) ) .f_fg ) ) );
        (*  rs2318 ) .f_fg = ( ( * (  c2320 ) ) .f_fg );
    }
    if ( ( !  eq59 ( ( ( * (  rs2318 ) ) .f_bg ) , (  bg2326 ) ) ) ) {
        ( (  set_dash_bg1025 ) ( (  bg2326 ) ) );
        (*  rs2318 ) .f_bg = (  bg2326 );
    }
    ( (  print_dash_str28 ) ( (  char2325 ) ) );
    (*  rs2318 ) .f_x = (  op_dash_add87 ( ( ( * (  rs2318 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1121 (    struct Screen_621 *  screen2329 ) {
    int32_t  w2330 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2331 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1120  temp1122 = ( (struct RenderState_1120) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1120 *  rs2332 = ( &temp1122 );
    ( (  move_dash_cursor_dash_to1006 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_377  temp1123 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  h2331 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_342  __cond1124 =  next378 (&temp1123);
        if (  __cond1124 .tag == 0 ) {
            break;
        }
        int32_t  y2334 =  __cond1124 .stuff .Maybe_342_Just_s .field0;
        struct RangeIter_377  temp1125 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  w2330 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_342  __cond1126 =  next378 (&temp1125);
            if (  __cond1126 .tag == 0 ) {
                break;
            }
            int32_t  x2336 =  __cond1126 .stuff .Maybe_342_Just_s .field0;
            size_t  i2337 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2334 ) , (  w2330 ) ) ) , (  x2336 ) ) ) ) );
            struct Cell_53 *  cur2338 = ( (  get_dash_ptr915 ) ( ( ( * (  screen2329 ) ) .f_current ) ,  (  i2337 ) ) );
            struct Cell_53 *  prev2339 = ( (  get_dash_ptr915 ) ( ( ( * (  screen2329 ) ) .f_previous ) ,  (  i2337 ) ) );
            if ( ( ( !  eq52 ( (  cur2338 ) , (  prev2339 ) ) ) || ( ( * (  screen2329 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2332 ) .f_changes = (  op_dash_add87 ( ( ( * (  rs2332 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1119 ) ( (  rs2332 ) ,  (  cur2338 ) ,  ( (  i32_dash_u32266 ) ( (  x2336 ) ) ) ,  ( (  i32_dash_u32266 ) ( (  y2334 ) ) ) ) );
                (*  prev2339 ) = ( * (  cur2338 ) );
            }
        }
    }
    (*  screen2329 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1018 ) ( ) );
    ( (  flush_dash_stdout1085 ) ( ) );
    return ( ( * (  rs2332 ) ) .f_changes );
}

struct funenv1112 {
    bool  (*fun) (  struct env1112  ,    struct Tui_622 *  );
    struct env1112 env;
};

struct env1127 {
    ;
    ;
    struct env1112 envinst1112;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1127 (   struct env1127 env ,    struct Screen_621 *  screen2342 ) {
    struct Tui_622 *  tui2343 = ( ( * (  screen2342 ) ) .f_tui );
    struct funenv1112  temp1128 = ( (struct funenv1112){ .fun = update_dash_dimensions1112, .env =  env.envinst1112  } );
    if ( ( ! ( temp1128.fun ( temp1128.env ,  (  tui2343 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2342 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2344 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_width );
    uint32_t  h2345 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_height );
    size_t  nusz2346 = ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( (  w2344 ) , (  h2345 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2346 ) , ( ( ( * (  screen2342 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_621  nuscreen2347 = ( (  mk_dash_screen1113 ) ( (  tui2343 ) ,  ( ( * (  screen2342 ) ) .f_al ) ) );
    (*  screen2342 ) .f_current = ( (  nuscreen2347 ) .f_current );
    (*  screen2342 ) .f_previous = ( (  nuscreen2347 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1129 (    struct Screen_621 *  screen2350 ,    struct Color_54  c2352 ) {
    (*  screen2350 ) .f_default_dash_fg = (  c2352 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1130 (    struct Screen_621 *  screen2355 ,    struct Color_54  c2357 ) {
    (*  screen2355 ) .f_default_dash_bg = (  c2357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1131 (    struct Screen_621 *  screen2360 ,    struct Color_54  fg2362 ,    struct Color_54  bg2364 ) {
    (*  screen2360 ) .f_default_dash_fg = (  fg2362 );
    (*  screen2360 ) .f_default_dash_bg = (  bg2364 );
    return ( Unit_13_Unit );
}

static  struct Maybe_909   get_dash_cell_dash_ptr1132 (    struct Screen_621 *  screen2371 ,    int32_t  x2373 ,    int32_t  y2375 ) {
    int32_t  w2376 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2373 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  x2373 ) , (  w2376 ) ) != 0 ) ) ) {
        return ( (struct Maybe_909) { .tag = Maybe_909_None_t } );
    }
    if ( ( (  cmp75 ( (  y2375 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  y2375 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_909) { .tag = Maybe_909_None_t } );
    }
    size_t  i2377 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2375 ) , (  w2376 ) ) ) , (  x2373 ) ) ) ) );
    return ( ( Maybe_909_Just ) ( ( (  get_dash_ptr915 ) ( ( ( * (  screen2371 ) ) .f_current ) ,  (  i2377 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1133 (    struct Screen_621 *  screen2380 ) {
    struct RangeIter_377  temp1134 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_342  __cond1135 =  next378 (&temp1134);
        if (  __cond1135 .tag == 0 ) {
            break;
        }
        int32_t  y2382 =  __cond1135 .stuff .Maybe_342_Just_s .field0;
        struct RangeIter_377  temp1136 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_342  __cond1137 =  next378 (&temp1136);
            if (  __cond1137 .tag == 0 ) {
                break;
            }
            int32_t  x2384 =  __cond1137 .stuff .Maybe_342_Just_s .field0;
            struct Cell_53 *  cell2385 = ( (  or_dash_fail908 ) ( ( (  get_dash_cell_dash_ptr1132 ) ( (  screen2380 ) ,  (  x2384 ) ,  (  y2382 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2385 ) .f_bg = ( ( * (  screen2380 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1138 (    struct Screen_621 *  screen2388 ,    char  c2390 ,    int32_t  x2392 ,    int32_t  y2394 ) {
    int32_t  w2395 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2392 ) , (  w2395 ) ) != 0 ) || (  cmp75 ( (  y2394 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2396 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2394 ) , (  w2395 ) ) ) , (  x2392 ) ) ) ) );
    struct Color_54  fg2397 = ( ( * (  screen2388 ) ) .f_default_dash_fg );
    struct Color_54  bg2398 = ( ( * (  screen2388 ) ) .f_default_dash_bg );
    char  c2399 = (  c2390 );
    ( (  set923 ) ( ( ( * (  screen2388 ) ) .f_current ) ,  (  i2396 ) ,  ( (struct Cell_53) { .f_c = (  c2399 ) , .f_fg = (  fg2397 ) , .f_bg = (  bg2398 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam620 (   struct env620 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1139 (    struct Screen_621 *  screen2402 ,    int32_t  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env620 envinst620 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each619 ) ( ( (  zip470 ) ( ( (  chars768 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv620){ .fun = lam620, .env = envinst620 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam627 (   struct env627 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1140 (    struct Screen_621 *  screen2402 ,    struct StrConcat_774  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env627 envinst627 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each626 ) ( ( (  zip472 ) ( ( (  chars874 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv627){ .fun = lam627, .env = envinst627 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam631 (   struct env631 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1141 (    struct Screen_621 *  screen2402 ,    struct StrConcat_790  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env631 envinst631 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each630 ) ( ( (  zip474 ) ( ( (  chars875 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv631){ .fun = lam631, .env = envinst631 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam635 (   struct env635 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1142 (    struct Screen_621 *  screen2402 ,    struct StrConcat_792  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env635 envinst635 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each634 ) ( ( (  zip476 ) ( ( (  chars876 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv635){ .fun = lam635, .env = envinst635 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam639 (   struct env639 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1143 (    struct Screen_621 *  screen2402 ,    struct StrConcat_818  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env639 envinst639 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each638 ) ( ( (  zip478 ) ( ( (  chars877 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv639){ .fun = lam639, .env = envinst639 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam643 (   struct env643 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1144 (    struct Screen_621 *  screen2402 ,    struct StrConcat_17  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env643 envinst643 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each642 ) ( ( (  zip480 ) ( ( (  chars878 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv643){ .fun = lam643, .env = envinst643 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam647 (   struct env647 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1145 (    struct Screen_621 *  screen2402 ,    struct StrConcat_820  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env647 envinst647 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each646 ) ( ( (  zip482 ) ( ( (  chars823 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv647){ .fun = lam647, .env = envinst647 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam651 (   struct env651 env ,    struct Tuple2_367  dref2415 ) {
    ( (  set923 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1146 (    struct Screen_621 *  screen2402 ,    struct StrConcat_827  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min758 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env651 envinst651 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each650 ) ( ( (  zip484 ) ( ( (  chars879 ) ( (  s2404 ) ) ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv651){ .fun = lam651, .env = envinst651 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1147 (    struct Screen_621 *  screen2420 ,    int32_t  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count718 ) ( ( (  chars768 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1139 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1148 (    struct Screen_621 *  screen2420 ,    struct StrConcat_774  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count720 ) ( ( (  chars874 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1140 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1149 (    struct Screen_621 *  screen2420 ,    struct StrConcat_790  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count722 ) ( ( (  chars875 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1141 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1150 (    struct Screen_621 *  screen2420 ,    struct StrConcat_792  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count724 ) ( ( (  chars876 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1142 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1151 (    struct Screen_621 *  screen2420 ,    struct StrConcat_818  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count726 ) ( ( (  chars877 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1143 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1152 (    struct Screen_621 *  screen2420 ,    struct StrConcat_17  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count728 ) ( ( (  chars878 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1144 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1153 (    struct Screen_621 *  screen2420 ,    struct StrConcat_820  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count730 ) ( ( (  chars823 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1145 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1154 (    struct Screen_621 *  screen2420 ,    struct StrConcat_827  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count732 ) ( ( (  chars879 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1146 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_329   try_dash_read_dash_contents1155 (    const char*  filename2638 ,    enum CAllocator_4  al2640 ) {
    FILE *  file2641 = ( ( fopen ) ( (  filename2638 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2641 ) ) ) ) {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    }
    ( ( fseek ) ( (  file2641 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end108 ) ( ) ) ) );
    int32_t  file_dash_size2642 = ( ( ftell ) ( (  file2641 ) ) );
    ( ( fseek ) ( (  file2641 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set107 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2643 = ( ( (  allocate935 ) ( (  al2640 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  file_dash_size2642 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2643 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2642 ) ,  (  file2641 ) ) );
    ( (  set922 ) ( (  file_dash_buf2643 ) ,  ( (  i32_dash_size268 ) ( (  file_dash_size2642 ) ) ) ,  ( (  nullchar334 ) ( ) ) ) );
    ( ( fclose ) ( (  file2641 ) ) );
    struct DynStr_131  str2644 = ( (struct DynStr_131) { .f_contents = (  file_dash_buf2643 ) } );
    return ( ( Maybe_329_Just ) ( (  str2644 ) ) );
}

static  struct DynStr_131   read_dash_contents1156 (    const char*  filename2647 ,    enum CAllocator_4  al2649 ) {
    return ( (  or_dash_fail903 ) ( ( (  try_dash_read_dash_contents1155 ) ( (  filename2647 ) ,  (  al2649 ) ) ) ,  ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( "could not open file " ) ,  (  filename2647 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1157 (    const char*  filename2652 ,    struct DynStr_131  contents2654 ) {
    FILE *  file2655 = ( ( fopen ) ( (  filename2652 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2655 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_301  it2656 = ( (  chars788 ) ( (  contents2654 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref2657 = ( (  next344 ) ( ( & (  it2656 ) ) ) );
        if ( dref2657.tag == Maybe_311_None_t ) {
            ( ( fclose ) ( (  file2655 ) ) );
            return ( true );
        }
        else if ( dref2657.tag == Maybe_311_Just_t ) {
            int32_t  chars_dash_written2659 = ( ( fprintf ) ( (  file2655 ) ,  ( "%c" ) ,  ( dref2657 .stuff .Maybe_311_Just_s .field0 ) ) );
            if ( (  cmp75 ( (  chars_dash_written2659 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable893 ) ( ) );
}

static  enum Unit_13   write_dash_contents1158 (    const char*  filename2662 ,    struct DynStr_131  contents2664 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1157 ) ( (  filename2662 ) ,  (  contents2664 ) ) ) ) ) {
        ( (  panic899 ) ( ( ( StrConcat_835_StrConcat ) ( ( "could not write to file " ) ,  (  filename2662 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_917   get1159 (  ) {
    return ( (struct Slice_917) { .f_ptr = ( (  offset_dash_ptr152 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len326 (   struct env326 env ,    char  c2433 ) {
    if ( (  eq48 ( (  c2433 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2430 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1160 (    struct Cursor_756  l2437 ,    struct Cursor_756  r2439 ) {
    return ( (  eq41 ( ( (  l2437 ) .f_x ) , ( (  r2439 ) .f_x ) ) ) && (  eq41 ( ( (  l2437 ) .f_y ) , ( (  r2439 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1161 (    struct Visual_1057  dref2449 ) {
    return ( dref2449 .field0 );
}

static  struct List_3 *   get_dash_row1162 (    struct Editor_1056 *  ed2468 ,    int32_t  y2470 ) {
    return ( (  get_dash_ptr956 ) ( ( & ( ( * (  ed2468 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2470 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1163 (    struct Editor_1056 *  ed2473 ) {
    return ( (  get_dash_ptr956 ) ( ( & ( ( * (  ed2473 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2473 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_489   indent_dash_on_dash_row1164 (    struct Editor_1056 *  ed2476 ,    int32_t  y2478 ) {
    return ( (  take_dash_while509 ) ( ( (  get_dash_row1162 ) ( (  ed2476 ) ,  (  y2478 ) ) ) ,  (  is_dash_whitespace947 ) ) );
}

static  size_t   num_dash_rows1165 (    struct Editor_1056 *  ed2481 ) {
    return ( (  size997 ) ( ( & ( ( * (  ed2481 ) ) .f_current_dash_file ) ) ) );
}

struct funenv974 {
    enum Unit_13  (*fun) (  struct env974  ,    struct List_280 *  ,    size_t  );
    struct env974 env;
};

struct env1166 {
    ;
    ;
    ;
    struct env974 envinst974;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1166 (   struct env1166 env ,    struct Editor_1056 *  ed2484 ,    int32_t  y2486 ) {
    struct List_3 *  next_dash_row2487 = ( (  get_dash_row1162 ) ( (  ed2484 ) ,  (  y2486 ) ) );
    ( (  free964 ) ( (  next_dash_row2487 ) ) );
    struct funenv974  temp1167 = ( (struct funenv974){ .fun = remove974, .env =  env.envinst974  } );
    ( temp1167.fun ( temp1167.env ,  ( & ( ( * (  ed2484 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2486 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_311   char_dash_at1168 (    struct Editor_1056 *  ed2490 ,    struct Cursor_756  cur2492 ) {
    return ( (  try_dash_get958 ) ( ( (  get_dash_row1162 ) ( (  ed2490 ) ,  ( (  cur2492 ) .f_y ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2492 ) .f_x ) ) ) ) );
}

static  struct Maybe_311   char_dash_at_dash_cursor1169 (    struct Editor_1056 *  ed2495 ) {
    return ( (  try_dash_get958 ) ( ( (  cursor_dash_row1163 ) ( (  ed2495 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2495 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1170 {
    ;
    ;
    ;
    struct env326 envinst326;
    ;
    ;
};

static  struct Visual_1057   x_dash_to_dash_visual_dash_x1170 (   struct env1170 env ,    struct Editor_1056 *  ed2498 ,    int32_t  x2500 ,    int32_t  y2502 ) {
    return ( ( Visual_1057_Visual ) ( ( (  sum734 ) ( ( (  map350 ) ( ( (  take373 ) ( ( (  get_dash_row1162 ) ( (  ed2498 ) ,  (  y2502 ) ) ) ,  ( (  i32_dash_size268 ) ( (  x2500 ) ) ) ) ) ,  ( (struct funenv326){ .fun = char_dash_len326, .env =  env.envinst326  } ) ) ) ) ) ) );
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
    ;
    struct env326 envinst326;
    ;
    ;
};

static  int32_t   visual_dash_x_dash_to_dash_x1171 (   struct env1171 env ,    struct Editor_1056 *  ed2505 ,    struct Visual_1057  dref2506 ,    int32_t  y2509 ) {
    int32_t  sum_dash_x2510 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2511 = ( (  get_dash_row1162 ) ( (  ed2505 ) ,  (  y2509 ) ) );
    struct RangeIter_377  temp1172 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( * (  chars2511 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_342  __cond1173 =  next378 (&temp1172);
        if (  __cond1173 .tag == 0 ) {
            break;
        }
        int32_t  x2513 =  __cond1173 .stuff .Maybe_342_Just_s .field0;
        struct funenv326  temp1174 = ( (struct funenv326){ .fun = char_dash_len326, .env =  env.envinst326  } );
        sum_dash_x2510 = (  op_dash_add82 ( (  sum_dash_x2510 ) , ( temp1174.fun ( temp1174.env ,  (  elem_dash_get2 ( (  chars2511 ) , ( (  i32_dash_size268 ) ( (  x2513 ) ) ) ) ) ) ) ) );
        if ( (  cmp75 ( ( dref2506 .field0 ) , (  sum_dash_x2510 ) ) == 0 ) ) {
            return (  x2513 );
        }
    }
    return ( (  size_dash_i32270 ) ( ( ( * (  chars2511 ) ) .f_count ) ) );
}

struct funenv1170 {
    struct Visual_1057  (*fun) (  struct env1170  ,    struct Editor_1056 *  ,    int32_t  ,    int32_t  );
    struct env1170 env;
};

struct funenv1171 {
    int32_t  (*fun) (  struct env1171  ,    struct Editor_1056 *  ,    struct Visual_1057  ,    int32_t  );
    struct env1171 env;
};

struct env1175 {
    ;
    struct env1170 envinst1170;
    ;
    ;
    ;
    ;
    ;
    struct env1171 envinst1171;
    ;
    ;
    ;
    ;
};

struct Dims_1176 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1175 (   struct env1175 env ,    struct Editor_1056 *  ed2517 ,    int32_t  x2519 ,    int32_t  y2521 ,    struct Dims_1176  dim2523 ) {
    struct Cursor_756  cur2524 = ( ( * (  ed2517 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2525 = ( !  eq41 ( ( (  cur2524 ) .f_x ) , (  x2519 ) ) );
    int32_t  y2526 = ( (  clamp762 ) ( (  y2521 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2517 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2527 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  y2526 ) , (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_top ) , (  funny_dash_space2527 ) ) ) ) == 0 ) ) {
        (*  ed2517 ) .f_screen_dash_top = ( (  max759 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  y2526 ) , (  funny_dash_space2527 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  y2526 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_top ) , ( (  dim2523 ) .f_rows ) ) ) , (  funny_dash_space2527 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2528 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  y2526 ) , (  funny_dash_space2527 ) ) ) , ( (  dim2523 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2517 ) .f_screen_dash_top = (  onscreen_dash_y2528 );
        } else {
        }
    }
    struct List_3 *  row2529 = ( (  get_dash_row1162 ) ( (  ed2517 ) ,  (  y2526 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2525 ) ) {
        int32_t  x2530 = ( (  clamp762 ) ( (  x2519 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( ( (  size996 ) ( (  row2529 ) ) ) ) ) ) );
        struct funenv1170  temp1177 = ( (struct funenv1170){ .fun = x_dash_to_dash_visual_dash_x1170, .env =  env.envinst1170  } );
        (*  ed2517 ) .f_goal_dash_x = ( temp1177.fun ( temp1177.env ,  (  ed2517 ) ,  (  x2530 ) ,  (  y2526 ) ) );
    }
    struct Visual_1057  vx2531 = ( ( * (  ed2517 ) ) .f_goal_dash_x );
    struct funenv1171  temp1178 = ( (struct funenv1171){ .fun = visual_dash_x_dash_to_dash_x1171, .env =  env.envinst1171  } );
    int32_t  x2532 = ( temp1178.fun ( temp1178.env ,  (  ed2517 ) ,  (  vx2531 ) ,  (  y2526 ) ) );
    int32_t  funny_dash_space2533 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  x2532 ) , (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_left ) , (  funny_dash_space2533 ) ) ) ) == 0 ) ) {
        (*  ed2517 ) .f_screen_dash_left = ( (  max759 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  x2532 ) , (  funny_dash_space2533 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  x2532 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_left ) , ( (  dim2523 ) .f_cols ) ) ) , (  funny_dash_space2533 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2534 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  x2532 ) , (  funny_dash_space2533 ) ) ) , ( (  dim2523 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2517 ) .f_screen_dash_left = (  onscreen_dash_x2534 );
        } else {
        }
    }
    (*  ed2517 ) .f_cursor = ( (struct Cursor_756) { .f_x = (  x2532 ) , .f_y = (  y2526 ) } );
    (*  ed2517 ) .f_selected = ( (struct Maybe_911) { .tag = Maybe_911_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1175 {
    enum Unit_13  (*fun) (  struct env1175  ,    struct Editor_1056 *  ,    int32_t  ,    int32_t  ,    struct Dims_1176  );
    struct env1175 env;
};

struct env1179 {
    struct env1175 envinst1175;
};

static  enum Unit_13   move_dash_to_dash_col1179 (   struct env1179 env ,    struct Editor_1056 *  ed2537 ,    int32_t  x2539 ,    struct Dims_1176  dim2541 ) {
    struct funenv1175  temp1180 = ( (struct funenv1175){ .fun = move_dash_to1175, .env =  env.envinst1175  } );
    ( temp1180.fun ( temp1180.env ,  (  ed2537 ) ,  (  x2539 ) ,  ( ( ( * (  ed2537 ) ) .f_cursor ) .f_y ) ,  (  dim2541 ) ) );
    return ( Unit_13_Unit );
}

struct env1181 {
    struct env1175 envinst1175;
};

static  enum Unit_13   move_dash_to_dash_row1181 (   struct env1181 env ,    struct Editor_1056 *  ed2544 ,    int32_t  y2546 ,    struct Dims_1176  dim2548 ) {
    struct funenv1175  temp1182 = ( (struct funenv1175){ .fun = move_dash_to1175, .env =  env.envinst1175  } );
    ( temp1182.fun ( temp1182.env ,  (  ed2544 ) ,  ( ( ( * (  ed2544 ) ) .f_cursor ) .f_x ) ,  (  y2546 ) ,  (  dim2548 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1179 {
    enum Unit_13  (*fun) (  struct env1179  ,    struct Editor_1056 *  ,    int32_t  ,    struct Dims_1176  );
    struct env1179 env;
};

struct funenv1181 {
    enum Unit_13  (*fun) (  struct env1181  ,    struct Editor_1056 *  ,    int32_t  ,    struct Dims_1176  );
    struct env1181 env;
};

struct env1183 {
    ;
    ;
    ;
    ;
    struct env1179 envinst1179;
    ;
    ;
    struct env1181 envinst1181;
    ;
};

static  bool   move_dash_left1183 (   struct env1183 env ,    struct Editor_1056 *  ed2551 ,    struct Dims_1176  dim2553 ) {
    struct Cursor_756  cur2554 = ( ( * (  ed2551 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1181  temp1184 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  env.envinst1181  } );
            ( temp1184.fun ( temp1184.env ,  (  ed2551 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2553 ) ) );
            struct funenv1179  temp1185 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  env.envinst1179  } );
            ( temp1185.fun ( temp1185.env ,  (  ed2551 ) ,  ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1163 ) ( (  ed2551 ) ) ) ) .f_count ) ) ) ,  (  dim2553 ) ) );
        }
    } else {
        struct funenv1179  temp1186 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  env.envinst1179  } );
        ( temp1186.fun ( temp1186.env ,  (  ed2551 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2553 ) ) );
    }
    return ( !  eq1160 ( ( ( * (  ed2551 ) ) .f_cursor ) , (  cur2554 ) ) );
}

struct env1187 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1179 envinst1179;
    struct env1175 envinst1175;
    ;
    ;
};

static  bool   move_dash_right1187 (   struct env1187 env ,    struct Editor_1056 *  ed2557 ,    struct Dims_1176  dims2559 ) {
    struct Cursor_756  cur2560 = ( ( * (  ed2557 ) ) .f_cursor );
    int32_t  row_dash_len2561 = ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1163 ) ( (  ed2557 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_x ) , (  row_dash_len2561 ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2557 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1175  temp1188 = ( (struct funenv1175){ .fun = move_dash_to1175, .env =  env.envinst1175  } );
            ( temp1188.fun ( temp1188.env ,  (  ed2557 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2559 ) ) );
        }
    } else {
        struct funenv1179  temp1189 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  env.envinst1179  } );
        ( temp1189.fun ( temp1189.env ,  (  ed2557 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2559 ) ) );
    }
    return ( !  eq1160 ( ( ( * (  ed2557 ) ) .f_cursor ) , (  cur2560 ) ) );
}

struct env1190 {
    ;
    struct env1179 envinst1179;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1190 (   struct env1190 env ,    struct Editor_1056 *  ed2564 ,    struct Dims_1176  dims2566 ) {
    int32_t  off2567 = ( (  size_dash_i32270 ) ( ( (  count716 ) ( ( (  indent_dash_on_dash_row1164 ) ( (  ed2564 ) ,  ( ( ( * (  ed2564 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1179  temp1191 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  env.envinst1179  } );
    ( temp1191.fun ( temp1191.env ,  (  ed2564 ) ,  (  off2567 ) ,  (  dims2566 ) ) );
    return ( Unit_13_Unit );
}

struct env1192 {
    ;
    ;
    ;
    struct env1179 envinst1179;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1192 (   struct env1192 env ,    struct Editor_1056 *  ed2570 ,    struct Dims_1176  dims2572 ) {
    struct List_3 *  currow2573 = ( (  cursor_dash_row1163 ) ( (  ed2570 ) ) );
    struct funenv1179  temp1193 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  env.envinst1179  } );
    ( temp1193.fun ( temp1193.env ,  (  ed2570 ) ,  ( (  size_dash_i32270 ) ( ( (  size996 ) ( (  currow2573 ) ) ) ) ) ,  (  dims2572 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1194 (    struct Editor_1056 *  ed2579 ,    int32_t  col2581 ,    int32_t  row2583 ) {
    return (  eq41 ( (  col2581 ) , ( (  size_dash_i32270 ) ( ( (  size996 ) ( ( (  get_dash_row1162 ) ( (  ed2579 ) ,  (  row2583 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1195 (    struct Editor_1056 *  ed2586 ) {
    return (  eq41 ( ( ( ( * (  ed2586 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  size996 ) ( ( (  cursor_dash_row1163 ) ( (  ed2586 ) ) ) ) ) ) ) ) );
}

struct funenv1166 {
    enum Unit_13  (*fun) (  struct env1166  ,    struct Editor_1056 *  ,    int32_t  );
    struct env1166 env;
};

struct funenv981 {
    enum Unit_13  (*fun) (  struct env981  ,    struct List_3 *  ,    struct List_3 *  );
    struct env981 env;
};

struct funenv983 {
    enum Unit_13  (*fun) (  struct env983  ,    struct List_3 *  ,    struct Slice_5  );
    struct env983 env;
};

struct env1196 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1166 envinst1166;
    ;
    struct env975 envinst975;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env981 envinst981;
    ;
    ;
    ;
    ;
    struct env983 envinst983;
    ;
    ;
    ;
    ;
};

struct anon_1203 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1196 (   struct env1196 env ,    struct Editor_1056 *  ed2589 ) {
    struct Maybe_911  dref2590 = ( ( * (  ed2589 ) ) .f_selected );
    if ( dref2590.tag == Maybe_911_None_t ) {
        struct List_3 *  row2591 = ( (  cursor_dash_row1163 ) ( (  ed2589 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2591 ) ) .f_count ) ) == 0 ) ) {
            struct funenv975  temp1197 = ( (struct funenv975){ .fun = remove975, .env =  env.envinst975  } );
            ( temp1197.fun ( temp1197.env ,  ( (  cursor_dash_row1163 ) ( (  ed2589 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1195 ) ( (  ed2589 ) ) ) ) {
                if ( (  cmp75 ( (  op_dash_sub83 ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1165 ) ( (  ed2589 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2592 = ( (  cursor_dash_row1163 ) ( (  ed2589 ) ) );
                    int32_t  next_dash_row_dash_id2593 = (  op_dash_add82 ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2594 = ( (  get_dash_row1162 ) ( (  ed2589 ) ,  (  next_dash_row_dash_id2593 ) ) );
                    struct funenv981  temp1198 = ( (struct funenv981){ .fun = add_dash_all981, .env =  env.envinst981  } );
                    ( temp1198.fun ( temp1198.env ,  (  cur_dash_row2592 ) ,  (  next_dash_row2594 ) ) );
                    struct funenv1166  temp1199 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
                    ( temp1199.fun ( temp1199.env ,  (  ed2589 ) ,  (  next_dash_row_dash_id2593 ) ) );
                }
            }
        }
    }
    else if ( dref2590.tag == Maybe_911_Just_t ) {
        struct Cursor_756  cfrom2596 = ( (  min755 ) ( ( dref2590 .stuff .Maybe_911_Just_s .field0 ) ,  ( ( * (  ed2589 ) ) .f_cursor ) ) );
        struct Cursor_756  cto2597 = ( (  max760 ) ( ( dref2590 .stuff .Maybe_911_Just_s .field0 ) ,  ( ( * (  ed2589 ) ) .f_cursor ) ) );
        struct RangeIter_377  temp1200 =  into_dash_iter376 ( ( (  to374 ) ( (  op_dash_add82 ( ( (  cfrom2596 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub83 ( ( (  cto2597 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_342  __cond1201 =  next378 (&temp1200);
            if (  __cond1201 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2599 =  __cond1201 .stuff .Maybe_342_Just_s .field0;
            ( (  assert901 ) ( (  cmp75 ( (  row_dash_id2599 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1166  temp1202 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
            ( temp1202.fun ( temp1202.env ,  (  ed2589 ) ,  (  row_dash_id2599 ) ) );
        }
        int32_t  nu_dash_to_dash_y2600 = (  op_dash_sub83 ( ( (  cto2597 ) .f_y ) , ( (  max759 ) ( (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  cto2597 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add82 ( ( (  cfrom2596 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert901 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2600 ) , ( (  cfrom2596 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2600 ) , (  op_dash_add82 ( ( (  cfrom2596 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1203  cto2601 = ( (struct anon_1203) { .f_x = ( (  cto2597 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2600 ) } );
        bool  should_dash_merge_dash_next_dash_line2602 = ( (  is_dash_at_dash_line_dash_end1194 ) ( (  ed2589 ) ,  ( (  cto2601 ) .f_x ) ,  ( (  cto2601 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2602 ) ) {
            struct List_3 *  first_dash_row2603 = ( (  get_dash_row1162 ) ( (  ed2589 ) ,  ( (  cfrom2596 ) .f_y ) ) );
            ( (  trim987 ) ( (  first_dash_row2603 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2596 ) .f_x ) ) ) ) );
            struct funenv981  temp1204 = ( (struct funenv981){ .fun = add_dash_all981, .env =  env.envinst981  } );
            ( temp1204.fun ( temp1204.env ,  (  first_dash_row2603 ) ,  ( (  get_dash_row1162 ) ( (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            if ( (  eq41 ( ( (  cto2601 ) .f_y ) , ( (  cfrom2596 ) .f_y ) ) ) ) {
                struct funenv1166  temp1205 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
                ( temp1205.fun ( temp1205.env ,  (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
            } else {
                struct funenv1166  temp1206 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
                ( temp1206.fun ( temp1206.env ,  (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                struct funenv1166  temp1207 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
                ( temp1207.fun ( temp1207.env ,  (  ed2589 ) ,  ( (  cto2601 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2604 = ( (  get_dash_row1162 ) ( (  ed2589 ) ,  ( (  cfrom2596 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2601 ) .f_y ) , ( (  cfrom2596 ) .f_y ) ) ) ) {
                struct RangeIter_377  temp1208 =  into_dash_iter376 ( ( (  to374 ) ( ( (  cfrom2596 ) .f_x ) ,  ( (  min758 ) ( ( (  cto2601 ) .f_x ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  size996 ) ( (  first_dash_row2604 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_342  __cond1209 =  next378 (&temp1208);
                    if (  __cond1209 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2606 =  __cond1209 .stuff .Maybe_342_Just_s .field0;
                    struct funenv975  temp1210 = ( (struct funenv975){ .fun = remove975, .env =  env.envinst975  } );
                    ( temp1210.fun ( temp1210.env ,  (  first_dash_row2604 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2596 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim987 ) ( (  first_dash_row2604 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2596 ) .f_x ) ) ) ) );
                struct funenv983  temp1211 = ( (struct funenv983){ .fun = add_dash_all983, .env =  env.envinst983  } );
                ( temp1211.fun ( temp1211.env ,  (  first_dash_row2604 ) ,  ( (  subslice306 ) ( ( (  to_dash_slice993 ) ( ( * ( (  get_dash_row1162 ) ( (  ed2589 ) ,  ( (  cto2601 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint998 ) ( (  op_dash_sub83 ( ( (  cto2601 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1166  temp1212 = ( (struct funenv1166){ .fun = remove_dash_row1166, .env =  env.envinst1166  } );
                ( temp1212.fun ( temp1212.env ,  (  ed2589 ) ,  ( (  cto2601 ) .f_y ) ) );
            }
        }
        (*  ed2589 ) .f_selected = ( (struct Maybe_911) { .tag = Maybe_911_None_t } );
        (*  ed2589 ) .f_cursor = (  cfrom2596 );
    }
    return ( Unit_13_Unit );
}

struct funenv968 {
    enum Unit_13  (*fun) (  struct env968  ,    struct List_280 *  ,    size_t  ,    struct List_3  );
    struct env968 env;
};

struct funenv985 {
    enum Unit_13  (*fun) (  struct env985  ,    struct List_3 *  ,    struct TakeWhile_489  );
    struct env985 env;
};

struct env1213 {
    ;
    struct env968 envinst968;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env985 envinst985;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1213 (   struct env1213 env ,    struct Editor_1056 *  ed2609 ,    int32_t  y2611 ,    enum CAllocator_4  al2613 ) {
    struct List_3  temp1214 = ( (  mk963 ) ( (  al2613 ) ) );
    struct List_3 *  nurow2614 = ( &temp1214 );
    struct TakeWhile_489  rowws2615 = ( (  indent_dash_on_dash_row1164 ) ( (  ed2609 ) ,  ( ( ( * (  ed2609 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2616 = ( (  size_dash_i32270 ) ( ( (  count716 ) ( (  rowws2615 ) ) ) ) );
    struct funenv985  temp1215 = ( (struct funenv985){ .fun = add_dash_all985, .env =  env.envinst985  } );
    ( temp1215.fun ( temp1215.env ,  (  nurow2614 ) ,  (  rowws2615 ) ) );
    struct funenv968  temp1216 = ( (struct funenv968){ .fun = insert968, .env =  env.envinst968  } );
    ( temp1216.fun ( temp1216.env ,  ( & ( ( * (  ed2609 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2611 ) ) ) ,  ( * (  nurow2614 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1217 (    struct Editor_1056 *  ed2619 ,    struct Cursor_756  c2621 ) {
    return ( {  struct Maybe_911  dref2622 = ( ( * (  ed2619 ) ) .f_selected ) ; dref2622.tag == Maybe_911_Just_t ? ( (  between761 ) ( (  c2621 ) ,  ( ( * (  ed2619 ) ) .f_cursor ) ,  ( dref2622 .stuff .Maybe_911_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1218 (    char  c2626 ) {
    return ( (  is_dash_not_dash_whitespace948 ) ( (  c2626 ) ) );
}

struct funenv990 {
    struct List_280  (*fun) (  struct env990  ,    struct Map_313  ,    enum CAllocator_4  );
    struct env990 env;
};

struct env1219 {
    ;
    ;
    ;
    ;
    ;
    struct env316 envinst316;
    struct env990 envinst990;
    struct env545 envinst545;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam315 (   struct env315 env ,    struct DynStr_131  line2666 ) {
    struct funenv316  temp1222 = ( (struct funenv316){ .fun = to_dash_list316, .env =  env.envinst316  } );
    return ( temp1222.fun ( temp1222.env ,  (  line2666 ) ,  ( env.al2635 ) ) );
}

static  struct List_280   load_dash_file1219 (   struct env1219 env ,    const char*  filename2633 ,    enum CAllocator_4  al2635 ) {
    struct funenv990  temp1221 = ( (struct funenv990){ .fun = to_dash_list990, .env =  env.envinst990  } );
    struct env315 envinst315 = {
        .envinst316 = env.envinst316 ,
        .al2635 =  al2635 ,
    };
    struct List_280  temp1220 = ( temp1221.fun ( temp1221.env ,  ( (  map346 ) ( ( (  lines949 ) ( ( (  read_dash_contents1156 ) ( (  filename2633 ) ,  (  al2635 ) ) ) ) ) ,  ( (struct funenv315){ .fun = lam315, .env = envinst315 } ) ) ) ,  (  al2635 ) ) );
    struct List_280 *  file2667 = ( &temp1220 );
    if ( ( (  null744 ) ( (  file2667 ) ) ) ) {
        struct funenv545  temp1223 = ( (struct funenv545){ .fun = add545, .env =  env.envinst545  } );
        ( temp1223.fun ( temp1223.env ,  (  file2667 ) ,  ( (  mk963 ) ( (  al2635 ) ) ) ) );
    }
    return ( * (  file2667 ) );
}

struct env1224 {
    ;
    ;
    struct env606 envinst606;
    ;
    ;
    enum CAllocator_4  al2630;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam605 (   struct env605 env ,    char  c2677 ) {
    struct funenv606  temp1228 = ( (struct funenv606){ .fun = write_dash_char606, .env =  env.envinst606  } );
    return ( temp1228.fun ( temp1228.env ,  ( env.sb2673 ) ,  (  c2677 ) ) );
}

static  enum Unit_13   save_dash_file1224 (   struct env1224 env ,    struct List_280  cf2670 ,    const char*  filename2672 ) {
    struct StrBuilder_551  temp1225 = ( (  mk1036 ) ( ( env.al2630 ) ) );
    struct StrBuilder_551 *  sb2673 = ( &temp1225 );
    struct SliceIter_278  temp1226 =  into_dash_iter281 ( (  cf2670 ) );
    while (true) {
        struct Maybe_328  __cond1227 =  next363 (&temp1226);
        if (  __cond1227 .tag == 0 ) {
            break;
        }
        struct List_3  row2675 =  __cond1227 .stuff .Maybe_328_Just_s .field0;
        struct env605 envinst605 = {
            .sb2673 =  sb2673 ,
            .envinst606 = env.envinst606 ,
        };
        ( (  for_dash_each604 ) ( (  row2675 ) ,  ( (struct funenv605){ .fun = lam605, .env = envinst605 } ) ) );
        struct funenv606  temp1229 = ( (struct funenv606){ .fun = write_dash_char606, .env =  env.envinst606  } );
        ( temp1229.fun ( temp1229.env ,  (  sb2673 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1158 ) ( (  filename2672 ) ,  ( (  as_dash_str781 ) ( (  sb2673 ) ) ) ) );
    ( (  free1037 ) ( (  sb2673 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1230 (    struct List_280  cf2680 ) {
    ( (  for_dash_each609 ) ( ( (  addresses995 ) ( (  cf2680 ) ) ) ,  (  free964 ) ) );
    ( (  free965 ) ( ( & (  cf2680 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1231 {
    ;
    int32_t  pad2681;
    ;
    ;
    ;
};

struct anon_1232 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1232   left_dash_offset1231 (   struct env1231 env ,    struct Editor_1056 *  ed2684 ) {
    int32_t  max_dash_digits2685 = ( (  max759 ) ( ( (  count_dash_digits765 ) ( ( ( ( * (  ed2684 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1232) { .f_max_dash_digits = (  max_dash_digits2685 ) , .f_total_dash_offset = (  op_dash_add82 ( (  op_dash_add82 ( ( env.pad2681 ) , (  max_dash_digits2685 ) ) ) , ( env.pad2681 ) ) ) } );
}

struct funenv1231 {
    struct anon_1232  (*fun) (  struct env1231  ,    struct Editor_1056 *  );
    struct env1231 env;
};

struct env1233 {
    ;
    struct env1231 envinst1231;
    ;
};

static  struct Dims_1176   screen_dash_dims1233 (   struct env1233 env ,    struct Editor_1056 *  ed2688 ,    struct Tui_622 *  tui2690 ) {
    struct funenv1231  temp1234 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  env.envinst1231  } );
    return ( (struct Dims_1176) { .f_cols = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * (  tui2690 ) ) .f_width ) ) ) , ( ( temp1234.fun ( temp1234.env ,  (  ed2688 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32274 ) ( ( ( * (  tui2690 ) ) .f_height ) ) ) } );
}

struct env1235 {
    struct env1170 envinst1170;
    struct env326 envinst326;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1231 envinst1231;
    int32_t  pad2681;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1235 (   struct env1235 env ,    struct Screen_621 *  screen2693 ,    struct Editor_1056 *  ed2695 ) {
    int32_t  w2696 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2693 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2697 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2693 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2698 = ( ( * (  ed2695 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2699 = ( ( * (  ed2695 ) ) .f_screen_dash_left );
    int32_t  x2700 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2701 = (  from_dash_integral29 ( 0 ) );
    ( (  assert901 ) ( (  cmp9 ( ( ( ( * (  ed2695 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1231  temp1236 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  env.envinst1231  } );
    struct anon_1232  offstuff2702 = ( temp1236.fun ( temp1236.env ,  (  ed2695 ) ) );
    int32_t  max_dash_digits2703 = ( (  offstuff2702 ) .f_max_dash_digits );
    int32_t  left_dash_off2704 = ( (  offstuff2702 ) .f_total_dash_offset );
    struct Drop_353  temp1237 =  into_dash_iter352 ( ( (  drop369 ) ( ( (  zip468 ) ( ( ( * (  ed2695 ) ) .f_current_dash_file ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_y2698 ) ) ) ) ) );
    while (true) {
        struct Maybe_360  __cond1238 =  next359 (&temp1237);
        if (  __cond1238 .tag == 0 ) {
            break;
        }
        struct Tuple2_361  dref2705 =  __cond1238 .stuff .Maybe_360_Just_s .field0;
        int32_t  row_dash_num2708 = (  op_dash_add82 ( ( dref2705 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_377  temp1239 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2681 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_342  __cond1240 =  next378 (&temp1239);
            if (  __cond1240 .tag == 0 ) {
                break;
            }
            int32_t  xx2710 =  __cond1240 .stuff .Maybe_342_Just_s .field0;
            ( (  put_dash_char1138 ) ( (  screen2693 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2710 ) ,  (  y2701 ) ) );
        }
        ( (  draw_dash_str_dash_right1147 ) ( (  screen2693 ) ,  (  row_dash_num2708 ) ,  (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2693 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2703 ) ) ) , ( env.pad2681 ) ) ) ,  (  y2701 ) ) );
        struct RangeIter_377  temp1241 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2681 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_342  __cond1242 =  next378 (&temp1241);
            if (  __cond1242 .tag == 0 ) {
                break;
            }
            int32_t  xx2712 =  __cond1242 .stuff .Maybe_342_Just_s .field0;
            ( (  put_dash_char1138 ) ( (  screen2693 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  xx2712 ) , ( env.pad2681 ) ) ) , (  max_dash_digits2703 ) ) ) ,  (  y2701 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2695 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( (  row_dash_num2708 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct Color_54  fg2713 = ( ( * (  screen2693 ) ) .f_default_dash_fg );
            struct Color_54  bg2714 = ( ( * (  screen2693 ) ) .f_default_dash_bg );
            struct RangeIter_377  temp1243 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  max_dash_digits2703 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_342  __cond1244 =  next378 (&temp1243);
                if (  __cond1244 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2716 =  __cond1244 .stuff .Maybe_342_Just_s .field0;
                struct Cell_53 *  cp2717 = ( (  or_dash_fail908 ) ( ( (  get_dash_cell_dash_ptr1132 ) ( (  screen2693 ) ,  (  op_dash_add82 ( (  xxx2716 ) , ( env.pad2681 ) ) ) ,  (  y2701 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2717 ) .f_fg = (  bg2714 );
                (*  cp2717 ) .f_bg = (  fg2713 );
            }
        }
        struct Drop_357  temp1245 =  into_dash_iter356 ( ( (  drop371 ) ( ( (  zip469 ) ( ( dref2705 .field0 ) ,  ( (  from379 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_x2699 ) ) ) ) ) );
        while (true) {
            struct Maybe_366  __cond1246 =  next365 (&temp1245);
            if (  __cond1246 .tag == 0 ) {
                break;
            }
            struct Tuple2_367  dref2718 =  __cond1246 .stuff .Maybe_366_Just_s .field0;
            bool  in_dash_selection2721 = ( (  is_dash_in_dash_selection1217 ) ( (  ed2695 ) ,  ( (struct Cursor_756) { .f_x = ( dref2718 .field1 ) , .f_y = ( dref2705 .field1 ) } ) ) );
            struct Color_54  og_dash_fg2722 = ( ( * (  screen2693 ) ) .f_default_dash_fg );
            struct Color_54  og_dash_bg2723 = ( ( * (  screen2693 ) ) .f_default_dash_bg );
            if ( (  in_dash_selection2721 ) ) {
                ( (  set_dash_screen_dash_colors1131 ) ( (  screen2693 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) ) );
            }
            if ( (  eq48 ( ( dref2718 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1138 ) ( (  screen2693 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2704 ) , (  x2700 ) ) ) ,  (  y2701 ) ) );
                x2700 = (  op_dash_add82 ( (  x2700 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1138 ) ( (  screen2693 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2704 ) , (  x2700 ) ) ) ,  (  y2701 ) ) );
            } else {
                ( (  put_dash_char1138 ) ( (  screen2693 ) ,  ( dref2718 .field0 ) ,  (  op_dash_add82 ( (  left_dash_off2704 ) , (  x2700 ) ) ) ,  (  y2701 ) ) );
            }
            if ( (  in_dash_selection2721 ) ) {
                ( (  set_dash_screen_dash_colors1131 ) ( (  screen2693 ) ,  (  og_dash_fg2722 ) ,  (  og_dash_bg2723 ) ) );
            }
            x2700 = (  op_dash_add82 ( (  x2700 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp75 ( (  x2700 ) , (  w2696 ) ) != 0 ) ) {
                break;
            }
        }
        y2701 = (  op_dash_add82 ( (  y2701 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2700 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp75 ( (  y2701 ) , (  h2697 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_756  cur2724 = ( ( * (  ed2695 ) ) .f_cursor );
    struct funenv1170  temp1247 = ( (struct funenv1170){ .fun = x_dash_to_dash_visual_dash_x1170, .env =  env.envinst1170  } );
    int32_t  vx2725 = ( (  from_dash_visual1161 ) ( ( temp1247.fun ( temp1247.env ,  (  ed2695 ) ,  ( (  cur2724 ) .f_x ) ,  ( (  cur2724 ) .f_y ) ) ) ) );
    int32_t  len2726 = ( (  maybe1070 ) ( ( (  try_dash_get958 ) ( ( (  cursor_dash_row1163 ) ( (  ed2695 ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2724 ) .f_x ) ) ) ) ) ,  ( (struct funenv326){ .fun = char_dash_len326, .env =  env.envinst326  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_377  temp1248 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  len2726 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_342  __cond1249 =  next378 (&temp1248);
        if (  __cond1249 .tag == 0 ) {
            break;
        }
        int32_t  x2728 =  __cond1249 .stuff .Maybe_342_Just_s .field0;
        struct Cell_53 *  cursor_dash_cell2729 = ( (  or_dash_fail908 ) ( ( (  get_dash_cell_dash_ptr1132 ) ( (  screen2693 ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  op_dash_sub83 ( (  left_dash_off2704 ) , ( ( * (  ed2695 ) ) .f_screen_dash_left ) ) ) , (  vx2725 ) ) ) , (  x2728 ) ) ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2695 ) ) .f_cursor ) .f_y ) , (  from_dash_y2698 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2729 ) .f_fg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) );
        (*  cursor_dash_cell2729 ) .f_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1250 (    struct Maybe_1053 *  dref2731 ,    struct Screen_621 *  screen2734 ) {
    struct Maybe_1053  dref2735 = ( (* dref2731 ) );
    if ( dref2735.tag == Maybe_1053_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2735.tag == Maybe_1053_Just_t ) {
        struct Duration_1075  diff2737 = ( (  diff1076 ) ( ( (  now1072 ) ( ) ) ,  ( dref2735 .stuff .Maybe_1053_Just_s .field0 ) ) );
        struct Duration_1075  limit2738 = ( (  duration_dash_from_dash_ns1077 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1074 ( (  diff2737 ) , (  limit2738 ) ) == 2 ) ) {
            (* dref2731 ) = ( (struct Maybe_1053) { .tag = Maybe_1053_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2739 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2740 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2741 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1078 ) ( (  diff2737 ) ) ) , (  x_dash_fill2739 ) ) ) , ( (  duration_dash_to_dash_ns1078 ) ( (  limit2738 ) ) ) ) ) ) );
        int32_t  y_dash_progress2742 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1078 ) ( (  diff2737 ) ) ) , (  y_dash_fill2740 ) ) ) , ( (  duration_dash_to_dash_ns1078 ) ( (  limit2738 ) ) ) ) ) ) );
        uint32_t  center_dash_x2743 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2744 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1130 ) ( (  screen2734 ) ,  ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) ) );
        int32_t  x_dash_off2745 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  x_dash_fill2739 ) ) ) , (  x_dash_progress2741 ) ) );
        int32_t  y_dash_off2746 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  y_dash_fill2740 ) ) ) , (  y_dash_progress2742 ) ) );
        int32_t  h2747 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2748 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2734 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_377  temp1251 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2747 ) ) ) );
        while (true) {
            struct Maybe_342  __cond1252 =  next378 (&temp1251);
            if (  __cond1252 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2750 =  __cond1252 .stuff .Maybe_342_Just_s .field0;
            struct RangeIter_377  temp1253 =  into_dash_iter376 ( ( (  to374 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2748 ) ) ) );
            while (true) {
                struct Maybe_342  __cond1254 =  next378 (&temp1253);
                if (  __cond1254 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2752 =  __cond1254 .stuff .Maybe_342_Just_s .field0;
                if ( ( ( ( (  cmp75 ( (  screen_dash_x2752 ) , (  x_dash_off2745 ) ) != 2 ) || (  cmp75 ( (  screen_dash_x2752 ) , (  op_dash_sub83 ( (  w2748 ) , (  x_dash_off2745 ) ) ) ) != 0 ) ) || (  cmp75 ( (  screen_dash_y2750 ) , (  y_dash_off2746 ) ) != 2 ) ) || (  cmp75 ( (  screen_dash_y2750 ) , (  op_dash_sub83 ( (  h2747 ) , (  y_dash_off2746 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1138 ) ( (  screen2734 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2752 ) ,  (  screen_dash_y2750 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1224 {
    enum Unit_13  (*fun) (  struct env1224  ,    struct List_280  ,    const char*  );
    struct env1224 env;
};

struct funenv1219 {
    struct List_280  (*fun) (  struct env1219  ,    const char*  ,    enum CAllocator_4  );
    struct env1219 env;
};

struct funenv1042 {
    const char*  (*fun) (  struct env1042  ,    struct TakeWhile_491  ,    enum CAllocator_4  );
    struct env1042 env;
};

struct funenv1046 {
    const char*  (*fun) (  struct env1046  ,    struct TakeWhile_498  ,    enum CAllocator_4  );
    struct env1046 env;
};

struct env1255 {
    ;
    ;
    ;
    ;
    struct env1224 envinst1224;
    struct env1181 envinst1181;
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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1042 envinst1042;
    struct env1046 envinst1046;
    ;
    ;
};

static  bool   lam1256 (    char  c2766 ) {
    return ( ! ( (  is_dash_whitespace947 ) ( (  c2766 ) ) ) );
}

static  bool   lam1260 (    char  c2774 ) {
    return ( ! ( (  is_dash_whitespace947 ) ( (  c2774 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1255 (   struct env1255 env ,    struct Editor_1056 *  ed2755 ,    struct DynStr_131  s2757 ,    struct Dims_1176  dim2759 ,    enum CAllocator_4  al2761 ) {
    struct DropWhile_494  s2762 = ( (  drop_dash_while516 ) ( (  s2757 ) ,  (  is_dash_whitespace947 ) ) );
    struct TakeWhile_496  cmd2763 = ( (  take_dash_while513 ) ( (  s2762 ) ,  (  is_dash_not_dash_whitespace948 ) ) );
    struct DropWhile_492  rest2764 = ( (  drop_dash_while519 ) ( ( (  drop_dash_while518 ) ( (  s2762 ) ,  (  is_dash_not_dash_whitespace948 ) ) ) ,  (  is_dash_whitespace947 ) ) );
    if ( ( (  eq884 ) ( (  cmd2763 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_491  filename2767 = ( (  take_dash_while512 ) ( (  rest2764 ) ,  (  lam1256 ) ) );
        const char*  temp1257;
        const char*  alfname2768 = (  temp1257 );
        if ( ( (  null746 ) ( (  filename2767 ) ) ) ) {
            struct Maybe_265  dref2769 = ( ( * (  ed2755 ) ) .f_filename );
            if ( dref2769.tag == Maybe_265_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2769.tag == Maybe_265_Just_t ) {
                alfname2768 = ( dref2769 .stuff .Maybe_265_Just_s .field0 );
            }
        } else {
            struct Maybe_265  dref2771 = ( ( * (  ed2755 ) ) .f_filename );
            if ( dref2771.tag == Maybe_265_None_t ) {
            }
            else if ( dref2771.tag == Maybe_265_Just_t ) {
                ( (  free939 ) ( (  al2761 ) ,  ( (struct Slice_940) { .f_ptr = ( (  cast187 ) ( ( dref2771 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1042  temp1258 = ( (struct funenv1042){ .fun = mk_dash_const_dash_str1042, .env =  env.envinst1042  } );
            alfname2768 = ( temp1258.fun ( temp1258.env ,  (  filename2767 ) ,  (  al2761 ) ) );
        }
        struct funenv1224  temp1259 = ( (struct funenv1224){ .fun = save_dash_file1224, .env =  env.envinst1224  } );
        ( temp1259.fun ( temp1259.env ,  ( ( * (  ed2755 ) ) .f_current_dash_file ) ,  (  alfname2768 ) ) );
        (*  ed2755 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2768 ) ) );
    } else {
        if ( ( (  eq884 ) ( (  cmd2763 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2755 ) .f_running = ( false );
        } else {
            if ( ( (  eq884 ) ( (  cmd2763 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_498  filename2775 = ( (  take_dash_while510 ) ( (  rest2764 ) ,  (  lam1260 ) ) );
                struct funenv1046  temp1261 = ( (struct funenv1046){ .fun = mk_dash_const_dash_str1046, .env =  env.envinst1046  } );
                const char*  alfname2776 = ( temp1261.fun ( temp1261.env ,  (  filename2775 ) ,  (  al2761 ) ) );
                struct List_280  og2777 = ( ( * (  ed2755 ) ) .f_current_dash_file );
                struct funenv1219  temp1262 = ( (struct funenv1219){ .fun = load_dash_file1219, .env =  env.envinst1219  } );
                (*  ed2755 ) .f_current_dash_file = ( temp1262.fun ( temp1262.env ,  (  alfname2776 ) ,  (  al2761 ) ) );
                struct Maybe_265  dref2778 = ( ( * (  ed2755 ) ) .f_filename );
                if ( dref2778.tag == Maybe_265_None_t ) {
                }
                else if ( dref2778.tag == Maybe_265_Just_t ) {
                    ( (  free939 ) ( (  al2761 ) ,  ( (struct Slice_940) { .f_ptr = ( (  cast187 ) ( ( dref2778 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2755 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2776 ) ) );
                (*  ed2755 ) .f_cursor = ( (struct Cursor_756) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2755 ) .f_goal_dash_x = ( ( Visual_1057_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2755 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1230 ) ( (  og2777 ) ) );
            } else {
                struct Maybe_688  dref2780 = ( (  parse_dash_int954 ) ( (  cmd2763 ) ) );
                if ( dref2780.tag == Maybe_688_Just_t ) {
                    int32_t  newline2782 = ( (  clamp762 ) ( ( (  i64_dash_i32269 ) ( (  op_dash_sub79 ( ( dref2780 .stuff .Maybe_688_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2755 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1181  temp1263 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  env.envinst1181  } );
                    ( temp1263.fun ( temp1263.env ,  (  ed2755 ) ,  (  newline2782 ) ,  (  dim2759 ) ) );
                }
                else if ( dref2780.tag == Maybe_688_None_t ) {
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

struct funenv1089 {
    struct Tui_622  (*fun) (  struct env1089  );
    struct env1089 env;
};

struct funenv1233 {
    struct Dims_1176  (*fun) (  struct env1233  ,    struct Editor_1056 *  ,    struct Tui_622 *  );
    struct env1233 env;
};

struct funenv1183 {
    bool  (*fun) (  struct env1183  ,    struct Editor_1056 *  ,    struct Dims_1176  );
    struct env1183 env;
};

struct funenv1187 {
    bool  (*fun) (  struct env1187  ,    struct Editor_1056 *  ,    struct Dims_1176  );
    struct env1187 env;
};

struct funenv1196 {
    enum Unit_13  (*fun) (  struct env1196  ,    struct Editor_1056 *  );
    struct env1196 env;
};

struct funenv1190 {
    enum Unit_13  (*fun) (  struct env1190  ,    struct Editor_1056 *  ,    struct Dims_1176  );
    struct env1190 env;
};

struct funenv1192 {
    enum Unit_13  (*fun) (  struct env1192  ,    struct Editor_1056 *  ,    struct Dims_1176  );
    struct env1192 env;
};

struct funenv1213 {
    enum Unit_13  (*fun) (  struct env1213  ,    struct Editor_1056 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1213 env;
};

static  int32_t   lam1295 (    struct Cursor_756  s2805 ) {
    return ( (  s2805 ) .f_x );
}

static  int32_t   lam1301 (    struct Cursor_756  s2809 ) {
    return ( (  s2809 ) .f_x );
}

static  bool   lam1305 (    char  c2813 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2813 ) ) );
}

static  bool   lam1307 (    char  c2815 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2815 ) ) ) );
}

static  bool   lam1313 (    char  c2819 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2819 ) ) ) );
}

static  bool   lam1315 (    char  c2821 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2821 ) ) );
}

static  bool   lam1321 (    char  c2825 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2825 ) ) ) );
}

static  bool   lam1323 (    char  c2827 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2827 ) ) );
}

static  bool   lam1325 (    char  c2829 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2829 ) ) ) );
}

struct funenv971 {
    enum Unit_13  (*fun) (  struct env971  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env971 env;
};

struct funenv1033 {
    enum Unit_13  (*fun) (  struct env1033  ,    struct StrBuilder_551 *  );
    struct env1033 env;
};

struct funenv1255 {
    enum Unit_13  (*fun) (  struct env1255  ,    struct Editor_1056 *  ,    struct DynStr_131  ,    struct Dims_1176  ,    enum CAllocator_4  );
    struct env1255 env;
};

struct funenv1127 {
    bool  (*fun) (  struct env1127  ,    struct Screen_621 *  );
    struct env1127 env;
};

struct funenv1235 {
    enum Unit_13  (*fun) (  struct env1235  ,    struct Screen_621 *  ,    struct Editor_1056 *  );
    struct env1235 env;
};

static  struct Maybe_311   lam1055 (   struct env1055 env ,    struct List_3  l2853 ) {
    return ( (  try_dash_get958 ) ( ( & (  l2853 ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * ( env.ed2788 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_367   lam1353 (    char  c2855 ) {
    return ( ( Tuple2_367_Tuple2 ) ( (  c2855 ) ,  ( (  char_dash_i32888 ) ( (  c2855 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1628 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1629 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1630 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env546 envinst546 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env319 envinst319 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env545 envinst545 = {
        .envinst546 = envinst546 ,
    };
    struct env318 envinst318 = {
        .envinst319 = envinst319 ,
    };
    struct env968 envinst968 = {
        .envinst545 = envinst545 ,
        .envinst546 = envinst546 ,
    };
    struct env971 envinst971 = {
        .envinst318 = envinst318 ,
        .envinst319 = envinst319 ,
    };
    struct env974 envinst974 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env975 envinst975 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env976 envinst976 = {
        .envinst975 = envinst975 ,
    };
    struct env317 envinst317 = {
        .envinst318 = envinst318 ,
    };
    struct env979 envinst979 = {
        .envinst545 = envinst545 ,
    };
    struct env981 envinst981 = {
        .envinst318 = envinst318 ,
    };
    struct env983 envinst983 = {
        .envinst318 = envinst318 ,
    };
    struct env985 envinst985 = {
        .envinst318 = envinst318 ,
    };
    struct env316 envinst316 = {
        .envinst317 = envinst317 ,
    };
    struct env990 envinst990 = {
        .envinst979 = envinst979 ,
    };
    struct env1026 envinst1026 = {
        .envinst318 = envinst318 ,
    };
    struct env1028 envinst1028 = {
        .envinst318 = envinst318 ,
    };
    struct env1030 envinst1030 = {
        .envinst318 = envinst318 ,
    };
    struct env606 envinst606 = {
        .envinst318 = envinst318 ,
    };
    struct env1033 envinst1033 = {
        .envinst976 = envinst976 ,
    };
    struct env1038 envinst1038 = {
        .envinst1026 = envinst1026 ,
        .envinst606 = envinst606 ,
    };
    struct env1042 envinst1042 = {
        .envinst1028 = envinst1028 ,
        .envinst606 = envinst606 ,
    };
    struct env1046 envinst1046 = {
        .envinst1030 = envinst1030 ,
        .envinst606 = envinst606 ,
    };
    bool  temp1088 = ( false );
    bool *  should_dash_resize2216 = ( &temp1088 );
    struct env1089 envinst1089 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1112 envinst1112 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1127 envinst1127 = {
        .envinst1112 = envinst1112 ,
    };
    int32_t  tab_dash_size2430 = (  from_dash_integral29 ( 2 ) );
    struct env326 envinst326 = {
        .tab_dash_size2430 =  tab_dash_size2430 ,
    };
    struct env1166 envinst1166 = {
        .envinst974 = envinst974 ,
    };
    struct env1170 envinst1170 = {
        .envinst326 = envinst326 ,
    };
    struct env1171 envinst1171 = {
        .envinst326 = envinst326 ,
    };
    struct env1175 envinst1175 = {
        .envinst1170 = envinst1170 ,
        .envinst1171 = envinst1171 ,
    };
    struct env1179 envinst1179 = {
        .envinst1175 = envinst1175 ,
    };
    struct env1181 envinst1181 = {
        .envinst1175 = envinst1175 ,
    };
    struct env1183 envinst1183 = {
        .envinst1179 = envinst1179 ,
        .envinst1181 = envinst1181 ,
    };
    struct env1187 envinst1187 = {
        .envinst1179 = envinst1179 ,
        .envinst1175 = envinst1175 ,
    };
    struct env1190 envinst1190 = {
        .envinst1179 = envinst1179 ,
    };
    struct env1192 envinst1192 = {
        .envinst1179 = envinst1179 ,
    };
    struct env1196 envinst1196 = {
        .envinst1166 = envinst1166 ,
        .envinst975 = envinst975 ,
        .envinst981 = envinst981 ,
        .envinst983 = envinst983 ,
    };
    struct env1213 envinst1213 = {
        .envinst968 = envinst968 ,
        .envinst985 = envinst985 ,
    };
    enum CAllocator_4  al2630 = ( (  idc933 ) ( ) );
    struct env1219 envinst1219 = {
        .envinst316 = envinst316 ,
        .envinst990 = envinst990 ,
        .envinst545 = envinst545 ,
    };
    struct env1224 envinst1224 = {
        .envinst606 = envinst606 ,
        .al2630 =  al2630 ,
    };
    int32_t  pad2681 = (  from_dash_integral29 ( 2 ) );
    struct env1231 envinst1231 = {
        .pad2681 =  pad2681 ,
    };
    struct env1233 envinst1233 = {
        .envinst1231 = envinst1231 ,
    };
    struct env1235 envinst1235 = {
        .envinst1170 = envinst1170 ,
        .envinst326 = envinst326 ,
        .envinst1231 = envinst1231 ,
        .pad2681 =  pad2681 ,
    };
    struct env1255 envinst1255 = {
        .envinst1224 = envinst1224 ,
        .envinst1181 = envinst1181 ,
        .envinst1219 = envinst1219 ,
        .envinst1042 = envinst1042 ,
        .envinst1046 = envinst1046 ,
    };
    struct Slice_917  args2785 = ( (  get1159 ) ( ) );
    struct List_280  temp1264;
    struct List_280  file2786 = (  temp1264 );
    struct Maybe_265  mfilename2787 = ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    if ( (  eq45 ( ( (  args2785 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2786 = ( (  mk962 ) ( (  al2630 ) ) );
        struct funenv545  temp1265 = ( (struct funenv545){ .fun = add545, .env =  envinst545  } );
        ( temp1265.fun ( temp1265.env ,  ( & (  file2786 ) ) ,  ( (  mk963 ) ( (  al2630 ) ) ) ) );
    } else {
        struct funenv1219  temp1266 = ( (struct funenv1219){ .fun = load_dash_file1219, .env =  envinst1219  } );
        file2786 = ( temp1266.fun ( temp1266.env ,  (  elem_dash_get927 ( (  args2785 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2630 ) ) );
        struct funenv1038  temp1267 = ( (struct funenv1038){ .fun = mk_dash_const_dash_str1038, .env =  envinst1038  } );
        mfilename2787 = ( ( Maybe_265_Just ) ( ( temp1267.fun ( temp1267.env ,  (  elem_dash_get927 ( (  args2785 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2630 ) ) ) ) );
    }
    struct Editor_1056  temp1268 = ( (struct Editor_1056) { .f_cursor = ( (struct Cursor_756) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1057_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2786 ) , .f_filename = (  mfilename2787 ) , .f_mode = ( (struct Mode_775) { .tag = Mode_775_Normal_t } ) , .f_anim = ( ( Maybe_1053_Just ) ( ( (  now1072 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_911) { .tag = Maybe_911_None_t } ) } );
    struct Editor_1056 *  ed2788 = ( &temp1268 );
    struct funenv1089  temp1270 = ( (struct funenv1089){ .fun = mk1089, .env =  envinst1089  } );
    struct Tui_622  temp1269 = ( temp1270.fun ( temp1270.env ) );
    struct Tui_622 *  tui2789 = ( &temp1269 );
    enum CAllocator_4  al2790 = ( (  idc933 ) ( ) );
    struct Screen_621  temp1271 = ( (  mk_dash_screen1113 ) ( (  tui2789 ) ,  (  al2790 ) ) );
    struct Screen_621 *  screen2791 = ( &temp1271 );
    uint32_t  counter2792 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2793 = ( true );
    while ( ( ( * (  ed2788 ) ) .f_running ) ) {
        int32_t  events2794 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_524  temp1272 =  into_dash_iter523 ( ( (  from_dash_function530 ) ( (  read_dash_key1106 ) ) ) );
        while (true) {
            struct Maybe_525  __cond1273 =  next529 (&temp1272);
            if (  __cond1273 .tag == 0 ) {
                break;
            }
            struct InputEvent_526  ev2796 =  __cond1273 .stuff .Maybe_525_Just_s .field0;
            events2794 = (  op_dash_add82 ( (  events2794 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1112  temp1274 = ( (struct funenv1112){ .fun = update_dash_dimensions1112, .env =  envinst1112  } );
            ( temp1274.fun ( temp1274.env ,  (  tui2789 ) ) );
            struct InputEvent_526  dref2797 = (  ev2796 );
            if ( dref2797.tag == InputEvent_526_Key_t ) {
                struct Key_527  dref2799 = ( dref2797 .stuff .InputEvent_526_Key_s .field0 );
                if ( dref2799.tag == Key_527_Char_t ) {
                    struct Mode_775 *  dref2801 = ( & ( ( * (  ed2788 ) ) .f_mode ) );
                    if ( (* dref2801 ).tag == Mode_775_Normal_t ) {
                        int32_t  code2802 = ( (  u8_dash_i32276 ) ( ( (  cast194 ) ( ( dref2799 .stuff .Key_527_Char_s .field0 ) ) ) ) );
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                            (*  ed2788 ) .f_running = ( false );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                            struct funenv1181  temp1275 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                            struct funenv1233  temp1276 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1275.fun ( temp1275.env ,  (  ed2788 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1276.fun ( temp1276.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                            struct funenv1181  temp1277 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                            struct funenv1233  temp1278 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1277.fun ( temp1277.env ,  (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1278.fun ( temp1278.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                            struct funenv1183  temp1279 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                            struct funenv1233  temp1280 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1279.fun ( temp1279.env ,  (  ed2788 ) ,  ( temp1280.fun ( temp1280.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                            struct funenv1187  temp1281 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                            struct funenv1233  temp1282 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1281.fun ( temp1281.env ,  (  ed2788 ) ,  ( temp1282.fun ( temp1282.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                            struct funenv1196  temp1283 = ( (struct funenv1196){ .fun = delete_dash_selected1196, .env =  envinst1196  } );
                            ( temp1283.fun ( temp1283.env ,  (  ed2788 ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                            struct funenv1196  temp1284 = ( (struct funenv1196){ .fun = delete_dash_selected1196, .env =  envinst1196  } );
                            ( temp1284.fun ( temp1284.env ,  (  ed2788 ) ) );
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                            struct funenv1190  temp1285 = ( (struct funenv1190){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1190, .env =  envinst1190  } );
                            struct funenv1233  temp1286 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1285.fun ( temp1285.env ,  (  ed2788 ) ,  ( temp1286.fun ( temp1286.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                            struct funenv1192  temp1287 = ( (struct funenv1192){ .fun = move_dash_to_dash_end_dash_of_dash_line1192, .env =  envinst1192  } );
                            struct funenv1233  temp1288 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1287.fun ( temp1287.env ,  (  ed2788 ) ,  ( temp1288.fun ( temp1288.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                            struct funenv1213  temp1289 = ( (struct funenv1213){ .fun = insert_dash_empty_dash_row_dash_at1213, .env =  envinst1213  } );
                            ( temp1289.fun ( temp1289.env ,  (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2790 ) ) );
                            struct List_3 *  currow2803 = ( (  get_dash_row1162 ) ( (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1175  temp1290 = ( (struct funenv1175){ .fun = move_dash_to1175, .env =  envinst1175  } );
                            struct funenv1233  temp1291 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1290.fun ( temp1290.env ,  (  ed2788 ) ,  ( (  size_dash_i32270 ) ( ( (  size996 ) ( (  currow2803 ) ) ) ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1291.fun ( temp1291.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                            struct funenv1213  temp1292 = ( (struct funenv1213){ .fun = insert_dash_empty_dash_row_dash_at1213, .env =  envinst1213  } );
                            ( temp1292.fun ( temp1292.env ,  (  ed2788 ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ,  (  al2790 ) ) );
                            struct funenv1192  temp1293 = ( (struct funenv1192){ .fun = move_dash_to_dash_end_dash_of_dash_line1192, .env =  envinst1192  } );
                            struct funenv1233  temp1294 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1293.fun ( temp1293.env ,  (  ed2788 ) ,  ( temp1294.fun ( temp1294.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                            (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                            (*  ed2788 ) .f_mode = ( ( Mode_775_Cmd ) ( ( (  mk1036 ) ( (  al2790 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                            if ( ( (  eq41 ( ( (  maybe1061 ) ( ( ( * (  ed2788 ) ) .f_selected ) ,  (  lam1295 ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1195 ) ( (  ed2788 ) ) ) ) ) {
                                struct funenv1233  temp1296 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                                struct Dims_1176  dims2806 = ( temp1296.fun ( temp1296.env ,  (  ed2788 ) ,  (  tui2789 ) ) );
                                struct Cursor_756  sel2807 = ( (  or_dash_else910 ) ( ( ( * (  ed2788 ) ) .f_selected ) ,  ( ( * (  ed2788 ) ) .f_cursor ) ) );
                                struct funenv1181  temp1297 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                                ( temp1297.fun ( temp1297.env ,  (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2806 ) ) );
                                struct funenv1192  temp1298 = ( (struct funenv1192){ .fun = move_dash_to_dash_end_dash_of_dash_line1192, .env =  envinst1192  } );
                                ( temp1298.fun ( temp1298.env ,  (  ed2788 ) ,  (  dims2806 ) ) );
                                (*  ed2788 ) .f_selected = ( ( Maybe_911_Just ) ( (  sel2807 ) ) );
                            } else {
                                struct funenv1192  temp1299 = ( (struct funenv1192){ .fun = move_dash_to_dash_end_dash_of_dash_line1192, .env =  envinst1192  } );
                                struct funenv1233  temp1300 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                                ( temp1299.fun ( temp1299.env ,  (  ed2788 ) ,  ( temp1300.fun ( temp1300.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                                (*  ed2788 ) .f_selected = ( ( Maybe_911_Just ) ( ( (struct Cursor_756) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1062 ) ( ( ( * (  ed2788 ) ) .f_selected ) ,  (  lam1301 ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                            struct funenv1233  temp1302 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1176  dims2810 = ( temp1302.fun ( temp1302.env ,  (  ed2788 ) ,  (  tui2789 ) ) );
                            struct Cursor_756  first_dash_pos2811 = ( ( * (  ed2788 ) ) .f_cursor );
                            struct funenv1187  temp1303 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                            ( temp1303.fun ( temp1303.env ,  (  ed2788 ) ,  (  dims2810 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at1168 ) ( (  ed2788 ) ,  (  first_dash_pos2811 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2811 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1195 ) ( (  ed2788 ) ) ) ) {
                                struct funenv1187  temp1304 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1304.fun ( temp1304.env ,  (  ed2788 ) ,  (  dims2810 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2811 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1063 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1305 ) ,  ( false ) ) ) ) {
                                struct funenv1187  temp1306 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1306.fun ( temp1306.env ,  (  ed2788 ) ,  (  dims2810 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1064 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1307 ) ,  ( false ) ) ) ) {
                                struct funenv1187  temp1308 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1308.fun ( temp1308.env ,  (  ed2788 ) ,  (  dims2810 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1160 ( (  first_dash_pos2811 ) , ( ( * (  ed2788 ) ) .f_cursor ) ) ) ) {
                                struct funenv1183  temp1309 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                                ( temp1309.fun ( temp1309.env ,  (  ed2788 ) ,  (  dims2810 ) ) );
                                (*  ed2788 ) .f_selected = ( ( Maybe_911_Just ) ( (  first_dash_pos2811 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                            struct funenv1233  temp1310 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1176  dims2816 = ( temp1310.fun ( temp1310.env ,  (  ed2788 ) ,  (  tui2789 ) ) );
                            struct Cursor_756  first_dash_pos2817 = ( ( * (  ed2788 ) ) .f_cursor );
                            struct funenv1187  temp1311 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                            ( temp1311.fun ( temp1311.env ,  (  ed2788 ) ,  (  dims2816 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at1168 ) ( (  ed2788 ) ,  (  first_dash_pos2817 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2817 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1195 ) ( (  ed2788 ) ) ) ) {
                                struct funenv1187  temp1312 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1312.fun ( temp1312.env ,  (  ed2788 ) ,  (  dims2816 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2817 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1065 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1313 ) ,  ( false ) ) ) ) {
                                struct funenv1187  temp1314 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1314.fun ( temp1314.env ,  (  ed2788 ) ,  (  dims2816 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1066 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1315 ) ,  ( false ) ) ) ) {
                                struct funenv1187  temp1316 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                if ( ( ! ( temp1316.fun ( temp1316.env ,  (  ed2788 ) ,  (  dims2816 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1160 ( (  first_dash_pos2817 ) , ( ( * (  ed2788 ) ) .f_cursor ) ) ) ) {
                                struct funenv1183  temp1317 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                                ( temp1317.fun ( temp1317.env ,  (  ed2788 ) ,  (  dims2816 ) ) );
                                (*  ed2788 ) .f_selected = ( ( Maybe_911_Just ) ( (  first_dash_pos2817 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2799 .stuff .Key_527_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                            struct funenv1233  temp1318 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1176  dims2822 = ( temp1318.fun ( temp1318.env ,  (  ed2788 ) ,  (  tui2789 ) ) );
                            struct Cursor_756  first_dash_pos2823 = ( ( * (  ed2788 ) ) .f_cursor );
                            struct funenv1183  temp1319 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                            ( temp1319.fun ( temp1319.env ,  (  ed2788 ) ,  (  dims2822 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1059 ) ( ( (  char_dash_at1168 ) ( (  ed2788 ) ,  (  first_dash_pos2823 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2823 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1195 ) ( (  ed2788 ) ) ) ) {
                                struct funenv1183  temp1320 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                                if ( ( ! ( temp1320.fun ( temp1320.env ,  (  ed2788 ) ,  (  dims2822 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2823 = ( ( * (  ed2788 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1067 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1321 ) ,  ( false ) ) ) ) {
                                struct funenv1183  temp1322 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                                if ( ( ! ( temp1322.fun ( temp1322.env ,  (  ed2788 ) ,  (  dims2822 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1068 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1323 ) ,  ( false ) ) ) ) {
                                struct funenv1183  temp1324 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                                if ( ( ! ( temp1324.fun ( temp1324.env ,  (  ed2788 ) ,  (  dims2822 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1160 ( (  first_dash_pos2823 ) , ( ( * (  ed2788 ) ) .f_cursor ) ) ) ) {
                                if ( ( (  maybe1069 ) ( ( (  char_dash_at_dash_cursor1169 ) ( (  ed2788 ) ) ) ,  (  lam1325 ) ,  ( true ) ) ) ) {
                                    struct funenv1187  temp1326 = ( (struct funenv1187){ .fun = move_dash_right1187, .env =  envinst1187  } );
                                    ( temp1326.fun ( temp1326.env ,  (  ed2788 ) ,  (  dims2822 ) ) );
                                }
                                (*  ed2788 ) .f_selected = ( ( Maybe_911_Just ) ( (  first_dash_pos2823 ) ) );
                            }
                        }
                    }
                    else if ( (* dref2801 ).tag == Mode_775_Insert_t ) {
                        struct funenv971  temp1327 = ( (struct funenv971){ .fun = insert971, .env =  envinst971  } );
                        ( temp1327.fun ( temp1327.env ,  ( (  cursor_dash_row1163 ) ( (  ed2788 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2799 .stuff .Key_527_Char_s .field0 ) ) );
                        struct funenv1179  temp1328 = ( (struct funenv1179){ .fun = move_dash_to_dash_col1179, .env =  envinst1179  } );
                        struct funenv1233  temp1329 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1328.fun ( temp1328.env ,  (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1329.fun ( temp1329.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                    }
                    else if ( (* dref2801 ).tag == Mode_775_Cmd_t ) {
                        struct funenv606  temp1330 = ( (struct funenv606){ .fun = write_dash_char606, .env =  envinst606  } );
                        ( temp1330.fun ( temp1330.env ,  ( & ( (* dref2801 ) .stuff .Mode_775_Cmd_s .field0 ) ) ,  ( dref2799 .stuff .Key_527_Char_s .field0 ) ) );
                    }
                }
                else if ( dref2799.tag == Key_527_Ctrl_t ) {
                    if ( (  eq48 ( ( dref2799 .stuff .Key_527_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2788 ) .f_screen_dash_top = ( (  max759 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( ( * (  ed2788 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1181  temp1331 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                        struct funenv1233  temp1332 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1331.fun ( temp1331.env ,  (  ed2788 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1332.fun ( temp1332.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref2799 .stuff .Key_527_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2788 ) .f_screen_dash_top = ( (  max759 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( * (  ed2788 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1181  temp1333 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                        struct funenv1233  temp1334 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1333.fun ( temp1333.env ,  (  ed2788 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1334.fun ( temp1334.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                    }
                }
                else if ( dref2799.tag == Key_527_Escape_t ) {
                    struct Mode_775  dref2832 = ( ( * (  ed2788 ) ) .f_mode );
                    if ( dref2832.tag == Mode_775_Normal_t ) {
                    }
                    else if ( dref2832.tag == Mode_775_Insert_t ) {
                        (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Normal_t } );
                    }
                    else if ( dref2832.tag == Mode_775_Cmd_t ) {
                        ( (  free1037 ) ( ( & ( dref2832 .stuff .Mode_775_Cmd_s .field0 ) ) ) );
                        (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Normal_t } );
                    }
                }
                else if ( dref2799.tag == Key_527_Backspace_t ) {
                    struct Mode_775 *  dref2834 = ( & ( ( * (  ed2788 ) ) .f_mode ) );
                    if ( (* dref2834 ).tag == Mode_775_Normal_t ) {
                    }
                    else if ( (* dref2834 ).tag == Mode_775_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1183  temp1335 = ( (struct funenv1183){ .fun = move_dash_left1183, .env =  envinst1183  } );
                            struct funenv1233  temp1336 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1335.fun ( temp1335.env ,  (  ed2788 ) ,  ( temp1336.fun ( temp1336.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                            struct funenv1196  temp1337 = ( (struct funenv1196){ .fun = delete_dash_selected1196, .env =  envinst1196  } );
                            ( temp1337.fun ( temp1337.env ,  (  ed2788 ) ) );
                        }
                    }
                    else if ( (* dref2834 ).tag == Mode_775_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1035 ) ( ( & ( (* dref2834 ) .stuff .Mode_775_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1033  temp1338 = ( (struct funenv1033){ .fun = pop1033, .env =  envinst1033  } );
                            ( temp1338.fun ( temp1338.env ,  ( & ( (* dref2834 ) .stuff .Mode_775_Cmd_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2799.tag == Key_527_Enter_t ) {
                    struct Mode_775  dref2836 = ( ( * (  ed2788 ) ) .f_mode );
                    if ( dref2836.tag == Mode_775_Normal_t ) {
                    }
                    else if ( dref2836.tag == Mode_775_Insert_t ) {
                        int32_t  cx2837 = ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1339 = ( (  mk963 ) ( (  al2790 ) ) );
                        struct List_3 *  nurow2838 = ( &temp1339 );
                        struct TakeWhile_489  rowws2839 = ( (  indent_dash_on_dash_row1164 ) ( (  ed2788 ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2840 = ( (  size_dash_i32270 ) ( ( (  count716 ) ( (  rowws2839 ) ) ) ) );
                        struct funenv985  temp1340 = ( (struct funenv985){ .fun = add_dash_all985, .env =  envinst985  } );
                        ( temp1340.fun ( temp1340.env ,  (  nurow2838 ) ,  (  rowws2839 ) ) );
                        struct List_3 *  cur_dash_row2841 = ( (  cursor_dash_row1163 ) ( (  ed2788 ) ) );
                        struct funenv983  temp1341 = ( (struct funenv983){ .fun = add_dash_all983, .env =  envinst983  } );
                        ( temp1341.fun ( temp1341.env ,  (  nurow2838 ) ,  ( (  subslice306 ) ( ( (  to_dash_slice993 ) ( ( * (  cur_dash_row2841 ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  cx2837 ) ) ) ,  ( ( * (  cur_dash_row2841 ) ) .f_count ) ) ) ) );
                        ( (  trim987 ) ( (  cur_dash_row2841 ) ,  ( (  i32_dash_size268 ) ( (  cx2837 ) ) ) ) );
                        struct funenv968  temp1342 = ( (struct funenv968){ .fun = insert968, .env =  envinst968  } );
                        ( temp1342.fun ( temp1342.env ,  ( & ( ( * (  ed2788 ) ) .f_current_dash_file ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2838 ) ) ) );
                        struct funenv1175  temp1343 = ( (struct funenv1175){ .fun = move_dash_to1175, .env =  envinst1175  } );
                        struct funenv1233  temp1344 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1343.fun ( temp1343.env ,  (  ed2788 ) ,  (  offchars2840 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1344.fun ( temp1344.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                    }
                    else if ( dref2836.tag == Mode_775_Cmd_t ) {
                        struct DynStr_131  s2843 = ( (  as_dash_str781 ) ( ( & ( dref2836 .stuff .Mode_775_Cmd_s .field0 ) ) ) );
                        struct funenv1255  temp1345 = ( (struct funenv1255){ .fun = run_dash_cmd1255, .env =  envinst1255  } );
                        struct funenv1233  temp1346 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1345.fun ( temp1345.env ,  (  ed2788 ) ,  (  s2843 ) ,  ( temp1346.fun ( temp1346.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ,  (  al2790 ) ) );
                        ( (  free1037 ) ( ( & ( dref2836 .stuff .Mode_775_Cmd_s .field0 ) ) ) );
                        (*  ed2788 ) .f_mode = ( (struct Mode_775) { .tag = Mode_775_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2797.tag == InputEvent_526_Mouse_t ) {
                enum MouseButton_144  dref2845 = ( ( dref2797 .stuff .InputEvent_526_Mouse_s .field0 ) .f_button );
                switch (  dref2845 ) {
                    case MouseButton_144_MouseLeft : {
                        if ( ( ( dref2797 .stuff .InputEvent_526_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2846 = ( (  size_dash_i32270 ) ( ( ( ( * (  ed2788 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2847 = ( (  clamp762 ) ( (  op_dash_add82 ( ( ( * (  ed2788 ) ) .f_screen_dash_top ) , ( ( dref2797 .stuff .InputEvent_526_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  linecnt2846 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1231  temp1347 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  envinst1231  } );
                            struct Visual_1057  vx2848 = ( ( Visual_1057_Visual ) ( (  op_dash_sub83 ( ( ( dref2797 .stuff .InputEvent_526_Mouse_s .field0 ) .f_x ) , ( ( temp1347.fun ( temp1347.env ,  (  ed2788 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1171  temp1348 = ( (struct funenv1171){ .fun = visual_dash_x_dash_to_dash_x1171, .env =  envinst1171  } );
                            int32_t  cx2849 = ( temp1348.fun ( temp1348.env ,  (  ed2788 ) ,  (  vx2848 ) ,  (  cy2847 ) ) );
                            (*  ed2788 ) .f_cursor .f_x = (  cx2849 );
                            (*  ed2788 ) .f_goal_dash_x = (  vx2848 );
                            struct funenv1181  temp1349 = ( (struct funenv1181){ .fun = move_dash_to_dash_row1181, .env =  envinst1181  } );
                            struct funenv1233  temp1350 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1349.fun ( temp1349.env ,  (  ed2788 ) ,  (  cy2847 ) ,  ( temp1350.fun ( temp1350.env ,  (  ed2788 ) ,  (  tui2789 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable894 ) ( ) );
            }
        }
        struct funenv1127  temp1351 = ( (struct funenv1127){ .fun = resize_dash_screen_dash_if_dash_needed1127, .env =  envinst1127  } );
        bool  resized2850 = ( temp1351.fun ( temp1351.env ,  (  screen2791 ) ) );
        if ( ( ( ( (  resized2850 ) || (  cmp75 ( (  events2794 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2793 ) ) || ( (  is_dash_just1052 ) ( ( ( * (  ed2788 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2793 = ( false );
            ( (  clear_dash_screen1117 ) ( (  screen2791 ) ) );
            ( (  set_dash_screen_dash_fg1129 ) ( (  screen2791 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_White16 ) ) ) ) );
            ( (  set_dash_screen_dash_bg1130 ) ( (  screen2791 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_Black16 ) ) ) ) );
            ( (  fill_dash_default1133 ) ( (  screen2791 ) ) );
            struct funenv1235  temp1352 = ( (struct funenv1235){ .fun = render_dash_editor1235, .env =  envinst1235  } );
            ( temp1352.fun ( temp1352.env ,  (  screen2791 ) ,  (  ed2788 ) ) );
            bool  debug2851 = ( true );
            if ( (  debug2851 ) ) {
                ( (  draw_dash_str_dash_right1148 ) ( (  screen2791 ) ,  ( ( StrConcat_774_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2788 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1149 ) ( (  screen2791 ) ,  ( ( StrConcat_790_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2789 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1055 envinst1055 = {
                    .ed2788 =  ed2788 ,
                };
                struct Maybe_366  charcode2856 = ( (  fmap_dash_maybe1060 ) ( ( (  and_dash_maybe1054 ) ( ( (  try_dash_get959 ) ( ( & ( ( * (  ed2788 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1055){ .fun = lam1055, .env = envinst1055 } ) ) ) ,  (  lam1353 ) ) );
                ( (  draw_dash_str_dash_right1150 ) ( (  screen2791 ) ,  ( ( StrConcat_792_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2856 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1151 ) ( (  screen2791 ) ,  ( ( StrConcat_818_StrConcat ) ( ( ( StrConcat_819_StrConcat ) ( ( ( StrConcat_820_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2857 = ( ( * ( (  get_dash_row1162 ) ( (  ed2788 ) ,  ( ( ( * (  ed2788 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1152 ) ( (  screen2791 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2857 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2858 = ( (  from_dash_visual1161 ) ( ( ( * (  ed2788 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1153 ) ( (  screen2791 ) ,  ( ( StrConcat_820_StrConcat ) ( ( "goal x: " ) ,  (  gx2858 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1233  temp1354 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                struct Dims_1176  dim2859 = ( temp1354.fun ( temp1354.env ,  (  ed2788 ) ,  (  tui2789 ) ) );
                ( (  draw_dash_str_dash_right1154 ) ( (  screen2791 ) ,  ( ( StrConcat_827_StrConcat ) ( ( ( StrConcat_828_StrConcat ) ( ( ( StrConcat_820_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2788 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2859 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
            }
            ( (  update_dash_animation1250 ) ( ( & ( ( * (  ed2788 ) ) .f_anim ) ) ,  (  screen2791 ) ) );
            ( (  render_dash_screen1121 ) ( (  screen2791 ) ) );
        }
        ( (  sync1095 ) ( (  tui2789 ) ) );
    }
    ( (  free_dash_screen1116 ) ( (  screen2791 ) ) );
    ( (  deinit1099 ) ( (  tui2789 ) ) );
}
