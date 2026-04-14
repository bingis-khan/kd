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

static  bool   eq58 (    struct Cell_53  l2337 ,    struct Cell_53  r2339 ) {
    if ( ( !  eq48 ( ( (  l2337 ) .f_c ) , ( (  r2339 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2337 ) .f_fg ) , ( (  r2339 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq59 ( ( (  l2337 ) .f_bg ) , ( (  r2339 ) .f_bg ) ) ) ) {
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

static  uint16_t *   cast186 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  uint8_t *   cast187 (    struct Array_137 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
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

static  void *   cast_dash_ptr210 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr211 (    struct Winsize_177 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr212 (    struct Termios_136 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
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

static  struct Scanner_286   into_dash_iter288 (    struct Scanner_286  self2235 ) {
    return (  self2235 );
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
    enum CAllocator_4  al2756;
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
    ;
    int32_t  tab_dash_size2477;
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
    while ( ( ! ( (  eq48 ( ( (  get317 ) ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) ,  (  i1618 ) ) ) , ( (  newline321 ) ( ) ) ) ) && (  cmp9 ( (  i1618 ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) ) ) {
        i1618 = (  op_dash_add93 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_131  line1619 = ( (  substr322 ) ( ( ( * (  self1617 ) ) .f_og ) ,  ( ( * (  self1617 ) ) .f_last ) ,  (  i1618 ) ) );
    i1618 = (  op_dash_add93 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
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

static  struct Maybe_314   next354 (    struct SliceIter_278 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    struct List_3  elem1388 = ( * ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_314_Just ) ( (  elem1388 ) ) );
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

struct Zip_368 {
    struct SliceIter_287  f_left_dash_it;
    struct SliceIter_287  f_right_dash_it;
};

static  struct Zip_368   into_dash_iter367 (    struct Zip_368  self673 ) {
    return (  self673 );
}

struct IntStrIter_371 {
    int32_t  f_int;
    int32_t  f_len;
};

struct Zip_370 {
    struct IntStrIter_371  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_370   into_dash_iter369 (    struct Zip_370  self673 ) {
    return (  self673 );
}

struct StrConcatIter_377 {
    struct ConstStrIter_308  f_left;
    struct SliceIter_287  f_right;
};

struct AppendIter_378 {
    enum EmptyIter_294  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_376 {
    struct StrConcatIter_377  f_left;
    struct AppendIter_378  f_right;
};

struct StrCaseIter_375 {
    enum {
        StrCaseIter_375_StrCaseIter1_t,
        StrCaseIter_375_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_375_StrCaseIter1_s;
        struct {
            struct StrConcatIter_376  field0;
        } StrCaseIter_375_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_375 StrCaseIter_375_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_375 ) { .tag = StrCaseIter_375_StrCaseIter1_t, .stuff = { .StrCaseIter_375_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_375 StrCaseIter_375_StrCaseIter2 (  struct StrConcatIter_376  field0 ) {
    return ( struct StrCaseIter_375 ) { .tag = StrCaseIter_375_StrCaseIter2_t, .stuff = { .StrCaseIter_375_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_374 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_375  f_right;
};

struct Zip_373 {
    struct StrConcatIter_374  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_373   into_dash_iter372 (    struct Zip_373  self673 ) {
    return (  self673 );
}

struct IntStrIter_382 {
    uint32_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_381 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_382  f_right;
};

struct Zip_380 {
    struct StrConcatIter_381  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_380   into_dash_iter379 (    struct Zip_380  self673 ) {
    return (  self673 );
}

struct StrConcatIter_392 {
    struct AppendIter_378  f_left;
    struct AppendIter_378  f_right;
};

struct StrConcatIter_391 {
    struct StrConcatIter_392  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_390 {
    struct StrConcatIter_391  f_left;
    struct IntStrIter_371  f_right;
};

struct StrConcatIter_389 {
    struct StrConcatIter_390  f_left;
    struct AppendIter_378  f_right;
};

struct StrConcatIter_388 {
    struct ConstStrIter_308  f_left;
    struct StrConcatIter_389  f_right;
};

struct StrConcatIter_387 {
    struct StrConcatIter_388  f_left;
    struct AppendIter_378  f_right;
};

struct StrCaseIter_386 {
    enum {
        StrCaseIter_386_StrCaseIter1_t,
        StrCaseIter_386_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct ConstStrIter_308  field0;
        } StrCaseIter_386_StrCaseIter1_s;
        struct {
            struct StrConcatIter_387  field0;
        } StrCaseIter_386_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_386 StrCaseIter_386_StrCaseIter1 (  struct ConstStrIter_308  field0 ) {
    return ( struct StrCaseIter_386 ) { .tag = StrCaseIter_386_StrCaseIter1_t, .stuff = { .StrCaseIter_386_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_386 StrCaseIter_386_StrCaseIter2 (  struct StrConcatIter_387  field0 ) {
    return ( struct StrCaseIter_386 ) { .tag = StrCaseIter_386_StrCaseIter2_t, .stuff = { .StrCaseIter_386_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_385 {
    struct ConstStrIter_308  f_left;
    struct StrCaseIter_386  f_right;
};

struct Zip_384 {
    struct StrConcatIter_385  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_384   into_dash_iter383 (    struct Zip_384  self673 ) {
    return (  self673 );
}

struct StrConcatIter_397 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_371  f_right;
};

struct StrConcatIter_396 {
    struct StrConcatIter_397  f_left;
    struct AppendIter_378  f_right;
};

struct StrConcatIter_395 {
    struct StrConcatIter_396  f_left;
    struct IntStrIter_371  f_right;
};

struct Zip_394 {
    struct StrConcatIter_395  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_394   into_dash_iter393 (    struct Zip_394  self673 ) {
    return (  self673 );
}

struct IntStrIter_401 {
    size_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_400 {
    struct ConstStrIter_308  f_left;
    struct IntStrIter_401  f_right;
};

struct Zip_399 {
    struct StrConcatIter_400  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_399   into_dash_iter398 (    struct Zip_399  self673 ) {
    return (  self673 );
}

struct Zip_403 {
    struct StrConcatIter_397  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_403   into_dash_iter402 (    struct Zip_403  self673 ) {
    return (  self673 );
}

struct StrConcatIter_407 {
    struct StrConcatIter_397  f_left;
    struct ConstStrIter_308  f_right;
};

struct StrConcatIter_406 {
    struct StrConcatIter_407  f_left;
    struct IntStrIter_371  f_right;
};

struct Zip_405 {
    struct StrConcatIter_406  f_left_dash_it;
    struct FromIter_341  f_right_dash_it;
};

static  struct Zip_405   into_dash_iter404 (    struct Zip_405  self673 ) {
    return (  self673 );
}

struct Tuple2_410 {
    char  field0;
    char  field1;
};

static struct Tuple2_410 Tuple2_410_Tuple2 (  char  field0 ,  char  field1 ) {
    return ( struct Tuple2_410 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_409 {
    enum {
        Maybe_409_None_t,
        Maybe_409_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_410  field0;
        } Maybe_409_Just_s;
    } stuff;
};

static struct Maybe_409 Maybe_409_Just (  struct Tuple2_410  field0 ) {
    return ( struct Maybe_409 ) { .tag = Maybe_409_Just_t, .stuff = { .Maybe_409_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_409   next408 (    struct Zip_368 *  self676 ) {
    struct Zip_368  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next330 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_409) { .tag = Maybe_409_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_297  dref680 = ( (  next330 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_297_None_t ) {
                return ( (struct Maybe_409) { .tag = Maybe_409_None_t } );
            }
            else if ( dref680.tag == Maybe_297_Just_t ) {
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next330 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_409_Just ) ( ( ( Tuple2_410_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env415 {
    ;
    int32_t  base923;
};

struct funenv415 {
    int32_t  (*fun) (  struct env415  ,    int32_t  ,    int32_t  );
    struct env415 env;
};

static  int32_t   reduce414 (    struct Range_361  iterable812 ,    int32_t  base814 ,   struct funenv415  fun816 ) {
    int32_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv415  temp416 = (  fun816 );
            x817 = ( temp416.fun ( temp416.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp417;
    return (  temp417 );
}

static  int32_t   lam415 (   struct env415 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul84 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow413 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env415 envinst415 = {
        .base923 =  base923 ,
    };
    return ( (  reduce414 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv415){ .fun = lam415, .env = envinst415 } ) ) );
}

static  struct Maybe_297   next412 (    struct IntStrIter_371 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow413 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div85 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul84 ( (  op_dash_div85 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub83 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast196 ) ( (  op_dash_add82 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_346   next411 (    struct Zip_370 *  self676 ) {
    struct Zip_370  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next412 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next412 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next422 (    struct StrConcatIter_377 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next330 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next423 (    struct AppendIter_378 *  self776 ) {
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

static  struct Maybe_297   next421 (    struct StrConcatIter_376 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next422 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next420 (    struct StrCaseIter_375 *  self1115 ) {
    struct StrCaseIter_375 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_375_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_375_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_375_StrCaseIter2_t ) {
        return ( (  next421 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_375_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next419 (    struct StrConcatIter_374 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next420 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next418 (    struct Zip_373 *  self676 ) {
    struct Zip_373  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next419 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next419 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env429 {
    uint32_t  base923;
    ;
};

struct funenv429 {
    uint32_t  (*fun) (  struct env429  ,    int32_t  ,    uint32_t  );
    struct env429 env;
};

static  uint32_t   reduce428 (    struct Range_361  iterable812 ,    uint32_t  base814 ,   struct funenv429  fun816 ) {
    uint32_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv429  temp430 = (  fun816 );
            x817 = ( temp430.fun ( temp430.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp431;
    return (  temp431 );
}

static  uint32_t   lam429 (   struct env429 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul89 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow427 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env429 envinst429 = {
        .base923 =  base923 ,
    };
    return ( (  reduce428 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv429){ .fun = lam429, .env = envinst429 } ) ) );
}

static  struct Maybe_297   next426 (    struct IntStrIter_382 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow427 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div90 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul89 ( (  op_dash_div90 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub88 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast200 ) ( (  op_dash_add87 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next425 (    struct StrConcatIter_381 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next426 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next424 (    struct Zip_380 *  self676 ) {
    struct Zip_380  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next425 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next425 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next440 (    struct StrConcatIter_392 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next439 (    struct StrConcatIter_391 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next438 (    struct StrConcatIter_390 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next439 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next412 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next437 (    struct StrConcatIter_389 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next438 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next436 (    struct StrConcatIter_388 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next437 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next435 (    struct StrConcatIter_387 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next436 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next434 (    struct StrCaseIter_386 *  self1115 ) {
    struct StrCaseIter_386 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_386_StrCaseIter1_t ) {
        return ( (  next326 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_386_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_386_StrCaseIter2_t ) {
        return ( (  next435 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_386_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_297   next433 (    struct StrConcatIter_385 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next434 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next432 (    struct Zip_384 *  self676 ) {
    struct Zip_384  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next433 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next433 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next444 (    struct StrConcatIter_397 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next412 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next443 (    struct StrConcatIter_396 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next444 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next423 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next442 (    struct StrConcatIter_395 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next443 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next412 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next441 (    struct Zip_394 *  self676 ) {
    struct Zip_394  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next442 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next442 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env450 {
    size_t  base923;
    ;
};

struct funenv450 {
    size_t  (*fun) (  struct env450  ,    int32_t  ,    size_t  );
    struct env450 env;
};

static  size_t   reduce449 (    struct Range_361  iterable812 ,    size_t  base814 ,   struct funenv450  fun816 ) {
    size_t  x817 = (  base814 );
    struct RangeIter_363  it818 = ( (  into_dash_iter362 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_328  dref819 = ( (  next364 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_328_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_328_Just_t ) {
            struct funenv450  temp451 = (  fun816 );
            x817 = ( temp451.fun ( temp451.env ,  ( dref819 .stuff .Maybe_328_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp452;
    return (  temp452 );
}

static  size_t   lam450 (   struct env450 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul95 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow448 (    size_t  base923 ,    int32_t  p925 ) {
    struct env450 envinst450 = {
        .base923 =  base923 ,
    };
    return ( (  reduce449 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv450){ .fun = lam450, .env = envinst450 } ) ) );
}

static  struct Maybe_297   next447 (    struct IntStrIter_401 *  self1027 ) {
    if ( (  cmp75 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow448 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div96 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul95 ( (  op_dash_div96 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub94 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub83 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast201 ) ( (  op_dash_add93 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_297_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_297   next446 (    struct StrConcatIter_400 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next447 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next445 (    struct Zip_399 *  self676 ) {
    struct Zip_399  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next446 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next446 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_346   next453 (    struct Zip_403 *  self676 ) {
    struct Zip_403  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next444 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next444 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_297   next456 (    struct StrConcatIter_407 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next444 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next326 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_297   next455 (    struct StrConcatIter_406 *  self1093 ) {
    struct Maybe_297  dref1094 = ( (  next456 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_297_Just ) ( ( dref1094 .stuff .Maybe_297_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_297_None_t ) {
        return ( (  next412 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_346   next454 (    struct Zip_405 *  self676 ) {
    struct Zip_405  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_297  dref678 = ( (  next455 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_297_None_t ) {
            return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
        }
        else if ( dref678.tag == Maybe_297_Just_t ) {
            struct Maybe_328  dref680 = ( (  next349 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_328_None_t ) {
                return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
            }
            else if ( dref680.tag == Maybe_328_Just_t ) {
                ( (  next455 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next349 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_346_Just ) ( ( ( Tuple2_347_Tuple2 ) ( ( dref678 .stuff .Maybe_297_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_328_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_344   zip457 (    struct Slice_279  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter282 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip458 (    struct Slice_5  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip459 (    struct List_3  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter290 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip460 (    struct List_280  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_278  left_dash_it687 = ( (  into_dash_iter281 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_368   zip461 (    struct Slice_5  left684 ,    struct Slice_5  right686 ) {
    struct SliceIter_287  left_dash_it687 = ( (  into_dash_iter291 ) ( (  left684 ) ) );
    struct SliceIter_287  right_dash_it688 = ( (  into_dash_iter291 ) ( (  right686 ) ) );
    return ( (struct Zip_368) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct IntStrIter_371   into_dash_iter463 (    struct IntStrIter_371  self1024 ) {
    return (  self1024 );
}

static  struct Zip_370   zip462 (    struct IntStrIter_371  left684 ,    struct FromIter_341  right686 ) {
    struct IntStrIter_371  left_dash_it687 = ( (  into_dash_iter463 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_370) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_374   into_dash_iter465 (    struct StrConcatIter_374  self1090 ) {
    return (  self1090 );
}

static  struct Zip_373   zip464 (    struct StrConcatIter_374  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_374  left_dash_it687 = ( (  into_dash_iter465 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_373) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_381   into_dash_iter467 (    struct StrConcatIter_381  self1090 ) {
    return (  self1090 );
}

static  struct Zip_380   zip466 (    struct StrConcatIter_381  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_381  left_dash_it687 = ( (  into_dash_iter467 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_380) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_385   into_dash_iter469 (    struct StrConcatIter_385  self1090 ) {
    return (  self1090 );
}

static  struct Zip_384   zip468 (    struct StrConcatIter_385  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_385  left_dash_it687 = ( (  into_dash_iter469 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_384) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_395   into_dash_iter471 (    struct StrConcatIter_395  self1090 ) {
    return (  self1090 );
}

static  struct Zip_394   zip470 (    struct StrConcatIter_395  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_395  left_dash_it687 = ( (  into_dash_iter471 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_394) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_400   into_dash_iter473 (    struct StrConcatIter_400  self1090 ) {
    return (  self1090 );
}

static  struct Zip_399   zip472 (    struct StrConcatIter_400  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_400  left_dash_it687 = ( (  into_dash_iter473 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_399) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_397   into_dash_iter475 (    struct StrConcatIter_397  self1090 ) {
    return (  self1090 );
}

static  struct Zip_403   zip474 (    struct StrConcatIter_397  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_397  left_dash_it687 = ( (  into_dash_iter475 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_403) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct StrConcatIter_406   into_dash_iter477 (    struct StrConcatIter_406  self1090 ) {
    return (  self1090 );
}

static  struct Zip_405   zip476 (    struct StrConcatIter_406  left684 ,    struct FromIter_341  right686 ) {
    struct StrConcatIter_406  left_dash_it687 = ( (  into_dash_iter477 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter366 ) ( (  right686 ) ) );
    return ( (struct Zip_405) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

struct TakeWhile_479 {
    struct Scanner_286  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_479   into_dash_iter478 (    struct TakeWhile_479  self718 ) {
    return (  self718 );
}

struct TakeWhile_481 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_481   into_dash_iter480 (    struct TakeWhile_481  self718 ) {
    return (  self718 );
}

struct DropWhile_484 {
    struct SliceIter_287  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_483 {
    struct DropWhile_484  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_483   into_dash_iter482 (    struct TakeWhile_483  self718 ) {
    return (  self718 );
}

struct DropWhile_488 {
    struct DropWhile_484  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct DropWhile_487 {
    struct DropWhile_488  f_it;
    bool (*  f_pred )(    char  );
    bool  f_finished;
};

struct TakeWhile_486 {
    struct DropWhile_487  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_486   into_dash_iter485 (    struct TakeWhile_486  self718 ) {
    return (  self718 );
}

struct TakeWhile_490 {
    struct DropWhile_487  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_490   into_dash_iter489 (    struct TakeWhile_490  self718 ) {
    return (  self718 );
}

static  struct Maybe_297   next492 (    struct Scanner_286 *  self2232 ) {
    return ( (  next330 ) ( ( & ( ( * (  self2232 ) ) .f_s ) ) ) );
}

static  struct Maybe_297   next491 (    struct TakeWhile_479 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next492 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next493 (    struct TakeWhile_481 *  self721 ) {
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

static  struct Maybe_297   next495 (    struct DropWhile_484 *  self736 ) {
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

static  struct Maybe_297   next494 (    struct TakeWhile_483 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next495 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

struct TakeWhile_497 {
    struct DropWhile_487  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_297   next499 (    struct DropWhile_488 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next495 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next495 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next498 (    struct DropWhile_487 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next499 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_297  dref737 = ( (  next499 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next496 (    struct TakeWhile_497 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next498 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next500 (    struct TakeWhile_486 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next498 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct Maybe_297   next501 (    struct TakeWhile_490 *  self721 ) {
    struct Maybe_297  mx722 = ( (  next498 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
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

static  struct TakeWhile_479   take_dash_while502 (    struct Scanner_286 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_479) { .f_it = ( (  into_dash_iter285 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_481   take_dash_while503 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_481) { .f_it = ( (  into_dash_iter289 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_487   into_dash_iter505 (    struct DropWhile_487  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_490   take_dash_while504 (    struct DropWhile_487  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_490) { .f_it = ( (  into_dash_iter505 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_497   take_dash_while506 (    struct DropWhile_487  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_497) { .f_it = ( (  into_dash_iter505 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_486   take_dash_while507 (    struct DropWhile_487  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_486) { .f_it = ( (  into_dash_iter505 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_484   into_dash_iter509 (    struct DropWhile_484  self733 ) {
    return (  self733 );
}

static  struct TakeWhile_483   take_dash_while508 (    struct DropWhile_484  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_483) { .f_it = ( (  into_dash_iter509 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct DropWhile_488   into_dash_iter510 (    struct DropWhile_488  self733 ) {
    return (  self733 );
}

static  struct SliceIter_287   into_dash_iter512 (    struct DynStr_131  self1501 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1501 ) .f_contents ) ) );
}

static  struct DropWhile_484   drop_dash_while511 (    struct DynStr_131  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_484) { .f_it = ( (  into_dash_iter512 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_488   drop_dash_while513 (    struct DropWhile_484  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_488) { .f_it = ( (  into_dash_iter509 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_487   drop_dash_while514 (    struct DropWhile_488  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_487) { .f_it = ( (  into_dash_iter510 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_378   append515 (    enum EmptyIter_294  it760 ,    char  e762 ) {
    return ( (struct AppendIter_378) { .f_it = ( (  into_dash_iter295 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_378   cons516 (    enum EmptyIter_294  it765 ,    char  e767 ) {
    return ( (  append515 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_378   single517 (    char  e770 ) {
    return ( (  cons516 ) ( ( (  nil293 ) ( ) ) ,  (  e770 ) ) );
}

struct Key_522 {
    enum {
        Key_522_Escape_t,
        Key_522_Enter_t,
        Key_522_Tab_t,
        Key_522_Backspace_t,
        Key_522_Char_t,
        Key_522_Ctrl_t,
        Key_522_Up_t,
        Key_522_Down_t,
        Key_522_Left_t,
        Key_522_Right_t,
        Key_522_Home_t,
        Key_522_End_t,
        Key_522_PageUp_t,
        Key_522_PageDown_t,
        Key_522_Delete_t,
        Key_522_Insert_t,
        Key_522_F1_t,
        Key_522_F2_t,
        Key_522_F3_t,
        Key_522_F4_t,
        Key_522_F5_t,
        Key_522_F6_t,
        Key_522_F7_t,
        Key_522_F8_t,
        Key_522_F9_t,
        Key_522_F10_t,
        Key_522_F11_t,
        Key_522_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_522_Char_s;
        struct {
            char  field0;
        } Key_522_Ctrl_s;
    } stuff;
};

static struct Key_522 Key_522_Char (  char  field0 ) {
    return ( struct Key_522 ) { .tag = Key_522_Char_t, .stuff = { .Key_522_Char_s = { .field0 = field0 } } };
};

static struct Key_522 Key_522_Ctrl (  char  field0 ) {
    return ( struct Key_522 ) { .tag = Key_522_Ctrl_t, .stuff = { .Key_522_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_523 {
    enum MouseButton_144  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_521 {
    enum {
        InputEvent_521_Key_t,
        InputEvent_521_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_522  field0;
        } InputEvent_521_Key_s;
        struct {
            struct MouseEvent_523  field0;
        } InputEvent_521_Mouse_s;
    } stuff;
};

static struct InputEvent_521 InputEvent_521_Key (  struct Key_522  field0 ) {
    return ( struct InputEvent_521 ) { .tag = InputEvent_521_Key_t, .stuff = { .InputEvent_521_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_521 InputEvent_521_Mouse (  struct MouseEvent_523  field0 ) {
    return ( struct InputEvent_521 ) { .tag = InputEvent_521_Mouse_t, .stuff = { .InputEvent_521_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_520 {
    enum {
        Maybe_520_None_t,
        Maybe_520_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_521  field0;
        } Maybe_520_Just_s;
    } stuff;
};

static struct Maybe_520 Maybe_520_Just (  struct InputEvent_521  field0 ) {
    return ( struct Maybe_520 ) { .tag = Maybe_520_Just_t, .stuff = { .Maybe_520_Just_s = { .field0 = field0 } } };
};

struct FunIter_519 {
    struct Maybe_520 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_519   into_dash_iter518 (    struct FunIter_519  self782 ) {
    return (  self782 );
}

static  struct Maybe_520   next524 (    struct FunIter_519 *  self785 ) {
    if ( ( ( * (  self785 ) ) .f_finished ) ) {
        return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
    }
    struct Maybe_520  dref786 = ( ( ( * (  self785 ) ) .f_fun ) ( ) );
    if ( dref786.tag == Maybe_520_Just_t ) {
        return ( ( Maybe_520_Just ) ( ( dref786 .stuff .Maybe_520_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_520_None_t ) {
        (*  self785 ) .f_finished = ( true );
        return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
    }
}

static  struct FunIter_519   from_dash_function525 (    struct Maybe_520 (*  fun790 )(  ) ) {
    return ( (struct FunIter_519) { .f_fun = (  fun790 ) , .f_finished = ( false ) } );
}

struct env527 {
    ;
    ;
    struct Slice_279  new_dash_slice1703;
};

struct funenv527 {
    enum Unit_13  (*fun) (  struct env527  ,    struct Tuple2_352  );
    struct env527 env;
};

static  enum Unit_13   for_dash_each526 (    struct Zip_344  iterable793 ,   struct funenv527  fun795 ) {
    struct Zip_344  temp528 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp528 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next353 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv527  temp529 = (  fun795 );
            ( temp529.fun ( temp529.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env531 {
    ;
    ;
    struct Slice_5  new_dash_slice1703;
};

struct funenv531 {
    enum Unit_13  (*fun) (  struct env531  ,    struct Tuple2_347  );
    struct env531 env;
};

static  enum Unit_13   for_dash_each530 (    struct Zip_340  iterable793 ,   struct funenv531  fun795 ) {
    struct Zip_340  temp532 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp532 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv531  temp533 = (  fun795 );
            ( temp533.fun ( temp533.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env535 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv535 {
    enum Unit_13  (*fun) (  struct env535  ,    char  );
    struct env535 env;
};

static  enum Unit_13   for_dash_each534 (    struct DynStr_131  iterable793 ,   struct funenv535  fun795 ) {
    struct SliceIter_287  temp536 = ( (  into_dash_iter512 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp536 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv535  temp537 = (  fun795 );
            ( temp537.fun ( temp537.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env541 {
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

struct funenv541 {
    enum Unit_13  (*fun) (  struct env541  ,    struct List_280 *  );
    struct env541 env;
};

struct env540 {
    ;
    ;
    ;
    ;
    ;
    struct env541 envinst541;
};

struct funenv540 {
    enum Unit_13  (*fun) (  struct env540  ,    struct List_280 *  ,    struct List_3  );
    struct env540 env;
};

struct env539 {
    struct env540 envinst540;
    struct List_280 *  list1750;
};

struct funenv539 {
    enum Unit_13  (*fun) (  struct env539  ,    struct List_3  );
    struct env539 env;
};

static  enum Unit_13   for_dash_each538 (    struct Map_299  iterable793 ,   struct funenv539  fun795 ) {
    struct Map_299  temp542 = ( (  into_dash_iter298 ) ( (  iterable793 ) ) );
    struct Map_299 *  it796 = ( &temp542 );
    while ( ( true ) ) {
        struct Maybe_314  dref797 = ( (  next313 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_314_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_314_Just_t ) {
            struct funenv539  temp543 = (  fun795 );
            ( temp543.fun ( temp543.env ,  ( dref797 .stuff .Maybe_314_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_546 {
    struct List_3  f_chars;
};

struct env545 {
    struct env304 envinst304;
    struct StrBuilder_546 *  builder1989;
};

struct funenv545 {
    enum Unit_13  (*fun) (  struct env545  ,    char  );
    struct env545 env;
};

static  struct ConstStrIter_308   into_dash_iter548 (    struct ConstStrIter_308  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each544 (    struct ConstStrIter_308  iterable793 ,   struct funenv545  fun795 ) {
    struct ConstStrIter_308  temp547 = ( (  into_dash_iter548 ) ( (  iterable793 ) ) );
    struct ConstStrIter_308 *  it796 = ( &temp547 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next326 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv545  temp549 = (  fun795 );
            ( temp549.fun ( temp549.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_552 {
    struct Cell_53 *  f_ptr;
    size_t  f_count;
};

struct env551 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_552  s1452;
    ;
    ;
    ;
};

struct funenv551 {
    enum Unit_13  (*fun) (  struct env551  ,    int32_t  );
    struct env551 env;
};

static  enum Unit_13   for_dash_each550 (    struct Range_361  iterable793 ,   struct funenv551  fun795 ) {
    struct RangeIter_363  temp553 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp553 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv551  temp554 = (  fun795 );
            ( temp554.fun ( temp554.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env556 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_552  s1452;
    ;
    ;
    ;
};

struct funenv556 {
    enum Unit_13  (*fun) (  struct env556  ,    int32_t  );
    struct env556 env;
};

static  enum Unit_13   for_dash_each555 (    struct Range_361  iterable793 ,   struct funenv556  fun795 ) {
    struct RangeIter_363  temp557 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp557 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv556  temp558 = (  fun795 );
            ( temp558.fun ( temp558.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env560 {
    ;
    struct Scanner_286 *  it899;
};

struct funenv560 {
    struct Maybe_297  (*fun) (  struct env560  ,    int32_t  );
    struct env560 env;
};

static  enum Unit_13   for_dash_each559 (    struct Range_361  iterable793 ,   struct funenv560  fun795 ) {
    struct RangeIter_363  temp561 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp561 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv560  temp562 = (  fun795 );
            ( temp562.fun ( temp562.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env564 {
    ;
    struct List_3 *  list1722;
    ;
    ;
    ;
};

struct funenv564 {
    enum Unit_13  (*fun) (  struct env564  ,    struct Tuple2_347  );
    struct env564 env;
};

static  enum Unit_13   for_dash_each563 (    struct Drop_339  iterable793 ,   struct funenv564  fun795 ) {
    struct Drop_339  temp565 = ( (  into_dash_iter338 ) ( (  iterable793 ) ) );
    struct Drop_339 *  it796 = ( &temp565 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next345 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv564  temp566 = (  fun795 );
            ( temp566.fun ( temp566.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env568 {
    struct Slice_5  dest1411;
    ;
    ;
};

struct funenv568 {
    enum Unit_13  (*fun) (  struct env568  ,    struct Tuple2_347  );
    struct env568 env;
};

static  enum Unit_13   for_dash_each567 (    struct Zip_340  iterable793 ,   struct funenv568  fun795 ) {
    struct Zip_340  temp569 = ( (  into_dash_iter356 ) ( (  iterable793 ) ) );
    struct Zip_340 *  it796 = ( &temp569 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next348 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv568  temp570 = (  fun795 );
            ( temp570.fun ( temp570.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env572 {
    ;
    struct List_280 *  list1722;
    ;
    ;
    ;
};

struct funenv572 {
    enum Unit_13  (*fun) (  struct env572  ,    struct Tuple2_352  );
    struct env572 env;
};

static  enum Unit_13   for_dash_each571 (    struct Drop_343  iterable793 ,   struct funenv572  fun795 ) {
    struct Drop_343  temp573 = ( (  into_dash_iter342 ) ( (  iterable793 ) ) );
    struct Drop_343 *  it796 = ( &temp573 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next350 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv572  temp574 = (  fun795 );
            ( temp574.fun ( temp574.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env576 {
    struct Slice_279  dest1411;
    ;
    ;
};

struct funenv576 {
    enum Unit_13  (*fun) (  struct env576  ,    struct Tuple2_352  );
    struct env576 env;
};

static  enum Unit_13   for_dash_each575 (    struct Zip_344  iterable793 ,   struct funenv576  fun795 ) {
    struct Zip_344  temp577 = ( (  into_dash_iter358 ) ( (  iterable793 ) ) );
    struct Zip_344 *  it796 = ( &temp577 );
    while ( ( true ) ) {
        struct Maybe_351  dref797 = ( (  next353 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_351_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_351_Just_t ) {
            struct funenv576  temp578 = (  fun795 );
            ( temp578.fun ( temp578.env ,  ( dref797 .stuff .Maybe_351_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env580 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv580 {
    enum Unit_13  (*fun) (  struct env580  ,    char  );
    struct env580 env;
};

static  enum Unit_13   for_dash_each579 (    struct List_3 *  iterable793 ,   struct funenv580  fun795 ) {
    struct SliceIter_287  temp581 = ( (  into_dash_iter289 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp581 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv580  temp582 = (  fun795 );
            ( temp582.fun ( temp582.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env584 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv584 {
    enum Unit_13  (*fun) (  struct env584  ,    char  );
    struct env584 env;
};

static  enum Unit_13   for_dash_each583 (    struct Slice_5  iterable793 ,   struct funenv584  fun795 ) {
    struct SliceIter_287  temp585 = ( (  into_dash_iter291 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp585 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv584  temp586 = (  fun795 );
            ( temp586.fun ( temp586.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env588 {
    struct env304 envinst304;
    struct List_3 *  list1750;
};

struct funenv588 {
    enum Unit_13  (*fun) (  struct env588  ,    char  );
    struct env588 env;
};

static  enum Unit_13   for_dash_each587 (    struct TakeWhile_481  iterable793 ,   struct funenv588  fun795 ) {
    struct TakeWhile_481  temp589 = ( (  into_dash_iter480 ) ( (  iterable793 ) ) );
    struct TakeWhile_481 *  it796 = ( &temp589 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next493 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv588  temp590 = (  fun795 );
            ( temp590.fun ( temp590.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_592 {
    struct Slice_279  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceAddressIter_592   into_dash_iter594 (    struct SliceAddressIter_592  self1401 ) {
    return (  self1401 );
}

struct Maybe_595 {
    enum {
        Maybe_595_None_t,
        Maybe_595_Just_t,
    } tag;
    union {
        struct {
            struct List_3 *  field0;
        } Maybe_595_Just_s;
    } stuff;
};

static struct Maybe_595 Maybe_595_Just (  struct List_3 *  field0 ) {
    return ( struct Maybe_595 ) { .tag = Maybe_595_Just_t, .stuff = { .Maybe_595_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_595   next596 (    struct SliceAddressIter_592 *  self1404 ) {
    size_t  off1405 = ( ( * (  self1404 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add93 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1404 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_595) { .tag = Maybe_595_None_t } );
    }
    struct List_3 *  elem1406 = ( (  offset_dash_ptr154 ) ( ( ( ( * (  self1404 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1405 ) ) ) ) );
    (*  self1404 ) .f_current_dash_offset = (  op_dash_add93 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_595_Just ) ( (  elem1406 ) ) );
}

static  enum Unit_13   for_dash_each591 (    struct SliceAddressIter_592  iterable793 ,    enum Unit_13 (*  fun795 )(    struct List_3 *  ) ) {
    struct SliceAddressIter_592  temp593 = ( (  into_dash_iter594 ) ( (  iterable793 ) ) );
    struct SliceAddressIter_592 *  it796 = ( &temp593 );
    while ( ( true ) ) {
        struct Maybe_595  dref797 = ( (  next596 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_595_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_595_Just_t ) {
            ( (  fun795 ) ( ( dref797 .stuff .Maybe_595_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env598 {
    struct env304 envinst304;
    struct StrBuilder_546 *  builder1989;
};

struct funenv598 {
    enum Unit_13  (*fun) (  struct env598  ,    char  );
    struct env598 env;
};

static  enum Unit_13   for_dash_each597 (    struct TakeWhile_486  iterable793 ,   struct funenv598  fun795 ) {
    struct TakeWhile_486  temp599 = ( (  into_dash_iter485 ) ( (  iterable793 ) ) );
    struct TakeWhile_486 *  it796 = ( &temp599 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next500 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv598  temp600 = (  fun795 );
            ( temp600.fun ( temp600.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env602 {
    struct env304 envinst304;
    struct StrBuilder_546 *  builder1989;
};

struct funenv602 {
    enum Unit_13  (*fun) (  struct env602  ,    char  );
    struct env602 env;
};

static  enum Unit_13   for_dash_each601 (    struct TakeWhile_490  iterable793 ,   struct funenv602  fun795 ) {
    struct TakeWhile_490  temp603 = ( (  into_dash_iter489 ) ( (  iterable793 ) ) );
    struct TakeWhile_490 *  it796 = ( &temp603 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next501 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv602  temp604 = (  fun795 );
            ( temp604.fun ( temp604.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env607 {
    ;
    struct env304 envinst304;
    ;
};

struct funenv607 {
    enum Unit_13  (*fun) (  struct env607  ,    struct StrBuilder_546 *  ,    char  );
    struct env607 env;
};

struct env606 {
    struct StrBuilder_546 *  sb2794;
    struct env607 envinst607;
};

struct funenv606 {
    enum Unit_13  (*fun) (  struct env606  ,    char  );
    struct env606 env;
};

static  enum Unit_13   for_dash_each605 (    struct List_3  iterable793 ,   struct funenv606  fun795 ) {
    struct SliceIter_287  temp608 = ( (  into_dash_iter290 ) ( (  iterable793 ) ) );
    struct SliceIter_287 *  it796 = ( &temp608 );
    while ( ( true ) ) {
        struct Maybe_297  dref797 = ( (  next330 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_297_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_297_Just_t ) {
            struct funenv606  temp609 = (  fun795 );
            ( temp609.fun ( temp609.env ,  ( dref797 .stuff .Maybe_297_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env611 {
    struct Cell_53 (*  fun1454 )(    struct Cell_53  );
    struct Slice_552  s1452;
    ;
    ;
    ;
};

struct funenv611 {
    enum Unit_13  (*fun) (  struct env611  ,    int32_t  );
    struct env611 env;
};

static  enum Unit_13   for_dash_each610 (    struct Range_361  iterable793 ,   struct funenv611  fun795 ) {
    struct RangeIter_363  temp612 = ( (  into_dash_iter362 ) ( (  iterable793 ) ) );
    struct RangeIter_363 *  it796 = ( &temp612 );
    while ( ( true ) ) {
        struct Maybe_328  dref797 = ( (  next364 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_328_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_328_Just_t ) {
            struct funenv611  temp613 = (  fun795 );
            ( temp613.fun ( temp613.env ,  ( dref797 .stuff .Maybe_328_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

enum ColorPalette_618 {
    ColorPalette_618_Palette8,
    ColorPalette_618_Palette16,
    ColorPalette_618_Palette256,
    ColorPalette_618_PaletteRGB,
};

struct Tui_617 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_618  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_136  f_orig_dash_termios;
};

struct Screen_616 {
    enum CAllocator_4  f_al;
    struct Tui_617 *  f_tui;
    struct Slice_552  f_current;
    struct Slice_552  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_54  f_default_dash_fg;
    struct Color_54  f_default_dash_bg;
};

struct env615 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv615 {
    enum Unit_13  (*fun) (  struct env615  ,    struct Tuple2_347  );
    struct env615 env;
};

static  enum Unit_13   for_dash_each614 (    struct Zip_370  iterable793 ,   struct funenv615  fun795 ) {
    struct Zip_370  temp619 = ( (  into_dash_iter369 ) ( (  iterable793 ) ) );
    struct Zip_370 *  it796 = ( &temp619 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next411 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv615  temp620 = (  fun795 );
            ( temp620.fun ( temp620.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env622 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv622 {
    enum Unit_13  (*fun) (  struct env622  ,    struct Tuple2_347  );
    struct env622 env;
};

static  enum Unit_13   for_dash_each621 (    struct Zip_373  iterable793 ,   struct funenv622  fun795 ) {
    struct Zip_373  temp623 = ( (  into_dash_iter372 ) ( (  iterable793 ) ) );
    struct Zip_373 *  it796 = ( &temp623 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next418 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv622  temp624 = (  fun795 );
            ( temp624.fun ( temp624.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env626 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv626 {
    enum Unit_13  (*fun) (  struct env626  ,    struct Tuple2_347  );
    struct env626 env;
};

static  enum Unit_13   for_dash_each625 (    struct Zip_380  iterable793 ,   struct funenv626  fun795 ) {
    struct Zip_380  temp627 = ( (  into_dash_iter379 ) ( (  iterable793 ) ) );
    struct Zip_380 *  it796 = ( &temp627 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next424 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv626  temp628 = (  fun795 );
            ( temp628.fun ( temp628.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env630 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv630 {
    enum Unit_13  (*fun) (  struct env630  ,    struct Tuple2_347  );
    struct env630 env;
};

static  enum Unit_13   for_dash_each629 (    struct Zip_384  iterable793 ,   struct funenv630  fun795 ) {
    struct Zip_384  temp631 = ( (  into_dash_iter383 ) ( (  iterable793 ) ) );
    struct Zip_384 *  it796 = ( &temp631 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next432 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv630  temp632 = (  fun795 );
            ( temp632.fun ( temp632.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env634 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv634 {
    enum Unit_13  (*fun) (  struct env634  ,    struct Tuple2_347  );
    struct env634 env;
};

static  enum Unit_13   for_dash_each633 (    struct Zip_394  iterable793 ,   struct funenv634  fun795 ) {
    struct Zip_394  temp635 = ( (  into_dash_iter393 ) ( (  iterable793 ) ) );
    struct Zip_394 *  it796 = ( &temp635 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next441 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv634  temp636 = (  fun795 );
            ( temp636.fun ( temp636.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env638 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv638 {
    enum Unit_13  (*fun) (  struct env638  ,    struct Tuple2_347  );
    struct env638 env;
};

static  enum Unit_13   for_dash_each637 (    struct Zip_399  iterable793 ,   struct funenv638  fun795 ) {
    struct Zip_399  temp639 = ( (  into_dash_iter398 ) ( (  iterable793 ) ) );
    struct Zip_399 *  it796 = ( &temp639 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next445 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv638  temp640 = (  fun795 );
            ( temp640.fun ( temp640.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env642 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv642 {
    enum Unit_13  (*fun) (  struct env642  ,    struct Tuple2_347  );
    struct env642 env;
};

static  enum Unit_13   for_dash_each641 (    struct Zip_403  iterable793 ,   struct funenv642  fun795 ) {
    struct Zip_403  temp643 = ( (  into_dash_iter402 ) ( (  iterable793 ) ) );
    struct Zip_403 *  it796 = ( &temp643 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next453 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv642  temp644 = (  fun795 );
            ( temp644.fun ( temp644.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env646 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv646 {
    enum Unit_13  (*fun) (  struct env646  ,    struct Tuple2_347  );
    struct env646 env;
};

static  enum Unit_13   for_dash_each645 (    struct Zip_405  iterable793 ,   struct funenv646  fun795 ) {
    struct Zip_405  temp647 = ( (  into_dash_iter404 ) ( (  iterable793 ) ) );
    struct Zip_405 *  it796 = ( &temp647 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next454 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv646  temp648 = (  fun795 );
            ( temp648.fun ( temp648.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env650 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv650 {
    enum Unit_13  (*fun) (  struct env650  ,    struct Tuple2_347  );
    struct env650 env;
};

static  enum Unit_13   for_dash_each649 (    struct Zip_373  iterable793 ,   struct funenv650  fun795 ) {
    struct Zip_373  temp651 = ( (  into_dash_iter372 ) ( (  iterable793 ) ) );
    struct Zip_373 *  it796 = ( &temp651 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next418 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv650  temp652 = (  fun795 );
            ( temp652.fun ( temp652.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env654 {
    ;
    size_t  i2457;
    ;
    struct Color_54  bg2461;
    struct Screen_616 *  screen2449;
    struct Color_54  fg2460;
    ;
};

struct funenv654 {
    enum Unit_13  (*fun) (  struct env654  ,    struct Tuple2_347  );
    struct env654 env;
};

static  enum Unit_13   for_dash_each653 (    struct Zip_373  iterable793 ,   struct funenv654  fun795 ) {
    struct Zip_373  temp655 = ( (  into_dash_iter372 ) ( (  iterable793 ) ) );
    struct Zip_373 *  it796 = ( &temp655 );
    while ( ( true ) ) {
        struct Maybe_346  dref797 = ( (  next418 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_346_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_346_Just_t ) {
            struct funenv654  temp656 = (  fun795 );
            ( temp656.fun ( temp656.env ,  ( dref797 .stuff .Maybe_346_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SmolArrayIter_658 {
    struct SmolArray_98  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_658   into_dash_iter659 (    struct SmolArray_98  self1556 ) {
    return ( (struct SmolArrayIter_658) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

struct StrConcat_665 {
    struct StrConcat_16  field0;
    int32_t  field1;
};

static struct StrConcat_665 StrConcat_665_StrConcat (  struct StrConcat_16  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_665 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_664 {
    struct StrConcat_665  field0;
    char  field1;
};

static struct StrConcat_664 StrConcat_664_StrConcat (  struct StrConcat_665  field0 ,  char  field1 ) {
    return ( struct StrConcat_664 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_668 {
    const char*  field0;
    struct StrConcat_664  field1;
};

static struct StrConcat_668 StrConcat_668_StrConcat (  const char*  field0 ,  struct StrConcat_664  field1 ) {
    return ( struct StrConcat_668 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_667 {
    struct StrConcat_668  field0;
    char  field1;
};

static struct StrConcat_667 StrConcat_667_StrConcat (  struct StrConcat_668  field0 ,  char  field1 ) {
    return ( struct StrConcat_667 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str672 (    int32_t  self1039 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1039 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str671 (    struct StrConcat_665  self1102 ) {
    struct StrConcat_665  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str25 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str672 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str670 (    struct StrConcat_664  self1102 ) {
    struct StrConcat_664  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str671 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str669 (    struct StrConcat_668  self1102 ) {
    struct StrConcat_668  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str670 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str666 (    struct StrConcat_667  self1102 ) {
    struct StrConcat_667  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str669 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic663 (    struct StrConcat_664  errmsg1254 ) {
    ( (  print_dash_str666 ) ( ( ( StrConcat_667_StrConcat ) ( ( ( StrConcat_668_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t *   get_dash_ptr662 (    struct Array_99 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast188 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get661 (    struct Array_99 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr662 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next660 (    struct SmolArrayIter_658 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get661 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce657 (    struct SmolArray_98  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
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
    uint32_t  temp673;
    return (  temp673 );
}

struct SmolArrayIter_675 {
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_675   into_dash_iter676 (    struct SmolArray_101  self1556 ) {
    return ( (struct SmolArrayIter_675) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr679 (    struct Array_102 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast189 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get678 (    struct Array_102 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr679 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next677 (    struct SmolArrayIter_675 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get678 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce674 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_675  it818 = ( (  into_dash_iter676 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next677 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp680;
    return (  temp680 );
}

struct SmolArrayIter_682 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_682   into_dash_iter683 (    struct SmolArray_104  self1556 ) {
    return ( (struct SmolArrayIter_682) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr686 (    struct Array_105 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast190 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr158 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get685 (    struct Array_105 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr686 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_325   next684 (    struct SmolArrayIter_682 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_325) { .tag = Maybe_325_None_t } );
    }
    uint32_t  e1565 = ( (  get685 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add93 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_325_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce681 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_682  it818 = ( (  into_dash_iter683 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_325  dref819 = ( (  next684 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_325_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_325_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_325_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp687;
    return (  temp687 );
}

static  uint32_t   reduce688 (    struct Map_307  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
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
    uint32_t  temp689;
    return (  temp689 );
}

struct Maybe_691 {
    enum {
        Maybe_691_None_t,
        Maybe_691_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_691_Just_s;
    } stuff;
};

static struct Maybe_691 Maybe_691_Just (  int64_t  field0 ) {
    return ( struct Maybe_691 ) { .tag = Maybe_691_Just_t, .stuff = { .Maybe_691_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_691   reduce690 (    struct TakeWhile_479  iterable812 ,    struct Maybe_691  base814 ,    struct Maybe_691 (*  fun816 )(    char  ,    struct Maybe_691  ) ) {
    struct Maybe_691  x817 = (  base814 );
    struct TakeWhile_479  it818 = ( (  into_dash_iter478 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next491 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_691  temp692;
    return (  temp692 );
}

static  size_t   reduce693 (    struct TakeWhile_479  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_479  it818 = ( (  into_dash_iter478 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next491 ) ( ( & (  it818 ) ) ) );
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

static  int32_t   reduce695 (    struct Map_310  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
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
    int32_t  temp696;
    return (  temp696 );
}

static  size_t   reduce697 (    struct TakeWhile_481  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_481  it818 = ( (  into_dash_iter480 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next493 ) ( ( & (  it818 ) ) ) );
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

struct env700 {
    bool (*  fun845 )(    struct Tuple2_410  );
};

struct funenv700 {
    bool  (*fun) (  struct env700  ,    struct Tuple2_410  ,    bool  );
    struct env700 env;
};

static  bool   reduce699 (    struct Zip_368  iterable812 ,    bool  base814 ,   struct funenv700  fun816 ) {
    bool  x817 = (  base814 );
    struct Zip_368  it818 = ( (  into_dash_iter367 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_409  dref819 = ( (  next408 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_409_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_409_Just_t ) {
            struct funenv700  temp701 = (  fun816 );
            x817 = ( temp701.fun ( temp701.env ,  ( dref819 .stuff .Maybe_409_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    bool  temp702;
    return (  temp702 );
}

static  struct Maybe_691   reduce703 (    struct TakeWhile_483  iterable812 ,    struct Maybe_691  base814 ,    struct Maybe_691 (*  fun816 )(    char  ,    struct Maybe_691  ) ) {
    struct Maybe_691  x817 = (  base814 );
    struct TakeWhile_483  it818 = ( (  into_dash_iter482 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next494 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_691  temp704;
    return (  temp704 );
}

static  size_t   reduce705 (    struct IntStrIter_371  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_371  it818 = ( (  into_dash_iter463 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next412 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp706;
    return (  temp706 );
}

static  size_t   reduce707 (    struct StrConcatIter_374  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_374  it818 = ( (  into_dash_iter465 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next419 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp708;
    return (  temp708 );
}

static  size_t   reduce709 (    struct StrConcatIter_381  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_381  it818 = ( (  into_dash_iter467 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next425 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp710;
    return (  temp710 );
}

static  size_t   reduce711 (    struct StrConcatIter_385  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_385  it818 = ( (  into_dash_iter469 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next433 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp712;
    return (  temp712 );
}

static  size_t   reduce713 (    struct StrConcatIter_395  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_395  it818 = ( (  into_dash_iter471 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next442 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp714;
    return (  temp714 );
}

static  size_t   reduce715 (    struct StrConcatIter_400  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_400  it818 = ( (  into_dash_iter473 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next446 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp716;
    return (  temp716 );
}

static  size_t   reduce717 (    struct StrConcatIter_397  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_397  it818 = ( (  into_dash_iter475 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next444 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp718;
    return (  temp718 );
}

static  size_t   reduce719 (    struct StrConcatIter_406  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_406  it818 = ( (  into_dash_iter477 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref819 = ( (  next455 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_297_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_297_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_297_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp720;
    return (  temp720 );
}

static  size_t   lam722 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count721 (    struct TakeWhile_479  it823 ) {
    return ( (  reduce693 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam722 ) ) );
}

static  size_t   lam724 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count723 (    struct TakeWhile_481  it823 ) {
    return ( (  reduce697 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam724 ) ) );
}

static  size_t   lam726 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count725 (    struct IntStrIter_371  it823 ) {
    return ( (  reduce705 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam726 ) ) );
}

static  size_t   lam728 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count727 (    struct StrConcatIter_374  it823 ) {
    return ( (  reduce707 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam728 ) ) );
}

static  size_t   lam730 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count729 (    struct StrConcatIter_381  it823 ) {
    return ( (  reduce709 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam730 ) ) );
}

static  size_t   lam732 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count731 (    struct StrConcatIter_385  it823 ) {
    return ( (  reduce711 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam732 ) ) );
}

static  size_t   lam734 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count733 (    struct StrConcatIter_395  it823 ) {
    return ( (  reduce713 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam734 ) ) );
}

static  size_t   lam736 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count735 (    struct StrConcatIter_400  it823 ) {
    return ( (  reduce715 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam736 ) ) );
}

static  size_t   lam738 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count737 (    struct StrConcatIter_397  it823 ) {
    return ( (  reduce717 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam738 ) ) );
}

static  size_t   lam740 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add93 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count739 (    struct StrConcatIter_406  it823 ) {
    return ( (  reduce719 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam740 ) ) );
}

static  int32_t   lam742 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add82 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum741 (    struct Map_310  it829 ) {
    return ( (  reduce695 ) ( (  it829 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  lam742 ) ) );
}

static  bool   lam700 (   struct env700 env ,    struct Tuple2_410  e847 ,    bool  x849 ) {
    return ( ( ( env.fun845 ) ( (  e847 ) ) ) && (  x849 ) );
}

static  bool   all743 (    struct Zip_368  it843 ,    bool (*  fun845 )(    struct Tuple2_410  ) ) {
    struct env700 envinst700 = {
        .fun845 =  fun845 ,
    };
    return ( (  reduce699 ) ( (  it843 ) ,  ( true ) ,  ( (struct funenv700){ .fun = lam700, .env = envinst700 } ) ) );
}

static  struct Maybe_314   head744 (    struct List_280 *  it861 ) {
    struct SliceIter_278  temp745 = ( (  into_dash_iter277 ) ( (  it861 ) ) );
    return ( (  next354 ) ( ( &temp745 ) ) );
}

static  struct Maybe_297   head746 (    struct TakeWhile_479  it861 ) {
    struct TakeWhile_479  temp747 = ( (  into_dash_iter478 ) ( (  it861 ) ) );
    return ( (  next491 ) ( ( &temp747 ) ) );
}

static  struct Maybe_297   head748 (    struct TakeWhile_483  it861 ) {
    struct TakeWhile_483  temp749 = ( (  into_dash_iter482 ) ( (  it861 ) ) );
    return ( (  next494 ) ( ( &temp749 ) ) );
}

static  struct Maybe_297   head750 (    struct TakeWhile_486  it861 ) {
    struct TakeWhile_486  temp751 = ( (  into_dash_iter485 ) ( (  it861 ) ) );
    return ( (  next500 ) ( ( &temp751 ) ) );
}

static  bool   null752 (    struct List_280 *  it864 ) {
    struct Maybe_314  dref865 = ( (  head744 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_314_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null753 (    struct TakeWhile_479  it864 ) {
    struct Maybe_297  dref865 = ( (  head746 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null754 (    struct TakeWhile_486  it864 ) {
    struct Maybe_297  dref865 = ( (  head750 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_297_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_297   lam560 (   struct env560 env ,    int32_t  dref902 ) {
    return ( (  next492 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_755 (    struct Scanner_286 *  it899 ,    size_t  n901 ) {
    struct env560 envinst560 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each559 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32270 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv560){ .fun = lam560, .env = envinst560 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or756 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors757 (    struct SmolArray_98  vals947 ) {
    return ( (  reduce657 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or756 ) ) );
}

static  uint32_t   u32_dash_ors758 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce674 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or756 ) ) );
}

static  uint32_t   u32_dash_ors759 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce681 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or756 ) ) );
}

static  uint32_t   u32_dash_and760 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg761 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod762 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div80 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub79 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp74 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add78 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_764 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp765 (    struct Cursor_764  l2492 ,    struct Cursor_764  r2494 ) {
    enum Ordering_10  dref2495 = ( (  cmp75 ) ( ( (  l2492 ) .f_y ) ,  ( (  r2494 ) .f_y ) ) );
    switch (  dref2495 ) {
        case Ordering_10_EQ : {
            return ( (  cmp75 ) ( ( (  l2492 ) .f_x ) ,  ( (  r2494 ) .f_x ) ) );
            break;
        }
        default: {
            enum Ordering_10  els2496 =  dref2495;
            return (  els2496 );
            break;
        }
    }
}

static  struct Cursor_764   min763 (    struct Cursor_764  l965 ,    struct Cursor_764  r967 ) {
    if ( (  cmp765 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   min766 (    int32_t  l965 ,    int32_t  r967 ) {
    if ( (  cmp75 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max767 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp75 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  struct Cursor_764   max768 (    struct Cursor_764  l970 ,    struct Cursor_764  r972 ) {
    if ( (  cmp765 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
        return (  l970 );
    } else {
        return (  r972 );
    }
}

static  bool   between769 (    struct Cursor_764  c975 ,    struct Cursor_764  l977 ,    struct Cursor_764  r979 ) {
    struct Cursor_764  from980 = ( (  min763 ) ( (  l977 ) ,  (  r979 ) ) );
    struct Cursor_764  to981 = ( (  max768 ) ( (  l977 ) ,  (  r979 ) ) );
    return ( (  cmp765 ( (  from980 ) , (  c975 ) ) != 2 ) && (  cmp765 ( (  c975 ) , (  to981 ) ) != 2 ) );
}

static  int32_t   clamp770 (    int32_t  x990 ,    int32_t  mn992 ,    int32_t  mx994 ) {
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

static  struct ConstStrIter_308   chars771 (    const char*  self1014 ) {
    return ( (  into_dash_iter335 ) ( (  self1014 ) ) );
}

static  struct AppendIter_378   chars772 (    char  self1020 ) {
    return ( (  single517 ) ( (  self1020 ) ) );
}

static  int32_t   count_dash_digits773 (    size_t  self1035 ) {
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

static  int32_t   count_dash_digits774 (    int32_t  self1035 ) {
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

static  int32_t   count_dash_digits775 (    uint32_t  self1035 ) {
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

static  struct IntStrIter_371   chars776 (    int32_t  self1042 ) {
    return ( (struct IntStrIter_371) { .f_int = (  self1042 ) , .f_len = ( (  count_dash_digits774 ) ( (  self1042 ) ) ) } );
}

static  enum Unit_13   print_dash_str777 (    uint32_t  self1045 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1045 ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_382   chars778 (    uint32_t  self1048 ) {
    return ( (struct IntStrIter_382) { .f_int = (  self1048 ) , .f_len = ( (  count_dash_digits775 ) ( (  self1048 ) ) ) } );
}

static  enum Unit_13   print_dash_str779 (    uint8_t  self1051 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32276 ) ( (  self1051 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct IntStrIter_401   chars780 (    size_t  self1066 ) {
    return ( (struct IntStrIter_401) { .f_int = (  self1066 ) , .f_len = ( (  count_dash_digits773 ) ( (  self1066 ) ) ) } );
}

struct Mode_783 {
    enum {
        Mode_783_Normal_t,
        Mode_783_Insert_t,
        Mode_783_Select_t,
        Mode_783_Cmd_t,
        Mode_783_SearchBox_t,
    } tag;
    union {
        struct {
            struct StrBuilder_546  field0;
        } Mode_783_Cmd_s;
        struct {
            struct StrBuilder_546  field0;
        } Mode_783_SearchBox_s;
    } stuff;
};

static struct Mode_783 Mode_783_Cmd (  struct StrBuilder_546  field0 ) {
    return ( struct Mode_783 ) { .tag = Mode_783_Cmd_t, .stuff = { .Mode_783_Cmd_s = { .field0 = field0 } } };
};

static struct Mode_783 Mode_783_SearchBox (  struct StrBuilder_546  field0 ) {
    return ( struct Mode_783 ) { .tag = Mode_783_SearchBox_t, .stuff = { .Mode_783_SearchBox_s = { .field0 = field0 } } };
};

struct StrConcat_782 {
    const char*  field0;
    struct Mode_783  field1;
};

static struct StrConcat_782 StrConcat_782_StrConcat (  const char*  field0 ,  struct Mode_783  field1 ) {
    return ( struct StrConcat_782 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_787 {
    const char*  field0;
    struct DynStr_131  field1;
};

static struct StrConcat_787 StrConcat_787_StrConcat (  const char*  field0 ,  struct DynStr_131  field1 ) {
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

static  struct DynStr_131   as_dash_str789 (    struct StrBuilder_546 *  builder2015 ) {
    return ( (struct DynStr_131) { .f_contents = ( (  subslice292 ) ( ( ( ( * (  builder2015 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2015 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_287   chars796 (    struct DynStr_131  self1498 ) {
    return ( (  into_dash_iter291 ) ( ( (  self1498 ) .f_contents ) ) );
}

static  struct StrConcatIter_377   into_dash_iter795 (    struct StrConcat_787  dref1097 ) {
    return ( (struct StrConcatIter_377) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars796 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_377   chars794 (    struct StrConcat_787  self1108 ) {
    return ( (  into_dash_iter795 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_376   into_dash_iter793 (    struct StrConcat_786  dref1097 ) {
    return ( (struct StrConcatIter_376) { .f_left = ( (  chars794 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_376   chars792 (    struct StrConcat_786  self1108 ) {
    return ( (  into_dash_iter793 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_375   into_dash_iter791 (    struct StrCase_785  self1121 ) {
    struct StrCase_785  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_785_StrCase1_t ) {
        return ( ( StrCaseIter_375_StrCaseIter1 ) ( ( (  chars771 ) ( ( dref1122 .stuff .StrCase_785_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_785_StrCase2_t ) {
        return ( ( StrCaseIter_375_StrCaseIter2 ) ( ( (  chars792 ) ( ( dref1122 .stuff .StrCase_785_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_375   chars790 (    struct StrCase_785  self1133 ) {
    return ( (  into_dash_iter791 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_375   chars784 (    struct Mode_783  self2518 ) {
    struct StrCase_785  temp788;
    struct StrCase_785  c2519 = (  temp788 );
    struct Mode_783  dref2520 = (  self2518 );
    if ( dref2520.tag == Mode_783_Normal_t ) {
        c2519 = ( ( StrCase_785_StrCase1 ) ( ( "Normal" ) ) );
    }
    else if ( dref2520.tag == Mode_783_Insert_t ) {
        c2519 = ( ( StrCase_785_StrCase1 ) ( ( "Insert" ) ) );
    }
    else if ( dref2520.tag == Mode_783_Select_t ) {
        c2519 = ( ( StrCase_785_StrCase1 ) ( ( "Select" ) ) );
    }
    else if ( dref2520.tag == Mode_783_Cmd_t ) {
        struct DynStr_131  ss2522 = ( (  as_dash_str789 ) ( ( & ( dref2520 .stuff .Mode_783_Cmd_s .field0 ) ) ) );
        c2519 = ( ( StrCase_785_StrCase2 ) ( ( ( StrConcat_786_StrConcat ) ( ( ( StrConcat_787_StrConcat ) ( ( "Cmd(" ) ,  (  ss2522 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2520.tag == Mode_783_SearchBox_t ) {
        struct DynStr_131  ss2524 = ( (  as_dash_str789 ) ( ( & ( dref2520 .stuff .Mode_783_SearchBox_s .field0 ) ) ) );
        c2519 = ( ( StrCase_785_StrCase2 ) ( ( ( StrConcat_786_StrConcat ) ( ( ( StrConcat_787_StrConcat ) ( ( "Search(" ) ,  (  ss2524 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars790 ) ( (  c2519 ) ) );
}

static  struct StrConcatIter_374   into_dash_iter781 (    struct StrConcat_782  dref1097 ) {
    return ( (struct StrConcatIter_374) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars784 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_798 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_798 StrConcat_798_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_798 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_381   into_dash_iter797 (    struct StrConcat_798  dref1097 ) {
    return ( (struct StrConcatIter_381) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars778 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_800 {
    const char*  field0;
    struct Maybe_346  field1;
};

static struct StrConcat_800 StrConcat_800_StrConcat (  const char*  field0 ,  struct Maybe_346  field1 ) {
    return ( struct StrConcat_800 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_804 {
    const char*  field0;
    struct Tuple2_347  field1;
};

static struct StrConcat_804 StrConcat_804_StrConcat (  const char*  field0 ,  struct Tuple2_347  field1 ) {
    return ( struct StrConcat_804 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_803 {
    struct StrConcat_804  field0;
    char  field1;
};

static struct StrConcat_803 StrConcat_803_StrConcat (  struct StrConcat_804  field0 ,  char  field1 ) {
    return ( struct StrConcat_803 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_802 {
    enum {
        StrCase_802_StrCase1_t,
        StrCase_802_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_802_StrCase1_s;
        struct {
            struct StrConcat_803  field0;
        } StrCase_802_StrCase2_s;
    } stuff;
};

static struct StrCase_802 StrCase_802_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_802 ) { .tag = StrCase_802_StrCase1_t, .stuff = { .StrCase_802_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_802 StrCase_802_StrCase2 (  struct StrConcat_803  field0 ) {
    return ( struct StrCase_802 ) { .tag = StrCase_802_StrCase2_t, .stuff = { .StrCase_802_StrCase2_s = { .field0 = field0 } } };
};

struct StrConcat_817 {
    char  field0;
    char  field1;
};

static struct StrConcat_817 StrConcat_817_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_817 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_816 {
    struct StrConcat_817  field0;
    const char*  field1;
};

static struct StrConcat_816 StrConcat_816_StrConcat (  struct StrConcat_817  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_816 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_815 {
    struct StrConcat_816  field0;
    int32_t  field1;
};

static struct StrConcat_815 StrConcat_815_StrConcat (  struct StrConcat_816  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_815 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_814 {
    struct StrConcat_815  field0;
    char  field1;
};

static struct StrConcat_814 StrConcat_814_StrConcat (  struct StrConcat_815  field0 ,  char  field1 ) {
    return ( struct StrConcat_814 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_392   into_dash_iter824 (    struct StrConcat_817  dref1097 ) {
    return ( (struct StrConcatIter_392) { .f_left = ( (  chars772 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_392   chars823 (    struct StrConcat_817  self1108 ) {
    return ( (  into_dash_iter824 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_391   into_dash_iter822 (    struct StrConcat_816  dref1097 ) {
    return ( (struct StrConcatIter_391) { .f_left = ( (  chars823 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars771 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_391   chars821 (    struct StrConcat_816  self1108 ) {
    return ( (  into_dash_iter822 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_390   into_dash_iter820 (    struct StrConcat_815  dref1097 ) {
    return ( (struct StrConcatIter_390) { .f_left = ( (  chars821 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars776 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_390   chars819 (    struct StrConcat_815  self1108 ) {
    return ( (  into_dash_iter820 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   into_dash_iter818 (    struct StrConcat_814  dref1097 ) {
    return ( (struct StrConcatIter_389) { .f_left = ( (  chars819 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_389   chars813 (    struct StrConcat_814  self1108 ) {
    return ( (  into_dash_iter818 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   chars812 (    struct Tuple2_347  dref1158 ) {
    return ( (  chars813 ) ( ( ( StrConcat_814_StrConcat ) ( ( ( StrConcat_815_StrConcat ) ( ( ( StrConcat_816_StrConcat ) ( ( ( StrConcat_817_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "(" ) ) ) ,  ( dref1158 .field0 ) ) ) ,  ( ", " ) ) ) ,  ( dref1158 .field1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct StrConcatIter_388   into_dash_iter811 (    struct StrConcat_804  dref1097 ) {
    return ( (struct StrConcatIter_388) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars812 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_388   chars810 (    struct StrConcat_804  self1108 ) {
    return ( (  into_dash_iter811 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_387   into_dash_iter809 (    struct StrConcat_803  dref1097 ) {
    return ( (struct StrConcatIter_387) { .f_left = ( (  chars810 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_387   chars808 (    struct StrConcat_803  self1108 ) {
    return ( (  into_dash_iter809 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_386   into_dash_iter807 (    struct StrCase_802  self1121 ) {
    struct StrCase_802  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_802_StrCase1_t ) {
        return ( ( StrCaseIter_386_StrCaseIter1 ) ( ( (  chars771 ) ( ( dref1122 .stuff .StrCase_802_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_802_StrCase2_t ) {
        return ( ( StrCaseIter_386_StrCaseIter2 ) ( ( (  chars808 ) ( ( dref1122 .stuff .StrCase_802_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_386   chars806 (    struct StrCase_802  self1133 ) {
    return ( (  into_dash_iter807 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_386   chars801 (    struct Maybe_346  self1147 ) {
    struct StrCase_802  temp805;
    struct StrCase_802  c1148 = (  temp805 );
    struct Maybe_346  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_346_None_t ) {
        c1148 = ( ( StrCase_802_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_346_Just_t ) {
        c1148 = ( ( StrCase_802_StrCase2 ) ( ( ( StrConcat_803_StrConcat ) ( ( ( StrConcat_804_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_346_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars806 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_385   into_dash_iter799 (    struct StrConcat_800  dref1097 ) {
    return ( (struct StrConcatIter_385) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars801 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_828 {
    const char*  field0;
    int32_t  field1;
};

static struct StrConcat_828 StrConcat_828_StrConcat (  const char*  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_828 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_827 {
    struct StrConcat_828  field0;
    char  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  struct StrConcat_828  field0 ,  char  field1 ) {
    return ( struct StrConcat_827 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_826 {
    struct StrConcat_827  field0;
    int32_t  field1;
};

static struct StrConcat_826 StrConcat_826_StrConcat (  struct StrConcat_827  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_826 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_397   into_dash_iter832 (    struct StrConcat_828  dref1097 ) {
    return ( (struct StrConcatIter_397) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars776 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_397   chars831 (    struct StrConcat_828  self1108 ) {
    return ( (  into_dash_iter832 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_396   into_dash_iter830 (    struct StrConcat_827  dref1097 ) {
    return ( (struct StrConcatIter_396) { .f_left = ( (  chars831 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_396   chars829 (    struct StrConcat_827  self1108 ) {
    return ( (  into_dash_iter830 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_395   into_dash_iter825 (    struct StrConcat_826  dref1097 ) {
    return ( (struct StrConcatIter_395) { .f_left = ( (  chars829 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars776 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_400   into_dash_iter833 (    struct StrConcat_17  dref1097 ) {
    return ( (struct StrConcatIter_400) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars780 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_836 {
    struct StrConcat_828  field0;
    const char*  field1;
};

static struct StrConcat_836 StrConcat_836_StrConcat (  struct StrConcat_828  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_836 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_835 {
    struct StrConcat_836  field0;
    int32_t  field1;
};

static struct StrConcat_835 StrConcat_835_StrConcat (  struct StrConcat_836  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_835 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_407   into_dash_iter838 (    struct StrConcat_836  dref1097 ) {
    return ( (struct StrConcatIter_407) { .f_left = ( (  chars831 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars771 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_407   chars837 (    struct StrConcat_836  self1108 ) {
    return ( (  into_dash_iter838 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_406   into_dash_iter834 (    struct StrConcat_835  dref1097 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars837 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars776 ) ( ( dref1097 .field1 ) ) ) } );
}

struct Maybe_841 {
    enum {
        Maybe_841_None_t,
        Maybe_841_Just_t,
    } tag;
    union {
        struct {
            struct StrBuilder_546  field0;
        } Maybe_841_Just_s;
    } stuff;
};

static struct Maybe_841 Maybe_841_Just (  struct StrBuilder_546  field0 ) {
    return ( struct Maybe_841 ) { .tag = Maybe_841_Just_t, .stuff = { .Maybe_841_Just_s = { .field0 = field0 } } };
};

struct StrConcat_840 {
    const char*  field0;
    struct Maybe_841  field1;
};

static struct StrConcat_840 StrConcat_840_StrConcat (  const char*  field0 ,  struct Maybe_841  field1 ) {
    return ( struct StrConcat_840 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_845 {
    const char*  field0;
    struct StrBuilder_546  field1;
};

static struct StrConcat_845 StrConcat_845_StrConcat (  const char*  field0 ,  struct StrBuilder_546  field1 ) {
    return ( struct StrConcat_845 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_844 {
    struct StrConcat_845  field0;
    char  field1;
};

static struct StrConcat_844 StrConcat_844_StrConcat (  struct StrConcat_845  field0 ,  char  field1 ) {
    return ( struct StrConcat_844 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_843 {
    enum {
        StrCase_843_StrCase1_t,
        StrCase_843_StrCase2_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } StrCase_843_StrCase1_s;
        struct {
            struct StrConcat_844  field0;
        } StrCase_843_StrCase2_s;
    } stuff;
};

static struct StrCase_843 StrCase_843_StrCase1 (  const char*  field0 ) {
    return ( struct StrCase_843 ) { .tag = StrCase_843_StrCase1_t, .stuff = { .StrCase_843_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_843 StrCase_843_StrCase2 (  struct StrConcat_844  field0 ) {
    return ( struct StrCase_843 ) { .tag = StrCase_843_StrCase2_t, .stuff = { .StrCase_843_StrCase2_s = { .field0 = field0 } } };
};

static  struct SliceIter_287   chars853 (    struct StrBuilder_546  s2029 ) {
    return ( (  into_dash_iter290 ) ( ( (  s2029 ) .f_chars ) ) );
}

static  struct StrConcatIter_377   into_dash_iter852 (    struct StrConcat_845  dref1097 ) {
    return ( (struct StrConcatIter_377) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars853 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_377   chars851 (    struct StrConcat_845  self1108 ) {
    return ( (  into_dash_iter852 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_376   into_dash_iter850 (    struct StrConcat_844  dref1097 ) {
    return ( (struct StrConcatIter_376) { .f_left = ( (  chars851 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars772 ) ( ( dref1097 .field1 ) ) ) } );
}

static  struct StrConcatIter_376   chars849 (    struct StrConcat_844  self1108 ) {
    return ( (  into_dash_iter850 ) ( (  self1108 ) ) );
}

static  struct StrCaseIter_375   into_dash_iter848 (    struct StrCase_843  self1121 ) {
    struct StrCase_843  dref1122 = (  self1121 );
    if ( dref1122.tag == StrCase_843_StrCase1_t ) {
        return ( ( StrCaseIter_375_StrCaseIter1 ) ( ( (  chars771 ) ( ( dref1122 .stuff .StrCase_843_StrCase1_s .field0 ) ) ) ) );
    }
    else if ( dref1122.tag == StrCase_843_StrCase2_t ) {
        return ( ( StrCaseIter_375_StrCaseIter2 ) ( ( (  chars849 ) ( ( dref1122 .stuff .StrCase_843_StrCase2_s .field0 ) ) ) ) );
    }
}

static  struct StrCaseIter_375   chars847 (    struct StrCase_843  self1133 ) {
    return ( (  into_dash_iter848 ) ( (  self1133 ) ) );
}

static  struct StrCaseIter_375   chars842 (    struct Maybe_841  self1147 ) {
    struct StrCase_843  temp846;
    struct StrCase_843  c1148 = (  temp846 );
    struct Maybe_841  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_841_None_t ) {
        c1148 = ( ( StrCase_843_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_841_Just_t ) {
        c1148 = ( ( StrCase_843_StrCase2 ) ( ( ( StrConcat_844_StrConcat ) ( ( ( StrConcat_845_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_841_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars847 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_374   into_dash_iter839 (    struct StrConcat_840  dref1097 ) {
    return ( (struct StrConcatIter_374) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars842 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_855 {
    const char*  field0;
    struct Maybe_315  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  const char*  field0 ,  struct Maybe_315  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_375   chars856 (    struct Maybe_315  self1147 ) {
    struct StrCase_785  temp857;
    struct StrCase_785  c1148 = (  temp857 );
    struct Maybe_315  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_315_None_t ) {
        c1148 = ( ( StrCase_785_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_315_Just_t ) {
        c1148 = ( ( StrCase_785_StrCase2 ) ( ( ( StrConcat_786_StrConcat ) ( ( ( StrConcat_787_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_315_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  chars790 ) ( (  c1148 ) ) );
}

static  struct StrConcatIter_374   into_dash_iter854 (    struct StrConcat_855  dref1097 ) {
    return ( (struct StrConcatIter_374) { .f_left = ( (  chars771 ) ( ( dref1097 .field0 ) ) ) , .f_right = ( (  chars856 ) ( ( dref1097 .field1 ) ) ) } );
}

struct StrConcat_862 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_862 StrConcat_862_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_862 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_861 {
    struct StrConcat_862  field0;
    char  field1;
};

static struct StrConcat_861 StrConcat_861_StrConcat (  struct StrConcat_862  field0 ,  char  field1 ) {
    return ( struct StrConcat_861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_860 {
    const char*  field0;
    struct StrConcat_861  field1;
};

static struct StrConcat_860 StrConcat_860_StrConcat (  const char*  field0 ,  struct StrConcat_861  field1 ) {
    return ( struct StrConcat_860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_859 {
    struct StrConcat_860  field0;
    char  field1;
};

static struct StrConcat_859 StrConcat_859_StrConcat (  struct StrConcat_860  field0 ,  char  field1 ) {
    return ( struct StrConcat_859 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str865 (    struct StrConcat_862  self1102 ) {
    struct StrConcat_862  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str864 (    struct StrConcat_861  self1102 ) {
    struct StrConcat_861  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str865 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str863 (    struct StrConcat_860  self1102 ) {
    struct StrConcat_860  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str864 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str858 (    struct StrConcat_859  self1102 ) {
    struct StrConcat_859  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str863 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_868 {
    const char*  field0;
    struct StrConcat_816  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  const char*  field0 ,  struct StrConcat_816  field1 ) {
    return ( struct StrConcat_868 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_867 {
    struct StrConcat_868  field0;
    char  field1;
};

static struct StrConcat_867 StrConcat_867_StrConcat (  struct StrConcat_868  field0 ,  char  field1 ) {
    return ( struct StrConcat_867 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str871 (    struct StrConcat_817  self1102 ) {
    struct StrConcat_817  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str28 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str870 (    struct StrConcat_816  self1102 ) {
    struct StrConcat_816  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str871 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str869 (    struct StrConcat_868  self1102 ) {
    struct StrConcat_868  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str870 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str866 (    struct StrConcat_867  self1102 ) {
    struct StrConcat_867  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str869 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_875 {
    struct StrConcat_15  field0;
    const char*  field1;
};

static struct StrConcat_875 StrConcat_875_StrConcat (  struct StrConcat_15  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_875 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_874 {
    const char*  field0;
    struct StrConcat_875  field1;
};

static struct StrConcat_874 StrConcat_874_StrConcat (  const char*  field0 ,  struct StrConcat_875  field1 ) {
    return ( struct StrConcat_874 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_873 {
    struct StrConcat_874  field0;
    char  field1;
};

static struct StrConcat_873 StrConcat_873_StrConcat (  struct StrConcat_874  field0 ,  char  field1 ) {
    return ( struct StrConcat_873 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str877 (    struct StrConcat_875  self1102 ) {
    struct StrConcat_875  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str24 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str22 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str876 (    struct StrConcat_874  self1102 ) {
    struct StrConcat_874  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str877 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str872 (    struct StrConcat_873  self1102 ) {
    struct StrConcat_873  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str876 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_880 {
    const char*  field0;
    struct StrConcat_862  field1;
};

static struct StrConcat_880 StrConcat_880_StrConcat (  const char*  field0 ,  struct StrConcat_862  field1 ) {
    return ( struct StrConcat_880 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_879 {
    struct StrConcat_880  field0;
    char  field1;
};

static struct StrConcat_879 StrConcat_879_StrConcat (  struct StrConcat_880  field0 ,  char  field1 ) {
    return ( struct StrConcat_879 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str881 (    struct StrConcat_880  self1102 ) {
    struct StrConcat_880  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str865 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str878 (    struct StrConcat_879  self1102 ) {
    struct StrConcat_879  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str881 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_888 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_888 StrConcat_888_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_888 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_887 {
    struct StrConcat_888  field0;
    char  field1;
};

static struct StrConcat_887 StrConcat_887_StrConcat (  struct StrConcat_888  field0 ,  char  field1 ) {
    return ( struct StrConcat_887 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_886 {
    struct StrConcat_887  field0;
    uint8_t  field1;
};

static struct StrConcat_886 StrConcat_886_StrConcat (  struct StrConcat_887  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_886 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_885 {
    struct StrConcat_886  field0;
    char  field1;
};

static struct StrConcat_885 StrConcat_885_StrConcat (  struct StrConcat_886  field0 ,  char  field1 ) {
    return ( struct StrConcat_885 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_884 {
    struct StrConcat_885  field0;
    uint8_t  field1;
};

static struct StrConcat_884 StrConcat_884_StrConcat (  struct StrConcat_885  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_884 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_883 {
    struct StrConcat_884  field0;
    char  field1;
};

static struct StrConcat_883 StrConcat_883_StrConcat (  struct StrConcat_884  field0 ,  char  field1 ) {
    return ( struct StrConcat_883 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str893 (    struct StrConcat_888  self1102 ) {
    struct StrConcat_888  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str779 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str892 (    struct StrConcat_887  self1102 ) {
    struct StrConcat_887  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str893 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str891 (    struct StrConcat_886  self1102 ) {
    struct StrConcat_886  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str892 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str779 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str890 (    struct StrConcat_885  self1102 ) {
    struct StrConcat_885  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str891 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str889 (    struct StrConcat_884  self1102 ) {
    struct StrConcat_884  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str890 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str779 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str882 (    struct StrConcat_883  self1102 ) {
    struct StrConcat_883  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str889 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_897 {
    struct StrConcat_798  field0;
    char  field1;
};

static struct StrConcat_897 StrConcat_897_StrConcat (  struct StrConcat_798  field0 ,  char  field1 ) {
    return ( struct StrConcat_897 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_896 {
    struct StrConcat_897  field0;
    uint32_t  field1;
};

static struct StrConcat_896 StrConcat_896_StrConcat (  struct StrConcat_897  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_896 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_895 {
    struct StrConcat_896  field0;
    char  field1;
};

static struct StrConcat_895 StrConcat_895_StrConcat (  struct StrConcat_896  field0 ,  char  field1 ) {
    return ( struct StrConcat_895 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str900 (    struct StrConcat_798  self1102 ) {
    struct StrConcat_798  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str777 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str899 (    struct StrConcat_897  self1102 ) {
    struct StrConcat_897  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str900 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str898 (    struct StrConcat_896  self1102 ) {
    struct StrConcat_896  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str899 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str777 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str894 (    struct StrConcat_895  self1102 ) {
    struct StrConcat_895  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str898 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_374   chars901 (    struct StrConcat_782  self1108 ) {
    return ( (  into_dash_iter781 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_381   chars902 (    struct StrConcat_798  self1108 ) {
    return ( (  into_dash_iter797 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_385   chars903 (    struct StrConcat_800  self1108 ) {
    return ( (  into_dash_iter799 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_395   chars904 (    struct StrConcat_826  self1108 ) {
    return ( (  into_dash_iter825 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_400   chars905 (    struct StrConcat_17  self1108 ) {
    return ( (  into_dash_iter833 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_406   chars906 (    struct StrConcat_835  self1108 ) {
    return ( (  into_dash_iter834 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_374   chars907 (    struct StrConcat_840  self1108 ) {
    return ( (  into_dash_iter839 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_374   chars908 (    struct StrConcat_855  self1108 ) {
    return ( (  into_dash_iter854 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_479   chars909 (    struct TakeWhile_479  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_483   chars910 (    struct TakeWhile_483  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_497   chars911 (    struct TakeWhile_497  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_486   chars912 (    struct TakeWhile_486  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_490   chars913 (    struct TakeWhile_490  self1193 ) {
    return (  self1193 );
}

struct Tuple2_917 {
    struct Maybe_297  field0;
    struct Maybe_297  field1;
};

static struct Tuple2_917 Tuple2_917_Tuple2 (  struct Maybe_297  field0 ,  struct Maybe_297  field1 ) {
    return ( struct Tuple2_917 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq914 (    struct TakeWhile_483  l1203 ,    char  r1205 ) {
    struct TakeWhile_483  temp915 = ( (  chars910 ) ( (  l1203 ) ) );
    struct TakeWhile_483 *  l1206 = ( &temp915 );
    struct AppendIter_378  temp916 = ( (  chars772 ) ( (  r1205 ) ) );
    struct AppendIter_378 *  r1207 = ( &temp916 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next494 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next423 ) ( (  r1207 ) ) );
        struct Tuple2_917  dref1210 = ( ( Tuple2_917_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  bool   eq918 (    struct TakeWhile_483  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_483  temp919 = ( (  chars910 ) ( (  l1203 ) ) );
    struct TakeWhile_483 *  l1206 = ( &temp919 );
    struct ConstStrIter_308  temp920 = ( (  chars771 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp920 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next494 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_917  dref1210 = ( ( Tuple2_917_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  bool   eq921 (    struct TakeWhile_497  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_497  temp922 = ( (  chars911 ) ( (  l1203 ) ) );
    struct TakeWhile_497 *  l1206 = ( &temp922 );
    struct ConstStrIter_308  temp923 = ( (  chars771 ) ( (  r1205 ) ) );
    struct ConstStrIter_308 *  r1207 = ( &temp923 );
    while ( ( true ) ) {
        struct Maybe_297  mlc1208 = ( (  next496 ) ( (  l1206 ) ) );
        struct Maybe_297  mrc1209 = ( (  next326 ) ( (  r1207 ) ) );
        struct Tuple2_917  dref1210 = ( ( Tuple2_917_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
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

static  int32_t   char_dash_i32924 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed249 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8925 (    char  c1223 ) {
    return ( (  cast195 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char926 (    int32_t  i1226 ) {
    return ( (  cast196 ) ( (  i1226 ) ) );
}

static  bool   eq927 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp928 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp75 ) ( ( (  char_dash_i32924 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32924 ) ( (  r1246 ) ) ) ) );
}

static  enum Unit_13   todo929 (  ) {
    ( (  print_dash_str22 ) ( ( "todo\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  bool   unreachable930 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined148 ) ( ) );
}

static  enum Unit_13   unreachable931 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   panic932 (    struct StrConcat_861  errmsg1254 ) {
    ( (  print_dash_str858 ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_860_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic933 (    struct StrConcat_816  errmsg1254 ) {
    ( (  print_dash_str866 ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic934 (    const char*  errmsg1254 ) {
    ( (  print_dash_str864 ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic935 (    struct StrConcat_875  errmsg1254 ) {
    ( (  print_dash_str872 ) ( ( ( StrConcat_873_StrConcat ) ( ( ( StrConcat_874_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic936 (    struct StrConcat_862  errmsg1254 ) {
    ( (  print_dash_str878 ) ( ( ( StrConcat_879_StrConcat ) ( ( ( StrConcat_880_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   panic_prime_937 (    const char*  errmsg1257 ) {
    ( (  print_dash_str864 ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined143 ) ( ) );
}

static  enum Unit_13   assert938 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str864 ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail939 (    struct Maybe_265  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_265  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_265_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined126 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_265_Just_t ) {
        return ( dref1270 .stuff .Maybe_265_Just_s .field0 );
    }
}

static  struct DynStr_131   or_dash_fail940 (    struct Maybe_315  x1267 ,    struct StrConcat_861  errmsg1269 ) {
    struct Maybe_315  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_315_None_t ) {
        ( (  panic932 ) ( (  errmsg1269 ) ) );
        return ( (  undefined130 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_315_Just_t ) {
        return ( dref1270 .stuff .Maybe_315_Just_s .field0 );
    }
}

struct Maybe_942 {
    enum {
        Maybe_942_None_t,
        Maybe_942_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53  field0;
        } Maybe_942_Just_s;
    } stuff;
};

static struct Maybe_942 Maybe_942_Just (  struct Cell_53  field0 ) {
    return ( struct Maybe_942 ) { .tag = Maybe_942_Just_t, .stuff = { .Maybe_942_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53   or_dash_fail941 (    struct Maybe_942  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_942  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_942_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined139 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_942_Just_t ) {
        return ( dref1270 .stuff .Maybe_942_Just_s .field0 );
    }
}

struct Maybe_944 {
    enum {
        Maybe_944_None_t,
        Maybe_944_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_944_Just_s;
    } stuff;
};

static struct Maybe_944 Maybe_944_Just (  uint8_t  field0 ) {
    return ( struct Maybe_944 ) { .tag = Maybe_944_Just_t, .stuff = { .Maybe_944_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail943 (    struct Maybe_944  x1267 ,    struct StrConcat_816  errmsg1269 ) {
    struct Maybe_944  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_944_None_t ) {
        ( (  panic933 ) ( (  errmsg1269 ) ) );
        return ( (  undefined141 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_944_Just_t ) {
        return ( dref1270 .stuff .Maybe_944_Just_s .field0 );
    }
}

struct Maybe_946 {
    enum {
        Maybe_946_None_t,
        Maybe_946_Just_t,
    } tag;
    union {
        struct {
            struct Cell_53 *  field0;
        } Maybe_946_Just_s;
    } stuff;
};

static struct Maybe_946 Maybe_946_Just (  struct Cell_53 *  field0 ) {
    return ( struct Maybe_946 ) { .tag = Maybe_946_Just_t, .stuff = { .Maybe_946_Just_s = { .field0 = field0 } } };
};

static  struct Cell_53 *   or_dash_fail945 (    struct Maybe_946  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_946  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_946_None_t ) {
        ( (  panic934 ) ( (  errmsg1269 ) ) );
        return ( (  undefined150 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_946_Just_t ) {
        return ( dref1270 .stuff .Maybe_946_Just_s .field0 );
    }
}

struct Maybe_948 {
    enum {
        Maybe_948_None_t,
        Maybe_948_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_764  field0;
        } Maybe_948_Just_s;
    } stuff;
};

static struct Maybe_948 Maybe_948_Just (  struct Cursor_764  field0 ) {
    return ( struct Maybe_948 ) { .tag = Maybe_948_Just_t, .stuff = { .Maybe_948_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_764   or_dash_else947 (    struct Maybe_948  self1274 ,    struct Cursor_764  alt1276 ) {
    struct Maybe_948  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_948_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_948_Just_t ) {
        return ( dref1277 .stuff .Maybe_948_Just_s .field0 );
    }
}

struct Tuple2_950 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_950 Tuple2_950_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_950 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst949 (    struct Tuple2_950  dref1297 ) {
    return ( dref1297 .field0 );
}

static  uint32_t   snd951 (    struct Tuple2_950  dref1300 ) {
    return ( dref1300 .field1 );
}

static  bool   is_dash_just952 (    struct Maybe_948  m1304 ) {
    struct Maybe_948  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_948_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_948_Just_t ) {
        return ( true );
    }
}

struct Maybe_954 {
    enum {
        Maybe_954_None_t,
        Maybe_954_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_954_Just_s;
    } stuff;
};

static struct Maybe_954 Maybe_954_Just (  struct timespec  field0 ) {
    return ( struct Maybe_954 ) { .tag = Maybe_954_Just_t, .stuff = { .Maybe_954_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just953 (    struct Maybe_954  m1304 ) {
    struct Maybe_954  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_954_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_954_Just_t ) {
        return ( true );
    }
}

struct Visual_958 {
    int32_t  field0;
};

static struct Visual_958 Visual_958_Visual (  int32_t  field0 ) {
    return ( struct Visual_958 ) { .field0 = field0 };
};

struct Theme_959 {
    struct Color_54  f_bg;
    struct Color_54  f_text;
    struct Color_54  f_cursor_dash_bg;
    struct Color_54  f_cursor_dash_text;
    struct Color_54  f_selection_dash_bg;
    struct Color_54  f_selection_dash_text;
    struct Color_54  f_line_dash_num_dash_hi_dash_bg;
    struct Color_54  f_line_dash_num_dash_hi_dash_text;
};

struct Editor_957 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_764  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_958  f_goal_dash_x;
    struct List_280  f_current_dash_file;
    struct Maybe_265  f_filename;
    struct Mode_783  f_mode;
    struct Maybe_954  f_anim;
    struct Maybe_948  f_selected;
    struct Theme_959 *  f_theme;
    struct Maybe_841  f_search_dash_term;
    struct Maybe_315  f_msg;
};

struct env956 {
    ;
    struct Editor_957 *  ed2907;
    ;
};

struct funenv956 {
    struct Maybe_297  (*fun) (  struct env956  ,    struct List_3  );
    struct env956 env;
};

static  struct Maybe_297   and_dash_maybe955 (    struct Maybe_314  m1308 ,   struct funenv956  fun1310 ) {
    struct Maybe_314  dref1311 = (  m1308 );
    if ( dref1311.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    else if ( dref1311.tag == Maybe_314_Just_t ) {
        struct funenv956  temp960 = (  fun1310 );
        return ( temp960.fun ( temp960.env ,  ( dref1311 .stuff .Maybe_314_Just_s .field0 ) ) );
    }
}

static  struct Maybe_50   fmap_dash_maybe961 (    struct Maybe_297  x1315 ,    bool (*  fun1317 )(    char  ) ) {
    struct Maybe_297  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref1318.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_346   fmap_dash_maybe962 (    struct Maybe_297  x1315 ,    struct Tuple2_347 (*  fun1317 )(    char  ) ) {
    struct Maybe_297  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_346) { .tag = Maybe_346_None_t } );
    }
    else if ( dref1318.tag == Maybe_297_Just_t ) {
        return ( ( Maybe_346_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_297_Just_s .field0 ) ) ) ) );
    }
}

struct env964 {
    ;
    struct Editor_957 *  ed2732;
};

struct funenv964 {
    struct Cursor_764  (*fun) (  struct env964  ,    struct Cursor_764  );
    struct env964 env;
};

static  struct Cursor_764   maybe963 (    struct Maybe_948  x1322 ,   struct funenv964  fun1324 ,    struct Cursor_764  default1326 ) {
    struct funenv964  temp965 = (  fun1324 );
    return ( {  struct Maybe_948  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_948_Just_t ? ( temp965.fun ( temp965.env ,  ( dref1327 .stuff .Maybe_948_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe966 (    struct Maybe_948  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_764  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_948  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_948_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_948_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe967 (    struct Maybe_948  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_764  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_948  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_948_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_948_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe968 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe969 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe970 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe971 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe972 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe973 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe974 (    struct Maybe_297  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe975 (    struct Maybe_297  x1322 ,   struct funenv312  fun1324 ,    int32_t  default1326 ) {
    struct funenv312  temp976 = (  fun1324 );
    return ( {  struct Maybe_297  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_297_Just_t ? ( temp976.fun ( temp976.env ,  ( dref1327 .stuff .Maybe_297_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  struct Slice_279   empty977 (  ) {
    return ( (struct Slice_279) { .f_ptr = ( (  null_dash_ptr257 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty978 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr258 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr979 (    struct Slice_279  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1339 = ( (  offset_dash_ptr154 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  struct Cell_53 *   get_dash_ptr980 (    struct Slice_552  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_53 *  elem_dash_ptr1339 = ( (  offset_dash_ptr160 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

struct Slice_982 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_265   try_dash_get981 (    struct Slice_982  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    }
    const char* *  elem_dash_ptr1345 = ( (  offset_dash_ptr152 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_265_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  struct Maybe_942   try_dash_get983 (    struct Slice_552  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_942) { .tag = Maybe_942_None_t } );
    }
    struct Cell_53 *  elem_dash_ptr1345 = ( (  offset_dash_ptr160 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_942_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  const char*   get984 (    struct Slice_982  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail939 ) ( ( (  try_dash_get981 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_53   get985 (    struct Slice_552  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail941 ) ( ( (  try_dash_get983 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set986 (    struct Slice_279  slice1353 ,    size_t  i1355 ,    struct List_3  x1357 ) {
    struct List_3 *  ep1358 = ( (  get_dash_ptr979 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set987 (    struct Slice_5  slice1353 ,    size_t  i1355 ,    char  x1357 ) {
    char *  ep1358 = ( (  get_dash_ptr30 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set988 (    struct Slice_552  slice1353 ,    size_t  i1355 ,    struct Cell_53  x1357 ) {
    struct Cell_53 *  ep1358 = ( (  get_dash_ptr980 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  struct Slice_279   from989 (    struct Slice_279  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice283 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct SliceAddressIter_592   addresses990 (    struct Slice_279  slice1398 ) {
    return ( (struct SliceAddressIter_592) { .f_slice = (  slice1398 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam568 (   struct env568 env ,    struct Tuple2_347  dref1412 ) {
    return ( (  set987 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size268 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to991 (    struct Slice_5  src1409 ,    struct Slice_5  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic935 ) ( ( ( StrConcat_875_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env568 envinst568 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each567 ) ( ( (  zip458 ) ( (  src1409 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv568){ .fun = lam568, .env = envinst568 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam576 (   struct env576 env ,    struct Tuple2_352  dref1412 ) {
    return ( (  set986 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size268 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to992 (    struct Slice_279  src1409 ,    struct Slice_279  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic935 ) ( ( ( StrConcat_875_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env576 envinst576 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each575 ) ( ( (  zip457 ) ( (  src1409 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv576){ .fun = lam576, .env = envinst576 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam994 (    struct Tuple2_410  dref1420 ) {
    return (  eq48 ( ( dref1420 .field0 ) , ( dref1420 .field1 ) ) );
}

static  bool   eq993 (    struct Slice_5  l1417 ,    struct Slice_5  r1419 ) {
    if ( ( !  eq45 ( ( (  l1417 ) .f_count ) , ( (  r1419 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all743 ) ( ( (  zip461 ) ( (  l1417 ) ,  (  r1419 ) ) ) ,  (  lam994 ) ) );
}

static  const char*   elem_dash_get995 (    struct Slice_982  self1425 ,    size_t  idx1427 ) {
    return ( (  get984 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  struct Cell_53   elem_dash_get996 (    struct Slice_552  self1425 ,    size_t  idx1427 ) {
    return ( (  get985 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  char   elem_dash_get997 (    struct Slice_5  self1425 ,    size_t  idx1427 ) {
    return ( (  get317 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  enum Unit_13   lam551 (   struct env551 env ,    int32_t  i1456 ) {
    return ( (  set988 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get996 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map998 (    struct Slice_552  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env551 envinst551 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each550 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv551){ .fun = lam551, .env = envinst551 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam556 (   struct env556 env ,    int32_t  i1456 ) {
    return ( (  set988 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get996 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map999 (    struct Slice_552  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env556 envinst556 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each555 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv556){ .fun = lam556, .env = envinst556 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam611 (   struct env611 env ,    int32_t  i1456 ) {
    return ( (  set988 ) ( ( env.s1452 ) ,  ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get996 ( ( env.s1452 ) , ( (  i32_dash_size268 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1000 (    struct Slice_552  s1452 ,    struct Cell_53 (*  fun1454 )(    struct Cell_53  ) ) {
    struct env611 envinst611 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each610 ) ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( (  op_dash_sub94 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv611){ .fun = lam611, .env = envinst611 } ) ) );
    return ( Unit_13_Unit );
}

struct Maybe_1002 {
    enum {
        Maybe_1002_None_t,
        Maybe_1002_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1002_Just_s;
    } stuff;
};

static struct Maybe_1002 Maybe_1002_Just (  size_t  field0 ) {
    return ( struct Maybe_1002 ) { .tag = Maybe_1002_Just_t, .stuff = { .Maybe_1002_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1002   find_dash_slice1001 (    struct Slice_5  haystack1459 ,    struct Slice_5  needle1461 ) {
    struct RangeIter_363  temp1003 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  haystack1459 ) .f_count ) ) ) , ( (  size_dash_i32270 ) ( ( (  needle1461 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1004 =  next364 (&temp1003);
        if (  __cond1004 .tag == 0 ) {
            break;
        }
        int32_t  i1463 =  __cond1004 .stuff .Maybe_328_Just_s .field0;
        if ( (  eq993 ( ( (  subslice292 ) ( (  haystack1459 ) ,  ( (  i32_dash_size268 ) ( (  i1463 ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  i1463 ) ) ) , ( (  needle1461 ) .f_count ) ) ) ) ) , (  needle1461 ) ) ) ) {
            return ( ( Maybe_1002_Just ) ( ( (  i32_dash_size268 ) ( (  i1463 ) ) ) ) );
        }
    }
    return ( (struct Maybe_1002) { .tag = Maybe_1002_None_t } );
}

static  struct Maybe_1002   find_dash_last_dash_occurence_dash_of_dash_slice1005 (    struct Slice_5  haystack1466 ,    struct Slice_5  needle1468 ) {
    struct Maybe_1002  occ1469 = ( (struct Maybe_1002) { .tag = Maybe_1002_None_t } );
    struct RangeIter_363  temp1006 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  haystack1466 ) .f_count ) ) ) , ( (  size_dash_i32270 ) ( ( (  needle1468 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1007 =  next364 (&temp1006);
        if (  __cond1007 .tag == 0 ) {
            break;
        }
        int32_t  i1471 =  __cond1007 .stuff .Maybe_328_Just_s .field0;
        if ( (  eq993 ( ( (  subslice292 ) ( (  haystack1466 ) ,  ( (  i32_dash_size268 ) ( (  i1471 ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  i1471 ) ) ) , ( (  needle1468 ) .f_count ) ) ) ) ) , (  needle1468 ) ) ) ) {
            occ1469 = ( ( Maybe_1002_Just ) ( ( (  i32_dash_size268 ) ( (  i1471 ) ) ) ) );
        }
    }
    return (  occ1469 );
}

static  enum CAllocator_4   idc1008 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_279   allocate1009 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize162 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1487 = ( (  cast_dash_ptr204 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_279) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_5   allocate1010 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    char *  ptr1487 = ( (  cast_dash_ptr208 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_552   allocate1011 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    struct Cell_53 *  ptr1487 = ( (  cast_dash_ptr215 ) ( ( ( malloc ) ( (  op_dash_mul95 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_552) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  enum Unit_13   free1012 (    enum CAllocator_4  dref1489 ,    struct Slice_279  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr205 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1013 (    enum CAllocator_4  dref1489 ,    struct Slice_5  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr207 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1015 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1014 (    enum CAllocator_4  dref1489 ,    struct Slice_1015  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr220 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1016 (    enum CAllocator_4  dref1489 ,    struct Slice_552  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr222 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr1017 (    struct Array_137 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1532 = ( ( (  cast187 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr156 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  char *   get_dash_ptr1018 (    struct Array_181 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic663 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_665_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1532 = ( ( (  cast194 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  enum Unit_13   set1019 (    struct Array_137 *  arr1541 ,    size_t  i1544 ,    uint8_t  e1546 ) {
    uint8_t *  p1547 = ( (  get_dash_ptr1017 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1020 (    struct Array_181 *  arr1541 ,    size_t  i1544 ,    char  e1546 ) {
    char *  p1547 = ( (  get_dash_ptr1018 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1021 (    struct Array_181 *  arr1550 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast194 ) ( (  arr1550 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1022 (    char  c1601 ) {
    return ( ( (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1023 (    char  c1604 ) {
    return ( ! ( (  is_dash_whitespace1022 ) ( (  c1604 ) ) ) );
}

static  struct LineIter_300   lines1024 (    struct DynStr_131  s1611 ) {
    return ( (struct LineIter_300) { .f_og = (  s1611 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1025 (    char  c1640 ) {
    return ( (  cmp75 ( ( (  char_dash_i32924 ) ( (  c1640 ) ) ) , ( (  char_dash_i32924 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp75 ( ( (  char_dash_i32924 ) ( (  c1640 ) ) ) , ( (  char_dash_i32924 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_328   parse_dash_digit1026 (    char  c1643 ) {
    if ( ( (  is_dash_digit1025 ) ( (  c1643 ) ) ) ) {
        return ( ( Maybe_328_Just ) ( (  op_dash_sub83 ( ( (  char_dash_i32924 ) ( (  c1643 ) ) ) , ( (  char_dash_i32924 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_328) { .tag = Maybe_328_None_t } );
    }
}

static  struct Maybe_691   sequence_dash_maybe1028 (    char  e1649 ,    struct Maybe_691  b1651 ) {
    struct Maybe_691  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_691_None_t ) {
        return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
    }
    else if ( dref1652.tag == Maybe_691_Just_t ) {
        struct Maybe_328  dref1654 = ( (  parse_dash_digit1026 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
        }
        else if ( dref1654.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_691_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_691_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1654 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_691   parse_dash_int1027 (    struct TakeWhile_479  s1646 ) {
    struct TakeWhile_479  cs1656 = ( (  chars909 ) ( (  s1646 ) ) );
    struct Maybe_297  dref1657 = ( (  head746 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_297_Just_t ) {
        return ( (  reduce690 ) ( (  cs1656 ) ,  ( ( Maybe_691_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1028 ) ) );
    }
    else if ( dref1657.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
    }
}

static  struct Maybe_691   sequence_dash_maybe1030 (    char  e1649 ,    struct Maybe_691  b1651 ) {
    struct Maybe_691  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_691_None_t ) {
        return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
    }
    else if ( dref1652.tag == Maybe_691_Just_t ) {
        struct Maybe_328  dref1654 = ( (  parse_dash_digit1026 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_328_None_t ) {
            return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
        }
        else if ( dref1654.tag == Maybe_328_Just_t ) {
            return ( ( Maybe_691_Just ) ( (  op_dash_add78 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_691_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64267 ) ( ( dref1654 .stuff .Maybe_328_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_691   parse_dash_int1029 (    struct TakeWhile_483  s1646 ) {
    struct TakeWhile_483  cs1656 = ( (  chars910 ) ( (  s1646 ) ) );
    struct Maybe_297  dref1657 = ( (  head748 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_297_Just_t ) {
        return ( (  reduce703 ) ( (  cs1656 ) ,  ( ( Maybe_691_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1030 ) ) );
    }
    else if ( dref1657.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1031 (    struct List_280 *  list1662 ,    size_t  i1664 ) {
    if ( ( (  cmp9 ( (  i1664 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1664 ) , ( ( * (  list1662 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1664 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1662 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr979 ) ( ( ( * (  list1662 ) ) .f_elements ) ,  (  i1664 ) ) );
}

static  struct List_3   get1032 (    struct List_280 *  list1672 ,    size_t  i1674 ) {
    return ( * ( (  get_dash_ptr1031 ) ( (  list1672 ) ,  (  i1674 ) ) ) );
}

static  struct Maybe_297   try_dash_get1033 (    struct List_3 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( ( (  get7 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  struct Maybe_314   try_dash_get1034 (    struct List_280 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    return ( ( Maybe_314_Just ) ( ( (  get1032 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  enum Unit_13   set1035 (    struct List_3 *  list1682 ,    size_t  i1684 ,    char  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set987 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1036 (    struct List_280 *  list1682 ,    size_t  i1684 ,    struct List_3  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set986 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_280   mk1037 (    enum CAllocator_4  al1692 ) {
    struct Slice_279  elements1693 = ( (  empty977 ) ( ) );
    return ( (struct List_280) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1038 (    enum CAllocator_4  al1692 ) {
    struct Slice_5  elements1693 = ( (  empty978 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1039 (    struct List_3 *  list1696 ) {
    ( (  free1013 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1040 (    struct List_280 *  list1696 ) {
    ( (  free1012 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam527 (   struct env527 env ,    struct Tuple2_352  dref1704 ) {
    return ( (  set986 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size268 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full541 (   struct env541 env ,    struct List_280 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1009 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_279  new_dash_slice1703 = ( (  allocate1009 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env527 envinst527 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each526 ) ( ( (  zip457 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv527){ .fun = lam527, .env = envinst527 } ) ) );
            ( (  free1012 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam531 (   struct env531 env ,    struct Tuple2_347  dref1704 ) {
    return ( (  set987 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size268 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full305 (   struct env305 env ,    struct List_3 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1010 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1703 = ( (  allocate1010 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul95 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env531 envinst531 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each530 ) ( ( (  zip458 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv531){ .fun = lam531, .env = envinst531 } ) ) );
            ( (  free1013 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add540 (   struct env540 env ,    struct List_280 *  list1709 ,    struct List_3  elem1711 ) {
    struct funenv541  temp1041 = ( (struct funenv541){ .fun = grow_dash_if_dash_full541, .env =  env.envinst541  } );
    ( temp1041.fun ( temp1041.env ,  (  list1709 ) ) );
    ( (  set986 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add93 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add304 (   struct env304 env ,    struct List_3 *  list1709 ,    char  elem1711 ) {
    struct funenv305  temp1042 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp1042.fun ( temp1042.env ,  (  list1709 ) ) );
    ( (  set987 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add93 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1043 {
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

static  enum Unit_13   insert1043 (   struct env1043 env ,    struct List_3 *  list1714 ,    size_t  i1716 ,    char  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv304  temp1044 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
        ( temp1044.fun ( temp1044.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv305  temp1045 = ( (struct funenv305){ .fun = grow_dash_if_dash_full305, .env =  env.envinst305  } );
    ( temp1045.fun ( temp1045.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub94 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set987 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub94 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set987 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add93 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1046 {
    ;
    struct env540 envinst540;
    ;
    ;
    ;
    struct env541 envinst541;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1046 (   struct env1046 env ,    struct List_280 *  list1714 ,    size_t  i1716 ,    struct List_3  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv540  temp1047 = ( (struct funenv540){ .fun = add540, .env =  env.envinst540  } );
        ( temp1047.fun ( temp1047.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv541  temp1048 = ( (struct funenv541){ .fun = grow_dash_if_dash_full541, .env =  env.envinst541  } );
    ( temp1048.fun ( temp1048.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub94 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set986 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add93 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1032 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub94 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set986 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add93 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1049 {
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

static  enum Unit_13   lam564 (   struct env564 env ,    struct Tuple2_347  dref1725 ) {
    return ( (  set1035 ) ( ( env.list1722 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1049 (   struct env1049 env ,    struct List_3 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env564 envinst564 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each563 ) ( ( (  drop355 ) ( ( (  zip459 ) ( ( * (  list1722 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv564){ .fun = lam564, .env = envinst564 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1013 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty978 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_5  new_dash_slice1730 = ( (  allocate1010 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to991 ) ( ( (  subslice292 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1013 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct env1050 {
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

static  enum Unit_13   lam572 (   struct env572 env ,    struct Tuple2_352  dref1725 ) {
    return ( (  set1036 ) ( ( env.list1722 ) ,  ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1050 (   struct env1050 env ,    struct List_280 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env572 envinst572 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each571 ) ( ( (  drop357 ) ( ( (  zip460 ) ( ( * (  list1722 ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add93 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv572){ .fun = lam572, .env = envinst572 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub94 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul95 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1012 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty977 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul95 ( (  op_dash_add93 ( (  op_dash_div96 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_279  new_dash_slice1730 = ( (  allocate1009 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to992 ) ( ( (  subslice283 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1012 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct funenv1049 {
    enum Unit_13  (*fun) (  struct env1049  ,    struct List_3 *  ,    size_t  );
    struct env1049 env;
};

struct env1051 {
    ;
    ;
    ;
    struct env1049 envinst1049;
    ;
    ;
    ;
};

static  enum Unit_13   pop1051 (   struct env1051 env ,    struct List_3 *  list1744 ) {
    if ( (  eq45 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic934 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1049  temp1052 = ( (struct funenv1049){ .fun = remove1049, .env =  env.envinst1049  } );
    return ( temp1052.fun ( temp1052.env ,  (  list1744 ) ,  (  op_dash_sub94 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam535 (   struct env535 env ,    char  x1754 ) {
    struct funenv304  temp1053 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1053.fun ( temp1053.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all303 (   struct env303 env ,    struct List_3 *  list1750 ,    struct DynStr_131  it1752 ) {
    struct env535 envinst535 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each534 ) ( (  it1752 ) ,  ( (struct funenv535){ .fun = lam535, .env = envinst535 } ) ) );
    return ( Unit_13_Unit );
}

struct env1054 {
    ;
    struct env540 envinst540;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam539 (   struct env539 env ,    struct List_3  x1754 ) {
    struct funenv540  temp1055 = ( (struct funenv540){ .fun = add540, .env =  env.envinst540  } );
    return ( temp1055.fun ( temp1055.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1054 (   struct env1054 env ,    struct List_280 *  list1750 ,    struct Map_299  it1752 ) {
    struct env539 envinst539 = {
        .envinst540 = env.envinst540 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each538 ) ( (  it1752 ) ,  ( (struct funenv539){ .fun = lam539, .env = envinst539 } ) ) );
    return ( Unit_13_Unit );
}

struct env1056 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam580 (   struct env580 env ,    char  x1754 ) {
    struct funenv304  temp1057 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1057.fun ( temp1057.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1056 (   struct env1056 env ,    struct List_3 *  list1750 ,    struct List_3 *  it1752 ) {
    struct env580 envinst580 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each579 ) ( (  it1752 ) ,  ( (struct funenv580){ .fun = lam580, .env = envinst580 } ) ) );
    return ( Unit_13_Unit );
}

struct env1058 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam584 (   struct env584 env ,    char  x1754 ) {
    struct funenv304  temp1059 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1059.fun ( temp1059.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1058 (   struct env1058 env ,    struct List_3 *  list1750 ,    struct Slice_5  it1752 ) {
    struct env584 envinst584 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each583 ) ( (  it1752 ) ,  ( (struct funenv584){ .fun = lam584, .env = envinst584 } ) ) );
    return ( Unit_13_Unit );
}

struct env1060 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam588 (   struct env588 env ,    char  x1754 ) {
    struct funenv304  temp1061 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1061.fun ( temp1061.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1060 (   struct env1060 env ,    struct List_3 *  list1750 ,    struct TakeWhile_481  it1752 ) {
    struct env588 envinst588 = {
        .envinst304 = env.envinst304 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each587 ) ( (  it1752 ) ,  ( (struct funenv588){ .fun = lam588, .env = envinst588 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1062 (    struct List_3 *  l1757 ,    size_t  new_dash_count1759 ) {
    (*  l1757 ) .f_count = (  new_dash_count1759 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list302 (   struct env302 env ,    struct DynStr_131  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_3  temp1063 = ( (  mk1038 ) ( (  al1764 ) ) );
    struct List_3 *  l1765 = ( &temp1063 );
    struct funenv303  temp1064 = ( (struct funenv303){ .fun = add_dash_all303, .env =  env.envinst303  } );
    ( temp1064.fun ( temp1064.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

struct funenv1054 {
    enum Unit_13  (*fun) (  struct env1054  ,    struct List_280 *  ,    struct Map_299  );
    struct env1054 env;
};

struct env1065 {
    ;
    ;
    struct env1054 envinst1054;
    ;
    ;
    ;
};

static  struct List_280   to_dash_list1065 (   struct env1065 env ,    struct Map_299  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_280  temp1066 = ( (  mk1037 ) ( (  al1764 ) ) );
    struct List_280 *  l1765 = ( &temp1066 );
    struct funenv1054  temp1067 = ( (struct funenv1054){ .fun = add_dash_all1054, .env =  env.envinst1054  } );
    ( temp1067.fun ( temp1067.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

static  struct Slice_5   to_dash_slice1068 (    struct List_3  l1768 ) {
    char *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct Slice_279   to_dash_slice1069 (    struct List_280  l1768 ) {
    struct List_3 *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_279) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct SliceAddressIter_592   addresses1070 (    struct List_280  l1772 ) {
    return ( (  addresses990 ) ( ( (  to_dash_slice1069 ) ( (  l1772 ) ) ) ) );
}

static  size_t   size1071 (    struct List_3 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   size1072 (    struct List_280 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   clamp_dash_uint1073 (    int32_t  self1793 ) {
    if ( (  cmp75 ( (  self1793 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size272 ) ( ( (uint32_t ) (  self1793 ) ) ) );
    }
}

static  struct Maybe_944   hex_dash_digit1074 (    char  c1803 ) {
    if ( ( (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_944_Just ) ( (  op_dash_sub92 ( ( (  char_dash_u8925 ) ( (  c1803 ) ) ) , ( (  char_dash_u8925 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_944_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8925 ) ( (  c1803 ) ) ) , ( (  char_dash_u8925 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp928 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_944_Just ) ( (  op_dash_add91 ( (  op_dash_sub92 ( ( (  char_dash_u8925 ) ( (  c1803 ) ) ) , ( (  char_dash_u8925 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_944) { .tag = Maybe_944_None_t } );
}

static  uint32_t   lam1076 (    char  c1808 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64275 ) ( ( (  or_dash_fail943 ) ( ( (  hex_dash_digit1074 ) ( (  c1808 ) ) ) ,  ( ( StrConcat_816_StrConcat ) ( ( ( StrConcat_817_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1808 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1077 (    uint32_t  elem1810 ,    uint32_t  b1812 ) {
    return (  op_dash_add87 ( (  op_dash_mul89 ( (  b1812 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1810 ) ) );
}

static  uint32_t   from_dash_hex1075 (    const char*  arr1806 ) {
    return ( (  reduce688 ) ( ( (  map334 ) ( (  arr1806 ) ,  (  lam1076 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1077 ) ) );
}

static  struct Maybe_265   get1078 (    const char*  s1846 ) {
    return ( (  from_dash_nullable_dash_c_dash_str264 ) ( ( ( getenv ) ( (  s1846 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1079 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1080 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1081 (    uint32_t  x1823 ,    uint32_t  y1825 ) {
    uint32_t  x1826 = (  op_dash_add87 ( (  x1823 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1827 = (  op_dash_add87 ( (  y1825 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str894 ) ( ( ( StrConcat_895_StrConcat ) ( ( ( StrConcat_896_StrConcat ) ( ( ( StrConcat_897_StrConcat ) ( ( ( StrConcat_798_StrConcat ) ( ( "\x1b[" ) ,  (  y1827 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1826 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1082 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_950   get_dash_dimensions1083 (  ) {
    struct Winsize_177  temp1084 = ( ( (  zeroed233 ) ( ) ) );
    struct Winsize_177 *  ws1831 = ( &temp1084 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno109 ) ( ) ) ,  ( (  tiocgwinsz125 ) ( ) ) ,  (  ws1831 ) ) ) , (  op_dash_neg86 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_950_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_950_Tuple2 ) ( ( (  u16_dash_u32271 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32271 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1085 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1086 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_618   query_dash_palette1087 (  ) {
    struct Maybe_265  colorterm1847 = ( (  get1078 ) ( ( "COLORTERM" ) ) );
    struct Maybe_265  dref1848 = (  colorterm1847 );
    if ( dref1848.tag == Maybe_265_Just_t ) {
        if ( ( (  eq927 ( ( dref1848 .stuff .Maybe_265_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq927 ( ( dref1848 .stuff .Maybe_265_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_618_PaletteRGB );
        }
    }
    else if ( dref1848.tag == Maybe_265_None_t ) {
    }
    struct Maybe_265  dref1850 = ( (  get1078 ) ( ( "TERM" ) ) );
    if ( dref1850.tag == Maybe_265_Just_t ) {
        if ( (  eq927 ( ( dref1850 .stuff .Maybe_265_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_618_Palette8 );
        }
    }
    else if ( dref1850.tag == Maybe_265_None_t ) {
    }
    return ( ColorPalette_618_Palette16 );
}

static  enum Unit_13   set_dash_fg81088 (    enum Color8_55  color1866 ) {
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

static  enum Unit_13   set_dash_fg161089 (    enum Color16_56  color1870 ) {
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

static  enum Unit_13   set_dash_bg81090 (    enum Color8_55  color1874 ) {
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

static  enum Unit_13   set_dash_bg161091 (    enum Color16_56  color1878 ) {
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

static  enum Unit_13   reset_dash_colors1092 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1093 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561094 (    uint8_t  color1884 ) {
    ( (  print_dash_str892 ) ( ( ( StrConcat_887_StrConcat ) ( ( ( StrConcat_888_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1884 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561095 (    uint8_t  color1887 ) {
    ( (  print_dash_str892 ) ( ( ( StrConcat_887_StrConcat ) ( ( ( StrConcat_888_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1887 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1096 (    struct RGB_57  c1907 ) {
    ( (  print_dash_str882 ) ( ( ( StrConcat_883_StrConcat ) ( ( ( StrConcat_884_StrConcat ) ( ( ( StrConcat_885_StrConcat ) ( ( ( StrConcat_886_StrConcat ) ( ( ( StrConcat_887_StrConcat ) ( ( ( StrConcat_888_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1907 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1097 (    struct RGB_57  c1910 ) {
    ( (  print_dash_str882 ) ( ( ( StrConcat_883_StrConcat ) ( ( ( StrConcat_884_StrConcat ) ( ( ( StrConcat_885_StrConcat ) ( ( ( StrConcat_886_StrConcat ) ( ( ( StrConcat_887_StrConcat ) ( ( ( StrConcat_888_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1910 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1098 (    struct Color_54  c1928 ) {
    struct Color_54  dref1929 = (  c1928 );
    if ( dref1929.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1085 ) ( ) );
    }
    else if ( dref1929.tag == Color_54_Color8_t ) {
        ( (  set_dash_fg81088 ) ( ( dref1929 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_Color16_t ) {
        ( (  set_dash_fg161089 ) ( ( dref1929 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_Color256_t ) {
        ( (  set_dash_fg2561094 ) ( ( dref1929 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1096 ) ( ( dref1929 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1099 (    struct Color_54  c1936 ) {
    struct Color_54  dref1937 = (  c1936 );
    if ( dref1937.tag == Color_54_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1086 ) ( ) );
    }
    else if ( dref1937.tag == Color_54_Color8_t ) {
        ( (  set_dash_bg81090 ) ( ( dref1937 .stuff .Color_54_Color8_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_Color16_t ) {
        ( (  set_dash_bg161091 ) ( ( dref1937 .stuff .Color_54_Color16_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_Color256_t ) {
        ( (  set_dash_bg2561095 ) ( ( dref1937 .stuff .Color_54_Color256_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_54_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1097 ) ( ( dref1937 .stuff .Color_54_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1100 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam545 (   struct env545 env ,    char  c1993 ) {
    struct funenv304  temp1101 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1101.fun ( temp1101.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1100 (   struct env1100 env ,    struct StrBuilder_546 *  builder1989 ,    const char*  s1991 ) {
    struct env545 envinst545 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each544 ) ( ( (  chars771 ) ( (  s1991 ) ) ) ,  ( (struct funenv545){ .fun = lam545, .env = envinst545 } ) ) );
    return ( Unit_13_Unit );
}

struct env1102 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam598 (   struct env598 env ,    char  c1993 ) {
    struct funenv304  temp1103 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1103.fun ( temp1103.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1102 (   struct env1102 env ,    struct StrBuilder_546 *  builder1989 ,    struct TakeWhile_486  s1991 ) {
    struct env598 envinst598 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each597 ) ( ( (  chars912 ) ( (  s1991 ) ) ) ,  ( (struct funenv598){ .fun = lam598, .env = envinst598 } ) ) );
    return ( Unit_13_Unit );
}

struct env1104 {
    ;
    struct env304 envinst304;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam602 (   struct env602 env ,    char  c1993 ) {
    struct funenv304  temp1105 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    return ( temp1105.fun ( temp1105.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1104 (   struct env1104 env ,    struct StrBuilder_546 *  builder1989 ,    struct TakeWhile_490  s1991 ) {
    struct env602 envinst602 = {
        .envinst304 = env.envinst304 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each601 ) ( ( (  chars913 ) ( (  s1991 ) ) ) ,  ( (struct funenv602){ .fun = lam602, .env = envinst602 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char607 (   struct env607 env ,    struct StrBuilder_546 *  builder1996 ,    char  c1998 ) {
    struct funenv304  temp1106 = ( (struct funenv304){ .fun = add304, .env =  env.envinst304  } );
    ( temp1106.fun ( temp1106.env ,  ( & ( ( * (  builder1996 ) ) .f_chars ) ) ,  (  c1998 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1051 {
    enum Unit_13  (*fun) (  struct env1051  ,    struct List_3 *  );
    struct env1051 env;
};

struct env1107 {
    ;
    struct env1051 envinst1051;
    ;
};

static  enum Unit_13   pop1107 (   struct env1107 env ,    struct StrBuilder_546 *  sb2006 ) {
    struct funenv1051  temp1108 = ( (struct funenv1051){ .fun = pop1051, .env =  env.envinst1051  } );
    return ( temp1108.fun ( temp1108.env ,  ( & ( ( * (  sb2006 ) ) .f_chars ) ) ) );
}

static  size_t   count1109 (    struct StrBuilder_546 *  sb2009 ) {
    return ( ( ( * (  sb2009 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_546   mk1110 (    enum CAllocator_4  al2012 ) {
    return ( (struct StrBuilder_546) { .f_chars = ( (  mk1038 ) ( (  al2012 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1111 (    struct StrBuilder_546 *  builder2018 ) {
    return ( (  to_dash_slice1068 ) ( ( ( * (  builder2018 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1112 (    struct StrBuilder_546 *  builder2021 ) {
    ( (  free1039 ) ( ( & ( ( * (  builder2021 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1100 {
    enum Unit_13  (*fun) (  struct env1100  ,    struct StrBuilder_546 *  ,    const char*  );
    struct env1100 env;
};

struct env1113 {
    ;
    ;
    ;
    struct env607 envinst607;
    ;
    ;
    ;
    struct env1100 envinst1100;
    ;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1113 (   struct env1113 env ,    const char*  s2035 ,    enum CAllocator_4  al2037 ) {
    struct StrBuilder_546  temp1114 = ( (  mk1110 ) ( (  al2037 ) ) );
    struct StrBuilder_546 *  sb2038 = ( &temp1114 );
    struct funenv1100  temp1115 = ( (struct funenv1100){ .fun = write1100, .env =  env.envinst1100  } );
    ( temp1115.fun ( temp1115.env ,  (  sb2038 ) ,  (  s2035 ) ) );
    struct funenv607  temp1116 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
    ( temp1116.fun ( temp1116.env ,  (  sb2038 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2039 = ( (  as_dash_str789 ) ( (  sb2038 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2039 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2039 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1102 {
    enum Unit_13  (*fun) (  struct env1102  ,    struct StrBuilder_546 *  ,    struct TakeWhile_486  );
    struct env1102 env;
};

struct env1117 {
    ;
    ;
    ;
    struct env607 envinst607;
    ;
    ;
    ;
    ;
    struct env1102 envinst1102;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1117 (   struct env1117 env ,    struct TakeWhile_486  s2035 ,    enum CAllocator_4  al2037 ) {
    struct StrBuilder_546  temp1118 = ( (  mk1110 ) ( (  al2037 ) ) );
    struct StrBuilder_546 *  sb2038 = ( &temp1118 );
    struct funenv1102  temp1119 = ( (struct funenv1102){ .fun = write1102, .env =  env.envinst1102  } );
    ( temp1119.fun ( temp1119.env ,  (  sb2038 ) ,  (  s2035 ) ) );
    struct funenv607  temp1120 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
    ( temp1120.fun ( temp1120.env ,  (  sb2038 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2039 = ( (  as_dash_str789 ) ( (  sb2038 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2039 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2039 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1104 {
    enum Unit_13  (*fun) (  struct env1104  ,    struct StrBuilder_546 *  ,    struct TakeWhile_490  );
    struct env1104 env;
};

struct env1121 {
    ;
    ;
    ;
    struct env607 envinst607;
    ;
    ;
    ;
    ;
    struct env1104 envinst1104;
    ;
    ;
    ;
};

static  struct DynStr_131   mk_dash_dyn_dash_str1121 (   struct env1121 env ,    struct TakeWhile_490  s2035 ,    enum CAllocator_4  al2037 ) {
    struct StrBuilder_546  temp1122 = ( (  mk1110 ) ( (  al2037 ) ) );
    struct StrBuilder_546 *  sb2038 = ( &temp1122 );
    struct funenv1104  temp1123 = ( (struct funenv1104){ .fun = write1104, .env =  env.envinst1104  } );
    ( temp1123.fun ( temp1123.env ,  (  sb2038 ) ,  (  s2035 ) ) );
    struct funenv607  temp1124 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
    ( temp1124.fun ( temp1124.env ,  (  sb2038 ) ,  ( (  nullchar320 ) ( ) ) ) );
    struct DynStr_131  dynstr2039 = ( (  as_dash_str789 ) ( (  sb2038 ) ) );
    return ( (struct DynStr_131) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2039 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub94 ( ( ( (  dynstr2039 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1113 {
    struct DynStr_131  (*fun) (  struct env1113  ,    const char*  ,    enum CAllocator_4  );
    struct env1113 env;
};

struct env1125 {
    ;
    struct env1113 envinst1113;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1125 (   struct env1125 env ,    const char*  s2042 ,    enum CAllocator_4  al2044 ) {
    struct funenv1113  temp1126 = ( (struct funenv1113){ .fun = mk_dash_dyn_dash_str1113, .env =  env.envinst1113  } );
    return ( ( (  cast185 ) ( ( ( ( temp1126.fun ( temp1126.env ,  (  s2042 ) ,  (  al2044 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1117 {
    struct DynStr_131  (*fun) (  struct env1117  ,    struct TakeWhile_486  ,    enum CAllocator_4  );
    struct env1117 env;
};

struct env1127 {
    ;
    struct env1117 envinst1117;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1127 (   struct env1127 env ,    struct TakeWhile_486  s2042 ,    enum CAllocator_4  al2044 ) {
    struct funenv1117  temp1128 = ( (struct funenv1117){ .fun = mk_dash_dyn_dash_str1117, .env =  env.envinst1117  } );
    return ( ( (  cast185 ) ( ( ( ( temp1128.fun ( temp1128.env ,  (  s2042 ) ,  (  al2044 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1121 {
    struct DynStr_131  (*fun) (  struct env1121  ,    struct TakeWhile_490  ,    enum CAllocator_4  );
    struct env1121 env;
};

struct env1129 {
    ;
    struct env1121 envinst1121;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1129 (   struct env1129 env ,    struct TakeWhile_490  s2042 ,    enum CAllocator_4  al2044 ) {
    struct funenv1121  temp1130 = ( (struct funenv1121){ .fun = mk_dash_dyn_dash_str1121, .env =  env.envinst1121  } );
    return ( ( (  cast185 ) ( ( ( ( temp1130.fun ( temp1130.env ,  (  s2042 ) ,  (  al2044 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1131 (  ) {
    struct timespec  temp1132 = ( (  undefined133 ) ( ) );
    struct timespec *  t2197 = ( &temp1132 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  t2197 ) ) );
    return ( * (  t2197 ) );
}

struct Duration_1134 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1133 (    struct Duration_1134  l2201 ,    struct Duration_1134  r2203 ) {
    enum Ordering_10  scmp2204 = ( (  cmp74 ) ( ( (  l2201 ) .f_secs ) ,  ( (  r2203 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2204 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2204 );
    }
    return ( (  cmp74 ) ( ( (  l2201 ) .f_nsecs ) ,  ( (  r2203 ) .f_nsecs ) ) );
}

static  struct Duration_1134   diff1135 (    struct timespec  l2207 ,    struct timespec  r2209 ) {
    int64_t  secdiff2210 = (  op_dash_sub79 ( ( (  l2207 ) .tv_sec ) , ( (  r2209 ) .tv_sec ) ) );
    int64_t  nsdiff2211 = (  op_dash_sub79 ( ( (  l2207 ) .tv_nsec ) , ( (  r2209 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2212 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp74 ( (  nsdiff2211 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp74 ( (  secdiff2210 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1134) { .f_secs = (  secdiff2210 ) , .f_nsecs = (  op_dash_neg81 ( (  nsdiff2211 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2210 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1134) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2211 ) } );
            } else {
                return ( (struct Duration_1134) { .f_secs = (  op_dash_sub79 ( (  secdiff2210 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add78 ( (  ns_dash_in_dash_secs2212 ) , (  nsdiff2211 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp74 ( (  secdiff2210 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1134) { .f_secs = (  secdiff2210 ) , .f_nsecs = (  nsdiff2211 ) } );
        } else {
            return ( (struct Duration_1134) { .f_secs = (  op_dash_sub79 ( (  secdiff2210 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub79 ( (  ns_dash_in_dash_secs2212 ) , (  nsdiff2211 ) ) ) } );
        }
    }
}

static  struct Duration_1134   duration_dash_from_dash_ns1136 (    int64_t  ns2215 ) {
    int64_t  ns_dash_in_dash_secs2216 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1134) { .f_secs = (  op_dash_div80 ( (  ns2215 ) , (  ns_dash_in_dash_secs2216 ) ) ) , .f_nsecs = ( (  mod762 ) ( (  ns2215 ) ,  (  ns_dash_in_dash_secs2216 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1137 (    struct Duration_1134  d2227 ) {
    int64_t  ns_dash_in_dash_secs2228 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add78 ( (  op_dash_mul32 ( ( (  d2227 ) .f_secs ) , (  ns_dash_in_dash_secs2228 ) ) ) , ( (  d2227 ) .f_nsecs ) ) );
}

static  struct Scanner_286   mk1138 (    struct DynStr_131  s2238 ) {
    return ( (struct Scanner_286) { .f_s = ( (  chars796 ) ( (  s2238 ) ) ) } );
}

static  struct Maybe_691   scan_dash_int1139 (    struct Scanner_286 *  sc2241 ) {
    struct TakeWhile_479  digit_dash_chars2242 = ( (  take_dash_while502 ) ( (  sc2241 ) ,  (  is_dash_digit1025 ) ) );
    if ( ( (  null753 ) ( (  digit_dash_chars2242 ) ) ) ) {
        return ( (struct Maybe_691) { .tag = Maybe_691_None_t } );
    }
    ( (  drop_prime_755 ) ( (  sc2241 ) ,  ( (  count721 ) ( (  digit_dash_chars2242 ) ) ) ) );
    return ( (  parse_dash_int1027 ) ( (  digit_dash_chars2242 ) ) );
}

static  struct Termios_136   enable_dash_raw_dash_mode1140 (  ) {
    struct Termios_136  temp1141 = ( (  undefined135 ) ( ) );
    struct Termios_136 *  orig_dash_termios2249 = ( &temp1141 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( (  orig_dash_termios2249 ) ) ) ) );
    struct Termios_136  raw2250 = ( * (  orig_dash_termios2249 ) );
    raw2250 .f_c_dash_lflag = ( (  u32_dash_and760 ) ( ( (  raw2250 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg761 ) ( ( (  u32_dash_ors757 ) ( ( (  from_dash_listlike97 ) ( ( (struct Array_99) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2250 .f_c_dash_iflag = ( (  u32_dash_and760 ) ( ( (  raw2250 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg761 ) ( ( (  u32_dash_ors758 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  brkint115 ) ( ) ) , ( (  icrnl116 ) ( ) ) , ( (  inpck117 ) ( ) ) , ( (  istrip118 ) ( ) ) , ( ( (  ixon119 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2250 .f_c_dash_oflag = ( (  u32_dash_and760 ) ( ( (  raw2250 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg761 ) ( ( (  u32_dash_ors759 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( ( (  opost120 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2250 .f_c_dash_cflag = ( (  u32_dash_or756 ) ( ( (  raw2250 ) .f_c_dash_cflag ) ,  ( (  cs8121 ) ( ) ) ) );
    ( (  set1019 ) ( ( & ( (  raw2250 ) .f_c_dash_cc ) ) ,  ( (  vmin122 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1019 ) ( ( & ( (  raw2250 ) .f_c_dash_cc ) ) ,  ( (  vtime123 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( ( & (  raw2250 ) ) ) ) ) );
    return ( * (  orig_dash_termios2249 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1142 (    struct Termios_136 *  og_dash_termios2253 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  tcsa_dash_flush124 ) ( ) ) ,  ( (  cast_dash_ptr212 ) ( (  og_dash_termios2253 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   read_dash_byte1143 (    int32_t  timeout_dash_ms2257 ) {
    struct Pollfd_219  pfd2258 = ( (struct Pollfd_219) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp75 ( ( ( poll ) ( ( (  cast_dash_ptr218 ) ( ( & (  pfd2258 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2257 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    char  c2259 = ( ( (  zeroed227 ) ( ) ) );
    if ( (  cmp75 ( ( ( read ) ( ( (  stdin_dash_fileno110 ) ( ) ) ,  ( (  cast_dash_ptr207 ) ( ( & (  c2259 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_297) { .tag = Maybe_297_None_t } );
    }
    return ( ( Maybe_297_Just ) ( (  c2259 ) ) );
}

static  enum Unit_13   flush_dash_stdout1144 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr259 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1145 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1146 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1148 {
    bool *  should_dash_resize2263;
    ;
    ;
    ;
    ;
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

struct env1149 {
    bool *  should_dash_resize2263;
};

struct funenv1149 {
    enum Unit_13  (*fun) (  struct env1149  ,    int32_t  );
    struct env1149 env;
};

struct funenv1149  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1150 ) {
    struct funenv1149  temp1151 = _intr_sigarr [  __intr__sig1150 ];
    temp1151.fun ( temp1151.env ,  __intr__sig1150 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1152 ,   struct funenv1149  __intr__fun1153 ) {
    _intr_sigarr [  __intr__sig1152 ] =  __intr__fun1153;
    signal(  __intr__sig1152 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1149 (   struct env1149 env ,    int32_t  dref2270 ) {
    (* env.should_dash_resize2263 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_617   mk1148 (   struct env1148 env ) {
    struct Termios_136  og_dash_termios2265 = ( (  enable_dash_raw_dash_mode1140 ) ( ) );
    ( (  hide_dash_cursor1080 ) ( ) );
    ( (  reset_dash_colors1092 ) ( ) );
    ( (  clear_dash_screen1093 ) ( ) );
    ( (  enable_dash_mouse1145 ) ( ) );
    ( (  flush_dash_stdout1144 ) ( ) );
    enum ColorPalette_618  palette2266 = ( (  query_dash_palette1087 ) ( ) );
    struct Tuple2_950  dims2267 = ( (  get_dash_dimensions1083 ) ( ) );
    uint32_t  fps2268 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2269 = ( (  now1131 ) ( ) );
    struct env1149 envinst1149 = {
        .should_dash_resize2263 = env.should_dash_resize2263 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1149){ .fun = lam1149, .env = envinst1149 } ) ) );
    return ( (struct Tui_617) { .f_width = ( (  fst949 ) ( (  dims2267 ) ) ) , .f_height = ( (  snd951 ) ( (  dims2267 ) ) ) , .f_target_dash_fps = (  fps2268 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2269 ) , .f_fps_dash_ts = (  last_dash_sync2269 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2265 ) , .f_palette = (  palette2266 ) } );
}

static  enum Unit_13   sync1154 (    struct Tui_617 *  tui2273 ) {
    if ( (  eq42 ( ( ( * (  tui2273 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2274 = (  op_dash_div80 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size272 ) ( ( ( * (  tui2273 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1155 = ( (  undefined133 ) ( ) );
    struct timespec *  now2275 = ( &temp1155 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  now2275 ) ) );
    int64_t  elapsed_dash_ns2276 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( * (  now2275 ) ) .tv_sec ) , ( ( ( * (  tui2273 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub79 ( ( ( * (  now2275 ) ) .tv_nsec ) , ( ( ( * (  tui2273 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2277 = (  op_dash_sub79 ( (  frame_dash_ns2274 ) , (  elapsed_dash_ns2276 ) ) );
    if ( (  cmp74 ( (  sleep_dash_ns2277 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1156 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2277 ) } );
        struct timespec *  ts2278 = ( &temp1156 );
        ( ( nanosleep ) ( (  ts2278 ) ,  ( (  null_dash_ptr261 ) ( ) ) ) );
    }
    struct timespec  temp1157 = ( (  undefined133 ) ( ) );
    struct timespec *  last_dash_sync2279 = ( &temp1157 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic106 ) ( ) ) ,  (  last_dash_sync2279 ) ) );
    (*  tui2273 ) .f_last_dash_sync = ( * (  last_dash_sync2279 ) );
    (*  tui2273 ) .f_fps_dash_count = (  op_dash_add87 ( ( ( * (  tui2273 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2280 = (  op_dash_add78 ( (  op_dash_mul32 ( (  op_dash_sub79 ( ( ( ( * (  tui2273 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2273 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div80 ( (  op_dash_sub79 ( ( ( ( * (  tui2273 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2273 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp74 ( (  fps_dash_elapsed_dash_ms2280 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2273 ) .f_actual_dash_fps = ( ( * (  tui2273 ) ) .f_fps_dash_count );
        (*  tui2273 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2273 ) .f_fps_dash_ts = ( ( * (  tui2273 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1158 (    struct Tui_617 *  tui2283 ) {
    ( (  disable_dash_mouse1146 ) ( ) );
    ( (  show_dash_cursor1079 ) ( ) );
    ( (  reset_dash_colors1092 ) ( ) );
    ( (  clear_dash_screen1093 ) ( ) );
    ( (  reset_dash_cursor_dash_position1082 ) ( ) );
    ( (  disable_dash_raw_dash_mode1142 ) ( ( & ( ( * (  tui2283 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1144 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_144   btn_dash_to_dash_mouse_dash_button1159 (    int64_t  btn2290 ) {
    return ( {  int32_t  dref2291 = ( (  i64_dash_i32269 ) ( (  btn2290 ) ) ) ;  dref2291 == 0 ? ( MouseButton_144_MouseLeft ) :  dref2291 == 1 ? ( MouseButton_144_MouseMiddle ) :  dref2291 == 2 ? ( MouseButton_144_MouseRight ) :  dref2291 == 64 ? ( MouseButton_144_ScrollUp ) :  dref2291 == 65 ? ( MouseButton_144_ScrollDown ) : ( (  panic_prime_937 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1161 {
    enum {
        Maybe_1161_None_t,
        Maybe_1161_Just_t,
    } tag;
    union {
        struct {
            struct Key_522  field0;
        } Maybe_1161_Just_s;
    } stuff;
};

static struct Maybe_1161 Maybe_1161_Just (  struct Key_522  field0 ) {
    return ( struct Maybe_1161 ) { .tag = Maybe_1161_Just_t, .stuff = { .Maybe_1161_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1161   parse_dash_ss31160 (    char  c2294 ) {
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2294 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1161_Just ) ( ( (struct Key_522) { .tag = Key_522_F4_t } ) ) );
    }
    return ( (struct Maybe_1161) { .tag = Maybe_1161_None_t } );
}

static  struct Maybe_520   parse_dash_csi1162 (    struct DynStr_131  seq2297 ) {
    if ( (  eq45 ( ( ( (  seq2297 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
    }
    char  last2298 = (  elem_dash_get997 ( ( (  seq2297 ) .f_contents ) , (  op_dash_sub94 ( ( ( (  seq2297 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get997 ( ( (  seq2297 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_286  temp1163 = ( (  mk1138 ) ( ( (  substr322 ) ( (  seq2297 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2297 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_286 *  sc2299 = ( &temp1163 );
        struct Maybe_691  dref2300 = ( (  scan_dash_int1139 ) ( (  sc2299 ) ) );
        if ( dref2300.tag == Maybe_691_None_t ) {
            return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
        }
        else if ( dref2300.tag == Maybe_691_Just_t ) {
            ( (  next492 ) ( (  sc2299 ) ) );
            struct Maybe_691  dref2302 = ( (  scan_dash_int1139 ) ( (  sc2299 ) ) );
            if ( dref2302.tag == Maybe_691_None_t ) {
                return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
            }
            else if ( dref2302.tag == Maybe_691_Just_t ) {
                ( (  next492 ) ( (  sc2299 ) ) );
                struct Maybe_691  dref2304 = ( (  scan_dash_int1139 ) ( (  sc2299 ) ) );
                if ( dref2304.tag == Maybe_691_None_t ) {
                    return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
                }
                else if ( dref2304.tag == Maybe_691_Just_t ) {
                    return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Mouse ) ( ( (struct MouseEvent_523) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1159 ) ( ( dref2300 .stuff .Maybe_691_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2302 .stuff .Maybe_691_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( ( dref2304 .stuff .Maybe_691_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq45 ( ( ( (  seq2297 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) {
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Up_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Down_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Right_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Left_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Home_t } ) ) ) ) );
        }
        if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
    }
    if ( (  eq48 ( (  last2298 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_286  temp1164 = ( (  mk1138 ) ( (  seq2297 ) ) );
        struct Scanner_286 *  sc2306 = ( &temp1164 );
        struct Maybe_691  dref2307 = ( (  scan_dash_int1139 ) ( (  sc2306 ) ) );
        if ( dref2307.tag == Maybe_691_None_t ) {
            return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
        }
        else if ( dref2307.tag == Maybe_691_Just_t ) {
            return ( {  int32_t  dref2309 = ( (  i64_dash_i32269 ) ( ( dref2307 .stuff .Maybe_691_Just_s .field0 ) ) ) ;  dref2309 == 1 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Home_t } ) ) ) ) ) :  dref2309 == 2 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Insert_t } ) ) ) ) ) :  dref2309 == 3 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Delete_t } ) ) ) ) ) :  dref2309 == 4 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_End_t } ) ) ) ) ) :  dref2309 == 5 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_PageUp_t } ) ) ) ) ) :  dref2309 == 6 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_PageDown_t } ) ) ) ) ) :  dref2309 == 15 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F5_t } ) ) ) ) ) :  dref2309 == 17 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F6_t } ) ) ) ) ) :  dref2309 == 18 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F7_t } ) ) ) ) ) :  dref2309 == 19 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F8_t } ) ) ) ) ) :  dref2309 == 20 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F9_t } ) ) ) ) ) :  dref2309 == 21 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F10_t } ) ) ) ) ) :  dref2309 == 23 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F11_t } ) ) ) ) ) :  dref2309 == 24 ? ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_F12_t } ) ) ) ) ) : ( (struct Maybe_520) { .tag = Maybe_520_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
}

static  struct Maybe_520   read_dash_key1165 (  ) {
    char  temp1166 = ( (  undefined128 ) ( ) );
    char *  ch2311 = ( &temp1166 );
    struct Maybe_297  dref2312 = ( (  read_dash_byte1143 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2312.tag == Maybe_297_None_t ) {
        return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
    }
    else if ( dref2312.tag == Maybe_297_Just_t ) {
        (*  ch2311 ) = ( dref2312 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp77 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2314 = ( (  i32_dash_char926 ) ( ( (  u32_dash_i32274 ) ( ( (  u32_dash_or756 ) ( ( (  i32_dash_u32266 ) ( ( (  char_dash_i32924 ) ( ( * (  ch2311 ) ) ) ) ) ) ,  ( (  from_dash_hex1075 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( ( Key_522_Ctrl ) ( (  letter2314 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp77 ( ( (  char_dash_u8925 ) ( ( * (  ch2311 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1165 ) ( ) );
        } else {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( ( Key_522_Char ) ( ( * (  ch2311 ) ) ) ) ) ) ) );
        }
    }
    char  temp1167 = ( (  undefined128 ) ( ) );
    char *  ch22315 = ( &temp1167 );
    struct Maybe_297  dref2316 = ( (  read_dash_byte1143 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2316.tag == Maybe_297_None_t ) {
        return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Escape_t } ) ) ) ) );
    }
    else if ( dref2316.tag == Maybe_297_Just_t ) {
        (*  ch22315 ) = ( dref2316 .stuff .Maybe_297_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22315 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_181  temp1168 = ( ( (  zeroed239 ) ( ) ) );
        struct Array_181 *  seq2318 = ( &temp1168 );
        int32_t  slen2319 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp75 ( (  slen2319 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1169 = ( (  undefined128 ) ( ) );
            char *  sc2320 = ( &temp1169 );
            struct Maybe_297  dref2321 = ( (  read_dash_byte1143 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2321.tag == Maybe_297_None_t ) {
                break;
            }
            else if ( dref2321.tag == Maybe_297_Just_t ) {
                (*  sc2320 ) = ( dref2321 .stuff .Maybe_297_Just_s .field0 );
            }
            ( (  set1020 ) ( (  seq2318 ) ,  ( (  i32_dash_size268 ) ( (  slen2319 ) ) ) ,  ( * (  sc2320 ) ) ) );
            slen2319 = (  op_dash_add82 ( (  slen2319 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp77 ( ( (  char_dash_u8925 ) ( ( * (  sc2320 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp77 ( ( (  char_dash_u8925 ) ( ( * (  sc2320 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1162 ) ( ( (struct DynStr_131) { .f_contents = ( (  subslice292 ) ( ( (  as_dash_slice1021 ) ( (  seq2318 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( (  slen2319 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22315 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1170 = ( (  undefined128 ) ( ) );
        char *  sc2323 = ( &temp1170 );
        struct Maybe_297  dref2324 = ( (  read_dash_byte1143 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2324.tag == Maybe_297_None_t ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Escape_t } ) ) ) ) );
        }
        else if ( dref2324.tag == Maybe_297_Just_t ) {
            (*  sc2323 ) = ( dref2324 .stuff .Maybe_297_Just_s .field0 );
        }
        struct Maybe_1161  dref2326 = ( (  parse_dash_ss31160 ) ( ( * (  sc2323 ) ) ) );
        if ( dref2326.tag == Maybe_1161_None_t ) {
            return ( (struct Maybe_520) { .tag = Maybe_520_None_t } );
        }
        else if ( dref2326.tag == Maybe_1161_Just_t ) {
            return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( dref2326 .stuff .Maybe_1161_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_520_Just ) ( ( ( InputEvent_521_Key ) ( ( (struct Key_522) { .tag = Key_522_Escape_t } ) ) ) ) );
}

struct env1171 {
    ;
    ;
    ;
    bool *  should_dash_resize2263;
};

static  bool   update_dash_dimensions1171 (   struct env1171 env ,    struct Tui_617 *  tui2330 ) {
    if ( ( ! ( * ( env.should_dash_resize2263 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2263 ) = ( false );
    struct Tuple2_950  dim2331 = ( (  get_dash_dimensions1083 ) ( ) );
    uint32_t  w2332 = ( (  fst949 ) ( (  dim2331 ) ) );
    uint32_t  h2333 = ( (  snd951 ) ( (  dim2331 ) ) );
    (*  tui2330 ) .f_width = (  w2332 );
    (*  tui2330 ) .f_height = (  h2333 );
    return ( true );
}

static  struct Cell_53   lam1173 (    struct Cell_53  dref2351 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Cell_53   lam1174 (    struct Cell_53  dref2353 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  struct Screen_616   mk_dash_screen1172 (    struct Tui_617 *  tui2347 ,    enum CAllocator_4  al2349 ) {
    struct Slice_552  cur2350 = ( (  allocate1011 ) ( (  al2349 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2347 ) ) .f_width ) , ( ( * (  tui2347 ) ) .f_height ) ) ) ) ) ) );
    ( (  map998 ) ( (  cur2350 ) ,  (  lam1173 ) ) );
    struct Slice_552  prev2352 = ( (  allocate1011 ) ( (  al2349 ) ,  ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( ( ( * (  tui2347 ) ) .f_width ) , ( ( * (  tui2347 ) ) .f_height ) ) ) ) ) ) );
    ( (  map999 ) ( (  prev2352 ) ,  (  lam1174 ) ) );
    return ( (struct Screen_616) { .f_current = (  cur2350 ) , .f_previous = (  prev2352 ) , .f_al = (  al2349 ) , .f_tui = (  tui2347 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1175 (    struct Screen_616 *  screen2356 ) {
    enum CAllocator_4  al2357 = ( ( * (  screen2356 ) ) .f_al );
    ( (  free1016 ) ( (  al2357 ) ,  ( ( * (  screen2356 ) ) .f_current ) ) );
    ( (  free1016 ) ( (  al2357 ) ,  ( ( * (  screen2356 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_53   lam1177 (    struct Cell_53  dref2361 ) {
    return ( (struct Cell_53) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1176 (    struct Screen_616 *  screen2360 ) {
    ( (  map1000 ) ( ( ( * (  screen2360 ) ) .f_current ) ,  (  lam1177 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1179 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_54  f_fg;
    struct Color_54  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1178 (    struct RenderState_1179 *  rs2365 ,    struct Cell_53 *  c2367 ,    uint32_t  x2369 ,    uint32_t  y2371 ) {
    if ( ( ( !  eq42 ( (  x2369 ) , ( ( * (  rs2365 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2371 ) , ( ( * (  rs2365 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1081 ) ( (  x2369 ) ,  (  y2371 ) ) );
        (*  rs2365 ) .f_x = (  x2369 );
        (*  rs2365 ) .f_y = (  y2371 );
    }
    char  char2372 = ( ( * (  c2367 ) ) .f_c );
    struct Color_54  bg2373 = ( ( * (  c2367 ) ) .f_bg );
    if ( ( ( (  eq48 ( (  char2372 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq48 ( (  char2372 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq48 ( (  char2372 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2372 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2373 = ( ( Color_54_Color8 ) ( ( Color8_55_Red8 ) ) );
    }
    if ( ( !  eq59 ( ( ( * (  rs2365 ) ) .f_fg ) , ( ( * (  c2367 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1098 ) ( ( ( * (  c2367 ) ) .f_fg ) ) );
        (*  rs2365 ) .f_fg = ( ( * (  c2367 ) ) .f_fg );
    }
    if ( ( !  eq59 ( ( ( * (  rs2365 ) ) .f_bg ) , (  bg2373 ) ) ) ) {
        ( (  set_dash_bg1099 ) ( (  bg2373 ) ) );
        (*  rs2365 ) .f_bg = (  bg2373 );
    }
    ( (  print_dash_str28 ) ( (  char2372 ) ) );
    (*  rs2365 ) .f_x = (  op_dash_add87 ( ( ( * (  rs2365 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1180 (    struct Screen_616 *  screen2376 ) {
    int32_t  w2377 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2376 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2378 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2376 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1179  temp1181 = ( (struct RenderState_1179) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_bg = ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1179 *  rs2379 = ( &temp1181 );
    ( (  move_dash_cursor_dash_to1081 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_363  temp1182 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  h2378 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1183 =  next364 (&temp1182);
        if (  __cond1183 .tag == 0 ) {
            break;
        }
        int32_t  y2381 =  __cond1183 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1184 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  w2377 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1185 =  next364 (&temp1184);
            if (  __cond1185 .tag == 0 ) {
                break;
            }
            int32_t  x2383 =  __cond1185 .stuff .Maybe_328_Just_s .field0;
            size_t  i2384 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2381 ) , (  w2377 ) ) ) , (  x2383 ) ) ) ) );
            struct Cell_53 *  cur2385 = ( (  get_dash_ptr980 ) ( ( ( * (  screen2376 ) ) .f_current ) ,  (  i2384 ) ) );
            struct Cell_53 *  prev2386 = ( (  get_dash_ptr980 ) ( ( ( * (  screen2376 ) ) .f_previous ) ,  (  i2384 ) ) );
            if ( ( ( !  eq52 ( (  cur2385 ) , (  prev2386 ) ) ) || ( ( * (  screen2376 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2379 ) .f_changes = (  op_dash_add87 ( ( ( * (  rs2379 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1178 ) ( (  rs2379 ) ,  (  cur2385 ) ,  ( (  i32_dash_u32266 ) ( (  x2383 ) ) ) ,  ( (  i32_dash_u32266 ) ( (  y2381 ) ) ) ) );
                (*  prev2386 ) = ( * (  cur2385 ) );
            }
        }
    }
    (*  screen2376 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1092 ) ( ) );
    ( (  flush_dash_stdout1144 ) ( ) );
    return ( ( * (  rs2379 ) ) .f_changes );
}

struct funenv1171 {
    bool  (*fun) (  struct env1171  ,    struct Tui_617 *  );
    struct env1171 env;
};

struct env1186 {
    struct env1171 envinst1171;
    ;
    ;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1186 (   struct env1186 env ,    struct Screen_616 *  screen2389 ) {
    struct Tui_617 *  tui2390 = ( ( * (  screen2389 ) ) .f_tui );
    struct funenv1171  temp1187 = ( (struct funenv1171){ .fun = update_dash_dimensions1171, .env =  env.envinst1171  } );
    if ( ( ! ( temp1187.fun ( temp1187.env ,  (  tui2390 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2389 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2391 = ( ( * ( ( * (  screen2389 ) ) .f_tui ) ) .f_width );
    uint32_t  h2392 = ( ( * ( ( * (  screen2389 ) ) .f_tui ) ) .f_height );
    size_t  nusz2393 = ( (  u32_dash_size272 ) ( (  op_dash_mul89 ( (  w2391 ) , (  h2392 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2393 ) , ( ( ( * (  screen2389 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_616  nuscreen2394 = ( (  mk_dash_screen1172 ) ( (  tui2390 ) ,  ( ( * (  screen2389 ) ) .f_al ) ) );
    (*  screen2389 ) .f_current = ( (  nuscreen2394 ) .f_current );
    (*  screen2389 ) .f_previous = ( (  nuscreen2394 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1188 (    struct Screen_616 *  screen2397 ,    struct Color_54  c2399 ) {
    (*  screen2397 ) .f_default_dash_fg = (  c2399 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1189 (    struct Screen_616 *  screen2402 ,    struct Color_54  c2404 ) {
    (*  screen2402 ) .f_default_dash_bg = (  c2404 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1190 (    struct Screen_616 *  screen2407 ,    struct Color_54  fg2409 ,    struct Color_54  bg2411 ) {
    (*  screen2407 ) .f_default_dash_fg = (  fg2409 );
    (*  screen2407 ) .f_default_dash_bg = (  bg2411 );
    return ( Unit_13_Unit );
}

static  struct Maybe_946   get_dash_cell_dash_ptr1191 (    struct Screen_616 *  screen2418 ,    int32_t  x2420 ,    int32_t  y2422 ) {
    int32_t  w2423 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2418 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2420 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  x2420 ) , (  w2423 ) ) != 0 ) ) ) {
        return ( (struct Maybe_946) { .tag = Maybe_946_None_t } );
    }
    if ( ( (  cmp75 ( (  y2422 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp75 ( (  y2422 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2418 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_946) { .tag = Maybe_946_None_t } );
    }
    size_t  i2424 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2422 ) , (  w2423 ) ) ) , (  x2420 ) ) ) ) );
    return ( ( Maybe_946_Just ) ( ( (  get_dash_ptr980 ) ( ( ( * (  screen2418 ) ) .f_current ) ,  (  i2424 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1192 (    struct Screen_616 *  screen2427 ) {
    struct RangeIter_363  temp1193 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2427 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1194 =  next364 (&temp1193);
        if (  __cond1194 .tag == 0 ) {
            break;
        }
        int32_t  y2429 =  __cond1194 .stuff .Maybe_328_Just_s .field0;
        struct RangeIter_363  temp1195 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2427 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1196 =  next364 (&temp1195);
            if (  __cond1196 .tag == 0 ) {
                break;
            }
            int32_t  x2431 =  __cond1196 .stuff .Maybe_328_Just_s .field0;
            struct Cell_53 *  cell2432 = ( (  or_dash_fail945 ) ( ( (  get_dash_cell_dash_ptr1191 ) ( (  screen2427 ) ,  (  x2431 ) ,  (  y2429 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2432 ) .f_bg = ( ( * (  screen2427 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1197 (    struct Screen_616 *  screen2435 ,    char  c2437 ,    int32_t  x2439 ,    int32_t  y2441 ) {
    int32_t  w2442 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2435 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp75 ( (  x2439 ) , (  w2442 ) ) != 0 ) || (  cmp75 ( (  y2441 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2435 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2443 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2441 ) , (  w2442 ) ) ) , (  x2439 ) ) ) ) );
    struct Color_54  fg2444 = ( ( * (  screen2435 ) ) .f_default_dash_fg );
    struct Color_54  bg2445 = ( ( * (  screen2435 ) ) .f_default_dash_bg );
    char  c2446 = (  c2437 );
    ( (  set988 ) ( ( ( * (  screen2435 ) ) .f_current ) ,  (  i2443 ) ,  ( (struct Cell_53) { .f_c = (  c2446 ) , .f_fg = (  fg2444 ) , .f_bg = (  bg2445 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam615 (   struct env615 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1198 (    struct Screen_616 *  screen2449 ,    int32_t  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env615 envinst615 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each614 ) ( ( (  zip462 ) ( ( (  chars776 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv615){ .fun = lam615, .env = envinst615 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam622 (   struct env622 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1199 (    struct Screen_616 *  screen2449 ,    struct StrConcat_782  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env622 envinst622 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each621 ) ( ( (  zip464 ) ( ( (  chars901 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv622){ .fun = lam622, .env = envinst622 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam626 (   struct env626 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1200 (    struct Screen_616 *  screen2449 ,    struct StrConcat_798  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env626 envinst626 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each625 ) ( ( (  zip466 ) ( ( (  chars902 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv626){ .fun = lam626, .env = envinst626 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam630 (   struct env630 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1201 (    struct Screen_616 *  screen2449 ,    struct StrConcat_800  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env630 envinst630 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each629 ) ( ( (  zip468 ) ( ( (  chars903 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv630){ .fun = lam630, .env = envinst630 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam634 (   struct env634 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1202 (    struct Screen_616 *  screen2449 ,    struct StrConcat_826  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env634 envinst634 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each633 ) ( ( (  zip470 ) ( ( (  chars904 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv634){ .fun = lam634, .env = envinst634 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam638 (   struct env638 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1203 (    struct Screen_616 *  screen2449 ,    struct StrConcat_17  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env638 envinst638 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each637 ) ( ( (  zip472 ) ( ( (  chars905 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv638){ .fun = lam638, .env = envinst638 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam642 (   struct env642 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1204 (    struct Screen_616 *  screen2449 ,    struct StrConcat_828  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env642 envinst642 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each641 ) ( ( (  zip474 ) ( ( (  chars831 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv642){ .fun = lam642, .env = envinst642 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam646 (   struct env646 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1205 (    struct Screen_616 *  screen2449 ,    struct StrConcat_835  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env646 envinst646 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each645 ) ( ( (  zip476 ) ( ( (  chars906 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv646){ .fun = lam646, .env = envinst646 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam650 (   struct env650 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1206 (    struct Screen_616 *  screen2449 ,    struct StrConcat_840  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env650 envinst650 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each649 ) ( ( (  zip464 ) ( ( (  chars907 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv650){ .fun = lam650, .env = envinst650 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam654 (   struct env654 env ,    struct Tuple2_347  dref2462 ) {
    ( (  set988 ) ( ( ( * ( env.screen2449 ) ) .f_current ) ,  (  op_dash_add93 ( ( env.i2457 ) , ( (  i32_dash_size268 ) ( ( dref2462 .field1 ) ) ) ) ) ,  ( (struct Cell_53) { .f_c = ( dref2462 .field0 ) , .f_fg = ( env.fg2460 ) , .f_bg = ( env.bg2461 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1207 (    struct Screen_616 *  screen2449 ,    struct StrConcat_855  s2451 ,    int32_t  x2453 ,    int32_t  y2455 ) {
    if ( (  cmp75 ( (  y2455 ) , ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2456 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2449 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2457 = ( (  i32_dash_size268 ) ( (  op_dash_add82 ( (  op_dash_mul84 ( (  y2455 ) , (  w2456 ) ) ) , (  x2453 ) ) ) ) );
    int32_t  x2458 = ( (  min766 ) ( (  x2453 ) ,  (  w2456 ) ) );
    size_t  max_dash_len2459 = ( (  i32_dash_size268 ) ( (  op_dash_sub83 ( (  w2456 ) , (  x2458 ) ) ) ) );
    struct Color_54  fg2460 = ( ( * (  screen2449 ) ) .f_default_dash_fg );
    struct Color_54  bg2461 = ( ( * (  screen2449 ) ) .f_default_dash_bg );
    struct env654 envinst654 = {
        .i2457 =  i2457 ,
        .bg2461 =  bg2461 ,
        .screen2449 =  screen2449 ,
        .fg2460 =  fg2460 ,
    };
    ( (  for_dash_each653 ) ( ( (  zip464 ) ( ( (  chars908 ) ( (  s2451 ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv654){ .fun = lam654, .env = envinst654 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1208 (    struct Screen_616 *  screen2467 ,    int32_t  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count725 ) ( ( (  chars776 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1198 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1209 (    struct Screen_616 *  screen2467 ,    struct StrConcat_782  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count727 ) ( ( (  chars901 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1199 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1210 (    struct Screen_616 *  screen2467 ,    struct StrConcat_798  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count729 ) ( ( (  chars902 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1200 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1211 (    struct Screen_616 *  screen2467 ,    struct StrConcat_800  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count731 ) ( ( (  chars903 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1201 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1212 (    struct Screen_616 *  screen2467 ,    struct StrConcat_826  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count733 ) ( ( (  chars904 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1202 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1213 (    struct Screen_616 *  screen2467 ,    struct StrConcat_17  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count735 ) ( ( (  chars905 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1203 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1214 (    struct Screen_616 *  screen2467 ,    struct StrConcat_828  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count737 ) ( ( (  chars831 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1204 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1215 (    struct Screen_616 *  screen2467 ,    struct StrConcat_835  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count739 ) ( ( (  chars906 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1205 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1216 (    struct Screen_616 *  screen2467 ,    struct StrConcat_840  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count727 ) ( ( (  chars907 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1206 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1217 (    struct Screen_616 *  screen2467 ,    struct StrConcat_855  s2469 ,    int32_t  x2471 ,    int32_t  y2473 ) {
    int32_t  slen2474 = ( (  size_dash_i32270 ) ( ( (  count727 ) ( ( (  chars908 ) ( (  s2469 ) ) ) ) ) ) );
    int32_t  w2475 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2467 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2476 = (  op_dash_sub83 ( (  op_dash_sub83 ( (  w2475 ) , (  x2471 ) ) ) , (  slen2474 ) ) );
    ( (  draw_dash_str1207 ) ( (  screen2467 ) ,  (  s2469 ) ,  (  x2476 ) ,  (  y2473 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_315   try_dash_read_dash_contents1218 (    const char*  filename2759 ,    enum CAllocator_4  al2761 ) {
    FILE *  file2762 = ( ( fopen ) ( (  filename2759 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2762 ) ) ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    ( ( fseek ) ( (  file2762 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end108 ) ( ) ) ) );
    int32_t  file_dash_size2763 = ( ( ftell ) ( (  file2762 ) ) );
    ( ( fseek ) ( (  file2762 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set107 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2764 = ( ( (  allocate1010 ) ( (  al2761 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( (  file_dash_size2763 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2764 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2763 ) ,  (  file2762 ) ) );
    ( (  set987 ) ( (  file_dash_buf2764 ) ,  ( (  i32_dash_size268 ) ( (  file_dash_size2763 ) ) ) ,  ( (  nullchar320 ) ( ) ) ) );
    ( ( fclose ) ( (  file2762 ) ) );
    struct DynStr_131  str2765 = ( (struct DynStr_131) { .f_contents = (  file_dash_buf2764 ) } );
    return ( ( Maybe_315_Just ) ( (  str2765 ) ) );
}

static  struct DynStr_131   read_dash_contents1219 (    const char*  filename2768 ,    enum CAllocator_4  al2770 ) {
    return ( (  or_dash_fail940 ) ( ( (  try_dash_read_dash_contents1218 ) ( (  filename2768 ) ,  (  al2770 ) ) ) ,  ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( "could not open file " ) ,  (  filename2768 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1220 (    const char*  filename2773 ,    struct DynStr_131  contents2775 ) {
    FILE *  file2776 = ( ( fopen ) ( (  filename2773 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null262 ) ( (  file2776 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_287  it2777 = ( (  chars796 ) ( (  contents2775 ) ) );
    while ( ( true ) ) {
        struct Maybe_297  dref2778 = ( (  next330 ) ( ( & (  it2777 ) ) ) );
        if ( dref2778.tag == Maybe_297_None_t ) {
            ( ( fclose ) ( (  file2776 ) ) );
            return ( true );
        }
        else if ( dref2778.tag == Maybe_297_Just_t ) {
            int32_t  chars_dash_written2780 = ( ( fprintf ) ( (  file2776 ) ,  ( "%c" ) ,  ( dref2778 .stuff .Maybe_297_Just_s .field0 ) ) );
            if ( (  cmp75 ( (  chars_dash_written2780 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable930 ) ( ) );
}

static  enum Unit_13   write_dash_contents1221 (    const char*  filename2783 ,    struct DynStr_131  contents2785 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1220 ) ( (  filename2783 ) ,  (  contents2785 ) ) ) ) ) {
        ( (  panic936 ) ( ( ( StrConcat_862_StrConcat ) ( ( "could not write to file " ) ,  (  filename2783 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_982   get1222 (  ) {
    return ( (struct Slice_982) { .f_ptr = ( (  offset_dash_ptr152 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len312 (   struct env312 env ,    char  c2480 ) {
    if ( (  eq48 ( (  c2480 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        return ( env.tab_dash_size2477 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1225 (    struct Cursor_764  l2487 ,    struct Cursor_764  r2489 ) {
    return ( (  eq41 ( ( (  l2487 ) .f_x ) , ( (  r2489 ) .f_x ) ) ) && (  eq41 ( ( (  l2487 ) .f_y ) , ( (  r2489 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1226 (    struct Visual_958  dref2499 ) {
    return ( dref2499 .field0 );
}

struct Tuple2_1228 {
    struct Mode_783  field0;
    struct Mode_783  field1;
};

static struct Tuple2_1228 Tuple2_1228_Tuple2 (  struct Mode_783  field0 ,  struct Mode_783  field1 ) {
    return ( struct Tuple2_1228 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1227 (    struct Mode_783  l2504 ,    struct Mode_783  r2506 ) {
    struct Tuple2_1228  dref2507 = ( ( Tuple2_1228_Tuple2 ) ( (  l2504 ) ,  (  r2506 ) ) );
    if ( dref2507 .field0.tag == Mode_783_Normal_t && dref2507 .field1.tag == Mode_783_Normal_t ) {
        return ( true );
    }
    else if ( dref2507 .field0.tag == Mode_783_Insert_t && dref2507 .field1.tag == Mode_783_Insert_t ) {
        return ( true );
    }
    else if ( dref2507 .field0.tag == Mode_783_Select_t && dref2507 .field1.tag == Mode_783_Select_t ) {
        return ( true );
    }
    else if ( dref2507 .field0.tag == Mode_783_Cmd_t && dref2507 .field1.tag == Mode_783_Cmd_t ) {
        ( (  panic934 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2507 .field0.tag == Mode_783_SearchBox_t && dref2507 .field1.tag == Mode_783_SearchBox_t ) {
        ( (  panic934 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1229 (    struct Editor_957 *  ed2528 ,    int32_t  y2530 ) {
    return ( (  get_dash_ptr1031 ) ( ( & ( ( * (  ed2528 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2530 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1230 (    struct Editor_957 *  ed2533 ) {
    return ( (  get_dash_ptr1031 ) ( ( & ( ( * (  ed2533 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2533 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_481   indent_dash_on_dash_row1231 (    struct Editor_957 *  ed2536 ,    int32_t  y2538 ) {
    return ( (  take_dash_while503 ) ( ( (  get_dash_row1229 ) ( (  ed2536 ) ,  (  y2538 ) ) ) ,  (  is_dash_whitespace1022 ) ) );
}

static  size_t   num_dash_rows1232 (    struct Editor_957 *  ed2541 ) {
    return ( (  size1072 ) ( ( & ( ( * (  ed2541 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1050 {
    enum Unit_13  (*fun) (  struct env1050  ,    struct List_280 *  ,    size_t  );
    struct env1050 env;
};

struct env1233 {
    ;
    ;
    struct env1050 envinst1050;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1233 (   struct env1233 env ,    struct Editor_957 *  ed2544 ,    int32_t  y2546 ) {
    struct List_3 *  next_dash_row2547 = ( (  get_dash_row1229 ) ( (  ed2544 ) ,  (  y2546 ) ) );
    ( (  free1039 ) ( (  next_dash_row2547 ) ) );
    struct funenv1050  temp1234 = ( (struct funenv1050){ .fun = remove1050, .env =  env.envinst1050  } );
    ( temp1234.fun ( temp1234.env ,  ( & ( ( * (  ed2544 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2546 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_297   char_dash_at1235 (    struct Editor_957 *  ed2550 ,    struct Cursor_764  cur2552 ) {
    return ( (  try_dash_get1033 ) ( ( (  get_dash_row1229 ) ( (  ed2550 ) ,  ( (  cur2552 ) .f_y ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2552 ) .f_x ) ) ) ) );
}

static  struct Maybe_297   char_dash_at_dash_cursor1236 (    struct Editor_957 *  ed2555 ) {
    return ( (  try_dash_get1033 ) ( ( (  cursor_dash_row1230 ) ( (  ed2555 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2555 ) ) .f_cursor ) .f_x ) ) ) ) );
}

struct env1237 {
    ;
    ;
    struct env312 envinst312;
    ;
    ;
    ;
};

static  struct Visual_958   x_dash_to_dash_visual_dash_x1237 (   struct env1237 env ,    struct Editor_957 *  ed2558 ,    int32_t  x2560 ,    int32_t  y2562 ) {
    return ( ( Visual_958_Visual ) ( ( (  sum741 ) ( ( (  map336 ) ( ( (  take359 ) ( ( (  get_dash_row1229 ) ( (  ed2558 ) ,  (  y2562 ) ) ) ,  ( (  i32_dash_size268 ) ( (  x2560 ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ) ) ) ) ) );
}

struct env1238 {
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

static  int32_t   visual_dash_x_dash_to_dash_x1238 (   struct env1238 env ,    struct Editor_957 *  ed2565 ,    struct Visual_958  dref2566 ,    int32_t  y2569 ) {
    int32_t  sum_dash_x2570 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2571 = ( (  get_dash_row1229 ) ( (  ed2565 ) ,  (  y2569 ) ) );
    struct RangeIter_363  temp1239 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( * (  chars2571 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1240 =  next364 (&temp1239);
        if (  __cond1240 .tag == 0 ) {
            break;
        }
        int32_t  x2573 =  __cond1240 .stuff .Maybe_328_Just_s .field0;
        struct funenv312  temp1241 = ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } );
        sum_dash_x2570 = (  op_dash_add82 ( (  sum_dash_x2570 ) , ( temp1241.fun ( temp1241.env ,  (  elem_dash_get2 ( (  chars2571 ) , ( (  i32_dash_size268 ) ( (  x2573 ) ) ) ) ) ) ) ) );
        if ( (  cmp75 ( ( dref2566 .field0 ) , (  sum_dash_x2570 ) ) == 0 ) ) {
            return (  x2573 );
        }
    }
    return ( (  size_dash_i32270 ) ( ( ( * (  chars2571 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1242 (    struct Editor_957 *  ed2576 ,    struct Maybe_948  sel2578 ) {
    if ( ( ( !  eq1227 ( ( ( * (  ed2576 ) ) .f_mode ) , ( (struct Mode_783) { .tag = Mode_783_Select_t } ) ) ) || ( ! ( (  is_dash_just952 ) ( ( ( * (  ed2576 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2576 ) .f_selected = (  sel2578 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1243 (    struct Editor_957 *  ed2581 ) {
    struct Maybe_315  dref2582 = ( ( * (  ed2581 ) ) .f_msg );
    if ( dref2582.tag == Maybe_315_None_t ) {
    }
    else if ( dref2582.tag == Maybe_315_Just_t ) {
        ( (  free1013 ) ( ( ( * (  ed2581 ) ) .f_al ) ,  ( ( dref2582 .stuff .Maybe_315_Just_s .field0 ) .f_contents ) ) );
        (*  ed2581 ) .f_msg = ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1244 {
    ;
    struct env1113 envinst1113;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1244 (   struct env1244 env ,    struct Editor_957 *  ed2586 ,    const char*  s2588 ) {
    ( (  reset_dash_msg1243 ) ( (  ed2586 ) ) );
    struct funenv1113  temp1245 = ( (struct funenv1113){ .fun = mk_dash_dyn_dash_str1113, .env =  env.envinst1113  } );
    struct DynStr_131  s2589 = ( temp1245.fun ( temp1245.env ,  (  s2588 ) ,  ( ( * (  ed2586 ) ) .f_al ) ) );
    (*  ed2586 ) .f_msg = ( ( Maybe_315_Just ) ( (  s2589 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1238 {
    int32_t  (*fun) (  struct env1238  ,    struct Editor_957 *  ,    struct Visual_958  ,    int32_t  );
    struct env1238 env;
};

struct funenv1237 {
    struct Visual_958  (*fun) (  struct env1237  ,    struct Editor_957 *  ,    int32_t  ,    int32_t  );
    struct env1237 env;
};

struct env1246 {
    ;
    ;
    ;
    struct env1238 envinst1238;
    ;
    ;
    ;
    ;
    ;
    struct env1237 envinst1237;
    ;
    ;
    ;
};

struct Dims_1247 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1246 (   struct env1246 env ,    struct Editor_957 *  ed2593 ,    int32_t  x2595 ,    int32_t  y2597 ,    struct Dims_1247  dim2599 ) {
    struct Cursor_764  cur2600 = ( ( * (  ed2593 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2601 = ( !  eq41 ( ( (  cur2600 ) .f_x ) , (  x2595 ) ) );
    int32_t  y2602 = ( (  clamp770 ) ( (  y2597 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2593 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2603 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  y2602 ) , (  op_dash_add82 ( ( ( * (  ed2593 ) ) .f_screen_dash_top ) , (  funny_dash_space2603 ) ) ) ) == 0 ) ) {
        (*  ed2593 ) .f_screen_dash_top = ( (  max767 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  y2602 ) , (  funny_dash_space2603 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  y2602 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2593 ) ) .f_screen_dash_top ) , ( (  dim2599 ) .f_rows ) ) ) , (  funny_dash_space2603 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2604 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  y2602 ) , (  funny_dash_space2603 ) ) ) , ( (  dim2599 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2593 ) .f_screen_dash_top = (  onscreen_dash_y2604 );
        } else {
        }
    }
    struct List_3 *  row2605 = ( (  get_dash_row1229 ) ( (  ed2593 ) ,  (  y2602 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2601 ) ) {
        int32_t  x2606 = ( (  clamp770 ) ( (  x2595 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32270 ) ( ( (  size1071 ) ( (  row2605 ) ) ) ) ) ) );
        struct funenv1237  temp1248 = ( (struct funenv1237){ .fun = x_dash_to_dash_visual_dash_x1237, .env =  env.envinst1237  } );
        (*  ed2593 ) .f_goal_dash_x = ( temp1248.fun ( temp1248.env ,  (  ed2593 ) ,  (  x2606 ) ,  (  y2602 ) ) );
    }
    struct Visual_958  vx2607 = ( ( * (  ed2593 ) ) .f_goal_dash_x );
    struct funenv1238  temp1249 = ( (struct funenv1238){ .fun = visual_dash_x_dash_to_dash_x1238, .env =  env.envinst1238  } );
    int32_t  x2608 = ( temp1249.fun ( temp1249.env ,  (  ed2593 ) ,  (  vx2607 ) ,  (  y2602 ) ) );
    int32_t  funny_dash_space2609 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp75 ( (  x2608 ) , (  op_dash_add82 ( ( ( * (  ed2593 ) ) .f_screen_dash_left ) , (  funny_dash_space2609 ) ) ) ) == 0 ) ) {
        (*  ed2593 ) .f_screen_dash_left = ( (  max767 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  x2608 ) , (  funny_dash_space2609 ) ) ) ) );
    } else {
        if ( (  cmp75 ( (  x2608 ) , (  op_dash_sub83 ( (  op_dash_sub83 ( (  op_dash_add82 ( ( ( * (  ed2593 ) ) .f_screen_dash_left ) , ( (  dim2599 ) .f_cols ) ) ) , (  funny_dash_space2609 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2610 = (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_add82 ( (  x2608 ) , (  funny_dash_space2609 ) ) ) , ( (  dim2599 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2593 ) .f_screen_dash_left = (  onscreen_dash_x2610 );
        } else {
        }
    }
    (*  ed2593 ) .f_cursor = ( (struct Cursor_764) { .f_x = (  x2608 ) , .f_y = (  y2602 ) } );
    ( (  set_dash_selection1242 ) ( (  ed2593 ) ,  ( (struct Maybe_948) { .tag = Maybe_948_None_t } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1246 {
    enum Unit_13  (*fun) (  struct env1246  ,    struct Editor_957 *  ,    int32_t  ,    int32_t  ,    struct Dims_1247  );
    struct env1246 env;
};

struct env1250 {
    struct env1246 envinst1246;
};

static  enum Unit_13   move_dash_to_dash_col1250 (   struct env1250 env ,    struct Editor_957 *  ed2613 ,    int32_t  x2615 ,    struct Dims_1247  dim2617 ) {
    struct funenv1246  temp1251 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  env.envinst1246  } );
    ( temp1251.fun ( temp1251.env ,  (  ed2613 ) ,  (  x2615 ) ,  ( ( ( * (  ed2613 ) ) .f_cursor ) .f_y ) ,  (  dim2617 ) ) );
    return ( Unit_13_Unit );
}

struct env1252 {
    struct env1246 envinst1246;
};

static  enum Unit_13   move_dash_to_dash_row1252 (   struct env1252 env ,    struct Editor_957 *  ed2620 ,    int32_t  y2622 ,    struct Dims_1247  dim2624 ) {
    struct funenv1246  temp1253 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  env.envinst1246  } );
    ( temp1253.fun ( temp1253.env ,  (  ed2620 ) ,  ( ( ( * (  ed2620 ) ) .f_cursor ) .f_x ) ,  (  y2622 ) ,  (  dim2624 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1250 {
    enum Unit_13  (*fun) (  struct env1250  ,    struct Editor_957 *  ,    int32_t  ,    struct Dims_1247  );
    struct env1250 env;
};

struct funenv1252 {
    enum Unit_13  (*fun) (  struct env1252  ,    struct Editor_957 *  ,    int32_t  ,    struct Dims_1247  );
    struct env1252 env;
};

struct env1254 {
    ;
    ;
    ;
    ;
    ;
    struct env1250 envinst1250;
    ;
    struct env1252 envinst1252;
    ;
};

static  bool   move_dash_left1254 (   struct env1254 env ,    struct Editor_957 *  ed2627 ,    struct Dims_1247  dim2629 ) {
    struct Cursor_764  cur2630 = ( ( * (  ed2627 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2627 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2627 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            struct funenv1252  temp1255 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  env.envinst1252  } );
            ( temp1255.fun ( temp1255.env ,  (  ed2627 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2627 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2629 ) ) );
            struct funenv1250  temp1256 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  env.envinst1250  } );
            ( temp1256.fun ( temp1256.env ,  (  ed2627 ) ,  ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1230 ) ( (  ed2627 ) ) ) ) .f_count ) ) ) ,  (  dim2629 ) ) );
        }
    } else {
        struct funenv1250  temp1257 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  env.envinst1250  } );
        ( temp1257.fun ( temp1257.env ,  (  ed2627 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2627 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2629 ) ) );
    }
    return ( !  eq1225 ( ( ( * (  ed2627 ) ) .f_cursor ) , (  cur2630 ) ) );
}

struct env1258 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1250 envinst1250;
    struct env1246 envinst1246;
    ;
    ;
};

static  bool   move_dash_right1258 (   struct env1258 env ,    struct Editor_957 *  ed2633 ,    struct Dims_1247  dims2635 ) {
    struct Cursor_764  cur2636 = ( ( * (  ed2633 ) ) .f_cursor );
    int32_t  row_dash_len2637 = ( (  size_dash_i32270 ) ( ( ( * ( (  cursor_dash_row1230 ) ( (  ed2633 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2633 ) ) .f_cursor ) .f_x ) , (  row_dash_len2637 ) ) ) ) {
        if ( (  cmp75 ( ( ( ( * (  ed2633 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2633 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            struct funenv1246  temp1259 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  env.envinst1246  } );
            ( temp1259.fun ( temp1259.env ,  (  ed2633 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2633 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2635 ) ) );
        }
    } else {
        struct funenv1250  temp1260 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  env.envinst1250  } );
        ( temp1260.fun ( temp1260.env ,  (  ed2633 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2633 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2635 ) ) );
    }
    return ( !  eq1225 ( ( ( * (  ed2633 ) ) .f_cursor ) , (  cur2636 ) ) );
}

struct env1261 {
    ;
    struct env1250 envinst1250;
    ;
    ;
};

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1261 (   struct env1261 env ,    struct Editor_957 *  ed2640 ,    struct Dims_1247  dims2642 ) {
    int32_t  off2643 = ( (  size_dash_i32270 ) ( ( (  count723 ) ( ( (  indent_dash_on_dash_row1231 ) ( (  ed2640 ) ,  ( ( ( * (  ed2640 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    struct funenv1250  temp1262 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  env.envinst1250  } );
    ( temp1262.fun ( temp1262.env ,  (  ed2640 ) ,  (  off2643 ) ,  (  dims2642 ) ) );
    return ( Unit_13_Unit );
}

struct env1263 {
    ;
    ;
    struct env1250 envinst1250;
    ;
};

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1263 (   struct env1263 env ,    struct Editor_957 *  ed2646 ,    struct Dims_1247  dims2648 ) {
    struct List_3 *  currow2649 = ( (  cursor_dash_row1230 ) ( (  ed2646 ) ) );
    struct funenv1250  temp1264 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  env.envinst1250  } );
    ( temp1264.fun ( temp1264.env ,  (  ed2646 ) ,  ( (  size_dash_i32270 ) ( ( (  size1071 ) ( (  currow2649 ) ) ) ) ) ,  (  dims2648 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1265 (    struct Editor_957 *  ed2655 ,    int32_t  col2657 ,    int32_t  row2659 ) {
    return (  eq41 ( (  col2657 ) , ( (  size_dash_i32270 ) ( ( (  size1071 ) ( ( (  get_dash_row1229 ) ( (  ed2655 ) ,  (  row2659 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1266 (    struct Editor_957 *  ed2662 ) {
    return (  eq41 ( ( ( ( * (  ed2662 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  size1071 ) ( ( (  cursor_dash_row1230 ) ( (  ed2662 ) ) ) ) ) ) ) ) );
}

struct funenv1233 {
    enum Unit_13  (*fun) (  struct env1233  ,    struct Editor_957 *  ,    int32_t  );
    struct env1233 env;
};

struct funenv1056 {
    enum Unit_13  (*fun) (  struct env1056  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1056 env;
};

struct funenv1058 {
    enum Unit_13  (*fun) (  struct env1058  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1058 env;
};

struct env1267 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1233 envinst1233;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1246 envinst1246;
    ;
    ;
    ;
    ;
    struct env1049 envinst1049;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1056 envinst1056;
    ;
    ;
    struct env1058 envinst1058;
};

struct anon_1274 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1267 (   struct env1267 env ,    struct Editor_957 *  ed2665 ,    struct Dims_1247  dims2667 ) {
    struct Maybe_948  dref2668 = ( ( * (  ed2665 ) ) .f_selected );
    if ( dref2668.tag == Maybe_948_None_t ) {
        struct List_3 *  row2669 = ( (  cursor_dash_row1230 ) ( (  ed2665 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2665 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2669 ) ) .f_count ) ) == 0 ) ) {
            struct funenv1049  temp1268 = ( (struct funenv1049){ .fun = remove1049, .env =  env.envinst1049  } );
            ( temp1268.fun ( temp1268.env ,  ( (  cursor_dash_row1230 ) ( (  ed2665 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2665 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1266 ) ( (  ed2665 ) ) ) ) {
                if ( (  cmp75 ( (  op_dash_add82 ( ( ( ( * (  ed2665 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1232 ) ( (  ed2665 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2670 = ( (  cursor_dash_row1230 ) ( (  ed2665 ) ) );
                    int32_t  next_dash_row_dash_id2671 = (  op_dash_add82 ( ( ( ( * (  ed2665 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2672 = ( (  get_dash_row1229 ) ( (  ed2665 ) ,  (  next_dash_row_dash_id2671 ) ) );
                    struct funenv1056  temp1269 = ( (struct funenv1056){ .fun = add_dash_all1056, .env =  env.envinst1056  } );
                    ( temp1269.fun ( temp1269.env ,  (  cur_dash_row2670 ) ,  (  next_dash_row2672 ) ) );
                    struct funenv1233  temp1270 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
                    ( temp1270.fun ( temp1270.env ,  (  ed2665 ) ,  (  next_dash_row_dash_id2671 ) ) );
                }
            }
        }
    }
    else if ( dref2668.tag == Maybe_948_Just_t ) {
        struct Cursor_764  cfrom2674 = ( (  min763 ) ( ( dref2668 .stuff .Maybe_948_Just_s .field0 ) ,  ( ( * (  ed2665 ) ) .f_cursor ) ) );
        struct Cursor_764  cto2675 = ( (  max768 ) ( ( dref2668 .stuff .Maybe_948_Just_s .field0 ) ,  ( ( * (  ed2665 ) ) .f_cursor ) ) );
        struct RangeIter_363  temp1271 =  into_dash_iter362 ( ( (  to360 ) ( (  op_dash_add82 ( ( (  cfrom2674 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub83 ( ( (  cto2675 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1272 =  next364 (&temp1271);
            if (  __cond1272 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2677 =  __cond1272 .stuff .Maybe_328_Just_s .field0;
            ( (  assert938 ) ( (  cmp75 ( (  row_dash_id2677 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1233  temp1273 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
            ( temp1273.fun ( temp1273.env ,  (  ed2665 ) ,  (  op_dash_add82 ( ( (  cfrom2674 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2678 = (  op_dash_sub83 ( ( (  cto2675 ) .f_y ) , ( (  max767 ) ( (  op_dash_add82 ( (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  cto2675 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add82 ( ( (  cfrom2674 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert938 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2678 ) , ( (  cfrom2674 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2678 ) , (  op_dash_add82 ( ( (  cfrom2674 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1274  cto2679 = ( (struct anon_1274) { .f_x = ( (  cto2675 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2678 ) } );
        bool  should_dash_merge_dash_next_dash_line2680 = ( (  is_dash_at_dash_line_dash_end1265 ) ( (  ed2665 ) ,  ( (  cto2679 ) .f_x ) ,  ( (  cto2679 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2680 ) ) {
            struct List_3 *  first_dash_row2681 = ( (  get_dash_row1229 ) ( (  ed2665 ) ,  ( (  cfrom2674 ) .f_y ) ) );
            ( (  trim1062 ) ( (  first_dash_row2681 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2674 ) .f_x ) ) ) ) );
            bool  on_dash_last_dash_row2682 = (  cmp75 ( (  op_dash_add82 ( ( (  cto2679 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( (  num_dash_rows1232 ) ( (  ed2665 ) ) ) ) ) ) != 0 );
            if ( ( ! (  on_dash_last_dash_row2682 ) ) ) {
                struct funenv1056  temp1275 = ( (struct funenv1056){ .fun = add_dash_all1056, .env =  env.envinst1056  } );
                ( temp1275.fun ( temp1275.env ,  (  first_dash_row2681 ) ,  ( (  get_dash_row1229 ) ( (  ed2665 ) ,  (  op_dash_add82 ( ( (  cto2679 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            }
            if ( (  eq41 ( ( (  cto2679 ) .f_y ) , ( (  cfrom2674 ) .f_y ) ) ) ) {
                if ( ( ! (  on_dash_last_dash_row2682 ) ) ) {
                    struct funenv1233  temp1276 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
                    ( temp1276.fun ( temp1276.env ,  (  ed2665 ) ,  (  op_dash_add82 ( ( (  cto2679 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                if ( ( ! (  on_dash_last_dash_row2682 ) ) ) {
                    struct funenv1233  temp1277 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
                    ( temp1277.fun ( temp1277.env ,  (  ed2665 ) ,  (  op_dash_add82 ( ( (  cto2679 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
                struct funenv1233  temp1278 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
                ( temp1278.fun ( temp1278.env ,  (  ed2665 ) ,  ( (  cto2679 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2683 = ( (  get_dash_row1229 ) ( (  ed2665 ) ,  ( (  cfrom2674 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2679 ) .f_y ) , ( (  cfrom2674 ) .f_y ) ) ) ) {
                struct RangeIter_363  temp1279 =  into_dash_iter362 ( ( (  to360 ) ( ( (  cfrom2674 ) .f_x ) ,  ( (  min766 ) ( ( (  cto2679 ) .f_x ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  size1071 ) ( (  first_dash_row2683 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_328  __cond1280 =  next364 (&temp1279);
                    if (  __cond1280 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2685 =  __cond1280 .stuff .Maybe_328_Just_s .field0;
                    struct funenv1049  temp1281 = ( (struct funenv1049){ .fun = remove1049, .env =  env.envinst1049  } );
                    ( temp1281.fun ( temp1281.env ,  (  first_dash_row2683 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2674 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim1062 ) ( (  first_dash_row2683 ) ,  ( (  i32_dash_size268 ) ( ( (  cfrom2674 ) .f_x ) ) ) ) );
                struct funenv1058  temp1282 = ( (struct funenv1058){ .fun = add_dash_all1058, .env =  env.envinst1058  } );
                ( temp1282.fun ( temp1282.env ,  (  first_dash_row2683 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1068 ) ( ( * ( (  get_dash_row1229 ) ( (  ed2665 ) ,  ( (  cto2679 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint1073 ) ( (  op_dash_sub83 ( ( (  cto2679 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1233  temp1283 = ( (struct funenv1233){ .fun = remove_dash_row1233, .env =  env.envinst1233  } );
                ( temp1283.fun ( temp1283.env ,  (  ed2665 ) ,  ( (  cto2679 ) .f_y ) ) );
            }
        }
        (*  ed2665 ) .f_selected = ( (struct Maybe_948) { .tag = Maybe_948_None_t } );
        (*  ed2665 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
        struct funenv1246  temp1284 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  env.envinst1246  } );
        ( temp1284.fun ( temp1284.env ,  (  ed2665 ) ,  ( (  cfrom2674 ) .f_x ) ,  ( (  cfrom2674 ) .f_y ) ,  (  dims2667 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1046 {
    enum Unit_13  (*fun) (  struct env1046  ,    struct List_280 *  ,    size_t  ,    struct List_3  );
    struct env1046 env;
};

struct funenv1060 {
    enum Unit_13  (*fun) (  struct env1060  ,    struct List_3 *  ,    struct TakeWhile_481  );
    struct env1060 env;
};

struct env1285 {
    ;
    ;
    struct env1046 envinst1046;
    ;
    ;
    ;
    ;
    ;
    struct env1060 envinst1060;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1285 (   struct env1285 env ,    struct Editor_957 *  ed2688 ,    int32_t  y2690 ,    enum CAllocator_4  al2692 ) {
    struct List_3  temp1286 = ( (  mk1038 ) ( (  al2692 ) ) );
    struct List_3 *  nurow2693 = ( &temp1286 );
    struct TakeWhile_481  rowws2694 = ( (  indent_dash_on_dash_row1231 ) ( (  ed2688 ) ,  ( ( ( * (  ed2688 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2695 = ( (  size_dash_i32270 ) ( ( (  count723 ) ( (  rowws2694 ) ) ) ) );
    struct funenv1060  temp1287 = ( (struct funenv1060){ .fun = add_dash_all1060, .env =  env.envinst1060  } );
    ( temp1287.fun ( temp1287.env ,  (  nurow2693 ) ,  (  rowws2694 ) ) );
    struct funenv1046  temp1288 = ( (struct funenv1046){ .fun = insert1046, .env =  env.envinst1046  } );
    ( temp1288.fun ( temp1288.env ,  ( & ( ( * (  ed2688 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( (  y2690 ) ) ) ,  ( * (  nurow2693 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1289 (    struct Editor_957 *  ed2698 ,    struct Cursor_764  c2700 ) {
    return ( {  struct Maybe_948  dref2701 = ( ( * (  ed2698 ) ) .f_selected ) ; dref2701.tag == Maybe_948_Just_t ? ( (  between769 ) ( (  c2700 ) ,  ( ( * (  ed2698 ) ) .f_cursor ) ,  ( dref2701 .stuff .Maybe_948_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1290 (    char  c2705 ) {
    return ( (  is_dash_not_dash_whitespace1023 ) ( (  c2705 ) ) );
}

struct funenv1244 {
    enum Unit_13  (*fun) (  struct env1244  ,    struct Editor_957 *  ,    const char*  );
    struct env1244 env;
};

struct env1291 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1244 envinst1244;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Maybe_948   find_dash_next_dash_occurence1291 (   struct env1291 env ,    struct Editor_957 *  ed2711 ,    struct Slice_5  needle2713 ) {
    struct Cursor_764  from2714 = ( (  max768 ) ( ( ( * (  ed2711 ) ) .f_cursor ) ,  ( (  or_dash_else947 ) ( ( ( * (  ed2711 ) ) .f_selected ) ,  ( (struct Cursor_764) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline2715 = ( (  to_dash_slice1068 ) ( ( * ( (  get_dash_row1229 ) ( (  ed2711 ) ,  ( (  from2714 ) .f_y ) ) ) ) ) );
    struct Maybe_1002  dref2716 = ( (  find_dash_slice1001 ) ( ( (  subslice292 ) ( (  curline2715 ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  from2714 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline2715 ) .f_count ) ) ) ,  (  needle2713 ) ) );
    if ( dref2716.tag == Maybe_1002_Just_t ) {
        return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = (  op_dash_add82 ( (  op_dash_add82 ( ( (  from2714 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32270 ) ( ( dref2716 .stuff .Maybe_1002_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from2714 ) .f_y ) } ) ) );
    }
    else if ( dref2716.tag == Maybe_1002_None_t ) {
        struct Zip_344  temp1292 =  into_dash_iter358 ( ( (  zip457 ) ( ( (  from989 ) ( ( (  to_dash_slice1069 ) ( ( ( * (  ed2711 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( (  from2714 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from365 ) ( (  op_dash_add82 ( ( (  from2714 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_351  __cond1293 =  next353 (&temp1292);
            if (  __cond1293 .tag == 0 ) {
                break;
            }
            struct Tuple2_352  dref2718 =  __cond1293 .stuff .Maybe_351_Just_s .field0;
            struct Maybe_1002  dref2721 = ( (  find_dash_slice1001 ) ( ( (  to_dash_slice1068 ) ( ( dref2718 .field0 ) ) ) ,  (  needle2713 ) ) );
            if ( dref2721.tag == Maybe_1002_None_t ) {
            }
            else if ( dref2721.tag == Maybe_1002_Just_t ) {
                return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2721 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = ( dref2718 .field1 ) } ) ) );
            }
        }
        struct funenv1244  temp1294 = ( (struct funenv1244){ .fun = send_dash_msg1244, .env =  env.envinst1244  } );
        ( temp1294.fun ( temp1294.env ,  (  ed2711 ) ,  ( "Wrapped!" ) ) );
        struct Zip_344  temp1295 =  into_dash_iter358 ( ( (  zip457 ) ( ( (  subslice283 ) ( ( (  to_dash_slice1069 ) ( ( ( * (  ed2711 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2714 ) .f_y ) ) ) ) ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_351  __cond1296 =  next353 (&temp1295);
            if (  __cond1296 .tag == 0 ) {
                break;
            }
            struct Tuple2_352  dref2723 =  __cond1296 .stuff .Maybe_351_Just_s .field0;
            struct Maybe_1002  dref2726 = ( (  find_dash_slice1001 ) ( ( (  to_dash_slice1068 ) ( ( dref2723 .field0 ) ) ) ,  (  needle2713 ) ) );
            if ( dref2726.tag == Maybe_1002_None_t ) {
            }
            else if ( dref2726.tag == Maybe_1002_Just_t ) {
                return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2726 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = ( dref2723 .field1 ) } ) ) );
            }
        }
        struct Maybe_1002  dref2728 = ( (  find_dash_slice1001 ) ( (  curline2715 ) ,  (  needle2713 ) ) );
        if ( dref2728.tag == Maybe_1002_None_t ) {
        }
        else if ( dref2728.tag == Maybe_1002_Just_t ) {
            return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2728 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = ( (  from2714 ) .f_y ) } ) ) );
        }
        struct funenv1244  temp1297 = ( (struct funenv1244){ .fun = send_dash_msg1244, .env =  env.envinst1244  } );
        ( temp1297.fun ( temp1297.env ,  (  ed2711 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_948) { .tag = Maybe_948_None_t } );
    }
}

struct env1298 {
    ;
    ;
    ;
    struct env1244 envinst1244;
    ;
    ;
    ;
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

static  struct Cursor_764   lam964 (   struct env964 env ,    struct Cursor_764  s2736 ) {
    return ( (  min763 ) ( ( ( * ( env.ed2732 ) ) .f_cursor ) ,  (  s2736 ) ) );
}

static  struct Maybe_948   find_dash_prev_dash_occurence1298 (   struct env1298 env ,    struct Editor_957 *  ed2732 ,    struct Slice_5  needle2734 ) {
    struct env964 envinst964 = {
        .ed2732 =  ed2732 ,
    };
    struct Cursor_764  from2737 = ( (  maybe963 ) ( ( ( * (  ed2732 ) ) .f_selected ) ,  ( (struct funenv964){ .fun = lam964, .env = envinst964 } ) ,  ( ( * (  ed2732 ) ) .f_cursor ) ) );
    struct Slice_5  curline2738 = ( (  to_dash_slice1068 ) ( ( * ( (  get_dash_row1229 ) ( (  ed2732 ) ,  ( (  from2737 ) .f_y ) ) ) ) ) );
    struct Maybe_1002  dref2739 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1005 ) ( ( (  subslice292 ) ( (  curline2738 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size268 ) ( ( (  from2737 ) .f_x ) ) ) ) ) ,  (  needle2734 ) ) );
    if ( dref2739.tag == Maybe_1002_Just_t ) {
        return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2739 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = ( (  from2737 ) .f_y ) } ) ) );
    }
    else if ( dref2739.tag == Maybe_1002_None_t ) {
        int32_t  from_dash_y2741 = (  op_dash_sub83 ( ( (  from2737 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp75 ( (  from_dash_y2741 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row2742 = ( (  get_dash_row1229 ) ( (  ed2732 ) ,  (  from_dash_y2741 ) ) );
            struct Maybe_1002  dref2743 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1005 ) ( ( (  to_dash_slice1068 ) ( ( * (  row2742 ) ) ) ) ,  (  needle2734 ) ) );
            if ( dref2743.tag == Maybe_1002_None_t ) {
            }
            else if ( dref2743.tag == Maybe_1002_Just_t ) {
                return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2743 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2741 ) } ) ) );
            }
            from_dash_y2741 = (  op_dash_sub83 ( (  from_dash_y2741 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1244  temp1299 = ( (struct funenv1244){ .fun = send_dash_msg1244, .env =  env.envinst1244  } );
        ( temp1299.fun ( temp1299.env ,  (  ed2732 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y2745 = (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( (  num_dash_rows1232 ) ( (  ed2732 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp75 ( (  from_dash_y2745 ) , ( (  from2737 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row2746 = ( (  get_dash_row1229 ) ( (  ed2732 ) ,  (  from_dash_y2745 ) ) );
            struct Maybe_1002  dref2747 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1005 ) ( ( (  to_dash_slice1068 ) ( ( * (  row2746 ) ) ) ) ,  (  needle2734 ) ) );
            if ( dref2747.tag == Maybe_1002_None_t ) {
            }
            else if ( dref2747.tag == Maybe_1002_Just_t ) {
                return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2747 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2745 ) } ) ) );
            }
            from_dash_y2745 = (  op_dash_sub83 ( (  from_dash_y2745 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_1002  dref2749 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1005 ) ( (  curline2738 ) ,  (  needle2734 ) ) );
        if ( dref2749.tag == Maybe_1002_None_t ) {
        }
        else if ( dref2749.tag == Maybe_1002_Just_t ) {
            return ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( dref2749 .stuff .Maybe_1002_Just_s .field0 ) ) ) , .f_y = ( (  from2737 ) .f_y ) } ) ) );
        }
        struct funenv1244  temp1300 = ( (struct funenv1244){ .fun = send_dash_msg1244, .env =  env.envinst1244  } );
        ( temp1300.fun ( temp1300.env ,  (  ed2732 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_948) { .tag = Maybe_948_None_t } );
    }
}

struct funenv1065 {
    struct List_280  (*fun) (  struct env1065  ,    struct Map_299  ,    enum CAllocator_4  );
    struct env1065 env;
};

struct env1301 {
    struct env302 envinst302;
    struct env1065 envinst1065;
    struct env540 envinst540;
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

static  struct List_3   lam301 (   struct env301 env ,    struct DynStr_131  line2787 ) {
    struct funenv302  temp1304 = ( (struct funenv302){ .fun = to_dash_list302, .env =  env.envinst302  } );
    return ( temp1304.fun ( temp1304.env ,  (  line2787 ) ,  ( env.al2756 ) ) );
}

static  struct List_280   load_dash_file1301 (   struct env1301 env ,    const char*  filename2754 ,    enum CAllocator_4  al2756 ) {
    struct funenv1065  temp1303 = ( (struct funenv1065){ .fun = to_dash_list1065, .env =  env.envinst1065  } );
    struct env301 envinst301 = {
        .envinst302 = env.envinst302 ,
        .al2756 =  al2756 ,
    };
    struct List_280  temp1302 = ( temp1303.fun ( temp1303.env ,  ( (  map332 ) ( ( (  lines1024 ) ( ( (  read_dash_contents1219 ) ( (  filename2754 ) ,  (  al2756 ) ) ) ) ) ,  ( (struct funenv301){ .fun = lam301, .env = envinst301 } ) ) ) ,  (  al2756 ) ) );
    struct List_280 *  file2788 = ( &temp1302 );
    if ( ( (  null752 ) ( (  file2788 ) ) ) ) {
        struct funenv540  temp1305 = ( (struct funenv540){ .fun = add540, .env =  env.envinst540  } );
        ( temp1305.fun ( temp1305.env ,  (  file2788 ) ,  ( (  mk1038 ) ( (  al2756 ) ) ) ) );
    }
    return ( * (  file2788 ) );
}

struct env1306 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    enum CAllocator_4  al2751;
    ;
    ;
    struct env607 envinst607;
};

static  enum Unit_13   lam606 (   struct env606 env ,    char  c2798 ) {
    struct funenv607  temp1310 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
    return ( temp1310.fun ( temp1310.env ,  ( env.sb2794 ) ,  (  c2798 ) ) );
}

static  enum Unit_13   save_dash_file1306 (   struct env1306 env ,    struct List_280  cf2791 ,    const char*  filename2793 ) {
    struct StrBuilder_546  temp1307 = ( (  mk1110 ) ( ( env.al2751 ) ) );
    struct StrBuilder_546 *  sb2794 = ( &temp1307 );
    struct SliceIter_278  temp1308 =  into_dash_iter281 ( (  cf2791 ) );
    while (true) {
        struct Maybe_314  __cond1309 =  next354 (&temp1308);
        if (  __cond1309 .tag == 0 ) {
            break;
        }
        struct List_3  row2796 =  __cond1309 .stuff .Maybe_314_Just_s .field0;
        struct env606 envinst606 = {
            .sb2794 =  sb2794 ,
            .envinst607 = env.envinst607 ,
        };
        ( (  for_dash_each605 ) ( (  row2796 ) ,  ( (struct funenv606){ .fun = lam606, .env = envinst606 } ) ) );
        struct funenv607  temp1311 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
        ( temp1311.fun ( temp1311.env ,  (  sb2794 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1221 ) ( (  filename2793 ) ,  ( (  as_dash_str789 ) ( (  sb2794 ) ) ) ) );
    ( (  free1112 ) ( (  sb2794 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1312 (    struct List_280  cf2801 ) {
    ( (  for_dash_each591 ) ( ( (  addresses1070 ) ( (  cf2801 ) ) ) ,  (  free1039 ) ) );
    ( (  free1040 ) ( ( & (  cf2801 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1313 {
    ;
    int32_t  pad2802;
    ;
    ;
    ;
};

struct anon_1314 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1314   left_dash_offset1313 (   struct env1313 env ,    struct Editor_957 *  ed2805 ) {
    int32_t  max_dash_digits2806 = ( (  max767 ) ( ( (  count_dash_digits773 ) ( ( ( ( * (  ed2805 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1314) { .f_max_dash_digits = (  max_dash_digits2806 ) , .f_total_dash_offset = (  op_dash_add82 ( (  op_dash_add82 ( ( env.pad2802 ) , (  max_dash_digits2806 ) ) ) , ( env.pad2802 ) ) ) } );
}

struct funenv1313 {
    struct anon_1314  (*fun) (  struct env1313  ,    struct Editor_957 *  );
    struct env1313 env;
};

struct env1315 {
    struct env1313 envinst1313;
    ;
    ;
};

static  struct Dims_1247   screen_dash_dims1315 (   struct env1315 env ,    struct Editor_957 *  ed2809 ,    struct Tui_617 *  tui2811 ) {
    struct funenv1313  temp1316 = ( (struct funenv1313){ .fun = left_dash_offset1313, .env =  env.envinst1313  } );
    return ( (struct Dims_1247) { .f_cols = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * (  tui2811 ) ) .f_width ) ) ) , ( ( temp1316.fun ( temp1316.env ,  (  ed2809 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32274 ) ( ( ( * (  tui2811 ) ) .f_height ) ) ) } );
}

struct env1317 {
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
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1313 envinst1313;
    ;
    ;
    ;
    int32_t  pad2802;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1237 envinst1237;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1317 (   struct env1317 env ,    struct Screen_616 *  screen2814 ,    struct Editor_957 *  ed2816 ) {
    int32_t  w2817 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2814 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2818 = ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2814 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2819 = ( ( * (  ed2816 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2820 = ( ( * (  ed2816 ) ) .f_screen_dash_left );
    int32_t  x2821 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2822 = (  from_dash_integral29 ( 0 ) );
    ( (  assert938 ) ( (  cmp9 ( ( ( ( * (  ed2816 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1313  temp1318 = ( (struct funenv1313){ .fun = left_dash_offset1313, .env =  env.envinst1313  } );
    struct anon_1314  offstuff2823 = ( temp1318.fun ( temp1318.env ,  (  ed2816 ) ) );
    int32_t  max_dash_digits2824 = ( (  offstuff2823 ) .f_max_dash_digits );
    int32_t  left_dash_off2825 = ( (  offstuff2823 ) .f_total_dash_offset );
    struct Drop_343  temp1319 =  into_dash_iter342 ( ( (  drop357 ) ( ( (  zip460 ) ( ( ( * (  ed2816 ) ) .f_current_dash_file ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_y2819 ) ) ) ) ) );
    while (true) {
        struct Maybe_351  __cond1320 =  next350 (&temp1319);
        if (  __cond1320 .tag == 0 ) {
            break;
        }
        struct Tuple2_352  dref2826 =  __cond1320 .stuff .Maybe_351_Just_s .field0;
        int32_t  row_dash_num2829 = (  op_dash_add82 ( ( dref2826 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1321 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2802 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1322 =  next364 (&temp1321);
            if (  __cond1322 .tag == 0 ) {
                break;
            }
            int32_t  xx2831 =  __cond1322 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1197 ) ( (  screen2814 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2831 ) ,  (  y2822 ) ) );
        }
        ( (  draw_dash_str_dash_right1208 ) ( (  screen2814 ) ,  (  row_dash_num2829 ) ,  (  op_dash_sub83 ( (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2814 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2824 ) ) ) , ( env.pad2802 ) ) ) ,  (  y2822 ) ) );
        struct RangeIter_363  temp1323 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( env.pad2802 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_328  __cond1324 =  next364 (&temp1323);
            if (  __cond1324 .tag == 0 ) {
                break;
            }
            int32_t  xx2833 =  __cond1324 .stuff .Maybe_328_Just_s .field0;
            ( (  put_dash_char1197 ) ( (  screen2814 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  xx2833 ) , ( env.pad2802 ) ) ) , (  max_dash_digits2824 ) ) ) ,  (  y2822 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2816 ) ) .f_cursor ) .f_y ) , (  op_dash_sub83 ( (  row_dash_num2829 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_363  temp1325 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  max_dash_digits2824 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_328  __cond1326 =  next364 (&temp1325);
                if (  __cond1326 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2835 =  __cond1326 .stuff .Maybe_328_Just_s .field0;
                struct Cell_53 *  cp2836 = ( (  or_dash_fail945 ) ( ( (  get_dash_cell_dash_ptr1191 ) ( (  screen2814 ) ,  (  op_dash_add82 ( (  xxx2835 ) , ( env.pad2802 ) ) ) ,  (  y2822 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2836 ) .f_fg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp2836 ) .f_bg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_339  temp1327 =  into_dash_iter338 ( ( (  drop355 ) ( ( (  zip459 ) ( ( dref2826 .field0 ) ,  ( (  from365 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  from_dash_x2820 ) ) ) ) ) );
        while (true) {
            struct Maybe_346  __cond1328 =  next345 (&temp1327);
            if (  __cond1328 .tag == 0 ) {
                break;
            }
            struct Tuple2_347  dref2837 =  __cond1328 .stuff .Maybe_346_Just_s .field0;
            bool  in_dash_selection2840 = ( (  is_dash_in_dash_selection1289 ) ( (  ed2816 ) ,  ( (struct Cursor_764) { .f_x = ( dref2837 .field1 ) , .f_y = ( dref2826 .field1 ) } ) ) );
            if ( (  in_dash_selection2840 ) ) {
                ( (  set_dash_screen_dash_colors1190 ) ( (  screen2814 ) ,  ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq48 ( ( dref2837 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1197 ) ( (  screen2814 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2825 ) , (  x2821 ) ) ) ,  (  y2822 ) ) );
                x2821 = (  op_dash_add82 ( (  x2821 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1197 ) ( (  screen2814 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add82 ( (  left_dash_off2825 ) , (  x2821 ) ) ) ,  (  y2822 ) ) );
            } else {
                ( (  put_dash_char1197 ) ( (  screen2814 ) ,  ( dref2837 .field0 ) ,  (  op_dash_add82 ( (  left_dash_off2825 ) , (  x2821 ) ) ) ,  (  y2822 ) ) );
            }
            if ( (  in_dash_selection2840 ) ) {
                ( (  set_dash_screen_dash_colors1190 ) ( (  screen2814 ) ,  ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x2821 = (  op_dash_add82 ( (  x2821 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp75 ( (  x2821 ) , (  w2817 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp75 ( (  x2821 ) , (  w2817 ) ) == 0 ) && ( (  is_dash_in_dash_selection1289 ) ( (  ed2816 ) ,  ( (struct Cursor_764) { .f_x = ( (  size_dash_i32270 ) ( ( ( dref2826 .field0 ) .f_count ) ) ) , .f_y = ( dref2826 .field1 ) } ) ) ) ) ) {
            struct Cell_53 *  cell2841 = ( (  or_dash_fail945 ) ( ( (  get_dash_cell_dash_ptr1191 ) ( (  screen2814 ) ,  (  op_dash_add82 ( (  left_dash_off2825 ) , (  x2821 ) ) ) ,  (  y2822 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2841 ) .f_fg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell2841 ) .f_bg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y2822 = (  op_dash_add82 ( (  y2822 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2821 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp75 ( (  y2822 ) , (  h2818 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_764  cur2842 = ( ( * (  ed2816 ) ) .f_cursor );
    struct funenv1237  temp1329 = ( (struct funenv1237){ .fun = x_dash_to_dash_visual_dash_x1237, .env =  env.envinst1237  } );
    int32_t  vx2843 = ( (  from_dash_visual1226 ) ( ( temp1329.fun ( temp1329.env ,  (  ed2816 ) ,  ( (  cur2842 ) .f_x ) ,  ( (  cur2842 ) .f_y ) ) ) ) );
    int32_t  len2844 = ( (  maybe975 ) ( ( (  try_dash_get1033 ) ( ( (  cursor_dash_row1230 ) ( (  ed2816 ) ) ) ,  ( (  i32_dash_size268 ) ( ( (  cur2842 ) .f_x ) ) ) ) ) ,  ( (struct funenv312){ .fun = char_dash_len312, .env =  env.envinst312  } ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_363  temp1330 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  len2844 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_328  __cond1331 =  next364 (&temp1330);
        if (  __cond1331 .tag == 0 ) {
            break;
        }
        int32_t  x2846 =  __cond1331 .stuff .Maybe_328_Just_s .field0;
        struct Cell_53 *  cursor_dash_cell2847 = ( (  or_dash_fail945 ) ( ( (  get_dash_cell_dash_ptr1191 ) ( (  screen2814 ) ,  (  op_dash_add82 ( (  op_dash_add82 ( (  op_dash_sub83 ( (  left_dash_off2825 ) , ( ( * (  ed2816 ) ) .f_screen_dash_left ) ) ) , (  vx2843 ) ) ) , (  x2846 ) ) ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2816 ) ) .f_cursor ) .f_y ) , (  from_dash_y2819 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2847 ) .f_fg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell2847 ) .f_bg = ( ( * ( ( * (  ed2816 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1332 (    struct Maybe_954 *  dref2849 ,    struct Screen_616 *  screen2852 ) {
    struct Maybe_954  dref2853 = ( (* dref2849 ) );
    if ( dref2853.tag == Maybe_954_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2853.tag == Maybe_954_Just_t ) {
        struct Duration_1134  diff2855 = ( (  diff1135 ) ( ( (  now1131 ) ( ) ) ,  ( dref2853 .stuff .Maybe_954_Just_s .field0 ) ) );
        struct Duration_1134  limit2856 = ( (  duration_dash_from_dash_ns1136 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1133 ( (  diff2855 ) , (  limit2856 ) ) == 2 ) ) {
            (* dref2849 ) = ( (struct Maybe_954) { .tag = Maybe_954_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2857 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2858 = (  op_dash_div80 ( ( (  u32_dash_i64273 ) ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2859 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1137 ) ( (  diff2855 ) ) ) , (  x_dash_fill2857 ) ) ) , ( (  duration_dash_to_dash_ns1137 ) ( (  limit2856 ) ) ) ) ) ) );
        int32_t  y_dash_progress2860 = ( (  i64_dash_i32269 ) ( (  op_dash_div80 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1137 ) ( (  diff2855 ) ) ) , (  y_dash_fill2858 ) ) ) , ( (  duration_dash_to_dash_ns1137 ) ( (  limit2856 ) ) ) ) ) ) );
        uint32_t  center_dash_x2861 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2862 = (  op_dash_add87 ( (  op_dash_div90 ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1189 ) ( (  screen2852 ) ,  ( (struct Color_54) { .tag = Color_54_ColorDefault_t } ) ) );
        int32_t  x_dash_off2863 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  x_dash_fill2857 ) ) ) , (  x_dash_progress2859 ) ) );
        int32_t  y_dash_off2864 = (  op_dash_sub83 ( ( (  i64_dash_i32269 ) ( (  y_dash_fill2858 ) ) ) , (  y_dash_progress2860 ) ) );
        int32_t  h2865 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2866 = (  op_dash_sub83 ( ( (  u32_dash_i32274 ) ( ( ( * ( ( * (  screen2852 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_363  temp1333 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2865 ) ) ) );
        while (true) {
            struct Maybe_328  __cond1334 =  next364 (&temp1333);
            if (  __cond1334 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2868 =  __cond1334 .stuff .Maybe_328_Just_s .field0;
            struct RangeIter_363  temp1335 =  into_dash_iter362 ( ( (  to360 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2866 ) ) ) );
            while (true) {
                struct Maybe_328  __cond1336 =  next364 (&temp1335);
                if (  __cond1336 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2870 =  __cond1336 .stuff .Maybe_328_Just_s .field0;
                if ( ( ( ( (  cmp75 ( (  screen_dash_x2870 ) , (  x_dash_off2863 ) ) != 2 ) || (  cmp75 ( (  screen_dash_x2870 ) , (  op_dash_sub83 ( (  w2866 ) , (  x_dash_off2863 ) ) ) ) != 0 ) ) || (  cmp75 ( (  screen_dash_y2868 ) , (  y_dash_off2864 ) ) != 2 ) ) || (  cmp75 ( (  screen_dash_y2868 ) , (  op_dash_sub83 ( (  h2865 ) , (  y_dash_off2864 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1197 ) ( (  screen2852 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2870 ) ,  (  screen_dash_y2868 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1301 {
    struct List_280  (*fun) (  struct env1301  ,    const char*  ,    enum CAllocator_4  );
    struct env1301 env;
};

struct funenv1127 {
    const char*  (*fun) (  struct env1127  ,    struct TakeWhile_486  ,    enum CAllocator_4  );
    struct env1127 env;
};

struct funenv1129 {
    const char*  (*fun) (  struct env1129  ,    struct TakeWhile_490  ,    enum CAllocator_4  );
    struct env1129 env;
};

struct funenv1306 {
    enum Unit_13  (*fun) (  struct env1306  ,    struct List_280  ,    const char*  );
    struct env1306 env;
};

struct env1337 {
    ;
    struct env1301 envinst1301;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct Theme_959 *  light_dash_theme2483;
    ;
    ;
    struct Theme_959 *  dark_dash_theme2482;
    ;
    ;
    ;
    struct env1127 envinst1127;
    ;
    ;
    ;
    struct env1129 envinst1129;
    struct env1252 envinst1252;
    ;
    ;
    ;
    ;
    struct env1306 envinst1306;
    ;
    ;
    ;
    ;
};

static  bool   lam1338 (    char  c2884 ) {
    return ( ! ( (  is_dash_whitespace1022 ) ( (  c2884 ) ) ) );
}

static  bool   lam1342 (    char  c2892 ) {
    return ( ! ( (  is_dash_whitespace1022 ) ( (  c2892 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1337 (   struct env1337 env ,    struct Editor_957 *  ed2873 ,    struct DynStr_131  s2875 ,    struct Dims_1247  dim2877 ,    enum CAllocator_4  al2879 ) {
    struct DropWhile_484  s2880 = ( (  drop_dash_while511 ) ( (  s2875 ) ,  (  is_dash_whitespace1022 ) ) );
    struct TakeWhile_483  cmd2881 = ( (  take_dash_while508 ) ( (  s2880 ) ,  (  is_dash_not_dash_whitespace1023 ) ) );
    struct DropWhile_487  rest2882 = ( (  drop_dash_while514 ) ( ( (  drop_dash_while513 ) ( (  s2880 ) ,  (  is_dash_not_dash_whitespace1023 ) ) ) ,  (  is_dash_whitespace1022 ) ) );
    if ( ( (  eq914 ) ( (  cmd2881 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_486  filename2885 = ( (  take_dash_while507 ) ( (  rest2882 ) ,  (  lam1338 ) ) );
        const char*  temp1339;
        const char*  alfname2886 = (  temp1339 );
        if ( ( (  null754 ) ( (  filename2885 ) ) ) ) {
            struct Maybe_265  dref2887 = ( ( * (  ed2873 ) ) .f_filename );
            if ( dref2887.tag == Maybe_265_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2887.tag == Maybe_265_Just_t ) {
                alfname2886 = ( dref2887 .stuff .Maybe_265_Just_s .field0 );
            }
        } else {
            struct Maybe_265  dref2889 = ( ( * (  ed2873 ) ) .f_filename );
            if ( dref2889.tag == Maybe_265_None_t ) {
            }
            else if ( dref2889.tag == Maybe_265_Just_t ) {
                ( (  free1014 ) ( (  al2879 ) ,  ( (struct Slice_1015) { .f_ptr = ( (  cast191 ) ( ( dref2889 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1127  temp1340 = ( (struct funenv1127){ .fun = mk_dash_const_dash_str1127, .env =  env.envinst1127  } );
            alfname2886 = ( temp1340.fun ( temp1340.env ,  (  filename2885 ) ,  (  al2879 ) ) );
        }
        struct funenv1306  temp1341 = ( (struct funenv1306){ .fun = save_dash_file1306, .env =  env.envinst1306  } );
        ( temp1341.fun ( temp1341.env ,  ( ( * (  ed2873 ) ) .f_current_dash_file ) ,  (  alfname2886 ) ) );
        (*  ed2873 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2886 ) ) );
    } else {
        if ( ( (  eq914 ) ( (  cmd2881 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2873 ) .f_running = ( false );
        } else {
            if ( ( (  eq914 ) ( (  cmd2881 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_490  filename2893 = ( (  take_dash_while504 ) ( (  rest2882 ) ,  (  lam1342 ) ) );
                struct funenv1129  temp1343 = ( (struct funenv1129){ .fun = mk_dash_const_dash_str1129, .env =  env.envinst1129  } );
                const char*  alfname2894 = ( temp1343.fun ( temp1343.env ,  (  filename2893 ) ,  (  al2879 ) ) );
                struct List_280  og2895 = ( ( * (  ed2873 ) ) .f_current_dash_file );
                struct funenv1301  temp1344 = ( (struct funenv1301){ .fun = load_dash_file1301, .env =  env.envinst1301  } );
                (*  ed2873 ) .f_current_dash_file = ( temp1344.fun ( temp1344.env ,  (  alfname2894 ) ,  (  al2879 ) ) );
                struct Maybe_265  dref2896 = ( ( * (  ed2873 ) ) .f_filename );
                if ( dref2896.tag == Maybe_265_None_t ) {
                }
                else if ( dref2896.tag == Maybe_265_Just_t ) {
                    ( (  free1014 ) ( (  al2879 ) ,  ( (struct Slice_1015) { .f_ptr = ( (  cast191 ) ( ( dref2896 .stuff .Maybe_265_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2873 ) .f_filename = ( ( Maybe_265_Just ) ( (  alfname2894 ) ) );
                (*  ed2873 ) .f_cursor = ( (struct Cursor_764) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2873 ) .f_goal_dash_x = ( ( Visual_958_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2873 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1312 ) ( (  og2895 ) ) );
            } else {
                if ( ( (  eq918 ) ( (  cmd2881 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_497  theme_dash_name2898 = ( (  take_dash_while506 ) ( (  rest2882 ) ,  (  is_dash_not_dash_whitespace1023 ) ) );
                    if ( ( (  eq921 ) ( (  theme_dash_name2898 ) ,  ( "dark" ) ) ) ) {
                        (*  ed2873 ) .f_theme = ( env.dark_dash_theme2482 );
                    } else {
                        if ( ( (  eq921 ) ( (  theme_dash_name2898 ) ,  ( "light" ) ) ) ) {
                            (*  ed2873 ) .f_theme = ( env.light_dash_theme2483 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_691  dref2899 = ( (  parse_dash_int1029 ) ( (  cmd2881 ) ) );
                    if ( dref2899.tag == Maybe_691_Just_t ) {
                        int32_t  newline2901 = ( (  clamp770 ) ( ( (  i64_dash_i32269 ) ( (  op_dash_sub79 ( ( dref2899 .stuff .Maybe_691_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( (  size_dash_i32270 ) ( ( ( ( * (  ed2873 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        struct funenv1252  temp1345 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  env.envinst1252  } );
                        ( temp1345.fun ( temp1345.env ,  (  ed2873 ) ,  (  newline2901 ) ,  (  dim2877 ) ) );
                    }
                    else if ( dref2899.tag == Maybe_691_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1125 {
    const char*  (*fun) (  struct env1125  ,    const char*  ,    enum CAllocator_4  );
    struct env1125 env;
};

struct funenv1148 {
    struct Tui_617  (*fun) (  struct env1148  );
    struct env1148 env;
};

struct funenv1043 {
    enum Unit_13  (*fun) (  struct env1043  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1043 env;
};

struct funenv1315 {
    struct Dims_1247  (*fun) (  struct env1315  ,    struct Editor_957 *  ,    struct Tui_617 *  );
    struct env1315 env;
};

struct funenv1254 {
    bool  (*fun) (  struct env1254  ,    struct Editor_957 *  ,    struct Dims_1247  );
    struct env1254 env;
};

struct funenv1258 {
    bool  (*fun) (  struct env1258  ,    struct Editor_957 *  ,    struct Dims_1247  );
    struct env1258 env;
};

struct funenv1267 {
    enum Unit_13  (*fun) (  struct env1267  ,    struct Editor_957 *  ,    struct Dims_1247  );
    struct env1267 env;
};

struct funenv1261 {
    enum Unit_13  (*fun) (  struct env1261  ,    struct Editor_957 *  ,    struct Dims_1247  );
    struct env1261 env;
};

struct funenv1263 {
    enum Unit_13  (*fun) (  struct env1263  ,    struct Editor_957 *  ,    struct Dims_1247  );
    struct env1263 env;
};

struct funenv1285 {
    enum Unit_13  (*fun) (  struct env1285  ,    struct Editor_957 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1285 env;
};

struct funenv1291 {
    struct Maybe_948  (*fun) (  struct env1291  ,    struct Editor_957 *  ,    struct Slice_5  );
    struct env1291 env;
};

struct funenv1298 {
    struct Maybe_948  (*fun) (  struct env1298  ,    struct Editor_957 *  ,    struct Slice_5  );
    struct env1298 env;
};

static  int32_t   lam1390 (    struct Cursor_764  s2935 ) {
    return ( (  s2935 ) .f_x );
}

static  int32_t   lam1396 (    struct Cursor_764  s2939 ) {
    return ( (  s2939 ) .f_x );
}

static  bool   lam1400 (    char  c2943 ) {
    return ( (  is_dash_word_dash_char1290 ) ( (  c2943 ) ) );
}

static  bool   lam1402 (    char  c2945 ) {
    return ( ! ( (  is_dash_word_dash_char1290 ) ( (  c2945 ) ) ) );
}

static  bool   lam1408 (    char  c2949 ) {
    return ( ! ( (  is_dash_word_dash_char1290 ) ( (  c2949 ) ) ) );
}

static  bool   lam1410 (    char  c2951 ) {
    return ( (  is_dash_word_dash_char1290 ) ( (  c2951 ) ) );
}

static  bool   lam1416 (    char  c2955 ) {
    return ( ! ( (  is_dash_word_dash_char1290 ) ( (  c2955 ) ) ) );
}

static  bool   lam1418 (    char  c2957 ) {
    return ( (  is_dash_word_dash_char1290 ) ( (  c2957 ) ) );
}

static  bool   lam1420 (    char  c2959 ) {
    return ( ! ( (  is_dash_word_dash_char1290 ) ( (  c2959 ) ) ) );
}

struct funenv1107 {
    enum Unit_13  (*fun) (  struct env1107  ,    struct StrBuilder_546 *  );
    struct env1107 env;
};

struct funenv1337 {
    enum Unit_13  (*fun) (  struct env1337  ,    struct Editor_957 *  ,    struct DynStr_131  ,    struct Dims_1247  ,    enum CAllocator_4  );
    struct env1337 env;
};

struct funenv1186 {
    bool  (*fun) (  struct env1186  ,    struct Screen_616 *  );
    struct env1186 env;
};

struct funenv1317 {
    enum Unit_13  (*fun) (  struct env1317  ,    struct Screen_616 *  ,    struct Editor_957 *  );
    struct env1317 env;
};

static  struct Maybe_297   lam956 (   struct env956 env ,    struct List_3  l2989 ) {
    return ( (  try_dash_get1033 ) ( ( & (  l2989 ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * ( env.ed2907 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_347   lam1449 (    char  c2991 ) {
    return ( ( Tuple2_347_Tuple2 ) ( (  c2991 ) ,  ( (  char_dash_i32924 ) ( (  c2991 ) ) ) ) );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1697 = ( (  from_dash_integral11 ( 8 ) ) );
    size_t  growth_dash_factor1698 = ( (  from_dash_integral11 ( 2 ) ) );
    size_t  shrink_dash_factor1699 = ( (  from_dash_integral11 ( 8 ) ) );
    struct env541 envinst541 = {
        .growth_dash_factor1698 =  growth_dash_factor1698 ,
        .starting_dash_size1697 =  starting_dash_size1697 ,
    };
    struct env305 envinst305 = {
        .growth_dash_factor1698 =  growth_dash_factor1698 ,
        .starting_dash_size1697 =  starting_dash_size1697 ,
    };
    struct env540 envinst540 = {
        .envinst541 = envinst541 ,
    };
    struct env304 envinst304 = {
        .envinst305 = envinst305 ,
    };
    struct env1043 envinst1043 = {
        .envinst304 = envinst304 ,
        .envinst305 = envinst305 ,
    };
    struct env1046 envinst1046 = {
        .envinst540 = envinst540 ,
        .envinst541 = envinst541 ,
    };
    struct env1049 envinst1049 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1050 envinst1050 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1051 envinst1051 = {
        .envinst1049 = envinst1049 ,
    };
    struct env303 envinst303 = {
        .envinst304 = envinst304 ,
    };
    struct env1054 envinst1054 = {
        .envinst540 = envinst540 ,
    };
    struct env1056 envinst1056 = {
        .envinst304 = envinst304 ,
    };
    struct env1058 envinst1058 = {
        .envinst304 = envinst304 ,
    };
    struct env1060 envinst1060 = {
        .envinst304 = envinst304 ,
    };
    struct env302 envinst302 = {
        .envinst303 = envinst303 ,
    };
    struct env1065 envinst1065 = {
        .envinst1054 = envinst1054 ,
    };
    struct env1100 envinst1100 = {
        .envinst304 = envinst304 ,
    };
    struct env1102 envinst1102 = {
        .envinst304 = envinst304 ,
    };
    struct env1104 envinst1104 = {
        .envinst304 = envinst304 ,
    };
    struct env607 envinst607 = {
        .envinst304 = envinst304 ,
    };
    struct env1107 envinst1107 = {
        .envinst1051 = envinst1051 ,
    };
    struct env1113 envinst1113 = {
        .envinst607 = envinst607 ,
        .envinst1100 = envinst1100 ,
    };
    struct env1117 envinst1117 = {
        .envinst607 = envinst607 ,
        .envinst1102 = envinst1102 ,
    };
    struct env1121 envinst1121 = {
        .envinst607 = envinst607 ,
        .envinst1104 = envinst1104 ,
    };
    struct env1125 envinst1125 = {
        .envinst1113 = envinst1113 ,
    };
    struct env1127 envinst1127 = {
        .envinst1117 = envinst1117 ,
    };
    struct env1129 envinst1129 = {
        .envinst1121 = envinst1121 ,
    };
    bool  temp1147 = ( false );
    bool *  should_dash_resize2263 = ( &temp1147 );
    struct env1148 envinst1148 = {
        .should_dash_resize2263 =  should_dash_resize2263 ,
    };
    struct env1171 envinst1171 = {
        .should_dash_resize2263 =  should_dash_resize2263 ,
    };
    struct env1186 envinst1186 = {
        .envinst1171 = envinst1171 ,
    };
    int32_t  tab_dash_size2477 = (  from_dash_integral29 ( 2 ) );
    struct env312 envinst312 = {
        .tab_dash_size2477 =  tab_dash_size2477 ,
    };
    struct Theme_959  temp1223 = ( (struct Theme_959) { .f_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_Black16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) } );
    struct Theme_959 *  dark_dash_theme2482 = ( &temp1223 );
    struct Theme_959  temp1224 = ( (struct Theme_959) { .f_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_text = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_54_Color16 ) ( ( Color16_56_BrightBlack16 ) ) ) , .f_selection_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_54_Color8 ) ( ( Color8_55_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_54_Color16 ) ( ( Color16_56_BrightWhite16 ) ) ) } );
    struct Theme_959 *  light_dash_theme2483 = ( &temp1224 );
    struct env1233 envinst1233 = {
        .envinst1050 = envinst1050 ,
    };
    struct env1237 envinst1237 = {
        .envinst312 = envinst312 ,
    };
    struct env1238 envinst1238 = {
        .envinst312 = envinst312 ,
    };
    struct env1244 envinst1244 = {
        .envinst1113 = envinst1113 ,
    };
    struct env1246 envinst1246 = {
        .envinst1238 = envinst1238 ,
        .envinst1237 = envinst1237 ,
    };
    struct env1250 envinst1250 = {
        .envinst1246 = envinst1246 ,
    };
    struct env1252 envinst1252 = {
        .envinst1246 = envinst1246 ,
    };
    struct env1254 envinst1254 = {
        .envinst1250 = envinst1250 ,
        .envinst1252 = envinst1252 ,
    };
    struct env1258 envinst1258 = {
        .envinst1250 = envinst1250 ,
        .envinst1246 = envinst1246 ,
    };
    struct env1261 envinst1261 = {
        .envinst1250 = envinst1250 ,
    };
    struct env1263 envinst1263 = {
        .envinst1250 = envinst1250 ,
    };
    struct env1267 envinst1267 = {
        .envinst1233 = envinst1233 ,
        .envinst1246 = envinst1246 ,
        .envinst1049 = envinst1049 ,
        .envinst1056 = envinst1056 ,
        .envinst1058 = envinst1058 ,
    };
    struct env1285 envinst1285 = {
        .envinst1046 = envinst1046 ,
        .envinst1060 = envinst1060 ,
    };
    struct env1291 envinst1291 = {
        .envinst1244 = envinst1244 ,
    };
    struct env1298 envinst1298 = {
        .envinst1244 = envinst1244 ,
    };
    enum CAllocator_4  al2751 = ( (  idc1008 ) ( ) );
    struct env1301 envinst1301 = {
        .envinst302 = envinst302 ,
        .envinst1065 = envinst1065 ,
        .envinst540 = envinst540 ,
    };
    struct env1306 envinst1306 = {
        .al2751 =  al2751 ,
        .envinst607 = envinst607 ,
    };
    int32_t  pad2802 = (  from_dash_integral29 ( 2 ) );
    struct env1313 envinst1313 = {
        .pad2802 =  pad2802 ,
    };
    struct env1315 envinst1315 = {
        .envinst1313 = envinst1313 ,
    };
    struct env1317 envinst1317 = {
        .envinst312 = envinst312 ,
        .envinst1313 = envinst1313 ,
        .pad2802 =  pad2802 ,
        .envinst1237 = envinst1237 ,
    };
    struct env1337 envinst1337 = {
        .envinst1301 = envinst1301 ,
        .light_dash_theme2483 =  light_dash_theme2483 ,
        .dark_dash_theme2482 =  dark_dash_theme2482 ,
        .envinst1127 = envinst1127 ,
        .envinst1129 = envinst1129 ,
        .envinst1252 = envinst1252 ,
        .envinst1306 = envinst1306 ,
    };
    struct Slice_982  args2904 = ( (  get1222 ) ( ) );
    struct List_280  temp1346;
    struct List_280  file2905 = (  temp1346 );
    struct Maybe_265  mfilename2906 = ( (struct Maybe_265) { .tag = Maybe_265_None_t } );
    if ( (  eq45 ( ( (  args2904 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file2905 = ( (  mk1037 ) ( (  al2751 ) ) );
        struct funenv540  temp1347 = ( (struct funenv540){ .fun = add540, .env =  envinst540  } );
        ( temp1347.fun ( temp1347.env ,  ( & (  file2905 ) ) ,  ( (  mk1038 ) ( (  al2751 ) ) ) ) );
    } else {
        struct funenv1301  temp1348 = ( (struct funenv1301){ .fun = load_dash_file1301, .env =  envinst1301  } );
        file2905 = ( temp1348.fun ( temp1348.env ,  (  elem_dash_get995 ( (  args2904 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2751 ) ) );
        struct funenv1125  temp1349 = ( (struct funenv1125){ .fun = mk_dash_const_dash_str1125, .env =  envinst1125  } );
        mfilename2906 = ( ( Maybe_265_Just ) ( ( temp1349.fun ( temp1349.env ,  (  elem_dash_get995 ( (  args2904 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2751 ) ) ) ) );
    }
    struct Editor_957  temp1350 = ( (struct Editor_957) { .f_cursor = ( (struct Cursor_764) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_958_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file2905 ) , .f_filename = (  mfilename2906 ) , .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } ) , .f_anim = ( ( Maybe_954_Just ) ( ( (  now1131 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_948) { .tag = Maybe_948_None_t } ) , .f_theme = (  dark_dash_theme2482 ) , .f_search_dash_term = ( (struct Maybe_841) { .tag = Maybe_841_None_t } ) , .f_al = (  al2751 ) , .f_msg = ( (struct Maybe_315) { .tag = Maybe_315_None_t } ) } );
    struct Editor_957 *  ed2907 = ( &temp1350 );
    struct funenv1148  temp1352 = ( (struct funenv1148){ .fun = mk1148, .env =  envinst1148  } );
    struct Tui_617  temp1351 = ( temp1352.fun ( temp1352.env ) );
    struct Tui_617 *  tui2908 = ( &temp1351 );
    enum CAllocator_4  al2909 = ( (  idc1008 ) ( ) );
    struct Screen_616  temp1353 = ( (  mk_dash_screen1172 ) ( (  tui2908 ) ,  (  al2909 ) ) );
    struct Screen_616 *  screen2910 = ( &temp1353 );
    uint32_t  counter2911 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw2912 = ( true );
    while ( ( ( * (  ed2907 ) ) .f_running ) ) {
        int32_t  events2913 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_519  temp1354 =  into_dash_iter518 ( ( (  from_dash_function525 ) ( (  read_dash_key1165 ) ) ) );
        while (true) {
            struct Maybe_520  __cond1355 =  next524 (&temp1354);
            if (  __cond1355 .tag == 0 ) {
                break;
            }
            struct InputEvent_521  ev2915 =  __cond1355 .stuff .Maybe_520_Just_s .field0;
            if ( (  eq41 ( (  events2913 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1243 ) ( (  ed2907 ) ) );
            }
            events2913 = (  op_dash_add82 ( (  events2913 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1171  temp1356 = ( (struct funenv1171){ .fun = update_dash_dimensions1171, .env =  envinst1171  } );
            ( temp1356.fun ( temp1356.env ,  (  tui2908 ) ) );
            struct InputEvent_521  dref2916 = (  ev2915 );
            if ( dref2916.tag == InputEvent_521_Key_t ) {
                struct Key_522  dref2918 = ( dref2916 .stuff .InputEvent_521_Key_s .field0 );
                if ( dref2918.tag == Key_522_Char_t ) {
                    struct Mode_783 *  dref2920 = ( & ( ( * (  ed2907 ) ) .f_mode ) );
                    if ( (* dref2920 ).tag == Mode_783_Insert_t ) {
                        struct funenv1043  temp1357 = ( (struct funenv1043){ .fun = insert1043, .env =  envinst1043  } );
                        ( temp1357.fun ( temp1357.env ,  ( (  cursor_dash_row1230 ) ( (  ed2907 ) ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref2918 .stuff .Key_522_Char_s .field0 ) ) );
                        struct funenv1250  temp1358 = ( (struct funenv1250){ .fun = move_dash_to_dash_col1250, .env =  envinst1250  } );
                        struct funenv1315  temp1359 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                        ( temp1358.fun ( temp1358.env ,  (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1359.fun ( temp1359.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                    }
                    else if ( (* dref2920 ).tag == Mode_783_Cmd_t ) {
                        struct funenv607  temp1360 = ( (struct funenv607){ .fun = write_dash_char607, .env =  envinst607  } );
                        ( temp1360.fun ( temp1360.env ,  ( & ( (* dref2920 ) .stuff .Mode_783_Cmd_s .field0 ) ) ,  ( dref2918 .stuff .Key_522_Char_s .field0 ) ) );
                    }
                    else if ( (* dref2920 ).tag == Mode_783_SearchBox_t ) {
                        struct funenv607  temp1361 = ( (struct funenv607){ .fun = write_dash_char607, .env =  envinst607  } );
                        ( temp1361.fun ( temp1361.env ,  ( & ( (* dref2920 ) .stuff .Mode_783_SearchBox_s .field0 ) ) ,  ( dref2918 .stuff .Key_522_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1227 ( ( (* dref2920 ) ) , ( (struct Mode_783) { .tag = Mode_783_Normal_t } ) ) ) || (  eq1227 ( ( (* dref2920 ) ) , ( (struct Mode_783) { .tag = Mode_783_Select_t } ) ) ) ) ) {
                            int32_t  code2924 = ( (  u8_dash_i32276 ) ( ( (  cast195 ) ( ( dref2918 .stuff .Key_522_Char_s .field0 ) ) ) ) );
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed2907 ) .f_running = ( false );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1252  temp1362 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                                struct funenv1315  temp1363 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1362.fun ( temp1362.env ,  (  ed2907 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1363.fun ( temp1363.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1252  temp1364 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                                struct funenv1315  temp1365 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1364.fun ( temp1364.env ,  (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1365.fun ( temp1365.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1254  temp1366 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                struct funenv1315  temp1367 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1366.fun ( temp1366.env ,  (  ed2907 ) ,  ( temp1367.fun ( temp1367.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1258  temp1368 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                struct funenv1315  temp1369 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1368.fun ( temp1368.env ,  (  ed2907 ) ,  ( temp1369.fun ( temp1369.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1227 ( ( (* dref2920 ) ) , ( (struct Mode_783) { .tag = Mode_783_Select_t } ) ) ) ) {
                                    (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                                } else {
                                    (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Select_t } );
                                    ( (  set_dash_selection1242 ) ( (  ed2907 ) ,  ( ( Maybe_948_Just ) ( ( ( * (  ed2907 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1267  temp1370 = ( (struct funenv1267){ .fun = delete_dash_selected1267, .env =  envinst1267  } );
                                struct funenv1315  temp1371 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1370.fun ( temp1370.env ,  (  ed2907 ) ,  ( temp1371.fun ( temp1371.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1267  temp1372 = ( (struct funenv1267){ .fun = delete_dash_selected1267, .env =  envinst1267  } );
                                struct funenv1315  temp1373 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1372.fun ( temp1372.env ,  (  ed2907 ) ,  ( temp1373.fun ( temp1373.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1261  temp1374 = ( (struct funenv1261){ .fun = move_dash_to_dash_start_dash_of_dash_line_dash_indented1261, .env =  envinst1261  } );
                                struct funenv1315  temp1375 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1374.fun ( temp1374.env ,  (  ed2907 ) ,  ( temp1375.fun ( temp1375.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1263  temp1376 = ( (struct funenv1263){ .fun = move_dash_to_dash_end_dash_of_dash_line1263, .env =  envinst1263  } );
                                struct funenv1315  temp1377 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1376.fun ( temp1376.env ,  (  ed2907 ) ,  ( temp1377.fun ( temp1377.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1285  temp1378 = ( (struct funenv1285){ .fun = insert_dash_empty_dash_row_dash_at1285, .env =  envinst1285  } );
                                ( temp1378.fun ( temp1378.env ,  (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al2909 ) ) );
                                struct List_3 *  currow2925 = ( (  get_dash_row1229 ) ( (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1246  temp1379 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  envinst1246  } );
                                struct funenv1315  temp1380 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1379.fun ( temp1379.env ,  (  ed2907 ) ,  ( (  size_dash_i32270 ) ( ( (  size1071 ) ( (  currow2925 ) ) ) ) ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1380.fun ( temp1380.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1285  temp1381 = ( (struct funenv1285){ .fun = insert_dash_empty_dash_row_dash_at1285, .env =  envinst1285  } );
                                ( temp1381.fun ( temp1381.env ,  (  ed2907 ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ,  (  al2909 ) ) );
                                struct funenv1263  temp1382 = ( (struct funenv1263){ .fun = move_dash_to_dash_end_dash_of_dash_line1263, .env =  envinst1263  } );
                                struct funenv1315  temp1383 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1382.fun ( temp1382.env ,  (  ed2907 ) ,  ( temp1383.fun ( temp1383.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed2907 ) .f_mode = ( ( Mode_783_Cmd ) ( ( (  mk1110 ) ( (  al2909 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed2907 ) .f_mode = ( ( Mode_783_SearchBox ) ( ( (  mk1110 ) ( (  al2909 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_841  dref2926 = ( ( * (  ed2907 ) ) .f_search_dash_term );
                                if ( dref2926.tag == Maybe_841_None_t ) {
                                }
                                else if ( dref2926.tag == Maybe_841_Just_t ) {
                                    struct funenv1291  temp1384 = ( (struct funenv1291){ .fun = find_dash_next_dash_occurence1291, .env =  envinst1291  } );
                                    struct Maybe_948  dref2928 = ( temp1384.fun ( temp1384.env ,  (  ed2907 ) ,  ( (  as_dash_char_dash_slice1111 ) ( ( & ( dref2926 .stuff .Maybe_841_Just_s .field0 ) ) ) ) ) );
                                    if ( dref2928.tag == Maybe_948_None_t ) {
                                    }
                                    else if ( dref2928.tag == Maybe_948_Just_t ) {
                                        struct funenv1246  temp1385 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  envinst1246  } );
                                        struct funenv1315  temp1386 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                        ( temp1385.fun ( temp1385.env ,  (  ed2907 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref2928 .stuff .Maybe_948_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1109 ) ( ( & ( dref2926 .stuff .Maybe_841_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref2928 .stuff .Maybe_948_Just_s .field0 ) .f_y ) ,  ( temp1386.fun ( temp1386.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                        (*  ed2907 ) .f_selected = ( ( Maybe_948_Just ) ( ( dref2928 .stuff .Maybe_948_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_841  dref2930 = ( ( * (  ed2907 ) ) .f_search_dash_term );
                                if ( dref2930.tag == Maybe_841_None_t ) {
                                }
                                else if ( dref2930.tag == Maybe_841_Just_t ) {
                                    struct funenv1298  temp1387 = ( (struct funenv1298){ .fun = find_dash_prev_dash_occurence1298, .env =  envinst1298  } );
                                    struct Maybe_948  dref2932 = ( temp1387.fun ( temp1387.env ,  (  ed2907 ) ,  ( (  as_dash_char_dash_slice1111 ) ( ( & ( dref2930 .stuff .Maybe_841_Just_s .field0 ) ) ) ) ) );
                                    if ( dref2932.tag == Maybe_948_None_t ) {
                                    }
                                    else if ( dref2932.tag == Maybe_948_Just_t ) {
                                        struct funenv1246  temp1388 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  envinst1246  } );
                                        struct funenv1315  temp1389 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                        ( temp1388.fun ( temp1388.env ,  (  ed2907 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref2932 .stuff .Maybe_948_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1109 ) ( ( & ( dref2930 .stuff .Maybe_841_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref2932 .stuff .Maybe_948_Just_s .field0 ) .f_y ) ,  ( temp1389.fun ( temp1389.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                        (*  ed2907 ) .f_selected = ( ( Maybe_948_Just ) ( ( dref2932 .stuff .Maybe_948_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe966 ) ( ( ( * (  ed2907 ) ) .f_selected ) ,  (  lam1390 ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1266 ) ( (  ed2907 ) ) ) ) ) {
                                    struct funenv1315  temp1391 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                    struct Dims_1247  dims2936 = ( temp1391.fun ( temp1391.env ,  (  ed2907 ) ,  (  tui2908 ) ) );
                                    struct Cursor_764  sel2937 = ( (  or_dash_else947 ) ( ( ( * (  ed2907 ) ) .f_selected ) ,  ( ( * (  ed2907 ) ) .f_cursor ) ) );
                                    struct funenv1252  temp1392 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                                    ( temp1392.fun ( temp1392.env ,  (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2936 ) ) );
                                    struct funenv1263  temp1393 = ( (struct funenv1263){ .fun = move_dash_to_dash_end_dash_of_dash_line1263, .env =  envinst1263  } );
                                    ( temp1393.fun ( temp1393.env ,  (  ed2907 ) ,  (  dims2936 ) ) );
                                    (*  ed2907 ) .f_selected = ( ( Maybe_948_Just ) ( (  sel2937 ) ) );
                                } else {
                                    struct funenv1263  temp1394 = ( (struct funenv1263){ .fun = move_dash_to_dash_end_dash_of_dash_line1263, .env =  envinst1263  } );
                                    struct funenv1315  temp1395 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                    ( temp1394.fun ( temp1394.env ,  (  ed2907 ) ,  ( temp1395.fun ( temp1395.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                    (*  ed2907 ) .f_selected = ( ( Maybe_948_Just ) ( ( (struct Cursor_764) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe967 ) ( ( ( * (  ed2907 ) ) .f_selected ) ,  (  lam1396 ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1315  temp1397 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                struct Dims_1247  dims2940 = ( temp1397.fun ( temp1397.env ,  (  ed2907 ) ,  (  tui2908 ) ) );
                                struct Cursor_764  first_dash_pos2941 = ( ( * (  ed2907 ) ) .f_cursor );
                                struct funenv1258  temp1398 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                ( temp1398.fun ( temp1398.env ,  (  ed2907 ) ,  (  dims2940 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) , ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at1235 ) ( (  ed2907 ) ,  (  first_dash_pos2941 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) ) ) ) {
                                    first_dash_pos2941 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1266 ) ( (  ed2907 ) ) ) ) {
                                    struct funenv1258  temp1399 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1399.fun ( temp1399.env ,  (  ed2907 ) ,  (  dims2940 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos2941 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  maybe968 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1400 ) ,  ( false ) ) ) ) {
                                    struct funenv1258  temp1401 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1401.fun ( temp1401.env ,  (  ed2907 ) ,  (  dims2940 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe969 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1402 ) ,  ( false ) ) ) ) {
                                    struct funenv1258  temp1403 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1403.fun ( temp1403.env ,  (  ed2907 ) ,  (  dims2940 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1225 ( (  first_dash_pos2941 ) , ( ( * (  ed2907 ) ) .f_cursor ) ) ) ) {
                                    struct funenv1254  temp1404 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                    ( temp1404.fun ( temp1404.env ,  (  ed2907 ) ,  (  dims2940 ) ) );
                                    ( (  set_dash_selection1242 ) ( (  ed2907 ) ,  ( ( Maybe_948_Just ) ( (  first_dash_pos2941 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1315  temp1405 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                struct Dims_1247  dims2946 = ( temp1405.fun ( temp1405.env ,  (  ed2907 ) ,  (  tui2908 ) ) );
                                struct Cursor_764  first_dash_pos2947 = ( ( * (  ed2907 ) ) .f_cursor );
                                struct funenv1258  temp1406 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                ( temp1406.fun ( temp1406.env ,  (  ed2907 ) ,  (  dims2946 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) , ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at1235 ) ( (  ed2907 ) ,  (  first_dash_pos2947 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) ) ) ) {
                                    first_dash_pos2947 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1266 ) ( (  ed2907 ) ) ) ) {
                                    struct funenv1258  temp1407 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1407.fun ( temp1407.env ,  (  ed2907 ) ,  (  dims2946 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos2947 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  maybe970 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1408 ) ,  ( false ) ) ) ) {
                                    struct funenv1258  temp1409 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1409.fun ( temp1409.env ,  (  ed2907 ) ,  (  dims2946 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe971 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1410 ) ,  ( false ) ) ) ) {
                                    struct funenv1258  temp1411 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                    if ( ( ! ( temp1411.fun ( temp1411.env ,  (  ed2907 ) ,  (  dims2946 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1225 ( (  first_dash_pos2947 ) , ( ( * (  ed2907 ) ) .f_cursor ) ) ) ) {
                                    struct funenv1254  temp1412 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                    ( temp1412.fun ( temp1412.env ,  (  ed2907 ) ,  (  dims2946 ) ) );
                                    ( (  set_dash_selection1242 ) ( (  ed2907 ) ,  ( ( Maybe_948_Just ) ( (  first_dash_pos2947 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref2918 .stuff .Key_522_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1315  temp1413 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                struct Dims_1247  dims2952 = ( temp1413.fun ( temp1413.env ,  (  ed2907 ) ,  (  tui2908 ) ) );
                                struct Cursor_764  first_dash_pos2953 = ( ( * (  ed2907 ) ) .f_cursor );
                                struct funenv1254  temp1414 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                ( temp1414.fun ( temp1414.env ,  (  ed2907 ) ,  (  dims2952 ) ) );
                                if ( ( !  eq49 ( ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) , ( (  fmap_dash_maybe961 ) ( ( (  char_dash_at1235 ) ( (  ed2907 ) ,  (  first_dash_pos2953 ) ) ) ,  (  is_dash_word_dash_char1290 ) ) ) ) ) ) {
                                    first_dash_pos2953 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1266 ) ( (  ed2907 ) ) ) ) {
                                    struct funenv1254  temp1415 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                    if ( ( ! ( temp1415.fun ( temp1415.env ,  (  ed2907 ) ,  (  dims2952 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos2953 = ( ( * (  ed2907 ) ) .f_cursor );
                                }
                                while ( ( (  maybe972 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1416 ) ,  ( false ) ) ) ) {
                                    struct funenv1254  temp1417 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                    if ( ( ! ( temp1417.fun ( temp1417.env ,  (  ed2907 ) ,  (  dims2952 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe973 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1418 ) ,  ( false ) ) ) ) {
                                    struct funenv1254  temp1419 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                                    if ( ( ! ( temp1419.fun ( temp1419.env ,  (  ed2907 ) ,  (  dims2952 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1225 ( (  first_dash_pos2953 ) , ( ( * (  ed2907 ) ) .f_cursor ) ) ) ) {
                                    if ( ( (  maybe974 ) ( ( (  char_dash_at_dash_cursor1236 ) ( (  ed2907 ) ) ) ,  (  lam1420 ) ,  ( true ) ) ) ) {
                                        struct funenv1258  temp1421 = ( (struct funenv1258){ .fun = move_dash_right1258, .env =  envinst1258  } );
                                        ( temp1421.fun ( temp1421.env ,  (  ed2907 ) ,  (  dims2952 ) ) );
                                    }
                                    ( (  set_dash_selection1242 ) ( (  ed2907 ) ,  ( ( Maybe_948_Just ) ( (  first_dash_pos2953 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  todo929 ) ( ) );
                        }
                    }
                }
                else if ( dref2918.tag == Key_522_Ctrl_t ) {
                    if ( (  eq48 ( ( dref2918 .stuff .Key_522_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed2907 ) .f_screen_dash_top = ( (  max767 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( ( ( * (  ed2907 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1252  temp1422 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                        struct funenv1315  temp1423 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                        ( temp1422.fun ( temp1422.env ,  (  ed2907 ) ,  (  op_dash_sub83 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1423.fun ( temp1423.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref2918 .stuff .Key_522_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed2907 ) .f_screen_dash_top = ( (  max767 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add82 ( ( ( * (  ed2907 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1252  temp1424 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                        struct funenv1315  temp1425 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                        ( temp1424.fun ( temp1424.env ,  (  ed2907 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1425.fun ( temp1425.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                    }
                }
                else if ( dref2918.tag == Key_522_Escape_t ) {
                    struct Mode_783  dref2961 = ( ( * (  ed2907 ) ) .f_mode );
                    if ( dref2961.tag == Mode_783_Normal_t ) {
                    }
                    else if ( dref2961.tag == Mode_783_Insert_t ) {
                        (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                    }
                    else if ( dref2961.tag == Mode_783_Cmd_t ) {
                        ( (  free1112 ) ( ( & ( dref2961 .stuff .Mode_783_Cmd_s .field0 ) ) ) );
                        (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                    }
                    else if ( dref2961.tag == Mode_783_SearchBox_t ) {
                        ( (  todo929 ) ( ) );
                    }
                    else if ( dref2961.tag == Mode_783_Select_t ) {
                        (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                    }
                }
                else if ( dref2918.tag == Key_522_Backspace_t ) {
                    struct Mode_783 *  dref2964 = ( & ( ( * (  ed2907 ) ) .f_mode ) );
                    if ( (* dref2964 ).tag == Mode_783_Normal_t ) {
                    }
                    else if ( (* dref2964 ).tag == Mode_783_Select_t ) {
                    }
                    else if ( (* dref2964 ).tag == Mode_783_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1254  temp1426 = ( (struct funenv1254){ .fun = move_dash_left1254, .env =  envinst1254  } );
                            struct funenv1315  temp1427 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                            ( temp1426.fun ( temp1426.env ,  (  ed2907 ) ,  ( temp1427.fun ( temp1427.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                            struct funenv1267  temp1428 = ( (struct funenv1267){ .fun = delete_dash_selected1267, .env =  envinst1267  } );
                            struct funenv1315  temp1429 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                            ( temp1428.fun ( temp1428.env ,  (  ed2907 ) ,  ( temp1429.fun ( temp1429.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                        }
                    }
                    else if ( (* dref2964 ).tag == Mode_783_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1109 ) ( ( & ( (* dref2964 ) .stuff .Mode_783_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1107  temp1430 = ( (struct funenv1107){ .fun = pop1107, .env =  envinst1107  } );
                            ( temp1430.fun ( temp1430.env ,  ( & ( (* dref2964 ) .stuff .Mode_783_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref2964 ).tag == Mode_783_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1109 ) ( ( & ( (* dref2964 ) .stuff .Mode_783_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1107  temp1431 = ( (struct funenv1107){ .fun = pop1107, .env =  envinst1107  } );
                            ( temp1431.fun ( temp1431.env ,  ( & ( (* dref2964 ) .stuff .Mode_783_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref2918.tag == Key_522_Enter_t ) {
                    struct Mode_783  dref2967 = ( ( * (  ed2907 ) ) .f_mode );
                    if ( dref2967.tag == Mode_783_Normal_t ) {
                    }
                    else if ( dref2967.tag == Mode_783_Select_t ) {
                    }
                    else if ( dref2967.tag == Mode_783_Insert_t ) {
                        int32_t  cx2968 = ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1432 = ( (  mk1038 ) ( (  al2909 ) ) );
                        struct List_3 *  nurow2969 = ( &temp1432 );
                        struct TakeWhile_481  rowws2970 = ( (  indent_dash_on_dash_row1231 ) ( (  ed2907 ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars2971 = ( (  size_dash_i32270 ) ( ( (  count723 ) ( (  rowws2970 ) ) ) ) );
                        struct funenv1060  temp1433 = ( (struct funenv1060){ .fun = add_dash_all1060, .env =  envinst1060  } );
                        ( temp1433.fun ( temp1433.env ,  (  nurow2969 ) ,  (  rowws2970 ) ) );
                        struct List_3 *  cur_dash_row2972 = ( (  cursor_dash_row1230 ) ( (  ed2907 ) ) );
                        struct funenv1058  temp1434 = ( (struct funenv1058){ .fun = add_dash_all1058, .env =  envinst1058  } );
                        ( temp1434.fun ( temp1434.env ,  (  nurow2969 ) ,  ( (  subslice292 ) ( ( (  to_dash_slice1068 ) ( ( * (  cur_dash_row2972 ) ) ) ) ,  ( (  i32_dash_size268 ) ( (  cx2968 ) ) ) ,  ( ( * (  cur_dash_row2972 ) ) .f_count ) ) ) ) );
                        ( (  trim1062 ) ( (  cur_dash_row2972 ) ,  ( (  i32_dash_size268 ) ( (  cx2968 ) ) ) ) );
                        struct funenv1046  temp1435 = ( (struct funenv1046){ .fun = insert1046, .env =  envinst1046  } );
                        ( temp1435.fun ( temp1435.env ,  ( & ( ( * (  ed2907 ) ) .f_current_dash_file ) ) ,  (  op_dash_add93 ( ( (  i32_dash_size268 ) ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow2969 ) ) ) );
                        struct funenv1246  temp1436 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  envinst1246  } );
                        struct funenv1315  temp1437 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                        ( temp1436.fun ( temp1436.env ,  (  ed2907 ) ,  (  offchars2971 ) ,  (  op_dash_add82 ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1437.fun ( temp1437.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                    }
                    else if ( dref2967.tag == Mode_783_Cmd_t ) {
                        struct DynStr_131  s2974 = ( (  as_dash_str789 ) ( ( & ( dref2967 .stuff .Mode_783_Cmd_s .field0 ) ) ) );
                        struct funenv1337  temp1438 = ( (struct funenv1337){ .fun = run_dash_cmd1337, .env =  envinst1337  } );
                        struct funenv1315  temp1439 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                        ( temp1438.fun ( temp1438.env ,  (  ed2907 ) ,  (  s2974 ) ,  ( temp1439.fun ( temp1439.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ,  (  al2909 ) ) );
                        ( (  free1112 ) ( ( & ( dref2967 .stuff .Mode_783_Cmd_s .field0 ) ) ) );
                        (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                    }
                    else if ( dref2967.tag == Mode_783_SearchBox_t ) {
                        struct Maybe_841  dref2976 = ( ( * (  ed2907 ) ) .f_search_dash_term );
                        if ( dref2976.tag == Maybe_841_Just_t ) {
                            ( (  free1112 ) ( ( & ( dref2976 .stuff .Maybe_841_Just_s .field0 ) ) ) );
                        }
                        else if ( dref2976.tag == Maybe_841_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1109 ) ( ( & ( dref2967 .stuff .Mode_783_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed2907 ) .f_search_dash_term = ( ( Maybe_841_Just ) ( ( dref2967 .stuff .Mode_783_SearchBox_s .field0 ) ) );
                            struct funenv1291  temp1440 = ( (struct funenv1291){ .fun = find_dash_next_dash_occurence1291, .env =  envinst1291  } );
                            struct Maybe_948  dref2978 = ( temp1440.fun ( temp1440.env ,  (  ed2907 ) ,  ( (  as_dash_char_dash_slice1111 ) ( ( & ( dref2967 .stuff .Mode_783_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref2978.tag == Maybe_948_None_t ) {
                            }
                            else if ( dref2978.tag == Maybe_948_Just_t ) {
                                struct funenv1246  temp1441 = ( (struct funenv1246){ .fun = move_dash_to1246, .env =  envinst1246  } );
                                struct funenv1315  temp1442 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                                ( temp1441.fun ( temp1441.env ,  (  ed2907 ) ,  (  op_dash_sub83 ( (  op_dash_add82 ( ( ( dref2978 .stuff .Maybe_948_Just_s .field0 ) .f_x ) , ( (  size_dash_i32270 ) ( ( (  count1109 ) ( ( & ( dref2967 .stuff .Mode_783_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref2978 .stuff .Maybe_948_Just_s .field0 ) .f_y ) ,  ( temp1442.fun ( temp1442.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                                (*  ed2907 ) .f_selected = ( ( Maybe_948_Just ) ( ( dref2978 .stuff .Maybe_948_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed2907 ) .f_search_dash_term = ( (struct Maybe_841) { .tag = Maybe_841_None_t } );
                        }
                        (*  ed2907 ) .f_mode = ( (struct Mode_783) { .tag = Mode_783_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref2916.tag == InputEvent_521_Mouse_t ) {
                enum MouseButton_144  dref2981 = ( ( dref2916 .stuff .InputEvent_521_Mouse_s .field0 ) .f_button );
                switch (  dref2981 ) {
                    case MouseButton_144_MouseLeft : {
                        if ( ( ( dref2916 .stuff .InputEvent_521_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt2982 = ( (  size_dash_i32270 ) ( ( ( ( * (  ed2907 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy2983 = ( (  clamp770 ) ( (  op_dash_add82 ( ( ( * (  ed2907 ) ) .f_screen_dash_top ) , ( ( dref2916 .stuff .InputEvent_521_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub83 ( (  linecnt2982 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1313  temp1443 = ( (struct funenv1313){ .fun = left_dash_offset1313, .env =  envinst1313  } );
                            struct Visual_958  vx2984 = ( ( Visual_958_Visual ) ( (  op_dash_sub83 ( ( ( dref2916 .stuff .InputEvent_521_Mouse_s .field0 ) .f_x ) , ( ( temp1443.fun ( temp1443.env ,  (  ed2907 ) ) ) .f_total_dash_offset ) ) ) ) );
                            struct funenv1238  temp1444 = ( (struct funenv1238){ .fun = visual_dash_x_dash_to_dash_x1238, .env =  envinst1238  } );
                            int32_t  cx2985 = ( temp1444.fun ( temp1444.env ,  (  ed2907 ) ,  (  vx2984 ) ,  (  cy2983 ) ) );
                            (*  ed2907 ) .f_cursor .f_x = (  cx2985 );
                            (*  ed2907 ) .f_goal_dash_x = (  vx2984 );
                            struct funenv1252  temp1445 = ( (struct funenv1252){ .fun = move_dash_to_dash_row1252, .env =  envinst1252  } );
                            struct funenv1315  temp1446 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                            ( temp1445.fun ( temp1445.env ,  (  ed2907 ) ,  (  cy2983 ) ,  ( temp1446.fun ( temp1446.env ,  (  ed2907 ) ,  (  tui2908 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable931 ) ( ) );
            }
        }
        struct funenv1186  temp1447 = ( (struct funenv1186){ .fun = resize_dash_screen_dash_if_dash_needed1186, .env =  envinst1186  } );
        bool  resized2986 = ( temp1447.fun ( temp1447.env ,  (  screen2910 ) ) );
        if ( ( ( ( (  resized2986 ) || (  cmp75 ( (  events2913 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw2912 ) ) || ( (  is_dash_just953 ) ( ( ( * (  ed2907 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw2912 = ( false );
            ( (  clear_dash_screen1176 ) ( (  screen2910 ) ) );
            ( (  set_dash_screen_dash_fg1188 ) ( (  screen2910 ) ,  ( ( * ( ( * (  ed2907 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1189 ) ( (  screen2910 ) ,  ( ( * ( ( * (  ed2907 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1192 ) ( (  screen2910 ) ) );
            struct funenv1317  temp1448 = ( (struct funenv1317){ .fun = render_dash_editor1317, .env =  envinst1317  } );
            ( temp1448.fun ( temp1448.env ,  (  screen2910 ) ,  (  ed2907 ) ) );
            bool  debug2987 = ( true );
            if ( (  debug2987 ) ) {
                ( (  draw_dash_str_dash_right1209 ) ( (  screen2910 ) ,  ( ( StrConcat_782_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed2907 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1210 ) ( (  screen2910 ) ,  ( ( StrConcat_798_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui2908 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env956 envinst956 = {
                    .ed2907 =  ed2907 ,
                };
                struct Maybe_346  charcode2992 = ( (  fmap_dash_maybe962 ) ( ( (  and_dash_maybe955 ) ( ( (  try_dash_get1034 ) ( ( & ( ( * (  ed2907 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size268 ) ( ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv956){ .fun = lam956, .env = envinst956 } ) ) ) ,  (  lam1449 ) ) );
                ( (  draw_dash_str_dash_right1211 ) ( (  screen2910 ) ,  ( ( StrConcat_800_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode2992 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1212 ) ( (  screen2910 ) ,  ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( ( StrConcat_828_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount2993 = ( ( * ( (  get_dash_row1229 ) ( (  ed2907 ) ,  ( ( ( * (  ed2907 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1213 ) ( (  screen2910 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount2993 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx2994 = ( (  from_dash_visual1226 ) ( ( ( * (  ed2907 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1214 ) ( (  screen2910 ) ,  ( ( StrConcat_828_StrConcat ) ( ( "goal x: " ) ,  (  gx2994 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1315  temp1450 = ( (struct funenv1315){ .fun = screen_dash_dims1315, .env =  envinst1315  } );
                struct Dims_1247  dim2995 = ( temp1450.fun ( temp1450.env ,  (  ed2907 ) ,  (  tui2908 ) ) );
                ( (  draw_dash_str_dash_right1215 ) ( (  screen2910 ) ,  ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( ( StrConcat_828_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed2907 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim2995 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1216 ) ( (  screen2910 ) ,  ( ( StrConcat_840_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed2907 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1217 ) ( (  screen2910 ) ,  ( ( StrConcat_855_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed2907 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
            }
            ( (  update_dash_animation1332 ) ( ( & ( ( * (  ed2907 ) ) .f_anim ) ) ,  (  screen2910 ) ) );
            ( (  render_dash_screen1180 ) ( (  screen2910 ) ) );
        }
        ( (  sync1154 ) ( (  tui2908 ) ) );
    }
    ( (  free_dash_screen1175 ) ( (  screen2910 ) ) );
    ( (  deinit1158 ) ( (  tui2908 ) ) );
}
