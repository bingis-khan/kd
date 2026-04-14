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

static  char *   get_dash_ptr30 (    struct Slice_5  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1339 = ( (  offset_dash_ptr31 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  char *   get_dash_ptr8 (    struct List_3 *  list1662 ,    size_t  i1664 ) {
    if ( ( (  cmp9 ( (  i1664 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1664 ) , ( ( * (  list1662 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1664 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1662 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr30 ) ( ( ( * (  list1662 ) ) .f_elements ) ,  (  i1664 ) ) );
}

static  char   get7 (    struct List_3 *  list1672 ,    size_t  i1674 ) {
    return ( * ( (  get_dash_ptr8 ) ( (  list1672 ) ,  (  i1674 ) ) ) );
}

static  char   elem_dash_get6 (    struct List_3  self1733 ,    size_t  k1735 ) {
    return ( (  get7 ) ( ( & (  self1733 ) ) ,  (  k1735 ) ) );
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

static  bool   eq61 (    enum Color8_55  l1855 ,    enum Color8_55  r1857 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed62 ) ( (  l1855 ) ) ) ) , ( (  cast_dash_on_dash_zeroed62 ) ( (  r1857 ) ) ) ) );
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

static  bool   eq69 (    enum Color16_56  l1861 ,    enum Color16_56  r1863 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed70 ) ( (  l1861 ) ) ) ) , ( (  cast_dash_on_dash_zeroed70 ) ( (  r1863 ) ) ) ) );
}

static  bool   eq73 (    struct RGB_57  l1891 ,    struct RGB_57  r1893 ) {
    return ( ( (  eq43 ( ( (  l1891 ) .f_r ) , ( (  r1893 ) .f_r ) ) ) && (  eq43 ( ( (  l1891 ) .f_g ) , ( (  r1893 ) .f_g ) ) ) ) && (  eq43 ( ( (  l1891 ) .f_b ) , ( (  r1893 ) .f_b ) ) ) );
}

static  bool   eq59 (    struct Color_54  l1914 ,    struct Color_54  r1916 ) {
    return ( {  struct Tuple2_60  dref1917 = ( ( Tuple2_60_Tuple2 ) ( (  l1914 ) ,  (  r1916 ) ) ) ; dref1917 .field0.tag == Color_54_ColorDefault_t && dref1917 .field1.tag == Color_54_ColorDefault_t ? ( true ) : dref1917 .field0.tag == Color_54_Color8_t && dref1917 .field1.tag == Color_54_Color8_t ? (  eq61 ( ( dref1917 .field0 .stuff .Color_54_Color8_s .field0 ) , ( dref1917 .field1 .stuff .Color_54_Color8_s .field0 ) ) ) : dref1917 .field0.tag == Color_54_Color16_t && dref1917 .field1.tag == Color_54_Color16_t ? (  eq69 ( ( dref1917 .field0 .stuff .Color_54_Color16_s .field0 ) , ( dref1917 .field1 .stuff .Color_54_Color16_s .field0 ) ) ) : dref1917 .field0.tag == Color_54_Color256_t && dref1917 .field1.tag == Color_54_Color256_t ? (  eq43 ( ( dref1917 .field0 .stuff .Color_54_Color256_s .field0 ) , ( dref1917 .field1 .stuff .Color_54_Color256_s .field0 ) ) ) : dref1917 .field0.tag == Color_54_ColorRGB_t && dref1917 .field1.tag == Color_54_ColorRGB_t ? (  eq73 ( ( dref1917 .field0 .stuff .Color_54_ColorRGB_s .field0 ) , ( dref1917 .field1 .stuff .Color_54_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq58 (    struct Cell_53  l2342 ,    struct Cell_53  r2344 ) {
    if ( ( !  eq48 ( ( (  l2342 ) .f_c ) , ( (  r2344 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2342 ) .f_fg ) , ( (  r2344 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2342 ) .f_bg ) , ( (  r2344 ) .f_bg ) ) ) ) {
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

static  enum Unit_13   undefined146 (  ) {
    enum Unit_13  temp147;
    return (  temp147 );
}

static  bool   undefined148 (  ) {
    bool  temp149;
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

static  uint8_t *   offset_dash_ptr156 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp157;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp157 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr158 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp159;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp159 ) ) ) ) ) ) ) ) );
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

