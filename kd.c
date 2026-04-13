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

static  void *   cast_dash_ptr208 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    char *  p466 ) {
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
    ( ( memset ) ( ( (  cast_dash_ptr208 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed229 (  ) {
    char  temp230;
    char  x473 = (  temp230 );
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
    struct env302 envinst302;
    enum CAllocator_4  al2637;
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
    struct SliceIter_278  f_left_dash_it;
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
    struct SliceIter_287  f_left_dash_it;
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
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_347 Tuple2_347_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_314   next349 (    struct SliceIter_278 *  self1345 ) {
    size_t  off1346 = ( ( * (  self1345 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1345 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    struct List_3  elem1347 = ( * ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1345 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1346 ) ) ) ) ) );
    (*  self1345 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1346 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_314_Just ) ( (  elem1347 ) ) );
}

static  struct Maybe_328   next350 (    struct FromIter_341 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add82 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_328_Just ) ( (  v669 ) ) );
}

static  struct Maybe_346   next348 (    struct Zip_340 *  self676 ) {
    struct Zip_340  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_314  dref678 = ( (  next349 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_314_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_314_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_314_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

struct Tuple2_353 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_353 Tuple2_353_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_353 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_352 {
    enum {
        Maybe_352_None_t,
        Maybe_352_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_353  field0;
        } Maybe_352_Just_s;
    } stuff;
};

static struct Maybe_352 Maybe_352_Just (  struct Tuple2_353  field0 ) {
    return ( struct Maybe_352 ) { .tag = Maybe_352_Just_t, .stuff = { .Maybe_352_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_352   next354 (    struct Zip_344 *  self676 ) {
    struct Zip_344  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next330 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_352   next351 (    struct Drop_343 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next354 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next354 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
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

static  struct Maybe_352   next406 (    struct Zip_368 *  self676 ) {
    struct Zip_368  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next407 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next407 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next413 (    struct Zip_371 *  self676 ) {
    struct Zip_371  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next414 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next414 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next419 (    struct Zip_378 *  self676 ) {
    struct Zip_378  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next420 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next420 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next427 (    struct Zip_382 *  self676 ) {
    struct Zip_382  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next428 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next428 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next436 (    struct Zip_392 *  self676 ) {
    struct Zip_392  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next437 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next437 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next440 (    struct Zip_397 *  self676 ) {
    struct Zip_397  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next441 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next441 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_352   next448 (    struct Zip_401 *  self676 ) {
    struct Zip_401  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next439 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next439 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
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

static  struct Maybe_352   next449 (    struct Zip_403 *  self676 ) {
    struct Zip_403  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next450 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next350 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next350 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_352_Just ) ( ( ( Tuple2_353_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_340   zip452 (    struct Slice_279  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip453 (    struct Slice_5  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip454 (    struct List_280  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip455 (    struct List_3  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter290 ) ( (  left684 ) ) );
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

struct DropWhile_480 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_479 {
    struct DropWhile_480  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_478 {
    struct DropWhile_479  f_it;
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

struct TakeWhile_482 {
    struct DropWhile_480  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_482   into_dash_iter481 (    struct TakeWhile_482  self718 ) {
    return (  self718 );
}

struct TakeWhile_484 {
    struct DropWhile_478  f_it;
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

static  struct Maybe_297   next491 (    struct DropWhile_480 *  self736 ) {
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

static  struct Maybe_297   next490 (    struct DropWhile_479 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next491 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next491 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next489 (    struct DropWhile_478 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next490 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next490 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next492 (    struct TakeWhile_482 *  self721 ) {
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

static  struct TakeWhile_473   take_dash_while494 (    struct Scanner_286 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_473) { .f_it = ( (  into_dash_iter285 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_475   take_dash_while495 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_475) { .f_it = ( (  into_dash_iter289 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_478   into_dash_iter497 (    struct DropWhile_478  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_484   take_dash_while496 (    struct DropWhile_478  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_484) { .f_it = ( (  into_dash_iter497 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_477   take_dash_while498 (    struct DropWhile_478  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_477) { .f_it = ( (  into_dash_iter497 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_480   into_dash_iter500 (    struct DropWhile_480  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_482   take_dash_while499 (    struct DropWhile_480  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_482) { .f_it = ( (  into_dash_iter500 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_479   into_dash_iter501 (    struct DropWhile_479  self733 ) {
    return (  self733 );
}

static  struct SliceIter_287   into_dash_iter503 (    struct DynStr_129  self1432 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1432 ) .f_contents ) ) );
}

static  struct DropWhile_480   drop_dash_while502 (    struct DynStr_129  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_480) { .f_it = ( (  into_dash_iter503 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_479   drop_dash_while504 (    struct DropWhile_480  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_479) { .f_it = ( (  into_dash_iter500 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_478   drop_dash_while505 (    struct DropWhile_479  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_478) { .f_it = ( (  into_dash_iter501 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_376   append506 (    enum EmptyIter_294  it760 ,    char  e762 ) {
    return ( (struct AppendIter_376) { .f_it = ( (  into_dash_iter295 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_376   cons507 (    enum EmptyIter_294  it765 ,    char  e767 ) {
    return ( (  append506 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_376   single508 (    char  e770 ) {
    return ( (  cons507 ) ( ( (  nil293 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_513 {
    enum {
        Key_513_Escape_t,
        Key_513_Enter_t,
        Key_513_Tab_t,
        Key_513_Backspace_t,
        Key_513_Char_t,
        Key_513_Ctrl_t,
        Key_513_Up_t,
        Key_513_Down_t,
        Key_513_Left_t,
        Key_513_Right_t,
        Key_513_Home_t,
        Key_513_End_t,
        Key_513_PageUp_t,
        Key_513_PageDown_t,
        Key_513_Delete_t,
        Key_513_Insert_t,
        Key_513_F1_t,
        Key_513_F2_t,
        Key_513_F3_t,
        Key_513_F4_t,
        Key_513_F5_t,
        Key_513_F6_t,
        Key_513_F7_t,
        Key_513_F8_t,
        Key_513_F9_t,
        Key_513_F10_t,
        Key_513_F11_t,
        Key_513_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_513_Char_s;
        struct {
            char  field0;
        } Key_513_Ctrl_s;
    } stuff;
};

static struct Key_513 Key_513_Char (  char  field0 ) {
    return ( struct Key_513 ) { .tag = Key_513_Char_t, .stuff = { .Key_513_Char_s = { .field0 = field0 } } };
};

static struct Key_513 Key_513_Ctrl (  char  field0 ) {
    return ( struct Key_513 ) { .tag = Key_513_Ctrl_t, .stuff = { .Key_513_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_514 {
    enum MouseButton_144  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_512 {
    enum {
        InputEvent_512_Key_t,
        InputEvent_512_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_513  field0;
        } InputEvent_512_Key_s;
        struct {
            struct MouseEvent_514  field0;
        } InputEvent_512_Mouse_s;
    } stuff;
};

static struct InputEvent_512 InputEvent_512_Key (  struct Key_513  field0 ) {
    return ( struct InputEvent_512 ) { .tag = InputEvent_512_Key_t, .stuff = { .InputEvent_512_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_512 InputEvent_512_Mouse (  struct MouseEvent_514  field0 ) {
    return ( struct InputEvent_512 ) { .tag = InputEvent_512_Mouse_t, .stuff = { .InputEvent_512_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_511 {
    enum {
        Maybe_511_None_t,
        Maybe_511_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_512  field0;
        } Maybe_511_Just_s;
    } stuff;
};

static struct Maybe_511 Maybe_511_Just (  struct InputEvent_512  field0 ) {
    return ( struct Maybe_511 ) { .tag = Maybe_511_Just_t, .stuff = { .Maybe_511_Just_s = { .field0 = field0 } } };
};

struct FunIter_510 {
    struct Maybe_511 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_510   into_dash_iter509 (    struct FunIter_510  self782 ) {
    return (  self782 );
}

static  struct Maybe_511   next515 (    struct FunIter_510 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    struct Maybe_511  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_511_Just_t ) {
        return ( ( Maybe_511_Just ) ( ( dref786 .stuff .Maybe_511_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_511_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
}

static  struct FunIter_510   from_dash_function516 (    struct Maybe_511 (*  fun790 )(  ) ) {
    return ( (struct FunIter_510) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env518 {
    ;
    struct Slice_279  new_dash_slice1634;
    ;
};

struct funenv518 {
    enum Unit_13  (*fun) (  struct env518  ,    struct Tuple2_347  );
    struct env518 env;
};

static  enum Unit_13   for_dash_each517 (    struct Zip_340  iterable793 ,   struct funenv518  fun795 ) {
    struct Zip_340  temp519 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp519 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv518  temp520 = (  fun795 );
            ( temp520.fun ( temp520.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env522 {
    ;
    struct Slice_5  new_dash_slice1634;
    ;
};

struct funenv522 {
    enum Unit_13  (*fun) (  struct env522  ,    struct Tuple2_353  );
    struct env522 env;
};

static  enum Unit_13   for_dash_each521 (    struct Zip_344  iterable793 ,   struct funenv522  fun795 ) {
    struct Zip_344  temp523 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp523 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next354 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv522  temp524 = (  fun795 );
            ( temp524.fun ( temp524.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env526 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv526 {
    enum Unit_13  (*fun) (  struct env526  ,    char  );
    struct env526 env;
};

static  enum Unit_13   for_dash_each525 (    struct DynStr_129  iterable793 ,   struct funenv526  fun795 ) {
    struct SliceIter_287  temp527 = ( (  into_dash_iter503 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp527 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv526  temp528 = (  fun795 );
            ( temp528.fun ( temp528.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env532 {
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

struct funenv532 {
    enum Unit_13  (*fun) (  struct env532  ,    struct List_280 *  );
    struct env532 env;
};

struct env531 {
    ;
    ;
    ;
    ;
    struct env532 envinst532;
    ;
};

struct funenv531 {
    enum Unit_13  (*fun) (  struct env531  ,    struct List_280 *  ,    struct List_3  );
    struct env531 env;
};

struct env530 {
    struct List_280 *  list1681;
    struct env531 envinst531;
};

struct funenv530 {
    enum Unit_13  (*fun) (  struct env530  ,    struct List_3  );
    struct env530 env;
};

static  enum Unit_13   for_dash_each529 (    struct Map_299  iterable793 ,   struct funenv530  fun795 ) {
    struct Map_299  temp533 = ( (  into_dash_iter298 ) ( (  iterable793 ) ) );
    struct Map_299 *  it796 = ( &temp533 );
    while ( ( true ) ) {
        struct Maybe_314  dref797 = ( (  next313 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_314_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_314_Just_t ) {
            struct funenv530  temp534 = (  fun795 );
            ( temp534.fun ( temp534.env ,  ( dref797 .stuff .Maybe_314_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_537 {
    struct List_3  f_chars;
};

struct env536 {
    struct StrBuilder_537 *  builder1920;
    struct env304 envinst304;
};

struct funenv536 {
    enum Unit_13  (*fun) (  struct env536  ,    char  );
    struct env536 env;
};

static  struct ConstStrIter_308   into_dash_iter539 (    struct ConstStrIter_308  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each535 (    struct ConstStrIter_308  iterable793 ,   struct funenv536  fun795 ) {
    struct ConstStrIter_308  temp538 = ( (  into_dash_iter539 ) ( (  iterable793 ) ) );
    struct ConstStrIter_308 *  it796 = ( &temp538 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next326 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv536  temp540 = (  fun795 );
            ( temp540.fun ( temp540.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_543 {
    struct Cell_53 *  f_ptr;
    size_t  f_count;
};

struct env542 {
    ;
    ;
    struct Slice_543  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv542 {
    enum Unit_13  (*fun) (  struct env542  ,    int32_t  );
    struct env542 env;
};

static  enum Unit_13   for_dash_each541 (    struct Range_361  iterable793 ,   struct funenv542  fun795 ) {
    struct RangeIter_363  temp544 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp544 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv542  temp545 = (  fun795 );
            ( temp545.fun ( temp545.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env547 {
    ;
    ;
    struct Slice_543  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv547 {
    enum Unit_13  (*fun) (  struct env547  ,    int32_t  );
    struct env547 env;
};

static  enum Unit_13   for_dash_each546 (    struct Range_361  iterable793 ,   struct funenv547  fun795 ) {
    struct RangeIter_363  temp548 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp548 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv547  temp549 = (  fun795 );
            ( temp549.fun ( temp549.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env551 {
    struct Scanner_286 *  it899;
    ;
};

struct funenv551 {
    struct Maybe_297  (*fun) (  struct env551  ,    int32_t  );
    struct env551 env;
};

static  enum Unit_13   for_dash_each550 (    struct Range_361  iterable793 ,   struct funenv551  fun795 ) {
    struct RangeIter_363  temp552 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp552 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv551  temp553 = (  fun795 );
            ( temp553.fun ( temp553.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env555 {
    ;
    struct Slice_279  dest1370;
    ;
};

struct funenv555 {
    enum Unit_13  (*fun) (  struct env555  ,    struct Tuple2_347  );
    struct env555 env;
};

static  enum Unit_13   for_dash_each554 (    struct Zip_340  iterable793 ,   struct funenv555  fun795 ) {
    struct Zip_340  temp556 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp556 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv555  temp557 = (  fun795 );
            ( temp557.fun ( temp557.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env559 {
    ;
    ;
    struct List_280 *  list1653;
    ;
    ;
};

struct funenv559 {
    enum Unit_13  (*fun) (  struct env559  ,    struct Tuple2_347  );
    struct env559 env;
};

static  enum Unit_13   for_dash_each558 (    struct Drop_339  iterable793 ,   struct funenv559  fun795 ) {
    struct Drop_339  temp560 = ( (  into_dash_iter338 ) ( (  iterable793 ) ) );
    struct Drop_339 *  it796 = ( &temp560 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next345 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv559  temp561 = (  fun795 );
            ( temp561.fun ( temp561.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env563 {
    ;
    struct Slice_5  dest1370;
    ;
};

struct funenv563 {
    enum Unit_13  (*fun) (  struct env563  ,    struct Tuple2_353  );
    struct env563 env;
};

static  enum Unit_13   for_dash_each562 (    struct Zip_344  iterable793 ,   struct funenv563  fun795 ) {
    struct Zip_344  temp564 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp564 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next354 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv563  temp565 = (  fun795 );
            ( temp565.fun ( temp565.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env567 {
    ;
    ;
    struct List_3 *  list1653;
    ;
    ;
};

struct funenv567 {
    enum Unit_13  (*fun) (  struct env567  ,    struct Tuple2_353  );
    struct env567 env;
};

static  enum Unit_13   for_dash_each566 (    struct Drop_343  iterable793 ,   struct funenv567  fun795 ) {
    struct Drop_343  temp568 = ( (  into_dash_iter342 ) ( (  iterable793 ) ) );
    struct Drop_343 *  it796 = ( &temp568 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next351 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv567  temp569 = (  fun795 );
            ( temp569.fun ( temp569.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env571 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv571 {
    enum Unit_13  (*fun) (  struct env571  ,    char  );
    struct env571 env;
};

static  enum Unit_13   for_dash_each570 (    struct List_3 *  iterable793 ,   struct funenv571  fun795 ) {
    struct SliceIter_287  temp572 = ( (  into_dash_iter289 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp572 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv571  temp573 = (  fun795 );
            ( temp573.fun ( temp573.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env575 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv575 {
    enum Unit_13  (*fun) (  struct env575  ,    char  );
    struct env575 env;
};

static  enum Unit_13   for_dash_each574 (    struct Slice_5  iterable793 ,   struct funenv575  fun795 ) {
    struct SliceIter_287  temp576 = ( (  into_dash_iter291 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp576 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv575  temp577 = (  fun795 );
            ( temp577.fun ( temp577.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env579 {
    struct List_3 *  list1681;
    struct env304 envinst304;
};

struct funenv579 {
    enum Unit_13  (*fun) (  struct env579  ,    char  );
    struct env579 env;
};

static  enum Unit_13   for_dash_each578 (    struct TakeWhile_475  iterable793 ,   struct funenv579  fun795 ) {
    struct TakeWhile_475  temp580 = ( (  into_dash_iter474 ) ( (  iterable793 ) ) );
    struct TakeWhile_475 *  it796 = ( &temp580 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next487 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv579  temp581 = (  fun795 );
            ( temp581.fun ( temp581.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env583 {
    struct StrBuilder_537 *  builder1920;
    struct env304 envinst304;
};

struct funenv583 {
    enum Unit_13  (*fun) (  struct env583  ,    char  );
    struct env583 env;
};

static  enum Unit_13   for_dash_each582 (    struct TakeWhile_477  iterable793 ,   struct funenv583  fun795 ) {
    struct TakeWhile_477  temp584 = ( (  into_dash_iter476 ) ( (  iterable793 ) ) );
    struct TakeWhile_477 *  it796 = ( &temp584 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next488 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv583  temp585 = (  fun795 );
            ( temp585.fun ( temp585.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env587 {
    struct StrBuilder_537 *  builder1920;
    struct env304 envinst304;
};

struct funenv587 {
    enum Unit_13  (*fun) (  struct env587  ,    char  );
    struct env587 env;
};

static  enum Unit_13   for_dash_each586 (    struct TakeWhile_484  iterable793 ,   struct funenv587  fun795 ) {
    struct TakeWhile_484  temp588 = ( (  into_dash_iter483 ) ( (  iterable793 ) ) );
    struct TakeWhile_484 *  it796 = ( &temp588 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next493 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv587  temp589 = (  fun795 );
            ( temp589.fun ( temp589.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env592 {
    ;
    struct env304 envinst304;
    ;
};

struct funenv592 {
    enum Unit_13  (*fun) (  struct env592  ,    struct StrBuilder_537 *  ,    char  );
    struct env592 env;
};

struct env591 {
    struct StrBuilder_537 *  sb2675;
    struct env592 envinst592;
};

struct funenv591 {
    enum Unit_13  (*fun) (  struct env591  ,    char  );
    struct env591 env;
};

static  enum Unit_13   for_dash_each590 (    struct List_3  iterable793 ,   struct funenv591  fun795 ) {
    struct SliceIter_287  temp593 = ( (  into_dash_iter290 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv591  temp594 = (  fun795 );
            ( temp594.fun ( temp594.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_596 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_596   into_dash_iter598 (    struct SliceAddressIter_596  self1360 ) {
    return (  self1360 );
}

struct Maybe_599 {
    enum {
        Maybe_599_None_t,
        Maybe_599_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_599_Just_s;
    } stuff;
};

static struct Maybe_599 Maybe_599_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_599 ) { .tag = Maybe_599_Just_t, .stuff = { .Maybe_599_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_599   next600 (    struct SliceAddressIter_596 *  self1363 ) {
    size_t  off1364 = ( ( * (  self1363 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1363 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_599) { .tag = Maybe_599_None_t } );
    }
    struct List_3 *  elem1365 = ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1363 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1364 ) ) ) ) );
    (*  self1363 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1364 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_599_Just ) ( (  elem1365 ) ) );
}

static  enum Unit_13   for_dash_each595 (    struct SliceAddressIter_596  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_596  temp597 = ( (  into_dash_iter598 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_596 *  it796 = ( &temp597 );
    while ( ( true ) ) {
        struct Maybe_599  dref797 = ( (  next600 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_599_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_599_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_599_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env602 {
    ;
    ;
    struct Slice_543  s1403;
    struct Cell_53 (*  fun1405 )(    struct Cell_53  );
    ;
};

struct funenv602 {
    enum Unit_13  (*fun) (  struct env602  ,    int32_t  );
    struct env602 env;
};

static  enum Unit_13   for_dash_each601 (    struct Range_361  iterable793 ,   struct funenv602  fun795 ) {
    struct RangeIter_363  temp603 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp603 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv602  temp604 = (  fun795 );
            ( temp604.fun ( temp604.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_609 {
    ColorPalette_609_Palette8,
    ColorPalette_609_Palette16,
    ColorPalette_609_Palette256,
    ColorPalette_609_PaletteRGB,
};

struct Tui_608 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_609  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_136  f_orig_dash_termios;
};

struct Screen_607 {
    enum CAllocator_4  f_al;
    struct Tui_608 *  f_tui;
    struct Slice_543  f_current;
    struct Slice_543  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_54  f_default_dash_fg;
    struct Color_54  f_default_dash_bg;
};

struct env606 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv606 {
    enum Unit_13  (*fun) (  struct env606  ,    struct Tuple2_353  );
    struct env606 env;
};

static  enum Unit_13   for_dash_each605 (    struct Zip_368  iterable793 ,   struct funenv606  fun795 ) {
    struct Zip_368  temp610 = ( (  into_dash_iter367 ) ( (  iterable793 ) ) );
    struct Zip_368 *  it796 = ( &temp610 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next406 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv606  temp611 = (  fun795 );
            ( temp611.fun ( temp611.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env613 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv613 {
    enum Unit_13  (*fun) (  struct env613  ,    struct Tuple2_353  );
    struct env613 env;
};

static  enum Unit_13   for_dash_each612 (    struct Zip_371  iterable793 ,   struct funenv613  fun795 ) {
    struct Zip_371  temp614 = ( (  into_dash_iter370 ) ( (  iterable793 ) ) );
    struct Zip_371 *  it796 = ( &temp614 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next413 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv613  temp615 = (  fun795 );
            ( temp615.fun ( temp615.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env617 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv617 {
    enum Unit_13  (*fun) (  struct env617  ,    struct Tuple2_353  );
    struct env617 env;
};

static  enum Unit_13   for_dash_each616 (    struct Zip_378  iterable793 ,   struct funenv617  fun795 ) {
    struct Zip_378  temp618 = ( (  into_dash_iter377 ) ( (  iterable793 ) ) );
    struct Zip_378 *  it796 = ( &temp618 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next419 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv617  temp619 = (  fun795 );
            ( temp619.fun ( temp619.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env621 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv621 {
    enum Unit_13  (*fun) (  struct env621  ,    struct Tuple2_353  );
    struct env621 env;
};

static  enum Unit_13   for_dash_each620 (    struct Zip_382  iterable793 ,   struct funenv621  fun795 ) {
    struct Zip_382  temp622 = ( (  into_dash_iter381 ) ( (  iterable793 ) ) );
    struct Zip_382 *  it796 = ( &temp622 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next427 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv621  temp623 = (  fun795 );
            ( temp623.fun ( temp623.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env625 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv625 {
    enum Unit_13  (*fun) (  struct env625  ,    struct Tuple2_353  );
    struct env625 env;
};

static  enum Unit_13   for_dash_each624 (    struct Zip_392  iterable793 ,   struct funenv625  fun795 ) {
    struct Zip_392  temp626 = ( (  into_dash_iter391 ) ( (  iterable793 ) ) );
    struct Zip_392 *  it796 = ( &temp626 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next436 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv625  temp627 = (  fun795 );
            ( temp627.fun ( temp627.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env629 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv629 {
    enum Unit_13  (*fun) (  struct env629  ,    struct Tuple2_353  );
    struct env629 env;
};

static  enum Unit_13   for_dash_each628 (    struct Zip_397  iterable793 ,   struct funenv629  fun795 ) {
    struct Zip_397  temp630 = ( (  into_dash_iter396 ) ( (  iterable793 ) ) );
    struct Zip_397 *  it796 = ( &temp630 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next440 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv629  temp631 = (  fun795 );
            ( temp631.fun ( temp631.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env633 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv633 {
    enum Unit_13  (*fun) (  struct env633  ,    struct Tuple2_353  );
    struct env633 env;
};

static  enum Unit_13   for_dash_each632 (    struct Zip_401  iterable793 ,   struct funenv633  fun795 ) {
    struct Zip_401  temp634 = ( (  into_dash_iter400 ) ( (  iterable793 ) ) );
    struct Zip_401 *  it796 = ( &temp634 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next448 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv633  temp635 = (  fun795 );
            ( temp635.fun ( temp635.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env637 {
    ;
    struct Screen_607 *  screen2402;
    struct Color_54  fg2413;
    ;
    size_t  i2410;
    ;
    struct Color_54  bg2414;
};

struct funenv637 {
    enum Unit_13  (*fun) (  struct env637  ,    struct Tuple2_353  );
    struct env637 env;
};

static  enum Unit_13   for_dash_each636 (    struct Zip_403  iterable793 ,   struct funenv637  fun795 ) {
    struct Zip_403  temp638 = ( (  into_dash_iter402 ) ( (  iterable793 ) ) );
    struct Zip_403 *  it796 = ( &temp638 );
    while ( ( true ) ) {
        struct Maybe_352  dref797 = ( (  next449 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_352_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_352_Just_t ) {
            struct funenv637  temp639 = (  fun795 );
            ( temp639.fun ( temp639.env ,  ( dref797 .stuff .Maybe_352_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_641 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_641   into_dash_iter642 (    struct SmolArray_98  self1487 ) {
    return ( (struct SmolArrayIter_641) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_648 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_648 StrConcat_648_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_648 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_647 {
    struct StrConcat_648  field0;
    char  field1;
};

static struct StrConcat_647 StrConcat_647_StrConcat (  struct StrConcat_648  field0 ,  char  field1 ) {
    return ( struct StrConcat_647 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_651 {
    const char*  field0;
    struct StrConcat_647  field1;
};

static struct StrConcat_651 StrConcat_651_StrConcat (  const char*  field0 ,  struct StrConcat_647  field1 ) {
    return ( struct StrConcat_651 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_650 {
    struct StrConcat_651  field0;
    char  field1;
};

static struct StrConcat_650 StrConcat_650_StrConcat (  struct StrConcat_651  field0 ,  char  field1 ) {
    return ( struct StrConcat_650 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str655 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str654 (    struct StrConcat_648  self1102 ) {
    struct StrConcat_648  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str655 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str653 (    struct StrConcat_647  self1102 ) {
    struct StrConcat_647  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str654 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str652 (    struct StrConcat_651  self1102 ) {
    struct StrConcat_651  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str653 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str649 (    struct StrConcat_650  self1102 ) {
    struct StrConcat_650  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str652 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic646 (    struct StrConcat_647  errmsg1254 ) {
    ( (  print_dash_str649 ) ( ( ( StrConcat_650_StrConcat ) ( ( ( StrConcat_651_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr645 (    struct Array_99 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast188 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get644 (    struct Array_99 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr645 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next643 (    struct SmolArrayIter_641 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get644 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce640 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_641  it818 = ( (  into_dash_iter642 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next643 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp656;
    return (  temp656 );
}

struct SmolArrayIter_658 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_658   into_dash_iter659 (    struct SmolArray_101  self1487 ) {
    return ( (struct SmolArrayIter_658) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr662 (    struct Array_102 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast189 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get661 (    struct Array_102 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr662 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next660 (    struct SmolArrayIter_658 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get661 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce657 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_658  it818 = ( (  into_dash_iter659 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next660 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp663;
    return (  temp663 );
}

struct SmolArrayIter_665 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_665   into_dash_iter666 (    struct SmolArray_104  self1487 ) {
    return ( (struct SmolArrayIter_665) { .f_backing = (  self1487 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr669 (    struct Array_105 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1463 = ( ( (  cast190 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  uint32_t   get668 (    struct Array_105 *  arr1466 ,    size_t  i1469 ) {
    return ( * ( (  get_dash_ptr669 ) ( (  arr1466 ) ,  (  i1469 ) ) ) );
}

static  struct Maybe_325   next667 (    struct SmolArrayIter_665 *  self1494 ) {
    if ( (  cmp9 ( ( ( * (  self1494 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1496 = ( (  get668 ) ( ( & ( ( ( * (  self1494 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1494 ) ) .f_cur ) ) );
    (*  self1494 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1494 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1496 ) ) );
}

static  uint32_t   reduce664 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_665  it818 = ( (  into_dash_iter666 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next667 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp670;
    return (  temp670 );
}

static  uint32_t   reduce671 (    struct Map_307  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
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
    uint32_t  temp672;
    return (  temp672 );
}

struct Maybe_674 {
    enum {
        Maybe_674_None_t,
        Maybe_674_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_674_Just_s;
    } stuff;
};

static struct Maybe_674 Maybe_674_Just (  int64_t  field0 ) {
    return ( struct Maybe_674 ) { .tag = Maybe_674_Just_t, .stuff = { .Maybe_674_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_674   reduce673 (    struct TakeWhile_473  iterable812 ,    struct Maybe_674  base814 ,    struct Maybe_674 (*  fun816 )(    char  ,    struct Maybe_674  ) ) {
    struct Maybe_674  x817 = (  base814 );
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
    struct Maybe_674  temp675;
    return (  temp675 );
}

static  size_t   reduce676 (    struct TakeWhile_473  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp677;
    return (  temp677 );
}

static  int32_t   reduce678 (    struct Map_310  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
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
    int32_t  temp679;
    return (  temp679 );
}

static  size_t   reduce680 (    struct TakeWhile_475  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp681;
    return (  temp681 );
}

static  struct Maybe_674   reduce682 (    struct TakeWhile_482  iterable812 ,    struct Maybe_674  base814 ,    struct Maybe_674 (*  fun816 )(    char  ,    struct Maybe_674  ) ) {
    struct Maybe_674  x817 = (  base814 );
    struct TakeWhile_482  it818 = ( (  into_dash_iter481 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next492 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_674  temp683;
    return (  temp683 );
}

static  size_t   reduce684 (    struct IntStrIter_369  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp685;
    return (  temp685 );
}

static  size_t   reduce686 (    struct StrConcatIter_372  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp687;
    return (  temp687 );
}

static  size_t   reduce688 (    struct StrConcatIter_379  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp689;
    return (  temp689 );
}

static  size_t   reduce690 (    struct StrConcatIter_383  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp691;
    return (  temp691 );
}

static  size_t   reduce692 (    struct StrConcatIter_393  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp693;
    return (  temp693 );
}

static  size_t   reduce694 (    struct StrConcatIter_398  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp695;
    return (  temp695 );
}

static  size_t   reduce696 (    struct StrConcatIter_395  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp697;
    return (  temp697 );
}

static  size_t   reduce698 (    struct StrConcatIter_404  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
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
    size_t  temp699;
    return (  temp699 );
}

static  size_t   lam701 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count700 (    struct TakeWhile_473  it823 ) {
    return ( (  reduce676 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam701 ) ) );
}

static  size_t   lam703 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count702 (    struct TakeWhile_475  it823 ) {
    return ( (  reduce680 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam703 ) ) );
}

static  size_t   lam705 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count704 (    struct IntStrIter_369  it823 ) {
    return ( (  reduce684 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam705 ) ) );
}

static  size_t   lam707 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count706 (    struct StrConcatIter_372  it823 ) {
    return ( (  reduce686 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam707 ) ) );
}

static  size_t   lam709 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count708 (    struct StrConcatIter_379  it823 ) {
    return ( (  reduce688 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam709 ) ) );
}

static  size_t   lam711 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count710 (    struct StrConcatIter_383  it823 ) {
    return ( (  reduce690 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam711 ) ) );
}

static  size_t   lam713 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count712 (    struct StrConcatIter_393  it823 ) {
    return ( (  reduce692 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam713 ) ) );
}

static  size_t   lam715 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count714 (    struct StrConcatIter_398  it823 ) {
    return ( (  reduce694 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam715 ) ) );
}

static  size_t   lam717 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count716 (    struct StrConcatIter_395  it823 ) {
    return ( (  reduce696 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam717 ) ) );
}

static  size_t   lam719 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count718 (    struct StrConcatIter_404  it823 ) {
    return ( (  reduce698 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam719 ) ) );
}

static  int32_t   lam721 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add82 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum720 (    struct Map_310  it829 ) {
    return ( (  reduce678 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam721 ) ) );
}

static  struct Maybe_314   head722 (    struct List_280 *  it861 ) {
    struct SliceIter_278  temp723 = ( (  into_dash_iter277 ) ( (  it861 ) ) );
    return ( (  next349 ) ( ( &temp723 ) ) );
}

static  struct Maybe_297   head724 (    struct TakeWhile_473  it861 ) {
    struct TakeWhile_473  temp725 = ( (  into_dash_iter472 ) ( (  it861 ) ) );
    return ( (  next485 ) ( ( &temp725 ) ) );
}

static  struct Maybe_297   head726 (    struct TakeWhile_477  it861 ) {
    struct TakeWhile_477  temp727 = ( (  into_dash_iter476 ) ( (  it861 ) ) );
    return ( (  next488 ) ( ( &temp727 ) ) );
}

static  struct Maybe_297   head728 (    struct TakeWhile_482  it861 ) {
    struct TakeWhile_482  temp729 = ( (  into_dash_iter481 ) ( (  it861 ) ) );
    return ( (  next492 ) ( ( &temp729 ) ) );
}

static  bool   null730 (    struct List_280 *  it864 ) {
    struct Maybe_314  dref865 = ( (  head722 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_314_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null731 (    struct TakeWhile_473  it864 ) {
    struct Maybe_297  dref865 = ( (  head724 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null732 (    struct TakeWhile_477  it864 ) {
    struct Maybe_297  dref865 = ( (  head726 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_297   lam551 (   struct env551 env ,    int32_t  dref902 ) {
    return ( (  next486 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_733 (    struct Scanner_286 *  it899 ,    size_t  n901 ) {
    struct env551 envinst551 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each550 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32270 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv551){ .fun = lam551, .env = envinst551 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or734 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors735 (    struct SmolArray_98  vals947 ) {
    return ( (  reduce640 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or734 ) ) );
}

static  uint32_t   u32_dash_ors736 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce657 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or734 ) ) );
}

static  uint32_t   u32_dash_ors737 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce664 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or734 ) ) );
}

static  uint32_t   u32_dash_and738 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg739 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod740 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div80 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub79 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp74 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add78 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_742 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp743 (    struct Cursor_742  l2442 ,    struct Cursor_742  r2444 ) {
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

static  struct Cursor_742   min741 (    struct Cursor_742  l965 ,    struct Cursor_742  r967 ) {
    if ( (  cmp743 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min744 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp75 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max745 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp75 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_742   max746 (    struct Cursor_742  l970 ,    struct Cursor_742  r972 ) {
    if ( (  cmp743 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between747 (    struct Cursor_742  c975 ,    struct Cursor_742  l977 ,    struct Cursor_742  r979 ) {
    struct Cursor_742  from980 = ( (  min741 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_742  to981 = ( (  max746 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp743 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp743 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp748 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
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

static  struct ConstStrIter_308   chars749 (    const char*  self1014 ) {
    return ( (  into_dash_iter335 ) ( (  self1014 ) ) );
}

static  struct AppendIter_376   chars750 (    char  self1020 ) {
    return ( (  single508 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits751 (    size_t  self1035 ) {
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

static  int32_t   count_dash_digits752 (    int32_t  self1035 ) {
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

static  int32_t   count_dash_digits753 (    uint32_t  self1035 ) {
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

static  struct IntStrIter_369   chars754 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_369) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits752 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str755 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_380   chars756 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_380) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits753 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str757 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32276 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_399   chars758 (    size_t  self1066 ) {
    return ( (struct IntStrIter_399) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits751 ) ( (  self1066 ) ) ) } );
}

struct Mode_761 {
    enum {
        Mode_761_Normal_t,
        Mode_761_Insert_t,
        Mode_761_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_537  field0;
        } Mode_761_Cmd_s;
    } stuff;
};

static struct Mode_761 Mode_761_Cmd (  struct StrBuilder_537  field0 ) {
    return ( struct Mode_761 ) { .tag = Mode_761_Cmd_t, .stuff = { .Mode_761_Cmd_s = { .field0 = field0 } } };
};

struct StrConcat_760 {
    const char*  field0;
    struct Mode_761  field1;
};

static struct StrConcat_760 StrConcat_760_StrConcat (  const char*  field0 ,  struct Mode_761  field1 ) {
    return ( struct StrConcat_760 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_765 {
    const char*  field0;
    struct DynStr_129  field1;
};

static struct StrConcat_765 StrConcat_765_StrConcat (  const char*  field0 ,  struct DynStr_129  field1 ) {
    return ( struct StrConcat_765 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_764 {
    struct StrConcat_765  field0;
    char  field1;
};

static struct StrConcat_764 StrConcat_764_StrConcat (  struct StrConcat_765  field0 ,  char  field1 ) {
    return ( struct StrConcat_764 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_763 {
    enum {
        StrCase_763_StrCase1_t,
        StrCase_763_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_763_StrCase1_s;
        struct {
            struct StrConcat_764  field0;
        } StrCase_763_StrCase2_s;
    } stuff;
};

static struct StrCase_763 StrCase_763_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_763 ) { .tag = StrCase_763_StrCase1_t, .stuff = { .StrCase_763_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_763 StrCase_763_StrCase2 (  struct StrConcat_764  field0 ) {
    return ( struct StrCase_763 ) { .tag = StrCase_763_StrCase2_t, .stuff = { .StrCase_763_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_129   as_dash_str767 (    struct StrBuilder_537 *  builder1946 ) {
    return ( (struct DynStr_129) { .f_contents = ( (  subslice292 ) ( ( ( ( * (  builder1946 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder1946 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_287   chars774 (    struct DynStr_129  self1429 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1429 ) .f_contents ) ) );
}

static  struct StrConcatIter_375   into_dash_iter773 (    struct StrConcat_765  dref1097 ) {
    return ( (struct StrConcatIter_375) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars774 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_375   chars772 (    struct StrConcat_765  self1108 ) {
    return ( (  into_dash_iter773 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_374   into_dash_iter771 (    struct StrConcat_764  dref1097 ) {
    return ( (struct StrConcatIter_374) { .f_left = ( (  chars772 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars750 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_374   chars770 (    struct StrConcat_764  self1108 ) {
    return ( (  into_dash_iter771 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_373   into_dash_iter769 (    struct StrCase_763  self1121 ) {
    struct StrCase_763  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_763_StrCase1_t ) {
        return ( ( StrCaseIter_373_StrCaseIter1 ) ( ( (  chars749 ) ( ( dref1122 .stuff .StrCase_763_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_763_StrCase2_t ) {
        return ( ( StrCaseIter_373_StrCaseIter2 ) ( ( (  chars770 ) ( ( dref1122 .stuff .StrCase_763_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_373   chars768 (    struct StrCase_763  self1133 ) {
    return ( (  into_dash_iter769 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_373   chars762 (    struct Mode_761  self2460 ) {
    struct StrCase_763  temp766;
    struct StrCase_763  c2461 = (  temp766 );
    struct Mode_761  dref2462 = (  self2460 );
    if ( dref2462.tag == Mode_761_Normal_t ) {
        c2461 = ( ( StrCase_763_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2462.tag == Mode_761_Insert_t ) {
        c2461 = ( ( StrCase_763_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2462.tag == Mode_761_Cmd_t ) {
        struct DynStr_129  ss2464 = ( (  as_dash_str767 ) ( ( & ( dref2462 .stuff .Mode_761_Cmd_s .field0 ) ) ) );
        c2461 = ( ( StrCase_763_StrCase2 ) ( ( ( StrConcat_764_StrConcat ) ( ( ( StrConcat_765_StrConcat ) ( ( "Cmd(" ) ,  (  ss2464 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars768 ) ( (  c2461 ) ) );
}

static  struct StrConcatIter_372   into_dash_iter759 (    struct StrConcat_760  dref1097 ) {
    return ( (struct StrConcatIter_372) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars762 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_776 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_776 StrConcat_776_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_776 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_379   into_dash_iter775 (    struct StrConcat_776  dref1097 ) {
    return ( (struct StrConcatIter_379) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars756 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_778 {
    const char*  field0;
    struct Maybe_352  field1;
};

static struct StrConcat_778 StrConcat_778_StrConcat (  const char*  field0 ,  struct Maybe_352  field1 ) {
    return ( struct StrConcat_778 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_782 {
    const char*  field0;
    struct Tuple2_353  field1;
};

static struct StrConcat_782 StrConcat_782_StrConcat (  const char*  field0 ,  struct Tuple2_353  field1 ) {
    return ( struct StrConcat_782 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_781 {
    struct StrConcat_782  field0;
    char  field1;
};

static struct StrConcat_781 StrConcat_781_StrConcat (  struct StrConcat_782  field0 ,  char  field1 ) {
    return ( struct StrConcat_781 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_780 {
    enum {
        StrCase_780_StrCase1_t,
        StrCase_780_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_780_StrCase1_s;
        struct {
            struct StrConcat_781  field0;
        } StrCase_780_StrCase2_s;
    } stuff;
};

static struct StrCase_780 StrCase_780_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_780 ) { .tag = StrCase_780_StrCase1_t, .stuff = { .StrCase_780_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_780 StrCase_780_StrCase2 (  struct StrConcat_781  field0 ) {
    return ( struct StrCase_780 ) { .tag = StrCase_780_StrCase2_t, .stuff = { .StrCase_780_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_795 {
    char  field0;
    char  field1;
};

static struct StrConcat_795 StrConcat_795_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_795 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_794 {
    struct StrConcat_795  field0;
    const char*  field1;
};

static struct StrConcat_794 StrConcat_794_StrConcat (  struct StrConcat_795  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_794 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_793 {
    struct StrConcat_794  field0;
    int32_t  field1;
};

static struct StrConcat_793 StrConcat_793_StrConcat (  struct StrConcat_794  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_793 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_792 {
    struct StrConcat_793  field0;
    char  field1;
};

static struct StrConcat_792 StrConcat_792_StrConcat (  struct StrConcat_793  field0 ,  char  field1 ) {
    return ( struct StrConcat_792 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_390   into_dash_iter802 (    struct StrConcat_795  dref1097 ) {
    return ( (struct StrConcatIter_390) { .f_left = ( (  chars750 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars750 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_390   chars801 (    struct StrConcat_795  self1108 ) {
    return ( (  into_dash_iter802 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   into_dash_iter800 (    struct StrConcat_794  dref1097 ) {
    return ( (struct StrConcatIter_389) { .f_left = ( (  chars801 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars749 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_389   chars799 (    struct StrConcat_794  self1108 ) {
    return ( (  into_dash_iter800 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_388   into_dash_iter798 (    struct StrConcat_793  dref1097 ) {
    return ( (struct StrConcatIter_388) { .f_left = ( (  chars799 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_388   chars797 (    struct StrConcat_793  self1108 ) {
    return ( (  into_dash_iter798 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_387   into_dash_iter796 (    struct StrConcat_792  dref1097 ) {
    return ( (struct StrConcatIter_387) { .f_left = ( (  chars797 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars750 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_387   chars791 (    struct StrConcat_792  self1108 ) {
    return ( (  into_dash_iter796 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_387   chars790 (    struct Tuple2_353  dref1158 ) {
    return ( (  chars791 ) ( ( ( StrConcat_792_StrConcat ) ( ( ( StrConcat_793_StrConcat ) ( ( ( StrConcat_794_StrConcat ) ( ( ( StrConcat_795_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_386   into_dash_iter789 (    struct StrConcat_782  dref1097 ) {
    return ( (struct StrConcatIter_386) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars790 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_386   chars788 (    struct StrConcat_782  self1108 ) {
    return ( (  into_dash_iter789 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_385   into_dash_iter787 (    struct StrConcat_781  dref1097 ) {
    return ( (struct StrConcatIter_385) { .f_left = ( (  chars788 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars750 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_385   chars786 (    struct StrConcat_781  self1108 ) {
    return ( (  into_dash_iter787 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_384   into_dash_iter785 (    struct StrCase_780  self1121 ) {
    struct StrCase_780  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_780_StrCase1_t ) {
        return ( ( StrCaseIter_384_StrCaseIter1 ) ( ( (  chars749 ) ( ( dref1122 .stuff .StrCase_780_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_780_StrCase2_t ) {
        return ( ( StrCaseIter_384_StrCaseIter2 ) ( ( (  chars786 ) ( ( dref1122 .stuff .StrCase_780_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_384   chars784 (    struct StrCase_780  self1133 ) {
    return ( (  into_dash_iter785 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_384   chars779 (    struct Maybe_352  self1147 ) {
    struct StrCase_780  temp783;
    struct StrCase_780  c1148 = (  temp783 );
    struct Maybe_352  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_352_None_t ) {
        c1148 = ( ( StrCase_780_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_352_Just_t ) {
        c1148 = ( ( StrCase_780_StrCase2 ) ( ( ( StrConcat_781_StrConcat ) ( ( ( StrConcat_782_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_352_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars784 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_383   into_dash_iter777 (    struct StrConcat_778  dref1097 ) {
    return ( (struct StrConcatIter_383) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars779 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_806 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_806 StrConcat_806_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_806 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_805 {
    struct StrConcat_806  field0;
    char  field1;
};

static struct StrConcat_805 StrConcat_805_StrConcat (  struct StrConcat_806  field0 ,  char  field1 ) {
    return ( struct StrConcat_805 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_804 {
    struct StrConcat_805  field0;
    int32_t  field1;
};

static struct StrConcat_804 StrConcat_804_StrConcat (  struct StrConcat_805  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_804 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_395   into_dash_iter810 (    struct StrConcat_806  dref1097 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_395   chars809 (    struct StrConcat_806  self1108 ) {
    return ( (  into_dash_iter810 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_394   into_dash_iter808 (    struct StrConcat_805  dref1097 ) {
    return ( (struct StrConcatIter_394) { .f_left = ( (  chars809 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars750 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_394   chars807 (    struct StrConcat_805  self1108 ) {
    return ( (  into_dash_iter808 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter803 (    struct StrConcat_804  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars807 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   into_dash_iter811 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars749 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars758 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_814 {
    struct StrConcat_806  field0;
    const char*  field1;
};

static struct StrConcat_814 StrConcat_814_StrConcat (  struct StrConcat_806  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_814 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_813 {
    struct StrConcat_814  field0;
    int32_t  field1;
};

static struct StrConcat_813 StrConcat_813_StrConcat (  struct StrConcat_814  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_813 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_405   into_dash_iter816 (    struct StrConcat_814  dref1097 ) {
    return ( (struct StrConcatIter_405) { .f_left = ( (  chars809 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars749 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_405   chars815 (    struct StrConcat_814  self1108 ) {
    return ( (  into_dash_iter816 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   into_dash_iter812 (    struct StrConcat_813  dref1097 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars815 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars754 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_821 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_821 StrConcat_821_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_821 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_820 {
    struct StrConcat_821  field0;
    char  field1;
};

static struct StrConcat_820 StrConcat_820_StrConcat (  struct StrConcat_821  field0 ,  char  field1 ) {
    return ( struct StrConcat_820 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_819 {
    const char*  field0;
    struct StrConcat_820  field1;
};

static struct StrConcat_819 StrConcat_819_StrConcat (  const char*  field0 ,  struct StrConcat_820  field1 ) {
    return ( struct StrConcat_819 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_818 {
    struct StrConcat_819  field0;
    char  field1;
};

static struct StrConcat_818 StrConcat_818_StrConcat (  struct StrConcat_819  field0 ,  char  field1 ) {
    return ( struct StrConcat_818 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str824 (    struct StrConcat_821  self1102 ) {
    struct StrConcat_821  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str823 (    struct StrConcat_820  self1102 ) {
    struct StrConcat_820  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str824 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str822 (    struct StrConcat_819  self1102 ) {
    struct StrConcat_819  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str823 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str817 (    struct StrConcat_818  self1102 ) {
    struct StrConcat_818  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str822 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_827 {
    const char*  field0;
    struct StrConcat_794  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  const char*  field0 ,  struct StrConcat_794  field1 ) {
    return ( struct StrConcat_827 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_826 {
    struct StrConcat_827  field0;
    char  field1;
};

static struct StrConcat_826 StrConcat_826_StrConcat (  struct StrConcat_827  field0 ,  char  field1 ) {
    return ( struct StrConcat_826 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str830 (    struct StrConcat_795  self1102 ) {
    struct StrConcat_795  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str829 (    struct StrConcat_794  self1102 ) {
    struct StrConcat_794  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str830 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str828 (    struct StrConcat_827  self1102 ) {
    struct StrConcat_827  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str829 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str825 (    struct StrConcat_826  self1102 ) {
    struct StrConcat_826  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str828 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_834 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_834 StrConcat_834_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
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

static  enum Unit_13   print_dash_str836 (    struct StrConcat_834  self1102 ) {
    struct StrConcat_834  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str835 (    struct StrConcat_833  self1102 ) {
    struct StrConcat_833  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str836 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str831 (    struct StrConcat_832  self1102 ) {
    struct StrConcat_832  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str835 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_839 {
    const char*  field0;
    struct StrConcat_821  field1;
};

static struct StrConcat_839 StrConcat_839_StrConcat (  const char*  field0 ,  struct StrConcat_821  field1 ) {
    return ( struct StrConcat_839 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_838 {
    struct StrConcat_839  field0;
    char  field1;
};

static struct StrConcat_838 StrConcat_838_StrConcat (  struct StrConcat_839  field0 ,  char  field1 ) {
    return ( struct StrConcat_838 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str840 (    struct StrConcat_839  self1102 ) {
    struct StrConcat_839  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str824 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str837 (    struct StrConcat_838  self1102 ) {
    struct StrConcat_838  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str840 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_847 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_847 StrConcat_847_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_847 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_846 {
    struct StrConcat_847  field0;
    char  field1;
};

static struct StrConcat_846 StrConcat_846_StrConcat (  struct StrConcat_847  field0 ,  char  field1 ) {
    return ( struct StrConcat_846 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_845 {
    struct StrConcat_846  field0;
    uint8_t  field1;
};

static struct StrConcat_845 StrConcat_845_StrConcat (  struct StrConcat_846  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_845 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_844 {
    struct StrConcat_845  field0;
    char  field1;
};

static struct StrConcat_844 StrConcat_844_StrConcat (  struct StrConcat_845  field0 ,  char  field1 ) {
    return ( struct StrConcat_844 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_843 {
    struct StrConcat_844  field0;
    uint8_t  field1;
};

static struct StrConcat_843 StrConcat_843_StrConcat (  struct StrConcat_844  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_843 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_842 {
    struct StrConcat_843  field0;
    char  field1;
};

static struct StrConcat_842 StrConcat_842_StrConcat (  struct StrConcat_843  field0 ,  char  field1 ) {
    return ( struct StrConcat_842 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str852 (    struct StrConcat_847  self1102 ) {
    struct StrConcat_847  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str757 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str851 (    struct StrConcat_846  self1102 ) {
    struct StrConcat_846  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str852 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str850 (    struct StrConcat_845  self1102 ) {
    struct StrConcat_845  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str851 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str757 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str849 (    struct StrConcat_844  self1102 ) {
    struct StrConcat_844  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str850 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str848 (    struct StrConcat_843  self1102 ) {
    struct StrConcat_843  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str849 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str757 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str841 (    struct StrConcat_842  self1102 ) {
    struct StrConcat_842  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str848 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_856 {
    struct StrConcat_776  field0;
    char  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_776  field0 ,  char  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_855 {
    struct StrConcat_856  field0;
    uint32_t  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  struct StrConcat_856  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_854 {
    struct StrConcat_855  field0;
    char  field1;
};

static struct StrConcat_854 StrConcat_854_StrConcat (  struct StrConcat_855  field0 ,  char  field1 ) {
    return ( struct StrConcat_854 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str859 (    struct StrConcat_776  self1102 ) {
    struct StrConcat_776  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str755 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str858 (    struct StrConcat_856  self1102 ) {
    struct StrConcat_856  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str859 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str857 (    struct StrConcat_855  self1102 ) {
    struct StrConcat_855  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str858 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str755 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str853 (    struct StrConcat_854  self1102 ) {
    struct StrConcat_854  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str857 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_372   chars860 (    struct StrConcat_760  self1108 ) {
    return ( (  into_dash_iter759 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_379   chars861 (    struct StrConcat_776  self1108 ) {
    return ( (  into_dash_iter775 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_383   chars862 (    struct StrConcat_778  self1108 ) {
    return ( (  into_dash_iter777 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   chars863 (    struct StrConcat_804  self1108 ) {
    return ( (  into_dash_iter803 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_398   chars864 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter811 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   chars865 (    struct StrConcat_813  self1108 ) {
    return ( (  into_dash_iter812 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_473   chars866 (    struct TakeWhile_473  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_482   chars867 (    struct TakeWhile_482  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_477   chars868 (    struct TakeWhile_477  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_484   chars869 (    struct TakeWhile_484  self1193 ) {
    return (  self1193 );
}

struct Tuple2_873 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_873 Tuple2_873_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_873 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq870 (    struct TakeWhile_482  l1203 ,    char  r1205 ) {
    struct TakeWhile_482  temp871 = ( (  chars867 ) ( (  l1203 ) ) );
    struct TakeWhile_482 *  l1206 = ( &temp871 );
    struct AppendIter_376  temp872 = ( (  chars750 ) ( (  r1205 ) ) );
    struct AppendIter_376 *  r1207 = ( &temp872 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next492 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next418 ) ( (  r1207 ) ) );
        struct Tuple2_873  dref1210 = ( ( Tuple2_873_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  int32_t   char_dash_i32874 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed249 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8875 (    char  c1223 ) {
    return ( (  cast194 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char876 (    int32_t  i1226 ) {
    return ( (  cast197 ) ( (  i1226 ) ) );
}

static  bool   eq877 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp878 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp75 ) ( ( (  char_dash_i32874 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32874 ) ( (  r1246 ) ) ) ) );
}

static  bool   unreachable879 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   unreachable880 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   panic881 (    struct StrConcat_820  errmsg1254 ) {
    ( (  print_dash_str817 ) ( ( ( StrConcat_818_StrConcat ) ( ( ( StrConcat_819_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic882 (    struct StrConcat_794  errmsg1254 ) {
    ( (  print_dash_str825 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic883 (    struct StrConcat_834  errmsg1254 ) {
    ( (  print_dash_str831 ) ( ( ( StrConcat_832_StrConcat ) ( ( ( StrConcat_833_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic884 (    const char*  errmsg1254 ) {
    ( (  print_dash_str823 ) ( ( ( StrConcat_820_StrConcat ) ( ( ( StrConcat_821_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic885 (    struct StrConcat_821  errmsg1254 ) {
    ( (  print_dash_str837 ) ( ( ( StrConcat_838_StrConcat ) ( ( ( StrConcat_839_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   panic_prime_886 (    const char*  errmsg1257 ) {
    ( (  print_dash_str823 ) ( ( ( StrConcat_820_StrConcat ) ( ( ( StrConcat_821_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   assert887 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str823 ) ( ( ( StrConcat_820_StrConcat ) ( ( ( StrConcat_821_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail888 (    struct Maybe_265  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_265  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_265_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined126 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_265_Just_t ) {
        return ( dref1270 .stuff .Maybe_265_Just_s .field0 );
    }
}

static  struct DynStr_129   or_dash_fail889 (    struct Maybe_315  x1267 ,    struct StrConcat_820  errmsg1269 ) {
    struct Maybe_315  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_315_None_t ) {
        ( (  panic881 ) ( (  errmsg1269 ) ) );
        return ( (  undefined128 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_315_Just_t ) {
        return ( dref1270 .stuff .Maybe_315_Just_s .field0 );
    }
}

struct Maybe_891 {
    enum {
        Maybe_891_None_t,
        Maybe_891_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53  field0;
        } Maybe_891_Just_s;
    } stuff;
};

static struct Maybe_891 Maybe_891_Just (  struct Cell_53  field0 ) {
    return ( struct Maybe_891 ) { .tag = Maybe_891_Just_t, .stuff = { .Maybe_891_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53   or_dash_fail890 (    struct Maybe_891  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_891  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_891_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_891_Just_t ) {
        return ( dref1270 .stuff .Maybe_891_Just_s .field0 );
    }
}

struct Maybe_893 {
    enum {
        Maybe_893_None_t,
        Maybe_893_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_893_Just_s;
    } stuff;
};

static struct Maybe_893 Maybe_893_Just (  uint8_t  field0 ) {
    return ( struct Maybe_893 ) { .tag = Maybe_893_Just_t, .stuff = { .Maybe_893_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail892 (    struct Maybe_893  x1267 ,    struct StrConcat_794  errmsg1269 ) {
    struct Maybe_893  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_893_None_t ) {
        ( (  panic882 ) ( (  errmsg1269 ) ) );
        return ( (  undefined141 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_893_Just_t ) {
        return ( dref1270 .stuff .Maybe_893_Just_s .field0 );
    }
}

struct Maybe_895 {
    enum {
        Maybe_895_None_t,
        Maybe_895_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53 *  field0;
        } Maybe_895_Just_s;
    } stuff;
};

static struct Maybe_895 Maybe_895_Just (  struct Cell_53 *  field0 ) {
    return ( struct Maybe_895 ) { .tag = Maybe_895_Just_t, .stuff = { .Maybe_895_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53 *   or_dash_fail894 (    struct Maybe_895  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_895  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_895_None_t ) {
        ( (  panic884 ) ( (  errmsg1269 ) ) );
        return ( (  undefined150 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_895_Just_t ) {
        return ( dref1270 .stuff .Maybe_895_Just_s .field0 );
    }
}

struct Maybe_897 {
    enum {
        Maybe_897_None_t,
        Maybe_897_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_742  field0;
        } Maybe_897_Just_s;
    } stuff;
};

static struct Maybe_897 Maybe_897_Just (  struct Cursor_742  field0 ) {
    return ( struct Maybe_897 ) { .tag = Maybe_897_Just_t, .stuff = { .Maybe_897_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_742   or_dash_else896 (    struct Maybe_897  self1274 ,    struct Cursor_742  alt1276 ) {
    struct Maybe_897  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_897_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_897_Just_t ) {
        return ( dref1277 .stuff .Maybe_897_Just_s .field0 );
    }
}

static  struct Slice_279   empty898 (  ) {
    return ( (struct Slice_279) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty899 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr258 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr900 (    struct Slice_279  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1303 = ( (  offset_dash_ptr154 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

static  struct Cell_53 *   get_dash_ptr901 (    struct Slice_543  slice1300 ,    size_t  i1302 ) {
    if ( ( (  cmp9 ( (  i1302 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1302 ) , ( (  slice1300 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1302 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1300 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_53 *  elem_dash_ptr1303 = ( (  offset_dash_ptr160 ) ( ( (  slice1300 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1302 ) ) ) ) );
    return (  elem_dash_ptr1303 );
}

struct Slice_903 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_265   try_dash_get902 (    struct Slice_903  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    }
    const char* *  elem_dash_ptr1309 = ( (  offset_dash_ptr152 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_265_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  struct Maybe_891   try_dash_get904 (    struct Slice_543  slice1306 ,    size_t  i1308 ) {
    if ( ( (  cmp9 ( (  i1308 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1308 ) , ( (  slice1306 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_891) { .tag = Maybe_891_None_t } );
    }
    struct Cell_53 *  elem_dash_ptr1309 = ( (  offset_dash_ptr160 ) ( ( (  slice1306 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1308 ) ) ) ) );
    return ( ( Maybe_891_Just ) ( ( * (  elem_dash_ptr1309 ) ) ) );
}

static  const char*   get905 (    struct Slice_903  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail888 ) ( ( (  try_dash_get902 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_53   get906 (    struct Slice_543  slice1312 ,    size_t  i1314 ) {
    return ( (  or_dash_fail890 ) ( ( (  try_dash_get904 ) ( (  slice1312 ) ,  (  i1314 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1314 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1312 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set907 (    struct Slice_279  slice1317 ,    size_t  i1319 ,    struct List_3  x1321 ) {
    struct List_3 *  ep1322 = ( (  get_dash_ptr900 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set908 (    struct Slice_5  slice1317 ,    size_t  i1319 ,    char  x1321 ) {
    char *  ep1322 = ( (  get_dash_ptr30 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set909 (    struct Slice_543  slice1317 ,    size_t  i1319 ,    struct Cell_53  x1321 ) {
    struct Cell_53 *  ep1322 = ( (  get_dash_ptr901 ) ( (  slice1317 ) ,  (  i1319 ) ) );
    (*  ep1322 ) = (  x1321 );
    return ( Unit_13_Unit );
}

static  struct SliceAddressIter_596   addresses910 (    struct Slice_279  slice1357 ) {
    return ( (struct SliceAddressIter_596) { .f_slice = (  slice1357 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam555 (   struct env555 env ,    struct Tuple2_347  dref1371 ) {
    return ( (  set907 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to911 (    struct Slice_279  src1368 ,    struct Slice_279  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic883 ) ( ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env555 envinst555 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each554 ) ( ( (  zip452 ) ( (  src1368 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv555){ .fun = lam555, .env = envinst555 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam563 (   struct env563 env ,    struct Tuple2_353  dref1371 ) {
    return ( (  set908 ) ( ( env.dest1370 ) ,  ( (  i32_dash_size268 ) ( ( dref1371 .field1 ) ) ) ,  ( dref1371 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to912 (    struct Slice_5  src1368 ,    struct Slice_5  dest1370 ) {
    if ( (  cmp9 ( ( (  src1368 ) .f_count ) , ( (  dest1370 ) .f_count ) ) == 2 ) ) {
        ( (  panic883 ) ( ( ( StrConcat_834_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1368 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1370 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env563 envinst563 = {
        .dest1370 =  dest1370 ,
    };
    ( (  for_dash_each562 ) ( ( (  zip453 ) ( (  src1368 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv563){ .fun = lam563, .env = envinst563 } ) ) );
    return ( Unit_13_Unit );
}

static  const char*   elem_dash_get913 (    struct Slice_903  self1376 ,    size_t  idx1378 ) {
    return ( (  get905 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  struct Cell_53   elem_dash_get914 (    struct Slice_543  self1376 ,    size_t  idx1378 ) {
    return ( (  get906 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  char   elem_dash_get915 (    struct Slice_5  self1376 ,    size_t  idx1378 ) {
    return ( (  get317 ) ( (  self1376 ) ,  (  idx1378 ) ) );
}

static  enum Unit_13   lam542 (   struct env542 env ,    int32_t  i1407 ) {
    return ( (  set909 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get914 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map916 (    struct Slice_543  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env542 envinst542 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each541 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv542){ .fun = lam542, .env = envinst542 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam547 (   struct env547 env ,    int32_t  i1407 ) {
    return ( (  set909 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get914 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map917 (    struct Slice_543  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env547 envinst547 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each546 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv547){ .fun = lam547, .env = envinst547 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam602 (   struct env602 env ,    int32_t  i1407 ) {
    return ( (  set909 ) ( ( env.s1403 ) ,  ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ,  ( ( env.fun1405 ) ( (  elem_dash_get914 ( ( env.s1403 ) , ( (  i32_dash_size268 ) ( (  i1407 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map918 (    struct Slice_543  s1403 ,    struct Cell_53 (*  fun1405 )(    struct Cell_53  ) ) {
    struct env602 envinst602 = {
        .s1403 =  s1403 ,
        .fun1405 =  fun1405 ,
    };
    ( (  for_dash_each601 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1403 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv602){ .fun = lam602, .env = envinst602 } ) ) );
    return ( Unit_13_Unit );
}

static  enum CAllocator_4   idc919 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_279   allocate920 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize162 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1418 = ( (  cast_dash_ptr204 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_5   allocate921 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    char *  ptr1418 = ( (  cast_dash_ptr207 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  struct Slice_543   allocate922 (    enum CAllocator_4  dref1414 ,    size_t  count1416 ) {
    if (!(  dref1414 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1417 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    struct Cell_53 *  ptr1418 = ( (  cast_dash_ptr214 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1417 ) , (  count1416 ) ) ) ) ) ) );
    return ( (struct Slice_543) { .f_ptr = (  ptr1418 ) , .f_count = (  count1416 ) } );
}

static  enum Unit_13   free923 (    enum CAllocator_4  dref1420 ,    struct Slice_279  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr205 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free924 (    enum CAllocator_4  dref1420 ,    struct Slice_5  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr209 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_926 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free925 (    enum CAllocator_4  dref1420 ,    struct Slice_926  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free927 (    enum CAllocator_4  dref1420 ,    struct Slice_543  slice1422 ) {
    if (!(  dref1420 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr222 ) ( ( (  slice1422 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr928 (    struct Array_137 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1463 = ( ( (  cast191 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  char *   get_dash_ptr929 (    struct Array_181 *  arr1459 ,    size_t  i1462 ) {
    if ( ( (  cmp9 ( (  i1462 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1462 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic646 ) ( ( ( StrConcat_647_StrConcat ) ( ( ( StrConcat_648_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1462 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1463 = ( ( (  cast196 ) ( (  arr1459 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1463 ) ,  ( (int64_t ) (  i1462 ) ) ) );
}

static  enum Unit_13   set930 (    struct Array_137 *  arr1472 ,    size_t  i1475 ,    uint8_t  e1477 ) {
    uint8_t *  p1478 = ( (  get_dash_ptr928 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set931 (    struct Array_181 *  arr1472 ,    size_t  i1475 ,    char  e1477 ) {
    char *  p1478 = ( (  get_dash_ptr929 ) ( (  arr1472 ) ,  (  i1475 ) ) );
    (*  p1478 ) = (  e1477 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice932 (    struct Array_181 *  arr1481 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast196 ) ( (  arr1481 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace933 (    char  c1532 ) {
    return ( ( (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1532 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace934 (    char  c1535 ) {
    return ( ! ( (  is_dash_whitespace933 ) ( (  c1535 ) ) ) );
}

static  struct LineIter_300   lines935 (    struct DynStr_129  s1542 ) {
    return ( (struct LineIter_300) { .f_og = (  s1542 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit936 (    char  c1571 ) {
    return ( (  cmp75 ( ( (  char_dash_i32874 ) ( (  c1571 ) ) ) , ( (  char_dash_i32874 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp75 ( ( (  char_dash_i32874 ) ( (  c1571 ) ) ) , ( (  char_dash_i32874 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_328   parse_dash_digit937 (    char  c1574 ) {
    if ( ( (  is_dash_digit936 ) ( (  c1574 ) ) ) ) {
        return ( ( Maybe_328_Just ) ( (  op_dash_sub83 ( ( (  char_dash_i32874 ) ( (  c1574 ) ) ) , ( (  char_dash_i32874 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
}

static  struct Maybe_674   sequence_dash_maybe939 (    char  e1580 ,    struct Maybe_674  b1582 ) {
    struct Maybe_674  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_674_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    else if ( dref1583.tag == Maybe_674_Just_t ) {
        struct Maybe_328  dref1585 = ( (  parse_dash_digit937 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
        }
        else if ( dref1585.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_674_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_674_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_674   parse_dash_int938 (    struct TakeWhile_473  s1577 ) {
    struct TakeWhile_473  cs1587 = ( (  chars866 ) ( (  s1577 ) ) );
    struct Maybe_297  dref1588 = ( (  head724 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_297_Just_t ) {
        return ( (  reduce673 ) ( (  cs1587 ) ,  ( ( Maybe_674_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe939 ) ) );
    }
    else if ( dref1588.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
}

static  struct Maybe_674   sequence_dash_maybe941 (    char  e1580 ,    struct Maybe_674  b1582 ) {
    struct Maybe_674  dref1583 = (  b1582 );
    if ( dref1583.tag == Maybe_674_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    else if ( dref1583.tag == Maybe_674_Just_t ) {
        struct Maybe_328  dref1585 = ( (  parse_dash_digit937 ) ( (  e1580 ) ) );
        if ( dref1585.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
        }
        else if ( dref1585.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_674_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1583 .stuff .Maybe_674_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1585 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_674   parse_dash_int940 (    struct TakeWhile_482  s1577 ) {
    struct TakeWhile_482  cs1587 = ( (  chars867 ) ( (  s1577 ) ) );
    struct Maybe_297  dref1588 = ( (  head728 ) ( (  cs1587 ) ) );
    if ( dref1588.tag == Maybe_297_Just_t ) {
        return ( (  reduce682 ) ( (  cs1587 ) ,  ( ( Maybe_674_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe941 ) ) );
    }
    else if ( dref1588.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr942 (    struct List_280 *  list1593 ,    size_t  i1595 ) {
    if ( ( (  cmp9 ( (  i1595 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1595 ) , ( ( * (  list1593 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1595 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1593 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr900 ) ( ( ( * (  list1593 ) ) .f_elements ) ,  (  i1595 ) ) );
}

static  struct List_3   get943 (    struct List_280 *  list1603 ,    size_t  i1605 ) {
    return ( * ( (  get_dash_ptr942 ) ( (  list1603 ) ,  (  i1605 ) ) ) );
}

static  struct Maybe_297   try_dash_get944 (    struct List_3 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( ( (  get7 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  struct Maybe_314   try_dash_get945 (    struct List_280 *  list1608 ,    size_t  i1610 ) {
    if ( (  cmp9 ( (  i1610 ) , ( ( * (  list1608 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    return ( ( Maybe_314_Just ) ( ( (  get943 ) ( (  list1608 ) ,  (  i1610 ) ) ) ) );
}

static  enum Unit_13   set946 (    struct List_280 *  list1613 ,    size_t  i1615 ,    struct List_3  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set907 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set947 (    struct List_3 *  list1613 ,    size_t  i1615 ,    char  elem1617 ) {
    if ( ( (  cmp9 ( (  i1615 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1615 ) , ( ( * (  list1613 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1615 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1613 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set908 ) ( ( ( * (  list1613 ) ) .f_elements ) ,  (  i1615 ) ,  (  elem1617 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_280   mk948 (    enum CAllocator_4  al1623 ) {
    struct Slice_279  elements1624 = ( (  empty898 ) ( ) );
    return ( (struct List_280) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk949 (    enum CAllocator_4  al1623 ) {
    struct Slice_5  elements1624 = ( (  empty899 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1623 ) , .f_elements = (  elements1624 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free950 (    struct List_3 *  list1627 ) {
    ( (  free924 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free951 (    struct List_280 *  list1627 ) {
    ( (  free923 ) ( ( ( * (  list1627 ) ) .f_al ) ,  ( ( * (  list1627 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam518 (   struct env518 env ,    struct Tuple2_347  dref1635 ) {
    return ( (  set907 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full532 (   struct env532 env ,    struct List_280 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate920 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_279  new_dash_slice1634 = ( (  allocate920 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env518 envinst518 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each517 ) ( ( (  zip452 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv518){ .fun = lam518, .env = envinst518 } ) ) );
            ( (  free923 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam522 (   struct env522 env ,    struct Tuple2_353  dref1635 ) {
    return ( (  set908 ) ( ( env.new_dash_slice1634 ) ,  ( (  i32_dash_size268 ) ( ( dref1635 .field1 ) ) ) ,  ( dref1635 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full305 (   struct env305 env ,    struct List_3 *  list1633 ) {
    if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1633 ) .f_elements = ( (  allocate921 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( env.starting_dash_size1628 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1633 ) ) .f_count ) , ( ( ( * (  list1633 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1634 = ( (  allocate921 ) ( ( ( * (  list1633 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1633 ) ) .f_count ) , ( env.growth_dash_factor1629 ) ) ) ) );
            struct env522 envinst522 = {
                .new_dash_slice1634 =  new_dash_slice1634 ,
            };
            ( (  for_dash_each521 ) ( ( (  zip453 ) ( ( ( * (  list1633 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv522){ .fun = lam522, .env = envinst522 } ) ) );
            ( (  free924 ) ( ( ( * (  list1633 ) ) .f_al ) ,  ( ( * (  list1633 ) ) .f_elements ) ) );
            (*  list1633 ) .f_elements = (  new_dash_slice1634 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add531 (   struct env531 env ,    struct List_280 *  list1640 ,    struct List_3  elem1642 ) {
    struct funenv532  temp952 = ( (struct funenv532){ .fun = grow_dash_if_dash_full532, .env =  env.envinst532  } );
    ( temp952.fun ( temp952.env ,  (  list1640 ) ) );
    ( (  set907 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add304 (   struct env304 env ,    struct List_3 *  list1640 ,    char  elem1642 ) {
    struct funenv305  temp953 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp953.fun ( temp953.env ,  (  list1640 ) ) );
    ( (  set908 ) ( ( ( * (  list1640 ) ) .f_elements ) ,  ( ( * (  list1640 ) ) .f_count ) ,  (  elem1642 ) ) );
    (*  list1640 ) .f_count = (  op_dash_add93 ( ( ( * (  list1640 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env954 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env531 envinst531;
    struct env532 envinst532;
};

static  enum Unit_13   insert954 (   struct env954 env ,    struct List_280 *  list1645 ,    size_t  i1647 ,    struct List_3  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv531  temp955 = ( (struct funenv531){ .fun = add531, .env =  env.envinst531  } );
        ( temp955.fun ( temp955.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv532  temp956 = ( (struct funenv532){ .fun = grow_dash_if_dash_full532, .env =  env.envinst532  } );
    ( temp956.fun ( temp956.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set907 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get943 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set907 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env957 {
    ;
    ;
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

static  enum Unit_13   insert957 (   struct env957 env ,    struct List_3 *  list1645 ,    size_t  i1647 ,    char  elem1649 ) {
    if ( ( (  cmp9 ( (  i1647 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1647 ) , ( ( * (  list1645 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1647 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1645 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv304  temp958 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
        ( temp958.fun ( temp958.env ,  (  list1645 ) ,  (  elem1649 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv305  temp959 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp959.fun ( temp959.env ,  (  list1645 ) ) );
    size_t  ii1650 = (  op_dash_sub94 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1650 ) , (  i1647 ) ) != 0 ) ) {
        ( (  set908 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1645 ) ,  (  ii1650 ) ) ) ) );
        if ( (  eq45 ( (  ii1650 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1650 = (  op_dash_sub94 ( (  ii1650 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set908 ) ( ( ( * (  list1645 ) ) .f_elements ) ,  (  i1647 ) ,  (  elem1649 ) ) );
    (*  list1645 ) .f_count = (  op_dash_add93 ( ( ( * (  list1645 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env960 {
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam559 (   struct env559 env ,    struct Tuple2_347  dref1656 ) {
    return ( (  set946 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove960 (   struct env960 env ,    struct List_280 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env559 envinst559 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each558 ) ( ( (  drop355 ) ( ( (  zip454 ) ( ( * (  list1653 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv559){ .fun = lam559, .env = envinst559 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free923 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty898 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_279  new_dash_slice1661 = ( (  allocate920 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to911 ) ( ( (  subslice283 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free923 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
    return ( Unit_13_Unit );
}

struct env961 {
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam567 (   struct env567 env ,    struct Tuple2_353  dref1656 ) {
    return ( (  set947 ) ( ( env.list1653 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1656 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1656 .field0 ) ) );
}

static  enum Unit_13   remove961 (   struct env961 env ,    struct List_3 *  list1653 ,    size_t  i1655 ) {
    if ( ( (  cmp9 ( (  i1655 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1655 ) , ( ( * (  list1653 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1655 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env567 envinst567 = {
        .list1653 =  list1653 ,
    };
    ( (  for_dash_each566 ) ( ( (  drop357 ) ( ( (  zip455 ) ( ( * (  list1653 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1655 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv567){ .fun = lam567, .env = envinst567 } ) ) );
    (*  list1653 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1659 = ( ( ( * (  list1653 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  capacity1659 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1653 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free924 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
            (*  list1653 ) .f_elements = ( (  empty899 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1660 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1653 ) ) .f_count ) , ( env.shrink_dash_factor1630 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1630 ) ) );
        struct Slice_5  new_dash_slice1661 = ( (  allocate921 ) ( ( ( * (  list1653 ) ) .f_al ) ,  (  new_dash_size1660 ) ) );
        ( (  copy_dash_to912 ) ( ( (  subslice292 ) ( ( ( * (  list1653 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1653 ) ) .f_count ) ) ) ,  (  new_dash_slice1661 ) ) );
        ( (  free924 ) ( ( ( * (  list1653 ) ) .f_al ) ,  ( ( * (  list1653 ) ) .f_elements ) ) );
        (*  list1653 ) .f_elements = (  new_dash_slice1661 );
    }
    return ( Unit_13_Unit );
}

struct funenv961 {
    enum Unit_13  (*fun) (  struct env961  ,    struct List_3 *  ,    size_t  );
    struct env961 env;
};

struct env962 {
    ;
    ;
    ;
    ;
    struct env961 envinst961;
    ;
    ;
};

static  enum Unit_13   pop962 (   struct env962 env ,    struct List_3 *  list1675 ) {
    if ( (  eq45 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic884 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv961  temp963 = ( (struct funenv961){ .fun = remove961, .env =  env.envinst961  } );
    return ( temp963.fun ( temp963.env ,  (  list1675 ) ,  (  op_dash_sub94 ( ( ( * (  list1675 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam526 (   struct env526 env ,    char  x1685 ) {
    struct funenv304  temp964 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp964.fun ( temp964.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all303 (   struct env303 env ,    struct List_3 *  list1681 ,    struct DynStr_129  it1683 ) {
    struct env526 envinst526 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each525 ) ( (  it1683 ) ,  ( (struct funenv526){ .fun = lam526, .env = envinst526 } ) ) );
    return ( Unit_13_Unit );
}

struct env965 {
    ;
    struct env531 envinst531;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam530 (   struct env530 env ,    struct List_3  x1685 ) {
    struct funenv531  temp966 = ( (struct funenv531){ .fun = add531, .env =  env.envinst531  } );
    return ( temp966.fun ( temp966.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all965 (   struct env965 env ,    struct List_280 *  list1681 ,    struct Map_299  it1683 ) {
    struct env530 envinst530 = {
        .list1681 =  list1681 ,
        .envinst531 = env.envinst531 ,
    };
    ( (  for_dash_each529 ) ( (  it1683 ) ,  ( (struct funenv530){ .fun = lam530, .env = envinst530 } ) ) );
    return ( Unit_13_Unit );
}

struct env967 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam571 (   struct env571 env ,    char  x1685 ) {
    struct funenv304  temp968 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp968.fun ( temp968.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all967 (   struct env967 env ,    struct List_3 *  list1681 ,    struct List_3 *  it1683 ) {
    struct env571 envinst571 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each570 ) ( (  it1683 ) ,  ( (struct funenv571){ .fun = lam571, .env = envinst571 } ) ) );
    return ( Unit_13_Unit );
}

struct env969 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam575 (   struct env575 env ,    char  x1685 ) {
    struct funenv304  temp970 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp970.fun ( temp970.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all969 (   struct env969 env ,    struct List_3 *  list1681 ,    struct Slice_5  it1683 ) {
    struct env575 envinst575 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each574 ) ( (  it1683 ) ,  ( (struct funenv575){ .fun = lam575, .env = envinst575 } ) ) );
    return ( Unit_13_Unit );
}

struct env971 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam579 (   struct env579 env ,    char  x1685 ) {
    struct funenv304  temp972 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp972.fun ( temp972.env ,  ( env.list1681 ) ,  (  x1685 ) ) );
}

static  enum Unit_13   add_dash_all971 (   struct env971 env ,    struct List_3 *  list1681 ,    struct TakeWhile_475  it1683 ) {
    struct env579 envinst579 = {
        .list1681 =  list1681 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each578 ) ( (  it1683 ) ,  ( (struct funenv579){ .fun = lam579, .env = envinst579 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim973 (    struct List_3 *  l1688 ,    size_t  new_dash_count1690 ) {
    (*  l1688 ) .f_count = (  new_dash_count1690 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list302 (   struct env302 env ,    struct DynStr_129  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_3  temp974 = ( (  mk949 ) ( (  al1695 ) ) );
    struct List_3 *  l1696 = ( &temp974 );
    struct funenv303  temp975 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
    ( temp975.fun ( temp975.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

struct funenv965 {
    enum Unit_13  (*fun) (  struct env965  ,    struct List_280 *  ,    struct Map_299  );
    struct env965 env;
};

struct env976 {
    ;
    ;
    ;
    ;
    struct env965 envinst965;
    ;
};

static  struct List_280   to_dash_list976 (   struct env976 env ,    struct Map_299  it1693 ,    enum CAllocator_4  al1695 ) {
    struct List_280  temp977 = ( (  mk948 ) ( (  al1695 ) ) );
    struct List_280 *  l1696 = ( &temp977 );
    struct funenv965  temp978 = ( (struct funenv965){ .fun = add_dash_all965, .env =  env.envinst965  } );
    ( temp978.fun ( temp978.env ,  (  l1696 ) ,  (  it1693 ) ) );
    return ( * (  l1696 ) );
}

static  struct Slice_5   to_dash_slice979 (    struct List_3  l1699 ) {
    char *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct Slice_279   to_dash_slice980 (    struct List_280  l1699 ) {
    struct List_3 *  ptr1700 = ( ( (  l1699 ) .f_elements ) .f_ptr );
    return ( (struct Slice_279) { .f_ptr = (  ptr1700 ) , .f_count = ( (  l1699 ) .f_count ) } );
}

static  struct SliceAddressIter_596   addresses981 (    struct List_280  l1703 ) {
    return ( (  addresses910 ) ( ( (  to_dash_slice980 ) ( (  l1703 ) ) ) ) );
}

static  size_t   size982 (    struct List_3 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   size983 (    struct List_280 *  l1706 ) {
    return ( ( * (  l1706 ) ) .f_count );
}

static  size_t   clamp_dash_uint984 (    int32_t  self1724 ) {
    if ( (  cmp75 ( (  self1724 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size272 ) ( ( (uint32_t ) (  self1724 ) ) ) );
    }
}

static  struct Maybe_893   hex_dash_digit985 (    char  c1734 ) {
    if ( ( (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_893_Just ) ( (  op_dash_sub92 ( ( (  char_dash_u8875 ) ( (  c1734 ) ) ) , ( (  char_dash_u8875 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_893_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8875 ) ( (  c1734 ) ) ) , ( (  char_dash_u8875 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp878 ( (  c1734 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_893_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8875 ) ( (  c1734 ) ) ) , ( (  char_dash_u8875 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_893) { .tag = Maybe_893_None_t } );
}

static  uint32_t   lam987 (    char  c1739 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64275 ) ( ( (  or_dash_fail892 ) ( ( (  hex_dash_digit985 ) ( (  c1739 ) ) ) ,  ( ( StrConcat_794_StrConcat ) ( ( ( StrConcat_795_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1739 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam988 (    uint32_t  elem1741 ,    uint32_t  b1743 ) {
    return (  op_dash_add87 ( (  op_dash_mul89 ( (  b1743 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1741 ) ) );
}

static  uint32_t   from_dash_hex986 (    const char*  arr1737 ) {
    return ( (  reduce671 ) ( ( (  map334 ) ( (  arr1737 ) ,  (  lam987 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam988 ) ) );
}

static  struct Maybe_265   get989 (    const char*  s1777 ) {
    return ( (  from_dash_nullable_dash_c_dash_str264 ) ( ( ( getenv ) ( (  s1777 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor990 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor991 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to992 (    uint32_t  x1754 ,    uint32_t  y1756 ) {
    uint32_t  x1757 = (  op_dash_add87 ( (  x1754 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1758 = (  op_dash_add87 ( (  y1756 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str853 ) ( ( ( StrConcat_854_StrConcat ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_776_StrConcat ) ( ( "\x1b[" ) ,  (  y1758 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1757 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position993 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

struct Tuple2_995 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_995 Tuple2_995_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_995 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Tuple2_995   get_dash_dimensions994 (  ) {
    struct Winsize_177  temp996 = ( ( (  zeroed233 ) ( ) ) );
    struct Winsize_177 *  ws1762 = ( &temp996 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno109 ) ( ) ) ,  ( (  tiocgwinsz125 ) ( ) ) ,  (  ws1762 ) ) ) , (  op_dash_neg86 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_995_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_995_Tuple2 ) ( ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32271 ) ( ( ( * (  ws1762 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg997 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg998 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_609   query_dash_palette999 (  ) {
    struct Maybe_265  colorterm1778 = ( (  get989 ) ( ( "COLORTERM" ) ) );
    struct Maybe_265  dref1779 = (  colorterm1778 );
    if ( dref1779.tag == Maybe_265_Just_t ) {
        if ( ( (  eq877 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq877 ( ( dref1779 .stuff .Maybe_265_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_609_PaletteRGB );
        }
    }
    else if ( dref1779.tag == Maybe_265_None_t ) {
    }
    struct Maybe_265  dref1781 = ( (  get989 ) ( ( "TERM" ) ) );
    if ( dref1781.tag == Maybe_265_Just_t ) {
        if ( (  eq877 ( ( dref1781 .stuff .Maybe_265_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_609_Palette8 );
        }
    }
    else if ( dref1781.tag == Maybe_265_None_t ) {
    }
    return ( ColorPalette_609_Palette16 );
}

static  enum Unit_13   set_dash_fg81000 (    enum Color8_55  color1797 ) {
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

static  enum Unit_13   set_dash_fg161001 (    enum Color16_56  color1801 ) {
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

static  enum Unit_13   set_dash_bg81002 (    enum Color8_55  color1805 ) {
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

static  enum Unit_13   set_dash_bg161003 (    enum Color16_56  color1809 ) {
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

static  enum Unit_13   reset_dash_colors1004 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1005 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561006 (    uint8_t  color1815 ) {
    ( (  print_dash_str851 ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1815 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561007 (    uint8_t  color1818 ) {
    ( (  print_dash_str851 ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1818 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1008 (    struct RGB_57  c1838 ) {
    ( (  print_dash_str841 ) ( ( ( StrConcat_842_StrConcat ) ( ( ( StrConcat_843_StrConcat ) ( ( ( StrConcat_844_StrConcat ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1838 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1838 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1009 (    struct RGB_57  c1841 ) {
    ( (  print_dash_str841 ) ( ( ( StrConcat_842_StrConcat ) ( ( ( StrConcat_843_StrConcat ) ( ( ( StrConcat_844_StrConcat ) ( ( ( StrConcat_845_StrConcat ) ( ( ( StrConcat_846_StrConcat ) ( ( ( StrConcat_847_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1841 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1841 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1010 (    struct Color_54  c1859 ) {
    struct Color_54  dref1860 = (  c1859 );
    if ( dref1860.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg997 ) ( ) );
    }
    else if ( dref1860.tag == Color_54_Color8_t ) {
        ( (  set_dash_fg81000 ) ( ( dref1860 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color16_t ) {
        ( (  set_dash_fg161001 ) ( ( dref1860 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_Color256_t ) {
        ( (  set_dash_fg2561006 ) ( ( dref1860 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1860.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1008 ) ( ( dref1860 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1011 (    struct Color_54  c1867 ) {
    struct Color_54  dref1868 = (  c1867 );
    if ( dref1868.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg998 ) ( ) );
    }
    else if ( dref1868.tag == Color_54_Color8_t ) {
        ( (  set_dash_bg81002 ) ( ( dref1868 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color16_t ) {
        ( (  set_dash_bg161003 ) ( ( dref1868 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_Color256_t ) {
        ( (  set_dash_bg2561007 ) ( ( dref1868 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1868.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1009 ) ( ( dref1868 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1012 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam536 (   struct env536 env ,    char  c1924 ) {
    struct funenv304  temp1013 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1013.fun ( temp1013.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1012 (   struct env1012 env ,    struct StrBuilder_537 *  builder1920 ,    const char*  s1922 ) {
    struct env536 envinst536 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each535 ) ( ( (  chars749 ) ( (  s1922 ) ) ) ,  ( (struct funenv536){ .fun = lam536, .env = envinst536 } ) ) );
    return ( Unit_13_Unit );
}

struct env1014 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam583 (   struct env583 env ,    char  c1924 ) {
    struct funenv304  temp1015 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1015.fun ( temp1015.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1014 (   struct env1014 env ,    struct StrBuilder_537 *  builder1920 ,    struct TakeWhile_477  s1922 ) {
    struct env583 envinst583 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each582 ) ( ( (  chars868 ) ( (  s1922 ) ) ) ,  ( (struct funenv583){ .fun = lam583, .env = envinst583 } ) ) );
    return ( Unit_13_Unit );
}

struct env1016 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam587 (   struct env587 env ,    char  c1924 ) {
    struct funenv304  temp1017 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1017.fun ( temp1017.env ,  ( & ( ( * ( env.builder1920 ) ) .f_chars ) ) ,  (  c1924 ) ) );
}

static  enum Unit_13   write1016 (   struct env1016 env ,    struct StrBuilder_537 *  builder1920 ,    struct TakeWhile_484  s1922 ) {
    struct env587 envinst587 = {
        .builder1920 =  builder1920 ,
        .envinst304 = env.envinst304 ,
    };
    ( (  for_dash_each586 ) ( ( (  chars869 ) ( (  s1922 ) ) ) ,  ( (struct funenv587){ .fun = lam587, .env = envinst587 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char592 (   struct env592 env ,    struct StrBuilder_537 *  builder1927 ,    char  c1929 ) {
    struct funenv304  temp1018 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    ( temp1018.fun ( temp1018.env ,  ( & ( ( * (  builder1927 ) ) .f_chars ) ) ,  (  c1929 ) ) );
    return ( Unit_13_Unit );
}

struct funenv962 {
    enum Unit_13  (*fun) (  struct env962  ,    struct List_3 *  );
    struct env962 env;
};

struct env1019 {
    ;
    struct env962 envinst962;
    ;
};

static  enum Unit_13   pop1019 (   struct env1019 env ,    struct StrBuilder_537 *  sb1937 ) {
    struct funenv962  temp1020 = ( (struct funenv962){ .fun = pop962, .env =  env.envinst962  } );
    return ( temp1020.fun ( temp1020.env ,  ( & ( ( * (  sb1937 ) ) .f_chars ) ) ) );
}

static  size_t   count1021 (    struct StrBuilder_537 *  sb1940 ) {
    return ( ( ( * (  sb1940 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_537   mk1022 (    enum CAllocator_4  al1943 ) {
    return ( (struct StrBuilder_537) { .f_chars = ( (  mk949 ) ( (  al1943 ) ) ) } );
}

static  enum Unit_13   free1023 (    struct StrBuilder_537 *  builder1949 ) {
    ( (  free950 ) ( ( & ( ( * (  builder1949 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1012 {
    enum Unit_13  (*fun) (  struct env1012  ,    struct StrBuilder_537 *  ,    const char*  );
    struct env1012 env;
};

struct env1024 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1012 envinst1012;
    ;
    ;
    struct env592 envinst592;
};

static  const char*   mk_dash_const_dash_str1024 (   struct env1024 env ,    const char*  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_537  temp1025 = ( (  mk1022 ) ( (  al1965 ) ) );
    struct StrBuilder_537 *  sb1966 = ( &temp1025 );
    struct funenv1012  temp1026 = ( (struct funenv1012){ .fun = write1012, .env =  env.envinst1012  } );
    ( temp1026.fun ( temp1026.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv592  temp1027 = ( (struct funenv592){ .fun = write_dash_char592, .env =  env.envinst592  } );
    ( temp1027.fun ( temp1027.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str767 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1014 {
    enum Unit_13  (*fun) (  struct env1014  ,    struct StrBuilder_537 *  ,    struct TakeWhile_477  );
    struct env1014 env;
};

struct env1028 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1014 envinst1014;
    ;
    struct env592 envinst592;
};

static  const char*   mk_dash_const_dash_str1028 (   struct env1028 env ,    struct TakeWhile_477  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_537  temp1029 = ( (  mk1022 ) ( (  al1965 ) ) );
    struct StrBuilder_537 *  sb1966 = ( &temp1029 );
    struct funenv1014  temp1030 = ( (struct funenv1014){ .fun = write1014, .env =  env.envinst1014  } );
    ( temp1030.fun ( temp1030.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv592  temp1031 = ( (struct funenv592){ .fun = write_dash_char592, .env =  env.envinst592  } );
    ( temp1031.fun ( temp1031.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str767 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1016 {
    enum Unit_13  (*fun) (  struct env1016  ,    struct StrBuilder_537 *  ,    struct TakeWhile_484  );
    struct env1016 env;
};

struct env1032 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1016 envinst1016;
    ;
    struct env592 envinst592;
};

static  const char*   mk_dash_const_dash_str1032 (   struct env1032 env ,    struct TakeWhile_484  s1963 ,    enum CAllocator_4  al1965 ) {
    struct StrBuilder_537  temp1033 = ( (  mk1022 ) ( (  al1965 ) ) );
    struct StrBuilder_537 *  sb1966 = ( &temp1033 );
    struct funenv1016  temp1034 = ( (struct funenv1016){ .fun = write1016, .env =  env.envinst1016  } );
    ( temp1034.fun ( temp1034.env ,  (  sb1966 ) ,  (  s1963 ) ) );
    struct funenv592  temp1035 = ( (struct funenv592){ .fun = write_dash_char592, .env =  env.envinst592  } );
    ( temp1035.fun ( temp1035.env ,  (  sb1966 ) ,  ( (  nullchar320 ) ( ) ) ) );
    return ( ( (  cast185 ) ( ( ( ( (  as_dash_str767 ) ( (  sb1966 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  uint32_t   fst1036 (    struct Tuple2_995  dref2005 ) {
    return ( dref2005 .field0 );
}

static  uint32_t   snd1037 (    struct Tuple2_995  dref2008 ) {
    return ( dref2008 .field1 );
}

struct Maybe_1039 {
    enum {
        Maybe_1039_None_t,
        Maybe_1039_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1039_Just_s;
    } stuff;
};

static struct Maybe_1039 Maybe_1039_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1039 ) { .tag = Maybe_1039_Just_t, .stuff = { .Maybe_1039_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1038 (    struct Maybe_1039  m2012 ) {
    struct Maybe_1039  dref2013 = (  m2012 );
    if ( dref2013.tag == Maybe_1039_None_t ) {
        return ( false );
    }
    else if ( dref2013.tag == Maybe_1039_Just_t ) {
        return ( true );
    }
}

struct Visual_1043 {
    int32_t  field0;
};

static struct Visual_1043 Visual_1043_Visual (  int32_t  field0 ) {
    return ( struct Visual_1043 ) { .field0 = field0 };
};

struct Editor_1042 {
    bool  f_running;
    struct Cursor_742  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1043  f_goal_dash_x;
    struct List_280  f_current_dash_file;
    struct Maybe_265  f_filename;
    struct Mode_761  f_mode;
    struct Maybe_1039  f_anim;
    struct Maybe_897  f_selected;
};

struct env1041 {
    ;
    ;
    struct Editor_1042 *  ed2791;
};

struct funenv1041 {
    struct Maybe_297  (*fun) (  struct env1041  ,    struct List_3  );
    struct env1041 env;
};

static  struct Maybe_297   and_dash_maybe1040 (    struct Maybe_314  m2016 ,   struct funenv1041  fun2018 ) {
    struct Maybe_314  dref2019 = (  m2016 );
    if ( dref2019.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref2019.tag == Maybe_314_Just_t ) {
        struct funenv1041  temp1044 = (  fun2018 );
        return ( temp1044.fun ( temp1044.env ,  ( dref2019 .stuff .Maybe_314_Just_s .field0 ) ) );
    }
}

static  struct Maybe_50   fmap_dash_maybe1045 (    struct Maybe_297  x2023 ,    bool (*  fun2025 )(    char  ) ) {
    struct Maybe_297  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref2026.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_352   fmap_dash_maybe1046 (    struct Maybe_297  x2023 ,    struct Tuple2_353 (*  fun2025 )(    char  ) ) {
    struct Maybe_297  dref2026 = (  x2023 );
    if ( dref2026.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_352) { .tag = Maybe_352_None_t } );
    }
    else if ( dref2026.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_352_Just ) ( ( (  fun2025 ) ( ( dref2026 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  int32_t   maybe1047 (    struct Maybe_897  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_742  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_897  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_897_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_897_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1048 (    struct Maybe_897  x2030 ,    int32_t (*  fun2032 )(    struct Cursor_742  ) ,    int32_t  default2034 ) {
    return ( {  struct Maybe_897  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_897_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_897_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1049 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1050 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1051 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1052 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1053 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1054 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  bool   maybe1055 (    struct Maybe_297  x2030 ,    bool (*  fun2032 )(    char  ) ,    bool  default2034 ) {
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( (  fun2032 ) ( ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  int32_t   maybe1056 (    struct Maybe_297  x2030 ,   struct funenv312  fun2032 ,    int32_t  default2034 ) {
    struct funenv312  temp1057 = (  fun2032 );
    return ( {  struct Maybe_297  dref2035 = (  x2030 ) ; dref2035.tag == Maybe_297_Just_t ? ( temp1057.fun ( temp1057.env ,  ( dref2035 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default2034 ) ; } );
}

static  struct timespec   now1058 (  ) {
    struct timespec  temp1059 = ( (  undefined133 ) ( ) );
    struct timespec *  t2150 = ( &temp1059 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  t2150 ) ) );
    return ( * (  t2150 ) );
}

struct Duration_1061 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1060 (    struct Duration_1061  l2154 ,    struct Duration_1061  r2156 ) {
    enum Ordering_10  scmp2157 = ( (  cmp74 ) ( ( (  l2154 ) .f_secs ) ,  ( (  r2156 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2157 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2157 );
    }
    return ( (  cmp74 ) ( ( (  l2154 ) .f_nsecs ) ,  ( (  r2156 ) .f_nsecs ) ) );
}

static  struct Duration_1061   diff1062 (    struct timespec  l2160 ,    struct timespec  r2162 ) {
    int64_t  secdiff2163 = (  op_dash_sub79 ( ( (  l2160 ) .tv_sec ) , ( (  r2162 ) .tv_sec ) ) );
    int64_t  nsdiff2164 = (  op_dash_sub79 ( ( (  l2160 ) .tv_nsec ) , ( (  r2162 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2165 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp74 ( (  nsdiff2164 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1061) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  op_dash_neg81 ( (  nsdiff2164 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1061) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2164 ) } );
            } else {
                return ( (struct Duration_1061) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add78 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp74 ( (  secdiff2163 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1061) { .f_secs = (  secdiff2163 ) , .f_nsecs = (  nsdiff2164 ) } );
        } else {
            return ( (struct Duration_1061) { .f_secs = (  op_dash_sub79 ( (  secdiff2163 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub79 ( (  ns_dash_in_dash_secs2165 ) , (  nsdiff2164 ) ) ) } );
        }
    }
}

static  struct Duration_1061   duration_dash_from_dash_ns1063 (    int64_t  ns2168 ) {
    int64_t  ns_dash_in_dash_secs2169 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1061) { .f_secs = (  op_dash_div80 ( (  ns2168 ) , (  ns_dash_in_dash_secs2169 ) ) ) , .f_nsecs = ( (  mod740 ) ( (  ns2168 ) ,  (  ns_dash_in_dash_secs2169 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1064 (    struct Duration_1061  d2180 ) {
    int64_t  ns_dash_in_dash_secs2181 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add78 ( (  op_dash_mul32 ( ( (  d2180 ) .f_secs ) , (  ns_dash_in_dash_secs2181 ) ) ) , ( (  d2180 ) .f_nsecs ) ) );
}

static  struct Scanner_286   mk1065 (    struct DynStr_129  s2191 ) {
    return ( (struct Scanner_286) { .f_s = ( (  chars774 ) ( (  s2191 ) ) ) } );
}

static  struct Maybe_674   scan_dash_int1066 (    struct Scanner_286 *  sc2194 ) {
    struct TakeWhile_473  digit_dash_chars2195 = ( (  take_dash_while494 ) ( (  sc2194 ) ,  (  is_dash_digit936 ) ) );
    if ( ( (  null731 ) ( (  digit_dash_chars2195 ) ) ) ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    ( (  drop_prime_733 ) ( (  sc2194 ) ,  ( (  count700 ) ( (  digit_dash_chars2195 ) ) ) ) );
    return ( (  parse_dash_int938 ) ( (  digit_dash_chars2195 ) ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1067 (  ) {
    struct Termios_136  temp1068 = ( (  undefined135 ) ( ) );
    struct Termios_136 *  orig_dash_termios2202 = ( &temp1068 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  orig_dash_termios2202 ) ) ) ) );
    struct Termios_136  raw2203 = ( * (  orig_dash_termios2202 ) );
    raw2203 .f_c_dash_lflag = ( (  u32_dash_and738 ) ( ( (  raw2203 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg739 ) ( ( (  u32_dash_ors735 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_iflag = ( (  u32_dash_and738 ) ( ( (  raw2203 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg739 ) ( ( (  u32_dash_ors736 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  brkint115 ) ( ) ) , ( (  icrnl116 ) ( ) ) , ( (  inpck117 ) ( ) ) , ( (  istrip118 ) ( ) ) , ( ( (  ixon119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_oflag = ( (  u32_dash_and738 ) ( ( (  raw2203 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg739 ) ( ( (  u32_dash_ors737 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( ( (  opost120 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2203 .f_c_dash_cflag = ( (  u32_dash_or734 ) ( ( (  raw2203 ) .f_c_dash_cflag ) ,  ( (  cs8121 ) ( ) ) ) );
    ( (  set930 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vmin122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set930 ) ( ( & ( (  raw2203 ) .f_c_dash_cc ) ) ,  ( (  vtime123 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( ( & (  raw2203 ) ) ) ) ) );
    return ( * (  orig_dash_termios2202 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1069 (    struct Termios_136 *  og_dash_termios2206 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  og_dash_termios2206 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   read_dash_byte1070 (    int32_t  timeout_dash_ms2210 ) {
    struct Pollfd_219  pfd2211 = ( (struct Pollfd_219) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp75 ( ( ( poll ) ( ( (  cast_dash_ptr218 ) ( ( & (  pfd2211 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2210 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  c2212 = ( ( (  zeroed229 ) ( ) ) );
    if ( (  cmp75 ( ( ( read ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr209 ) ( ( & (  c2212 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( (  c2212 ) ) );
}

static  enum Unit_13   flush_dash_stdout1071 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr259 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1072 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1073 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1075 {
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

struct env1076 {
    bool *  should_dash_resize2216;
};

struct funenv1076 {
    enum Unit_13  (*fun) (  struct env1076  ,    int32_t  );
    struct env1076 env;
};

struct funenv1076  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1077 ) {
    struct funenv1076  temp1078 = _intr_sigarr [  __intr__sig1077 ];
    temp1078.fun ( temp1078.env ,  __intr__sig1077 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1079 ,   struct funenv1076  __intr__fun1080 ) {
    _intr_sigarr [  __intr__sig1079 ] =  __intr__fun1080;
    signal(  __intr__sig1079 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1076 (   struct env1076 env ,    int32_t  dref2223 ) {
    (* env.should_dash_resize2216 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_608   mk1075 (   struct env1075 env ) {
    struct Termios_136  og_dash_termios2218 = ( (  enable_dash_raw_dash_mode1067 ) ( ) );
    ( (  hide_dash_cursor991 ) ( ) );
    ( (  reset_dash_colors1004 ) ( ) );
    ( (  clear_dash_screen1005 ) ( ) );
    ( (  enable_dash_mouse1072 ) ( ) );
    ( (  flush_dash_stdout1071 ) ( ) );
    enum ColorPalette_609  palette2219 = ( (  query_dash_palette999 ) ( ) );
    struct Tuple2_995  dims2220 = ( (  get_dash_dimensions994 ) ( ) );
    uint32_t  fps2221 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2222 = ( (  now1058 ) ( ) );
    struct env1076 envinst1076 = {
        .should_dash_resize2216 = env.should_dash_resize2216 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1076){ .fun = lam1076, .env = envinst1076 } ) ) );
    return ( (struct Tui_608) { .f_width = ( (  fst1036 ) ( (  dims2220 ) ) ) , .f_height = ( (  snd1037 ) ( (  dims2220 ) ) ) , .f_target_dash_fps = (  fps2221 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2222 ) , .f_fps_dash_ts = (  last_dash_sync2222 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2218 ) , .f_palette = (  palette2219 ) } );
}

static  enum Unit_13   sync1081 (    struct Tui_608 *  tui2226 ) {
    if ( (  eq42 ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2227 = (  op_dash_div80 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size272 ) ( ( ( * (  tui2226 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1082 = ( (  undefined133 ) ( ) );
    struct timespec *  now2228 = ( &temp1082 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  now2228 ) ) );
    int64_t  elapsed_dash_ns2229 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_sec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub79 ( ( ( * (  now2228 ) ) .tv_nsec ) , ( ( ( * (  tui2226 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2230 = (  op_dash_sub79 ( (  frame_dash_ns2227 ) , (  elapsed_dash_ns2229 ) ) );
    if ( (  cmp74 ( (  sleep_dash_ns2230 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1083 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2230 ) } );
        struct timespec *  ts2231 = ( &temp1083 );
        ( ( nanosleep ) ( (  ts2231 ) ,  ( (  null_dash_ptr261 ) ( ) ) ) );
    }
    struct timespec  temp1084 = ( (  undefined133 ) ( ) );
    struct timespec *  last_dash_sync2232 = ( &temp1084 );
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

static  enum Unit_13   deinit1085 (    struct Tui_608 *  tui2236 ) {
    ( (  disable_dash_mouse1073 ) ( ) );
    ( (  show_dash_cursor990 ) ( ) );
    ( (  reset_dash_colors1004 ) ( ) );
    ( (  clear_dash_screen1005 ) ( ) );
    ( (  reset_dash_cursor_dash_position993 ) ( ) );
    ( (  disable_dash_raw_dash_mode1069 ) ( ( & ( ( * (  tui2236 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1071 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   btn_dash_to_dash_mouse_dash_button1086 (    int64_t  btn2243 ) {
    return ( {  int32_t  dref2244 = ( (  i64_dash_i32269 ) ( (  btn2243 ) ) ) ;  dref2244 == 0 ? ( MouseButton_144_MouseLeft ) :  dref2244 == 1 ? ( MouseButton_144_MouseMiddle ) :  dref2244 == 2 ? ( MouseButton_144_MouseRight ) :  dref2244 == 64 ? ( MouseButton_144_ScrollUp ) :  dref2244 == 65 ? ( MouseButton_144_ScrollDown ) : ( (  panic_prime_886 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1088 {
    enum {
        Maybe_1088_None_t,
        Maybe_1088_Just_t,
    } tag;
    union {
        struct {
            struct Key_513  field0;
        } Maybe_1088_Just_s;
    } stuff;
};

static struct Maybe_1088 Maybe_1088_Just (  struct Key_513  field0 ) {
    return ( struct Maybe_1088 ) { .tag = Maybe_1088_Just_t, .stuff = { .Maybe_1088_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1088   parse_dash_ss31087 (    char  c2247 ) {
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2247 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1088_Just ) ( ( (struct Key_513) { .tag = Key_513_F4_t } ) ) );
    }
    return ( (struct Maybe_1088) { .tag = Maybe_1088_None_t } );
}

static  struct Maybe_511   parse_dash_csi1089 (    struct DynStr_129  seq2250 ) {
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    char  last2251 = (  elem_dash_get915 ( ( (  seq2250 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get915 ( ( (  seq2250 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_286  temp1090 = ( (  mk1065 ) ( ( (  substr322 ) ( (  seq2250 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2250 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_286 *  sc2252 = ( &temp1090 );
        struct Maybe_674  dref2253 = ( (  scan_dash_int1066 ) ( (  sc2252 ) ) );
        if ( dref2253.tag == Maybe_674_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else if ( dref2253.tag == Maybe_674_Just_t ) {
            ( (  next486 ) ( (  sc2252 ) ) );
            struct Maybe_674  dref2255 = ( (  scan_dash_int1066 ) ( (  sc2252 ) ) );
            if ( dref2255.tag == Maybe_674_None_t ) {
                return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
            }
            else if ( dref2255.tag == Maybe_674_Just_t ) {
                ( (  next486 ) ( (  sc2252 ) ) );
                struct Maybe_674  dref2257 = ( (  scan_dash_int1066 ) ( (  sc2252 ) ) );
                if ( dref2257.tag == Maybe_674_None_t ) {
                    return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
                }
                else if ( dref2257.tag == Maybe_674_Just_t ) {
                    return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Mouse ) ( ( (struct MouseEvent_514) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1086 ) ( ( dref2253 .stuff .Maybe_674_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2255 .stuff .Maybe_674_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2257 .stuff .Maybe_674_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2250 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Up_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Down_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Right_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Left_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    if ( (  eq48 ( (  last2251 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_286  temp1091 = ( (  mk1065 ) ( (  seq2250 ) ) );
        struct Scanner_286 *  sc2259 = ( &temp1091 );
        struct Maybe_674  dref2260 = ( (  scan_dash_int1066 ) ( (  sc2259 ) ) );
        if ( dref2260.tag == Maybe_674_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else if ( dref2260.tag == Maybe_674_Just_t ) {
            return ( {  int32_t  dref2262 = ( (  i64_dash_i32269 ) ( ( dref2260 .stuff .Maybe_674_Just_s .field0 ) ) ) ;  dref2262 == 1 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) ) ) ) :  dref2262 == 2 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Insert_t } ) ) ) ) ) :  dref2262 == 3 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Delete_t } ) ) ) ) ) :  dref2262 == 4 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) ) ) ) :  dref2262 == 5 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_PageUp_t } ) ) ) ) ) :  dref2262 == 6 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_PageDown_t } ) ) ) ) ) :  dref2262 == 15 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F5_t } ) ) ) ) ) :  dref2262 == 17 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F6_t } ) ) ) ) ) :  dref2262 == 18 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F7_t } ) ) ) ) ) :  dref2262 == 19 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F8_t } ) ) ) ) ) :  dref2262 == 20 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F9_t } ) ) ) ) ) :  dref2262 == 21 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F10_t } ) ) ) ) ) :  dref2262 == 23 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F11_t } ) ) ) ) ) :  dref2262 == 24 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F12_t } ) ) ) ) ) : ( (struct Maybe_511) { .tag = Maybe_511_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
}

static  struct Maybe_511   read_dash_key1092 (  ) {
    char  temp1093 = ( (  undefined131 ) ( ) );
    char *  ch2264 = ( &temp1093 );
    struct Maybe_297  dref2265 = ( (  read_dash_byte1070 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2265.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    else if ( dref2265.tag == Maybe_297_Just_t ) {
        (*  ch2264 ) = ( dref2265 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp77 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2267 = ( (  i32_dash_char876 ) ( ( (  u32_dash_i32274 ) ( ( (  u32_dash_or734 ) ( ( (  i32_dash_u32266 ) ( ( (  char_dash_i32874 ) ( ( * (  ch2264 ) ) ) ) ) ) ,  ( (  from_dash_hex986 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( ( Key_513_Ctrl ) ( (  letter2267 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp77 ( ( (  char_dash_u8875 ) ( ( * (  ch2264 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1092 ) ( ) );
        } else {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( ( Key_513_Char ) ( ( * (  ch2264 ) ) ) ) ) ) ) );
        }
    }
    char  temp1094 = ( (  undefined131 ) ( ) );
    char *  ch22268 = ( &temp1094 );
    struct Maybe_297  dref2269 = ( (  read_dash_byte1070 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2269.tag == Maybe_297_None_t ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
    }
    else if ( dref2269.tag == Maybe_297_Just_t ) {
        (*  ch22268 ) = ( dref2269 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_181  temp1095 = ( ( (  zeroed239 ) ( ) ) );
        struct Array_181 *  seq2271 = ( &temp1095 );
        int32_t  slen2272 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp75 ( (  slen2272 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1096 = ( (  undefined131 ) ( ) );
            char *  sc2273 = ( &temp1096 );
            struct Maybe_297  dref2274 = ( (  read_dash_byte1070 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2274.tag == Maybe_297_None_t ) {
                break;
            }
            else if ( dref2274.tag == Maybe_297_Just_t ) {
                (*  sc2273 ) = ( dref2274 .stuff .Maybe_297_Just_s .field0 );
            }
            ( (  set931 ) ( (  seq2271 ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ,  ( * (  sc2273 ) ) ) );
            slen2272 = (  op_dash_add82 ( (  slen2272 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp77 ( ( (  char_dash_u8875 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp77 ( ( (  char_dash_u8875 ) ( ( * (  sc2273 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1089 ) ( ( (struct DynStr_129) { .f_contents = ( (  subslice292 ) ( ( (  as_dash_slice932 ) ( (  seq2271 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( (  slen2272 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22268 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1097 = ( (  undefined131 ) ( ) );
        char *  sc2276 = ( &temp1097 );
        struct Maybe_297  dref2277 = ( (  read_dash_byte1070 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2277.tag == Maybe_297_None_t ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
        }
        else if ( dref2277.tag == Maybe_297_Just_t ) {
            (*  sc2276 ) = ( dref2277 .stuff .Maybe_297_Just_s .field0 );
        }
        struct Maybe_1088  dref2279 = ( (  parse_dash_ss31087 ) ( ( * (  sc2276 ) ) ) );
        if ( dref2279.tag == Maybe_1088_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else if ( dref2279.tag == Maybe_1088_Just_t ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( dref2279 .stuff .Maybe_1088_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
}

struct env1098 {
    bool *  should_dash_resize2216;
    ;
    ;
    ;
};

static  bool   update_dash_dimensions1098 (   struct env1098 env ,    struct Tui_608 *  tui2283 ) {
    if ( ( ! ( * ( env.should_dash_resize2216 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2216 ) = ( false );
    struct Tuple2_995  dim2284 = ( (  get_dash_dimensions994 ) ( ) );
    uint32_t  w2285 = ( (  fst1036 ) ( (  dim2284 ) ) );
    uint32_t  h2286 = ( (  snd1037 ) ( (  dim2284 ) ) );
    (*  tui2283 ) .f_width = (  w2285 );
    (*  tui2283 ) .f_height = (  h2286 );
    return ( true );
}

static  struct Cell_53   lam1100 (    struct Cell_53  dref2304 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Cell_53   lam1101 (    struct Cell_53  dref2306 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Screen_607   mk_dash_screen1099 (    struct Tui_608 *  tui2300 ,    enum CAllocator_4  al2302 ) {
    struct Slice_543  cur2303 = ( (  allocate922 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map916 ) ( (  cur2303 ) ,  (  lam1100 ) ) );
    struct Slice_543  prev2305 = ( (  allocate922 ) ( (  al2302 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2300 ) ) .f_width ) , ( ( * (  tui2300 ) ) .f_height ) ) ) ) ) ) );
    ( (  map917 ) ( (  prev2305 ) ,  (  lam1101 ) ) );
    return ( (struct Screen_607) { .f_current = (  cur2303 ) , .f_previous = (  prev2305 ) , .f_al = (  al2302 ) , .f_tui = (  tui2300 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1102 (    struct Screen_607 *  screen2309 ) {
    enum CAllocator_4  al2310 = ( ( * (  screen2309 ) ) .f_al );
    ( (  free927 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_current ) ) );
    ( (  free927 ) ( (  al2310 ) ,  ( ( * (  screen2309 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_53   lam1104 (    struct Cell_53  dref2314 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1103 (    struct Screen_607 *  screen2313 ) {
    ( (  map918 ) ( ( ( * (  screen2313 ) ) .f_current ) ,  (  lam1104 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1106 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1105 (    struct RenderState_1106 *  rs2318 ,    struct Cell_53 *  c2320 ,    uint32_t  x2322 ,    uint32_t  y2324 ) {
    if ( ( ( !  eq42 ( (  x2322 ) , ( ( * (  rs2318 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2324 ) , ( ( * (  rs2318 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to992 ) ( (  x2322 ) ,  (  y2324 ) ) );
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
        ( (  set_dash_fg1010 ) ( ( ( * (  c2320 ) ) .f_fg ) ) );
        (*  rs2318 ) .f_fg = ( ( * (  c2320 ) ) .f_fg );
    }
    if ( ( !  eq59 ( ( ( * (  rs2318 ) ) .f_bg ) , (  bg2326 ) ) ) ) {
        ( (  set_dash_bg1011 ) ( (  bg2326 ) ) );
        (*  rs2318 ) .f_bg = (  bg2326 );
    }
    ( (  print_dash_str28 ) ( (  char2325 ) ) );
    (*  rs2318 ) .f_x = (  op_dash_add87 ( ( ( * (  rs2318 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1107 (    struct Screen_607 *  screen2329 ) {
    int32_t  w2330 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2331 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2329 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1106  temp1108 = ( (struct RenderState_1106) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1106 *  rs2332 = ( &temp1108 );
    ( (  move_dash_cursor_dash_to992 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_363  temp1109 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  h2331 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1110 =  next364 (&temp1109);
        if (  __cond1110 .tag == 0 ) {
            break;
        }
        int32_t  y2334 =  __cond1110 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1111 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  w2330 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1112 =  next364 (&temp1111);
            if (  __cond1112 .tag == 0 ) {
                break;
            }
            int32_t  x2336 =  __cond1112 .stuff .Maybe_328_Just_s .field0;
            size_t  i2337 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2334 ) , (  w2330 ) ) ) , (  x2336 ) ) ) ) );
            struct Cell_53 *  cur2338 = ( (  get_dash_ptr901 ) ( ( ( * (  screen2329 ) ) .f_current ) ,  (  i2337 ) ) );
            struct Cell_53 *  prev2339 = ( (  get_dash_ptr901 ) ( ( ( * (  screen2329 ) ) .f_previous ) ,  (  i2337 ) ) );
            if ( ( ( !  eq52 ( (  cur2338 ) , (  prev2339 ) ) ) || ( ( * (  screen2329 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2332 ) .f_changes = (  op_dash_add87 ( ( ( * (  rs2332 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1105 ) ( (  rs2332 ) ,  (  cur2338 ) ,  ( (  i32_dash_u32266 ) ( (  x2336 ) ) ) ,  ( (  i32_dash_u32266 ) ( (  y2334 ) ) ) ) );
                (*  prev2339 ) = ( * (  cur2338 ) );
            }
        }
    }
    (*  screen2329 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1004 ) ( ) );
    ( (  flush_dash_stdout1071 ) ( ) );
    return ( ( * (  rs2332 ) ) .f_changes );
}

struct funenv1098 {
    bool  (*fun) (  struct env1098  ,    struct Tui_608 *  );
    struct env1098 env;
};

struct env1113 {
    ;
    ;
    struct env1098 envinst1098;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1113 (   struct env1113 env ,    struct Screen_607 *  screen2342 ) {
    struct Tui_608 *  tui2343 = ( ( * (  screen2342 ) ) .f_tui );
    struct funenv1098  temp1114 = ( (struct funenv1098){ .fun = update_dash_dimensions1098, .env =  env.envinst1098  } );
    if ( ( ! ( temp1114.fun ( temp1114.env ,  (  tui2343 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2342 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2344 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_width );
    uint32_t  h2345 = ( ( * ( ( * (  screen2342 ) ) .f_tui ) ) .f_height );
    size_t  nusz2346 = ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( (  w2344 ) , (  h2345 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2346 ) , ( ( ( * (  screen2342 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_607  nuscreen2347 = ( (  mk_dash_screen1099 ) ( (  tui2343 ) ,  ( ( * (  screen2342 ) ) .f_al ) ) );
    (*  screen2342 ) .f_current = ( (  nuscreen2347 ) .f_current );
    (*  screen2342 ) .f_previous = ( (  nuscreen2347 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1115 (    struct Screen_607 *  screen2350 ,    struct Color_54  c2352 ) {
    (*  screen2350 ) .f_default_dash_fg = (  c2352 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1116 (    struct Screen_607 *  screen2355 ,    struct Color_54  c2357 ) {
    (*  screen2355 ) .f_default_dash_bg = (  c2357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1117 (    struct Screen_607 *  screen2360 ,    struct Color_54  fg2362 ,    struct Color_54  bg2364 ) {
    (*  screen2360 ) .f_default_dash_fg = (  fg2362 );
    (*  screen2360 ) .f_default_dash_bg = (  bg2364 );
    return ( Unit_13_Unit );
}

static  struct Maybe_895   get_dash_cell_dash_ptr1118 (    struct Screen_607 *  screen2371 ,    int32_t  x2373 ,    int32_t  y2375 ) {
    int32_t  w2376 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2373 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  x2373 ) , (  w2376 ) ) != 0 ) ) ) {
        return ( (struct Maybe_895) { .tag = Maybe_895_None_t } );
    }
    if ( ( (  cmp75 ( (  y2375 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  y2375 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2371 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_895) { .tag = Maybe_895_None_t } );
    }
    size_t  i2377 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2375 ) , (  w2376 ) ) ) , (  x2373 ) ) ) ) );
    return ( ( Maybe_895_Just ) ( ( (  get_dash_ptr901 ) ( ( ( * (  screen2371 ) ) .f_current ) ,  (  i2377 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1119 (    struct Screen_607 *  screen2380 ) {
    struct RangeIter_363  temp1120 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1121 =  next364 (&temp1120);
        if (  __cond1121 .tag == 0 ) {
            break;
        }
        int32_t  y2382 =  __cond1121 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1122 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2380 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1123 =  next364 (&temp1122);
            if (  __cond1123 .tag == 0 ) {
                break;
            }
            int32_t  x2384 =  __cond1123 .stuff .Maybe_328_Just_s .field0;
            struct Cell_53 *  cell2385 = ( (  or_dash_fail894 ) ( ( (  get_dash_cell_dash_ptr1118 ) ( (  screen2380 ) ,  (  x2384 ) ,  (  y2382 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2385 ) .f_bg = ( ( * (  screen2380 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1124 (    struct Screen_607 *  screen2388 ,    char  c2390 ,    int32_t  x2392 ,    int32_t  y2394 ) {
    int32_t  w2395 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2392 ) , (  w2395 ) ) != 0 ) || (  cmp75 ( (  y2394 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2388 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2396 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2394 ) , (  w2395 ) ) ) , (  x2392 ) ) ) ) );
    struct Color_54  fg2397 = ( ( * (  screen2388 ) ) .f_default_dash_fg );
    struct Color_54  bg2398 = ( ( * (  screen2388 ) ) .f_default_dash_bg );
    char  c2399 = (  c2390 );
    ( (  set909 ) ( ( ( * (  screen2388 ) ) .f_current ) ,  (  i2396 ) ,  ( (struct Cell_53) { .f_c = (  c2399 ) , .f_fg = (  fg2397 ) , .f_bg = (  bg2398 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam606 (   struct env606 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1125 (    struct Screen_607 *  screen2402 ,    int32_t  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env606 envinst606 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each605 ) ( ( (  zip456 ) ( ( (  chars754 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv606){ .fun = lam606, .env = envinst606 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam613 (   struct env613 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1126 (    struct Screen_607 *  screen2402 ,    struct StrConcat_760  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env613 envinst613 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each612 ) ( ( (  zip458 ) ( ( (  chars860 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv613){ .fun = lam613, .env = envinst613 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam617 (   struct env617 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1127 (    struct Screen_607 *  screen2402 ,    struct StrConcat_776  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env617 envinst617 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each616 ) ( ( (  zip460 ) ( ( (  chars861 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv617){ .fun = lam617, .env = envinst617 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam621 (   struct env621 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1128 (    struct Screen_607 *  screen2402 ,    struct StrConcat_778  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env621 envinst621 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each620 ) ( ( (  zip462 ) ( ( (  chars862 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv621){ .fun = lam621, .env = envinst621 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam625 (   struct env625 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1129 (    struct Screen_607 *  screen2402 ,    struct StrConcat_804  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env625 envinst625 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each624 ) ( ( (  zip464 ) ( ( (  chars863 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv625){ .fun = lam625, .env = envinst625 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam629 (   struct env629 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1130 (    struct Screen_607 *  screen2402 ,    struct StrConcat_17  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env629 envinst629 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each628 ) ( ( (  zip466 ) ( ( (  chars864 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv629){ .fun = lam629, .env = envinst629 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam633 (   struct env633 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1131 (    struct Screen_607 *  screen2402 ,    struct StrConcat_806  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env633 envinst633 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each632 ) ( ( (  zip468 ) ( ( (  chars809 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv633){ .fun = lam633, .env = envinst633 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam637 (   struct env637 env ,    struct Tuple2_353  dref2415 ) {
    ( (  set909 ) ( ( ( * ( env.screen2402 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2410 ) , ( (  i32_dash_size268 ) ( ( dref2415 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2415 .field0 ) , .f_fg = ( env.fg2413 ) , .f_bg = ( env.bg2414 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1132 (    struct Screen_607 *  screen2402 ,    struct StrConcat_813  s2404 ,    int32_t  x2406 ,    int32_t  y2408 ) {
    if ( (  cmp75 ( (  y2408 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2409 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2402 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2410 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2408 ) , (  w2409 ) ) ) , (  x2406 ) ) ) ) );
    int32_t  x2411 = ( (  min744 ) ( (  x2406 ) ,  (  w2409 ) ) );
    size_t  max_dash_len2412 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2409 ) , (  x2411 ) ) ) ) );
    struct Color_54  fg2413 = ( ( * (  screen2402 ) ) .f_default_dash_fg );
    struct Color_54  bg2414 = ( ( * (  screen2402 ) ) .f_default_dash_bg );
    struct env637 envinst637 = {
        .screen2402 =  screen2402 ,
        .fg2413 =  fg2413 ,
        .i2410 =  i2410 ,
        .bg2414 =  bg2414 ,
    };
    ( (  for_dash_each636 ) ( ( (  zip470 ) ( ( (  chars865 ) ( (  s2404 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv637){ .fun = lam637, .env = envinst637 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1133 (    struct Screen_607 *  screen2420 ,    int32_t  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count704 ) ( ( (  chars754 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1125 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1134 (    struct Screen_607 *  screen2420 ,    struct StrConcat_760  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count706 ) ( ( (  chars860 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1126 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1135 (    struct Screen_607 *  screen2420 ,    struct StrConcat_776  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count708 ) ( ( (  chars861 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1127 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1136 (    struct Screen_607 *  screen2420 ,    struct StrConcat_778  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count710 ) ( ( (  chars862 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1128 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1137 (    struct Screen_607 *  screen2420 ,    struct StrConcat_804  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count712 ) ( ( (  chars863 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1129 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1138 (    struct Screen_607 *  screen2420 ,    struct StrConcat_17  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count714 ) ( ( (  chars864 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1130 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1139 (    struct Screen_607 *  screen2420 ,    struct StrConcat_806  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count716 ) ( ( (  chars809 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1131 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1140 (    struct Screen_607 *  screen2420 ,    struct StrConcat_813  s2422 ,    int32_t  x2424 ,    int32_t  y2426 ) {
    int32_t  slen2427 = ( (  size_dash_i32270 ) ( ( (  count718 ) ( ( (  chars865 ) ( (  s2422 ) ) ) ) ) ) );
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2420 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2429 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2428 ) , (  x2424 ) ) ) , (  slen2427 ) ) );
    ( (  draw_dash_str1132 ) ( (  screen2420 ) ,  (  s2422 ) ,  (  x2429 ) ,  (  y2426 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_315   try_dash_read_dash_contents1141 (    const char*  filename2640 ,    enum CAllocator_4  al2642 ) {
    FILE *  file2643 = ( ( fopen ) ( (  filename2640 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2643 ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    ( ( fseek ) ( (  file2643 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end108 ) ( ) ) ) );
    int32_t  file_dash_size2644 = ( ( ftell ) ( (  file2643 ) ) );
    ( ( fseek ) ( (  file2643 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set107 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2645 = ( ( (  allocate921 ) ( (  al2642 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  file_dash_size2644 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2645 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2644 ) ,  (  file2643 ) ) );
    ( (  set908 ) ( (  file_dash_buf2645 ) ,  ( (  i32_dash_size268 ) ( (  file_dash_size2644 ) ) ) ,  ( (  nullchar320 ) ( ) ) ) );
    ( ( fclose ) ( (  file2643 ) ) );
    struct DynStr_129  str2646 = ( (struct DynStr_129) { .f_contents = (  file_dash_buf2645 ) } );
    return ( ( Maybe_315_Just ) ( (  str2646 ) ) );
}

static  struct DynStr_129   read_dash_contents1142 (    const char*  filename2649 ,    enum CAllocator_4  al2651 ) {
    return ( (  or_dash_fail889 ) ( ( (  try_dash_read_dash_contents1141 ) ( (  filename2649 ) ,  (  al2651 ) ) ) ,  ( ( StrConcat_820_StrConcat ) ( ( ( StrConcat_821_StrConcat ) ( ( "could not open file " ) ,  (  filename2649 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1143 (    const char*  filename2654 ,    struct DynStr_129  contents2656 ) {
    FILE *  file2657 = ( ( fopen ) ( (  filename2654 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2657 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_287  it2658 = ( (  chars774 ) ( (  contents2656 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref2659 = ( (  next330 ) ( ( & (  it2658 ) ) ) );
        if ( dref2659.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file2657 ) ) );
            return ( true );
        }
        else if ( dref2659.tag == Maybe_297_Just_t ) {
            int32_t  chars_dash_written2661 = ( ( fprintf ) ( (  file2657 ) ,  ( "%c" ) ,  ( dref2659 .stuff .Maybe_297_Just_s .field0 ) ) );
            if ( (  cmp75 ( (  chars_dash_written2661 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable879 ) ( ) );
}

static  enum Unit_13   write_dash_contents1144 (    const char*  filename2664 ,    struct DynStr_129  contents2666 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1143 ) ( (  filename2664 ) ,  (  contents2666 ) ) ) ) ) {
        ( (  panic885 ) ( ( ( StrConcat_821_StrConcat ) ( ( "could not write to file " ) ,  (  filename2664 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_903   get1145 (  ) {
    return ( (struct Slice_903) { .f_ptr = ( (  offset_dash_ptr152 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len312 (   struct env312 env ,    char  c2433 ) {
    if ( (  eq48 ( (  c2433 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2430 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1146 (    struct Cursor_742  l2437 ,    struct Cursor_742  r2439 ) {
    return ( (  eq41 ( ( (  l2437 ) .f_x ) , ( (  r2439 ) .f_x ) ) ) && (  eq41 ( ( (  l2437 ) .f_y ) , ( (  r2439 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1147 (    struct Visual_1043  dref2449 ) {
    return ( dref2449 .field0 );
}

static  struct List_3 *   get_dash_row1148 (    struct Editor_1042 *  ed2468 ,    int32_t  y2470 ) {
    return ( (  get_dash_ptr942 ) ( ( & ( ( * (  ed2468 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2470 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1149 (    struct Editor_1042 *  ed2473 ) {
    return ( (  get_dash_ptr942 ) ( ( & ( ( * (  ed2473 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2473 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_475   indent_dash_on_dash_row1150 (    struct Editor_1042 *  ed2476 ,    int32_t  y2478 ) {
    return ( (  take_dash_while495 ) ( ( (  get_dash_row1148 ) ( (  ed2476 ) ,  (  y2478 ) ) ) ,  (  is_dash_whitespace933 ) ) );
}

static  size_t   num_dash_rows1151 (    struct Editor_1042 *  ed2481 ) {
    return ( (  size983 ) ( ( & ( ( * (  ed2481 ) ) .f_current_dash_file ) ) ) );
}

struct funenv960 {
    enum Unit_13  (*fun) (  struct env960  ,    struct List_280 *  ,    size_t  );
    struct env960 env;
};

struct env1152 {
    ;
    ;
    ;
    struct env960 envinst960;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1152 (   struct env1152 env ,    struct Editor_1042 *  ed2484 ,    int32_t  y2486 ) {
    struct List_3 *  next_dash_row2487 = ( (  get_dash_row1148 ) ( (  ed2484 ) ,  (  y2486 ) ) );
    ( (  free950 ) ( (  next_dash_row2487 ) ) );
    struct funenv960  temp1153 = ( (struct funenv960){ .fun = remove960, .env =  env.envinst960  } );
    ( temp1153.fun ( temp1153.env ,  ( & ( ( * (  ed2484 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2486 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   char_dash_at1154 (    struct Editor_1042 *  ed2490 ,    struct Cursor_742  cur2492 ) {
    return ( (  try_dash_get944 ) ( ( (  get_dash_row1148 ) ( (  ed2490 ) ,  ( (  cur2492 ) .f_y ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2492 ) .f_x ) ) ) ) );
}

static  struct Maybe_297   char_dash_at_dash_cursor1155 (    struct Editor_1042 *  ed2495 ) {
    return ( (  try_dash_get944 ) ( ( (  cursor_dash_row1149 ) ( (  ed2495 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2495 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1156 {
    ;
    ;
    ;
    struct env312 envinst312;
    ;
    ;
};

static  struct Visual_1043   x_dash_to_dash_visual_dash_x1156 (   struct env1156 env ,    struct Editor_1042 *  ed2498 ,    int32_t  x2500 ,    int32_t  y2502 ) {
    return ( ( Visual_1043_Visual ) ( ( (  sum720 ) ( ( (  map336 ) ( ( (  take359 ) ( ( (  get_dash_row1148 ) ( (  ed2498 ) ,  (  y2502 ) ) ) ,  ( (  i32_dash_size268 ) ( (  x2500 ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ) ) ) ) ) );
}

struct env1157 {
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

static  int32_t   visual_dash_x_dash_to_dash_x1157 (   struct env1157 env ,    struct Editor_1042 *  ed2505 ,    struct Visual_1043  dref2506 ,    int32_t  y2509 ) {
    int32_t  sum_dash_x2510 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2511 = ( (  get_dash_row1148 ) ( (  ed2505 ) ,  (  y2509 ) ) );
    struct RangeIter_363  temp1158 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( * (  chars2511 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1159 =  next364 (&temp1158);
        if (  __cond1159 .tag == 0 ) {
            break;
        }
        int32_t  x2513 =  __cond1159 .stuff .Maybe_328_Just_s .field0;
        struct funenv312  temp1160 = ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } );
        sum_dash_x2510 = (  op_dash_add82 ( (  sum_dash_x2510 ) , ( temp1160.fun ( temp1160.env ,  (  elem_dash_get2 ( (  chars2511 ) , ( (  i32_dash_size268 ) ( (  x2513 ) ) ) ) ) ) ) ) );
        if ( (  cmp75 ( ( dref2506 .field0 ) , (  sum_dash_x2510 ) ) == 0 ) ) {
            return (  x2513 );
        }
    }
    return ( (  size_dash_i32270 ) ( ( ( * (  chars2511 ) ) .f_count ) ) );
}

struct funenv1156 {
    struct Visual_1043  (*fun) (  struct env1156  ,    struct Editor_1042 *  ,    int32_t  ,    int32_t  );
    struct env1156 env;
};

struct funenv1157 {
    int32_t  (*fun) (  struct env1157  ,    struct Editor_1042 *  ,    struct Visual_1043  ,    int32_t  );
    struct env1157 env;
};

struct env1161 {
    ;
    struct env1156 envinst1156;
    ;
    ;
    ;
    ;
    ;
    struct env1157 envinst1157;
    ;
    ;
    ;
    ;
};

struct Dims_1162 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1161 (   struct env1161 env ,    struct Editor_1042 *  ed2517 ,    int32_t  x2519 ,    int32_t  y2521 ,    struct Dims_1162  dim2523 ) {
    struct Cursor_742  cur2524 = ( ( * (  ed2517 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2525 = ( !  eq41 ( ( (  cur2524 ) .f_x ) , (  x2519 ) ) );
    int32_t  y2526 = ( (  clamp748 ) ( (  y2521 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2517 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2527 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  y2526 ) , (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_top ) , (  funny_dash_space2527 ) ) ) ) == 0 ) ) {
        (*  ed2517 ) .f_screen_dash_top = ( (  max745 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  y2526 ) , (  funny_dash_space2527 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  y2526 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_top ) , ( (  dim2523 ) .f_rows ) ) ) , (  funny_dash_space2527 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2528 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  y2526 ) , (  funny_dash_space2527 ) ) ) , ( (  dim2523 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2517 ) .f_screen_dash_top = (  onscreen_dash_y2528 );
        } else {
        }
    }
    struct List_3 *  row2529 = ( (  get_dash_row1148 ) ( (  ed2517 ) ,  (  y2526 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2525 ) ) {
        int32_t  x2530 = ( (  clamp748 ) ( (  x2519 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( ( (  size982 ) ( (  row2529 ) ) ) ) ) ) );
        struct funenv1156  temp1163 = ( (struct funenv1156){ .fun = x_dash_to_dash_visual_dash_x1156, .env =  env.envinst1156  } );
        (*  ed2517 ) .f_goal_dash_x = ( temp1163.fun ( temp1163.env ,  (  ed2517 ) ,  (  x2530 ) ,  (  y2526 ) ) );
    }
    struct Visual_1043  vx2531 = ( ( * (  ed2517 ) ) .f_goal_dash_x );
    struct funenv1157  temp1164 = ( (struct funenv1157){ .fun = visual_dash_x_dash_to_dash_x1157, .env =  env.envinst1157  } );
    int32_t  x2532 = ( temp1164.fun ( temp1164.env ,  (  ed2517 ) ,  (  vx2531 ) ,  (  y2526 ) ) );
    int32_t  funny_dash_space2533 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  x2532 ) , (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_left ) , (  funny_dash_space2533 ) ) ) ) == 0 ) ) {
        (*  ed2517 ) .f_screen_dash_left = ( (  max745 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  x2532 ) , (  funny_dash_space2533 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  x2532 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2517 ) ) .f_screen_dash_left ) , ( (  dim2523 ) .f_cols ) ) ) , (  funny_dash_space2533 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2534 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  x2532 ) , (  funny_dash_space2533 ) ) ) , ( (  dim2523 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2517 ) .f_screen_dash_left = (  onscreen_dash_x2534 );
        } else {
        }
    }
    (*  ed2517 ) .f_cursor = ( (struct Cursor_742) { .f_x = (  x2532 ) , .f_y = (  y2526 ) } );
    (*  ed2517 ) .f_selected = ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
    return ( Unit_13_Unit );
}

struct funenv1161 {
    enum Unit_13  (*fun) (  struct env1161  ,    struct Editor_1042 *  ,    int32_t  ,    int32_t  ,    struct Dims_1162  );
    struct env1161 env;
};

struct env1165 {
    struct env1161 envinst1161;
};

static  enum Unit_13   move_dash_to_dash_col1165 (   struct env1165 env ,    struct Editor_1042 *  ed2537 ,    int32_t  x2539 ,    struct Dims_1162  dim2541 ) {
    struct funenv1161  temp1166 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  env.envinst1161  } );
    ( temp1166.fun ( temp1166.env ,  (  ed2537 ) ,  (  x2539 ) ,  ( ( ( * (  ed2537 ) ) .f_cursor ) .f_y ) ,  (  dim2541 ) ) );
    return ( Unit_13_Unit );
}

struct env1167 {
    struct env1161 envinst1161;
};

static  enum Unit_13   move_dash_to_dash_row1167 (   struct env1167 env ,    struct Editor_1042 *  ed2544 ,    int32_t  y2546 ,    struct Dims_1162  dim2548 ) {
    struct funenv1161  temp1168 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  env.envinst1161  } );
    ( temp1168.fun ( temp1168.env ,  (  ed2544 ) ,  ( ( ( * (  ed2544 ) ) .f_cursor ) .f_x ) ,  (  y2546 ) ,  (  dim2548 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1165 {
    enum Unit_13  (*fun) (  struct env1165  ,    struct Editor_1042 *  ,    int32_t  ,    struct Dims_1162  );
    struct env1165 env;
};

struct funenv1167 {
    enum Unit_13  (*fun) (  struct env1167  ,    struct Editor_1042 *  ,    int32_t  ,    struct Dims_1162  );
    struct env1167 env;
};

struct env1169 {
    ;
    ;
    ;
    ;
    struct env1165 envinst1165;
    ;
    ;
    struct env1167 envinst1167;
    ;
};

static  bool   move_dash_left1169 (   struct env1169 env ,    struct Editor_1042 *  ed2551 ,    struct Dims_1162  dim2553 ) {
    struct Cursor_742  cur2554 = ( ( * (  ed2551 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1167  temp1170 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  env.envinst1167  } );
            ( temp1170.fun ( temp1170.env ,  (  ed2551 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2553 ) ) );
            struct funenv1165  temp1171 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  env.envinst1165  } );
            ( temp1171.fun ( temp1171.env ,  (  ed2551 ) ,  ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1149 ) ( (  ed2551 ) ) ) ) .f_count ) ) ) ,  (  dim2553 ) ) );
        }
    } else {
        struct funenv1165  temp1172 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  env.envinst1165  } );
        ( temp1172.fun ( temp1172.env ,  (  ed2551 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2551 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2553 ) ) );
    }
    return ( !  eq1146 ( ( ( * (  ed2551 ) ) .f_cursor ) , (  cur2554 ) ) );
}

struct env1173 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1165 envinst1165;
    struct env1161 envinst1161;
    ;
    ;
};

static  bool   move_dash_right1173 (   struct env1173 env ,    struct Editor_1042 *  ed2557 ,    struct Dims_1162  dims2559 ) {
    struct Cursor_742  cur2560 = ( ( * (  ed2557 ) ) .f_cursor );
    int32_t  row_dash_len2561 = ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1149 ) ( (  ed2557 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_x ) , (  row_dash_len2561 ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2557 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1161  temp1174 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  env.envinst1161  } );
            ( temp1174.fun ( temp1174.env ,  (  ed2557 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2559 ) ) );
        }
    } else {
        struct funenv1165  temp1175 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  env.envinst1165  } );
        ( temp1175.fun ( temp1175.env ,  (  ed2557 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2557 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2559 ) ) );
    }
    return ( !  eq1146 ( ( ( * (  ed2557 ) ) .f_cursor ) , (  cur2560 ) ) );
}

struct env1176 {
    ;
    struct env1165 envinst1165;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1176 (   struct env1176 env ,    struct Editor_1042 *  ed2564 ,    struct Dims_1162  dims2566 ) {
    int32_t  off2567 = ( (  size_dash_i32270 ) ( ( (  count702 ) ( ( (  indent_dash_on_dash_row1150 ) ( (  ed2564 ) ,  ( ( ( * (  ed2564 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1165  temp1177 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  env.envinst1165  } );
    ( temp1177.fun ( temp1177.env ,  (  ed2564 ) ,  (  off2567 ) ,  (  dims2566 ) ) );
    return ( Unit_13_Unit );
}

struct env1178 {
    ;
    ;
    ;
    struct env1165 envinst1165;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1178 (   struct env1178 env ,    struct Editor_1042 *  ed2570 ,    struct Dims_1162  dims2572 ) {
    struct List_3 *  currow2573 = ( (  cursor_dash_row1149 ) ( (  ed2570 ) ) );
    struct funenv1165  temp1179 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  env.envinst1165  } );
    ( temp1179.fun ( temp1179.env ,  (  ed2570 ) ,  ( (  size_dash_i32270 ) ( ( (  size982 ) ( (  currow2573 ) ) ) ) ) ,  (  dims2572 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1180 (    struct Editor_1042 *  ed2579 ,    int32_t  col2581 ,    int32_t  row2583 ) {
    return (  eq41 ( (  col2581 ) , ( (  size_dash_i32270 ) ( ( (  size982 ) ( ( (  get_dash_row1148 ) ( (  ed2579 ) ,  (  row2583 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1181 (    struct Editor_1042 *  ed2586 ) {
    return (  eq41 ( ( ( ( * (  ed2586 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  size982 ) ( ( (  cursor_dash_row1149 ) ( (  ed2586 ) ) ) ) ) ) ) ) );
}

struct funenv1152 {
    enum Unit_13  (*fun) (  struct env1152  ,    struct Editor_1042 *  ,    int32_t  );
    struct env1152 env;
};

struct funenv967 {
    enum Unit_13  (*fun) (  struct env967  ,    struct List_3 *  ,    struct List_3 *  );
    struct env967 env;
};

struct funenv969 {
    enum Unit_13  (*fun) (  struct env969  ,    struct List_3 *  ,    struct Slice_5  );
    struct env969 env;
};

struct env1182 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1152 envinst1152;
    ;
    struct env961 envinst961;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env967 envinst967;
    ;
    ;
    ;
    ;
    struct env969 envinst969;
    ;
    ;
    ;
    struct env1161 envinst1161;
    ;
};

struct anon_1189 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1182 (   struct env1182 env ,    struct Editor_1042 *  ed2589 ,    struct Dims_1162  dims2591 ) {
    struct Maybe_897  dref2592 = ( ( * (  ed2589 ) ) .f_selected );
    if ( dref2592.tag == Maybe_897_None_t ) {
        struct List_3 *  row2593 = ( (  cursor_dash_row1149 ) ( (  ed2589 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2593 ) ) .f_count ) ) == 0 ) ) {
            struct funenv961  temp1183 = ( (struct funenv961){ .fun = remove961, .env =  env.envinst961  } );
            ( temp1183.fun ( temp1183.env ,  ( (  cursor_dash_row1149 ) ( (  ed2589 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1181 ) ( (  ed2589 ) ) ) ) {
                if ( (  cmp75 ( (  op_dash_sub83 ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1151 ) ( (  ed2589 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2594 = ( (  cursor_dash_row1149 ) ( (  ed2589 ) ) );
                    int32_t  next_dash_row_dash_id2595 = (  op_dash_add82 ( ( ( ( * (  ed2589 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2596 = ( (  get_dash_row1148 ) ( (  ed2589 ) ,  (  next_dash_row_dash_id2595 ) ) );
                    struct funenv967  temp1184 = ( (struct funenv967){ .fun = add_dash_all967, .env =  env.envinst967  } );
                    ( temp1184.fun ( temp1184.env ,  (  cur_dash_row2594 ) ,  (  next_dash_row2596 ) ) );
                    struct funenv1152  temp1185 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
                    ( temp1185.fun ( temp1185.env ,  (  ed2589 ) ,  (  next_dash_row_dash_id2595 ) ) );
                }
            }
        }
    }
    else if ( dref2592.tag == Maybe_897_Just_t ) {
        struct Cursor_742  cfrom2598 = ( (  min741 ) ( ( dref2592 .stuff .Maybe_897_Just_s .field0 ) ,  ( ( * (  ed2589 ) ) .f_cursor ) ) );
        struct Cursor_742  cto2599 = ( (  max746 ) ( ( dref2592 .stuff .Maybe_897_Just_s .field0 ) ,  ( ( * (  ed2589 ) ) .f_cursor ) ) );
        struct RangeIter_363  temp1186 =  into_dash_iter362 ( ( (  to360 ) ( (  op_dash_add82 ( ( (  cfrom2598 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub83 ( ( (  cto2599 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1187 =  next364 (&temp1186);
            if (  __cond1187 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2601 =  __cond1187 .stuff .Maybe_328_Just_s .field0;
            ( (  assert887 ) ( (  cmp75 ( (  row_dash_id2601 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1152  temp1188 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
            ( temp1188.fun ( temp1188.env ,  (  ed2589 ) ,  (  op_dash_add82 ( ( (  cfrom2598 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2602 = (  op_dash_sub83 ( ( (  cto2599 ) .f_y ) , ( (  max745 ) ( (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  cto2599 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add82 ( ( (  cfrom2598 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert887 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2602 ) , ( (  cfrom2598 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2602 ) , (  op_dash_add82 ( ( (  cfrom2598 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1189  cto2603 = ( (struct anon_1189) { .f_x = ( (  cto2599 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2602 ) } );
        bool  should_dash_merge_dash_next_dash_line2604 = ( (  is_dash_at_dash_line_dash_end1180 ) ( (  ed2589 ) ,  ( (  cto2603 ) .f_x ) ,  ( (  cto2603 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2604 ) ) {
            struct List_3 *  first_dash_row2605 = ( (  get_dash_row1148 ) ( (  ed2589 ) ,  ( (  cfrom2598 ) .f_y ) ) );
            ( (  trim973 ) ( (  first_dash_row2605 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2598 ) .f_x ) ) ) ) );
            struct funenv967  temp1190 = ( (struct funenv967){ .fun = add_dash_all967, .env =  env.envinst967  } );
            ( temp1190.fun ( temp1190.env ,  (  first_dash_row2605 ) ,  ( (  get_dash_row1148 ) ( (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2603 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            if ( (  eq41 ( ( (  cto2603 ) .f_y ) , ( (  cfrom2598 ) .f_y ) ) ) ) {
                struct funenv1152  temp1191 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
                ( temp1191.fun ( temp1191.env ,  (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2603 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
            } else {
                struct funenv1152  temp1192 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
                ( temp1192.fun ( temp1192.env ,  (  ed2589 ) ,  (  op_dash_add82 ( ( (  cto2603 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                struct funenv1152  temp1193 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
                ( temp1193.fun ( temp1193.env ,  (  ed2589 ) ,  ( (  cto2603 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2606 = ( (  get_dash_row1148 ) ( (  ed2589 ) ,  ( (  cfrom2598 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2603 ) .f_y ) , ( (  cfrom2598 ) .f_y ) ) ) ) {
                struct RangeIter_363  temp1194 =  into_dash_iter362 ( ( (  to360 ) ( ( (  cfrom2598 ) .f_x ) ,  ( (  min744 ) ( ( (  cto2603 ) .f_x ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  size982 ) ( (  first_dash_row2606 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_328  __cond1195 =  next364 (&temp1194);
                    if (  __cond1195 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2608 =  __cond1195 .stuff .Maybe_328_Just_s .field0;
                    struct funenv961  temp1196 = ( (struct funenv961){ .fun = remove961, .env =  env.envinst961  } );
                    ( temp1196.fun ( temp1196.env ,  (  first_dash_row2606 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2598 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim973 ) ( (  first_dash_row2606 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2598 ) .f_x ) ) ) ) );
                struct funenv969  temp1197 = ( (struct funenv969){ .fun = add_dash_all969, .env =  env.envinst969  } );
                ( temp1197.fun ( temp1197.env ,  (  first_dash_row2606 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice979 ) ( ( * ( (  get_dash_row1148 ) ( (  ed2589 ) ,  ( (  cto2603 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint984 ) ( (  op_dash_sub83 ( ( (  cto2603 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1152  temp1198 = ( (struct funenv1152){ .fun = remove_dash_row1152, .env =  env.envinst1152  } );
                ( temp1198.fun ( temp1198.env ,  (  ed2589 ) ,  ( (  cto2603 ) .f_y ) ) );
            }
        }
        (*  ed2589 ) .f_selected = ( (struct Maybe_897) { .tag = Maybe_897_None_t } );
        struct funenv1161  temp1199 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  env.envinst1161  } );
        ( temp1199.fun ( temp1199.env ,  (  ed2589 ) ,  ( (  cfrom2598 ) .f_x ) ,  ( (  cfrom2598 ) .f_y ) ,  (  dims2591 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv954 {
    enum Unit_13  (*fun) (  struct env954  ,    struct List_280 *  ,    size_t  ,    struct List_3  );
    struct env954 env;
};

struct funenv971 {
    enum Unit_13  (*fun) (  struct env971  ,    struct List_3 *  ,    struct TakeWhile_475  );
    struct env971 env;
};

struct env1200 {
    ;
    struct env954 envinst954;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env971 envinst971;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1200 (   struct env1200 env ,    struct Editor_1042 *  ed2611 ,    int32_t  y2613 ,    enum CAllocator_4  al2615 ) {
    struct List_3  temp1201 = ( (  mk949 ) ( (  al2615 ) ) );
    struct List_3 *  nurow2616 = ( &temp1201 );
    struct TakeWhile_475  rowws2617 = ( (  indent_dash_on_dash_row1150 ) ( (  ed2611 ) ,  ( ( ( * (  ed2611 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2618 = ( (  size_dash_i32270 ) ( ( (  count702 ) ( (  rowws2617 ) ) ) ) );
    struct funenv971  temp1202 = ( (struct funenv971){ .fun = add_dash_all971, .env =  env.envinst971  } );
    ( temp1202.fun ( temp1202.env ,  (  nurow2616 ) ,  (  rowws2617 ) ) );
    struct funenv954  temp1203 = ( (struct funenv954){ .fun = insert954, .env =  env.envinst954  } );
    ( temp1203.fun ( temp1203.env ,  ( & ( ( * (  ed2611 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2613 ) ) ) ,  ( * (  nurow2616 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1204 (    struct Editor_1042 *  ed2621 ,    struct Cursor_742  c2623 ) {
    return ( {  struct Maybe_897  dref2624 = ( ( * (  ed2621 ) ) .f_selected ) ; dref2624.tag == Maybe_897_Just_t ? ( (  between747 ) ( (  c2623 ) ,  ( ( * (  ed2621 ) ) .f_cursor ) ,  ( dref2624 .stuff .Maybe_897_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1205 (    char  c2628 ) {
    return ( (  is_dash_not_dash_whitespace934 ) ( (  c2628 ) ) );
}

struct funenv976 {
    struct List_280  (*fun) (  struct env976  ,    struct Map_299  ,    enum CAllocator_4  );
    struct env976 env;
};

struct env1206 {
    ;
    ;
    ;
    ;
    struct env302 envinst302;
    ;
    struct env976 envinst976;
    struct env531 envinst531;
    ;
    ;
    ;
    ;
};

static  struct List_3   lam301 (   struct env301 env ,    struct DynStr_129  line2668 ) {
    struct funenv302  temp1209 = ( (struct funenv302){ .fun = to_dash_list302, .env =  env.envinst302  } );
    return ( temp1209.fun ( temp1209.env ,  (  line2668 ) ,  ( env.al2637 ) ) );
}

static  struct List_280   load_dash_file1206 (   struct env1206 env ,    const char*  filename2635 ,    enum CAllocator_4  al2637 ) {
    struct funenv976  temp1208 = ( (struct funenv976){ .fun = to_dash_list976, .env =  env.envinst976  } );
    struct env301 envinst301 = {
        .envinst302 = env.envinst302 ,
        .al2637 =  al2637 ,
    };
    struct List_280  temp1207 = ( temp1208.fun ( temp1208.env ,  ( (  map332 ) ( ( (  lines935 ) ( ( (  read_dash_contents1142 ) ( (  filename2635 ) ,  (  al2637 ) ) ) ) ) ,  ( (struct funenv301){ .fun = lam301, .env = envinst301 } ) ) ) ,  (  al2637 ) ) );
    struct List_280 *  file2669 = ( &temp1207 );
    if ( ( (  null730 ) ( (  file2669 ) ) ) ) {
        struct funenv531  temp1210 = ( (struct funenv531){ .fun = add531, .env =  env.envinst531  } );
        ( temp1210.fun ( temp1210.env ,  (  file2669 ) ,  ( (  mk949 ) ( (  al2637 ) ) ) ) );
    }
    return ( * (  file2669 ) );
}

struct env1211 {
    ;
    ;
    ;
    struct env592 envinst592;
    ;
    ;
    ;
    enum CAllocator_4  al2632;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam591 (   struct env591 env ,    char  c2679 ) {
    struct funenv592  temp1215 = ( (struct funenv592){ .fun = write_dash_char592, .env =  env.envinst592  } );
    return ( temp1215.fun ( temp1215.env ,  ( env.sb2675 ) ,  (  c2679 ) ) );
}

static  enum Unit_13   save_dash_file1211 (   struct env1211 env ,    struct List_280  cf2672 ,    const char*  filename2674 ) {
    struct StrBuilder_537  temp1212 = ( (  mk1022 ) ( ( env.al2632 ) ) );
    struct StrBuilder_537 *  sb2675 = ( &temp1212 );
    struct SliceIter_278  temp1213 =  into_dash_iter281 ( (  cf2672 ) );
    while (true) {
        struct Maybe_314  __cond1214 =  next349 (&temp1213);
        if (  __cond1214 .tag == 0 ) {
            break;
        }
        struct List_3  row2677 =  __cond1214 .stuff .Maybe_314_Just_s .field0;
        struct env591 envinst591 = {
            .sb2675 =  sb2675 ,
            .envinst592 = env.envinst592 ,
        };
        ( (  for_dash_each590 ) ( (  row2677 ) ,  ( (struct funenv591){ .fun = lam591, .env = envinst591 } ) ) );
        struct funenv592  temp1216 = ( (struct funenv592){ .fun = write_dash_char592, .env =  env.envinst592  } );
        ( temp1216.fun ( temp1216.env ,  (  sb2675 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1144 ) ( (  filename2674 ) ,  ( (  as_dash_str767 ) ( (  sb2675 ) ) ) ) );
    ( (  free1023 ) ( (  sb2675 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1217 (    struct List_280  cf2682 ) {
    ( (  for_dash_each595 ) ( ( (  addresses981 ) ( (  cf2682 ) ) ) ,  (  free950 ) ) );
    ( (  free951 ) ( ( & (  cf2682 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1218 {
    ;
    ;
    int32_t  pad2683;
    ;
    ;
};

struct anon_1219 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1219   left_dash_offset1218 (   struct env1218 env ,    struct Editor_1042 *  ed2686 ) {
    int32_t  max_dash_digits2687 = ( (  max745 ) ( ( (  count_dash_digits751 ) ( ( ( ( * (  ed2686 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1219) { .f_max_dash_digits = (  max_dash_digits2687 ) , .f_total_dash_offset = (  op_dash_add82 ( (  op_dash_add82 ( ( env.pad2683 ) , (  max_dash_digits2687 ) ) ) , ( env.pad2683 ) ) ) } );
}

struct funenv1218 {
    struct anon_1219  (*fun) (  struct env1218  ,    struct Editor_1042 *  );
    struct env1218 env;
};

struct env1220 {
    ;
    struct env1218 envinst1218;
    ;
};

static  struct Dims_1162   screen_dash_dims1220 (   struct env1220 env ,    struct Editor_1042 *  ed2690 ,    struct Tui_608 *  tui2692 ) {
    struct funenv1218  temp1221 = ( (struct funenv1218){ .fun = left_dash_offset1218, .env =  env.envinst1218  } );
    return ( (struct Dims_1162) { .f_cols = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * (  tui2692 ) ) .f_width ) ) ) , ( ( temp1221.fun ( temp1221.env ,  (  ed2690 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32274 ) ( ( ( * (  tui2692 ) ) .f_height ) ) ) } );
}

struct env1222 {
    ;
    struct env1156 envinst1156;
    ;
    ;
    ;
    ;
    struct env312 envinst312;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad2683;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1218 envinst1218;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1222 (   struct env1222 env ,    struct Screen_607 *  screen2695 ,    struct Editor_1042 *  ed2697 ) {
    int32_t  w2698 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2695 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2699 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2695 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2700 = ( ( * (  ed2697 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2701 = ( ( * (  ed2697 ) ) .f_screen_dash_left );
    int32_t  x2702 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2703 = (  from_dash_integral29 ( 0 ) );
    ( (  assert887 ) ( (  cmp9 ( ( ( ( * (  ed2697 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1218  temp1223 = ( (struct funenv1218){ .fun = left_dash_offset1218, .env =  env.envinst1218  } );
    struct anon_1219  offstuff2704 = ( temp1223.fun ( temp1223.env ,  (  ed2697 ) ) );
    int32_t  max_dash_digits2705 = ( (  offstuff2704 ) .f_max_dash_digits );
    int32_t  left_dash_off2706 = ( (  offstuff2704 ) .f_total_dash_offset );
    struct Drop_339  temp1224 =  into_dash_iter338 ( ( (  drop355 ) ( ( (  zip454 ) ( ( ( * (  ed2697 ) ) .f_current_dash_file ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_y2700 ) ) ) ) ) );
    while (true) {
        struct Maybe_346  __cond1225 =  next345 (&temp1224);
        if (  __cond1225 .tag == 0 ) {
            break;
        }
        struct Tuple2_347  dref2707 =  __cond1225 .stuff .Maybe_346_Just_s .field0;
        int32_t  row_dash_num2710 = (  op_dash_add82 ( ( dref2707 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1226 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2683 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1227 =  next364 (&temp1226);
            if (  __cond1227 .tag == 0 ) {
                break;
            }
            int32_t  xx2712 =  __cond1227 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1124 ) ( (  screen2695 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2712 ) ,  (  y2703 ) ) );
        }
        ( (  draw_dash_str_dash_right1133 ) ( (  screen2695 ) ,  (  row_dash_num2710 ) ,  (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2695 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2705 ) ) ) , ( env.pad2683 ) ) ) ,  (  y2703 ) ) );
        struct RangeIter_363  temp1228 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2683 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1229 =  next364 (&temp1228);
            if (  __cond1229 .tag == 0 ) {
                break;
            }
            int32_t  xx2714 =  __cond1229 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1124 ) ( (  screen2695 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  xx2714 ) , ( env.pad2683 ) ) ) , (  max_dash_digits2705 ) ) ) ,  (  y2703 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2697 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( (  row_dash_num2710 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct Color_54  fg2715 = ( ( * (  screen2695 ) ) .f_default_dash_fg );
            struct Color_54  bg2716 = ( ( * (  screen2695 ) ) .f_default_dash_bg );
            struct RangeIter_363  temp1230 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  max_dash_digits2705 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_328  __cond1231 =  next364 (&temp1230);
                if (  __cond1231 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2718 =  __cond1231 .stuff .Maybe_328_Just_s .field0;
                struct Cell_53 *  cp2719 = ( (  or_dash_fail894 ) ( ( (  get_dash_cell_dash_ptr1118 ) ( (  screen2695 ) ,  (  op_dash_add82 ( (  xxx2718 ) , ( env.pad2683 ) ) ) ,  (  y2703 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2719 ) .f_fg = (  bg2716 );
                (*  cp2719 ) .f_bg = (  fg2715 );
            }
        }
        struct Drop_343  temp1232 =  into_dash_iter342 ( ( (  drop357 ) ( ( (  zip455 ) ( ( dref2707 .field0 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_x2701 ) ) ) ) ) );
        while (true) {
            struct Maybe_352  __cond1233 =  next351 (&temp1232);
            if (  __cond1233 .tag == 0 ) {
                break;
            }
            struct Tuple2_353  dref2720 =  __cond1233 .stuff .Maybe_352_Just_s .field0;
            bool  in_dash_selection2723 = ( (  is_dash_in_dash_selection1204 ) ( (  ed2697 ) ,  ( (struct Cursor_742) { .f_x = ( dref2720 .field1 ) , .f_y = ( dref2707 .field1 ) } ) ) );
            struct Color_54  og_dash_fg2724 = ( ( * (  screen2695 ) ) .f_default_dash_fg );
            struct Color_54  og_dash_bg2725 = ( ( * (  screen2695 ) ) .f_default_dash_bg );
            if ( (  in_dash_selection2723 ) ) {
                ( (  set_dash_screen_dash_colors1117 ) ( (  screen2695 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) ) );
            }
            if ( (  eq48 ( ( dref2720 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1124 ) ( (  screen2695 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2706 ) , (  x2702 ) ) ) ,  (  y2703 ) ) );
                x2702 = (  op_dash_add82 ( (  x2702 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1124 ) ( (  screen2695 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2706 ) , (  x2702 ) ) ) ,  (  y2703 ) ) );
            } else {
                ( (  put_dash_char1124 ) ( (  screen2695 ) ,  ( dref2720 .field0 ) ,  (  op_dash_add82 ( (  left_dash_off2706 ) , (  x2702 ) ) ) ,  (  y2703 ) ) );
            }
            if ( (  in_dash_selection2723 ) ) {
                ( (  set_dash_screen_dash_colors1117 ) ( (  screen2695 ) ,  (  og_dash_fg2724 ) ,  (  og_dash_bg2725 ) ) );
            }
            x2702 = (  op_dash_add82 ( (  x2702 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp75 ( (  x2702 ) , (  w2698 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp75 ( (  x2702 ) , (  w2698 ) ) == 0 ) && ( (  is_dash_in_dash_selection1204 ) ( (  ed2697 ) ,  ( (struct Cursor_742) { .f_x = ( (  size_dash_i32270 ) ( ( ( dref2707 .field0 ) .f_count ) ) ) , .f_y = ( dref2707 .field1 ) } ) ) ) ) ) {
            struct Cell_53 *  cell2726 = ( (  or_dash_fail894 ) ( ( (  get_dash_cell_dash_ptr1118 ) ( (  screen2695 ) ,  (  op_dash_add82 ( (  left_dash_off2706 ) , (  x2702 ) ) ) ,  (  y2703 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2726 ) .f_fg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) );
            (*  cell2726 ) .f_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) );
        }
        y2703 = (  op_dash_add82 ( (  y2703 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2702 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp75 ( (  y2703 ) , (  h2699 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_742  cur2727 = ( ( * (  ed2697 ) ) .f_cursor );
    struct funenv1156  temp1234 = ( (struct funenv1156){ .fun = x_dash_to_dash_visual_dash_x1156, .env =  env.envinst1156  } );
    int32_t  vx2728 = ( (  from_dash_visual1147 ) ( ( temp1234.fun ( temp1234.env ,  (  ed2697 ) ,  ( (  cur2727 ) .f_x ) ,  ( (  cur2727 ) .f_y ) ) ) ) );
    int32_t  len2729 = ( (  maybe1056 ) ( ( (  try_dash_get944 ) ( ( (  cursor_dash_row1149 ) ( (  ed2697 ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2727 ) .f_x ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_363  temp1235 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  len2729 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1236 =  next364 (&temp1235);
        if (  __cond1236 .tag == 0 ) {
            break;
        }
        int32_t  x2731 =  __cond1236 .stuff .Maybe_328_Just_s .field0;
        struct Cell_53 *  cursor_dash_cell2732 = ( (  or_dash_fail894 ) ( ( (  get_dash_cell_dash_ptr1118 ) ( (  screen2695 ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  op_dash_sub83 ( (  left_dash_off2706 ) , ( ( * (  ed2697 ) ) .f_screen_dash_left ) ) ) , (  vx2728 ) ) ) , (  x2731 ) ) ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2697 ) ) .f_cursor ) .f_y ) , (  from_dash_y2700 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2732 ) .f_fg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) );
        (*  cursor_dash_cell2732 ) .f_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1237 (    struct Maybe_1039 *  dref2734 ,    struct Screen_607 *  screen2737 ) {
    struct Maybe_1039  dref2738 = ( (* dref2734 ) );
    if ( dref2738.tag == Maybe_1039_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2738.tag == Maybe_1039_Just_t ) {
        struct Duration_1061  diff2740 = ( (  diff1062 ) ( ( (  now1058 ) ( ) ) ,  ( dref2738 .stuff .Maybe_1039_Just_s .field0 ) ) );
        struct Duration_1061  limit2741 = ( (  duration_dash_from_dash_ns1063 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1060 ( (  diff2740 ) , (  limit2741 ) ) == 2 ) ) {
            (* dref2734 ) = ( (struct Maybe_1039) { .tag = Maybe_1039_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2742 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2743 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2744 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1064 ) ( (  diff2740 ) ) ) , (  x_dash_fill2742 ) ) ) , ( (  duration_dash_to_dash_ns1064 ) ( (  limit2741 ) ) ) ) ) ) );
        int32_t  y_dash_progress2745 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1064 ) ( (  diff2740 ) ) ) , (  y_dash_fill2743 ) ) ) , ( (  duration_dash_to_dash_ns1064 ) ( (  limit2741 ) ) ) ) ) ) );
        uint32_t  center_dash_x2746 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2747 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1116 ) ( (  screen2737 ) ,  ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) ) );
        int32_t  x_dash_off2748 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  x_dash_fill2742 ) ) ) , (  x_dash_progress2744 ) ) );
        int32_t  y_dash_off2749 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  y_dash_fill2743 ) ) ) , (  y_dash_progress2745 ) ) );
        int32_t  h2750 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2751 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2737 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1238 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2750 ) ) ) );
        while (true) {
            struct Maybe_328  __cond1239 =  next364 (&temp1238);
            if (  __cond1239 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2753 =  __cond1239 .stuff .Maybe_328_Just_s .field0;
            struct RangeIter_363  temp1240 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2751 ) ) ) );
            while (true) {
                struct Maybe_328  __cond1241 =  next364 (&temp1240);
                if (  __cond1241 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2755 =  __cond1241 .stuff .Maybe_328_Just_s .field0;
                if ( ( ( ( (  cmp75 ( (  screen_dash_x2755 ) , (  x_dash_off2748 ) ) != 2 ) || (  cmp75 ( (  screen_dash_x2755 ) , (  op_dash_sub83 ( (  w2751 ) , (  x_dash_off2748 ) ) ) ) != 0 ) ) || (  cmp75 ( (  screen_dash_y2753 ) , (  y_dash_off2749 ) ) != 2 ) ) || (  cmp75 ( (  screen_dash_y2753 ) , (  op_dash_sub83 ( (  h2750 ) , (  y_dash_off2749 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1124 ) ( (  screen2737 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2755 ) ,  (  screen_dash_y2753 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1211 {
    enum Unit_13  (*fun) (  struct env1211  ,    struct List_280  ,    const char*  );
    struct env1211 env;
};

struct funenv1206 {
    struct List_280  (*fun) (  struct env1206  ,    const char*  ,    enum CAllocator_4  );
    struct env1206 env;
};

struct funenv1028 {
    const char*  (*fun) (  struct env1028  ,    struct TakeWhile_477  ,    enum CAllocator_4  );
    struct env1028 env;
};

struct funenv1032 {
    const char*  (*fun) (  struct env1032  ,    struct TakeWhile_484  ,    enum CAllocator_4  );
    struct env1032 env;
};

struct env1242 {
    ;
    ;
    ;
    ;
    struct env1211 envinst1211;
    struct env1167 envinst1167;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1206 envinst1206;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1028 envinst1028;
    struct env1032 envinst1032;
    ;
    ;
};

static  bool   lam1243 (    char  c2769 ) {
    return ( ! ( (  is_dash_whitespace933 ) ( (  c2769 ) ) ) );
}

static  bool   lam1247 (    char  c2777 ) {
    return ( ! ( (  is_dash_whitespace933 ) ( (  c2777 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1242 (   struct env1242 env ,    struct Editor_1042 *  ed2758 ,    struct DynStr_129  s2760 ,    struct Dims_1162  dim2762 ,    enum CAllocator_4  al2764 ) {
    struct DropWhile_480  s2765 = ( (  drop_dash_while502 ) ( (  s2760 ) ,  (  is_dash_whitespace933 ) ) );
    struct TakeWhile_482  cmd2766 = ( (  take_dash_while499 ) ( (  s2765 ) ,  (  is_dash_not_dash_whitespace934 ) ) );
    struct DropWhile_478  rest2767 = ( (  drop_dash_while505 ) ( ( (  drop_dash_while504 ) ( (  s2765 ) ,  (  is_dash_not_dash_whitespace934 ) ) ) ,  (  is_dash_whitespace933 ) ) );
    if ( ( (  eq870 ) ( (  cmd2766 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_477  filename2770 = ( (  take_dash_while498 ) ( (  rest2767 ) ,  (  lam1243 ) ) );
        const char*  temp1244;
        const char*  alfname2771 = (  temp1244 );
        if ( ( (  null732 ) ( (  filename2770 ) ) ) ) {
            struct Maybe_265  dref2772 = ( ( * (  ed2758 ) ) .f_filename );
            if ( dref2772.tag == Maybe_265_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2772.tag == Maybe_265_Just_t ) {
                alfname2771 = ( dref2772 .stuff .Maybe_265_Just_s .field0 );
            }
        } else {
            struct Maybe_265  dref2774 = ( ( * (  ed2758 ) ) .f_filename );
            if ( dref2774.tag == Maybe_265_None_t ) {
            }
            else if ( dref2774.tag == Maybe_265_Just_t ) {
                ( (  free925 ) ( (  al2764 ) ,  ( (struct Slice_926) { .f_ptr = ( (  cast187 ) ( ( dref2774 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1028  temp1245 = ( (struct funenv1028){ .fun = mk_dash_const_dash_str1028, .env =  env.envinst1028  } );
            alfname2771 = ( temp1245.fun ( temp1245.env ,  (  filename2770 ) ,  (  al2764 ) ) );
        }
        struct funenv1211  temp1246 = ( (struct funenv1211){ .fun = save_dash_file1211, .env =  env.envinst1211  } );
        ( temp1246.fun ( temp1246.env ,  ( ( * (  ed2758 ) ) .f_current_dash_file ) ,  (  alfname2771 ) ) );
        (*  ed2758 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2771 ) ) );
    } else {
        if ( ( (  eq870 ) ( (  cmd2766 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2758 ) .f_running = ( false );
        } else {
            if ( ( (  eq870 ) ( (  cmd2766 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_484  filename2778 = ( (  take_dash_while496 ) ( (  rest2767 ) ,  (  lam1247 ) ) );
                struct funenv1032  temp1248 = ( (struct funenv1032){ .fun = mk_dash_const_dash_str1032, .env =  env.envinst1032  } );
                const char*  alfname2779 = ( temp1248.fun ( temp1248.env ,  (  filename2778 ) ,  (  al2764 ) ) );
                struct List_280  og2780 = ( ( * (  ed2758 ) ) .f_current_dash_file );
                struct funenv1206  temp1249 = ( (struct funenv1206){ .fun = load_dash_file1206, .env =  env.envinst1206  } );
                (*  ed2758 ) .f_current_dash_file = ( temp1249.fun ( temp1249.env ,  (  alfname2779 ) ,  (  al2764 ) ) );
                struct Maybe_265  dref2781 = ( ( * (  ed2758 ) ) .f_filename );
                if ( dref2781.tag == Maybe_265_None_t ) {
                }
                else if ( dref2781.tag == Maybe_265_Just_t ) {
                    ( (  free925 ) ( (  al2764 ) ,  ( (struct Slice_926) { .f_ptr = ( (  cast187 ) ( ( dref2781 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2758 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2779 ) ) );
                (*  ed2758 ) .f_cursor = ( (struct Cursor_742) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2758 ) .f_goal_dash_x = ( ( Visual_1043_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2758 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1217 ) ( (  og2780 ) ) );
            } else {
                struct Maybe_674  dref2783 = ( (  parse_dash_int940 ) ( (  cmd2766 ) ) );
                if ( dref2783.tag == Maybe_674_Just_t ) {
                    int32_t  newline2785 = ( (  clamp748 ) ( ( (  i64_dash_i32269 ) ( (  op_dash_sub79 ( ( dref2783 .stuff .Maybe_674_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2758 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                    struct funenv1167  temp1250 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  env.envinst1167  } );
                    ( temp1250.fun ( temp1250.env ,  (  ed2758 ) ,  (  newline2785 ) ,  (  dim2762 ) ) );
                }
                else if ( dref2783.tag == Maybe_674_None_t ) {
                    return ( Unit_13_Unit );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1024 {
    const char*  (*fun) (  struct env1024  ,    const char*  ,    enum CAllocator_4  );
    struct env1024 env;
};

struct funenv1075 {
    struct Tui_608  (*fun) (  struct env1075  );
    struct env1075 env;
};

struct funenv1220 {
    struct Dims_1162  (*fun) (  struct env1220  ,    struct Editor_1042 *  ,    struct Tui_608 *  );
    struct env1220 env;
};

struct funenv1169 {
    bool  (*fun) (  struct env1169  ,    struct Editor_1042 *  ,    struct Dims_1162  );
    struct env1169 env;
};

struct funenv1173 {
    bool  (*fun) (  struct env1173  ,    struct Editor_1042 *  ,    struct Dims_1162  );
    struct env1173 env;
};

struct funenv1182 {
    enum Unit_13  (*fun) (  struct env1182  ,    struct Editor_1042 *  ,    struct Dims_1162  );
    struct env1182 env;
};

struct funenv1176 {
    enum Unit_13  (*fun) (  struct env1176  ,    struct Editor_1042 *  ,    struct Dims_1162  );
    struct env1176 env;
};

struct funenv1178 {
    enum Unit_13  (*fun) (  struct env1178  ,    struct Editor_1042 *  ,    struct Dims_1162  );
    struct env1178 env;
};

struct funenv1200 {
    enum Unit_13  (*fun) (  struct env1200  ,    struct Editor_1042 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1200 env;
};

static  int32_t   lam1284 (    struct Cursor_742  s2808 ) {
    return ( (  s2808 ) .f_x );
}

static  int32_t   lam1290 (    struct Cursor_742  s2812 ) {
    return ( (  s2812 ) .f_x );
}

static  bool   lam1294 (    char  c2816 ) {
    return ( (  is_dash_word_dash_char1205 ) ( (  c2816 ) ) );
}

static  bool   lam1296 (    char  c2818 ) {
    return ( ! ( (  is_dash_word_dash_char1205 ) ( (  c2818 ) ) ) );
}

static  bool   lam1302 (    char  c2822 ) {
    return ( ! ( (  is_dash_word_dash_char1205 ) ( (  c2822 ) ) ) );
}

static  bool   lam1304 (    char  c2824 ) {
    return ( (  is_dash_word_dash_char1205 ) ( (  c2824 ) ) );
}

static  bool   lam1310 (    char  c2828 ) {
    return ( ! ( (  is_dash_word_dash_char1205 ) ( (  c2828 ) ) ) );
}

static  bool   lam1312 (    char  c2830 ) {
    return ( (  is_dash_word_dash_char1205 ) ( (  c2830 ) ) );
}

static  bool   lam1314 (    char  c2832 ) {
    return ( ! ( (  is_dash_word_dash_char1205 ) ( (  c2832 ) ) ) );
}

struct funenv957 {
    enum Unit_13  (*fun) (  struct env957  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env957 env;
};

struct funenv1019 {
    enum Unit_13  (*fun) (  struct env1019  ,    struct StrBuilder_537 *  );
    struct env1019 env;
};

struct funenv1242 {
    enum Unit_13  (*fun) (  struct env1242  ,    struct Editor_1042 *  ,    struct DynStr_129  ,    struct Dims_1162  ,    enum CAllocator_4  );
    struct env1242 env;
};

struct funenv1113 {
    bool  (*fun) (  struct env1113  ,    struct Screen_607 *  );
    struct env1113 env;
};

struct funenv1222 {
    enum Unit_13  (*fun) (  struct env1222  ,    struct Screen_607 *  ,    struct Editor_1042 *  );
    struct env1222 env;
};

static  struct Maybe_297   lam1041 (   struct env1041 env ,    struct List_3  l2856 ) {
    return ( (  try_dash_get944 ) ( ( & (  l2856 ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * ( env.ed2791 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_353   lam1343 (    char  c2858 ) {
    return ( ( Tuple2_353_Tuple2 ) ( (  c2858 ) ,  ( (  char_dash_i32874 ) ( (  c2858 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1628 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1629 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1630 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env532 envinst532 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env305 envinst305 = {
        .growth_dash_factor1629 =  growth_dash_factor1629 ,
        .starting_dash_size1628 =  starting_dash_size1628 ,
    };
    struct env531 envinst531 = {
        .envinst532 = envinst532 ,
    };
    struct env304 envinst304 = {
        .envinst305 = envinst305 ,
    };
    struct env954 envinst954 = {
        .envinst531 = envinst531 ,
        .envinst532 = envinst532 ,
    };
    struct env957 envinst957 = {
        .envinst304 = envinst304 ,
        .envinst305 = envinst305 ,
    };
    struct env960 envinst960 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env961 envinst961 = {
        .shrink_dash_factor1630 =  shrink_dash_factor1630 ,
    };
    struct env962 envinst962 = {
        .envinst961 = envinst961 ,
    };
    struct env303 envinst303 = {
        .envinst304 = envinst304 ,
    };
    struct env965 envinst965 = {
        .envinst531 = envinst531 ,
    };
    struct env967 envinst967 = {
        .envinst304 = envinst304 ,
    };
    struct env969 envinst969 = {
        .envinst304 = envinst304 ,
    };
    struct env971 envinst971 = {
        .envinst304 = envinst304 ,
    };
    struct env302 envinst302 = {
        .envinst303 = envinst303 ,
    };
    struct env976 envinst976 = {
        .envinst965 = envinst965 ,
    };
    struct env1012 envinst1012 = {
        .envinst304 = envinst304 ,
    };
    struct env1014 envinst1014 = {
        .envinst304 = envinst304 ,
    };
    struct env1016 envinst1016 = {
        .envinst304 = envinst304 ,
    };
    struct env592 envinst592 = {
        .envinst304 = envinst304 ,
    };
    struct env1019 envinst1019 = {
        .envinst962 = envinst962 ,
    };
    struct env1024 envinst1024 = {
        .envinst1012 = envinst1012 ,
        .envinst592 = envinst592 ,
    };
    struct env1028 envinst1028 = {
        .envinst1014 = envinst1014 ,
        .envinst592 = envinst592 ,
    };
    struct env1032 envinst1032 = {
        .envinst1016 = envinst1016 ,
        .envinst592 = envinst592 ,
    };
    bool  temp1074 = ( false );
    bool *  should_dash_resize2216 = ( &temp1074 );
    struct env1075 envinst1075 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1098 envinst1098 = {
        .should_dash_resize2216 =  should_dash_resize2216 ,
    };
    struct env1113 envinst1113 = {
        .envinst1098 = envinst1098 ,
    };
    int32_t  tab_dash_size2430 = (  from_dash_integral29 ( 2 ) );
    struct env312 envinst312 = {
        .tab_dash_size2430 =  tab_dash_size2430 ,
    };
    struct env1152 envinst1152 = {
        .envinst960 = envinst960 ,
    };
    struct env1156 envinst1156 = {
        .envinst312 = envinst312 ,
    };
    struct env1157 envinst1157 = {
        .envinst312 = envinst312 ,
    };
    struct env1161 envinst1161 = {
        .envinst1156 = envinst1156 ,
        .envinst1157 = envinst1157 ,
    };
    struct env1165 envinst1165 = {
        .envinst1161 = envinst1161 ,
    };
    struct env1167 envinst1167 = {
        .envinst1161 = envinst1161 ,
    };
    struct env1169 envinst1169 = {
        .envinst1165 = envinst1165 ,
        .envinst1167 = envinst1167 ,
    };
    struct env1173 envinst1173 = {
        .envinst1165 = envinst1165 ,
        .envinst1161 = envinst1161 ,
    };
    struct env1176 envinst1176 = {
        .envinst1165 = envinst1165 ,
    };
    struct env1178 envinst1178 = {
        .envinst1165 = envinst1165 ,
    };
    struct env1182 envinst1182 = {
        .envinst1152 = envinst1152 ,
        .envinst961 = envinst961 ,
        .envinst967 = envinst967 ,
        .envinst969 = envinst969 ,
        .envinst1161 = envinst1161 ,
    };
    struct env1200 envinst1200 = {
        .envinst954 = envinst954 ,
        .envinst971 = envinst971 ,
    };
    enum CAllocator_4  al2632 = ( (  idc919 ) ( ) );
    struct env1206 envinst1206 = {
        .envinst302 = envinst302 ,
        .envinst976 = envinst976 ,
        .envinst531 = envinst531 ,
    };
    struct env1211 envinst1211 = {
        .envinst592 = envinst592 ,
        .al2632 =  al2632 ,
    };
    int32_t  pad2683 = (  from_dash_integral29 ( 2 ) );
    struct env1218 envinst1218 = {
        .pad2683 =  pad2683 ,
    };
    struct env1220 envinst1220 = {
        .envinst1218 = envinst1218 ,
    };
    struct env1222 envinst1222 = {
        .envinst1156 = envinst1156 ,
        .envinst312 = envinst312 ,
        .pad2683 =  pad2683 ,
        .envinst1218 = envinst1218 ,
    };
    struct env1242 envinst1242 = {
        .envinst1211 = envinst1211 ,
        .envinst1167 = envinst1167 ,
        .envinst1206 = envinst1206 ,
        .envinst1028 = envinst1028 ,
        .envinst1032 = envinst1032 ,
    };
    struct Slice_903  args2788 = ( (  get1145 ) ( ) );
    struct List_280  temp1251;
    struct List_280  file2789 = (  temp1251 );
    struct Maybe_265  mfilename2790 = ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    if ( (  eq45 ( ( (  args2788 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2789 = ( (  mk948 ) ( (  al2632 ) ) );
        struct funenv531  temp1252 = ( (struct funenv531){ .fun = add531, .env =  envinst531  } );
        ( temp1252.fun ( temp1252.env ,  ( & (  file2789 ) ) ,  ( (  mk949 ) ( (  al2632 ) ) ) ) );
    } else {
        struct funenv1206  temp1253 = ( (struct funenv1206){ .fun = load_dash_file1206, .env =  envinst1206  } );
        file2789 = ( temp1253.fun ( temp1253.env ,  (  elem_dash_get913 ( (  args2788 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2632 ) ) );
        struct funenv1024  temp1254 = ( (struct funenv1024){ .fun = mk_dash_const_dash_str1024, .env =  envinst1024  } );
        mfilename2790 = ( ( Maybe_265_Just ) ( ( temp1254.fun ( temp1254.env ,  (  elem_dash_get913 ( (  args2788 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2632 ) ) ) ) );
    }
    struct Editor_1042  temp1255 = ( (struct Editor_1042) { .f_cursor = ( (struct Cursor_742) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1043_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2789 ) , .f_filename = (  mfilename2790 ) , .f_mode = ( (struct Mode_761) { .tag = Mode_761_Normal_t } ) , .f_anim = ( ( Maybe_1039_Just ) ( ( (  now1058 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_897) { .tag = Maybe_897_None_t } ) } );
    struct Editor_1042 *  ed2791 = ( &temp1255 );
    struct funenv1075  temp1257 = ( (struct funenv1075){ .fun = mk1075, .env =  envinst1075  } );
    struct Tui_608  temp1256 = ( temp1257.fun ( temp1257.env ) );
    struct Tui_608 *  tui2792 = ( &temp1256 );
    enum CAllocator_4  al2793 = ( (  idc919 ) ( ) );
    struct Screen_607  temp1258 = ( (  mk_dash_screen1099 ) ( (  tui2792 ) ,  (  al2793 ) ) );
    struct Screen_607 *  screen2794 = ( &temp1258 );
    uint32_t  counter2795 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2796 = ( true );
    while ( ( ( * (  ed2791 ) ) .f_running ) ) {
        int32_t  events2797 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_510  temp1259 =  into_dash_iter509 ( ( (  from_dash_function516 ) ( (  read_dash_key1092 ) ) ) );
        while (true) {
            struct Maybe_511  __cond1260 =  next515 (&temp1259);
            if (  __cond1260 .tag == 0 ) {
                break;
            }
            struct InputEvent_512  ev2799 =  __cond1260 .stuff .Maybe_511_Just_s .field0;
            events2797 = (  op_dash_add82 ( (  events2797 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1098  temp1261 = ( (struct funenv1098){ .fun = update_dash_dimensions1098, .env =  envinst1098  } );
            ( temp1261.fun ( temp1261.env ,  (  tui2792 ) ) );
            struct InputEvent_512  dref2800 = (  ev2799 );
            if ( dref2800.tag == InputEvent_512_Key_t ) {
                struct Key_513  dref2802 = ( dref2800 .stuff .InputEvent_512_Key_s .field0 );
                if ( dref2802.tag == Key_513_Char_t ) {
                    struct Mode_761 *  dref2804 = ( & ( ( * (  ed2791 ) ) .f_mode ) );
                    if ( (* dref2804 ).tag == Mode_761_Normal_t ) {
                        int32_t  code2805 = ( (  u8_dash_i32276 ) ( ( (  cast194 ) ( ( dref2802 .stuff .Key_513_Char_s .field0 ) ) ) ) );
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_running = ( false );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                            struct funenv1167  temp1262 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                            struct funenv1220  temp1263 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1262.fun ( temp1262.env ,  (  ed2791 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1263.fun ( temp1263.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                            struct funenv1167  temp1264 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                            struct funenv1220  temp1265 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1264.fun ( temp1264.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1265.fun ( temp1265.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                            struct funenv1169  temp1266 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                            struct funenv1220  temp1267 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1266.fun ( temp1266.env ,  (  ed2791 ) ,  ( temp1267.fun ( temp1267.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                            struct funenv1173  temp1268 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                            struct funenv1220  temp1269 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1268.fun ( temp1268.env ,  (  ed2791 ) ,  ( temp1269.fun ( temp1269.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                            struct funenv1182  temp1270 = ( (struct funenv1182){ .fun = delete_dash_selected1182, .env =  envinst1182  } );
                            struct funenv1220  temp1271 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1270.fun ( temp1270.env ,  (  ed2791 ) ,  ( temp1271.fun ( temp1271.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                            struct funenv1182  temp1272 = ( (struct funenv1182){ .fun = delete_dash_selected1182, .env =  envinst1182  } );
                            struct funenv1220  temp1273 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1272.fun ( temp1272.env ,  (  ed2791 ) ,  ( temp1273.fun ( temp1273.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                            struct funenv1176  temp1274 = ( (struct funenv1176){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1176, .env =  envinst1176  } );
                            struct funenv1220  temp1275 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1274.fun ( temp1274.env ,  (  ed2791 ) ,  ( temp1275.fun ( temp1275.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                            struct funenv1178  temp1276 = ( (struct funenv1178){ .fun = move_dash_to_dash_end_dash_of_dash_line1178, .env =  envinst1178  } );
                            struct funenv1220  temp1277 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1276.fun ( temp1276.env ,  (  ed2791 ) ,  ( temp1277.fun ( temp1277.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                            struct funenv1200  temp1278 = ( (struct funenv1200){ .fun = insert_dash_empty_dash_row_dash_at1200, .env =  envinst1200  } );
                            ( temp1278.fun ( temp1278.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2793 ) ) );
                            struct List_3 *  currow2806 = ( (  get_dash_row1148 ) ( (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1161  temp1279 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  envinst1161  } );
                            struct funenv1220  temp1280 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1279.fun ( temp1279.env ,  (  ed2791 ) ,  ( (  size_dash_i32270 ) ( ( (  size982 ) ( (  currow2806 ) ) ) ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1280.fun ( temp1280.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                            struct funenv1200  temp1281 = ( (struct funenv1200){ .fun = insert_dash_empty_dash_row_dash_at1200, .env =  envinst1200  } );
                            ( temp1281.fun ( temp1281.env ,  (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ,  (  al2793 ) ) );
                            struct funenv1178  temp1282 = ( (struct funenv1178){ .fun = move_dash_to_dash_end_dash_of_dash_line1178, .env =  envinst1178  } );
                            struct funenv1220  temp1283 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1282.fun ( temp1282.env ,  (  ed2791 ) ,  ( temp1283.fun ( temp1283.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Insert_t } );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                            (*  ed2791 ) .f_mode = ( ( Mode_761_Cmd ) ( ( (  mk1022 ) ( (  al2793 ) ) ) ) );
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                            if ( ( (  eq41 ( ( (  maybe1047 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  (  lam1284 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1181 ) ( (  ed2791 ) ) ) ) ) {
                                struct funenv1220  temp1285 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                                struct Dims_1162  dims2809 = ( temp1285.fun ( temp1285.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                                struct Cursor_742  sel2810 = ( (  or_dash_else896 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  ( ( * (  ed2791 ) ) .f_cursor ) ) );
                                struct funenv1167  temp1286 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                                ( temp1286.fun ( temp1286.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2809 ) ) );
                                struct funenv1178  temp1287 = ( (struct funenv1178){ .fun = move_dash_to_dash_end_dash_of_dash_line1178, .env =  envinst1178  } );
                                ( temp1287.fun ( temp1287.env ,  (  ed2791 ) ,  (  dims2809 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_897_Just ) ( (  sel2810 ) ) );
                            } else {
                                struct funenv1178  temp1288 = ( (struct funenv1178){ .fun = move_dash_to_dash_end_dash_of_dash_line1178, .env =  envinst1178  } );
                                struct funenv1220  temp1289 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                                ( temp1288.fun ( temp1288.env ,  (  ed2791 ) ,  ( temp1289.fun ( temp1289.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_897_Just ) ( ( (struct Cursor_742) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1048 ) ( ( ( * (  ed2791 ) ) .f_selected ) ,  (  lam1290 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                            struct funenv1220  temp1291 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            struct Dims_1162  dims2813 = ( temp1291.fun ( temp1291.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_742  first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1173  temp1292 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                            ( temp1292.fun ( temp1292.env ,  (  ed2791 ) ,  (  dims2813 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) , ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at1154 ) ( (  ed2791 ) ,  (  first_dash_pos2814 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) ) ) ) {
                                first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1181 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1173  temp1293 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1293.fun ( temp1293.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2814 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1049 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1294 ) ,  ( false ) ) ) ) {
                                struct funenv1173  temp1295 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1295.fun ( temp1295.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1050 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1296 ) ,  ( false ) ) ) ) {
                                struct funenv1173  temp1297 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1297.fun ( temp1297.env ,  (  ed2791 ) ,  (  dims2813 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1146 ( (  first_dash_pos2814 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                struct funenv1169  temp1298 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                                ( temp1298.fun ( temp1298.env ,  (  ed2791 ) ,  (  dims2813 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_897_Just ) ( (  first_dash_pos2814 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                            struct funenv1220  temp1299 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            struct Dims_1162  dims2819 = ( temp1299.fun ( temp1299.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_742  first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1173  temp1300 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                            ( temp1300.fun ( temp1300.env ,  (  ed2791 ) ,  (  dims2819 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) , ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at1154 ) ( (  ed2791 ) ,  (  first_dash_pos2820 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) ) ) ) {
                                first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1181 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1173  temp1301 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1301.fun ( temp1301.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2820 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1051 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1302 ) ,  ( false ) ) ) ) {
                                struct funenv1173  temp1303 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1303.fun ( temp1303.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1052 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1304 ) ,  ( false ) ) ) ) {
                                struct funenv1173  temp1305 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                if ( ( ! ( temp1305.fun ( temp1305.env ,  (  ed2791 ) ,  (  dims2819 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1146 ( (  first_dash_pos2820 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                struct funenv1169  temp1306 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                                ( temp1306.fun ( temp1306.env ,  (  ed2791 ) ,  (  dims2819 ) ) );
                                (*  ed2791 ) .f_selected = ( ( Maybe_897_Just ) ( (  first_dash_pos2820 ) ) );
                            }
                        }
                        if ( (  eq48 ( ( dref2802 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                            struct funenv1220  temp1307 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            struct Dims_1162  dims2825 = ( temp1307.fun ( temp1307.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                            struct Cursor_742  first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            struct funenv1169  temp1308 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                            ( temp1308.fun ( temp1308.env ,  (  ed2791 ) ,  (  dims2825 ) ) );
                            if ( ( !  eq49 ( ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) , ( (  fmap_dash_maybe1045 ) ( ( (  char_dash_at1154 ) ( (  ed2791 ) ,  (  first_dash_pos2826 ) ) ) ,  (  is_dash_word_dash_char1205 ) ) ) ) ) ) {
                                first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1181 ) ( (  ed2791 ) ) ) ) {
                                struct funenv1169  temp1309 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                                if ( ( ! ( temp1309.fun ( temp1309.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                                first_dash_pos2826 = ( ( * (  ed2791 ) ) .f_cursor );
                            }
                            while ( ( (  maybe1053 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1310 ) ,  ( false ) ) ) ) {
                                struct funenv1169  temp1311 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                                if ( ( ! ( temp1311.fun ( temp1311.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                            }
                            while ( ( (  maybe1054 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1312 ) ,  ( false ) ) ) ) {
                                struct funenv1169  temp1313 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                                if ( ( ! ( temp1313.fun ( temp1313.env ,  (  ed2791 ) ,  (  dims2825 ) ) ) ) ) {
                                    break;
                                }
                            }
                            if ( ( !  eq1146 ( (  first_dash_pos2826 ) , ( ( * (  ed2791 ) ) .f_cursor ) ) ) ) {
                                if ( ( (  maybe1055 ) ( ( (  char_dash_at_dash_cursor1155 ) ( (  ed2791 ) ) ) ,  (  lam1314 ) ,  ( true ) ) ) ) {
                                    struct funenv1173  temp1315 = ( (struct funenv1173){ .fun = move_dash_right1173, .env =  envinst1173  } );
                                    ( temp1315.fun ( temp1315.env ,  (  ed2791 ) ,  (  dims2825 ) ) );
                                }
                                (*  ed2791 ) .f_selected = ( ( Maybe_897_Just ) ( (  first_dash_pos2826 ) ) );
                            }
                        }
                    }
                    else if ( (* dref2804 ).tag == Mode_761_Insert_t ) {
                        struct funenv957  temp1316 = ( (struct funenv957){ .fun = insert957, .env =  envinst957  } );
                        ( temp1316.fun ( temp1316.env ,  ( (  cursor_dash_row1149 ) ( (  ed2791 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2802 .stuff .Key_513_Char_s .field0 ) ) );
                        struct funenv1165  temp1317 = ( (struct funenv1165){ .fun = move_dash_to_dash_col1165, .env =  envinst1165  } );
                        struct funenv1220  temp1318 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                        ( temp1317.fun ( temp1317.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1318.fun ( temp1318.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    else if ( (* dref2804 ).tag == Mode_761_Cmd_t ) {
                        struct funenv592  temp1319 = ( (struct funenv592){ .fun = write_dash_char592, .env =  envinst592  } );
                        ( temp1319.fun ( temp1319.env ,  ( & ( (* dref2804 ) .stuff .Mode_761_Cmd_s .field0 ) ) ,  ( dref2802 .stuff .Key_513_Char_s .field0 ) ) );
                    }
                }
                else if ( dref2802.tag == Key_513_Ctrl_t ) {
                    if ( (  eq48 ( ( dref2802 .stuff .Key_513_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2791 ) .f_screen_dash_top = ( (  max745 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1167  temp1320 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                        struct funenv1220  temp1321 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                        ( temp1320.fun ( temp1320.env ,  (  ed2791 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1321.fun ( temp1321.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref2802 .stuff .Key_513_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2791 ) .f_screen_dash_top = ( (  max745 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1167  temp1322 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                        struct funenv1220  temp1323 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                        ( temp1322.fun ( temp1322.env ,  (  ed2791 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1323.fun ( temp1323.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                }
                else if ( dref2802.tag == Key_513_Escape_t ) {
                    struct Mode_761  dref2835 = ( ( * (  ed2791 ) ) .f_mode );
                    if ( dref2835.tag == Mode_761_Normal_t ) {
                    }
                    else if ( dref2835.tag == Mode_761_Insert_t ) {
                        (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Normal_t } );
                    }
                    else if ( dref2835.tag == Mode_761_Cmd_t ) {
                        ( (  free1023 ) ( ( & ( dref2835 .stuff .Mode_761_Cmd_s .field0 ) ) ) );
                        (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Normal_t } );
                    }
                }
                else if ( dref2802.tag == Key_513_Backspace_t ) {
                    struct Mode_761 *  dref2837 = ( & ( ( * (  ed2791 ) ) .f_mode ) );
                    if ( (* dref2837 ).tag == Mode_761_Normal_t ) {
                    }
                    else if ( (* dref2837 ).tag == Mode_761_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1169  temp1324 = ( (struct funenv1169){ .fun = move_dash_left1169, .env =  envinst1169  } );
                            struct funenv1220  temp1325 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1324.fun ( temp1324.env ,  (  ed2791 ) ,  ( temp1325.fun ( temp1325.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                            struct funenv1182  temp1326 = ( (struct funenv1182){ .fun = delete_dash_selected1182, .env =  envinst1182  } );
                            struct funenv1220  temp1327 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1326.fun ( temp1326.env ,  (  ed2791 ) ,  ( temp1327.fun ( temp1327.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                    }
                    else if ( (* dref2837 ).tag == Mode_761_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1021 ) ( ( & ( (* dref2837 ) .stuff .Mode_761_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1019  temp1328 = ( (struct funenv1019){ .fun = pop1019, .env =  envinst1019  } );
                            ( temp1328.fun ( temp1328.env ,  ( & ( (* dref2837 ) .stuff .Mode_761_Cmd_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2802.tag == Key_513_Enter_t ) {
                    struct Mode_761  dref2839 = ( ( * (  ed2791 ) ) .f_mode );
                    if ( dref2839.tag == Mode_761_Normal_t ) {
                    }
                    else if ( dref2839.tag == Mode_761_Insert_t ) {
                        int32_t  cx2840 = ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1329 = ( (  mk949 ) ( (  al2793 ) ) );
                        struct List_3 *  nurow2841 = ( &temp1329 );
                        struct TakeWhile_475  rowws2842 = ( (  indent_dash_on_dash_row1150 ) ( (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2843 = ( (  size_dash_i32270 ) ( ( (  count702 ) ( (  rowws2842 ) ) ) ) );
                        struct funenv971  temp1330 = ( (struct funenv971){ .fun = add_dash_all971, .env =  envinst971  } );
                        ( temp1330.fun ( temp1330.env ,  (  nurow2841 ) ,  (  rowws2842 ) ) );
                        struct List_3 *  cur_dash_row2844 = ( (  cursor_dash_row1149 ) ( (  ed2791 ) ) );
                        struct funenv969  temp1331 = ( (struct funenv969){ .fun = add_dash_all969, .env =  envinst969  } );
                        ( temp1331.fun ( temp1331.env ,  (  nurow2841 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice979 ) ( ( * (  cur_dash_row2844 ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  cx2840 ) ) ) ,  ( ( * (  cur_dash_row2844 ) ) .f_count ) ) ) ) );
                        ( (  trim973 ) ( (  cur_dash_row2844 ) ,  ( (  i32_dash_size268 ) ( (  cx2840 ) ) ) ) );
                        struct funenv954  temp1332 = ( (struct funenv954){ .fun = insert954, .env =  envinst954  } );
                        ( temp1332.fun ( temp1332.env ,  ( & ( ( * (  ed2791 ) ) .f_current_dash_file ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2841 ) ) ) );
                        struct funenv1161  temp1333 = ( (struct funenv1161){ .fun = move_dash_to1161, .env =  envinst1161  } );
                        struct funenv1220  temp1334 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                        ( temp1333.fun ( temp1333.env ,  (  ed2791 ) ,  (  offchars2843 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1334.fun ( temp1334.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                    }
                    else if ( dref2839.tag == Mode_761_Cmd_t ) {
                        struct DynStr_129  s2846 = ( (  as_dash_str767 ) ( ( & ( dref2839 .stuff .Mode_761_Cmd_s .field0 ) ) ) );
                        struct funenv1242  temp1335 = ( (struct funenv1242){ .fun = run_dash_cmd1242, .env =  envinst1242  } );
                        struct funenv1220  temp1336 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                        ( temp1335.fun ( temp1335.env ,  (  ed2791 ) ,  (  s2846 ) ,  ( temp1336.fun ( temp1336.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ,  (  al2793 ) ) );
                        ( (  free1023 ) ( ( & ( dref2839 .stuff .Mode_761_Cmd_s .field0 ) ) ) );
                        (*  ed2791 ) .f_mode = ( (struct Mode_761) { .tag = Mode_761_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2800.tag == InputEvent_512_Mouse_t ) {
                enum MouseButton_144  dref2848 = ( ( dref2800 .stuff .InputEvent_512_Mouse_s .field0 ) .f_button );
                switch (  dref2848 ) {
                    case MouseButton_144_MouseLeft : {
                        if ( ( ( dref2800 .stuff .InputEvent_512_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2849 = ( (  size_dash_i32270 ) ( ( ( ( * (  ed2791 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2850 = ( (  clamp748 ) ( (  op_dash_add82 ( ( ( * (  ed2791 ) ) .f_screen_dash_top ) , ( ( dref2800 .stuff .InputEvent_512_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  linecnt2849 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1218  temp1337 = ( (struct funenv1218){ .fun = left_dash_offset1218, .env =  envinst1218  } );
                            struct Visual_1043  vx2851 = ( ( Visual_1043_Visual ) ( (  op_dash_sub83 ( ( ( dref2800 .stuff .InputEvent_512_Mouse_s .field0 ) .f_x ) , ( ( temp1337.fun ( temp1337.env ,  (  ed2791 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1157  temp1338 = ( (struct funenv1157){ .fun = visual_dash_x_dash_to_dash_x1157, .env =  envinst1157  } );
                            int32_t  cx2852 = ( temp1338.fun ( temp1338.env ,  (  ed2791 ) ,  (  vx2851 ) ,  (  cy2850 ) ) );
                            (*  ed2791 ) .f_cursor .f_x = (  cx2852 );
                            (*  ed2791 ) .f_goal_dash_x = (  vx2851 );
                            struct funenv1167  temp1339 = ( (struct funenv1167){ .fun = move_dash_to_dash_row1167, .env =  envinst1167  } );
                            struct funenv1220  temp1340 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                            ( temp1339.fun ( temp1339.env ,  (  ed2791 ) ,  (  cy2850 ) ,  ( temp1340.fun ( temp1340.env ,  (  ed2791 ) ,  (  tui2792 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable880 ) ( ) );
            }
        }
        struct funenv1113  temp1341 = ( (struct funenv1113){ .fun = resize_dash_screen_dash_if_dash_needed1113, .env =  envinst1113  } );
        bool  resized2853 = ( temp1341.fun ( temp1341.env ,  (  screen2794 ) ) );
        if ( ( ( ( (  resized2853 ) || (  cmp75 ( (  events2797 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2796 ) ) || ( (  is_dash_just1038 ) ( ( ( * (  ed2791 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2796 = ( false );
            ( (  clear_dash_screen1103 ) ( (  screen2794 ) ) );
            ( (  set_dash_screen_dash_fg1115 ) ( (  screen2794 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_White16 ) ) ) ) );
            ( (  set_dash_screen_dash_bg1116 ) ( (  screen2794 ) ,  ( ( Color_54_Color16 ) ( ( Color16_56_Black16 ) ) ) ) );
            ( (  fill_dash_default1119 ) ( (  screen2794 ) ) );
            struct funenv1222  temp1342 = ( (struct funenv1222){ .fun = render_dash_editor1222, .env =  envinst1222  } );
            ( temp1342.fun ( temp1342.env ,  (  screen2794 ) ,  (  ed2791 ) ) );
            bool  debug2854 = ( true );
            if ( (  debug2854 ) ) {
                ( (  draw_dash_str_dash_right1134 ) ( (  screen2794 ) ,  ( ( StrConcat_760_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2791 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1135 ) ( (  screen2794 ) ,  ( ( StrConcat_776_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2792 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1041 envinst1041 = {
                    .ed2791 =  ed2791 ,
                };
                struct Maybe_352  charcode2859 = ( (  fmap_dash_maybe1046 ) ( ( (  and_dash_maybe1040 ) ( ( (  try_dash_get945 ) ( ( & ( ( * (  ed2791 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1041){ .fun = lam1041, .env = envinst1041 } ) ) ) ,  (  lam1343 ) ) );
                ( (  draw_dash_str_dash_right1136 ) ( (  screen2794 ) ,  ( ( StrConcat_778_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2859 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1137 ) ( (  screen2794 ) ,  ( ( StrConcat_804_StrConcat ) ( ( ( StrConcat_805_StrConcat ) ( ( ( StrConcat_806_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2860 = ( ( * ( (  get_dash_row1148 ) ( (  ed2791 ) ,  ( ( ( * (  ed2791 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1138 ) ( (  screen2794 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2860 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2861 = ( (  from_dash_visual1147 ) ( ( ( * (  ed2791 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1139 ) ( (  screen2794 ) ,  ( ( StrConcat_806_StrConcat ) ( ( "goal x: " ) ,  (  gx2861 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1220  temp1344 = ( (struct funenv1220){ .fun = screen_dash_dims1220, .env =  envinst1220  } );
                struct Dims_1162  dim2862 = ( temp1344.fun ( temp1344.env ,  (  ed2791 ) ,  (  tui2792 ) ) );
                ( (  draw_dash_str_dash_right1140 ) ( (  screen2794 ) ,  ( ( StrConcat_813_StrConcat ) ( ( ( StrConcat_814_StrConcat ) ( ( ( StrConcat_806_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2791 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2862 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
            }
            ( (  update_dash_animation1237 ) ( ( & ( ( * (  ed2791 ) ) .f_anim ) ) ,  (  screen2794 ) ) );
            ( (  render_dash_screen1107 ) ( (  screen2794 ) ) );
        }
        ( (  sync1081 ) ( (  tui2792 ) ) );
    }
    ( (  free_dash_screen1102 ) ( (  screen2794 ) ) );
    ( (  deinit1085 ) ( (  tui2792 ) ) );
}
