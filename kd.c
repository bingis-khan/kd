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
            char  field0;
        } Maybe_50_Just_s;
    } stuff;
};

static struct Maybe_50 Maybe_50_Just (  char  field0 ) {
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
        return (  eq48 ( ( dref137 .field0 .stuff .Maybe_50_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

struct Maybe_53 {
    enum {
        Maybe_53_None_t,
        Maybe_53_Just_t,
    } tag;
    union {
        struct {
            bool  field0;
        } Maybe_53_Just_s;
    } stuff;
};

static struct Maybe_53 Maybe_53_Just (  bool  field0 ) {
    return ( struct Maybe_53 ) { .tag = Maybe_53_Just_t, .stuff = { .Maybe_53_Just_s = { .field0 = field0 } } };
};

struct Tuple2_54 {
    struct Maybe_53  field0;
    struct Maybe_53  field1;
};

static struct Tuple2_54 Tuple2_54_Tuple2 (  struct Maybe_53  field0 ,  struct Maybe_53  field1 ) {
    return ( struct Tuple2_54 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq52 (    struct Maybe_53  l134 ,    struct Maybe_53  r136 ) {
    struct Tuple2_54  dref137 = ( ( Tuple2_54_Tuple2 ) ( (  l134 ) ,  (  r136 ) ) );
    if ( dref137 .field0.tag == Maybe_53_None_t && dref137 .field1.tag == Maybe_53_None_t ) {
        return ( true );
    }
    else if ( dref137 .field0.tag == Maybe_53_Just_t && dref137 .field1.tag == Maybe_53_Just_t ) {
        return (  eq46 ( ( dref137 .field0 .stuff .Maybe_53_Just_s .field0 ) , ( dref137 .field1 .stuff .Maybe_53_Just_s .field0 ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

enum Color8_58 {
    Color8_58_Black8,
    Color8_58_Red8,
    Color8_58_Green8,
    Color8_58_Yellow8,
    Color8_58_Blue8,
    Color8_58_Magenta8,
    Color8_58_Cyan8,
    Color8_58_White8,
};

enum Color16_59 {
    Color16_59_Black16,
    Color16_59_Red16,
    Color16_59_Green16,
    Color16_59_Yellow16,
    Color16_59_Blue16,
    Color16_59_Magenta16,
    Color16_59_Cyan16,
    Color16_59_White16,
    Color16_59_BrightBlack16,
    Color16_59_BrightRed16,
    Color16_59_BrightGreen16,
    Color16_59_BrightYellow16,
    Color16_59_BrightBlue16,
    Color16_59_BrightMagenta16,
    Color16_59_BrightCyan16,
    Color16_59_BrightWhite16,
};

struct RGB_60 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_57 {
    enum {
        Color_57_ColorDefault_t,
        Color_57_Color8_t,
        Color_57_Color16_t,
        Color_57_Color256_t,
        Color_57_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_58  field0;
        } Color_57_Color8_s;
        struct {
            enum Color16_59  field0;
        } Color_57_Color16_s;
        struct {
            uint8_t  field0;
        } Color_57_Color256_s;
        struct {
            struct RGB_60  field0;
        } Color_57_ColorRGB_s;
    } stuff;
};

static struct Color_57 Color_57_Color8 (  enum Color8_58  field0 ) {
    return ( struct Color_57 ) { .tag = Color_57_Color8_t, .stuff = { .Color_57_Color8_s = { .field0 = field0 } } };
};

static struct Color_57 Color_57_Color16 (  enum Color16_59  field0 ) {
    return ( struct Color_57 ) { .tag = Color_57_Color16_t, .stuff = { .Color_57_Color16_s = { .field0 = field0 } } };
};

static struct Color_57 Color_57_Color256 (  uint8_t  field0 ) {
    return ( struct Color_57 ) { .tag = Color_57_Color256_t, .stuff = { .Color_57_Color256_s = { .field0 = field0 } } };
};

static struct Color_57 Color_57_ColorRGB (  struct RGB_60  field0 ) {
    return ( struct Color_57 ) { .tag = Color_57_ColorRGB_t, .stuff = { .Color_57_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_56 {
    char  f_c;
    struct Color_57  f_fg;
    struct Color_57  f_bg;
};

struct Tuple2_63 {
    struct Color_57  field0;
    struct Color_57  field1;
};

static struct Tuple2_63 Tuple2_63_Tuple2 (  struct Color_57  field0 ,  struct Color_57  field1 ) {
    return ( struct Tuple2_63 ) { .field0 = field0 ,  .field1 = field1 };
};

static  void *   cast_dash_ptr69 (    int32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  size_t   size_dash_of70 (    int32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  int32_t   zeroed67 (  ) {
    int32_t  temp68;
    int32_t  x473 = (  temp68 );
    ( ( memset ) ( ( (  cast_dash_ptr69 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of70 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Color8_58 *   cast71 (    int32_t *  x463 ) {
    return ( (enum Color8_58 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed65 (    enum Color8_58  x476 ) {
    int32_t  temp66 = ( (  zeroed67 ) ( ) );
    int32_t *  y477 = ( &temp66 );
    enum Color8_58 *  yp478 = ( (  cast71 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq64 (    enum Color8_58  l1855 ,    enum Color8_58  r1857 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed65 ) ( (  l1855 ) ) ) ) , ( (  cast_dash_on_dash_zeroed65 ) ( (  r1857 ) ) ) ) );
}

static  enum Color16_59 *   cast75 (    int32_t *  x463 ) {
    return ( (enum Color16_59 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed73 (    enum Color16_59  x476 ) {
    int32_t  temp74 = ( (  zeroed67 ) ( ) );
    int32_t *  y477 = ( &temp74 );
    enum Color16_59 *  yp478 = ( (  cast75 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq72 (    enum Color16_59  l1861 ,    enum Color16_59  r1863 ) {
    return (  eq41 ( ( ( (  cast_dash_on_dash_zeroed73 ) ( (  l1861 ) ) ) ) , ( (  cast_dash_on_dash_zeroed73 ) ( (  r1863 ) ) ) ) );
}

static  bool   eq76 (    struct RGB_60  l1891 ,    struct RGB_60  r1893 ) {
    return ( ( (  eq43 ( ( (  l1891 ) .f_r ) , ( (  r1893 ) .f_r ) ) ) && (  eq43 ( ( (  l1891 ) .f_g ) , ( (  r1893 ) .f_g ) ) ) ) && (  eq43 ( ( (  l1891 ) .f_b ) , ( (  r1893 ) .f_b ) ) ) );
}

static  bool   eq62 (    struct Color_57  l1914 ,    struct Color_57  r1916 ) {
    return ( {  struct Tuple2_63  dref1917 = ( ( Tuple2_63_Tuple2 ) ( (  l1914 ) ,  (  r1916 ) ) ) ; dref1917 .field0.tag == Color_57_ColorDefault_t && dref1917 .field1.tag == Color_57_ColorDefault_t ? ( true ) : dref1917 .field0.tag == Color_57_Color8_t && dref1917 .field1.tag == Color_57_Color8_t ? (  eq64 ( ( dref1917 .field0 .stuff .Color_57_Color8_s .field0 ) , ( dref1917 .field1 .stuff .Color_57_Color8_s .field0 ) ) ) : dref1917 .field0.tag == Color_57_Color16_t && dref1917 .field1.tag == Color_57_Color16_t ? (  eq72 ( ( dref1917 .field0 .stuff .Color_57_Color16_s .field0 ) , ( dref1917 .field1 .stuff .Color_57_Color16_s .field0 ) ) ) : dref1917 .field0.tag == Color_57_Color256_t && dref1917 .field1.tag == Color_57_Color256_t ? (  eq43 ( ( dref1917 .field0 .stuff .Color_57_Color256_s .field0 ) , ( dref1917 .field1 .stuff .Color_57_Color256_s .field0 ) ) ) : dref1917 .field0.tag == Color_57_ColorRGB_t && dref1917 .field1.tag == Color_57_ColorRGB_t ? (  eq76 ( ( dref1917 .field0 .stuff .Color_57_ColorRGB_s .field0 ) , ( dref1917 .field1 .stuff .Color_57_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq61 (    struct Cell_56  l2342 ,    struct Cell_56  r2344 ) {
    if ( ( !  eq48 ( ( (  l2342 ) .f_c ) , ( (  r2344 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq62 ( ( (  l2342 ) .f_fg ) , ( (  r2344 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq62 ( ( (  l2342 ) .f_bg ) , ( (  r2344 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq55 (    struct Cell_56 *  dref141 ,    struct Cell_56 *  dref143 ) {
    return (  eq61 ( ( (* dref141 ) ) , ( (* dref143 ) ) ) );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp77 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp78 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp79 (    uint32_t  l162 ,    uint32_t  r164 ) {
    return ( builtin_uint32_tcmp( (  l162 ) , (  r164 ) ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_10   cmp80 (    uint8_t  l167 ,    uint8_t  r169 ) {
    return ( builtin_uint8_tcmp( (  l167 ) , (  r169 ) ) );
}

static  int64_t   op_dash_add81 (    int64_t  l172 ,    int64_t  r174 ) {
    return ( (  l172 ) + (  r174 ) );
}

static  int64_t   op_dash_sub82 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) - (  r179 ) );
}

static  int64_t   op_dash_div83 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) / (  r189 ) );
}

static  int64_t   op_dash_neg84 (    int64_t  l192 ) {
    return ( (  from_dash_integral35 ( 0 ) ) - (  l192 ) );
}

static  int32_t   op_dash_add85 (    int32_t  l195 ,    int32_t  r197 ) {
    return ( (  l195 ) + (  r197 ) );
}

static  int32_t   op_dash_sub86 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) - (  r202 ) );
}

static  int32_t   op_dash_mul87 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) * (  r207 ) );
}

static  int32_t   op_dash_div88 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) / (  r212 ) );
}

static  int32_t   op_dash_neg89 (    int32_t  x215 ) {
    return ( (  from_dash_integral29 ( 0 ) ) - (  x215 ) );
}

static  uint32_t   op_dash_add90 (    uint32_t  l218 ,    uint32_t  r220 ) {
    return ( (  l218 ) + (  r220 ) );
}

static  uint32_t   op_dash_sub91 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) - (  r225 ) );
}

static  uint32_t   op_dash_mul92 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) * (  r230 ) );
}

static  uint32_t   op_dash_div93 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) / (  r235 ) );
}

static  uint8_t   op_dash_add94 (    uint8_t  l238 ,    uint8_t  r240 ) {
    return ( (  l238 ) + (  r240 ) );
}

static  uint8_t   op_dash_sub95 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) - (  r245 ) );
}

static  size_t   op_dash_add96 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub97 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul98 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

static  size_t   op_dash_div99 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) / (  r275 ) );
}

struct Array_102 {
    uint32_t _arr [4];
};

struct SmolArray_101 {
    struct Array_102  f_arr;
};

static  struct SmolArray_101   from_dash_listlike100 (    struct Array_102  arr301 ) {
    return ( (struct SmolArray_101) { .f_arr = (  arr301 ) } );
}

struct Array_105 {
    uint32_t _arr [5];
};

struct SmolArray_104 {
    struct Array_105  f_arr;
};

static  struct SmolArray_104   from_dash_listlike103 (    struct Array_105  arr301 ) {
    return ( (struct SmolArray_104) { .f_arr = (  arr301 ) } );
}

struct Array_108 {
    uint32_t _arr [1];
};

struct SmolArray_107 {
    struct Array_108  f_arr;
};

static  struct SmolArray_107   from_dash_listlike106 (    struct Array_108  arr301 ) {
    return ( (struct SmolArray_107) { .f_arr = (  arr301 ) } );
}

static  int32_t   clock_dash_monotonic109 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   seek_dash_set110 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  int32_t   seek_dash_end111 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  int32_t   stdout_dash_fileno112 (  ) {
    return (  from_dash_integral29 ( 1 ) );
}

static  int32_t   stdin_dash_fileno113 (  ) {
    return (  from_dash_integral29 ( 0 ) );
}

static  uint32_t   echo114 (  ) {
    return (  from_dash_integral36 ( 8 ) );
}

static  uint32_t   icanon115 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   isig116 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   iexten117 (  ) {
    return (  from_dash_integral36 ( 32768 ) );
}

static  uint32_t   brkint118 (  ) {
    return (  from_dash_integral36 ( 2 ) );
}

static  uint32_t   icrnl119 (  ) {
    return (  from_dash_integral36 ( 256 ) );
}

static  uint32_t   inpck120 (  ) {
    return (  from_dash_integral36 ( 16 ) );
}

static  uint32_t   istrip121 (  ) {
    return (  from_dash_integral36 ( 32 ) );
}

static  uint32_t   ixon122 (  ) {
    return (  from_dash_integral36 ( 1024 ) );
}

static  uint32_t   opost123 (  ) {
    return (  from_dash_integral36 ( 1 ) );
}

static  uint32_t   cs8124 (  ) {
    return (  from_dash_integral36 ( 48 ) );
}

static  size_t   vmin125 (  ) {
    return (  from_dash_integral11 ( 6 ) );
}

static  size_t   vtime126 (  ) {
    return (  from_dash_integral11 ( 5 ) );
}

static  int32_t   tcsa_dash_flush127 (  ) {
    return (  from_dash_integral29 ( 2 ) );
}

static  uint64_t   tiocgwinsz128 (  ) {
    return (  from_dash_integral39 ( 21523 ) );
}

static  const char*   undefined129 (  ) {
    const char*  temp130;
    return (  temp130 );
}

static  char   undefined131 (  ) {
    char  temp132;
    return (  temp132 );
}

struct DynStr_134 {
    struct Slice_5  f_contents;
};

static  struct DynStr_134   undefined133 (  ) {
    struct DynStr_134  temp135;
    return (  temp135 );
}

static  struct timespec   undefined136 (  ) {
    struct timespec  temp137;
    return (  temp137 );
}

struct Array_140 {
    uint8_t _arr [32];
};

struct Termios_139 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_140  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_139   undefined138 (  ) {
    struct Termios_139  temp141;
    return (  temp141 );
}

static  struct Cell_56   undefined142 (  ) {
    struct Cell_56  temp143;
    return (  temp143 );
}

static  uint8_t   undefined144 (  ) {
    uint8_t  temp145;
    return (  temp145 );
}

enum MouseButton_147 {
    MouseButton_147_MouseLeft,
    MouseButton_147_MouseMiddle,
    MouseButton_147_MouseRight,
    MouseButton_147_ScrollUp,
    MouseButton_147_ScrollDown,
};

static  enum MouseButton_147   undefined146 (  ) {
    enum MouseButton_147  temp148;
    return (  temp148 );
}

static  bool   undefined149 (  ) {
    bool  temp150;
    return (  temp150 );
}

static  enum Unit_13   undefined151 (  ) {
    enum Unit_13  temp152;
    return (  temp152 );
}

static  struct Cell_56 *   undefined153 (  ) {
    struct Cell_56 *  temp154;
    return (  temp154 );
}

static  const char* *   offset_dash_ptr155 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp156;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp156 ) ) ) ) ) ) ) ) );
}

static  struct List_3 *   offset_dash_ptr157 (    struct List_3 *  x450 ,    int64_t  count452 ) {
    struct List_3  temp158;
    return ( (struct List_3 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp158 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr159 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp160;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp160 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr161 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp162;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp162 ) ) ) ) ) ) ) ) );
}

static  struct Cell_56 *   offset_dash_ptr163 (    struct Cell_56 *  x450 ,    int64_t  count452 ) {
    struct Cell_56  temp164;
    return ( (struct Cell_56 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul32 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp164 ) ) ) ) ) ) ) ) );
}

struct TypeSize_166 {
    size_t  f_size;
};

static  struct TypeSize_166   get_dash_typesize165 (  ) {
    struct List_3  temp167;
    return ( (struct TypeSize_166) { .f_size = ( sizeof( ( (  temp167 ) ) ) ) } );
}

struct TypeSize_169 {
    size_t  f_size;
};

static  struct TypeSize_169   get_dash_typesize168 (  ) {
    char  temp170;
    return ( (struct TypeSize_169) { .f_size = ( sizeof( ( (  temp170 ) ) ) ) } );
}

struct TypeSize_172 {
    size_t  f_size;
};

static  struct TypeSize_172   get_dash_typesize171 (  ) {
    struct Cell_56  temp173;
    return ( (struct TypeSize_172) { .f_size = ( sizeof( ( (  temp173 ) ) ) ) } );
}

static  size_t   size_dash_of174 (    struct List_3 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of175 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of176 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of177 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of178 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Winsize_180 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of179 (    struct Winsize_180  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of181 (    enum Unit_13 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of182 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_184 {
    char _arr [32];
};

static  size_t   size_dash_of183 (    struct Array_184  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of185 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of186 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  char *   cast187 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  const char*   cast188 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  uint8_t *   cast189 (    struct Array_140 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint32_t *   cast190 (    struct Array_102 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast191 (    struct Array_105 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast192 (    struct Array_108 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint16_t *   cast193 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  enum Unit_13 *   cast194 (    const char*  x463 ) {
    return ( (enum Unit_13 * ) (  x463 ) );
}

static  uint32_t *   cast195 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  char *   cast196 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char *   cast197 (    struct Array_184 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  uint8_t   cast198 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  char   cast199 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint8_t *   cast200 (    int64_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  int32_t   cast201 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  uint8_t *   cast202 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  char   cast203 (    uint32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  char   cast204 (    size_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint32_t *   cast205 (    int64_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr206 (    struct List_3 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   cast_dash_ptr207 (    void *  p466 ) {
    return ( (struct List_3 * ) (  p466 ) );
}

static  void *   cast_dash_ptr208 (    struct List_3 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr209 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr210 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr211 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr212 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr213 (    struct Termios_139 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  void *   cast_dash_ptr214 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr215 (    struct Winsize_180 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr216 (    enum Unit_13 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr217 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct Cell_56 *   cast_dash_ptr218 (    void *  p466 ) {
    return ( (struct Cell_56 * ) (  p466 ) );
}

static  void *   cast_dash_ptr219 (    struct Array_184 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr220 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_222 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr221 (    struct Pollfd_222 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr223 (    enum Unit_13 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr224 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr225 (    struct Cell_56 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct List_3 *   zeroed226 (  ) {
    struct List_3 *  temp227;
    struct List_3 *  x473 = (  temp227 );
    ( ( memset ) ( ( (  cast_dash_ptr206 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of174 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed228 (  ) {
    char *  temp229;
    char *  x473 = (  temp229 );
    ( ( memset ) ( ( (  cast_dash_ptr209 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of175 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed230 (  ) {
    char  temp231;
    char  x473 = (  temp231 );
    ( ( memset ) ( ( (  cast_dash_ptr210 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of176 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed232 (  ) {
    FILE *  temp233;
    FILE *  x473 = (  temp233 );
    ( ( memset ) ( ( (  cast_dash_ptr212 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of177 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed234 (  ) {
    uint32_t  temp235;
    uint32_t  x473 = (  temp235 );
    ( ( memset ) ( ( (  cast_dash_ptr214 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of178 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Winsize_180   zeroed236 (  ) {
    struct Winsize_180  temp237;
    struct Winsize_180  x473 = (  temp237 );
    ( ( memset ) ( ( (  cast_dash_ptr215 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of179 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_13 *   zeroed238 (  ) {
    enum Unit_13 *  temp239;
    enum Unit_13 *  x473 = (  temp239 );
    ( ( memset ) ( ( (  cast_dash_ptr216 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of181 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed240 (  ) {
    size_t  temp241;
    size_t  x473 = (  temp241 );
    ( ( memset ) ( ( (  cast_dash_ptr217 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of182 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_184   zeroed242 (  ) {
    struct Array_184  temp243;
    struct Array_184  x473 = (  temp243 );
    ( ( memset ) ( ( (  cast_dash_ptr219 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of183 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed244 (  ) {
    int64_t  temp245;
    int64_t  x473 = (  temp245 );
    ( ( memset ) ( ( (  cast_dash_ptr220 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of185 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed246 (  ) {
    struct timespec *  temp247;
    struct timespec *  x473 = (  temp247 );
    ( ( memset ) ( ( (  cast_dash_ptr224 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_of186 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed248 (    uint16_t  x476 ) {
    uint32_t  temp249 = ( (  zeroed234 ) ( ) );
    uint32_t *  y477 = ( &temp249 );
    uint16_t *  yp478 = ( (  cast193 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed250 (    uint32_t  x476 ) {
    size_t  temp251 = ( (  zeroed240 ) ( ) );
    size_t *  y477 = ( &temp251 );
    uint32_t *  yp478 = ( (  cast195 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed252 (    char  x476 ) {
    int32_t  temp253 = ( (  zeroed67 ) ( ) );
    int32_t *  y477 = ( &temp253 );
    char *  yp478 = ( (  cast196 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed254 (    uint8_t  x476 ) {
    int64_t  temp255 = ( (  zeroed244 ) ( ) );
    int64_t *  y477 = ( &temp255 );
    uint8_t *  yp478 = ( (  cast200 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed256 (    uint8_t  x476 ) {
    int32_t  temp257 = ( (  zeroed67 ) ( ) );
    int32_t *  y477 = ( &temp257 );
    uint8_t *  yp478 = ( (  cast202 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed258 (    uint32_t  x476 ) {
    int64_t  temp259 = ( (  zeroed244 ) ( ) );
    int64_t *  y477 = ( &temp259 );
    uint32_t *  yp478 = ( (  cast205 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  struct List_3 *   null_dash_ptr260 (  ) {
    return ( (  zeroed226 ) ( ) );
}

static  char *   null_dash_ptr261 (  ) {
    return ( (  zeroed228 ) ( ) );
}

static  FILE *   null_dash_ptr262 (  ) {
    return ( (  zeroed232 ) ( ) );
}

static  enum Unit_13 *   null_dash_ptr263 (  ) {
    return ( (  zeroed238 ) ( ) );
}

static  struct timespec *   null_dash_ptr264 (  ) {
    return ( (  zeroed246 ) ( ) );
}

static  bool   is_dash_ptr_dash_null265 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr262 ) ( ) ) );
}

static  bool   ptr_dash_eq266 (    enum Unit_13 *  l488 ,    enum Unit_13 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_268 {
    enum {
        Maybe_268_None_t,
        Maybe_268_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_268_Just_s;
    } stuff;
};

static struct Maybe_268 Maybe_268_Just (  const char*  field0 ) {
    return ( struct Maybe_268 ) { .tag = Maybe_268_Just_t, .stuff = { .Maybe_268_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_268   from_dash_nullable_dash_c_dash_str267 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq266 ) ( ( (  cast194 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr263 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_268) { .tag = Maybe_268_None_t } );
    } else {
        return ( ( Maybe_268_Just ) ( (  s493 ) ) );
    }
}

static  uint32_t   i32_dash_u32269 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64270 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size271 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  int32_t   i64_dash_i32272 (    int64_t  x511 ) {
    return ( (int32_t ) (  x511 ) );
}

static  int32_t   size_dash_i32273 (    size_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   u16_dash_u32274 (    uint16_t  x520 ) {
    return ( (  cast_dash_on_dash_zeroed248 ) ( (  x520 ) ) );
}

static  size_t   u32_dash_size275 (    uint32_t  x526 ) {
    return ( (  cast_dash_on_dash_zeroed250 ) ( (  x526 ) ) );
}

static  int64_t   u32_dash_i64276 (    uint32_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed258 ) ( (  x529 ) ) );
}

static  int32_t   u32_dash_i32277 (    uint32_t  x535 ) {
    return ( (  cast201 ) ( (  x535 ) ) );
}

static  int64_t   u8_dash_i64278 (    uint8_t  x541 ) {
    return ( (  cast_dash_on_dash_zeroed254 ) ( (  x541 ) ) );
}

static  int32_t   u8_dash_i32279 (    uint8_t  x544 ) {
    return ( (  cast_dash_on_dash_zeroed256 ) ( (  x544 ) ) );
}

struct Slice_282 {
    struct List_3 *  f_ptr;
    size_t  f_count;
};

struct SliceIter_281 {
    struct Slice_282  f_slice;
    size_t  f_current_dash_offset;
};

struct List_283 {
    enum CAllocator_4  f_al;
    struct Slice_282  f_elements;
    size_t  f_count;
};

static  struct SliceIter_281   into_dash_iter285 (    struct Slice_282  self1380 ) {
    return ( (struct SliceIter_281) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  size_t   min287 (    size_t  l965 ,    size_t  r967 ) {
    if ( (  cmp9 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  struct Slice_282   subslice286 (    struct Slice_282  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    struct List_3 *  begin_dash_ptr1366 = ( (  offset_dash_ptr157 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_282) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub97 ( ( (  min287 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_282) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_281   into_dash_iter284 (    struct List_283  self1689 ) {
    return ( (  into_dash_iter285 ) ( ( (  subslice286 ) ( ( (  self1689 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1689 ) .f_count ) ) ) ) );
}

static  struct SliceIter_281   into_dash_iter280 (    struct List_283 *  self547 ) {
    return ( (  into_dash_iter284 ) ( ( * (  self547 ) ) ) );
}

struct SliceIter_290 {
    struct Slice_5  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_289 {
    struct SliceIter_290  f_s;
};

static  struct Scanner_289   into_dash_iter291 (    struct Scanner_289  self2240 ) {
    return (  self2240 );
}

static  struct Scanner_289   into_dash_iter288 (    struct Scanner_289 *  self547 ) {
    return ( (  into_dash_iter291 ) ( ( * (  self547 ) ) ) );
}

static  struct SliceIter_290   into_dash_iter294 (    struct Slice_5  self1380 ) {
    return ( (struct SliceIter_290) { .f_slice = (  self1380 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   subslice295 (    struct Slice_5  slice1361 ,    size_t  from1363 ,    size_t  to1365 ) {
    char *  begin_dash_ptr1366 = ( (  offset_dash_ptr31 ) ( ( (  slice1361 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  from1363 ) ) ) ) );
    if ( ( (  cmp9 ( (  from1363 ) , (  to1365 ) ) != 0 ) || (  cmp9 ( (  from1363 ) , ( (  slice1361 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
    }
    size_t  count1367 = (  op_dash_sub97 ( ( (  min287 ) ( (  to1365 ) ,  ( (  slice1361 ) .f_count ) ) ) , (  from1363 ) ) );
    return ( (struct Slice_5) { .f_ptr = (  begin_dash_ptr1366 ) , .f_count = (  count1367 ) } );
}

static  struct SliceIter_290   into_dash_iter293 (    struct List_3  self1689 ) {
    return ( (  into_dash_iter294 ) ( ( (  subslice295 ) ( ( (  self1689 ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  self1689 ) .f_count ) ) ) ) );
}

static  struct SliceIter_290   into_dash_iter292 (    struct List_3 *  self547 ) {
    return ( (  into_dash_iter293 ) ( ( * (  self547 ) ) ) );
}

enum EmptyIter_297 {
    EmptyIter_297_EmptyIter,
};

static  enum EmptyIter_297   nil296 (  ) {
    return ( EmptyIter_297_EmptyIter );
}

static  enum EmptyIter_297   into_dash_iter298 (    enum EmptyIter_297  self552 ) {
    return (  self552 );
}

static  struct Maybe_50   next299 (    enum EmptyIter_297 *  dref554 ) {
    return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
}

struct LineIter_302 {
    struct DynStr_134  f_og;
    size_t  f_last;
};

struct env307 {
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

struct funenv307 {
    enum Unit_13  (*fun) (  struct env307  ,    struct List_3 *  );
    struct env307 env;
};

struct env306 {
    ;
    ;
    ;
    ;
    ;
    struct env307 envinst307;
};

struct funenv306 {
    enum Unit_13  (*fun) (  struct env306  ,    struct List_3 *  ,    char  );
    struct env306 env;
};

struct env305 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
};

struct funenv305 {
    enum Unit_13  (*fun) (  struct env305  ,    struct List_3 *  ,    struct DynStr_134  );
    struct env305 env;
};

struct env304 {
    ;
    ;
    ;
    struct env305 envinst305;
    ;
    ;
};

struct funenv304 {
    struct List_3  (*fun) (  struct env304  ,    struct DynStr_134  ,    enum CAllocator_4  );
    struct env304 env;
};

struct env303 {
    struct env304 envinst304;
    enum CAllocator_4  al2853;
};

struct funenv303 {
    struct List_3  (*fun) (  struct env303  ,    struct DynStr_134  );
    struct env303 env;
};

struct Map_301 {
    struct LineIter_302  field0;
    struct funenv303  field1;
};

static struct Map_301 Map_301_Map (  struct LineIter_302  field0 , struct funenv303  field1 ) {
    return ( struct Map_301 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_301   into_dash_iter300 (    struct Map_301  self558 ) {
    return (  self558 );
}

struct ConstStrIter_310 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_309 {
    struct ConstStrIter_310  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_309 Map_309_Map (  struct ConstStrIter_310  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_309 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_309   into_dash_iter308 (    struct Map_309  self558 ) {
    return (  self558 );
}

struct Take_313 {
    struct SliceIter_290  field0;
    size_t  field1;
};

static struct Take_313 Take_313_Take (  struct SliceIter_290  field0 ,  size_t  field1 ) {
    return ( struct Take_313 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Map_312 {
    struct Take_313  field0;
    int32_t (*  field1 )(    char  );
};

static struct Map_312 Map_312_Map (  struct Take_313  field0 ,  int32_t (*  field1 )(    char  ) ) {
    return ( struct Map_312 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_312   into_dash_iter311 (    struct Map_312  self558 ) {
    return (  self558 );
}

struct Maybe_315 {
    enum {
        Maybe_315_None_t,
        Maybe_315_Just_t,
    } tag;
    union {
        struct {
            struct List_3  field0;
        } Maybe_315_Just_s;
    } stuff;
};

static struct Maybe_315 Maybe_315_Just (  struct List_3  field0 ) {
    return ( struct Maybe_315 ) { .tag = Maybe_315_Just_t, .stuff = { .Maybe_315_Just_s = { .field0 = field0 } } };
};

struct Maybe_316 {
    enum {
        Maybe_316_None_t,
        Maybe_316_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_134  field0;
        } Maybe_316_Just_s;
    } stuff;
};

static struct Maybe_316 Maybe_316_Just (  struct DynStr_134  field0 ) {
    return ( struct Maybe_316 ) { .tag = Maybe_316_Just_t, .stuff = { .Maybe_316_Just_s = { .field0 = field0 } } };
};

static  char   or_dash_fail319 (    struct Maybe_50  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_50  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_50_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_50_Just_t ) {
        return ( dref1270 .stuff .Maybe_50_Just_s .field0 );
    }
}

static  struct Maybe_50   try_dash_get320 (    struct Slice_5  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    char *  elem_dash_ptr1345 = ( (  offset_dash_ptr31 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_50_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  char   get318 (    struct Slice_5  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail319 ) ( ( (  try_dash_get320 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar321 (  ) {
    return ( (  zeroed230 ) ( ) );
}

static  char   newline322 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  struct DynStr_134   substr323 (    struct DynStr_134  s1504 ,    size_t  from1506 ,    size_t  to1508 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice295 ) ( ( (  s1504 ) .f_contents ) ,  (  from1506 ) ,  (  to1508 ) ) ) } );
}

static  struct Maybe_316   next317 (    struct LineIter_302 *  self1617 ) {
    if ( ( (  cmp9 ( ( ( * (  self1617 ) ) .f_last ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq48 ( ( (  get318 ) ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1617 ) ) .f_last ) ) ) , ( (  nullchar321 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_316) { .tag = Maybe_316_None_t } );
    }
    size_t  i1618 = ( ( * (  self1617 ) ) .f_last );
    while ( ( (  cmp9 ( (  i1618 ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq48 ( ( (  get318 ) ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) ,  (  i1618 ) ) ) , ( (  newline322 ) ( ) ) ) ) ) ) {
        i1618 = (  op_dash_add96 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    struct DynStr_134  line1619 = ( (  substr323 ) ( ( ( * (  self1617 ) ) .f_og ) ,  ( ( * (  self1617 ) ) .f_last ) ,  (  i1618 ) ) );
    if ( (  cmp9 ( (  i1618 ) , ( ( ( ( * (  self1617 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1618 = (  op_dash_add96 ( (  i1618 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    (*  self1617 ) .f_last = (  i1618 );
    return ( ( Maybe_316_Just ) ( (  line1619 ) ) );
}

static  struct Maybe_315   next314 (    struct Map_301 *  dref560 ) {
    struct Maybe_316  dref563 = ( (  next317 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_316_None_t ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    else if ( dref563.tag == Maybe_316_Just_t ) {
        struct funenv303  temp324 = ( (* dref560 ) .field1 );
        return ( ( Maybe_315_Just ) ( ( temp324.fun ( temp324.env ,  ( dref563 .stuff .Maybe_316_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_326 {
    enum {
        Maybe_326_None_t,
        Maybe_326_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_326_Just_s;
    } stuff;
};

static struct Maybe_326 Maybe_326_Just (  uint32_t  field0 ) {
    return ( struct Maybe_326 ) { .tag = Maybe_326_Just_t, .stuff = { .Maybe_326_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_50   next327 (    struct ConstStrIter_310 *  self1006 ) {
    if ( (  cmp9 ( ( ( * (  self1006 ) ) .f_i ) , ( (  i32_dash_size271 ) ( ( ( strlen ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    char *  char_dash_ptr1007 = ( ( (  cast187 ) ( ( ( * (  self1006 ) ) .f_ogstr ) ) ) );
    char  c1008 = ( * ( (  offset_dash_ptr31 ) ( (  char_dash_ptr1007 ) ,  ( (  size_dash_i6434 ) ( ( ( * (  self1006 ) ) .f_i ) ) ) ) ) );
    (*  self1006 ) .f_i = (  op_dash_add96 ( ( ( * (  self1006 ) ) .f_i ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_50_Just ) ( (  c1008 ) ) );
}

static  struct Maybe_326   next325 (    struct Map_309 *  dref560 ) {
    struct Maybe_50  dref563 = ( (  next327 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    else if ( dref563.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_326_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_50_Just_s .field0 ) ) ) ) );
    }
}

struct Maybe_329 {
    enum {
        Maybe_329_None_t,
        Maybe_329_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_329_Just_s;
    } stuff;
};

static struct Maybe_329 Maybe_329_Just (  int32_t  field0 ) {
    return ( struct Maybe_329 ) { .tag = Maybe_329_Just_t, .stuff = { .Maybe_329_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_50   next331 (    struct SliceIter_290 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add96 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    char  elem1388 = ( * ( (  offset_dash_ptr31 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add96 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_50_Just ) ( (  elem1388 ) ) );
}

static  struct Maybe_50   next330 (    struct Take_313 *  dref623 ) {
    if ( (  cmp9 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        struct Maybe_50  x626 = ( (  next331 ) ( ( & ( (* dref623 ) .field0 ) ) ) );
        (* dref623 ) .field1 = (  op_dash_sub97 ( ( (* dref623 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
        return (  x626 );
    } else {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
}

static  struct Maybe_329   next328 (    struct Map_312 *  dref560 ) {
    struct Maybe_50  dref563 = ( (  next330 ) ( ( & ( (* dref560 ) .field0 ) ) ) );
    if ( dref563.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    }
    else if ( dref563.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_329_Just ) ( ( ( (* dref560 ) .field1 ) ( ( dref563 .stuff .Maybe_50_Just_s .field0 ) ) ) ) );
    }
}

static  struct LineIter_302   into_dash_iter333 (    struct LineIter_302  self1614 ) {
    return (  self1614 );
}

static  struct Map_301   map332 (    struct LineIter_302  iterable567 ,   struct funenv303  fun569 ) {
    struct LineIter_302  it570 = ( (  into_dash_iter333 ) ( (  iterable567 ) ) );
    return ( ( Map_301_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct ConstStrIter_310   into_dash_iter335 (    const char*  self1000 ) {
    return ( (struct ConstStrIter_310) { .f_ogstr = (  self1000 ) , .f_i = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Map_309   map334 (    const char*  iterable567 ,    uint32_t (*  fun569 )(    char  ) ) {
    struct ConstStrIter_310  it570 = ( (  into_dash_iter335 ) ( (  iterable567 ) ) );
    return ( ( Map_309_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

static  struct Take_313   into_dash_iter337 (    struct Take_313  self621 ) {
    return (  self621 );
}

static  struct Map_312   map336 (    struct Take_313  iterable567 ,    int32_t (*  fun569 )(    char  ) ) {
    struct Take_313  it570 = ( (  into_dash_iter337 ) ( (  iterable567 ) ) );
    return ( ( Map_312_Map ) ( (  it570 ) ,  (  fun569 ) ) );
}

struct FromIter_341 {
    int32_t  f_from;
};

struct Zip_340 {
    struct SliceIter_281  f_left_dash_it;
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
    struct SliceIter_290  f_left_dash_it;
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
    struct LineIter_302  field0;
    size_t  field1;
};

static struct Drop_346 Drop_346_Drop (  struct LineIter_302  field0 ,  size_t  field1 ) {
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

static  struct Maybe_315   next351 (    struct SliceIter_281 *  self1386 ) {
    size_t  off1387 = ( ( * (  self1386 ) ) .f_current_dash_offset );
    if ( (  cmp9 ( (  op_dash_add96 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1386 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    struct List_3  elem1388 = ( * ( (  offset_dash_ptr157 ) ( ( ( ( * (  self1386 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1387 ) ) ) ) ) );
    (*  self1386 ) .f_current_dash_offset = (  op_dash_add96 ( (  off1387 ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_315_Just ) ( (  elem1388 ) ) );
}

static  struct Maybe_329   next352 (    struct FromIter_341 *  dref667 ) {
    int32_t  v669 = ( ( (* dref667 ) ) .f_from );
    (* dref667 ) .f_from = (  op_dash_add85 ( ( ( (* dref667 ) ) .f_from ) , (  from_dash_integral29 ( 1 ) ) ) );
    return ( ( Maybe_329_Just ) ( (  v669 ) ) );
}

static  struct Maybe_348   next350 (    struct Zip_340 *  self676 ) {
    struct Zip_340  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_315  dref678 = ( (  next351 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_315_None_t ) {
            return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
        }
        else if ( dref678.tag == Maybe_315_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_348) { .tag = Maybe_348_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next351 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_348_Just ) ( ( ( Tuple2_349_Tuple2 ) ( ( dref678 .stuff .Maybe_315_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_348   next347 (    struct Drop_339 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next350 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub97 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
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
        struct Maybe_50  dref678 = ( (  next331 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next331 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_354   next353 (    struct Drop_343 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next356 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub97 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next356 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
}

static  struct Maybe_316   next357 (    struct Drop_346 *  dref609 ) {
    while ( (  cmp9 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
        ( (  next317 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
        (* dref609 ) .field1 = (  op_dash_sub97 ( ( (* dref609 ) .field1 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( (  next317 ) ( ( & ( (* dref609 ) .field0 ) ) ) );
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

static  struct Drop_346   drop362 (    struct LineIter_302  iterable614 ,    size_t  i616 ) {
    struct LineIter_302  it617 = ( (  into_dash_iter333 ) ( (  iterable614 ) ) );
    return ( ( Drop_346_Drop ) ( (  it617 ) ,  (  i616 ) ) );
}

static  struct Take_313   take363 (    struct List_3 *  it629 ,    size_t  i631 ) {
    return ( ( Take_313_Take ) ( ( (  into_dash_iter292 ) ( (  it629 ) ) ) ,  (  i631 ) ) );
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

static  struct Maybe_329   next368 (    struct RangeIter_367 *  self653 ) {
    struct RangeIter_367  dref654 = ( * (  self653 ) );
    if ( true ) {
        if ( (  cmp78 ( ( dref654 .field1 ) , ( dref654 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
        }
        struct Maybe_329  x658 = ( ( Maybe_329_Just ) ( ( dref654 .field1 ) ) );
        (*  self653 ) = ( ( RangeIter_367_RangeIter ) ( ( ( Range_365_Range ) ( ( dref654 .field0 .field0 ) ,  ( dref654 .field0 .field1 ) ) ) ,  (  op_dash_add85 ( ( dref654 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
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
    struct LineIter_302  f_left_dash_it;
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
    struct SliceIter_290  f_left_dash_it;
    struct SliceIter_290  f_right_dash_it;
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
    struct ConstStrIter_310  f_left;
    struct SliceIter_290  f_right;
};

struct AppendIter_386 {
    enum EmptyIter_297  f_it;
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
            struct ConstStrIter_310  field0;
        } StrCaseIter_383_StrCaseIter1_s;
        struct {
            struct StrConcatIter_384  field0;
        } StrCaseIter_383_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_383 StrCaseIter_383_StrCaseIter1 (  struct ConstStrIter_310  field0 ) {
    return ( struct StrCaseIter_383 ) { .tag = StrCaseIter_383_StrCaseIter1_t, .stuff = { .StrCaseIter_383_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_383 StrCaseIter_383_StrCaseIter2 (  struct StrConcatIter_384  field0 ) {
    return ( struct StrCaseIter_383 ) { .tag = StrCaseIter_383_StrCaseIter2_t, .stuff = { .StrCaseIter_383_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_382 {
    struct ConstStrIter_310  f_left;
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
    struct ConstStrIter_310  f_left;
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
    struct ConstStrIter_310  f_right;
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
    struct ConstStrIter_310  f_left;
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
            struct ConstStrIter_310  field0;
        } StrCaseIter_394_StrCaseIter1_s;
        struct {
            struct StrConcatIter_395  field0;
        } StrCaseIter_394_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_394 StrCaseIter_394_StrCaseIter1 (  struct ConstStrIter_310  field0 ) {
    return ( struct StrCaseIter_394 ) { .tag = StrCaseIter_394_StrCaseIter1_t, .stuff = { .StrCaseIter_394_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_394 StrCaseIter_394_StrCaseIter2 (  struct StrConcatIter_395  field0 ) {
    return ( struct StrCaseIter_394 ) { .tag = StrCaseIter_394_StrCaseIter2_t, .stuff = { .StrCaseIter_394_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_393 {
    struct ConstStrIter_310  f_left;
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
    struct ConstStrIter_310  f_left;
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
    struct ConstStrIter_310  f_left;
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
    struct ConstStrIter_310  f_right;
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
            struct ConstStrIter_310  field0;
        } StrCaseIter_419_StrCaseIter1_s;
        struct {
            struct StrConcatIter_420  field0;
        } StrCaseIter_419_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_419 StrCaseIter_419_StrCaseIter1 (  struct ConstStrIter_310  field0 ) {
    return ( struct StrCaseIter_419 ) { .tag = StrCaseIter_419_StrCaseIter1_t, .stuff = { .StrCaseIter_419_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_419 StrCaseIter_419_StrCaseIter2 (  struct StrConcatIter_420  field0 ) {
    return ( struct StrCaseIter_419 ) { .tag = StrCaseIter_419_StrCaseIter2_t, .stuff = { .StrCaseIter_419_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_418 {
    struct ConstStrIter_310  f_left;
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
    struct DynStr_134  field0;
    int32_t  field1;
};

static struct Tuple2_423 Tuple2_423_Tuple2 (  struct DynStr_134  field0 ,  int32_t  field1 ) {
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
        struct Maybe_316  dref678 = ( (  next317 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_316_None_t ) {
            return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
        }
        else if ( dref678.tag == Maybe_316_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next317 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_422_Just ) ( ( ( Tuple2_423_Tuple2 ) ( ( dref678 .stuff .Maybe_316_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_422   next424 (    struct Zip_374 *  self676 ) {
    struct Zip_374  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_316  dref678 = ( (  next357 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_316_None_t ) {
            return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
        }
        else if ( dref678.tag == Maybe_316_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_422) { .tag = Maybe_422_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next357 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_422_Just ) ( ( ( Tuple2_423_Tuple2 ) ( ( dref678 .stuff .Maybe_316_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
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
        struct Maybe_50  dref678 = ( (  next331 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_50  dref680 = ( (  next331 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_50_None_t ) {
                return ( (struct Maybe_426) { .tag = Maybe_426_None_t } );
            }
            else if ( dref680.tag == Maybe_50_Just_t ) {
                ( (  next331 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next331 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_426_Just ) ( ( ( Tuple2_427_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_50_Just_s .field0 ) ) ) ) );
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
        struct Maybe_329  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_329_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_329_Just_t ) {
            struct funenv432  temp433 = (  fun816 );
            x817 = ( temp433.fun ( temp433.env ,  ( dref819 .stuff .Maybe_329_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp434;
    return (  temp434 );
}

static  int32_t   lam432 (   struct env432 env ,    int32_t  item927 ,    int32_t  x929 ) {
    return (  op_dash_mul87 ( (  x929 ) , ( env.base923 ) ) );
}

static  int32_t   pow430 (    int32_t  base923 ,    int32_t  p925 ) {
    struct env432 envinst432 = {
        .base923 =  base923 ,
    };
    return ( (  reduce431 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  ( (struct funenv432){ .fun = lam432, .env = envinst432 } ) ) );
}

static  struct Maybe_50   next429 (    struct IntStrIter_379 *  self1027 ) {
    if ( (  cmp78 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    int32_t  trim_dash_down1028 = ( (  pow430 ) ( (  from_dash_integral29 ( 10 ) ) ,  (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  upper1029 = (  op_dash_div88 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    int32_t  upper_dash_mask1030 = (  op_dash_mul87 ( (  op_dash_div88 ( (  upper1029 ) , (  from_dash_integral29 ( 10 ) ) ) ) , (  from_dash_integral29 ( 10 ) ) ) );
    int32_t  digit1031 = (  op_dash_sub86 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast199 ) ( (  op_dash_add85 ( (  digit1031 ) , (  from_dash_integral29 ( 48 ) ) ) ) ) );
    return ( ( Maybe_50_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_354   next428 (    struct Zip_378 *  self676 ) {
    struct Zip_378  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next429 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next429 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_50   next439 (    struct StrConcatIter_385 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next331 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next440 (    struct AppendIter_386 *  self776 ) {
    struct Maybe_50  dref777 = ( (  next299 ) ( ( & ( ( * (  self776 ) ) .f_it ) ) ) );
    if ( dref777.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref777 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref777.tag == Maybe_50_None_t ) {
        if ( ( ! ( ( * (  self776 ) ) .f_appended ) ) ) {
            (*  self776 ) .f_appended = ( true );
            return ( ( Maybe_50_Just ) ( ( ( * (  self776 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
}

static  struct Maybe_50   next438 (    struct StrConcatIter_384 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next439 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next437 (    struct StrCaseIter_383 *  self1115 ) {
    struct StrCaseIter_383 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_383_StrCaseIter1_t ) {
        return ( (  next327 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_383_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_383_StrCaseIter2_t ) {
        return ( (  next438 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_383_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_50   next436 (    struct StrConcatIter_382 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next437 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next435 (    struct Zip_381 *  self676 ) {
    struct Zip_381  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next436 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next436 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
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
        struct Maybe_329  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_329_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_329_Just_t ) {
            struct funenv446  temp447 = (  fun816 );
            x817 = ( temp447.fun ( temp447.env ,  ( dref819 .stuff .Maybe_329_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp448;
    return (  temp448 );
}

static  uint32_t   lam446 (   struct env446 env ,    int32_t  item927 ,    uint32_t  x929 ) {
    return (  op_dash_mul92 ( (  x929 ) , ( env.base923 ) ) );
}

static  uint32_t   pow444 (    uint32_t  base923 ,    int32_t  p925 ) {
    struct env446 envinst446 = {
        .base923 =  base923 ,
    };
    return ( (  reduce445 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral36 ( 1 ) ) ,  ( (struct funenv446){ .fun = lam446, .env = envinst446 } ) ) );
}

static  struct Maybe_50   next443 (    struct IntStrIter_390 *  self1027 ) {
    if ( (  cmp78 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    uint32_t  trim_dash_down1028 = ( (  pow444 ) ( (  from_dash_integral36 ( 10 ) ) ,  (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    uint32_t  upper1029 = (  op_dash_div93 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    uint32_t  upper_dash_mask1030 = (  op_dash_mul92 ( (  op_dash_div93 ( (  upper1029 ) , (  from_dash_integral36 ( 10 ) ) ) ) , (  from_dash_integral36 ( 10 ) ) ) );
    uint32_t  digit1031 = (  op_dash_sub91 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast203 ) ( (  op_dash_add90 ( (  digit1031 ) , (  from_dash_integral36 ( 48 ) ) ) ) ) );
    return ( ( Maybe_50_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_50   next442 (    struct StrConcatIter_389 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next443 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next441 (    struct Zip_388 *  self676 ) {
    struct Zip_388  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next442 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next442 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_50   next457 (    struct StrConcatIter_400 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next456 (    struct StrConcatIter_399 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next457 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next455 (    struct StrConcatIter_398 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next456 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next454 (    struct StrConcatIter_397 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next455 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next453 (    struct StrConcatIter_396 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next454 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next452 (    struct StrConcatIter_395 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next453 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next451 (    struct StrCaseIter_394 *  self1115 ) {
    struct StrCaseIter_394 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_394_StrCaseIter1_t ) {
        return ( (  next327 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_394_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_394_StrCaseIter2_t ) {
        return ( (  next452 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_394_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_50   next450 (    struct StrConcatIter_393 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next451 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next449 (    struct Zip_392 *  self676 ) {
    struct Zip_392  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next450 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next450 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_50   next461 (    struct StrConcatIter_405 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next460 (    struct StrConcatIter_404 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next461 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next459 (    struct StrConcatIter_403 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next460 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next458 (    struct Zip_402 *  self676 ) {
    struct Zip_402  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next459 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next459 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
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
        struct Maybe_329  dref819 = ( (  next368 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_329_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_329_Just_t ) {
            struct funenv467  temp468 = (  fun816 );
            x817 = ( temp468.fun ( temp468.env ,  ( dref819 .stuff .Maybe_329_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp469;
    return (  temp469 );
}

static  size_t   lam467 (   struct env467 env ,    int32_t  item927 ,    size_t  x929 ) {
    return (  op_dash_mul98 ( (  x929 ) , ( env.base923 ) ) );
}

static  size_t   pow465 (    size_t  base923 ,    int32_t  p925 ) {
    struct env467 envinst467 = {
        .base923 =  base923 ,
    };
    return ( (  reduce466 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  p925 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( (struct funenv467){ .fun = lam467, .env = envinst467 } ) ) );
}

static  struct Maybe_50   next464 (    struct IntStrIter_409 *  self1027 ) {
    if ( (  cmp78 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    size_t  trim_dash_down1028 = ( (  pow465 ) ( (  from_dash_integral11 ( 10 ) ) ,  (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    size_t  upper1029 = (  op_dash_div99 ( ( ( * (  self1027 ) ) .f_int ) , (  trim_dash_down1028 ) ) );
    size_t  upper_dash_mask1030 = (  op_dash_mul98 ( (  op_dash_div99 ( (  upper1029 ) , (  from_dash_integral11 ( 10 ) ) ) ) , (  from_dash_integral11 ( 10 ) ) ) );
    size_t  digit1031 = (  op_dash_sub97 ( (  upper1029 ) , (  upper_dash_mask1030 ) ) );
    (*  self1027 ) .f_len = (  op_dash_sub86 ( ( ( * (  self1027 ) ) .f_len ) , (  from_dash_integral29 ( 1 ) ) ) );
    char  digit_dash_char1032 = ( (  cast204 ) ( (  op_dash_add96 ( (  digit1031 ) , (  from_dash_integral11 ( 48 ) ) ) ) ) );
    return ( ( Maybe_50_Just ) ( (  digit_dash_char1032 ) ) );
}

static  struct Maybe_50   next463 (    struct StrConcatIter_408 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next464 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next462 (    struct Zip_407 *  self676 ) {
    struct Zip_407  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next463 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next463 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_354   next470 (    struct Zip_411 *  self676 ) {
    struct Zip_411  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next461 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next461 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_50   next473 (    struct StrConcatIter_415 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next461 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next472 (    struct StrConcatIter_414 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next473 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next429 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next471 (    struct Zip_413 *  self676 ) {
    struct Zip_413  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next472 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next472 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_50   next477 (    struct StrConcatIter_420 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next463 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next440 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_50   next476 (    struct StrCaseIter_419 *  self1115 ) {
    struct StrCaseIter_419 *  dref1116 = (  self1115 );
    if ( (* dref1116 ).tag == StrCaseIter_419_StrCaseIter1_t ) {
        return ( (  next327 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_419_StrCaseIter1_s .field0 ) ) ) );
    }
    else if ( (* dref1116 ).tag == StrCaseIter_419_StrCaseIter2_t ) {
        return ( (  next477 ) ( ( & ( (* dref1116 ) .stuff .StrCaseIter_419_StrCaseIter2_s .field0 ) ) ) );
    }
}

static  struct Maybe_50   next475 (    struct StrConcatIter_418 *  self1093 ) {
    struct Maybe_50  dref1094 = ( (  next327 ) ( ( & ( ( * (  self1093 ) ) .f_left ) ) ) );
    if ( dref1094.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_50_Just ) ( ( dref1094 .stuff .Maybe_50_Just_s .field0 ) ) );
    }
    else if ( dref1094.tag == Maybe_50_None_t ) {
        return ( (  next476 ) ( ( & ( ( * (  self1093 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_354   next474 (    struct Zip_417 *  self676 ) {
    struct Zip_417  copy677 = ( * (  self676 ) );
    while ( ( true ) ) {
        struct Maybe_50  dref678 = ( (  next475 ) ( ( & ( (  copy677 ) .f_left_dash_it ) ) ) );
        if ( dref678.tag == Maybe_50_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else if ( dref678.tag == Maybe_50_Just_t ) {
            struct Maybe_329  dref680 = ( (  next352 ) ( ( & ( (  copy677 ) .f_right_dash_it ) ) ) );
            if ( dref680.tag == Maybe_329_None_t ) {
                return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
            }
            else if ( dref680.tag == Maybe_329_Just_t ) {
                ( (  next475 ) ( ( & ( ( * (  self676 ) ) .f_left_dash_it ) ) ) );
                ( (  next352 ) ( ( & ( ( * (  self676 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref678 .stuff .Maybe_50_Just_s .field0 ) ,  ( dref680 .stuff .Maybe_329_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Zip_340   zip478 (    struct Slice_282  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_281  left_dash_it687 = ( (  into_dash_iter285 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip479 (    struct Slice_5  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_290  left_dash_it687 = ( (  into_dash_iter294 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_340   zip480 (    struct List_283  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_281  left_dash_it687 = ( (  into_dash_iter284 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_340) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_344   zip481 (    struct List_3  left684 ,    struct FromIter_341  right686 ) {
    struct SliceIter_290  left_dash_it687 = ( (  into_dash_iter293 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_344) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_372   zip482 (    struct LineIter_302  left684 ,    struct FromIter_341  right686 ) {
    struct LineIter_302  left_dash_it687 = ( (  into_dash_iter333 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_372) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_374   zip483 (    struct Drop_346  left684 ,    struct FromIter_341  right686 ) {
    struct Drop_346  left_dash_it687 = ( (  into_dash_iter345 ) ( (  left684 ) ) );
    struct FromIter_341  right_dash_it688 = ( (  into_dash_iter370 ) ( (  right686 ) ) );
    return ( (struct Zip_374) { .f_left_dash_it = (  left_dash_it687 ) , .f_right_dash_it = (  right_dash_it688 ) } );
}

static  struct Zip_376   zip484 (    struct Slice_5  left684 ,    struct Slice_5  right686 ) {
    struct SliceIter_290  left_dash_it687 = ( (  into_dash_iter294 ) ( (  left684 ) ) );
    struct SliceIter_290  right_dash_it688 = ( (  into_dash_iter294 ) ( (  right686 ) ) );
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
    struct Scanner_289  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_504   into_dash_iter503 (    struct TakeWhile_504  self718 ) {
    return (  self718 );
}

struct TakeWhile_506 {
    struct SliceIter_290  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_506   into_dash_iter505 (    struct TakeWhile_506  self718 ) {
    return (  self718 );
}

struct DropWhile_511 {
    struct SliceIter_290  f_it;
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

static  struct Maybe_50   next517 (    struct Scanner_289 *  self2237 ) {
    return ( (  next331 ) ( ( & ( ( * (  self2237 ) ) .f_s ) ) ) );
}

static  struct Maybe_50   next516 (    struct TakeWhile_504 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next517 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

static  struct Maybe_50   next518 (    struct TakeWhile_506 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next331 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

static  struct Maybe_50   next522 (    struct DropWhile_511 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next331 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_50  dref737 = ( (  next331 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_50_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
        else if ( dref737.tag == Maybe_50_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_50_Just ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_50   next521 (    struct DropWhile_510 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next522 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_50  dref737 = ( (  next522 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_50_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
        else if ( dref737.tag == Maybe_50_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_50_Just ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_50   next520 (    struct DropWhile_509 *  self736 ) {
    if ( ( ( * (  self736 ) ) .f_finished ) ) {
        return ( (  next521 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
    }
    while ( ( true ) ) {
        struct Maybe_50  dref737 = ( (  next521 ) ( ( & ( ( * (  self736 ) ) .f_it ) ) ) );
        if ( dref737.tag == Maybe_50_None_t ) {
            (*  self736 ) .f_finished = ( true );
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
        else if ( dref737.tag == Maybe_50_Just_t ) {
            if ( ( ! ( ( ( * (  self736 ) ) .f_pred ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) ) ) ) {
                (*  self736 ) .f_finished = ( true );
                return ( ( Maybe_50_Just ) ( ( dref737 .stuff .Maybe_50_Just_s .field0 ) ) );
            }
        }
    }
}

static  struct Maybe_50   next519 (    struct TakeWhile_508 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

static  struct Maybe_50   next523 (    struct TakeWhile_513 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

static  struct Maybe_50   next524 (    struct TakeWhile_515 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next522 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

struct TakeWhile_526 {
    struct DropWhile_509  f_it;
    bool (*  f_pred )(    char  );
};

static  struct Maybe_50   next525 (    struct TakeWhile_526 *  self721 ) {
    struct Maybe_50  mx722 = ( (  next520 ) ( ( & ( ( * (  self721 ) ) .f_it ) ) ) );
    struct Maybe_50  dref723 = (  mx722 );
    if ( dref723.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref723.tag == Maybe_50_Just_t ) {
        if ( ( ( ( * (  self721 ) ) .f_pred ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_50_Just ) ( ( dref723 .stuff .Maybe_50_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
        }
    }
}

static  struct TakeWhile_504   take_dash_while527 (    struct Scanner_289 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_504) { .f_it = ( (  into_dash_iter288 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
}

static  struct TakeWhile_506   take_dash_while528 (    struct List_3 *  it727 ,    bool (*  pred729 )(    char  ) ) {
    return ( (struct TakeWhile_506) { .f_it = ( (  into_dash_iter292 ) ( (  it727 ) ) ) , .f_pred = (  pred729 ) } );
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

static  struct SliceIter_290   into_dash_iter537 (    struct DynStr_134  self1501 ) {
    return ( (  into_dash_iter294 ) ( ( (  self1501 ) .f_contents ) ) );
}

static  struct DropWhile_511   drop_dash_while536 (    struct DynStr_134  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_511) { .f_it = ( (  into_dash_iter537 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_510   drop_dash_while538 (    struct DropWhile_511  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_510) { .f_it = ( (  into_dash_iter534 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct DropWhile_509   drop_dash_while539 (    struct DropWhile_510  it741 ,    bool (*  pred743 )(    char  ) ) {
    return ( (struct DropWhile_509) { .f_it = ( (  into_dash_iter535 ) ( (  it741 ) ) ) , .f_pred = (  pred743 ) , .f_finished = ( false ) } );
}

static  struct AppendIter_386   append540 (    enum EmptyIter_297  it760 ,    char  e762 ) {
    return ( (struct AppendIter_386) { .f_it = ( (  into_dash_iter298 ) ( (  it760 ) ) ) , .f_elem = (  e762 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_386   cons541 (    enum EmptyIter_297  it765 ,    char  e767 ) {
    return ( (  append540 ) ( (  it765 ) ,  (  e767 ) ) );
}

static  struct AppendIter_386   single542 (    char  e770 ) {
    return ( (  cons541 ) ( ( (  nil296 ) ( ) ) ,  (  e770 ) ) );
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
    enum MouseButton_147  f_button;
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
    struct Slice_282  new_dash_slice1703;
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
    struct env306 envinst306;
    struct List_3 *  list1750;
};

struct funenv561 {
    enum Unit_13  (*fun) (  struct env561  ,    char  );
    struct env561 env;
};

static  enum Unit_13   for_dash_each560 (    struct DynStr_134  iterable793 ,   struct funenv561  fun795 ) {
    struct SliceIter_290  temp562 = ( (  into_dash_iter537 ) ( (  iterable793 ) ) );
    struct SliceIter_290 *  it796 = ( &temp562 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next331 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv561  temp563 = (  fun795 );
            ( temp563.fun ( temp563.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
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
    enum Unit_13  (*fun) (  struct env567  ,    struct List_283 *  );
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
    enum Unit_13  (*fun) (  struct env566  ,    struct List_283 *  ,    struct List_3  );
    struct env566 env;
};

struct env565 {
    struct env566 envinst566;
    struct List_283 *  list1750;
};

struct funenv565 {
    enum Unit_13  (*fun) (  struct env565  ,    struct List_3  );
    struct env565 env;
};

static  enum Unit_13   for_dash_each564 (    struct Map_301  iterable793 ,   struct funenv565  fun795 ) {
    struct Map_301  temp568 = ( (  into_dash_iter300 ) ( (  iterable793 ) ) );
    struct Map_301 *  it796 = ( &temp568 );
    while ( ( true ) ) {
        struct Maybe_315  dref797 = ( (  next314 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_315_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_315_Just_t ) {
            struct funenv565  temp569 = (  fun795 );
            ( temp569.fun ( temp569.env ,  ( dref797 .stuff .Maybe_315_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct StrBuilder_572 {
    struct List_3  f_chars;
};

struct env571 {
    struct env306 envinst306;
    struct StrBuilder_572 *  builder1989;
};

struct funenv571 {
    enum Unit_13  (*fun) (  struct env571  ,    char  );
    struct env571 env;
};

static  struct ConstStrIter_310   into_dash_iter574 (    struct ConstStrIter_310  self1003 ) {
    return (  self1003 );
}

static  enum Unit_13   for_dash_each570 (    struct ConstStrIter_310  iterable793 ,   struct funenv571  fun795 ) {
    struct ConstStrIter_310  temp573 = ( (  into_dash_iter574 ) ( (  iterable793 ) ) );
    struct ConstStrIter_310 *  it796 = ( &temp573 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next327 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv571  temp575 = (  fun795 );
            ( temp575.fun ( temp575.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct Slice_578 {
    struct Cell_56 *  f_ptr;
    size_t  f_count;
};

struct env577 {
    struct Cell_56 (*  fun1454 )(    struct Cell_56  );
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
        struct Maybe_329  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_329_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_329_Just_t ) {
            struct funenv577  temp580 = (  fun795 );
            ( temp580.fun ( temp580.env ,  ( dref797 .stuff .Maybe_329_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env582 {
    struct Cell_56 (*  fun1454 )(    struct Cell_56  );
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
        struct Maybe_329  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_329_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_329_Just_t ) {
            struct funenv582  temp584 = (  fun795 );
            ( temp584.fun ( temp584.env ,  ( dref797 .stuff .Maybe_329_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env586 {
    ;
    struct Scanner_289 *  it899;
};

struct funenv586 {
    struct Maybe_50  (*fun) (  struct env586  ,    int32_t  );
    struct env586 env;
};

static  enum Unit_13   for_dash_each585 (    struct Range_365  iterable793 ,   struct funenv586  fun795 ) {
    struct RangeIter_367  temp587 = ( (  into_dash_iter366 ) ( (  iterable793 ) ) );
    struct RangeIter_367 *  it796 = ( &temp587 );
    while ( ( true ) ) {
        struct Maybe_329  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_329_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_329_Just_t ) {
            struct funenv586  temp588 = (  fun795 );
            ( temp588.fun ( temp588.env ,  ( dref797 .stuff .Maybe_329_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env590 {
    ;
    struct List_283 *  list1722;
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
    struct Slice_282  dest1411;
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
    struct env306 envinst306;
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
        struct Maybe_50  dref797 = ( (  next440 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv606  temp608 = (  fun795 );
            ( temp608.fun ( temp608.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env610 {
    struct env306 envinst306;
    struct List_3 *  list1750;
};

struct funenv610 {
    enum Unit_13  (*fun) (  struct env610  ,    char  );
    struct env610 env;
};

static  enum Unit_13   for_dash_each609 (    struct Slice_5  iterable793 ,   struct funenv610  fun795 ) {
    struct SliceIter_290  temp611 = ( (  into_dash_iter294 ) ( (  iterable793 ) ) );
    struct SliceIter_290 *  it796 = ( &temp611 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next331 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv610  temp612 = (  fun795 );
            ( temp612.fun ( temp612.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env614 {
    struct env306 envinst306;
    struct List_3 *  list1750;
};

struct funenv614 {
    enum Unit_13  (*fun) (  struct env614  ,    char  );
    struct env614 env;
};

static  enum Unit_13   for_dash_each613 (    struct List_3 *  iterable793 ,   struct funenv614  fun795 ) {
    struct SliceIter_290  temp615 = ( (  into_dash_iter292 ) ( (  iterable793 ) ) );
    struct SliceIter_290 *  it796 = ( &temp615 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next331 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv614  temp616 = (  fun795 );
            ( temp616.fun ( temp616.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env618 {
    struct env306 envinst306;
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
        struct Maybe_50  dref797 = ( (  next518 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv618  temp620 = (  fun795 );
            ( temp620.fun ( temp620.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env622 {
    struct env306 envinst306;
    struct StrBuilder_572 *  builder1989;
};

struct funenv622 {
    enum Unit_13  (*fun) (  struct env622  ,    char  );
    struct env622 env;
};

static  enum Unit_13   for_dash_each621 (    struct TakeWhile_508  iterable793 ,   struct funenv622  fun795 ) {
    struct TakeWhile_508  temp623 = ( (  into_dash_iter507 ) ( (  iterable793 ) ) );
    struct TakeWhile_508 *  it796 = ( &temp623 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next519 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv622  temp624 = (  fun795 );
            ( temp624.fun ( temp624.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env626 {
    struct env306 envinst306;
    struct StrBuilder_572 *  builder1989;
};

struct funenv626 {
    enum Unit_13  (*fun) (  struct env626  ,    char  );
    struct env626 env;
};

static  enum Unit_13   for_dash_each625 (    struct TakeWhile_513  iterable793 ,   struct funenv626  fun795 ) {
    struct TakeWhile_513  temp627 = ( (  into_dash_iter512 ) ( (  iterable793 ) ) );
    struct TakeWhile_513 *  it796 = ( &temp627 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next523 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv626  temp628 = (  fun795 );
            ( temp628.fun ( temp628.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct env631 {
    ;
    struct env306 envinst306;
    ;
};

struct funenv631 {
    enum Unit_13  (*fun) (  struct env631  ,    struct StrBuilder_572 *  ,    char  );
    struct env631 env;
};

struct env630 {
    struct StrBuilder_572 *  sb2891;
    struct env631 envinst631;
};

struct funenv630 {
    enum Unit_13  (*fun) (  struct env630  ,    char  );
    struct env630 env;
};

static  enum Unit_13   for_dash_each629 (    struct List_3  iterable793 ,   struct funenv630  fun795 ) {
    struct SliceIter_290  temp632 = ( (  into_dash_iter293 ) ( (  iterable793 ) ) );
    struct SliceIter_290 *  it796 = ( &temp632 );
    while ( ( true ) ) {
        struct Maybe_50  dref797 = ( (  next331 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_50_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_50_Just_t ) {
            struct funenv630  temp633 = (  fun795 );
            ( temp633.fun ( temp633.env ,  ( dref797 .stuff .Maybe_50_Just_s .field0 ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct SliceAddressIter_635 {
    struct Slice_282  f_slice;
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
    if ( (  cmp9 ( (  op_dash_add96 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( ( ( * (  self1404 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_638) { .tag = Maybe_638_None_t } );
    }
    struct List_3 *  elem1406 = ( (  offset_dash_ptr157 ) ( ( ( ( * (  self1404 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  off1405 ) ) ) ) );
    (*  self1404 ) .f_current_dash_offset = (  op_dash_add96 ( (  off1405 ) , (  from_dash_integral11 ( 1 ) ) ) );
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
    struct Cell_56 (*  fun1454 )(    struct Cell_56  );
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
        struct Maybe_329  dref797 = ( (  next368 ) ( (  it796 ) ) );
        if ( dref797.tag == Maybe_329_None_t ) {
            return ( Unit_13_Unit );
        }
        else if ( dref797.tag == Maybe_329_Just_t ) {
            struct funenv641  temp643 = (  fun795 );
            ( temp643.fun ( temp643.env ,  ( dref797 .stuff .Maybe_329_Just_s .field0 ) ) );
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
    struct Termios_139  f_orig_dash_termios;
};

struct Screen_646 {
    enum CAllocator_4  f_al;
    struct Tui_647 *  f_tui;
    struct Slice_578  f_current;
    struct Slice_578  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_57  f_default_dash_fg;
    struct Color_57  f_default_dash_bg;
};

struct env645 {
    ;
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct Color_57  bg2466;
    ;
    struct Screen_646 *  screen2454;
    struct Color_57  fg2465;
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
    struct SmolArray_101  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_692   into_dash_iter693 (    struct SmolArray_101  self1556 ) {
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

static  uint32_t *   get_dash_ptr696 (    struct Array_102 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast190 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get695 (    struct Array_102 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr696 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_326   next694 (    struct SmolArrayIter_692 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    uint32_t  e1565 = ( (  get695 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add96 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_326_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce691 (    struct SmolArray_101  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_692  it818 = ( (  into_dash_iter693 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_326  dref819 = ( (  next694 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_326_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_326_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_326_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp707;
    return (  temp707 );
}

struct SmolArrayIter_709 {
    struct SmolArray_104  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_709   into_dash_iter710 (    struct SmolArray_104  self1556 ) {
    return ( (struct SmolArrayIter_709) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr713 (    struct Array_105 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast191 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get712 (    struct Array_105 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr713 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_326   next711 (    struct SmolArrayIter_709 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    uint32_t  e1565 = ( (  get712 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add96 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_326_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce708 (    struct SmolArray_104  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_709  it818 = ( (  into_dash_iter710 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_326  dref819 = ( (  next711 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_326_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_326_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_326_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp714;
    return (  temp714 );
}

struct SmolArrayIter_716 {
    struct SmolArray_107  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_716   into_dash_iter717 (    struct SmolArray_107  self1556 ) {
    return ( (struct SmolArrayIter_716) { .f_backing = (  self1556 ) , .f_cur = (  from_dash_integral11 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr720 (    struct Array_108 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1532 = ( ( (  cast192 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr161 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  uint32_t   get719 (    struct Array_108 *  arr1535 ,    size_t  i1538 ) {
    return ( * ( (  get_dash_ptr720 ) ( (  arr1535 ) ,  (  i1538 ) ) ) );
}

static  struct Maybe_326   next718 (    struct SmolArrayIter_716 *  self1563 ) {
    if ( (  cmp9 ( ( ( * (  self1563 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_326) { .tag = Maybe_326_None_t } );
    }
    uint32_t  e1565 = ( (  get719 ) ( ( & ( ( ( * (  self1563 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1563 ) ) .f_cur ) ) );
    (*  self1563 ) .f_cur = (  op_dash_add96 ( ( ( * (  self1563 ) ) .f_cur ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( ( Maybe_326_Just ) ( (  e1565 ) ) );
}

static  uint32_t   reduce715 (    struct SmolArray_107  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct SmolArrayIter_716  it818 = ( (  into_dash_iter717 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_326  dref819 = ( (  next718 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_326_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_326_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_326_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    uint32_t  temp721;
    return (  temp721 );
}

static  uint32_t   reduce722 (    struct Map_309  iterable812 ,    uint32_t  base814 ,    uint32_t (*  fun816 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x817 = (  base814 );
    struct Map_309  it818 = ( (  into_dash_iter308 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_326  dref819 = ( (  next325 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_326_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_326_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_326_Just_s .field0 ) ,  (  x817 ) ) );
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
        struct Maybe_50  dref819 = ( (  next516 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_725  temp726;
    return (  temp726 );
}

static  size_t   reduce727 (    struct TakeWhile_504  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_504  it818 = ( (  into_dash_iter503 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next516 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp728;
    return (  temp728 );
}

static  int32_t   reduce729 (    struct Map_312  iterable812 ,    int32_t  base814 ,    int32_t (*  fun816 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x817 = (  base814 );
    struct Map_312  it818 = ( (  into_dash_iter311 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_329  dref819 = ( (  next328 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_329_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_329_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_329_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    int32_t  temp730;
    return (  temp730 );
}

static  size_t   reduce731 (    struct TakeWhile_506  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct TakeWhile_506  it818 = ( (  into_dash_iter505 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next518 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
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
        struct Maybe_50  dref819 = ( (  next524 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    struct Maybe_725  temp738;
    return (  temp738 );
}

static  size_t   reduce739 (    struct IntStrIter_379  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct IntStrIter_379  it818 = ( (  into_dash_iter486 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next429 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp740;
    return (  temp740 );
}

static  size_t   reduce741 (    struct StrConcatIter_382  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_382  it818 = ( (  into_dash_iter488 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next436 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp742;
    return (  temp742 );
}

static  size_t   reduce743 (    struct StrConcatIter_389  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_389  it818 = ( (  into_dash_iter490 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next442 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp744;
    return (  temp744 );
}

static  size_t   reduce745 (    struct StrConcatIter_393  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_393  it818 = ( (  into_dash_iter492 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next450 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp746;
    return (  temp746 );
}

static  size_t   reduce747 (    struct StrConcatIter_403  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_403  it818 = ( (  into_dash_iter494 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next459 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp748;
    return (  temp748 );
}

static  size_t   reduce749 (    struct StrConcatIter_408  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_408  it818 = ( (  into_dash_iter496 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next463 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp750;
    return (  temp750 );
}

static  size_t   reduce751 (    struct StrConcatIter_405  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_405  it818 = ( (  into_dash_iter498 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next461 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp752;
    return (  temp752 );
}

static  size_t   reduce753 (    struct StrConcatIter_414  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_414  it818 = ( (  into_dash_iter500 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next472 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp754;
    return (  temp754 );
}

static  size_t   reduce755 (    struct StrConcatIter_418  iterable812 ,    size_t  base814 ,    size_t (*  fun816 )(    char  ,    size_t  ) ) {
    size_t  x817 = (  base814 );
    struct StrConcatIter_418  it818 = ( (  into_dash_iter502 ) ( (  iterable812 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref819 = ( (  next475 ) ( ( & (  it818 ) ) ) );
        if ( dref819.tag == Maybe_50_None_t ) {
            return (  x817 );
        }
        else if ( dref819.tag == Maybe_50_Just_t ) {
            x817 = ( (  fun816 ) ( ( dref819 .stuff .Maybe_50_Just_s .field0 ) ,  (  x817 ) ) );
        }
    }
    size_t  temp756;
    return (  temp756 );
}

static  size_t   lam758 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count757 (    struct TakeWhile_504  it823 ) {
    return ( (  reduce727 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam758 ) ) );
}

static  size_t   lam760 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count759 (    struct TakeWhile_506  it823 ) {
    return ( (  reduce731 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam760 ) ) );
}

static  size_t   lam762 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count761 (    struct IntStrIter_379  it823 ) {
    return ( (  reduce739 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam762 ) ) );
}

static  size_t   lam764 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count763 (    struct StrConcatIter_382  it823 ) {
    return ( (  reduce741 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam764 ) ) );
}

static  size_t   lam766 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count765 (    struct StrConcatIter_389  it823 ) {
    return ( (  reduce743 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam766 ) ) );
}

static  size_t   lam768 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count767 (    struct StrConcatIter_393  it823 ) {
    return ( (  reduce745 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam768 ) ) );
}

static  size_t   lam770 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count769 (    struct StrConcatIter_403  it823 ) {
    return ( (  reduce747 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam770 ) ) );
}

static  size_t   lam772 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count771 (    struct StrConcatIter_408  it823 ) {
    return ( (  reduce749 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam772 ) ) );
}

static  size_t   lam774 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count773 (    struct StrConcatIter_405  it823 ) {
    return ( (  reduce751 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam774 ) ) );
}

static  size_t   lam776 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count775 (    struct StrConcatIter_414  it823 ) {
    return ( (  reduce753 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam776 ) ) );
}

static  size_t   lam778 (    char  dref824 ,    size_t  x826 ) {
    return (  op_dash_add96 ( (  x826 ) , (  from_dash_integral11 ( 1 ) ) ) );
}

static  size_t   count777 (    struct StrConcatIter_418  it823 ) {
    return ( (  reduce755 ) ( (  it823 ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  lam778 ) ) );
}

static  int32_t   lam780 (    int32_t  v831 ,    int32_t  s833 ) {
    return (  op_dash_add85 ( (  v831 ) , (  s833 ) ) );
}

static  int32_t   sum779 (    struct Map_312  it829 ) {
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

static  struct Maybe_315   head782 (    struct List_283 *  it861 ) {
    struct SliceIter_281  temp783 = ( (  into_dash_iter280 ) ( (  it861 ) ) );
    return ( (  next351 ) ( ( &temp783 ) ) );
}

static  struct Maybe_50   head784 (    struct TakeWhile_504  it861 ) {
    struct TakeWhile_504  temp785 = ( (  into_dash_iter503 ) ( (  it861 ) ) );
    return ( (  next516 ) ( ( &temp785 ) ) );
}

static  struct Maybe_316   head786 (    struct LineIter_302  it861 ) {
    struct LineIter_302  temp787 = ( (  into_dash_iter333 ) ( (  it861 ) ) );
    return ( (  next317 ) ( ( &temp787 ) ) );
}

static  struct Maybe_50   head788 (    struct TakeWhile_515  it861 ) {
    struct TakeWhile_515  temp789 = ( (  into_dash_iter514 ) ( (  it861 ) ) );
    return ( (  next524 ) ( ( &temp789 ) ) );
}

static  struct Maybe_50   head790 (    struct TakeWhile_508  it861 ) {
    struct TakeWhile_508  temp791 = ( (  into_dash_iter507 ) ( (  it861 ) ) );
    return ( (  next519 ) ( ( &temp791 ) ) );
}

static  bool   null792 (    struct List_283 *  it864 ) {
    struct Maybe_315  dref865 = ( (  head782 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_315_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null793 (    struct TakeWhile_504  it864 ) {
    struct Maybe_50  dref865 = ( (  head784 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_50_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  bool   null794 (    struct TakeWhile_508  it864 ) {
    struct Maybe_50  dref865 = ( (  head790 ) ( (  it864 ) ) );
    if ( dref865.tag == Maybe_50_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_50   lam586 (   struct env586 env ,    int32_t  dref902 ) {
    return ( (  next517 ) ( ( env.it899 ) ) );
}

static  enum Unit_13   drop_prime_795 (    struct Scanner_289 *  it899 ,    size_t  n901 ) {
    struct env586 envinst586 = {
        .it899 =  it899 ,
    };
    ( (  for_dash_each585 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 1 ) ) ,  ( (  size_dash_i32273 ) ( (  n901 ) ) ) ) ) ,  ( (struct funenv586){ .fun = lam586, .env = envinst586 } ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   u32_dash_or796 (    uint32_t  l942 ,    uint32_t  r944 ) {
    return ( (  l942 ) | (  r944 ) );
}

static  uint32_t   u32_dash_ors797 (    struct SmolArray_101  vals947 ) {
    return ( (  reduce691 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_ors798 (    struct SmolArray_104  vals947 ) {
    return ( (  reduce708 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_ors799 (    struct SmolArray_107  vals947 ) {
    return ( (  reduce715 ) ( (  vals947 ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  u32_dash_or796 ) ) );
}

static  uint32_t   u32_dash_and800 (    uint32_t  l950 ,    uint32_t  r952 ) {
    return ( (  l950 ) & (  r952 ) );
}

static  uint32_t   u32_dash_neg801 (    uint32_t  l955 ) {
    return ( ~ (  l955 ) );
}

static  int64_t   mod802 (    int64_t  l958 ,    int64_t  d960 ) {
    int64_t  r961 = (  op_dash_div83 ( (  l958 ) , (  d960 ) ) );
    int64_t  m962 = (  op_dash_sub82 ( (  l958 ) , (  op_dash_mul32 ( (  r961 ) , (  d960 ) ) ) ) );
    if ( (  cmp77 ( (  m962 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add81 ( (  d960 ) , (  m962 ) ) );
    } else {
        return (  m962 );
    }
}

struct Cursor_804 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Ordering_10   cmp805 (    struct Cursor_804  l2497 ,    struct Cursor_804  r2499 ) {
    enum Ordering_10  dref2500 = ( (  cmp78 ) ( ( (  l2497 ) .f_y ) ,  ( (  r2499 ) .f_y ) ) );
    switch (  dref2500 ) {
        case Ordering_10_EQ : {
            return ( (  cmp78 ) ( ( (  l2497 ) .f_x ) ,  ( (  r2499 ) .f_x ) ) );
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
    if ( (  cmp78 ( (  l965 ) , (  r967 ) ) == 0 ) ) {
        return (  l965 );
    } else {
        return (  r967 );
    }
}

static  int32_t   max807 (    int32_t  l970 ,    int32_t  r972 ) {
    if ( (  cmp78 ( (  l970 ) , (  r972 ) ) == 2 ) ) {
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
    if ( (  cmp78 ( (  x990 ) , (  mn992 ) ) == 0 ) ) {
        return (  mn992 );
    } else {
        if ( (  cmp78 ( (  x990 ) , (  mx994 ) ) == 2 ) ) {
            return (  mx994 );
        } else {
            return (  x990 );
        }
    }
}

static  struct ConstStrIter_310   chars811 (    const char*  self1014 ) {
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
        self1035 = (  op_dash_div99 ( (  self1035 ) , (  from_dash_integral11 ( 10 ) ) ) );
        digits1036 = (  op_dash_add85 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits814 (    int32_t  self1035 ) {
    if ( (  eq41 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp78 ( (  self1035 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div88 ( (  self1035 ) , (  from_dash_integral29 ( 10 ) ) ) );
        digits1036 = (  op_dash_add85 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
    }
    return (  digits1036 );
}

static  int32_t   count_dash_digits815 (    uint32_t  self1035 ) {
    if ( (  eq42 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return (  from_dash_integral29 ( 1 ) );
    }
    int32_t  digits1036 = (  from_dash_integral29 ( 0 ) );
    while ( (  cmp79 ( (  self1035 ) , (  from_dash_integral36 ( 0 ) ) ) == 2 ) ) {
        self1035 = (  op_dash_div93 ( (  self1035 ) , (  from_dash_integral36 ( 10 ) ) ) );
        digits1036 = (  op_dash_add85 ( (  digits1036 ) , (  from_dash_integral29 ( 1 ) ) ) );
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
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32279 ) ( (  self1051 ) ) ) ) );
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
    struct DynStr_134  field1;
};

static struct StrConcat_827 StrConcat_827_StrConcat (  const char*  field0 ,  struct DynStr_134  field1 ) {
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

static  struct DynStr_134   as_dash_str829 (    struct StrBuilder_572 *  builder2020 ) {
    return ( (struct DynStr_134) { .f_contents = ( (  subslice295 ) ( ( ( ( * (  builder2020 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( ( * (  builder2020 ) ) .f_chars ) .f_count ) ) ) } );
}

static  struct SliceIter_290   chars836 (    struct DynStr_134  self1498 ) {
    return ( (  into_dash_iter294 ) ( ( (  self1498 ) .f_contents ) ) );
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
        struct DynStr_134  ss2527 = ( (  as_dash_str829 ) ( ( & ( dref2525 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
        c2524 = ( ( StrCase_825_StrCase2 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "Cmd(" ) ,  (  ss2527 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    else if ( dref2525.tag == Mode_823_SearchBox_t ) {
        struct DynStr_134  ss2529 = ( (  as_dash_str829 ) ( ( & ( dref2525 .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
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

static  struct SliceIter_290   chars893 (    struct StrBuilder_572  s2034 ) {
    return ( (  into_dash_iter293 ) ( ( (  s2034 ) .f_chars ) ) );
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
    struct Maybe_316  field1;
};

static struct StrConcat_895 StrConcat_895_StrConcat (  const char*  field0 ,  struct Maybe_316  field1 ) {
    return ( struct StrConcat_895 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrCaseIter_383   chars896 (    struct Maybe_316  self1147 ) {
    struct StrCase_825  temp897;
    struct StrCase_825  c1148 = (  temp897 );
    struct Maybe_316  dref1149 = (  self1147 );
    if ( dref1149.tag == Maybe_316_None_t ) {
        c1148 = ( ( StrCase_825_StrCase1 ) ( ( "None" ) ) );
    }
    else if ( dref1149.tag == Maybe_316_Just_t ) {
        c1148 = ( ( StrCase_825_StrCase2 ) ( ( ( StrConcat_826_StrConcat ) ( ( ( StrConcat_827_StrConcat ) ( ( "Just(" ) ,  ( dref1149 .stuff .Maybe_316_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
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
    struct StrConcat_822  field1;
};

static struct StrConcat_932 StrConcat_932_StrConcat (  const char*  field0 ,  struct StrConcat_822  field1 ) {
    return ( struct StrConcat_932 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_931 {
    struct StrConcat_932  field0;
    char  field1;
};

static struct StrConcat_931 StrConcat_931_StrConcat (  struct StrConcat_932  field0 ,  char  field1 ) {
    return ( struct StrConcat_931 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str937 (    struct DynStr_134  self1495 ) {
    ( ( printf ) ( ( "%.*s" ) ,  ( ( (  self1495 ) .f_contents ) .f_count ) ,  ( ( (  self1495 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str936 (    struct StrConcat_827  self1102 ) {
    struct StrConcat_827  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str937 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str935 (    struct Mode_823  self2515 ) {
    struct Mode_823  dref2516 = (  self2515 );
    if ( dref2516.tag == Mode_823_Normal_t ) {
        ( (  print_dash_str22 ) ( ( "Normal" ) ) );
    }
    else if ( dref2516.tag == Mode_823_Insert_t ) {
        ( (  print_dash_str22 ) ( ( "Insert" ) ) );
    }
    else if ( dref2516.tag == Mode_823_Select_t ) {
        ( (  print_dash_str22 ) ( ( "Select" ) ) );
    }
    else if ( dref2516.tag == Mode_823_Cmd_t ) {
        struct DynStr_134  ss2518 = ( (  as_dash_str829 ) ( ( & ( dref2516 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
        ( (  print_dash_str936 ) ( ( ( StrConcat_827_StrConcat ) ( ( "Cmd " ) ,  (  ss2518 ) ) ) ) );
    }
    else if ( dref2516.tag == Mode_823_SearchBox_t ) {
        struct DynStr_134  ss2520 = ( (  as_dash_str829 ) ( ( & ( dref2516 .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
        ( (  print_dash_str936 ) ( ( ( StrConcat_827_StrConcat ) ( ( "Search " ) ,  (  ss2520 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str934 (    struct StrConcat_822  self1102 ) {
    struct StrConcat_822  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str935 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str933 (    struct StrConcat_932  self1102 ) {
    struct StrConcat_932  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str934 ) ( ( dref1103 .field1 ) ) );
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
    struct StrConcat_914  field1;
};

static struct StrConcat_940 StrConcat_940_StrConcat (  const char*  field0 ,  struct StrConcat_914  field1 ) {
    return ( struct StrConcat_940 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_939 {
    struct StrConcat_940  field0;
    char  field1;
};

static struct StrConcat_939 StrConcat_939_StrConcat (  struct StrConcat_940  field0 ,  char  field1 ) {
    return ( struct StrConcat_939 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str941 (    struct StrConcat_940  self1102 ) {
    struct StrConcat_940  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str917 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str938 (    struct StrConcat_939  self1102 ) {
    struct StrConcat_939  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str941 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_948 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_948 StrConcat_948_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_948 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_947 {
    struct StrConcat_948  field0;
    char  field1;
};

static struct StrConcat_947 StrConcat_947_StrConcat (  struct StrConcat_948  field0 ,  char  field1 ) {
    return ( struct StrConcat_947 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_946 {
    struct StrConcat_947  field0;
    uint8_t  field1;
};

static struct StrConcat_946 StrConcat_946_StrConcat (  struct StrConcat_947  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_946 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_945 {
    struct StrConcat_946  field0;
    char  field1;
};

static struct StrConcat_945 StrConcat_945_StrConcat (  struct StrConcat_946  field0 ,  char  field1 ) {
    return ( struct StrConcat_945 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_944 {
    struct StrConcat_945  field0;
    uint8_t  field1;
};

static struct StrConcat_944 StrConcat_944_StrConcat (  struct StrConcat_945  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_944 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_943 {
    struct StrConcat_944  field0;
    char  field1;
};

static struct StrConcat_943 StrConcat_943_StrConcat (  struct StrConcat_944  field0 ,  char  field1 ) {
    return ( struct StrConcat_943 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str953 (    struct StrConcat_948  self1102 ) {
    struct StrConcat_948  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str952 (    struct StrConcat_947  self1102 ) {
    struct StrConcat_947  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str953 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str951 (    struct StrConcat_946  self1102 ) {
    struct StrConcat_946  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str952 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str950 (    struct StrConcat_945  self1102 ) {
    struct StrConcat_945  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str951 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str949 (    struct StrConcat_944  self1102 ) {
    struct StrConcat_944  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str950 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str819 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str942 (    struct StrConcat_943  self1102 ) {
    struct StrConcat_943  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str949 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

struct StrConcat_957 {
    struct StrConcat_838  field0;
    char  field1;
};

static struct StrConcat_957 StrConcat_957_StrConcat (  struct StrConcat_838  field0 ,  char  field1 ) {
    return ( struct StrConcat_957 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_956 {
    struct StrConcat_957  field0;
    uint32_t  field1;
};

static struct StrConcat_956 StrConcat_956_StrConcat (  struct StrConcat_957  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_956 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_955 {
    struct StrConcat_956  field0;
    char  field1;
};

static struct StrConcat_955 StrConcat_955_StrConcat (  struct StrConcat_956  field0 ,  char  field1 ) {
    return ( struct StrConcat_955 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_13   print_dash_str960 (    struct StrConcat_838  self1102 ) {
    struct StrConcat_838  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str22 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str817 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str959 (    struct StrConcat_957  self1102 ) {
    struct StrConcat_957  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str960 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str958 (    struct StrConcat_956  self1102 ) {
    struct StrConcat_956  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str959 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str817 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   print_dash_str954 (    struct StrConcat_955  self1102 ) {
    struct StrConcat_955  dref1103 = (  self1102 );
    if ( true ) {
        ( (  print_dash_str958 ) ( ( dref1103 .field0 ) ) );
        ( (  print_dash_str28 ) ( ( dref1103 .field1 ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct StrConcatIter_382   chars961 (    struct StrConcat_822  self1108 ) {
    return ( (  into_dash_iter821 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_389   chars962 (    struct StrConcat_838  self1108 ) {
    return ( (  into_dash_iter837 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_393   chars963 (    struct StrConcat_840  self1108 ) {
    return ( (  into_dash_iter839 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_403   chars964 (    struct StrConcat_866  self1108 ) {
    return ( (  into_dash_iter865 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_414   chars965 (    struct StrConcat_875  self1108 ) {
    return ( (  into_dash_iter874 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_382   chars966 (    struct StrConcat_880  self1108 ) {
    return ( (  into_dash_iter879 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_382   chars967 (    struct StrConcat_895  self1108 ) {
    return ( (  into_dash_iter894 ) ( (  self1108 ) ) );
}

static  struct StrConcatIter_418   chars968 (    struct StrConcat_899  self1108 ) {
    return ( (  into_dash_iter898 ) ( (  self1108 ) ) );
}

static  struct TakeWhile_504   chars969 (    struct TakeWhile_504  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_508   chars970 (    struct TakeWhile_508  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_513   chars971 (    struct TakeWhile_513  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_515   chars972 (    struct TakeWhile_515  self1193 ) {
    return (  self1193 );
}

static  struct TakeWhile_526   chars973 (    struct TakeWhile_526  self1193 ) {
    return (  self1193 );
}

static  bool   eq974 (    struct TakeWhile_515  l1203 ,    char  r1205 ) {
    struct TakeWhile_515  temp975 = ( (  chars972 ) ( (  l1203 ) ) );
    struct TakeWhile_515 *  l1206 = ( &temp975 );
    struct AppendIter_386  temp976 = ( (  chars812 ) ( (  r1205 ) ) );
    struct AppendIter_386 *  r1207 = ( &temp976 );
    while ( ( true ) ) {
        struct Maybe_50  mlc1208 = ( (  next524 ) ( (  l1206 ) ) );
        struct Maybe_50  mrc1209 = ( (  next440 ) ( (  r1207 ) ) );
        struct Tuple2_51  dref1210 = ( ( Tuple2_51_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_50_None_t && dref1210 .field1.tag == Maybe_50_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_50_Just_t && dref1210 .field1.tag == Maybe_50_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_50_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq977 (    struct TakeWhile_515  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_515  temp978 = ( (  chars972 ) ( (  l1203 ) ) );
    struct TakeWhile_515 *  l1206 = ( &temp978 );
    struct ConstStrIter_310  temp979 = ( (  chars811 ) ( (  r1205 ) ) );
    struct ConstStrIter_310 *  r1207 = ( &temp979 );
    while ( ( true ) ) {
        struct Maybe_50  mlc1208 = ( (  next524 ) ( (  l1206 ) ) );
        struct Maybe_50  mrc1209 = ( (  next327 ) ( (  r1207 ) ) );
        struct Tuple2_51  dref1210 = ( ( Tuple2_51_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_50_None_t && dref1210 .field1.tag == Maybe_50_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_50_Just_t && dref1210 .field1.tag == Maybe_50_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_50_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  bool   eq980 (    struct TakeWhile_526  l1203 ,    const char*  r1205 ) {
    struct TakeWhile_526  temp981 = ( (  chars973 ) ( (  l1203 ) ) );
    struct TakeWhile_526 *  l1206 = ( &temp981 );
    struct ConstStrIter_310  temp982 = ( (  chars811 ) ( (  r1205 ) ) );
    struct ConstStrIter_310 *  r1207 = ( &temp982 );
    while ( ( true ) ) {
        struct Maybe_50  mlc1208 = ( (  next525 ) ( (  l1206 ) ) );
        struct Maybe_50  mrc1209 = ( (  next327 ) ( (  r1207 ) ) );
        struct Tuple2_51  dref1210 = ( ( Tuple2_51_Tuple2 ) ( (  mlc1208 ) ,  (  mrc1209 ) ) );
        if ( dref1210 .field0.tag == Maybe_50_None_t && dref1210 .field1.tag == Maybe_50_None_t ) {
            return ( true );
        }
        else if ( dref1210 .field0.tag == Maybe_50_Just_t && dref1210 .field1.tag == Maybe_50_Just_t ) {
            if ( ( !  eq48 ( ( dref1210 .field0 .stuff .Maybe_50_Just_s .field0 ) , ( dref1210 .field1 .stuff .Maybe_50_Just_s .field0 ) ) ) ) {
                return ( false );
            }
        }
        else if ( true ) {
            return ( false );
        }
    }
}

static  int32_t   char_dash_i32983 (    char  c1220 ) {
    return ( (  cast_dash_on_dash_zeroed252 ) ( (  c1220 ) ) );
}

static  uint8_t   char_dash_u8984 (    char  c1223 ) {
    return ( (  cast198 ) ( (  c1223 ) ) );
}

static  char   i32_dash_char985 (    int32_t  i1226 ) {
    return ( (  cast199 ) ( (  i1226 ) ) );
}

static  bool   eq986 (    const char*  l1239 ,    const char*  r1241 ) {
    return (  eq41 ( ( ( strcmp ) ( (  l1239 ) ,  (  r1241 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) );
}

static  enum Ordering_10   cmp987 (    char  l1244 ,    char  r1246 ) {
    return ( (  cmp78 ) ( ( (  char_dash_i32983 ) ( (  l1244 ) ) ) ,  ( (  char_dash_i32983 ) ( (  r1246 ) ) ) ) );
}

static  bool   unreachable988 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined149 ) ( ) );
}

static  enum Unit_13   unreachable989 (  ) {
    ( (  print_dash_str22 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined151 ) ( ) );
}

static  enum Unit_13   panic990 (    struct StrConcat_913  errmsg1254 ) {
    ( (  print_dash_str910 ) ( ( ( StrConcat_911_StrConcat ) ( ( ( StrConcat_912_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic991 (    struct StrConcat_856  errmsg1254 ) {
    ( (  print_dash_str918 ) ( ( ( StrConcat_919_StrConcat ) ( ( ( StrConcat_920_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic992 (    const char*  errmsg1254 ) {
    ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic993 (    struct StrConcat_927  errmsg1254 ) {
    ( (  print_dash_str924 ) ( ( ( StrConcat_925_StrConcat ) ( ( ( StrConcat_926_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic994 (    struct StrConcat_822  errmsg1254 ) {
    ( (  print_dash_str930 ) ( ( ( StrConcat_931_StrConcat ) ( ( ( StrConcat_932_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   panic995 (    struct StrConcat_914  errmsg1254 ) {
    ( (  print_dash_str938 ) ( ( ( StrConcat_939_StrConcat ) ( ( ( StrConcat_940_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1254 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_147   panic_prime_996 (    const char*  errmsg1257 ) {
    ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1257 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    return ( (  undefined146 ) ( ) );
}

static  enum Unit_13   assert997 (    bool  cond1260 ,    const char*  msg1262 ) {
    if ( ( ! (  cond1260 ) ) ) {
        ( (  print_dash_str916 ) ( ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "ASSERTION FAILED: " ) ,  (  msg1262 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral29 ( 1 ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  const char*   or_dash_fail998 (    struct Maybe_268  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_268  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_268_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined129 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_268_Just_t ) {
        return ( dref1270 .stuff .Maybe_268_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail999 (    struct Maybe_316  x1267 ,    struct StrConcat_913  errmsg1269 ) {
    struct Maybe_316  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_316_None_t ) {
        ( (  panic990 ) ( (  errmsg1269 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_316_Just_t ) {
        return ( dref1270 .stuff .Maybe_316_Just_s .field0 );
    }
}

struct Maybe_1001 {
    enum {
        Maybe_1001_None_t,
        Maybe_1001_Just_t,
    } tag;
    union {
        struct {
            struct Cell_56  field0;
        } Maybe_1001_Just_s;
    } stuff;
};

static struct Maybe_1001 Maybe_1001_Just (  struct Cell_56  field0 ) {
    return ( struct Maybe_1001 ) { .tag = Maybe_1001_Just_t, .stuff = { .Maybe_1001_Just_s = { .field0 = field0 } } };
};

static  struct Cell_56   or_dash_fail1000 (    struct Maybe_1001  x1267 ,    struct StrConcat_14  errmsg1269 ) {
    struct Maybe_1001  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1001_None_t ) {
        ( (  panic12 ) ( (  errmsg1269 ) ) );
        return ( (  undefined142 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1001_Just_t ) {
        return ( dref1270 .stuff .Maybe_1001_Just_s .field0 );
    }
}

struct Maybe_1003 {
    enum {
        Maybe_1003_None_t,
        Maybe_1003_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_1003_Just_s;
    } stuff;
};

static struct Maybe_1003 Maybe_1003_Just (  uint8_t  field0 ) {
    return ( struct Maybe_1003 ) { .tag = Maybe_1003_Just_t, .stuff = { .Maybe_1003_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail1002 (    struct Maybe_1003  x1267 ,    struct StrConcat_856  errmsg1269 ) {
    struct Maybe_1003  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1003_None_t ) {
        ( (  panic991 ) ( (  errmsg1269 ) ) );
        return ( (  undefined144 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1003_Just_t ) {
        return ( dref1270 .stuff .Maybe_1003_Just_s .field0 );
    }
}

static  struct DynStr_134   or_dash_fail1004 (    struct Maybe_316  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_316  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_316_None_t ) {
        ( (  panic992 ) ( (  errmsg1269 ) ) );
        return ( (  undefined133 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_316_Just_t ) {
        return ( dref1270 .stuff .Maybe_316_Just_s .field0 );
    }
}

struct Maybe_1006 {
    enum {
        Maybe_1006_None_t,
        Maybe_1006_Just_t,
    } tag;
    union {
        struct {
            struct Cell_56 *  field0;
        } Maybe_1006_Just_s;
    } stuff;
};

static struct Maybe_1006 Maybe_1006_Just (  struct Cell_56 *  field0 ) {
    return ( struct Maybe_1006 ) { .tag = Maybe_1006_Just_t, .stuff = { .Maybe_1006_Just_s = { .field0 = field0 } } };
};

static  struct Cell_56 *   or_dash_fail1005 (    struct Maybe_1006  x1267 ,    const char*  errmsg1269 ) {
    struct Maybe_1006  dref1270 = (  x1267 );
    if ( dref1270.tag == Maybe_1006_None_t ) {
        ( (  panic992 ) ( (  errmsg1269 ) ) );
        return ( (  undefined153 ) ( ) );
    }
    else if ( dref1270.tag == Maybe_1006_Just_t ) {
        return ( dref1270 .stuff .Maybe_1006_Just_s .field0 );
    }
}

struct Maybe_1008 {
    enum {
        Maybe_1008_None_t,
        Maybe_1008_Just_t,
    } tag;
    union {
        struct {
            struct Cursor_804  field0;
        } Maybe_1008_Just_s;
    } stuff;
};

static struct Maybe_1008 Maybe_1008_Just (  struct Cursor_804  field0 ) {
    return ( struct Maybe_1008 ) { .tag = Maybe_1008_Just_t, .stuff = { .Maybe_1008_Just_s = { .field0 = field0 } } };
};

static  struct Cursor_804   or_dash_else1007 (    struct Maybe_1008  self1274 ,    struct Cursor_804  alt1276 ) {
    struct Maybe_1008  dref1277 = (  self1274 );
    if ( dref1277.tag == Maybe_1008_None_t ) {
        return (  alt1276 );
    }
    else if ( dref1277.tag == Maybe_1008_Just_t ) {
        return ( dref1277 .stuff .Maybe_1008_Just_s .field0 );
    }
}

struct Tuple2_1010 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_1010 Tuple2_1010_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_1010 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst1009 (    struct Tuple2_1010  dref1297 ) {
    return ( dref1297 .field0 );
}

static  uint32_t   snd1011 (    struct Tuple2_1010  dref1300 ) {
    return ( dref1300 .field1 );
}

static  bool   is_dash_just1012 (    struct Maybe_1008  m1304 ) {
    struct Maybe_1008  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1008_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1008_Just_t ) {
        return ( true );
    }
}

static  bool   is_dash_just1013 (    struct Maybe_316  m1304 ) {
    struct Maybe_316  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_316_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_316_Just_t ) {
        return ( true );
    }
}

struct Maybe_1015 {
    enum {
        Maybe_1015_None_t,
        Maybe_1015_Just_t,
    } tag;
    union {
        struct {
            struct timespec  field0;
        } Maybe_1015_Just_s;
    } stuff;
};

static struct Maybe_1015 Maybe_1015_Just (  struct timespec  field0 ) {
    return ( struct Maybe_1015 ) { .tag = Maybe_1015_Just_t, .stuff = { .Maybe_1015_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_just1014 (    struct Maybe_1015  m1304 ) {
    struct Maybe_1015  dref1305 = (  m1304 );
    if ( dref1305.tag == Maybe_1015_None_t ) {
        return ( false );
    }
    else if ( dref1305.tag == Maybe_1015_Just_t ) {
        return ( true );
    }
}

struct Visual_1019 {
    int32_t  field0;
};

static struct Visual_1019 Visual_1019_Visual (  int32_t  field0 ) {
    return ( struct Visual_1019 ) { .field0 = field0 };
};

struct Theme_1020 {
    struct Color_57  f_bg;
    struct Color_57  f_text;
    struct Color_57  f_cursor_dash_bg;
    struct Color_57  f_cursor_dash_text;
    struct Color_57  f_selection_dash_bg;
    struct Color_57  f_selection_dash_text;
    struct Color_57  f_line_dash_num_dash_hi_dash_bg;
    struct Color_57  f_line_dash_num_dash_hi_dash_text;
};

struct Editor_1018 {
    enum CAllocator_4  f_al;
    bool  f_running;
    struct Cursor_804  f_cursor;
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
    struct Visual_1019  f_goal_dash_x;
    struct List_283  f_current_dash_file;
    struct Maybe_268  f_filename;
    struct Mode_823  f_mode;
    struct Maybe_1015  f_anim;
    struct Maybe_1008  f_selected;
    struct Theme_1020 *  f_theme;
    struct Maybe_881  f_search_dash_term;
    struct Maybe_316  f_msg;
    struct Maybe_316  f_clipboard;
};

struct env1017 {
    ;
    struct Editor_1018 *  ed3004;
    ;
};

struct funenv1017 {
    struct Maybe_50  (*fun) (  struct env1017  ,    struct List_3  );
    struct env1017 env;
};

static  struct Maybe_50   and_dash_maybe1016 (    struct Maybe_315  m1308 ,   struct funenv1017  fun1310 ) {
    struct Maybe_315  dref1311 = (  m1308 );
    if ( dref1311.tag == Maybe_315_None_t ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    else if ( dref1311.tag == Maybe_315_Just_t ) {
        struct funenv1017  temp1021 = (  fun1310 );
        return ( temp1021.fun ( temp1021.env ,  ( dref1311 .stuff .Maybe_315_Just_s .field0 ) ) );
    }
}

static  struct Maybe_53   fmap_dash_maybe1022 (    struct Maybe_50  x1315 ,    bool (*  fun1317 )(    char  ) ) {
    struct Maybe_50  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_53) { .tag = Maybe_53_None_t } );
    }
    else if ( dref1318.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_53_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_50_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_354   fmap_dash_maybe1023 (    struct Maybe_50  x1315 ,    struct Tuple2_355 (*  fun1317 )(    char  ) ) {
    struct Maybe_50  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
    }
    else if ( dref1318.tag == Maybe_50_Just_t ) {
        return ( ( Maybe_354_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_50_Just_s .field0 ) ) ) ) );
    }
}

static  struct Maybe_900   fmap_dash_maybe1024 (    struct Maybe_316  x1315 ,    size_t (*  fun1317 )(    struct DynStr_134  ) ) {
    struct Maybe_316  dref1318 = (  x1315 );
    if ( dref1318.tag == Maybe_316_None_t ) {
        return ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
    }
    else if ( dref1318.tag == Maybe_316_Just_t ) {
        return ( ( Maybe_900_Just ) ( ( (  fun1317 ) ( ( dref1318 .stuff .Maybe_316_Just_s .field0 ) ) ) ) );
    }
}

struct env1026 {
    ;
    struct Editor_1018 *  ed2700;
};

struct funenv1026 {
    struct Cursor_804  (*fun) (  struct env1026  ,    struct Cursor_804  );
    struct env1026 env;
};

static  struct Cursor_804   maybe1025 (    struct Maybe_1008  x1322 ,   struct funenv1026  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1026  temp1027 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1027.fun ( temp1027.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1029 {
    ;
    struct Editor_1018 *  ed2700;
};

struct funenv1029 {
    struct Cursor_804  (*fun) (  struct env1029  ,    struct Cursor_804  );
    struct env1029 env;
};

static  struct Cursor_804   maybe1028 (    struct Maybe_1008  x1322 ,   struct funenv1029  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1029  temp1030 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1030.fun ( temp1030.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1032 {
    ;
    struct Editor_1018 *  ed2700;
};

struct funenv1032 {
    struct Cursor_804  (*fun) (  struct env1032  ,    struct Cursor_804  );
    struct env1032 env;
};

static  struct Cursor_804   maybe1031 (    struct Maybe_1008  x1322 ,   struct funenv1032  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1032  temp1033 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1033.fun ( temp1033.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1035 {
    ;
    struct Editor_1018 *  ed2700;
};

struct funenv1035 {
    struct Cursor_804  (*fun) (  struct env1035  ,    struct Cursor_804  );
    struct env1035 env;
};

static  struct Cursor_804   maybe1034 (    struct Maybe_1008  x1322 ,   struct funenv1035  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1035  temp1036 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1036.fun ( temp1036.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1038 {
    ;
    struct Editor_1018 *  ed2826;
};

struct funenv1038 {
    int32_t  (*fun) (  struct env1038  ,    struct Cursor_804  );
    struct env1038 env;
};

static  int32_t   maybe1037 (    struct Maybe_1008  x1322 ,   struct funenv1038  fun1324 ,    int32_t  default1326 ) {
    struct funenv1038  temp1039 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1039.fun ( temp1039.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1041 {
    ;
    struct Editor_1018 *  ed2826;
};

struct funenv1041 {
    int32_t  (*fun) (  struct env1041  ,    struct Cursor_804  );
    struct env1041 env;
};

static  int32_t   maybe1040 (    struct Maybe_1008  x1322 ,   struct funenv1041  fun1324 ,    int32_t  default1326 ) {
    struct funenv1041  temp1042 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1042.fun ( temp1042.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1044 {
    ;
    struct Editor_1018 *  ed2838;
};

struct funenv1044 {
    int32_t  (*fun) (  struct env1044  ,    struct Cursor_804  );
    struct env1044 env;
};

static  int32_t   maybe1043 (    struct Maybe_1008  x1322 ,   struct funenv1044  fun1324 ,    int32_t  default1326 ) {
    struct funenv1044  temp1045 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1045.fun ( temp1045.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1047 {
    ;
    struct Editor_1018 *  ed2838;
};

struct funenv1047 {
    int32_t  (*fun) (  struct env1047  ,    struct Cursor_804  );
    struct env1047 env;
};

static  int32_t   maybe1046 (    struct Maybe_1008  x1322 ,   struct funenv1047  fun1324 ,    int32_t  default1326 ) {
    struct funenv1047  temp1048 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1048.fun ( temp1048.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

struct env1050 {
    ;
    struct Editor_1018 *  ed2805;
};

struct funenv1050 {
    struct Cursor_804  (*fun) (  struct env1050  ,    struct Cursor_804  );
    struct env1050 env;
};

static  struct Cursor_804   maybe1049 (    struct Maybe_1008  x1322 ,   struct funenv1050  fun1324 ,    struct Cursor_804  default1326 ) {
    struct funenv1050  temp1051 = (  fun1324 );
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( temp1051.fun ( temp1051.env ,  ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1052 (    struct Maybe_1008  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_804  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1053 (    struct Maybe_1008  x1322 ,    int32_t (*  fun1324 )(    struct Cursor_804  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_1008  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_1008_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_1008_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1054 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1055 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1056 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1057 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1058 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1059 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  bool   maybe1060 (    struct Maybe_50  x1322 ,    bool (*  fun1324 )(    char  ) ,    bool  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  int32_t   maybe1061 (    struct Maybe_50  x1322 ,    int32_t (*  fun1324 )(    char  ) ,    int32_t  default1326 ) {
    return ( {  struct Maybe_50  dref1327 = (  x1322 ) ; dref1327.tag == Maybe_50_Just_t ? ( (  fun1324 ) ( ( dref1327 .stuff .Maybe_50_Just_s .field0 ) ) ) : (  default1326 ) ; } );
}

static  struct Slice_282   empty1062 (  ) {
    return ( (struct Slice_282) { .f_ptr = ( (  null_dash_ptr260 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct Slice_5   empty1063 (  ) {
    return ( (struct Slice_5) { .f_ptr = ( (  null_dash_ptr261 ) ( ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3 *   get_dash_ptr1064 (    struct Slice_282  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct List_3 *  elem_dash_ptr1339 = ( (  offset_dash_ptr157 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

static  struct Cell_56 *   get_dash_ptr1065 (    struct Slice_578  slice1336 ,    size_t  i1338 ) {
    if ( ( (  cmp9 ( (  i1338 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1338 ) , ( (  slice1336 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1338 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1336 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_56 *  elem_dash_ptr1339 = ( (  offset_dash_ptr163 ) ( ( (  slice1336 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1338 ) ) ) ) );
    return (  elem_dash_ptr1339 );
}

struct Slice_1067 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_268   try_dash_get1066 (    struct Slice_1067  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_268) { .tag = Maybe_268_None_t } );
    }
    const char* *  elem_dash_ptr1345 = ( (  offset_dash_ptr155 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_268_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  struct Maybe_1001   try_dash_get1068 (    struct Slice_578  slice1342 ,    size_t  i1344 ) {
    if ( ( (  cmp9 ( (  i1344 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1344 ) , ( (  slice1342 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_1001) { .tag = Maybe_1001_None_t } );
    }
    struct Cell_56 *  elem_dash_ptr1345 = ( (  offset_dash_ptr163 ) ( ( (  slice1342 ) .f_ptr ) ,  ( (  size_dash_i6434 ) ( (  i1344 ) ) ) ) );
    return ( ( Maybe_1001_Just ) ( ( * (  elem_dash_ptr1345 ) ) ) );
}

static  const char*   get1069 (    struct Slice_1067  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail998 ) ( ( (  try_dash_get1066 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  struct Cell_56   get1070 (    struct Slice_578  slice1348 ,    size_t  i1350 ) {
    return ( (  or_dash_fail1000 ) ( ( (  try_dash_get1068 ) ( (  slice1348 ) ,  (  i1350 ) ) ) ,  ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1350 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1348 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_13   set1071 (    struct Slice_282  slice1353 ,    size_t  i1355 ,    struct List_3  x1357 ) {
    struct List_3 *  ep1358 = ( (  get_dash_ptr1064 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1072 (    struct Slice_5  slice1353 ,    size_t  i1355 ,    char  x1357 ) {
    char *  ep1358 = ( (  get_dash_ptr30 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1073 (    struct Slice_578  slice1353 ,    size_t  i1355 ,    struct Cell_56  x1357 ) {
    struct Cell_56 *  ep1358 = ( (  get_dash_ptr1065 ) ( (  slice1353 ) ,  (  i1355 ) ) );
    (*  ep1358 ) = (  x1357 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   from1074 (    struct Slice_5  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice295 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct Slice_282   from1075 (    struct Slice_282  slice1370 ,    size_t  from1372 ) {
    return ( (  subslice286 ) ( (  slice1370 ) ,  (  from1372 ) ,  ( (  slice1370 ) .f_count ) ) );
}

static  struct SliceAddressIter_635   addresses1076 (    struct Slice_282  slice1398 ) {
    return ( (struct SliceAddressIter_635) { .f_slice = (  slice1398 ) , .f_current_dash_offset = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   lam594 (   struct env594 env ,    struct Tuple2_349  dref1412 ) {
    return ( (  set1071 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size271 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1077 (    struct Slice_282  src1409 ,    struct Slice_282  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic993 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env594 envinst594 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each593 ) ( ( (  zip478 ) ( (  src1409 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv594){ .fun = lam594, .env = envinst594 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam602 (   struct env602 env ,    struct Tuple2_355  dref1412 ) {
    return ( (  set1072 ) ( ( env.dest1411 ) ,  ( (  i32_dash_size271 ) ( ( dref1412 .field1 ) ) ) ,  ( dref1412 .field0 ) ) );
}

static  enum Unit_13   copy_dash_to1078 (    struct Slice_5  src1409 ,    struct Slice_5  dest1411 ) {
    if ( (  cmp9 ( ( (  src1409 ) .f_count ) , ( (  dest1411 ) .f_count ) ) == 2 ) ) {
        ( (  panic993 ) ( ( ( StrConcat_927_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( (  src1409 ) .f_count ) ) ) ,  ( "-element slice to " ) ) ) ,  ( (  dest1411 ) .f_count ) ) ) ,  ( "-element slice)" ) ) ) ) );
    }
    struct env602 envinst602 = {
        .dest1411 =  dest1411 ,
    };
    ( (  for_dash_each601 ) ( ( (  zip479 ) ( (  src1409 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv602){ .fun = lam602, .env = envinst602 } ) ) );
    return ( Unit_13_Unit );
}

static  bool   lam1080 (    struct Tuple2_427  dref1420 ) {
    return (  eq48 ( ( dref1420 .field0 ) , ( dref1420 .field1 ) ) );
}

static  bool   eq1079 (    struct Slice_5  l1417 ,    struct Slice_5  r1419 ) {
    if ( ( !  eq45 ( ( (  l1417 ) .f_count ) , ( (  r1419 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all781 ) ( ( (  zip484 ) ( (  l1417 ) ,  (  r1419 ) ) ) ,  (  lam1080 ) ) );
}

static  const char*   elem_dash_get1081 (    struct Slice_1067  self1425 ,    size_t  idx1427 ) {
    return ( (  get1069 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  struct Cell_56   elem_dash_get1082 (    struct Slice_578  self1425 ,    size_t  idx1427 ) {
    return ( (  get1070 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  char   elem_dash_get1083 (    struct Slice_5  self1425 ,    size_t  idx1427 ) {
    return ( (  get318 ) ( (  self1425 ) ,  (  idx1427 ) ) );
}

static  enum Unit_13   lam577 (   struct env577 env ,    int32_t  i1456 ) {
    return ( (  set1073 ) ( ( env.s1452 ) ,  ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1082 ( ( env.s1452 ) , ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1084 (    struct Slice_578  s1452 ,    struct Cell_56 (*  fun1454 )(    struct Cell_56  ) ) {
    struct env577 envinst577 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each576 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32273 ) ( (  op_dash_sub97 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv577){ .fun = lam577, .env = envinst577 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam582 (   struct env582 env ,    int32_t  i1456 ) {
    return ( (  set1073 ) ( ( env.s1452 ) ,  ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1082 ( ( env.s1452 ) , ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1085 (    struct Slice_578  s1452 ,    struct Cell_56 (*  fun1454 )(    struct Cell_56  ) ) {
    struct env582 envinst582 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each581 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32273 ) ( (  op_dash_sub97 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv582){ .fun = lam582, .env = envinst582 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam641 (   struct env641 env ,    int32_t  i1456 ) {
    return ( (  set1073 ) ( ( env.s1452 ) ,  ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ,  ( ( env.fun1454 ) ( (  elem_dash_get1082 ( ( env.s1452 ) , ( (  i32_dash_size271 ) ( (  i1456 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   map1086 (    struct Slice_578  s1452 ,    struct Cell_56 (*  fun1454 )(    struct Cell_56  ) ) {
    struct env641 envinst641 = {
        .fun1454 =  fun1454 ,
        .s1452 =  s1452 ,
    };
    ( (  for_dash_each640 ) ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32273 ) ( (  op_dash_sub97 ( ( (  s1452 ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv641){ .fun = lam641, .env = envinst641 } ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_900   find_dash_slice1087 (    struct Slice_5  haystack1459 ,    struct Slice_5  needle1461 ) {
    struct RangeIter_367  temp1088 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( (  haystack1459 ) .f_count ) ) ) , ( (  size_dash_i32273 ) ( ( (  needle1461 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1089 =  next368 (&temp1088);
        if (  __cond1089 .tag == 0 ) {
            break;
        }
        int32_t  i1463 =  __cond1089 .stuff .Maybe_329_Just_s .field0;
        if ( (  eq1079 ( ( (  subslice295 ) ( (  haystack1459 ) ,  ( (  i32_dash_size271 ) ( (  i1463 ) ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( (  i1463 ) ) ) , ( (  needle1461 ) .f_count ) ) ) ) ) , (  needle1461 ) ) ) ) {
            return ( ( Maybe_900_Just ) ( ( (  i32_dash_size271 ) ( (  i1463 ) ) ) ) );
        }
    }
    return ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
}

static  struct Maybe_900   find_dash_last_dash_occurence_dash_of_dash_slice1090 (    struct Slice_5  haystack1466 ,    struct Slice_5  needle1468 ) {
    struct Maybe_900  occ1469 = ( (struct Maybe_900) { .tag = Maybe_900_None_t } );
    struct RangeIter_367  temp1091 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( (  haystack1466 ) .f_count ) ) ) , ( (  size_dash_i32273 ) ( ( (  needle1468 ) .f_count ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1092 =  next368 (&temp1091);
        if (  __cond1092 .tag == 0 ) {
            break;
        }
        int32_t  i1471 =  __cond1092 .stuff .Maybe_329_Just_s .field0;
        if ( (  eq1079 ( ( (  subslice295 ) ( (  haystack1466 ) ,  ( (  i32_dash_size271 ) ( (  i1471 ) ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( (  i1471 ) ) ) , ( (  needle1468 ) .f_count ) ) ) ) ) , (  needle1468 ) ) ) ) {
            occ1469 = ( ( Maybe_900_Just ) ( ( (  i32_dash_size271 ) ( (  i1471 ) ) ) ) );
        }
    }
    return (  occ1469 );
}

static  enum CAllocator_4   idc1093 (  ) {
    return ( CAllocator_4_CAllocator );
}

static  struct Slice_282   allocate1094 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize165 ) ( ) ) ) .f_size );
    struct List_3 *  ptr1487 = ( (  cast_dash_ptr207 ) ( ( ( malloc ) ( (  op_dash_mul98 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_282) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_5   allocate1095 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize168 ) ( ) ) ) .f_size );
    char *  ptr1487 = ( (  cast_dash_ptr211 ) ( ( ( malloc ) ( (  op_dash_mul98 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_5) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  struct Slice_578   allocate1096 (    enum CAllocator_4  dref1483 ,    size_t  count1485 ) {
    if (!(  dref1483 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1486 = ( ( ( (  get_dash_typesize171 ) ( ) ) ) .f_size );
    struct Cell_56 *  ptr1487 = ( (  cast_dash_ptr218 ) ( ( ( malloc ) ( (  op_dash_mul98 ( (  size1486 ) , (  count1485 ) ) ) ) ) ) );
    return ( (struct Slice_578) { .f_ptr = (  ptr1487 ) , .f_count = (  count1485 ) } );
}

static  enum Unit_13   free1097 (    enum CAllocator_4  dref1489 ,    struct Slice_282  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr208 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1098 (    enum CAllocator_4  dref1489 ,    struct Slice_5  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr210 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

struct Slice_1100 {
    enum Unit_13 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_13   free1099 (    enum CAllocator_4  dref1489 ,    struct Slice_1100  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr223 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1101 (    enum CAllocator_4  dref1489 ,    struct Slice_578  slice1491 ) {
    if (!(  dref1489 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr225 ) ( ( (  slice1491 ) .f_ptr ) ) ) ) );
    return ( Unit_13_Unit );
}

static  uint8_t *   get_dash_ptr1102 (    struct Array_140 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1532 = ( ( (  cast189 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr159 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  char *   get_dash_ptr1103 (    struct Array_184 *  arr1528 ,    size_t  i1531 ) {
    if ( ( (  cmp9 ( (  i1531 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1531 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic697 ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to array at index " ) ,  (  i1531 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1532 = ( ( (  cast197 ) ( (  arr1528 ) ) ) );
    return ( (  offset_dash_ptr31 ) ( (  p1532 ) ,  ( (int64_t ) (  i1531 ) ) ) );
}

static  enum Unit_13   set1104 (    struct Array_140 *  arr1541 ,    size_t  i1544 ,    uint8_t  e1546 ) {
    uint8_t *  p1547 = ( (  get_dash_ptr1102 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1105 (    struct Array_184 *  arr1541 ,    size_t  i1544 ,    char  e1546 ) {
    char *  p1547 = ( (  get_dash_ptr1103 ) ( (  arr1541 ) ,  (  i1544 ) ) );
    (*  p1547 ) = (  e1546 );
    return ( Unit_13_Unit );
}

static  struct Slice_5   as_dash_slice1106 (    struct Array_184 *  arr1550 ) {
    return ( (struct Slice_5) { .f_ptr = ( (  cast197 ) ( (  arr1550 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace1107 (    char  c1601 ) {
    return ( ( (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq48 ( (  c1601 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  bool   is_dash_not_dash_whitespace1108 (    char  c1604 ) {
    return ( ! ( (  is_dash_whitespace1107 ) ( (  c1604 ) ) ) );
}

static  struct LineIter_302   lines1109 (    struct DynStr_134  s1611 ) {
    return ( (struct LineIter_302) { .f_og = (  s1611 ) , .f_last = (  from_dash_integral11 ( 0 ) ) } );
}

static  bool   is_dash_digit1110 (    char  c1640 ) {
    return ( (  cmp78 ( ( (  char_dash_i32983 ) ( (  c1640 ) ) ) , ( (  char_dash_i32983 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp78 ( ( (  char_dash_i32983 ) ( (  c1640 ) ) ) , ( (  char_dash_i32983 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_329   parse_dash_digit1111 (    char  c1643 ) {
    if ( ( (  is_dash_digit1110 ) ( (  c1643 ) ) ) ) {
        return ( ( Maybe_329_Just ) ( (  op_dash_sub86 ( ( (  char_dash_i32983 ) ( (  c1643 ) ) ) , ( (  char_dash_i32983 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_329) { .tag = Maybe_329_None_t } );
    }
}

static  struct Maybe_725   sequence_dash_maybe1113 (    char  e1649 ,    struct Maybe_725  b1651 ) {
    struct Maybe_725  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_725_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    else if ( dref1652.tag == Maybe_725_Just_t ) {
        struct Maybe_329  dref1654 = ( (  parse_dash_digit1111 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_329_None_t ) {
            return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
        }
        else if ( dref1654.tag == Maybe_329_Just_t ) {
            return ( ( Maybe_725_Just ) ( (  op_dash_add81 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64270 ) ( ( dref1654 .stuff .Maybe_329_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_725   parse_dash_int1112 (    struct TakeWhile_504  s1646 ) {
    struct TakeWhile_504  cs1656 = ( (  chars969 ) ( (  s1646 ) ) );
    struct Maybe_50  dref1657 = ( (  head784 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_50_Just_t ) {
        return ( (  reduce724 ) ( (  cs1656 ) ,  ( ( Maybe_725_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1113 ) ) );
    }
    else if ( dref1657.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
}

static  struct Maybe_725   sequence_dash_maybe1115 (    char  e1649 ,    struct Maybe_725  b1651 ) {
    struct Maybe_725  dref1652 = (  b1651 );
    if ( dref1652.tag == Maybe_725_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    else if ( dref1652.tag == Maybe_725_Just_t ) {
        struct Maybe_329  dref1654 = ( (  parse_dash_digit1111 ) ( (  e1649 ) ) );
        if ( dref1654.tag == Maybe_329_None_t ) {
            return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
        }
        else if ( dref1654.tag == Maybe_329_Just_t ) {
            return ( ( Maybe_725_Just ) ( (  op_dash_add81 ( (  op_dash_mul32 ( ( dref1652 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 10 ) ) ) ) , ( (  i32_dash_i64270 ) ( ( dref1654 .stuff .Maybe_329_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_725   parse_dash_int1114 (    struct TakeWhile_515  s1646 ) {
    struct TakeWhile_515  cs1656 = ( (  chars972 ) ( (  s1646 ) ) );
    struct Maybe_50  dref1657 = ( (  head788 ) ( (  cs1656 ) ) );
    if ( dref1657.tag == Maybe_50_Just_t ) {
        return ( (  reduce737 ) ( (  cs1656 ) ,  ( ( Maybe_725_Just ) ( (  from_dash_integral35 ( 0 ) ) ) ) ,  (  sequence_dash_maybe1115 ) ) );
    }
    else if ( dref1657.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
}

static  struct List_3 *   get_dash_ptr1116 (    struct List_283 *  list1662 ,    size_t  i1664 ) {
    if ( ( (  cmp9 ( (  i1664 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1664 ) , ( ( * (  list1662 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Access to list at index " ) ,  (  i1664 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1662 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1064 ) ( ( ( * (  list1662 ) ) .f_elements ) ,  (  i1664 ) ) );
}

static  struct List_3   get1117 (    struct List_283 *  list1672 ,    size_t  i1674 ) {
    return ( * ( (  get_dash_ptr1116 ) ( (  list1672 ) ,  (  i1674 ) ) ) );
}

static  struct Maybe_50   try_dash_get1118 (    struct List_3 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    return ( ( Maybe_50_Just ) ( ( (  get7 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  struct Maybe_315   try_dash_get1119 (    struct List_283 *  list1677 ,    size_t  i1679 ) {
    if ( (  cmp9 ( (  i1679 ) , ( ( * (  list1677 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
    }
    return ( ( Maybe_315_Just ) ( ( (  get1117 ) ( (  list1677 ) ,  (  i1679 ) ) ) ) );
}

static  enum Unit_13   set1120 (    struct List_283 *  list1682 ,    size_t  i1684 ,    struct List_3  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1071 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set1121 (    struct List_3 *  list1682 ,    size_t  i1684 ,    char  elem1686 ) {
    if ( ( (  cmp9 ( (  i1684 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1684 ) , ( ( * (  list1682 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Tried setting a list element at index " ) ,  (  i1684 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1682 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    ( (  set1072 ) ( ( ( * (  list1682 ) ) .f_elements ) ,  (  i1684 ) ,  (  elem1686 ) ) );
    return ( Unit_13_Unit );
}

static  struct List_283   mk1122 (    enum CAllocator_4  al1692 ) {
    struct Slice_282  elements1693 = ( (  empty1062 ) ( ) );
    return ( (struct List_283) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  struct List_3   mk1123 (    enum CAllocator_4  al1692 ) {
    struct Slice_5  elements1693 = ( (  empty1063 ) ( ) );
    return ( (struct List_3) { .f_al = (  al1692 ) , .f_elements = (  elements1693 ) , .f_count = (  from_dash_integral11 ( 0 ) ) } );
}

static  enum Unit_13   free1124 (    struct List_3 *  list1696 ) {
    ( (  free1098 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free1125 (    struct List_283 *  list1696 ) {
    ( (  free1097 ) ( ( ( * (  list1696 ) ) .f_al ) ,  ( ( * (  list1696 ) ) .f_elements ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam553 (   struct env553 env ,    struct Tuple2_349  dref1704 ) {
    return ( (  set1071 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size271 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full567 (   struct env567 env ,    struct List_283 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1094 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_282  new_dash_slice1703 = ( (  allocate1094 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul98 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env553 envinst553 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each552 ) ( ( (  zip478 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv553){ .fun = lam553, .env = envinst553 } ) ) );
            ( (  free1097 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam557 (   struct env557 env ,    struct Tuple2_355  dref1704 ) {
    return ( (  set1072 ) ( ( env.new_dash_slice1703 ) ,  ( (  i32_dash_size271 ) ( ( dref1704 .field1 ) ) ) ,  ( dref1704 .field0 ) ) );
}

static  enum Unit_13   grow_dash_if_dash_full307 (   struct env307 env ,    struct List_3 *  list1702 ) {
    if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        (*  list1702 ) .f_elements = ( (  allocate1095 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( env.starting_dash_size1697 ) ) );
    } else {
        if ( (  eq45 ( ( ( * (  list1702 ) ) .f_count ) , ( ( ( * (  list1702 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_5  new_dash_slice1703 = ( (  allocate1095 ) ( ( ( * (  list1702 ) ) .f_al ) ,  (  op_dash_mul98 ( ( ( * (  list1702 ) ) .f_count ) , ( env.growth_dash_factor1698 ) ) ) ) );
            struct env557 envinst557 = {
                .new_dash_slice1703 =  new_dash_slice1703 ,
            };
            ( (  for_dash_each556 ) ( ( (  zip479 ) ( ( ( * (  list1702 ) ) .f_elements ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv557){ .fun = lam557, .env = envinst557 } ) ) );
            ( (  free1098 ) ( ( ( * (  list1702 ) ) .f_al ) ,  ( ( * (  list1702 ) ) .f_elements ) ) );
            (*  list1702 ) .f_elements = (  new_dash_slice1703 );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   add566 (   struct env566 env ,    struct List_283 *  list1709 ,    struct List_3  elem1711 ) {
    struct funenv567  temp1126 = ( (struct funenv567){ .fun = grow_dash_if_dash_full567, .env =  env.envinst567  } );
    ( temp1126.fun ( temp1126.env ,  (  list1709 ) ) );
    ( (  set1071 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add96 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   add306 (   struct env306 env ,    struct List_3 *  list1709 ,    char  elem1711 ) {
    struct funenv307  temp1127 = ( (struct funenv307){ .fun = grow_dash_if_dash_full307, .env =  env.envinst307  } );
    ( temp1127.fun ( temp1127.env ,  (  list1709 ) ) );
    ( (  set1072 ) ( ( ( * (  list1709 ) ) .f_elements ) ,  ( ( * (  list1709 ) ) .f_count ) ,  (  elem1711 ) ) );
    (*  list1709 ) .f_count = (  op_dash_add96 ( ( ( * (  list1709 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1128 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    struct env307 envinst307;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   insert1128 (   struct env1128 env ,    struct List_3 *  list1714 ,    size_t  i1716 ,    char  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv306  temp1129 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
        ( temp1129.fun ( temp1129.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv307  temp1130 = ( (struct funenv307){ .fun = grow_dash_if_dash_full307, .env =  env.envinst307  } );
    ( temp1130.fun ( temp1130.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub97 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set1072 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add96 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get7 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub97 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1072 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add96 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1131 {
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

static  enum Unit_13   insert1131 (   struct env1131 env ,    struct List_283 *  list1714 ,    size_t  i1716 ,    struct List_3  elem1718 ) {
    if ( ( (  cmp9 ( (  i1716 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1716 ) , ( ( * (  list1714 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Insertion at list index " ) ,  (  i1716 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1714 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    if ( (  eq45 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        struct funenv566  temp1132 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
        ( temp1132.fun ( temp1132.env ,  (  list1714 ) ,  (  elem1718 ) ) );
        return ( Unit_13_Unit );
    }
    struct funenv567  temp1133 = ( (struct funenv567){ .fun = grow_dash_if_dash_full567, .env =  env.envinst567  } );
    ( temp1133.fun ( temp1133.env ,  (  list1714 ) ) );
    size_t  ii1719 = (  op_dash_sub97 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    while ( (  cmp9 ( (  ii1719 ) , (  i1716 ) ) != 0 ) ) {
        ( (  set1071 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  op_dash_add96 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  get1117 ) ( (  list1714 ) ,  (  ii1719 ) ) ) ) );
        if ( (  eq45 ( (  ii1719 ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            break;
        }
        ii1719 = (  op_dash_sub97 ( (  ii1719 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    ( (  set1071 ) ( ( ( * (  list1714 ) ) .f_elements ) ,  (  i1716 ) ,  (  elem1718 ) ) );
    (*  list1714 ) .f_count = (  op_dash_add96 ( ( ( * (  list1714 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1134 {
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
    return ( (  set1120 ) ( ( env.list1722 ) ,  ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1134 (   struct env1134 env ,    struct List_283 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env590 envinst590 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each589 ) ( ( (  drop358 ) ( ( (  zip480 ) ( ( * (  list1722 ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add96 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv590){ .fun = lam590, .env = envinst590 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub97 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul98 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1097 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty1062 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul98 ( (  op_dash_add96 ( (  op_dash_div99 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_282  new_dash_slice1730 = ( (  allocate1094 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to1077 ) ( ( (  subslice286 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1097 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct env1135 {
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
    return ( (  set1121 ) ( ( env.list1722 ) ,  ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( ( dref1725 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ,  ( dref1725 .field0 ) ) );
}

static  enum Unit_13   remove1135 (   struct env1135 env ,    struct List_3 *  list1722 ,    size_t  i1724 ) {
    if ( ( (  cmp9 ( (  i1724 ) , (  from_dash_integral11 ( 0 ) ) ) == 0 ) || (  cmp9 ( (  i1724 ) , ( ( * (  list1722 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic12 ) ( ( ( StrConcat_14_StrConcat ) ( ( ( StrConcat_15_StrConcat ) ( ( ( StrConcat_16_StrConcat ) ( ( ( StrConcat_17_StrConcat ) ( ( "Removal at list index " ) ,  (  i1724 ) ) ) ,  ( " (count: " ) ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct env598 envinst598 = {
        .list1722 =  list1722 ,
    };
    ( (  for_dash_each597 ) ( ( (  drop360 ) ( ( (  zip481 ) ( ( * (  list1722 ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  (  op_dash_add96 ( (  i1724 ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (struct funenv598){ .fun = lam598, .env = envinst598 } ) ) );
    (*  list1722 ) .f_count = (  op_dash_sub97 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) );
    size_t  capacity1728 = ( ( ( * (  list1722 ) ) .f_elements ) .f_count );
    if ( (  cmp9 ( (  op_dash_mul98 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  capacity1728 ) ) == 0 ) ) {
        if ( (  eq45 ( ( ( * (  list1722 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
            ( (  free1098 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
            (*  list1722 ) .f_elements = ( (  empty1063 ) ( ) );
            return ( Unit_13_Unit );
        }
        size_t  new_dash_size1729 = (  op_dash_mul98 ( (  op_dash_add96 ( (  op_dash_div99 ( ( ( * (  list1722 ) ) .f_count ) , ( env.shrink_dash_factor1699 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) , ( env.shrink_dash_factor1699 ) ) );
        struct Slice_5  new_dash_slice1730 = ( (  allocate1095 ) ( ( ( * (  list1722 ) ) .f_al ) ,  (  new_dash_size1729 ) ) );
        ( (  copy_dash_to1078 ) ( ( (  subslice295 ) ( ( ( * (  list1722 ) ) .f_elements ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( ( * (  list1722 ) ) .f_count ) ) ) ,  (  new_dash_slice1730 ) ) );
        ( (  free1098 ) ( ( ( * (  list1722 ) ) .f_al ) ,  ( ( * (  list1722 ) ) .f_elements ) ) );
        (*  list1722 ) .f_elements = (  new_dash_slice1730 );
    }
    return ( Unit_13_Unit );
}

struct funenv1135 {
    enum Unit_13  (*fun) (  struct env1135  ,    struct List_3 *  ,    size_t  );
    struct env1135 env;
};

struct env1136 {
    ;
    ;
    ;
    struct env1135 envinst1135;
    ;
    ;
    ;
};

static  enum Unit_13   pop1136 (   struct env1136 env ,    struct List_3 *  list1744 ) {
    if ( (  eq45 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        ( (  panic992 ) ( ( "List.pop() called on empty list." ) ) );
    }
    struct funenv1135  temp1137 = ( (struct funenv1135){ .fun = remove1135, .env =  env.envinst1135  } );
    return ( temp1137.fun ( temp1137.env ,  (  list1744 ) ,  (  op_dash_sub97 ( ( ( * (  list1744 ) ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
}

static  enum Unit_13   lam561 (   struct env561 env ,    char  x1754 ) {
    struct funenv306  temp1138 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1138.fun ( temp1138.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all305 (   struct env305 env ,    struct List_3 *  list1750 ,    struct DynStr_134  it1752 ) {
    struct env561 envinst561 = {
        .envinst306 = env.envinst306 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each560 ) ( (  it1752 ) ,  ( (struct funenv561){ .fun = lam561, .env = envinst561 } ) ) );
    return ( Unit_13_Unit );
}

struct env1139 {
    ;
    struct env566 envinst566;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam565 (   struct env565 env ,    struct List_3  x1754 ) {
    struct funenv566  temp1140 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
    return ( temp1140.fun ( temp1140.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1139 (   struct env1139 env ,    struct List_283 *  list1750 ,    struct Map_301  it1752 ) {
    struct env565 envinst565 = {
        .envinst566 = env.envinst566 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each564 ) ( (  it1752 ) ,  ( (struct funenv565){ .fun = lam565, .env = envinst565 } ) ) );
    return ( Unit_13_Unit );
}

struct env1141 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam610 (   struct env610 env ,    char  x1754 ) {
    struct funenv306  temp1142 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1142.fun ( temp1142.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1141 (   struct env1141 env ,    struct List_3 *  list1750 ,    struct Slice_5  it1752 ) {
    struct env610 envinst610 = {
        .envinst306 = env.envinst306 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each609 ) ( (  it1752 ) ,  ( (struct funenv610){ .fun = lam610, .env = envinst610 } ) ) );
    return ( Unit_13_Unit );
}

struct env1143 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam614 (   struct env614 env ,    char  x1754 ) {
    struct funenv306  temp1144 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1144.fun ( temp1144.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1143 (   struct env1143 env ,    struct List_3 *  list1750 ,    struct List_3 *  it1752 ) {
    struct env614 envinst614 = {
        .envinst306 = env.envinst306 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each613 ) ( (  it1752 ) ,  ( (struct funenv614){ .fun = lam614, .env = envinst614 } ) ) );
    return ( Unit_13_Unit );
}

struct env1145 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam618 (   struct env618 env ,    char  x1754 ) {
    struct funenv306  temp1146 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1146.fun ( temp1146.env ,  ( env.list1750 ) ,  (  x1754 ) ) );
}

static  enum Unit_13   add_dash_all1145 (   struct env1145 env ,    struct List_3 *  list1750 ,    struct TakeWhile_506  it1752 ) {
    struct env618 envinst618 = {
        .envinst306 = env.envinst306 ,
        .list1750 =  list1750 ,
    };
    ( (  for_dash_each617 ) ( (  it1752 ) ,  ( (struct funenv618){ .fun = lam618, .env = envinst618 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   trim1147 (    struct List_3 *  l1757 ,    size_t  new_dash_count1759 ) {
    (*  l1757 ) .f_count = (  new_dash_count1759 );
    return ( Unit_13_Unit );
}

static  struct List_3   to_dash_list304 (   struct env304 env ,    struct DynStr_134  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_3  temp1148 = ( (  mk1123 ) ( (  al1764 ) ) );
    struct List_3 *  l1765 = ( &temp1148 );
    struct funenv305  temp1149 = ( (struct funenv305){ .fun = add_dash_all305, .env =  env.envinst305  } );
    ( temp1149.fun ( temp1149.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

struct funenv1139 {
    enum Unit_13  (*fun) (  struct env1139  ,    struct List_283 *  ,    struct Map_301  );
    struct env1139 env;
};

struct env1150 {
    ;
    ;
    struct env1139 envinst1139;
    ;
    ;
    ;
};

static  struct List_283   to_dash_list1150 (   struct env1150 env ,    struct Map_301  it1762 ,    enum CAllocator_4  al1764 ) {
    struct List_283  temp1151 = ( (  mk1122 ) ( (  al1764 ) ) );
    struct List_283 *  l1765 = ( &temp1151 );
    struct funenv1139  temp1152 = ( (struct funenv1139){ .fun = add_dash_all1139, .env =  env.envinst1139  } );
    ( temp1152.fun ( temp1152.env ,  (  l1765 ) ,  (  it1762 ) ) );
    return ( * (  l1765 ) );
}

static  struct Slice_5   to_dash_slice1153 (    struct List_3  l1768 ) {
    char *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_5) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct Slice_282   to_dash_slice1154 (    struct List_283  l1768 ) {
    struct List_3 *  ptr1769 = ( ( (  l1768 ) .f_elements ) .f_ptr );
    return ( (struct Slice_282) { .f_ptr = (  ptr1769 ) , .f_count = ( (  l1768 ) .f_count ) } );
}

static  struct SliceAddressIter_635   addresses1155 (    struct List_283  l1772 ) {
    return ( (  addresses1076 ) ( ( (  to_dash_slice1154 ) ( (  l1772 ) ) ) ) );
}

static  size_t   size1156 (    struct List_3 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   size1157 (    struct List_283 *  l1775 ) {
    return ( ( * (  l1775 ) ) .f_count );
}

static  size_t   clamp_dash_uint1158 (    int32_t  self1793 ) {
    if ( (  cmp78 ( (  self1793 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
        return (  from_dash_integral11 ( 0 ) );
    } else {
        return ( (  u32_dash_size275 ) ( ( (uint32_t ) (  self1793 ) ) ) );
    }
}

static  struct Maybe_1003   hex_dash_digit1159 (    char  c1803 ) {
    if ( ( (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1003_Just ) ( (  op_dash_sub95 ( ( (  char_dash_u8984 ) ( (  c1803 ) ) ) , ( (  char_dash_u8984 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1003_Just ) ( (  op_dash_add94 ( (  op_dash_sub95 ( ( (  char_dash_u8984 ) ( (  c1803 ) ) ) , ( (  char_dash_u8984 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp987 ( (  c1803 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_1003_Just ) ( (  op_dash_add94 ( (  op_dash_sub95 ( ( (  char_dash_u8984 ) ( (  c1803 ) ) ) , ( (  char_dash_u8984 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_1003) { .tag = Maybe_1003_None_t } );
}

static  uint32_t   lam1161 (    char  c1808 ) {
    return ( (  from_dash_integral36 ) ( ( (  u8_dash_i64278 ) ( ( (  or_dash_fail1002 ) ( ( (  hex_dash_digit1159 ) ( (  c1808 ) ) ) ,  ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1808 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam1162 (    uint32_t  elem1810 ,    uint32_t  b1812 ) {
    return (  op_dash_add90 ( (  op_dash_mul92 ( (  b1812 ) , (  from_dash_integral36 ( 16 ) ) ) ) , (  elem1810 ) ) );
}

static  uint32_t   from_dash_hex1160 (    const char*  arr1806 ) {
    return ( (  reduce722 ) ( ( (  map334 ) ( (  arr1806 ) ,  (  lam1161 ) ) ) ,  (  from_dash_integral36 ( 0 ) ) ,  (  lam1162 ) ) );
}

static  struct Maybe_268   get1163 (    const char*  s1846 ) {
    return ( (  from_dash_nullable_dash_c_dash_str267 ) ( ( ( getenv ) ( (  s1846 ) ) ) ) );
}

static  enum Unit_13   show_dash_cursor1164 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   hide_dash_cursor1165 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_cursor_dash_to1166 (    uint32_t  x1823 ,    uint32_t  y1825 ) {
    uint32_t  x1826 = (  op_dash_add90 ( (  x1823 ) , (  from_dash_integral36 ( 1 ) ) ) );
    uint32_t  y1827 = (  op_dash_add90 ( (  y1825 ) , (  from_dash_integral36 ( 1 ) ) ) );
    ( (  print_dash_str954 ) ( ( ( StrConcat_955_StrConcat ) ( ( ( StrConcat_956_StrConcat ) ( ( ( StrConcat_957_StrConcat ) ( ( ( StrConcat_838_StrConcat ) ( ( "\x1b[" ) ,  (  y1827 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1826 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_cursor_dash_position1167 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[H" ) ) );
    return ( Unit_13_Unit );
}

static  struct Tuple2_1010   get_dash_dimensions1168 (  ) {
    struct Winsize_180  temp1169 = ( ( (  zeroed236 ) ( ) ) );
    struct Winsize_180 *  ws1831 = ( &temp1169 );
    if ( ( (  eq41 ( ( ( ioctl ) ( ( (  stdout_dash_fileno112 ) ( ) ) ,  ( (  tiocgwinsz128 ) ( ) ) ,  (  ws1831 ) ) ) , (  op_dash_neg89 ( (  from_dash_integral29 ( 1 ) ) ) ) ) ) || (  eq44 ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) , (  from_dash_integral37 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_1010_Tuple2 ) ( (  from_dash_integral36 ( 80 ) ) ,  (  from_dash_integral36 ( 24 ) ) ) );
    }
    return ( ( Tuple2_1010_Tuple2 ) ( ( (  u16_dash_u32274 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32274 ) ( ( ( * (  ws1831 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_13   set_dash_default_dash_fg1170 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_default_dash_bg1171 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_13_Unit );
}

static  enum ColorPalette_648   query_dash_palette1172 (  ) {
    struct Maybe_268  colorterm1847 = ( (  get1163 ) ( ( "COLORTERM" ) ) );
    struct Maybe_268  dref1848 = (  colorterm1847 );
    if ( dref1848.tag == Maybe_268_Just_t ) {
        if ( ( (  eq986 ( ( dref1848 .stuff .Maybe_268_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq986 ( ( dref1848 .stuff .Maybe_268_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_648_PaletteRGB );
        }
    }
    else if ( dref1848.tag == Maybe_268_None_t ) {
    }
    struct Maybe_268  dref1850 = ( (  get1163 ) ( ( "TERM" ) ) );
    if ( dref1850.tag == Maybe_268_Just_t ) {
        if ( (  eq986 ( ( dref1850 .stuff .Maybe_268_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_648_Palette8 );
        }
    }
    else if ( dref1850.tag == Maybe_268_None_t ) {
    }
    return ( ColorPalette_648_Palette16 );
}

static  enum Unit_13   set_dash_fg81173 (    enum Color8_58  color1866 ) {
    enum Color8_58  dref1867 = (  color1866 );
    switch (  dref1867 ) {
        case Color8_58_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_58_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_58_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_58_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_58_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_58_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_58_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_58_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg161174 (    enum Color16_59  color1870 ) {
    enum Color16_59  dref1871 = (  color1870 );
    switch (  dref1871 ) {
        case Color16_59_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_59_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_59_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_59_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_59_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_59_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_59_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_59_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_59_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_59_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_59_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_59_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_59_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_59_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_59_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_59_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg81175 (    enum Color8_58  color1874 ) {
    enum Color8_58  dref1875 = (  color1874 );
    switch (  dref1875 ) {
        case Color8_58_Black8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_58_Red8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_58_Green8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_58_Yellow8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_58_Blue8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_58_Magenta8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_58_Cyan8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_58_White8 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg161176 (    enum Color16_59  color1878 ) {
    enum Color16_59  dref1879 = (  color1878 );
    switch (  dref1879 ) {
        case Color16_59_Black16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_59_Red16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_59_Green16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_59_Yellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_59_Blue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_59_Magenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_59_Cyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_59_White16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_59_BrightBlack16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_59_BrightRed16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_59_BrightGreen16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_59_BrightYellow16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_59_BrightBlue16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_59_BrightMagenta16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_59_BrightCyan16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_59_BrightWhite16 : {
            ( (  print_dash_str22 ) ( ( "\x1b[107m" ) ) );
            break;
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_colors1177 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   clear_dash_screen1178 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg2561179 (    uint8_t  color1884 ) {
    ( (  print_dash_str952 ) ( ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1884 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg2561180 (    uint8_t  color1887 ) {
    ( (  print_dash_str952 ) ( ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1887 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg_dash_rgb1181 (    struct RGB_60  c1907 ) {
    ( (  print_dash_str942 ) ( ( ( StrConcat_943_StrConcat ) ( ( ( StrConcat_944_StrConcat ) ( ( ( StrConcat_945_StrConcat ) ( ( ( StrConcat_946_StrConcat ) ( ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1907 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1907 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg_dash_rgb1182 (    struct RGB_60  c1910 ) {
    ( (  print_dash_str942 ) ( ( ( StrConcat_943_StrConcat ) ( ( ( StrConcat_944_StrConcat ) ( ( ( StrConcat_945_StrConcat ) ( ( ( StrConcat_946_StrConcat ) ( ( ( StrConcat_947_StrConcat ) ( ( ( StrConcat_948_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1910 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1910 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_fg1183 (    struct Color_57  c1928 ) {
    struct Color_57  dref1929 = (  c1928 );
    if ( dref1929.tag == Color_57_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1170 ) ( ) );
    }
    else if ( dref1929.tag == Color_57_Color8_t ) {
        ( (  set_dash_fg81173 ) ( ( dref1929 .stuff .Color_57_Color8_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_57_Color16_t ) {
        ( (  set_dash_fg161174 ) ( ( dref1929 .stuff .Color_57_Color16_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_57_Color256_t ) {
        ( (  set_dash_fg2561179 ) ( ( dref1929 .stuff .Color_57_Color256_s .field0 ) ) );
    }
    else if ( dref1929.tag == Color_57_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb1181 ) ( ( dref1929 .stuff .Color_57_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_bg1184 (    struct Color_57  c1936 ) {
    struct Color_57  dref1937 = (  c1936 );
    if ( dref1937.tag == Color_57_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1171 ) ( ) );
    }
    else if ( dref1937.tag == Color_57_Color8_t ) {
        ( (  set_dash_bg81175 ) ( ( dref1937 .stuff .Color_57_Color8_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_57_Color16_t ) {
        ( (  set_dash_bg161176 ) ( ( dref1937 .stuff .Color_57_Color16_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_57_Color256_t ) {
        ( (  set_dash_bg2561180 ) ( ( dref1937 .stuff .Color_57_Color256_s .field0 ) ) );
    }
    else if ( dref1937.tag == Color_57_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb1182 ) ( ( dref1937 .stuff .Color_57_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1185 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam571 (   struct env571 env ,    char  c1993 ) {
    struct funenv306  temp1186 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1186.fun ( temp1186.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1185 (   struct env1185 env ,    struct StrBuilder_572 *  builder1989 ,    const char*  s1991 ) {
    struct env571 envinst571 = {
        .envinst306 = env.envinst306 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each570 ) ( ( (  chars811 ) ( (  s1991 ) ) ) ,  ( (struct funenv571){ .fun = lam571, .env = envinst571 } ) ) );
    return ( Unit_13_Unit );
}

struct env1187 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam606 (   struct env606 env ,    char  c1993 ) {
    struct funenv306  temp1188 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1188.fun ( temp1188.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1187 (   struct env1187 env ,    struct StrBuilder_572 *  builder1989 ,    char  s1991 ) {
    struct env606 envinst606 = {
        .envinst306 = env.envinst306 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each605 ) ( ( (  chars812 ) ( (  s1991 ) ) ) ,  ( (struct funenv606){ .fun = lam606, .env = envinst606 } ) ) );
    return ( Unit_13_Unit );
}

struct env1189 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam622 (   struct env622 env ,    char  c1993 ) {
    struct funenv306  temp1190 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1190.fun ( temp1190.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1189 (   struct env1189 env ,    struct StrBuilder_572 *  builder1989 ,    struct TakeWhile_508  s1991 ) {
    struct env622 envinst622 = {
        .envinst306 = env.envinst306 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each621 ) ( ( (  chars970 ) ( (  s1991 ) ) ) ,  ( (struct funenv622){ .fun = lam622, .env = envinst622 } ) ) );
    return ( Unit_13_Unit );
}

struct env1191 {
    ;
    struct env306 envinst306;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   lam626 (   struct env626 env ,    char  c1993 ) {
    struct funenv306  temp1192 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    return ( temp1192.fun ( temp1192.env ,  ( & ( ( * ( env.builder1989 ) ) .f_chars ) ) ,  (  c1993 ) ) );
}

static  enum Unit_13   write1191 (   struct env1191 env ,    struct StrBuilder_572 *  builder1989 ,    struct TakeWhile_513  s1991 ) {
    struct env626 envinst626 = {
        .envinst306 = env.envinst306 ,
        .builder1989 =  builder1989 ,
    };
    ( (  for_dash_each625 ) ( ( (  chars971 ) ( (  s1991 ) ) ) ,  ( (struct funenv626){ .fun = lam626, .env = envinst626 } ) ) );
    return ( Unit_13_Unit );
}

struct funenv1141 {
    enum Unit_13  (*fun) (  struct env1141  ,    struct List_3 *  ,    struct Slice_5  );
    struct env1141 env;
};

struct env1193 {
    ;
    struct env1141 envinst1141;
    ;
};

static  enum Unit_13   write_dash_slice1193 (   struct env1193 env ,    struct StrBuilder_572 *  builder1996 ,    struct Slice_5  s1998 ) {
    struct funenv1141  temp1194 = ( (struct funenv1141){ .fun = add_dash_all1141, .env =  env.envinst1141  } );
    ( temp1194.fun ( temp1194.env ,  ( & ( ( * (  builder1996 ) ) .f_chars ) ) ,  (  s1998 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   write_dash_char631 (   struct env631 env ,    struct StrBuilder_572 *  builder2001 ,    char  c2003 ) {
    struct funenv306  temp1195 = ( (struct funenv306){ .fun = add306, .env =  env.envinst306  } );
    ( temp1195.fun ( temp1195.env ,  ( & ( ( * (  builder2001 ) ) .f_chars ) ) ,  (  c2003 ) ) );
    return ( Unit_13_Unit );
}

struct funenv1136 {
    enum Unit_13  (*fun) (  struct env1136  ,    struct List_3 *  );
    struct env1136 env;
};

struct env1196 {
    ;
    struct env1136 envinst1136;
    ;
};

static  enum Unit_13   pop1196 (   struct env1196 env ,    struct StrBuilder_572 *  sb2011 ) {
    struct funenv1136  temp1197 = ( (struct funenv1136){ .fun = pop1136, .env =  env.envinst1136  } );
    return ( temp1197.fun ( temp1197.env ,  ( & ( ( * (  sb2011 ) ) .f_chars ) ) ) );
}

static  size_t   count1198 (    struct StrBuilder_572 *  sb2014 ) {
    return ( ( ( * (  sb2014 ) ) .f_chars ) .f_count );
}

static  struct StrBuilder_572   mk1199 (    enum CAllocator_4  al2017 ) {
    return ( (struct StrBuilder_572) { .f_chars = ( (  mk1123 ) ( (  al2017 ) ) ) } );
}

static  struct Slice_5   as_dash_char_dash_slice1200 (    struct StrBuilder_572 *  builder2023 ) {
    return ( (  to_dash_slice1153 ) ( ( ( * (  builder2023 ) ) .f_chars ) ) );
}

static  enum Unit_13   free1201 (    struct StrBuilder_572 *  builder2026 ) {
    ( (  free1124 ) ( ( & ( ( * (  builder2026 ) ) .f_chars ) ) ) );
    return ( Unit_13_Unit );
}

struct funenv1185 {
    enum Unit_13  (*fun) (  struct env1185  ,    struct StrBuilder_572 *  ,    const char*  );
    struct env1185 env;
};

struct env1202 {
    ;
    ;
    ;
    struct env1185 envinst1185;
    struct env631 envinst631;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1202 (   struct env1202 env ,    const char*  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1203 = ( (  mk1199 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1203 );
    struct funenv1185  temp1204 = ( (struct funenv1185){ .fun = write1185, .env =  env.envinst1185  } );
    ( temp1204.fun ( temp1204.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv631  temp1205 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
    ( temp1205.fun ( temp1205.env ,  (  sb2043 ) ,  ( (  nullchar321 ) ( ) ) ) );
    struct DynStr_134  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub97 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1189 {
    enum Unit_13  (*fun) (  struct env1189  ,    struct StrBuilder_572 *  ,    struct TakeWhile_508  );
    struct env1189 env;
};

struct env1206 {
    ;
    ;
    ;
    struct env1189 envinst1189;
    ;
    struct env631 envinst631;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1206 (   struct env1206 env ,    struct TakeWhile_508  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1207 = ( (  mk1199 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1207 );
    struct funenv1189  temp1208 = ( (struct funenv1189){ .fun = write1189, .env =  env.envinst1189  } );
    ( temp1208.fun ( temp1208.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv631  temp1209 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
    ( temp1209.fun ( temp1209.env ,  (  sb2043 ) ,  ( (  nullchar321 ) ( ) ) ) );
    struct DynStr_134  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub97 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1191 {
    enum Unit_13  (*fun) (  struct env1191  ,    struct StrBuilder_572 *  ,    struct TakeWhile_513  );
    struct env1191 env;
};

struct env1210 {
    ;
    ;
    ;
    struct env1191 envinst1191;
    ;
    struct env631 envinst631;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_134   mk_dash_dyn_dash_str1210 (   struct env1210 env ,    struct TakeWhile_513  s2040 ,    enum CAllocator_4  al2042 ) {
    struct StrBuilder_572  temp1211 = ( (  mk1199 ) ( (  al2042 ) ) );
    struct StrBuilder_572 *  sb2043 = ( &temp1211 );
    struct funenv1191  temp1212 = ( (struct funenv1191){ .fun = write1191, .env =  env.envinst1191  } );
    ( temp1212.fun ( temp1212.env ,  (  sb2043 ) ,  (  s2040 ) ) );
    struct funenv631  temp1213 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
    ( temp1213.fun ( temp1213.env ,  (  sb2043 ) ,  ( (  nullchar321 ) ( ) ) ) );
    struct DynStr_134  dynstr2044 = ( (  as_dash_str829 ) ( (  sb2043 ) ) );
    return ( (struct DynStr_134) { .f_contents = ( (struct Slice_5) { .f_ptr = ( ( (  dynstr2044 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub97 ( ( ( (  dynstr2044 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) } ) } );
}

struct funenv1202 {
    struct DynStr_134  (*fun) (  struct env1202  ,    const char*  ,    enum CAllocator_4  );
    struct env1202 env;
};

struct env1214 {
    ;
    struct env1202 envinst1202;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1214 (   struct env1214 env ,    const char*  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1202  temp1215 = ( (struct funenv1202){ .fun = mk_dash_dyn_dash_str1202, .env =  env.envinst1202  } );
    return ( ( (  cast188 ) ( ( ( ( temp1215.fun ( temp1215.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1206 {
    struct DynStr_134  (*fun) (  struct env1206  ,    struct TakeWhile_508  ,    enum CAllocator_4  );
    struct env1206 env;
};

struct env1216 {
    ;
    struct env1206 envinst1206;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1216 (   struct env1216 env ,    struct TakeWhile_508  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1206  temp1217 = ( (struct funenv1206){ .fun = mk_dash_dyn_dash_str1206, .env =  env.envinst1206  } );
    return ( ( (  cast188 ) ( ( ( ( temp1217.fun ( temp1217.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct funenv1210 {
    struct DynStr_134  (*fun) (  struct env1210  ,    struct TakeWhile_513  ,    enum CAllocator_4  );
    struct env1210 env;
};

struct env1218 {
    ;
    struct env1210 envinst1210;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str1218 (   struct env1218 env ,    struct TakeWhile_513  s2047 ,    enum CAllocator_4  al2049 ) {
    struct funenv1210  temp1219 = ( (struct funenv1210){ .fun = mk_dash_dyn_dash_str1210, .env =  env.envinst1210  } );
    return ( ( (  cast188 ) ( ( ( ( temp1219.fun ( temp1219.env ,  (  s2047 ) ,  (  al2049 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  struct timespec   now1220 (  ) {
    struct timespec  temp1221 = ( (  undefined136 ) ( ) );
    struct timespec *  t2202 = ( &temp1221 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic109 ) ( ) ) ,  (  t2202 ) ) );
    return ( * (  t2202 ) );
}

struct Duration_1223 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  enum Ordering_10   cmp1222 (    struct Duration_1223  l2206 ,    struct Duration_1223  r2208 ) {
    enum Ordering_10  scmp2209 = ( (  cmp77 ) ( ( (  l2206 ) .f_secs ) ,  ( (  r2208 ) .f_secs ) ) );
    if ( ( !  eq47 ( (  scmp2209 ) , ( Ordering_10_EQ ) ) ) ) {
        return (  scmp2209 );
    }
    return ( (  cmp77 ) ( ( (  l2206 ) .f_nsecs ) ,  ( (  r2208 ) .f_nsecs ) ) );
}

static  struct Duration_1223   diff1224 (    struct timespec  l2212 ,    struct timespec  r2214 ) {
    int64_t  secdiff2215 = (  op_dash_sub82 ( ( (  l2212 ) .tv_sec ) , ( (  r2214 ) .tv_sec ) ) );
    int64_t  nsdiff2216 = (  op_dash_sub82 ( ( (  l2212 ) .tv_nsec ) , ( (  r2214 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2217 = (  from_dash_integral35 ( 1000000000 ) );
    if ( (  cmp77 ( (  nsdiff2216 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp77 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_1223) { .f_secs = (  secdiff2215 ) , .f_nsecs = (  op_dash_neg84 ( (  nsdiff2216 ) ) ) } );
        } else {
            if ( (  eq40 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) ) ) {
                return ( (struct Duration_1223) { .f_secs = (  from_dash_integral35 ( 0 ) ) , .f_nsecs = (  nsdiff2216 ) } );
            } else {
                return ( (struct Duration_1223) { .f_secs = (  op_dash_sub82 ( (  secdiff2215 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add81 ( (  ns_dash_in_dash_secs2217 ) , (  nsdiff2216 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp77 ( (  secdiff2215 ) , (  from_dash_integral35 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_1223) { .f_secs = (  secdiff2215 ) , .f_nsecs = (  nsdiff2216 ) } );
        } else {
            return ( (struct Duration_1223) { .f_secs = (  op_dash_sub82 ( (  secdiff2215 ) , (  from_dash_integral35 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub82 ( (  ns_dash_in_dash_secs2217 ) , (  nsdiff2216 ) ) ) } );
        }
    }
}

static  struct Duration_1223   duration_dash_from_dash_ns1225 (    int64_t  ns2220 ) {
    int64_t  ns_dash_in_dash_secs2221 = (  from_dash_integral35 ( 1000000000 ) );
    return ( (struct Duration_1223) { .f_secs = (  op_dash_div83 ( (  ns2220 ) , (  ns_dash_in_dash_secs2221 ) ) ) , .f_nsecs = ( (  mod802 ) ( (  ns2220 ) ,  (  ns_dash_in_dash_secs2221 ) ) ) } );
}

static  int64_t   duration_dash_to_dash_ns1226 (    struct Duration_1223  d2232 ) {
    int64_t  ns_dash_in_dash_secs2233 = (  from_dash_integral35 ( 1000000000 ) );
    return (  op_dash_add81 ( (  op_dash_mul32 ( ( (  d2232 ) .f_secs ) , (  ns_dash_in_dash_secs2233 ) ) ) , ( (  d2232 ) .f_nsecs ) ) );
}

static  struct Scanner_289   mk1227 (    struct DynStr_134  s2243 ) {
    return ( (struct Scanner_289) { .f_s = ( (  chars836 ) ( (  s2243 ) ) ) } );
}

static  struct Maybe_725   scan_dash_int1228 (    struct Scanner_289 *  sc2246 ) {
    struct TakeWhile_504  digit_dash_chars2247 = ( (  take_dash_while527 ) ( (  sc2246 ) ,  (  is_dash_digit1110 ) ) );
    if ( ( (  null793 ) ( (  digit_dash_chars2247 ) ) ) ) {
        return ( (struct Maybe_725) { .tag = Maybe_725_None_t } );
    }
    ( (  drop_prime_795 ) ( (  sc2246 ) ,  ( (  count757 ) ( (  digit_dash_chars2247 ) ) ) ) );
    return ( (  parse_dash_int1112 ) ( (  digit_dash_chars2247 ) ) );
}

static  struct Termios_139   enable_dash_raw_dash_mode1229 (  ) {
    struct Termios_139  temp1230 = ( (  undefined138 ) ( ) );
    struct Termios_139 *  orig_dash_termios2254 = ( &temp1230 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno113 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  orig_dash_termios2254 ) ) ) ) );
    struct Termios_139  raw2255 = ( * (  orig_dash_termios2254 ) );
    raw2255 .f_c_dash_lflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors797 ) ( ( (  from_dash_listlike100 ) ( ( (struct Array_102) { ._arr = { ( (  echo114 ) ( ) ) , ( (  icanon115 ) ( ) ) , ( (  isig116 ) ( ) ) , ( ( (  iexten117 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_iflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors798 ) ( ( (  from_dash_listlike103 ) ( ( (struct Array_105) { ._arr = { ( (  brkint118 ) ( ) ) , ( (  icrnl119 ) ( ) ) , ( (  inpck120 ) ( ) ) , ( (  istrip121 ) ( ) ) , ( ( (  ixon122 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_oflag = ( (  u32_dash_and800 ) ( ( (  raw2255 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg801 ) ( ( (  u32_dash_ors799 ) ( ( (  from_dash_listlike106 ) ( ( (struct Array_108) { ._arr = { ( ( (  opost123 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2255 .f_c_dash_cflag = ( (  u32_dash_or796 ) ( ( (  raw2255 ) .f_c_dash_cflag ) ,  ( (  cs8124 ) ( ) ) ) );
    ( (  set1104 ) ( ( & ( (  raw2255 ) .f_c_dash_cc ) ) ,  ( (  vmin125 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( (  set1104 ) ( ( & ( (  raw2255 ) .f_c_dash_cc ) ) ,  ( (  vtime126 ) ( ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno113 ) ( ) ) ,  ( (  tcsa_dash_flush127 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( ( & (  raw2255 ) ) ) ) ) );
    return ( * (  orig_dash_termios2254 ) );
}

static  enum Unit_13   disable_dash_raw_dash_mode1231 (    struct Termios_139 *  og_dash_termios2258 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno113 ) ( ) ) ,  ( (  tcsa_dash_flush127 ) ( ) ) ,  ( (  cast_dash_ptr213 ) ( (  og_dash_termios2258 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_50   read_dash_byte1232 (    int32_t  timeout_dash_ms2262 ) {
    struct Pollfd_222  pfd2263 = ( (struct Pollfd_222) { .f_fd = (  from_dash_integral29 ( 0 ) ) , .f_events = (  from_dash_integral37 ( 1 ) ) , .f_revents = (  from_dash_integral37 ( 0 ) ) } );
    if ( (  cmp78 ( ( ( poll ) ( ( (  cast_dash_ptr221 ) ( ( & (  pfd2263 ) ) ) ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  timeout_dash_ms2262 ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    char  c2264 = ( ( (  zeroed230 ) ( ) ) );
    if ( (  cmp78 ( ( ( read ) ( ( (  stdin_dash_fileno113 ) ( ) ) ,  ( (  cast_dash_ptr210 ) ( ( & (  c2264 ) ) ) ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , (  from_dash_integral29 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    return ( ( Maybe_50_Just ) ( (  c2264 ) ) );
}

static  enum Unit_13   flush_dash_stdout1233 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr262 ) ( ) ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   enable_dash_mouse1234 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   disable_dash_mouse1235 (  ) {
    ( (  print_dash_str22 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_13_Unit );
}

struct env1237 {
    ;
    ;
    ;
    ;
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

struct env1238 {
    bool *  should_dash_resize2268;
};

struct funenv1238 {
    enum Unit_13  (*fun) (  struct env1238  ,    int32_t  );
    struct env1238 env;
};

struct funenv1238  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig1239 ) {
    struct funenv1238  temp1240 = _intr_sigarr [  __intr__sig1239 ];
    temp1240.fun ( temp1240.env ,  __intr__sig1239 );
}

static  enum Unit_13  _intr_register_signal (    int32_t  __intr__sig1241 ,   struct funenv1238  __intr__fun1242 ) {
    _intr_sigarr [  __intr__sig1241 ] =  __intr__fun1242;
    signal(  __intr__sig1241 , _intr_sighandle );
    return Unit_13_Unit;
}

static  enum Unit_13   lam1238 (   struct env1238 env ,    int32_t  dref2275 ) {
    (* env.should_dash_resize2268 ) = ( true );
    return ( Unit_13_Unit );
}

static  struct Tui_647   mk1237 (   struct env1237 env ) {
    struct Termios_139  og_dash_termios2270 = ( (  enable_dash_raw_dash_mode1229 ) ( ) );
    ( (  hide_dash_cursor1165 ) ( ) );
    ( (  reset_dash_colors1177 ) ( ) );
    ( (  clear_dash_screen1178 ) ( ) );
    ( (  enable_dash_mouse1234 ) ( ) );
    ( (  flush_dash_stdout1233 ) ( ) );
    enum ColorPalette_648  palette2271 = ( (  query_dash_palette1172 ) ( ) );
    struct Tuple2_1010  dims2272 = ( (  get_dash_dimensions1168 ) ( ) );
    uint32_t  fps2273 = (  from_dash_integral36 ( 60 ) );
    struct timespec  last_dash_sync2274 = ( (  now1220 ) ( ) );
    struct env1238 envinst1238 = {
        .should_dash_resize2268 = env.should_dash_resize2268 ,
    };
    ( _intr_register_signal ( (  from_dash_integral29 ( 28 ) ) , ( (struct funenv1238){ .fun = lam1238, .env = envinst1238 } ) ) );
    return ( (struct Tui_647) { .f_width = ( (  fst1009 ) ( (  dims2272 ) ) ) , .f_height = ( (  snd1011 ) ( (  dims2272 ) ) ) , .f_target_dash_fps = (  fps2273 ) , .f_actual_dash_fps = (  from_dash_integral36 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2274 ) , .f_fps_dash_ts = (  last_dash_sync2274 ) , .f_fps_dash_count = (  from_dash_integral36 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2270 ) , .f_palette = (  palette2271 ) } );
}

static  enum Unit_13   sync1243 (    struct Tui_647 *  tui2278 ) {
    if ( (  eq42 ( ( ( * (  tui2278 ) ) .f_target_dash_fps ) , (  from_dash_integral36 ( 0 ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    int64_t  frame_dash_ns2279 = (  op_dash_div83 ( (  from_dash_integral35 ( 1000000000 ) ) , ( (  size_dash_i6434 ) ( ( (  u32_dash_size275 ) ( ( ( * (  tui2278 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1244 = ( (  undefined136 ) ( ) );
    struct timespec *  now2280 = ( &temp1244 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic109 ) ( ) ) ,  (  now2280 ) ) );
    int64_t  elapsed_dash_ns2281 = (  op_dash_add81 ( (  op_dash_mul32 ( (  op_dash_sub82 ( ( ( * (  now2280 ) ) .tv_sec ) , ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000000000 ) ) ) ) , (  op_dash_sub82 ( ( ( * (  now2280 ) ) .tv_nsec ) , ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2282 = (  op_dash_sub82 ( (  frame_dash_ns2279 ) , (  elapsed_dash_ns2281 ) ) );
    if ( (  cmp77 ( (  sleep_dash_ns2282 ) , (  from_dash_integral35 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1245 = ( (struct timespec) { .tv_sec = (  from_dash_integral35 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2282 ) } );
        struct timespec *  ts2283 = ( &temp1245 );
        ( ( nanosleep ) ( (  ts2283 ) ,  ( (  null_dash_ptr264 ) ( ) ) ) );
    }
    struct timespec  temp1246 = ( (  undefined136 ) ( ) );
    struct timespec *  last_dash_sync2284 = ( &temp1246 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic109 ) ( ) ) ,  (  last_dash_sync2284 ) ) );
    (*  tui2278 ) .f_last_dash_sync = ( * (  last_dash_sync2284 ) );
    (*  tui2278 ) .f_fps_dash_count = (  op_dash_add90 ( ( ( * (  tui2278 ) ) .f_fps_dash_count ) , (  from_dash_integral36 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2285 = (  op_dash_add81 ( (  op_dash_mul32 ( (  op_dash_sub82 ( ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2278 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral35 ( 1000 ) ) ) ) , (  op_dash_div83 ( (  op_dash_sub82 ( ( ( ( * (  tui2278 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2278 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral35 ( 1000000 ) ) ) ) ) );
    if ( (  cmp77 ( (  fps_dash_elapsed_dash_ms2285 ) , (  from_dash_integral35 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2278 ) .f_actual_dash_fps = ( ( * (  tui2278 ) ) .f_fps_dash_count );
        (*  tui2278 ) .f_fps_dash_count = (  from_dash_integral36 ( 0 ) );
        (*  tui2278 ) .f_fps_dash_ts = ( ( * (  tui2278 ) ) .f_last_dash_sync );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   deinit1247 (    struct Tui_647 *  tui2288 ) {
    ( (  disable_dash_mouse1235 ) ( ) );
    ( (  show_dash_cursor1164 ) ( ) );
    ( (  reset_dash_colors1177 ) ( ) );
    ( (  clear_dash_screen1178 ) ( ) );
    ( (  reset_dash_cursor_dash_position1167 ) ( ) );
    ( (  disable_dash_raw_dash_mode1231 ) ( ( & ( ( * (  tui2288 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout1233 ) ( ) );
    return ( Unit_13_Unit );
}

static  enum MouseButton_147   btn_dash_to_dash_mouse_dash_button1248 (    int64_t  btn2295 ) {
    return ( {  int32_t  dref2296 = ( (  i64_dash_i32272 ) ( (  btn2295 ) ) ) ;  dref2296 == 0 ? ( MouseButton_147_MouseLeft ) :  dref2296 == 1 ? ( MouseButton_147_MouseMiddle ) :  dref2296 == 2 ? ( MouseButton_147_MouseRight ) :  dref2296 == 64 ? ( MouseButton_147_ScrollUp ) :  dref2296 == 65 ? ( MouseButton_147_ScrollDown ) : ( (  panic_prime_996 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_1250 {
    enum {
        Maybe_1250_None_t,
        Maybe_1250_Just_t,
    } tag;
    union {
        struct {
            struct Key_548  field0;
        } Maybe_1250_Just_s;
    } stuff;
};

static struct Maybe_1250 Maybe_1250_Just (  struct Key_548  field0 ) {
    return ( struct Maybe_1250 ) { .tag = Maybe_1250_Just_t, .stuff = { .Maybe_1250_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1250   parse_dash_ss31249 (    char  c2299 ) {
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_Up_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_Down_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_Right_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_Left_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_Home_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_End_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_F1_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_F2_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_F3_t } ) ) );
    }
    if ( (  eq48 ( (  c2299 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_1250_Just ) ( ( (struct Key_548) { .tag = Key_548_F4_t } ) ) );
    }
    return ( (struct Maybe_1250) { .tag = Maybe_1250_None_t } );
}

static  struct Maybe_546   parse_dash_csi1251 (    struct DynStr_134  seq2302 ) {
    if ( (  eq45 ( ( ( (  seq2302 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    char  last2303 = (  elem_dash_get1083 ( ( (  seq2302 ) .f_contents ) , (  op_dash_sub97 ( ( ( (  seq2302 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) );
    if ( ( (  eq48 ( (  elem_dash_get1083 ( ( (  seq2302 ) .f_contents ) , (  from_dash_integral11 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_289  temp1252 = ( (  mk1227 ) ( ( (  substr323 ) ( (  seq2302 ) ,  (  from_dash_integral11 ( 1 ) ) ,  ( ( (  seq2302 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_289 *  sc2304 = ( &temp1252 );
        struct Maybe_725  dref2305 = ( (  scan_dash_int1228 ) ( (  sc2304 ) ) );
        if ( dref2305.tag == Maybe_725_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2305.tag == Maybe_725_Just_t ) {
            ( (  next517 ) ( (  sc2304 ) ) );
            struct Maybe_725  dref2307 = ( (  scan_dash_int1228 ) ( (  sc2304 ) ) );
            if ( dref2307.tag == Maybe_725_None_t ) {
                return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
            }
            else if ( dref2307.tag == Maybe_725_Just_t ) {
                ( (  next517 ) ( (  sc2304 ) ) );
                struct Maybe_725  dref2309 = ( (  scan_dash_int1228 ) ( (  sc2304 ) ) );
                if ( dref2309.tag == Maybe_725_None_t ) {
                    return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
                }
                else if ( dref2309.tag == Maybe_725_Just_t ) {
                    return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Mouse ) ( ( (struct MouseEvent_549) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button1248 ) ( ( dref2305 .stuff .Maybe_725_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub86 ( ( (  i64_dash_i32272 ) ( ( dref2307 .stuff .Maybe_725_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  op_dash_sub86 ( ( (  i64_dash_i32272 ) ( ( dref2309 .stuff .Maybe_725_Just_s .field0 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_pressed = (  eq48 ( (  last2303 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
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
        struct Scanner_289  temp1253 = ( (  mk1227 ) ( (  seq2302 ) ) );
        struct Scanner_289 *  sc2311 = ( &temp1253 );
        struct Maybe_725  dref2312 = ( (  scan_dash_int1228 ) ( (  sc2311 ) ) );
        if ( dref2312.tag == Maybe_725_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2312.tag == Maybe_725_Just_t ) {
            return ( {  int32_t  dref2314 = ( (  i64_dash_i32272 ) ( ( dref2312 .stuff .Maybe_725_Just_s .field0 ) ) ) ;  dref2314 == 1 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Home_t } ) ) ) ) ) :  dref2314 == 2 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Insert_t } ) ) ) ) ) :  dref2314 == 3 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Delete_t } ) ) ) ) ) :  dref2314 == 4 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_End_t } ) ) ) ) ) :  dref2314 == 5 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_PageUp_t } ) ) ) ) ) :  dref2314 == 6 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_PageDown_t } ) ) ) ) ) :  dref2314 == 15 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F5_t } ) ) ) ) ) :  dref2314 == 17 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F6_t } ) ) ) ) ) :  dref2314 == 18 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F7_t } ) ) ) ) ) :  dref2314 == 19 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F8_t } ) ) ) ) ) :  dref2314 == 20 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F9_t } ) ) ) ) ) :  dref2314 == 21 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F10_t } ) ) ) ) ) :  dref2314 == 23 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F11_t } ) ) ) ) ) :  dref2314 == 24 ? ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_F12_t } ) ) ) ) ) : ( (struct Maybe_546) { .tag = Maybe_546_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
}

static  struct Maybe_546   read_dash_key1254 (  ) {
    char  temp1255 = ( (  undefined131 ) ( ) );
    char *  ch2316 = ( &temp1255 );
    struct Maybe_50  dref2317 = ( (  read_dash_byte1232 ) ( (  from_dash_integral29 ( 0 ) ) ) );
    if ( dref2317.tag == Maybe_50_None_t ) {
        return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
    }
    else if ( dref2317.tag == Maybe_50_Just_t ) {
        (*  ch2316 ) = ( dref2317 .stuff .Maybe_50_Just_s .field0 );
    }
    if ( (  eq43 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 13 ) ) ) ) ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Enter_t } ) ) ) ) );
    }
    if ( (  eq43 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) ) ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp80 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) == 0 ) && ( !  eq43 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 9 ) ) ) ) ) ) {
        char  letter2319 = ( (  i32_dash_char985 ) ( ( (  u32_dash_i32277 ) ( ( (  u32_dash_or796 ) ( ( (  i32_dash_u32269 ) ( ( (  char_dash_i32983 ) ( ( * (  ch2316 ) ) ) ) ) ) ,  ( (  from_dash_hex1160 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( ( Key_548_Ctrl ) ( (  letter2319 ) ) ) ) ) ) );
    }
    if ( ( !  eq43 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 27 ) ) ) ) ) {
        if ( (  cmp80 ( ( (  char_dash_u8984 ) ( ( * (  ch2316 ) ) ) ) , (  from_dash_integral38 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key1254 ) ( ) );
        } else {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( ( Key_548_Char ) ( ( * (  ch2316 ) ) ) ) ) ) ) );
        }
    }
    char  temp1256 = ( (  undefined131 ) ( ) );
    char *  ch22320 = ( &temp1256 );
    struct Maybe_50  dref2321 = ( (  read_dash_byte1232 ) ( (  from_dash_integral29 ( 50 ) ) ) );
    if ( dref2321.tag == Maybe_50_None_t ) {
        return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
    }
    else if ( dref2321.tag == Maybe_50_Just_t ) {
        (*  ch22320 ) = ( dref2321 .stuff .Maybe_50_Just_s .field0 );
    }
    if ( (  eq48 ( ( * (  ch22320 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_184  temp1257 = ( ( (  zeroed242 ) ( ) ) );
        struct Array_184 *  seq2323 = ( &temp1257 );
        int32_t  slen2324 = (  from_dash_integral29 ( 0 ) );
        while ( (  cmp78 ( (  slen2324 ) , (  from_dash_integral29 ( 31 ) ) ) == 0 ) ) {
            char  temp1258 = ( (  undefined131 ) ( ) );
            char *  sc2325 = ( &temp1258 );
            struct Maybe_50  dref2326 = ( (  read_dash_byte1232 ) ( (  from_dash_integral29 ( 50 ) ) ) );
            if ( dref2326.tag == Maybe_50_None_t ) {
                break;
            }
            else if ( dref2326.tag == Maybe_50_Just_t ) {
                (*  sc2325 ) = ( dref2326 .stuff .Maybe_50_Just_s .field0 );
            }
            ( (  set1105 ) ( (  seq2323 ) ,  ( (  i32_dash_size271 ) ( (  slen2324 ) ) ) ,  ( * (  sc2325 ) ) ) );
            slen2324 = (  op_dash_add85 ( (  slen2324 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( ( (  cmp80 ( ( (  char_dash_u8984 ) ( ( * (  sc2325 ) ) ) ) , (  from_dash_integral38 ( 64 ) ) ) != 0 ) && (  cmp80 ( ( (  char_dash_u8984 ) ( ( * (  sc2325 ) ) ) ) , (  from_dash_integral38 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi1251 ) ( ( (struct DynStr_134) { .f_contents = ( (  subslice295 ) ( ( (  as_dash_slice1106 ) ( (  seq2323 ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size271 ) ( (  slen2324 ) ) ) ) ) } ) ) );
    }
    if ( (  eq48 ( ( * (  ch22320 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp1259 = ( (  undefined131 ) ( ) );
        char *  sc2328 = ( &temp1259 );
        struct Maybe_50  dref2329 = ( (  read_dash_byte1232 ) ( (  from_dash_integral29 ( 50 ) ) ) );
        if ( dref2329.tag == Maybe_50_None_t ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
        }
        else if ( dref2329.tag == Maybe_50_Just_t ) {
            (*  sc2328 ) = ( dref2329 .stuff .Maybe_50_Just_s .field0 );
        }
        struct Maybe_1250  dref2331 = ( (  parse_dash_ss31249 ) ( ( * (  sc2328 ) ) ) );
        if ( dref2331.tag == Maybe_1250_None_t ) {
            return ( (struct Maybe_546) { .tag = Maybe_546_None_t } );
        }
        else if ( dref2331.tag == Maybe_1250_Just_t ) {
            return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( dref2331 .stuff .Maybe_1250_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_546_Just ) ( ( ( InputEvent_547_Key ) ( ( (struct Key_548) { .tag = Key_548_Escape_t } ) ) ) ) );
}

struct env1260 {
    ;
    ;
    ;
    bool *  should_dash_resize2268;
};

static  bool   update_dash_dimensions1260 (   struct env1260 env ,    struct Tui_647 *  tui2335 ) {
    if ( ( ! ( * ( env.should_dash_resize2268 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2268 ) = ( false );
    struct Tuple2_1010  dim2336 = ( (  get_dash_dimensions1168 ) ( ) );
    uint32_t  w2337 = ( (  fst1009 ) ( (  dim2336 ) ) );
    uint32_t  h2338 = ( (  snd1011 ) ( (  dim2336 ) ) );
    (*  tui2335 ) .f_width = (  w2337 );
    (*  tui2335 ) .f_height = (  h2338 );
    return ( true );
}

static  struct Cell_56   lam1262 (    struct Cell_56  dref2356 ) {
    return ( (struct Cell_56) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_bg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) } );
}

static  struct Cell_56   lam1263 (    struct Cell_56  dref2358 ) {
    return ( (struct Cell_56) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_bg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) } );
}

static  struct Screen_646   mk_dash_screen1261 (    struct Tui_647 *  tui2352 ,    enum CAllocator_4  al2354 ) {
    struct Slice_578  cur2355 = ( (  allocate1096 ) ( (  al2354 ) ,  ( (  u32_dash_size275 ) ( (  op_dash_mul92 ( ( ( * (  tui2352 ) ) .f_width ) , ( ( * (  tui2352 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1084 ) ( (  cur2355 ) ,  (  lam1262 ) ) );
    struct Slice_578  prev2357 = ( (  allocate1096 ) ( (  al2354 ) ,  ( (  u32_dash_size275 ) ( (  op_dash_mul92 ( ( ( * (  tui2352 ) ) .f_width ) , ( ( * (  tui2352 ) ) .f_height ) ) ) ) ) ) );
    ( (  map1085 ) ( (  prev2357 ) ,  (  lam1263 ) ) );
    return ( (struct Screen_646) { .f_current = (  cur2355 ) , .f_previous = (  prev2357 ) , .f_al = (  al2354 ) , .f_tui = (  tui2352 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) } );
}

static  enum Unit_13   free_dash_screen1264 (    struct Screen_646 *  screen2361 ) {
    enum CAllocator_4  al2362 = ( ( * (  screen2361 ) ) .f_al );
    ( (  free1101 ) ( (  al2362 ) ,  ( ( * (  screen2361 ) ) .f_current ) ) );
    ( (  free1101 ) ( (  al2362 ) ,  ( ( * (  screen2361 ) ) .f_previous ) ) );
    return ( Unit_13_Unit );
}

static  struct Cell_56   lam1266 (    struct Cell_56  dref2366 ) {
    return ( (struct Cell_56) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_bg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) } );
}

static  enum Unit_13   clear_dash_screen1265 (    struct Screen_646 *  screen2365 ) {
    ( (  map1086 ) ( ( ( * (  screen2365 ) ) .f_current ) ,  (  lam1266 ) ) );
    return ( Unit_13_Unit );
}

struct RenderState_1268 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_57  f_fg;
    struct Color_57  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_13   emit_dash_cell1267 (    struct RenderState_1268 *  rs2370 ,    struct Cell_56 *  c2372 ,    uint32_t  x2374 ,    uint32_t  y2376 ) {
    if ( ( ( !  eq42 ( (  x2374 ) , ( ( * (  rs2370 ) ) .f_x ) ) ) || ( !  eq42 ( (  y2376 ) , ( ( * (  rs2370 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1166 ) ( (  x2374 ) ,  (  y2376 ) ) );
        (*  rs2370 ) .f_x = (  x2374 );
        (*  rs2370 ) .f_y = (  y2376 );
    }
    char  char2377 = ( ( * (  c2372 ) ) .f_c );
    struct Color_57  bg2378 = ( ( * (  c2372 ) ) .f_bg );
    if ( ( ( (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq48 ( (  char2377 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2377 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2378 = ( ( Color_57_Color8 ) ( ( Color8_58_Red8 ) ) );
    }
    if ( ( !  eq62 ( ( ( * (  rs2370 ) ) .f_fg ) , ( ( * (  c2372 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1183 ) ( ( ( * (  c2372 ) ) .f_fg ) ) );
        (*  rs2370 ) .f_fg = ( ( * (  c2372 ) ) .f_fg );
    }
    if ( ( !  eq62 ( ( ( * (  rs2370 ) ) .f_bg ) , (  bg2378 ) ) ) ) {
        ( (  set_dash_bg1184 ) ( (  bg2378 ) ) );
        (*  rs2370 ) .f_bg = (  bg2378 );
    }
    ( (  print_dash_str28 ) ( (  char2377 ) ) );
    (*  rs2370 ) .f_x = (  op_dash_add90 ( ( ( * (  rs2370 ) ) .f_x ) , (  from_dash_integral36 ( 1 ) ) ) );
    return ( Unit_13_Unit );
}

static  uint32_t   render_dash_screen1269 (    struct Screen_646 *  screen2381 ) {
    int32_t  w2382 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2381 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2383 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2381 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1268  temp1270 = ( (struct RenderState_1268) { .f_x = (  from_dash_integral36 ( 0 ) ) , .f_y = (  from_dash_integral36 ( 0 ) ) , .f_fg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_bg = ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) , .f_changes = (  from_dash_integral36 ( 0 ) ) } );
    struct RenderState_1268 *  rs2384 = ( &temp1270 );
    ( (  move_dash_cursor_dash_to1166 ) ( (  from_dash_integral36 ( 0 ) ) ,  (  from_dash_integral36 ( 0 ) ) ) );
    struct RangeIter_367  temp1271 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  h2383 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1272 =  next368 (&temp1271);
        if (  __cond1272 .tag == 0 ) {
            break;
        }
        int32_t  y2386 =  __cond1272 .stuff .Maybe_329_Just_s .field0;
        struct RangeIter_367  temp1273 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  w2382 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_329  __cond1274 =  next368 (&temp1273);
            if (  __cond1274 .tag == 0 ) {
                break;
            }
            int32_t  x2388 =  __cond1274 .stuff .Maybe_329_Just_s .field0;
            size_t  i2389 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2386 ) , (  w2382 ) ) ) , (  x2388 ) ) ) ) );
            struct Cell_56 *  cur2390 = ( (  get_dash_ptr1065 ) ( ( ( * (  screen2381 ) ) .f_current ) ,  (  i2389 ) ) );
            struct Cell_56 *  prev2391 = ( (  get_dash_ptr1065 ) ( ( ( * (  screen2381 ) ) .f_previous ) ,  (  i2389 ) ) );
            if ( ( ( !  eq55 ( (  cur2390 ) , (  prev2391 ) ) ) || ( ( * (  screen2381 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2384 ) .f_changes = (  op_dash_add90 ( ( ( * (  rs2384 ) ) .f_changes ) , (  from_dash_integral36 ( 1 ) ) ) );
                ( (  emit_dash_cell1267 ) ( (  rs2384 ) ,  (  cur2390 ) ,  ( (  i32_dash_u32269 ) ( (  x2388 ) ) ) ,  ( (  i32_dash_u32269 ) ( (  y2386 ) ) ) ) );
                (*  prev2391 ) = ( * (  cur2390 ) );
            }
        }
    }
    (*  screen2381 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors1177 ) ( ) );
    ( (  flush_dash_stdout1233 ) ( ) );
    return ( ( * (  rs2384 ) ) .f_changes );
}

struct funenv1260 {
    bool  (*fun) (  struct env1260  ,    struct Tui_647 *  );
    struct env1260 env;
};

struct env1275 {
    ;
    ;
    ;
    struct env1260 envinst1260;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed1275 (   struct env1275 env ,    struct Screen_646 *  screen2394 ) {
    struct Tui_647 *  tui2395 = ( ( * (  screen2394 ) ) .f_tui );
    struct funenv1260  temp1276 = ( (struct funenv1260){ .fun = update_dash_dimensions1260, .env =  env.envinst1260  } );
    if ( ( ! ( temp1276.fun ( temp1276.env ,  (  tui2395 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2394 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2396 = ( ( * ( ( * (  screen2394 ) ) .f_tui ) ) .f_width );
    uint32_t  h2397 = ( ( * ( ( * (  screen2394 ) ) .f_tui ) ) .f_height );
    size_t  nusz2398 = ( (  u32_dash_size275 ) ( (  op_dash_mul92 ( (  w2396 ) , (  h2397 ) ) ) ) );
    if ( (  cmp9 ( (  nusz2398 ) , ( ( ( * (  screen2394 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_646  nuscreen2399 = ( (  mk_dash_screen1261 ) ( (  tui2395 ) ,  ( ( * (  screen2394 ) ) .f_al ) ) );
    (*  screen2394 ) .f_current = ( (  nuscreen2399 ) .f_current );
    (*  screen2394 ) .f_previous = ( (  nuscreen2399 ) .f_previous );
    return ( true );
}

static  enum Unit_13   set_dash_screen_dash_fg1277 (    struct Screen_646 *  screen2402 ,    struct Color_57  c2404 ) {
    (*  screen2402 ) .f_default_dash_fg = (  c2404 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_bg1278 (    struct Screen_646 *  screen2407 ,    struct Color_57  c2409 ) {
    (*  screen2407 ) .f_default_dash_bg = (  c2409 );
    return ( Unit_13_Unit );
}

static  enum Unit_13   set_dash_screen_dash_colors1279 (    struct Screen_646 *  screen2412 ,    struct Color_57  fg2414 ,    struct Color_57  bg2416 ) {
    (*  screen2412 ) .f_default_dash_fg = (  fg2414 );
    (*  screen2412 ) .f_default_dash_bg = (  bg2416 );
    return ( Unit_13_Unit );
}

static  struct Maybe_1006   get_dash_cell_dash_ptr1280 (    struct Screen_646 *  screen2423 ,    int32_t  x2425 ,    int32_t  y2427 ) {
    int32_t  w2428 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2423 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp78 ( (  x2425 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp78 ( (  x2425 ) , (  w2428 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    }
    if ( ( (  cmp78 ( (  y2427 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) || (  cmp78 ( (  y2427 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2423 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1006) { .tag = Maybe_1006_None_t } );
    }
    size_t  i2429 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2427 ) , (  w2428 ) ) ) , (  x2425 ) ) ) ) );
    return ( ( Maybe_1006_Just ) ( ( (  get_dash_ptr1065 ) ( ( ( * (  screen2423 ) ) .f_current ) ,  (  i2429 ) ) ) ) );
}

static  enum Unit_13   fill_dash_default1281 (    struct Screen_646 *  screen2432 ) {
    struct RangeIter_367  temp1282 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1283 =  next368 (&temp1282);
        if (  __cond1283 .tag == 0 ) {
            break;
        }
        int32_t  y2434 =  __cond1283 .stuff .Maybe_329_Just_s .field0;
        struct RangeIter_367  temp1284 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2432 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_329  __cond1285 =  next368 (&temp1284);
            if (  __cond1285 .tag == 0 ) {
                break;
            }
            int32_t  x2436 =  __cond1285 .stuff .Maybe_329_Just_s .field0;
            struct Cell_56 *  cell2437 = ( (  or_dash_fail1005 ) ( ( (  get_dash_cell_dash_ptr1280 ) ( (  screen2432 ) ,  (  x2436 ) ,  (  y2434 ) ) ) ,  ( "no cell??" ) ) );
            (*  cell2437 ) .f_bg = ( ( * (  screen2432 ) ) .f_default_dash_bg );
        }
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   put_dash_char1286 (    struct Screen_646 *  screen2440 ,    char  c2442 ,    int32_t  x2444 ,    int32_t  y2446 ) {
    int32_t  w2447 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2440 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp78 ( (  x2444 ) , (  w2447 ) ) != 0 ) || (  cmp78 ( (  y2446 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2440 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_13_Unit );
    }
    size_t  i2448 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2446 ) , (  w2447 ) ) ) , (  x2444 ) ) ) ) );
    struct Color_57  fg2449 = ( ( * (  screen2440 ) ) .f_default_dash_fg );
    struct Color_57  bg2450 = ( ( * (  screen2440 ) ) .f_default_dash_bg );
    char  c2451 = (  c2442 );
    ( (  set1073 ) ( ( ( * (  screen2440 ) ) .f_current ) ,  (  i2448 ) ,  ( (struct Cell_56) { .f_c = (  c2451 ) , .f_fg = (  fg2449 ) , .f_bg = (  bg2450 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam645 (   struct env645 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1287 (    struct Screen_646 *  screen2454 ,    int32_t  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
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
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1288 (    struct Screen_646 *  screen2454 ,    struct StrConcat_822  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env652 envinst652 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each651 ) ( ( (  zip487 ) ( ( (  chars961 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv652){ .fun = lam652, .env = envinst652 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam656 (   struct env656 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1289 (    struct Screen_646 *  screen2454 ,    struct StrConcat_838  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env656 envinst656 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each655 ) ( ( (  zip489 ) ( ( (  chars962 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv656){ .fun = lam656, .env = envinst656 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam660 (   struct env660 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1290 (    struct Screen_646 *  screen2454 ,    struct StrConcat_840  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env660 envinst660 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each659 ) ( ( (  zip491 ) ( ( (  chars963 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv660){ .fun = lam660, .env = envinst660 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam664 (   struct env664 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1291 (    struct Screen_646 *  screen2454 ,    struct StrConcat_866  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env664 envinst664 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each663 ) ( ( (  zip493 ) ( ( (  chars964 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv664){ .fun = lam664, .env = envinst664 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam668 (   struct env668 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1292 (    struct Screen_646 *  screen2454 ,    struct StrConcat_17  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
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
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1293 (    struct Screen_646 *  screen2454 ,    struct StrConcat_868  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
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
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1294 (    struct Screen_646 *  screen2454 ,    struct StrConcat_875  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env676 envinst676 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each675 ) ( ( (  zip499 ) ( ( (  chars965 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv676){ .fun = lam676, .env = envinst676 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam680 (   struct env680 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1295 (    struct Screen_646 *  screen2454 ,    struct StrConcat_880  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env680 envinst680 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each679 ) ( ( (  zip487 ) ( ( (  chars966 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv680){ .fun = lam680, .env = envinst680 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam684 (   struct env684 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1296 (    struct Screen_646 *  screen2454 ,    struct StrConcat_895  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env684 envinst684 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each683 ) ( ( (  zip487 ) ( ( (  chars967 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv684){ .fun = lam684, .env = envinst684 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   lam688 (   struct env688 env ,    struct Tuple2_355  dref2467 ) {
    ( (  set1073 ) ( ( ( * ( env.screen2454 ) ) .f_current ) ,  (  op_dash_add96 ( ( env.i2462 ) , ( (  i32_dash_size271 ) ( ( dref2467 .field1 ) ) ) ) ) ,  ( (struct Cell_56) { .f_c = ( dref2467 .field0 ) , .f_fg = ( env.fg2465 ) , .f_bg = ( env.bg2466 ) } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str1297 (    struct Screen_646 *  screen2454 ,    struct StrConcat_899  s2456 ,    int32_t  x2458 ,    int32_t  y2460 ) {
    if ( (  cmp78 ( (  y2460 ) , ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) {
        return ( Unit_13_Unit );
    }
    int32_t  w2461 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2454 ) ) .f_tui ) ) .f_width ) ) );
    size_t  i2462 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  op_dash_mul87 ( (  y2460 ) , (  w2461 ) ) ) , (  x2458 ) ) ) ) );
    int32_t  x2463 = ( (  min806 ) ( (  x2458 ) ,  (  w2461 ) ) );
    size_t  max_dash_len2464 = ( (  i32_dash_size271 ) ( (  op_dash_sub86 ( (  w2461 ) , (  x2463 ) ) ) ) );
    struct Color_57  fg2465 = ( ( * (  screen2454 ) ) .f_default_dash_fg );
    struct Color_57  bg2466 = ( ( * (  screen2454 ) ) .f_default_dash_bg );
    struct env688 envinst688 = {
        .bg2466 =  bg2466 ,
        .screen2454 =  screen2454 ,
        .fg2465 =  fg2465 ,
        .i2462 =  i2462 ,
    };
    ( (  for_dash_each687 ) ( ( (  zip501 ) ( ( (  chars968 ) ( (  s2456 ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (struct funenv688){ .fun = lam688, .env = envinst688 } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1298 (    struct Screen_646 *  screen2472 ,    int32_t  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count761 ) ( ( (  chars816 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1287 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1299 (    struct Screen_646 *  screen2472 ,    struct StrConcat_822  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count763 ) ( ( (  chars961 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1288 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1300 (    struct Screen_646 *  screen2472 ,    struct StrConcat_838  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count765 ) ( ( (  chars962 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1289 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1301 (    struct Screen_646 *  screen2472 ,    struct StrConcat_840  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count767 ) ( ( (  chars963 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1290 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1302 (    struct Screen_646 *  screen2472 ,    struct StrConcat_866  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count769 ) ( ( (  chars964 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1291 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1303 (    struct Screen_646 *  screen2472 ,    struct StrConcat_17  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count771 ) ( ( (  chars909 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1292 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1304 (    struct Screen_646 *  screen2472 ,    struct StrConcat_868  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count773 ) ( ( (  chars871 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1293 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1305 (    struct Screen_646 *  screen2472 ,    struct StrConcat_875  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count775 ) ( ( (  chars965 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1294 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1306 (    struct Screen_646 *  screen2472 ,    struct StrConcat_880  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count763 ) ( ( (  chars966 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1295 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1307 (    struct Screen_646 *  screen2472 ,    struct StrConcat_895  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count763 ) ( ( (  chars967 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1296 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   draw_dash_str_dash_right1308 (    struct Screen_646 *  screen2472 ,    struct StrConcat_899  s2474 ,    int32_t  x2476 ,    int32_t  y2478 ) {
    int32_t  slen2479 = ( (  size_dash_i32273 ) ( ( (  count777 ) ( ( (  chars968 ) ( (  s2474 ) ) ) ) ) ) );
    int32_t  w2480 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2472 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x2481 = (  op_dash_sub86 ( (  op_dash_sub86 ( (  w2480 ) , (  x2476 ) ) ) , (  slen2479 ) ) );
    ( (  draw_dash_str1297 ) ( (  screen2472 ) ,  (  s2474 ) ,  (  x2481 ) ,  (  y2478 ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_316   try_dash_read_dash_contents1309 (    const char*  filename2856 ,    enum CAllocator_4  al2858 ) {
    FILE *  file2859 = ( ( fopen ) ( (  filename2856 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null265 ) ( (  file2859 ) ) ) ) {
        return ( (struct Maybe_316) { .tag = Maybe_316_None_t } );
    }
    ( ( fseek ) ( (  file2859 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_end111 ) ( ) ) ) );
    int32_t  file_dash_size2860 = ( ( ftell ) ( (  file2859 ) ) );
    ( ( fseek ) ( (  file2859 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  seek_dash_set110 ) ( ) ) ) );
    struct Slice_5  file_dash_buf2861 = ( ( (  allocate1095 ) ( (  al2858 ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( (  file_dash_size2860 ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2861 ) .f_ptr ) ,  (  from_dash_integral29 ( 1 ) ) ,  (  file_dash_size2860 ) ,  (  file2859 ) ) );
    ( (  set1072 ) ( (  file_dash_buf2861 ) ,  ( (  i32_dash_size271 ) ( (  file_dash_size2860 ) ) ) ,  ( (  nullchar321 ) ( ) ) ) );
    ( ( fclose ) ( (  file2859 ) ) );
    struct DynStr_134  str2862 = ( (struct DynStr_134) { .f_contents = (  file_dash_buf2861 ) } );
    return ( ( Maybe_316_Just ) ( (  str2862 ) ) );
}

static  struct DynStr_134   read_dash_contents1310 (    const char*  filename2865 ,    enum CAllocator_4  al2867 ) {
    return ( (  or_dash_fail999 ) ( ( (  try_dash_read_dash_contents1309 ) ( (  filename2865 ) ,  (  al2867 ) ) ) ,  ( ( StrConcat_913_StrConcat ) ( ( ( StrConcat_914_StrConcat ) ( ( "could not open file " ) ,  (  filename2865 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "!" ) ) ) ) ) ) );
}

static  bool   try_dash_write_dash_contents1311 (    const char*  filename2870 ,    struct DynStr_134  contents2872 ) {
    FILE *  file2873 = ( ( fopen ) ( (  filename2870 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null265 ) ( (  file2873 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_290  it2874 = ( (  chars836 ) ( (  contents2872 ) ) );
    while ( ( true ) ) {
        struct Maybe_50  dref2875 = ( (  next331 ) ( ( & (  it2874 ) ) ) );
        if ( dref2875.tag == Maybe_50_None_t ) {
            ( ( fclose ) ( (  file2873 ) ) );
            return ( true );
        }
        else if ( dref2875.tag == Maybe_50_Just_t ) {
            int32_t  chars_dash_written2877 = ( ( fprintf ) ( (  file2873 ) ,  ( "%c" ) ,  ( dref2875 .stuff .Maybe_50_Just_s .field0 ) ) );
            if ( (  cmp78 ( (  chars_dash_written2877 ) , (  from_dash_integral29 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable988 ) ( ) );
}

static  enum Unit_13   write_dash_contents1312 (    const char*  filename2880 ,    struct DynStr_134  contents2882 ) {
    if ( ( ! ( (  try_dash_write_dash_contents1311 ) ( (  filename2880 ) ,  (  contents2882 ) ) ) ) ) {
        ( (  panic995 ) ( ( ( StrConcat_914_StrConcat ) ( ( "could not write to file " ) ,  (  filename2880 ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

static  struct Slice_1067   get1313 (  ) {
    return ( (struct Slice_1067) { .f_ptr = ( (  offset_dash_ptr155 ) ( ( _global_argv ) ,  (  from_dash_integral35 ( 1 ) ) ) ) , .f_count = (  op_dash_sub97 ( ( _global_argc ) , (  from_dash_integral11 ( 1 ) ) ) ) } );
}

static  int32_t   char_dash_len1314 (    char  c2484 ) {
    if ( (  eq48 ( (  c2484 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
        int32_t  tab_dash_size2485 = (  from_dash_integral29 ( 2 ) );
        return (  tab_dash_size2485 );
    } else {
        return (  from_dash_integral29 ( 1 ) );
    }
}

static  bool   eq1317 (    struct Cursor_804  l2492 ,    struct Cursor_804  r2494 ) {
    return ( (  eq41 ( ( (  l2492 ) .f_x ) , ( (  r2494 ) .f_x ) ) ) && (  eq41 ( ( (  l2492 ) .f_y ) , ( (  r2494 ) .f_y ) ) ) );
}

static  int32_t   from_dash_visual1318 (    struct Visual_1019  dref2504 ) {
    return ( dref2504 .field0 );
}

struct Tuple2_1320 {
    struct Mode_823  field0;
    struct Mode_823  field1;
};

static struct Tuple2_1320 Tuple2_1320_Tuple2 (  struct Mode_823  field0 ,  struct Mode_823  field1 ) {
    return ( struct Tuple2_1320 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq1319 (    struct Mode_823  l2509 ,    struct Mode_823  r2511 ) {
    struct Tuple2_1320  dref2512 = ( ( Tuple2_1320_Tuple2 ) ( (  l2509 ) ,  (  r2511 ) ) );
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
        ( (  panic992 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( dref2512 .field0.tag == Mode_823_SearchBox_t && dref2512 .field1.tag == Mode_823_SearchBox_t ) {
        ( (  panic992 ) ( ( "todo: implement more stuff. technically, not reachable yet." ) ) );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct List_3 *   get_dash_row1321 (    struct Editor_1018 *  ed2533 ,    int32_t  y2535 ) {
    return ( (  get_dash_ptr1116 ) ( ( & ( ( * (  ed2533 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( (  y2535 ) ) ) ) );
}

static  struct List_3 *   cursor_dash_row1322 (    struct Editor_1018 *  ed2538 ) {
    return ( (  get_dash_ptr1116 ) ( ( & ( ( * (  ed2538 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * (  ed2538 ) ) .f_cursor ) .f_y ) ) ) ) );
}

static  struct TakeWhile_506   indent_dash_on_dash_row1323 (    struct Editor_1018 *  ed2541 ,    int32_t  y2543 ) {
    return ( (  take_dash_while528 ) ( ( (  get_dash_row1321 ) ( (  ed2541 ) ,  (  y2543 ) ) ) ,  (  is_dash_whitespace1107 ) ) );
}

static  size_t   num_dash_rows1324 (    struct Editor_1018 *  ed2546 ) {
    return ( (  size1157 ) ( ( & ( ( * (  ed2546 ) ) .f_current_dash_file ) ) ) );
}

struct funenv1131 {
    enum Unit_13  (*fun) (  struct env1131  ,    struct List_283 *  ,    size_t  ,    struct List_3  );
    struct env1131 env;
};

struct env1325 {
    struct env1131 envinst1131;
    ;
    ;
    ;
    ;
    ;
};

static  struct List_3 *   insert_dash_row1325 (   struct env1325 env ,    struct Editor_1018 *  ed2549 ,    int32_t  y2551 ) {
    struct funenv1131  temp1326 = ( (struct funenv1131){ .fun = insert1131, .env =  env.envinst1131  } );
    ( temp1326.fun ( temp1326.env ,  ( & ( ( * (  ed2549 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( (  y2551 ) ) ) ,  ( (  mk1123 ) ( ( ( * (  ed2549 ) ) .f_al ) ) ) ) );
    return ( (  get_dash_row1321 ) ( (  ed2549 ) ,  (  y2551 ) ) );
}

struct funenv1134 {
    enum Unit_13  (*fun) (  struct env1134  ,    struct List_283 *  ,    size_t  );
    struct env1134 env;
};

struct env1327 {
    ;
    ;
    struct env1134 envinst1134;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   remove_dash_row1327 (   struct env1327 env ,    struct Editor_1018 *  ed2554 ,    int32_t  y2556 ) {
    struct List_3 *  next_dash_row2557 = ( (  get_dash_row1321 ) ( (  ed2554 ) ,  (  y2556 ) ) );
    ( (  free1124 ) ( (  next_dash_row2557 ) ) );
    struct funenv1134  temp1328 = ( (struct funenv1134){ .fun = remove1134, .env =  env.envinst1134  } );
    ( temp1328.fun ( temp1328.env ,  ( & ( ( * (  ed2554 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( (  y2556 ) ) ) ) );
    return ( Unit_13_Unit );
}

static  struct Maybe_50   char_dash_at1329 (    struct Editor_1018 *  ed2560 ,    struct Cursor_804  cur2562 ) {
    return ( (  try_dash_get1118 ) ( ( (  get_dash_row1321 ) ( (  ed2560 ) ,  ( (  cur2562 ) .f_y ) ) ) ,  ( (  i32_dash_size271 ) ( ( (  cur2562 ) .f_x ) ) ) ) );
}

static  struct Maybe_50   char_dash_at_dash_cursor1330 (    struct Editor_1018 *  ed2565 ) {
    return ( (  try_dash_get1118 ) ( ( (  cursor_dash_row1322 ) ( (  ed2565 ) ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * (  ed2565 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Visual_1019   x_dash_to_dash_visual_dash_x1331 (    struct Editor_1018 *  ed2568 ,    int32_t  x2570 ,    int32_t  y2572 ) {
    return ( ( Visual_1019_Visual ) ( ( (  sum779 ) ( ( (  map336 ) ( ( (  take363 ) ( ( (  get_dash_row1321 ) ( (  ed2568 ) ,  (  y2572 ) ) ) ,  ( (  i32_dash_size271 ) ( (  x2570 ) ) ) ) ) ,  (  char_dash_len1314 ) ) ) ) ) ) );
}

static  int32_t   visual_dash_x_dash_to_dash_x1332 (    struct Editor_1018 *  ed2575 ,    struct Visual_1019  dref2576 ,    int32_t  y2579 ) {
    int32_t  sum_dash_x2580 = (  from_dash_integral29 ( 0 ) );
    struct List_3 *  chars2581 = ( (  get_dash_row1321 ) ( (  ed2575 ) ,  (  y2579 ) ) );
    struct RangeIter_367  temp1333 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( ( * (  chars2581 ) ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1334 =  next368 (&temp1333);
        if (  __cond1334 .tag == 0 ) {
            break;
        }
        int32_t  x2583 =  __cond1334 .stuff .Maybe_329_Just_s .field0;
        sum_dash_x2580 = (  op_dash_add85 ( (  sum_dash_x2580 ) , ( (  char_dash_len1314 ) ( (  elem_dash_get2 ( (  chars2581 ) , ( (  i32_dash_size271 ) ( (  x2583 ) ) ) ) ) ) ) ) );
        if ( (  cmp78 ( ( dref2576 .field0 ) , (  sum_dash_x2580 ) ) == 0 ) ) {
            return (  x2583 );
        }
    }
    return ( (  size_dash_i32273 ) ( ( ( * (  chars2581 ) ) .f_count ) ) );
}

static  enum Unit_13   set_dash_selection1335 (    struct Editor_1018 *  ed2586 ,    struct Maybe_1008  sel2588 ) {
    if ( ( ( !  eq1319 ( ( ( * (  ed2586 ) ) .f_mode ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) || ( ! ( (  is_dash_just1012 ) ( ( ( * (  ed2586 ) ) .f_selected ) ) ) ) ) ) {
        (*  ed2586 ) .f_selected = (  sel2588 );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   reset_dash_msg1336 (    struct Editor_1018 *  ed2591 ) {
    struct Maybe_316  dref2592 = ( ( * (  ed2591 ) ) .f_msg );
    if ( dref2592.tag == Maybe_316_None_t ) {
    }
    else if ( dref2592.tag == Maybe_316_Just_t ) {
        ( (  free1098 ) ( ( ( * (  ed2591 ) ) .f_al ) ,  ( ( dref2592 .stuff .Maybe_316_Just_s .field0 ) .f_contents ) ) );
        (*  ed2591 ) .f_msg = ( (struct Maybe_316) { .tag = Maybe_316_None_t } );
    }
    return ( Unit_13_Unit );
}

struct env1337 {
    ;
    struct env1202 envinst1202;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   send_dash_msg1337 (   struct env1337 env ,    struct Editor_1018 *  ed2596 ,    const char*  s2598 ) {
    ( (  reset_dash_msg1336 ) ( (  ed2596 ) ) );
    struct funenv1202  temp1338 = ( (struct funenv1202){ .fun = mk_dash_dyn_dash_str1202, .env =  env.envinst1202  } );
    struct DynStr_134  s2599 = ( temp1338.fun ( temp1338.env ,  (  s2598 ) ,  ( ( * (  ed2596 ) ) .f_al ) ) );
    (*  ed2596 ) .f_msg = ( ( Maybe_316_Just ) ( (  s2599 ) ) );
    return ( Unit_13_Unit );
}

struct Dims_1340 {
    int32_t  f_cols;
    int32_t  f_rows;
};

static  enum Unit_13   move_dash_to1339 (    struct Editor_1018 *  ed2603 ,    int32_t  x2605 ,    int32_t  y2607 ,    struct Dims_1340  dim2609 ) {
    struct Cursor_804  cur2610 = ( ( * (  ed2603 ) ) .f_cursor );
    bool  should_dash_change_dash_goal_dash_x2611 = ( !  eq41 ( ( (  cur2610 ) .f_x ) , (  x2605 ) ) );
    int32_t  y2612 = ( (  clamp810 ) ( (  y2607 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( ( ( * (  ed2603 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
    int32_t  funny_dash_space2613 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp78 ( (  y2612 ) , (  op_dash_add85 ( ( ( * (  ed2603 ) ) .f_screen_dash_top ) , (  funny_dash_space2613 ) ) ) ) == 0 ) ) {
        (*  ed2603 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  y2612 ) , (  funny_dash_space2613 ) ) ) ) );
    } else {
        if ( (  cmp78 ( (  y2612 ) , (  op_dash_sub86 ( (  op_dash_sub86 ( (  op_dash_add85 ( ( ( * (  ed2603 ) ) .f_screen_dash_top ) , ( (  dim2609 ) .f_rows ) ) ) , (  funny_dash_space2613 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_y2614 = (  op_dash_add85 ( (  op_dash_sub86 ( (  op_dash_add85 ( (  y2612 ) , (  funny_dash_space2613 ) ) ) , ( (  dim2609 ) .f_rows ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2603 ) .f_screen_dash_top = (  onscreen_dash_y2614 );
        } else {
        }
    }
    struct List_3 *  row2615 = ( (  get_dash_row1321 ) ( (  ed2603 ) ,  (  y2612 ) ) );
    if ( (  should_dash_change_dash_goal_dash_x2611 ) ) {
        int32_t  x2616 = ( (  clamp810 ) ( (  x2605 ) ,  (  from_dash_integral29 ( 0 ) ) ,  ( (  size_dash_i32273 ) ( ( (  size1156 ) ( (  row2615 ) ) ) ) ) ) );
        (*  ed2603 ) .f_goal_dash_x = ( (  x_dash_to_dash_visual_dash_x1331 ) ( (  ed2603 ) ,  (  x2616 ) ,  (  y2612 ) ) );
    }
    struct Visual_1019  vx2617 = ( ( * (  ed2603 ) ) .f_goal_dash_x );
    int32_t  x2618 = ( (  visual_dash_x_dash_to_dash_x1332 ) ( (  ed2603 ) ,  (  vx2617 ) ,  (  y2612 ) ) );
    int32_t  funny_dash_space2619 = (  from_dash_integral29 ( 5 ) );
    if ( (  cmp78 ( (  x2618 ) , (  op_dash_add85 ( ( ( * (  ed2603 ) ) .f_screen_dash_left ) , (  funny_dash_space2619 ) ) ) ) == 0 ) ) {
        (*  ed2603 ) .f_screen_dash_left = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  x2618 ) , (  funny_dash_space2619 ) ) ) ) );
    } else {
        if ( (  cmp78 ( (  x2618 ) , (  op_dash_sub86 ( (  op_dash_sub86 ( (  op_dash_add85 ( ( ( * (  ed2603 ) ) .f_screen_dash_left ) , ( (  dim2609 ) .f_cols ) ) ) , (  funny_dash_space2619 ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 2 ) ) {
            int32_t  onscreen_dash_x2620 = (  op_dash_add85 ( (  op_dash_sub86 ( (  op_dash_add85 ( (  x2618 ) , (  funny_dash_space2619 ) ) ) , ( (  dim2609 ) .f_cols ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
            (*  ed2603 ) .f_screen_dash_left = (  onscreen_dash_x2620 );
        } else {
        }
    }
    (*  ed2603 ) .f_cursor = ( (struct Cursor_804) { .f_x = (  x2618 ) , .f_y = (  y2612 ) } );
    ( (  set_dash_selection1335 ) ( (  ed2603 ) ,  ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_col1341 (    struct Editor_1018 *  ed2623 ,    int32_t  x2625 ,    struct Dims_1340  dim2627 ) {
    ( (  move_dash_to1339 ) ( (  ed2623 ) ,  (  x2625 ) ,  ( ( ( * (  ed2623 ) ) .f_cursor ) .f_y ) ,  (  dim2627 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_row1342 (    struct Editor_1018 *  ed2630 ,    int32_t  y2632 ,    struct Dims_1340  dim2634 ) {
    ( (  move_dash_to1339 ) ( (  ed2630 ) ,  ( ( ( * (  ed2630 ) ) .f_cursor ) .f_x ) ,  (  y2632 ) ,  (  dim2634 ) ) );
    return ( Unit_13_Unit );
}

static  bool   move_dash_left1343 (    struct Editor_1018 *  ed2637 ,    struct Dims_1340  dim2639 ) {
    struct Cursor_804  cur2640 = ( ( * (  ed2637 ) ) .f_cursor );
    if ( (  eq41 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
        if ( (  cmp78 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) {
            ( (  move_dash_to_dash_row1342 ) ( (  ed2637 ) ,  (  op_dash_sub86 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2639 ) ) );
            ( (  move_dash_to_dash_col1341 ) ( (  ed2637 ) ,  ( (  size_dash_i32273 ) ( ( ( * ( (  cursor_dash_row1322 ) ( (  ed2637 ) ) ) ) .f_count ) ) ) ,  (  dim2639 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1341 ) ( (  ed2637 ) ,  (  op_dash_sub86 ( ( ( ( * (  ed2637 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dim2639 ) ) );
    }
    return ( !  eq1317 ( ( ( * (  ed2637 ) ) .f_cursor ) , (  cur2640 ) ) );
}

static  bool   move_dash_right1344 (    struct Editor_1018 *  ed2643 ,    struct Dims_1340  dims2645 ) {
    struct Cursor_804  cur2646 = ( ( * (  ed2643 ) ) .f_cursor );
    int32_t  row_dash_len2647 = ( (  size_dash_i32273 ) ( ( ( * ( (  cursor_dash_row1322 ) ( (  ed2643 ) ) ) ) .f_count ) ) );
    if ( (  eq41 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_x ) , (  row_dash_len2647 ) ) ) ) {
        if ( (  cmp78 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_y ) , (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( ( ( * (  ed2643 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) == 0 ) ) {
            ( (  move_dash_to1339 ) ( (  ed2643 ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add85 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2645 ) ) );
        }
    } else {
        ( (  move_dash_to_dash_col1341 ) ( (  ed2643 ) ,  (  op_dash_add85 ( ( ( ( * (  ed2643 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims2645 ) ) );
    }
    return ( !  eq1317 ( ( ( * (  ed2643 ) ) .f_cursor ) , (  cur2646 ) ) );
}

static  enum Unit_13   move_dash_to_dash_start_dash_of_dash_line_dash_indented1345 (    struct Editor_1018 *  ed2650 ,    struct Dims_1340  dims2652 ) {
    int32_t  off2653 = ( (  size_dash_i32273 ) ( ( (  count759 ) ( ( (  indent_dash_on_dash_row1323 ) ( (  ed2650 ) ,  ( ( ( * (  ed2650 ) ) .f_cursor ) .f_y ) ) ) ) ) ) );
    ( (  move_dash_to_dash_col1341 ) ( (  ed2650 ) ,  (  off2653 ) ,  (  dims2652 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   move_dash_to_dash_end_dash_of_dash_line1346 (    struct Editor_1018 *  ed2656 ,    struct Dims_1340  dims2658 ) {
    struct List_3 *  currow2659 = ( (  cursor_dash_row1322 ) ( (  ed2656 ) ) );
    ( (  move_dash_to_dash_col1341 ) ( (  ed2656 ) ,  ( (  size_dash_i32273 ) ( ( (  size1156 ) ( (  currow2659 ) ) ) ) ) ,  (  dims2658 ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_at_dash_line_dash_end1347 (    struct Editor_1018 *  ed2665 ,    int32_t  col2667 ,    int32_t  row2669 ) {
    return (  eq41 ( (  col2667 ) , ( (  size_dash_i32273 ) ( ( (  size1156 ) ( ( (  get_dash_row1321 ) ( (  ed2665 ) ,  (  row2669 ) ) ) ) ) ) ) ) );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end1348 (    struct Editor_1018 *  ed2672 ) {
    return (  eq41 ( ( ( ( * (  ed2672 ) ) .f_cursor ) .f_x ) , ( (  size_dash_i32273 ) ( ( (  size1156 ) ( ( (  cursor_dash_row1322 ) ( (  ed2672 ) ) ) ) ) ) ) ) );
}

static  enum Unit_13   set_dash_clipboard1349 (    struct Editor_1018 *  ed2675 ,    struct Maybe_316  clip2677 ) {
    struct Maybe_316  dref2678 = ( ( * (  ed2675 ) ) .f_clipboard );
    if ( dref2678.tag == Maybe_316_None_t ) {
    }
    else if ( dref2678.tag == Maybe_316_Just_t ) {
        ( (  free1098 ) ( ( ( * (  ed2675 ) ) .f_al ) ,  ( ( dref2678 .stuff .Maybe_316_Just_s .field0 ) .f_contents ) ) );
    }
    (*  ed2675 ) .f_clipboard = (  clip2677 );
    return ( Unit_13_Unit );
}

struct funenv1187 {
    enum Unit_13  (*fun) (  struct env1187  ,    struct StrBuilder_572 *  ,    char  );
    struct env1187 env;
};

struct funenv1193 {
    enum Unit_13  (*fun) (  struct env1193  ,    struct StrBuilder_572 *  ,    struct Slice_5  );
    struct env1193 env;
};

struct env1350 {
    ;
    ;
    ;
    struct env1187 envinst1187;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1193 envinst1193;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env631 envinst631;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum Unit_13   copy_dash_selection1350 (   struct env1350 env ,    struct Editor_1018 *  ed2682 ) {
    struct Maybe_1008  dref2683 = ( ( * (  ed2682 ) ) .f_selected );
    if ( dref2683.tag == Maybe_1008_None_t ) {
        struct Maybe_50  dref2684 = ( (  char_dash_at_dash_cursor1330 ) ( (  ed2682 ) ) );
        if ( dref2684.tag == Maybe_50_None_t ) {
            ( (  set_dash_clipboard1349 ) ( (  ed2682 ) ,  ( (struct Maybe_316) { .tag = Maybe_316_None_t } ) ) );
        }
        else if ( dref2684.tag == Maybe_50_Just_t ) {
            struct StrBuilder_572  temp1351 = ( (  mk1199 ) ( ( ( * (  ed2682 ) ) .f_al ) ) );
            struct StrBuilder_572 *  sb2686 = ( &temp1351 );
            struct funenv631  temp1352 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
            ( temp1352.fun ( temp1352.env ,  (  sb2686 ) ,  ( dref2684 .stuff .Maybe_50_Just_s .field0 ) ) );
            ( (  as_dash_str829 ) ( (  sb2686 ) ) );
            ( (  set_dash_clipboard1349 ) ( (  ed2682 ) ,  ( ( Maybe_316_Just ) ( ( (  as_dash_str829 ) ( (  sb2686 ) ) ) ) ) ) );
        }
    }
    else if ( dref2683.tag == Maybe_1008_Just_t ) {
        struct StrBuilder_572  temp1353 = ( (  mk1199 ) ( ( ( * (  ed2682 ) ) .f_al ) ) );
        struct StrBuilder_572 *  sb2688 = ( &temp1353 );
        struct Cursor_804  from2689 = ( (  min803 ) ( ( dref2683 .stuff .Maybe_1008_Just_s .field0 ) ,  ( ( * (  ed2682 ) ) .f_cursor ) ) );
        struct Cursor_804  to2690 = ( (  max808 ) ( ( dref2683 .stuff .Maybe_1008_Just_s .field0 ) ,  ( ( * (  ed2682 ) ) .f_cursor ) ) );
        if ( (  eq41 ( ( (  from2689 ) .f_y ) , ( (  to2690 ) .f_y ) ) ) ) {
            struct List_3 *  currow2691 = ( (  get_dash_row1321 ) ( (  ed2682 ) ,  ( (  from2689 ) .f_y ) ) );
            struct funenv1193  temp1354 = ( (struct funenv1193){ .fun = write_dash_slice1193, .env =  env.envinst1193  } );
            ( temp1354.fun ( temp1354.env ,  (  sb2688 ) ,  ( (  subslice295 ) ( ( (  to_dash_slice1153 ) ( ( * (  currow2691 ) ) ) ) ,  ( (  i32_dash_size271 ) ( ( (  from2689 ) .f_x ) ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( (  to2690 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1347 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_x ) ,  ( (  to2690 ) .f_y ) ) ) ) {
                struct funenv1187  temp1355 = ( (struct funenv1187){ .fun = write1187, .env =  env.envinst1187  } );
                ( temp1355.fun ( temp1355.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            (*  ed2682 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
        } else {
            ( (  assert997 ) ( (  cmp78 ( ( (  to2690 ) .f_y ) , ( (  from2689 ) .f_y ) ) == 2 ) ,  ( "THATS WHAT WERE CHECKIN YO" ) ) );
            struct List_3 *  currow2692 = ( (  get_dash_row1321 ) ( (  ed2682 ) ,  ( (  from2689 ) .f_y ) ) );
            struct funenv1193  temp1356 = ( (struct funenv1193){ .fun = write_dash_slice1193, .env =  env.envinst1193  } );
            ( temp1356.fun ( temp1356.env ,  (  sb2688 ) ,  ( (  subslice295 ) ( ( (  to_dash_slice1153 ) ( ( * (  currow2692 ) ) ) ) ,  ( (  i32_dash_size271 ) ( ( (  from2689 ) .f_x ) ) ) ,  ( (  size1156 ) ( (  currow2692 ) ) ) ) ) ) );
            struct funenv1187  temp1357 = ( (struct funenv1187){ .fun = write1187, .env =  env.envinst1187  } );
            ( temp1357.fun ( temp1357.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            struct SliceIter_281  temp1358 =  into_dash_iter285 ( ( (  subslice286 ) ( ( (  to_dash_slice1154 ) ( ( ( * (  ed2682 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( (  from2689 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  i32_dash_size271 ) ( ( (  to2690 ) .f_y ) ) ) ) ) );
            while (true) {
                struct Maybe_315  __cond1359 =  next351 (&temp1358);
                if (  __cond1359 .tag == 0 ) {
                    break;
                }
                struct List_3  row2694 =  __cond1359 .stuff .Maybe_315_Just_s .field0;
                struct funenv1193  temp1360 = ( (struct funenv1193){ .fun = write_dash_slice1193, .env =  env.envinst1193  } );
                ( temp1360.fun ( temp1360.env ,  (  sb2688 ) ,  ( (  to_dash_slice1153 ) ( (  row2694 ) ) ) ) );
                struct funenv1187  temp1361 = ( (struct funenv1187){ .fun = write1187, .env =  env.envinst1187  } );
                ( temp1361.fun ( temp1361.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
            struct List_3 *  lastrow2695 = ( (  get_dash_row1321 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_y ) ) );
            struct funenv1193  temp1362 = ( (struct funenv1193){ .fun = write_dash_slice1193, .env =  env.envinst1193  } );
            ( temp1362.fun ( temp1362.env ,  (  sb2688 ) ,  ( (  subslice295 ) ( ( (  to_dash_slice1153 ) ( ( * (  lastrow2695 ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( (  to2690 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ) );
            if ( ( (  is_dash_at_dash_line_dash_end1347 ) ( (  ed2682 ) ,  ( (  to2690 ) .f_x ) ,  ( (  to2690 ) .f_y ) ) ) ) {
                struct funenv1187  temp1363 = ( (struct funenv1187){ .fun = write1187, .env =  env.envinst1187  } );
                ( temp1363.fun ( temp1363.env ,  (  sb2688 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
            }
        }
        struct DynStr_134  s2696 = ( (  as_dash_str829 ) ( (  sb2688 ) ) );
        ( (  set_dash_clipboard1349 ) ( (  ed2682 ) ,  ( ( Maybe_316_Just ) ( (  s2696 ) ) ) ) );
        (*  ed2682 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    }
    return ( Unit_13_Unit );
}

struct funenv1325 {
    struct List_3 *  (*fun) (  struct env1325  ,    struct Editor_1018 *  ,    int32_t  );
    struct env1325 env;
};

struct env1364 {
    ;
    struct env566 envinst566;
    ;
    ;
    struct env305 envinst305;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1141 envinst1141;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1325 envinst1325;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

enum PastePos_1365 {
    PastePos_1365_PasteBefore,
    PastePos_1365_PasteAfter,
};

static  struct Cursor_804   lam1032 (   struct env1032 env ,    struct Cursor_804  s2709 ) {
    return ( (  max808 ) ( (  s2709 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1035 (   struct env1035 env ,    struct Cursor_804  s2711 ) {
    return ( (  min803 ) ( (  s2711 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1026 (   struct env1026 env ,    struct Cursor_804  s2721 ) {
    return ( (  max808 ) ( (  s2721 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  struct Cursor_804   lam1029 (   struct env1029 env ,    struct Cursor_804  s2724 ) {
    return ( (  min803 ) ( (  s2724 ) ,  ( ( * ( env.ed2700 ) ) .f_cursor ) ) );
}

static  enum Unit_13   paste_dash_clipboard_dash_at_dash_cursor1364 (   struct env1364 env ,    struct Editor_1018 *  ed2700 ,    enum PastePos_1365  pastepos2702 ,    struct Dims_1340  dims2704 ) {
    if ( ( ! ( (  is_dash_just1013 ) ( ( ( * (  ed2700 ) ) .f_clipboard ) ) ) ) ) {
        return ( Unit_13_Unit );
    }
    struct DynStr_134  cp2705 = ( (  or_dash_fail1004 ) ( ( ( * (  ed2700 ) ) .f_clipboard ) ,  ( "expect clipboard" ) ) );
    bool  does_dash_it_dash_end_dash_in_dash_newline2706 = (  eq48 ( (  elem_dash_get1083 ( ( (  cp2705 ) .f_contents ) , (  op_dash_sub97 ( ( ( (  cp2705 ) .f_contents ) .f_count ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    if ( (  does_dash_it_dash_end_dash_in_dash_newline2706 ) ) {
        struct env1032 envinst1032 = {
            .ed2700 =  ed2700 ,
        };
        struct env1035 envinst1035 = {
            .ed2700 =  ed2700 ,
        };
        int32_t  from_dash_y2712 = ( {  enum PastePos_1365  dref2707 = (  pastepos2702 ) ;  dref2707 == PastePos_1365_PasteAfter ? (  op_dash_add85 ( ( ( (  maybe1031 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1032){ .fun = lam1032, .env = envinst1032 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) : ( ( (  maybe1034 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1035){ .fun = lam1035, .env = envinst1035 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) .f_y ) ; } );
        struct Zip_372  temp1366 =  into_dash_iter371 ( ( (  zip482 ) ( ( (  lines1109 ) ( (  cp2705 ) ) ) ,  ( (  from369 ) ( (  from_dash_y2712 ) ) ) ) ) );
        while (true) {
            struct Maybe_422  __cond1367 =  next421 (&temp1366);
            if (  __cond1367 .tag == 0 ) {
                break;
            }
            struct Tuple2_423  dref2713 =  __cond1367 .stuff .Maybe_422_Just_s .field0;
            struct funenv1325  temp1368 = ( (struct funenv1325){ .fun = insert_dash_row1325, .env =  env.envinst1325  } );
            struct List_3 *  row2716 = ( temp1368.fun ( temp1368.env ,  (  ed2700 ) ,  ( dref2713 .field1 ) ) );
            struct funenv305  temp1369 = ( (struct funenv305){ .fun = add_dash_all305, .env =  env.envinst305  } );
            ( temp1369.fun ( temp1369.env ,  (  row2716 ) ,  ( dref2713 .field0 ) ) );
            ( (  move_dash_to1339 ) ( (  ed2700 ) ,  ( (  size_dash_i32273 ) ( ( ( ( dref2713 .field0 ) .f_contents ) .f_count ) ) ) ,  ( dref2713 .field1 ) ,  (  dims2704 ) ) );
        }
        (*  ed2700 ) .f_selected = ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_y2712 ) } ) ) );
        (*  ed2700 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    } else {
        size_t  temp1370;
        size_t  from_dash_x2717 = (  temp1370 );
        int32_t  temp1371;
        int32_t  from_dash_y2718 = (  temp1371 );
        enum PastePos_1365  dref2719 = (  pastepos2702 );
        switch (  dref2719 ) {
            case PastePos_1365_PasteAfter : {
                struct env1026 envinst1026 = {
                    .ed2700 =  ed2700 ,
                };
                struct Cursor_804  from_dash_cur2722 = ( (  maybe1025 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1026){ .fun = lam1026, .env = envinst1026 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) );
                from_dash_x2717 = ( (  i32_dash_size271 ) ( (  op_dash_add85 ( ( (  from_dash_cur2722 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                from_dash_y2718 = ( (  from_dash_cur2722 ) .f_y );
                if ( ( (  is_dash_at_dash_line_dash_end1347 ) ( (  ed2700 ) ,  ( (  from_dash_cur2722 ) .f_x ) ,  ( (  from_dash_cur2722 ) .f_y ) ) ) ) {
                    if ( (  cmp9 ( ( (  i32_dash_size271 ) ( (  op_dash_add85 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , ( (  num_dash_rows1324 ) ( (  ed2700 ) ) ) ) != 0 ) ) {
                        struct funenv566  temp1372 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
                        ( temp1372.fun ( temp1372.env ,  ( & ( ( * (  ed2700 ) ) .f_current_dash_file ) ) ,  ( (  mk1123 ) ( ( ( * (  ed2700 ) ) .f_al ) ) ) ) );
                    }
                    from_dash_y2718 = (  op_dash_add85 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) );
                    from_dash_x2717 = (  from_dash_integral11 ( 0 ) );
                }
                break;
            }
            case PastePos_1365_PasteBefore : {
                struct env1029 envinst1029 = {
                    .ed2700 =  ed2700 ,
                };
                struct Cursor_804  from_dash_cur2725 = ( (  maybe1028 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( (struct funenv1029){ .fun = lam1029, .env = envinst1029 } ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) );
                from_dash_x2717 = ( (  i32_dash_size271 ) ( ( (  from_dash_cur2725 ) .f_x ) ) );
                from_dash_y2718 = ( (  from_dash_cur2725 ) .f_y );
                break;
            }
        }
        struct List_3 *  cur_dash_line2726 = ( (  get_dash_row1321 ) ( (  ed2700 ) ,  (  from_dash_y2718 ) ) );
        struct Slice_5  rest_dash_of_dash_line2727 = ( (  from1074 ) ( ( (  to_dash_slice1153 ) ( ( * (  cur_dash_line2726 ) ) ) ) ,  (  from_dash_x2717 ) ) );
        struct Slice_5  rest2728 = ( (  allocate1095 ) ( ( ( * (  ed2700 ) ) .f_al ) ,  ( (  rest_dash_of_dash_line2727 ) .f_count ) ) );
        ( (  copy_dash_to1078 ) ( (  rest_dash_of_dash_line2727 ) ,  (  rest2728 ) ) );
        ( (  trim1147 ) ( (  cur_dash_line2726 ) ,  (  from_dash_x2717 ) ) );
        struct LineIter_302  lines2729 = ( (  lines1109 ) ( (  cp2705 ) ) );
        struct funenv305  temp1373 = ( (struct funenv305){ .fun = add_dash_all305, .env =  env.envinst305  } );
        ( temp1373.fun ( temp1373.env ,  (  cur_dash_line2726 ) ,  ( (  or_dash_fail1004 ) ( ( (  head786 ) ( (  lines2729 ) ) ) ,  ( "clipboard cannot be empty" ) ) ) ) );
        struct List_3 *  last_dash_line2730 = (  cur_dash_line2726 );
        int32_t  to_dash_y2731 = (  from_dash_y2718 );
        struct Zip_374  temp1374 =  into_dash_iter373 ( ( (  zip483 ) ( ( (  drop362 ) ( (  lines2729 ) ,  (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  from369 ) ( (  op_dash_add85 ( (  from_dash_y2718 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_422  __cond1375 =  next424 (&temp1374);
            if (  __cond1375 .tag == 0 ) {
                break;
            }
            struct Tuple2_423  dref2732 =  __cond1375 .stuff .Maybe_422_Just_s .field0;
            struct funenv1325  temp1376 = ( (struct funenv1325){ .fun = insert_dash_row1325, .env =  env.envinst1325  } );
            last_dash_line2730 = ( temp1376.fun ( temp1376.env ,  (  ed2700 ) ,  ( dref2732 .field1 ) ) );
            to_dash_y2731 = ( dref2732 .field1 );
            struct funenv305  temp1377 = ( (struct funenv305){ .fun = add_dash_all305, .env =  env.envinst305  } );
            ( temp1377.fun ( temp1377.env ,  (  last_dash_line2730 ) ,  ( dref2732 .field0 ) ) );
        }
        int32_t  to_dash_x2735 = ( (  size_dash_i32273 ) ( ( (  size1156 ) ( (  last_dash_line2730 ) ) ) ) );
        struct funenv1141  temp1378 = ( (struct funenv1141){ .fun = add_dash_all1141, .env =  env.envinst1141  } );
        ( temp1378.fun ( temp1378.env ,  (  last_dash_line2730 ) ,  (  rest2728 ) ) );
        ( (  free1098 ) ( ( ( * (  ed2700 ) ) .f_al ) ,  (  rest2728 ) ) );
        ( (  assert997 ) ( (  cmp78 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "since clipboard is nonempty, this should also be nonempty" ) ) );
        if ( (  cmp805 ( ( ( * (  ed2700 ) ) .f_cursor ) , ( (  or_dash_else1007 ) ( ( ( * (  ed2700 ) ) .f_selected ) ,  ( ( * (  ed2700 ) ) .f_cursor ) ) ) ) != 0 ) ) {
            ( (  move_dash_to1339 ) ( (  ed2700 ) ,  (  op_dash_sub86 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  to_dash_y2731 ) ,  (  dims2704 ) ) );
            (*  ed2700 ) .f_selected = ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( (  from_dash_x2717 ) ) ) , .f_y = (  from_dash_y2718 ) } ) ) );
        } else {
            ( (  move_dash_to1339 ) ( (  ed2700 ) ,  ( (  size_dash_i32273 ) ( (  from_dash_x2717 ) ) ) ,  (  from_dash_y2718 ) ,  (  dims2704 ) ) );
            (*  ed2700 ) .f_selected = ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = (  op_dash_sub86 ( (  to_dash_x2735 ) , (  from_dash_integral29 ( 1 ) ) ) ) , .f_y = (  to_dash_y2731 ) } ) ) );
        }
        (*  ed2700 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
    }
    return ( Unit_13_Unit );
}

struct funenv1327 {
    enum Unit_13  (*fun) (  struct env1327  ,    struct Editor_1018 *  ,    int32_t  );
    struct env1327 env;
};

struct funenv1350 {
    enum Unit_13  (*fun) (  struct env1350  ,    struct Editor_1018 *  );
    struct env1350 env;
};

struct funenv1143 {
    enum Unit_13  (*fun) (  struct env1143  ,    struct List_3 *  ,    struct List_3 *  );
    struct env1143 env;
};

struct env1379 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    struct env1135 envinst1135;
    struct env1350 envinst1350;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1143 envinst1143;
    struct env1141 envinst1141;
    ;
    ;
};

struct anon_1387 {
    int32_t  f_x;
    int32_t  f_y;
};

static  enum Unit_13   delete_dash_selected1379 (   struct env1379 env ,    struct Editor_1018 *  ed2738 ,    struct Dims_1340  dims2740 ) {
    struct funenv1350  temp1380 = ( (struct funenv1350){ .fun = copy_dash_selection1350, .env =  env.envinst1350  } );
    ( temp1380.fun ( temp1380.env ,  (  ed2738 ) ) );
    struct Maybe_1008  dref2741 = ( ( * (  ed2738 ) ) .f_selected );
    if ( dref2741.tag == Maybe_1008_None_t ) {
        struct List_3 *  row2742 = ( (  cursor_dash_row1322 ) ( (  ed2738 ) ) );
        if ( (  cmp9 ( ( (  i32_dash_size271 ) ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_x ) ) ) , ( ( * (  row2742 ) ) .f_count ) ) == 0 ) ) {
            struct funenv1135  temp1381 = ( (struct funenv1135){ .fun = remove1135, .env =  env.envinst1135  } );
            ( temp1381.fun ( temp1381.env ,  ( (  cursor_dash_row1322 ) ( (  ed2738 ) ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_x ) ) ) ) );
        } else {
            if ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1348 ) ( (  ed2738 ) ) ) ) {
                if ( (  cmp78 ( (  op_dash_add85 ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32273 ) ( ( (  num_dash_rows1324 ) ( (  ed2738 ) ) ) ) ) ) == 0 ) ) {
                    struct List_3 *  cur_dash_row2743 = ( (  cursor_dash_row1322 ) ( (  ed2738 ) ) );
                    int32_t  next_dash_row_dash_id2744 = (  op_dash_add85 ( ( ( ( * (  ed2738 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
                    struct List_3 *  next_dash_row2745 = ( (  get_dash_row1321 ) ( (  ed2738 ) ,  (  next_dash_row_dash_id2744 ) ) );
                    struct funenv1143  temp1382 = ( (struct funenv1143){ .fun = add_dash_all1143, .env =  env.envinst1143  } );
                    ( temp1382.fun ( temp1382.env ,  (  cur_dash_row2743 ) ,  (  next_dash_row2745 ) ) );
                    struct funenv1327  temp1383 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
                    ( temp1383.fun ( temp1383.env ,  (  ed2738 ) ,  (  next_dash_row_dash_id2744 ) ) );
                }
            }
        }
    }
    else if ( dref2741.tag == Maybe_1008_Just_t ) {
        struct Cursor_804  cfrom2747 = ( (  min803 ) ( ( dref2741 .stuff .Maybe_1008_Just_s .field0 ) ,  ( ( * (  ed2738 ) ) .f_cursor ) ) );
        struct Cursor_804  cto2748 = ( (  max808 ) ( ( dref2741 .stuff .Maybe_1008_Just_s .field0 ) ,  ( ( * (  ed2738 ) ) .f_cursor ) ) );
        struct RangeIter_367  temp1384 =  into_dash_iter366 ( ( (  to364 ) ( (  op_dash_add85 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  op_dash_sub86 ( ( (  cto2748 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_329  __cond1385 =  next368 (&temp1384);
            if (  __cond1385 .tag == 0 ) {
                break;
            }
            int32_t  row_dash_id2750 =  __cond1385 .stuff .Maybe_329_Just_s .field0;
            ( (  assert997 ) ( (  cmp78 ( (  row_dash_id2750 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ,  ( "rows in between must be ACTUAL ROWS (greater than 0, otherwise sel and cursor have weird values?)" ) ) );
            struct funenv1327  temp1386 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
            ( temp1386.fun ( temp1386.env ,  (  ed2738 ) ,  (  op_dash_add85 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
        }
        int32_t  nu_dash_to_dash_y2751 = (  op_dash_sub86 ( ( (  cto2748 ) .f_y ) , ( (  max807 ) ( (  op_dash_add85 ( (  op_dash_sub86 ( (  op_dash_sub86 ( ( (  cto2748 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , (  op_dash_add85 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ) ) ) );
        ( (  assert997 ) ( ( (  eq41 ( (  nu_dash_to_dash_y2751 ) , ( (  cfrom2747 ) .f_y ) ) ) || (  eq41 ( (  nu_dash_to_dash_y2751 ) , (  op_dash_add85 ( ( (  cfrom2747 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ,  ( "when removing rows in between, afterwards the new nu-to-y must be either the same row or the next one" ) ) );
        struct anon_1387  cto2752 = ( (struct anon_1387) { .f_x = ( (  cto2748 ) .f_x ) , .f_y = (  nu_dash_to_dash_y2751 ) } );
        bool  should_dash_merge_dash_next_dash_line2753 = ( (  is_dash_at_dash_line_dash_end1347 ) ( (  ed2738 ) ,  ( (  cto2752 ) .f_x ) ,  ( (  cto2752 ) .f_y ) ) );
        if ( (  should_dash_merge_dash_next_dash_line2753 ) ) {
            struct List_3 *  first_dash_row2754 = ( (  get_dash_row1321 ) ( (  ed2738 ) ,  ( (  cfrom2747 ) .f_y ) ) );
            ( (  trim1147 ) ( (  first_dash_row2754 ) ,  ( (  i32_dash_size271 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
            bool  on_dash_last_dash_row2755 = (  cmp78 ( (  op_dash_add85 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32273 ) ( ( (  num_dash_rows1324 ) ( (  ed2738 ) ) ) ) ) ) != 0 );
            if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                struct funenv1143  temp1388 = ( (struct funenv1143){ .fun = add_dash_all1143, .env =  env.envinst1143  } );
                ( temp1388.fun ( temp1388.env ,  (  first_dash_row2754 ) ,  ( (  get_dash_row1321 ) ( (  ed2738 ) ,  (  op_dash_add85 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) );
            }
            if ( (  eq41 ( ( (  cto2752 ) .f_y ) , ( (  cfrom2747 ) .f_y ) ) ) ) {
                if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                    struct funenv1327  temp1389 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
                    ( temp1389.fun ( temp1389.env ,  (  ed2738 ) ,  (  op_dash_add85 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
            } else {
                if ( ( ! (  on_dash_last_dash_row2755 ) ) ) {
                    struct funenv1327  temp1390 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
                    ( temp1390.fun ( temp1390.env ,  (  ed2738 ) ,  (  op_dash_add85 ( ( (  cto2752 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                }
                struct funenv1327  temp1391 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
                ( temp1391.fun ( temp1391.env ,  (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) );
            }
        } else {
            struct List_3 *  first_dash_row2756 = ( (  get_dash_row1321 ) ( (  ed2738 ) ,  ( (  cfrom2747 ) .f_y ) ) );
            if ( (  eq41 ( ( (  cto2752 ) .f_y ) , ( (  cfrom2747 ) .f_y ) ) ) ) {
                struct RangeIter_367  temp1392 =  into_dash_iter366 ( ( (  to364 ) ( ( (  cfrom2747 ) .f_x ) ,  ( (  min806 ) ( ( (  cto2752 ) .f_x ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( (  size1156 ) ( (  first_dash_row2756 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_329  __cond1393 =  next368 (&temp1392);
                    if (  __cond1393 .tag == 0 ) {
                        break;
                    }
                    int32_t  xx2758 =  __cond1393 .stuff .Maybe_329_Just_s .field0;
                    struct funenv1135  temp1394 = ( (struct funenv1135){ .fun = remove1135, .env =  env.envinst1135  } );
                    ( temp1394.fun ( temp1394.env ,  (  first_dash_row2756 ) ,  ( (  i32_dash_size271 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
                }
            } else {
                ( (  trim1147 ) ( (  first_dash_row2756 ) ,  ( (  i32_dash_size271 ) ( ( (  cfrom2747 ) .f_x ) ) ) ) );
                struct funenv1141  temp1395 = ( (struct funenv1141){ .fun = add_dash_all1141, .env =  env.envinst1141  } );
                ( temp1395.fun ( temp1395.env ,  (  first_dash_row2756 ) ,  ( (  subslice295 ) ( ( (  to_dash_slice1153 ) ( ( * ( (  get_dash_row1321 ) ( (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) ) ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  clamp_dash_uint1158 ) ( (  op_dash_sub86 ( ( (  cto2752 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) ) );
                struct funenv1327  temp1396 = ( (struct funenv1327){ .fun = remove_dash_row1327, .env =  env.envinst1327  } );
                ( temp1396.fun ( temp1396.env ,  (  ed2738 ) ,  ( (  cto2752 ) .f_y ) ) );
            }
        }
        (*  ed2738 ) .f_selected = ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
        (*  ed2738 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
        ( (  move_dash_to1339 ) ( (  ed2738 ) ,  ( (  cfrom2747 ) .f_x ) ,  ( (  cfrom2747 ) .f_y ) ,  (  dims2740 ) ) );
    }
    return ( Unit_13_Unit );
}

struct funenv1145 {
    enum Unit_13  (*fun) (  struct env1145  ,    struct List_3 *  ,    struct TakeWhile_506  );
    struct env1145 env;
};

struct env1397 {
    ;
    ;
    ;
    ;
    struct env1131 envinst1131;
    ;
    ;
    ;
    struct env1145 envinst1145;
    ;
    ;
};

static  enum Unit_13   insert_dash_empty_dash_row_dash_at1397 (   struct env1397 env ,    struct Editor_1018 *  ed2761 ,    int32_t  y2763 ,    enum CAllocator_4  al2765 ) {
    struct List_3  temp1398 = ( (  mk1123 ) ( (  al2765 ) ) );
    struct List_3 *  nurow2766 = ( &temp1398 );
    struct TakeWhile_506  rowws2767 = ( (  indent_dash_on_dash_row1323 ) ( (  ed2761 ) ,  ( ( ( * (  ed2761 ) ) .f_cursor ) .f_y ) ) );
    int32_t  offchars2768 = ( (  size_dash_i32273 ) ( ( (  count759 ) ( (  rowws2767 ) ) ) ) );
    struct funenv1145  temp1399 = ( (struct funenv1145){ .fun = add_dash_all1145, .env =  env.envinst1145  } );
    ( temp1399.fun ( temp1399.env ,  (  nurow2766 ) ,  (  rowws2767 ) ) );
    struct funenv1131  temp1400 = ( (struct funenv1131){ .fun = insert1131, .env =  env.envinst1131  } );
    ( temp1400.fun ( temp1400.env ,  ( & ( ( * (  ed2761 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( (  y2763 ) ) ) ,  ( * (  nurow2766 ) ) ) );
    return ( Unit_13_Unit );
}

static  bool   is_dash_in_dash_selection1401 (    struct Editor_1018 *  ed2771 ,    struct Cursor_804  c2773 ) {
    return ( {  struct Maybe_1008  dref2774 = ( ( * (  ed2771 ) ) .f_selected ) ; dref2774.tag == Maybe_1008_Just_t ? ( (  between809 ) ( (  c2773 ) ,  ( ( * (  ed2771 ) ) .f_cursor ) ,  ( dref2774 .stuff .Maybe_1008_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   is_dash_word_dash_char1402 (    char  c2778 ) {
    return ( (  is_dash_not_dash_whitespace1108 ) ( (  c2778 ) ) );
}

struct funenv1337 {
    enum Unit_13  (*fun) (  struct env1337  ,    struct Editor_1018 *  ,    const char*  );
    struct env1337 env;
};

struct env1403 {
    ;
    ;
    ;
    ;
    struct env1337 envinst1337;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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

static  struct Maybe_1008   find_dash_next_dash_occurence1403 (   struct env1403 env ,    struct Editor_1018 *  ed2784 ,    struct Slice_5  needle2786 ) {
    struct Cursor_804  from2787 = ( (  max808 ) ( ( ( * (  ed2784 ) ) .f_cursor ) ,  ( (  or_dash_else1007 ) ( ( ( * (  ed2784 ) ) .f_selected ) ,  ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) ) ) ) );
    struct Slice_5  curline2788 = ( (  to_dash_slice1153 ) ( ( * ( (  get_dash_row1321 ) ( (  ed2784 ) ,  ( (  from2787 ) .f_y ) ) ) ) ) );
    struct Maybe_900  dref2789 = ( (  find_dash_slice1087 ) ( ( (  subslice295 ) ( (  curline2788 ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( (  from2787 ) .f_x ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( (  curline2788 ) .f_count ) ) ) ,  (  needle2786 ) ) );
    if ( dref2789.tag == Maybe_900_Just_t ) {
        return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = (  op_dash_add85 ( (  op_dash_add85 ( ( (  from2787 ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) , ( (  size_dash_i32273 ) ( ( dref2789 .stuff .Maybe_900_Just_s .field0 ) ) ) ) ) , .f_y = ( (  from2787 ) .f_y ) } ) ) );
    }
    else if ( dref2789.tag == Maybe_900_None_t ) {
        struct Zip_340  temp1404 =  into_dash_iter359 ( ( (  zip478 ) ( ( (  from1075 ) ( ( (  to_dash_slice1154 ) ( ( ( * (  ed2784 ) ) .f_current_dash_file ) ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( (  from2787 ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ) ) ,  ( (  from369 ) ( (  op_dash_add85 ( ( (  from2787 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1405 =  next350 (&temp1404);
            if (  __cond1405 .tag == 0 ) {
                break;
            }
            struct Tuple2_349  dref2791 =  __cond1405 .stuff .Maybe_348_Just_s .field0;
            struct Maybe_900  dref2794 = ( (  find_dash_slice1087 ) ( ( (  to_dash_slice1153 ) ( ( dref2791 .field0 ) ) ) ,  (  needle2786 ) ) );
            if ( dref2794.tag == Maybe_900_None_t ) {
            }
            else if ( dref2794.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2794 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( dref2791 .field1 ) } ) ) );
            }
        }
        struct funenv1337  temp1406 = ( (struct funenv1337){ .fun = send_dash_msg1337, .env =  env.envinst1337  } );
        ( temp1406.fun ( temp1406.env ,  (  ed2784 ) ,  ( "Wrapped!" ) ) );
        struct Zip_340  temp1407 =  into_dash_iter359 ( ( (  zip478 ) ( ( (  subslice286 ) ( ( (  to_dash_slice1154 ) ( ( ( * (  ed2784 ) ) .f_current_dash_file ) ) ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size271 ) ( ( (  from2787 ) .f_y ) ) ) ) ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_348  __cond1408 =  next350 (&temp1407);
            if (  __cond1408 .tag == 0 ) {
                break;
            }
            struct Tuple2_349  dref2796 =  __cond1408 .stuff .Maybe_348_Just_s .field0;
            struct Maybe_900  dref2799 = ( (  find_dash_slice1087 ) ( ( (  to_dash_slice1153 ) ( ( dref2796 .field0 ) ) ) ,  (  needle2786 ) ) );
            if ( dref2799.tag == Maybe_900_None_t ) {
            }
            else if ( dref2799.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2799 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( dref2796 .field1 ) } ) ) );
            }
        }
        struct Maybe_900  dref2801 = ( (  find_dash_slice1087 ) ( (  curline2788 ) ,  (  needle2786 ) ) );
        if ( dref2801.tag == Maybe_900_None_t ) {
        }
        else if ( dref2801.tag == Maybe_900_Just_t ) {
            return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2801 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2787 ) .f_y ) } ) ) );
        }
        struct funenv1337  temp1409 = ( (struct funenv1337){ .fun = send_dash_msg1337, .env =  env.envinst1337  } );
        ( temp1409.fun ( temp1409.env ,  (  ed2784 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
}

struct env1410 {
    ;
    ;
    struct env1337 envinst1337;
    ;
    ;
    ;
    ;
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

static  struct Cursor_804   lam1050 (   struct env1050 env ,    struct Cursor_804  s2809 ) {
    return ( (  min803 ) ( ( ( * ( env.ed2805 ) ) .f_cursor ) ,  (  s2809 ) ) );
}

static  struct Maybe_1008   find_dash_prev_dash_occurence1410 (   struct env1410 env ,    struct Editor_1018 *  ed2805 ,    struct Slice_5  needle2807 ) {
    struct env1050 envinst1050 = {
        .ed2805 =  ed2805 ,
    };
    struct Cursor_804  from2810 = ( (  maybe1049 ) ( ( ( * (  ed2805 ) ) .f_selected ) ,  ( (struct funenv1050){ .fun = lam1050, .env = envinst1050 } ) ,  ( ( * (  ed2805 ) ) .f_cursor ) ) );
    struct Slice_5  curline2811 = ( (  to_dash_slice1153 ) ( ( * ( (  get_dash_row1321 ) ( (  ed2805 ) ,  ( (  from2810 ) .f_y ) ) ) ) ) );
    struct Maybe_900  dref2812 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1090 ) ( ( (  subslice295 ) ( (  curline2811 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  i32_dash_size271 ) ( ( (  from2810 ) .f_x ) ) ) ) ) ,  (  needle2807 ) ) );
    if ( dref2812.tag == Maybe_900_Just_t ) {
        return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2812 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2810 ) .f_y ) } ) ) );
    }
    else if ( dref2812.tag == Maybe_900_None_t ) {
        int32_t  from_dash_y2814 = (  op_dash_sub86 ( ( (  from2810 ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp78 ( (  from_dash_y2814 ) , (  from_dash_integral29 ( 0 ) ) ) != 0 ) ) {
            struct List_3 *  row2815 = ( (  get_dash_row1321 ) ( (  ed2805 ) ,  (  from_dash_y2814 ) ) );
            struct Maybe_900  dref2816 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1090 ) ( ( (  to_dash_slice1153 ) ( ( * (  row2815 ) ) ) ) ,  (  needle2807 ) ) );
            if ( dref2816.tag == Maybe_900_None_t ) {
            }
            else if ( dref2816.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2816 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2814 ) } ) ) );
            }
            from_dash_y2814 = (  op_dash_sub86 ( (  from_dash_y2814 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct funenv1337  temp1411 = ( (struct funenv1337){ .fun = send_dash_msg1337, .env =  env.envinst1337  } );
        ( temp1411.fun ( temp1411.env ,  (  ed2805 ) ,  ( "Wrapped!" ) ) );
        int32_t  from_dash_y2818 = (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( (  num_dash_rows1324 ) ( (  ed2805 ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        while ( (  cmp78 ( (  from_dash_y2818 ) , ( (  from2810 ) .f_y ) ) == 2 ) ) {
            struct List_3 *  row2819 = ( (  get_dash_row1321 ) ( (  ed2805 ) ,  (  from_dash_y2818 ) ) );
            struct Maybe_900  dref2820 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1090 ) ( ( (  to_dash_slice1153 ) ( ( * (  row2819 ) ) ) ) ,  (  needle2807 ) ) );
            if ( dref2820.tag == Maybe_900_None_t ) {
            }
            else if ( dref2820.tag == Maybe_900_Just_t ) {
                return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2820 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = (  from_dash_y2818 ) } ) ) );
            }
            from_dash_y2818 = (  op_dash_sub86 ( (  from_dash_y2818 ) , (  from_dash_integral29 ( 1 ) ) ) );
        }
        struct Maybe_900  dref2822 = ( (  find_dash_last_dash_occurence_dash_of_dash_slice1090 ) ( (  curline2811 ) ,  (  needle2807 ) ) );
        if ( dref2822.tag == Maybe_900_None_t ) {
        }
        else if ( dref2822.tag == Maybe_900_Just_t ) {
            return ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( dref2822 .stuff .Maybe_900_Just_s .field0 ) ) ) , .f_y = ( (  from2810 ) .f_y ) } ) ) );
        }
        struct funenv1337  temp1412 = ( (struct funenv1337){ .fun = send_dash_msg1337, .env =  env.envinst1337  } );
        ( temp1412.fun ( temp1412.env ,  (  ed2805 ) ,  ( "NOT FOUND!!!" ) ) );
        return ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } );
    }
}

struct funenv1128 {
    enum Unit_13  (*fun) (  struct env1128  ,    struct List_3 *  ,    size_t  ,    char  );
    struct env1128 env;
};

struct env1413 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1128 envinst1128;
    ;
    ;
    ;
    ;
};

static  int32_t   lam1038 (   struct env1038 env ,    struct Cursor_804  s2828 ) {
    return ( (  min806 ) ( ( (  s2828 ) .f_y ) ,  ( ( ( * ( env.ed2826 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam1041 (   struct env1041 env ,    struct Cursor_804  s2831 ) {
    return ( (  max807 ) ( ( (  s2831 ) .f_y ) ,  ( ( ( * ( env.ed2826 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   indent_dash_selection1413 (   struct env1413 env ,    struct Editor_1018 *  ed2826 ) {
    struct env1038 envinst1038 = {
        .ed2826 =  ed2826 ,
    };
    int32_t  from_dash_y2829 = ( (  maybe1037 ) ( ( ( * (  ed2826 ) ) .f_selected ) ,  ( (struct funenv1038){ .fun = lam1038, .env = envinst1038 } ) ,  ( ( ( * (  ed2826 ) ) .f_cursor ) .f_y ) ) );
    struct env1041 envinst1041 = {
        .ed2826 =  ed2826 ,
    };
    int32_t  to_dash_y2832 = ( (  maybe1040 ) ( ( ( * (  ed2826 ) ) .f_selected ) ,  ( (struct funenv1041){ .fun = lam1041, .env = envinst1041 } ) ,  ( ( ( * (  ed2826 ) ) .f_cursor ) .f_y ) ) );
    struct RangeIter_367  temp1414 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_y2829 ) ,  (  to_dash_y2832 ) ) ) );
    while (true) {
        struct Maybe_329  __cond1415 =  next368 (&temp1414);
        if (  __cond1415 .tag == 0 ) {
            break;
        }
        int32_t  rowid2834 =  __cond1415 .stuff .Maybe_329_Just_s .field0;
        struct List_3 *  row2835 = ( (  get_dash_row1321 ) ( (  ed2826 ) ,  (  rowid2834 ) ) );
        struct funenv1128  temp1416 = ( (struct funenv1128){ .fun = insert1128, .env =  env.envinst1128  } );
        ( temp1416.fun ( temp1416.env ,  (  row2835 ) ,  (  from_dash_integral11 ( 0 ) ) ,  ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) );
    }
    return ( Unit_13_Unit );
}

struct env1417 {
    ;
    ;
    struct env1135 envinst1135;
    ;
    ;
    ;
    ;
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

static  int32_t   lam1044 (   struct env1044 env ,    struct Cursor_804  s2840 ) {
    return ( (  min806 ) ( ( (  s2840 ) .f_y ) ,  ( ( ( * ( env.ed2838 ) ) .f_cursor ) .f_y ) ) );
}

static  int32_t   lam1047 (   struct env1047 env ,    struct Cursor_804  s2843 ) {
    return ( (  max807 ) ( ( (  s2843 ) .f_y ) ,  ( ( ( * ( env.ed2838 ) ) .f_cursor ) .f_y ) ) );
}

static  enum Unit_13   dedent_dash_selection1417 (   struct env1417 env ,    struct Editor_1018 *  ed2838 ) {
    struct env1044 envinst1044 = {
        .ed2838 =  ed2838 ,
    };
    int32_t  from_dash_y2841 = ( (  maybe1043 ) ( ( ( * (  ed2838 ) ) .f_selected ) ,  ( (struct funenv1044){ .fun = lam1044, .env = envinst1044 } ) ,  ( ( ( * (  ed2838 ) ) .f_cursor ) .f_y ) ) );
    struct env1047 envinst1047 = {
        .ed2838 =  ed2838 ,
    };
    int32_t  to_dash_y2844 = ( (  maybe1046 ) ( ( ( * (  ed2838 ) ) .f_selected ) ,  ( (struct funenv1047){ .fun = lam1047, .env = envinst1047 } ) ,  ( ( ( * (  ed2838 ) ) .f_cursor ) .f_y ) ) );
    struct RangeIter_367  temp1418 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_y2841 ) ,  (  to_dash_y2844 ) ) ) );
    while (true) {
        struct Maybe_329  __cond1419 =  next368 (&temp1418);
        if (  __cond1419 .tag == 0 ) {
            break;
        }
        int32_t  rowid2846 =  __cond1419 .stuff .Maybe_329_Just_s .field0;
        if ( (  eq49 ( ( (  char_dash_at1329 ) ( (  ed2838 ) ,  ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  rowid2846 ) } ) ) ) , ( ( Maybe_50_Just ) ( ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) ) ) {
            struct List_3 *  row2847 = ( (  get_dash_row1321 ) ( (  ed2838 ) ,  (  rowid2846 ) ) );
            struct funenv1135  temp1420 = ( (struct funenv1135){ .fun = remove1135, .env =  env.envinst1135  } );
            ( temp1420.fun ( temp1420.env ,  (  row2847 ) ,  (  from_dash_integral11 ( 0 ) ) ) );
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1150 {
    struct List_283  (*fun) (  struct env1150  ,    struct Map_301  ,    enum CAllocator_4  );
    struct env1150 env;
};

struct env1421 {
    struct env304 envinst304;
    struct env1150 envinst1150;
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

static  struct List_3   lam303 (   struct env303 env ,    struct DynStr_134  line2884 ) {
    struct funenv304  temp1424 = ( (struct funenv304){ .fun = to_dash_list304, .env =  env.envinst304  } );
    return ( temp1424.fun ( temp1424.env ,  (  line2884 ) ,  ( env.al2853 ) ) );
}

static  struct List_283   load_dash_file1421 (   struct env1421 env ,    const char*  filename2851 ,    enum CAllocator_4  al2853 ) {
    struct funenv1150  temp1423 = ( (struct funenv1150){ .fun = to_dash_list1150, .env =  env.envinst1150  } );
    struct env303 envinst303 = {
        .envinst304 = env.envinst304 ,
        .al2853 =  al2853 ,
    };
    struct List_283  temp1422 = ( temp1423.fun ( temp1423.env ,  ( (  map332 ) ( ( (  lines1109 ) ( ( (  read_dash_contents1310 ) ( (  filename2851 ) ,  (  al2853 ) ) ) ) ) ,  ( (struct funenv303){ .fun = lam303, .env = envinst303 } ) ) ) ,  (  al2853 ) ) );
    struct List_283 *  file2885 = ( &temp1422 );
    if ( ( (  null792 ) ( (  file2885 ) ) ) ) {
        struct funenv566  temp1425 = ( (struct funenv566){ .fun = add566, .env =  env.envinst566  } );
        ( temp1425.fun ( temp1425.env ,  (  file2885 ) ,  ( (  mk1123 ) ( (  al2853 ) ) ) ) );
    }
    return ( * (  file2885 ) );
}

struct env1426 {
    enum CAllocator_4  al2848;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env631 envinst631;
    ;
};

static  enum Unit_13   lam630 (   struct env630 env ,    char  c2895 ) {
    struct funenv631  temp1430 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
    return ( temp1430.fun ( temp1430.env ,  ( env.sb2891 ) ,  (  c2895 ) ) );
}

static  enum Unit_13   save_dash_file1426 (   struct env1426 env ,    struct List_283  cf2888 ,    const char*  filename2890 ) {
    struct StrBuilder_572  temp1427 = ( (  mk1199 ) ( ( env.al2848 ) ) );
    struct StrBuilder_572 *  sb2891 = ( &temp1427 );
    struct SliceIter_281  temp1428 =  into_dash_iter284 ( (  cf2888 ) );
    while (true) {
        struct Maybe_315  __cond1429 =  next351 (&temp1428);
        if (  __cond1429 .tag == 0 ) {
            break;
        }
        struct List_3  row2893 =  __cond1429 .stuff .Maybe_315_Just_s .field0;
        struct env630 envinst630 = {
            .sb2891 =  sb2891 ,
            .envinst631 = env.envinst631 ,
        };
        ( (  for_dash_each629 ) ( (  row2893 ) ,  ( (struct funenv630){ .fun = lam630, .env = envinst630 } ) ) );
        struct funenv631  temp1431 = ( (struct funenv631){ .fun = write_dash_char631, .env =  env.envinst631  } );
        ( temp1431.fun ( temp1431.env ,  (  sb2891 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) );
    }
    ( (  write_dash_contents1312 ) ( (  filename2890 ) ,  ( (  as_dash_str829 ) ( (  sb2891 ) ) ) ) );
    ( (  free1201 ) ( (  sb2891 ) ) );
    return ( Unit_13_Unit );
}

static  enum Unit_13   free_dash_file1432 (    struct List_283  cf2898 ) {
    ( (  for_dash_each634 ) ( ( (  addresses1155 ) ( (  cf2898 ) ) ) ,  (  free1124 ) ) );
    ( (  free1125 ) ( ( & (  cf2898 ) ) ) );
    return ( Unit_13_Unit );
}

struct env1433 {
    ;
    ;
    int32_t  pad2899;
    ;
    ;
};

struct anon_1434 {
    int32_t  f_max_dash_digits;
    int32_t  f_total_dash_offset;
};

static struct anon_1434   left_dash_offset1433 (   struct env1433 env ,    struct Editor_1018 *  ed2902 ) {
    int32_t  max_dash_digits2903 = ( (  max807 ) ( ( (  count_dash_digits813 ) ( ( ( ( * (  ed2902 ) ) .f_current_dash_file ) .f_count ) ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
    return ( (struct anon_1434) { .f_max_dash_digits = (  max_dash_digits2903 ) , .f_total_dash_offset = (  op_dash_add85 ( (  op_dash_add85 ( ( env.pad2899 ) , (  max_dash_digits2903 ) ) ) , ( env.pad2899 ) ) ) } );
}

struct funenv1433 {
    struct anon_1434  (*fun) (  struct env1433  ,    struct Editor_1018 *  );
    struct env1433 env;
};

struct env1435 {
    ;
    struct env1433 envinst1433;
    ;
};

static  struct Dims_1340   screen_dash_dims1435 (   struct env1435 env ,    struct Editor_1018 *  ed2906 ,    struct Tui_647 *  tui2908 ) {
    struct funenv1433  temp1436 = ( (struct funenv1433){ .fun = left_dash_offset1433, .env =  env.envinst1433  } );
    return ( (struct Dims_1340) { .f_cols = (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * (  tui2908 ) ) .f_width ) ) ) , ( ( temp1436.fun ( temp1436.env ,  (  ed2906 ) ) ) .f_total_dash_offset ) ) ) , .f_rows = ( (  u32_dash_i32277 ) ( ( ( * (  tui2908 ) ) .f_height ) ) ) } );
}

struct env1437 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    int32_t  pad2899;
    struct env1433 envinst1433;
    ;
    ;
    ;
};

static  enum Unit_13   render_dash_editor1437 (   struct env1437 env ,    struct Screen_646 *  screen2911 ,    struct Editor_1018 *  ed2913 ) {
    int32_t  w2914 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2911 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2915 = ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2911 ) ) .f_tui ) ) .f_height ) ) );
    int32_t  from_dash_y2916 = ( ( * (  ed2913 ) ) .f_screen_dash_top );
    int32_t  from_dash_x2917 = ( ( * (  ed2913 ) ) .f_screen_dash_left );
    int32_t  x2918 = (  from_dash_integral29 ( 0 ) );
    int32_t  y2919 = (  from_dash_integral29 ( 0 ) );
    ( (  assert997 ) ( (  cmp9 ( ( ( ( * (  ed2913 ) ) .f_current_dash_file ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ,  ( "number of lines in file is somehow 0 ???" ) ) );
    struct funenv1433  temp1438 = ( (struct funenv1433){ .fun = left_dash_offset1433, .env =  env.envinst1433  } );
    struct anon_1434  offstuff2920 = ( temp1438.fun ( temp1438.env ,  (  ed2913 ) ) );
    int32_t  max_dash_digits2921 = ( (  offstuff2920 ) .f_max_dash_digits );
    int32_t  left_dash_off2922 = ( (  offstuff2920 ) .f_total_dash_offset );
    struct Drop_339  temp1439 =  into_dash_iter338 ( ( (  drop358 ) ( ( (  zip480 ) ( ( ( * (  ed2913 ) ) .f_current_dash_file ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size271 ) ( (  from_dash_y2916 ) ) ) ) ) );
    while (true) {
        struct Maybe_348  __cond1440 =  next347 (&temp1439);
        if (  __cond1440 .tag == 0 ) {
            break;
        }
        struct Tuple2_349  dref2923 =  __cond1440 .stuff .Maybe_348_Just_s .field0;
        int32_t  row_dash_num2926 = (  op_dash_add85 ( ( dref2923 .field1 ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_367  temp1441 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( env.pad2899 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_329  __cond1442 =  next368 (&temp1441);
            if (  __cond1442 .tag == 0 ) {
                break;
            }
            int32_t  xx2928 =  __cond1442 .stuff .Maybe_329_Just_s .field0;
            ( (  put_dash_char1286 ) ( (  screen2911 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  xx2928 ) ,  (  y2919 ) ) );
        }
        ( (  draw_dash_str_dash_right1298 ) ( (  screen2911 ) ,  (  row_dash_num2926 ) ,  (  op_dash_sub86 ( (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2911 ) ) .f_tui ) ) .f_width ) ) ) , (  max_dash_digits2921 ) ) ) , ( env.pad2899 ) ) ) ,  (  y2919 ) ) );
        struct RangeIter_367  temp1443 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( env.pad2899 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_329  __cond1444 =  next368 (&temp1443);
            if (  __cond1444 .tag == 0 ) {
                break;
            }
            int32_t  xx2930 =  __cond1444 .stuff .Maybe_329_Just_s .field0;
            ( (  put_dash_char1286 ) ( (  screen2911 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add85 ( (  op_dash_add85 ( (  xx2930 ) , ( env.pad2899 ) ) ) , (  max_dash_digits2921 ) ) ) ,  (  y2919 ) ) );
        }
        if ( (  eq41 ( ( ( ( * (  ed2913 ) ) .f_cursor ) .f_y ) , (  op_dash_sub86 ( (  row_dash_num2926 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) ) {
            struct RangeIter_367  temp1445 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  max_dash_digits2921 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
            while (true) {
                struct Maybe_329  __cond1446 =  next368 (&temp1445);
                if (  __cond1446 .tag == 0 ) {
                    break;
                }
                int32_t  xxx2932 =  __cond1446 .stuff .Maybe_329_Just_s .field0;
                struct Cell_56 *  cp2933 = ( (  or_dash_fail1005 ) ( ( (  get_dash_cell_dash_ptr1280 ) ( (  screen2911 ) ,  (  op_dash_add85 ( (  xxx2932 ) , ( env.pad2899 ) ) ) ,  (  y2919 ) ) ) ,  ( "screen index somehow landed outside of screen" ) ) );
                (*  cp2933 ) .f_fg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_text );
                (*  cp2933 ) .f_bg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_line_dash_num_dash_hi_dash_bg );
            }
        }
        struct Drop_343  temp1447 =  into_dash_iter342 ( ( (  drop360 ) ( ( (  zip481 ) ( ( dref2923 .field0 ) ,  ( (  from369 ) ( (  from_dash_integral29 ( 0 ) ) ) ) ) ) ,  ( (  i32_dash_size271 ) ( (  from_dash_x2917 ) ) ) ) ) );
        while (true) {
            struct Maybe_354  __cond1448 =  next353 (&temp1447);
            if (  __cond1448 .tag == 0 ) {
                break;
            }
            struct Tuple2_355  dref2934 =  __cond1448 .stuff .Maybe_354_Just_s .field0;
            bool  in_dash_selection2937 = ( (  is_dash_in_dash_selection1401 ) ( (  ed2913 ) ,  ( (struct Cursor_804) { .f_x = ( dref2934 .field1 ) , .f_y = ( dref2923 .field1 ) } ) ) );
            if ( (  in_dash_selection2937 ) ) {
                ( (  set_dash_screen_dash_colors1279 ) ( (  screen2911 ) ,  ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_selection_dash_text ) ,  ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_selection_dash_bg ) ) );
            }
            if ( (  eq48 ( ( dref2934 .field0 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) ) {
                ( (  put_dash_char1286 ) ( (  screen2911 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add85 ( (  left_dash_off2922 ) , (  x2918 ) ) ) ,  (  y2919 ) ) );
                x2918 = (  op_dash_add85 ( (  x2918 ) , (  from_dash_integral29 ( 1 ) ) ) );
                ( (  put_dash_char1286 ) ( (  screen2911 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  op_dash_add85 ( (  left_dash_off2922 ) , (  x2918 ) ) ) ,  (  y2919 ) ) );
            } else {
                ( (  put_dash_char1286 ) ( (  screen2911 ) ,  ( dref2934 .field0 ) ,  (  op_dash_add85 ( (  left_dash_off2922 ) , (  x2918 ) ) ) ,  (  y2919 ) ) );
            }
            if ( (  in_dash_selection2937 ) ) {
                ( (  set_dash_screen_dash_colors1279 ) ( (  screen2911 ) ,  ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_text ) ,  ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_bg ) ) );
            }
            x2918 = (  op_dash_add85 ( (  x2918 ) , (  from_dash_integral29 ( 1 ) ) ) );
            if ( (  cmp78 ( (  x2918 ) , (  w2914 ) ) != 0 ) ) {
                break;
            }
        }
        if ( ( (  cmp78 ( (  x2918 ) , (  w2914 ) ) == 0 ) && ( (  is_dash_in_dash_selection1401 ) ( (  ed2913 ) ,  ( (struct Cursor_804) { .f_x = ( (  size_dash_i32273 ) ( ( ( dref2923 .field0 ) .f_count ) ) ) , .f_y = ( dref2923 .field1 ) } ) ) ) ) ) {
            struct Cell_56 *  cell2938 = ( (  or_dash_fail1005 ) ( ( (  get_dash_cell_dash_ptr1280 ) ( (  screen2911 ) ,  (  op_dash_add85 ( (  left_dash_off2922 ) , (  x2918 ) ) ) ,  (  y2919 ) ) ) ,  ( "x < w condition should assert that the cell exists." ) ) );
            (*  cell2938 ) .f_fg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_selection_dash_text );
            (*  cell2938 ) .f_bg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_selection_dash_bg );
        }
        y2919 = (  op_dash_add85 ( (  y2919 ) , (  from_dash_integral29 ( 1 ) ) ) );
        x2918 = (  from_dash_integral29 ( 0 ) );
        if ( (  cmp78 ( (  y2919 ) , (  h2915 ) ) != 0 ) ) {
            break;
        }
    }
    struct Cursor_804  cur2939 = ( ( * (  ed2913 ) ) .f_cursor );
    int32_t  vx2940 = ( (  from_dash_visual1318 ) ( ( (  x_dash_to_dash_visual_dash_x1331 ) ( (  ed2913 ) ,  ( (  cur2939 ) .f_x ) ,  ( (  cur2939 ) .f_y ) ) ) ) );
    int32_t  len2941 = ( (  maybe1061 ) ( ( (  try_dash_get1118 ) ( ( (  cursor_dash_row1322 ) ( (  ed2913 ) ) ) ,  ( (  i32_dash_size271 ) ( ( (  cur2939 ) .f_x ) ) ) ) ) ,  (  char_dash_len1314 ) ,  (  from_dash_integral29 ( 1 ) ) ) );
    struct RangeIter_367  temp1449 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  len2941 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_329  __cond1450 =  next368 (&temp1449);
        if (  __cond1450 .tag == 0 ) {
            break;
        }
        int32_t  x2943 =  __cond1450 .stuff .Maybe_329_Just_s .field0;
        struct Cell_56 *  cursor_dash_cell2944 = ( (  or_dash_fail1005 ) ( ( (  get_dash_cell_dash_ptr1280 ) ( (  screen2911 ) ,  (  op_dash_add85 ( (  op_dash_add85 ( (  op_dash_sub86 ( (  left_dash_off2922 ) , ( ( * (  ed2913 ) ) .f_screen_dash_left ) ) ) , (  vx2940 ) ) ) , (  x2943 ) ) ) ,  (  op_dash_sub86 ( ( ( ( * (  ed2913 ) ) .f_cursor ) .f_y ) , (  from_dash_y2916 ) ) ) ) ) ,  ( "cursor out of screen" ) ) );
        (*  cursor_dash_cell2944 ) .f_fg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_cursor_dash_text );
        (*  cursor_dash_cell2944 ) .f_bg = ( ( * ( ( * (  ed2913 ) ) .f_theme ) ) .f_cursor_dash_bg );
    }
    return ( Unit_13_Unit );
}

static  enum Unit_13   update_dash_animation1451 (    struct Maybe_1015 *  dref2946 ,    struct Screen_646 *  screen2949 ) {
    struct Maybe_1015  dref2950 = ( (* dref2946 ) );
    if ( dref2950.tag == Maybe_1015_None_t ) {
        return ( Unit_13_Unit );
    }
    else if ( dref2950.tag == Maybe_1015_Just_t ) {
        struct Duration_1223  diff2952 = ( (  diff1224 ) ( ( (  now1220 ) ( ) ) ,  ( dref2950 .stuff .Maybe_1015_Just_s .field0 ) ) );
        struct Duration_1223  limit2953 = ( (  duration_dash_from_dash_ns1225 ) ( (  from_dash_integral35 ( 50000000 ) ) ) );
        if ( (  cmp1222 ( (  diff2952 ) , (  limit2953 ) ) == 2 ) ) {
            (* dref2946 ) = ( (struct Maybe_1015) { .tag = Maybe_1015_None_t } );
            return ( Unit_13_Unit );
        }
        int64_t  x_dash_fill2954 = (  op_dash_div83 ( ( (  u32_dash_i64276 ) ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int64_t  y_dash_fill2955 = (  op_dash_div83 ( ( (  u32_dash_i64276 ) ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral35 ( 2 ) ) ) );
        int32_t  x_dash_progress2956 = ( (  i64_dash_i32272 ) ( (  op_dash_div83 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1226 ) ( (  diff2952 ) ) ) , (  x_dash_fill2954 ) ) ) , ( (  duration_dash_to_dash_ns1226 ) ( (  limit2953 ) ) ) ) ) ) );
        int32_t  y_dash_progress2957 = ( (  i64_dash_i32272 ) ( (  op_dash_div83 ( (  op_dash_mul32 ( ( (  duration_dash_to_dash_ns1226 ) ( (  diff2952 ) ) ) , (  y_dash_fill2955 ) ) ) , ( (  duration_dash_to_dash_ns1226 ) ( (  limit2953 ) ) ) ) ) ) );
        uint32_t  center_dash_x2958 = (  op_dash_add90 ( (  op_dash_div93 ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_width ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        uint32_t  center_dash_y2959 = (  op_dash_add90 ( (  op_dash_div93 ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_height ) , (  from_dash_integral36 ( 2 ) ) ) ) , (  from_dash_integral36 ( 1 ) ) ) );
        ( (  set_dash_screen_dash_bg1278 ) ( (  screen2949 ) ,  ( (struct Color_57) { .tag = Color_57_ColorDefault_t } ) ) );
        int32_t  x_dash_off2960 = (  op_dash_sub86 ( ( (  i64_dash_i32272 ) ( (  x_dash_fill2954 ) ) ) , (  x_dash_progress2956 ) ) );
        int32_t  y_dash_off2961 = (  op_dash_sub86 ( ( (  i64_dash_i32272 ) ( (  y_dash_fill2955 ) ) ) , (  y_dash_progress2957 ) ) );
        int32_t  h2962 = (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        int32_t  w2963 = (  op_dash_sub86 ( ( (  u32_dash_i32277 ) ( ( ( * ( ( * (  screen2949 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral29 ( 1 ) ) ) );
        struct RangeIter_367  temp1452 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  h2962 ) ) ) );
        while (true) {
            struct Maybe_329  __cond1453 =  next368 (&temp1452);
            if (  __cond1453 .tag == 0 ) {
                break;
            }
            int32_t  screen_dash_y2965 =  __cond1453 .stuff .Maybe_329_Just_s .field0;
            struct RangeIter_367  temp1454 =  into_dash_iter366 ( ( (  to364 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  w2963 ) ) ) );
            while (true) {
                struct Maybe_329  __cond1455 =  next368 (&temp1454);
                if (  __cond1455 .tag == 0 ) {
                    break;
                }
                int32_t  screen_dash_x2967 =  __cond1455 .stuff .Maybe_329_Just_s .field0;
                if ( ( ( ( (  cmp78 ( (  screen_dash_x2967 ) , (  x_dash_off2960 ) ) != 2 ) || (  cmp78 ( (  screen_dash_x2967 ) , (  op_dash_sub86 ( (  w2963 ) , (  x_dash_off2960 ) ) ) ) != 0 ) ) || (  cmp78 ( (  screen_dash_y2965 ) , (  y_dash_off2961 ) ) != 2 ) ) || (  cmp78 ( (  screen_dash_y2965 ) , (  op_dash_sub86 ( (  h2962 ) , (  y_dash_off2961 ) ) ) ) != 0 ) ) ) {
                    ( (  put_dash_char1286 ) ( (  screen2949 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  (  screen_dash_x2967 ) ,  (  screen_dash_y2965 ) ) );
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1426 {
    enum Unit_13  (*fun) (  struct env1426  ,    struct List_283  ,    const char*  );
    struct env1426 env;
};

struct funenv1421 {
    struct List_283  (*fun) (  struct env1421  ,    const char*  ,    enum CAllocator_4  );
    struct env1421 env;
};

struct funenv1218 {
    const char*  (*fun) (  struct env1218  ,    struct TakeWhile_513  ,    enum CAllocator_4  );
    struct env1218 env;
};

struct funenv1216 {
    const char*  (*fun) (  struct env1216  ,    struct TakeWhile_508  ,    enum CAllocator_4  );
    struct env1216 env;
};

struct env1456 {
    ;
    ;
    struct Theme_1020 *  dark_dash_theme2487;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1426 envinst1426;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env1421 envinst1421;
    ;
    ;
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
    struct env1216 envinst1216;
    struct Theme_1020 *  light_dash_theme2488;
    ;
    ;
};

static  bool   lam1457 (    char  c2981 ) {
    return ( ! ( (  is_dash_whitespace1107 ) ( (  c2981 ) ) ) );
}

static  bool   lam1461 (    char  c2989 ) {
    return ( ! ( (  is_dash_whitespace1107 ) ( (  c2989 ) ) ) );
}

static  enum Unit_13   run_dash_cmd1456 (   struct env1456 env ,    struct Editor_1018 *  ed2970 ,    struct DynStr_134  s2972 ,    struct Dims_1340  dim2974 ,    enum CAllocator_4  al2976 ) {
    struct DropWhile_511  s2977 = ( (  drop_dash_while536 ) ( (  s2972 ) ,  (  is_dash_whitespace1107 ) ) );
    struct TakeWhile_515  cmd2978 = ( (  take_dash_while533 ) ( (  s2977 ) ,  (  is_dash_not_dash_whitespace1108 ) ) );
    struct DropWhile_509  rest2979 = ( (  drop_dash_while539 ) ( ( (  drop_dash_while538 ) ( (  s2977 ) ,  (  is_dash_not_dash_whitespace1108 ) ) ) ,  (  is_dash_whitespace1107 ) ) );
    if ( ( (  eq974 ) ( (  cmd2978 ) ,  ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
        struct TakeWhile_508  filename2982 = ( (  take_dash_while532 ) ( (  rest2979 ) ,  (  lam1457 ) ) );
        const char*  temp1458;
        const char*  alfname2983 = (  temp1458 );
        if ( ( (  null794 ) ( (  filename2982 ) ) ) ) {
            struct Maybe_268  dref2984 = ( ( * (  ed2970 ) ) .f_filename );
            if ( dref2984.tag == Maybe_268_None_t ) {
                return ( Unit_13_Unit );
            }
            else if ( dref2984.tag == Maybe_268_Just_t ) {
                alfname2983 = ( dref2984 .stuff .Maybe_268_Just_s .field0 );
            }
        } else {
            struct Maybe_268  dref2986 = ( ( * (  ed2970 ) ) .f_filename );
            if ( dref2986.tag == Maybe_268_None_t ) {
            }
            else if ( dref2986.tag == Maybe_268_Just_t ) {
                ( (  free1099 ) ( (  al2976 ) ,  ( (struct Slice_1100) { .f_ptr = ( (  cast194 ) ( ( dref2986 .stuff .Maybe_268_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
            }
            struct funenv1216  temp1459 = ( (struct funenv1216){ .fun = mk_dash_const_dash_str1216, .env =  env.envinst1216  } );
            alfname2983 = ( temp1459.fun ( temp1459.env ,  (  filename2982 ) ,  (  al2976 ) ) );
        }
        struct funenv1426  temp1460 = ( (struct funenv1426){ .fun = save_dash_file1426, .env =  env.envinst1426  } );
        ( temp1460.fun ( temp1460.env ,  ( ( * (  ed2970 ) ) .f_current_dash_file ) ,  (  alfname2983 ) ) );
        (*  ed2970 ) .f_filename = ( ( Maybe_268_Just ) ( (  alfname2983 ) ) );
    } else {
        if ( ( (  eq974 ) ( (  cmd2978 ) ,  ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
            (*  ed2970 ) .f_running = ( false );
        } else {
            if ( ( (  eq974 ) ( (  cmd2978 ) ,  ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                struct TakeWhile_513  filename2990 = ( (  take_dash_while529 ) ( (  rest2979 ) ,  (  lam1461 ) ) );
                struct funenv1218  temp1462 = ( (struct funenv1218){ .fun = mk_dash_const_dash_str1218, .env =  env.envinst1218  } );
                const char*  alfname2991 = ( temp1462.fun ( temp1462.env ,  (  filename2990 ) ,  (  al2976 ) ) );
                struct List_283  og2992 = ( ( * (  ed2970 ) ) .f_current_dash_file );
                struct funenv1421  temp1463 = ( (struct funenv1421){ .fun = load_dash_file1421, .env =  env.envinst1421  } );
                (*  ed2970 ) .f_current_dash_file = ( temp1463.fun ( temp1463.env ,  (  alfname2991 ) ,  (  al2976 ) ) );
                struct Maybe_268  dref2993 = ( ( * (  ed2970 ) ) .f_filename );
                if ( dref2993.tag == Maybe_268_None_t ) {
                }
                else if ( dref2993.tag == Maybe_268_Just_t ) {
                    ( (  free1099 ) ( (  al2976 ) ,  ( (struct Slice_1100) { .f_ptr = ( (  cast194 ) ( ( dref2993 .stuff .Maybe_268_Just_s .field0 ) ) ) , .f_count = (  from_dash_integral11 ( 0 ) ) } ) ) );
                }
                (*  ed2970 ) .f_filename = ( ( Maybe_268_Just ) ( (  alfname2991 ) ) );
                (*  ed2970 ) .f_cursor = ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } );
                (*  ed2970 ) .f_goal_dash_x = ( ( Visual_1019_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) );
                (*  ed2970 ) .f_screen_dash_top = (  from_dash_integral29 ( 0 ) );
                ( (  free_dash_file1432 ) ( (  og2992 ) ) );
            } else {
                if ( ( (  eq977 ) ( (  cmd2978 ) ,  ( "theme" ) ) ) ) {
                    struct TakeWhile_526  theme_dash_name2995 = ( (  take_dash_while531 ) ( (  rest2979 ) ,  (  is_dash_not_dash_whitespace1108 ) ) );
                    if ( ( (  eq980 ) ( (  theme_dash_name2995 ) ,  ( "dark" ) ) ) ) {
                        (*  ed2970 ) .f_theme = ( env.dark_dash_theme2487 );
                    } else {
                        if ( ( (  eq980 ) ( (  theme_dash_name2995 ) ,  ( "light" ) ) ) ) {
                            (*  ed2970 ) .f_theme = ( env.light_dash_theme2488 );
                        } else {
                        }
                    }
                } else {
                    struct Maybe_725  dref2996 = ( (  parse_dash_int1114 ) ( (  cmd2978 ) ) );
                    if ( dref2996.tag == Maybe_725_Just_t ) {
                        int32_t  newline2998 = ( (  clamp810 ) ( ( (  i64_dash_i32272 ) ( (  op_dash_sub82 ( ( dref2996 .stuff .Maybe_725_Just_s .field0 ) , (  from_dash_integral35 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( (  size_dash_i32273 ) ( ( ( ( * (  ed2970 ) ) .f_current_dash_file ) .f_count ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                        ( (  move_dash_to_dash_row1342 ) ( (  ed2970 ) ,  (  newline2998 ) ,  (  dim2974 ) ) );
                    }
                    else if ( dref2996.tag == Maybe_725_None_t ) {
                        return ( Unit_13_Unit );
                    }
                }
            }
        }
    }
    return ( Unit_13_Unit );
}

struct funenv1214 {
    const char*  (*fun) (  struct env1214  ,    const char*  ,    enum CAllocator_4  );
    struct env1214 env;
};

struct funenv1237 {
    struct Tui_647  (*fun) (  struct env1237  );
    struct env1237 env;
};

struct funenv1435 {
    struct Dims_1340  (*fun) (  struct env1435  ,    struct Editor_1018 *  ,    struct Tui_647 *  );
    struct env1435 env;
};

struct funenv1379 {
    enum Unit_13  (*fun) (  struct env1379  ,    struct Editor_1018 *  ,    struct Dims_1340  );
    struct env1379 env;
};

struct funenv1364 {
    enum Unit_13  (*fun) (  struct env1364  ,    struct Editor_1018 *  ,    enum PastePos_1365  ,    struct Dims_1340  );
    struct env1364 env;
};

struct funenv1413 {
    enum Unit_13  (*fun) (  struct env1413  ,    struct Editor_1018 *  );
    struct env1413 env;
};

struct funenv1417 {
    enum Unit_13  (*fun) (  struct env1417  ,    struct Editor_1018 *  );
    struct env1417 env;
};

struct funenv1397 {
    enum Unit_13  (*fun) (  struct env1397  ,    struct Editor_1018 *  ,    int32_t  ,    enum CAllocator_4  );
    struct env1397 env;
};

struct funenv1403 {
    struct Maybe_1008  (*fun) (  struct env1403  ,    struct Editor_1018 *  ,    struct Slice_5  );
    struct env1403 env;
};

struct funenv1410 {
    struct Maybe_1008  (*fun) (  struct env1410  ,    struct Editor_1018 *  ,    struct Slice_5  );
    struct env1410 env;
};

static  int32_t   lam1504 (    struct Cursor_804  s3032 ) {
    return ( (  s3032 ) .f_x );
}

static  int32_t   lam1507 (    struct Cursor_804  s3036 ) {
    return ( (  s3036 ) .f_x );
}

static  bool   lam1509 (    char  c3040 ) {
    return ( (  is_dash_word_dash_char1402 ) ( (  c3040 ) ) );
}

static  bool   lam1510 (    char  c3042 ) {
    return ( ! ( (  is_dash_word_dash_char1402 ) ( (  c3042 ) ) ) );
}

static  bool   lam1512 (    char  c3046 ) {
    return ( ! ( (  is_dash_word_dash_char1402 ) ( (  c3046 ) ) ) );
}

static  bool   lam1513 (    char  c3048 ) {
    return ( (  is_dash_word_dash_char1402 ) ( (  c3048 ) ) );
}

static  bool   lam1515 (    char  c3052 ) {
    return ( ! ( (  is_dash_word_dash_char1402 ) ( (  c3052 ) ) ) );
}

static  bool   lam1516 (    char  c3054 ) {
    return ( (  is_dash_word_dash_char1402 ) ( (  c3054 ) ) );
}

static  bool   lam1517 (    char  c3056 ) {
    return ( ! ( (  is_dash_word_dash_char1402 ) ( (  c3056 ) ) ) );
}

struct funenv1196 {
    enum Unit_13  (*fun) (  struct env1196  ,    struct StrBuilder_572 *  );
    struct env1196 env;
};

struct funenv1456 {
    enum Unit_13  (*fun) (  struct env1456  ,    struct Editor_1018 *  ,    struct DynStr_134  ,    struct Dims_1340  ,    enum CAllocator_4  );
    struct env1456 env;
};

struct funenv1275 {
    bool  (*fun) (  struct env1275  ,    struct Screen_646 *  );
    struct env1275 env;
};

struct funenv1437 {
    enum Unit_13  (*fun) (  struct env1437  ,    struct Screen_646 *  ,    struct Editor_1018 *  );
    struct env1437 env;
};

static  struct Maybe_50   lam1017 (   struct env1017 env ,    struct List_3  l3086 ) {
    return ( (  try_dash_get1118 ) ( ( & (  l3086 ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * ( env.ed3004 ) ) .f_cursor ) .f_x ) ) ) ) );
}

static  struct Tuple2_355   lam1538 (    char  c3088 ) {
    return ( ( Tuple2_355_Tuple2 ) ( (  c3088 ) ,  ( (  char_dash_i32983 ) ( (  c3088 ) ) ) ) );
}

static  size_t   lam1540 (    struct DynStr_134  s3094 ) {
    return ( ( (  s3094 ) .f_contents ) .f_count );
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
    struct env307 envinst307 = {
        .growth_dash_factor1698 =  growth_dash_factor1698 ,
        .starting_dash_size1697 =  starting_dash_size1697 ,
    };
    struct env566 envinst566 = {
        .envinst567 = envinst567 ,
    };
    struct env306 envinst306 = {
        .envinst307 = envinst307 ,
    };
    struct env1128 envinst1128 = {
        .envinst306 = envinst306 ,
        .envinst307 = envinst307 ,
    };
    struct env1131 envinst1131 = {
        .envinst566 = envinst566 ,
        .envinst567 = envinst567 ,
    };
    struct env1134 envinst1134 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1135 envinst1135 = {
        .shrink_dash_factor1699 =  shrink_dash_factor1699 ,
    };
    struct env1136 envinst1136 = {
        .envinst1135 = envinst1135 ,
    };
    struct env305 envinst305 = {
        .envinst306 = envinst306 ,
    };
    struct env1139 envinst1139 = {
        .envinst566 = envinst566 ,
    };
    struct env1141 envinst1141 = {
        .envinst306 = envinst306 ,
    };
    struct env1143 envinst1143 = {
        .envinst306 = envinst306 ,
    };
    struct env1145 envinst1145 = {
        .envinst306 = envinst306 ,
    };
    struct env304 envinst304 = {
        .envinst305 = envinst305 ,
    };
    struct env1150 envinst1150 = {
        .envinst1139 = envinst1139 ,
    };
    struct env1185 envinst1185 = {
        .envinst306 = envinst306 ,
    };
    struct env1187 envinst1187 = {
        .envinst306 = envinst306 ,
    };
    struct env1189 envinst1189 = {
        .envinst306 = envinst306 ,
    };
    struct env1191 envinst1191 = {
        .envinst306 = envinst306 ,
    };
    struct env1193 envinst1193 = {
        .envinst1141 = envinst1141 ,
    };
    struct env631 envinst631 = {
        .envinst306 = envinst306 ,
    };
    struct env1196 envinst1196 = {
        .envinst1136 = envinst1136 ,
    };
    struct env1202 envinst1202 = {
        .envinst1185 = envinst1185 ,
        .envinst631 = envinst631 ,
    };
    struct env1206 envinst1206 = {
        .envinst1189 = envinst1189 ,
        .envinst631 = envinst631 ,
    };
    struct env1210 envinst1210 = {
        .envinst1191 = envinst1191 ,
        .envinst631 = envinst631 ,
    };
    struct env1214 envinst1214 = {
        .envinst1202 = envinst1202 ,
    };
    struct env1216 envinst1216 = {
        .envinst1206 = envinst1206 ,
    };
    struct env1218 envinst1218 = {
        .envinst1210 = envinst1210 ,
    };
    bool  temp1236 = ( false );
    bool *  should_dash_resize2268 = ( &temp1236 );
    struct env1237 envinst1237 = {
        .should_dash_resize2268 =  should_dash_resize2268 ,
    };
    struct env1260 envinst1260 = {
        .should_dash_resize2268 =  should_dash_resize2268 ,
    };
    struct env1275 envinst1275 = {
        .envinst1260 = envinst1260 ,
    };
    struct Theme_1020  temp1315 = ( (struct Theme_1020) { .f_bg = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) , .f_text = ( ( Color_57_Color8 ) ( ( Color8_58_White8 ) ) ) , .f_cursor_dash_bg = ( ( Color_57_Color8 ) ( ( Color8_58_White8 ) ) ) , .f_cursor_dash_text = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) , .f_selection_dash_bg = ( ( Color_57_Color16 ) ( ( Color16_59_BrightWhite16 ) ) ) , .f_selection_dash_text = ( ( Color_57_Color16 ) ( ( Color16_59_Black16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_57_Color8 ) ( ( Color8_58_White8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) } );
    struct Theme_1020 *  dark_dash_theme2487 = ( &temp1315 );
    struct Theme_1020  temp1316 = ( (struct Theme_1020) { .f_bg = ( ( Color_57_Color16 ) ( ( Color16_59_BrightWhite16 ) ) ) , .f_text = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) , .f_cursor_dash_bg = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) , .f_cursor_dash_text = ( ( Color_57_Color16 ) ( ( Color16_59_BrightWhite16 ) ) ) , .f_selection_dash_bg = ( ( Color_57_Color16 ) ( ( Color16_59_BrightBlack16 ) ) ) , .f_selection_dash_text = ( ( Color_57_Color16 ) ( ( Color16_59_BrightWhite16 ) ) ) , .f_line_dash_num_dash_hi_dash_bg = ( ( Color_57_Color8 ) ( ( Color8_58_Black8 ) ) ) , .f_line_dash_num_dash_hi_dash_text = ( ( Color_57_Color16 ) ( ( Color16_59_BrightWhite16 ) ) ) } );
    struct Theme_1020 *  light_dash_theme2488 = ( &temp1316 );
    struct env1325 envinst1325 = {
        .envinst1131 = envinst1131 ,
    };
    struct env1327 envinst1327 = {
        .envinst1134 = envinst1134 ,
    };
    struct env1337 envinst1337 = {
        .envinst1202 = envinst1202 ,
    };
    struct env1350 envinst1350 = {
        .envinst1187 = envinst1187 ,
        .envinst1193 = envinst1193 ,
        .envinst631 = envinst631 ,
    };
    struct env1364 envinst1364 = {
        .envinst566 = envinst566 ,
        .envinst305 = envinst305 ,
        .envinst1141 = envinst1141 ,
        .envinst1325 = envinst1325 ,
    };
    struct env1379 envinst1379 = {
        .envinst1327 = envinst1327 ,
        .envinst1135 = envinst1135 ,
        .envinst1350 = envinst1350 ,
        .envinst1143 = envinst1143 ,
        .envinst1141 = envinst1141 ,
    };
    struct env1397 envinst1397 = {
        .envinst1131 = envinst1131 ,
        .envinst1145 = envinst1145 ,
    };
    struct env1403 envinst1403 = {
        .envinst1337 = envinst1337 ,
    };
    struct env1410 envinst1410 = {
        .envinst1337 = envinst1337 ,
    };
    struct env1413 envinst1413 = {
        .envinst1128 = envinst1128 ,
    };
    struct env1417 envinst1417 = {
        .envinst1135 = envinst1135 ,
    };
    enum CAllocator_4  al2848 = ( (  idc1093 ) ( ) );
    struct env1421 envinst1421 = {
        .envinst304 = envinst304 ,
        .envinst1150 = envinst1150 ,
        .envinst566 = envinst566 ,
    };
    struct env1426 envinst1426 = {
        .al2848 =  al2848 ,
        .envinst631 = envinst631 ,
    };
    int32_t  pad2899 = (  from_dash_integral29 ( 2 ) );
    struct env1433 envinst1433 = {
        .pad2899 =  pad2899 ,
    };
    struct env1435 envinst1435 = {
        .envinst1433 = envinst1433 ,
    };
    struct env1437 envinst1437 = {
        .pad2899 =  pad2899 ,
        .envinst1433 = envinst1433 ,
    };
    struct env1456 envinst1456 = {
        .dark_dash_theme2487 =  dark_dash_theme2487 ,
        .envinst1426 = envinst1426 ,
        .envinst1421 = envinst1421 ,
        .envinst1218 = envinst1218 ,
        .envinst1216 = envinst1216 ,
        .light_dash_theme2488 =  light_dash_theme2488 ,
    };
    struct Slice_1067  args3001 = ( (  get1313 ) ( ) );
    struct List_283  temp1464;
    struct List_283  file3002 = (  temp1464 );
    struct Maybe_268  mfilename3003 = ( (struct Maybe_268) { .tag = Maybe_268_None_t } );
    if ( (  eq45 ( ( (  args3001 ) .f_count ) , (  from_dash_integral11 ( 0 ) ) ) ) ) {
        file3002 = ( (  mk1122 ) ( (  al2848 ) ) );
        struct funenv566  temp1465 = ( (struct funenv566){ .fun = add566, .env =  envinst566  } );
        ( temp1465.fun ( temp1465.env ,  ( & (  file3002 ) ) ,  ( (  mk1123 ) ( (  al2848 ) ) ) ) );
    } else {
        struct funenv1421  temp1466 = ( (struct funenv1421){ .fun = load_dash_file1421, .env =  envinst1421  } );
        file3002 = ( temp1466.fun ( temp1466.env ,  (  elem_dash_get1081 ( (  args3001 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2848 ) ) );
        struct funenv1214  temp1467 = ( (struct funenv1214){ .fun = mk_dash_const_dash_str1214, .env =  envinst1214  } );
        mfilename3003 = ( ( Maybe_268_Just ) ( ( temp1467.fun ( temp1467.env ,  (  elem_dash_get1081 ( (  args3001 ) , (  from_dash_integral11 ( 0 ) ) ) ) ,  (  al2848 ) ) ) ) );
    }
    struct Editor_1018  temp1468 = ( (struct Editor_1018) { .f_cursor = ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = (  from_dash_integral29 ( 0 ) ) } ) , .f_running = ( true ) , .f_goal_dash_x = ( ( Visual_1019_Visual ) ( (  from_dash_integral29 ( 0 ) ) ) ) , .f_screen_dash_top = (  from_dash_integral29 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral29 ( 0 ) ) , .f_current_dash_file = (  file3002 ) , .f_filename = (  mfilename3003 ) , .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } ) , .f_anim = ( ( Maybe_1015_Just ) ( ( (  now1220 ) ( ) ) ) ) , .f_selected = ( (struct Maybe_1008) { .tag = Maybe_1008_None_t } ) , .f_theme = (  dark_dash_theme2487 ) , .f_search_dash_term = ( (struct Maybe_881) { .tag = Maybe_881_None_t } ) , .f_al = (  al2848 ) , .f_msg = ( (struct Maybe_316) { .tag = Maybe_316_None_t } ) , .f_clipboard = ( (struct Maybe_316) { .tag = Maybe_316_None_t } ) } );
    struct Editor_1018 *  ed3004 = ( &temp1468 );
    struct funenv1237  temp1470 = ( (struct funenv1237){ .fun = mk1237, .env =  envinst1237  } );
    struct Tui_647  temp1469 = ( temp1470.fun ( temp1470.env ) );
    struct Tui_647 *  tui3005 = ( &temp1469 );
    enum CAllocator_4  al3006 = ( (  idc1093 ) ( ) );
    struct Screen_646  temp1471 = ( (  mk_dash_screen1261 ) ( (  tui3005 ) ,  (  al3006 ) ) );
    struct Screen_646 *  screen3007 = ( &temp1471 );
    uint32_t  counter3008 = ( (  from_dash_integral36 ( 0 ) ) );
    bool  first_dash_draw3009 = ( true );
    while ( ( ( * (  ed3004 ) ) .f_running ) ) {
        int32_t  events3010 = (  from_dash_integral29 ( 0 ) );
        struct FunIter_545  temp1472 =  into_dash_iter544 ( ( (  from_dash_function551 ) ( (  read_dash_key1254 ) ) ) );
        while (true) {
            struct Maybe_546  __cond1473 =  next550 (&temp1472);
            if (  __cond1473 .tag == 0 ) {
                break;
            }
            struct InputEvent_547  ev3012 =  __cond1473 .stuff .Maybe_546_Just_s .field0;
            if ( (  eq41 ( (  events3010 ) , (  from_dash_integral29 ( 0 ) ) ) ) ) {
                ( (  reset_dash_msg1336 ) ( (  ed3004 ) ) );
            }
            events3010 = (  op_dash_add85 ( (  events3010 ) , (  from_dash_integral29 ( 1 ) ) ) );
            struct funenv1260  temp1474 = ( (struct funenv1260){ .fun = update_dash_dimensions1260, .env =  envinst1260  } );
            ( temp1474.fun ( temp1474.env ,  (  tui3005 ) ) );
            struct InputEvent_547  dref3013 = (  ev3012 );
            if ( dref3013.tag == InputEvent_547_Key_t ) {
                struct Key_548  dref3015 = ( dref3013 .stuff .InputEvent_547_Key_s .field0 );
                if ( dref3015.tag == Key_548_Char_t ) {
                    struct Mode_823 *  dref3017 = ( & ( ( * (  ed3004 ) ) .f_mode ) );
                    if ( (* dref3017 ).tag == Mode_823_Insert_t ) {
                        struct funenv1128  temp1475 = ( (struct funenv1128){ .fun = insert1128, .env =  envinst1128  } );
                        ( temp1475.fun ( temp1475.env ,  ( (  cursor_dash_row1322 ) ( (  ed3004 ) ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x ) ) ) ,  ( dref3015 .stuff .Key_548_Char_s .field0 ) ) );
                        struct funenv1435  temp1476 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                        ( (  move_dash_to_dash_col1341 ) ( (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1476.fun ( temp1476.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                    }
                    else if ( (* dref3017 ).tag == Mode_823_Cmd_t ) {
                        struct funenv631  temp1477 = ( (struct funenv631){ .fun = write_dash_char631, .env =  envinst631  } );
                        ( temp1477.fun ( temp1477.env ,  ( & ( (* dref3017 ) .stuff .Mode_823_Cmd_s .field0 ) ) ,  ( dref3015 .stuff .Key_548_Char_s .field0 ) ) );
                    }
                    else if ( (* dref3017 ).tag == Mode_823_SearchBox_t ) {
                        struct funenv631  temp1478 = ( (struct funenv631){ .fun = write_dash_char631, .env =  envinst631  } );
                        ( temp1478.fun ( temp1478.env ,  ( & ( (* dref3017 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ,  ( dref3015 .stuff .Key_548_Char_s .field0 ) ) );
                    }
                    else if ( true ) {
                        if ( ( (  eq1319 ( ( (* dref3017 ) ) , ( (struct Mode_823) { .tag = Mode_823_Normal_t } ) ) ) || (  eq1319 ( ( (* dref3017 ) ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) ) ) {
                            int32_t  code3021 = ( (  u8_dash_i32279 ) ( ( (  cast198 ) ( ( dref3015 .stuff .Key_548_Char_s .field0 ) ) ) ) );
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                                (*  ed3004 ) .f_running = ( false );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "k" ) ) ) ) ) ) {
                                struct funenv1435  temp1479 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  op_dash_sub86 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1479.fun ( temp1479.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "j" ) ) ) ) ) ) {
                                struct funenv1435  temp1480 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1480.fun ( temp1480.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "h" ) ) ) ) ) ) {
                                struct funenv1435  temp1481 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_left1343 ) ( (  ed3004 ) ,  ( temp1481.fun ( temp1481.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "l" ) ) ) ) ) ) {
                                struct funenv1435  temp1482 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_right1344 ) ( (  ed3004 ) ,  ( temp1482.fun ( temp1482.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "i" ) ) ) ) ) ) {
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "v" ) ) ) ) ) ) {
                                if ( (  eq1319 ( ( (* dref3017 ) ) , ( (struct Mode_823) { .tag = Mode_823_Select_t } ) ) ) ) {
                                    (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                                } else {
                                    (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Select_t } );
                                    ( (  set_dash_selection1335 ) ( (  ed3004 ) ,  ( ( Maybe_1008_Just ) ( ( ( * (  ed3004 ) ) .f_cursor ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                                struct funenv1379  temp1483 = ( (struct funenv1379){ .fun = delete_dash_selected1379, .env =  envinst1379  } );
                                struct funenv1435  temp1484 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( temp1483.fun ( temp1483.env ,  (  ed3004 ) ,  ( temp1484.fun ( temp1484.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "c" ) ) ) ) ) ) {
                                struct funenv1379  temp1485 = ( (struct funenv1379){ .fun = delete_dash_selected1379, .env =  envinst1379  } );
                                struct funenv1435  temp1486 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( temp1485.fun ( temp1485.env ,  (  ed3004 ) ,  ( temp1486.fun ( temp1486.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "y" ) ) ) ) ) ) {
                                struct funenv1350  temp1487 = ( (struct funenv1350){ .fun = copy_dash_selection1350, .env =  envinst1350  } );
                                ( temp1487.fun ( temp1487.env ,  (  ed3004 ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "p" ) ) ) ) ) ) {
                                struct funenv1364  temp1488 = ( (struct funenv1364){ .fun = paste_dash_clipboard_dash_at_dash_cursor1364, .env =  envinst1364  } );
                                struct funenv1435  temp1489 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( temp1488.fun ( temp1488.env ,  (  ed3004 ) ,  ( PastePos_1365_PasteAfter ) ,  ( temp1489.fun ( temp1489.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
                                struct funenv1364  temp1490 = ( (struct funenv1364){ .fun = paste_dash_clipboard_dash_at_dash_cursor1364, .env =  envinst1364  } );
                                struct funenv1435  temp1491 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( temp1490.fun ( temp1490.env ,  (  ed3004 ) ,  ( PastePos_1365_PasteBefore ) ,  ( temp1491.fun ( temp1491.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ">" ) ) ) ) ) ) {
                                struct funenv1413  temp1492 = ( (struct funenv1413){ .fun = indent_dash_selection1413, .env =  envinst1413  } );
                                ( temp1492.fun ( temp1492.env ,  (  ed3004 ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) ) {
                                struct funenv1417  temp1493 = ( (struct funenv1417){ .fun = dedent_dash_selection1417, .env =  envinst1417  } );
                                ( temp1493.fun ( temp1493.env ,  (  ed3004 ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "I" ) ) ) ) ) ) {
                                struct funenv1435  temp1494 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to_dash_start_dash_of_dash_line_dash_indented1345 ) ( (  ed3004 ) ,  ( temp1494.fun ( temp1494.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
                                struct funenv1435  temp1495 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1346 ) ( (  ed3004 ) ,  ( temp1495.fun ( temp1495.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "o" ) ) ) ) ) ) {
                                struct funenv1397  temp1496 = ( (struct funenv1397){ .fun = insert_dash_empty_dash_row_dash_at1397, .env =  envinst1397  } );
                                ( temp1496.fun ( temp1496.env ,  (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  al3006 ) ) );
                                struct List_3 *  currow3022 = ( (  get_dash_row1321 ) ( (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                                struct funenv1435  temp1497 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to1339 ) ( (  ed3004 ) ,  ( (  size_dash_i32273 ) ( ( (  size1156 ) ( (  currow3022 ) ) ) ) ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1497.fun ( temp1497.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
                                struct funenv1397  temp1498 = ( (struct funenv1397){ .fun = insert_dash_empty_dash_row_dash_at1397, .env =  envinst1397  } );
                                ( temp1498.fun ( temp1498.env ,  (  ed3004 ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ,  (  al3006 ) ) );
                                struct funenv1435  temp1499 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to_dash_end_dash_of_dash_line1346 ) ( (  ed3004 ) ,  ( temp1499.fun ( temp1499.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Insert_t } );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                (*  ed3004 ) .f_mode = ( ( Mode_823_Cmd ) ( ( (  mk1199 ) ( (  al3006 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "/" ) ) ) ) ) ) {
                                (*  ed3004 ) .f_mode = ( ( Mode_823_SearchBox ) ( ( (  mk1199 ) ( (  al3006 ) ) ) ) );
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "n" ) ) ) ) ) ) {
                                struct Maybe_881  dref3023 = ( ( * (  ed3004 ) ) .f_search_dash_term );
                                if ( dref3023.tag == Maybe_881_None_t ) {
                                }
                                else if ( dref3023.tag == Maybe_881_Just_t ) {
                                    struct funenv1403  temp1500 = ( (struct funenv1403){ .fun = find_dash_next_dash_occurence1403, .env =  envinst1403  } );
                                    struct Maybe_1008  dref3025 = ( temp1500.fun ( temp1500.env ,  (  ed3004 ) ,  ( (  as_dash_char_dash_slice1200 ) ( ( & ( dref3023 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3025.tag == Maybe_1008_None_t ) {
                                    }
                                    else if ( dref3025.tag == Maybe_1008_Just_t ) {
                                        struct funenv1435  temp1501 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                        ( (  move_dash_to1339 ) ( (  ed3004 ) ,  (  op_dash_sub86 ( (  op_dash_add85 ( ( ( dref3025 .stuff .Maybe_1008_Just_s .field0 ) .f_x ) , ( (  size_dash_i32273 ) ( ( (  count1198 ) ( ( & ( dref3023 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3025 .stuff .Maybe_1008_Just_s .field0 ) .f_y ) ,  ( temp1501.fun ( temp1501.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                        (*  ed3004 ) .f_selected = ( ( Maybe_1008_Just ) ( ( dref3025 .stuff .Maybe_1008_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "N" ) ) ) ) ) ) {
                                struct Maybe_881  dref3027 = ( ( * (  ed3004 ) ) .f_search_dash_term );
                                if ( dref3027.tag == Maybe_881_None_t ) {
                                }
                                else if ( dref3027.tag == Maybe_881_Just_t ) {
                                    struct funenv1410  temp1502 = ( (struct funenv1410){ .fun = find_dash_prev_dash_occurence1410, .env =  envinst1410  } );
                                    struct Maybe_1008  dref3029 = ( temp1502.fun ( temp1502.env ,  (  ed3004 ) ,  ( (  as_dash_char_dash_slice1200 ) ( ( & ( dref3027 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) );
                                    if ( dref3029.tag == Maybe_1008_None_t ) {
                                    }
                                    else if ( dref3029.tag == Maybe_1008_Just_t ) {
                                        struct funenv1435  temp1503 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                        ( (  move_dash_to1339 ) ( (  ed3004 ) ,  (  op_dash_sub86 ( (  op_dash_add85 ( ( ( dref3029 .stuff .Maybe_1008_Just_s .field0 ) .f_x ) , ( (  size_dash_i32273 ) ( ( (  count1198 ) ( ( & ( dref3027 .stuff .Maybe_881_Just_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3029 .stuff .Maybe_1008_Just_s .field0 ) .f_y ) ,  ( temp1503.fun ( temp1503.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                        (*  ed3004 ) .f_selected = ( ( Maybe_1008_Just ) ( ( dref3029 .stuff .Maybe_1008_Just_s .field0 ) ) );
                                    }
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "x" ) ) ) ) ) ) {
                                if ( ( (  eq41 ( ( (  maybe1052 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  (  lam1504 ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x ) ) ) , (  from_dash_integral29 ( 0 ) ) ) ) && ( (  cursor_dash_is_dash_at_dash_line_dash_end1348 ) ( (  ed3004 ) ) ) ) ) {
                                    struct funenv1435  temp1505 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                    struct Dims_1340  dims3033 = ( temp1505.fun ( temp1505.env ,  (  ed3004 ) ,  (  tui3005 ) ) );
                                    struct Cursor_804  sel3034 = ( (  or_dash_else1007 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  ( ( * (  ed3004 ) ) .f_cursor ) ) );
                                    ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  (  dims3033 ) ) );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1346 ) ( (  ed3004 ) ,  (  dims3033 ) ) );
                                    (*  ed3004 ) .f_selected = ( ( Maybe_1008_Just ) ( (  sel3034 ) ) );
                                } else {
                                    struct funenv1435  temp1506 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                    ( (  move_dash_to_dash_end_dash_of_dash_line1346 ) ( (  ed3004 ) ,  ( temp1506.fun ( temp1506.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                    (*  ed3004 ) .f_selected = ( ( Maybe_1008_Just ) ( ( (struct Cursor_804) { .f_x = (  from_dash_integral29 ( 0 ) ) , .f_y = ( (  maybe1053 ) ( ( ( * (  ed3004 ) ) .f_selected ) ,  (  lam1507 ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) ) } ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "w" ) ) ) ) ) ) {
                                struct funenv1435  temp1508 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                struct Dims_1340  dims3037 = ( temp1508.fun ( temp1508.env ,  (  ed3004 ) ,  (  tui3005 ) ) );
                                struct Cursor_804  first_dash_pos3038 = ( ( * (  ed3004 ) ) .f_cursor );
                                ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3037 ) ) );
                                if ( ( !  eq52 ( ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) , ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at1329 ) ( (  ed3004 ) ,  (  first_dash_pos3038 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) ) ) ) {
                                    first_dash_pos3038 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1348 ) ( (  ed3004 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3037 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3038 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1054 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1509 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3037 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1055 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1510 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3037 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1317 ( (  first_dash_pos3038 ) , ( ( * (  ed3004 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3037 ) ) );
                                    ( (  set_dash_selection1335 ) ( (  ed3004 ) ,  ( ( Maybe_1008_Just ) ( (  first_dash_pos3038 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "e" ) ) ) ) ) ) {
                                struct funenv1435  temp1511 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                struct Dims_1340  dims3043 = ( temp1511.fun ( temp1511.env ,  (  ed3004 ) ,  (  tui3005 ) ) );
                                struct Cursor_804  first_dash_pos3044 = ( ( * (  ed3004 ) ) .f_cursor );
                                ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3043 ) ) );
                                if ( ( !  eq52 ( ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) , ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at1329 ) ( (  ed3004 ) ,  (  first_dash_pos3044 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) ) ) ) {
                                    first_dash_pos3044 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1348 ) ( (  ed3004 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3043 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3044 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1056 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1512 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3043 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1057 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1513 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3043 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1317 ( (  first_dash_pos3044 ) , ( ( * (  ed3004 ) ) .f_cursor ) ) ) ) {
                                    ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3043 ) ) );
                                    ( (  set_dash_selection1335 ) ( (  ed3004 ) ,  ( ( Maybe_1008_Just ) ( (  first_dash_pos3044 ) ) ) ) );
                                }
                            }
                            if ( (  eq48 ( ( dref3015 .stuff .Key_548_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "b" ) ) ) ) ) ) {
                                struct funenv1435  temp1514 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                struct Dims_1340  dims3049 = ( temp1514.fun ( temp1514.env ,  (  ed3004 ) ,  (  tui3005 ) ) );
                                struct Cursor_804  first_dash_pos3050 = ( ( * (  ed3004 ) ) .f_cursor );
                                ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3049 ) ) );
                                if ( ( !  eq52 ( ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) , ( (  fmap_dash_maybe1022 ) ( ( (  char_dash_at1329 ) ( (  ed3004 ) ,  (  first_dash_pos3050 ) ) ) ,  (  is_dash_word_dash_char1402 ) ) ) ) ) ) {
                                    first_dash_pos3050 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end1348 ) ( (  ed3004 ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3049 ) ) ) ) ) {
                                        break;
                                    }
                                    first_dash_pos3050 = ( ( * (  ed3004 ) ) .f_cursor );
                                }
                                while ( ( (  maybe1058 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1515 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3049 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                while ( ( (  maybe1059 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1516 ) ,  ( false ) ) ) ) {
                                    if ( ( ! ( (  move_dash_left1343 ) ( (  ed3004 ) ,  (  dims3049 ) ) ) ) ) {
                                        break;
                                    }
                                }
                                if ( ( !  eq1317 ( (  first_dash_pos3050 ) , ( ( * (  ed3004 ) ) .f_cursor ) ) ) ) {
                                    if ( ( (  maybe1060 ) ( ( (  char_dash_at_dash_cursor1330 ) ( (  ed3004 ) ) ) ,  (  lam1517 ) ,  ( true ) ) ) ) {
                                        ( (  move_dash_right1344 ) ( (  ed3004 ) ,  (  dims3049 ) ) );
                                    }
                                    ( (  set_dash_selection1335 ) ( (  ed3004 ) ,  ( ( Maybe_1008_Just ) ( (  first_dash_pos3050 ) ) ) ) );
                                }
                            }
                        } else {
                            ( (  panic994 ) ( ( ( StrConcat_822_StrConcat ) ( ( "new mode? " ) ,  ( (* dref3017 ) ) ) ) ) );
                        }
                    }
                }
                else if ( dref3015.tag == Key_548_Ctrl_t ) {
                    if ( (  eq48 ( ( dref3015 .stuff .Key_548_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "u" ) ) ) ) ) ) {
                        (*  ed3004 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( ( ( * (  ed3004 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1435  temp1518 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                        ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  op_dash_sub86 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1518.fun ( temp1518.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                    }
                    if ( (  eq48 ( ( dref3015 .stuff .Key_548_Ctrl_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "d" ) ) ) ) ) ) {
                        (*  ed3004 ) .f_screen_dash_top = ( (  max807 ) ( (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_add85 ( ( ( * (  ed3004 ) ) .f_screen_dash_top ) , (  from_dash_integral29 ( 15 ) ) ) ) ) );
                        struct funenv1435  temp1519 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                        ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 15 ) ) ) ) ,  ( temp1519.fun ( temp1519.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                    }
                }
                else if ( dref3015.tag == Key_548_Escape_t ) {
                    struct Mode_823  dref3058 = ( ( * (  ed3004 ) ) .f_mode );
                    if ( dref3058.tag == Mode_823_Normal_t ) {
                    }
                    else if ( dref3058.tag == Mode_823_Insert_t ) {
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3058.tag == Mode_823_Cmd_t ) {
                        ( (  free1201 ) ( ( & ( dref3058 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3058.tag == Mode_823_SearchBox_t ) {
                        ( (  free1201 ) ( ( & ( dref3058 .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3058.tag == Mode_823_Select_t ) {
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                }
                else if ( dref3015.tag == Key_548_Backspace_t ) {
                    struct Mode_823 *  dref3061 = ( & ( ( * (  ed3004 ) ) .f_mode ) );
                    if ( (* dref3061 ).tag == Mode_823_Normal_t ) {
                    }
                    else if ( (* dref3061 ).tag == Mode_823_Select_t ) {
                    }
                    else if ( (* dref3061 ).tag == Mode_823_Insert_t ) {
                        if ( ( ! ( (  eq41 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x ) , (  from_dash_integral29 ( 0 ) ) ) ) && (  eq41 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 0 ) ) ) ) ) ) ) {
                            struct funenv1435  temp1520 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                            ( (  move_dash_left1343 ) ( (  ed3004 ) ,  ( temp1520.fun ( temp1520.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                            struct funenv1379  temp1521 = ( (struct funenv1379){ .fun = delete_dash_selected1379, .env =  envinst1379  } );
                            struct funenv1435  temp1522 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                            ( temp1521.fun ( temp1521.env ,  (  ed3004 ) ,  ( temp1522.fun ( temp1522.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                        }
                    }
                    else if ( (* dref3061 ).tag == Mode_823_Cmd_t ) {
                        if ( (  cmp9 ( ( (  count1198 ) ( ( & ( (* dref3061 ) .stuff .Mode_823_Cmd_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1196  temp1523 = ( (struct funenv1196){ .fun = pop1196, .env =  envinst1196  } );
                            ( temp1523.fun ( temp1523.env ,  ( & ( (* dref3061 ) .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        }
                    }
                    else if ( (* dref3061 ).tag == Mode_823_SearchBox_t ) {
                        if ( (  cmp9 ( ( (  count1198 ) ( ( & ( (* dref3061 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            struct funenv1196  temp1524 = ( (struct funenv1196){ .fun = pop1196, .env =  envinst1196  } );
                            ( temp1524.fun ( temp1524.env ,  ( & ( (* dref3061 ) .stuff .Mode_823_SearchBox_s .field0 ) ) ) );
                        }
                    }
                }
                else if ( dref3015.tag == Key_548_Enter_t ) {
                    struct Mode_823  dref3064 = ( ( * (  ed3004 ) ) .f_mode );
                    if ( dref3064.tag == Mode_823_Normal_t ) {
                    }
                    else if ( dref3064.tag == Mode_823_Select_t ) {
                    }
                    else if ( dref3064.tag == Mode_823_Insert_t ) {
                        int32_t  cx3065 = ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x );
                        struct List_3  temp1525 = ( (  mk1123 ) ( (  al3006 ) ) );
                        struct List_3 *  nurow3066 = ( &temp1525 );
                        struct TakeWhile_506  rowws3067 = ( (  indent_dash_on_dash_row1323 ) ( (  ed3004 ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) );
                        int32_t  offchars3068 = ( (  size_dash_i32273 ) ( ( (  count759 ) ( (  rowws3067 ) ) ) ) );
                        struct funenv1145  temp1526 = ( (struct funenv1145){ .fun = add_dash_all1145, .env =  envinst1145  } );
                        ( temp1526.fun ( temp1526.env ,  (  nurow3066 ) ,  (  rowws3067 ) ) );
                        struct List_3 *  cur_dash_row3069 = ( (  cursor_dash_row1322 ) ( (  ed3004 ) ) );
                        struct funenv1141  temp1527 = ( (struct funenv1141){ .fun = add_dash_all1141, .env =  envinst1141  } );
                        ( temp1527.fun ( temp1527.env ,  (  nurow3066 ) ,  ( (  subslice295 ) ( ( (  to_dash_slice1153 ) ( ( * (  cur_dash_row3069 ) ) ) ) ,  ( (  i32_dash_size271 ) ( (  cx3065 ) ) ) ,  ( ( * (  cur_dash_row3069 ) ) .f_count ) ) ) ) );
                        ( (  trim1147 ) ( (  cur_dash_row3069 ) ,  ( (  i32_dash_size271 ) ( (  cx3065 ) ) ) ) );
                        struct funenv1131  temp1528 = ( (struct funenv1131){ .fun = insert1131, .env =  envinst1131  } );
                        ( temp1528.fun ( temp1528.env ,  ( & ( ( * (  ed3004 ) ) .f_current_dash_file ) ) ,  (  op_dash_add96 ( ( (  i32_dash_size271 ) ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) ) , (  from_dash_integral11 ( 1 ) ) ) ) ,  ( * (  nurow3066 ) ) ) );
                        struct funenv1435  temp1529 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                        ( (  move_dash_to1339 ) ( (  ed3004 ) ,  (  offchars3068 ) ,  (  op_dash_add85 ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( temp1529.fun ( temp1529.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                    }
                    else if ( dref3064.tag == Mode_823_Cmd_t ) {
                        struct DynStr_134  s3071 = ( (  as_dash_str829 ) ( ( & ( dref3064 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        struct funenv1456  temp1530 = ( (struct funenv1456){ .fun = run_dash_cmd1456, .env =  envinst1456  } );
                        struct funenv1435  temp1531 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                        ( temp1530.fun ( temp1530.env ,  (  ed3004 ) ,  (  s3071 ) ,  ( temp1531.fun ( temp1531.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ,  (  al3006 ) ) );
                        ( (  free1201 ) ( ( & ( dref3064 .stuff .Mode_823_Cmd_s .field0 ) ) ) );
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                    else if ( dref3064.tag == Mode_823_SearchBox_t ) {
                        struct Maybe_881  dref3073 = ( ( * (  ed3004 ) ) .f_search_dash_term );
                        if ( dref3073.tag == Maybe_881_Just_t ) {
                            ( (  free1201 ) ( ( & ( dref3073 .stuff .Maybe_881_Just_s .field0 ) ) ) );
                        }
                        else if ( dref3073.tag == Maybe_881_None_t ) {
                        }
                        if ( (  cmp9 ( ( (  count1198 ) ( ( & ( dref3064 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) , (  from_dash_integral11 ( 0 ) ) ) == 2 ) ) {
                            (*  ed3004 ) .f_search_dash_term = ( ( Maybe_881_Just ) ( ( dref3064 .stuff .Mode_823_SearchBox_s .field0 ) ) );
                            struct funenv1403  temp1532 = ( (struct funenv1403){ .fun = find_dash_next_dash_occurence1403, .env =  envinst1403  } );
                            struct Maybe_1008  dref3075 = ( temp1532.fun ( temp1532.env ,  (  ed3004 ) ,  ( (  as_dash_char_dash_slice1200 ) ( ( & ( dref3064 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) ) );
                            if ( dref3075.tag == Maybe_1008_None_t ) {
                            }
                            else if ( dref3075.tag == Maybe_1008_Just_t ) {
                                struct funenv1435  temp1533 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                                ( (  move_dash_to1339 ) ( (  ed3004 ) ,  (  op_dash_sub86 ( (  op_dash_add85 ( ( ( dref3075 .stuff .Maybe_1008_Just_s .field0 ) .f_x ) , ( (  size_dash_i32273 ) ( ( (  count1198 ) ( ( & ( dref3064 .stuff .Mode_823_SearchBox_s .field0 ) ) ) ) ) ) ) ) , (  from_dash_integral29 ( 1 ) ) ) ) ,  ( ( dref3075 .stuff .Maybe_1008_Just_s .field0 ) .f_y ) ,  ( temp1533.fun ( temp1533.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                                (*  ed3004 ) .f_selected = ( ( Maybe_1008_Just ) ( ( dref3075 .stuff .Maybe_1008_Just_s .field0 ) ) );
                            }
                        } else {
                            (*  ed3004 ) .f_search_dash_term = ( (struct Maybe_881) { .tag = Maybe_881_None_t } );
                        }
                        (*  ed3004 ) .f_mode = ( (struct Mode_823) { .tag = Mode_823_Normal_t } );
                    }
                }
                else if ( true ) {
                }
            }
            else if ( dref3013.tag == InputEvent_547_Mouse_t ) {
                enum MouseButton_147  dref3078 = ( ( dref3013 .stuff .InputEvent_547_Mouse_s .field0 ) .f_button );
                switch (  dref3078 ) {
                    case MouseButton_147_MouseLeft : {
                        if ( ( ( dref3013 .stuff .InputEvent_547_Mouse_s .field0 ) .f_pressed ) ) {
                            int32_t  linecnt3079 = ( (  size_dash_i32273 ) ( ( ( ( * (  ed3004 ) ) .f_current_dash_file ) .f_count ) ) );
                            int32_t  cy3080 = ( (  clamp810 ) ( (  op_dash_add85 ( ( ( * (  ed3004 ) ) .f_screen_dash_top ) , ( ( dref3013 .stuff .InputEvent_547_Mouse_s .field0 ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  op_dash_sub86 ( (  linecnt3079 ) , (  from_dash_integral29 ( 1 ) ) ) ) ) );
                            struct funenv1433  temp1534 = ( (struct funenv1433){ .fun = left_dash_offset1433, .env =  envinst1433  } );
                            struct Visual_1019  vx3081 = ( ( Visual_1019_Visual ) ( (  op_dash_sub86 ( ( ( dref3013 .stuff .InputEvent_547_Mouse_s .field0 ) .f_x ) , ( ( temp1534.fun ( temp1534.env ,  (  ed3004 ) ) ) .f_total_dash_offset ) ) ) ) );
                            int32_t  cx3082 = ( (  visual_dash_x_dash_to_dash_x1332 ) ( (  ed3004 ) ,  (  vx3081 ) ,  (  cy3080 ) ) );
                            (*  ed3004 ) .f_cursor .f_x = (  cx3082 );
                            (*  ed3004 ) .f_goal_dash_x = (  vx3081 );
                            struct funenv1435  temp1535 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                            ( (  move_dash_to_dash_row1342 ) ( (  ed3004 ) ,  (  cy3080 ) ,  ( temp1535.fun ( temp1535.env ,  (  ed3004 ) ,  (  tui3005 ) ) ) ) );
                        }
                        break;
                    }
                    default: {
                        break;
                    }
                }
            }
            else if ( true ) {
                ( (  unreachable989 ) ( ) );
            }
        }
        struct funenv1275  temp1536 = ( (struct funenv1275){ .fun = resize_dash_screen_dash_if_dash_needed1275, .env =  envinst1275  } );
        bool  resized3083 = ( temp1536.fun ( temp1536.env ,  (  screen3007 ) ) );
        if ( ( ( ( (  resized3083 ) || (  cmp78 ( (  events3010 ) , (  from_dash_integral29 ( 0 ) ) ) == 2 ) ) || (  first_dash_draw3009 ) ) || ( (  is_dash_just1014 ) ( ( ( * (  ed3004 ) ) .f_anim ) ) ) ) ) {
            first_dash_draw3009 = ( false );
            ( (  clear_dash_screen1265 ) ( (  screen3007 ) ) );
            ( (  set_dash_screen_dash_fg1277 ) ( (  screen3007 ) ,  ( ( * ( ( * (  ed3004 ) ) .f_theme ) ) .f_text ) ) );
            ( (  set_dash_screen_dash_bg1278 ) ( (  screen3007 ) ,  ( ( * ( ( * (  ed3004 ) ) .f_theme ) ) .f_bg ) ) );
            ( (  fill_dash_default1281 ) ( (  screen3007 ) ) );
            struct funenv1437  temp1537 = ( (struct funenv1437){ .fun = render_dash_editor1437, .env =  envinst1437  } );
            ( temp1537.fun ( temp1537.env ,  (  screen3007 ) ,  (  ed3004 ) ) );
            bool  debug3084 = ( true );
            if ( (  debug3084 ) ) {
                ( (  draw_dash_str_dash_right1299 ) ( (  screen3007 ) ,  ( ( StrConcat_822_StrConcat ) ( ( "mode: " ) ,  ( ( * (  ed3004 ) ) .f_mode ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 0 ) ) ) );
                ( (  draw_dash_str_dash_right1300 ) ( (  screen3007 ) ,  ( ( StrConcat_838_StrConcat ) ( ( "fps: " ) ,  ( ( * (  tui3005 ) ) .f_actual_dash_fps ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 1 ) ) ) );
                struct env1017 envinst1017 = {
                    .ed3004 =  ed3004 ,
                };
                struct Maybe_354  charcode3089 = ( (  fmap_dash_maybe1023 ) ( ( (  and_dash_maybe1016 ) ( ( (  try_dash_get1119 ) ( ( & ( ( * (  ed3004 ) ) .f_current_dash_file ) ) ,  ( (  i32_dash_size271 ) ( ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) ) ) ) ,  ( (struct funenv1017){ .fun = lam1017, .env = envinst1017 } ) ) ) ,  (  lam1538 ) ) );
                ( (  draw_dash_str_dash_right1301 ) ( (  screen3007 ) ,  ( ( StrConcat_840_StrConcat ) ( ( "CURRENT CHAR CODE: " ) ,  (  charcode3089 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 2 ) ) ) );
                ( (  draw_dash_str_dash_right1302 ) ( (  screen3007 ) ,  ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( "pos: " ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_x ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "," ) ) ) ) ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 3 ) ) ) );
                size_t  rowcount3090 = ( ( * ( (  get_dash_row1321 ) ( (  ed3004 ) ,  ( ( ( * (  ed3004 ) ) .f_cursor ) .f_y ) ) ) ) .f_count );
                ( (  draw_dash_str_dash_right1303 ) ( (  screen3007 ) ,  ( ( StrConcat_17_StrConcat ) ( ( "row char count: " ) ,  (  rowcount3090 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 4 ) ) ) );
                int32_t  gx3091 = ( (  from_dash_visual1318 ) ( ( ( * (  ed3004 ) ) .f_goal_dash_x ) ) );
                ( (  draw_dash_str_dash_right1304 ) ( (  screen3007 ) ,  ( ( StrConcat_868_StrConcat ) ( ( "goal x: " ) ,  (  gx3091 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 5 ) ) ) );
                struct funenv1435  temp1539 = ( (struct funenv1435){ .fun = screen_dash_dims1435, .env =  envinst1435  } );
                struct Dims_1340  dim3092 = ( temp1539.fun ( temp1539.env ,  (  ed3004 ) ,  (  tui3005 ) ) );
                ( (  draw_dash_str_dash_right1305 ) ( (  screen3007 ) ,  ( ( StrConcat_875_StrConcat ) ( ( ( StrConcat_876_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( "sl: " ) ,  ( ( * (  ed3004 ) ) .f_screen_dash_left ) ) ) ,  ( " | " ) ) ) ,  ( (  dim3092 ) .f_cols ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 6 ) ) ) );
                ( (  draw_dash_str_dash_right1306 ) ( (  screen3007 ) ,  ( ( StrConcat_880_StrConcat ) ( ( "search term: " ) ,  ( ( * (  ed3004 ) ) .f_search_dash_term ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 7 ) ) ) );
                ( (  draw_dash_str_dash_right1307 ) ( (  screen3007 ) ,  ( ( StrConcat_895_StrConcat ) ( ( "msg: " ) ,  ( ( * (  ed3004 ) ) .f_msg ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 8 ) ) ) );
                struct Maybe_900  cpsize3095 = ( (  fmap_dash_maybe1024 ) ( ( ( * (  ed3004 ) ) .f_clipboard ) ,  (  lam1540 ) ) );
                ( (  draw_dash_str_dash_right1308 ) ( (  screen3007 ) ,  ( ( StrConcat_899_StrConcat ) ( ( "clipboard: " ) ,  (  cpsize3095 ) ) ) ,  (  from_dash_integral29 ( 0 ) ) ,  (  from_dash_integral29 ( 9 ) ) ) );
            }
            ( (  update_dash_animation1451 ) ( ( & ( ( * (  ed3004 ) ) .f_anim ) ) ,  (  screen3007 ) ) );
            ( (  render_dash_screen1269 ) ( (  screen3007 ) ) );
        }
        ( (  sync1243 ) ( (  tui3005 ) ) );
    }
    ( (  free_dash_screen1264 ) ( (  screen3007 ) ) );
    ( (  deinit1247 ) ( (  tui3005 ) ) );
}