static  uint8_t *   cast186 (    struct Array_137 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast187 (    struct Array_99 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast188 (    struct Array_102 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast189 (    struct Array_105 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint16_t *   cast190 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast191 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast192 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  char *   cast193 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char *   cast194 (    struct Array_181 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  uint8_t   cast195 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  char   cast196 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint8_t *   cast197 (    int64_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
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

static  void *   cast_dash_ptr207 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr208 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr210 (    struct Termios_136 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  void *   cast_dash_ptr211 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr212 (    struct Winsize_177 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr213 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr214 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct Cell_53 *   cast_dash_ptr215 (    void *  p466 ) {
    return ( (struct Cell_53 * ) (  p466 ) );
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
    ( ( memset ) ( ( (  cast_dash_ptr207 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of173 ) ( (  x473 ) ) ) ) );
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
    ( ( memset ) ( ( (  cast_dash_ptr211 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_177   zeroed233 (  ) {
    struct Winsize_177  temp234;
    struct Winsize_177  x473 = (  temp234 );
    ( ( memset ) ( ( (  cast_dash_ptr212 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of176 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed235 (  ) {
    enum Unit_13 *  temp236;
    enum Unit_13 *  x473 = (  temp236 );
    ( ( memset ) ( ( (  cast_dash_ptr213 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed237 (  ) {
    size_t  temp238;
    size_t  x473 = (  temp238 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of179 ) ( (  x473 ) ) ) ) );
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
    uint16_t *  yp478 = ( (  cast190 ) ( (  y477 ) ) );
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
    uint8_t *  yp478 = ( (  cast197 ) ( (  y477 ) ) );
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
    if ( ( (  ptr_dash_eq263 ) ( ( (  cast191 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr260 ) ( ) ) ) ) ) ) {
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

static  struct SliceIter_278   into_dash_iter282 (    struct Slice_279  self1380 ) {
    return ( (struct SliceIter_278) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min284 (    size_t  l965 ,    size_t  r967 ) {
    if ( (  cmp9 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  struct Slice_279   subslice283 (    struct Slice_279  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    struct List_3 *  begin_dash_ptr1366 = ( (  offset_dash_ptr154 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub94 ( ( (  min284 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_279) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_278   into_dash_iter281 (    struct List_280  self1689 ) {
    return ( (  into_dash_iter282 ) ( ( (  subslice283 ) ( ( (  self1689 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1689 ) .f_count ) ) ) ) );
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

static  struct Scanner_286   into_dash_iter288 (    struct Scanner_286  self2240 ) {
    return (  self2240 );
}

static  struct Scanner_286   into_dash_iter285 (    struct Scanner_286 *  self547 ) {
    return ( (  into_dash_iter288 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_287   into_dash_iter291 (    struct Slice_5  self1380 ) {
    return ( (struct SliceIter_287) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice292 (    struct Slice_5  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    char *  begin_dash_ptr1366 = ( (  offset_dash_ptr31 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub94 ( ( (  min284 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_287   into_dash_iter290 (    struct List_3  self1689 ) {
    return ( (  into_dash_iter291 ) ( ( (  subslice292 ) ( ( (  self1689 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1689 ) .f_count ) ) ) ) );
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
    struct DynStr_131  f_og;
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
    size_t  growth_dash_factor1698;
    ;
    size_t  starting_dash_size1697;
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
    ;
    struct env305 envinst305;
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
    enum Unit_13  (*fun) (  struct env303  ,    struct List_3 *  ,    struct DynStr_131  );
    struct env303 env;
};

struct env302 {
    ;
    ;
    ;
    struct env303 envinst303;
    ;
    ;
};

struct funenv302 {
    struct List_3  (*fun) (  struct env302  ,    struct DynStr_131  ,    enum CAllocator_4  );
    struct env302 env;
};

struct env301 {
    struct env302 envinst302;
    enum CAllocator_4  al2829;
};

struct funenv301 {
    struct List_3  (*fun) (  struct env301  ,    struct DynStr_131  );
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
    int32_t  tab_dash_size2482;
    ;
    ;
    ;
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
            struct DynStr_131  field0;
        } Maybe_315_Just_s;
    } stuff;
};

static struct Maybe_315 Maybe_315_Just (  struct DynStr_131  field0 ) {
    return ( struct Maybe_315 ) { .tag = Maybe_315_Just_t, .stuff = { .Maybe_315_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail318 (    struct Maybe_297  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_297  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_297_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined128 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_297_Just_t ) {
        return ( dref1270 .stuff .Maybe_297_Just_s .field0 );
    }
}

static  struct Maybe_297   try_dash_get319 (    struct Slice_5  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char *  elem_dash_ptr1345 = ( (  offset_dash_ptr31 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_297_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  char   get317 (    struct Slice_5  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail318 ) ( ( (  try_dash_get319 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar320 (  ) {
    return ( (  zeroed227 ) ( ) );
}

static  char   newline321 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_131   substr322 (    struct DynStr_131  s1504 ,    size_t  from1506 ,    size_t  to1508 ) {
    return ( (struct DynStr_131) { .f_contents = ( (  subslice292 ) ( ( (  s1504 ) .f_contents ) ,  (  from1506 ) ,  (  to1508 ) ) ) } );
}

static  struct Maybe_315   next316 (    struct LineIter_300 *  self1617 ) {
    if ( ( (  cmp9 ( ( ( * (  self1617 ) ) .f_last ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq48 ( ( (  get317 ) ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1617 ) ) .f_last ) ) ) , ( (  nullchar320 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    size_t  i1618 = ( ( * (  self1617 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1618 ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq48 ( ( (  get317 ) ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) ,  (  i1618 ) ) ) , ( (  newline321 ) ( ) ) ) ) ) ) {
        i1618 = (  op_dash_add93 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_131  line1619 = ( (  substr322 ) ( ( ( * (  self1617 ) ) .f_og ) ,  ( ( * (  self1617 ) ) .f_last ) ,  (  i1618 ) ) );
    if ( (  cmp9 ( (  i1618 ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1618 = (  op_dash_add93 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1617 ) .f_last = (  i1618 );
    return ( ( Maybe_315_Just ) ( (  line1619 ) ) );
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

static  struct Maybe_297   next330 (    struct SliceIter_287 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  elem1388 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_297_Just ) ( (  elem1388 ) ) );
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

static  struct LineIter_300   into_dash_iter333 (    struct LineIter_300  self1614 ) {
    return (  self1614 );
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

struct Drop_346 {
    struct LineIter_300  field0;
    size_t  field1;
};

static struct Drop_346 Drop_346_Drop (  struct LineIter_300  field0 ,  size_t  field1 ) {
    return ( struct Drop_346 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_346   into_dash_iter345 (    struct Drop_346  self607 ) {
    return (  self607 );
}

struct Tuple2_349 {
    struct List_3  field0;
    int32_t  field1;
};

static struct Tuple2_349 Tuple2_349_Tuple2 (  struct List_3  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_349 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_348 {
    enum {
        Maybe_348_None_t,
        Maybe_348_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_349  field0;
        } Maybe_348_Just_s;
    } stuff;
};

static struct Maybe_348 Maybe_348_Just (  struct Tuple2_349  field0 ) {
    return ( struct Maybe_348 ) { .tag = Maybe_348_Just_t, .stuff = { .Maybe_348_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_314   next351 (    struct SliceIter_278 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    struct List_3  elem1388 = ( * ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_314_Just ) ( (  elem1388 ) ) );
}

static  struct Maybe_328   next352 (    struct FromIter_341 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add82 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_328_Just ) ( (  v669 ) ) );
}

static  struct Maybe_348   next350 (    struct Zip_340 *  self676 ) {
    struct Zip_340  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_314  dref678 = ( (  next351 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_314_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
        else if ( dref678.tag == Maybe_314_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next351 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_348_Just ) ( ( ( Tuple2_349_Tuple2 ) ( ( dref678 .stuff .Maybe_314_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_348   next347 (    struct Drop_339 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next350 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next350 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

struct Tuple2_355 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_355 Tuple2_355_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_355 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_354 {
    enum {
        Maybe_354_None_t,
        Maybe_354_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_355  field0;
        } Maybe_354_Just_s;
    } stuff;
};

static struct Maybe_354 Maybe_354_Just (  struct Tuple2_355  field0 ) {
    return ( struct Maybe_354 ) { .tag = Maybe_354_Just_t, .stuff = { .Maybe_354_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_354   next356 (    struct Zip_344 *  self676 ) {
    struct Zip_344  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next330 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_354   next353 (    struct Drop_343 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next356 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next356 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_315   next357 (    struct Drop_346 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next316 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub94 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next316 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Zip_340   into_dash_iter359 (    struct Zip_340  self673 ) {
    return (  self673 );
}

static  struct Drop_339   drop358 (    struct Zip_340  iterable614 ,    size_t  i616 ) {
    struct Zip_340  it617 = ( (  into_dash_iter359 ) ( (  iterable614 ) ) );
    return ( ( Drop_339_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Zip_344   into_dash_iter361 (    struct Zip_344  self673 ) {
    return (  self673 );
}

static  struct Drop_343   drop360 (    struct Zip_344  iterable614 ,    size_t  i616 ) {
    struct Zip_344  it617 = ( (  into_dash_iter361 ) ( (  iterable614 ) ) );
    return ( ( Drop_343_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Drop_346   drop362 (    struct LineIter_300  iterable614 ,    size_t  i616 ) {
    struct LineIter_300  it617 = ( (  into_dash_iter333 ) ( (  iterable614 ) ) );
    return ( ( Drop_346_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_311   take363 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_311_Take ) ( ( (  into_dash_iter289 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
}

struct Range_365 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_365 Range_365_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_365 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_365   to364 (    int32_t  from636 ,    int32_t  to638 ) {
    return ( ( Range_365_Range ) ( (  from636 ) ,  (  to638 ) ) );
}

struct RangeIter_367 {
    struct Range_365  field0;
    int32_t  field1;
};

static struct RangeIter_367 RangeIter_367_RangeIter (  struct Range_365  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_367 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_367   into_dash_iter366 (    struct Range_365  dref645 ) {
    return ( ( RangeIter_367_RangeIter ) ( ( ( Range_365_Range ) ( ( dref645 .field0 ) ,  ( dref645 .field1 ) ) ) ,  ( dref645 .field0 ) ) );
}

static  struct Maybe_328   next368 (    struct RangeIter_367 *  self653 ) {
    struct RangeIter_367  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp75 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
        }
        struct Maybe_328  x658 = ( ( Maybe_328_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_367_RangeIter ) ( ( ( Range_365_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add82 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        return (  x658 );
    }
}

static  struct FromIter_341   from369 (    int32_t  f662 ) {
    return ( (struct FromIter_341) { .f_from = (  f662 ) } );
}

static  struct FromIter_341   into_dash_iter370 (    struct FromIter_341  it665 ) {
    return (  it665 );
}

struct Zip_372 {
    struct LineIter_300  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_372   into_dash_iter371 (    struct Zip_372  self673 ) {
    return (  self673 );
}

struct Zip_374 {
    struct Drop_346  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_374   into_dash_iter373 (    struct Zip_374  self673 ) {
    return (  self673 );
}

struct Zip_376 {
    struct SliceIter_287  f_left_dash_it;
    struct SliceIter_287  f_right_dash_it;
};

static  struct Zip_376   into_dash_iter375 (    struct Zip_376  self673 ) {
    return (  self673 );
}

struct IntStrIter_379 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_378 {
    struct IntStrIter_379  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_378   into_dash_iter377 (    struct Zip_378  self673 ) {
    return (  self673 );
}

struct StrConcatIter_385 {
    struct ConstStrIter_308  f_left;
    struct SliceIter_287  f_right;
};

struct AppendIter_386 {
    enum EmptyIter_294  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_384 {
    struct StrConcatIter_385  f_left;
    struct AppendIter_386  f_right;
};

struct StrCaseIter_383 {
    enum {
        StrCaseIter_383_StrCaseIter1_t,
        StrCaseIter_383_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_383_StrCaseIter1_s;
        struct {
            struct StrConcatIter_384  field0;
        } StrCaseIter_383_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_383 StrCaseIter_383_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_383 ) { .tag = StrCaseIter_383_StrCaseIter1_t, .stuff = { .StrCaseIter_383_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_383 StrCaseIter_383_StrCaseIter2 (  struct StrConcatIter_384  field0 ) {
    return ( struct StrCaseIter_383 ) { .tag = StrCaseIter_383_StrCaseIter2_t, .stuff = { .StrCaseIter_383_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_382 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_383  f_right;
};

struct Zip_381 {
    struct StrConcatIter_382  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_381   into_dash_iter380 (    struct Zip_381  self673 ) {
    return (  self673 );
}

struct IntStrIter_390 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_389 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_390  f_right;
};

struct Zip_388 {
    struct StrConcatIter_389  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_388   into_dash_iter387 (    struct Zip_388  self673 ) {
    return (  self673 );
}

struct StrConcatIter_400 {
    struct AppendIter_386  f_left;
    struct AppendIter_386  f_right;
};

struct StrConcatIter_399 {
    struct StrConcatIter_400  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_398 {
    struct StrConcatIter_399  f_left;
    struct IntStrIter_379  f_right;
};

struct StrConcatIter_397 {
    struct StrConcatIter_398  f_left;
    struct AppendIter_386  f_right;
};

struct StrConcatIter_396 {
    struct ConstStrIter_308  f_left;
    struct StrConcatIter_397  f_right;
};

struct StrConcatIter_395 {
    struct StrConcatIter_396  f_left;
    struct AppendIter_386  f_right;
};

struct StrCaseIter_394 {
    enum {
        StrCaseIter_394_StrCaseIter1_t,
        StrCaseIter_394_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_394_StrCaseIter1_s;
        struct {
            struct StrConcatIter_395  field0;
        } StrCaseIter_394_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_394 StrCaseIter_394_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_394 ) { .tag = StrCaseIter_394_StrCaseIter1_t, .stuff = { .StrCaseIter_394_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_394 StrCaseIter_394_StrCaseIter2 (  struct StrConcatIter_395  field0 ) {
    return ( struct StrCaseIter_394 ) { .tag = StrCaseIter_394_StrCaseIter2_t, .stuff = { .StrCaseIter_394_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_393 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_394  f_right;
};

struct Zip_392 {
    struct StrConcatIter_393  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_392   into_dash_iter391 (    struct Zip_392  self673 ) {
    return (  self673 );
}

struct StrConcatIter_405 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_379  f_right;
};

struct StrConcatIter_404 {
    struct StrConcatIter_405  f_left;
    struct AppendIter_386  f_right;
};

struct StrConcatIter_403 {
    struct StrConcatIter_404  f_left;
    struct IntStrIter_379  f_right;
};

struct Zip_402 {
    struct StrConcatIter_403  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_402   into_dash_iter401 (    struct Zip_402  self673 ) {
    return (  self673 );
}

struct IntStrIter_409 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_408 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_409  f_right;
};

struct Zip_407 {
    struct StrConcatIter_408  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_407   into_dash_iter406 (    struct Zip_407  self673 ) {
    return (  self673 );
}

struct Zip_411 {
    struct StrConcatIter_405  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_411   into_dash_iter410 (    struct Zip_411  self673 ) {
    return (  self673 );
}

struct StrConcatIter_415 {
    struct StrConcatIter_405  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_414 {
    struct StrConcatIter_415  f_left;
    struct IntStrIter_379  f_right;
};

struct Zip_413 {
    struct StrConcatIter_414  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_413   into_dash_iter412 (    struct Zip_413  self673 ) {
    return (  self673 );
}

struct StrConcatIter_420 {
    struct StrConcatIter_408  f_left;
    struct AppendIter_386  f_right;
};

struct StrCaseIter_419 {
    enum {
        StrCaseIter_419_StrCaseIter1_t,
        StrCaseIter_419_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_419_StrCaseIter1_s;
        struct {
            struct StrConcatIter_420  field0;
        } StrCaseIter_419_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_419 StrCaseIter_419_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_419 ) { .tag = StrCaseIter_419_StrCaseIter1_t, .stuff = { .StrCaseIter_419_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_419 StrCaseIter_419_StrCaseIter2 (  struct StrConcatIter_420  field0 ) {
    return ( struct StrCaseIter_419 ) { .tag = StrCaseIter_419_StrCaseIter2_t, .stuff = { .StrCaseIter_419_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_418 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_419  f_right;
};

struct Zip_417 {
    struct StrConcatIter_418  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_417   into_dash_iter416 (    struct Zip_417  self673 ) {
    return (  self673 );
}

struct Tuple2_423 {
    struct DynStr_131  field0;
    int32_t  field1;
};

static struct Tuple2_423 Tuple2_423_Tuple2 (  struct DynStr_131  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_423 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_422 {
    enum {
        Maybe_422_None_t,
        Maybe_422_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_423  field0;
        } Maybe_422_Just_s;
    } stuff;
};

static struct Maybe_422 Maybe_422_Just (  struct Tuple2_423  field0 ) {
    return ( struct Maybe_422 ) { .tag = Maybe_422_Just_t, .stuff = { .Maybe_422_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_422   next421 (    struct Zip_372 *  self676 ) {
    struct Zip_372  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_315  dref678 = ( (  next316 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_315_None_t ) {
            return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
        }
        else if ( dref678.tag == Maybe_315_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next316 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_422_Just ) ( ( ( Tuple2_423_Tuple2 ) ( ( dref678 .stuff .Maybe_315_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_422   next424 (    struct Zip_374 *  self676 ) {
    struct Zip_374  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_315  dref678 = ( (  next357 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_315_None_t ) {
            return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
        }
        else if ( dref678.tag == Maybe_315_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next357 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_422_Just ) ( ( ( Tuple2_423_Tuple2 ) ( ( dref678 .stuff .Maybe_315_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct Tuple2_427 {
    char  field0;
    char  field1;
};

static struct Tuple2_427 Tuple2_427_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_427 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_426 {
    enum {
        Maybe_426_None_t,
        Maybe_426_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_427  field0;
        } Maybe_426_Just_s;
    } stuff;
};

static struct Maybe_426 Maybe_426_Just (  struct Tuple2_427  field0 ) {
    return ( struct Maybe_426 ) { .tag = Maybe_426_Just_t, .stuff = { .Maybe_426_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_426   next425 (    struct Zip_376 *  self676 ) {
    struct Zip_376  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next330 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_297  dref680 = ( (  next330 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_297_None_t ) {
                return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
            }
            else if ( dref680.tag == Maybe_297_Just_t ) {
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_426_Just ) ( ( ( Tuple2_427_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env432 {
    ;
    int32_t  base923;
};

struct funenv432 {
    int32_t  (*fun) (  struct env432  ,    int32_t  ,    int32_t  );
    struct env432 env;
};

static  int32_t   reduce431 (    struct Range_365  iterable812 ,    int32_t  base814 ,   struct funenv432  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_367  it818 = ( (  into_dash_iter366 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv432  temp433 = (  fun816 );
            x817 = ( temp433.fun ( temp433.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp434;
    return (  temp434 );
}

static  int32_t   lam432 (   struct env432 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul84 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow430 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env432 envinst432 = {
        .base923 =  base923 ,
    };
    return ( (  reduce431 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv432){ .fun = lam432, .env = envinst432 } ) ) );
}

static  struct Maybe_297   next429 (    struct IntStrIter_379 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow430 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div85 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul84 ( (  op_dash_div85 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub83 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast196 ) ( (  op_dash_add82 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_354   next428 (    struct Zip_378 *  self676 ) {
    struct Zip_378  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next429 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next429 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next439 (    struct StrConcatIter_385 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next330 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next440 (    struct AppendIter_386 *  self776 ) {
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

static  struct Maybe_297   next438 (    struct StrConcatIter_384 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next439 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next437 (    struct StrCaseIter_383 *  self1115 ) {
    struct StrCaseIter_383 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_383_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_383_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_383_StrCaseIter2_t ) {
        return ( (  next438 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_383_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next436 (    struct StrConcatIter_382 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next437 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next435 (    struct Zip_381 *  self676 ) {
    struct Zip_381  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next436 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next436 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env446 {
    uint32_t  base923;
    ;
};

struct funenv446 {
    uint32_t  (*fun) (  struct env446  ,    int32_t  ,    uint32_t  );
    struct env446 env;
};

static  uint32_t   reduce445 (    struct Range_365  iterable812 ,    uint32_t  base814 ,   struct funenv446  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_367  it818 = ( (  into_dash_iter366 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv446  temp447 = (  fun816 );
            x817 = ( temp447.fun ( temp447.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp448;
    return (  temp448 );
}

static  uint32_t   lam446 (   struct env446 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul89 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow444 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env446 envinst446 = {
        .base923 =  base923 ,
    };
    return ( (  reduce445 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv446){ .fun = lam446, .env = envinst446 } ) ) );
}

static  struct Maybe_297   next443 (    struct IntStrIter_390 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow444 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div90 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub88 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast200 ) ( (  op_dash_add87 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next442 (    struct StrConcatIter_389 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next441 (    struct Zip_388 *  self676 ) {
    struct Zip_388  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next442 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next442 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next457 (    struct StrConcatIter_400 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next456 (    struct StrConcatIter_399 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next457 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next455 (    struct StrConcatIter_398 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next456 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next454 (    struct StrConcatIter_397 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next455 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next453 (    struct StrConcatIter_396 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next452 (    struct StrConcatIter_395 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next453 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next451 (    struct StrCaseIter_394 *  self1115 ) {
    struct StrCaseIter_394 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_394_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_394_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_394_StrCaseIter2_t ) {
        return ( (  next452 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_394_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next450 (    struct StrConcatIter_393 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next451 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next449 (    struct Zip_392 *  self676 ) {
    struct Zip_392  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next450 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next461 (    struct StrConcatIter_405 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next460 (    struct StrConcatIter_404 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next461 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next459 (    struct StrConcatIter_403 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next460 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next458 (    struct Zip_402 *  self676 ) {
    struct Zip_402  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next459 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next459 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env467 {
    size_t  base923;
    ;
};

struct funenv467 {
    size_t  (*fun) (  struct env467  ,    int32_t  ,    size_t  );
    struct env467 env;
};

static  size_t   reduce466 (    struct Range_365  iterable812 ,    size_t  base814 ,   struct funenv467  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_367  it818 = ( (  into_dash_iter366 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv467  temp468 = (  fun816 );
            x817 = ( temp468.fun ( temp468.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp469;
    return (  temp469 );
}

static  size_t   lam467 (   struct env467 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul95 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow465 (    size_t  base923 ,    int32_t  p925 ) {
    struct env467 envinst467 = {
        .base923 =  base923 ,
    };
    return ( (  reduce466 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv467){ .fun = lam467, .env = envinst467 } ) ) );
}

static  struct Maybe_297   next464 (    struct IntStrIter_409 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow465 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div96 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul95 ( (  op_dash_div96 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub94 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast201 ) ( (  op_dash_add93 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next463 (    struct StrConcatIter_408 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next464 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next462 (    struct Zip_407 *  self676 ) {
    struct Zip_407  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next463 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next463 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_354   next470 (    struct Zip_411 *  self676 ) {
    struct Zip_411  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next461 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next461 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next473 (    struct StrConcatIter_415 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next461 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next472 (    struct StrConcatIter_414 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next473 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next471 (    struct Zip_413 *  self676 ) {
    struct Zip_413  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next472 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next477 (    struct StrConcatIter_420 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next463 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next476 (    struct StrCaseIter_419 *  self1115 ) {
    struct StrCaseIter_419 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_419_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_419_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_419_StrCaseIter2_t ) {
        return ( (  next477 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_419_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next475 (    struct StrConcatIter_418 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next476 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next474 (    struct Zip_417 *  self676 ) {
    struct Zip_417  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next475 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next475 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_340   zip478 (    struct Slice_279  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip479 (    struct Slice_5  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip480 (    struct List_280  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip481 (    struct List_3  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter290 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_372   zip482 (    struct LineIter_300  left684 ,    struct FromIter_341  right686 ) {
    struct LineIter_300  left_dash_it687 = ( (  into_dash_iter333 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_372) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_374   zip483 (    struct Drop_346  left684 ,    struct FromIter_341  right686 ) {
    struct Drop_346  left_dash_it687 = ( (  into_dash_iter345 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_374) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_376   zip484 (    struct Slice_5  left684 ,    struct Slice_5  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct SliceIter_287  right_dash_it688 = ( (  into_dash_iter291 ) ( (  right686 ) ) );
    return ( (struct Zip_376) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_379   into_dash_iter486 (    struct IntStrIter_379  self1024 ) {
    return (  self1024 );
}

static  struct Zip_378   zip485 (    struct IntStrIter_379  left684 ,    struct FromIter_341  right686 ) {
    struct IntStrIter_379  left_dash_it687 = ( (  into_dash_iter486 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_378) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_382   into_dash_iter488 (    struct StrConcatIter_382  self1090 ) {
    return (  self1090 );
}

static  struct Zip_381   zip487 (    struct StrConcatIter_382  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_382  left_dash_it687 = ( (  into_dash_iter488 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_381) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_389   into_dash_iter490 (    struct StrConcatIter_389  self1090 ) {
    return (  self1090 );
}

static  struct Zip_388   zip489 (    struct StrConcatIter_389  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_389  left_dash_it687 = ( (  into_dash_iter490 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_388) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_393   into_dash_iter492 (    struct StrConcatIter_393  self1090 ) {
    return (  self1090 );
}

static  struct Zip_392   zip491 (    struct StrConcatIter_393  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_393  left_dash_it687 = ( (  into_dash_iter492 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_392) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_403   into_dash_iter494 (    struct StrConcatIter_403  self1090 ) {
    return (  self1090 );
}

static  struct Zip_402   zip493 (    struct StrConcatIter_403  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_403  left_dash_it687 = ( (  into_dash_iter494 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_402) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_408   into_dash_iter496 (    struct StrConcatIter_408  self1090 ) {
    return (  self1090 );
}

static  struct Zip_407   zip495 (    struct StrConcatIter_408  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_408  left_dash_it687 = ( (  into_dash_iter496 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_407) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_405   into_dash_iter498 (    struct StrConcatIter_405  self1090 ) {
    return (  self1090 );
}

static  struct Zip_411   zip497 (    struct StrConcatIter_405  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_405  left_dash_it687 = ( (  into_dash_iter498 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_411) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_414   into_dash_iter500 (    struct StrConcatIter_414  self1090 ) {
    return (  self1090 );
}

static  struct Zip_413   zip499 (    struct StrConcatIter_414  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_414  left_dash_it687 = ( (  into_dash_iter500 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_413) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_418   into_dash_iter502 (    struct StrConcatIter_418  self1090 ) {
    return (  self1090 );
}

static  struct Zip_417   zip501 (    struct StrConcatIter_418  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_418  left_dash_it687 = ( (  into_dash_iter502 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_417) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_504 {
    struct Scanner_286  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_504   into_dash_iter503 (    struct TakeWhile_504  self718 ) {
    return (  self718 );
}

struct TakeWhile_506 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_506   into_dash_iter505 (    struct TakeWhile_506  self718 ) {
    return (  self718 );
}

struct DropWhile_511 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_510 {
    struct DropWhile_511  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_509 {
    struct DropWhile_510  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_508 {
    struct DropWhile_509  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_508   into_dash_iter507 (    struct TakeWhile_508  self718 ) {
    return (  self718 );
}

struct TakeWhile_513 {
    struct DropWhile_509  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_513   into_dash_iter512 (    struct TakeWhile_513  self718 ) {
    return (  self718 );
}

struct TakeWhile_515 {
    struct DropWhile_511  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_515   into_dash_iter514 (    struct TakeWhile_515  self718 ) {
    return (  self718 );
}

static  struct Maybe_297   next517 (    struct Scanner_286 *  self2237 ) {
    return ( (  next330 ) ( ( & ( ( * (  self2237 ) ) .f_s ) ) ) );
}

static  struct Maybe_297   next516 (    struct TakeWhile_504 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next517 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next518 (    struct TakeWhile_506 *  self721 ) {
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

static  struct Maybe_297   next522 (    struct DropWhile_511 *  self736 ) {
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

static  struct Maybe_297   next521 (    struct DropWhile_510 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next522 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next522 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next520 (    struct DropWhile_509 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next521 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next521 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next519 (    struct TakeWhile_508 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next523 (    struct TakeWhile_513 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next524 (    struct TakeWhile_515 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next522 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

struct TakeWhile_526 {
    struct DropWhile_509  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_297   next525 (    struct TakeWhile_526 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_504   take_dash_while527 (    struct Scanner_286 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_504) { .f_it = ( (  into_dash_iter285 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_506   take_dash_while528 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_506) { .f_it = ( (  into_dash_iter289 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_509   into_dash_iter530 (    struct DropWhile_509  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_513   take_dash_while529 (    struct DropWhile_509  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_513) { .f_it = ( (  into_dash_iter530 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_526   take_dash_while531 (    struct DropWhile_509  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_526) { .f_it = ( (  into_dash_iter530 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_508   take_dash_while532 (    struct DropWhile_509  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_508) { .f_it = ( (  into_dash_iter530 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_511   into_dash_iter534 (    struct DropWhile_511  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_515   take_dash_while533 (    struct DropWhile_511  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_515) { .f_it = ( (  into_dash_iter534 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_510   into_dash_iter535 (    struct DropWhile_510  self733 ) {
    return (  self733 );
}

static  struct SliceIter_287   into_dash_iter537 (    struct DynStr_131  self1501 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1501 ) .f_contents ) ) );
}

static  struct DropWhile_511   drop_dash_while536 (    struct DynStr_131  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_511) { .f_it = ( (  into_dash_iter537 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_510   drop_dash_while538 (    struct DropWhile_511  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_510) { .f_it = ( (  into_dash_iter534 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_509   drop_dash_while539 (    struct DropWhile_510  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_509) { .f_it = ( (  into_dash_iter535 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_386   append540 (    enum EmptyIter_294  it760 ,    char  e762 ) {
    return ( (struct AppendIter_386) { .f_it = ( (  into_dash_iter295 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_386   cons541 (    enum EmptyIter_294  it765 ,    char  e767 ) {
    return ( (  append540 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_386   single542 (    char  e770 ) {
    return ( (  cons541 ) ( ( (  nil293 ) ( ) ) ,  (  e770 ) ) );
}

static  struct AppendIter_386   into_dash_iter543 (    struct AppendIter_386  self773 ) {
    return (  self773 );
}

struct Key_548 {
    enum {
        Key_548_Escape_t,
        Key_548_Enter_t,
        Key_548_Tab_t,
        Key_548_Backspace_t,
        Key_548_Char_t,
        Key_548_Ctrl_t,
        Key_548_Up_t,
        Key_548_Down_t,
        Key_548_Left_t,
        Key_548_Right_t,
        Key_548_Home_t,
        Key_548_End_t,
        Key_548_PageUp_t,
        Key_548_PageDown_t,
        Key_548_Delete_t,
        Key_548_Insert_t,
        Key_548_F1_t,
        Key_548_F2_t,
        Key_548_F3_t,
        Key_548_F4_t,
        Key_548_F5_t,
        Key_548_F6_t,
        Key_548_F7_t,
        Key_548_F8_t,
        Key_548_F9_t,
        Key_548_F10_t,
        Key_548_F11_t,
        Key_548_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_548_Char_s;
        struct {
            char  field0;
        } Key_548_Ctrl_s;
    } stuff;
};

static struct Key_548 Key_548_Char (  char  field0 ) {
    return ( struct Key_548 ) { .tag = Key_548_Char_t, .stuff = { .Key_548_Char_s = { .field0 = field0 } } };
};

static struct Key_548 Key_548_Ctrl (  char  field0 ) {
    return ( struct Key_548 ) { .tag = Key_548_Ctrl_t, .stuff = { .Key_548_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_549 {
    enum MouseButton_144  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_547 {
    enum {
        InputEvent_547_Key_t,
        InputEvent_547_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_548  field0;
        } InputEvent_547_Key_s;
        struct {
            struct MouseEvent_549  field0;
        } InputEvent_547_Mouse_s;
    } stuff;
};

static struct InputEvent_547 InputEvent_547_Key (  struct Key_548  field0 ) {
    return ( struct InputEvent_547 ) { .tag = InputEvent_547_Key_t, .stuff = { .InputEvent_547_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_547 InputEvent_547_Mouse (  struct MouseEvent_549  field0 ) {
    return ( struct InputEvent_547 ) { .tag = InputEvent_547_Mouse_t, .stuff = { .InputEvent_547_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_546 {
    enum {
        Maybe_546_None_t,
        Maybe_546_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_547  field0;
        } Maybe_546_Just_s;
    } stuff;
};

static struct Maybe_546 Maybe_546_Just (  struct InputEvent_547  field0 ) {
    return ( struct Maybe_546 ) { .tag = Maybe_546_Just_t, .stuff = { .Maybe_546_Just_s = { .field0 = field0 } } };
};

struct FunIter_545 {
    struct Maybe_546 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_545   into_dash_iter544 (    struct FunIter_545  self782 ) {
    return (  self782 );
}

static  struct Maybe_546   next550 (    struct FunIter_545 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    struct Maybe_546  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_546_Just_t ) {
        return ( ( Maybe_546_Just ) ( ( dref786 .stuff .Maybe_546_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_546_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
}

static  struct FunIter_545   from_dash_function551 (    struct Maybe_546 (*  fun790 )(  ) ) {
    return ( (struct FunIter_545) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env553 {
    ;
    ;
    struct Slice_279  new_dash_slice1703;
};

struct funenv553 {
    enum Unit_13  (*fun) (  struct env553  ,    struct Tuple2_349  );
    struct env553 env;
};

static  enum Unit_13   for_dash_each552 (    struct Zip_340  iterable793 ,   struct funenv553  fun795 ) {
    struct Zip_340  temp554 = ( (  into_dash_iter359 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp554 );
    while ( ( true ) ) {
        struct Maybe_348  dref797 = ( (  next350 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_348_Just_t ) {
            struct funenv553  temp555 = (  fun795 );
            ( temp555.fun ( temp555.env ,  ( dref797 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env557 {
    ;
    ;
    struct Slice_5  new_dash_slice1703;
};

struct funenv557 {
    enum Unit_13  (*fun) (  struct env557  ,    struct Tuple2_355  );
    struct env557 env;
};

static  enum Unit_13   for_dash_each556 (    struct Zip_344  iterable793 ,   struct funenv557  fun795 ) {
    struct Zip_344  temp558 = ( (  into_dash_iter361 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp558 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next356 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv557  temp559 = (  fun795 );
            ( temp559.fun ( temp559.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env561 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv561 {
    enum Unit_13  (*fun) (  struct env561  ,    char  );
    struct env561 env;
};

static  enum Unit_13   for_dash_each560 (    struct DynStr_131  iterable793 ,   struct funenv561  fun795 ) {
    struct SliceIter_287  temp562 = ( (  into_dash_iter537 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp562 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv561  temp563 = (  fun795 );
            ( temp563.fun ( temp563.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env567 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1698;
    ;
    size_t  starting_dash_size1697;
    ;
    ;
    ;
};

struct funenv567 {
    enum Unit_13  (*fun) (  struct env567  ,    struct List_280 *  );
    struct env567 env;
};

struct env566 {
    ;
    ;
    ;
    ;
    ;
    struct env567 envinst567;
};

struct funenv566 {
    enum Unit_13  (*fun) (  struct env566  ,    struct List_280 *  ,    struct List_3  );
    struct env566 env;
};

struct env565 {
    struct env566 envinst566;
    struct List_280 *  list1750;
};

struct funenv565 {
    enum Unit_13  (*fun) (  struct env565  ,    struct List_3  );
    struct env565 env;
};

static  enum Unit_13   for_dash_each564 (    struct Map_299  iterable793 ,   struct funenv565  fun795 ) {
    struct Map_299  temp568 = ( (  into_dash_iter298 ) ( (  iterable793 ) ) );
    struct Map_299 *  it796 = ( &temp568 );
    while ( ( true ) ) {
        struct Maybe_314  dref797 = ( (  next313 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_314_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_314_Just_t ) {
            struct funenv565  temp569 = (  fun795 );
            ( temp569.fun ( temp569.env ,  ( dref797 .stuff .Maybe_314_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_572 {
    struct List_3  f_chars;
};

struct env571 {
    struct env304 envinst304;
    struct StrBuilder_572 *  builder1989;
};

struct funenv571 {
    enum Unit_13  (*fun) (  struct env571  ,    char  );
    struct env571 env;
};

static  struct ConstStrIter_308   into_dash_iter574 (    struct ConstStrIter_308  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each570 (    struct ConstStrIter_308  iterable793 ,   struct funenv571  fun795 ) {
    struct ConstStrIter_308  temp573 = ( (  into_dash_iter574 ) ( (  iterable793 ) ) );
    struct ConstStrIter_308 *  it796 = ( &temp573 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next326 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv571  temp575 = (  fun795 );
            ( temp575.fun ( temp575.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_578 {
    struct Cell_53 *  f_ptr;
    size_t  f_count;
};

struct env577 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_578  s1452;
    ;
    ;
    ;
};

struct funenv577 {
    enum Unit_13  (*fun) (  struct env577  ,    int32_t  );
    struct env577 env;
};

static  enum Unit_13   for_dash_each576 (    struct Range_365  iterable793 ,   struct funenv577  fun795 ) {
    struct RangeIter_367  temp579 = ( (  into_dash_iter366 ) ( (  iterable793 ) ) );
    struct RangeIter_367 *  it796 = ( &temp579 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv577  temp580 = (  fun795 );
            ( temp580.fun ( temp580.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env582 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_578  s1452;
    ;
    ;
    ;
};

struct funenv582 {
    enum Unit_13  (*fun) (  struct env582  ,    int32_t  );
    struct env582 env;
};

static  enum Unit_13   for_dash_each581 (    struct Range_365  iterable793 ,   struct funenv582  fun795 ) {
    struct RangeIter_367  temp583 = ( (  into_dash_iter366 ) ( (  iterable793 ) ) );
    struct RangeIter_367 *  it796 = ( &temp583 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv582  temp584 = (  fun795 );
            ( temp584.fun ( temp584.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env586 {
    ;
    struct Scanner_286 *  it899;
};

struct funenv586 {
    struct Maybe_297  (*fun) (  struct env586  ,    int32_t  );
    struct env586 env;
};

static  enum Unit_13   for_dash_each585 (    struct Range_365  iterable793 ,   struct funenv586  fun795 ) {
    struct RangeIter_367  temp587 = ( (  into_dash_iter366 ) ( (  iterable793 ) ) );
    struct RangeIter_367 *  it796 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv586  temp588 = (  fun795 );
            ( temp588.fun ( temp588.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env590 {
    ;
    struct List_280 *  list1722;
    ;
    ;
    ;
};

struct funenv590 {
    enum Unit_13  (*fun) (  struct env590  ,    struct Tuple2_349  );
    struct env590 env;
};

static  enum Unit_13   for_dash_each589 (    struct Drop_339  iterable793 ,   struct funenv590  fun795 ) {
    struct Drop_339  temp591 = ( (  into_dash_iter338 ) ( (  iterable793 ) ) );
    struct Drop_339 *  it796 = ( &temp591 );
    while ( ( true ) ) {
        struct Maybe_348  dref797 = ( (  next347 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_348_Just_t ) {
            struct funenv590  temp592 = (  fun795 );
            ( temp592.fun ( temp592.env ,  ( dref797 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env594 {
    struct Slice_279  dest1411;
    ;
    ;
};

struct funenv594 {
    enum Unit_13  (*fun) (  struct env594  ,    struct Tuple2_349  );
    struct env594 env;
};

static  enum Unit_13   for_dash_each593 (    struct Zip_340  iterable793 ,   struct funenv594  fun795 ) {
    struct Zip_340  temp595 = ( (  into_dash_iter359 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp595 );
    while ( ( true ) ) {
        struct Maybe_348  dref797 = ( (  next350 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_348_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_348_Just_t ) {
            struct funenv594  temp596 = (  fun795 );
            ( temp596.fun ( temp596.env ,  ( dref797 .stuff .Maybe_348_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env598 {
    ;
    struct List_3 *  list1722;
    ;
    ;
    ;
};

struct funenv598 {
    enum Unit_13  (*fun) (  struct env598  ,    struct Tuple2_355  );
    struct env598 env;
};

static  enum Unit_13   for_dash_each597 (    struct Drop_343  iterable793 ,   struct funenv598  fun795 ) {
    struct Drop_343  temp599 = ( (  into_dash_iter342 ) ( (  iterable793 ) ) );
    struct Drop_343 *  it796 = ( &temp599 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next353 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv598  temp600 = (  fun795 );
            ( temp600.fun ( temp600.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env602 {
    struct Slice_5  dest1411;
    ;
    ;
};

struct funenv602 {
    enum Unit_13  (*fun) (  struct env602  ,    struct Tuple2_355  );
    struct env602 env;
};

static  enum Unit_13   for_dash_each601 (    struct Zip_344  iterable793 ,   struct funenv602  fun795 ) {
    struct Zip_344  temp603 = ( (  into_dash_iter361 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp603 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next356 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv602  temp604 = (  fun795 );
            ( temp604.fun ( temp604.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env606 {
    struct env304 envinst304;
    struct StrBuilder_572 *  builder1989;
};

struct funenv606 {
    enum Unit_13  (*fun) (  struct env606  ,    char  );
    struct env606 env;
};

static  enum Unit_13   for_dash_each605 (    struct AppendIter_386  iterable793 ,   struct funenv606  fun795 ) {
    struct AppendIter_386  temp607 = ( (  into_dash_iter543 ) ( (  iterable793 ) ) );
    struct AppendIter_386 *  it796 = ( &temp607 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next440 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv606  temp608 = (  fun795 );
            ( temp608.fun ( temp608.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env610 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv610 {
    enum Unit_13  (*fun) (  struct env610  ,    char  );
    struct env610 env;
};

static  enum Unit_13   for_dash_each609 (    struct Slice_5  iterable793 ,   struct funenv610  fun795 ) {
    struct SliceIter_287  temp611 = ( (  into_dash_iter291 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp611 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv610  temp612 = (  fun795 );
            ( temp612.fun ( temp612.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env614 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv614 {
    enum Unit_13  (*fun) (  struct env614  ,    char  );
    struct env614 env;
};

static  enum Unit_13   for_dash_each613 (    struct List_3 *  iterable793 ,   struct funenv614  fun795 ) {
    struct SliceIter_287  temp615 = ( (  into_dash_iter289 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp615 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv614  temp616 = (  fun795 );
            ( temp616.fun ( temp616.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env618 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv618 {
    enum Unit_13  (*fun) (  struct env618  ,    char  );
    struct env618 env;
};

static  enum Unit_13   for_dash_each617 (    struct TakeWhile_506  iterable793 ,   struct funenv618  fun795 ) {
    struct TakeWhile_506  temp619 = ( (  into_dash_iter505 ) ( (  iterable793 ) ) );
    struct TakeWhile_506 *  it796 = ( &temp619 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next518 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv618  temp620 = (  fun795 );
            ( temp620.fun ( temp620.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env623 {
    ;
    struct env304 envinst304;
    ;
};

struct funenv623 {
    enum Unit_13  (*fun) (  struct env623  ,    struct StrBuilder_572 *  ,    char  );
    struct env623 env;
};

struct env622 {
    struct StrBuilder_572 *  sb2867;
    struct env623 envinst623;
};

struct funenv622 {
    enum Unit_13  (*fun) (  struct env622  ,    char  );
    struct env622 env;
};

static  enum Unit_13   for_dash_each621 (    struct List_3  iterable793 ,   struct funenv622  fun795 ) {
    struct SliceIter_287  temp624 = ( (  into_dash_iter290 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp624 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv622  temp625 = (  fun795 );
            ( temp625.fun ( temp625.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env627 {
    struct env304 envinst304;
    struct StrBuilder_572 *  builder1989;
};

struct funenv627 {
    enum Unit_13  (*fun) (  struct env627  ,    char  );
    struct env627 env;
};

static  enum Unit_13   for_dash_each626 (    struct TakeWhile_508  iterable793 ,   struct funenv627  fun795 ) {
    struct TakeWhile_508  temp628 = ( (  into_dash_iter507 ) ( (  iterable793 ) ) );
    struct TakeWhile_508 *  it796 = ( &temp628 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next519 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv627  temp629 = (  fun795 );
            ( temp629.fun ( temp629.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env631 {
    struct env304 envinst304;
    struct StrBuilder_572 *  builder1989;
};

struct funenv631 {
    enum Unit_13  (*fun) (  struct env631  ,    char  );
    struct env631 env;
};

static  enum Unit_13   for_dash_each630 (    struct TakeWhile_513  iterable793 ,   struct funenv631  fun795 ) {
    struct TakeWhile_513  temp632 = ( (  into_dash_iter512 ) ( (  iterable793 ) ) );
    struct TakeWhile_513 *  it796 = ( &temp632 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next523 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv631  temp633 = (  fun795 );
            ( temp633.fun ( temp633.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_635 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_635   into_dash_iter637 (    struct SliceAddressIter_635  self1401 ) {
    return (  self1401 );
}

struct Maybe_638 {
    enum {
        Maybe_638_None_t,
        Maybe_638_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_638_Just_s;
    } stuff;
};

static struct Maybe_638 Maybe_638_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_638 ) { .tag = Maybe_638_Just_t, .stuff = { .Maybe_638_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_638   next639 (    struct SliceAddressIter_635 *  self1404 ) {
    size_t  off1405 = ( ( * (  self1404 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1404 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_638) { .tag = Maybe_638_None_t } );
    }
    struct List_3 *  elem1406 = ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1404 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1405 ) ) ) ) );
    (*  self1404 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_638_Just ) ( (  elem1406 ) ) );
}

static  enum Unit_13   for_dash_each634 (    struct SliceAddressIter_635  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_635  temp636 = ( (  into_dash_iter637 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_635 *  it796 = ( &temp636 );
    while ( ( true ) ) {
        struct Maybe_638  dref797 = ( (  next639 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_638_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_638_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_638_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env641 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_578  s1452;
    ;
    ;
    ;
};

struct funenv641 {
    enum Unit_13  (*fun) (  struct env641  ,    int32_t  );
    struct env641 env;
};

static  enum Unit_13   for_dash_each640 (    struct Range_365  iterable793 ,   struct funenv641  fun795 ) {
    struct RangeIter_367  temp642 = ( (  into_dash_iter366 ) ( (  iterable793 ) ) );
    struct RangeIter_367 *  it796 = ( &temp642 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv641  temp643 = (  fun795 );
            ( temp643.fun ( temp643.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_648 {
    ColorPalette_648_Palette8,
    ColorPalette_648_Palette16,
    ColorPalette_648_Palette256,
    ColorPalette_648_PaletteRGB,
};

struct Tui_647 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_648  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_136  f_orig_dash_termios;
};

struct Screen_646 {
    enum CAllocator_4  f_al;
    struct Tui_647 *  f_tui;
    struct Slice_578  f_current;
    struct Slice_578  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_54  f_default_dash_fg;
    struct Color_54  f_default_dash_bg;
};

struct env645 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv645 {
    enum Unit_13  (*fun) (  struct env645  ,    struct Tuple2_355  );
    struct env645 env;
};

static  enum Unit_13   for_dash_each644 (    struct Zip_378  iterable793 ,   struct funenv645  fun795 ) {
    struct Zip_378  temp649 = ( (  into_dash_iter377 ) ( (  iterable793 ) ) );
    struct Zip_378 *  it796 = ( &temp649 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next428 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv645  temp650 = (  fun795 );
            ( temp650.fun ( temp650.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env652 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv652 {
    enum Unit_13  (*fun) (  struct env652  ,    struct Tuple2_355  );
    struct env652 env;
};

static  enum Unit_13   for_dash_each651 (    struct Zip_381  iterable793 ,   struct funenv652  fun795 ) {
    struct Zip_381  temp653 = ( (  into_dash_iter380 ) ( (  iterable793 ) ) );
    struct Zip_381 *  it796 = ( &temp653 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next435 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv652  temp654 = (  fun795 );
            ( temp654.fun ( temp654.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env656 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv656 {
    enum Unit_13  (*fun) (  struct env656  ,    struct Tuple2_355  );
    struct env656 env;
};

static  enum Unit_13   for_dash_each655 (    struct Zip_388  iterable793 ,   struct funenv656  fun795 ) {
    struct Zip_388  temp657 = ( (  into_dash_iter387 ) ( (  iterable793 ) ) );
    struct Zip_388 *  it796 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next441 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv656  temp658 = (  fun795 );
            ( temp658.fun ( temp658.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env660 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv660 {
    enum Unit_13  (*fun) (  struct env660  ,    struct Tuple2_355  );
    struct env660 env;
};

static  enum Unit_13   for_dash_each659 (    struct Zip_392  iterable793 ,   struct funenv660  fun795 ) {
    struct Zip_392  temp661 = ( (  into_dash_iter391 ) ( (  iterable793 ) ) );
    struct Zip_392 *  it796 = ( &temp661 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next449 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv660  temp662 = (  fun795 );
            ( temp662.fun ( temp662.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env664 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv664 {
    enum Unit_13  (*fun) (  struct env664  ,    struct Tuple2_355  );
    struct env664 env;
};

static  enum Unit_13   for_dash_each663 (    struct Zip_402  iterable793 ,   struct funenv664  fun795 ) {
    struct Zip_402  temp665 = ( (  into_dash_iter401 ) ( (  iterable793 ) ) );
    struct Zip_402 *  it796 = ( &temp665 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next458 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv664  temp666 = (  fun795 );
            ( temp666.fun ( temp666.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env668 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv668 {
    enum Unit_13  (*fun) (  struct env668  ,    struct Tuple2_355  );
    struct env668 env;
};

static  enum Unit_13   for_dash_each667 (    struct Zip_407  iterable793 ,   struct funenv668  fun795 ) {
    struct Zip_407  temp669 = ( (  into_dash_iter406 ) ( (  iterable793 ) ) );
    struct Zip_407 *  it796 = ( &temp669 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next462 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv668  temp670 = (  fun795 );
            ( temp670.fun ( temp670.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env672 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv672 {
    enum Unit_13  (*fun) (  struct env672  ,    struct Tuple2_355  );
    struct env672 env;
};

static  enum Unit_13   for_dash_each671 (    struct Zip_411  iterable793 ,   struct funenv672  fun795 ) {
    struct Zip_411  temp673 = ( (  into_dash_iter410 ) ( (  iterable793 ) ) );
    struct Zip_411 *  it796 = ( &temp673 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next470 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv672  temp674 = (  fun795 );
            ( temp674.fun ( temp674.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env676 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv676 {
    enum Unit_13  (*fun) (  struct env676  ,    struct Tuple2_355  );
    struct env676 env;
};

static  enum Unit_13   for_dash_each675 (    struct Zip_413  iterable793 ,   struct funenv676  fun795 ) {
    struct Zip_413  temp677 = ( (  into_dash_iter412 ) ( (  iterable793 ) ) );
    struct Zip_413 *  it796 = ( &temp677 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next471 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv676  temp678 = (  fun795 );
            ( temp678.fun ( temp678.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env680 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv680 {
    enum Unit_13  (*fun) (  struct env680  ,    struct Tuple2_355  );
    struct env680 env;
};

static  enum Unit_13   for_dash_each679 (    struct Zip_381  iterable793 ,   struct funenv680  fun795 ) {
    struct Zip_381  temp681 = ( (  into_dash_iter380 ) ( (  iterable793 ) ) );
    struct Zip_381 *  it796 = ( &temp681 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next435 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv680  temp682 = (  fun795 );
            ( temp682.fun ( temp682.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env684 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv684 {
    enum Unit_13  (*fun) (  struct env684  ,    struct Tuple2_355  );
    struct env684 env;
};

static  enum Unit_13   for_dash_each683 (    struct Zip_381  iterable793 ,   struct funenv684  fun795 ) {
    struct Zip_381  temp685 = ( (  into_dash_iter380 ) ( (  iterable793 ) ) );
    struct Zip_381 *  it796 = ( &temp685 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next435 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv684  temp686 = (  fun795 );
            ( temp686.fun ( temp686.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env688 {
    ;
    struct Color_54  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_54  fg2465;
    ;
    size_t  i2462;
};

struct funenv688 {
    enum Unit_13  (*fun) (  struct env688  ,    struct Tuple2_355  );
    struct env688 env;
};

static  enum Unit_13   for_dash_each687 (    struct Zip_417  iterable793 ,   struct funenv688  fun795 ) {
    struct Zip_417  temp689 = ( (  into_dash_iter416 ) ( (  iterable793 ) ) );
    struct Zip_417 *  it796 = ( &temp689 );
    while ( ( true ) ) {
        struct Maybe_354  dref797 = ( (  next474 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_354_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_354_Just_t ) {
            struct funenv688  temp690 = (  fun795 );
            ( temp690.fun ( temp690.env ,  ( dref797 .stuff .Maybe_354_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_692 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_692   into_dash_iter693 (    struct SmolArray_98  self1556 ) {
    return ( (struct SmolArrayIter_692) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_699 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_699 StrConcat_699_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_699 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_698 {
    struct StrConcat_699  field0;
    char  field1;
};

static struct StrConcat_698 StrConcat_698_StrConcat (  struct StrConcat_699  field0 ,  char  field1 ) {
    return ( struct StrConcat_698 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_702 {
    const char*  field0;
    struct StrConcat_698  field1;
};

static struct StrConcat_702 StrConcat_702_StrConcat (  const char*  field0 ,  struct StrConcat_698  field1 ) {
    return ( struct StrConcat_702 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_701 {
    struct StrConcat_702  field0;
    char  field1;
};

static struct StrConcat_701 StrConcat_701_StrConcat (  struct StrConcat_702  field0 ,  char  field1 ) {
    return ( struct StrConcat_701 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str706 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str705 (    struct StrConcat_699  self1102 ) {
    struct StrConcat_699  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str706 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str704 (    struct StrConcat_698  self1102 ) {
    struct StrConcat_698  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str705 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str703 (    struct StrConcat_702  self1102 ) {
    struct StrConcat_702  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str704 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str700 (    struct StrConcat_701  self1102 ) {
    struct StrConcat_701  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str703 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic697 (    struct StrConcat_698  errmsg1254 ) {
    ( (  print_dash_str700 ) ( ( ( StrConcat_701_StrConcat ) ( ( ( StrConcat_702_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr696 (    struct Array_99 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast187 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get695 (    struct Array_99 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr696 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next694 (    struct SmolArrayIter_692 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get695 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce691 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_692  it818 = ( (  into_dash_iter693 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next694 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp707;
    return (  temp707 );
}

struct SmolArrayIter_709 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_709   into_dash_iter710 (    struct SmolArray_101  self1556 ) {
    return ( (struct SmolArrayIter_709) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr713 (    struct Array_102 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast188 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get712 (    struct Array_102 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr713 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next711 (    struct SmolArrayIter_709 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get712 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce708 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_709  it818 = ( (  into_dash_iter710 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next711 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp714;
    return (  temp714 );
}

struct SmolArrayIter_716 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_716   into_dash_iter717 (    struct SmolArray_104  self1556 ) {
    return ( (struct SmolArrayIter_716) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr720 (    struct Array_105 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast189 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get719 (    struct Array_105 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr720 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next718 (    struct SmolArrayIter_716 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get719 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce715 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_716  it818 = ( (  into_dash_iter717 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next718 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp721;
    return (  temp721 );
}

static  uint32_t   reduce722 (    struct Map_307  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
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
    uint32_t  temp723;
    return (  temp723 );
}

struct Maybe_725 {
    enum {
        Maybe_725_None_t,
        Maybe_725_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_725_Just_s;
    } stuff;
};

static struct Maybe_725 Maybe_725_Just (  int64_t  field0 ) {
    return ( struct Maybe_725 ) { .tag = Maybe_725_Just_t, .stuff = { .Maybe_725_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_725   reduce724 (    struct TakeWhile_504  iterable812 ,    struct Maybe_725  base814 ,    struct Maybe_725 (*  fun816 )(    char  ,    struct Maybe_725  ) ) {
    struct Maybe_725  x817 = (  base814 );
    struct TakeWhile_504  it818 = ( (  into_dash_iter503 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next516 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_725  temp726;
    return (  temp726 );
}

static  size_t   reduce727 (    struct TakeWhile_504  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_504  it818 = ( (  into_dash_iter503 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next516 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp728;
    return (  temp728 );
}

static  int32_t   reduce729 (    struct Map_310  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
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
    int32_t  temp730;
    return (  temp730 );
}

static  size_t   reduce731 (    struct TakeWhile_506  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_506  it818 = ( (  into_dash_iter505 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next518 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp732;
    return (  temp732 );
}

struct env734 {
    bool (*  fun845 )(    struct Tuple2_427  );
};

struct funenv734 {
    bool  (*fun) (  struct env734  ,    struct Tuple2_427  ,    bool  );
    struct env734 env;
};

static  bool   reduce733 (    struct Zip_376  iterable812 ,    bool  base814 ,   struct funenv734  fun816 ) {
    bool  x817 = (  base814 );
    struct Zip_376  it818 = ( (  into_dash_iter375 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_426  dref819 = ( (  next425 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_426_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_426_Just_t ) {
            struct funenv734  temp735 = (  fun816 );
            x817 = ( temp735.fun ( temp735.env ,  ( dref819 .stuff .Maybe_426_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    bool  temp736;
    return (  temp736 );
}

static  struct Maybe_725   reduce737 (    struct TakeWhile_515  iterable812 ,    struct Maybe_725  base814 ,    struct Maybe_725 (*  fun816 )(    char  ,    struct Maybe_725  ) ) {
    struct Maybe_725  x817 = (  base814 );
    struct TakeWhile_515  it818 = ( (  into_dash_iter514 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next524 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_725  temp738;
    return (  temp738 );
}

static  size_t   reduce739 (    struct IntStrIter_379  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_379  it818 = ( (  into_dash_iter486 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next429 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp740;
    return (  temp740 );
}

static  size_t   reduce741 (    struct StrConcatIter_382  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_382  it818 = ( (  into_dash_iter488 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next436 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp742;
    return (  temp742 );
}

static  size_t   reduce743 (    struct StrConcatIter_389  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_389  it818 = ( (  into_dash_iter490 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next442 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp744;
    return (  temp744 );
}

static  size_t   reduce745 (    struct StrConcatIter_393  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_393  it818 = ( (  into_dash_iter492 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next450 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp746;
    return (  temp746 );
}

static  size_t   reduce747 (    struct StrConcatIter_403  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_403  it818 = ( (  into_dash_iter494 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next459 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp748;
    return (  temp748 );
}

static  size_t   reduce749 (    struct StrConcatIter_408  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_408  it818 = ( (  into_dash_iter496 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next463 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp750;
    return (  temp750 );
}

static  size_t   reduce751 (    struct StrConcatIter_405  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_405  it818 = ( (  into_dash_iter498 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next461 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp752;
    return (  temp752 );
}

static  size_t   reduce753 (    struct StrConcatIter_414  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_414  it818 = ( (  into_dash_iter500 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next472 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp754;
    return (  temp754 );
}

static  size_t   reduce755 (    struct StrConcatIter_418  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_418  it818 = ( (  into_dash_iter502 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next475 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp756;
    return (  temp756 );
}

static  size_t   lam758 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count757 (    struct TakeWhile_504  it823 ) {
    return ( (  reduce727 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam758 ) ) );
}

static  size_t   lam760 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count759 (    struct TakeWhile_506  it823 ) {
    return ( (  reduce731 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam760 ) ) );
}

static  size_t   lam762 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count761 (    struct IntStrIter_379  it823 ) {
    return ( (  reduce739 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam762 ) ) );
}

static  size_t   lam764 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count763 (    struct StrConcatIter_382  it823 ) {
    return ( (  reduce741 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam764 ) ) );
}

static  size_t   lam766 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count765 (    struct StrConcatIter_389  it823 ) {
    return ( (  reduce743 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam766 ) ) );
}

static  size_t   lam768 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count767 (    struct StrConcatIter_393  it823 ) {
    return ( (  reduce745 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam768 ) ) );
}

static  size_t   lam770 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count769 (    struct StrConcatIter_403  it823 ) {
    return ( (  reduce747 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam770 ) ) );
}

static  size_t   lam772 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count771 (    struct StrConcatIter_408  it823 ) {
    return ( (  reduce749 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam772 ) ) );
}

static  size_t   lam774 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count773 (    struct StrConcatIter_405  it823 ) {
    return ( (  reduce751 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam774 ) ) );
}

static  size_t   lam776 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count775 (    struct StrConcatIter_414  it823 ) {
    return ( (  reduce753 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam776 ) ) );
}

static  size_t   lam778 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count777 (    struct StrConcatIter_418  it823 ) {
    return ( (  reduce755 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam778 ) ) );
}

static  int32_t   lam780 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add82 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum779 (    struct Map_310  it829 ) {
    return ( (  reduce729 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam780 ) ) );
}

static  bool   lam734 (   struct env734 env ,    struct Tuple2_427  e847 ,    bool  x849 ) {
    return ( ( ( env.fun845 ) ( (  e847 ) ) ) && (  x849 ) );
}

static  bool   all781 (    struct Zip_376  it843 ,    bool (*  fun845 )(    struct Tuple2_427  ) ) {
    struct env734 envinst734 = {
        .fun845 =  fun845 ,
    };
    return ( (  reduce733 ) ( (  it843 ) ,  ( true ) ,  ( (struct funenv734){ .fun = lam734, .env = envinst734 } ) ) );
}

static  struct Maybe_314   head782 (    struct List_280 *  it861 ) {
    struct SliceIter_278  temp783 = ( (  into_dash_iter277 ) ( (  it861 ) ) );
    return ( (  next351 ) ( ( &temp783 ) ) );
}

static  struct Maybe_297   head784 (    struct TakeWhile_504  it861 ) {
    struct TakeWhile_504  temp785 = ( (  into_dash_iter503 ) ( (  it861 ) ) );
    return ( (  next516 ) ( ( &temp785 ) ) );
}

static  struct Maybe_315   head786 (    struct LineIter_300  it861 ) {
    struct LineIter_300  temp787 = ( (  into_dash_iter333 ) ( (  it861 ) ) );
    return ( (  next316 ) ( ( &temp787 ) ) );
}

static  struct Maybe_297   head788 (    struct TakeWhile_515  it861 ) {
    struct TakeWhile_515  temp789 = ( (  into_dash_iter514 ) ( (  it861 ) ) );
    return ( (  next524 ) ( ( &temp789 ) ) );
}

static  struct Maybe_297   head790 (    struct TakeWhile_508  it861 ) {
    struct TakeWhile_508  temp791 = ( (  into_dash_iter507 ) ( (  it861 ) ) );
    return ( (  next519 ) ( ( &temp791 ) ) );
}

static  bool   null792 (    struct List_280 *  it864 ) {
    struct Maybe_314  dref865 = ( (  head782 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_314_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null793 (    struct TakeWhile_504  it864 ) {
    struct Maybe_297  dref865 = ( (  head784 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null794 (    struct TakeWhile_508  it864 ) {
    struct Maybe_297  dref865 = ( (  head790 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_297   lam586 (   struct env586 env ,    int32_t  dref902 ) {
    return ( (  next517 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_795 (    struct Scanner_286 *  it899 ,    size_t  n901 ) {
    struct env586 envinst586 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each585 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32270 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv586){ .fun = lam586, .env = envinst586 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or796 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors797 (    struct SmolArray_98  vals947 ) {
    return ( (  reduce691 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_ors798 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce708 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_ors799 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce715 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_and800 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg801 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod802 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div80 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub79 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp74 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add78 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_804 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp805 (    struct Cursor_804  l2497 ,    struct Cursor_804  r2499 ) {
    enum Ordering_10  dref2500 = ( (  cmp75 ) ( ( (  l2497 ) .f_y ) ,  ( (  r2499 ) .f_y ) ) );
    switch (  dref2500 ) {
        case Ordering_10_EQ : {
            return ( (  cmp75 ) ( ( (  l2497 ) .f_x ) ,  ( (  r2499 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2501 =  dref2500;
            return (  els2501 );
            break;
        }
    }
}

static  struct Cursor_804   min803 (    struct Cursor_804  l965 ,    struct Cursor_804  r967 ) {
    if ( (  cmp805 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min806 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp75 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max807 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp75 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_804   max808 (    struct Cursor_804  l970 ,    struct Cursor_804  r972 ) {
    if ( (  cmp805 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between809 (    struct Cursor_804  c975 ,    struct Cursor_804  l977 ,    struct Cursor_804  r979 ) {
    struct Cursor_804  from980 = ( (  min803 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_804  to981 = ( (  max808 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp805 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp805 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp810 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
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

static  struct ConstStrIter_308   chars811 (    const char*  self1014 ) {
    return ( (  into_dash_iter335 ) ( (  self1014 ) ) );
}

static  struct AppendIter_386   chars812 (    char  self1020 ) {
    return ( (  single542 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits813 (    size_t  self1035 ) {
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

static  int32_t   count_dash_digits814 (    int32_t  self1035 ) {
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

static  int32_t   count_dash_digits815 (    uint32_t  self1035 ) {
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

static  struct IntStrIter_379   chars816 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_379) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits814 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str817 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_390   chars818 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_390) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits815 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str819 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32276 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_409   chars820 (    size_t  self1066 ) {
    return ( (struct IntStrIter_409) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits813 ) ( (  self1066 ) ) ) } );
}

struct Mode_823 {
    enum {
        Mode_823_Normal_t,
        Mode_823_Insert_t,
        Mode_823_Select_t,
        Mode_823_Cmd_t,
        Mode_823_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_572  field0;
        } Mode_823_Cmd_s;
        struct {
            struct StrBuilder_572  field0;
        } Mode_823_SearchBox_s;
    } stuff;
};

static struct Mode_823 Mode_823_Cmd (  struct StrBuilder_572  field0 ) {
    return ( struct Mode_823 ) { .tag = Mode_823_Cmd_t, .stuff = { .Mode_823_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_823 Mode_823_SearchBox (  struct StrBuilder_572  field0 ) {
    return ( struct Mode_823 ) { .tag = Mode_823_SearchBox_t, .stuff = { .Mode_823_SearchBox_s = { .field0 = field0 } } };
};

struct StrConcat_822 {
    const char*  field0;
    struct Mode_823  field1;
};

static struct StrConcat_822 StrConcat_822_StrConcat (  const char*  field0 ,  struct Mode_823  field1 ) {
    return ( struct StrConcat_822 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_827 {
    const char*  field0;
    struct DynStr_131  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  const char*  field0 ,  struct DynStr_131  field1 ) {
    return ( struct StrConcat_827 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_826 {
    struct StrConcat_827  field0;
    char  field1;
};

static struct StrConcat_826 StrConcat_826_StrConcat (  struct StrConcat_827  field0 ,  char  field1 ) {
    return ( struct StrConcat_826 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_825 {
    enum {
        StrCase_825_StrCase1_t,
        StrCase_825_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_825_StrCase1_s;
        struct {
            struct StrConcat_826  field0;
        } StrCase_825_StrCase2_s;
    } stuff;
};

static struct StrCase_825 StrCase_825_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_825 ) { .tag = StrCase_825_StrCase1_t, .stuff = { .StrCase_825_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_825 StrCase_825_StrCase2 (  struct StrConcat_826  field0 ) {
    return ( struct StrCase_825 ) { .tag = StrCase_825_StrCase2_t, .stuff = { .StrCase_825_StrCase2_s = { .field0 = field0 } } };
};

static  struct DynStr_131   as_dash_str829 (    struct StrBuilder_572 *  builder2020 ) {
    return ( (struct DynStr_131) { .f_contents = ( (  subslice292 ) ( ( ( ( * (  builder2020 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2020 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_287   chars836 (    struct DynStr_131  self1498 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1498 ) .f_contents ) ) );
}

static  struct StrConcatIter_385   into_dash_iter835 (    struct StrConcat_827  dref1097 ) {
    return ( (struct StrConcatIter_385) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars836 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_385   chars834 (    struct StrConcat_827  self1108 ) {
    return ( (  into_dash_iter835 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_384   into_dash_iter833 (    struct StrConcat_826  dref1097 ) {
    return ( (struct StrConcatIter_384) { .f_left = ( (  chars834 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_384   chars832 (    struct StrConcat_826  self1108 ) {
    return ( (  into_dash_iter833 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_383   into_dash_iter831 (    struct StrCase_825  self1121 ) {
    struct StrCase_825  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_825_StrCase1_t ) {
        return ( ( StrCaseIter_383_StrCaseIter1 ) ( ( (  chars811 ) ( ( dref1122 .stuff .StrCase_825_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_825_StrCase2_t ) {
        return ( ( StrCaseIter_383_StrCaseIter2 ) ( ( (  chars832 ) ( ( dref1122 .stuff .StrCase_825_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_383   chars830 (    struct StrCase_825  self1133 ) {
    return ( (  into_dash_iter831 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_383   chars824 (    struct Mode_823  self2523 ) {
    struct StrCase_825  temp828;
    struct StrCase_825  c2524 = (  temp828 );
    struct Mode_823  dref2525 = (  self2523 );
    if ( dref2525.tag == Mode_823_Normal_t ) {
        c2524 = ( ( StrCase_825_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2525.tag == Mode_823_Insert_t ) {
        c2524 = ( ( StrCase_825_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2525.tag == Mode_823_Select_t ) {
        c2524 = ( ( StrCase_825_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2525.tag == Mode_823_Cmd_t ) {
        struct DynStr_131  ss2527 = ( (  as_dash_str829 ) ( ( & ( dref2525 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
        c2524 = ( ( StrCase_825_StrCase2 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "Cmd(" ) ,  (  ss2527 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2525.tag == Mode_823_SearchBox_t ) {
        struct DynStr_131  ss2529 = ( (  as_dash_str829 ) ( ( & ( dref2525 .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
        c2524 = ( ( StrCase_825_StrCase2 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "Search(" ) ,  (  ss2529 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars830 ) ( (  c2524 ) ) );
}

static  struct StrConcatIter_382   into_dash_iter821 (    struct StrConcat_822  dref1097 ) {
    return ( (struct StrConcatIter_382) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars824 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_838 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_838 StrConcat_838_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_838 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_389   into_dash_iter837 (    struct StrConcat_838  dref1097 ) {
    return ( (struct StrConcatIter_389) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars818 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_840 {
    const char*  field0;
    struct Maybe_354  field1;
};

static struct StrConcat_840 StrConcat_840_StrConcat (  const char*  field0 ,  struct Maybe_354  field1 ) {
    return ( struct StrConcat_840 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_844 {
    const char*  field0;
    struct Tuple2_355  field1;
};

static struct StrConcat_844 StrConcat_844_StrConcat (  const char*  field0 ,  struct Tuple2_355  field1 ) {
    return ( struct StrConcat_844 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_843 {
    struct StrConcat_844  field0;
    char  field1;
};

static struct StrConcat_843 StrConcat_843_StrConcat (  struct StrConcat_844  field0 ,  char  field1 ) {
    return ( struct StrConcat_843 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_842 {
    enum {
        StrCase_842_StrCase1_t,
        StrCase_842_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_842_StrCase1_s;
        struct {
            struct StrConcat_843  field0;
        } StrCase_842_StrCase2_s;
    } stuff;
};

static struct StrCase_842 StrCase_842_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_842 ) { .tag = StrCase_842_StrCase1_t, .stuff = { .StrCase_842_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_842 StrCase_842_StrCase2 (  struct StrConcat_843  field0 ) {
    return ( struct StrCase_842 ) { .tag = StrCase_842_StrCase2_t, .stuff = { .StrCase_842_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_857 {
    char  field0;
    char  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrConcat_857  field0;
    const char*  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_857  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_855 {
    struct StrConcat_856  field0;
    int32_t  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  struct StrConcat_856  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_854 {
    struct StrConcat_855  field0;
    char  field1;
};

static struct StrConcat_854 StrConcat_854_StrConcat (  struct StrConcat_855  field0 ,  char  field1 ) {
    return ( struct StrConcat_854 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_400   into_dash_iter864 (    struct StrConcat_857  dref1097 ) {
    return ( (struct StrConcatIter_400) { .f_left = ( (  chars812 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_400   chars863 (    struct StrConcat_857  self1108 ) {
    return ( (  into_dash_iter864 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_399   into_dash_iter862 (    struct StrConcat_856  dref1097 ) {
    return ( (struct StrConcatIter_399) { .f_left = ( (  chars863 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars811 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_399   chars861 (    struct StrConcat_856  self1108 ) {
    return ( (  into_dash_iter862 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_398   into_dash_iter860 (    struct StrConcat_855  dref1097 ) {
    return ( (struct StrConcatIter_398) { .f_left = ( (  chars861 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars816 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_398   chars859 (    struct StrConcat_855  self1108 ) {
    return ( (  into_dash_iter860 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_397   into_dash_iter858 (    struct StrConcat_854  dref1097 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars859 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars853 (    struct StrConcat_854  self1108 ) {
    return ( (  into_dash_iter858 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_397   chars852 (    struct Tuple2_355  dref1158 ) {
    return ( (  chars853 ) ( ( ( StrConcat_854_StrConcat ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_396   into_dash_iter851 (    struct StrConcat_844  dref1097 ) {
    return ( (struct StrConcatIter_396) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars852 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_396   chars850 (    struct StrConcat_844  self1108 ) {
    return ( (  into_dash_iter851 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter849 (    struct StrConcat_843  dref1097 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars850 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_395   chars848 (    struct StrConcat_843  self1108 ) {
    return ( (  into_dash_iter849 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_394   into_dash_iter847 (    struct StrCase_842  self1121 ) {
    struct StrCase_842  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_842_StrCase1_t ) {
        return ( ( StrCaseIter_394_StrCaseIter1 ) ( ( (  chars811 ) ( ( dref1122 .stuff .StrCase_842_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_842_StrCase2_t ) {
        return ( ( StrCaseIter_394_StrCaseIter2 ) ( ( (  chars848 ) ( ( dref1122 .stuff .StrCase_842_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_394   chars846 (    struct StrCase_842  self1133 ) {
    return ( (  into_dash_iter847 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_394   chars841 (    struct Maybe_354  self1147 ) {
    struct StrCase_842  temp845;
    struct StrCase_842  c1148 = (  temp845 );
    struct Maybe_354  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_354_None_t ) {
        c1148 = ( ( StrCase_842_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_354_Just_t ) {
        c1148 = ( ( StrCase_842_StrCase2 ) ( ( ( StrConcat_843_StrConcat ) ( ( ( StrConcat_844_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_354_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars846 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_393   into_dash_iter839 (    struct StrConcat_840  dref1097 ) {
    return ( (struct StrConcatIter_393) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars841 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_868 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
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
    int32_t  field1;
};

static struct StrConcat_866 StrConcat_866_StrConcat (  struct StrConcat_867  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_866 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_405   into_dash_iter872 (    struct StrConcat_868  dref1097 ) {
    return ( (struct StrConcatIter_405) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars816 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_405   chars871 (    struct StrConcat_868  self1108 ) {
    return ( (  into_dash_iter872 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_404   into_dash_iter870 (    struct StrConcat_867  dref1097 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars871 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_404   chars869 (    struct StrConcat_867  self1108 ) {
    return ( (  into_dash_iter870 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_403   into_dash_iter865 (    struct StrConcat_866  dref1097 ) {
    return ( (struct StrConcatIter_403) { .f_left = ( (  chars869 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars816 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_408   into_dash_iter873 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_408) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars820 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_876 {
    struct StrConcat_868  field0;
    const char*  field1;
};

static struct StrConcat_876 StrConcat_876_StrConcat (  struct StrConcat_868  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_876 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_875 {
    struct StrConcat_876  field0;
    int32_t  field1;
};

static struct StrConcat_875 StrConcat_875_StrConcat (  struct StrConcat_876  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_875 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_415   into_dash_iter878 (    struct StrConcat_876  dref1097 ) {
    return ( (struct StrConcatIter_415) { .f_left = ( (  chars871 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars811 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_415   chars877 (    struct StrConcat_876  self1108 ) {
    return ( (  into_dash_iter878 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_414   into_dash_iter874 (    struct StrConcat_875  dref1097 ) {
    return ( (struct StrConcatIter_414) { .f_left = ( (  chars877 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars816 ) ( ( dref1097 .field1 ) ) ) } );
}

struct Maybe_881 {
    enum {
        Maybe_881_None_t,
        Maybe_881_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_572  field0;
        } Maybe_881_Just_s;
    } stuff;
};

static struct Maybe_881 Maybe_881_Just (  struct StrBuilder_572  field0 ) {
    return ( struct Maybe_881 ) { .tag = Maybe_881_Just_t, .stuff = { .Maybe_881_Just_s = { .field0 = field0 } } };
};

struct StrConcat_880 {
    const char*  field0;
    struct Maybe_881  field1;
};

static struct StrConcat_880 StrConcat_880_StrConcat (  const char*  field0 ,  struct Maybe_881  field1 ) {
    return ( struct StrConcat_880 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_885 {
    const char*  field0;
    struct StrBuilder_572  field1;
};

static struct StrConcat_885 StrConcat_885_StrConcat (  const char*  field0 ,  struct StrBuilder_572  field1 ) {
    return ( struct StrConcat_885 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_884 {
    struct StrConcat_885  field0;
    char  field1;
};

static struct StrConcat_884 StrConcat_884_StrConcat (  struct StrConcat_885  field0 ,  char  field1 ) {
    return ( struct StrConcat_884 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_883 {
    enum {
        StrCase_883_StrCase1_t,
        StrCase_883_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_883_StrCase1_s;
        struct {
            struct StrConcat_884  field0;
        } StrCase_883_StrCase2_s;
    } stuff;
};

static struct StrCase_883 StrCase_883_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_883 ) { .tag = StrCase_883_StrCase1_t, .stuff = { .StrCase_883_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_883 StrCase_883_StrCase2 (  struct StrConcat_884  field0 ) {
    return ( struct StrCase_883 ) { .tag = StrCase_883_StrCase2_t, .stuff = { .StrCase_883_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_287   chars893 (    struct StrBuilder_572  s2034 ) {
    return ( (  into_dash_iter290 ) ( ( (  s2034 ) .f_chars ) ) );
}

static  struct StrConcatIter_385   into_dash_iter892 (    struct StrConcat_885  dref1097 ) {
    return ( (struct StrConcatIter_385) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars893 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_385   chars891 (    struct StrConcat_885  self1108 ) {
    return ( (  into_dash_iter892 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_384   into_dash_iter890 (    struct StrConcat_884  dref1097 ) {
    return ( (struct StrConcatIter_384) { .f_left = ( (  chars891 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_384   chars889 (    struct StrConcat_884  self1108 ) {
    return ( (  into_dash_iter890 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_383   into_dash_iter888 (    struct StrCase_883  self1121 ) {
    struct StrCase_883  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_883_StrCase1_t ) {
        return ( ( StrCaseIter_383_StrCaseIter1 ) ( ( (  chars811 ) ( ( dref1122 .stuff .StrCase_883_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_883_StrCase2_t ) {
        return ( ( StrCaseIter_383_StrCaseIter2 ) ( ( (  chars889 ) ( ( dref1122 .stuff .StrCase_883_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_383   chars887 (    struct StrCase_883  self1133 ) {
    return ( (  into_dash_iter888 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_383   chars882 (    struct Maybe_881  self1147 ) {
    struct StrCase_883  temp886;
    struct StrCase_883  c1148 = (  temp886 );
    struct Maybe_881  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_881_None_t ) {
        c1148 = ( ( StrCase_883_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_881_Just_t ) {
        c1148 = ( ( StrCase_883_StrCase2 ) ( ( ( StrConcat_884_StrConcat ) ( ( ( StrConcat_885_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_881_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars887 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_382   into_dash_iter879 (    struct StrConcat_880  dref1097 ) {
    return ( (struct StrConcatIter_382) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars882 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_895 {
    const char*  field0;
    struct Maybe_315  field1;
};

static struct StrConcat_895 StrConcat_895_StrConcat (  const char*  field0 ,  struct Maybe_315  field1 ) {
    return ( struct StrConcat_895 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_383   chars896 (    struct Maybe_315  self1147 ) {
    struct StrCase_825  temp897;
    struct StrCase_825  c1148 = (  temp897 );
    struct Maybe_315  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_315_None_t ) {
        c1148 = ( ( StrCase_825_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_315_Just_t ) {
        c1148 = ( ( StrCase_825_StrCase2 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_315_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars830 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_382   into_dash_iter894 (    struct StrConcat_895  dref1097 ) {
    return ( (struct StrConcatIter_382) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars896 ) ( ( dref1097 .field1 ) ) ) } );
}

struct Maybe_900 {
    enum {
        Maybe_900_None_t,
        Maybe_900_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_900_Just_s;
    } stuff;
};

static struct Maybe_900 Maybe_900_Just (  size_t  field0 ) {
    return ( struct Maybe_900 ) { .tag = Maybe_900_Just_t, .stuff = { .Maybe_900_Just_s = { .field0 = field0 } } };
};

struct StrConcat_899 {
    const char*  field0;
    struct Maybe_900  field1;
};

static struct StrConcat_899 StrConcat_899_StrConcat (  const char*  field0 ,  struct Maybe_900  field1 ) {
    return ( struct StrConcat_899 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_903 {
    struct StrConcat_17  field0;
    char  field1;
};

static struct StrConcat_903 StrConcat_903_StrConcat (  struct StrConcat_17  field0 ,  char  field1 ) {
    return ( struct StrConcat_903 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_902 {
    enum {
        StrCase_902_StrCase1_t,
        StrCase_902_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_902_StrCase1_s;
        struct {
            struct StrConcat_903  field0;
        } StrCase_902_StrCase2_s;
    } stuff;
};

static struct StrCase_902 StrCase_902_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_902 ) { .tag = StrCase_902_StrCase1_t, .stuff = { .StrCase_902_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_902 StrCase_902_StrCase2 (  struct StrConcat_903  field0 ) {
    return ( struct StrCase_902 ) { .tag = StrCase_902_StrCase2_t, .stuff = { .StrCase_902_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_408   chars909 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter873 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_420   into_dash_iter908 (    struct StrConcat_903  dref1097 ) {
    return ( (struct StrConcatIter_420) { .f_left = ( (  chars909 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_420   chars907 (    struct StrConcat_903  self1108 ) {
    return ( (  into_dash_iter908 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_419   into_dash_iter906 (    struct StrCase_902  self1121 ) {
    struct StrCase_902  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_902_StrCase1_t ) {
        return ( ( StrCaseIter_419_StrCaseIter1 ) ( ( (  chars811 ) ( ( dref1122 .stuff .StrCase_902_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_902_StrCase2_t ) {
        return ( ( StrCaseIter_419_StrCaseIter2 ) ( ( (  chars907 ) ( ( dref1122 .stuff .StrCase_902_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_419   chars905 (    struct StrCase_902  self1133 ) {
    return ( (  into_dash_iter906 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_419   chars901 (    struct Maybe_900  self1147 ) {
    struct StrCase_902  temp904;
    struct StrCase_902  c1148 = (  temp904 );
    struct Maybe_900  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_900_None_t ) {
        c1148 = ( ( StrCase_902_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_900_Just_t ) {
        c1148 = ( ( StrCase_902_StrCase2 ) ( ( ( StrConcat_903_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_900_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars905 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_418   into_dash_iter898 (    struct StrConcat_899  dref1097 ) {
    return ( (struct StrConcatIter_418) { .f_left = ( (  chars811 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars901 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_914 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_914 StrConcat_914_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_914 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_913 {
    struct StrConcat_914  field0;
    char  field1;
};

static struct StrConcat_913 StrConcat_913_StrConcat (  struct StrConcat_914  field0 ,  char  field1 ) {
    return ( struct StrConcat_913 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_912 {
    const char*  field0;
    struct StrConcat_913  field1;
};

static struct StrConcat_912 StrConcat_912_StrConcat (  const char*  field0 ,  struct StrConcat_913  field1 ) {
    return ( struct StrConcat_912 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_911 {
    struct StrConcat_912  field0;
    char  field1;
};

static struct StrConcat_911 StrConcat_911_StrConcat (  struct StrConcat_912  field0 ,  char  field1 ) {
    return ( struct StrConcat_911 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str917 (    struct StrConcat_914  self1102 ) {
    struct StrConcat_914  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str916 (    struct StrConcat_913  self1102 ) {
    struct StrConcat_913  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str917 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str915 (    struct StrConcat_912  self1102 ) {
    struct StrConcat_912  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str916 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str910 (    struct StrConcat_911  self1102 ) {
    struct StrConcat_911  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str915 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_920 {
    const char*  field0;
    struct StrConcat_856  field1;
};

static struct StrConcat_920 StrConcat_920_StrConcat (  const char*  field0 ,  struct StrConcat_856  field1 ) {
    return ( struct StrConcat_920 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_919 {
    struct StrConcat_920  field0;
    char  field1;
};

static struct StrConcat_919 StrConcat_919_StrConcat (  struct StrConcat_920  field0 ,  char  field1 ) {
    return ( struct StrConcat_919 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str923 (    struct StrConcat_857  self1102 ) {
    struct StrConcat_857  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str922 (    struct StrConcat_856  self1102 ) {
    struct StrConcat_856  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str923 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str921 (    struct StrConcat_920  self1102 ) {
    struct StrConcat_920  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str922 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str918 (    struct StrConcat_919  self1102 ) {
    struct StrConcat_919  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str921 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_927 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_927 StrConcat_927_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_927 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_926 {
    const char*  field0;
    struct StrConcat_927  field1;
};

static struct StrConcat_926 StrConcat_926_StrConcat (  const char*  field0 ,  struct StrConcat_927  field1 ) {
    return ( struct StrConcat_926 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_925 {
    struct StrConcat_926  field0;
    char  field1;
};

static struct StrConcat_925 StrConcat_925_StrConcat (  struct StrConcat_926  field0 ,  char  field1 ) {
    return ( struct StrConcat_925 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str929 (    struct StrConcat_927  self1102 ) {
    struct StrConcat_927  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str928 (    struct StrConcat_926  self1102 ) {
    struct StrConcat_926  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str929 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str924 (    struct StrConcat_925  self1102 ) {
    struct StrConcat_925  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str928 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_932 {
    const char*  field0;
    struct StrConcat_914  field1;
};

static struct StrConcat_932 StrConcat_932_StrConcat (  const char*  field0 ,  struct StrConcat_914  field1 ) {
    return ( struct StrConcat_932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_931 {
    struct StrConcat_932  field0;
    char  field1;
};

static struct StrConcat_931 StrConcat_931_StrConcat (  struct StrConcat_932  field0 ,  char  field1 ) {
    return ( struct StrConcat_931 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str933 (    struct StrConcat_932  self1102 ) {
    struct StrConcat_932  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str917 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str930 (    struct StrConcat_931  self1102 ) {
    struct StrConcat_931  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str933 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_940 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_940 StrConcat_940_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_939 {
    struct StrConcat_940  field0;
    char  field1;
};

static struct StrConcat_939 StrConcat_939_StrConcat (  struct StrConcat_940  field0 ,  char  field1 ) {
    return ( struct StrConcat_939 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_938 {
    struct StrConcat_939  field0;
    uint8_t  field1;
};

static struct StrConcat_938 StrConcat_938_StrConcat (  struct StrConcat_939  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_938 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_937 {
    struct StrConcat_938  field0;
    char  field1;
};

static struct StrConcat_937 StrConcat_937_StrConcat (  struct StrConcat_938  field0 ,  char  field1 ) {
    return ( struct StrConcat_937 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_936 {
    struct StrConcat_937  field0;
    uint8_t  field1;
};

static struct StrConcat_936 StrConcat_936_StrConcat (  struct StrConcat_937  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_936 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_935 {
    struct StrConcat_936  field0;
    char  field1;
};

static struct StrConcat_935 StrConcat_935_StrConcat (  struct StrConcat_936  field0 ,  char  field1 ) {
    return ( struct StrConcat_935 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str945 (    struct StrConcat_940  self1102 ) {
    struct StrConcat_940  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str944 (    struct StrConcat_939  self1102 ) {
    struct StrConcat_939  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str945 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str943 (    struct StrConcat_938  self1102 ) {
    struct StrConcat_938  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str944 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str942 (    struct StrConcat_937  self1102 ) {
    struct StrConcat_937  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str943 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str941 (    struct StrConcat_936  self1102 ) {
    struct StrConcat_936  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str942 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str934 (    struct StrConcat_935  self1102 ) {
    struct StrConcat_935  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str941 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_949 {
    struct StrConcat_838  field0;
    char  field1;
};

static struct StrConcat_949 StrConcat_949_StrConcat (  struct StrConcat_838  field0 ,  char  field1 ) {
    return ( struct StrConcat_949 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_948 {
    struct StrConcat_949  field0;
    uint32_t  field1;
};

static struct StrConcat_948 StrConcat_948_StrConcat (  struct StrConcat_949  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_948 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_947 {
    struct StrConcat_948  field0;
    char  field1;
};

static struct StrConcat_947 StrConcat_947_StrConcat (  struct StrConcat_948  field0 ,  char  field1 ) {
    return ( struct StrConcat_947 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str952 (    struct StrConcat_838  self1102 ) {
    struct StrConcat_838  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str817 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str951 (    struct StrConcat_949  self1102 ) {
    struct StrConcat_949  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str952 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str950 (    struct StrConcat_948  self1102 ) {
    struct StrConcat_948  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str951 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str817 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str946 (    struct StrConcat_947  self1102 ) {
    struct StrConcat_947  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str950 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_382   chars953 (    struct StrConcat_822  self1108 ) {
    return ( (  into_dash_iter821 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   chars954 (    struct StrConcat_838  self1108 ) {
    return ( (  into_dash_iter837 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   chars955 (    struct StrConcat_840  self1108 ) {
    return ( (  into_dash_iter839 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_403   chars956 (    struct StrConcat_866  self1108 ) {
    return ( (  into_dash_iter865 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_414   chars957 (    struct StrConcat_875  self1108 ) {
    return ( (  into_dash_iter874 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_382   chars958 (    struct StrConcat_880  self1108 ) {
    return ( (  into_dash_iter879 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_382   chars959 (    struct StrConcat_895  self1108 ) {
    return ( (  into_dash_iter894 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_418   chars960 (    struct StrConcat_899  self1108 ) {
    return ( (  into_dash_iter898 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_504   chars961 (    struct TakeWhile_504  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_508   chars962 (    struct TakeWhile_508  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_513   chars963 (    struct TakeWhile_513  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_515   chars964 (    struct TakeWhile_515  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_526   chars965 (    struct TakeWhile_526  self1193 ) {
    return (  self1193 );
}

struct Tuple2_969 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_969 Tuple2_969_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_969 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq966 (    struct TakeWhile_515  l1203 ,    char  r1205 ) {
    struct TakeWhile_515  temp967 = ( (  chars964 ) ( (  l1203 ) ) );
    struct TakeWhile_515 *  l1206 = ( &temp967 );
    struct AppendIter_386  temp968 = ( (  chars812 ) ( (  r1205 ) ) );
    struct AppendIter_386 *  r1207 = ( &temp968 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next524 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next440 ) ( (  r1207 ) ) );
        struct Tuple2_969  dref1210 = ( ( Tuple2_969_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  bool   eq970 (    struct TakeWhile_515  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_515  temp971 = ( (  chars964 ) ( (  l1203 ) ) );
    struct TakeWhile_515 *  l1206 = ( &temp971 );
    struct ConstStrIter_308  temp972 = ( (  chars811 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp972 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next524 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_969  dref1210 = ( ( Tuple2_969_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  bool   eq973 (    struct TakeWhile_526  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_526  temp974 = ( (  chars965 ) ( (  l1203 ) ) );
    struct TakeWhile_526 *  l1206 = ( &temp974 );
    struct ConstStrIter_308  temp975 = ( (  chars811 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp975 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next525 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_969  dref1210 = ( ( Tuple2_969_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  int32_t   char_dash_i32976 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed249 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8977 (    char  c1223 ) {
    return ( (  cast195 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char978 (    int32_t  i1226 ) {
    return ( (  cast196 ) ( (  i1226 ) ) );
}

static  bool   eq979 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp980 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp75 ) ( ( (  char_dash_i32976 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32976 ) ( (  r1246 ) ) ) ) );
}

static  enum Unit_13   todo981 (  ) {
    ( (  print_dash_str22 ) ( ( "todo\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  bool   unreachable982 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   unreachable983 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   panic984 (    struct StrConcat_913  errmsg1254 ) {
    ( (  print_dash_str910 ) ( ( ( StrConcat_911_StrConcat ) ( ( ( StrConcat_912_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic985 (    struct StrConcat_856  errmsg1254 ) {
    ( (  print_dash_str918 ) ( ( ( StrConcat_919_StrConcat ) ( ( ( StrConcat_920_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic986 (    const char*  errmsg1254 ) {
    ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic987 (    struct StrConcat_927  errmsg1254 ) {
    ( (  print_dash_str924 ) ( ( ( StrConcat_925_StrConcat ) ( ( ( StrConcat_926_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic988 (    struct StrConcat_914  errmsg1254 ) {
    ( (  print_dash_str930 ) ( ( ( StrConcat_931_StrConcat ) ( ( ( StrConcat_932_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   panic_prime_989 (    const char*  errmsg1257 ) {
    ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   assert990 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail991 (    struct Maybe_265  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_265  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_265_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined126 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_265_Just_t ) {
        return ( dref1270 .stuff .Maybe_265_Just_s .field0 );
    }
}

static  struct DynStr_131   or_dash_fail992 (    struct Maybe_315  x1267 ,    struct StrConcat_913  errmsg1269 ) {
    struct Maybe_315  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_315_None_t ) {
        ( (  panic984 ) ( (  errmsg1269 ) ) );
        return ( (  undefined130 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_315_Just_t ) {
        return ( dref1270 .stuff .Maybe_315_Just_s .field0 );
    }
}

struct Maybe_994 {
    enum {
        Maybe_994_None_t,
        Maybe_994_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53  field0;
        } Maybe_994_Just_s;
    } stuff;
};

static struct Maybe_994 Maybe_994_Just (  struct Cell_53  field0 ) {
    return ( struct Maybe_994 ) { .tag = Maybe_994_Just_t, .stuff = { .Maybe_994_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53   or_dash_fail993 (    struct Maybe_994  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_994  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_994_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_994_Just_t ) {
        return ( dref1270 .stuff .Maybe_994_Just_s .field0 );
    }
}

struct Maybe_996 {
    enum {
        Maybe_996_None_t,
        Maybe_996_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_996_Just_s;
    } stuff;
};

static struct Maybe_996 Maybe_996_Just (  uint8_t  field0 ) {
    return ( struct Maybe_996 ) { .tag = Maybe_996_Just_t, .stuff = { .Maybe_996_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail995 (    struct Maybe_996  x1267 ,    struct StrConcat_856  errmsg1269 ) {
    struct Maybe_996  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_996_None_t ) {
        ( (  panic985 ) ( (  errmsg1269 ) ) );
        return ( (  undefined141 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_996_Just_t ) {
        return ( dref1270 .stuff .Maybe_996_Just_s .field0 );
    }
}

static  struct DynStr_131   or_dash_fail997 (    struct Maybe_315  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_315  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_315_None_t ) {
        ( (  panic986 ) ( (  errmsg1269 ) ) );
        return ( (  undefined130 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_315_Just_t ) {
        return ( dref1270 .stuff .Maybe_315_Just_s .field0 );
    }
}

struct Maybe_999 {
    enum {
        Maybe_999_None_t,
        Maybe_999_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53 *  field0;
        } Maybe_999_Just_s;
    } stuff;
};

static struct Maybe_999 Maybe_999_Just (  struct Cell_53 *  field0 ) {
    return ( struct Maybe_999 ) { .tag = Maybe_999_Just_t, .stuff = { .Maybe_999_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53 *   or_dash_fail998 (    struct Maybe_999  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_999  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_999_None_t ) {
        ( (  panic986 ) ( (  errmsg1269 ) ) );
        return ( (  undefined150 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_999_Just_t ) {
        return ( dref1270 .stuff .Maybe_999_Just_s .field0 );
    }
}

struct Maybe_1001 {
    enum {
        Maybe_1001_None_t,
        Maybe_1001_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_804  field0;
        } Maybe_1001_Just_s;
    } stuff;
};

static struct Maybe_1001 Maybe_1001_Just (  struct Cursor_804  field0 ) {
    return ( struct Maybe_1001 ) { .tag = Maybe_1001_Just_t, .stuff = { .Maybe_1001_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_804   or_dash_else1000 (    struct Maybe_1001  self1274 ,    struct Cursor_804  alt1276 ) {
    struct Maybe_1001  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_1001_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_1001_Just_t ) {
        return ( dref1277 .stuff .Maybe_1001_Just_s .field0 );
    }
}

struct Tuple2_1003 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1003 Tuple2_1003_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1003 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst1002 (    struct Tuple2_1003  dref1297 ) {
    return ( dref1297 .field0 );
}

static  uint32_t   snd1004 (    struct Tuple2_1003  dref1300 ) {
    return ( dref1300 .field1 );
}

static  bool   is_dash_just1005 (    struct Maybe_1001  m1304 ) {
    struct Maybe_1001  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1001_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1001_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just1006 (    struct Maybe_315  m1304 ) {
    struct Maybe_315  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_315_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_315_Just_t ) {
        return ( true );
    }
}

struct Maybe_1008 {
    enum {
        Maybe_1008_None_t,
        Maybe_1008_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1008_Just_s;
    } stuff;
};

static struct Maybe_1008 Maybe_1008_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1008 ) { .tag = Maybe_1008_Just_t, .stuff = { .Maybe_1008_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1007 (    struct Maybe_1008  m1304 ) {
    struct Maybe_1008  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1008_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1008_Just_t ) {
        return ( true );
    }
}

struct Visual_1012 {
    int32_t  field0;
};

static struct Visual_1012 Visual_1012_Visual (  int32_t  field0 ) {
    return ( struct Visual_1012 ) { .field0 = field0 };
};

struct Theme_1013 {
    struct Color_54  f_bg;
    struct Color_54  f_text;
    struct Color_54  f_cursor_dash_bg;
    struct Color_54  f_cursor_dash_text;
    struct Color_54  f_selection_dash_bg;
    struct Color_54  f_selection_dash_text;
    struct Color_54  f_line_dash_num_dash_hi_dash_bg;
    struct Color_54  f_line_dash_num_dash_hi_dash_text;
};

struct Editor_1011 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_804  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1012  f_goal_dash_x;
    struct List_280  f_current_dash_file;
    struct Maybe_265  f_filename;
    struct Mode_823  f_mode;
    struct Maybe_1008  f_anim;
    struct Maybe_1001  f_selected;
    struct Theme_1013 *  f_theme;
    struct Maybe_881  f_search_dash_term;
    struct Maybe_315  f_msg;
    struct Maybe_315  f_clipboard;
};

struct env1010 {
    ;
    struct Editor_1011 *  ed2980;
    ;
};

struct funenv1010 {
    struct Maybe_297  (*fun) (  struct env1010  ,    struct List_3  );
    struct env1010 env;
};

static  struct Maybe_297   and_dash_maybe1009 (    struct Maybe_314  m1308 ,   struct funenv1010  fun1310 ) {
    struct Maybe_314  dref1311 = (  m1308 );
    if ( dref1311.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref1311.tag == Maybe_314_Just_t ) {
        struct funenv1010  temp1014 = (  fun1310 );
        return ( temp1014.fun ( temp1014.env ,  ( dref1311 .stuff .Maybe_314_Just_s .field0 ) ) );
    }
}

static  struct Maybe_50   fmap_dash_maybe1015 (    struct Maybe_297  x1315 ,    bool (*  fun1317 )(    char  ) ) {
    struct Maybe_297  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref1318.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_354   fmap_dash_maybe1016 (    struct Maybe_297  x1315 ,    struct Tuple2_355 (*  fun1317 )(    char  ) ) {
    struct Maybe_297  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
    }
    else if ( dref1318.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_354_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_900   fmap_dash_maybe1017 (    struct Maybe_315  x1315 ,    size_t (*  fun1317 )(    struct DynStr_131  ) ) {
    struct Maybe_315  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_315_None_t ) {
        return ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
    }
    else if ( dref1318.tag == Maybe_315_Just_t ) {
        return ( ( Maybe_900_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_315_Just_s .field0 ) ) ) ) );
    }
}

struct env1019 {
    ;
    struct Editor_1011 *  ed2700;
};

struct funenv1019 {
    struct Cursor_804  (*fun) (  struct env1019  ,    struct Cursor_804  );
    struct env1019 env;
};

static  struct Cursor_804   maybe1018 (    struct Maybe_1001  x1322 ,   struct funenv1019  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1019  temp1020 = (  fun1324 );
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( temp1020.fun ( temp1020.env ,  ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1022 {
    ;
    struct Editor_1011 *  ed2700;
};

struct funenv1022 {
    struct Cursor_804  (*fun) (  struct env1022  ,    struct Cursor_804  );
    struct env1022 env;
};

static  struct Cursor_804   maybe1021 (    struct Maybe_1001  x1322 ,   struct funenv1022  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1022  temp1023 = (  fun1324 );
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( temp1023.fun ( temp1023.env ,  ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1025 {
    ;
    struct Editor_1011 *  ed2700;
};

struct funenv1025 {
    struct Cursor_804  (*fun) (  struct env1025  ,    struct Cursor_804  );
    struct env1025 env;
};

static  struct Cursor_804   maybe1024 (    struct Maybe_1001  x1322 ,   struct funenv1025  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1025  temp1026 = (  fun1324 );
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( temp1026.fun ( temp1026.env ,  ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1028 {
    ;
    struct Editor_1011 *  ed2700;
};

struct funenv1028 {
    struct Cursor_804  (*fun) (  struct env1028  ,    struct Cursor_804  );
    struct env1028 env;
};

static  struct Cursor_804   maybe1027 (    struct Maybe_1001  x1322 ,   struct funenv1028  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1028  temp1029 = (  fun1324 );
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( temp1029.fun ( temp1029.env ,  ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1031 {
    ;
    struct Editor_1011 *  ed2805;
};

struct funenv1031 {
    struct Cursor_804  (*fun) (  struct env1031  ,    struct Cursor_804  );
    struct env1031 env;
};

static  struct Cursor_804   maybe1030 (    struct Maybe_1001  x1322 ,   struct funenv1031  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1031  temp1032 = (  fun1324 );
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( temp1032.fun ( temp1032.env ,  ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1033 (    struct Maybe_1001  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_804  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1034 (    struct Maybe_1001  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_804  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1001  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1001_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1001_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1035 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1036 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1037 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1038 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1039 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1040 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1041 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1042 (    struct Maybe_297  x1322 ,   struct funenv312  fun1324 ,    int32_t  default1326 ) {
    struct funenv312  temp1043 = (  fun1324 );
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( temp1043.fun ( temp1043.env ,  ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  struct Slice_279   empty1044 (  ) {
    return ( (struct Slice_279) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1045 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr258 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1046 (    struct Slice_279  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1339 = ( (  offset_dash_ptr154 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  struct Cell_53 *   get_dash_ptr1047 (    struct Slice_578  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_53 *  elem_dash_ptr1339 = ( (  offset_dash_ptr160 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

struct Slice_1049 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_265   try_dash_get1048 (    struct Slice_1049  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    }
    const char* *  elem_dash_ptr1345 = ( (  offset_dash_ptr152 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_265_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  struct Maybe_994   try_dash_get1050 (    struct Slice_578  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_994) { .tag = Maybe_994_None_t } );
    }
    struct Cell_53 *  elem_dash_ptr1345 = ( (  offset_dash_ptr160 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_994_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  const char*   get1051 (    struct Slice_1049  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail991 ) ( ( (  try_dash_get1048 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_53   get1052 (    struct Slice_578  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail993 ) ( ( (  try_dash_get1050 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1053 (    struct Slice_279  slice1353 ,    size_t  i1355 ,    struct List_3  x1357 ) {
    struct List_3 *  ep1358 = ( (  get_dash_ptr1046 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1054 (    struct Slice_5  slice1353 ,    size_t  i1355 ,    char  x1357 ) {
    char *  ep1358 = ( (  get_dash_ptr30 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1055 (    struct Slice_578  slice1353 ,    size_t  i1355 ,    struct Cell_53  x1357 ) {
    struct Cell_53 *  ep1358 = ( (  get_dash_ptr1047 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   from1056 (    struct Slice_5  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice292 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct Slice_279   from1057 (    struct Slice_279  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice283 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct SliceAddressIter_635   addresses1058 (    struct Slice_279  slice1398 ) {
    return ( (struct SliceAddressIter_635) { .f_slice = (  slice1398 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam594 (   struct env594 env ,    struct Tuple2_349  dref1412 ) {
    return ( (  set1053 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size268 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1059 (    struct Slice_279  src1409 ,    struct Slice_279  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic987 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env594 envinst594 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each593 ) ( ( (  zip478 ) ( (  src1409 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv594){ .fun = lam594, .env = envinst594 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam602 (   struct env602 env ,    struct Tuple2_355  dref1412 ) {
    return ( (  set1054 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size268 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1060 (    struct Slice_5  src1409 ,    struct Slice_5  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic987 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env602 envinst602 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each601 ) ( ( (  zip479 ) ( (  src1409 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv602){ .fun = lam602, .env = envinst602 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1062 (    struct Tuple2_427  dref1420 ) {
    return (  eq48 ( ( dref1420 .field0 ) , ( dref1420 .field1 ) ) );
}

static  bool   eq1061 (    struct Slice_5  l1417 ,    struct Slice_5  r1419 ) {
    if ( ( !  eq45 ( ( (  l1417 ) .f_count ) , ( (  r1419 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all781 ) ( ( (  zip484 ) ( (  l1417 ) ,  (  r1419 ) ) ) ,  (  lam1062 ) ) );
}

static  const char*   elem_dash_get1063 (    struct Slice_1049  self1425 ,    size_t  idx1427 ) {
    return ( (  get1051 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  struct Cell_53   elem_dash_get1064 (    struct Slice_578  self1425 ,    size_t  idx1427 ) {
    return ( (  get1052 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  char   elem_dash_get1065 (    struct Slice_5  self1425 ,    size_t  idx1427 ) {
    return ( (  get317 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  enum Unit_13   lam577 (   struct env577 env ,    int32_t  i1456 ) {
    return ( (  set1055 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1064 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1066 (    struct Slice_578  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env577 envinst577 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each576 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv577){ .fun = lam577, .env = envinst577 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam582 (   struct env582 env ,    int32_t  i1456 ) {
    return ( (  set1055 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1064 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1067 (    struct Slice_578  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env582 envinst582 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each581 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv582){ .fun = lam582, .env = envinst582 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam641 (   struct env641 env ,    int32_t  i1456 ) {
    return ( (  set1055 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1064 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1068 (    struct Slice_578  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env641 envinst641 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each640 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv641){ .fun = lam641, .env = envinst641 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_900   find_dash_slice1069 (    struct Slice_5  haystack1459 ,    struct Slice_5  needle1461 ) {
    struct RangeIter_367  temp1070 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  haystack1459 ) .f_count ) ) ) , ( (  size_dash_i32270 ) ( ( (  needle1461 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1071 =  next368 (&temp1070);
        if (  __cond1071 .tag == 0 ) {
            break;
        }
        int32_t  i1463 =  __cond1071 .stuff .Maybe_328_Just_s .field0;
        if ( (  eq1061 ( ( (  subslice292 ) ( (  haystack1459 ) ,  ( (  i32_dash_size268 ) ( (  i1463 ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  i1463 ) ) ) , ( (  needle1461 ) .f_count ) ) ) ) ) , (  needle1461 ) ) ) ) {
            return ( ( Maybe_900_Just ) ( ( (  i32_dash_size268 ) ( (  i1463 ) ) ) ) );
        }
    }
    return ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
}

static  struct Maybe_900   find_dash_last_dash_occurence_dash_of_dash_slice1072 (    struct Slice_5  haystack1466 ,    struct Slice_5  needle1468 ) {
    struct Maybe_900  occ1469 = ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
    struct RangeIter_367  temp1073 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  haystack1466 ) .f_count ) ) ) , ( (  size_dash_i32270 ) ( ( (  needle1468 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1074 =  next368 (&temp1073);
        if (  __cond1074 .tag == 0 ) {
            break;
        }
        int32_t  i1471 =  __cond1074 .stuff .Maybe_328_Just_s .field0;
        if ( (  eq1061 ( ( (  subslice292 ) ( (  haystack1466 ) ,  ( (  i32_dash_size268 ) ( (  i1471 ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  i1471 ) ) ) , ( (  needle1468 ) .f_count ) ) ) ) ) , (  needle1468 ) ) ) ) {
            occ1469 = ( ( Maybe_900_Just ) ( ( (  i32_dash_size268 ) ( (  i1471 ) ) ) ) );
        }
    }
    return (  occ1469 );
}

static  enum CAllocator_4   idc1075 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_279   allocate1076 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize162 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1487 = ( (  cast_dash_ptr204 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_5   allocate1077 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    char *  ptr1487 = ( (  cast_dash_ptr208 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_578   allocate1078 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    struct Cell_53 *  ptr1487 = ( (  cast_dash_ptr215 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_578) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  enum Unit_13   free1079 (    enum CAllocator_4  dref1489 ,    struct Slice_279  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr205 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1080 (    enum CAllocator_4  dref1489 ,    struct Slice_5  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr207 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1082 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1081 (    enum CAllocator_4  dref1489 ,    struct Slice_1082  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1083 (    enum CAllocator_4  dref1489 ,    struct Slice_578  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr222 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr1084 (    struct Array_137 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1532 = ( ( (  cast186 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  char *   get_dash_ptr1085 (    struct Array_181 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1532 = ( ( (  cast194 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  enum Unit_13   set1086 (    struct Array_137 *  arr1541 ,    size_t  i1544 ,    uint8_t  e1546 ) {
    uint8_t *  p1547 = ( (  get_dash_ptr1084 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1087 (    struct Array_181 *  arr1541 ,    size_t  i1544 ,    char  e1546 ) {
    char *  p1547 = ( (  get_dash_ptr1085 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1088 (    struct Array_181 *  arr1550 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast194 ) ( (  arr1550 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1089 (    char  c1601 ) {
    return ( ( (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1090 (    char  c1604 ) {
    return ( ! ( (  is_dash_whitespace1089 ) ( (  c1604 ) ) ) );
}

static  struct LineIter_300   lines1091 (    struct DynStr_131  s1611 ) {
    return ( (struct LineIter_300) { .f_og = (  s1611 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1092 (    char  c1640 ) {
    return ( (  cmp75 ( ( (  char_dash_i32976 ) ( (  c1640 ) ) ) , ( (  char_dash_i32976 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp75 ( ( (  char_dash_i32976 ) ( (  c1640 ) ) ) , ( (  char_dash_i32976 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_328   parse_dash_digit1093 (    char  c1643 ) {
    if ( ( (  is_dash_digit1092 ) ( (  c1643 ) ) ) ) {
        return ( ( Maybe_328_Just ) ( (  op_dash_sub83 ( ( (  char_dash_i32976 ) ( (  c1643 ) ) ) , ( (  char_dash_i32976 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
}

static  struct Maybe_725   sequence_dash_maybe1095 (    char  e1649 ,    struct Maybe_725  b1651 ) {
    struct Maybe_725  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_725_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    else if ( dref1652.tag == Maybe_725_Just_t ) {
        struct Maybe_328  dref1654 = ( (  parse_dash_digit1093 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
        }
        else if ( dref1654.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_725_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1654 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_725   parse_dash_int1094 (    struct TakeWhile_504  s1646 ) {
    struct TakeWhile_504  cs1656 = ( (  chars961 ) ( (  s1646 ) ) );
    struct Maybe_297  dref1657 = ( (  head784 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_297_Just_t ) {
        return ( (  reduce724 ) ( (  cs1656 ) ,  ( ( Maybe_725_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1095 ) ) );
    }
    else if ( dref1657.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
}

static  struct Maybe_725   sequence_dash_maybe1097 (    char  e1649 ,    struct Maybe_725  b1651 ) {
    struct Maybe_725  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_725_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    else if ( dref1652.tag == Maybe_725_Just_t ) {
        struct Maybe_328  dref1654 = ( (  parse_dash_digit1093 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
        }
        else if ( dref1654.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_725_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1654 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_725   parse_dash_int1096 (    struct TakeWhile_515  s1646 ) {
    struct TakeWhile_515  cs1656 = ( (  chars964 ) ( (  s1646 ) ) );
    struct Maybe_297  dref1657 = ( (  head788 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_297_Just_t ) {
        return ( (  reduce737 ) ( (  cs1656 ) ,  ( ( Maybe_725_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1097 ) ) );
    }
    else if ( dref1657.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1098 (    struct List_280 *  list1662 ,    size_t  i1664 ) {
    if ( ( (  cmp9 ( (  i1664 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1664 ) , ( ( * (  list1662 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1664 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1662 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1046 ) ( ( ( * (  list1662 ) ) .f_elements ) ,  (  i1664 ) ) );
}

static  struct List_3   get1099 (    struct List_280 *  list1672 ,    size_t  i1674 ) {
    return ( * ( (  get_dash_ptr1098 ) ( (  list1672 ) ,  (  i1674 ) ) ) );
}

static  struct Maybe_297   try_dash_get1100 (    struct List_3 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( ( (  get7 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  struct Maybe_314   try_dash_get1101 (    struct List_280 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    return ( ( Maybe_314_Just ) ( ( (  get1099 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  enum Unit_13   set1102 (    struct List_280 *  list1682 ,    size_t  i1684 ,    struct List_3  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1053 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1103 (    struct List_3 *  list1682 ,    size_t  i1684 ,    char  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1054 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_280   mk1104 (    enum CAllocator_4  al1692 ) {
    struct Slice_279  elements1693 = ( (  empty1044 ) ( ) );
    return ( (struct List_280) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1105 (    enum CAllocator_4  al1692 ) {
    struct Slice_5  elements1693 = ( (  empty1045 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1106 (    struct List_3 *  list1696 ) {
    ( (  free1080 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1107 (    struct List_280 *  list1696 ) {
    ( (  free1079 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam553 (   struct env553 env ,    struct Tuple2_349  dref1704 ) {
    return ( (  set1053 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size268 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full567 (   struct env567 env ,    struct List_280 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1076 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_279  new_dash_slice1703 = ( (  allocate1076 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env553 envinst553 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each552 ) ( ( (  zip478 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv553){ .fun = lam553, .env = envinst553 } ) ) );
            ( (  free1079 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam557 (   struct env557 env ,    struct Tuple2_355  dref1704 ) {
    return ( (  set1054 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size268 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full305 (   struct env305 env ,    struct List_3 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1077 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1703 = ( (  allocate1077 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env557 envinst557 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each556 ) ( ( (  zip479 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv557){ .fun = lam557, .env = envinst557 } ) ) );
            ( (  free1080 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add566 (   struct env566 env ,    struct List_280 *  list1709 ,    struct List_3  elem1711 ) {
    struct funenv567  temp1108 = ( (struct funenv567){ .fun = grow_dash_if_dash_full567, .env =  env.envinst567  } );
    ( temp1108.fun ( temp1108.env ,  (  list1709 ) ) );
    ( (  set1053 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add93 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add304 (   struct env304 env ,    struct List_3 *  list1709 ,    char  elem1711 ) {
    struct funenv305  temp1109 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp1109.fun ( temp1109.env ,  (  list1709 ) ) );
    ( (  set1054 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add93 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1110 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    struct env305 envinst305;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1110 (   struct env1110 env ,    struct List_3 *  list1714 ,    size_t  i1716 ,    char  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv304  temp1111 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
        ( temp1111.fun ( temp1111.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv305  temp1112 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp1112.fun ( temp1112.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub94 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set1054 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub94 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1054 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add93 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1113 {
    ;
    struct env566 envinst566;
    ;
    ;
    ;
    struct env567 envinst567;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1113 (   struct env1113 env ,    struct List_280 *  list1714 ,    size_t  i1716 ,    struct List_3  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv566  temp1114 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
        ( temp1114.fun ( temp1114.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv567  temp1115 = ( (struct funenv567){ .fun = grow_dash_if_dash_full567, .env =  env.envinst567  } );
    ( temp1115.fun ( temp1115.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub94 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set1053 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1099 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub94 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1053 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add93 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1116 {
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam590 (   struct env590 env ,    struct Tuple2_349  dref1725 ) {
    return ( (  set1102 ) ( ( env.list1722 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1116 (   struct env1116 env ,    struct List_280 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env590 envinst590 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each589 ) ( ( (  drop358 ) ( ( (  zip480 ) ( ( * (  list1722 ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv590){ .fun = lam590, .env = envinst590 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1079 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty1044 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_279  new_dash_slice1730 = ( (  allocate1076 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to1059 ) ( ( (  subslice283 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1079 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct env1117 {
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor1699;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  enum Unit_13   lam598 (   struct env598 env ,    struct Tuple2_355  dref1725 ) {
    return ( (  set1103 ) ( ( env.list1722 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1117 (   struct env1117 env ,    struct List_3 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env598 envinst598 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each597 ) ( ( (  drop360 ) ( ( (  zip481 ) ( ( * (  list1722 ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv598){ .fun = lam598, .env = envinst598 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1080 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty1045 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_5  new_dash_slice1730 = ( (  allocate1077 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to1060 ) ( ( (  subslice292 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1080 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct funenv1117 {
    enum Unit_13  (*fun) (  struct env1117  ,    struct List_3 *  ,    size_t  );
    struct env1117 env;
};

struct env1118 {
    ;
    ;
    ;
    struct env1117 envinst1117;
    ;
    ;
    ;
};

static  enum Unit_13   pop1118 (   struct env1118 env ,    struct List_3 *  list1744 ) {
    if ( (  eq45 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic986 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1117  temp1119 = ( (struct funenv1117){ .fun = remove1117, .env =  env.envinst1117  } );
    return ( temp1119.fun ( temp1119.env ,  (  list1744 ) ,  (  op_dash_sub94 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam561 (   struct env561 env ,    char  x1754 ) {
    struct funenv304  temp1120 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1120.fun ( temp1120.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all303 (   struct env303 env ,    struct List_3 *  list1750 ,    struct DynStr_131  it1752 ) {
    struct env561 envinst561 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each560 ) ( (  it1752 ) ,  ( (struct funenv561){ .fun = lam561, .env = envinst561 } ) ) );
    return ( Unit_13_Unit );
}

struct env1121 {
    ;
    struct env566 envinst566;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam565 (   struct env565 env ,    struct List_3  x1754 ) {
    struct funenv566  temp1122 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
    return ( temp1122.fun ( temp1122.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1121 (   struct env1121 env ,    struct List_280 *  list1750 ,    struct Map_299  it1752 ) {
    struct env565 envinst565 = {
        .envinst566 = env.envinst566 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each564 ) ( (  it1752 ) ,  ( (struct funenv565){ .fun = lam565, .env = envinst565 } ) ) );
    return ( Unit_13_Unit );
}

struct env1123 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam610 (   struct env610 env ,    char  x1754 ) {
    struct funenv304  temp1124 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1124.fun ( temp1124.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1123 (   struct env1123 env ,    struct List_3 *  list1750 ,    struct Slice_5  it1752 ) {
    struct env610 envinst610 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each609 ) ( (  it1752 ) ,  ( (struct funenv610){ .fun = lam610, .env = envinst610 } ) ) );
    return ( Unit_13_Unit );
}

struct env1125 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam614 (   struct env614 env ,    char  x1754 ) {
    struct funenv304  temp1126 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1126.fun ( temp1126.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1125 (   struct env1125 env ,    struct List_3 *  list1750 ,    struct List_3 *  it1752 ) {
    struct env614 envinst614 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each613 ) ( (  it1752 ) ,  ( (struct funenv614){ .fun = lam614, .env = envinst614 } ) ) );
    return ( Unit_13_Unit );
}

struct env1127 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam618 (   struct env618 env ,    char  x1754 ) {
    struct funenv304  temp1128 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1128.fun ( temp1128.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1127 (   struct env1127 env ,    struct List_3 *  list1750 ,    struct TakeWhile_506  it1752 ) {
    struct env618 envinst618 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each617 ) ( (  it1752 ) ,  ( (struct funenv618){ .fun = lam618, .env = envinst618 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1129 (    struct List_3 *  l1757 ,    size_t  new_dash_count1759 ) {
    (*  l1757 ) .f_count = (  new_dash_count1759 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list302 (   struct env302 env ,    struct DynStr_131  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_3  temp1130 = ( (  mk1105 ) ( (  al1764 ) ) );
    struct List_3 *  l1765 = ( &temp1130 );
    struct funenv303  temp1131 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
    ( temp1131.fun ( temp1131.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

struct funenv1121 {
    enum Unit_13  (*fun) (  struct env1121  ,    struct List_280 *  ,    struct Map_299  );
    struct env1121 env;
};

struct env1132 {
    ;
    ;
    struct env1121 envinst1121;
    ;
    ;
    ;
};

static  struct List_280   to_dash_list1132 (   struct env1132 env ,    struct Map_299  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_280  temp1133 = ( (  mk1104 ) ( (  al1764 ) ) );
    struct List_280 *  l1765 = ( &temp1133 );
    struct funenv1121  temp1134 = ( (struct funenv1121){ .fun = add_dash_all1121, .env =  env.envinst1121  } );
    ( temp1134.fun ( temp1134.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

static  struct Slice_5   to_dash_slice1135 (    struct List_3  l1768 ) {
    char *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct Slice_279   to_dash_slice1136 (    struct List_280  l1768 ) {
    struct List_3 *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_279) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct SliceAddressIter_635   addresses1137 (    struct List_280  l1772 ) {
    return ( (  addresses1058 ) ( ( (  to_dash_slice1136 ) ( (  l1772 ) ) ) ) );
}

static  size_t   size1138 (    struct List_3 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   size1139 (    struct List_280 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   clamp_dash_uint1140 (    int32_t  self1793 ) {
    if ( (  cmp75 ( (  self1793 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size272 ) ( ( (uint32_t ) (  self1793 ) ) ) );
    }
}

static  struct Maybe_996   hex_dash_digit1141 (    char  c1803 ) {
    if ( ( (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_996_Just ) ( (  op_dash_sub92 ( ( (  char_dash_u8977 ) ( (  c1803 ) ) ) , ( (  char_dash_u8977 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_996_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8977 ) ( (  c1803 ) ) ) , ( (  char_dash_u8977 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp980 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_996_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8977 ) ( (  c1803 ) ) ) , ( (  char_dash_u8977 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_996) { .tag = Maybe_996_None_t } );
}

static  uint32_t   lam1143 (    char  c1808 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64275 ) ( ( (  or_dash_fail995 ) ( ( (  hex_dash_digit1141 ) ( (  c1808 ) ) ) ,  ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1808 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1144 (    uint32_t  elem1810 ,    uint32_t  b1812 ) {
    return (  op_dash_add87 ( (  op_dash_mul89 ( (  b1812 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1810 ) ) );
}

static  uint32_t   from_dash_hex1142 (    const char*  arr1806 ) {
    return ( (  reduce722 ) ( ( (  map334 ) ( (  arr1806 ) ,  (  lam1143 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1144 ) ) );
}

static  struct Maybe_265   get1145 (    const char*  s1846 ) {
    return ( (  from_dash_nullable_dash_c_dash_str264 ) ( ( ( getenv ) ( (  s1846 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1146 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1147 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1148 (    uint32_t  x1823 ,    uint32_t  y1825 ) {
    uint32_t  x1826 = (  op_dash_add87 ( (  x1823 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1827 = (  op_dash_add87 ( (  y1825 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str946 ) ( ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( ( StrConcat_949_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "\x1b[" ) ,  (  y1827 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1826 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1149 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_1003   get_dash_dimensions1150 (  ) {
    struct Winsize_177  temp1151 = ( ( (  zeroed233 ) ( ) ) );
    struct Winsize_177 *  ws1831 = ( &temp1151 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno109 ) ( ) ) ,  ( (  tiocgwinsz125 ) ( ) ) ,  (  ws1831 ) ) ) , (  op_dash_neg86 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1003_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1003_Tuple2 ) ( ( (  u16_dash_u32271 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32271 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1152 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1153 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_648   query_dash_palette1154 (  ) {
    struct Maybe_265  colorterm1847 = ( (  get1145 ) ( ( "COLORTERM" ) ) );
    struct Maybe_265  dref1848 = (  colorterm1847 );
    if ( dref1848.tag == Maybe_265_Just_t ) {
        if ( ( (  eq979 ( ( dref1848 .stuff .Maybe_265_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq979 ( ( dref1848 .stuff .Maybe_265_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_648_PaletteRGB );
        }
    }
    else if ( dref1848.tag == Maybe_265_None_t ) {
    }
    struct Maybe_265  dref1850 = ( (  get1145 ) ( ( "TERM" ) ) );
    if ( dref1850.tag == Maybe_265_Just_t ) {
        if ( (  eq979 ( ( dref1850 .stuff .Maybe_265_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_648_Palette8 );
        }
    }
    else if ( dref1850.tag == Maybe_265_None_t ) {
    }
    return ( ColorPalette_648_Palette16 );
}

static  enum Unit_13   set_dash_fg81155 (    enum Color8_55  color1866 ) {
    enum Color8_55  dref1867 = (  color1866 );
    switch (  dref1867 ) {
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

static  enum Unit_13   set_dash_fg161156 (    enum Color16_56  color1870 ) {
    enum Color16_56  dref1871 = (  color1870 );
    switch (  dref1871 ) {
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

static  enum Unit_13   set_dash_bg81157 (    enum Color8_55  color1874 ) {
    enum Color8_55  dref1875 = (  color1874 );
    switch (  dref1875 ) {
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

static  enum Unit_13   set_dash_bg161158 (    enum Color16_56  color1878 ) {
    enum Color16_56  dref1879 = (  color1878 );
    switch (  dref1879 ) {
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

static  enum Unit_13   reset_dash_colors1159 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1160 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561161 (    uint8_t  color1884 ) {
    ( (  print_dash_str944 ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1884 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561162 (    uint8_t  color1887 ) {
    ( (  print_dash_str944 ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1887 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1163 (    struct RGB_57  c1907 ) {
    ( (  print_dash_str934 ) ( ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( ( StrConcat_937_StrConcat ) ( ( ( StrConcat_938_StrConcat ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1907 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1164 (    struct RGB_57  c1910 ) {
    ( (  print_dash_str934 ) ( ( ( StrConcat_935_StrConcat ) ( ( ( StrConcat_936_StrConcat ) ( ( ( StrConcat_937_StrConcat ) ( ( ( StrConcat_938_StrConcat ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1910 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1165 (    struct Color_54  c1928 ) {
    struct Color_54  dref1929 = (  c1928 );
    if ( dref1929.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1152 ) ( ) );
    }
    else if ( dref1929.tag == Color_54_Color8_t ) {
        ( (  set_dash_fg81155 ) ( ( dref1929 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_Color16_t ) {
        ( (  set_dash_fg161156 ) ( ( dref1929 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_Color256_t ) {
        ( (  set_dash_fg2561161 ) ( ( dref1929 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1163 ) ( ( dref1929 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1166 (    struct Color_54  c1936 ) {
    struct Color_54  dref1937 = (  c1936 );
    if ( dref1937.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1153 ) ( ) );
    }
    else if ( dref1937.tag == Color_54_Color8_t ) {
        ( (  set_dash_bg81157 ) ( ( dref1937 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_Color16_t ) {
        ( (  set_dash_bg161158 ) ( ( dref1937 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_Color256_t ) {
        ( (  set_dash_bg2561162 ) ( ( dref1937 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1164 ) ( ( dref1937 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1167 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam571 (   struct env571 env ,    char  c1993 ) {
    struct funenv304  temp1168 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1168.fun ( temp1168.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1167 (   struct env1167 env ,    struct StrBuilder_572 *  builder1989 ,    const char*  s1991 ) {
    struct env571 envinst571 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each570 ) ( ( (  chars811 ) ( (  s1991 ) ) ) ,  ( (struct funenv571){ .fun = lam571, .env = envinst571 } ) ) );
    return ( Unit_13_Unit );
}

struct env1169 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam606 (   struct env606 env ,    char  c1993 ) {
    struct funenv304  temp1170 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1170.fun ( temp1170.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1169 (   struct env1169 env ,    struct StrBuilder_572 *  builder1989 ,    char  s1991 ) {
    struct env606 envinst606 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each605 ) ( ( (  chars812 ) ( (  s1991 ) ) ) ,  ( (struct funenv606){ .fun = lam606, .env = envinst606 } ) ) );
    return ( Unit_13_Unit );
}

struct env1171 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam627 (   struct env627 env ,    char  c1993 ) {
    struct funenv304  temp1172 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1172.fun ( temp1172.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1171 (   struct env1171 env ,    struct StrBuilder_572 *  builder1989 ,    struct TakeWhile_508  s1991 ) {
    struct env627 envinst627 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each626 ) ( ( (  chars962 ) ( (  s1991 ) ) ) ,  ( (struct funenv627){ .fun = lam627, .env = envinst627 } ) ) );
    return ( Unit_13_Unit );
}

struct env1173 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam631 (   struct env631 env ,    char  c1993 ) {
    struct funenv304  temp1174 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1174.fun ( temp1174.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1173 (   struct env1173 env ,    struct StrBuilder_572 *  builder1989 ,    struct TakeWhile_513  s1991 ) {
    struct env631 envinst631 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each630 ) ( ( (  chars963 ) ( (  s1991 ) ) ) ,  ( (struct funenv631){ .fun = lam631, .env = envinst631 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1123 {
    enum Unit_13  (*fun) (  struct env1123  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1123 env;
};

struct env1175 {
    ;
    struct env1123 envinst1123;
    ;
};

static  enum Unit_13   write_dash_slice1175 (   struct env1175 env ,    struct StrBuilder_572 *  builder1996 ,    struct Slice_5  s1998 ) {
    struct funenv1123  temp1176 = ( (struct funenv1123){ .fun = add_dash_all1123, .env =  env.envinst1123  } );
    ( temp1176.fun ( temp1176.env ,  ( & ( ( * (  builder1996 ) ) .f_chars ) ) ,  (  s1998 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char623 (   struct env623 env ,    struct StrBuilder_572 *  builder2001 ,    char  c2003 ) {
    struct funenv304  temp1177 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    ( temp1177.fun ( temp1177.env ,  ( & ( ( * (  builder2001 ) ) .f_chars ) ) ,  (  c2003 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1118 {
    enum Unit_13  (*fun) (  struct env1118  ,    struct List_3 *  );
    struct env1118 env;
};

struct env1178 {
    ;
    struct env1118 envinst1118;
    ;
};

static  enum Unit_13   pop1178 (   struct env1178 env ,    struct StrBuilder_572 *  sb2011 ) {
    struct funenv1118  temp1179 = ( (struct funenv1118){ .fun = pop1118, .env =  env.envinst1118  } );
    return ( temp1179.fun ( temp1179.env ,  ( & ( ( * (  sb2011 ) ) .f_chars ) ) ) );
}

static  size_t   count1180 (    struct StrBuilder_572 *  sb2014 ) {
    return ( ( ( * (  sb2014 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_572   mk1181 (    enum CAllocator_4  al2017 ) {
    return ( (struct StrBuilder_572) { .f_chars = ( (  mk1105 ) ( (  al2017 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1182 (    struct StrBuilder_572 *  builder2023 ) {
    return ( (  to_dash_slice1135 ) ( ( ( * (  builder2023 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1183 (    struct StrBuilder_572 *  builder2026 ) {
    ( (  free1106 ) ( ( & ( ( * (  builder2026 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1167 {
    enum Unit_13  (*fun) (  struct env1167  ,    struct StrBuilder_572 *  ,    const char*  );
    struct env1167 env;
};

struct env1184 {
    ;
    ;
    ;
    struct env1167 envinst1167;
    struct env623 envinst623;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1184 (   struct env1184 env ,    const char*  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1185 = ( (  mk1181 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1185 );
    struct funenv1167  temp1186 = ( (struct funenv1167){ .fun = write1167, .env =  env.envinst1167  } );
    ( temp1186.fun ( temp1186.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv623  temp1187 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
    ( temp1187.fun ( temp1187.env ,  (  sb2043 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1171 {
    enum Unit_13  (*fun) (  struct env1171  ,    struct StrBuilder_572 *  ,    struct TakeWhile_508  );
    struct env1171 env;
};

struct env1188 {
    ;
    ;
    ;
    struct env1171 envinst1171;
    ;
    struct env623 envinst623;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1188 (   struct env1188 env ,    struct TakeWhile_508  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1189 = ( (  mk1181 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1189 );
    struct funenv1171  temp1190 = ( (struct funenv1171){ .fun = write1171, .env =  env.envinst1171  } );
    ( temp1190.fun ( temp1190.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv623  temp1191 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
    ( temp1191.fun ( temp1191.env ,  (  sb2043 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1173 {
    enum Unit_13  (*fun) (  struct env1173  ,    struct StrBuilder_572 *  ,    struct TakeWhile_513  );
    struct env1173 env;
};

struct env1192 {
    ;
    ;
    ;
    struct env1173 envinst1173;
    ;
    struct env623 envinst623;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1192 (   struct env1192 env ,    struct TakeWhile_513  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1193 = ( (  mk1181 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1193 );
    struct funenv1173  temp1194 = ( (struct funenv1173){ .fun = write1173, .env =  env.envinst1173  } );
    ( temp1194.fun ( temp1194.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv623  temp1195 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
    ( temp1195.fun ( temp1195.env ,  (  sb2043 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1184 {
    struct DynStr_131  (*fun) (  struct env1184  ,    const char*  ,    enum CAllocator_4  );
    struct env1184 env;
};

struct env1196 {
    ;
    struct env1184 envinst1184;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1196 (   struct env1196 env ,    const char*  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1184  temp1197 = ( (struct funenv1184){ .fun = mk_dash_dyn_dash_str1184, .env =  env.envinst1184  } );
    return ( ( (  cast185 ) ( ( ( ( temp1197.fun ( temp1197.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1188 {
    struct DynStr_131  (*fun) (  struct env1188  ,    struct TakeWhile_508  ,    enum CAllocator_4  );
    struct env1188 env;
};

struct env1198 {
    ;
    struct env1188 envinst1188;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1198 (   struct env1198 env ,    struct TakeWhile_508  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1188  temp1199 = ( (struct funenv1188){ .fun = mk_dash_dyn_dash_str1188, .env =  env.envinst1188  } );
    return ( ( (  cast185 ) ( ( ( ( temp1199.fun ( temp1199.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1192 {
    struct DynStr_131  (*fun) (  struct env1192  ,    struct TakeWhile_513  ,    enum CAllocator_4  );
    struct env1192 env;
};

struct env1200 {
    ;
    struct env1192 envinst1192;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1200 (   struct env1200 env ,    struct TakeWhile_513  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1192  temp1201 = ( (struct funenv1192){ .fun = mk_dash_dyn_dash_str1192, .env =  env.envinst1192  } );
    return ( ( (  cast185 ) ( ( ( ( temp1201.fun ( temp1201.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1202 (  ) {
    struct timespec  temp1203 = ( (  undefined133 ) ( ) );
    struct timespec *  t2202 = ( &temp1203 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  t2202 ) ) );
    return ( * (  t2202 ) );
}

struct Duration_1205 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1204 (    struct Duration_1205  l2206 ,    struct Duration_1205  r2208 ) {
    enum Ordering_10  scmp2209 = ( (  cmp74 ) ( ( (  l2206 ) .f_secs ) ,  ( (  r2208 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2209 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2209 );
    }
    return ( (  cmp74 ) ( ( (  l2206 ) .f_nsecs ) ,  ( (  r2208 ) .f_nsecs ) ) );
}

static  struct Duration_1205   diff1206 (    struct timespec  l2212 ,    struct timespec  r2214 ) {
    int64_t  secdiff2215 = (  op_dash_sub79 ( ( (  l2212 ) .tv_sec ) , ( (  r2214 ) .tv_sec ) ) );
    int64_t  nsdiff2216 = (  op_dash_sub79 ( ( (  l2212 ) .tv_nsec ) , ( (  r2214 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2217 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp74 ( (  nsdiff2216 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp74 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1205) { .f_secs = (  secdiff2215 ) , .f_nsecs = (  op_dash_neg81 ( (  nsdiff2216 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1205) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2216 ) } );
            } else {
                return ( (struct Duration_1205) { .f_secs = (  op_dash_sub79 ( (  secdiff2215 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add78 ( (  ns_dash_in_dash_secs2217 ) , (  nsdiff2216 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp74 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1205) { .f_secs = (  secdiff2215 ) , .f_nsecs = (  nsdiff2216 ) } );
        } else {
            return ( (struct Duration_1205) { .f_secs = (  op_dash_sub79 ( (  secdiff2215 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub79 ( (  ns_dash_in_dash_secs2217 ) , (  nsdiff2216 ) ) ) } );
        }
    }
}

static  struct Duration_1205   duration_dash_from_dash_ns1207 (    int64_t  ns2220 ) {
    int64_t  ns_dash_in_dash_secs2221 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1205) { .f_secs = (  op_dash_div80 ( (  ns2220 ) , (  ns_dash_in_dash_secs2221 ) ) ) , .f_nsecs = ( (  mod802 ) ( (  ns2220 ) ,  (  ns_dash_in_dash_secs2221 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1208 (    struct Duration_1205  d2232 ) {
    int64_t  ns_dash_in_dash_secs2233 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add78 ( (  op_dash_mul32 ( ( (  d2232 ) .f_secs ) , (  ns_dash_in_dash_secs2233 ) ) ) , ( (  d2232 ) .f_nsecs ) ) );
}

static  struct Scanner_286   mk1209 (    struct DynStr_131  s2243 ) {
    return ( (struct Scanner_286) { .f_s = ( (  chars836 ) ( (  s2243 ) ) ) } );
}

static  struct Maybe_725   scan_dash_int1210 (    struct Scanner_286 *  sc2246 ) {
    struct TakeWhile_504  digit_dash_chars2247 = ( (  take_dash_while527 ) ( (  sc2246 ) ,  (  is_dash_digit1092 ) ) );
    if ( ( (  null793 ) ( (  digit_dash_chars2247 ) ) ) ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    ( (  drop_prime_795 ) ( (  sc2246 ) ,  ( (  count757 ) ( (  digit_dash_chars2247 ) ) ) ) );
    return ( (  parse_dash_int1094 ) ( (  digit_dash_chars2247 ) ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1211 (  ) {
    struct Termios_136  temp1212 = ( (  undefined135 ) ( ) );
    struct Termios_136 *  orig_dash_termios2254 = ( &temp1212 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr210 ) ( (  orig_dash_termios2254 ) ) ) ) );
    struct Termios_136  raw2255 = ( * (  orig_dash_termios2254 ) );
    raw2255 .f_c_dash_lflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors797 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_iflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors798 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  brkint115 ) ( ) ) , ( (  icrnl116 ) ( ) ) , ( (  inpck117 ) ( ) ) , ( (  istrip118 ) ( ) ) , ( ( (  ixon119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_oflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors799 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( ( (  opost120 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_cflag = ( (  u32_dash_or796 ) ( ( (  raw2255 ) .f_c_dash_cflag ) ,  ( (  cs8121 ) ( ) ) ) );
    ( (  set1086 ) ( ( & ( (  raw2255 ) .f_c_dash_cc ) ) ,  ( (  vmin122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1086 ) ( ( & ( (  raw2255 ) .f_c_dash_cc ) ) ,  ( (  vtime123 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr210 ) ( ( & (  raw2255 ) ) ) ) ) );
    return ( * (  orig_dash_termios2254 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1213 (    struct Termios_136 *  og_dash_termios2258 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr210 ) ( (  og_dash_termios2258 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   read_dash_byte1214 (    int32_t  timeout_dash_ms2262 ) {
    struct Pollfd_219  pfd2263 = ( (struct Pollfd_219) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp75 ( ( ( poll ) ( ( (  cast_dash_ptr218 ) ( ( & (  pfd2263 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2262 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  c2264 = ( ( (  zeroed227 ) ( ) ) );
    if ( (  cmp75 ( ( ( read ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( ( & (  c2264 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( (  c2264 ) ) );
}

static  enum Unit_13   flush_dash_stdout1215 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr259 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1216 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1217 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1219 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2268;
};

struct env1220 {
    bool *  should_dash_resize2268;
};

struct funenv1220 {
    enum Unit_13  (*fun) (  struct env1220  ,    int32_t  );
    struct env1220 env;
};

struct funenv1220  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1221 ) {
    struct funenv1220  temp1222 = _intr_sigarr [  __intr__sig1221 ];
    temp1222.fun ( temp1222.env ,  __intr__sig1221 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1223 ,   struct funenv1220  __intr__fun1224 ) {
    _intr_sigarr [  __intr__sig1223 ] =  __intr__fun1224;
    signal(  __intr__sig1223 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1220 (   struct env1220 env ,    int32_t  dref2275 ) {
    (* env.should_dash_resize2268 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_647   mk1219 (   struct env1219 env ) {
    struct Termios_136  og_dash_termios2270 = ( (  enable_dash_raw_dash_mode1211 ) ( ) );
    ( (  hide_dash_cursor1147 ) ( ) );
    ( (  reset_dash_colors1159 ) ( ) );
    ( (  clear_dash_screen1160 ) ( ) );
    ( (  enable_dash_mouse1216 ) ( ) );
    ( (  flush_dash_stdout1215 ) ( ) );
    enum ColorPalette_648  palette2271 = ( (  query_dash_palette1154 ) ( ) );
    struct Tuple2_1003  dims2272 = ( (  get_dash_dimensions1150 ) ( ) );
    uint32_t  fps2273 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2274 = ( (  now1202 ) ( ) );
    struct env1220 envinst1220 = {
        .should_dash_resize2268 = env.should_dash_resize2268 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1220){ .fun = lam1220, .env = envinst1220 } ) ) );
    return ( (struct Tui_647) { .f_width = ( (  fst1002 ) ( (  dims2272 ) ) ) , .f_height = ( (  snd1004 ) ( (  dims2272 ) ) ) , .f_target_dash_fps = (  fps2273 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2274 ) , .f_fps_dash_ts = (  last_dash_sync2274 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2270 ) , .f_palette = (  palette2271 ) } );
}

static  enum Unit_13   sync1225 (    struct Tui_647 *  tui2278 ) {
    if ( (  eq42 ( ( ( * (  tui2278 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2279 = (  op_dash_div80 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size272 ) ( ( ( * (  tui2278 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1226 = ( (  undefined133 ) ( ) );
    struct timespec *  now2280 = ( &temp1226 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  now2280 ) ) );
    int64_t  elapsed_dash_ns2281 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( * (  now2280 ) ) .tv_sec ) , ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub79 ( ( ( * (  now2280 ) ) .tv_nsec ) , ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2282 = (  op_dash_sub79 ( (  frame_dash_ns2279 ) , (  elapsed_dash_ns2281 ) ) );
    if ( (  cmp74 ( (  sleep_dash_ns2282 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1227 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2282 ) } );
        struct timespec *  ts2283 = ( &temp1227 );
        ( ( nanosleep ) ( (  ts2283 ) ,  ( (  null_dash_ptr261 ) ( ) ) ) );
    }
    struct timespec  temp1228 = ( (  undefined133 ) ( ) );
    struct timespec *  last_dash_sync2284 = ( &temp1228 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  last_dash_sync2284 ) ) );
    (*  tui2278 ) .f_last_dash_sync = ( * (  last_dash_sync2284 ) );
    (*  tui2278 ) .f_fps_dash_count = (  op_dash_add87 ( ( ( * (  tui2278 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2285 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2278 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div80 ( (  op_dash_sub79 ( ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2278 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp74 ( (  fps_dash_elapsed_dash_ms2285 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2278 ) .f_actual_dash_fps = ( ( * (  tui2278 ) ) .f_fps_dash_count );
        (*  tui2278 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2278 ) .f_fps_dash_ts = ( ( * (  tui2278 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1229 (    struct Tui_647 *  tui2288 ) {
    ( (  disable_dash_mouse1217 ) ( ) );
    ( (  show_dash_cursor1146 ) ( ) );
    ( (  reset_dash_colors1159 ) ( ) );
    ( (  clear_dash_screen1160 ) ( ) );
    ( (  reset_dash_cursor_dash_position1149 ) ( ) );
    ( (  disable_dash_raw_dash_mode1213 ) ( ( & ( ( * (  tui2288 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1215 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   btn_dash_to_dash_mouse_dash_button1230 (    int64_t  btn2295 ) {
    return ( {  int32_t  dref2296 = ( (  i64_dash_i32269 ) ( (  btn2295 ) ) ) ;  dref2296 == 0 ? ( MouseButton_144_MouseLeft ) :  dref2296 == 1 ? ( MouseButton_144_MouseMiddle ) :  dref2296 == 2 ? ( MouseButton_144_MouseRight ) :  dref2296 == 64 ? ( MouseButton_144_ScrollUp ) :  dref2296 == 65 ? ( MouseButton_144_ScrollDown ) : ( (  panic_prime_989 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1232 {
    enum {
        Maybe_1232_None_t,
        Maybe_1232_Just_t,
    } tag;
    union {
        struct {
            struct Key_548  field0;
        } Maybe_1232_Just_s;
    } stuff;
};

static struct Maybe_1232 Maybe_1232_Just (  struct Key_548  field0 ) {
    return ( struct Maybe_1232 ) { .tag = Maybe_1232_Just_t, .stuff = { .Maybe_1232_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1232   parse_dash_ss31231 (    char  c2299 ) {
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1232_Just ) ( ( (struct Key_548) { .tag = Key_548_F4_t } ) ) );
    }
    return ( (struct Maybe_1232) { .tag = Maybe_1232_None_t } );
}

static  struct Maybe_546   parse_dash_csi1233 (    struct DynStr_131  seq2302 ) {
    if ( (  eq45 ( ( ( (  seq2302 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    char  last2303 = (  elem_dash_get1065 ( ( (  seq2302 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  seq2302 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get1065 ( ( (  seq2302 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_286  temp1234 = ( (  mk1209 ) ( ( (  substr322 ) ( (  seq2302 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2302 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_286 *  sc2304 = ( &temp1234 );
        struct Maybe_725  dref2305 = ( (  scan_dash_int1210 ) ( (  sc2304 ) ) );
        if ( dref2305.tag == Maybe_725_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2305.tag == Maybe_725_Just_t ) {
            ( (  next517 ) ( (  sc2304 ) ) );
            struct Maybe_725  dref2307 = ( (  scan_dash_int1210 ) ( (  sc2304 ) ) );
            if ( dref2307.tag == Maybe_725_None_t ) {
                return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
            }
            else if ( dref2307.tag == Maybe_725_Just_t ) {
                ( (  next517 ) ( (  sc2304 ) ) );
                struct Maybe_725  dref2309 = ( (  scan_dash_int1210 ) ( (  sc2304 ) ) );
                if ( dref2309.tag == Maybe_725_None_t ) {
                    return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
                }
                else if ( dref2309.tag == Maybe_725_Just_t ) {
                    return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Mouse ) ( ( (struct MouseEvent_549) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1230 ) ( ( dref2305 .stuff .Maybe_725_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2307 .stuff .Maybe_725_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2309 .stuff .Maybe_725_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2302 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Up_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Down_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Right_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Left_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Home_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    if ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_286  temp1235 = ( (  mk1209 ) ( (  seq2302 ) ) );
        struct Scanner_286 *  sc2311 = ( &temp1235 );
        struct Maybe_725  dref2312 = ( (  scan_dash_int1210 ) ( (  sc2311 ) ) );
        if ( dref2312.tag == Maybe_725_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2312.tag == Maybe_725_Just_t ) {
            return ( {  int32_t  dref2314 = ( (  i64_dash_i32269 ) ( ( dref2312 .stuff .Maybe_725_Just_s .field0 ) ) ) ;  dref2314 == 1 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Home_t } ) ) ) ) ) :  dref2314 == 2 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Insert_t } ) ) ) ) ) :  dref2314 == 3 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Delete_t } ) ) ) ) ) :  dref2314 == 4 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_End_t } ) ) ) ) ) :  dref2314 == 5 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_PageUp_t } ) ) ) ) ) :  dref2314 == 6 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_PageDown_t } ) ) ) ) ) :  dref2314 == 15 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F5_t } ) ) ) ) ) :  dref2314 == 17 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F6_t } ) ) ) ) ) :  dref2314 == 18 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F7_t } ) ) ) ) ) :  dref2314 == 19 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F8_t } ) ) ) ) ) :  dref2314 == 20 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F9_t } ) ) ) ) ) :  dref2314 == 21 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F10_t } ) ) ) ) ) :  dref2314 == 23 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F11_t } ) ) ) ) ) :  dref2314 == 24 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F12_t } ) ) ) ) ) : ( (struct Maybe_546) { .tag = Maybe_546_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
}

static  struct Maybe_546   read_dash_key1236 (  ) {
    char  temp1237 = ( (  undefined128 ) ( ) );
    char *  ch2316 = ( &temp1237 );
    struct Maybe_297  dref2317 = ( (  read_dash_byte1214 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2317.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    else if ( dref2317.tag == Maybe_297_Just_t ) {
        (*  ch2316 ) = ( dref2317 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp77 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2319 = ( (  i32_dash_char978 ) ( ( (  u32_dash_i32274 ) ( ( (  u32_dash_or796 ) ( ( (  i32_dash_u32266 ) ( ( (  char_dash_i32976 ) ( ( * (  ch2316 ) ) ) ) ) ) ,  ( (  from_dash_hex1142 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( ( Key_548_Ctrl ) ( (  letter2319 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp77 ( ( (  char_dash_u8977 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1236 ) ( ) );
        } else {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( ( Key_548_Char ) ( ( * (  ch2316 ) ) ) ) ) ) ) );
        }
    }
    char  temp1238 = ( (  undefined128 ) ( ) );
    char *  ch22320 = ( &temp1238 );
    struct Maybe_297  dref2321 = ( (  read_dash_byte1214 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2321.tag == Maybe_297_None_t ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
    }
    else if ( dref2321.tag == Maybe_297_Just_t ) {
        (*  ch22320 ) = ( dref2321 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22320 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_181  temp1239 = ( ( (  zeroed239 ) ( ) ) );
        struct Array_181 *  seq2323 = ( &temp1239 );
        int32_t  slen2324 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp75 ( (  slen2324 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1240 = ( (  undefined128 ) ( ) );
            char *  sc2325 = ( &temp1240 );
            struct Maybe_297  dref2326 = ( (  read_dash_byte1214 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2326.tag == Maybe_297_None_t ) {
                break;
            }
            else if ( dref2326.tag == Maybe_297_Just_t ) {
                (*  sc2325 ) = ( dref2326 .stuff .Maybe_297_Just_s .field0 );
            }
            ( (  set1087 ) ( (  seq2323 ) ,  ( (  i32_dash_size268 ) ( (  slen2324 ) ) ) ,  ( * (  sc2325 ) ) ) );
            slen2324 = (  op_dash_add82 ( (  slen2324 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp77 ( ( (  char_dash_u8977 ) ( ( * (  sc2325 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp77 ( ( (  char_dash_u8977 ) ( ( * (  sc2325 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1233 ) ( ( (struct DynStr_131) { .f_contents = ( (  subslice292 ) ( ( (  as_dash_slice1088 ) ( (  seq2323 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( (  slen2324 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22320 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1241 = ( (  undefined128 ) ( ) );
        char *  sc2328 = ( &temp1241 );
        struct Maybe_297  dref2329 = ( (  read_dash_byte1214 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2329.tag == Maybe_297_None_t ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
        }
        else if ( dref2329.tag == Maybe_297_Just_t ) {
            (*  sc2328 ) = ( dref2329 .stuff .Maybe_297_Just_s .field0 );
        }
        struct Maybe_1232  dref2331 = ( (  parse_dash_ss31231 ) ( ( * (  sc2328 ) ) ) );
        if ( dref2331.tag == Maybe_1232_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2331.tag == Maybe_1232_Just_t ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( dref2331 .stuff .Maybe_1232_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
}

struct env1242 {
    ;
    ;
    ;
    bool *  should_dash_resize2268;
};

static  bool   update_dash_dimensions1242 (   struct env1242 env ,    struct Tui_647 *  tui2335 ) {
    if ( ( ! ( * ( env.should_dash_resize2268 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2268 ) = ( false );
    struct Tuple2_1003  dim2336 = ( (  get_dash_dimensions1150 ) ( ) );
    uint32_t  w2337 = ( (  fst1002 ) ( (  dim2336 ) ) );
    uint32_t  h2338 = ( (  snd1004 ) ( (  dim2336 ) ) );
    (*  tui2335 ) .f_width = (  w2337 );
    (*  tui2335 ) .f_height = (  h2338 );
    return ( true );
}

static  struct Cell_53   lam1244 (    struct Cell_53  dref2356 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Cell_53   lam1245 (    struct Cell_53  dref2358 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Screen_646   mk_dash_screen1243 (    struct Tui_647 *  tui2352 ,    enum CAllocator_4  al2354 ) {
    struct Slice_578  cur2355 = ( (  allocate1078 ) ( (  al2354 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2352 ) ) .f_width ) , ( ( * (  tui2352 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1066 ) ( (  cur2355 ) ,  (  lam1244 ) ) );
    struct Slice_578  prev2357 = ( (  allocate1078 ) ( (  al2354 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2352 ) ) .f_width ) , ( ( * (  tui2352 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1067 ) ( (  prev2357 ) ,  (  lam1245 ) ) );
    return ( (struct Screen_646) { .f_current = (  cur2355 ) , .f_previous = (  prev2357 ) , .f_al = (  al2354 ) , .f_tui = (  tui2352 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1246 (    struct Screen_646 *  screen2361 ) {
    enum CAllocator_4  al2362 = ( ( * (  screen2361 ) ) .f_al );
    ( (  free1083 ) ( (  al2362 ) ,  ( ( * (  screen2361 ) ) .f_current ) ) );
    ( (  free1083 ) ( (  al2362 ) ,  ( ( * (  screen2361 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_53   lam1248 (    struct Cell_53  dref2366 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1247 (    struct Screen_646 *  screen2365 ) {
    ( (  map1068 ) ( ( ( * (  screen2365 ) ) .f_current ) ,  (  lam1248 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1250 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1249 (    struct RenderState_1250 *  rs2370 ,    struct Cell_53 *  c2372 ,    uint32_t  x2374 ,    uint32_t  y2376 ) {
    if ( ( ( !  eq42 ( (  x2374 ) , ( ( * (  rs2370 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2376 ) , ( ( * (  rs2370 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1148 ) ( (  x2374 ) ,  (  y2376 ) ) );
        (*  rs2370 ) .f_x = (  x2374 );
        (*  rs2370 ) .f_y = (  y2376 );
    }
    char  char2377 = ( ( * (  c2372 ) ) .f_c );
    struct Color_54  bg2378 = ( ( * (  c2372 ) ) .f_bg );
    if ( ( ( (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2377 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2378 = ( ( Color_54_Color8 ) ( ( Color8_55_Red8 ) ) );
    }
    if ( ( !  eq59 ( ( ( * (  rs2370 ) ) .f_fg ) , ( ( * (  c2372 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1165 ) ( ( ( * (  c2372 ) ) .f_fg ) ) );
        (*  rs2370 ) .f_fg = ( ( * (  c2372 ) ) .f_fg );
    }
    if ( ( !  eq59 ( ( ( * (  rs2370 ) ) .f_bg ) , (  bg2378 ) ) ) ) {
        ( (  set_dash_bg1166 ) ( (  bg2378 ) ) );
        (*  rs2370 ) .f_bg = (  bg2378 );
    }
    ( (  print_dash_str28 ) ( (  char2377 ) ) );
    (*  rs2370 ) .f_x = (  op_dash_add87 ( ( ( * (  rs2370 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1251 (    struct Screen_646 *  screen2381 ) {
    int32_t  w2382 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2381 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2383 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2381 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1250  temp1252 = ( (struct RenderState_1250) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1250 *  rs2384 = ( &temp1252 );
    ( (  move_dash_cursor_dash_to1148 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_367  temp1253 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  h2383 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1254 =  next368 (&temp1253);
        if (  __cond1254 .tag == 0 ) {
            break;
        }
        int32_t  y2386 =  __cond1254 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_367  temp1255 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  w2382 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1256 =  next368 (&temp1255);
            if (  __cond1256 .tag == 0 ) {
                break;
            }
            int32_t  x2388 =  __cond1256 .stuff .Maybe_328_Just_s .field0;
            size_t  i2389 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2386 ) , (  w2382 ) ) ) , (  x2388 ) ) ) ) );
            struct Cell_53 *  cur2390 = ( (  get_dash_ptr1047 ) ( ( ( * (  screen2381 ) ) .f_current ) ,  (  i2389 ) ) );
            struct Cell_53 *  prev2391 = ( (  get_dash_ptr1047 ) ( ( ( * (  screen2381 ) ) .f_previous ) ,  (  i2389 ) ) );
            if ( ( ( !  eq52 ( (  cur2390 ) , (  prev2391 ) ) ) || ( ( * (  screen2381 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2384 ) .f_changes = (  op_dash_add87 ( ( ( * (  rs2384 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1249 ) ( (  rs2384 ) ,  (  cur2390 ) ,  ( (  i32_dash_u32266 ) ( (  x2388 ) ) ) ,  ( (  i32_dash_u32266 ) ( (  y2386 ) ) ) ) );
                (*  prev2391 ) = ( * (  cur2390 ) );
            }
        }
    }
    (*  screen2381 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1159 ) ( ) );
    ( (  flush_dash_stdout1215 ) ( ) );
    return ( ( * (  rs2384 ) ) .f_changes );
}

struct funenv1242 {
    bool  (*fun) (  struct env1242  ,    struct Tui_647 *  );
    struct env1242 env;
};

struct env1257 {
    ;
    ;
    ;
    struct env1242 envinst1242;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1257 (   struct env1257 env ,    struct Screen_646 *  screen2394 ) {
    struct Tui_647 *  tui2395 = ( ( * (  screen2394 ) ) .f_tui );
    struct funenv1242  temp1258 = ( (struct funenv1242){ .fun = update_dash_dimensions1242, .env =  env.envinst1242  } );
    if ( ( ! ( temp1258.fun ( temp1258.env ,  (  tui2395 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2394 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2396 = ( ( * ( ( * (  screen2394 ) ) .f_tui ) ) .f_width );
    uint32_t  h2397 = ( ( * ( ( * (  screen2394 ) ) .f_tui ) ) .f_height );
    size_t  nusz2398 = ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( (  w2396 ) , (  h2397 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2398 ) , ( ( ( * (  screen2394 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_646  nuscreen2399 = ( (  mk_dash_screen1243 ) ( (  tui2395 ) ,  ( ( * (  screen2394 ) ) .f_al ) ) );
    (*  screen2394 ) .f_current = ( (  nuscreen2399 ) .f_current );
    (*  screen2394 ) .f_previous = ( (  nuscreen2399 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1259 (    struct Screen_646 *  screen2402 ,    struct Color_54  c2404 ) {
    (*  screen2402 ) .f_default_dash_fg = (  c2404 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1260 (    struct Screen_646 *  screen2407 ,    struct Color_54  c2409 ) {
    (*  screen2407 ) .f_default_dash_bg = (  c2409 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1261 (    struct Screen_646 *  screen2412 ,    struct Color_54  fg2414 ,    struct Color_54  bg2416 ) {
    (*  screen2412 ) .f_default_dash_fg = (  fg2414 );
    (*  screen2412 ) .f_default_dash_bg = (  bg2416 );
    return ( Unit_13_Unit );
}

static  struct Maybe_999   get_dash_cell_dash_ptr1262 (    struct Screen_646 *  screen2423 ,    int32_t  x2425 ,    int32_t  y2427 ) {
    int32_t  w2428 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2423 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2425 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  x2425 ) , (  w2428 ) ) != 0 ) ) ) {
        return ( (struct Maybe_999) { .tag = Maybe_999_None_t } );
    }
    if ( ( (  cmp75 ( (  y2427 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  y2427 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2423 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_999) { .tag = Maybe_999_None_t } );
    }
    size_t  i2429 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2427 ) , (  w2428 ) ) ) , (  x2425 ) ) ) ) );
    return ( ( Maybe_999_Just ) ( ( (  get_dash_ptr1047 ) ( ( ( * (  screen2423 ) ) .f_current ) ,  (  i2429 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1263 (    struct Screen_646 *  screen2432 ) {
    struct RangeIter_367  temp1264 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1265 =  next368 (&temp1264);
        if (  __cond1265 .tag == 0 ) {
            break;
        }
        int32_t  y2434 =  __cond1265 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_367  temp1266 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1267 =  next368 (&temp1266);
            if (  __cond1267 .tag == 0 ) {
                break;
            }
            int32_t  x2436 =  __cond1267 .stuff .Maybe_328_Just_s .field0;
            struct Cell_53 *  cell2437 = ( (  or_dash_fail998 ) ( ( (  get_dash_cell_dash_ptr1262 ) ( (  screen2432 ) ,  (  x2436 ) ,  (  y2434 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2437 ) .f_bg = ( ( * (  screen2432 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1268 (    struct Screen_646 *  screen2440 ,    char  c2442 ,    int32_t  x2444 ,    int32_t  y2446 ) {
    int32_t  w2447 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2440 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2444 ) , (  w2447 ) ) != 0 ) || (  cmp75 ( (  y2446 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2440 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2448 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2446 ) , (  w2447 ) ) ) , (  x2444 ) ) ) ) );
    struct Color_54  fg2449 = ( ( * (  screen2440 ) ) .f_default_dash_fg );
    struct Color_54  bg2450 = ( ( * (  screen2440 ) ) .f_default_dash_bg );
    char  c2451 = (  c2442 );
    ( (  set1055 ) ( ( ( * (  screen2440 ) ) .f_current ) ,  (  i2448 ) ,  ( (struct Cell_53) { .f_c = (  c2451 ) , .f_fg = (  fg2449 ) , .f_bg = (  bg2450 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam645 (   struct env645 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1269 (    struct Screen_646 *  screen2454 ,    int32_t  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env645 envinst645 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each644 ) ( ( (  zip485 ) ( ( (  chars816 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv645){ .fun = lam645, .env = envinst645 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam652 (   struct env652 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1270 (    struct Screen_646 *  screen2454 ,    struct StrConcat_822  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env652 envinst652 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each651 ) ( ( (  zip487 ) ( ( (  chars953 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv652){ .fun = lam652, .env = envinst652 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam656 (   struct env656 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1271 (    struct Screen_646 *  screen2454 ,    struct StrConcat_838  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env656 envinst656 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each655 ) ( ( (  zip489 ) ( ( (  chars954 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv656){ .fun = lam656, .env = envinst656 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam660 (   struct env660 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1272 (    struct Screen_646 *  screen2454 ,    struct StrConcat_840  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env660 envinst660 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each659 ) ( ( (  zip491 ) ( ( (  chars955 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv660){ .fun = lam660, .env = envinst660 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam664 (   struct env664 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1273 (    struct Screen_646 *  screen2454 ,    struct StrConcat_866  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env664 envinst664 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each663 ) ( ( (  zip493 ) ( ( (  chars956 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv664){ .fun = lam664, .env = envinst664 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam668 (   struct env668 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1274 (    struct Screen_646 *  screen2454 ,    struct StrConcat_17  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env668 envinst668 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each667 ) ( ( (  zip495 ) ( ( (  chars909 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv668){ .fun = lam668, .env = envinst668 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam672 (   struct env672 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1275 (    struct Screen_646 *  screen2454 ,    struct StrConcat_868  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env672 envinst672 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each671 ) ( ( (  zip497 ) ( ( (  chars871 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv672){ .fun = lam672, .env = envinst672 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam676 (   struct env676 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1276 (    struct Screen_646 *  screen2454 ,    struct StrConcat_875  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env676 envinst676 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each675 ) ( ( (  zip499 ) ( ( (  chars957 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv676){ .fun = lam676, .env = envinst676 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam680 (   struct env680 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1277 (    struct Screen_646 *  screen2454 ,    struct StrConcat_880  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env680 envinst680 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each679 ) ( ( (  zip487 ) ( ( (  chars958 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv680){ .fun = lam680, .env = envinst680 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam684 (   struct env684 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1278 (    struct Screen_646 *  screen2454 ,    struct StrConcat_895  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env684 envinst684 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each683 ) ( ( (  zip487 ) ( ( (  chars959 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv684){ .fun = lam684, .env = envinst684 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam688 (   struct env688 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1055 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2462 ) , ( (  i32_dash_size268 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1279 (    struct Screen_646 *  screen2454 ,    struct StrConcat_899  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp75 ( (  y2460 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_54  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_54  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env688 envinst688 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each687 ) ( ( (  zip501 ) ( ( (  chars960 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv688){ .fun = lam688, .env = envinst688 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1280 (    struct Screen_646 *  screen2472 ,    int32_t  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count761 ) ( ( (  chars816 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1269 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1281 (    struct Screen_646 *  screen2472 ,    struct StrConcat_822  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count763 ) ( ( (  chars953 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1270 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1282 (    struct Screen_646 *  screen2472 ,    struct StrConcat_838  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count765 ) ( ( (  chars954 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1271 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1283 (    struct Screen_646 *  screen2472 ,    struct StrConcat_840  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count767 ) ( ( (  chars955 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1272 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1284 (    struct Screen_646 *  screen2472 ,    struct StrConcat_866  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count769 ) ( ( (  chars956 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1273 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1285 (    struct Screen_646 *  screen2472 ,    struct StrConcat_17  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count771 ) ( ( (  chars909 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1274 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1286 (    struct Screen_646 *  screen2472 ,    struct StrConcat_868  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count773 ) ( ( (  chars871 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1275 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1287 (    struct Screen_646 *  screen2472 ,    struct StrConcat_875  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count775 ) ( ( (  chars957 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1276 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1288 (    struct Screen_646 *  screen2472 ,    struct StrConcat_880  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count763 ) ( ( (  chars958 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1277 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1289 (    struct Screen_646 *  screen2472 ,    struct StrConcat_895  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count763 ) ( ( (  chars959 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1278 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1290 (    struct Screen_646 *  screen2472 ,    struct StrConcat_899  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32270 ) ( ( (  count777 ) ( ( (  chars960 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1279 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_315   try_dash_read_dash_contents1291 (    const char*  filename2832 ,    enum CAllocator_4  al2834 ) {
    FILE *  file2835 = ( ( fopen ) ( (  filename2832 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2835 ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    ( ( fseek ) ( (  file2835 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end108 ) ( ) ) ) );
    int32_t  file_dash_size2836 = ( ( ftell ) ( (  file2835 ) ) );
    ( ( fseek ) ( (  file2835 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set107 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2837 = ( ( (  allocate1077 ) ( (  al2834 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  file_dash_size2836 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2837 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2836 ) ,  (  file2835 ) ) );
    ( (  set1054 ) ( (  file_dash_buf2837 ) ,  ( (  i32_dash_size268 ) ( (  file_dash_size2836 ) ) ) ,  ( (  nullchar320 ) ( ) ) ) );
    ( ( fclose ) ( (  file2835 ) ) );
    struct DynStr_131  str2838 = ( (struct DynStr_131) { .f_contents = (  file_dash_buf2837 ) } );
    return ( ( Maybe_315_Just ) ( (  str2838 ) ) );
}

static  struct DynStr_131   read_dash_contents1292 (    const char*  filename2841 ,    enum CAllocator_4  al2843 ) {
    return ( (  or_dash_fail992 ) ( ( (  try_dash_read_dash_contents1291 ) ( (  filename2841 ) ,  (  al2843 ) ) ) ,  ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "could not open file " ) ,  (  filename2841 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1293 (    const char*  filename2846 ,    struct DynStr_131  contents2848 ) {
    FILE *  file2849 = ( ( fopen ) ( (  filename2846 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2849 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_287  it2850 = ( (  chars836 ) ( (  contents2848 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref2851 = ( (  next330 ) ( ( & (  it2850 ) ) ) );
        if ( dref2851.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file2849 ) ) );
            return ( true );
        }
        else if ( dref2851.tag == Maybe_297_Just_t ) {
            int32_t  chars_dash_written2853 = ( ( fprintf ) ( (  file2849 ) ,  ( "%c" ) ,  ( dref2851 .stuff .Maybe_297_Just_s .field0 ) ) );
            if ( (  cmp75 ( (  chars_dash_written2853 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable982 ) ( ) );
}

static  enum Unit_13   write_dash_contents1294 (    const char*  filename2856 ,    struct DynStr_131  contents2858 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1293 ) ( (  filename2856 ) ,  (  contents2858 ) ) ) ) ) {
        ( (  panic988 ) ( ( ( StrConcat_914_StrConcat ) ( ( "could not write to file " ) ,  (  filename2856 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1049   get1295 (  ) {
    return ( (struct Slice_1049) { .f_ptr = ( (  offset_dash_ptr152 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len312 (   struct env312 env ,    char  c2485 ) {
    if ( (  eq48 ( (  c2485 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2482 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1298 (    struct Cursor_804  l2492 ,    struct Cursor_804  r2494 ) {
    return ( (  eq41 ( ( (  l2492 ) .f_x ) , ( (  r2494 ) .f_x ) ) ) && (  eq41 ( ( (  l2492 ) .f_y ) , ( (  r2494 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1299 (    struct Visual_1012  dref2504 ) {
    return ( dref2504 .field0 );
}

struct Tuple2_1301 {
    struct Mode_823  field0;
    struct Mode_823  field1;
};

static struct Tuple2_1301 Tuple2_1301_Tuple2 (  struct Mode_823  field0 ,  struct Mode_823  field1 ) {
    return ( struct Tuple2_1301 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1300 (    struct Mode_823  l2509 ,    struct Mode_823  r2511 ) {
    struct Tuple2_1301  dref2512 = ( ( Tuple2_1301_Tuple2 ) ( (  l2509 ) ,  (  r2511 ) ) );
    if ( dref2512 .field0.tag == Mode_823_Normal_t && dref2512 .field1.tag == Mode_823_Normal_t ) {
        return ( true );
    }
    else if ( dref2512 .field0.tag == Mode_823_Insert_t && dref2512 .field1.tag == Mode_823_Insert_t ) {
        return ( true );
    }
    else if ( dref2512 .field0.tag == Mode_823_Select_t && dref2512 .field1.tag == Mode_823_Select_t ) {
        return ( true );
    }
    else if ( dref2512 .field0.tag == Mode_823_Cmd_t && dref2512 .field1.tag == Mode_823_Cmd_t ) {
        ( (  panic986 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2512 .field0.tag == Mode_823_SearchBox_t && dref2512 .field1.tag == Mode_823_SearchBox_t ) {
        ( (  panic986 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1302 (    struct Editor_1011 *  ed2533 ,    int32_t  y2535 ) {
    return ( (  get_dash_ptr1098 ) ( ( & ( ( * (  ed2533 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2535 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1303 (    struct Editor_1011 *  ed2538 ) {
    return ( (  get_dash_ptr1098 ) ( ( & ( ( * (  ed2538 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2538 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_506   indent_dash_on_dash_row1304 (    struct Editor_1011 *  ed2541 ,    int32_t  y2543 ) {
    return ( (  take_dash_while528 ) ( ( (  get_dash_row1302 ) ( (  ed2541 ) ,  (  y2543 ) ) ) ,  (  is_dash_whitespace1089 ) ) );
}

static  size_t   num_dash_rows1305 (    struct Editor_1011 *  ed2546 ) {
    return ( (  size1139 ) ( ( & ( ( * (  ed2546 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1113 {
    enum Unit_13  (*fun) (  struct env1113  ,    struct List_280 *  ,    size_t  ,    struct List_3  );
    struct env1113 env;
};

struct env1306 {
    struct env1113 envinst1113;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3 *   insert_dash_row1306 (   struct env1306 env ,    struct Editor_1011 *  ed2549 ,    int32_t  y2551 ) {
    struct funenv1113  temp1307 = ( (struct funenv1113){ .fun = insert1113, .env =  env.envinst1113  } );
    ( temp1307.fun ( temp1307.env ,  ( & ( ( * (  ed2549 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2551 ) ) ) ,  ( (  mk1105 ) ( ( ( * (  ed2549 ) ) .f_al ) ) ) ) );
    return ( (  get_dash_row1302 ) ( (  ed2549 ) ,  (  y2551 ) ) );
}

struct funenv1116 {
    enum Unit_13  (*fun) (  struct env1116  ,    struct List_280 *  ,    size_t  );
    struct env1116 env;
};

struct env1308 {
    ;
    ;
    struct env1116 envinst1116;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1308 (   struct env1308 env ,    struct Editor_1011 *  ed2554 ,    int32_t  y2556 ) {
    struct List_3 *  next_dash_row2557 = ( (  get_dash_row1302 ) ( (  ed2554 ) ,  (  y2556 ) ) );
    ( (  free1106 ) ( (  next_dash_row2557 ) ) );
    struct funenv1116  temp1309 = ( (struct funenv1116){ .fun = remove1116, .env =  env.envinst1116  } );
    ( temp1309.fun ( temp1309.env ,  ( & ( ( * (  ed2554 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2556 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   char_dash_at1310 (    struct Editor_1011 *  ed2560 ,    struct Cursor_804  cur2562 ) {
    return ( (  try_dash_get1100 ) ( ( (  get_dash_row1302 ) ( (  ed2560 ) ,  ( (  cur2562 ) .f_y ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2562 ) .f_x ) ) ) ) );
}

static  struct Maybe_297   char_dash_at_dash_cursor1311 (    struct Editor_1011 *  ed2565 ) {
    return ( (  try_dash_get1100 ) ( ( (  cursor_dash_row1303 ) ( (  ed2565 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2565 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1312 {
    ;
    ;
    struct env312 envinst312;
    ;
    ;
    ;
};

static  struct Visual_1012   x_dash_to_dash_visual_dash_x1312 (   struct env1312 env ,    struct Editor_1011 *  ed2568 ,    int32_t  x2570 ,    int32_t  y2572 ) {
    return ( ( Visual_1012_Visual ) ( ( (  sum779 ) ( ( (  map336 ) ( ( (  take363 ) ( ( (  get_dash_row1302 ) ( (  ed2568 ) ,  (  y2572 ) ) ) ,  ( (  i32_dash_size268 ) ( (  x2570 ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ) ) ) ) ) );
}

struct env1313 {
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
    ;
};

static  int32_t   visual_dash_x_dash_to_dash_x1313 (   struct env1313 env ,    struct Editor_1011 *  ed2575 ,    struct Visual_1012  dref2576 ,    int32_t  y2579 ) {
    int32_t  sum_dash_x2580 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2581 = ( (  get_dash_row1302 ) ( (  ed2575 ) ,  (  y2579 ) ) );
    struct RangeIter_367  temp1314 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( * (  chars2581 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1315 =  next368 (&temp1314);
        if (  __cond1315 .tag == 0 ) {
            break;
        }
        int32_t  x2583 =  __cond1315 .stuff .Maybe_328_Just_s .field0;
        struct funenv312  temp1316 = ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } );
        sum_dash_x2580 = (  op_dash_add82 ( (  sum_dash_x2580 ) , ( temp1316.fun ( temp1316.env ,  (  elem_dash_get2 ( (  chars2581 ) , ( (  i32_dash_size268 ) ( (  x2583 ) ) ) ) ) ) ) ) );
        if ( (  cmp75 ( ( dref2576 .field0 ) , (  sum_dash_x2580 ) ) == 0 ) ) {
            return (  x2583 );
        }
    }
    return ( (  size_dash_i32270 ) ( ( ( * (  chars2581 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1317 (    struct Editor_1011 *  ed2586 ,    struct Maybe_1001  sel2588 ) {
    if ( ( ( !  eq1300 ( ( ( * (  ed2586 ) ) .f_mode ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) || ( ! ( (  is_dash_just1005 ) ( ( ( * (  ed2586 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2586 ) .f_selected = (  sel2588 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1318 (    struct Editor_1011 *  ed2591 ) {
    struct Maybe_315  dref2592 = ( ( * (  ed2591 ) ) .f_msg );
    if ( dref2592.tag == Maybe_315_None_t ) {
    }
    else if ( dref2592.tag == Maybe_315_Just_t ) {
        ( (  free1080 ) ( ( ( * (  ed2591 ) ) .f_al ) ,  ( ( dref2592 .stuff .Maybe_315_Just_s .field0 ) .f_contents ) ) );
        (*  ed2591 ) .f_msg = ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1319 {
    ;
    struct env1184 envinst1184;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1319 (   struct env1319 env ,    struct Editor_1011 *  ed2596 ,    const char*  s2598 ) {
    ( (  reset_dash_msg1318 ) ( (  ed2596 ) ) );
    struct funenv1184  temp1320 = ( (struct funenv1184){ .fun = mk_dash_dyn_dash_str1184, .env =  env.envinst1184  } );
    struct DynStr_131  s2599 = ( temp1320.fun ( temp1320.env ,  (  s2598 ) ,  ( ( * (  ed2596 ) ) .f_al ) ) );
    (*  ed2596 ) .f_msg = ( ( Maybe_315_Just ) ( (  s2599 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1313 {
    int32_t  (*fun) (  struct env1313  ,    struct Editor_1011 *  ,    struct Visual_1012  ,    int32_t  );
    struct env1313 env;
};

struct funenv1312 {
    struct Visual_1012  (*fun) (  struct env1312  ,    struct Editor_1011 *  ,    int32_t  ,    int32_t  );
    struct env1312 env;
};

struct env1321 {
    ;
    ;
    struct env1313 envinst1313;
    ;
    ;
    ;
    ;
    ;
    struct env1312 envinst1312;
    ;
    ;
    ;
    ;
};

struct Dims_1322 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1321 (   struct env1321 env ,    struct Editor_1011 *  ed2603 ,    int32_t  x2605 ,    int32_t  y2607 ,    struct Dims_1322  dim2609 ) {
    struct Cursor_804  cur2610 = ( ( * (  ed2603 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2611 = ( !  eq41 ( ( (  cur2610 ) .f_x ) , (  x2605 ) ) );
    int32_t  y2612 = ( (  clamp810 ) ( (  y2607 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2603 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2613 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  y2612 ) , (  op_dash_add82 ( ( ( * (  ed2603 ) ) .f_screen_dash_top ) , (  funny_dash_space2613 ) ) ) ) == 0 ) ) {
        (*  ed2603 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  y2612 ) , (  funny_dash_space2613 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  y2612 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2603 ) ) .f_screen_dash_top ) , ( (  dim2609 ) .f_rows ) ) ) , (  funny_dash_space2613 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2614 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  y2612 ) , (  funny_dash_space2613 ) ) ) , ( (  dim2609 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2603 ) .f_screen_dash_top = (  onscreen_dash_y2614 );
        } else {
        }
    }
    struct List_3 *  row2615 = ( (  get_dash_row1302 ) ( (  ed2603 ) ,  (  y2612 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2611 ) ) {
        int32_t  x2616 = ( (  clamp810 ) ( (  x2605 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( ( (  size1138 ) ( (  row2615 ) ) ) ) ) ) );
        struct funenv1312  temp1323 = ( (struct funenv1312){ .fun = x_dash_to_dash_visual_dash_x1312, .env =  env.envinst1312  } );
        (*  ed2603 ) .f_goal_dash_x = ( temp1323.fun ( temp1323.env ,  (  ed2603 ) ,  (  x2616 ) ,  (  y2612 ) ) );
    }
    struct Visual_1012  vx2617 = ( ( * (  ed2603 ) ) .f_goal_dash_x );
    struct funenv1313  temp1324 = ( (struct funenv1313){ .fun = visual_dash_x_dash_to_dash_x1313, .env =  env.envinst1313  } );
    int32_t  x2618 = ( temp1324.fun ( temp1324.env ,  (  ed2603 ) ,  (  vx2617 ) ,  (  y2612 ) ) );
    int32_t  funny_dash_space2619 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  x2618 ) , (  op_dash_add82 ( ( ( * (  ed2603 ) ) .f_screen_dash_left ) , (  funny_dash_space2619 ) ) ) ) == 0 ) ) {
        (*  ed2603 ) .f_screen_dash_left = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  x2618 ) , (  funny_dash_space2619 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  x2618 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2603 ) ) .f_screen_dash_left ) , ( (  dim2609 ) .f_cols ) ) ) , (  funny_dash_space2619 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2620 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  x2618 ) , (  funny_dash_space2619 ) ) ) , ( (  dim2609 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2603 ) .f_screen_dash_left = (  onscreen_dash_x2620 );
        } else {
        }
    }
    (*  ed2603 ) .f_cursor = ( (struct Cursor_804) { .f_x = (  x2618 ) , .f_y = (  y2612 ) } );
    ( (  set_dash_selection1317 ) ( (  ed2603 ) ,  ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1321 {
    enum Unit_13  (*fun) (  struct env1321  ,    struct Editor_1011 *  ,    int32_t  ,    int32_t  ,    struct Dims_1322  );
    struct env1321 env;
};

struct env1325 {
    struct env1321 envinst1321;
};

static  enum Unit_13   move_dash_to_dash_col1325 (   struct env1325 env ,    struct Editor_1011 *  ed2623 ,    int32_t  x2625 ,    struct Dims_1322  dim2627 ) {
    struct funenv1321  temp1326 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
    ( temp1326.fun ( temp1326.env ,  (  ed2623 ) ,  (  x2625 ) ,  ( ( ( * (  ed2623 ) ) .f_cursor ) .f_y ) ,  (  dim2627 ) ) );
    return ( Unit_13_Unit );
}

struct env1327 {
    struct env1321 envinst1321;
};

static  enum Unit_13   move_dash_to_dash_row1327 (   struct env1327 env ,    struct Editor_1011 *  ed2630 ,    int32_t  y2632 ,    struct Dims_1322  dim2634 ) {
    struct funenv1321  temp1328 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
    ( temp1328.fun ( temp1328.env ,  (  ed2630 ) ,  ( ( ( * (  ed2630 ) ) .f_cursor ) .f_x ) ,  (  y2632 ) ,  (  dim2634 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1325 {
    enum Unit_13  (*fun) (  struct env1325  ,    struct Editor_1011 *  ,    int32_t  ,    struct Dims_1322  );
    struct env1325 env;
};

struct funenv1327 {
    enum Unit_13  (*fun) (  struct env1327  ,    struct Editor_1011 *  ,    int32_t  ,    struct Dims_1322  );
    struct env1327 env;
};

struct env1329 {
    ;
    ;
    ;
    ;
    struct env1325 envinst1325;
    ;
    struct env1327 envinst1327;
    ;
    ;
};

static  bool   move_dash_left1329 (   struct env1329 env ,    struct Editor_1011 *  ed2637 ,    struct Dims_1322  dim2639 ) {
    struct Cursor_804  cur2640 = ( ( * (  ed2637 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1327  temp1330 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  env.envinst1327  } );
            ( temp1330.fun ( temp1330.env ,  (  ed2637 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2639 ) ) );
            struct funenv1325  temp1331 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  env.envinst1325  } );
            ( temp1331.fun ( temp1331.env ,  (  ed2637 ) ,  ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1303 ) ( (  ed2637 ) ) ) ) .f_count ) ) ) ,  (  dim2639 ) ) );
        }
    } else {
        struct funenv1325  temp1332 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  env.envinst1325  } );
        ( temp1332.fun ( temp1332.env ,  (  ed2637 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2639 ) ) );
    }
    return ( !  eq1298 ( ( ( * (  ed2637 ) ) .f_cursor ) , (  cur2640 ) ) );
}

struct env1333 {
    ;
    ;
    ;
    ;
    ;
    struct env1325 envinst1325;
    ;
    struct env1321 envinst1321;
    ;
    ;
};

static  bool   move_dash_right1333 (   struct env1333 env ,    struct Editor_1011 *  ed2643 ,    struct Dims_1322  dims2645 ) {
    struct Cursor_804  cur2646 = ( ( * (  ed2643 ) ) .f_cursor );
    int32_t  row_dash_len2647 = ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1303 ) ( (  ed2643 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_x ) , (  row_dash_len2647 ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2643 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1321  temp1334 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
            ( temp1334.fun ( temp1334.env ,  (  ed2643 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2645 ) ) );
        }
    } else {
        struct funenv1325  temp1335 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  env.envinst1325  } );
        ( temp1335.fun ( temp1335.env ,  (  ed2643 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2645 ) ) );
    }
    return ( !  eq1298 ( ( ( * (  ed2643 ) ) .f_cursor ) , (  cur2646 ) ) );
}

struct env1336 {
    ;
    ;
    ;
    struct env1325 envinst1325;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1336 (   struct env1336 env ,    struct Editor_1011 *  ed2650 ,    struct Dims_1322  dims2652 ) {
    int32_t  off2653 = ( (  size_dash_i32270 ) ( ( (  count759 ) ( ( (  indent_dash_on_dash_row1304 ) ( (  ed2650 ) ,  ( ( ( * (  ed2650 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1325  temp1337 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  env.envinst1325  } );
    ( temp1337.fun ( temp1337.env ,  (  ed2650 ) ,  (  off2653 ) ,  (  dims2652 ) ) );
    return ( Unit_13_Unit );
}

struct env1338 {
    ;
    ;
    struct env1325 envinst1325;
    ;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1338 (   struct env1338 env ,    struct Editor_1011 *  ed2656 ,    struct Dims_1322  dims2658 ) {
    struct List_3 *  currow2659 = ( (  cursor_dash_row1303 ) ( (  ed2656 ) ) );
    struct funenv1325  temp1339 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  env.envinst1325  } );
    ( temp1339.fun ( temp1339.env ,  (  ed2656 ) ,  ( (  size_dash_i32270 ) ( ( (  size1138 ) ( (  currow2659 ) ) ) ) ) ,  (  dims2658 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1340 (    struct Editor_1011 *  ed2665 ,    int32_t  col2667 ,    int32_t  row2669 ) {
    return (  eq41 ( (  col2667 ) , ( (  size_dash_i32270 ) ( ( (  size1138 ) ( ( (  get_dash_row1302 ) ( (  ed2665 ) ,  (  row2669 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1341 (    struct Editor_1011 *  ed2672 ) {
    return (  eq41 ( ( ( ( * (  ed2672 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  size1138 ) ( ( (  cursor_dash_row1303 ) ( (  ed2672 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1342 (    struct Editor_1011 *  ed2675 ,    struct Maybe_315  clip2677 ) {
    struct Maybe_315  dref2678 = ( ( * (  ed2675 ) ) .f_clipboard );
    if ( dref2678.tag == Maybe_315_None_t ) {
    }
    else if ( dref2678.tag == Maybe_315_Just_t ) {
        ( (  free1080 ) ( ( ( * (  ed2675 ) ) .f_al ) ,  ( ( dref2678 .stuff .Maybe_315_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2675 ) .f_clipboard = (  clip2677 );
    return ( Unit_13_Unit );
}

struct funenv1169 {
    enum Unit_13  (*fun) (  struct env1169  ,    struct StrBuilder_572 *  ,    char  );
    struct env1169 env;
};

struct funenv1175 {
    enum Unit_13  (*fun) (  struct env1175  ,    struct StrBuilder_572 *  ,    struct Slice_5  );
    struct env1175 env;
};

struct env1343 {
    ;
    ;
    ;
    struct env1169 envinst1169;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1175 envinst1175;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env623 envinst623;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection1343 (   struct env1343 env ,    struct Editor_1011 *  ed2682 ) {
    struct Maybe_1001  dref2683 = ( ( * (  ed2682 ) ) .f_selected );
    if ( dref2683.tag == Maybe_1001_None_t ) {
        struct Maybe_297  dref2684 = ( (  char_dash_at_dash_cursor1311 ) ( (  ed2682 ) ) );
        if ( dref2684.tag == Maybe_297_None_t ) {
            ( (  set_dash_clipboard1342 ) ( (  ed2682 ) ,  ( (struct Maybe_315) { .tag = Maybe_315_None_t } ) ) );
        }
        else if ( dref2684.tag == Maybe_297_Just_t ) {
            struct StrBuilder_572  temp1344 = ( (  mk1181 ) ( ( ( * (  ed2682 ) ) .f_al ) ) );
            struct StrBuilder_572 *  sb2686 = ( &temp1344 );
            struct funenv623  temp1345 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
            ( temp1345.fun ( temp1345.env ,  (  sb2686 ) ,  ( dref2684 .stuff .Maybe_297_Just_s .field0 ) ) );
            ( (  as_dash_str829 ) ( (  sb2686 ) ) );
            ( (  set_dash_clipboard1342 ) ( (  ed2682 ) ,  ( ( Maybe_315_Just ) ( ( (  as_dash_str829 ) ( (  sb2686 ) ) ) ) ) ) );
        }
    }
    else if ( dref2683.tag == Maybe_1001_Just_t ) {
        struct StrBuilder_572  temp1346 = ( (  mk1181 ) ( ( ( * (  ed2682 ) ) .f_al ) ) );
        struct StrBuilder_572 *  sb2688 = ( &temp1346 );
        struct Cursor_804  from2689 = ( (  min803 ) ( ( dref2683 .stuff .Maybe_1001_Just_s .field0 ) ,  ( ( * (  ed2682 ) ) .f_cursor ) ) );
        struct Cursor_804  to2690 = ( (  max808 ) ( ( dref2683 .stuff .Maybe_1001_Just_s .field0 ) ,  ( ( * (  ed2682 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2689 ) .f_y ) , ( (  to2690 ) .f_y ) ) ) ) {
            struct List_3 *  currow2691 = ( (  get_dash_row1302 ) ( (  ed2682 ) ,  ( (  from2689 ) .f_y ) ) );
            struct funenv1175  temp1347 = ( (struct funenv1175){ .fun = write_dash_slice1175, .env =  env.envinst1175  } );
            ( temp1347.fun ( temp1347.env ,  (  sb2688 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1135 ) ( ( * (  currow2691 ) ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2689 ) .f_x ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  to2690 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1340 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_x ) ,  ( (  to2690 ) .f_y ) ) ) ) {
                struct funenv1169  temp1348 = ( (struct funenv1169){ .fun = write1169, .env =  env.envinst1169  } );
                ( temp1348.fun ( temp1348.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            (*  ed2682 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
        } else {
            ( (  assert990 ) ( (  cmp75 ( ( (  to2690 ) .f_y ) , ( (  from2689 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2692 = ( (  get_dash_row1302 ) ( (  ed2682 ) ,  ( (  from2689 ) .f_y ) ) );
            struct funenv1175  temp1349 = ( (struct funenv1175){ .fun = write_dash_slice1175, .env =  env.envinst1175  } );
            ( temp1349.fun ( temp1349.env ,  (  sb2688 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1135 ) ( ( * (  currow2692 ) ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2689 ) .f_x ) ) ) ,  ( (  size1138 ) ( (  currow2692 ) ) ) ) ) ) );
            struct funenv1169  temp1350 = ( (struct funenv1169){ .fun = write1169, .env =  env.envinst1169  } );
            ( temp1350.fun ( temp1350.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_278  temp1351 =  into_dash_iter282 ( ( (  subslice283 ) ( ( (  to_dash_slice1136 ) ( ( ( * (  ed2682 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  from2689 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  to2690 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_314  __cond1352 =  next351 (&temp1351);
                if (  __cond1352 .tag == 0 ) {
                    break;
                }
                struct List_3  row2694 =  __cond1352 .stuff .Maybe_314_Just_s .field0;
                struct funenv1175  temp1353 = ( (struct funenv1175){ .fun = write_dash_slice1175, .env =  env.envinst1175  } );
                ( temp1353.fun ( temp1353.env ,  (  sb2688 ) ,  ( (  to_dash_slice1135 ) ( (  row2694 ) ) ) ) );
                struct funenv1169  temp1354 = ( (struct funenv1169){ .fun = write1169, .env =  env.envinst1169  } );
                ( temp1354.fun ( temp1354.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2695 = ( (  get_dash_row1302 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_y ) ) );
            struct funenv1175  temp1355 = ( (struct funenv1175){ .fun = write_dash_slice1175, .env =  env.envinst1175  } );
            ( temp1355.fun ( temp1355.env ,  (  sb2688 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1135 ) ( ( * (  lastrow2695 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  to2690 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1340 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_x ) ,  ( (  to2690 ) .f_y ) ) ) ) {
                struct funenv1169  temp1356 = ( (struct funenv1169){ .fun = write1169, .env =  env.envinst1169  } );
                ( temp1356.fun ( temp1356.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_131  s2696 = ( (  as_dash_str829 ) ( (  sb2688 ) ) );
        ( (  set_dash_clipboard1342 ) ( (  ed2682 ) ,  ( ( Maybe_315_Just ) ( (  s2696 ) ) ) ) );
        (*  ed2682 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    }
    return ( Unit_13_Unit );
}

struct funenv1306 {
    struct List_3 *  (*fun) (  struct env1306  ,    struct Editor_1011 *  ,    int32_t  );
    struct env1306 env;
};

struct env1357 {
    ;
    struct env566 envinst566;
    ;
    ;
    struct env303 envinst303;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1123 envinst1123;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1306 envinst1306;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1321 envinst1321;
    ;
    ;
    ;
    ;
};

enum PastePos_1358 {
    PastePos_1358_PasteBefore,
    PastePos_1358_PasteAfter,
};

static  struct Cursor_804   lam1025 (   struct env1025 env ,    struct Cursor_804  s2709 ) {
    return ( (  max808 ) ( (  s2709 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1028 (   struct env1028 env ,    struct Cursor_804  s2711 ) {
    return ( (  min803 ) ( (  s2711 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1019 (   struct env1019 env ,    struct Cursor_804  s2721 ) {
    return ( (  max808 ) ( (  s2721 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1022 (   struct env1022 env ,    struct Cursor_804  s2724 ) {
    return ( (  min803 ) ( (  s2724 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1357 (   struct env1357 env ,    struct Editor_1011 *  ed2700 ,    enum PastePos_1358  pastepos2702 ,    struct Dims_1322  dims2704 ) {
    if ( ( ! ( (  is_dash_just1006 ) ( ( ( * (  ed2700 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_131  cp2705 = ( (  or_dash_fail997 ) ( ( ( * (  ed2700 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    bool  does_dash_it_dash_end_dash_in_dash_newline2706 = (  eq48 ( (  elem_dash_get1065 ( ( (  cp2705 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  cp2705 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline2706 ) ) {
        struct env1025 envinst1025 = {
            .ed2700 =  ed2700 ,
        };
        struct env1028 envinst1028 = {
            .ed2700 =  ed2700 ,
        };
        int32_t  from_dash_y2712 = ( {  enum PastePos_1358  dref2707 = (  pastepos2702 ) ;  dref2707 == PastePos_1358_PasteAfter ? (  op_dash_add82 ( ( ( (  maybe1024 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1025){ .fun = lam1025, .env = envinst1025 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe1027 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1028){ .fun = lam1028, .env = envinst1028 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Zip_372  temp1359 =  into_dash_iter371 ( ( (  zip482 ) ( ( (  lines1091 ) ( (  cp2705 ) ) ) ,  ( (  from369 ) ( (  from_dash_y2712 ) ) ) ) ) );
        while (true) {
            struct Maybe_422  __cond1360 =  next421 (&temp1359);
            if (  __cond1360 .tag == 0 ) {
                break;
            }
            struct Tuple2_423  dref2713 =  __cond1360 .stuff .Maybe_422_Just_s .field0;
            struct funenv1306  temp1361 = ( (struct funenv1306){ .fun = insert_dash_row1306, .env =  env.envinst1306  } );
            struct List_3 *  row2716 = ( temp1361.fun ( temp1361.env ,  (  ed2700 ) ,  ( dref2713 .field1 ) ) );
            struct funenv303  temp1362 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
            ( temp1362.fun ( temp1362.env ,  (  row2716 ) ,  ( dref2713 .field0 ) ) );
            struct funenv1321  temp1363 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
            ( temp1363.fun ( temp1363.env ,  (  ed2700 ) ,  ( (  size_dash_i32270 ) ( ( ( ( dref2713 .field0 ) .f_contents ) .f_count ) ) ) ,  ( dref2713 .field1 ) ,  (  dims2704 ) ) );
        }
        (*  ed2700 ) .f_selected = ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y2712 ) } ) ) );
        (*  ed2700 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    } else {
        size_t  temp1364;
        size_t  from_dash_x2717 = (  temp1364 );
        int32_t  temp1365;
        int32_t  from_dash_y2718 = (  temp1365 );
        enum PastePos_1358  dref2719 = (  pastepos2702 );
        switch (  dref2719 ) {
            case PastePos_1358_PasteAfter : {
                struct env1019 envinst1019 = {
                    .ed2700 =  ed2700 ,
                };
                struct Cursor_804  from_dash_cur2722 = ( (  maybe1018 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1019){ .fun = lam1019, .env = envinst1019 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) );
                from_dash_x2717 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( ( (  from_dash_cur2722 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y2718 = ( (  from_dash_cur2722 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1340 ) ( (  ed2700 ) ,  ( (  from_dash_cur2722 ) .f_x ) ,  ( (  from_dash_cur2722 ) .f_y ) ) ) ) {
                    if ( (  cmp9 ( ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , ( (  num_dash_rows1305 ) ( (  ed2700 ) ) ) ) != 0 ) ) {
                        struct funenv566  temp1366 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
                        ( temp1366.fun ( temp1366.env ,  ( & ( ( * (  ed2700 ) ) .f_current_dash_file ) ) ,  ( (  mk1105 ) ( ( ( * (  ed2700 ) ) .f_al ) ) ) ) );
                    }
                    from_dash_y2718 = (  op_dash_add82 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x2717 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1358_PasteBefore : {
                struct env1022 envinst1022 = {
                    .ed2700 =  ed2700 ,
                };
                struct Cursor_804  from_dash_cur2725 = ( (  maybe1021 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1022){ .fun = lam1022, .env = envinst1022 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) );
                from_dash_x2717 = ( (  i32_dash_size268 ) ( ( (  from_dash_cur2725 ) .f_x ) ) );
                from_dash_y2718 = ( (  from_dash_cur2725 ) .f_y );
                break;
            }
        }
        struct List_3 *  cur_dash_line2726 = ( (  get_dash_row1302 ) ( (  ed2700 ) ,  (  from_dash_y2718 ) ) );
        struct Slice_5  rest_dash_of_dash_line2727 = ( (  from1056 ) ( ( (  to_dash_slice1135 ) ( ( * (  cur_dash_line2726 ) ) ) ) ,  (  from_dash_x2717 ) ) );
        struct Slice_5  rest2728 = ( (  allocate1077 ) ( ( ( * (  ed2700 ) ) .f_al ) ,  ( (  rest_dash_of_dash_line2727 ) .f_count ) ) );
        ( (  copy_dash_to1060 ) ( (  rest_dash_of_dash_line2727 ) ,  (  rest2728 ) ) );
        ( (  trim1129 ) ( (  cur_dash_line2726 ) ,  (  from_dash_x2717 ) ) );
        struct LineIter_300  lines2729 = ( (  lines1091 ) ( (  cp2705 ) ) );
        struct funenv303  temp1367 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
        ( temp1367.fun ( temp1367.env ,  (  cur_dash_line2726 ) ,  ( (  or_dash_fail997 ) ( ( (  head786 ) ( (  lines2729 ) ) ) ,  ( "clipboard cannot be empty" ) ) ) ) );
        struct List_3 *  last_dash_line2730 = (  cur_dash_line2726 );
        int32_t  to_dash_y2731 = (  from_dash_y2718 );
        struct Zip_374  temp1368 =  into_dash_iter373 ( ( (  zip483 ) ( ( (  drop362 ) ( (  lines2729 ) ,  (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  from369 ) ( (  op_dash_add82 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_422  __cond1369 =  next424 (&temp1368);
            if (  __cond1369 .tag == 0 ) {
                break;
            }
            struct Tuple2_423  dref2732 =  __cond1369 .stuff .Maybe_422_Just_s .field0;
            struct funenv1306  temp1370 = ( (struct funenv1306){ .fun = insert_dash_row1306, .env =  env.envinst1306  } );
            last_dash_line2730 = ( temp1370.fun ( temp1370.env ,  (  ed2700 ) ,  ( dref2732 .field1 ) ) );
            to_dash_y2731 = ( dref2732 .field1 );
            struct funenv303  temp1371 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
            ( temp1371.fun ( temp1371.env ,  (  last_dash_line2730 ) ,  ( dref2732 .field0 ) ) );
        }
        int32_t  to_dash_x2735 = ( (  size_dash_i32270 ) ( ( (  size1138 ) ( (  last_dash_line2730 ) ) ) ) );
        struct funenv1123  temp1372 = ( (struct funenv1123){ .fun = add_dash_all1123, .env =  env.envinst1123  } );
        ( temp1372.fun ( temp1372.env ,  (  last_dash_line2730 ) ,  (  rest2728 ) ) );
        ( (  free1080 ) ( ( ( * (  ed2700 ) ) .f_al ) ,  (  rest2728 ) ) );
        ( (  assert990 ) ( (  cmp75 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "since clipboard is nonempty, this should also be nonempty" ) ) );
        if ( (  cmp805 ( ( ( * (  ed2700 ) ) .f_cursor ) , ( (  or_dash_else1000 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) ) != 0 ) ) {
            struct funenv1321  temp1373 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
            ( temp1373.fun ( temp1373.env ,  (  ed2700 ) ,  (  op_dash_sub83 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  to_dash_y2731 ) ,  (  dims2704 ) ) );
            (*  ed2700 ) .f_selected = ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( (  from_dash_x2717 ) ) ) , .f_y = (  from_dash_y2718 ) } ) ) );
        } else {
            struct funenv1321  temp1374 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
            ( temp1374.fun ( temp1374.env ,  (  ed2700 ) ,  ( (  size_dash_i32270 ) ( (  from_dash_x2717 ) ) ) ,  (  from_dash_y2718 ) ,  (  dims2704 ) ) );
            (*  ed2700 ) .f_selected = ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = (  op_dash_sub83 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  to_dash_y2731 ) } ) ) );
        }
        (*  ed2700 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    }
    return ( Unit_13_Unit );
}

struct funenv1308 {
    enum Unit_13  (*fun) (  struct env1308  ,    struct Editor_1011 *  ,    int32_t  );
    struct env1308 env;
};

struct funenv1343 {
    enum Unit_13  (*fun) (  struct env1343  ,    struct Editor_1011 *  );
    struct env1343 env;
};

struct funenv1125 {
    enum Unit_13  (*fun) (  struct env1125  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1125 env;
};

struct env1375 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1308 envinst1308;
    struct env1117 envinst1117;
    struct env1343 envinst1343;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1321 envinst1321;
    struct env1125 envinst1125;
    struct env1123 envinst1123;
    ;
    ;
};

struct anon_1383 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1375 (   struct env1375 env ,    struct Editor_1011 *  ed2738 ,    struct Dims_1322  dims2740 ) {
    struct funenv1343  temp1376 = ( (struct funenv1343){ .fun = copy_dash_selection1343, .env =  env.envinst1343  } );
    ( temp1376.fun ( temp1376.env ,  (  ed2738 ) ) );
    struct Maybe_1001  dref2741 = ( ( * (  ed2738 ) ) .f_selected );
    if ( dref2741.tag == Maybe_1001_None_t ) {
        struct List_3 *  row2742 = ( (  cursor_dash_row1303 ) ( (  ed2738 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2742 ) ) .f_count ) ) == 0 ) ) {
            struct funenv1117  temp1377 = ( (struct funenv1117){ .fun = remove1117, .env =  env.envinst1117  } );
            ( temp1377.fun ( temp1377.env ,  ( (  cursor_dash_row1303 ) ( (  ed2738 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1341 ) ( (  ed2738 ) ) ) ) {
                if ( (  cmp75 ( (  op_dash_add82 ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1305 ) ( (  ed2738 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2743 = ( (  cursor_dash_row1303 ) ( (  ed2738 ) ) );
                    int32_t  next_dash_row_dash_id2744 = (  op_dash_add82 ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2745 = ( (  get_dash_row1302 ) ( (  ed2738 ) ,  (  next_dash_row_dash_id2744 ) ) );
                    struct funenv1125  temp1378 = ( (struct funenv1125){ .fun = add_dash_all1125, .env =  env.envinst1125  } );
                    ( temp1378.fun ( temp1378.env ,  (  cur_dash_row2743 ) ,  (  next_dash_row2745 ) ) );
                    struct funenv1308  temp1379 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
                    ( temp1379.fun ( temp1379.env ,  (  ed2738 ) ,  (  next_dash_row_dash_id2744 ) ) );
                }
            }
        }
    }
    else if ( dref2741.tag == Maybe_1001_Just_t ) {
        struct Cursor_804  cfrom2747 = ( (  min803 ) ( ( dref2741 .stuff .Maybe_1001_Just_s .field0 ) ,  ( ( * (  ed2738 ) ) .f_cursor ) ) );
        struct Cursor_804  cto2748 = ( (  max808 ) ( ( dref2741 .stuff .Maybe_1001_Just_s .field0 ) ,  ( ( * (  ed2738 ) ) .f_cursor ) ) );
        struct RangeIter_367  temp1380 =  into_dash_iter366 ( ( (  to364 ) ( (  op_dash_add82 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub83 ( ( (  cto2748 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1381 =  next368 (&temp1380);
            if (  __cond1381 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2750 =  __cond1381 .stuff .Maybe_328_Just_s .field0;
            ( (  assert990 ) ( (  cmp75 ( (  row_dash_id2750 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1308  temp1382 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
            ( temp1382.fun ( temp1382.env ,  (  ed2738 ) ,  (  op_dash_add82 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2751 = (  op_dash_sub83 ( ( (  cto2748 ) .f_y ) , ( (  max807 ) ( (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  cto2748 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add82 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert990 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2751 ) , ( (  cfrom2747 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2751 ) , (  op_dash_add82 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1383  cto2752 = ( (struct anon_1383) { .f_x = ( (  cto2748 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2751 ) } );
        bool  should_dash_merge_dash_next_dash_line2753 = ( (  is_dash_at_dash_line_dash_end1340 ) ( (  ed2738 ) ,  ( (  cto2752 ) .f_x ) ,  ( (  cto2752 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2753 ) ) {
            struct List_3 *  first_dash_row2754 = ( (  get_dash_row1302 ) ( (  ed2738 ) ,  ( (  cfrom2747 ) .f_y ) ) );
            ( (  trim1129 ) ( (  first_dash_row2754 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
            bool  on_dash_last_dash_row2755 = (  cmp75 ( (  op_dash_add82 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1305 ) ( (  ed2738 ) ) ) ) ) ) != 0 );
            if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                struct funenv1125  temp1384 = ( (struct funenv1125){ .fun = add_dash_all1125, .env =  env.envinst1125  } );
                ( temp1384.fun ( temp1384.env ,  (  first_dash_row2754 ) ,  ( (  get_dash_row1302 ) ( (  ed2738 ) ,  (  op_dash_add82 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            }
            if ( (  eq41 ( ( (  cto2752 ) .f_y ) , ( (  cfrom2747 ) .f_y ) ) ) ) {
                if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                    struct funenv1308  temp1385 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
                    ( temp1385.fun ( temp1385.env ,  (  ed2738 ) ,  (  op_dash_add82 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                    struct funenv1308  temp1386 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
                    ( temp1386.fun ( temp1386.env ,  (  ed2738 ) ,  (  op_dash_add82 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
                struct funenv1308  temp1387 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
                ( temp1387.fun ( temp1387.env ,  (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2756 = ( (  get_dash_row1302 ) ( (  ed2738 ) ,  ( (  cfrom2747 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2752 ) .f_y ) , ( (  cfrom2747 ) .f_y ) ) ) ) {
                struct RangeIter_367  temp1388 =  into_dash_iter366 ( ( (  to364 ) ( ( (  cfrom2747 ) .f_x ) ,  ( (  min806 ) ( ( (  cto2752 ) .f_x ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  size1138 ) ( (  first_dash_row2756 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_328  __cond1389 =  next368 (&temp1388);
                    if (  __cond1389 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2758 =  __cond1389 .stuff .Maybe_328_Just_s .field0;
                    struct funenv1117  temp1390 = ( (struct funenv1117){ .fun = remove1117, .env =  env.envinst1117  } );
                    ( temp1390.fun ( temp1390.env ,  (  first_dash_row2756 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim1129 ) ( (  first_dash_row2756 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
                struct funenv1123  temp1391 = ( (struct funenv1123){ .fun = add_dash_all1123, .env =  env.envinst1123  } );
                ( temp1391.fun ( temp1391.env ,  (  first_dash_row2756 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1135 ) ( ( * ( (  get_dash_row1302 ) ( (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint1140 ) ( (  op_dash_sub83 ( ( (  cto2752 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1308  temp1392 = ( (struct funenv1308){ .fun = remove_dash_row1308, .env =  env.envinst1308  } );
                ( temp1392.fun ( temp1392.env ,  (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) );
            }
        }
        (*  ed2738 ) .f_selected = ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } );
        (*  ed2738 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
        struct funenv1321  temp1393 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  env.envinst1321  } );
        ( temp1393.fun ( temp1393.env ,  (  ed2738 ) ,  ( (  cfrom2747 ) .f_x ) ,  ( (  cfrom2747 ) .f_y ) ,  (  dims2740 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1127 {
    enum Unit_13  (*fun) (  struct env1127  ,    struct List_3 *  ,    struct TakeWhile_506  );
    struct env1127 env;
};

struct env1394 {
    ;
    ;
    ;
    ;
    struct env1113 envinst1113;
    ;
    ;
    ;
    struct env1127 envinst1127;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1394 (   struct env1394 env ,    struct Editor_1011 *  ed2761 ,    int32_t  y2763 ,    enum CAllocator_4  al2765 ) {
    struct List_3  temp1395 = ( (  mk1105 ) ( (  al2765 ) ) );
    struct List_3 *  nurow2766 = ( &temp1395 );
    struct TakeWhile_506  rowws2767 = ( (  indent_dash_on_dash_row1304 ) ( (  ed2761 ) ,  ( ( ( * (  ed2761 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2768 = ( (  size_dash_i32270 ) ( ( (  count759 ) ( (  rowws2767 ) ) ) ) );
    struct funenv1127  temp1396 = ( (struct funenv1127){ .fun = add_dash_all1127, .env =  env.envinst1127  } );
    ( temp1396.fun ( temp1396.env ,  (  nurow2766 ) ,  (  rowws2767 ) ) );
    struct funenv1113  temp1397 = ( (struct funenv1113){ .fun = insert1113, .env =  env.envinst1113  } );
    ( temp1397.fun ( temp1397.env ,  ( & ( ( * (  ed2761 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2763 ) ) ) ,  ( * (  nurow2766 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1398 (    struct Editor_1011 *  ed2771 ,    struct Cursor_804  c2773 ) {
    return ( {  struct Maybe_1001  dref2774 = ( ( * (  ed2771 ) ) .f_selected ) ; dref2774.tag == Maybe_1001_Just_t ? ( (  between809 ) ( (  c2773 ) ,  ( ( * (  ed2771 ) ) .f_cursor ) ,  ( dref2774 .stuff .Maybe_1001_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1399 (    char  c2778 ) {
    return ( (  is_dash_not_dash_whitespace1090 ) ( (  c2778 ) ) );
}

struct funenv1319 {
    enum Unit_13  (*fun) (  struct env1319  ,    struct Editor_1011 *  ,    const char*  );
    struct env1319 env;
};

struct env1400 {
    ;
    ;
    ;
    ;
    struct env1319 envinst1319;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Maybe_1001   find_dash_next_dash_occurence1400 (   struct env1400 env ,    struct Editor_1011 *  ed2784 ,    struct Slice_5  needle2786 ) {
    struct Cursor_804  from2787 = ( (  max808 ) ( ( ( * (  ed2784 ) ) .f_cursor ) ,  ( (  or_dash_else1000 ) ( ( ( * (  ed2784 ) ) .f_selected ) ,  ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline2788 = ( (  to_dash_slice1135 ) ( ( * ( (  get_dash_row1302 ) ( (  ed2784 ) ,  ( (  from2787 ) .f_y ) ) ) ) ) );
    struct Maybe_900  dref2789 = ( (  find_dash_slice1069 ) ( ( (  subslice292 ) ( (  curline2788 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  from2787 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline2788 ) .f_count ) ) ) ,  (  needle2786 ) ) );
    if ( dref2789.tag == Maybe_900_Just_t ) {
        return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = (  op_dash_add82 ( (  op_dash_add82 ( ( (  from2787 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( dref2789 .stuff .Maybe_900_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from2787 ) .f_y ) } ) ) );
    }
    else if ( dref2789.tag == Maybe_900_None_t ) {
        struct Zip_340  temp1401 =  into_dash_iter359 ( ( (  zip478 ) ( ( (  from1057 ) ( ( (  to_dash_slice1136 ) ( ( ( * (  ed2784 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  from2787 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from369 ) ( (  op_dash_add82 ( ( (  from2787 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1402 =  next350 (&temp1401);
            if (  __cond1402 .tag == 0 ) {
                break;
            }
            struct Tuple2_349  dref2791 =  __cond1402 .stuff .Maybe_348_Just_s .field0;
            struct Maybe_900  dref2794 = ( (  find_dash_slice1069 ) ( ( (  to_dash_slice1135 ) ( ( dref2791 .field0 ) ) ) ,  (  needle2786 ) ) );
            if ( dref2794.tag == Maybe_900_None_t ) {
            }
            else if ( dref2794.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2794 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( dref2791 .field1 ) } ) ) );
            }
        }
        struct funenv1319  temp1403 = ( (struct funenv1319){ .fun = send_dash_msg1319, .env =  env.envinst1319  } );
        ( temp1403.fun ( temp1403.env ,  (  ed2784 ) ,  ( "Wrapped!" ) ) );
        struct Zip_340  temp1404 =  into_dash_iter359 ( ( (  zip478 ) ( ( (  subslice283 ) ( ( (  to_dash_slice1136 ) ( ( ( * (  ed2784 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2787 ) .f_y ) ) ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1405 =  next350 (&temp1404);
            if (  __cond1405 .tag == 0 ) {
                break;
            }
            struct Tuple2_349  dref2796 =  __cond1405 .stuff .Maybe_348_Just_s .field0;
            struct Maybe_900  dref2799 = ( (  find_dash_slice1069 ) ( ( (  to_dash_slice1135 ) ( ( dref2796 .field0 ) ) ) ,  (  needle2786 ) ) );
            if ( dref2799.tag == Maybe_900_None_t ) {
            }
            else if ( dref2799.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2799 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( dref2796 .field1 ) } ) ) );
            }
        }
        struct Maybe_900  dref2801 = ( (  find_dash_slice1069 ) ( (  curline2788 ) ,  (  needle2786 ) ) );
        if ( dref2801.tag == Maybe_900_None_t ) {
        }
        else if ( dref2801.tag == Maybe_900_Just_t ) {
            return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2801 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2787 ) .f_y ) } ) ) );
        }
        struct funenv1319  temp1406 = ( (struct funenv1319){ .fun = send_dash_msg1319, .env =  env.envinst1319  } );
        ( temp1406.fun ( temp1406.env ,  (  ed2784 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } );
    }
}

struct env1407 {
    ;
    ;
    struct env1319 envinst1319;
    ;
    ;
    ;
    ;
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

static  struct Cursor_804   lam1031 (   struct env1031 env ,    struct Cursor_804  s2809 ) {
    return ( (  min803 ) ( ( ( * ( env.ed2805 ) ) .f_cursor ) ,  (  s2809 ) ) );
}

static  struct Maybe_1001   find_dash_prev_dash_occurence1407 (   struct env1407 env ,    struct Editor_1011 *  ed2805 ,    struct Slice_5  needle2807 ) {
    struct env1031 envinst1031 = {
        .ed2805 =  ed2805 ,
    };
    struct Cursor_804  from2810 = ( (  maybe1030 ) ( ( ( * (  ed2805 ) ) .f_selected ) ,  ( (struct funenv1031){ .fun = lam1031, .env = envinst1031 } ) ,  ( ( * (  ed2805 ) ) .f_cursor ) ) );
    struct Slice_5  curline2811 = ( (  to_dash_slice1135 ) ( ( * ( (  get_dash_row1302 ) ( (  ed2805 ) ,  ( (  from2810 ) .f_y ) ) ) ) ) );
    struct Maybe_900  dref2812 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1072 ) ( ( (  subslice292 ) ( (  curline2811 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2810 ) .f_x ) ) ) ) ) ,  (  needle2807 ) ) );
    if ( dref2812.tag == Maybe_900_Just_t ) {
        return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2812 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2810 ) .f_y ) } ) ) );
    }
    else if ( dref2812.tag == Maybe_900_None_t ) {
        int32_t  from_dash_y2814 = (  op_dash_sub83 ( ( (  from2810 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp75 ( (  from_dash_y2814 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row2815 = ( (  get_dash_row1302 ) ( (  ed2805 ) ,  (  from_dash_y2814 ) ) );
            struct Maybe_900  dref2816 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1072 ) ( ( (  to_dash_slice1135 ) ( ( * (  row2815 ) ) ) ) ,  (  needle2807 ) ) );
            if ( dref2816.tag == Maybe_900_None_t ) {
            }
            else if ( dref2816.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2816 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2814 ) } ) ) );
            }
            from_dash_y2814 = (  op_dash_sub83 ( (  from_dash_y2814 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1319  temp1408 = ( (struct funenv1319){ .fun = send_dash_msg1319, .env =  env.envinst1319  } );
        ( temp1408.fun ( temp1408.env ,  (  ed2805 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y2818 = (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  num_dash_rows1305 ) ( (  ed2805 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp75 ( (  from_dash_y2818 ) , ( (  from2810 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row2819 = ( (  get_dash_row1302 ) ( (  ed2805 ) ,  (  from_dash_y2818 ) ) );
            struct Maybe_900  dref2820 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1072 ) ( ( (  to_dash_slice1135 ) ( ( * (  row2819 ) ) ) ) ,  (  needle2807 ) ) );
            if ( dref2820.tag == Maybe_900_None_t ) {
            }
            else if ( dref2820.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2820 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2818 ) } ) ) );
            }
            from_dash_y2818 = (  op_dash_sub83 ( (  from_dash_y2818 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_900  dref2822 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1072 ) ( (  curline2811 ) ,  (  needle2807 ) ) );
        if ( dref2822.tag == Maybe_900_None_t ) {
        }
        else if ( dref2822.tag == Maybe_900_Just_t ) {
            return ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( dref2822 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2810 ) .f_y ) } ) ) );
        }
        struct funenv1319  temp1409 = ( (struct funenv1319){ .fun = send_dash_msg1319, .env =  env.envinst1319  } );
        ( temp1409.fun ( temp1409.env ,  (  ed2805 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } );
    }
}

struct funenv1132 {
    struct List_280  (*fun) (  struct env1132  ,    struct Map_299  ,    enum CAllocator_4  );
    struct env1132 env;
};

struct env1410 {
    struct env302 envinst302;
    struct env1132 envinst1132;
    struct env566 envinst566;
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

static  struct List_3   lam301 (   struct env301 env ,    struct DynStr_131  line2860 ) {
    struct funenv302  temp1413 = ( (struct funenv302){ .fun = to_dash_list302, .env =  env.envinst302  } );
    return ( temp1413.fun ( temp1413.env ,  (  line2860 ) ,  ( env.al2829 ) ) );
}

static  struct List_280   load_dash_file1410 (   struct env1410 env ,    const char*  filename2827 ,    enum CAllocator_4  al2829 ) {
    struct funenv1132  temp1412 = ( (struct funenv1132){ .fun = to_dash_list1132, .env =  env.envinst1132  } );
    struct env301 envinst301 = {
        .envinst302 = env.envinst302 ,
        .al2829 =  al2829 ,
    };
    struct List_280  temp1411 = ( temp1412.fun ( temp1412.env ,  ( (  map332 ) ( ( (  lines1091 ) ( ( (  read_dash_contents1292 ) ( (  filename2827 ) ,  (  al2829 ) ) ) ) ) ,  ( (struct funenv301){ .fun = lam301, .env = envinst301 } ) ) ) ,  (  al2829 ) ) );
    struct List_280 *  file2861 = ( &temp1411 );
    if ( ( (  null792 ) ( (  file2861 ) ) ) ) {
        struct funenv566  temp1414 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
        ( temp1414.fun ( temp1414.env ,  (  file2861 ) ,  ( (  mk1105 ) ( (  al2829 ) ) ) ) );
    }
    return ( * (  file2861 ) );
}

struct env1415 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al2824;
    ;
    ;
    struct env623 envinst623;
    ;
};

static  enum Unit_13   lam622 (   struct env622 env ,    char  c2871 ) {
    struct funenv623  temp1419 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
    return ( temp1419.fun ( temp1419.env ,  ( env.sb2867 ) ,  (  c2871 ) ) );
}

static  enum Unit_13   save_dash_file1415 (   struct env1415 env ,    struct List_280  cf2864 ,    const char*  filename2866 ) {
    struct StrBuilder_572  temp1416 = ( (  mk1181 ) ( ( env.al2824 ) ) );
    struct StrBuilder_572 *  sb2867 = ( &temp1416 );
    struct SliceIter_278  temp1417 =  into_dash_iter281 ( (  cf2864 ) );
    while (true) {
        struct Maybe_314  __cond1418 =  next351 (&temp1417);
        if (  __cond1418 .tag == 0 ) {
            break;
        }
        struct List_3  row2869 =  __cond1418 .stuff .Maybe_314_Just_s .field0;
        struct env622 envinst622 = {
            .sb2867 =  sb2867 ,
            .envinst623 = env.envinst623 ,
        };
        ( (  for_dash_each621 ) ( (  row2869 ) ,  ( (struct funenv622){ .fun = lam622, .env = envinst622 } ) ) );
        struct funenv623  temp1420 = ( (struct funenv623){ .fun = write_dash_char623, .env =  env.envinst623  } );
        ( temp1420.fun ( temp1420.env ,  (  sb2867 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1294 ) ( (  filename2866 ) ,  ( (  as_dash_str829 ) ( (  sb2867 ) ) ) ) );
    ( (  free1183 ) ( (  sb2867 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1421 (    struct List_280  cf2874 ) {
    ( (  for_dash_each634 ) ( ( (  addresses1137 ) ( (  cf2874 ) ) ) ,  (  free1106 ) ) );
    ( (  free1107 ) ( ( & (  cf2874 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1422 {
    ;
    ;
    int32_t  pad2875;
    ;
    ;
};

struct anon_1423 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1423   left_dash_offset1422 (   struct env1422 env ,    struct Editor_1011 *  ed2878 ) {
    int32_t  max_dash_digits2879 = ( (  max807 ) ( ( (  count_dash_digits813 ) ( ( ( ( * (  ed2878 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1423) { .f_max_dash_digits = (  max_dash_digits2879 ) , .f_total_dash_offset = (  op_dash_add82 ( (  op_dash_add82 ( ( env.pad2875 ) , (  max_dash_digits2879 ) ) ) , ( env.pad2875 ) ) ) } );
}

struct funenv1422 {
    struct anon_1423  (*fun) (  struct env1422  ,    struct Editor_1011 *  );
    struct env1422 env;
};

struct env1424 {
    ;
    struct env1422 envinst1422;
    ;
};

static  struct Dims_1322   screen_dash_dims1424 (   struct env1424 env ,    struct Editor_1011 *  ed2882 ,    struct Tui_647 *  tui2884 ) {
    struct funenv1422  temp1425 = ( (struct funenv1422){ .fun = left_dash_offset1422, .env =  env.envinst1422  } );
    return ( (struct Dims_1322) { .f_cols = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * (  tui2884 ) ) .f_width ) ) ) , ( ( temp1425.fun ( temp1425.env ,  (  ed2882 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32274 ) ( ( ( * (  tui2884 ) ) .f_height ) ) ) } );
}

struct env1426 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1312 envinst1312;
    ;
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
    int32_t  pad2875;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1422 envinst1422;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1426 (   struct env1426 env ,    struct Screen_646 *  screen2887 ,    struct Editor_1011 *  ed2889 ) {
    int32_t  w2890 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2887 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2891 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2887 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2892 = ( ( * (  ed2889 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2893 = ( ( * (  ed2889 ) ) .f_screen_dash_left );
    int32_t  x2894 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2895 = (  from_dash_integral29 ( 0 ) );
    ( (  assert990 ) ( (  cmp9 ( ( ( ( * (  ed2889 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1422  temp1427 = ( (struct funenv1422){ .fun = left_dash_offset1422, .env =  env.envinst1422  } );
    struct anon_1423  offstuff2896 = ( temp1427.fun ( temp1427.env ,  (  ed2889 ) ) );
    int32_t  max_dash_digits2897 = ( (  offstuff2896 ) .f_max_dash_digits );
    int32_t  left_dash_off2898 = ( (  offstuff2896 ) .f_total_dash_offset );
    struct Drop_339  temp1428 =  into_dash_iter338 ( ( (  drop358 ) ( ( (  zip480 ) ( ( ( * (  ed2889 ) ) .f_current_dash_file ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_y2892 ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1429 =  next347 (&temp1428);
        if (  __cond1429 .tag == 0 ) {
            break;
        }
        struct Tuple2_349  dref2899 =  __cond1429 .stuff .Maybe_348_Just_s .field0;
        int32_t  row_dash_num2902 = (  op_dash_add82 ( ( dref2899 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_367  temp1430 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2875 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1431 =  next368 (&temp1430);
            if (  __cond1431 .tag == 0 ) {
                break;
            }
            int32_t  xx2904 =  __cond1431 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1268 ) ( (  screen2887 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2904 ) ,  (  y2895 ) ) );
        }
        ( (  draw_dash_str_dash_right1280 ) ( (  screen2887 ) ,  (  row_dash_num2902 ) ,  (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2887 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2897 ) ) ) , ( env.pad2875 ) ) ) ,  (  y2895 ) ) );
        struct RangeIter_367  temp1432 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2875 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1433 =  next368 (&temp1432);
            if (  __cond1433 .tag == 0 ) {
                break;
            }
            int32_t  xx2906 =  __cond1433 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1268 ) ( (  screen2887 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  xx2906 ) , ( env.pad2875 ) ) ) , (  max_dash_digits2897 ) ) ) ,  (  y2895 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2889 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( (  row_dash_num2902 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_367  temp1434 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  max_dash_digits2897 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_328  __cond1435 =  next368 (&temp1434);
                if (  __cond1435 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2908 =  __cond1435 .stuff .Maybe_328_Just_s .field0;
                struct Cell_53 *  cp2909 = ( (  or_dash_fail998 ) ( ( (  get_dash_cell_dash_ptr1262 ) ( (  screen2887 ) ,  (  op_dash_add82 ( (  xxx2908 ) , ( env.pad2875 ) ) ) ,  (  y2895 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2909 ) .f_fg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp2909 ) .f_bg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_343  temp1436 =  into_dash_iter342 ( ( (  drop360 ) ( ( (  zip481 ) ( ( dref2899 .field0 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_x2893 ) ) ) ) ) );
        while (true) {
            struct Maybe_354  __cond1437 =  next353 (&temp1436);
            if (  __cond1437 .tag == 0 ) {
                break;
            }
            struct Tuple2_355  dref2910 =  __cond1437 .stuff .Maybe_354_Just_s .field0;
            bool  in_dash_selection2913 = ( (  is_dash_in_dash_selection1398 ) ( (  ed2889 ) ,  ( (struct Cursor_804) { .f_x = ( dref2910 .field1 ) , .f_y = ( dref2899 .field1 ) } ) ) );
            if ( (  in_dash_selection2913 ) ) {
                ( (  set_dash_screen_dash_colors1261 ) ( (  screen2887 ) ,  ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq48 ( ( dref2910 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1268 ) ( (  screen2887 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2898 ) , (  x2894 ) ) ) ,  (  y2895 ) ) );
                x2894 = (  op_dash_add82 ( (  x2894 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1268 ) ( (  screen2887 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2898 ) , (  x2894 ) ) ) ,  (  y2895 ) ) );
            } else {
                ( (  put_dash_char1268 ) ( (  screen2887 ) ,  ( dref2910 .field0 ) ,  (  op_dash_add82 ( (  left_dash_off2898 ) , (  x2894 ) ) ) ,  (  y2895 ) ) );
            }
            if ( (  in_dash_selection2913 ) ) {
                ( (  set_dash_screen_dash_colors1261 ) ( (  screen2887 ) ,  ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x2894 = (  op_dash_add82 ( (  x2894 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp75 ( (  x2894 ) , (  w2890 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp75 ( (  x2894 ) , (  w2890 ) ) == 0 ) && ( (  is_dash_in_dash_selection1398 ) ( (  ed2889 ) ,  ( (struct Cursor_804) { .f_x = ( (  size_dash_i32270 ) ( ( ( dref2899 .field0 ) .f_count ) ) ) , .f_y = ( dref2899 .field1 ) } ) ) ) ) ) {
            struct Cell_53 *  cell2914 = ( (  or_dash_fail998 ) ( ( (  get_dash_cell_dash_ptr1262 ) ( (  screen2887 ) ,  (  op_dash_add82 ( (  left_dash_off2898 ) , (  x2894 ) ) ) ,  (  y2895 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2914 ) .f_fg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell2914 ) .f_bg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y2895 = (  op_dash_add82 ( (  y2895 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2894 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp75 ( (  y2895 ) , (  h2891 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_804  cur2915 = ( ( * (  ed2889 ) ) .f_cursor );
    struct funenv1312  temp1438 = ( (struct funenv1312){ .fun = x_dash_to_dash_visual_dash_x1312, .env =  env.envinst1312  } );
    int32_t  vx2916 = ( (  from_dash_visual1299 ) ( ( temp1438.fun ( temp1438.env ,  (  ed2889 ) ,  ( (  cur2915 ) .f_x ) ,  ( (  cur2915 ) .f_y ) ) ) ) );
    int32_t  len2917 = ( (  maybe1042 ) ( ( (  try_dash_get1100 ) ( ( (  cursor_dash_row1303 ) ( (  ed2889 ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2915 ) .f_x ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_367  temp1439 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  len2917 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1440 =  next368 (&temp1439);
        if (  __cond1440 .tag == 0 ) {
            break;
        }
        int32_t  x2919 =  __cond1440 .stuff .Maybe_328_Just_s .field0;
        struct Cell_53 *  cursor_dash_cell2920 = ( (  or_dash_fail998 ) ( ( (  get_dash_cell_dash_ptr1262 ) ( (  screen2887 ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  op_dash_sub83 ( (  left_dash_off2898 ) , ( ( * (  ed2889 ) ) .f_screen_dash_left ) ) ) , (  vx2916 ) ) ) , (  x2919 ) ) ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2889 ) ) .f_cursor ) .f_y ) , (  from_dash_y2892 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2920 ) .f_fg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell2920 ) .f_bg = ( ( * ( ( * (  ed2889 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1441 (    struct Maybe_1008 *  dref2922 ,    struct Screen_646 *  screen2925 ) {
    struct Maybe_1008  dref2926 = ( (* dref2922 ) );
    if ( dref2926.tag == Maybe_1008_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2926.tag == Maybe_1008_Just_t ) {
        struct Duration_1205  diff2928 = ( (  diff1206 ) ( ( (  now1202 ) ( ) ) ,  ( dref2926 .stuff .Maybe_1008_Just_s .field0 ) ) );
        struct Duration_1205  limit2929 = ( (  duration_dash_from_dash_ns1207 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1204 ( (  diff2928 ) , (  limit2929 ) ) == 2 ) ) {
            (* dref2922 ) = ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2930 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2931 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2932 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1208 ) ( (  diff2928 ) ) ) , (  x_dash_fill2930 ) ) ) , ( (  duration_dash_to_dash_ns1208 ) ( (  limit2929 ) ) ) ) ) ) );
        int32_t  y_dash_progress2933 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1208 ) ( (  diff2928 ) ) ) , (  y_dash_fill2931 ) ) ) , ( (  duration_dash_to_dash_ns1208 ) ( (  limit2929 ) ) ) ) ) ) );
        uint32_t  center_dash_x2934 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2935 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1260 ) ( (  screen2925 ) ,  ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) ) );
        int32_t  x_dash_off2936 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  x_dash_fill2930 ) ) ) , (  x_dash_progress2932 ) ) );
        int32_t  y_dash_off2937 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  y_dash_fill2931 ) ) ) , (  y_dash_progress2933 ) ) );
        int32_t  h2938 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2939 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2925 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_367  temp1442 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2938 ) ) ) );
        while (true) {
            struct Maybe_328  __cond1443 =  next368 (&temp1442);
            if (  __cond1443 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2941 =  __cond1443 .stuff .Maybe_328_Just_s .field0;
            struct RangeIter_367  temp1444 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2939 ) ) ) );
            while (true) {
                struct Maybe_328  __cond1445 =  next368 (&temp1444);
                if (  __cond1445 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2943 =  __cond1445 .stuff .Maybe_328_Just_s .field0;
                if ( ( ( ( (  cmp75 ( (  screen_dash_x2943 ) , (  x_dash_off2936 ) ) != 2 ) || (  cmp75 ( (  screen_dash_x2943 ) , (  op_dash_sub83 ( (  w2939 ) , (  x_dash_off2936 ) ) ) ) != 0 ) ) || (  cmp75 ( (  screen_dash_y2941 ) , (  y_dash_off2937 ) ) != 2 ) ) || (  cmp75 ( (  screen_dash_y2941 ) , (  op_dash_sub83 ( (  h2938 ) , (  y_dash_off2937 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1268 ) ( (  screen2925 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2943 ) ,  (  screen_dash_y2941 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1415 {
    enum Unit_13  (*fun) (  struct env1415  ,    struct List_280  ,    const char*  );
    struct env1415 env;
};

struct funenv1410 {
    struct List_280  (*fun) (  struct env1410  ,    const char*  ,    enum CAllocator_4  );
    struct env1410 env;
};

struct funenv1200 {
    const char*  (*fun) (  struct env1200  ,    struct TakeWhile_513  ,    enum CAllocator_4  );
    struct env1200 env;
};

struct funenv1198 {
    const char*  (*fun) (  struct env1198  ,    struct TakeWhile_508  ,    enum CAllocator_4  );
    struct env1198 env;
};

struct env1446 {
    ;
    ;
    struct Theme_1013 *  dark_dash_theme2487;
    ;
    ;
    ;
    ;
    struct env1415 envinst1415;
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
    struct env1410 envinst1410;
    ;
    ;
    ;
    ;
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
    struct env1198 envinst1198;
    ;
    struct Theme_1013 *  light_dash_theme2488;
    ;
    ;
};

static  bool   lam1447 (    char  c2957 ) {
    return ( ! ( (  is_dash_whitespace1089 ) ( (  c2957 ) ) ) );
}

static  bool   lam1451 (    char  c2965 ) {
    return ( ! ( (  is_dash_whitespace1089 ) ( (  c2965 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1446 (   struct env1446 env ,    struct Editor_1011 *  ed2946 ,    struct DynStr_131  s2948 ,    struct Dims_1322  dim2950 ,    enum CAllocator_4  al2952 ) {
    struct DropWhile_511  s2953 = ( (  drop_dash_while536 ) ( (  s2948 ) ,  (  is_dash_whitespace1089 ) ) );
    struct TakeWhile_515  cmd2954 = ( (  take_dash_while533 ) ( (  s2953 ) ,  (  is_dash_not_dash_whitespace1090 ) ) );
    struct DropWhile_509  rest2955 = ( (  drop_dash_while539 ) ( ( (  drop_dash_while538 ) ( (  s2953 ) ,  (  is_dash_not_dash_whitespace1090 ) ) ) ,  (  is_dash_whitespace1089 ) ) );
    if ( ( (  eq966 ) ( (  cmd2954 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_508  filename2958 = ( (  take_dash_while532 ) ( (  rest2955 ) ,  (  lam1447 ) ) );
        const char*  temp1448;
        const char*  alfname2959 = (  temp1448 );
        if ( ( (  null794 ) ( (  filename2958 ) ) ) ) {
            struct Maybe_265  dref2960 = ( ( * (  ed2946 ) ) .f_filename );
            if ( dref2960.tag == Maybe_265_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2960.tag == Maybe_265_Just_t ) {
                alfname2959 = ( dref2960 .stuff .Maybe_265_Just_s .field0 );
            }
        } else {
            struct Maybe_265  dref2962 = ( ( * (  ed2946 ) ) .f_filename );
            if ( dref2962.tag == Maybe_265_None_t ) {
            }
            else if ( dref2962.tag == Maybe_265_Just_t ) {
                ( (  free1081 ) ( (  al2952 ) ,  ( (struct Slice_1082) { .f_ptr = ( (  cast191 ) ( ( dref2962 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1198  temp1449 = ( (struct funenv1198){ .fun = mk_dash_const_dash_str1198, .env =  env.envinst1198  } );
            alfname2959 = ( temp1449.fun ( temp1449.env ,  (  filename2958 ) ,  (  al2952 ) ) );
        }
        struct funenv1415  temp1450 = ( (struct funenv1415){ .fun = save_dash_file1415, .env =  env.envinst1415  } );
        ( temp1450.fun ( temp1450.env ,  ( ( * (  ed2946 ) ) .f_current_dash_file ) ,  (  alfname2959 ) ) );
        (*  ed2946 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2959 ) ) );
    } else {
        if ( ( (  eq966 ) ( (  cmd2954 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2946 ) .f_running = ( false );
        } else {
            if ( ( (  eq966 ) ( (  cmd2954 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_513  filename2966 = ( (  take_dash_while529 ) ( (  rest2955 ) ,  (  lam1451 ) ) );
                struct funenv1200  temp1452 = ( (struct funenv1200){ .fun = mk_dash_const_dash_str1200, .env =  env.envinst1200  } );
                const char*  alfname2967 = ( temp1452.fun ( temp1452.env ,  (  filename2966 ) ,  (  al2952 ) ) );
                struct List_280  og2968 = ( ( * (  ed2946 ) ) .f_current_dash_file );
                struct funenv1410  temp1453 = ( (struct funenv1410){ .fun = load_dash_file1410, .env =  env.envinst1410  } );
                (*  ed2946 ) .f_current_dash_file = ( temp1453.fun ( temp1453.env ,  (  alfname2967 ) ,  (  al2952 ) ) );
                struct Maybe_265  dref2969 = ( ( * (  ed2946 ) ) .f_filename );
                if ( dref2969.tag == Maybe_265_None_t ) {
                }
                else if ( dref2969.tag == Maybe_265_Just_t ) {
                    ( (  free1081 ) ( (  al2952 ) ,  ( (struct Slice_1082) { .f_ptr = ( (  cast191 ) ( ( dref2969 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2946 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2967 ) ) );
                (*  ed2946 ) .f_cursor = ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2946 ) .f_goal_dash_x = ( ( Visual_1012_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2946 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1421 ) ( (  og2968 ) ) );
            } else {
                if ( ( (  eq970 ) ( (  cmd2954 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_526  theme_dash_name2971 = ( (  take_dash_while531 ) ( (  rest2955 ) ,  (  is_dash_not_dash_whitespace1090 ) ) );
                    if ( ( (  eq973 ) ( (  theme_dash_name2971 ) ,  ( "dark" ) ) ) ) {
                        (*  ed2946 ) .f_theme = ( env.dark_dash_theme2487 );
                    } else {
                        if ( ( (  eq973 ) ( (  theme_dash_name2971 ) ,  ( "light" ) ) ) ) {
                            (*  ed2946 ) .f_theme = ( env.light_dash_theme2488 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_725  dref2972 = ( (  parse_dash_int1096 ) ( (  cmd2954 ) ) );
                    if ( dref2972.tag == Maybe_725_Just_t ) {
                        int32_t  newline2974 = ( (  clamp810 ) ( ( (  i64_dash_i32269 ) ( (  op_dash_sub79 ( ( dref2972 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2946 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        struct funenv1327  temp1454 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  env.envinst1327  } );
                        ( temp1454.fun ( temp1454.env ,  (  ed2946 ) ,  (  newline2974 ) ,  (  dim2950 ) ) );
                    }
                    else if ( dref2972.tag == Maybe_725_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1196 {
    const char*  (*fun) (  struct env1196  ,    const char*  ,    enum CAllocator_4  );
    struct env1196 env;
};

struct funenv1219 {
    struct Tui_647  (*fun) (  struct env1219  );
    struct env1219 env;
};

struct funenv1110 {
    enum Unit_13  (*fun) (  struct env1110  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1110 env;
};

struct funenv1424 {
    struct Dims_1322  (*fun) (  struct env1424  ,    struct Editor_1011 *  ,    struct Tui_647 *  );
    struct env1424 env;
};

struct funenv1329 {
    bool  (*fun) (  struct env1329  ,    struct Editor_1011 *  ,    struct Dims_1322  );
    struct env1329 env;
};

struct funenv1333 {
    bool  (*fun) (  struct env1333  ,    struct Editor_1011 *  ,    struct Dims_1322  );
    struct env1333 env;
};

struct funenv1375 {
    enum Unit_13  (*fun) (  struct env1375  ,    struct Editor_1011 *  ,    struct Dims_1322  );
    struct env1375 env;
};

struct funenv1357 {
    enum Unit_13  (*fun) (  struct env1357  ,    struct Editor_1011 *  ,    enum PastePos_1358  ,    struct Dims_1322  );
    struct env1357 env;
};

struct funenv1336 {
    enum Unit_13  (*fun) (  struct env1336  ,    struct Editor_1011 *  ,    struct Dims_1322  );
    struct env1336 env;
};

struct funenv1338 {
    enum Unit_13  (*fun) (  struct env1338  ,    struct Editor_1011 *  ,    struct Dims_1322  );
    struct env1338 env;
};

struct funenv1394 {
    enum Unit_13  (*fun) (  struct env1394  ,    struct Editor_1011 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1394 env;
};

struct funenv1400 {
    struct Maybe_1001  (*fun) (  struct env1400  ,    struct Editor_1011 *  ,    struct Slice_5  );
    struct env1400 env;
};

struct funenv1407 {
    struct Maybe_1001  (*fun) (  struct env1407  ,    struct Editor_1011 *  ,    struct Slice_5  );
    struct env1407 env;
};

static  int32_t   lam1504 (    struct Cursor_804  s3008 ) {
    return ( (  s3008 ) .f_x );
}

static  int32_t   lam1510 (    struct Cursor_804  s3012 ) {
    return ( (  s3012 ) .f_x );
}

static  bool   lam1514 (    char  c3016 ) {
    return ( (  is_dash_word_dash_char1399 ) ( (  c3016 ) ) );
}

static  bool   lam1516 (    char  c3018 ) {
    return ( ! ( (  is_dash_word_dash_char1399 ) ( (  c3018 ) ) ) );
}

static  bool   lam1522 (    char  c3022 ) {
    return ( ! ( (  is_dash_word_dash_char1399 ) ( (  c3022 ) ) ) );
}

static  bool   lam1524 (    char  c3024 ) {
    return ( (  is_dash_word_dash_char1399 ) ( (  c3024 ) ) );
}

static  bool   lam1530 (    char  c3028 ) {
    return ( ! ( (  is_dash_word_dash_char1399 ) ( (  c3028 ) ) ) );
}

static  bool   lam1532 (    char  c3030 ) {
    return ( (  is_dash_word_dash_char1399 ) ( (  c3030 ) ) );
}

static  bool   lam1534 (    char  c3032 ) {
    return ( ! ( (  is_dash_word_dash_char1399 ) ( (  c3032 ) ) ) );
}

struct funenv1178 {
    enum Unit_13  (*fun) (  struct env1178  ,    struct StrBuilder_572 *  );
    struct env1178 env;
};

struct funenv1446 {
    enum Unit_13  (*fun) (  struct env1446  ,    struct Editor_1011 *  ,    struct DynStr_131  ,    struct Dims_1322  ,    enum CAllocator_4  );
    struct env1446 env;
};

struct funenv1257 {
    bool  (*fun) (  struct env1257  ,    struct Screen_646 *  );
    struct env1257 env;
};

struct funenv1426 {
    enum Unit_13  (*fun) (  struct env1426  ,    struct Screen_646 *  ,    struct Editor_1011 *  );
    struct env1426 env;
};

static  struct Maybe_297   lam1010 (   struct env1010 env ,    struct List_3  l3062 ) {
    return ( (  try_dash_get1100 ) ( ( & (  l3062 ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * ( env.ed2980 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_355   lam1563 (    char  c3064 ) {
    return ( ( Tuple2_355_Tuple2 ) ( (  c3064 ) ,  ( (  char_dash_i32976 ) ( (  c3064 ) ) ) ) );
}

static  size_t   lam1565 (    struct DynStr_131  s3070 ) {
    return ( ( (  s3070 ) .f_contents ) .f_count );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1697 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1698 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1699 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env567 envinst567 = {
        .growth_dash_factor1698 =  growth_dash_factor1698 ,
        .starting_dash_size1697 =  starting_dash_size1697 ,
    };
    struct env305 envinst305 = {
        .growth_dash_factor1698 =  growth_dash_factor1698 ,
        .starting_dash_size1697 =  starting_dash_size1697 ,
    };
    struct env566 envinst566 = {
        .envinst567 = envinst567 ,
    };
    struct env304 envinst304 = {
        .envinst305 = envinst305 ,
    };
    struct env1110 envinst1110 = {
        .envinst304 = envinst304 ,
        .envinst305 = envinst305 ,
    };
    struct env1113 envinst1113 = {
        .envinst566 = envinst566 ,
        .envinst567 = envinst567 ,
    };
    struct env1116 envinst1116 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1117 envinst1117 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1118 envinst1118 = {
        .envinst1117 = envinst1117 ,
    };
    struct env303 envinst303 = {
        .envinst304 = envinst304 ,
    };
    struct env1121 envinst1121 = {
        .envinst566 = envinst566 ,
    };
    struct env1123 envinst1123 = {
        .envinst304 = envinst304 ,
    };
    struct env1125 envinst1125 = {
        .envinst304 = envinst304 ,
    };
    struct env1127 envinst1127 = {
        .envinst304 = envinst304 ,
    };
    struct env302 envinst302 = {
        .envinst303 = envinst303 ,
    };
    struct env1132 envinst1132 = {
        .envinst1121 = envinst1121 ,
    };
    struct env1167 envinst1167 = {
        .envinst304 = envinst304 ,
    };
    struct env1169 envinst1169 = {
        .envinst304 = envinst304 ,
    };
    struct env1171 envinst1171 = {
        .envinst304 = envinst304 ,
    };
    struct env1173 envinst1173 = {
        .envinst304 = envinst304 ,
    };
    struct env1175 envinst1175 = {
        .envinst1123 = envinst1123 ,
    };
    struct env623 envinst623 = {
        .envinst304 = envinst304 ,
    };
    struct env1178 envinst1178 = {
        .envinst1118 = envinst1118 ,
    };
    struct env1184 envinst1184 = {
        .envinst1167 = envinst1167 ,
        .envinst623 = envinst623 ,
    };
    struct env1188 envinst1188 = {
        .envinst1171 = envinst1171 ,
        .envinst623 = envinst623 ,
    };
    struct env1192 envinst1192 = {
        .envinst1173 = envinst1173 ,
        .envinst623 = envinst623 ,
    };
    struct env1196 envinst1196 = {
        .envinst1184 = envinst1184 ,
    };
    struct env1198 envinst1198 = {
        .envinst1188 = envinst1188 ,
    };
    struct env1200 envinst1200 = {
        .envinst1192 = envinst1192 ,
    };
    bool  temp1218 = ( false );
    bool *  should_dash_resize2268 = ( &temp1218 );
    struct env1219 envinst1219 = {
        .should_dash_resize2268 =  should_dash_resize2268 ,
    };
    struct env1242 envinst1242 = {
        .should_dash_resize2268 =  should_dash_resize2268 ,
    };
    struct env1257 envinst1257 = {
        .envinst1242 = envinst1242 ,
    };
    int32_t  tab_dash_size2482 = (  from_dash_integral29 ( 2 ) );
    struct env312 envinst312 = {
        .tab_dash_size2482 =  tab_dash_size2482 ,
    };
    struct Theme_1013  temp1296 = ( (struct Theme_1013) { .f_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_Black16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) } );
    struct Theme_1013 *  dark_dash_theme2487 = ( &temp1296 );
    struct Theme_1013  temp1297 = ( (struct Theme_1013) { .f_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) } );
    struct Theme_1013 *  light_dash_theme2488 = ( &temp1297 );
    struct env1306 envinst1306 = {
        .envinst1113 = envinst1113 ,
    };
    struct env1308 envinst1308 = {
        .envinst1116 = envinst1116 ,
    };
    struct env1312 envinst1312 = {
        .envinst312 = envinst312 ,
    };
    struct env1313 envinst1313 = {
        .envinst312 = envinst312 ,
    };
    struct env1319 envinst1319 = {
        .envinst1184 = envinst1184 ,
    };
    struct env1321 envinst1321 = {
        .envinst1313 = envinst1313 ,
        .envinst1312 = envinst1312 ,
    };
    struct env1325 envinst1325 = {
        .envinst1321 = envinst1321 ,
    };
    struct env1327 envinst1327 = {
        .envinst1321 = envinst1321 ,
    };
    struct env1329 envinst1329 = {
        .envinst1325 = envinst1325 ,
        .envinst1327 = envinst1327 ,
    };
    struct env1333 envinst1333 = {
        .envinst1325 = envinst1325 ,
        .envinst1321 = envinst1321 ,
    };
    struct env1336 envinst1336 = {
        .envinst1325 = envinst1325 ,
    };
    struct env1338 envinst1338 = {
        .envinst1325 = envinst1325 ,
    };
    struct env1343 envinst1343 = {
        .envinst1169 = envinst1169 ,
        .envinst1175 = envinst1175 ,
        .envinst623 = envinst623 ,
    };
    struct env1357 envinst1357 = {
        .envinst566 = envinst566 ,
        .envinst303 = envinst303 ,
        .envinst1123 = envinst1123 ,
        .envinst1306 = envinst1306 ,
        .envinst1321 = envinst1321 ,
    };
    struct env1375 envinst1375 = {
        .envinst1308 = envinst1308 ,
        .envinst1117 = envinst1117 ,
        .envinst1343 = envinst1343 ,
        .envinst1321 = envinst1321 ,
        .envinst1125 = envinst1125 ,
        .envinst1123 = envinst1123 ,
    };
    struct env1394 envinst1394 = {
        .envinst1113 = envinst1113 ,
        .envinst1127 = envinst1127 ,
    };
    struct env1400 envinst1400 = {
        .envinst1319 = envinst1319 ,
    };
    struct env1407 envinst1407 = {
        .envinst1319 = envinst1319 ,
    };
    enum CAllocator_4  al2824 = ( (  idc1075 ) ( ) );
    struct env1410 envinst1410 = {
        .envinst302 = envinst302 ,
        .envinst1132 = envinst1132 ,
        .envinst566 = envinst566 ,
    };
    struct env1415 envinst1415 = {
        .al2824 =  al2824 ,
        .envinst623 = envinst623 ,
    };
    int32_t  pad2875 = (  from_dash_integral29 ( 2 ) );
    struct env1422 envinst1422 = {
        .pad2875 =  pad2875 ,
    };
    struct env1424 envinst1424 = {
        .envinst1422 = envinst1422 ,
    };
    struct env1426 envinst1426 = {
        .envinst1312 = envinst1312 ,
        .envinst312 = envinst312 ,
        .pad2875 =  pad2875 ,
        .envinst1422 = envinst1422 ,
    };
    struct env1446 envinst1446 = {
        .dark_dash_theme2487 =  dark_dash_theme2487 ,
        .envinst1415 = envinst1415 ,
        .envinst1327 = envinst1327 ,
        .envinst1410 = envinst1410 ,
        .envinst1200 = envinst1200 ,
        .envinst1198 = envinst1198 ,
        .light_dash_theme2488 =  light_dash_theme2488 ,
    };
    struct Slice_1049  args2977 = ( (  get1295 ) ( ) );
    struct List_280  temp1455;
    struct List_280  file2978 = (  temp1455 );
    struct Maybe_265  mfilename2979 = ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    if ( (  eq45 ( ( (  args2977 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2978 = ( (  mk1104 ) ( (  al2824 ) ) );
        struct funenv566  temp1456 = ( (struct funenv566){ .fun = add566, .env =  envinst566  } );
        ( temp1456.fun ( temp1456.env ,  ( & (  file2978 ) ) ,  ( (  mk1105 ) ( (  al2824 ) ) ) ) );
    } else {
        struct funenv1410  temp1457 = ( (struct funenv1410){ .fun = load_dash_file1410, .env =  envinst1410  } );
        file2978 = ( temp1457.fun ( temp1457.env ,  (  elem_dash_get1063 ( (  args2977 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2824 ) ) );
        struct funenv1196  temp1458 = ( (struct funenv1196){ .fun = mk_dash_const_dash_str1196, .env =  envinst1196  } );
        mfilename2979 = ( ( Maybe_265_Just ) ( ( temp1458.fun ( temp1458.env ,  (  elem_dash_get1063 ( (  args2977 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2824 ) ) ) ) );
    }
    struct Editor_1011  temp1459 = ( (struct Editor_1011) { .f_cursor = ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1012_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2978 ) , .f_filename = (  mfilename2979 ) , .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } ) , .f_anim = ( ( Maybe_1008_Just ) ( ( (  now1202 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } ) , .f_theme = (  dark_dash_theme2487 ) , .f_search_dash_term = ( (struct Maybe_881) { .tag = Maybe_881_None_t } ) , .f_al = (  al2824 ) , .f_msg = ( (struct Maybe_315) { .tag = Maybe_315_None_t } ) , .f_clipboard = ( (struct Maybe_315) { .tag = Maybe_315_None_t } ) } );
    struct Editor_1011 *  ed2980 = ( &temp1459 );
    struct funenv1219  temp1461 = ( (struct funenv1219){ .fun = mk1219, .env =  envinst1219  } );
    struct Tui_647  temp1460 = ( temp1461.fun ( temp1461.env ) );
    struct Tui_647 *  tui2981 = ( &temp1460 );
    enum CAllocator_4  al2982 = ( (  idc1075 ) ( ) );
    struct Screen_646  temp1462 = ( (  mk_dash_screen1243 ) ( (  tui2981 ) ,  (  al2982 ) ) );
    struct Screen_646 *  screen2983 = ( &temp1462 );
    uint32_t  counter2984 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2985 = ( true );
    while ( ( ( * (  ed2980 ) ) .f_running ) ) {
        int32_t  events2986 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_545  temp1463 =  into_dash_iter544 ( ( (  from_dash_function551 ) ( (  read_dash_key1236 ) ) ) );
        while (true) {
            struct Maybe_546  __cond1464 =  next550 (&temp1463);
            if (  __cond1464 .tag == 0 ) {
                break;
            }
            struct InputEvent_547  ev2988 =  __cond1464 .stuff .Maybe_546_Just_s .field0;
            if ( (  eq41 ( (  events2986 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1318 ) ( (  ed2980 ) ) );
            }
            events2986 = (  op_dash_add82 ( (  events2986 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1242  temp1465 = ( (struct funenv1242){ .fun = update_dash_dimensions1242, .env =  envinst1242  } );
            ( temp1465.fun ( temp1465.env ,  (  tui2981 ) ) );
            struct InputEvent_547  dref2989 = (  ev2988 );
            if ( dref2989.tag == InputEvent_547_Key_t ) {
                struct Key_548  dref2991 = ( dref2989 .stuff .InputEvent_547_Key_s .field0 );
                if ( dref2991.tag == Key_548_Char_t ) {
                    struct Mode_823 *  dref2993 = ( & ( ( * (  ed2980 ) ) .f_mode ) );
                    if ( (* dref2993 ).tag == Mode_823_Insert_t ) {
                        struct funenv1110  temp1466 = ( (struct funenv1110){ .fun = insert1110, .env =  envinst1110  } );
                        ( temp1466.fun ( temp1466.env ,  ( (  cursor_dash_row1303 ) ( (  ed2980 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2991 .stuff .Key_548_Char_s .field0 ) ) );
                        struct funenv1325  temp1467 = ( (struct funenv1325){ .fun = move_dash_to_dash_col1325, .env =  envinst1325  } );
                        struct funenv1424  temp1468 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                        ( temp1467.fun ( temp1467.env ,  (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1468.fun ( temp1468.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                    }
                    else if ( (* dref2993 ).tag == Mode_823_Cmd_t ) {
                        struct funenv623  temp1469 = ( (struct funenv623){ .fun = write_dash_char623, .env =  envinst623  } );
                        ( temp1469.fun ( temp1469.env ,  ( & ( (* dref2993 ) .stuff .Mode_823_Cmd_s .field0 ) ) ,  ( dref2991 .stuff .Key_548_Char_s .field0 ) ) );
                    }
                    else if ( (* dref2993 ).tag == Mode_823_SearchBox_t ) {
                        struct funenv623  temp1470 = ( (struct funenv623){ .fun = write_dash_char623, .env =  envinst623  } );
                        ( temp1470.fun ( temp1470.env ,  ( & ( (* dref2993 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ,  ( dref2991 .stuff .Key_548_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1300 ( ( (* dref2993 ) ) , ( (struct Mode_823) { .tag = Mode_823_Normal_t } ) ) ) || (  eq1300 ( ( (* dref2993 ) ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) ) ) {
                            int32_t  code2997 = ( (  u8_dash_i32276 ) ( ( (  cast195 ) ( ( dref2991 .stuff .Key_548_Char_s .field0 ) ) ) ) );
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed2980 ) .f_running = ( false );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1327  temp1471 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                                struct funenv1424  temp1472 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1471.fun ( temp1471.env ,  (  ed2980 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1472.fun ( temp1472.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1327  temp1473 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                                struct funenv1424  temp1474 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1473.fun ( temp1473.env ,  (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1474.fun ( temp1474.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1329  temp1475 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                struct funenv1424  temp1476 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1475.fun ( temp1475.env ,  (  ed2980 ) ,  ( temp1476.fun ( temp1476.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1333  temp1477 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                struct funenv1424  temp1478 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1477.fun ( temp1477.env ,  (  ed2980 ) ,  ( temp1478.fun ( temp1478.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1300 ( ( (* dref2993 ) ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) ) {
                                    (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                                } else {
                                    (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Select_t } );
                                    ( (  set_dash_selection1317 ) ( (  ed2980 ) ,  ( ( Maybe_1001_Just ) ( ( ( * (  ed2980 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1375  temp1479 = ( (struct funenv1375){ .fun = delete_dash_selected1375, .env =  envinst1375  } );
                                struct funenv1424  temp1480 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1479.fun ( temp1479.env ,  (  ed2980 ) ,  ( temp1480.fun ( temp1480.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1375  temp1481 = ( (struct funenv1375){ .fun = delete_dash_selected1375, .env =  envinst1375  } );
                                struct funenv1424  temp1482 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1481.fun ( temp1481.env ,  (  ed2980 ) ,  ( temp1482.fun ( temp1482.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1343  temp1483 = ( (struct funenv1343){ .fun = copy_dash_selection1343, .env =  envinst1343  } );
                                ( temp1483.fun ( temp1483.env ,  (  ed2980 ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1357  temp1484 = ( (struct funenv1357){ .fun = paste_dash_clipboard_dash_at_dash_cursor1357, .env =  envinst1357  } );
                                struct funenv1424  temp1485 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1484.fun ( temp1484.env ,  (  ed2980 ) ,  ( PastePos_1358_PasteAfter ) ,  ( temp1485.fun ( temp1485.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1357  temp1486 = ( (struct funenv1357){ .fun = paste_dash_clipboard_dash_at_dash_cursor1357, .env =  envinst1357  } );
                                struct funenv1424  temp1487 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1486.fun ( temp1486.env ,  (  ed2980 ) ,  ( PastePos_1358_PasteBefore ) ,  ( temp1487.fun ( temp1487.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1336  temp1488 = ( (struct funenv1336){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1336, .env =  envinst1336  } );
                                struct funenv1424  temp1489 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1488.fun ( temp1488.env ,  (  ed2980 ) ,  ( temp1489.fun ( temp1489.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1338  temp1490 = ( (struct funenv1338){ .fun = move_dash_to_dash_end_dash_of_dash_line1338, .env =  envinst1338  } );
                                struct funenv1424  temp1491 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1490.fun ( temp1490.env ,  (  ed2980 ) ,  ( temp1491.fun ( temp1491.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1394  temp1492 = ( (struct funenv1394){ .fun = insert_dash_empty_dash_row_dash_at1394, .env =  envinst1394  } );
                                ( temp1492.fun ( temp1492.env ,  (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2982 ) ) );
                                struct List_3 *  currow2998 = ( (  get_dash_row1302 ) ( (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1321  temp1493 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  envinst1321  } );
                                struct funenv1424  temp1494 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1493.fun ( temp1493.env ,  (  ed2980 ) ,  ( (  size_dash_i32270 ) ( ( (  size1138 ) ( (  currow2998 ) ) ) ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1494.fun ( temp1494.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1394  temp1495 = ( (struct funenv1394){ .fun = insert_dash_empty_dash_row_dash_at1394, .env =  envinst1394  } );
                                ( temp1495.fun ( temp1495.env ,  (  ed2980 ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ,  (  al2982 ) ) );
                                struct funenv1338  temp1496 = ( (struct funenv1338){ .fun = move_dash_to_dash_end_dash_of_dash_line1338, .env =  envinst1338  } );
                                struct funenv1424  temp1497 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1496.fun ( temp1496.env ,  (  ed2980 ) ,  ( temp1497.fun ( temp1497.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed2980 ) .f_mode = ( ( Mode_823_Cmd ) ( ( (  mk1181 ) ( (  al2982 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed2980 ) .f_mode = ( ( Mode_823_SearchBox ) ( ( (  mk1181 ) ( (  al2982 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_881  dref2999 = ( ( * (  ed2980 ) ) .f_search_dash_term );
                                if ( dref2999.tag == Maybe_881_None_t ) {
                                }
                                else if ( dref2999.tag == Maybe_881_Just_t ) {
                                    struct funenv1400  temp1498 = ( (struct funenv1400){ .fun = find_dash_next_dash_occurence1400, .env =  envinst1400  } );
                                    struct Maybe_1001  dref3001 = ( temp1498.fun ( temp1498.env ,  (  ed2980 ) ,  ( (  as_dash_char_dash_slice1182 ) ( ( & ( dref2999 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3001.tag == Maybe_1001_None_t ) {
                                    }
                                    else if ( dref3001.tag == Maybe_1001_Just_t ) {
                                        struct funenv1321  temp1499 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  envinst1321  } );
                                        struct funenv1424  temp1500 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                        ( temp1499.fun ( temp1499.env ,  (  ed2980 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref3001 .stuff .Maybe_1001_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1180 ) ( ( & ( dref2999 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3001 .stuff .Maybe_1001_Just_s .field0 ) .f_y ) ,  ( temp1500.fun ( temp1500.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                        (*  ed2980 ) .f_selected = ( ( Maybe_1001_Just ) ( ( dref3001 .stuff .Maybe_1001_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_881  dref3003 = ( ( * (  ed2980 ) ) .f_search_dash_term );
                                if ( dref3003.tag == Maybe_881_None_t ) {
                                }
                                else if ( dref3003.tag == Maybe_881_Just_t ) {
                                    struct funenv1407  temp1501 = ( (struct funenv1407){ .fun = find_dash_prev_dash_occurence1407, .env =  envinst1407  } );
                                    struct Maybe_1001  dref3005 = ( temp1501.fun ( temp1501.env ,  (  ed2980 ) ,  ( (  as_dash_char_dash_slice1182 ) ( ( & ( dref3003 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3005.tag == Maybe_1001_None_t ) {
                                    }
                                    else if ( dref3005.tag == Maybe_1001_Just_t ) {
                                        struct funenv1321  temp1502 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  envinst1321  } );
                                        struct funenv1424  temp1503 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                        ( temp1502.fun ( temp1502.env ,  (  ed2980 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref3005 .stuff .Maybe_1001_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1180 ) ( ( & ( dref3003 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3005 .stuff .Maybe_1001_Just_s .field0 ) .f_y ) ,  ( temp1503.fun ( temp1503.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                        (*  ed2980 ) .f_selected = ( ( Maybe_1001_Just ) ( ( dref3005 .stuff .Maybe_1001_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe1033 ) ( ( ( * (  ed2980 ) ) .f_selected ) ,  (  lam1504 ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1341 ) ( (  ed2980 ) ) ) ) ) {
                                    struct funenv1424  temp1505 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                    struct Dims_1322  dims3009 = ( temp1505.fun ( temp1505.env ,  (  ed2980 ) ,  (  tui2981 ) ) );
                                    struct Cursor_804  sel3010 = ( (  or_dash_else1000 ) ( ( ( * (  ed2980 ) ) .f_selected ) ,  ( ( * (  ed2980 ) ) .f_cursor ) ) );
                                    struct funenv1327  temp1506 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                                    ( temp1506.fun ( temp1506.env ,  (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3009 ) ) );
                                    struct funenv1338  temp1507 = ( (struct funenv1338){ .fun = move_dash_to_dash_end_dash_of_dash_line1338, .env =  envinst1338  } );
                                    ( temp1507.fun ( temp1507.env ,  (  ed2980 ) ,  (  dims3009 ) ) );
                                    (*  ed2980 ) .f_selected = ( ( Maybe_1001_Just ) ( (  sel3010 ) ) );
                                } else {
                                    struct funenv1338  temp1508 = ( (struct funenv1338){ .fun = move_dash_to_dash_end_dash_of_dash_line1338, .env =  envinst1338  } );
                                    struct funenv1424  temp1509 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                    ( temp1508.fun ( temp1508.env ,  (  ed2980 ) ,  ( temp1509.fun ( temp1509.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                    (*  ed2980 ) .f_selected = ( ( Maybe_1001_Just ) ( ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1034 ) ( ( ( * (  ed2980 ) ) .f_selected ) ,  (  lam1510 ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1424  temp1511 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                struct Dims_1322  dims3013 = ( temp1511.fun ( temp1511.env ,  (  ed2980 ) ,  (  tui2981 ) ) );
                                struct Cursor_804  first_dash_pos3014 = ( ( * (  ed2980 ) ) .f_cursor );
                                struct funenv1333  temp1512 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                ( temp1512.fun ( temp1512.env ,  (  ed2980 ) ,  (  dims3013 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) , ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at1310 ) ( (  ed2980 ) ,  (  first_dash_pos3014 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) ) ) ) {
                                    first_dash_pos3014 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1341 ) ( (  ed2980 ) ) ) ) {
                                    struct funenv1333  temp1513 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1513.fun ( temp1513.env ,  (  ed2980 ) ,  (  dims3013 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3014 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1035 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1514 ) ,  ( false ) ) ) ) {
                                    struct funenv1333  temp1515 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1515.fun ( temp1515.env ,  (  ed2980 ) ,  (  dims3013 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1036 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1516 ) ,  ( false ) ) ) ) {
                                    struct funenv1333  temp1517 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1517.fun ( temp1517.env ,  (  ed2980 ) ,  (  dims3013 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1298 ( (  first_dash_pos3014 ) , ( ( * (  ed2980 ) ) .f_cursor ) ) ) ) {
                                    struct funenv1329  temp1518 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                    ( temp1518.fun ( temp1518.env ,  (  ed2980 ) ,  (  dims3013 ) ) );
                                    ( (  set_dash_selection1317 ) ( (  ed2980 ) ,  ( ( Maybe_1001_Just ) ( (  first_dash_pos3014 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1424  temp1519 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                struct Dims_1322  dims3019 = ( temp1519.fun ( temp1519.env ,  (  ed2980 ) ,  (  tui2981 ) ) );
                                struct Cursor_804  first_dash_pos3020 = ( ( * (  ed2980 ) ) .f_cursor );
                                struct funenv1333  temp1520 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                ( temp1520.fun ( temp1520.env ,  (  ed2980 ) ,  (  dims3019 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) , ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at1310 ) ( (  ed2980 ) ,  (  first_dash_pos3020 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) ) ) ) {
                                    first_dash_pos3020 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1341 ) ( (  ed2980 ) ) ) ) {
                                    struct funenv1333  temp1521 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1521.fun ( temp1521.env ,  (  ed2980 ) ,  (  dims3019 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3020 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1037 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1522 ) ,  ( false ) ) ) ) {
                                    struct funenv1333  temp1523 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1523.fun ( temp1523.env ,  (  ed2980 ) ,  (  dims3019 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1038 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1524 ) ,  ( false ) ) ) ) {
                                    struct funenv1333  temp1525 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                    if ( ( ! ( temp1525.fun ( temp1525.env ,  (  ed2980 ) ,  (  dims3019 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1298 ( (  first_dash_pos3020 ) , ( ( * (  ed2980 ) ) .f_cursor ) ) ) ) {
                                    struct funenv1329  temp1526 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                    ( temp1526.fun ( temp1526.env ,  (  ed2980 ) ,  (  dims3019 ) ) );
                                    ( (  set_dash_selection1317 ) ( (  ed2980 ) ,  ( ( Maybe_1001_Just ) ( (  first_dash_pos3020 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2991 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1424  temp1527 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                struct Dims_1322  dims3025 = ( temp1527.fun ( temp1527.env ,  (  ed2980 ) ,  (  tui2981 ) ) );
                                struct Cursor_804  first_dash_pos3026 = ( ( * (  ed2980 ) ) .f_cursor );
                                struct funenv1329  temp1528 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                ( temp1528.fun ( temp1528.env ,  (  ed2980 ) ,  (  dims3025 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) , ( (  fmap_dash_maybe1015 ) ( ( (  char_dash_at1310 ) ( (  ed2980 ) ,  (  first_dash_pos3026 ) ) ) ,  (  is_dash_word_dash_char1399 ) ) ) ) ) ) {
                                    first_dash_pos3026 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1341 ) ( (  ed2980 ) ) ) ) {
                                    struct funenv1329  temp1529 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                    if ( ( ! ( temp1529.fun ( temp1529.env ,  (  ed2980 ) ,  (  dims3025 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3026 = ( ( * (  ed2980 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1039 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1530 ) ,  ( false ) ) ) ) {
                                    struct funenv1329  temp1531 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                    if ( ( ! ( temp1531.fun ( temp1531.env ,  (  ed2980 ) ,  (  dims3025 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1040 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1532 ) ,  ( false ) ) ) ) {
                                    struct funenv1329  temp1533 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                                    if ( ( ! ( temp1533.fun ( temp1533.env ,  (  ed2980 ) ,  (  dims3025 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1298 ( (  first_dash_pos3026 ) , ( ( * (  ed2980 ) ) .f_cursor ) ) ) ) {
                                    if ( ( (  maybe1041 ) ( ( (  char_dash_at_dash_cursor1311 ) ( (  ed2980 ) ) ) ,  (  lam1534 ) ,  ( true ) ) ) ) {
                                        struct funenv1333  temp1535 = ( (struct funenv1333){ .fun = move_dash_right1333, .env =  envinst1333  } );
                                        ( temp1535.fun ( temp1535.env ,  (  ed2980 ) ,  (  dims3025 ) ) );
                                    }
                                    ( (  set_dash_selection1317 ) ( (  ed2980 ) ,  ( ( Maybe_1001_Just ) ( (  first_dash_pos3026 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  todo981 ) ( ) );
                        }
                    }
                }
                else if ( dref2991.tag == Key_548_Ctrl_t ) {
                    if ( (  eq48 ( ( dref2991 .stuff .Key_548_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2980 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( ( * (  ed2980 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1327  temp1536 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                        struct funenv1424  temp1537 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                        ( temp1536.fun ( temp1536.env ,  (  ed2980 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1537.fun ( temp1537.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref2991 .stuff .Key_548_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2980 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( * (  ed2980 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1327  temp1538 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                        struct funenv1424  temp1539 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                        ( temp1538.fun ( temp1538.env ,  (  ed2980 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1539.fun ( temp1539.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                    }
                }
                else if ( dref2991.tag == Key_548_Escape_t ) {
                    struct Mode_823  dref3034 = ( ( * (  ed2980 ) ) .f_mode );
                    if ( dref3034.tag == Mode_823_Normal_t ) {
                    }
                    else if ( dref3034.tag == Mode_823_Insert_t ) {
                        (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3034.tag == Mode_823_Cmd_t ) {
                        ( (  free1183 ) ( ( & ( dref3034 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3034.tag == Mode_823_SearchBox_t ) {
                        ( (  todo981 ) ( ) );
                    }
                    else if ( dref3034.tag == Mode_823_Select_t ) {
                        (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                }
                else if ( dref2991.tag == Key_548_Backspace_t ) {
                    struct Mode_823 *  dref3037 = ( & ( ( * (  ed2980 ) ) .f_mode ) );
                    if ( (* dref3037 ).tag == Mode_823_Normal_t ) {
                    }
                    else if ( (* dref3037 ).tag == Mode_823_Select_t ) {
                    }
                    else if ( (* dref3037 ).tag == Mode_823_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1329  temp1540 = ( (struct funenv1329){ .fun = move_dash_left1329, .env =  envinst1329  } );
                            struct funenv1424  temp1541 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                            ( temp1540.fun ( temp1540.env ,  (  ed2980 ) ,  ( temp1541.fun ( temp1541.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                            struct funenv1375  temp1542 = ( (struct funenv1375){ .fun = delete_dash_selected1375, .env =  envinst1375  } );
                            struct funenv1424  temp1543 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                            ( temp1542.fun ( temp1542.env ,  (  ed2980 ) ,  ( temp1543.fun ( temp1543.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                        }
                    }
                    else if ( (* dref3037 ).tag == Mode_823_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1180 ) ( ( & ( (* dref3037 ) .stuff .Mode_823_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1178  temp1544 = ( (struct funenv1178){ .fun = pop1178, .env =  envinst1178  } );
                            ( temp1544.fun ( temp1544.env ,  ( & ( (* dref3037 ) .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3037 ).tag == Mode_823_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1180 ) ( ( & ( (* dref3037 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1178  temp1545 = ( (struct funenv1178){ .fun = pop1178, .env =  envinst1178  } );
                            ( temp1545.fun ( temp1545.env ,  ( & ( (* dref3037 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2991.tag == Key_548_Enter_t ) {
                    struct Mode_823  dref3040 = ( ( * (  ed2980 ) ) .f_mode );
                    if ( dref3040.tag == Mode_823_Normal_t ) {
                    }
                    else if ( dref3040.tag == Mode_823_Select_t ) {
                    }
                    else if ( dref3040.tag == Mode_823_Insert_t ) {
                        int32_t  cx3041 = ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1546 = ( (  mk1105 ) ( (  al2982 ) ) );
                        struct List_3 *  nurow3042 = ( &temp1546 );
                        struct TakeWhile_506  rowws3043 = ( (  indent_dash_on_dash_row1304 ) ( (  ed2980 ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3044 = ( (  size_dash_i32270 ) ( ( (  count759 ) ( (  rowws3043 ) ) ) ) );
                        struct funenv1127  temp1547 = ( (struct funenv1127){ .fun = add_dash_all1127, .env =  envinst1127  } );
                        ( temp1547.fun ( temp1547.env ,  (  nurow3042 ) ,  (  rowws3043 ) ) );
                        struct List_3 *  cur_dash_row3045 = ( (  cursor_dash_row1303 ) ( (  ed2980 ) ) );
                        struct funenv1123  temp1548 = ( (struct funenv1123){ .fun = add_dash_all1123, .env =  envinst1123  } );
                        ( temp1548.fun ( temp1548.env ,  (  nurow3042 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1135 ) ( ( * (  cur_dash_row3045 ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  cx3041 ) ) ) ,  ( ( * (  cur_dash_row3045 ) ) .f_count ) ) ) ) );
                        ( (  trim1129 ) ( (  cur_dash_row3045 ) ,  ( (  i32_dash_size268 ) ( (  cx3041 ) ) ) ) );
                        struct funenv1113  temp1549 = ( (struct funenv1113){ .fun = insert1113, .env =  envinst1113  } );
                        ( temp1549.fun ( temp1549.env ,  ( & ( ( * (  ed2980 ) ) .f_current_dash_file ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3042 ) ) ) );
                        struct funenv1321  temp1550 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  envinst1321  } );
                        struct funenv1424  temp1551 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                        ( temp1550.fun ( temp1550.env ,  (  ed2980 ) ,  (  offchars3044 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1551.fun ( temp1551.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                    }
                    else if ( dref3040.tag == Mode_823_Cmd_t ) {
                        struct DynStr_131  s3047 = ( (  as_dash_str829 ) ( ( & ( dref3040 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        struct funenv1446  temp1552 = ( (struct funenv1446){ .fun = run_dash_cmd1446, .env =  envinst1446  } );
                        struct funenv1424  temp1553 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                        ( temp1552.fun ( temp1552.env ,  (  ed2980 ) ,  (  s3047 ) ,  ( temp1553.fun ( temp1553.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ,  (  al2982 ) ) );
                        ( (  free1183 ) ( ( & ( dref3040 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3040.tag == Mode_823_SearchBox_t ) {
                        struct Maybe_881  dref3049 = ( ( * (  ed2980 ) ) .f_search_dash_term );
                        if ( dref3049.tag == Maybe_881_Just_t ) {
                            ( (  free1183 ) ( ( & ( dref3049 .stuff .Maybe_881_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3049.tag == Maybe_881_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1180 ) ( ( & ( dref3040 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed2980 ) .f_search_dash_term = ( ( Maybe_881_Just ) ( ( dref3040 .stuff .Mode_823_SearchBox_s .field0 ) ) );
                            struct funenv1400  temp1554 = ( (struct funenv1400){ .fun = find_dash_next_dash_occurence1400, .env =  envinst1400  } );
                            struct Maybe_1001  dref3051 = ( temp1554.fun ( temp1554.env ,  (  ed2980 ) ,  ( (  as_dash_char_dash_slice1182 ) ( ( & ( dref3040 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3051.tag == Maybe_1001_None_t ) {
                            }
                            else if ( dref3051.tag == Maybe_1001_Just_t ) {
                                struct funenv1321  temp1555 = ( (struct funenv1321){ .fun = move_dash_to1321, .env =  envinst1321  } );
                                struct funenv1424  temp1556 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                                ( temp1555.fun ( temp1555.env ,  (  ed2980 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref3051 .stuff .Maybe_1001_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1180 ) ( ( & ( dref3040 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3051 .stuff .Maybe_1001_Just_s .field0 ) .f_y ) ,  ( temp1556.fun ( temp1556.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                                (*  ed2980 ) .f_selected = ( ( Maybe_1001_Just ) ( ( dref3051 .stuff .Maybe_1001_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed2980 ) .f_search_dash_term = ( (struct Maybe_881) { .tag = Maybe_881_None_t } );
                        }
                        (*  ed2980 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2989.tag == InputEvent_547_Mouse_t ) {
                enum MouseButton_144  dref3054 = ( ( dref2989 .stuff .InputEvent_547_Mouse_s .field0 ) .f_button );
                switch (  dref3054 ) {
                    case MouseButton_144_MouseLeft : {
                        if ( ( ( dref2989 .stuff .InputEvent_547_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3055 = ( (  size_dash_i32270 ) ( ( ( ( * (  ed2980 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3056 = ( (  clamp810 ) ( (  op_dash_add82 ( ( ( * (  ed2980 ) ) .f_screen_dash_top ) , ( ( dref2989 .stuff .InputEvent_547_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  linecnt3055 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1422  temp1557 = ( (struct funenv1422){ .fun = left_dash_offset1422, .env =  envinst1422  } );
                            struct Visual_1012  vx3057 = ( ( Visual_1012_Visual ) ( (  op_dash_sub83 ( ( ( dref2989 .stuff .InputEvent_547_Mouse_s .field0 ) .f_x ) , ( ( temp1557.fun ( temp1557.env ,  (  ed2980 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1313  temp1558 = ( (struct funenv1313){ .fun = visual_dash_x_dash_to_dash_x1313, .env =  envinst1313  } );
                            int32_t  cx3058 = ( temp1558.fun ( temp1558.env ,  (  ed2980 ) ,  (  vx3057 ) ,  (  cy3056 ) ) );
                            (*  ed2980 ) .f_cursor .f_x = (  cx3058 );
                            (*  ed2980 ) .f_goal_dash_x = (  vx3057 );
                            struct funenv1327  temp1559 = ( (struct funenv1327){ .fun = move_dash_to_dash_row1327, .env =  envinst1327  } );
                            struct funenv1424  temp1560 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                            ( temp1559.fun ( temp1559.env ,  (  ed2980 ) ,  (  cy3056 ) ,  ( temp1560.fun ( temp1560.env ,  (  ed2980 ) ,  (  tui2981 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable983 ) ( ) );
            }
        }
        struct funenv1257  temp1561 = ( (struct funenv1257){ .fun = resize_dash_screen_dash_if_dash_needed1257, .env =  envinst1257  } );
        bool  resized3059 = ( temp1561.fun ( temp1561.env ,  (  screen2983 ) ) );
        if ( ( ( ( (  resized3059 ) || (  cmp75 ( (  events2986 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2985 ) ) || ( (  is_dash_just1007 ) ( ( ( * (  ed2980 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2985 = ( false );
            ( (  clear_dash_screen1247 ) ( (  screen2983 ) ) );
            ( (  set_dash_screen_dash_fg1259 ) ( (  screen2983 ) ,  ( ( * ( ( * (  ed2980 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1260 ) ( (  screen2983 ) ,  ( ( * ( ( * (  ed2980 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1263 ) ( (  screen2983 ) ) );
            struct funenv1426  temp1562 = ( (struct funenv1426){ .fun = render_dash_editor1426, .env =  envinst1426  } );
            ( temp1562.fun ( temp1562.env ,  (  screen2983 ) ,  (  ed2980 ) ) );
            bool  debug3060 = ( true );
            if ( (  debug3060 ) ) {
                ( (  draw_dash_str_dash_right1281 ) ( (  screen2983 ) ,  ( ( StrConcat_822_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2980 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1282 ) ( (  screen2983 ) ,  ( ( StrConcat_838_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2981 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1010 envinst1010 = {
                    .ed2980 =  ed2980 ,
                };
                struct Maybe_354  charcode3065 = ( (  fmap_dash_maybe1016 ) ( ( (  and_dash_maybe1009 ) ( ( (  try_dash_get1101 ) ( ( & ( ( * (  ed2980 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1010){ .fun = lam1010, .env = envinst1010 } ) ) ) ,  (  lam1563 ) ) );
                ( (  draw_dash_str_dash_right1283 ) ( (  screen2983 ) ,  ( ( StrConcat_840_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3065 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1284 ) ( (  screen2983 ) ,  ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3066 = ( ( * ( (  get_dash_row1302 ) ( (  ed2980 ) ,  ( ( ( * (  ed2980 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1285 ) ( (  screen2983 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3066 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3067 = ( (  from_dash_visual1299 ) ( ( ( * (  ed2980 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1286 ) ( (  screen2983 ) ,  ( ( StrConcat_868_StrConcat ) ( ( "goal x: " ) ,  (  gx3067 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1424  temp1564 = ( (struct funenv1424){ .fun = screen_dash_dims1424, .env =  envinst1424  } );
                struct Dims_1322  dim3068 = ( temp1564.fun ( temp1564.env ,  (  ed2980 ) ,  (  tui2981 ) ) );
                ( (  draw_dash_str_dash_right1287 ) ( (  screen2983 ) ,  ( ( StrConcat_875_StrConcat ) ( ( ( StrConcat_876_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2980 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3068 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1288 ) ( (  screen2983 ) ,  ( ( StrConcat_880_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed2980 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1289 ) ( (  screen2983 ) ,  ( ( StrConcat_895_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed2980 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_900  cpsize3071 = ( (  fmap_dash_maybe1017 ) ( ( ( * (  ed2980 ) ) .f_clipboard ) ,  (  lam1565 ) ) );
                ( (  draw_dash_str_dash_right1290 ) ( (  screen2983 ) ,  ( ( StrConcat_899_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3071 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
            }
            ( (  update_dash_animation1441 ) ( ( & ( ( * (  ed2980 ) ) .f_anim ) ) ,  (  screen2983 ) ) );
            ( (  render_dash_screen1251 ) ( (  screen2983 ) ) );
        }
        ( (  sync1225 ) ( (  tui2981 ) ) );
    }
    ( (  free_dash_screen1246 ) ( (  screen2983 ) ) );
    ( (  deinit1229 ) ( (  tui2981 ) ) );
}
