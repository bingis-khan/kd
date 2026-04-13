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

struct DynStr_129 {
    struct Slice_5  f_contents;
};

static  struct DynStr_129   undefined128 (  ) {
    struct DynStr_129  temp130;
    return (  temp130 );
}

static  char   undefined131 (  ) {
    char  temp132;
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

static  size_t   size_dash_of173 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of174 (    char  x457 ) {
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

static  FILE *   zeroed227 (  ) {
    FILE *  temp228;
    FILE *  x473 = (  temp228 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed229 (  ) {
    char  temp230;
    char  x473 = (  temp230 );
    ( ( memset ) ( ( (  cast_dash_ptr208 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of174 ) ( (  x473 ) ) ) ) );
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
    return ( (  zeroed227 ) ( ) );
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

static  size_t   min284 (    size_t  l965 ,    size_t  r967 ) {
    if ( (  cmp9 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  struct Slice_279   subslice283 (    struct Slice_279  slice1325 ,    size_t  from1327 ,    size_t  to1329 ) {
    struct List_3 *  begin_dash_ptr1330 = ( (  offset_dash_ptr154 ) ( ( (  slice1325 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1327 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1327 ) , (  to1329 ) ) != 0 ) || (  cmp9 ( (  from1327 ) , ( (  slice1325 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1331 = (  op_dash_sub94 ( ( (  min284 ) ( (  to1329 ) ,  ( (  slice1325 ) .f_count ) ) ) , (  from1327 ) ) );
    return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  count1331 ) } );
}

static  struct SliceIter_278   into_dash_iter281 (    struct List_280  self1620 ) {
    return ( (  into_dash_iter282 ) ( ( (  subslice283 ) ( ( (  self1620 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1620 ) .f_count ) ) ) ) );
}

static  struct SliceIter_278   into_dash_iter277 (    struct List_280 *  self547 ) {
    return ( (  into_dash_iter281 ) ( ( * (  self547 ) ) ) );
}

struct SliceIter_287 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_286 {
    struct SliceIter_287  f_s;
};

static  struct Scanner_286   into_dash_iter288 (    struct Scanner_286  self2188 ) {
    return (  self2188 );
}

static  struct Scanner_286   into_dash_iter285 (    struct Scanner_286 *  self547 ) {
    return ( (  into_dash_iter288 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_287   into_dash_iter291 (    struct Slice_5  self1339 ) {
    return ( (struct SliceIter_287) { .f_slice = (  self1339 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice292 (    struct Slice_5  slice1325 ,    size_t  from1327 ,    size_t  to1329 ) {
    char *  begin_dash_ptr1330 = ( (  offset_dash_ptr31 ) ( ( (  slice1325 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1327 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1327 ) , (  to1329 ) ) != 0 ) || (  cmp9 ( (  from1327 ) , ( (  slice1325 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1331 = (  op_dash_sub94 ( ( (  min284 ) ( (  to1329 ) ,  ( (  slice1325 ) .f_count ) ) ) , (  from1327 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1330 ) , .f_count = (  count1331 ) } );
}

static  struct SliceIter_287   into_dash_iter290 (    struct List_3  self1620 ) {
    return ( (  into_dash_iter291 ) ( ( (  subslice292 ) ( ( (  self1620 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1620 ) .f_count ) ) ) ) );
}

static  struct SliceIter_287   into_dash_iter289 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter290 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_294 {
    EmptyIter_294_EmptyIter,
};

static  enum EmptyIter_294   nil293 (  ) {
    return ( EmptyIter_294_EmptyIter );
}

static  enum EmptyIter_294   into_dash_iter295 (    enum EmptyIter_294  self552 ) {
    return (  self552 );
}

struct Maybe_297 {
    enum {
        Maybe_297_None_t,
        Maybe_297_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_297_Just_s;
    } stuff;
};

static struct Maybe_297 Maybe_297_Just (  char  field0 ) {
    return ( struct Maybe_297 ) { .tag = Maybe_297_Just_t, .stuff = { .Maybe_297_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_297   next296 (    enum EmptyIter_294 *  dref554 ) {
    return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
}

struct LineIter_300 {
    struct DynStr_129  f_og;
    size_t  f_last;
};

struct env305 {
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

struct funenv305 {
    enum Unit_13  (*fun) (  struct env305  ,    struct List_3 *  );
    struct env305 env;
};

struct env304 {
    ;
    ;
    ;
    ;
    struct env305 envinst305;
    ;
};

struct funenv304 {
    enum Unit_13  (*fun) (  struct env304  ,    struct List_3 *  ,    char  );
    struct env304 env;
};

struct env303 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

struct funenv303 {
    enum Unit_13  (*fun) (  struct env303  ,    struct List_3 *  ,    struct DynStr_129  );
    struct env303 env;
};

struct env302 {
    ;
    ;
    ;
    ;
    struct env303 envinst303;
    ;
};

struct funenv302 {
    struct List_3  (*fun) (  struct env302  ,    struct DynStr_129  ,    enum CAllocator_4  );
    struct env302 env;
};

struct env301 {
    enum CAllocator_4  al2640;
    struct env302 envinst302;
};

struct funenv301 {
    struct List_3  (*fun) (  struct env301  ,    struct DynStr_129  );
    struct env301 env;
};

struct Map_299 {
    struct LineIter_300  field0;
    struct funenv301  field1;
};

static struct Map_299 Map_299_Map (  struct LineIter_300  field0 , struct funenv301  field1 ) {
    return ( struct Map_299 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_299   into_dash_iter298 (    struct Map_299  self558 ) {
    return (  self558 );
}

struct ConstStrIter_308 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_307 {
    struct ConstStrIter_308  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_307 Map_307_Map (  struct ConstStrIter_308  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_307 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_307   into_dash_iter306 (    struct Map_307  self558 ) {
    return (  self558 );
}

struct Take_311 {
    struct SliceIter_287  field0;
    size_t  field1;
};

static struct Take_311 Take_311_Take (  struct SliceIter_287  field0 ,  size_t  field1 ) {
    return ( struct Take_311 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env312 {
    ;
    ;
    ;
    int32_t  tab_dash_size2430;
};

struct funenv312 {
    int32_t  (*fun) (  struct env312  ,    char  );
    struct env312 env;
};

struct Map_310 {
    struct Take_311  field0;
    struct funenv312  field1;
};

static struct Map_310 Map_310_Map (  struct Take_311  field0 , struct funenv312  field1 ) {
    return ( struct Map_310 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_310   into_dash_iter309 (    struct Map_310  self558 ) {
    return (  self558 );
}

struct Maybe_314 {
    enum {
        Maybe_314_None_t,
        Maybe_314_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_314_Just_s;
    } stuff;
};

static struct Maybe_314 Maybe_314_Just (  struct List_3  field0 ) {
    return ( struct Maybe_314 ) { .tag = Maybe_314_Just_t, .stuff = { .Maybe_314_Just_s = { .field0 = field0 } } };
};

struct Maybe_315 {
    enum {
        Maybe_315_None_t,
        Maybe_315_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_129  field0;
        } Maybe_315_Just_s;
    } stuff;
};

static struct Maybe_315 Maybe_315_Just (  struct DynStr_129  field0 ) {
    return ( struct Maybe_315 ) { .tag = Maybe_315_Just_t, .stuff = { .Maybe_315_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail318 (    struct Maybe_297  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_297  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_297_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_297_Just_t ) {
        return ( dref1270 .stuff .Maybe_297_Just_s .field0 );
    }
}

static  struct Maybe_297   try_dash_get319 (    struct Slice_5  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char *  elem_dash_ptr1309 = ( (  offset_dash_ptr31 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_297_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  char   get317 (    struct Slice_5  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail318 ) ( ( (  try_dash_get319 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar320 (  ) {
    return ( (  zeroed229 ) ( ) );
}

static  char   newline321 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_129   substr322 (    struct DynStr_129  s1435 ,    size_t  from1437 ,    size_t  to1439 ) {
    return ( (struct DynStr_129) { .f_contents = ( (  subslice292 ) ( ( (  s1435 ) .f_contents ) ,  (  from1437 ) ,  (  to1439 ) ) ) } );
}

static  struct Maybe_315   next316 (    struct LineIter_300 *  self1548 ) {
    if ( ( (  cmp9 ( ( ( * (  self1548 ) ) .f_last ) , ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq48 ( ( (  get317 ) ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1548 ) ) .f_last ) ) ) , ( (  nullchar320 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    size_t  i1549 = ( ( * (  self1548 ) ) .f_last );
    while ( ( ! ( (  eq48 ( ( (  get317 ) ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) ,  (  i1549 ) ) ) , ( (  newline321 ) ( ) ) ) ) && (  cmp9 ( (  i1549 ) , ( ( ( ( * (  self1548 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) ) ) {
        i1549 = (  op_dash_add93 ( (  i1549 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_129  line1550 = ( (  substr322 ) ( ( ( * (  self1548 ) ) .f_og ) ,  ( ( * (  self1548 ) ) .f_last ) ,  (  i1549 ) ) );
    i1549 = (  op_dash_add93 ( (  i1549 ) , (  from_dash_integral11 ( 1 ) ) ) );
    (*  self1548 ) .f_last = (  i1549 );
    return ( ( Maybe_315_Just ) ( (  line1550 ) ) );
}

static  struct Maybe_314   next313 (    struct Map_299 *  dref560 ) {
    struct Maybe_315  dref563 = ( (  next316 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_315_None_t ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    else if ( dref563.tag == Maybe_315_Just_t ) {
        struct funenv301  temp323 = ( (* dref560 ) .field1 );
        return ( ( Maybe_314_Just ) ( ( temp323.fun ( temp323.env ,  ( dref563 .stuff .Maybe_315_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_325 {
    enum {
        Maybe_325_None_t,
        Maybe_325_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_325_Just_s;
    } stuff;
};

static struct Maybe_325 Maybe_325_Just (  uint32_t  field0 ) {
    return ( struct Maybe_325 ) { .tag = Maybe_325_Just_t, .stuff = { .Maybe_325_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_297   next326 (    struct ConstStrIter_308 *  self1006 ) {
    if ( (  cmp9 ( ( ( * (  self1006 ) ) .f_i ) , ( (  i32_dash_size268 ) ( ( ( strlen ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char *  char_dash_ptr1007 = ( ( (  cast184 ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) );
    char  c1008 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1007 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1006 ) ) .f_i ) ) ) ) ) );
    (*  self1006 ) .f_i = (  op_dash_add93 ( ( ( * (  self1006 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_297_Just ) ( (  c1008 ) ) );
}

static  struct Maybe_325   next324 (    struct Map_307 *  dref560 ) {
    struct Maybe_297  dref563 = ( (  next326 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    else if ( dref563.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_325_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_328 {
    enum {
        Maybe_328_None_t,
        Maybe_328_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_328_Just_s;
    } stuff;
};

static struct Maybe_328 Maybe_328_Just (  int32_t  field0 ) {
    return ( struct Maybe_328 ) { .tag = Maybe_328_Just_t, .stuff = { .Maybe_328_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_297   next330 (    struct SliceIter_287 *  self1345 ) {
    size_t  off1346 = ( ( * (  self1345 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1345 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  elem1347 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1345 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1346 ) ) ) ) ) );
    (*  self1345 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_297_Just ) ( (  elem1347 ) ) );
}

static  struct Maybe_297   next329 (    struct Take_311 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_297  x626 = ( (  next330 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub94 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
}

static  struct Maybe_328   next327 (    struct Map_310 *  dref560 ) {
    struct Maybe_297  dref563 = ( (  next329 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
    else if ( dref563.tag == Maybe_297_Just_t ) {
        struct funenv312  temp331 = ( (* dref560 ) .field1 );
        return ( ( Maybe_328_Just ) ( ( temp331.fun ( temp331.env ,  ( dref563 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_300   into_dash_iter333 (    struct LineIter_300  self1545 ) {
    return (  self1545 );
}

static  struct Map_299   map332 (    struct LineIter_300  iterable567 ,   struct funenv301  fun569 ) {
    struct LineIter_300  it570 = ( (  into_dash_iter333 ) ( (  iterable567 ) ) );
    return ( ( Map_299_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct ConstStrIter_308   into_dash_iter335 (    const char*  self1000 ) {
    return ( (struct ConstStrIter_308) { .f_ogstr = (  self1000 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_307   map334 (    const char*  iterable567 ,    uint32_t (*  fun569 )(    char  ) ) {
    struct ConstStrIter_308  it570 = ( (  into_dash_iter335 ) ( (  iterable567 ) ) );
    return ( ( Map_307_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_311   into_dash_iter337 (    struct Take_311  self621 ) {
    return (  self621 );
}

static  struct Map_310   map336 (    struct Take_311  iterable567 ,   struct funenv312  fun569 ) {
    struct Take_311  it570 = ( (  into_dash_iter337 ) ( (  iterable567 ) ) );
    return ( ( Map_310_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct FromIter_341 {
    int32_t  f_from;
};

struct Zip_340 {
    struct SliceIter_287  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

struct Drop_339 {
    struct Zip_340  field0;
    size_t  field1;
};

static struct Drop_339 Drop_339_Drop (  struct Zip_340  field0 ,  size_t  field1 ) {
    return ( struct Drop_339 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_339   into_dash_iter338 (    struct Drop_339  self607 ) {
    return (  self607 );
}

struct Zip_344 {
    struct SliceIter_278  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

struct Drop_343 {
    struct Zip_344  field0;
    size_t  field1;
};

static struct Drop_343 Drop_343_Drop (  struct Zip_344  field0 ,  size_t  field1 ) {
    return ( struct Drop_343 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_343   into_dash_iter342 (    struct Drop_343  self607 ) {
    return (  self607 );
}

struct Tuple2_347 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_347 Tuple2_347_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_347 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_346 {
    enum {
        Maybe_346_None_t,
        Maybe_346_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_347  field0;
        } Maybe_346_Just_s;
    } stuff;
};

static struct Maybe_346 Maybe_346_Just (  struct Tuple2_347  field0 ) {
    return ( struct Maybe_346 ) { .tag = Maybe_346_Just_t, .stuff = { .Maybe_346_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_328   next349 (    struct FromIter_341 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add82 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_328_Just ) ( (  v669 ) ) );
}

static  struct Maybe_346   next348 (    struct Zip_340 *  self676 ) {
    struct Zip_340  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next330 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_346   next345 (    struct Drop_339 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next348 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next348 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_352 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_352 Tuple2_352_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_352 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_351 {
    enum {
        Maybe_351_None_t,
        Maybe_351_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_352  field0;
        } Maybe_351_Just_s;
    } stuff;
};

static struct Maybe_351 Maybe_351_Just (  struct Tuple2_352  field0 ) {
    return ( struct Maybe_351 ) { .tag = Maybe_351_Just_t, .stuff = { .Maybe_351_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_314   next354 (    struct SliceIter_278 *  self1345 ) {
    size_t  off1346 = ( ( * (  self1345 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1345 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    struct List_3  elem1347 = ( * ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1345 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1346 ) ) ) ) ) );
    (*  self1345 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_314_Just ) ( (  elem1347 ) ) );
}

static  struct Maybe_351   next353 (    struct Zip_344 *  self676 ) {
    struct Zip_344  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_314  dref678 = ( (  next354 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_314_None_t ) {
            return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
        }
        else if ( dref678.tag == Maybe_314_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next354 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_351_Just ) ( ( ( Tuple2_352_Tuple2 ) ( ( dref678 .stuff .Maybe_314_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_351   next350 (    struct Drop_343 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next353 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next353 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_340   into_dash_iter356 (    struct Zip_340  self673 ) {
    return (  self673 );
}

static  struct Drop_339   drop355 (    struct Zip_340  iterable614 ,    size_t  i616 ) {
    struct Zip_340  it617 = ( (  into_dash_iter356 ) ( (  iterable614 ) ) );
    return ( ( Drop_339_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_344   into_dash_iter358 (    struct Zip_344  self673 ) {
    return (  self673 );
}

static  struct Drop_343   drop357 (    struct Zip_344  iterable614 ,    size_t  i616 ) {
    struct Zip_344  it617 = ( (  into_dash_iter358 ) ( (  iterable614 ) ) );
    return ( ( Drop_343_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_311   take359 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_311_Take ) ( ( (  into_dash_iter289 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_361 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_361 Range_361_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_361 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_361   to360 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_361_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_363 {
    struct Range_361  field0;
    int32_t  field1;
};

static struct RangeIter_363 RangeIter_363_RangeIter (  struct Range_361  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_363 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_363   into_dash_iter362 (    struct Range_361  dref645 ) {
    return ( ( RangeIter_363_RangeIter ) ( ( ( Range_361_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_328   next364 (    struct RangeIter_363 *  self653 ) {
    struct RangeIter_363  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp75 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
        }
        struct Maybe_328  x658 = ( ( Maybe_328_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_363_RangeIter ) ( ( ( Range_361_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add82 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_341   from365 (    int32_t  f662 ) {
    return ( (struct FromIter_341) { .f_from = (  f662 ) } );
}

static  struct FromIter_341   into_dash_iter366 (    struct FromIter_341  it665 ) {
    return (  it665 );
}

struct IntStrIter_369 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_368 {
    struct IntStrIter_369  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_368   into_dash_iter367 (    struct Zip_368  self673 ) {
    return (  self673 );
}

struct StrConcatIter_375 {
    struct ConstStrIter_308  f_left;
    struct SliceIter_287  f_right;
};

struct AppendIter_376 {
    enum EmptyIter_294  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_374 {
    struct StrConcatIter_375  f_left;
    struct AppendIter_376  f_right;
};

struct StrCaseIter_373 {
    enum {
        StrCaseIter_373_StrCaseIter1_t,
        StrCaseIter_373_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_373_StrCaseIter1_s;
        struct {
            struct StrConcatIter_374  field0;
        } StrCaseIter_373_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_373 StrCaseIter_373_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_373 ) { .tag = StrCaseIter_373_StrCaseIter1_t, .stuff = { .StrCaseIter_373_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_373 StrCaseIter_373_StrCaseIter2 (  struct StrConcatIter_374  field0 ) {
    return ( struct StrCaseIter_373 ) { .tag = StrCaseIter_373_StrCaseIter2_t, .stuff = { .StrCaseIter_373_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_372 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_373  f_right;
};

struct Zip_371 {
    struct StrConcatIter_372  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_371   into_dash_iter370 (    struct Zip_371  self673 ) {
    return (  self673 );
}

struct IntStrIter_380 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_379 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_380  f_right;
};

struct Zip_378 {
    struct StrConcatIter_379  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_378   into_dash_iter377 (    struct Zip_378  self673 ) {
    return (  self673 );
}

struct StrConcatIter_390 {
    struct AppendIter_376  f_left;
    struct AppendIter_376  f_right;
};

struct StrConcatIter_389 {
    struct StrConcatIter_390  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_388 {
    struct StrConcatIter_389  f_left;
    struct IntStrIter_369  f_right;
};

struct StrConcatIter_387 {
    struct StrConcatIter_388  f_left;
    struct AppendIter_376  f_right;
};

struct StrConcatIter_386 {
    struct ConstStrIter_308  f_left;
    struct StrConcatIter_387  f_right;
};

struct StrConcatIter_385 {
    struct StrConcatIter_386  f_left;
    struct AppendIter_376  f_right;
};

struct StrCaseIter_384 {
    enum {
        StrCaseIter_384_StrCaseIter1_t,
        StrCaseIter_384_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_384_StrCaseIter1_s;
        struct {
            struct StrConcatIter_385  field0;
        } StrCaseIter_384_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_384 StrCaseIter_384_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_384 ) { .tag = StrCaseIter_384_StrCaseIter1_t, .stuff = { .StrCaseIter_384_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_384 StrCaseIter_384_StrCaseIter2 (  struct StrConcatIter_385  field0 ) {
    return ( struct StrCaseIter_384 ) { .tag = StrCaseIter_384_StrCaseIter2_t, .stuff = { .StrCaseIter_384_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_383 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_384  f_right;
};

struct Zip_382 {
    struct StrConcatIter_383  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_382   into_dash_iter381 (    struct Zip_382  self673 ) {
    return (  self673 );
}

struct StrConcatIter_395 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_369  f_right;
};

struct StrConcatIter_394 {
    struct StrConcatIter_395  f_left;
    struct AppendIter_376  f_right;
};

struct StrConcatIter_393 {
    struct StrConcatIter_394  f_left;
    struct IntStrIter_369  f_right;
};

struct Zip_392 {
    struct StrConcatIter_393  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_392   into_dash_iter391 (    struct Zip_392  self673 ) {
    return (  self673 );
}

struct IntStrIter_399 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_398 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_399  f_right;
};

struct Zip_397 {
    struct StrConcatIter_398  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_397   into_dash_iter396 (    struct Zip_397  self673 ) {
    return (  self673 );
}

struct Zip_401 {
    struct StrConcatIter_395  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_401   into_dash_iter400 (    struct Zip_401  self673 ) {
    return (  self673 );
}

struct StrConcatIter_405 {
    struct StrConcatIter_395  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_404 {
    struct StrConcatIter_405  f_left;
    struct IntStrIter_369  f_right;
};

struct Zip_403 {
    struct StrConcatIter_404  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_403   into_dash_iter402 (    struct Zip_403  self673 ) {
    return (  self673 );
}

struct env410 {
    ;
    int32_t  base923;
};

struct funenv410 {
    int32_t  (*fun) (  struct env410  ,    int32_t  ,    int32_t  );
    struct env410 env;
};

static  int32_t   reduce409 (    struct Range_361  iterable812 ,    int32_t  base814 ,   struct funenv410  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv410  temp411 = (  fun816 );
            x817 = ( temp411.fun ( temp411.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp412;
    return (  temp412 );
}

static  int32_t   lam410 (   struct env410 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul84 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow408 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env410 envinst410 = {
        .base923 =  base923 ,
    };
    return ( (  reduce409 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv410){ .fun = lam410, .env = envinst410 } ) ) );
}

static  struct Maybe_297   next407 (    struct IntStrIter_369 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow408 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div85 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul84 ( (  op_dash_div85 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub83 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast197 ) ( (  op_dash_add82 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_346   next406 (    struct Zip_368 *  self676 ) {
    struct Zip_368  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next407 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next407 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next417 (    struct StrConcatIter_375 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next330 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next418 (    struct AppendIter_376 *  self776 ) {
    struct Maybe_297  dref777 = ( (  next296 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
    if ( dref777.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref777 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref777.tag == Maybe_297_None_t ) {
        if ( ( ! ( ( * (  self776 ) ) .f_appended ) ) ) {
            (*  self776 ) .f_appended = ( true );
            return ( ( Maybe_297_Just ) ( ( ( * (  self776 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
}

static  struct Maybe_297   next416 (    struct StrConcatIter_374 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next417 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next415 (    struct StrCaseIter_373 *  self1115 ) {
    struct StrCaseIter_373 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_373_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_373_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_373_StrCaseIter2_t ) {
        return ( (  next416 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_373_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next414 (    struct StrConcatIter_372 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next415 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next413 (    struct Zip_371 *  self676 ) {
    struct Zip_371  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next414 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next414 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env424 {
    uint32_t  base923;
    ;
};

struct funenv424 {
    uint32_t  (*fun) (  struct env424  ,    int32_t  ,    uint32_t  );
    struct env424 env;
};

static  uint32_t   reduce423 (    struct Range_361  iterable812 ,    uint32_t  base814 ,   struct funenv424  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv424  temp425 = (  fun816 );
            x817 = ( temp425.fun ( temp425.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp426;
    return (  temp426 );
}

static  uint32_t   lam424 (   struct env424 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul89 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow422 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env424 envinst424 = {
        .base923 =  base923 ,
    };
    return ( (  reduce423 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv424){ .fun = lam424, .env = envinst424 } ) ) );
}

static  struct Maybe_297   next421 (    struct IntStrIter_380 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow422 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div90 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub88 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast200 ) ( (  op_dash_add87 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next420 (    struct StrConcatIter_379 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next421 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next419 (    struct Zip_378 *  self676 ) {
    struct Zip_378  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next420 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next420 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next435 (    struct StrConcatIter_390 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next434 (    struct StrConcatIter_389 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next435 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next433 (    struct StrConcatIter_388 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next434 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next407 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next432 (    struct StrConcatIter_387 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next433 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next431 (    struct StrConcatIter_386 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next432 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next430 (    struct StrConcatIter_385 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next431 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next429 (    struct StrCaseIter_384 *  self1115 ) {
    struct StrCaseIter_384 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_384_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_384_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_384_StrCaseIter2_t ) {
        return ( (  next430 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_384_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next428 (    struct StrConcatIter_383 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next427 (    struct Zip_382 *  self676 ) {
    struct Zip_382  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next428 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next428 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next439 (    struct StrConcatIter_395 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next407 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next438 (    struct StrConcatIter_394 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next439 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next418 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next437 (    struct StrConcatIter_393 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next407 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next436 (    struct Zip_392 *  self676 ) {
    struct Zip_392  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next437 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next437 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env445 {
    size_t  base923;
    ;
};

struct funenv445 {
    size_t  (*fun) (  struct env445  ,    int32_t  ,    size_t  );
    struct env445 env;
};

static  size_t   reduce444 (    struct Range_361  iterable812 ,    size_t  base814 ,   struct funenv445  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv445  temp446 = (  fun816 );
            x817 = ( temp446.fun ( temp446.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp447;
    return (  temp447 );
}

static  size_t   lam445 (   struct env445 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul95 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow443 (    size_t  base923 ,    int32_t  p925 ) {
    struct env445 envinst445 = {
        .base923 =  base923 ,
    };
    return ( (  reduce444 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv445){ .fun = lam445, .env = envinst445 } ) ) );
}

static  struct Maybe_297   next442 (    struct IntStrIter_399 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow443 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div96 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul95 ( (  op_dash_div96 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub94 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast201 ) ( (  op_dash_add93 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next441 (    struct StrConcatIter_398 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next442 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next440 (    struct Zip_397 *  self676 ) {
    struct Zip_397  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next441 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next441 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_346   next448 (    struct Zip_401 *  self676 ) {
    struct Zip_401  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next439 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next439 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next451 (    struct StrConcatIter_405 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next439 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next450 (    struct StrConcatIter_404 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next451 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next407 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next449 (    struct Zip_403 *  self676 ) {
    struct Zip_403  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next450 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_344   zip452 (    struct Slice_279  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip453 (    struct Slice_5  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip454 (    struct List_3  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter290 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip455 (    struct List_280  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_369   into_dash_iter457 (    struct IntStrIter_369  self1024 ) {
    return (  self1024 );
}

static  struct Zip_368   zip456 (    struct IntStrIter_369  left684 ,    struct FromIter_341  right686 ) {
    struct IntStrIter_369  left_dash_it687 = ( (  into_dash_iter457 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_368) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_372   into_dash_iter459 (    struct StrConcatIter_372  self1090 ) {
    return (  self1090 );
}

static  struct Zip_371   zip458 (    struct StrConcatIter_372  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_372  left_dash_it687 = ( (  into_dash_iter459 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_371) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_379   into_dash_iter461 (    struct StrConcatIter_379  self1090 ) {
    return (  self1090 );
}

static  struct Zip_378   zip460 (    struct StrConcatIter_379  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_379  left_dash_it687 = ( (  into_dash_iter461 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_378) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_383   into_dash_iter463 (    struct StrConcatIter_383  self1090 ) {
    return (  self1090 );
}

static  struct Zip_382   zip462 (    struct StrConcatIter_383  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_383  left_dash_it687 = ( (  into_dash_iter463 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_382) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_393   into_dash_iter465 (    struct StrConcatIter_393  self1090 ) {
    return (  self1090 );
}

static  struct Zip_392   zip464 (    struct StrConcatIter_393  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_393  left_dash_it687 = ( (  into_dash_iter465 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_392) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_398   into_dash_iter467 (    struct StrConcatIter_398  self1090 ) {
    return (  self1090 );
}

static  struct Zip_397   zip466 (    struct StrConcatIter_398  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_398  left_dash_it687 = ( (  into_dash_iter467 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_397) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_395   into_dash_iter469 (    struct StrConcatIter_395  self1090 ) {
    return (  self1090 );
}

static  struct Zip_401   zip468 (    struct StrConcatIter_395  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_395  left_dash_it687 = ( (  into_dash_iter469 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_401) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_404   into_dash_iter471 (    struct StrConcatIter_404  self1090 ) {
    return (  self1090 );
}

static  struct Zip_403   zip470 (    struct StrConcatIter_404  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_404  left_dash_it687 = ( (  into_dash_iter471 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_403) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_473 {
    struct Scanner_286  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_473   into_dash_iter472 (    struct TakeWhile_473  self718 ) {
    return (  self718 );
}

struct TakeWhile_475 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_475   into_dash_iter474 (    struct TakeWhile_475  self718 ) {
    return (  self718 );
}

struct DropWhile_478 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_477 {
    struct DropWhile_478  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_477   into_dash_iter476 (    struct TakeWhile_477  self718 ) {
    return (  self718 );
}

struct DropWhile_482 {
    struct DropWhile_478  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_481 {
    struct DropWhile_482  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_480 {
    struct DropWhile_481  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_480   into_dash_iter479 (    struct TakeWhile_480  self718 ) {
    return (  self718 );
}

struct TakeWhile_484 {
    struct DropWhile_481  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_484   into_dash_iter483 (    struct TakeWhile_484  self718 ) {
    return (  self718 );
}

static  struct Maybe_297   next486 (    struct Scanner_286 *  self2185 ) {
    return ( (  next330 ) ( ( & ( ( * (  self2185 ) ) .f_s ) ) ) );
}

static  struct Maybe_297   next485 (    struct TakeWhile_473 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next486 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next487 (    struct TakeWhile_475 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next330 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next489 (    struct DropWhile_478 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next330 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next330 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_297_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
        else if ( dref737.tag == Maybe_297_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_297_Just ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_297   next488 (    struct TakeWhile_477 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next489 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next492 (    struct DropWhile_482 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next489 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next489 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_297_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
        else if ( dref737.tag == Maybe_297_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_297_Just ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_297   next491 (    struct DropWhile_481 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next492 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next492 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_297_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
        else if ( dref737.tag == Maybe_297_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_297_Just ) ( ( dref737 .stuff .Maybe_297_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_297   next490 (    struct TakeWhile_480 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next491 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct Maybe_297   next493 (    struct TakeWhile_484 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next491 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

struct TakeWhile_495 {
    struct DropWhile_481  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_297   next494 (    struct TakeWhile_495 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next491 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_297  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref723.tag == Maybe_297_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_297_Just ) ( ( dref723 .stuff .Maybe_297_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
        }
    }
}

static  struct TakeWhile_473   take_dash_while496 (    struct Scanner_286 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_473) { .f_it = ( (  into_dash_iter285 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_475   take_dash_while497 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_475) { .f_it = ( (  into_dash_iter289 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_481   into_dash_iter499 (    struct DropWhile_481  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_484   take_dash_while498 (    struct DropWhile_481  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_484) { .f_it = ( (  into_dash_iter499 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_495   take_dash_while500 (    struct DropWhile_481  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_495) { .f_it = ( (  into_dash_iter499 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_480   take_dash_while501 (    struct DropWhile_481  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_480) { .f_it = ( (  into_dash_iter499 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_478   into_dash_iter503 (    struct DropWhile_478  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_477   take_dash_while502 (    struct DropWhile_478  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_477) { .f_it = ( (  into_dash_iter503 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_482   into_dash_iter504 (    struct DropWhile_482  self733 ) {
    return (  self733 );
}

static  struct SliceIter_287   into_dash_iter506 (    struct DynStr_129  self1432 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1432 ) .f_contents ) ) );
}

static  struct DropWhile_478   drop_dash_while505 (    struct DynStr_129  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_478) { .f_it = ( (  into_dash_iter506 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_482   drop_dash_while507 (    struct DropWhile_478  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_482) { .f_it = ( (  into_dash_iter503 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_481   drop_dash_while508 (    struct DropWhile_482  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_481) { .f_it = ( (  into_dash_iter504 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_376   append509 (    enum EmptyIter_294  it760 ,    char  e762 ) {
    return ( (struct AppendIter_376) { .f_it = ( (  into_dash_iter295 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_376   cons510 (    enum EmptyIter_294  it765 ,    char  e767 ) {
    return ( (  append509 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_376   single511 (    char  e770 ) {
    return ( (  cons510 ) ( ( (  nil293 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_516 {
    enum {
        Key_516_Escape_t,
        Key_516_Enter_t,
        Key_516_Tab_t,
        Key_516_Backspace_t,
        Key_516_Char_t,
        Key_516_Ctrl_t,
        Key_516_Up_t,
        Key_516_Down_t,
        Key_516_Left_t,
        Key_516_Right_t,
        Key_516_Home_t,
        Key_516_End_t,
        Key_516_PageUp_t,
        Key_516_PageDown_t,
        Key_516_Delete_t,
        Key_516_Insert_t,
        Key_516_F1_t,
        Key_516_F2_t,
        Key_516_F3_t,
        Key_516_F4_t,
        Key_516_F5_t,
        Key_516_F6_t,
        Key_516_F7_t,
        Key_516_F8_t,
        Key_516_F9_t,
        Key_516_F10_t,
        Key_516_F11_t,
        Key_516_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_516_Char_s;
        struct {
            char  field0;
        } Key_516_Ctrl_s;
    } stuff;
};

static struct Key_516 Key_516_Char (  char  field0 ) {
    return ( struct Key_516 ) { .tag = Key_516_Char_t, .stuff = { .Key_516_Char_s = { .field0 = field0 } } };
};

static struct Key_516 Key_516_Ctrl (  char  field0 ) {
    return ( struct Key_516 ) { .tag = Key_516_Ctrl_t, .stuff = { .Key_516_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_517 {
    enum MouseButton_144  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_515 {
    enum {
        InputEvent_515_Key_t,
        InputEvent_515_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_516  field0;
        } InputEvent_515_Key_s;
        struct {
            struct MouseEvent_517  field0;
        } InputEvent_515_Mouse_s;
    } stuff;
};

static struct InputEvent_515 InputEvent_515_Key (  struct Key_516  field0 ) {
    return ( struct InputEvent_515 ) { .tag = InputEvent_515_Key_t, .stuff = { .InputEvent_515_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_515 InputEvent_515_Mouse (  struct MouseEvent_517  field0 ) {
    return ( struct InputEvent_515 ) { .tag = InputEvent_515_Mouse_t, .stuff = { .InputEvent_515_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_514 {
    enum {
        Maybe_514_None_t,
        Maybe_514_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_515  field0;
        } Maybe_514_Just_s;
    } stuff;
};

static struct Maybe_514 Maybe_514_Just (  struct InputEvent_515  field0 ) {
    return ( struct Maybe_514 ) { .tag = Maybe_514_Just_t, .stuff = { .Maybe_514_Just_s = { .field0 = field0 } } };
};

struct FunIter_513 {
    struct Maybe_514 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_513   into_dash_iter512 (    struct FunIter_513  self782 ) {
    return (  self782 );
}

static  struct Maybe_514   next518 (    struct FunIter_513 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
    }
    struct Maybe_514  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_514_Just_t ) {
        return ( ( Maybe_514_Just ) ( ( dref786 .stuff .Maybe_514_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_514_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
    }
}

static  struct FunIter_513   from_dash_function519 (    struct Maybe_514 (*  fun790 )(  ) ) {
    return ( (struct FunIter_513) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env521 {
    ;
    struct Slice_279  new_dash_slice1634;
    ;
};

struct funenv521 {
    enum Unit_13  (*fun) (  struct env521  ,    struct Tuple2_352  );
    struct env521 env;
};

static  enum Unit_13   for_dash_each520 (    struct Zip_344  iterable793 ,   struct funenv521  fun795 ) {
    struct Zip_344  temp522 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp522 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next353 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv521  temp523 = (  fun795 );
            ( temp523.fun ( temp523.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env525 {
    ;
    struct Slice_5  new_dash_slice1634;
    ;
};

struct funenv525 {
    enum Unit_13  (*fun) (  struct env525  ,    struct Tuple2_347  );
    struct env525 env;
};

static  enum Unit_13   for_dash_each524 (    struct Zip_340  iterable793 ,   struct funenv525  fun795 ) {
    struct Zip_340  temp526 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp526 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv525  temp527 = (  fun795 );
            ( temp527.fun ( temp527.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env529 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv529 {
    enum Unit_13  (*fun) (  struct env529  ,    char  );
    struct env529 env;
};

static  enum Unit_13   for_dash_each528 (    struct DynStr_129  iterable793 ,   struct funenv529  fun795 ) {
    struct SliceIter_287  temp530 = ( (  into_dash_iter506 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp530 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv529  temp531 = (  fun795 );
            ( temp531.fun ( temp531.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env535 {
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

struct funenv535 {
    enum Unit_13  (*fun) (  struct env535  ,    struct List_280 *  );
    struct env535 env;
};

struct env534 {
    ;
    ;
    ;
    ;
    struct env535 envinst535;
    ;
};

struct funenv534 {
    enum Unit_13  (*fun) (  struct env534  ,    struct List_280 *  ,    struct List_3  );
    struct env534 env;
};

struct env533 {
    struct List_280 *  list1681;
    struct env534 envinst534;
};

struct funenv533 {
    enum Unit_13  (*fun) (  struct env533  ,    struct List_3  );
    struct env533 env;
};

static  enum Unit_13   for_dash_each532 (    struct Map_299  iterable793 ,   struct funenv533  fun795 ) {
    struct Map_299  temp536 = ( (  into_dash_iter298 ) ( (  iterable793 ) ) );
    struct Map_299 *  it796 = ( &temp536 );
    while ( ( true ) ) {
        struct Maybe_314  dref797 = ( (  next313 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_314_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_314_Just_t ) {
            struct funenv533  temp537 = (  fun795 );
            ( temp537.fun ( temp537.env ,  ( dref797 .stuff .Maybe_314_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_540 {
    struct List_3  f_chars;
};

struct env539 {
    struct StrBuilder_540 *  builder1920;
    struct env304 envinst304;
};

struct funenv539 {
    enum Unit_13  (*fun) (  struct env539  ,    char  );
    struct env539 env;
};

static  struct ConstStrIter_308   into_dash_iter542 (    struct ConstStrIter_308  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each538 (    struct ConstStrIter_308  iterable793 ,   struct funenv539  fun795 ) {
    struct ConstStrIter_308  temp541 = ( (  into_dash_iter542 ) ( (  iterable793 ) ) );
    struct ConstStrIter_308 *  it796 = ( &temp541 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next326 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv539  temp543 = (  fun795 );
            ( temp543.fun ( temp543.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_546 {
    struct Cell_53 *  f_ptr;
    size_t  f_count;
};

struct env545 {
    ;
    ;
    struct Slice_546  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv545 {
    enum Unit_13  (*fun) (  struct env545  ,    int32_t  );
    struct env545 env;
};

static  enum Unit_13   for_dash_each544 (    struct Range_361  iterable793 ,   struct funenv545  fun795 ) {
    struct RangeIter_363  temp547 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp547 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv545  temp548 = (  fun795 );
            ( temp548.fun ( temp548.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env550 {
    ;
    ;
    struct Slice_546  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv550 {
    enum Unit_13  (*fun) (  struct env550  ,    int32_t  );
    struct env550 env;
};

static  enum Unit_13   for_dash_each549 (    struct Range_361  iterable793 ,   struct funenv550  fun795 ) {
    struct RangeIter_363  temp551 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp551 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv550  temp552 = (  fun795 );
            ( temp552.fun ( temp552.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env554 {
    struct Scanner_286 *  it899;
    ;
};

struct funenv554 {
    struct Maybe_297  (*fun) (  struct env554  ,    int32_t  );
    struct env554 env;
};

static  enum Unit_13   for_dash_each553 (    struct Range_361  iterable793 ,   struct funenv554  fun795 ) {
    struct RangeIter_363  temp555 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp555 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv554  temp556 = (  fun795 );
            ( temp556.fun ( temp556.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env558 {
    ;
    struct Slice_5  dest1370;
    ;
};

struct funenv558 {
    enum Unit_13  (*fun) (  struct env558  ,    struct Tuple2_347  );
    struct env558 env;
};

static  enum Unit_13   for_dash_each557 (    struct Zip_340  iterable793 ,   struct funenv558  fun795 ) {
    struct Zip_340  temp559 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp559 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv558  temp560 = (  fun795 );
            ( temp560.fun ( temp560.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env562 {
    ;
    ;
    struct List_3 *  list1653;
    ;
    ;
};

struct funenv562 {
    enum Unit_13  (*fun) (  struct env562  ,    struct Tuple2_347  );
    struct env562 env;
};

static  enum Unit_13   for_dash_each561 (    struct Drop_339  iterable793 ,   struct funenv562  fun795 ) {
    struct Drop_339  temp563 = ( (  into_dash_iter338 ) ( (  iterable793 ) ) );
    struct Drop_339 *  it796 = ( &temp563 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next345 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv562  temp564 = (  fun795 );
            ( temp564.fun ( temp564.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env566 {
    ;
    struct Slice_279  dest1370;
    ;
};

struct funenv566 {
    enum Unit_13  (*fun) (  struct env566  ,    struct Tuple2_352  );
    struct env566 env;
};

static  enum Unit_13   for_dash_each565 (    struct Zip_344  iterable793 ,   struct funenv566  fun795 ) {
    struct Zip_344  temp567 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp567 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next353 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv566  temp568 = (  fun795 );
            ( temp568.fun ( temp568.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env570 {
    ;
    ;
    struct List_280 *  list1653;
    ;
    ;
};

struct funenv570 {
    enum Unit_13  (*fun) (  struct env570  ,    struct Tuple2_352  );
    struct env570 env;
};

static  enum Unit_13   for_dash_each569 (    struct Drop_343  iterable793 ,   struct funenv570  fun795 ) {
    struct Drop_343  temp571 = ( (  into_dash_iter342 ) ( (  iterable793 ) ) );
    struct Drop_343 *  it796 = ( &temp571 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next350 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv570  temp572 = (  fun795 );
            ( temp572.fun ( temp572.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env574 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv574 {
    enum Unit_13  (*fun) (  struct env574  ,    char  );
    struct env574 env;
};

static  enum Unit_13   for_dash_each573 (    struct List_3 *  iterable793 ,   struct funenv574  fun795 ) {
    struct SliceIter_287  temp575 = ( (  into_dash_iter289 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp575 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv574  temp576 = (  fun795 );
            ( temp576.fun ( temp576.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env578 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv578 {
    enum Unit_13  (*fun) (  struct env578  ,    char  );
    struct env578 env;
};

static  enum Unit_13   for_dash_each577 (    struct Slice_5  iterable793 ,   struct funenv578  fun795 ) {
    struct SliceIter_287  temp579 = ( (  into_dash_iter291 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp579 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv578  temp580 = (  fun795 );
            ( temp580.fun ( temp580.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env582 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv582 {
    enum Unit_13  (*fun) (  struct env582  ,    char  );
    struct env582 env;
};

static  enum Unit_13   for_dash_each581 (    struct TakeWhile_475  iterable793 ,   struct funenv582  fun795 ) {
    struct TakeWhile_475  temp583 = ( (  into_dash_iter474 ) ( (  iterable793 ) ) );
    struct TakeWhile_475 *  it796 = ( &temp583 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next487 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv582  temp584 = (  fun795 );
            ( temp584.fun ( temp584.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_586 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_586   into_dash_iter588 (    struct SliceAddressIter_586  self1360 ) {
    return (  self1360 );
}

struct Maybe_589 {
    enum {
        Maybe_589_None_t,
        Maybe_589_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_589_Just_s;
    } stuff;
};

static struct Maybe_589 Maybe_589_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_589 ) { .tag = Maybe_589_Just_t, .stuff = { .Maybe_589_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_589   next590 (    struct SliceAddressIter_586 *  self1363 ) {
    size_t  off1364 = ( ( * (  self1363 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1363 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_589) { .tag = Maybe_589_None_t } );
    }
    struct List_3 *  elem1365 = ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1363 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1364 ) ) ) ) );
    (*  self1363 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_589_Just ) ( (  elem1365 ) ) );
}

static  enum Unit_13   for_dash_each585 (    struct SliceAddressIter_586  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_586  temp587 = ( (  into_dash_iter588 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_586 *  it796 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_589  dref797 = ( (  next590 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_589_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_589_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_589_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env592 {
    struct StrBuilder_540 *  builder1920;
    struct env304 envinst304;
};

struct funenv592 {
    enum Unit_13  (*fun) (  struct env592  ,    char  );
    struct env592 env;
};

static  enum Unit_13   for_dash_each591 (    struct TakeWhile_480  iterable793 ,   struct funenv592  fun795 ) {
    struct TakeWhile_480  temp593 = ( (  into_dash_iter479 ) ( (  iterable793 ) ) );
    struct TakeWhile_480 *  it796 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next490 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv592  temp594 = (  fun795 );
            ( temp594.fun ( temp594.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env596 {
    struct StrBuilder_540 *  builder1920;
    struct env304 envinst304;
};

struct funenv596 {
    enum Unit_13  (*fun) (  struct env596  ,    char  );
    struct env596 env;
};

static  enum Unit_13   for_dash_each595 (    struct TakeWhile_484  iterable793 ,   struct funenv596  fun795 ) {
    struct TakeWhile_484  temp597 = ( (  into_dash_iter483 ) ( (  iterable793 ) ) );
    struct TakeWhile_484 *  it796 = ( &temp597 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next493 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv596  temp598 = (  fun795 );
            ( temp598.fun ( temp598.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env601 {
    ;
    struct env304 envinst304;
    ;
};

struct funenv601 {
    enum Unit_13  (*fun) (  struct env601  ,    struct StrBuilder_540 *  ,    char  );
    struct env601 env;
};

struct env600 {
    struct StrBuilder_540 *  sb2678;
    struct env601 envinst601;
};

struct funenv600 {
    enum Unit_13  (*fun) (  struct env600  ,    char  );
    struct env600 env;
};

static  enum Unit_13   for_dash_each599 (    struct List_3  iterable793 ,   struct funenv600  fun795 ) {
    struct SliceIter_287  temp602 = ( (  into_dash_iter290 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp602 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv600  temp603 = (  fun795 );
            ( temp603.fun ( temp603.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env605 {
    ;
    ;
    struct Slice_546  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv605 {
    enum Unit_13  (*fun) (  struct env605  ,    int32_t  );
    struct env605 env;
};

static  enum Unit_13   for_dash_each604 (    struct Range_361  iterable793 ,   struct funenv605  fun795 ) {
    struct RangeIter_363  temp606 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp606 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv605  temp607 = (  fun795 );
            ( temp607.fun ( temp607.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_612 {
    ColorPalette_612_Palette8,
    ColorPalette_612_Palette16,
    ColorPalette_612_Palette256,
    ColorPalette_612_PaletteRGB,
};

struct Tui_611 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_612  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_136  f_orig_dash_termios;
};

struct Screen_610 {
    enum CAllocator_4  f_al;
    struct Tui_611 *  f_tui;
    struct Slice_546  f_current;
    struct Slice_546  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_54  f_default_dash_fg;
    struct Color_54  f_default_dash_bg;
};

struct env609 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv609 {
    enum Unit_13  (*fun) (  struct env609  ,    struct Tuple2_347  );
    struct env609 env;
};

static  enum Unit_13   for_dash_each608 (    struct Zip_368  iterable793 ,   struct funenv609  fun795 ) {
    struct Zip_368  temp613 = ( (  into_dash_iter367 ) ( (  iterable793 ) ) );
    struct Zip_368 *  it796 = ( &temp613 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next406 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv609  temp614 = (  fun795 );
            ( temp614.fun ( temp614.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env616 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv616 {
    enum Unit_13  (*fun) (  struct env616  ,    struct Tuple2_347  );
    struct env616 env;
};

static  enum Unit_13   for_dash_each615 (    struct Zip_371  iterable793 ,   struct funenv616  fun795 ) {
    struct Zip_371  temp617 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_371 *  it796 = ( &temp617 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next413 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv616  temp618 = (  fun795 );
            ( temp618.fun ( temp618.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env620 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv620 {
    enum Unit_13  (*fun) (  struct env620  ,    struct Tuple2_347  );
    struct env620 env;
};

static  enum Unit_13   for_dash_each619 (    struct Zip_378  iterable793 ,   struct funenv620  fun795 ) {
    struct Zip_378  temp621 = ( (  into_dash_iter377 ) ( (  iterable793 ) ) );
    struct Zip_378 *  it796 = ( &temp621 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next419 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv620  temp622 = (  fun795 );
            ( temp622.fun ( temp622.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env624 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv624 {
    enum Unit_13  (*fun) (  struct env624  ,    struct Tuple2_347  );
    struct env624 env;
};

static  enum Unit_13   for_dash_each623 (    struct Zip_382  iterable793 ,   struct funenv624  fun795 ) {
    struct Zip_382  temp625 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct Zip_382 *  it796 = ( &temp625 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next427 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv624  temp626 = (  fun795 );
            ( temp626.fun ( temp626.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env628 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv628 {
    enum Unit_13  (*fun) (  struct env628  ,    struct Tuple2_347  );
    struct env628 env;
};

static  enum Unit_13   for_dash_each627 (    struct Zip_392  iterable793 ,   struct funenv628  fun795 ) {
    struct Zip_392  temp629 = ( (  into_dash_iter391 ) ( (  iterable793 ) ) );
    struct Zip_392 *  it796 = ( &temp629 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next436 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv628  temp630 = (  fun795 );
            ( temp630.fun ( temp630.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env632 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv632 {
    enum Unit_13  (*fun) (  struct env632  ,    struct Tuple2_347  );
    struct env632 env;
};

static  enum Unit_13   for_dash_each631 (    struct Zip_397  iterable793 ,   struct funenv632  fun795 ) {
    struct Zip_397  temp633 = ( (  into_dash_iter396 ) ( (  iterable793 ) ) );
    struct Zip_397 *  it796 = ( &temp633 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next440 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv632  temp634 = (  fun795 );
            ( temp634.fun ( temp634.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env636 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv636 {
    enum Unit_13  (*fun) (  struct env636  ,    struct Tuple2_347  );
    struct env636 env;
};

static  enum Unit_13   for_dash_each635 (    struct Zip_401  iterable793 ,   struct funenv636  fun795 ) {
    struct Zip_401  temp637 = ( (  into_dash_iter400 ) ( (  iterable793 ) ) );
    struct Zip_401 *  it796 = ( &temp637 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next448 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv636  temp638 = (  fun795 );
            ( temp638.fun ( temp638.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env640 {
    ;
    struct Screen_610 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv640 {
    enum Unit_13  (*fun) (  struct env640  ,    struct Tuple2_347  );
    struct env640 env;
};

static  enum Unit_13   for_dash_each639 (    struct Zip_403  iterable793 ,   struct funenv640  fun795 ) {
    struct Zip_403  temp641 = ( (  into_dash_iter402 ) ( (  iterable793 ) ) );
    struct Zip_403 *  it796 = ( &temp641 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next449 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv640  temp642 = (  fun795 );
            ( temp642.fun ( temp642.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_644 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_644   into_dash_iter645 (    struct SmolArray_98  self1487 ) {
    return ( (struct SmolArrayIter_644) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_651 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_651 StrConcat_651_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_651 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_650 {
    struct StrConcat_651  field0;
    char  field1;
};

static struct StrConcat_650 StrConcat_650_StrConcat (  struct StrConcat_651  field0 ,  char  field1 ) {
    return ( struct StrConcat_650 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_654 {
    const char*  field0;
    struct StrConcat_650  field1;
};

static struct StrConcat_654 StrConcat_654_StrConcat (  const char*  field0 ,  struct StrConcat_650  field1 ) {
    return ( struct StrConcat_654 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_653 {
    struct StrConcat_654  field0;
    char  field1;
};

static struct StrConcat_653 StrConcat_653_StrConcat (  struct StrConcat_654  field0 ,  char  field1 ) {
    return ( struct StrConcat_653 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str658 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str657 (    struct StrConcat_651  self1102 ) {
    struct StrConcat_651  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str658 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str656 (    struct StrConcat_650  self1102 ) {
    struct StrConcat_650  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str657 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str655 (    struct StrConcat_654  self1102 ) {
    struct StrConcat_654  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str656 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str652 (    struct StrConcat_653  self1102 ) {
    struct StrConcat_653  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str655 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic649 (    struct StrConcat_650  errmsg1254 ) {
    ( (  print_dash_str652 ) ( ( ( StrConcat_653_StrConcat ) ( ( ( StrConcat_654_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr648 (    struct Array_99 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast188 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get647 (    struct Array_99 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr648 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next646 (    struct SmolArrayIter_644 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get647 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce643 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_644  it818 = ( (  into_dash_iter645 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next646 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp659;
    return (  temp659 );
}

struct SmolArrayIter_661 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_661   into_dash_iter662 (    struct SmolArray_101  self1487 ) {
    return ( (struct SmolArrayIter_661) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr665 (    struct Array_102 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast189 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get664 (    struct Array_102 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr665 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next663 (    struct SmolArrayIter_661 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get664 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce660 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_661  it818 = ( (  into_dash_iter662 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next663 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp666;
    return (  temp666 );
}

struct SmolArrayIter_668 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_668   into_dash_iter669 (    struct SmolArray_104  self1487 ) {
    return ( (struct SmolArrayIter_668) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr672 (    struct Array_105 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast190 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get671 (    struct Array_105 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr672 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next670 (    struct SmolArrayIter_668 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get671 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce667 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_668  it818 = ( (  into_dash_iter669 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next670 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp673;
    return (  temp673 );
}

static  uint32_t   reduce674 (    struct Map_307  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct Map_307  it818 = ( (  into_dash_iter306 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next324 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp675;
    return (  temp675 );
}

struct Maybe_677 {
    enum {
        Maybe_677_None_t,
        Maybe_677_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_677_Just_s;
    } stuff;
};

static struct Maybe_677 Maybe_677_Just (  int64_t  field0 ) {
    return ( struct Maybe_677 ) { .tag = Maybe_677_Just_t, .stuff = { .Maybe_677_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_677   reduce676 (    struct TakeWhile_473  iterable812 ,    struct Maybe_677  base814 ,    struct Maybe_677 (*  fun816 )(    char  ,    struct Maybe_677  ) ) {
    struct Maybe_677  x817 = (  base814 );
    struct TakeWhile_473  it818 = ( (  into_dash_iter472 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next485 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_677  temp678;
    return (  temp678 );
}

static  size_t   reduce679 (    struct TakeWhile_473  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_473  it818 = ( (  into_dash_iter472 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next485 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp680;
    return (  temp680 );
}

static  int32_t   reduce681 (    struct Map_310  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_310  it818 = ( (  into_dash_iter309 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next327 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp682;
    return (  temp682 );
}

static  size_t   reduce683 (    struct TakeWhile_475  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_475  it818 = ( (  into_dash_iter474 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next487 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp684;
    return (  temp684 );
}

static  struct Maybe_677   reduce685 (    struct TakeWhile_477  iterable812 ,    struct Maybe_677  base814 ,    struct Maybe_677 (*  fun816 )(    char  ,    struct Maybe_677  ) ) {
    struct Maybe_677  x817 = (  base814 );
    struct TakeWhile_477  it818 = ( (  into_dash_iter476 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next488 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_677  temp686;
    return (  temp686 );
}

static  size_t   reduce687 (    struct IntStrIter_369  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_369  it818 = ( (  into_dash_iter457 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next407 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp688;
    return (  temp688 );
}

static  size_t   reduce689 (    struct StrConcatIter_372  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_372  it818 = ( (  into_dash_iter459 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next414 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp690;
    return (  temp690 );
}

static  size_t   reduce691 (    struct StrConcatIter_379  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_379  it818 = ( (  into_dash_iter461 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next420 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp692;
    return (  temp692 );
}

static  size_t   reduce693 (    struct StrConcatIter_383  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_383  it818 = ( (  into_dash_iter463 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next428 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp694;
    return (  temp694 );
}

static  size_t   reduce695 (    struct StrConcatIter_393  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_393  it818 = ( (  into_dash_iter465 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next437 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp696;
    return (  temp696 );
}

static  size_t   reduce697 (    struct StrConcatIter_398  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_398  it818 = ( (  into_dash_iter467 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next441 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp698;
    return (  temp698 );
}

static  size_t   reduce699 (    struct StrConcatIter_395  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_395  it818 = ( (  into_dash_iter469 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next439 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp700;
    return (  temp700 );
}

static  size_t   reduce701 (    struct StrConcatIter_404  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_404  it818 = ( (  into_dash_iter471 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next450 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp702;
    return (  temp702 );
}

static  size_t   lam704 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count703 (    struct TakeWhile_473  it823 ) {
    return ( (  reduce679 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam704 ) ) );
}

static  size_t   lam706 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count705 (    struct TakeWhile_475  it823 ) {
    return ( (  reduce683 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam706 ) ) );
}

static  size_t   lam708 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count707 (    struct IntStrIter_369  it823 ) {
    return ( (  reduce687 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam708 ) ) );
}

static  size_t   lam710 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count709 (    struct StrConcatIter_372  it823 ) {
    return ( (  reduce689 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam710 ) ) );
}

static  size_t   lam712 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count711 (    struct StrConcatIter_379  it823 ) {
    return ( (  reduce691 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam712 ) ) );
}

static  size_t   lam714 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count713 (    struct StrConcatIter_383  it823 ) {
    return ( (  reduce693 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam714 ) ) );
}

static  size_t   lam716 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count715 (    struct StrConcatIter_393  it823 ) {
    return ( (  reduce695 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam716 ) ) );
}

static  size_t   lam718 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count717 (    struct StrConcatIter_398  it823 ) {
    return ( (  reduce697 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam718 ) ) );
}

static  size_t   lam720 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count719 (    struct StrConcatIter_395  it823 ) {
    return ( (  reduce699 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam720 ) ) );
}

static  size_t   lam722 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count721 (    struct StrConcatIter_404  it823 ) {
    return ( (  reduce701 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam722 ) ) );
}

static  int32_t   lam724 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add82 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum723 (    struct Map_310  it829 ) {
    return ( (  reduce681 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam724 ) ) );
}

static  struct Maybe_314   head725 (    struct List_280 *  it861 ) {
    struct SliceIter_278  temp726 = ( (  into_dash_iter277 ) ( (  it861 ) ) );
    return ( (  next354 ) ( ( &temp726 ) ) );
}

static  struct Maybe_297   head727 (    struct TakeWhile_473  it861 ) {
    struct TakeWhile_473  temp728 = ( (  into_dash_iter472 ) ( (  it861 ) ) );
    return ( (  next485 ) ( ( &temp728 ) ) );
}

static  struct Maybe_297   head729 (    struct TakeWhile_477  it861 ) {
    struct TakeWhile_477  temp730 = ( (  into_dash_iter476 ) ( (  it861 ) ) );
    return ( (  next488 ) ( ( &temp730 ) ) );
}

static  struct Maybe_297   head731 (    struct TakeWhile_480  it861 ) {
    struct TakeWhile_480  temp732 = ( (  into_dash_iter479 ) ( (  it861 ) ) );
    return ( (  next490 ) ( ( &temp732 ) ) );
}

static  bool   null733 (    struct List_280 *  it864 ) {
    struct Maybe_314  dref865 = ( (  head725 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_314_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null734 (    struct TakeWhile_473  it864 ) {
    struct Maybe_297  dref865 = ( (  head727 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null735 (    struct TakeWhile_480  it864 ) {
    struct Maybe_297  dref865 = ( (  head731 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_297   lam554 (   struct env554 env ,    int32_t  dref902 ) {
    return ( (  next486 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_736 (    struct Scanner_286 *  it899 ,    size_t  n901 ) {
    struct env554 envinst554 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each553 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32270 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv554){ .fun = lam554, .env = envinst554 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or737 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors738 (    struct SmolArray_98  vals947 ) {
    return ( (  reduce643 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or737 ) ) );
}

static  uint32_t   u32_dash_ors739 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce660 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or737 ) ) );
}

static  uint32_t   u32_dash_ors740 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce667 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or737 ) ) );
}

static  uint32_t   u32_dash_and741 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg742 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod743 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div80 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub79 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp74 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add78 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_745 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp746 (    struct Cursor_745  l2445 ,    struct Cursor_745  r2447 ) {
    enum Ordering_10  dref2448 = ( (  cmp75 ) ( ( (  l2445 ) .f_y ) ,  ( (  r2447 ) .f_y ) ) );
    switch (  dref2448 ) {
        case Ordering_10_EQ : {
            return ( (  cmp75 ) ( ( (  l2445 ) .f_x ) ,  ( (  r2447 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2449 =  dref2448;
            return (  els2449 );
            break;
        }
    }
}

static  struct Cursor_745   min744 (    struct Cursor_745  l965 ,    struct Cursor_745  r967 ) {
    if ( (  cmp746 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min747 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp75 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max748 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp75 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_745   max749 (    struct Cursor_745  l970 ,    struct Cursor_745  r972 ) {
    if ( (  cmp746 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between750 (    struct Cursor_745  c975 ,    struct Cursor_745  l977 ,    struct Cursor_745  r979 ) {
    struct Cursor_745  from980 = ( (  min744 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_745  to981 = ( (  max749 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp746 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp746 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp751 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
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

static  struct ConstStrIter_308   chars752 (    const char*  self1014 ) {
    return ( (  into_dash_iter335 ) ( (  self1014 ) ) );
}

static  struct AppendIter_376   chars753 (    char  self1020 ) {
    return ( (  single511 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits754 (    size_t  self1035 ) {
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

static  int32_t   count_dash_digits755 (    int32_t  self1035 ) {
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

static  int32_t   count_dash_digits756 (    uint32_t  self1035 ) {
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

static  struct IntStrIter_369   chars757 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_369) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits755 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str758 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_380   chars759 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_380) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits756 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str760 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32276 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_399   chars761 (    size_t  self1066 ) {
    return ( (struct IntStrIter_399) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits754 ) ( (  self1066 ) ) ) } );
}

struct Mode_764 {
    enum {
        Mode_764_Normal_t,
        Mode_764_Insert_t,
        Mode_764_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_540  field0;
        } Mode_764_Cmd_s;
    } stuff;
};

static struct Mode_764 Mode_764_Cmd (  struct StrBuilder_540  field0 ) {
    return ( struct Mode_764 ) { .tag = Mode_764_Cmd_t, .stuff = { .Mode_764_Cmd_s = { .field0 = field0 } } };
};

struct StrConcat_763 {
    const char*  field0;
    struct Mode_764  field1;
};

static struct StrConcat_763 StrConcat_763_StrConcat (  const char*  field0 ,  struct Mode_764  field1 ) {
    return ( struct StrConcat_763 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_768 {
    const char*  field0;
    struct DynStr_129  field1;
};

static struct StrConcat_768 StrConcat_768_StrConcat (  const char*  field0 ,  struct DynStr_129  field1 ) {
    return ( struct StrConcat_768 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_767 {
    struct StrConcat_768  field0;
    char  field1;
};

static struct StrConcat_767 StrConcat_767_StrConcat (  struct StrConcat_768  field0 ,  char  field1 ) {
    return ( struct StrConcat_767 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_766 {
    enum {
        StrCase_766_StrCase1_t,
        StrCase_766_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_766_StrCase1_s;
        struct {
            struct StrConcat_767  field0;
        } StrCase_766_StrCase2_s;
    } stuff;
};

static struct StrCase_766 StrCase_766_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_766 ) { .tag = StrCase_766_StrCase1_t, .stuff = { .StrCase_766_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_766 StrCase_766_StrCase2 (  struct StrConcat_767  field0 ) {
    return ( struct StrCase_766 ) { .tag = StrCase_766_StrCase2_t, .stuff = { .StrCase_766_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_129   as_dash_str770 (    struct StrBuilder_540 *  builder1946 ) {
    return ( (struct DynStr_129) { .f_contents = ( (  subslice292 ) ( ( ( ( * (  builder1946 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder1946 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_287   chars777 (    struct DynStr_129  self1429 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1429 ) .f_contents ) ) );
}

static  struct StrConcatIter_375   into_dash_iter776 (    struct StrConcat_768  dref1097 ) {
    return ( (struct StrConcatIter_375) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars777 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_375   chars775 (    struct StrConcat_768  self1108 ) {
    return ( (  into_dash_iter776 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_374   into_dash_iter774 (    struct StrConcat_767  dref1097 ) {
    return ( (struct StrConcatIter_374) { .f_left = ( (  chars775 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars753 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_374   chars773 (    struct StrConcat_767  self1108 ) {
    return ( (  into_dash_iter774 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_373   into_dash_iter772 (    struct StrCase_766  self1121 ) {
    struct StrCase_766  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_766_StrCase1_t ) {
        return ( ( StrCaseIter_373_StrCaseIter1 ) ( ( (  chars752 ) ( ( dref1122 .stuff .StrCase_766_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_766_StrCase2_t ) {
        return ( ( StrCaseIter_373_StrCaseIter2 ) ( ( (  chars773 ) ( ( dref1122 .stuff .StrCase_766_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_373   chars771 (    struct StrCase_766  self1133 ) {
    return ( (  into_dash_iter772 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_373   chars765 (    struct Mode_764  self2463 ) {
    struct StrCase_766  temp769;
    struct StrCase_766  c2464 = (  temp769 );
    struct Mode_764  dref2465 = (  self2463 );
    if ( dref2465.tag == Mode_764_Normal_t ) {
        c2464 = ( ( StrCase_766_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2465.tag == Mode_764_Insert_t ) {
        c2464 = ( ( StrCase_766_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2465.tag == Mode_764_Cmd_t ) {
        struct DynStr_129  ss2467 = ( (  as_dash_str770 ) ( ( & ( dref2465 .stuff .Mode_764_Cmd_s .field0 ) ) ) );
        c2464 = ( ( StrCase_766_StrCase2 ) ( ( ( StrConcat_767_StrConcat ) ( ( ( StrConcat_768_StrConcat ) ( ( "Cmd(" ) ,  (  ss2467 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars771 ) ( (  c2464 ) ) );
}

static  struct StrConcatIter_372   into_dash_iter762 (    struct StrConcat_763  dref1097 ) {
    return ( (struct StrConcatIter_372) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars765 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_779 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_779 StrConcat_779_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_779 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_379   into_dash_iter778 (    struct StrConcat_779  dref1097 ) {
    return ( (struct StrConcatIter_379) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars759 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_781 {
    const char*  field0;
    struct Maybe_346  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  const char*  field0 ,  struct Maybe_346  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_785 {
    const char*  field0;
    struct Tuple2_347  field1;
};

static struct StrConcat_785 StrConcat_785_StrConcat (  const char*  field0 ,  struct Tuple2_347  field1 ) {
    return ( struct StrConcat_785 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_784 {
    struct StrConcat_785  field0;
    char  field1;
};

static struct StrConcat_784 StrConcat_784_StrConcat (  struct StrConcat_785  field0 ,  char  field1 ) {
    return ( struct StrConcat_784 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_783 {
    enum {
        StrCase_783_StrCase1_t,
        StrCase_783_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_783_StrCase1_s;
        struct {
            struct StrConcat_784  field0;
        } StrCase_783_StrCase2_s;
    } stuff;
};

static struct StrCase_783 StrCase_783_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_783 ) { .tag = StrCase_783_StrCase1_t, .stuff = { .StrCase_783_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_783 StrCase_783_StrCase2 (  struct StrConcat_784  field0 ) {
    return ( struct StrCase_783 ) { .tag = StrCase_783_StrCase2_t, .stuff = { .StrCase_783_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_798 {
    char  field0;
    char  field1;
};

static struct StrConcat_798 StrConcat_798_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_798 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_797 {
    struct StrConcat_798  field0;
    const char*  field1;
};

static struct StrConcat_797 StrConcat_797_StrConcat (  struct StrConcat_798  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_797 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_796 {
    struct StrConcat_797  field0;
    int32_t  field1;
};

static struct StrConcat_796 StrConcat_796_StrConcat (  struct StrConcat_797  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_796 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_795 {
    struct StrConcat_796  field0;
    char  field1;
};

static struct StrConcat_795 StrConcat_795_StrConcat (  struct StrConcat_796  field0 ,  char  field1 ) {
    return ( struct StrConcat_795 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_390   into_dash_iter805 (    struct StrConcat_798  dref1097 ) {
    return ( (struct StrConcatIter_390) { .f_left = ( (  chars753 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars753 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_390   chars804 (    struct StrConcat_798  self1108 ) {
    return ( (  into_dash_iter805 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   into_dash_iter803 (    struct StrConcat_797  dref1097 ) {
    return ( (struct StrConcatIter_389) { .f_left = ( (  chars804 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars752 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_389   chars802 (    struct StrConcat_797  self1108 ) {
    return ( (  into_dash_iter803 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_388   into_dash_iter801 (    struct StrConcat_796  dref1097 ) {
    return ( (struct StrConcatIter_388) { .f_left = ( (  chars802 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars757 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_388   chars800 (    struct StrConcat_796  self1108 ) {
    return ( (  into_dash_iter801 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_387   into_dash_iter799 (    struct StrConcat_795  dref1097 ) {
    return ( (struct StrConcatIter_387) { .f_left = ( (  chars800 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars753 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_387   chars794 (    struct StrConcat_795  self1108 ) {
    return ( (  into_dash_iter799 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_387   chars793 (    struct Tuple2_347  dref1158 ) {
    return ( (  chars794 ) ( ( ( StrConcat_795_StrConcat ) ( ( ( StrConcat_796_StrConcat ) ( ( ( StrConcat_797_StrConcat ) ( ( ( StrConcat_798_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_386   into_dash_iter792 (    struct StrConcat_785  dref1097 ) {
    return ( (struct StrConcatIter_386) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars793 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_386   chars791 (    struct StrConcat_785  self1108 ) {
    return ( (  into_dash_iter792 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_385   into_dash_iter790 (    struct StrConcat_784  dref1097 ) {
    return ( (struct StrConcatIter_385) { .f_left = ( (  chars791 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars753 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_385   chars789 (    struct StrConcat_784  self1108 ) {
    return ( (  into_dash_iter790 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_384   into_dash_iter788 (    struct StrCase_783  self1121 ) {
    struct StrCase_783  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_783_StrCase1_t ) {
        return ( ( StrCaseIter_384_StrCaseIter1 ) ( ( (  chars752 ) ( ( dref1122 .stuff .StrCase_783_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_783_StrCase2_t ) {
        return ( ( StrCaseIter_384_StrCaseIter2 ) ( ( (  chars789 ) ( ( dref1122 .stuff .StrCase_783_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_384   chars787 (    struct StrCase_783  self1133 ) {
    return ( (  into_dash_iter788 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_384   chars782 (    struct Maybe_346  self1147 ) {
    struct StrCase_783  temp786;
    struct StrCase_783  c1148 = (  temp786 );
    struct Maybe_346  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_346_None_t ) {
        c1148 = ( ( StrCase_783_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_346_Just_t ) {
        c1148 = ( ( StrCase_783_StrCase2 ) ( ( ( StrConcat_784_StrConcat ) ( ( ( StrConcat_785_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_346_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars787 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_383   into_dash_iter780 (    struct StrConcat_781  dref1097 ) {
    return ( (struct StrConcatIter_383) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars782 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_809 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_809 StrConcat_809_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_809 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_808 {
    struct StrConcat_809  field0;
    char  field1;
};

static struct StrConcat_808 StrConcat_808_StrConcat (  struct StrConcat_809  field0 ,  char  field1 ) {
    return ( struct StrConcat_808 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_807 {
    struct StrConcat_808  field0;
    int32_t  field1;
};

static struct StrConcat_807 StrConcat_807_StrConcat (  struct StrConcat_808  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_807 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_395   into_dash_iter813 (    struct StrConcat_809  dref1097 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars757 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_395   chars812 (    struct StrConcat_809  self1108 ) {
    return ( (  into_dash_iter813 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_394   into_dash_iter811 (    struct StrConcat_808  dref1097 ) {
    return ( (struct StrConcatIter_394) { .f_left = ( (  chars812 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars753 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_394   chars810 (    struct StrConcat_808  self1108 ) {
    return ( (  into_dash_iter811 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter806 (    struct StrConcat_807  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars810 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars757 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   into_dash_iter814 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars752 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars761 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_817 {
    struct StrConcat_809  field0;
    const char*  field1;
};

static struct StrConcat_817 StrConcat_817_StrConcat (  struct StrConcat_809  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_817 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_816 {
    struct StrConcat_817  field0;
    int32_t  field1;
};

static struct StrConcat_816 StrConcat_816_StrConcat (  struct StrConcat_817  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_816 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_405   into_dash_iter819 (    struct StrConcat_817  dref1097 ) {
    return ( (struct StrConcatIter_405) { .f_left = ( (  chars812 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars752 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_405   chars818 (    struct StrConcat_817  self1108 ) {
    return ( (  into_dash_iter819 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   into_dash_iter815 (    struct StrConcat_816  dref1097 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars818 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars757 ) ( ( dref1097 .field1 ) ) ) } );
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

struct StrConcat_822 {
    const char*  field0;
    struct StrConcat_823  field1;
};

static struct StrConcat_822 StrConcat_822_StrConcat (  const char*  field0 ,  struct StrConcat_823  field1 ) {
    return ( struct StrConcat_822 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_821 {
    struct StrConcat_822  field0;
    char  field1;
};

static struct StrConcat_821 StrConcat_821_StrConcat (  struct StrConcat_822  field0 ,  char  field1 ) {
    return ( struct StrConcat_821 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str827 (    struct StrConcat_824  self1102 ) {
    struct StrConcat_824  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str826 (    struct StrConcat_823  self1102 ) {
    struct StrConcat_823  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str827 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str825 (    struct StrConcat_822  self1102 ) {
    struct StrConcat_822  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str826 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str820 (    struct StrConcat_821  self1102 ) {
    struct StrConcat_821  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str825 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_830 {
    const char*  field0;
    struct StrConcat_797  field1;
};

static struct StrConcat_830 StrConcat_830_StrConcat (  const char*  field0 ,  struct StrConcat_797  field1 ) {
    return ( struct StrConcat_830 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_829 {
    struct StrConcat_830  field0;
    char  field1;
};

static struct StrConcat_829 StrConcat_829_StrConcat (  struct StrConcat_830  field0 ,  char  field1 ) {
    return ( struct StrConcat_829 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str833 (    struct StrConcat_798  self1102 ) {
    struct StrConcat_798  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str832 (    struct StrConcat_797  self1102 ) {
    struct StrConcat_797  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str833 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str831 (    struct StrConcat_830  self1102 ) {
    struct StrConcat_830  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str832 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str828 (    struct StrConcat_829  self1102 ) {
    struct StrConcat_829  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str831 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_837 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_837 StrConcat_837_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_837 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_836 {
    const char*  field0;
    struct StrConcat_837  field1;
};

static struct StrConcat_836 StrConcat_836_StrConcat (  const char*  field0 ,  struct StrConcat_837  field1 ) {
    return ( struct StrConcat_836 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_835 {
    struct StrConcat_836  field0;
    char  field1;
};

static struct StrConcat_835 StrConcat_835_StrConcat (  struct StrConcat_836  field0 ,  char  field1 ) {
    return ( struct StrConcat_835 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str839 (    struct StrConcat_837  self1102 ) {
    struct StrConcat_837  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str838 (    struct StrConcat_836  self1102 ) {
    struct StrConcat_836  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str839 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str834 (    struct StrConcat_835  self1102 ) {
    struct StrConcat_835  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str838 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_842 {
    const char*  field0;
    struct StrConcat_824  field1;
};

static struct StrConcat_842 StrConcat_842_StrConcat (  const char*  field0 ,  struct StrConcat_824  field1 ) {
    return ( struct StrConcat_842 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_841 {
    struct StrConcat_842  field0;
    char  field1;
};

static struct StrConcat_841 StrConcat_841_StrConcat (  struct StrConcat_842  field0 ,  char  field1 ) {
    return ( struct StrConcat_841 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str843 (    struct StrConcat_842  self1102 ) {
    struct StrConcat_842  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str827 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str840 (    struct StrConcat_841  self1102 ) {
    struct StrConcat_841  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str843 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_850 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_850 StrConcat_850_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_850 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_849 {
    struct StrConcat_850  field0;
    char  field1;
};

static struct StrConcat_849 StrConcat_849_StrConcat (  struct StrConcat_850  field0 ,  char  field1 ) {
    return ( struct StrConcat_849 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_848 {
    struct StrConcat_849  field0;
    uint8_t  field1;
};

static struct StrConcat_848 StrConcat_848_StrConcat (  struct StrConcat_849  field0 ,  uint8_t  field1 ) {
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

static  enum Unit_13   print_dash_str855 (    struct StrConcat_850  self1102 ) {
    struct StrConcat_850  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str854 (    struct StrConcat_849  self1102 ) {
    struct StrConcat_849  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str855 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str853 (    struct StrConcat_848  self1102 ) {
    struct StrConcat_848  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str854 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str852 (    struct StrConcat_847  self1102 ) {
    struct StrConcat_847  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str853 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str851 (    struct StrConcat_846  self1102 ) {
    struct StrConcat_846  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str852 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str844 (    struct StrConcat_845  self1102 ) {
    struct StrConcat_845  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str851 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_859 {
    struct StrConcat_779  field0;
    char  field1;
};

static struct StrConcat_859 StrConcat_859_StrConcat (  struct StrConcat_779  field0 ,  char  field1 ) {
    return ( struct StrConcat_859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_858 {
    struct StrConcat_859  field0;
    uint32_t  field1;
};

static struct StrConcat_858 StrConcat_858_StrConcat (  struct StrConcat_859  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_858 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_857 {
    struct StrConcat_858  field0;
    char  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  struct StrConcat_858  field0 ,  char  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str862 (    struct StrConcat_779  self1102 ) {
    struct StrConcat_779  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str758 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str861 (    struct StrConcat_859  self1102 ) {
    struct StrConcat_859  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str862 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str860 (    struct StrConcat_858  self1102 ) {
    struct StrConcat_858  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str861 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str758 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str856 (    struct StrConcat_857  self1102 ) {
    struct StrConcat_857  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str860 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_372   chars863 (    struct StrConcat_763  self1108 ) {
    return ( (  into_dash_iter762 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_379   chars864 (    struct StrConcat_779  self1108 ) {
    return ( (  into_dash_iter778 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_383   chars865 (    struct StrConcat_781  self1108 ) {
    return ( (  into_dash_iter780 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   chars866 (    struct StrConcat_807  self1108 ) {
    return ( (  into_dash_iter806 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_398   chars867 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter814 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   chars868 (    struct StrConcat_816  self1108 ) {
    return ( (  into_dash_iter815 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_473   chars869 (    struct TakeWhile_473  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_477   chars870 (    struct TakeWhile_477  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_480   chars871 (    struct TakeWhile_480  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_484   chars872 (    struct TakeWhile_484  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_495   chars873 (    struct TakeWhile_495  self1193 ) {
    return (  self1193 );
}

struct Tuple2_877 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_877 Tuple2_877_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_877 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq874 (    struct TakeWhile_477  l1203 ,    char  r1205 ) {
    struct TakeWhile_477  temp875 = ( (  chars870 ) ( (  l1203 ) ) );
    struct TakeWhile_477 *  l1206 = ( &temp875 );
    struct AppendIter_376  temp876 = ( (  chars753 ) ( (  r1205 ) ) );
    struct AppendIter_376 *  r1207 = ( &temp876 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next488 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next418 ) ( (  r1207 ) ) );
        struct Tuple2_877  dref1210 = ( ( Tuple2_877_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_297_None_t && dref1210 .field1.tag == Maybe_297_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_297_Just_t && dref1210 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq878 (    struct TakeWhile_477  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_477  temp879 = ( (  chars870 ) ( (  l1203 ) ) );
    struct TakeWhile_477 *  l1206 = ( &temp879 );
    struct ConstStrIter_308  temp880 = ( (  chars752 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp880 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next488 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_877  dref1210 = ( ( Tuple2_877_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_297_None_t && dref1210 .field1.tag == Maybe_297_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_297_Just_t && dref1210 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq881 (    struct TakeWhile_495  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_495  temp882 = ( (  chars873 ) ( (  l1203 ) ) );
    struct TakeWhile_495 *  l1206 = ( &temp882 );
    struct ConstStrIter_308  temp883 = ( (  chars752 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp883 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next494 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_877  dref1210 = ( ( Tuple2_877_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_297_None_t && dref1210 .field1.tag == Maybe_297_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_297_Just_t && dref1210 .field1.tag == Maybe_297_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_297_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_297_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  int32_t   char_dash_i32884 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed249 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8885 (    char  c1223 ) {
    return ( (  cast194 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char886 (    int32_t  i1226 ) {
    return ( (  cast197 ) ( (  i1226 ) ) );
}

static  bool   eq887 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp888 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp75 ) ( ( (  char_dash_i32884 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32884 ) ( (  r1246 ) ) ) ) );
}

static  bool   unreachable889 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   unreachable890 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   panic891 (    struct StrConcat_823  errmsg1254 ) {
    ( (  print_dash_str820 ) ( ( ( StrConcat_821_StrConcat ) ( ( ( StrConcat_822_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic892 (    struct StrConcat_797  errmsg1254 ) {
    ( (  print_dash_str828 ) ( ( ( StrConcat_829_StrConcat ) ( ( ( StrConcat_830_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic893 (    struct StrConcat_837  errmsg1254 ) {
    ( (  print_dash_str834 ) ( ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic894 (    const char*  errmsg1254 ) {
    ( (  print_dash_str826 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic895 (    struct StrConcat_824  errmsg1254 ) {
    ( (  print_dash_str840 ) ( ( ( StrConcat_841_StrConcat ) ( ( ( StrConcat_842_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   panic_prime_896 (    const char*  errmsg1257 ) {
    ( (  print_dash_str826 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   assert897 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str826 ) ( ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail898 (    struct Maybe_265  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_265  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_265_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined126 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_265_Just_t ) {
        return ( dref1270 .stuff .Maybe_265_Just_s .field0 );
    }
}

static  struct DynStr_129   or_dash_fail899 (    struct Maybe_315  x1267 ,    struct StrConcat_823  errmsg1269 ) {
    struct Maybe_315  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_315_None_t ) {
        ( (  panic891 ) ( (  errmsg1269 ) ) );
        return ( (  undefined128 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_315_Just_t ) {
        return ( dref1270 .stuff .Maybe_315_Just_s .field0 );
    }
}

struct Maybe_901 {
    enum {
        Maybe_901_None_t,
        Maybe_901_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53  field0;
        } Maybe_901_Just_s;
    } stuff;
};

static struct Maybe_901 Maybe_901_Just (  struct Cell_53  field0 ) {
    return ( struct Maybe_901 ) { .tag = Maybe_901_Just_t, .stuff = { .Maybe_901_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53   or_dash_fail900 (    struct Maybe_901  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_901  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_901_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_901_Just_t ) {
        return ( dref1270 .stuff .Maybe_901_Just_s .field0 );
    }
}

struct Maybe_903 {
    enum {
        Maybe_903_None_t,
        Maybe_903_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_903_Just_s;
    } stuff;
};

static struct Maybe_903 Maybe_903_Just (  uint8_t  field0 ) {
    return ( struct Maybe_903 ) { .tag = Maybe_903_Just_t, .stuff = { .Maybe_903_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail902 (    struct Maybe_903  x1267 ,    struct StrConcat_797  errmsg1269 ) {
    struct Maybe_903  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_903_None_t ) {
        ( (  panic892 ) ( (  errmsg1269 ) ) );
        return ( (  undefined141 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_903_Just_t ) {
        return ( dref1270 .stuff .Maybe_903_Just_s .field0 );
    }
}

struct Maybe_905 {
    enum {
        Maybe_905_None_t,
        Maybe_905_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53 *  field0;
        } Maybe_905_Just_s;
    } stuff;
};

static struct Maybe_905 Maybe_905_Just (  struct Cell_53 *  field0 ) {
    return ( struct Maybe_905 ) { .tag = Maybe_905_Just_t, .stuff = { .Maybe_905_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53 *   or_dash_fail904 (    struct Maybe_905  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_905  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_905_None_t ) {
        ( (  panic894 ) ( (  errmsg1269 ) ) );
        return ( (  undefined150 ) ( ) );
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
            struct Cursor_745  field0;
        } Maybe_907_Just_s;
    } stuff;
};

static struct Maybe_907 Maybe_907_Just (  struct Cursor_745  field0 ) {
    return ( struct Maybe_907 ) { .tag = Maybe_907_Just_t, .stuff = { .Maybe_907_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_745   or_dash_else906 (    struct Maybe_907  self1274 ,    struct Cursor_745  alt1276 ) {
    struct Maybe_907  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_907_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_907_Just_t ) {
        return ( dref1277 .stuff .Maybe_907_Just_s .field0 );
    }
}

static  struct Slice_279   empty908 (  ) {
    return ( (struct Slice_279) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty909 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr258 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr910 (    struct Slice_279  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1303 = ( (  offset_dash_ptr154 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

static  struct Cell_53 *   get_dash_ptr911 (    struct Slice_546  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_53 *  elem_dash_ptr1303 = ( (  offset_dash_ptr160 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

struct Slice_913 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_265   try_dash_get912 (    struct Slice_913  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    }
    const char* *  elem_dash_ptr1309 = ( (  offset_dash_ptr152 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_265_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  struct Maybe_901   try_dash_get914 (    struct Slice_546  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_901) { .tag = Maybe_901_None_t } );
    }
    struct Cell_53 *  elem_dash_ptr1309 = ( (  offset_dash_ptr160 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_901_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  const char*   get915 (    struct Slice_913  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail898 ) ( ( (  try_dash_get912 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_53   get916 (    struct Slice_546  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail900 ) ( ( (  try_dash_get914 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set917 (    struct Slice_279  slice1317 ,    size_t  i1319 ,    struct List_3  x1321 ) {
    struct List_3 *  ep1322 = ( (  get_dash_ptr910 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set918 (    struct Slice_5  slice1317 ,    size_t  i1319 ,    char  x1321 ) {
    char *  ep1322 = ( (  get_dash_ptr30 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set919 (    struct Slice_546  slice1317 ,    size_t  i1319 ,    struct Cell_53  x1321 ) {
    struct Cell_53 *  ep1322 = ( (  get_dash_ptr911 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  struct SliceAddressIter_586   addresses920 (    struct Slice_279  slice1357 ) {
    return ( (struct SliceAddressIter_586) { .f_slice = (  slice1357 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam558 (   struct env558 env ,    struct Tuple2_347  dref1371 ) {
    return ( (  set918 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to921 (    struct Slice_5  src1368 ,    struct Slice_5  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic893 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env558 envinst558 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each557 ) ( ( (  zip453 ) ( (  src1368 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv558){ .fun = lam558, .env = envinst558 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam566 (   struct env566 env ,    struct Tuple2_352  dref1371 ) {
    return ( (  set917 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to922 (    struct Slice_279  src1368 ,    struct Slice_279  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic893 ) ( ( ( StrConcat_837_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env566 envinst566 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each565 ) ( ( (  zip452 ) ( (  src1368 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv566){ .fun = lam566, .env = envinst566 } ) ) );
    return ( Unit_13_Unit );
}

static  const char*   elem_dash_get923 (    struct Slice_913  self1376 ,    size_t  idx1378 ) {
    return ( (  get915 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  struct Cell_53   elem_dash_get924 (    struct Slice_546  self1376 ,    size_t  idx1378 ) {
    return ( (  get916 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  char   elem_dash_get925 (    struct Slice_5  self1376 ,    size_t  idx1378 ) {
    return ( (  get317 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  enum Unit_13   lam545 (   struct env545 env ,    int32_t  i1407 ) {
    return ( (  set919 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get924 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map926 (    struct Slice_546  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env545 envinst545 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each544 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv545){ .fun = lam545, .env = envinst545 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam550 (   struct env550 env ,    int32_t  i1407 ) {
    return ( (  set919 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get924 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map927 (    struct Slice_546  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env550 envinst550 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each549 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv550){ .fun = lam550, .env = envinst550 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam605 (   struct env605 env ,    int32_t  i1407 ) {
    return ( (  set919 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get924 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map928 (    struct Slice_546  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env605 envinst605 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each604 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv605){ .fun = lam605, .env = envinst605 } ) ) );
    return ( Unit_13_Unit );
}

static  enum CAllocator_4   idc929 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_279   allocate930 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize162 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1418 = ( (  cast_dash_ptr204 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_5   allocate931 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    char *  ptr1418 = ( (  cast_dash_ptr207 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_546   allocate932 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    struct Cell_53 *  ptr1418 = ( (  cast_dash_ptr214 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_546) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  enum Unit_13   free933 (    enum CAllocator_4  dref1420 ,    struct Slice_279  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr205 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free934 (    enum CAllocator_4  dref1420 ,    struct Slice_5  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr208 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_936 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free935 (    enum CAllocator_4  dref1420 ,    struct Slice_936  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free937 (    enum CAllocator_4  dref1420 ,    struct Slice_546  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr222 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr938 (    struct Array_137 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1463 = ( ( (  cast191 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  char *   get_dash_ptr939 (    struct Array_181 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1463 = ( ( (  cast196 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  enum Unit_13   set940 (    struct Array_137 *  arr1472 ,    size_t  i1475 ,    uint8_t  e1477 ) {
    uint8_t *  p1478 = ( (  get_dash_ptr938 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set941 (    struct Array_181 *  arr1472 ,    size_t  i1475 ,    char  e1477 ) {
    char *  p1478 = ( (  get_dash_ptr939 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice942 (    struct Array_181 *  arr1481 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast196 ) ( (  arr1481 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace943 (    char  c1532 ) {
    return ( ( (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace944 (    char  c1535 ) {
    return ( ! ( (  is_dash_whitespace943 ) ( (  c1535 ) ) ) );
}

static  struct LineIter_300   lines945 (    struct DynStr_129  s1542 ) {
    return ( (struct LineIter_300) { .f_og = (  s1542 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit946 (    char  c1571 ) {
    return ( (  cmp75 ( ( (  char_dash_i32884 ) ( (  c1571 ) ) ) , ( (  char_dash_i32884 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp75 ( ( (  char_dash_i32884 ) ( (  c1571 ) ) ) , ( (  char_dash_i32884 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_328   parse_dash_digit947 (    char  c1574 ) {
    if ( ( (  is_dash_digit946 ) ( (  c1574 ) ) ) ) {
        return ( ( Maybe_328_Just ) ( (  op_dash_sub83 ( ( (  char_dash_i32884 ) ( (  c1574 ) ) ) , ( (  char_dash_i32884 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
}

static  struct Maybe_677   sequence_dash_maybe949 (    char  e1580 ,    struct Maybe_677  b1582 ) {
    struct Maybe_677  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_677_None_t ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
    else if ( dref1583.tag == Maybe_677_Just_t ) {
        struct Maybe_328  dref1585 = ( (  parse_dash_digit947 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
        }
        else if ( dref1585.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_677_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_677_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_677   parse_dash_int948 (    struct TakeWhile_473  s1577 ) {
    struct TakeWhile_473  cs1587 = ( (  chars869 ) ( (  s1577 ) ) );
    struct Maybe_297  dref1588 = ( (  head727 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_297_Just_t ) {
        return ( (  reduce676 ) ( (  cs1587 ) ,  ( ( Maybe_677_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe949 ) ) );
    }
    else if ( dref1588.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
}

static  struct Maybe_677   sequence_dash_maybe951 (    char  e1580 ,    struct Maybe_677  b1582 ) {
    struct Maybe_677  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_677_None_t ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
    else if ( dref1583.tag == Maybe_677_Just_t ) {
        struct Maybe_328  dref1585 = ( (  parse_dash_digit947 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
        }
        else if ( dref1585.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_677_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_677_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_677   parse_dash_int950 (    struct TakeWhile_477  s1577 ) {
    struct TakeWhile_477  cs1587 = ( (  chars870 ) ( (  s1577 ) ) );
    struct Maybe_297  dref1588 = ( (  head729 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_297_Just_t ) {
        return ( (  reduce685 ) ( (  cs1587 ) ,  ( ( Maybe_677_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe951 ) ) );
    }
    else if ( dref1588.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr952 (    struct List_280 *  list1593 ,    size_t  i1595 ) {
    if ( ( (  cmp9 ( (  i1595 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1595 ) , ( ( * (  list1593 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1595 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1593 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr910 ) ( ( ( * (  list1593 ) ) .f_elements ) ,  (  i1595 ) ) );
}

static  struct List_3   get953 (    struct List_280 *  list1603 ,    size_t  i1605 ) {
    return ( * ( (  get_dash_ptr952 ) ( (  list1603 ) ,  (  i1605 ) ) ) );
}

static  struct Maybe_297   try_dash_get954 (    struct List_3 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( ( (  get7 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  struct Maybe_314   try_dash_get955 (    struct List_280 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    return ( ( Maybe_314_Just ) ( ( (  get953 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  enum Unit_13   set956 (    struct List_3 *  list1613 ,    size_t  i1615 ,    char  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set918 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set957 (    struct List_280 *  list1613 ,    size_t  i1615 ,    struct List_3  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set917 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_280   mk958 (    enum CAllocator_4  al1623 ) {
    struct Slice_279  elements1624 = ( (  empty908 ) ( ) );
    return ( (struct List_280) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk959 (    enum CAllocator_4  al1623 ) {
    struct Slice_5  elements1624 = ( (  empty909 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free960 (    struct List_3 *  list1627 ) {
    ( (  free934 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free961 (    struct List_280 *  list1627 ) {
    ( (  free933 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam521 (   struct env521 env ,    struct Tuple2_352  dref1635 ) {
    return ( (  set917 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full535 (   struct env535 env ,    struct List_280 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate930 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_279  new_dash_slice1634 = ( (  allocate930 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env521 envinst521 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each520 ) ( ( (  zip452 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv521){ .fun = lam521, .env = envinst521 } ) ) );
            ( (  free933 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam525 (   struct env525 env ,    struct Tuple2_347  dref1635 ) {
    return ( (  set918 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full305 (   struct env305 env ,    struct List_3 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate931 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1634 = ( (  allocate931 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env525 envinst525 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each524 ) ( ( (  zip453 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv525){ .fun = lam525, .env = envinst525 } ) ) );
            ( (  free934 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add534 (   struct env534 env ,    struct List_280 *  list1640 ,    struct List_3  elem1642 ) {
    struct funenv535  temp962 = ( (struct funenv535){ .fun = grow_dash_if_dash_full535, .env =  env.envinst535  } );
    ( temp962.fun ( temp962.env ,  (  list1640 ) ) );
    ( (  set917 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add304 (   struct env304 env ,    struct List_3 *  list1640 ,    char  elem1642 ) {
    struct funenv305  temp963 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp963.fun ( temp963.env ,  (  list1640 ) ) );
    ( (  set918 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env964 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env534 envinst534;
    struct env535 envinst535;
};

static  enum Unit_13   insert964 (   struct env964 env ,    struct List_280 *  list1645 ,    size_t  i1647 ,    struct List_3  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv534  temp965 = ( (struct funenv534){ .fun = add534, .env =  env.envinst534  } );
        ( temp965.fun ( temp965.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv535  temp966 = ( (struct funenv535){ .fun = grow_dash_if_dash_full535, .env =  env.envinst535  } );
    ( temp966.fun ( temp966.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set917 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get953 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set917 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env967 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env304 envinst304;
    struct env305 envinst305;
};

static  enum Unit_13   insert967 (   struct env967 env ,    struct List_3 *  list1645 ,    size_t  i1647 ,    char  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv304  temp968 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
        ( temp968.fun ( temp968.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv305  temp969 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp969.fun ( temp969.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set918 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set918 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
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

static  enum Unit_13   lam562 (   struct env562 env ,    struct Tuple2_347  dref1656 ) {
    return ( (  set956 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove970 (   struct env970 env ,    struct List_3 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env562 envinst562 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each561 ) ( ( (  drop355 ) ( ( (  zip454 ) ( ( * (  list1653 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv562){ .fun = lam562, .env = envinst562 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free934 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty909 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_5  new_dash_slice1661 = ( (  allocate931 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to921 ) ( ( (  subslice292 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free934 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
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

static  enum Unit_13   lam570 (   struct env570 env ,    struct Tuple2_352  dref1656 ) {
    return ( (  set957 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove971 (   struct env971 env ,    struct List_280 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env570 envinst570 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each569 ) ( ( (  drop357 ) ( ( (  zip455 ) ( ( * (  list1653 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv570){ .fun = lam570, .env = envinst570 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free933 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty908 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_279  new_dash_slice1661 = ( (  allocate930 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to922 ) ( ( (  subslice283 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free933 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
    return ( Unit_13_Unit );
}

struct funenv970 {
    enum Unit_13  (*fun) (  struct env970  ,    struct List_3 *  ,    size_t  );
    struct env970 env;
};

struct env972 {
    ;
    ;
    ;
    ;
    struct env970 envinst970;
    ;
    ;
};

static  enum Unit_13   pop972 (   struct env972 env ,    struct List_3 *  list1675 ) {
    if ( (  eq45 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic894 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv970  temp973 = ( (struct funenv970){ .fun = remove970, .env =  env.envinst970  } );
    return ( temp973.fun ( temp973.env ,  (  list1675 ) ,  (  op_dash_sub94 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam529 (   struct env529 env ,    char  x1685 ) {
    struct funenv304  temp974 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp974.fun ( temp974.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all303 (   struct env303 env ,    struct List_3 *  list1681 ,    struct DynStr_129  it1683 ) {
    struct env529 envinst529 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each528 ) ( (  it1683 ) ,  ( (struct funenv529){ .fun = lam529, .env = envinst529 } ) ) );
    return ( Unit_13_Unit );
}

struct env975 {
    ;
    struct env534 envinst534;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam533 (   struct env533 env ,    struct List_3  x1685 ) {
    struct funenv534  temp976 = ( (struct funenv534){ .fun = add534, .env =  env.envinst534  } );
    return ( temp976.fun ( temp976.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all975 (   struct env975 env ,    struct List_280 *  list1681 ,    struct Map_299  it1683 ) {
    struct env533 envinst533 = {
        .list1681 =  list1681 ,
        .envinst534 = env.envinst534 ,
    };
    ( (  for_dash_each532 ) ( (  it1683 ) ,  ( (struct funenv533){ .fun = lam533, .env = envinst533 } ) ) );
    return ( Unit_13_Unit );
}

struct env977 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam574 (   struct env574 env ,    char  x1685 ) {
    struct funenv304  temp978 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp978.fun ( temp978.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all977 (   struct env977 env ,    struct List_3 *  list1681 ,    struct List_3 *  it1683 ) {
    struct env574 envinst574 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each573 ) ( (  it1683 ) ,  ( (struct funenv574){ .fun = lam574, .env = envinst574 } ) ) );
    return ( Unit_13_Unit );
}

struct env979 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam578 (   struct env578 env ,    char  x1685 ) {
    struct funenv304  temp980 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp980.fun ( temp980.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all979 (   struct env979 env ,    struct List_3 *  list1681 ,    struct Slice_5  it1683 ) {
    struct env578 envinst578 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each577 ) ( (  it1683 ) ,  ( (struct funenv578){ .fun = lam578, .env = envinst578 } ) ) );
    return ( Unit_13_Unit );
}

struct env981 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam582 (   struct env582 env ,    char  x1685 ) {
    struct funenv304  temp982 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp982.fun ( temp982.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all981 (   struct env981 env ,    struct List_3 *  list1681 ,    struct TakeWhile_475  it1683 ) {
    struct env582 envinst582 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each581 ) ( (  it1683 ) ,  ( (struct funenv582){ .fun = lam582, .env = envinst582 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim983 (    struct List_3 *  l1688 ,    size_t  new_dash_count1690 ) {
    (*  l1688 ) .f_count = (  new_dash_count1690 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list302 (   struct env302 env ,    struct DynStr_129  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_3  temp984 = ( (  mk959 ) ( (  al1695 ) ) );
    struct List_3 *  l1696 = ( &temp984 );
    struct funenv303  temp985 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
    ( temp985.fun ( temp985.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

struct funenv975 {
    enum Unit_13  (*fun) (  struct env975  ,    struct List_280 *  ,    struct Map_299  );
    struct env975 env;
};

struct env986 {
    ;
    ;
    ;
    ;
    struct env975 envinst975;
    ;
};

static  struct List_280   to_dash_list986 (   struct env986 env ,    struct Map_299  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_280  temp987 = ( (  mk958 ) ( (  al1695 ) ) );
    struct List_280 *  l1696 = ( &temp987 );
    struct funenv975  temp988 = ( (struct funenv975){ .fun = add_dash_all975, .env =  env.envinst975  } );
    ( temp988.fun ( temp988.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

static  struct Slice_5   to_dash_slice989 (    struct List_3  l1699 ) {
    char *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct Slice_279   to_dash_slice990 (    struct List_280  l1699 ) {
    struct List_3 *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_279) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct SliceAddressIter_586   addresses991 (    struct List_280  l1703 ) {
    return ( (  addresses920 ) ( ( (  to_dash_slice990 ) ( (  l1703 ) ) ) ) );
}

static  size_t   size992 (    struct List_3 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   size993 (    struct List_280 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   clamp_dash_uint994 (    int32_t  self1724 ) {
    if ( (  cmp75 ( (  self1724 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size272 ) ( ( (uint32_t ) (  self1724 ) ) ) );
    }
}

static  struct Maybe_903   hex_dash_digit995 (    char  c1734 ) {
    if ( ( (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_903_Just ) ( (  op_dash_sub92 ( ( (  char_dash_u8885 ) ( (  c1734 ) ) ) , ( (  char_dash_u8885 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_903_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8885 ) ( (  c1734 ) ) ) , ( (  char_dash_u8885 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp888 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_903_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8885 ) ( (  c1734 ) ) ) , ( (  char_dash_u8885 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_903) { .tag = Maybe_903_None_t } );
}

static  uint32_t   lam997 (    char  c1739 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64275 ) ( ( (  or_dash_fail902 ) ( ( (  hex_dash_digit995 ) ( (  c1739 ) ) ) ,  ( ( StrConcat_797_StrConcat ) ( ( ( StrConcat_798_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1739 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam998 (    uint32_t  elem1741 ,    uint32_t  b1743 ) {
    return (  op_dash_add87 ( (  op_dash_mul89 ( (  b1743 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1741 ) ) );
}

static  uint32_t   from_dash_hex996 (    const char*  arr1737 ) {
    return ( (  reduce674 ) ( ( (  map334 ) ( (  arr1737 ) ,  (  lam997 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam998 ) ) );
}

static  struct Maybe_265   get999 (    const char*  s1777 ) {
    return ( (  from_dash_nullable_dash_c_dash_str264 ) ( ( ( getenv ) ( (  s1777 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1000 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1001 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1002 (    uint32_t  x1754 ,    uint32_t  y1756 ) {
    uint32_t  x1757 = (  op_dash_add87 ( (  x1754 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1758 = (  op_dash_add87 ( (  y1756 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str856 ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_858_StrConcat ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_779_StrConcat ) ( ( "\x1b[" ) ,  (  y1758 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1757 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1003 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_1005 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1005 Tuple2_1005_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1005 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_1005   get_dash_dimensions1004 (  ) {
    struct Winsize_177  temp1006 = ( ( (  zeroed233 ) ( ) ) );
    struct Winsize_177 *  ws1762 = ( &temp1006 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno109 ) ( ) ) ,  ( (  tiocgwinsz125 ) ( ) ) ,  (  ws1762 ) ) ) , (  op_dash_neg86 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1005_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1005_Tuple2 ) ( ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1007 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1008 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_612   query_dash_palette1009 (  ) {
    struct Maybe_265  colorterm1778 = ( (  get999 ) ( ( "COLORTERM" ) ) );
    struct Maybe_265  dref1779 = (  colorterm1778 );
    if ( dref1779.tag == Maybe_265_Just_t ) {
        if ( ( (  eq887 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq887 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_612_PaletteRGB );
        }
    }
    else if ( dref1779.tag == Maybe_265_None_t ) {
    }
    struct Maybe_265  dref1781 = ( (  get999 ) ( ( "TERM" ) ) );
    if ( dref1781.tag == Maybe_265_Just_t ) {
        if ( (  eq887 ( ( dref1781 .stuff .Maybe_265_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_612_Palette8 );
        }
    }
    else if ( dref1781.tag == Maybe_265_None_t ) {
    }
    return ( ColorPalette_612_Palette16 );
}

static  enum Unit_13   set_dash_fg81010 (    enum Color8_55  color1797 ) {
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

static  enum Unit_13   set_dash_fg161011 (    enum Color16_56  color1801 ) {
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

static  enum Unit_13   set_dash_bg81012 (    enum Color8_55  color1805 ) {
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

static  enum Unit_13   set_dash_bg161013 (    enum Color16_56  color1809 ) {
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

static  enum Unit_13   reset_dash_colors1014 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1015 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561016 (    uint8_t  color1815 ) {
    ( (  print_dash_str854 ) ( ( ( StrConcat_849_StrConcat ) ( ( ( StrConcat_850_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1815 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561017 (    uint8_t  color1818 ) {
    ( (  print_dash_str854 ) ( ( ( StrConcat_849_StrConcat ) ( ( ( StrConcat_850_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1818 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1018 (    struct RGB_57  c1838 ) {
    ( (  print_dash_str844 ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_849_StrConcat ) ( ( ( StrConcat_850_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1838 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1019 (    struct RGB_57  c1841 ) {
    ( (  print_dash_str844 ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( ( StrConcat_848_StrConcat ) ( ( ( StrConcat_849_StrConcat ) ( ( ( StrConcat_850_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1841 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1020 (    struct Color_54  c1859 ) {
    struct Color_54  dref1860 = (  c1859 );
    if ( dref1860.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1007 ) ( ) );
    }
    else if ( dref1860.tag == Color_54_Color8_t ) {
        ( (  set_dash_fg81010 ) ( ( dref1860 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color16_t ) {
        ( (  set_dash_fg161011 ) ( ( dref1860 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color256_t ) {
        ( (  set_dash_fg2561016 ) ( ( dref1860 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1018 ) ( ( dref1860 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1021 (    struct Color_54  c1867 ) {
    struct Color_54  dref1868 = (  c1867 );
    if ( dref1868.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1008 ) ( ) );
    }
    else if ( dref1868.tag == Color_54_Color8_t ) {
        ( (  set_dash_bg81012 ) ( ( dref1868 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color16_t ) {
        ( (  set_dash_bg161013 ) ( ( dref1868 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color256_t ) {
        ( (  set_dash_bg2561017 ) ( ( dref1868 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1019 ) ( ( dref1868 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1022 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam539 (   struct env539 env ,    char  c1924 ) {
    struct funenv304  temp1023 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1023.fun ( temp1023.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1022 (   struct env1022 env ,    struct StrBuilder_540 *  builder1920 ,    const char*  s1922 ) {
    struct env539 envinst539 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each538 ) ( ( (  chars752 ) ( (  s1922 ) ) ) ,  ( (struct funenv539){ .fun = lam539, .env = envinst539 } ) ) );
    return ( Unit_13_Unit );
}

struct env1024 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam592 (   struct env592 env ,    char  c1924 ) {
    struct funenv304  temp1025 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1025.fun ( temp1025.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1024 (   struct env1024 env ,    struct StrBuilder_540 *  builder1920 ,    struct TakeWhile_480  s1922 ) {
    struct env592 envinst592 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each591 ) ( ( (  chars871 ) ( (  s1922 ) ) ) ,  ( (struct funenv592){ .fun = lam592, .env = envinst592 } ) ) );
    return ( Unit_13_Unit );
}

struct env1026 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam596 (   struct env596 env ,    char  c1924 ) {
    struct funenv304  temp1027 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1027.fun ( temp1027.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1026 (   struct env1026 env ,    struct StrBuilder_540 *  builder1920 ,    struct TakeWhile_484  s1922 ) {
    struct env596 envinst596 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each595 ) ( ( (  chars872 ) ( (  s1922 ) ) ) ,  ( (struct funenv596){ .fun = lam596, .env = envinst596 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char601 (   struct env601 env ,    struct StrBuilder_540 *  builder1927 ,    char  c1929 ) {
    struct funenv304  temp1028 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    ( temp1028.fun ( temp1028.env ,  ( & ( ( * (  builder1927 ) ) .f_chars ) ) ,  (  c1929 ) ) );
    return ( Unit_13_Unit );
}

struct funenv972 {
    enum Unit_13  (*fun) (  struct env972  ,    struct List_3 *  );
    struct env972 env;
};

struct env1029 {
    ;
    struct env972 envinst972;
    ;
};

static  enum Unit_13   pop1029 (   struct env1029 env ,    struct StrBuilder_540 *  sb1937 ) {
    struct funenv972  temp1030 = ( (struct funenv972){ .fun = pop972, .env =  env.envinst972  } );
    return ( temp1030.fun ( temp1030.env ,  ( & ( ( * (  sb1937 ) ) .f_chars ) ) ) );
}

static  size_t   count1031 (    struct StrBuilder_540 *  sb1940 ) {
    return ( ( ( * (  sb1940 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_540   mk1032 (    enum CAllocator_4  al1943 ) {
    return ( (struct StrBuilder_540) { .f_chars = ( (  mk959 ) ( (  al1943 ) ) ) } );
}

static  enum Unit_13   free1033 (    struct StrBuilder_540 *  builder1949 ) {
    ( (  free960 ) ( ( & ( ( * (  builder1949 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1022 {
    enum Unit_13  (*fun) (  struct env1022  ,    struct StrBuilder_540 *  ,    const char*  );
    struct env1022 env;
};

struct env1034 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1022 envinst1022;
    ;
    ;
    struct env601 envinst601;
};

static  const char*   mk_dash_const_dash_str1034 (   struct env1034 env ,    const char*  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_540  temp1035 = ( (  mk1032 ) ( (  al1965 ) ) );
    struct StrBuilder_540 *  sb1966 = ( &temp1035 );
    struct funenv1022  temp1036 = ( (struct funenv1022){ .fun = write1022, .env =  env.envinst1022  } );
    ( temp1036.fun ( temp1036.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv601  temp1037 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
    ( temp1037.fun ( temp1037.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str770 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1024 {
    enum Unit_13  (*fun) (  struct env1024  ,    struct StrBuilder_540 *  ,    struct TakeWhile_480  );
    struct env1024 env;
};

struct env1038 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1024 envinst1024;
    ;
    struct env601 envinst601;
};

static  const char*   mk_dash_const_dash_str1038 (   struct env1038 env ,    struct TakeWhile_480  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_540  temp1039 = ( (  mk1032 ) ( (  al1965 ) ) );
    struct StrBuilder_540 *  sb1966 = ( &temp1039 );
    struct funenv1024  temp1040 = ( (struct funenv1024){ .fun = write1024, .env =  env.envinst1024  } );
    ( temp1040.fun ( temp1040.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv601  temp1041 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
    ( temp1041.fun ( temp1041.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str770 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1026 {
    enum Unit_13  (*fun) (  struct env1026  ,    struct StrBuilder_540 *  ,    struct TakeWhile_484  );
    struct env1026 env;
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
    struct env1026 envinst1026;
    ;
    struct env601 envinst601;
};

static  const char*   mk_dash_const_dash_str1042 (   struct env1042 env ,    struct TakeWhile_484  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_540  temp1043 = ( (  mk1032 ) ( (  al1965 ) ) );
    struct StrBuilder_540 *  sb1966 = ( &temp1043 );
    struct funenv1026  temp1044 = ( (struct funenv1026){ .fun = write1026, .env =  env.envinst1026  } );
    ( temp1044.fun ( temp1044.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv601  temp1045 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
    ( temp1045.fun ( temp1045.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str770 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  uint32_t   fst1046 (    struct Tuple2_1005  dref2005 ) {
    return ( dref2005 .field0 );
}

static  uint32_t   snd1047 (    struct Tuple2_1005  dref2008 ) {
    return ( dref2008 .field1 );
}

struct Maybe_1049 {
    enum {
        Maybe_1049_None_t,
        Maybe_1049_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1049_Just_s;
    } stuff;
};

static struct Maybe_1049 Maybe_1049_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1049 ) { .tag = Maybe_1049_Just_t, .stuff = { .Maybe_1049_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1048 (    struct Maybe_1049  m2012 ) {
    struct Maybe_1049  dref2013 = (  m2012 );
    if ( dref2013.tag == Maybe_1049_None_t ) {
        return ( false );
    }
    else if ( dref2013.tag == Maybe_1049_Just_t ) {
        return ( true );
    }
}

struct Visual_1053 {
    int32_t  field0;
};

static struct Visual_1053 Visual_1053_Visual (  int32_t  field0 ) {
    return ( struct Visual_1053 ) { .field0 = field0 };
};

struct Theme_1054 {
    struct Color_54  f_bg;
    struct Color_54  f_text;
    struct Color_54  f_cursor_dash_bg;
    struct Color_54  f_cursor_dash_text;
    struct Color_54  f_selection_dash_bg;
    struct Color_54  f_selection_dash_text;
    struct Color_54  f_line_dash_num_dash_hi_dash_bg;
    struct Color_54  f_line_dash_num_dash_hi_dash_text;
};

struct Editor_1052 {
    bool  f_running;
    struct Cursor_745  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1053  f_goal_dash_x;
    struct List_280  f_current_dash_file;
    struct Maybe_265  f_filename;
    struct Mode_764  f_mode;
    struct Maybe_1049  f_anim;
    struct Maybe_907  f_selected;
    struct Theme_1054 *  f_theme;
};

struct env1051 {
    ;
    ;
    struct Editor_1052 *  ed2791;
};

struct funenv1051 {
    struct Maybe_297  (*fun) (  struct env1051  ,    struct List_3  );
    struct env1051 env;
};

static  struct Maybe_297   and_dash_maybe1050 (    struct Maybe_314  m2016 ,   struct funenv1051  fun2018 ) {
    struct Maybe_314  dref2019 = (  m2016 );
    if ( dref2019.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref2019.tag == Maybe_314_Just_t ) {
        struct funenv1051  temp1055 = (  fun2018 );
        return ( temp1055.fun ( temp1055.env ,  ( dref2019 .stuff .Maybe_314_Just_s .field0 ) ) );
    }
}

static  struct Maybe_50   fmap_dash_maybe1056 (    struct Maybe_297  x2023 ,    bool (*  fun2025 )(    char  ) ) {
    struct Maybe_297  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref2026.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_346   fmap_dash_maybe1057 (    struct Maybe_297  x2023 ,    struct Tuple2_347 (*  fun2025 )(    char  ) ) {
    struct Maybe_297  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
    }
    else if ( dref2026.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_346_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  int32_t   maybe1058 (    struct Maybe_907  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_745  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_907  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_907_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_907_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1059 (    struct Maybe_907  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_745  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_907  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_907_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_907_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1060 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1061 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1062 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1063 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1064 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1065 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1066 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1067 (    struct Maybe_297  x2030 ,   struct funenv312  fun2032 ,    int32_t  default2034 ) {
    struct funenv312  temp1068 = (  fun2032 );
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( temp1068.fun ( temp1068.env ,  ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  struct timespec   now1069 (  ) {
    struct timespec  temp1070 = ( (  undefined133 ) ( ) );
    struct timespec *  t2150 = ( &temp1070 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  t2150 ) ) );
    return ( * (  t2150 ) );
}

struct Duration_1072 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1071 (    struct Duration_1072  l2154 ,    struct Duration_1072  r2156 ) {
    enum Ordering_10  scmp2157 = ( (  cmp74 ) ( ( (  l2154 ) .f_secs ) ,  ( (  r2156 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2157 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2157 );
    }
    return ( (  cmp74 ) ( ( (  l2154 ) .f_nsecs ) ,  ( (  r2156 ) .f_nsecs ) ) );
}

static  struct Duration_1072   diff1073 (    struct timespec  l2160 ,    struct timespec  r2162 ) {
    int64_t  secdiff2163 = (  op_dash_sub79 ( ( (  l2160 ) .tv_sec ) , ( (  r2162 ) .tv_sec ) ) );
    int64_t  nsdiff2164 = (  op_dash_sub79 ( ( (  l2160 ) .tv_nsec ) , ( (  r2162 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2165 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp74 ( (  nsdiff2164 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1072) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  op_dash_neg81 ( (  nsdiff2164 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1072) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2164 ) } );
            } else {
                return ( (struct Duration_1072) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add78 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1072) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  nsdiff2164 ) } );
        } else {
            return ( (struct Duration_1072) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub79 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
        }
    }
}

static  struct Duration_1072   duration_dash_from_dash_ns1074 (    int64_t  ns2168 ) {
    int64_t  ns_dash_in_dash_secs2169 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1072) { .f_secs = (  op_dash_div80 ( (  ns2168 ) , (  ns_dash_in_dash_secs2169 ) ) ) , .f_nsecs = ( (  mod743 ) ( (  ns2168 ) ,  (  ns_dash_in_dash_secs2169 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1075 (    struct Duration_1072  d2180 ) {
    int64_t  ns_dash_in_dash_secs2181 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add78 ( (  op_dash_mul32 ( ( (  d2180 ) .f_secs ) , (  ns_dash_in_dash_secs2181 ) ) ) , ( (  d2180 ) .f_nsecs ) ) );
}

static  struct Scanner_286   mk1076 (    struct DynStr_129  s2191 ) {
    return ( (struct Scanner_286) { .f_s = ( (  chars777 ) ( (  s2191 ) ) ) } );
}

static  struct Maybe_677   scan_dash_int1077 (    struct Scanner_286 *  sc2194 ) {
    struct TakeWhile_473  digit_dash_chars2195 = ( (  take_dash_while496 ) ( (  sc2194 ) ,  (  is_dash_digit946 ) ) );
    if ( ( (  null734 ) ( (  digit_dash_chars2195 ) ) ) ) {
        return ( (struct Maybe_677) { .tag = Maybe_677_None_t } );
    }
    ( (  drop_prime_736 ) ( (  sc2194 ) ,  ( (  count703 ) ( (  digit_dash_chars2195 ) ) ) ) );
    return ( (  parse_dash_int948 ) ( (  digit_dash_chars2195 ) ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1078 (  ) {
    struct Termios_136  temp1079 = ( (  undefined135 ) ( ) );
    struct Termios_136 *  orig_dash_termios2202 = ( &temp1079 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  orig_dash_termios2202 ) ) ) ) );
    struct Termios_136  raw2203 = ( * (  orig_dash_termios2202 ) );
    raw2203 .f_c_dash_lflag = ( (  u32_dash_and741 ) ( ( (  raw2203 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg742 ) ( ( (  u32_dash_ors738 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_iflag = ( (  u32_dash_and741 ) ( ( (  raw2203 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg742 ) ( ( (  u32_dash_ors739 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  brkint115 ) ( ) ) , ( (  icrnl116 ) ( ) ) , ( (  inpck117 ) ( ) ) , ( (  istrip118 ) ( ) ) , ( ( (  ixon119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_oflag = ( (  u32_dash_and741 ) ( ( (  raw2203 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg742 ) ( ( (  u32_dash_ors740 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( ( (  opost120 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_cflag = ( (  u32_dash_or737 ) ( ( (  raw2203 ) .f_c_dash_cflag ) ,  ( (  cs8121 ) ( ) ) ) );
    ( (  set940 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vmin122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set940 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vtime123 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( ( & (  raw2203 ) ) ) ) ) );
    return ( * (  orig_dash_termios2202 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1080 (    struct Termios_136 *  og_dash_termios2206 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  og_dash_termios2206 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   read_dash_byte1081 (    int32_t  timeout_dash_ms2210 ) {
    struct Pollfd_219  pfd2211 = ( (struct Pollfd_219) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp75 ( ( ( poll ) ( ( (  cast_dash_ptr218 ) ( ( & (  pfd2211 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2210 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  c2212 = ( ( (  zeroed229 ) ( ) ) );
    if ( (  cmp75 ( ( ( read ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr208 ) ( ( & (  c2212 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( (  c2212 ) ) );
}

static  enum Unit_13   flush_dash_stdout1082 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr259 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1083 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1084 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1086 {
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

struct env1087 {
    bool *  should_dash_resize2216;
};

struct funenv1087 {
    enum Unit_13  (*fun) (  struct env1087  ,    int32_t  );
    struct env1087 env;
};

struct funenv1087  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1088 ) {
    struct funenv1087  temp1089 = _intr_sigarr [  __intr__sig1088 ];
    temp1089.fun ( temp1089.env ,  __intr__sig1088 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1090 ,   struct funenv1087  __intr__fun1091 ) {
    _intr_sigarr [  __intr__sig1090 ] =  __intr__fun1091;
    signal(  __intr__sig1090 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1087 (   struct env1087 env ,    int32_t  dref2223 ) {
    (* env.should_dash_resize2216 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_611   mk1086 (   struct env1086 env ) {
    struct Termios_136  og_dash_termios2218 = ( (  enable_dash_raw_dash_mode1078 ) ( ) );
    ( (  hide_dash_cursor1001 ) ( ) );
    ( (  reset_dash_colors1014 ) ( ) );
    ( (  clear_dash_screen1015 ) ( ) );
    ( (  enable_dash_mouse1083 ) ( ) );
    ( (  flush_dash_stdout1082 ) ( ) );
    enum ColorPalette_612  palette2219 = ( (  query_dash_palette1009 ) ( ) );
    struct Tuple2_1005  dims2220 = ( (  get_dash_dimensions1004 ) ( ) );
    uint32_t  fps2221 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2222 = ( (  now1069 ) ( ) );
    struct env1087 envinst1087 = {
        .should_dash_resize2216 = env.should_dash_resize2216 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1087){ .fun = lam1087, .env = envinst1087 } ) ) );
    return ( (struct Tui_611) { .f_width = ( (  fst1046 ) ( (  dims2220 ) ) ) , .f_height = ( (  snd1047 ) ( (  dims2220 ) ) ) , .f_target_dash_fps = (  fps2221 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2222 ) , .f_fps_dash_ts = (  last_dash_sync2222 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2218 ) , .f_palette = (  palette2219 ) } );
}

static  enum Unit_13   sync1092 (    struct Tui_611 *  tui2226 ) {
    if ( (  eq42 ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2227 = (  op_dash_div80 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size272 ) ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1093 = ( (  undefined133 ) ( ) );
    struct timespec *  now2228 = ( &temp1093 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  now2228 ) ) );
    int64_t  elapsed_dash_ns2229 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_sec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_nsec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2230 = (  op_dash_sub79 ( (  frame_dash_ns2227 ) , (  elapsed_dash_ns2229 ) ) );
    if ( (  cmp74 ( (  sleep_dash_ns2230 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1094 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2230 ) } );
        struct timespec *  ts2231 = ( &temp1094 );
        ( ( nanosleep ) ( (  ts2231 ) ,  ( (  null_dash_ptr261 ) ( ) ) ) );
    }
    struct timespec  temp1095 = ( (  undefined133 ) ( ) );
    struct timespec *  last_dash_sync2232 = ( &temp1095 );
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

static  enum Unit_13   deinit1096 (    struct Tui_611 *  tui2236 ) {
    ( (  disable_dash_mouse1084 ) ( ) );
    ( (  show_dash_cursor1000 ) ( ) );
    ( (  reset_dash_colors1014 ) ( ) );
    ( (  clear_dash_screen1015 ) ( ) );
    ( (  reset_dash_cursor_dash_position1003 ) ( ) );
    ( (  disable_dash_raw_dash_mode1080 ) ( ( & ( ( * (  tui2236 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1082 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   btn_dash_to_dash_mouse_dash_button1097 (    int64_t  btn2243 ) {
    return ( {  int32_t  dref2244 = ( (  i64_dash_i32269 ) ( (  btn2243 ) ) ) ;  dref2244 == 0 ? ( MouseButton_144_MouseLeft ) :  dref2244 == 1 ? ( MouseButton_144_MouseMiddle ) :  dref2244 == 2 ? ( MouseButton_144_MouseRight ) :  dref2244 == 64 ? ( MouseButton_144_ScrollUp ) :  dref2244 == 65 ? ( MouseButton_144_ScrollDown ) : ( (  panic_prime_896 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1099 {
    enum {
        Maybe_1099_None_t,
        Maybe_1099_Just_t,
    } tag;
    union {
        struct {
            struct Key_516  field0;
        } Maybe_1099_Just_s;
    } stuff;
};

static struct Maybe_1099 Maybe_1099_Just (  struct Key_516  field0 ) {
    return ( struct Maybe_1099 ) { .tag = Maybe_1099_Just_t, .stuff = { .Maybe_1099_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1099   parse_dash_ss31098 (    char  c2247 ) {
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1099_Just ) ( ( (struct Key_516) { .tag = Key_516_F4_t } ) ) );
    }
    return ( (struct Maybe_1099) { .tag = Maybe_1099_None_t } );
}

static  struct Maybe_514   parse_dash_csi1100 (    struct DynStr_129  seq2250 ) {
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
    }
    char  last2251 = (  elem_dash_get925 ( ( (  seq2250 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get925 ( ( (  seq2250 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_286  temp1101 = ( (  mk1076 ) ( ( (  substr322 ) ( (  seq2250 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2250 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_286 *  sc2252 = ( &temp1101 );
        struct Maybe_677  dref2253 = ( (  scan_dash_int1077 ) ( (  sc2252 ) ) );
        if ( dref2253.tag == Maybe_677_None_t ) {
            return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
        }
        else if ( dref2253.tag == Maybe_677_Just_t ) {
            ( (  next486 ) ( (  sc2252 ) ) );
            struct Maybe_677  dref2255 = ( (  scan_dash_int1077 ) ( (  sc2252 ) ) );
            if ( dref2255.tag == Maybe_677_None_t ) {
                return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
            }
            else if ( dref2255.tag == Maybe_677_Just_t ) {
                ( (  next486 ) ( (  sc2252 ) ) );
                struct Maybe_677  dref2257 = ( (  scan_dash_int1077 ) ( (  sc2252 ) ) );
                if ( dref2257.tag == Maybe_677_None_t ) {
                    return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
                }
                else if ( dref2257.tag == Maybe_677_Just_t ) {
                    return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Mouse ) ( ( (struct MouseEvent_517) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1097 ) ( ( dref2253 .stuff .Maybe_677_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2255 .stuff .Maybe_677_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2257 .stuff .Maybe_677_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Up_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Down_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Right_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Left_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Home_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
    }
    if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_286  temp1102 = ( (  mk1076 ) ( (  seq2250 ) ) );
        struct Scanner_286 *  sc2259 = ( &temp1102 );
        struct Maybe_677  dref2260 = ( (  scan_dash_int1077 ) ( (  sc2259 ) ) );
        if ( dref2260.tag == Maybe_677_None_t ) {
            return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
        }
        else if ( dref2260.tag == Maybe_677_Just_t ) {
            return ( {  int32_t  dref2262 = ( (  i64_dash_i32269 ) ( ( dref2260 .stuff .Maybe_677_Just_s .field0 ) ) ) ;  dref2262 == 1 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Home_t } ) ) ) ) ) :  dref2262 == 2 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Insert_t } ) ) ) ) ) :  dref2262 == 3 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Delete_t } ) ) ) ) ) :  dref2262 == 4 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_End_t } ) ) ) ) ) :  dref2262 == 5 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_PageUp_t } ) ) ) ) ) :  dref2262 == 6 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_PageDown_t } ) ) ) ) ) :  dref2262 == 15 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F5_t } ) ) ) ) ) :  dref2262 == 17 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F6_t } ) ) ) ) ) :  dref2262 == 18 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F7_t } ) ) ) ) ) :  dref2262 == 19 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F8_t } ) ) ) ) ) :  dref2262 == 20 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F9_t } ) ) ) ) ) :  dref2262 == 21 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F10_t } ) ) ) ) ) :  dref2262 == 23 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F11_t } ) ) ) ) ) :  dref2262 == 24 ? ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_F12_t } ) ) ) ) ) : ( (struct Maybe_514) { .tag = Maybe_514_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
}

static  struct Maybe_514   read_dash_key1103 (  ) {
    char  temp1104 = ( (  undefined131 ) ( ) );
    char *  ch2264 = ( &temp1104 );
    struct Maybe_297  dref2265 = ( (  read_dash_byte1081 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2265.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
    }
    else if ( dref2265.tag == Maybe_297_Just_t ) {
        (*  ch2264 ) = ( dref2265 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp77 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2267 = ( (  i32_dash_char886 ) ( ( (  u32_dash_i32274 ) ( ( (  u32_dash_or737 ) ( ( (  i32_dash_u32266 ) ( ( (  char_dash_i32884 ) ( ( * (  ch2264 ) ) ) ) ) ) ,  ( (  from_dash_hex996 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( ( Key_516_Ctrl ) ( (  letter2267 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp77 ( ( (  char_dash_u8885 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1103 ) ( ) );
        } else {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( ( Key_516_Char ) ( ( * (  ch2264 ) ) ) ) ) ) ) );
        }
    }
    char  temp1105 = ( (  undefined131 ) ( ) );
    char *  ch22268 = ( &temp1105 );
    struct Maybe_297  dref2269 = ( (  read_dash_byte1081 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2269.tag == Maybe_297_None_t ) {
        return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Escape_t } ) ) ) ) );
    }
    else if ( dref2269.tag == Maybe_297_Just_t ) {
        (*  ch22268 ) = ( dref2269 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_181  temp1106 = ( ( (  zeroed239 ) ( ) ) );
        struct Array_181 *  seq2271 = ( &temp1106 );
        int32_t  slen2272 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp75 ( (  slen2272 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1107 = ( (  undefined131 ) ( ) );
            char *  sc2273 = ( &temp1107 );
            struct Maybe_297  dref2274 = ( (  read_dash_byte1081 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2274.tag == Maybe_297_None_t ) {
                break;
            }
            else if ( dref2274.tag == Maybe_297_Just_t ) {
                (*  sc2273 ) = ( dref2274 .stuff .Maybe_297_Just_s .field0 );
            }
            ( (  set941 ) ( (  seq2271 ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ,  ( * (  sc2273 ) ) ) );
            slen2272 = (  op_dash_add82 ( (  slen2272 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp77 ( ( (  char_dash_u8885 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp77 ( ( (  char_dash_u8885 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1100 ) ( ( (struct DynStr_129) { .f_contents = ( (  subslice292 ) ( ( (  as_dash_slice942 ) ( (  seq2271 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1108 = ( (  undefined131 ) ( ) );
        char *  sc2276 = ( &temp1108 );
        struct Maybe_297  dref2277 = ( (  read_dash_byte1081 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2277.tag == Maybe_297_None_t ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Escape_t } ) ) ) ) );
        }
        else if ( dref2277.tag == Maybe_297_Just_t ) {
            (*  sc2276 ) = ( dref2277 .stuff .Maybe_297_Just_s .field0 );
        }
        struct Maybe_1099  dref2279 = ( (  parse_dash_ss31098 ) ( ( * (  sc2276 ) ) ) );
        if ( dref2279.tag == Maybe_1099_None_t ) {
            return ( (struct Maybe_514) { .tag = Maybe_514_None_t } );
        }
        else if ( dref2279.tag == Maybe_1099_Just_t ) {
            return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( dref2279 .stuff .Maybe_1099_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_514_Just ) ( ( ( InputEvent_515_Key ) ( ( (struct Key_516) { .tag = Key_516_Escape_t } ) ) ) ) );
}

struct env1109 {
    bool *  should_dash_resize2216;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1109 (   struct env1109 env ,    struct Tui_611 *  tui2283 ) {
    if ( ( ! ( * ( env.should_dash_resize2216 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2216 ) = ( false );
    struct Tuple2_1005  dim2284 = ( (  get_dash_dimensions1004 ) ( ) );
    uint32_t  w2285 = ( (  fst1046 ) ( (  dim2284 ) ) );
    uint32_t  h2286 = ( (  snd1047 ) ( (  dim2284 ) ) );
    (*  tui2283 ) .f_width = (  w2285 );
    (*  tui2283 ) .f_height = (  h2286 );
    return ( true );
}

static  struct Cell_53   lam1111 (    struct Cell_53  dref2304 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Cell_53   lam1112 (    struct Cell_53  dref2306 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Screen_610   mk_dash_screen1110 (    struct Tui_611 *  tui2300 ,    enum CAllocator_4  al2302 ) {
    struct Slice_546  cur2303 = ( (  allocate932 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map926 ) ( (  cur2303 ) ,  (  lam1111 ) ) );
    struct Slice_546  prev2305 = ( (  allocate932 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map927 ) ( (  prev2305 ) ,  (  lam1112 ) ) );
    return ( (struct Screen_610) { .f_current = (  cur2303 ) , .f_previous = (  prev2305 ) , .f_al = (  al2302 ) , .f_tui = (  tui2300 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1113 (    struct Screen_610 *  screen2309 ) {
    enum CAllocator_4  al2310 = ( ( * (  screen2309 ) ) .f_al );
    ( (  free937 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_current ) ) );
    ( (  free937 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_53   lam1115 (    struct Cell_53  dref2314 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1114 (    struct Screen_610 *  screen2313 ) {
    ( (  map928 ) ( ( ( * (  screen2313 ) ) .f_current ) ,  (  lam1115 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1117 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1116 (    struct RenderState_1117 *  rs2318 ,    struct Cell_53 *  c2320 ,    uint32_t  x2322 ,    uint32_t  y2324 ) {
    if ( ( ( !  eq42 ( (  x2322 ) , ( ( * (  rs2318 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2324 ) , ( ( * (  rs2318 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1002 ) ( (  x2322 ) ,  (  y2324 ) ) );
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
        ( (  set_dash_fg1020 ) ( ( ( * (  c2320 ) ) .f_fg ) ) );
        (*  rs2318 ) .f_fg = ( ( * (  c2320 ) ) .f_fg );
    }
    if ( ( !  eq59 ( ( ( * (  rs2318 ) ) .f_bg ) , (  bg2326 ) ) ) ) {
        ( (  set_dash_bg1021 ) ( (  bg2326 ) ) );
        (*  rs2318 ) .f_bg = (  bg2326 );
    }
    ( (  print_dash_str28 ) ( (  char2325 ) ) );
    (*  rs2318 ) .f_x = (  op_dash_add87 ( ( ( * (  rs2318 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1118 (    struct Screen_610 *  screen2329 ) {
    int32_t  w2330 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2331 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1117  temp1119 = ( (struct RenderState_1117) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1117 *  rs2332 = ( &temp1119 );
    ( (  move_dash_cursor_dash_to1002 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_363  temp1120 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  h2331 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1121 =  next364 (&temp1120);
        if (  __cond1121 .tag == 0 ) {
            break;
        }
        int32_t  y2334 =  __cond1121 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1122 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  w2330 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1123 =  next364 (&temp1122);
            if (  __cond1123 .tag == 0 ) {
                break;
            }
            int32_t  x2336 =  __cond1123 .stuff .Maybe_328_Just_s .field0;
            size_t  i2337 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2334 ) , (  w2330 ) ) ) , (  x2336 ) ) ) ) );
            struct Cell_53 *  cur2338 = ( (  get_dash_ptr911 ) ( ( ( * (  screen2329 ) ) .f_current ) ,  (  i2337 ) ) );
            struct Cell_53 *  prev2339 = ( (  get_dash_ptr911 ) ( ( ( * (  screen2329 ) ) .f_previous ) ,  (  i2337 ) ) );
            if ( ( ( !  eq52 ( (  cur2338 ) , (  prev2339 ) ) ) || ( ( * (  screen2329 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2332 ) .f_changes = (  op_dash_add87 ( ( ( * (  rs2332 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1116 ) ( (  rs2332 ) ,  (  cur2338 ) ,  ( (  i32_dash_u32266 ) ( (  x2336 ) ) ) ,  ( (  i32_dash_u32266 ) ( (  y2334 ) ) ) ) );
                (*  prev2339 ) = ( * (  cur2338 ) );
            }
        }
    }
    (*  screen2329 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1014 ) ( ) );
    ( (  flush_dash_stdout1082 ) ( ) );
    return ( ( * (  rs2332 ) ) .f_changes );
}

struct funenv1109 {
    bool  (*fun) (  struct env1109  ,    struct Tui_611 *  );
    struct env1109 env;
};

struct env1124 {
    ;
    ;
    struct env1109 envinst1109;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1124 (   struct env1124 env ,    struct Screen_610 *  screen2342 ) {
    struct Tui_611 *  tui2343 = ( ( * (  screen2342 ) ) .f_tui );
    struct funenv1109  temp1125 = ( (struct funenv1109){ .fun = update_dash_dimensions1109, .env =  env.envinst1109  } );
    if ( ( ! ( temp1125.fun ( temp1125.env ,  (  tui2343 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2342 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2344 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_width );
    uint32_t  h2345 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_height );
    size_t  nusz2346 = ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( (  w2344 ) , (  h2345 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2346 ) , ( ( ( * (  screen2342 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_610  nuscreen2347 = ( (  mk_dash_screen1110 ) ( (  tui2343 ) ,  ( ( * (  screen2342 ) ) .f_al ) ) );
    (*  screen2342 ) .f_current = ( (  nuscreen2347 ) .f_current );
    (*  screen2342 ) .f_previous = ( (  nuscreen2347 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1126 (    struct Screen_610 *  screen2350 ,    struct Color_54  c2352 ) {
    (*  screen2350 ) .f_default_dash_fg = (  c2352 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1127 (    struct Screen_610 *  screen2355 ,    struct Color_54  c2357 ) {
    (*  screen2355 ) .f_default_dash_bg = (  c2357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1128 (    struct Screen_610 *  screen2360 ,    struct Color_54  fg2362 ,    struct Color_54  bg2364 ) {
    (*  screen2360 ) .f_default_dash_fg = (  fg2362 );
    (*  screen2360 ) .f_default_dash_bg = (  bg2364 );
    return ( Unit_13_Unit );
}

static  struct Maybe_905   get_dash_cell_dash_ptr1129 (    struct Screen_610 *  screen2371 ,    int32_t  x2373 ,    int32_t  y2375 ) {
    int32_t  w2376 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2373 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  x2373 ) , (  w2376 ) ) != 0 ) ) ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    if ( ( (  cmp75 ( (  y2375 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  y2375 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_905) { .tag = Maybe_905_None_t } );
    }
    size_t  i2377 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2375 ) , (  w2376 ) ) ) , (  x2373 ) ) ) ) );
    return ( ( Maybe_905_Just ) ( ( (  get_dash_ptr911 ) ( ( ( * (  screen2371 ) ) .f_current ) ,  (  i2377 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1130 (    struct Screen_610 *  screen2380 ) {
    struct RangeIter_363  temp1131 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1132 =  next364 (&temp1131);
        if (  __cond1132 .tag == 0 ) {
            break;
        }
        int32_t  y2382 =  __cond1132 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1133 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1134 =  next364 (&temp1133);
            if (  __cond1134 .tag == 0 ) {
                break;
            }
            int32_t  x2384 =  __cond1134 .stuff .Maybe_328_Just_s .field0;
            struct Cell_53 *  cell2385 = ( (  or_dash_fail904 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2380 ) ,  (  x2384 ) ,  (  y2382 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2385 ) .f_bg = ( ( * (  screen2380 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1135 (    struct Screen_610 *  screen2388 ,    char  c2390 ,    int32_t  x2392 ,    int32_t  y2394 ) {
    int32_t  w2395 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2392 ) , (  w2395 ) ) != 0 ) || (  cmp75 ( (  y2394 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2396 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2394 ) , (  w2395 ) ) ) , (  x2392 ) ) ) ) );
    struct Color_54  fg2397 = ( ( * (  screen2388 ) ) .f_default_dash_fg );
    struct Color_54  bg2398 = ( ( * (  screen2388 ) ) .f_default_dash_bg );
    char  c2399 = (  c2390 );
    ( (  set919 ) ( ( ( * (  screen2388 ) ) .f_current ) ,  (  i2396 ) ,  ( (struct Cell_53) { .f_c = (  c2399 ) , .f_fg = (  fg2397 ) , .f_bg = (  bg2398 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam609 (   struct env609 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1136 (    struct Screen_610 *  screen2402 ,    int32_t  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env609 envinst609 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each608 ) ( ( (  zip456 ) ( ( (  chars757 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv609){ .fun = lam609, .env = envinst609 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam616 (   struct env616 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1137 (    struct Screen_610 *  screen2402 ,    struct StrConcat_763  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env616 envinst616 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each615 ) ( ( (  zip458 ) ( ( (  chars863 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv616){ .fun = lam616, .env = envinst616 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam620 (   struct env620 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1138 (    struct Screen_610 *  screen2402 ,    struct StrConcat_779  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env620 envinst620 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each619 ) ( ( (  zip460 ) ( ( (  chars864 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv620){ .fun = lam620, .env = envinst620 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam624 (   struct env624 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1139 (    struct Screen_610 *  screen2402 ,    struct StrConcat_781  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env624 envinst624 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each623 ) ( ( (  zip462 ) ( ( (  chars865 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv624){ .fun = lam624, .env = envinst624 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam628 (   struct env628 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1140 (    struct Screen_610 *  screen2402 ,    struct StrConcat_807  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env628 envinst628 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each627 ) ( ( (  zip464 ) ( ( (  chars866 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv628){ .fun = lam628, .env = envinst628 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam632 (   struct env632 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1141 (    struct Screen_610 *  screen2402 ,    struct StrConcat_17  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env632 envinst632 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each631 ) ( ( (  zip466 ) ( ( (  chars867 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv632){ .fun = lam632, .env = envinst632 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam636 (   struct env636 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1142 (    struct Screen_610 *  screen2402 ,    struct StrConcat_809  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env636 envinst636 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each635 ) ( ( (  zip468 ) ( ( (  chars812 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv636){ .fun = lam636, .env = envinst636 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam640 (   struct env640 env ,    struct Tuple2_347  dref2415 ) {
    ( (  set919 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1143 (    struct Screen_610 *  screen2402 ,    struct StrConcat_816  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min747 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env640 envinst640 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each639 ) ( ( (  zip470 ) ( ( (  chars868 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv640){ .fun = lam640, .env = envinst640 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1144 (    struct Screen_610 *  screen2420 ,    int32_t  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count707 ) ( ( (  chars757 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1136 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1145 (    struct Screen_610 *  screen2420 ,    struct StrConcat_763  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count709 ) ( ( (  chars863 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1137 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1146 (    struct Screen_610 *  screen2420 ,    struct StrConcat_779  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count711 ) ( ( (  chars864 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1138 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1147 (    struct Screen_610 *  screen2420 ,    struct StrConcat_781  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count713 ) ( ( (  chars865 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1139 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1148 (    struct Screen_610 *  screen2420 ,    struct StrConcat_807  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count715 ) ( ( (  chars866 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1140 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1149 (    struct Screen_610 *  screen2420 ,    struct StrConcat_17  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count717 ) ( ( (  chars867 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1141 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1150 (    struct Screen_610 *  screen2420 ,    struct StrConcat_809  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count719 ) ( ( (  chars812 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1142 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1151 (    struct Screen_610 *  screen2420 ,    struct StrConcat_816  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count721 ) ( ( (  chars868 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1143 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_315   try_dash_read_dash_contents1152 (    const char*  filename2643 ,    enum CAllocator_4  al2645 ) {
    FILE *  file2646 = ( ( fopen ) ( (  filename2643 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2646 ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    ( ( fseek ) ( (  file2646 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end108 ) ( ) ) ) );
    int32_t  file_dash_size2647 = ( ( ftell ) ( (  file2646 ) ) );
    ( ( fseek ) ( (  file2646 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set107 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2648 = ( ( (  allocate931 ) ( (  al2645 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  file_dash_size2647 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2648 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2647 ) ,  (  file2646 ) ) );
    ( (  set918 ) ( (  file_dash_buf2648 ) ,  ( (  i32_dash_size268 ) ( (  file_dash_size2647 ) ) ) ,  ( (  nullchar320 ) ( ) ) ) );
    ( ( fclose ) ( (  file2646 ) ) );
    struct DynStr_129  str2649 = ( (struct DynStr_129) { .f_contents = (  file_dash_buf2648 ) } );
    return ( ( Maybe_315_Just ) ( (  str2649 ) ) );
}

static  struct DynStr_129   read_dash_contents1153 (    const char*  filename2652 ,    enum CAllocator_4  al2654 ) {
    return ( (  or_dash_fail899 ) ( ( (  try_dash_read_dash_contents1152 ) ( (  filename2652 ) ,  (  al2654 ) ) ) ,  ( ( StrConcat_823_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( "could not open file " ) ,  (  filename2652 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1154 (    const char*  filename2657 ,    struct DynStr_129  contents2659 ) {
    FILE *  file2660 = ( ( fopen ) ( (  filename2657 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2660 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_287  it2661 = ( (  chars777 ) ( (  contents2659 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref2662 = ( (  next330 ) ( ( & (  it2661 ) ) ) );
        if ( dref2662.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file2660 ) ) );
            return ( true );
        }
        else if ( dref2662.tag == Maybe_297_Just_t ) {
            int32_t  chars_dash_written2664 = ( ( fprintf ) ( (  file2660 ) ,  ( "%c" ) ,  ( dref2662 .stuff .Maybe_297_Just_s .field0 ) ) );
            if ( (  cmp75 ( (  chars_dash_written2664 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable889 ) ( ) );
}

static  enum Unit_13   write_dash_contents1155 (    const char*  filename2667 ,    struct DynStr_129  contents2669 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1154 ) ( (  filename2667 ) ,  (  contents2669 ) ) ) ) ) {
        ( (  panic895 ) ( ( ( StrConcat_824_StrConcat ) ( ( "could not write to file " ) ,  (  filename2667 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_913   get1156 (  ) {
    return ( (struct Slice_913) { .f_ptr = ( (  offset_dash_ptr152 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len312 (   struct env312 env ,    char  c2433 ) {
    if ( (  eq48 ( (  c2433 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2430 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1159 (    struct Cursor_745  l2440 ,    struct Cursor_745  r2442 ) {
    return ( (  eq41 ( ( (  l2440 ) .f_x ) , ( (  r2442 ) .f_x ) ) ) && (  eq41 ( ( (  l2440 ) .f_y ) , ( (  r2442 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1160 (    struct Visual_1053  dref2452 ) {
    return ( dref2452 .field0 );
}

static  struct List_3 *   get_dash_row1161 (    struct Editor_1052 *  ed2471 ,    int32_t  y2473 ) {
    return ( (  get_dash_ptr952 ) ( ( & ( ( * (  ed2471 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2473 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1162 (    struct Editor_1052 *  ed2476 ) {
    return ( (  get_dash_ptr952 ) ( ( & ( ( * (  ed2476 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2476 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_475   indent_dash_on_dash_row1163 (    struct Editor_1052 *  ed2479 ,    int32_t  y2481 ) {
    return ( (  take_dash_while497 ) ( ( (  get_dash_row1161 ) ( (  ed2479 ) ,  (  y2481 ) ) ) ,  (  is_dash_whitespace943 ) ) );
}

static  size_t   num_dash_rows1164 (    struct Editor_1052 *  ed2484 ) {
    return ( (  size993 ) ( ( & ( ( * (  ed2484 ) ) .f_current_dash_file ) ) ) );
}

struct funenv971 {
    enum Unit_13  (*fun) (  struct env971  ,    struct List_280 *  ,    size_t  );
    struct env971 env;
};

struct env1165 {
    ;
    ;
    ;
    struct env971 envinst971;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1165 (   struct env1165 env ,    struct Editor_1052 *  ed2487 ,    int32_t  y2489 ) {
    struct List_3 *  next_dash_row2490 = ( (  get_dash_row1161 ) ( (  ed2487 ) ,  (  y2489 ) ) );
    ( (  free960 ) ( (  next_dash_row2490 ) ) );
    struct funenv971  temp1166 = ( (struct funenv971){ .fun = remove971, .env =  env.envinst971  } );
    ( temp1166.fun ( temp1166.env ,  ( & ( ( * (  ed2487 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2489 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   char_dash_at1167 (    struct Editor_1052 *  ed2493 ,    struct Cursor_745  cur2495 ) {
    return ( (  try_dash_get954 ) ( ( (  get_dash_row1161 ) ( (  ed2493 ) ,  ( (  cur2495 ) .f_y ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2495 ) .f_x ) ) ) ) );
}

static  struct Maybe_297   char_dash_at_dash_cursor1168 (    struct Editor_1052 *  ed2498 ) {
    return ( (  try_dash_get954 ) ( ( (  cursor_dash_row1162 ) ( (  ed2498 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2498 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1169 {
    ;
    ;
    ;
    struct env312 envinst312;
    ;
    ;
};

static  struct Visual_1053   x_dash_to_dash_visual_dash_x1169 (   struct env1169 env ,    struct Editor_1052 *  ed2501 ,    int32_t  x2503 ,    int32_t  y2505 ) {
    return ( ( Visual_1053_Visual ) ( ( (  sum723 ) ( ( (  map336 ) ( ( (  take359 ) ( ( (  get_dash_row1161 ) ( (  ed2501 ) ,  (  y2505 ) ) ) ,  ( (  i32_dash_size268 ) ( (  x2503 ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ) ) ) ) ) );
}

struct env1170 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env312 envinst312;
    ;
    ;
};

static  int32_t   visual_dash_x_dash_to_dash_x1170 (   struct env1170 env ,    struct Editor_1052 *  ed2508 ,    struct Visual_1053  dref2509 ,    int32_t  y2512 ) {
    int32_t  sum_dash_x2513 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2514 = ( (  get_dash_row1161 ) ( (  ed2508 ) ,  (  y2512 ) ) );
    struct RangeIter_363  temp1171 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( * (  chars2514 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1172 =  next364 (&temp1171);
        if (  __cond1172 .tag == 0 ) {
            break;
        }
        int32_t  x2516 =  __cond1172 .stuff .Maybe_328_Just_s .field0;
        struct funenv312  temp1173 = ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } );
        sum_dash_x2513 = (  op_dash_add82 ( (  sum_dash_x2513 ) , ( temp1173.fun ( temp1173.env ,  (  elem_dash_get2 ( (  chars2514 ) , ( (  i32_dash_size268 ) ( (  x2516 ) ) ) ) ) ) ) ) );
        if ( (  cmp75 ( ( dref2509 .field0 ) , (  sum_dash_x2513 ) ) == 0 ) ) {
            return (  x2516 );
        }
    }
    return ( (  size_dash_i32270 ) ( ( ( * (  chars2514 ) ) .f_count ) ) );
}

struct funenv1170 {
    int32_t  (*fun) (  struct env1170  ,    struct Editor_1052 *  ,    struct Visual_1053  ,    int32_t  );
    struct env1170 env;
};

struct funenv1169 {
    struct Visual_1053  (*fun) (  struct env1169  ,    struct Editor_1052 *  ,    int32_t  ,    int32_t  );
    struct env1169 env;
};

struct env1174 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1170 envinst1170;
    ;
    struct env1169 envinst1169;
    ;
    ;
    ;
};

struct Dims_1175 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1174 (   struct env1174 env ,    struct Editor_1052 *  ed2520 ,    int32_t  x2522 ,    int32_t  y2524 ,    struct Dims_1175  dim2526 ) {
    struct Cursor_745  cur2527 = ( ( * (  ed2520 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2528 = ( !  eq41 ( ( (  cur2527 ) .f_x ) , (  x2522 ) ) );
    int32_t  y2529 = ( (  clamp751 ) ( (  y2524 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2520 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2530 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  y2529 ) , (  op_dash_add82 ( ( ( * (  ed2520 ) ) .f_screen_dash_top ) , (  funny_dash_space2530 ) ) ) ) == 0 ) ) {
        (*  ed2520 ) .f_screen_dash_top = ( (  max748 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  y2529 ) , (  funny_dash_space2530 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  y2529 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2520 ) ) .f_screen_dash_top ) , ( (  dim2526 ) .f_rows ) ) ) , (  funny_dash_space2530 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2531 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  y2529 ) , (  funny_dash_space2530 ) ) ) , ( (  dim2526 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2520 ) .f_screen_dash_top = (  onscreen_dash_y2531 );
        } else {
        }
    }
    struct List_3 *  row2532 = ( (  get_dash_row1161 ) ( (  ed2520 ) ,  (  y2529 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2528 ) ) {
        int32_t  x2533 = ( (  clamp751 ) ( (  x2522 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( ( (  size992 ) ( (  row2532 ) ) ) ) ) ) );
        struct funenv1169  temp1176 = ( (struct funenv1169){ .fun = x_dash_to_dash_visual_dash_x1169, .env =  env.envinst1169  } );
        (*  ed2520 ) .f_goal_dash_x = ( temp1176.fun ( temp1176.env ,  (  ed2520 ) ,  (  x2533 ) ,  (  y2529 ) ) );
    }
    struct Visual_1053  vx2534 = ( ( * (  ed2520 ) ) .f_goal_dash_x );
    struct funenv1170  temp1177 = ( (struct funenv1170){ .fun = visual_dash_x_dash_to_dash_x1170, .env =  env.envinst1170  } );
    int32_t  x2535 = ( temp1177.fun ( temp1177.env ,  (  ed2520 ) ,  (  vx2534 ) ,  (  y2529 ) ) );
    int32_t  funny_dash_space2536 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  x2535 ) , (  op_dash_add82 ( ( ( * (  ed2520 ) ) .f_screen_dash_left ) , (  funny_dash_space2536 ) ) ) ) == 0 ) ) {
        (*  ed2520 ) .f_screen_dash_left = ( (  max748 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  x2535 ) , (  funny_dash_space2536 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  x2535 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2520 ) ) .f_screen_dash_left ) , ( (  dim2526 ) .f_cols ) ) ) , (  funny_dash_space2536 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2537 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  x2535 ) , (  funny_dash_space2536 ) ) ) , ( (  dim2526 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2520 ) .f_screen_dash_left = (  onscreen_dash_x2537 );
        } else {
        }
    }
    (*  ed2520 ) .f_cursor = ( (struct Cursor_745) { .f_x = (  x2535 ) , .f_y = (  y2529 ) } );
    (*  ed2520 ) .f_selected = ( (struct Maybe_907) { .tag = Maybe_907_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1174 {
    enum Unit_13  (*fun) (  struct env1174  ,    struct Editor_1052 *  ,    int32_t  ,    int32_t  ,    struct Dims_1175  );
    struct env1174 env;
};

struct env1178 {
    struct env1174 envinst1174;
};

static  enum Unit_13   move_dash_to_dash_col1178 (   struct env1178 env ,    struct Editor_1052 *  ed2540 ,    int32_t  x2542 ,    struct Dims_1175  dim2544 ) {
    struct funenv1174  temp1179 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  env.envinst1174  } );
    ( temp1179.fun ( temp1179.env ,  (  ed2540 ) ,  (  x2542 ) ,  ( ( ( * (  ed2540 ) ) .f_cursor ) .f_y ) ,  (  dim2544 ) ) );
    return ( Unit_13_Unit );
}

struct env1180 {
    struct env1174 envinst1174;
};

static  enum Unit_13   move_dash_to_dash_row1180 (   struct env1180 env ,    struct Editor_1052 *  ed2547 ,    int32_t  y2549 ,    struct Dims_1175  dim2551 ) {
    struct funenv1174  temp1181 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  env.envinst1174  } );
    ( temp1181.fun ( temp1181.env ,  (  ed2547 ) ,  ( ( ( * (  ed2547 ) ) .f_cursor ) .f_x ) ,  (  y2549 ) ,  (  dim2551 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1180 {
    enum Unit_13  (*fun) (  struct env1180  ,    struct Editor_1052 *  ,    int32_t  ,    struct Dims_1175  );
    struct env1180 env;
};

struct funenv1178 {
    enum Unit_13  (*fun) (  struct env1178  ,    struct Editor_1052 *  ,    int32_t  ,    struct Dims_1175  );
    struct env1178 env;
};

struct env1182 {
    ;
    ;
    ;
    struct env1180 envinst1180;
    ;
    ;
    struct env1178 envinst1178;
    ;
    ;
};

static  bool   move_dash_left1182 (   struct env1182 env ,    struct Editor_1052 *  ed2554 ,    struct Dims_1175  dim2556 ) {
    struct Cursor_745  cur2557 = ( ( * (  ed2554 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2554 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2554 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1180  temp1183 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  env.envinst1180  } );
            ( temp1183.fun ( temp1183.env ,  (  ed2554 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2554 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2556 ) ) );
            struct funenv1178  temp1184 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  env.envinst1178  } );
            ( temp1184.fun ( temp1184.env ,  (  ed2554 ) ,  ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1162 ) ( (  ed2554 ) ) ) ) .f_count ) ) ) ,  (  dim2556 ) ) );
        }
    } else {
        struct funenv1178  temp1185 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  env.envinst1178  } );
        ( temp1185.fun ( temp1185.env ,  (  ed2554 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2554 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2556 ) ) );
    }
    return ( !  eq1159 ( ( ( * (  ed2554 ) ) .f_cursor ) , (  cur2557 ) ) );
}

struct env1186 {
    ;
    ;
    struct env1174 envinst1174;
    ;
    ;
    ;
    ;
    ;
    struct env1178 envinst1178;
    ;
};

static  bool   move_dash_right1186 (   struct env1186 env ,    struct Editor_1052 *  ed2560 ,    struct Dims_1175  dims2562 ) {
    struct Cursor_745  cur2563 = ( ( * (  ed2560 ) ) .f_cursor );
    int32_t  row_dash_len2564 = ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1162 ) ( (  ed2560 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2560 ) ) .f_cursor ) .f_x ) , (  row_dash_len2564 ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2560 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2560 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1174  temp1187 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  env.envinst1174  } );
            ( temp1187.fun ( temp1187.env ,  (  ed2560 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2560 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2562 ) ) );
        }
    } else {
        struct funenv1178  temp1188 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  env.envinst1178  } );
        ( temp1188.fun ( temp1188.env ,  (  ed2560 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2560 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2562 ) ) );
    }
    return ( !  eq1159 ( ( ( * (  ed2560 ) ) .f_cursor ) , (  cur2563 ) ) );
}

struct env1189 {
    ;
    ;
    struct env1178 envinst1178;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1189 (   struct env1189 env ,    struct Editor_1052 *  ed2567 ,    struct Dims_1175  dims2569 ) {
    int32_t  off2570 = ( (  size_dash_i32270 ) ( ( (  count705 ) ( ( (  indent_dash_on_dash_row1163 ) ( (  ed2567 ) ,  ( ( ( * (  ed2567 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1178  temp1190 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  env.envinst1178  } );
    ( temp1190.fun ( temp1190.env ,  (  ed2567 ) ,  (  off2570 ) ,  (  dims2569 ) ) );
    return ( Unit_13_Unit );
}

struct env1191 {
    ;
    ;
    ;
    struct env1178 envinst1178;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1191 (   struct env1191 env ,    struct Editor_1052 *  ed2573 ,    struct Dims_1175  dims2575 ) {
    struct List_3 *  currow2576 = ( (  cursor_dash_row1162 ) ( (  ed2573 ) ) );
    struct funenv1178  temp1192 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  env.envinst1178  } );
    ( temp1192.fun ( temp1192.env ,  (  ed2573 ) ,  ( (  size_dash_i32270 ) ( ( (  size992 ) ( (  currow2576 ) ) ) ) ) ,  (  dims2575 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1193 (    struct Editor_1052 *  ed2582 ,    int32_t  col2584 ,    int32_t  row2586 ) {
    return (  eq41 ( (  col2584 ) , ( (  size_dash_i32270 ) ( ( (  size992 ) ( ( (  get_dash_row1161 ) ( (  ed2582 ) ,  (  row2586 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1194 (    struct Editor_1052 *  ed2589 ) {
    return (  eq41 ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  size992 ) ( ( (  cursor_dash_row1162 ) ( (  ed2589 ) ) ) ) ) ) ) ) );
}

struct funenv1165 {
    enum Unit_13  (*fun) (  struct env1165  ,    struct Editor_1052 *  ,    int32_t  );
    struct env1165 env;
};

struct funenv977 {
    enum Unit_13  (*fun) (  struct env977  ,    struct List_3 *  ,    struct List_3 *  );
    struct env977 env;
};

struct funenv979 {
    enum Unit_13  (*fun) (  struct env979  ,    struct List_3 *  ,    struct Slice_5  );
    struct env979 env;
};

struct env1195 {
    ;
    ;
    struct env1174 envinst1174;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env970 envinst970;
    ;
    struct env1165 envinst1165;
    ;
    ;
    ;
    ;
    ;
    struct env977 envinst977;
    ;
    ;
    ;
    ;
    ;
    struct env979 envinst979;
    ;
    ;
    ;
    ;
};

struct anon_1202 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1195 (   struct env1195 env ,    struct Editor_1052 *  ed2592 ,    struct Dims_1175  dims2594 ) {
    struct Maybe_907  dref2595 = ( ( * (  ed2592 ) ) .f_selected );
    if ( dref2595.tag == Maybe_907_None_t ) {
        struct List_3 *  row2596 = ( (  cursor_dash_row1162 ) ( (  ed2592 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2592 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2596 ) ) .f_count ) ) == 0 ) ) {
            struct funenv970  temp1196 = ( (struct funenv970){ .fun = remove970, .env =  env.envinst970  } );
            ( temp1196.fun ( temp1196.env ,  ( (  cursor_dash_row1162 ) ( (  ed2592 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2592 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1194 ) ( (  ed2592 ) ) ) ) {
                if ( (  cmp75 ( (  op_dash_sub83 ( ( ( ( * (  ed2592 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1164 ) ( (  ed2592 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2597 = ( (  cursor_dash_row1162 ) ( (  ed2592 ) ) );
                    int32_t  next_dash_row_dash_id2598 = (  op_dash_add82 ( ( ( ( * (  ed2592 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2599 = ( (  get_dash_row1161 ) ( (  ed2592 ) ,  (  next_dash_row_dash_id2598 ) ) );
                    struct funenv977  temp1197 = ( (struct funenv977){ .fun = add_dash_all977, .env =  env.envinst977  } );
                    ( temp1197.fun ( temp1197.env ,  (  cur_dash_row2597 ) ,  (  next_dash_row2599 ) ) );
                    struct funenv1165  temp1198 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
                    ( temp1198.fun ( temp1198.env ,  (  ed2592 ) ,  (  next_dash_row_dash_id2598 ) ) );
                }
            }
        }
    }
    else if ( dref2595.tag == Maybe_907_Just_t ) {
        struct Cursor_745  cfrom2601 = ( (  min744 ) ( ( dref2595 .stuff .Maybe_907_Just_s .field0 ) ,  ( ( * (  ed2592 ) ) .f_cursor ) ) );
        struct Cursor_745  cto2602 = ( (  max749 ) ( ( dref2595 .stuff .Maybe_907_Just_s .field0 ) ,  ( ( * (  ed2592 ) ) .f_cursor ) ) );
        struct RangeIter_363  temp1199 =  into_dash_iter362 ( ( (  to360 ) ( (  op_dash_add82 ( ( (  cfrom2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub83 ( ( (  cto2602 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1200 =  next364 (&temp1199);
            if (  __cond1200 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2604 =  __cond1200 .stuff .Maybe_328_Just_s .field0;
            ( (  assert897 ) ( (  cmp75 ( (  row_dash_id2604 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1165  temp1201 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
            ( temp1201.fun ( temp1201.env ,  (  ed2592 ) ,  (  op_dash_add82 ( ( (  cfrom2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2605 = (  op_dash_sub83 ( ( (  cto2602 ) .f_y ) , ( (  max748 ) ( (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  cto2602 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add82 ( ( (  cfrom2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert897 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2605 ) , ( (  cfrom2601 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2605 ) , (  op_dash_add82 ( ( (  cfrom2601 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1202  cto2606 = ( (struct anon_1202) { .f_x = ( (  cto2602 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2605 ) } );
        bool  should_dash_merge_dash_next_dash_line2607 = ( (  is_dash_at_dash_line_dash_end1193 ) ( (  ed2592 ) ,  ( (  cto2606 ) .f_x ) ,  ( (  cto2606 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2607 ) ) {
            struct List_3 *  first_dash_row2608 = ( (  get_dash_row1161 ) ( (  ed2592 ) ,  ( (  cfrom2601 ) .f_y ) ) );
            ( (  trim983 ) ( (  first_dash_row2608 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2601 ) .f_x ) ) ) ) );
            struct funenv977  temp1203 = ( (struct funenv977){ .fun = add_dash_all977, .env =  env.envinst977  } );
            ( temp1203.fun ( temp1203.env ,  (  first_dash_row2608 ) ,  ( (  get_dash_row1161 ) ( (  ed2592 ) ,  (  op_dash_add82 ( ( (  cto2606 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            if ( (  eq41 ( ( (  cto2606 ) .f_y ) , ( (  cfrom2601 ) .f_y ) ) ) ) {
                struct funenv1165  temp1204 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
                ( temp1204.fun ( temp1204.env ,  (  ed2592 ) ,  (  op_dash_add82 ( ( (  cto2606 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
            } else {
                struct funenv1165  temp1205 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
                ( temp1205.fun ( temp1205.env ,  (  ed2592 ) ,  (  op_dash_add82 ( ( (  cto2606 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                struct funenv1165  temp1206 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
                ( temp1206.fun ( temp1206.env ,  (  ed2592 ) ,  ( (  cto2606 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2609 = ( (  get_dash_row1161 ) ( (  ed2592 ) ,  ( (  cfrom2601 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2606 ) .f_y ) , ( (  cfrom2601 ) .f_y ) ) ) ) {
                struct RangeIter_363  temp1207 =  into_dash_iter362 ( ( (  to360 ) ( ( (  cfrom2601 ) .f_x ) ,  ( (  min747 ) ( ( (  cto2606 ) .f_x ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  size992 ) ( (  first_dash_row2609 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_328  __cond1208 =  next364 (&temp1207);
                    if (  __cond1208 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2611 =  __cond1208 .stuff .Maybe_328_Just_s .field0;
                    struct funenv970  temp1209 = ( (struct funenv970){ .fun = remove970, .env =  env.envinst970  } );
                    ( temp1209.fun ( temp1209.env ,  (  first_dash_row2609 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2601 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim983 ) ( (  first_dash_row2609 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2601 ) .f_x ) ) ) ) );
                struct funenv979  temp1210 = ( (struct funenv979){ .fun = add_dash_all979, .env =  env.envinst979  } );
                ( temp1210.fun ( temp1210.env ,  (  first_dash_row2609 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice989 ) ( ( * ( (  get_dash_row1161 ) ( (  ed2592 ) ,  ( (  cto2606 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint994 ) ( (  op_dash_sub83 ( ( (  cto2606 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1165  temp1211 = ( (struct funenv1165){ .fun = remove_dash_row1165, .env =  env.envinst1165  } );
                ( temp1211.fun ( temp1211.env ,  (  ed2592 ) ,  ( (  cto2606 ) .f_y ) ) );
            }
        }
        (*  ed2592 ) .f_selected = ( (struct Maybe_907) { .tag = Maybe_907_None_t } );
        struct funenv1174  temp1212 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  env.envinst1174  } );
        ( temp1212.fun ( temp1212.env ,  (  ed2592 ) ,  ( (  cfrom2601 ) .f_x ) ,  ( (  cfrom2601 ) .f_y ) ,  (  dims2594 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv964 {
    enum Unit_13  (*fun) (  struct env964  ,    struct List_280 *  ,    size_t  ,    struct List_3  );
    struct env964 env;
};

struct funenv981 {
    enum Unit_13  (*fun) (  struct env981  ,    struct List_3 *  ,    struct TakeWhile_475  );
    struct env981 env;
};

struct env1213 {
    ;
    struct env964 envinst964;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env981 envinst981;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1213 (   struct env1213 env ,    struct Editor_1052 *  ed2614 ,    int32_t  y2616 ,    enum CAllocator_4  al2618 ) {
    struct List_3  temp1214 = ( (  mk959 ) ( (  al2618 ) ) );
    struct List_3 *  nurow2619 = ( &temp1214 );
    struct TakeWhile_475  rowws2620 = ( (  indent_dash_on_dash_row1163 ) ( (  ed2614 ) ,  ( ( ( * (  ed2614 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2621 = ( (  size_dash_i32270 ) ( ( (  count705 ) ( (  rowws2620 ) ) ) ) );
    struct funenv981  temp1215 = ( (struct funenv981){ .fun = add_dash_all981, .env =  env.envinst981  } );
    ( temp1215.fun ( temp1215.env ,  (  nurow2619 ) ,  (  rowws2620 ) ) );
    struct funenv964  temp1216 = ( (struct funenv964){ .fun = insert964, .env =  env.envinst964  } );
    ( temp1216.fun ( temp1216.env ,  ( & ( ( * (  ed2614 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2616 ) ) ) ,  ( * (  nurow2619 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1217 (    struct Editor_1052 *  ed2624 ,    struct Cursor_745  c2626 ) {
    return ( {  struct Maybe_907  dref2627 = ( ( * (  ed2624 ) ) .f_selected ) ; dref2627.tag == Maybe_907_Just_t ? ( (  between750 ) ( (  c2626 ) ,  ( ( * (  ed2624 ) ) .f_cursor ) ,  ( dref2627 .stuff .Maybe_907_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1218 (    char  c2631 ) {
    return ( (  is_dash_not_dash_whitespace944 ) ( (  c2631 ) ) );
}

struct funenv986 {
    struct List_280  (*fun) (  struct env986  ,    struct Map_299  ,    enum CAllocator_4  );
    struct env986 env;
};

struct env1219 {
    ;
    ;
    ;
    ;
    struct env302 envinst302;
    struct env986 envinst986;
    struct env534 envinst534;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam301 (   struct env301 env ,    struct DynStr_129  line2671 ) {
    struct funenv302  temp1222 = ( (struct funenv302){ .fun = to_dash_list302, .env =  env.envinst302  } );
    return ( temp1222.fun ( temp1222.env ,  (  line2671 ) ,  ( env.al2640 ) ) );
}

static  struct List_280   load_dash_file1219 (   struct env1219 env ,    const char*  filename2638 ,    enum CAllocator_4  al2640 ) {
    struct funenv986  temp1221 = ( (struct funenv986){ .fun = to_dash_list986, .env =  env.envinst986  } );
    struct env301 envinst301 = {
        .al2640 =  al2640 ,
        .envinst302 = env.envinst302 ,
    };
    struct List_280  temp1220 = ( temp1221.fun ( temp1221.env ,  ( (  map332 ) ( ( (  lines945 ) ( ( (  read_dash_contents1153 ) ( (  filename2638 ) ,  (  al2640 ) ) ) ) ) ,  ( (struct funenv301){ .fun = lam301, .env = envinst301 } ) ) ) ,  (  al2640 ) ) );
    struct List_280 *  file2672 = ( &temp1220 );
    if ( ( (  null733 ) ( (  file2672 ) ) ) ) {
        struct funenv534  temp1223 = ( (struct funenv534){ .fun = add534, .env =  env.envinst534  } );
        ( temp1223.fun ( temp1223.env ,  (  file2672 ) ,  ( (  mk959 ) ( (  al2640 ) ) ) ) );
    }
    return ( * (  file2672 ) );
}

struct env1224 {
    ;
    ;
    struct env601 envinst601;
    enum CAllocator_4  al2635;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam600 (   struct env600 env ,    char  c2682 ) {
    struct funenv601  temp1228 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
    return ( temp1228.fun ( temp1228.env ,  ( env.sb2678 ) ,  (  c2682 ) ) );
}

static  enum Unit_13   save_dash_file1224 (   struct env1224 env ,    struct List_280  cf2675 ,    const char*  filename2677 ) {
    struct StrBuilder_540  temp1225 = ( (  mk1032 ) ( ( env.al2635 ) ) );
    struct StrBuilder_540 *  sb2678 = ( &temp1225 );
    struct SliceIter_278  temp1226 =  into_dash_iter281 ( (  cf2675 ) );
    while (true) {
        struct Maybe_314  __cond1227 =  next354 (&temp1226);
        if (  __cond1227 .tag == 0 ) {
            break;
        }
        struct List_3  row2680 =  __cond1227 .stuff .Maybe_314_Just_s .field0;
        struct env600 envinst600 = {
            .sb2678 =  sb2678 ,
            .envinst601 = env.envinst601 ,
        };
        ( (  for_dash_each599 ) ( (  row2680 ) ,  ( (struct funenv600){ .fun = lam600, .env = envinst600 } ) ) );
        struct funenv601  temp1229 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
        ( temp1229.fun ( temp1229.env ,  (  sb2678 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1155 ) ( (  filename2677 ) ,  ( (  as_dash_str770 ) ( (  sb2678 ) ) ) ) );
    ( (  free1033 ) ( (  sb2678 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1230 (    struct List_280  cf2685 ) {
    ( (  for_dash_each585 ) ( ( (  addresses991 ) ( (  cf2685 ) ) ) ,  (  free960 ) ) );
    ( (  free961 ) ( ( & (  cf2685 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1231 {
    ;
    ;
    ;
    int32_t  pad2686;
    ;
};

struct anon_1232 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1232   left_dash_offset1231 (   struct env1231 env ,    struct Editor_1052 *  ed2689 ) {
    int32_t  max_dash_digits2690 = ( (  max748 ) ( ( (  count_dash_digits754 ) ( ( ( ( * (  ed2689 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1232) { .f_max_dash_digits = (  max_dash_digits2690 ) , .f_total_dash_offset = (  op_dash_add82 ( (  op_dash_add82 ( ( env.pad2686 ) , (  max_dash_digits2690 ) ) ) , ( env.pad2686 ) ) ) } );
}

struct funenv1231 {
    struct anon_1232  (*fun) (  struct env1231  ,    struct Editor_1052 *  );
    struct env1231 env;
};

struct env1233 {
    ;
    struct env1231 envinst1231;
    ;
};

static  struct Dims_1175   screen_dash_dims1233 (   struct env1233 env ,    struct Editor_1052 *  ed2693 ,    struct Tui_611 *  tui2695 ) {
    struct funenv1231  temp1234 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  env.envinst1231  } );
    return ( (struct Dims_1175) { .f_cols = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * (  tui2695 ) ) .f_width ) ) ) , ( ( temp1234.fun ( temp1234.env ,  (  ed2693 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32274 ) ( ( ( * (  tui2695 ) ) .f_height ) ) ) } );
}

struct env1235 {
    ;
    struct env1231 envinst1231;
    ;
    ;
    ;
    ;
    ;
    struct env312 envinst312;
    ;
    struct env1169 envinst1169;
    ;
    ;
    ;
    int32_t  pad2686;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   render_dash_editor1235 (   struct env1235 env ,    struct Screen_610 *  screen2698 ,    struct Editor_1052 *  ed2700 ) {
    int32_t  w2701 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2698 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2702 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2698 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2703 = ( ( * (  ed2700 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2704 = ( ( * (  ed2700 ) ) .f_screen_dash_left );
    int32_t  x2705 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2706 = (  from_dash_integral29 ( 0 ) );
    ( (  assert897 ) ( (  cmp9 ( ( ( ( * (  ed2700 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1231  temp1236 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  env.envinst1231  } );
    struct anon_1232  offstuff2707 = ( temp1236.fun ( temp1236.env ,  (  ed2700 ) ) );
    int32_t  max_dash_digits2708 = ( (  offstuff2707 ) .f_max_dash_digits );
    int32_t  left_dash_off2709 = ( (  offstuff2707 ) .f_total_dash_offset );
    struct Drop_343  temp1237 =  into_dash_iter342 ( ( (  drop357 ) ( ( (  zip455 ) ( ( ( * (  ed2700 ) ) .f_current_dash_file ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_y2703 ) ) ) ) ) );
    while (true) {
        struct Maybe_351  __cond1238 =  next350 (&temp1237);
        if (  __cond1238 .tag == 0 ) {
            break;
        }
        struct Tuple2_352  dref2710 =  __cond1238 .stuff .Maybe_351_Just_s .field0;
        int32_t  row_dash_num2713 = (  op_dash_add82 ( ( dref2710 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1239 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2686 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1240 =  next364 (&temp1239);
            if (  __cond1240 .tag == 0 ) {
                break;
            }
            int32_t  xx2715 =  __cond1240 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1135 ) ( (  screen2698 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2715 ) ,  (  y2706 ) ) );
        }
        ( (  draw_dash_str_dash_right1144 ) ( (  screen2698 ) ,  (  row_dash_num2713 ) ,  (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2698 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2708 ) ) ) , ( env.pad2686 ) ) ) ,  (  y2706 ) ) );
        struct RangeIter_363  temp1241 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2686 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1242 =  next364 (&temp1241);
            if (  __cond1242 .tag == 0 ) {
                break;
            }
            int32_t  xx2717 =  __cond1242 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1135 ) ( (  screen2698 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  xx2717 ) , ( env.pad2686 ) ) ) , (  max_dash_digits2708 ) ) ) ,  (  y2706 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2700 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( (  row_dash_num2713 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_363  temp1243 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  max_dash_digits2708 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_328  __cond1244 =  next364 (&temp1243);
                if (  __cond1244 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2719 =  __cond1244 .stuff .Maybe_328_Just_s .field0;
                struct Cell_53 *  cp2720 = ( (  or_dash_fail904 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2698 ) ,  (  op_dash_add82 ( (  xxx2719 ) , ( env.pad2686 ) ) ) ,  (  y2706 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2720 ) .f_fg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp2720 ) .f_bg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_339  temp1245 =  into_dash_iter338 ( ( (  drop355 ) ( ( (  zip454 ) ( ( dref2710 .field0 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_x2704 ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1246 =  next345 (&temp1245);
            if (  __cond1246 .tag == 0 ) {
                break;
            }
            struct Tuple2_347  dref2721 =  __cond1246 .stuff .Maybe_346_Just_s .field0;
            bool  in_dash_selection2724 = ( (  is_dash_in_dash_selection1217 ) ( (  ed2700 ) ,  ( (struct Cursor_745) { .f_x = ( dref2721 .field1 ) , .f_y = ( dref2710 .field1 ) } ) ) );
            if ( (  in_dash_selection2724 ) ) {
                ( (  set_dash_screen_dash_colors1128 ) ( (  screen2698 ) ,  ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq48 ( ( dref2721 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1135 ) ( (  screen2698 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2709 ) , (  x2705 ) ) ) ,  (  y2706 ) ) );
                x2705 = (  op_dash_add82 ( (  x2705 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1135 ) ( (  screen2698 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2709 ) , (  x2705 ) ) ) ,  (  y2706 ) ) );
            } else {
                ( (  put_dash_char1135 ) ( (  screen2698 ) ,  ( dref2721 .field0 ) ,  (  op_dash_add82 ( (  left_dash_off2709 ) , (  x2705 ) ) ) ,  (  y2706 ) ) );
            }
            if ( (  in_dash_selection2724 ) ) {
                ( (  set_dash_screen_dash_colors1128 ) ( (  screen2698 ) ,  ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x2705 = (  op_dash_add82 ( (  x2705 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp75 ( (  x2705 ) , (  w2701 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp75 ( (  x2705 ) , (  w2701 ) ) == 0 ) && ( (  is_dash_in_dash_selection1217 ) ( (  ed2700 ) ,  ( (struct Cursor_745) { .f_x = ( (  size_dash_i32270 ) ( ( ( dref2710 .field0 ) .f_count ) ) ) , .f_y = ( dref2710 .field1 ) } ) ) ) ) ) {
            struct Cell_53 *  cell2725 = ( (  or_dash_fail904 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2698 ) ,  (  op_dash_add82 ( (  left_dash_off2709 ) , (  x2705 ) ) ) ,  (  y2706 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2725 ) .f_fg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell2725 ) .f_bg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y2706 = (  op_dash_add82 ( (  y2706 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2705 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp75 ( (  y2706 ) , (  h2702 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_745  cur2726 = ( ( * (  ed2700 ) ) .f_cursor );
    struct funenv1169  temp1247 = ( (struct funenv1169){ .fun = x_dash_to_dash_visual_dash_x1169, .env =  env.envinst1169  } );
    int32_t  vx2727 = ( (  from_dash_visual1160 ) ( ( temp1247.fun ( temp1247.env ,  (  ed2700 ) ,  ( (  cur2726 ) .f_x ) ,  ( (  cur2726 ) .f_y ) ) ) ) );
    int32_t  len2728 = ( (  maybe1067 ) ( ( (  try_dash_get954 ) ( ( (  cursor_dash_row1162 ) ( (  ed2700 ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2726 ) .f_x ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_363  temp1248 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  len2728 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1249 =  next364 (&temp1248);
        if (  __cond1249 .tag == 0 ) {
            break;
        }
        int32_t  x2730 =  __cond1249 .stuff .Maybe_328_Just_s .field0;
        struct Cell_53 *  cursor_dash_cell2731 = ( (  or_dash_fail904 ) ( ( (  get_dash_cell_dash_ptr1129 ) ( (  screen2698 ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  op_dash_sub83 ( (  left_dash_off2709 ) , ( ( * (  ed2700 ) ) .f_screen_dash_left ) ) ) , (  vx2727 ) ) ) , (  x2730 ) ) ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2700 ) ) .f_cursor ) .f_y ) , (  from_dash_y2703 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2731 ) .f_fg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell2731 ) .f_bg = ( ( * ( ( * (  ed2700 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1250 (    struct Maybe_1049 *  dref2733 ,    struct Screen_610 *  screen2736 ) {
    struct Maybe_1049  dref2737 = ( (* dref2733 ) );
    if ( dref2737.tag == Maybe_1049_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2737.tag == Maybe_1049_Just_t ) {
        struct Duration_1072  diff2739 = ( (  diff1073 ) ( ( (  now1069 ) ( ) ) ,  ( dref2737 .stuff .Maybe_1049_Just_s .field0 ) ) );
        struct Duration_1072  limit2740 = ( (  duration_dash_from_dash_ns1074 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1071 ( (  diff2739 ) , (  limit2740 ) ) == 2 ) ) {
            (* dref2733 ) = ( (struct Maybe_1049) { .tag = Maybe_1049_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2741 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2742 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2743 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1075 ) ( (  diff2739 ) ) ) , (  x_dash_fill2741 ) ) ) , ( (  duration_dash_to_dash_ns1075 ) ( (  limit2740 ) ) ) ) ) ) );
        int32_t  y_dash_progress2744 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1075 ) ( (  diff2739 ) ) ) , (  y_dash_fill2742 ) ) ) , ( (  duration_dash_to_dash_ns1075 ) ( (  limit2740 ) ) ) ) ) ) );
        uint32_t  center_dash_x2745 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2746 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1127 ) ( (  screen2736 ) ,  ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) ) );
        int32_t  x_dash_off2747 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  x_dash_fill2741 ) ) ) , (  x_dash_progress2743 ) ) );
        int32_t  y_dash_off2748 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  y_dash_fill2742 ) ) ) , (  y_dash_progress2744 ) ) );
        int32_t  h2749 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2750 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2736 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1251 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2749 ) ) ) );
        while (true) {
            struct Maybe_328  __cond1252 =  next364 (&temp1251);
            if (  __cond1252 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2752 =  __cond1252 .stuff .Maybe_328_Just_s .field0;
            struct RangeIter_363  temp1253 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2750 ) ) ) );
            while (true) {
                struct Maybe_328  __cond1254 =  next364 (&temp1253);
                if (  __cond1254 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2754 =  __cond1254 .stuff .Maybe_328_Just_s .field0;
                if ( ( ( ( (  cmp75 ( (  screen_dash_x2754 ) , (  x_dash_off2747 ) ) != 2 ) || (  cmp75 ( (  screen_dash_x2754 ) , (  op_dash_sub83 ( (  w2750 ) , (  x_dash_off2747 ) ) ) ) != 0 ) ) || (  cmp75 ( (  screen_dash_y2752 ) , (  y_dash_off2748 ) ) != 2 ) ) || (  cmp75 ( (  screen_dash_y2752 ) , (  op_dash_sub83 ( (  h2749 ) , (  y_dash_off2748 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1135 ) ( (  screen2736 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2754 ) ,  (  screen_dash_y2752 ) ) );
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

struct funenv1038 {
    const char*  (*fun) (  struct env1038  ,    struct TakeWhile_480  ,    enum CAllocator_4  );
    struct env1038 env;
};

struct funenv1042 {
    const char*  (*fun) (  struct env1042  ,    struct TakeWhile_484  ,    enum CAllocator_4  );
    struct env1042 env;
};

struct env1255 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1180 envinst1180;
    ;
    ;
    ;
    struct env1224 envinst1224;
    ;
    ;
    ;
    ;
    ;
    struct Theme_1054 *  light_dash_theme2436;
    ;
    struct env1219 envinst1219;
    ;
    ;
    ;
    ;
    struct Theme_1054 *  dark_dash_theme2435;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1038 envinst1038;
    struct env1042 envinst1042;
    ;
    ;
};

static  bool   lam1256 (    char  c2768 ) {
    return ( ! ( (  is_dash_whitespace943 ) ( (  c2768 ) ) ) );
}

static  bool   lam1260 (    char  c2776 ) {
    return ( ! ( (  is_dash_whitespace943 ) ( (  c2776 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1255 (   struct env1255 env ,    struct Editor_1052 *  ed2757 ,    struct DynStr_129  s2759 ,    struct Dims_1175  dim2761 ,    enum CAllocator_4  al2763 ) {
    struct DropWhile_478  s2764 = ( (  drop_dash_while505 ) ( (  s2759 ) ,  (  is_dash_whitespace943 ) ) );
    struct TakeWhile_477  cmd2765 = ( (  take_dash_while502 ) ( (  s2764 ) ,  (  is_dash_not_dash_whitespace944 ) ) );
    struct DropWhile_481  rest2766 = ( (  drop_dash_while508 ) ( ( (  drop_dash_while507 ) ( (  s2764 ) ,  (  is_dash_not_dash_whitespace944 ) ) ) ,  (  is_dash_whitespace943 ) ) );
    if ( ( (  eq874 ) ( (  cmd2765 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_480  filename2769 = ( (  take_dash_while501 ) ( (  rest2766 ) ,  (  lam1256 ) ) );
        const char*  temp1257;
        const char*  alfname2770 = (  temp1257 );
        if ( ( (  null735 ) ( (  filename2769 ) ) ) ) {
            struct Maybe_265  dref2771 = ( ( * (  ed2757 ) ) .f_filename );
            if ( dref2771.tag == Maybe_265_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2771.tag == Maybe_265_Just_t ) {
                alfname2770 = ( dref2771 .stuff .Maybe_265_Just_s .field0 );
            }
        } else {
            struct Maybe_265  dref2773 = ( ( * (  ed2757 ) ) .f_filename );
            if ( dref2773.tag == Maybe_265_None_t ) {
            }
            else if ( dref2773.tag == Maybe_265_Just_t ) {
                ( (  free935 ) ( (  al2763 ) ,  ( (struct Slice_936) { .f_ptr = ( (  cast187 ) ( ( dref2773 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1038  temp1258 = ( (struct funenv1038){ .fun = mk_dash_const_dash_str1038, .env =  env.envinst1038  } );
            alfname2770 = ( temp1258.fun ( temp1258.env ,  (  filename2769 ) ,  (  al2763 ) ) );
        }
        struct funenv1224  temp1259 = ( (struct funenv1224){ .fun = save_dash_file1224, .env =  env.envinst1224  } );
        ( temp1259.fun ( temp1259.env ,  ( ( * (  ed2757 ) ) .f_current_dash_file ) ,  (  alfname2770 ) ) );
        (*  ed2757 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2770 ) ) );
    } else {
        if ( ( (  eq874 ) ( (  cmd2765 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2757 ) .f_running = ( false );
        } else {
            if ( ( (  eq874 ) ( (  cmd2765 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_484  filename2777 = ( (  take_dash_while498 ) ( (  rest2766 ) ,  (  lam1260 ) ) );
                struct funenv1042  temp1261 = ( (struct funenv1042){ .fun = mk_dash_const_dash_str1042, .env =  env.envinst1042  } );
                const char*  alfname2778 = ( temp1261.fun ( temp1261.env ,  (  filename2777 ) ,  (  al2763 ) ) );
                struct List_280  og2779 = ( ( * (  ed2757 ) ) .f_current_dash_file );
                struct funenv1219  temp1262 = ( (struct funenv1219){ .fun = load_dash_file1219, .env =  env.envinst1219  } );
                (*  ed2757 ) .f_current_dash_file = ( temp1262.fun ( temp1262.env ,  (  alfname2778 ) ,  (  al2763 ) ) );
                struct Maybe_265  dref2780 = ( ( * (  ed2757 ) ) .f_filename );
                if ( dref2780.tag == Maybe_265_None_t ) {
                }
                else if ( dref2780.tag == Maybe_265_Just_t ) {
                    ( (  free935 ) ( (  al2763 ) ,  ( (struct Slice_936) { .f_ptr = ( (  cast187 ) ( ( dref2780 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2757 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2778 ) ) );
                (*  ed2757 ) .f_cursor = ( (struct Cursor_745) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2757 ) .f_goal_dash_x = ( ( Visual_1053_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2757 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1230 ) ( (  og2779 ) ) );
            } else {
                if ( ( (  eq878 ) ( (  cmd2765 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_495  theme_dash_name2782 = ( (  take_dash_while500 ) ( (  rest2766 ) ,  (  is_dash_not_dash_whitespace944 ) ) );
                    if ( ( (  eq881 ) ( (  theme_dash_name2782 ) ,  ( "dark" ) ) ) ) {
                        (*  ed2757 ) .f_theme = ( env.dark_dash_theme2435 );
                    } else {
                        if ( ( (  eq881 ) ( (  theme_dash_name2782 ) ,  ( "light" ) ) ) ) {
                            (*  ed2757 ) .f_theme = ( env.light_dash_theme2436 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_677  dref2783 = ( (  parse_dash_int950 ) ( (  cmd2765 ) ) );
                    if ( dref2783.tag == Maybe_677_Just_t ) {
                        int32_t  newline2785 = ( (  clamp751 ) ( ( (  i64_dash_i32269 ) ( (  op_dash_sub79 ( ( dref2783 .stuff .Maybe_677_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2757 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        struct funenv1180  temp1263 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  env.envinst1180  } );
                        ( temp1263.fun ( temp1263.env ,  (  ed2757 ) ,  (  newline2785 ) ,  (  dim2761 ) ) );
                    }
                    else if ( dref2783.tag == Maybe_677_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1034 {
    const char*  (*fun) (  struct env1034  ,    const char*  ,    enum CAllocator_4  );
    struct env1034 env;
};

struct funenv1086 {
    struct Tui_611  (*fun) (  struct env1086  );
    struct env1086 env;
};

struct funenv1233 {
    struct Dims_1175  (*fun) (  struct env1233  ,    struct Editor_1052 *  ,    struct Tui_611 *  );
    struct env1233 env;
};

struct funenv1182 {
    bool  (*fun) (  struct env1182  ,    struct Editor_1052 *  ,    struct Dims_1175  );
    struct env1182 env;
};

struct funenv1186 {
    bool  (*fun) (  struct env1186  ,    struct Editor_1052 *  ,    struct Dims_1175  );
    struct env1186 env;
};

struct funenv1195 {
    enum Unit_13  (*fun) (  struct env1195  ,    struct Editor_1052 *  ,    struct Dims_1175  );
    struct env1195 env;
};

struct funenv1189 {
    enum Unit_13  (*fun) (  struct env1189  ,    struct Editor_1052 *  ,    struct Dims_1175  );
    struct env1189 env;
};

struct funenv1191 {
    enum Unit_13  (*fun) (  struct env1191  ,    struct Editor_1052 *  ,    struct Dims_1175  );
    struct env1191 env;
};

struct funenv1213 {
    enum Unit_13  (*fun) (  struct env1213  ,    struct Editor_1052 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1213 env;
};

static  int32_t   lam1297 (    struct Cursor_745  s2808 ) {
    return ( (  s2808 ) .f_x );
}

static  int32_t   lam1303 (    struct Cursor_745  s2812 ) {
    return ( (  s2812 ) .f_x );
}

static  bool   lam1307 (    char  c2816 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2816 ) ) );
}

static  bool   lam1309 (    char  c2818 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2818 ) ) ) );
}

static  bool   lam1315 (    char  c2822 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2822 ) ) ) );
}

static  bool   lam1317 (    char  c2824 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2824 ) ) );
}

static  bool   lam1323 (    char  c2828 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2828 ) ) ) );
}

static  bool   lam1325 (    char  c2830 ) {
    return ( (  is_dash_word_dash_char1218 ) ( (  c2830 ) ) );
}

static  bool   lam1327 (    char  c2832 ) {
    return ( ! ( (  is_dash_word_dash_char1218 ) ( (  c2832 ) ) ) );
}

struct funenv967 {
    enum Unit_13  (*fun) (  struct env967  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env967 env;
};

struct funenv1029 {
    enum Unit_13  (*fun) (  struct env1029  ,    struct StrBuilder_540 *  );
    struct env1029 env;
};

struct funenv1255 {
    enum Unit_13  (*fun) (  struct env1255  ,    struct Editor_1052 *  ,    struct DynStr_129  ,    struct Dims_1175  ,    enum CAllocator_4  );
    struct env1255 env;
};

struct funenv1124 {
    bool  (*fun) (  struct env1124  ,    struct Screen_610 *  );
    struct env1124 env;
};

struct funenv1235 {
    enum Unit_13  (*fun) (  struct env1235  ,    struct Screen_610 *  ,    struct Editor_1052 *  );
    struct env1235 env;
};

static  struct Maybe_297   lam1051 (   struct env1051 env ,    struct List_3  l2856 ) {
    return ( (  try_dash_get954 ) ( ( & (  l2856 ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * ( env.ed2791 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_347   lam1356 (    char  c2858 ) {
    return ( ( Tuple2_347_Tuple2 ) ( (  c2858 ) ,  ( (  char_dash_i32884 ) ( (  c2858 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1628 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1629 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1630 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env535 envinst535 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env305 envinst305 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env534 envinst534 = {
        .envinst535 = envinst535 ,
    };
    struct env304 envinst304 = {
        .envinst305 = envinst305 ,
    };
    struct env964 envinst964 = {
        .envinst534 = envinst534 ,
        .envinst535 = envinst535 ,
    };
    struct env967 envinst967 = {
        .envinst304 = envinst304 ,
        .envinst305 = envinst305 ,
    };
    struct env970 envinst970 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env971 envinst971 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env972 envinst972 = {
        .envinst970 = envinst970 ,
    };
    struct env303 envinst303 = {
        .envinst304 = envinst304 ,
    };
    struct env975 envinst975 = {
        .envinst534 = envinst534 ,
    };
    struct env977 envinst977 = {
        .envinst304 = envinst304 ,
    };
    struct env979 envinst979 = {
        .envinst304 = envinst304 ,
    };
    struct env981 envinst981 = {
        .envinst304 = envinst304 ,
    };
    struct env302 envinst302 = {
        .envinst303 = envinst303 ,
    };
    struct env986 envinst986 = {
        .envinst975 = envinst975 ,
    };
    struct env1022 envinst1022 = {
        .envinst304 = envinst304 ,
    };
    struct env1024 envinst1024 = {
        .envinst304 = envinst304 ,
    };
    struct env1026 envinst1026 = {
        .envinst304 = envinst304 ,
    };
    struct env601 envinst601 = {
        .envinst304 = envinst304 ,
    };
    struct env1029 envinst1029 = {
        .envinst972 = envinst972 ,
    };
    struct env1034 envinst1034 = {
        .envinst1022 = envinst1022 ,
        .envinst601 = envinst601 ,
    };
    struct env1038 envinst1038 = {
        .envinst1024 = envinst1024 ,
        .envinst601 = envinst601 ,
    };
    struct env1042 envinst1042 = {
        .envinst1026 = envinst1026 ,
        .envinst601 = envinst601 ,
    };
    bool  temp1085 = ( false );
    bool *  should_dash_resize2216 = ( &temp1085 );
    struct env1086 envinst1086 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1109 envinst1109 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1124 envinst1124 = {
        .envinst1109 = envinst1109 ,
    };
    int32_t  tab_dash_size2430 = (  from_dash_integral29 ( 2 ) );
    struct env312 envinst312 = {
        .tab_dash_size2430 =  tab_dash_size2430 ,
    };
    struct Theme_1054  temp1157 = ( (struct Theme_1054) { .f_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_Black16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) } );
    struct Theme_1054 *  dark_dash_theme2435 = ( &temp1157 );
    struct Theme_1054  temp1158 = ( (struct Theme_1054) { .f_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) } );
    struct Theme_1054 *  light_dash_theme2436 = ( &temp1158 );
    struct env1165 envinst1165 = {
        .envinst971 = envinst971 ,
    };
    struct env1169 envinst1169 = {
        .envinst312 = envinst312 ,
    };
    struct env1170 envinst1170 = {
        .envinst312 = envinst312 ,
    };
    struct env1174 envinst1174 = {
        .envinst1170 = envinst1170 ,
        .envinst1169 = envinst1169 ,
    };
    struct env1178 envinst1178 = {
        .envinst1174 = envinst1174 ,
    };
    struct env1180 envinst1180 = {
        .envinst1174 = envinst1174 ,
    };
    struct env1182 envinst1182 = {
        .envinst1180 = envinst1180 ,
        .envinst1178 = envinst1178 ,
    };
    struct env1186 envinst1186 = {
        .envinst1174 = envinst1174 ,
        .envinst1178 = envinst1178 ,
    };
    struct env1189 envinst1189 = {
        .envinst1178 = envinst1178 ,
    };
    struct env1191 envinst1191 = {
        .envinst1178 = envinst1178 ,
    };
    struct env1195 envinst1195 = {
        .envinst1174 = envinst1174 ,
        .envinst970 = envinst970 ,
        .envinst1165 = envinst1165 ,
        .envinst977 = envinst977 ,
        .envinst979 = envinst979 ,
    };
    struct env1213 envinst1213 = {
        .envinst964 = envinst964 ,
        .envinst981 = envinst981 ,
    };
    enum CAllocator_4  al2635 = ( (  idc929 ) ( ) );
    struct env1219 envinst1219 = {
        .envinst302 = envinst302 ,
        .envinst986 = envinst986 ,
        .envinst534 = envinst534 ,
    };
    struct env1224 envinst1224 = {
        .envinst601 = envinst601 ,
        .al2635 =  al2635 ,
    };
    int32_t  pad2686 = (  from_dash_integral29 ( 2 ) );
    struct env1231 envinst1231 = {
        .pad2686 =  pad2686 ,
    };
    struct env1233 envinst1233 = {
        .envinst1231 = envinst1231 ,
    };
    struct env1235 envinst1235 = {
        .envinst1231 = envinst1231 ,
        .envinst312 = envinst312 ,
        .envinst1169 = envinst1169 ,
        .pad2686 =  pad2686 ,
    };
    struct env1255 envinst1255 = {
        .envinst1180 = envinst1180 ,
        .envinst1224 = envinst1224 ,
        .light_dash_theme2436 =  light_dash_theme2436 ,
        .envinst1219 = envinst1219 ,
        .dark_dash_theme2435 =  dark_dash_theme2435 ,
        .envinst1038 = envinst1038 ,
        .envinst1042 = envinst1042 ,
    };
    struct Slice_913  args2788 = ( (  get1156 ) ( ) );
    struct List_280  temp1264;
    struct List_280  file2789 = (  temp1264 );
    struct Maybe_265  mfilename2790 = ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    if ( (  eq45 ( ( (  args2788 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2789 = ( (  mk958 ) ( (  al2635 ) ) );
        struct funenv534  temp1265 = ( (struct funenv534){ .fun = add534, .env =  envinst534  } );
        ( temp1265.fun ( temp1265.env ,  ( & (  file2789 ) ) ,  ( (  mk959 ) ( (  al2635 ) ) ) ) );
    } else {
        struct funenv1219  temp1266 = ( (struct funenv1219){ .fun = load_dash_file1219, .env =  envinst1219  } );
        file2789 = ( temp1266.fun ( temp1266.env ,  (  elem_dash_get923 ( (  args2788 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2635 ) ) );
        struct funenv1034  temp1267 = ( (struct funenv1034){ .fun = mk_dash_const_dash_str1034, .env =  envinst1034  } );
        mfilename2790 = ( ( Maybe_265_Just ) ( ( temp1267.fun ( temp1267.env ,  (  elem_dash_get923 ( (  args2788 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2635 ) ) ) ) );
    }
    struct Editor_1052  temp1268 = ( (struct Editor_1052) { .f_cursor = ( (struct Cursor_745) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1053_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2789 ) , .f_filename = (  mfilename2790 ) , .f_mode = ( (struct Mode_764) { .tag = Mode_764_Normal_t } ) , .f_anim = ( ( Maybe_1049_Just ) ( ( (  now1069 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_907) { .tag = Maybe_907_None_t } ) , .f_theme = (  dark_dash_theme2435 ) } );
    struct Editor_1052 *  ed2791 = ( &temp1268 );
    struct funenv1086  temp1270 = ( (struct funenv1086){ .fun = mk1086, .env =  envinst1086  } );
    struct Tui_611  temp1269 = ( temp1270.fun ( temp1270.env ) );
    struct Tui_611 *  tui2792 = ( &temp1269 );
    enum CAllocator_4  al2793 = ( (  idc929 ) ( ) );
    struct Screen_610  temp1271 = ( (  mk_dash_screen1110 ) ( (  tui2792 ) ,  (  al2793 ) ) );
    struct Screen_610 *  screen2794 = ( &temp1271 );
    uint32_t  counter2795 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2796 = ( true );
    while ( ( ( * (  ed2791 ) ) .f_running ) ) {
        int32_t  events2797 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_513  temp1272 =  into_dash_iter512 ( ( (  from_dash_function519 ) ( (  read_dash_key1103 ) ) ) );
        while (true) {
            struct Maybe_514  __cond1273 =  next518 (&temp1272);
            if (  __cond1273 .tag == 0 ) {
                break;
            }
            struct InputEvent_515  ev2799 =  __cond1273 .stuff .Maybe_514_Just_s .field0;
            events2797 = (  op_dash_add82 ( (  events2797 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1109  temp1274 = ( (struct funenv1109){ .fun = update_dash_dimensions1109, .env =  envinst1109  } );
            ( temp1274.fun ( temp1274.env ,  (  tui2792 ) ) );
            struct InputEvent_515  dref2800 = (  ev2799 );
            if ( dref2800.tag == InputEvent_515_Key_t ) {
                struct Key_516  dref2802 = ( dref2800 .stuff .InputEvent_515_Key_s .field0 );
                if ( dref2802.tag == Key_516_Char_t ) {
                    struct Mode_764 *  dref2804 = ( & ( ( * (  ed2791 ) ) .f_mode ) );
                    if ( (* dref2804 ).tag == Mode_764_Normal_t ) {
                        int32_t  code2805 = ( (  u8_dash_i32276 ) ( ( (  cast194 ) ( ( dref2802 .stuff .Key_516_Char_s .field0 ) ) ) ) );
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_running = ( false );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                            struct funenv1180  temp1275 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                            struct funenv1233  temp1276 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1275.fun ( temp1275.env ,  (  ed2791 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1276.fun ( temp1276.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                            struct funenv1180  temp1277 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                            struct funenv1233  temp1278 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1277.fun ( temp1277.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1278.fun ( temp1278.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                            struct funenv1182  temp1279 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                            struct funenv1233  temp1280 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1279.fun ( temp1279.env ,  (  ed2791 ) ,  ( temp1280.fun ( temp1280.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                            struct funenv1186  temp1281 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                            struct funenv1233  temp1282 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1281.fun ( temp1281.env ,  (  ed2791 ) ,  ( temp1282.fun ( temp1282.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                            struct funenv1195  temp1283 = ( (struct funenv1195){ .fun = delete_dash_selected1195, .env =  envinst1195  } );
                            struct funenv1233  temp1284 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1283.fun ( temp1283.env ,  (  ed2791 ) ,  ( temp1284.fun ( temp1284.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                            struct funenv1195  temp1285 = ( (struct funenv1195){ .fun = delete_dash_selected1195, .env =  envinst1195  } );
                            struct funenv1233  temp1286 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1285.fun ( temp1285.env ,  (  ed2791 ) ,  ( temp1286.fun ( temp1286.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                            struct funenv1189  temp1287 = ( (struct funenv1189){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1189, .env =  envinst1189  } );
                            struct funenv1233  temp1288 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1287.fun ( temp1287.env ,  (  ed2791 ) ,  ( temp1288.fun ( temp1288.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                            struct funenv1191  temp1289 = ( (struct funenv1191){ .fun = move_dash_to_dash_end_dash_of_dash_line1191, .env =  envinst1191  } );
                            struct funenv1233  temp1290 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1289.fun ( temp1289.env ,  (  ed2791 ) ,  ( temp1290.fun ( temp1290.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                            struct funenv1213  temp1291 = ( (struct funenv1213){ .fun = insert_dash_empty_dash_row_dash_at1213, .env =  envinst1213  } );
                            ( temp1291.fun ( temp1291.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2793 ) ) );
                            struct List_3 *  currow2806 = ( (  get_dash_row1161 ) ( (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1174  temp1292 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  envinst1174  } );
                            struct funenv1233  temp1293 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1292.fun ( temp1292.env ,  (  ed2791 ) ,  ( (  size_dash_i32270 ) ( ( (  size992 ) ( (  currow2806 ) ) ) ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1293.fun ( temp1293.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                            struct funenv1213  temp1294 = ( (struct funenv1213){ .fun = insert_dash_empty_dash_row_dash_at1213, .env =  envinst1213  } );
                            ( temp1294.fun ( temp1294.env ,  (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ,  (  al2793 ) ) );
                            struct funenv1191  temp1295 = ( (struct funenv1191){ .fun = move_dash_to_dash_end_dash_of_dash_line1191, .env =  envinst1191  } );
                            struct funenv1233  temp1296 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1295.fun ( temp1295.env ,  (  ed2791 ) ,  ( temp1296.fun ( temp1296.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_mode = ( ( Mode_764_Cmd ) ( ( (  mk1032 ) ( (  al2793 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                            if ( ( (  eq41 ( ( (  maybe1058 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  (  lam1297 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1194 ) ( (  ed2791 ) ) ) ) ) {
                                struct funenv1233  temp1298 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                                struct Dims_1175  dims2809 = ( temp1298.fun ( temp1298.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                                struct Cursor_745  sel2810 = ( (  or_dash_else906 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  ( ( * (  ed2791 ) ) .f_cursor ) ) );
                                struct funenv1180  temp1299 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                                ( temp1299.fun ( temp1299.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2809 ) ) );
                                struct funenv1191  temp1300 = ( (struct funenv1191){ .fun = move_dash_to_dash_end_dash_of_dash_line1191, .env =  envinst1191  } );
                                ( temp1300.fun ( temp1300.env ,  (  ed2791 ) ,  (  dims2809 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_907_Just ) ( (  sel2810 ) ) );
                            } else {
                                struct funenv1191  temp1301 = ( (struct funenv1191){ .fun = move_dash_to_dash_end_dash_of_dash_line1191, .env =  envinst1191  } );
                                struct funenv1233  temp1302 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                                ( temp1301.fun ( temp1301.env ,  (  ed2791 ) ,  ( temp1302.fun ( temp1302.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_907_Just ) ( ( (struct Cursor_745) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1059 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  (  lam1303 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                            struct funenv1233  temp1304 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1175  dims2813 = ( temp1304.fun ( temp1304.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_745  first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1186  temp1305 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                            ( temp1305.fun ( temp1305.env ,  (  ed2791 ) ,  (  dims2813 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at1167 ) ( (  ed2791 ) ,  (  first_dash_pos2814 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1194 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1186  temp1306 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1306.fun ( temp1306.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1060 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1307 ) ,  ( false ) ) ) ) {
                                struct funenv1186  temp1308 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1308.fun ( temp1308.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1061 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1309 ) ,  ( false ) ) ) ) {
                                struct funenv1186  temp1310 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1310.fun ( temp1310.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1159 ( (  first_dash_pos2814 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                struct funenv1182  temp1311 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                                ( temp1311.fun ( temp1311.env ,  (  ed2791 ) ,  (  dims2813 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_907_Just ) ( (  first_dash_pos2814 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                            struct funenv1233  temp1312 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1175  dims2819 = ( temp1312.fun ( temp1312.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_745  first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1186  temp1313 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                            ( temp1313.fun ( temp1313.env ,  (  ed2791 ) ,  (  dims2819 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at1167 ) ( (  ed2791 ) ,  (  first_dash_pos2820 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1194 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1186  temp1314 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1314.fun ( temp1314.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1062 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1315 ) ,  ( false ) ) ) ) {
                                struct funenv1186  temp1316 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1316.fun ( temp1316.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1063 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1317 ) ,  ( false ) ) ) ) {
                                struct funenv1186  temp1318 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                if ( ( ! ( temp1318.fun ( temp1318.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1159 ( (  first_dash_pos2820 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                struct funenv1182  temp1319 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                                ( temp1319.fun ( temp1319.env ,  (  ed2791 ) ,  (  dims2819 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_907_Just ) ( (  first_dash_pos2820 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_516_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                            struct funenv1233  temp1320 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            struct Dims_1175  dims2825 = ( temp1320.fun ( temp1320.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_745  first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1182  temp1321 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                            ( temp1321.fun ( temp1321.env ,  (  ed2791 ) ,  (  dims2825 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) , ( (  fmap_dash_maybe1056 ) ( ( (  char_dash_at1167 ) ( (  ed2791 ) ,  (  first_dash_pos2826 ) ) ) ,  (  is_dash_word_dash_char1218 ) ) ) ) ) ) {
                                first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1194 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1182  temp1322 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                                if ( ( ! ( temp1322.fun ( temp1322.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1064 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1323 ) ,  ( false ) ) ) ) {
                                struct funenv1182  temp1324 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                                if ( ( ! ( temp1324.fun ( temp1324.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1065 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1325 ) ,  ( false ) ) ) ) {
                                struct funenv1182  temp1326 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                                if ( ( ! ( temp1326.fun ( temp1326.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1159 ( (  first_dash_pos2826 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                if ( ( (  maybe1066 ) ( ( (  char_dash_at_dash_cursor1168 ) ( (  ed2791 ) ) ) ,  (  lam1327 ) ,  ( true ) ) ) ) {
                                    struct funenv1186  temp1328 = ( (struct funenv1186){ .fun = move_dash_right1186, .env =  envinst1186  } );
                                    ( temp1328.fun ( temp1328.env ,  (  ed2791 ) ,  (  dims2825 ) ) );
                                }
                                (*  ed2791 ) .f_selected = ( ( Maybe_907_Just ) ( (  first_dash_pos2826 ) ) );
                            }
                        }
                    }
                    else if ( (* dref2804 ).tag == Mode_764_Insert_t ) {
                        struct funenv967  temp1329 = ( (struct funenv967){ .fun = insert967, .env =  envinst967  } );
                        ( temp1329.fun ( temp1329.env ,  ( (  cursor_dash_row1162 ) ( (  ed2791 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2802 .stuff .Key_516_Char_s .field0 ) ) );
                        struct funenv1178  temp1330 = ( (struct funenv1178){ .fun = move_dash_to_dash_col1178, .env =  envinst1178  } );
                        struct funenv1233  temp1331 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1330.fun ( temp1330.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1331.fun ( temp1331.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    else if ( (* dref2804 ).tag == Mode_764_Cmd_t ) {
                        struct funenv601  temp1332 = ( (struct funenv601){ .fun = write_dash_char601, .env =  envinst601  } );
                        ( temp1332.fun ( temp1332.env ,  ( & ( (* dref2804 ) .stuff .Mode_764_Cmd_s .field0 ) ) ,  ( dref2802 .stuff .Key_516_Char_s .field0 ) ) );
                    }
                }
                else if ( dref2802.tag == Key_516_Ctrl_t ) {
                    if ( (  eq48 ( ( dref2802 .stuff .Key_516_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2791 ) .f_screen_dash_top = ( (  max748 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1180  temp1333 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                        struct funenv1233  temp1334 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1333.fun ( temp1333.env ,  (  ed2791 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1334.fun ( temp1334.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref2802 .stuff .Key_516_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2791 ) .f_screen_dash_top = ( (  max748 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1180  temp1335 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                        struct funenv1233  temp1336 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1335.fun ( temp1335.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1336.fun ( temp1336.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                }
                else if ( dref2802.tag == Key_516_Escape_t ) {
                    struct Mode_764  dref2835 = ( ( * (  ed2791 ) ) .f_mode );
                    if ( dref2835.tag == Mode_764_Normal_t ) {
                    }
                    else if ( dref2835.tag == Mode_764_Insert_t ) {
                        (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Normal_t } );
                    }
                    else if ( dref2835.tag == Mode_764_Cmd_t ) {
                        ( (  free1033 ) ( ( & ( dref2835 .stuff .Mode_764_Cmd_s .field0 ) ) ) );
                        (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Normal_t } );
                    }
                }
                else if ( dref2802.tag == Key_516_Backspace_t ) {
                    struct Mode_764 *  dref2837 = ( & ( ( * (  ed2791 ) ) .f_mode ) );
                    if ( (* dref2837 ).tag == Mode_764_Normal_t ) {
                    }
                    else if ( (* dref2837 ).tag == Mode_764_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1182  temp1337 = ( (struct funenv1182){ .fun = move_dash_left1182, .env =  envinst1182  } );
                            struct funenv1233  temp1338 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1337.fun ( temp1337.env ,  (  ed2791 ) ,  ( temp1338.fun ( temp1338.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            struct funenv1195  temp1339 = ( (struct funenv1195){ .fun = delete_dash_selected1195, .env =  envinst1195  } );
                            struct funenv1233  temp1340 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1339.fun ( temp1339.env ,  (  ed2791 ) ,  ( temp1340.fun ( temp1340.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                    }
                    else if ( (* dref2837 ).tag == Mode_764_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1031 ) ( ( & ( (* dref2837 ) .stuff .Mode_764_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1029  temp1341 = ( (struct funenv1029){ .fun = pop1029, .env =  envinst1029  } );
                            ( temp1341.fun ( temp1341.env ,  ( & ( (* dref2837 ) .stuff .Mode_764_Cmd_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2802.tag == Key_516_Enter_t ) {
                    struct Mode_764  dref2839 = ( ( * (  ed2791 ) ) .f_mode );
                    if ( dref2839.tag == Mode_764_Normal_t ) {
                    }
                    else if ( dref2839.tag == Mode_764_Insert_t ) {
                        int32_t  cx2840 = ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1342 = ( (  mk959 ) ( (  al2793 ) ) );
                        struct List_3 *  nurow2841 = ( &temp1342 );
                        struct TakeWhile_475  rowws2842 = ( (  indent_dash_on_dash_row1163 ) ( (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2843 = ( (  size_dash_i32270 ) ( ( (  count705 ) ( (  rowws2842 ) ) ) ) );
                        struct funenv981  temp1343 = ( (struct funenv981){ .fun = add_dash_all981, .env =  envinst981  } );
                        ( temp1343.fun ( temp1343.env ,  (  nurow2841 ) ,  (  rowws2842 ) ) );
                        struct List_3 *  cur_dash_row2844 = ( (  cursor_dash_row1162 ) ( (  ed2791 ) ) );
                        struct funenv979  temp1344 = ( (struct funenv979){ .fun = add_dash_all979, .env =  envinst979  } );
                        ( temp1344.fun ( temp1344.env ,  (  nurow2841 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice989 ) ( ( * (  cur_dash_row2844 ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  cx2840 ) ) ) ,  ( ( * (  cur_dash_row2844 ) ) .f_count ) ) ) ) );
                        ( (  trim983 ) ( (  cur_dash_row2844 ) ,  ( (  i32_dash_size268 ) ( (  cx2840 ) ) ) ) );
                        struct funenv964  temp1345 = ( (struct funenv964){ .fun = insert964, .env =  envinst964  } );
                        ( temp1345.fun ( temp1345.env ,  ( & ( ( * (  ed2791 ) ) .f_current_dash_file ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2841 ) ) ) );
                        struct funenv1174  temp1346 = ( (struct funenv1174){ .fun = move_dash_to1174, .env =  envinst1174  } );
                        struct funenv1233  temp1347 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1346.fun ( temp1346.env ,  (  ed2791 ) ,  (  offchars2843 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1347.fun ( temp1347.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    else if ( dref2839.tag == Mode_764_Cmd_t ) {
                        struct DynStr_129  s2846 = ( (  as_dash_str770 ) ( ( & ( dref2839 .stuff .Mode_764_Cmd_s .field0 ) ) ) );
                        struct funenv1255  temp1348 = ( (struct funenv1255){ .fun = run_dash_cmd1255, .env =  envinst1255  } );
                        struct funenv1233  temp1349 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                        ( temp1348.fun ( temp1348.env ,  (  ed2791 ) ,  (  s2846 ) ,  ( temp1349.fun ( temp1349.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ,  (  al2793 ) ) );
                        ( (  free1033 ) ( ( & ( dref2839 .stuff .Mode_764_Cmd_s .field0 ) ) ) );
                        (*  ed2791 ) .f_mode = ( (struct Mode_764) { .tag = Mode_764_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2800.tag == InputEvent_515_Mouse_t ) {
                enum MouseButton_144  dref2848 = ( ( dref2800 .stuff .InputEvent_515_Mouse_s .field0 ) .f_button );
                switch (  dref2848 ) {
                    case MouseButton_144_MouseLeft : {
                        if ( ( ( dref2800 .stuff .InputEvent_515_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2849 = ( (  size_dash_i32270 ) ( ( ( ( * (  ed2791 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2850 = ( (  clamp751 ) ( (  op_dash_add82 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , ( ( dref2800 .stuff .InputEvent_515_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  linecnt2849 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1231  temp1350 = ( (struct funenv1231){ .fun = left_dash_offset1231, .env =  envinst1231  } );
                            struct Visual_1053  vx2851 = ( ( Visual_1053_Visual ) ( (  op_dash_sub83 ( ( ( dref2800 .stuff .InputEvent_515_Mouse_s .field0 ) .f_x ) , ( ( temp1350.fun ( temp1350.env ,  (  ed2791 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1170  temp1351 = ( (struct funenv1170){ .fun = visual_dash_x_dash_to_dash_x1170, .env =  envinst1170  } );
                            int32_t  cx2852 = ( temp1351.fun ( temp1351.env ,  (  ed2791 ) ,  (  vx2851 ) ,  (  cy2850 ) ) );
                            (*  ed2791 ) .f_cursor .f_x = (  cx2852 );
                            (*  ed2791 ) .f_goal_dash_x = (  vx2851 );
                            struct funenv1180  temp1352 = ( (struct funenv1180){ .fun = move_dash_to_dash_row1180, .env =  envinst1180  } );
                            struct funenv1233  temp1353 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                            ( temp1352.fun ( temp1352.env ,  (  ed2791 ) ,  (  cy2850 ) ,  ( temp1353.fun ( temp1353.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable890 ) ( ) );
            }
        }
        struct funenv1124  temp1354 = ( (struct funenv1124){ .fun = resize_dash_screen_dash_if_dash_needed1124, .env =  envinst1124  } );
        bool  resized2853 = ( temp1354.fun ( temp1354.env ,  (  screen2794 ) ) );
        if ( ( ( ( (  resized2853 ) || (  cmp75 ( (  events2797 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2796 ) ) || ( (  is_dash_just1048 ) ( ( ( * (  ed2791 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2796 = ( false );
            ( (  clear_dash_screen1114 ) ( (  screen2794 ) ) );
            ( (  set_dash_screen_dash_fg1126 ) ( (  screen2794 ) ,  ( ( * ( ( * (  ed2791 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1127 ) ( (  screen2794 ) ,  ( ( * ( ( * (  ed2791 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1130 ) ( (  screen2794 ) ) );
            struct funenv1235  temp1355 = ( (struct funenv1235){ .fun = render_dash_editor1235, .env =  envinst1235  } );
            ( temp1355.fun ( temp1355.env ,  (  screen2794 ) ,  (  ed2791 ) ) );
            bool  debug2854 = ( true );
            if ( (  debug2854 ) ) {
                ( (  draw_dash_str_dash_right1145 ) ( (  screen2794 ) ,  ( ( StrConcat_763_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2791 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1146 ) ( (  screen2794 ) ,  ( ( StrConcat_779_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2792 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1051 envinst1051 = {
                    .ed2791 =  ed2791 ,
                };
                struct Maybe_346  charcode2859 = ( (  fmap_dash_maybe1057 ) ( ( (  and_dash_maybe1050 ) ( ( (  try_dash_get955 ) ( ( & ( ( * (  ed2791 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1051){ .fun = lam1051, .env = envinst1051 } ) ) ) ,  (  lam1356 ) ) );
                ( (  draw_dash_str_dash_right1147 ) ( (  screen2794 ) ,  ( ( StrConcat_781_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2859 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1148 ) ( (  screen2794 ) ,  ( ( StrConcat_807_StrConcat ) ( ( ( StrConcat_808_StrConcat ) ( ( ( StrConcat_809_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2860 = ( ( * ( (  get_dash_row1161 ) ( (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1149 ) ( (  screen2794 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2860 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2861 = ( (  from_dash_visual1160 ) ( ( ( * (  ed2791 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1150 ) ( (  screen2794 ) ,  ( ( StrConcat_809_StrConcat ) ( ( "goal x: " ) ,  (  gx2861 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1233  temp1357 = ( (struct funenv1233){ .fun = screen_dash_dims1233, .env =  envinst1233  } );
                struct Dims_1175  dim2862 = ( temp1357.fun ( temp1357.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                ( (  draw_dash_str_dash_right1151 ) ( (  screen2794 ) ,  ( ( StrConcat_816_StrConcat ) ( ( ( StrConcat_817_StrConcat ) ( ( ( StrConcat_809_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2791 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2862 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
            }
            ( (  update_dash_animation1250 ) ( ( & ( ( * (  ed2791 ) ) .f_anim ) ) ,  (  screen2794 ) ) );
            ( (  render_dash_screen1118 ) ( (  screen2794 ) ) );
        }
        ( (  sync1092 ) ( (  tui2792 ) ) );
    }
    ( (  free_dash_screen1113 ) ( (  screen2794 ) ) );
    ( (  deinit1096 ) ( (  tui2792 ) ) );
}
