#include <stddef.h>
#include <sys/ioctl.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <poll.h>
#include <string.h>
#define __USE_XOPEN
#include <wchar.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>
#include <stdint.h>
#include <locale.h>
int _global_argc;
const char** _global_argv;
static  size_t   from_dash_integral0 (    int64_t  x67 ) {
    return ( (size_t ) (  x67 ) );
}

struct env1 {
    ;
    ;
    size_t  starting_dash_size2006;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2007;
};

struct env2 {
    ;
    ;
    size_t  starting_dash_size2006;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2007;
};

struct env3 {
    ;
    ;
    size_t  starting_dash_size2006;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2007;
};

enum Unit_6 {
    Unit_6_Unit,
};

enum CAllocator_8 {
    CAllocator_8_CAllocator,
};

struct Slice_11 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_10 {
    enum CAllocator_8  f_al;
    struct Slice_11  f_elements;
    size_t  f_count;
};

struct Slice_9 {
    struct List_10 *  f_ptr;
    size_t  f_count;
};

struct List_7 {
    enum CAllocator_8  f_al;
    struct Slice_9  f_elements;
    size_t  f_count;
};

struct envunion5 {
    enum Unit_6  (*fun) (  struct env1*  ,    struct List_7 *  );
    struct env1 env;
};

struct env4 {
    ;
    ;
    ;
    struct env1 envinst1;
    ;
    ;
};

struct envunion13 {
    enum Unit_6  (*fun) (  struct env2*  ,    struct List_10 *  );
    struct env2 env;
};

struct env12 {
    ;
    ;
    ;
    struct env2 envinst2;
    ;
    ;
};

struct Pos_19 {
    int32_t  f_line;
    int32_t  f_bi;
};

struct StrView_20 {
    struct Slice_11  f_contents;
};

struct Maybe_22 {
    enum {
        Maybe_22_None_t,
        Maybe_22_Just_t,
    } tag;
    union {
        struct {
            struct Pos_19  field0;
        } Maybe_22_Just_s;
    } stuff;
};

static struct Maybe_22 Maybe_22_Just (  struct Pos_19  field0 ) {
    return ( struct Maybe_22 ) { .tag = Maybe_22_Just_t, .stuff = { .Maybe_22_Just_s = { .field0 = field0 } } };
};

struct Cursors_21 {
    struct Pos_19  f_cur;
    struct Maybe_22  f_sel;
};

struct Action_18 {
    struct Pos_19  f_from;
    struct StrView_20  f_fwd;
    struct Pos_19  f_to_dash_fwd;
    struct StrView_20  f_bwd;
    struct Pos_19  f_to_dash_bwd;
    struct Cursors_21  f_before_dash_cursors;
};

struct Slice_17 {
    struct Action_18 *  f_ptr;
    size_t  f_count;
};

struct List_16 {
    enum CAllocator_8  f_al;
    struct Slice_17  f_elements;
    size_t  f_count;
};

struct envunion15 {
    enum Unit_6  (*fun) (  struct env3*  ,    struct List_16 *  );
    struct env3 env;
};

struct env14 {
    ;
    ;
    ;
    struct env3 envinst3;
    ;
    ;
};

struct envunion24 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct envunion25 {
    enum Unit_6  (*fun) (  struct env1*  ,    struct List_7 *  );
    struct env1 env;
};

struct env23 {
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    struct env1 envinst1;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env26 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2008;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env27 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  shrink_dash_factor2008;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion29 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct env28 {
    ;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
};

struct envunion31 {
    enum Unit_6  (*fun) (  struct env12*  ,    struct List_10 *  ,    uint8_t  );
    struct env12 env;
};

struct env30 {
    ;
    ;
    struct env12 envinst12;
    ;
    ;
    ;
};

struct Array_34 {
    struct List_10 _arr [1];
};

struct envunion33 {
    enum Unit_6  (*fun) (  struct env28*  ,    struct List_7 *  ,    struct Array_34  );
    struct env28 env;
};

struct env32 {
    ;
    ;
    ;
    ;
    ;
    struct env28 envinst28;
};

struct envunion36 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env35 {
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
};

static  int32_t   from_dash_integral38 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   lc_dash_ctype37 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  const char*   from_dash_string39 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct env41 {
    ;
    ;
    ;
    bool *  should_dash_resize3222;
    ;
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

struct env42 {
    ;
    ;
    ;
    bool *  should_dash_resize3222;
};

enum ColorPalette_46 {
    ColorPalette_46_Palette8,
    ColorPalette_46_Palette16,
    ColorPalette_46_Palette256,
    ColorPalette_46_PaletteRGB,
};

struct Array_48 {
    uint8_t _arr [32];
};

struct Termios_47 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_48  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_45 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_46  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_47  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion44 {
    bool  (*fun) (  struct env42*  ,    struct Tui_45 *  );
    struct env42 env;
};

struct env43 {
    struct env42 envinst42;
    ;
};

struct envunion50 {
    bool  (*fun) (  struct env42*  ,    struct Tui_45 *  );
    struct env42 env;
};

struct env49 {
    ;
    ;
    struct env42 envinst42;
    ;
    ;
    ;
};

struct envunion52 {
    struct List_7  (*fun) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  );
    struct env32 env;
};

struct env51 {
    ;
    struct env32 envinst32;
    ;
    ;
    ;
    ;
};

struct envunion54 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

struct envunion55 {
    enum Unit_6  (*fun) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  );
    struct env23 env;
};

struct envunion56 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env53 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env35 envinst35;
    ;
    ;
    ;
    struct env23 envinst23;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
};

struct envunion58 {
    enum Unit_6  (*fun) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  );
    struct env26 env;
};

struct envunion59 {
    enum Unit_6  (*fun) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  );
    struct env27 env;
};

struct envunion60 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct Actions_63 {
    struct List_16  f_list;
    size_t  f_cur;
};

struct TextBuf_62 {
    struct List_7  f_buf;
    struct Actions_63  f_actions;
};

struct envunion61 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
};

struct envunion64 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env57 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env26 envinst26;
    struct env27 envinst27;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env53 envinst53;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion66 {
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env57 env;
};

struct env65 {
    ;
    ;
    struct env57 envinst57;
    ;
    ;
};

struct envunion68 {
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env57 env;
};

struct env67 {
    ;
    ;
    struct env57 envinst57;
    ;
    ;
};

struct envunion70 {
    struct Pos_19  (*fun) (  struct env65*  ,    struct TextBuf_62 *  ,    struct Action_18  );
    struct env65 env;
};

struct env69 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env65 envinst65;
};

struct envunion72 {
    struct Pos_19  (*fun) (  struct env67*  ,    struct TextBuf_62 *  ,    struct Action_18  );
    struct env67 env;
};

struct env71 {
    ;
    ;
    ;
    ;
    ;
    struct env67 envinst67;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion74 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env73 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env30 envinst30;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion76 {
    enum Unit_6  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  );
    struct env14 env;
};

struct Maybe_78 {
    enum {
        Maybe_78_None_t,
        Maybe_78_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_21  field0;
        } Maybe_78_Just_s;
    } stuff;
};

static struct Maybe_78 Maybe_78_Just (  struct Cursors_21  field0 ) {
    return ( struct Maybe_78 ) { .tag = Maybe_78_Just_t, .stuff = { .Maybe_78_Just_s = { .field0 = field0 } } };
};

struct envunion77 {
    struct Maybe_78  (*fun) (  struct env71*  ,    struct TextBuf_62 *  );
    struct env71 env;
};

struct envunion79 {
    struct StrView_20  (*fun) (  struct env73*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env73 env;
};

struct env75 {
    ;
    struct env14 envinst14;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env73 envinst73;
};

struct envunion81 {
    struct Maybe_78  (*fun) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  );
    struct env75 env;
};

struct env80 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env75 envinst75;
};

struct envunion83 {
    struct Maybe_78  (*fun) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  );
    struct env75 env;
};

struct env82 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env75 envinst75;
};

struct envunion85 {
    struct Maybe_78  (*fun) (  struct env69*  ,    struct TextBuf_62 *  );
    struct env69 env;
};

struct env84 {
    ;
    ;
    ;
    ;
    ;
    struct env69 envinst69;
    ;
    ;
};

struct envunion87 {
    struct Maybe_78  (*fun) (  struct env71*  ,    struct TextBuf_62 *  );
    struct env71 env;
};

struct env86 {
    ;
    ;
    ;
    ;
    ;
    struct env71 envinst71;
    ;
    ;
};

struct envunion89 {
    struct Maybe_78  (*fun) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  );
    struct env75 env;
};

struct env88 {
    ;
    ;
    ;
    ;
    ;
    struct env75 envinst75;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion91 {
    struct StrView_20  (*fun) (  struct env73*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env73 env;
};

struct env90 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env73 envinst73;
};

enum Mode_95 {
    Mode_95_Normal,
    Mode_95_Insert,
    Mode_95_Select,
};

struct Pane_94 {
    struct TextBuf_62 *  f_buf;
    struct Pos_19  f_cursor;
    int32_t  f_vi;
    struct Maybe_22  f_sel;
    enum Mode_95  f_mode;
};

struct Tuple2_96 {
    struct Pos_19  field0;
    struct Pos_19  field1;
};

static struct Tuple2_96 Tuple2_96_Tuple2 (  struct Pos_19  field0 ,  struct Pos_19  field1 ) {
    return ( struct Tuple2_96 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion93 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  );
    struct env88 env;
};

struct envunion97 {
    enum Unit_6  (*fun) (  struct env84*  ,    struct Pane_94 *  );
    struct env84 env;
};

struct envunion98 {
    enum Unit_6  (*fun) (  struct env86*  ,    struct Pane_94 *  );
    struct env86 env;
};

struct Maybe_101 {
    enum {
        Maybe_101_None_t,
        Maybe_101_Just_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } Maybe_101_Just_s;
    } stuff;
};

static struct Maybe_101 Maybe_101_Just (  struct StrView_20  field0 ) {
    return ( struct Maybe_101 ) { .tag = Maybe_101_Just_t, .stuff = { .Maybe_101_Just_s = { .field0 = field0 } } };
};

struct Editor_100 {
    enum CAllocator_8  f_al;
    bool  f_running;
    struct Pane_94  f_pane;
    struct Maybe_101  f_clipboard;
};

struct envunion99 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_100 *  );
    struct env90 env;
};

struct env92 {
    struct env88 envinst88;
    ;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
    ;
    ;
    ;
    ;
    ;
    struct env90 envinst90;
    ;
    ;
    ;
    ;
};

struct envunion103 {
    enum Unit_6  (*fun) (  struct env80*  ,    struct Pane_94 *  ,    struct StrView_20  );
    struct env80 env;
};

struct envunion104 {
    enum Unit_6  (*fun) (  struct env82*  ,    struct Pane_94 *  );
    struct env82 env;
};

struct Key_106 {
    enum {
        Key_106_Escape_t,
        Key_106_Enter_t,
        Key_106_Tab_t,
        Key_106_Backspace_t,
        Key_106_Char_t,
        Key_106_Ctrl_t,
        Key_106_Up_t,
        Key_106_Down_t,
        Key_106_Left_t,
        Key_106_Right_t,
        Key_106_Home_t,
        Key_106_End_t,
        Key_106_PageUp_t,
        Key_106_PageDown_t,
        Key_106_Delete_t,
        Key_106_Insert_t,
        Key_106_F1_t,
        Key_106_F2_t,
        Key_106_F3_t,
        Key_106_F4_t,
        Key_106_F5_t,
        Key_106_F6_t,
        Key_106_F7_t,
        Key_106_F8_t,
        Key_106_F9_t,
        Key_106_F10_t,
        Key_106_F11_t,
        Key_106_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_106_Char_s;
        struct {
            char  field0;
        } Key_106_Ctrl_s;
    } stuff;
};

static struct Key_106 Key_106_Char (  char  field0 ) {
    return ( struct Key_106 ) { .tag = Key_106_Char_t, .stuff = { .Key_106_Char_s = { .field0 = field0 } } };
};

static struct Key_106 Key_106_Ctrl (  char  field0 ) {
    return ( struct Key_106 ) { .tag = Key_106_Ctrl_t, .stuff = { .Key_106_Ctrl_s = { .field0 = field0 } } };
};

struct envunion105 {
    enum Unit_6  (*fun) (  struct env92*  ,    struct Editor_100 *  ,    struct Key_106  );
    struct env92 env;
};

struct env102 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env80 envinst80;
    ;
    ;
    ;
    ;
    ;
    struct env82 envinst82;
    struct env92 envinst92;
};

static  enum CAllocator_8   idc107 (  ) {
    return ( CAllocator_8_CAllocator );
}

struct envunion110 {
    struct TextBuf_62  (*fun) (  struct env51*  ,    enum CAllocator_8  );
    struct env51 env;
};

static  void *   cast_dash_ptr120 (    struct List_10 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of121 (    struct List_10 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_10 *   zeroed118 (  ) {
    struct List_10 *  temp119;
    struct List_10 *  x570 = (  temp119 );
    ( ( memset ) ( ( (  cast_dash_ptr120 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of121 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_10 *   null_dash_ptr117 (  ) {
    return ( (  zeroed118 ) ( ) );
}

static  struct Slice_9   empty116 (  ) {
    return ( (struct Slice_9) { .f_ptr = ( (  null_dash_ptr117 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_7   mk115 (    enum CAllocator_8  al2001 ) {
    struct Slice_9  elements2002 = ( (  empty116 ) ( ) );
    return ( (struct List_7) { .f_al = (  al2001 ) , .f_elements = (  elements2002 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env125 {
    struct env4 envinst4;
    struct List_7 *  list2068;
};

struct envunion126 {
    enum Unit_6  (*fun) (  struct env125*  ,    struct List_10  );
    struct env125 env;
};

struct ArrayIter_127 {
    struct Array_34  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_127   into_dash_iter129 (    struct Array_34  self2273 ) {
    return ( (struct ArrayIter_127) { .f_backing = (  self2273 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_130 {
    enum {
        Maybe_130_None_t,
        Maybe_130_Just_t,
    } tag;
    union {
        struct {
            struct List_10  field0;
        } Maybe_130_Just_s;
    } stuff;
};

static struct Maybe_130 Maybe_130_Just (  struct List_10  field0 ) {
    return ( struct Maybe_130 ) { .tag = Maybe_130_Just_t, .stuff = { .Maybe_130_Just_s = { .field0 = field0 } } };
};

enum Ordering_133 {
    Ordering_133_LT,
    Ordering_133_EQ,
    Ordering_133_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp132 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_140 {
    struct StrView_20  field0;
    size_t  field1;
};

static struct StrConcat_140 StrConcat_140_StrConcat (  struct StrView_20  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_140 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_139 {
    struct StrConcat_140  field0;
    struct StrView_20  field1;
};

static struct StrConcat_139 StrConcat_139_StrConcat (  struct StrConcat_140  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_139 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_138 {
    struct StrConcat_139  field0;
    int32_t  field1;
};

static struct StrConcat_138 StrConcat_138_StrConcat (  struct StrConcat_139  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_138 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Char_141 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct StrConcat_137 {
    struct StrConcat_138  field0;
    struct Char_141  field1;
};

static struct StrConcat_137 StrConcat_137_StrConcat (  struct StrConcat_138  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_137 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_144 {
    struct StrView_20  field0;
    struct StrConcat_137  field1;
};

static struct StrConcat_144 StrConcat_144_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_137  field1 ) {
    return ( struct StrConcat_144 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_143 {
    struct StrConcat_144  field0;
    struct Char_141  field1;
};

static struct StrConcat_143 StrConcat_143_StrConcat (  struct StrConcat_144  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_143 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32147 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_6   print_dash_str146 (    struct StrView_20  self1360 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32147 ) ( ( ( (  self1360 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1360 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str152 (    size_t  self1445 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1445 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str151 (    struct StrConcat_140  self1484 ) {
    struct StrConcat_140  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str152 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str150 (    struct StrConcat_139  self1484 ) {
    struct StrConcat_139  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str151 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str146 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str153 (    int32_t  self1421 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1421 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str149 (    struct StrConcat_138  self1484 ) {
    struct StrConcat_138  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str150 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str153 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

struct CharDestructured_156 {
    enum {
        CharDestructured_156_Ref_t,
        CharDestructured_156_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_141  field0;
        } CharDestructured_156_Ref_s;
        struct {
            uint32_t  field0;
        } CharDestructured_156_Scalar_s;
    } stuff;
};

static struct CharDestructured_156 CharDestructured_156_Ref (  struct Char_141  field0 ) {
    return ( struct CharDestructured_156 ) { .tag = CharDestructured_156_Ref_t, .stuff = { .CharDestructured_156_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_156 CharDestructured_156_Scalar (  uint32_t  field0 ) {
    return ( struct CharDestructured_156 ) { .tag = CharDestructured_156_Scalar_t, .stuff = { .CharDestructured_156_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq158 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8160 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div161 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer159 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8160 ) ( (  op_dash_div161 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral162 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32163 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast164 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_156   destructure157 (    struct Char_141  c715 ) {
    if ( (  eq158 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer159 ) ( ( (  c715 ) .f_ptr ) ) ) , (  from_dash_integral162 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_156_Scalar ) ( ( (  size_dash_u32163 ) ( ( ( (  cast164 ) ( ( (  c715 ) .f_ptr ) ) ) ) ) ) ) );
    } else {
        return ( ( CharDestructured_156_Ref ) ( (  c715 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp165 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral166 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast169 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8168 (    uint32_t  x657 ) {
    return ( (  cast169 ) ( (  x657 ) ) );
}

static  enum Unit_6   printf_dash_char155 (    struct Char_141  c756 ) {
    struct CharDestructured_156  dref757 = ( (  destructure157 ) ( (  c756 ) ) );
    if ( dref757.tag == CharDestructured_156_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32147 ) ( ( ( dref757 .stuff .CharDestructured_156_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref757 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref757.tag == CharDestructured_156_Scalar_t ) {
            if ( (  cmp165 ( ( dref757 .stuff .CharDestructured_156_Scalar_s .field0 ) , (  from_dash_integral166 ( 127 ) ) ) == 2 ) ) {
                const char*  temp167 = ( (  from_dash_string39 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp167);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8168 ) ( ( dref757 .stuff .CharDestructured_156_Scalar_s .field0 ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str154 (    struct Char_141  self1385 ) {
    ( (  printf_dash_char155 ) ( (  self1385 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str148 (    struct StrConcat_137  self1484 ) {
    struct StrConcat_137  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str149 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str145 (    struct StrConcat_144  self1484 ) {
    struct StrConcat_144  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str142 (    struct StrConcat_143  self1484 ) {
    struct StrConcat_143  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str145 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_string170 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast172 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp175 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   op_dash_add176 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  size_t   next_dash_char174 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp175 ( (  pb689 ) , (  from_dash_integral162 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp175 ( (  pb689 ) , (  op_dash_add176 ( (  op_dash_add176 ( (  op_dash_add176 ( (  from_dash_integral162 ( 128 ) ) , (  from_dash_integral162 ( 64 ) ) ) ) , (  from_dash_integral162 ( 32 ) ) ) ) , (  from_dash_integral162 ( 16 ) ) ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp175 ( (  pb689 ) , (  op_dash_add176 ( (  op_dash_add176 ( (  from_dash_integral162 ( 128 ) ) , (  from_dash_integral162 ( 64 ) ) ) ) , (  from_dash_integral162 ( 32 ) ) ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp175 ( (  pb689 ) , (  op_dash_add176 ( (  from_dash_integral162 ( 128 ) ) , (  from_dash_integral162 ( 64 ) ) ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp177 = ( (  from_dash_string39 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp177);
                    exit ( 1 );
                    ( Unit_6_Unit );
                }
            }
        }
    }
}

static  struct Char_141   scan_dash_from_dash_mem173 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char174 ) ( (  p700 ) ) );
    if ( (  cmp132 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp178 = ( (  from_dash_string39 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp178);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (struct Char_141) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_141   from_dash_charlike171 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast172 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem173 ) ( (  ptr707 ) ) );
}

static  enum Unit_6   panic136 (    struct StrConcat_137  errmsg1688 ) {
    ( (  print_dash_str142 ) ( ( ( StrConcat_143_StrConcat ) ( ( ( StrConcat_144_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10 *   cast_dash_ptr179 (    struct Array_34 *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  int64_t   op_dash_mul181 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_10 *   offset_dash_ptr180 (    struct List_10 *  x338 ,    int64_t  count340 ) {
    struct List_10  temp182;
    return ( (struct List_10 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp182 ) ) ) ) ) ) ) ) );
}

static  struct List_10 *   get_dash_ptr135 (    struct Array_34 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  p2205 = ( ( (  cast_dash_ptr179 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr180 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  struct List_10   get134 (    struct Array_34 *  arr2208 ,    size_t  i2211 ) {
    return ( * ( (  get_dash_ptr135 ) ( (  arr2208 ) ,  (  i2211 ) ) ) );
}

static  size_t   op_dash_add183 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_130   next131 (    struct ArrayIter_127 *  self2280 ) {
    if ( (  cmp132 ( ( ( * (  self2280 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_130) { .tag = Maybe_130_None_t } );
    }
    struct List_10  e2282 = ( (  get134 ) ( ( & ( ( * (  self2280 ) ) .f_backing ) ) ,  ( ( * (  self2280 ) ) .f_cur ) ) );
    (*  self2280 ) .f_cur = (  op_dash_add183 ( ( ( * (  self2280 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_130_Just ) ( (  e2282 ) ) );
}

static  enum Unit_6   for_dash_each124 (    struct Array_34  iterable1055 ,   struct envunion126  fun1057 ) {
    struct ArrayIter_127  temp128 = ( (  into_dash_iter129 ) ( (  iterable1055 ) ) );
    struct ArrayIter_127 *  it1058 = ( &temp128 );
    while ( ( true ) ) {
        struct Maybe_130  dref1059 = ( (  next131 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_130_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_130_Just_t ) {
                struct envunion126  temp184 = (  fun1057 );
                ( temp184.fun ( &temp184.env ,  ( dref1059 .stuff .Maybe_130_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  bool   eq190 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_193 {
    size_t  f_size;
};

static  struct TypeSize_193   get_dash_typesize192 (  ) {
    struct List_10  temp194;
    return ( (struct TypeSize_193) { .f_size = ( sizeof( ( (  temp194 ) ) ) ) } );
}

static  struct List_10 *   cast_dash_ptr195 (    void *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  size_t   op_dash_mul196 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_9   allocate191 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize192 ) ( ) ) ) .f_size );
    struct List_10 *  ptr1927 = ( (  cast_dash_ptr195 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_9) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

struct env197 {
    ;
    struct Slice_9  new_dash_slice2012;
    ;
};

struct Tuple2_199 {
    struct List_10  field0;
    int32_t  field1;
};

static struct Tuple2_199 Tuple2_199_Tuple2 (  struct List_10  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_199 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion198 {
    enum Unit_6  (*fun) (  struct env197*  ,    struct Tuple2_199  );
    struct env197 env;
};

struct StrConcat_205 {
    struct StrConcat_139  field0;
    size_t  field1;
};

static struct StrConcat_205 StrConcat_205_StrConcat (  struct StrConcat_139  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_205 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_204 {
    struct StrConcat_205  field0;
    struct Char_141  field1;
};

static struct StrConcat_204 StrConcat_204_StrConcat (  struct StrConcat_205  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_204 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_208 {
    struct StrView_20  field0;
    struct StrConcat_204  field1;
};

static struct StrConcat_208 StrConcat_208_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_204  field1 ) {
    return ( struct StrConcat_208 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_207 {
    struct StrConcat_208  field0;
    struct Char_141  field1;
};

static struct StrConcat_207 StrConcat_207_StrConcat (  struct StrConcat_208  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_207 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str211 (    struct StrConcat_205  self1484 ) {
    struct StrConcat_205  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str150 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str152 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str210 (    struct StrConcat_204  self1484 ) {
    struct StrConcat_204  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str211 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str209 (    struct StrConcat_208  self1484 ) {
    struct StrConcat_208  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str210 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str206 (    struct StrConcat_207  self1484 ) {
    struct StrConcat_207  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str209 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic203 (    struct StrConcat_204  errmsg1688 ) {
    ( (  print_dash_str206 ) ( ( ( StrConcat_207_StrConcat ) ( ( ( StrConcat_208_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  int64_t   size_dash_i64212 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_10 *   get_dash_ptr202 (    struct Slice_9  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  elem_dash_ptr1736 = ( (  offset_dash_ptr180 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  enum Unit_6   set201 (    struct Slice_9  slice1750 ,    size_t  i1752 ,    struct List_10  x1754 ) {
    struct List_10 *  ep1755 = ( (  get_dash_ptr202 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

static  size_t   i32_dash_size213 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_6   lam200 (   struct env197* env ,    struct Tuple2_199  dref2013 ) {
    return ( (  set201 ) ( ( env->new_dash_slice2012 ) ,  ( (  i32_dash_size213 ) ( ( dref2013 .field1 ) ) ) ,  ( dref2013 .field0 ) ) );
}

struct SliceIter_216 {
    struct Slice_9  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_217 {
    int32_t  f_from;
};

struct Zip_215 {
    struct SliceIter_216  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_215   into_dash_iter219 (    struct Zip_215  self905 ) {
    return (  self905 );
}

struct Maybe_220 {
    enum {
        Maybe_220_None_t,
        Maybe_220_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_199  field0;
        } Maybe_220_Just_s;
    } stuff;
};

static struct Maybe_220 Maybe_220_Just (  struct Tuple2_199  field0 ) {
    return ( struct Maybe_220 ) { .tag = Maybe_220_Just_t, .stuff = { .Maybe_220_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_130   next222 (    struct SliceIter_216 *  self1804 ) {
    size_t  off1805 = ( ( * (  self1804 ) ) .f_current_dash_offset );
    if ( (  cmp132 ( (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1804 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_130) { .tag = Maybe_130_None_t } );
    }
    struct List_10  elem1806 = ( * ( (  offset_dash_ptr180 ) ( ( ( ( * (  self1804 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  off1805 ) ) ) ) ) );
    (*  self1804 ) .f_current_dash_offset = (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_130_Just ) ( (  elem1806 ) ) );
}

struct Maybe_223 {
    enum {
        Maybe_223_None_t,
        Maybe_223_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_223_Just_s;
    } stuff;
};

static struct Maybe_223 Maybe_223_Just (  int32_t  field0 ) {
    return ( struct Maybe_223 ) { .tag = Maybe_223_Just_t, .stuff = { .Maybe_223_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add225 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_223   next224 (    struct FromIter_217 *  dref899 ) {
    int32_t  v901 = ( ( (* dref899 ) ) .f_from );
    (* dref899 ) .f_from = (  op_dash_add225 ( ( ( (* dref899 ) ) .f_from ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( ( Maybe_223_Just ) ( (  v901 ) ) );
}

static  struct Maybe_220   next221 (    struct Zip_215 *  self908 ) {
    struct Zip_215  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_130  dref910 = ( (  next222 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_130_None_t ) {
            return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_130_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_220) { .tag = Maybe_220_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next222 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_220_Just ) ( ( ( Tuple2_199_Tuple2 ) ( ( dref910 .stuff .Maybe_130_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each214 (    struct Zip_215  iterable1055 ,   struct envunion198  fun1057 ) {
    struct Zip_215  temp218 = ( (  into_dash_iter219 ) ( (  iterable1055 ) ) );
    struct Zip_215 *  it1058 = ( &temp218 );
    while ( ( true ) ) {
        struct Maybe_220  dref1059 = ( (  next221 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_220_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_220_Just_t ) {
                struct envunion198  temp226 = (  fun1057 );
                ( temp226.fun ( &temp226.env ,  ( dref1059 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct SliceIter_216   into_dash_iter228 (    struct Slice_9  self1798 ) {
    return ( (struct SliceIter_216) { .f_slice = (  self1798 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_217   into_dash_iter229 (    struct FromIter_217  it897 ) {
    return (  it897 );
}

static  struct Zip_215   zip227 (    struct Slice_9  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_216  left_dash_it919 = ( (  into_dash_iter228 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_215) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct FromIter_217   from230 (    int32_t  f894 ) {
    return ( (struct FromIter_217) { .f_from = (  f894 ) } );
}

static  void *   cast_dash_ptr232 (    struct List_10 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free231 (    enum CAllocator_8  dref1929 ,    struct Slice_9  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr232 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full189 (   struct env1* env ,    struct List_7 *  list2011 ) {
    if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2011 ) .f_elements = ( (  allocate191 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( env->starting_dash_size2006 ) ) );
    } else {
        if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , ( ( ( * (  list2011 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_9  new_dash_slice2012 = ( (  allocate191 ) ( ( ( * (  list2011 ) ) .f_al ) ,  (  op_dash_mul196 ( ( ( * (  list2011 ) ) .f_count ) , ( env->growth_dash_factor2007 ) ) ) ) );
            struct env197 envinst197 = {
                .new_dash_slice2012 =  new_dash_slice2012 ,
            };
            struct envunion198  fun2016 = ( (struct envunion198){ .fun = (  enum Unit_6  (*) (  struct env197*  ,    struct Tuple2_199  ) )lam200 , .env =  envinst197 } );
            ( (  for_dash_each214 ) ( ( (  zip227 ) ( ( ( * (  list2011 ) ) .f_elements ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2016 ) ) );
            ( (  free231 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( ( * (  list2011 ) ) .f_elements ) ) );
            (*  list2011 ) .f_elements = (  new_dash_slice2012 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add187 (   struct env4* env ,    struct List_7 *  list2019 ,    struct List_10  elem2021 ) {
    struct envunion5  temp188 = ( (struct envunion5){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full189 , .env =  env->envinst1 } );
    ( temp188.fun ( &temp188.env ,  (  list2019 ) ) );
    ( (  set201 ) ( ( ( * (  list2019 ) ) .f_elements ) ,  ( ( * (  list2019 ) ) .f_count ) ,  (  elem2021 ) ) );
    (*  list2019 ) .f_count = (  op_dash_add183 ( ( ( * (  list2019 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam185 (   struct env125* env ,    struct List_10  x2072 ) {
    struct envunion29  temp186 = ( (struct envunion29){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add187 , .env =  env->envinst4 } );
    return ( temp186.fun ( &temp186.env ,  ( env->list2068 ) ,  (  x2072 ) ) );
}

static  enum Unit_6   add_dash_all123 (   struct env28* env ,    struct List_7 *  list2068 ,    struct Array_34  it2070 ) {
    struct env125 envinst125 = {
        .envinst4 = env->envinst4 ,
        .list2068 =  list2068 ,
    };
    ( (  for_dash_each124 ) ( (  it2070 ) ,  ( (struct envunion126){ .fun = (  enum Unit_6  (*) (  struct env125*  ,    struct List_10  ) )lam185 , .env =  envinst125 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_7   from_dash_iter113 (   struct env32* env ,    struct Array_34  iter2106 ,    enum CAllocator_8  al2108 ) {
    struct List_7  temp114 = ( (  mk115 ) ( (  al2108 ) ) );
    struct List_7 *  list2109 = ( &temp114 );
    struct envunion33  temp122 = ( (struct envunion33){ .fun = (  enum Unit_6  (*) (  struct env28*  ,    struct List_7 *  ,    struct Array_34  ) )add_dash_all123 , .env =  env->envinst28 } );
    ( temp122.fun ( &temp122.env ,  (  list2109 ) ,  (  iter2106 ) ) );
    return ( * (  list2109 ) );
}

static  struct Array_34   from_dash_listlike233 (    struct Array_34  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr239 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of240 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed237 (  ) {
    uint8_t *  temp238;
    uint8_t *  x570 = (  temp238 );
    ( ( memset ) ( ( (  cast_dash_ptr239 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of240 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr236 (  ) {
    return ( (  zeroed237 ) ( ) );
}

static  struct Slice_11   empty235 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr236 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_10   mk234 (    enum CAllocator_8  al2001 ) {
    struct Slice_11  elements2002 = ( (  empty235 ) ( ) );
    return ( (struct List_10) { .f_al = (  al2001 ) , .f_elements = (  elements2002 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr247 (    struct Action_18 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of248 (    struct Action_18 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_18 *   zeroed245 (  ) {
    struct Action_18 *  temp246;
    struct Action_18 *  x570 = (  temp246 );
    ( ( memset ) ( ( (  cast_dash_ptr247 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of248 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_18 *   null_dash_ptr244 (  ) {
    return ( (  zeroed245 ) ( ) );
}

static  struct Slice_17   empty243 (  ) {
    return ( (struct Slice_17) { .f_ptr = ( (  null_dash_ptr244 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_16   mk242 (    enum CAllocator_8  al2001 ) {
    struct Slice_17  elements2002 = ( (  empty243 ) ( ) );
    return ( (struct List_16) { .f_al = (  al2001 ) , .f_elements = (  elements2002 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_63   mk_dash_actions241 (    enum CAllocator_8  al3508 ) {
    return ( (struct Actions_63) { .f_list = ( (  mk242 ) ( (  al3508 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct TextBuf_62   mk111 (   struct env51* env ,    enum CAllocator_8  al3512 ) {
    struct envunion52  temp112 = ( (struct envunion52){ .fun = (  struct List_7  (*) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  ) )from_dash_iter113 , .env =  env->envinst32 } );
    return ( (struct TextBuf_62) { .f_buf = ( temp112.fun ( &temp112.env ,  ( (  from_dash_listlike233 ) ( ( (struct Array_34) { ._arr = { ( (  mk234 ) ( (  al3512 ) ) ) } } ) ) ) ,  (  al3512 ) ) ) , .f_actions = ( (  mk_dash_actions241 ) ( (  al3512 ) ) ) } );
}

struct Slice_249 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr251 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp252;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp252 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral253 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub254 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_249   get250 (  ) {
    return ( (struct Slice_249) { .f_ptr = ( (  offset_dash_ptr251 ) ( ( _global_argv ) ,  (  from_dash_integral253 ( 1 ) ) ) ) , .f_count = (  op_dash_sub254 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_258 {
    enum {
        Maybe_258_None_t,
        Maybe_258_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_258_Just_s;
    } stuff;
};

static struct Maybe_258 Maybe_258_Just (  const char*  field0 ) {
    return ( struct Maybe_258 ) { .tag = Maybe_258_Just_t, .stuff = { .Maybe_258_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined259 (  ) {
    const char*  temp260;
    return (  temp260 );
}

static  const char*   or_dash_fail257 (    struct Maybe_258  x1701 ,    struct StrConcat_204  errmsg1703 ) {
    struct Maybe_258  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_258_None_t ) {
        ( (  panic203 ) ( (  errmsg1703 ) ) );
        return ( (  undefined259 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_258_Just_t ) {
            return ( dref1704 .stuff .Maybe_258_Just_s .field0 );
        }
    }
}

static  struct Maybe_258   try_dash_get261 (    struct Slice_249  slice1739 ,    size_t  i1741 ) {
    if ( ( (  cmp132 ( (  i1741 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1741 ) , ( (  slice1739 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
    }
    const char* *  elem_dash_ptr1742 = ( (  offset_dash_ptr251 ) ( ( (  slice1739 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1741 ) ) ) ) );
    return ( ( Maybe_258_Just ) ( ( * (  elem_dash_ptr1742 ) ) ) );
}

static  const char*   get256 (    struct Slice_249  slice1745 ,    size_t  i1747 ) {
    return ( (  or_dash_fail257 ) ( ( (  try_dash_get261 ) ( (  slice1745 ) ,  (  i1747 ) ) ) ,  ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1747 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1745 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get255 (    struct Slice_249  self1843 ,    size_t  idx1845 ) {
    return ( (  get256 ) ( (  self1843 ) ,  (  idx1845 ) ) );
}

struct envunion263 {
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env57 env;
};

static  bool   eq266 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq265 (    struct Pos_19  l3477 ,    struct Pos_19  r3479 ) {
    return ( (  eq266 ( ( (  l3477 ) .f_line ) , ( (  r3479 ) .f_line ) ) ) && (  eq266 ( ( (  l3477 ) .f_bi ) , ( (  r3479 ) .f_bi ) ) ) );
}

static  size_t   size267 (    struct List_7 *  l2103 ) {
    return ( ( * (  l2103 ) ) .f_count );
}

static  struct List_10 *   get_dash_ptr272 (    struct List_7 *  list1971 ,    size_t  i1973 ) {
    if ( ( (  cmp132 ( (  i1973 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1973 ) , ( ( * (  list1971 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1973 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1971 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr202 ) ( ( ( * (  list1971 ) ) .f_elements ) ,  (  i1973 ) ) );
}

static  struct List_10   get271 (    struct List_7 *  list1981 ,    size_t  i1983 ) {
    return ( * ( (  get_dash_ptr272 ) ( (  list1981 ) ,  (  i1983 ) ) ) );
}

static  uint8_t *   offset_dash_ptr275 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp276;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp276 ) ) ) ) ) ) ) ) );
}

static  size_t   min277 (    size_t  l1217 ,    size_t  r1219 ) {
    if ( (  cmp132 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Slice_11   subslice274 (    struct Slice_11  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    uint8_t *  begin_dash_ptr1763 = ( (  offset_dash_ptr275 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min277 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  struct Slice_11   from273 (    struct Slice_11  slice1767 ,    size_t  from1769 ) {
    return ( (  subslice274 ) ( (  slice1767 ) ,  (  from1769 ) ,  ( (  slice1767 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice278 (    struct List_10  l2096 ) {
    uint8_t *  ptr2097 = ( ( (  l2096 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2097 ) , .f_count = ( (  l2096 ) .f_count ) } );
}

static  enum Unit_6   set279 (    struct List_7 *  list1991 ,    size_t  i1993 ,    struct List_10  elem1995 ) {
    if ( ( (  cmp132 ( (  i1993 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1993 ) , ( ( * (  list1991 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1993 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1991 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set201 ) ( ( ( * (  list1991 ) ) .f_elements ) ,  (  i1993 ) ,  (  elem1995 ) ) );
    return ( Unit_6_Unit );
}

struct env286 {
    struct env12 envinst12;
    struct List_10 *  list2068;
};

struct envunion287 {
    enum Unit_6  (*fun) (  struct env286*  ,    uint8_t  );
    struct env286 env;
};

struct SliceIter_288 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_288   into_dash_iter290 (    struct Slice_11  self1798 ) {
    return ( (struct SliceIter_288) { .f_slice = (  self1798 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_291 {
    enum {
        Maybe_291_None_t,
        Maybe_291_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_291_Just_s;
    } stuff;
};

static struct Maybe_291 Maybe_291_Just (  uint8_t  field0 ) {
    return ( struct Maybe_291 ) { .tag = Maybe_291_Just_t, .stuff = { .Maybe_291_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_291   next292 (    struct SliceIter_288 *  self1804 ) {
    size_t  off1805 = ( ( * (  self1804 ) ) .f_current_dash_offset );
    if ( (  cmp132 ( (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1804 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_291) { .tag = Maybe_291_None_t } );
    }
    uint8_t  elem1806 = ( * ( (  offset_dash_ptr275 ) ( ( ( ( * (  self1804 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  off1805 ) ) ) ) ) );
    (*  self1804 ) .f_current_dash_offset = (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_291_Just ) ( (  elem1806 ) ) );
}

static  enum Unit_6   for_dash_each285 (    struct Slice_11  iterable1055 ,   struct envunion287  fun1057 ) {
    struct SliceIter_288  temp289 = ( (  into_dash_iter290 ) ( (  iterable1055 ) ) );
    struct SliceIter_288 *  it1058 = ( &temp289 );
    while ( ( true ) ) {
        struct Maybe_291  dref1059 = ( (  next292 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_291_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_291_Just_t ) {
                struct envunion287  temp293 = (  fun1057 );
                ( temp293.fun ( &temp293.env ,  ( dref1059 .stuff .Maybe_291_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct TypeSize_301 {
    size_t  f_size;
};

static  struct TypeSize_301   get_dash_typesize300 (  ) {
    uint8_t  temp302;
    return ( (struct TypeSize_301) { .f_size = ( sizeof( ( (  temp302 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr303 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate299 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize300 ) ( ) ) ) .f_size );
    uint8_t *  ptr1927 = ( (  cast_dash_ptr303 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

struct env304 {
    ;
    struct Slice_11  new_dash_slice2012;
    ;
};

struct Tuple2_306 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_306 Tuple2_306_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_306 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion305 {
    enum Unit_6  (*fun) (  struct env304*  ,    struct Tuple2_306  );
    struct env304 env;
};

static  uint8_t *   get_dash_ptr309 (    struct Slice_11  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1736 = ( (  offset_dash_ptr275 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  enum Unit_6   set308 (    struct Slice_11  slice1750 ,    size_t  i1752 ,    uint8_t  x1754 ) {
    uint8_t *  ep1755 = ( (  get_dash_ptr309 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam307 (   struct env304* env ,    struct Tuple2_306  dref2013 ) {
    return ( (  set308 ) ( ( env->new_dash_slice2012 ) ,  ( (  i32_dash_size213 ) ( ( dref2013 .field1 ) ) ) ,  ( dref2013 .field0 ) ) );
}

struct Zip_311 {
    struct SliceIter_288  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_311   into_dash_iter313 (    struct Zip_311  self905 ) {
    return (  self905 );
}

struct Maybe_314 {
    enum {
        Maybe_314_None_t,
        Maybe_314_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_306  field0;
        } Maybe_314_Just_s;
    } stuff;
};

static struct Maybe_314 Maybe_314_Just (  struct Tuple2_306  field0 ) {
    return ( struct Maybe_314 ) { .tag = Maybe_314_Just_t, .stuff = { .Maybe_314_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_314   next315 (    struct Zip_311 *  self908 ) {
    struct Zip_311  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_291  dref910 = ( (  next292 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_291_None_t ) {
            return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_291_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next292 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_314_Just ) ( ( ( Tuple2_306_Tuple2 ) ( ( dref910 .stuff .Maybe_291_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each310 (    struct Zip_311  iterable1055 ,   struct envunion305  fun1057 ) {
    struct Zip_311  temp312 = ( (  into_dash_iter313 ) ( (  iterable1055 ) ) );
    struct Zip_311 *  it1058 = ( &temp312 );
    while ( ( true ) ) {
        struct Maybe_314  dref1059 = ( (  next315 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_314_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_314_Just_t ) {
                struct envunion305  temp316 = (  fun1057 );
                ( temp316.fun ( &temp316.env ,  ( dref1059 .stuff .Maybe_314_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_311   zip317 (    struct Slice_11  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_288  left_dash_it919 = ( (  into_dash_iter290 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_311) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr319 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free318 (    enum CAllocator_8  dref1929 ,    struct Slice_11  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr319 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full298 (   struct env2* env ,    struct List_10 *  list2011 ) {
    if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2011 ) .f_elements = ( (  allocate299 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( env->starting_dash_size2006 ) ) );
    } else {
        if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , ( ( ( * (  list2011 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2012 = ( (  allocate299 ) ( ( ( * (  list2011 ) ) .f_al ) ,  (  op_dash_mul196 ( ( ( * (  list2011 ) ) .f_count ) , ( env->growth_dash_factor2007 ) ) ) ) );
            struct env304 envinst304 = {
                .new_dash_slice2012 =  new_dash_slice2012 ,
            };
            struct envunion305  fun2016 = ( (struct envunion305){ .fun = (  enum Unit_6  (*) (  struct env304*  ,    struct Tuple2_306  ) )lam307 , .env =  envinst304 } );
            ( (  for_dash_each310 ) ( ( (  zip317 ) ( ( ( * (  list2011 ) ) .f_elements ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2016 ) ) );
            ( (  free318 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( ( * (  list2011 ) ) .f_elements ) ) );
            (*  list2011 ) .f_elements = (  new_dash_slice2012 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add296 (   struct env12* env ,    struct List_10 *  list2019 ,    uint8_t  elem2021 ) {
    struct envunion13  temp297 = ( (struct envunion13){ .fun = (  enum Unit_6  (*) (  struct env2*  ,    struct List_10 *  ) )grow_dash_if_dash_full298 , .env =  env->envinst2 } );
    ( temp297.fun ( &temp297.env ,  (  list2019 ) ) );
    ( (  set308 ) ( ( ( * (  list2019 ) ) .f_elements ) ,  ( ( * (  list2019 ) ) .f_count ) ,  (  elem2021 ) ) );
    (*  list2019 ) .f_count = (  op_dash_add183 ( ( ( * (  list2019 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam294 (   struct env286* env ,    uint8_t  x2072 ) {
    struct envunion31  temp295 = ( (struct envunion31){ .fun = (  enum Unit_6  (*) (  struct env12*  ,    struct List_10 *  ,    uint8_t  ) )add296 , .env =  env->envinst12 } );
    return ( temp295.fun ( &temp295.env ,  ( env->list2068 ) ,  (  x2072 ) ) );
}

static  enum Unit_6   add_dash_all284 (   struct env30* env ,    struct List_10 *  list2068 ,    struct Slice_11  it2070 ) {
    struct env286 envinst286 = {
        .envinst12 = env->envinst12 ,
        .list2068 =  list2068 ,
    };
    ( (  for_dash_each285 ) ( (  it2070 ) ,  ( (struct envunion287){ .fun = (  enum Unit_6  (*) (  struct env286*  ,    uint8_t  ) )lam294 , .env =  envinst286 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10   from_dash_iter281 (   struct env35* env ,    struct Slice_11  iter2106 ,    enum CAllocator_8  al2108 ) {
    struct List_10  temp282 = ( (  mk234 ) ( (  al2108 ) ) );
    struct List_10 *  list2109 = ( &temp282 );
    struct envunion36  temp283 = ( (struct envunion36){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
    ( temp283.fun ( &temp283.env ,  (  list2109 ) ,  (  iter2106 ) ) );
    return ( * (  list2109 ) );
}

static  struct StrView_20   or_dash_else321 (    struct Maybe_101  self1708 ,    struct StrView_20  alt1710 ) {
    struct Maybe_101  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_101_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_101_Just_t ) {
            return ( dref1711 .stuff .Maybe_101_Just_s .field0 );
        }
    }
}

struct LineIter_323 {
    struct StrView_20  f_og;
    size_t  f_last;
};

static  uint8_t   undefined327 (  ) {
    uint8_t  temp328;
    return (  temp328 );
}

static  uint8_t   or_dash_fail326 (    struct Maybe_291  x1701 ,    struct StrConcat_204  errmsg1703 ) {
    struct Maybe_291  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_291_None_t ) {
        ( (  panic203 ) ( (  errmsg1703 ) ) );
        return ( (  undefined327 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_291_Just_t ) {
            return ( dref1704 .stuff .Maybe_291_Just_s .field0 );
        }
    }
}

static  struct Maybe_291   try_dash_get329 (    struct Slice_11  slice1739 ,    size_t  i1741 ) {
    if ( ( (  cmp132 ( (  i1741 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1741 ) , ( (  slice1739 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_291) { .tag = Maybe_291_None_t } );
    }
    uint8_t *  elem_dash_ptr1742 = ( (  offset_dash_ptr275 ) ( ( (  slice1739 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1741 ) ) ) ) );
    return ( ( Maybe_291_Just ) ( ( * (  elem_dash_ptr1742 ) ) ) );
}

static  uint8_t   get325 (    struct Slice_11  slice1745 ,    size_t  i1747 ) {
    return ( (  or_dash_fail326 ) ( ( (  try_dash_get329 ) ( (  slice1745 ) ,  (  i1747 ) ) ) ,  ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1747 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1745 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8330 (    struct Char_141  c721 ) {
    struct CharDestructured_156  dref722 = ( (  destructure157 ) ( (  c721 ) ) );
    if ( dref722.tag == CharDestructured_156_Ref_t ) {
        return ( * ( ( dref722 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref722.tag == CharDestructured_156_Scalar_t ) {
            return ( (  u32_dash_u8168 ) ( ( dref722 .stuff .CharDestructured_156_Scalar_s .field0 ) ) );
        }
    }
}

static  struct StrView_20   byte_dash_substr331 (    struct StrView_20  s2150 ,    size_t  from2152 ,    size_t  to2154 ) {
    return ( (struct StrView_20) { .f_contents = ( (  subslice274 ) ( ( (  s2150 ) .f_contents ) ,  (  from2152 ) ,  (  to2154 ) ) ) } );
}

static  struct Maybe_101   next324 (    struct LineIter_323 *  self2355 ) {
    if ( (  cmp132 ( ( ( * (  self2355 ) ) .f_last ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_101) { .tag = Maybe_101_None_t } );
    }
    size_t  i2356 = ( ( * (  self2355 ) ) .f_last );
    while ( ( (  cmp132 ( (  i2356 ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq158 ( ( (  get325 ) ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) ,  (  i2356 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2356 = (  op_dash_add183 ( (  i2356 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_20  line2357 = ( (  byte_dash_substr331 ) ( ( ( * (  self2355 ) ) .f_og ) ,  ( ( * (  self2355 ) ) .f_last ) ,  (  i2356 ) ) );
    if ( (  cmp132 ( (  i2356 ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2356 = (  op_dash_add183 ( (  i2356 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2355 ) .f_last = (  i2356 );
    return ( ( Maybe_101_Just ) ( (  line2357 ) ) );
}

static  struct LineIter_323   into_dash_iter333 (    struct LineIter_323  self2352 ) {
    return (  self2352 );
}

static  struct Maybe_101   head322 (    struct LineIter_323  it1123 ) {
    struct LineIter_323  temp332 = ( (  into_dash_iter333 ) ( (  it1123 ) ) );
    return ( (  next324 ) ( ( &temp332 ) ) );
}

static  struct LineIter_323   lines334 (    struct StrView_20  s2349 ) {
    return ( (struct LineIter_323) { .f_og = (  s2349 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env339 {
    struct Char_141  c2173;
    ;
};

struct envunion340 {
    bool  (*fun) (  struct env339*  ,    struct Char_141  );
    struct env339 env;
};

struct SplitIter_338 {
    struct StrView_20  f_og;
    size_t  f_last;
    struct envunion340  f_fun;
};

struct Drop_337 {
    struct SplitIter_338  field0;
    size_t  field1;
};

static struct Drop_337 Drop_337_Drop (  struct SplitIter_338  field0 ,  size_t  field1 ) {
    return ( struct Drop_337 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_336 {
    struct Drop_337  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_336   into_dash_iter341 (    struct Zip_336  self905 ) {
    return (  self905 );
}

static  struct Drop_337   into_dash_iter343 (    struct Drop_337  self839 ) {
    return (  self839 );
}

static  struct Zip_336   zip342 (    struct Drop_337  left916 ,    struct FromIter_217  right918 ) {
    struct Drop_337  left_dash_it919 = ( (  into_dash_iter343 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_336) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct SplitIter_338   into_dash_iter345 (    struct SplitIter_338  self2178 ) {
    return (  self2178 );
}

static  struct Drop_337   drop344 (    struct SplitIter_338  iterable846 ,    size_t  i848 ) {
    struct SplitIter_338  it849 = ( (  into_dash_iter345 ) ( (  iterable846 ) ) );
    return ( ( Drop_337_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SplitIter_338   split_dash_by_dash_filter347 (    struct StrView_20  s2166 ,   struct envunion340  fun2168 ) {
    return ( (struct SplitIter_338) { .f_og = (  s2166 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2168 ) } );
}

struct Tuple2_350 {
    struct CharDestructured_156  field0;
    struct CharDestructured_156  field1;
};

static struct Tuple2_350 Tuple2_350_Tuple2 (  struct CharDestructured_156  field0 ,  struct CharDestructured_156  field1 ) {
    return ( struct Tuple2_350 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq351 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq349 (    struct Char_141  l727 ,    struct Char_141  r729 ) {
    if ( ( !  eq190 ( ( (  l727 ) .f_num_dash_bytes ) , ( (  r729 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_350  dref730 = ( ( Tuple2_350_Tuple2 ) ( ( (  destructure157 ) ( (  l727 ) ) ) ,  ( (  destructure157 ) ( (  r729 ) ) ) ) );
    if ( dref730 .field0.tag == CharDestructured_156_Ref_t && dref730 .field1.tag == CharDestructured_156_Ref_t ) {
        size_t  i733 = (  from_dash_integral0 ( 0 ) );
        while ( (  cmp132 ( (  i733 ) , ( ( dref730 .field0 .stuff .CharDestructured_156_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq158 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref730 .field0 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i733 ) ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref730 .field1 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i733 ) ) ) ) ) ) ) ) {
                return ( false );
            }
            i733 = (  op_dash_add183 ( (  i733 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref730 .field0.tag == CharDestructured_156_Scalar_t && dref730 .field1.tag == CharDestructured_156_Scalar_t ) {
            return (  eq351 ( ( dref730 .field0 .stuff .CharDestructured_156_Scalar_s .field0 ) , ( dref730 .field1 .stuff .CharDestructured_156_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref730 .field0.tag == CharDestructured_156_Scalar_t && dref730 .field1.tag == CharDestructured_156_Ref_t ) {
                return (  eq158 ( ( (  u32_dash_u8168 ) ( ( dref730 .field0 .stuff .CharDestructured_156_Scalar_s .field0 ) ) ) , ( * ( ( dref730 .field1 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref730 .field0.tag == CharDestructured_156_Ref_t && dref730 .field1.tag == CharDestructured_156_Scalar_t ) {
                    return (  eq158 ( ( (  u32_dash_u8168 ) ( ( dref730 .field1 .stuff .CharDestructured_156_Scalar_s .field0 ) ) ) , ( * ( ( dref730 .field0 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam348 (   struct env339* env ,    struct Char_141  cc2175 ) {
    return (  eq349 ( (  cc2175 ) , ( env->c2173 ) ) );
}

static  struct SplitIter_338   split_dash_by_dash_each346 (    struct StrView_20  s2171 ,    struct Char_141  c2173 ) {
    struct env339 envinst339 = {
        .c2173 =  c2173 ,
    };
    return ( (  split_dash_by_dash_filter347 ) ( (  s2171 ) ,  ( (struct envunion340){ .fun = (  bool  (*) (  struct env339*  ,    struct Char_141  ) )lam348 , .env =  envinst339 } ) ) );
}

struct Tuple2_354 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct Tuple2_354 Tuple2_354_Tuple2 (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_354 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_353 {
    enum {
        Maybe_353_None_t,
        Maybe_353_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_354  field0;
        } Maybe_353_Just_s;
    } stuff;
};

static struct Maybe_353 Maybe_353_Just (  struct Tuple2_354  field0 ) {
    return ( struct Maybe_353 ) { .tag = Maybe_353_Just_t, .stuff = { .Maybe_353_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_101   next357 (    struct SplitIter_338 *  self2181 ) {
    if ( (  cmp132 ( ( ( * (  self2181 ) ) .f_last ) , ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_101) { .tag = Maybe_101_None_t } );
    }
    size_t  i2182 = ( ( * (  self2181 ) ) .f_last );
    while ( (  cmp132 ( (  i2182 ) , ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2183 = ( (  get_dash_ptr309 ) ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) ,  (  i2182 ) ) );
        struct Char_141  c2184 = ( (  scan_dash_from_dash_mem173 ) ( (  ptr2183 ) ) );
        struct envunion340  temp358 = ( ( * (  self2181 ) ) .f_fun );
        if ( ( temp358.fun ( &temp358.env ,  (  c2184 ) ) ) ) {
            break;
        }
        i2182 = (  op_dash_add183 ( (  i2182 ) , ( (  next_dash_char174 ) ( (  ptr2183 ) ) ) ) );
    }
    struct StrView_20  line2185 = ( (  byte_dash_substr331 ) ( ( ( * (  self2181 ) ) .f_og ) ,  ( ( * (  self2181 ) ) .f_last ) ,  (  i2182 ) ) );
    i2182 = (  op_dash_add183 ( (  i2182 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2181 ) .f_last = (  i2182 );
    return ( ( Maybe_101_Just ) ( (  line2185 ) ) );
}

static  struct Maybe_101   next356 (    struct Drop_337 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next357 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next357 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  struct Maybe_353   next355 (    struct Zip_336 *  self908 ) {
    struct Zip_336  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_101  dref910 = ( (  next356 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_101_None_t ) {
            return ( (struct Maybe_353) { .tag = Maybe_353_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_101_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_353) { .tag = Maybe_353_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next356 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_353_Just ) ( ( ( Tuple2_354_Tuple2 ) ( ( dref910 .stuff .Maybe_101_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion361 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

static  enum Unit_6   insert363 (   struct env23* env ,    struct List_7 *  list2024 ,    size_t  i2026 ,    struct List_10  elem2028 ) {
    if ( ( (  cmp132 ( (  i2026 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2026 ) , ( ( * (  list2024 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2026 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2024 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq190 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion24  temp364 = ( (struct envunion24){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add187 , .env =  env->envinst4 } );
        ( temp364.fun ( &temp364.env ,  (  list2024 ) ,  (  elem2028 ) ) );
        return ( Unit_6_Unit );
    }
    struct envunion25  temp365 = ( (struct envunion25){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full189 , .env =  env->envinst1 } );
    ( temp365.fun ( &temp365.env ,  (  list2024 ) ) );
    size_t  ii2029 = (  op_dash_sub254 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp132 ( (  ii2029 ) , (  i2026 ) ) != 0 ) ) {
        ( (  set201 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  (  op_dash_add183 ( (  ii2029 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get271 ) ( (  list2024 ) ,  (  ii2029 ) ) ) ) );
        if ( (  eq190 ( (  ii2029 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2029 = (  op_dash_sub254 ( (  ii2029 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set201 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  (  i2026 ) ,  (  elem2028 ) ) );
    (*  list2024 ) .f_count = (  op_dash_add183 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion367 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  enum Unit_6   free368 (    struct List_10 *  list2005 ) {
    ( (  free318 ) ( ( ( * (  list2005 ) ) .f_al ) ,  ( ( * (  list2005 ) ) .f_elements ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   add_dash_to_dash_spot270 (   struct env53* env ,    struct TextBuf_62 *  self3539 ,    struct Pos_19  p3541 ,    struct StrView_20  bytes3543 ) {
    enum CAllocator_8  al3544 = ( ( ( * (  self3539 ) ) .f_buf ) .f_al );
    struct List_7 *  buf3545 = ( & ( ( * (  self3539 ) ) .f_buf ) );
    struct List_10  extracted_dash_line_dash_buf3546 = ( (  get271 ) ( (  buf3545 ) ,  ( (  i32_dash_size213 ) ( ( (  p3541 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3547 = ( (  from273 ) ( ( (  to_dash_slice278 ) ( (  extracted_dash_line_dash_buf3546 ) ) ) ,  ( (  i32_dash_size213 ) ( ( (  p3541 ) .f_bi ) ) ) ) );
    struct envunion54  temp280 = ( (struct envunion54){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter281 , .env =  env->envinst35 } );
    ( (  set279 ) ( (  buf3545 ) ,  ( (  i32_dash_size213 ) ( ( (  p3541 ) .f_line ) ) ) ,  ( temp280.fun ( &temp280.env ,  ( (  subslice274 ) ( ( (  to_dash_slice278 ) ( (  extracted_dash_line_dash_buf3546 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size213 ) ( ( (  p3541 ) .f_bi ) ) ) ) ) ,  (  al3544 ) ) ) ) );
    struct List_10 *  last_dash_line3548 = ( (  get_dash_ptr272 ) ( (  buf3545 ) ,  ( (  i32_dash_size213 ) ( ( (  p3541 ) .f_line ) ) ) ) );
    struct envunion56  temp320 = ( (struct envunion56){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
    ( temp320.fun ( &temp320.env ,  (  last_dash_line3548 ) ,  ( ( (  or_dash_else321 ) ( ( (  head322 ) ( ( (  lines334 ) ( (  bytes3543 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3549 = (  from_dash_integral38 ( 0 ) );
    struct Zip_336  temp335 =  into_dash_iter341 ( ( (  zip342 ) ( ( (  drop344 ) ( ( (  split_dash_by_dash_each346 ) ( (  bytes3543 ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_353  __cond352 =  next355 (&temp335);
        if (  __cond352 .tag == 0 ) {
            break;
        }
        struct Tuple2_354  dref3550 =  __cond352 .stuff .Maybe_353_Just_s .field0;
        struct envunion361  temp360 = ( (struct envunion361){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter281 , .env =  env->envinst35 } );
        struct List_10  temp359 = ( temp360.fun ( &temp360.env ,  ( ( dref3550 .field0 ) .f_contents ) ,  (  al3544 ) ) );
        struct List_10 *  nuline3553 = ( &temp359 );
        size_t  next_dash_line3554 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( ( (  p3541 ) .f_line ) , ( dref3550 .field1 ) ) ) ) );
        struct envunion55  temp362 = ( (struct envunion55){ .fun = (  enum Unit_6  (*) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  ) )insert363 , .env =  env->envinst23 } );
        ( temp362.fun ( &temp362.env ,  (  buf3545 ) ,  (  next_dash_line3554 ) ,  ( * (  nuline3553 ) ) ) );
        last_dash_line3548 = ( (  get_dash_ptr272 ) ( (  buf3545 ) ,  (  next_dash_line3554 ) ) );
        lines_dash_added3549 = (  op_dash_add225 ( (  lines_dash_added3549 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    struct envunion367  temp366 = ( (struct envunion367){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
    ( temp366.fun ( &temp366.env ,  (  last_dash_line3548 ) ,  (  remaining3547 ) ) );
    ( (  free368 ) ( ( & (  extracted_dash_line_dash_buf3546 ) ) ) );
    return (  lines_dash_added3549 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp371 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_133   cmp370 (    struct Pos_19  l3482 ,    struct Pos_19  r3484 ) {
    enum Ordering_133  dref3485 = ( (  cmp371 ) ( ( (  l3482 ) .f_line ) ,  ( (  r3484 ) .f_line ) ) );
    switch (  dref3485 ) {
        case Ordering_133_EQ : {
            return ( (  cmp371 ) ( ( (  l3482 ) .f_bi ) ,  ( (  r3484 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_133  els3486 =  dref3485;
            return (  els3486 );
            break;
        }
    }
}

static  struct Pos_19   min369 (    struct Pos_19  l1217 ,    struct Pos_19  r1219 ) {
    if ( (  cmp370 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Pos_19   max372 (    struct Pos_19  l1296 ,    struct Pos_19  r1298 ) {
    if ( (  cmp370 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  size_t   size373 (    struct List_10 *  l2103 ) {
    return ( ( * (  l2103 ) ) .f_count );
}

struct StrConcat_379 {
    struct StrConcat_140  field0;
    struct Char_141  field1;
};

static struct StrConcat_379 StrConcat_379_StrConcat (  struct StrConcat_140  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_379 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_378 {
    struct StrConcat_379  field0;
    size_t  field1;
};

static struct StrConcat_378 StrConcat_378_StrConcat (  struct StrConcat_379  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_378 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_377 {
    struct StrConcat_378  field0;
    struct Char_141  field1;
};

static struct StrConcat_377 StrConcat_377_StrConcat (  struct StrConcat_378  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_377 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_382 {
    struct StrView_20  field0;
    struct StrConcat_377  field1;
};

static struct StrConcat_382 StrConcat_382_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_377  field1 ) {
    return ( struct StrConcat_382 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_381 {
    struct StrConcat_382  field0;
    struct Char_141  field1;
};

static struct StrConcat_381 StrConcat_381_StrConcat (  struct StrConcat_382  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_381 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str386 (    struct StrConcat_379  self1484 ) {
    struct StrConcat_379  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str151 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str385 (    struct StrConcat_378  self1484 ) {
    struct StrConcat_378  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str152 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str384 (    struct StrConcat_377  self1484 ) {
    struct StrConcat_377  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str385 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str383 (    struct StrConcat_382  self1484 ) {
    struct StrConcat_382  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str384 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str380 (    struct StrConcat_381  self1484 ) {
    struct StrConcat_381  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str383 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic376 (    struct StrConcat_377  errmsg1688 ) {
    ( (  print_dash_str380 ) ( ( ( StrConcat_381_StrConcat ) ( ( ( StrConcat_382_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct Drop_388 {
    struct Zip_311  field0;
    size_t  field1;
};

static struct Drop_388 Drop_388_Drop (  struct Zip_311  field0 ,  size_t  field1 ) {
    return ( struct Drop_388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env389 {
    struct List_10 *  list2032;
    ;
    ;
    size_t  num_dash_elems2037;
    ;
};

struct envunion390 {
    enum Unit_6  (*fun) (  struct env389*  ,    struct Tuple2_306  );
    struct env389 env;
};

static  struct Drop_388   into_dash_iter392 (    struct Drop_388  self839 ) {
    return (  self839 );
}

static  struct Maybe_314   next393 (    struct Drop_388 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next315 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next315 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each387 (    struct Drop_388  iterable1055 ,   struct envunion390  fun1057 ) {
    struct Drop_388  temp391 = ( (  into_dash_iter392 ) ( (  iterable1055 ) ) );
    struct Drop_388 *  it1058 = ( &temp391 );
    while ( ( true ) ) {
        struct Maybe_314  dref1059 = ( (  next393 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_314_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_314_Just_t ) {
                struct envunion390  temp394 = (  fun1057 );
                ( temp394.fun ( &temp394.env ,  ( dref1059 .stuff .Maybe_314_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_388   drop395 (    struct Zip_311  iterable846 ,    size_t  i848 ) {
    struct Zip_311  it849 = ( (  into_dash_iter313 ) ( (  iterable846 ) ) );
    return ( ( Drop_388_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SliceIter_288   into_dash_iter397 (    struct List_10  self1998 ) {
    return ( (  into_dash_iter290 ) ( ( (  subslice274 ) ( ( (  self1998 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self1998 ) .f_count ) ) ) ) );
}

static  struct Zip_311   zip396 (    struct List_10  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_288  left_dash_it919 = ( (  into_dash_iter397 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_311) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   set399 (    struct List_10 *  list1991 ,    size_t  i1993 ,    uint8_t  elem1995 ) {
    if ( ( (  cmp132 ( (  i1993 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1993 ) , ( ( * (  list1991 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1993 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1991 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set308 ) ( ( ( * (  list1991 ) ) .f_elements ) ,  (  i1993 ) ,  (  elem1995 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam398 (   struct env389* env ,    struct Tuple2_306  dref2038 ) {
    return ( (  set399 ) ( ( env->list2032 ) ,  (  op_dash_sub254 ( ( (  i32_dash_size213 ) ( ( dref2038 .field1 ) ) ) , ( env->num_dash_elems2037 ) ) ) ,  ( dref2038 .field0 ) ) );
}

struct StrConcat_402 {
    struct StrConcat_205  field0;
    struct StrView_20  field1;
};

static struct StrConcat_402 StrConcat_402_StrConcat (  struct StrConcat_205  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_402 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_405 {
    struct StrView_20  field0;
    struct StrConcat_402  field1;
};

static struct StrConcat_405 StrConcat_405_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_402  field1 ) {
    return ( struct StrConcat_405 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_404 {
    struct StrConcat_405  field0;
    struct Char_141  field1;
};

static struct StrConcat_404 StrConcat_404_StrConcat (  struct StrConcat_405  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_404 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str407 (    struct StrConcat_402  self1484 ) {
    struct StrConcat_402  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str211 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str146 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str406 (    struct StrConcat_405  self1484 ) {
    struct StrConcat_405  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str407 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str403 (    struct StrConcat_404  self1484 ) {
    struct StrConcat_404  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str406 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic401 (    struct StrConcat_402  errmsg1688 ) {
    ( (  print_dash_str403 ) ( ( ( StrConcat_404_StrConcat ) ( ( ( StrConcat_405_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct env409 {
    ;
    struct Slice_11  dest1829;
    ;
};

struct envunion410 {
    enum Unit_6  (*fun) (  struct env409*  ,    struct Tuple2_306  );
    struct env409 env;
};

static  enum Unit_6   for_dash_each408 (    struct Zip_311  iterable1055 ,   struct envunion410  fun1057 ) {
    struct Zip_311  temp411 = ( (  into_dash_iter313 ) ( (  iterable1055 ) ) );
    struct Zip_311 *  it1058 = ( &temp411 );
    while ( ( true ) ) {
        struct Maybe_314  dref1059 = ( (  next315 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_314_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_314_Just_t ) {
                struct envunion410  temp412 = (  fun1057 );
                ( temp412.fun ( &temp412.env ,  ( dref1059 .stuff .Maybe_314_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam413 (   struct env409* env ,    struct Tuple2_306  dref1830 ) {
    return ( (  set308 ) ( ( env->dest1829 ) ,  ( (  i32_dash_size213 ) ( ( dref1830 .field1 ) ) ) ,  ( dref1830 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to400 (    struct Slice_11  src1827 ,    struct Slice_11  dest1829 ) {
    if ( (  cmp132 ( ( (  src1827 ) .f_count ) , ( (  dest1829 ) .f_count ) ) == 2 ) ) {
        ( (  panic401 ) ( ( ( StrConcat_402_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1827 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1829 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env409 envinst409 = {
        .dest1829 =  dest1829 ,
    };
    ( (  for_dash_each408 ) ( ( (  zip317 ) ( (  src1827 ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion410){ .fun = (  enum Unit_6  (*) (  struct env409*  ,    struct Tuple2_306  ) )lam413 , .env =  envinst409 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range375 (   struct env26* env ,    struct List_10 *  list2032 ,    size_t  from2034 ,    size_t  to_dash_excl2036 ) {
    if ( (  cmp132 ( (  to_dash_excl2036 ) , (  from2034 ) ) == 0 ) ) {
        ( (  panic376 ) ( ( ( StrConcat_377_StrConcat ) ( ( ( StrConcat_378_StrConcat ) ( ( ( StrConcat_379_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  from2034 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  to_dash_excl2036 ) , ( ( * (  list2032 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2037 = (  op_dash_sub254 ( (  to_dash_excl2036 ) , (  from2034 ) ) );
    struct env389 envinst389 = {
        .list2032 =  list2032 ,
        .num_dash_elems2037 =  num_dash_elems2037 ,
    };
    ( (  for_dash_each387 ) ( ( (  drop395 ) ( ( (  zip396 ) ( ( * (  list2032 ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add183 ( (  from2034 ) , (  num_dash_elems2037 ) ) ) ) ) ,  ( (struct envunion390){ .fun = (  enum Unit_6  (*) (  struct env389*  ,    struct Tuple2_306  ) )lam398 , .env =  envinst389 } ) ) );
    (*  list2032 ) .f_count = (  op_dash_sub254 ( ( ( * (  list2032 ) ) .f_count ) , (  num_dash_elems2037 ) ) );
    size_t  capacity2041 = ( ( ( * (  list2032 ) ) .f_elements ) .f_count );
    if ( (  cmp132 ( (  op_dash_mul196 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  capacity2041 ) ) == 0 ) ) {
        if ( (  eq190 ( ( ( * (  list2032 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free318 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
            (*  list2032 ) .f_elements = ( (  empty235 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2042 = (  op_dash_mul196 ( (  op_dash_add183 ( (  op_dash_div161 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2008 ) ) );
        struct Slice_11  new_dash_slice2043 = ( (  allocate299 ) ( ( ( * (  list2032 ) ) .f_al ) ,  (  new_dash_size2042 ) ) );
        ( (  copy_dash_to400 ) ( ( (  subslice274 ) ( ( ( * (  list2032 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  (  new_dash_slice2043 ) ) );
        ( (  free318 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
        (*  list2032 ) .f_elements = (  new_dash_slice2043 );
    }
    return ( Unit_6_Unit );
}

struct envunion415 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
};

static  enum Unit_6   trim416 (    struct List_10 *  l2085 ,    size_t  new_dash_count2087 ) {
    (*  l2085 ) .f_count = ( (  min277 ) ( (  new_dash_count2087 ) ,  ( ( * (  l2085 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   min417 (    int32_t  l1217 ,    int32_t  r1219 ) {
    if ( (  cmp371 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

struct envunion419 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
};

struct Maybe_421 {
    enum {
        Maybe_421_None_t,
        Maybe_421_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_421_Just_s;
    } stuff;
};

static struct Maybe_421 Maybe_421_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_421 ) { .tag = Maybe_421_Just_t, .stuff = { .Maybe_421_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else420 (    struct Maybe_421  self1708 ,    struct Slice_11  alt1710 ) {
    struct Maybe_421  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_421_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_421_Just_t ) {
            return ( dref1711 .stuff .Maybe_421_Just_s .field0 );
        }
    }
}

static  struct Maybe_421   fmap_dash_maybe422 (    struct Maybe_130  x1256 ,    struct Slice_11 (*  fun1258 )(    struct List_10  ) ) {
    struct Maybe_130  dref1259 = (  x1256 );
    if ( dref1259.tag == Maybe_130_None_t ) {
        return ( (struct Maybe_421) { .tag = Maybe_421_None_t } );
    }
    else {
        if ( dref1259.tag == Maybe_130_Just_t ) {
            return ( ( Maybe_421_Just ) ( ( (  fun1258 ) ( ( dref1259 .stuff .Maybe_130_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_130   try_dash_get423 (    struct List_7 *  list1986 ,    size_t  i1988 ) {
    if ( (  cmp132 ( (  i1988 ) , ( ( * (  list1986 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_130) { .tag = Maybe_130_None_t } );
    }
    return ( ( Maybe_130_Just ) ( ( (  get271 ) ( (  list1986 ) ,  (  i1988 ) ) ) ) );
}

struct StrConcat_428 {
    struct StrView_20  field0;
    struct StrView_20  field1;
};

static struct StrConcat_428 StrConcat_428_StrConcat (  struct StrView_20  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_428 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_427 {
    struct StrConcat_428  field0;
    struct Char_141  field1;
};

static struct StrConcat_427 StrConcat_427_StrConcat (  struct StrConcat_428  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_427 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str429 (    struct StrConcat_428  self1484 ) {
    struct StrConcat_428  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str146 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str426 (    struct StrConcat_427  self1484 ) {
    struct StrConcat_427  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str429 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   assert425 (    bool  cond1694 ,    struct StrView_20  msg1696 ) {
    if ( ( ! (  cond1694 ) ) ) {
        ( (  print_dash_str426 ) ( ( ( StrConcat_427_StrConcat ) ( ( ( StrConcat_428_StrConcat ) ( ( (  from_dash_string170 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1696 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct Drop_433 {
    struct Zip_215  field0;
    size_t  field1;
};

static struct Drop_433 Drop_433_Drop (  struct Zip_215  field0 ,  size_t  field1 ) {
    return ( struct Drop_433 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env434 {
    struct List_7 *  list2032;
    ;
    ;
    size_t  num_dash_elems2037;
    ;
};

struct envunion435 {
    enum Unit_6  (*fun) (  struct env434*  ,    struct Tuple2_199  );
    struct env434 env;
};

static  struct Drop_433   into_dash_iter437 (    struct Drop_433  self839 ) {
    return (  self839 );
}

static  struct Maybe_220   next438 (    struct Drop_433 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next221 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next221 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each432 (    struct Drop_433  iterable1055 ,   struct envunion435  fun1057 ) {
    struct Drop_433  temp436 = ( (  into_dash_iter437 ) ( (  iterable1055 ) ) );
    struct Drop_433 *  it1058 = ( &temp436 );
    while ( ( true ) ) {
        struct Maybe_220  dref1059 = ( (  next438 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_220_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_220_Just_t ) {
                struct envunion435  temp439 = (  fun1057 );
                ( temp439.fun ( &temp439.env ,  ( dref1059 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_433   drop440 (    struct Zip_215  iterable846 ,    size_t  i848 ) {
    struct Zip_215  it849 = ( (  into_dash_iter219 ) ( (  iterable846 ) ) );
    return ( ( Drop_433_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct Slice_9   subslice443 (    struct Slice_9  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    struct List_10 *  begin_dash_ptr1763 = ( (  offset_dash_ptr180 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min277 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  struct SliceIter_216   into_dash_iter442 (    struct List_7  self1998 ) {
    return ( (  into_dash_iter228 ) ( ( (  subslice443 ) ( ( (  self1998 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self1998 ) .f_count ) ) ) ) );
}

static  struct Zip_215   zip441 (    struct List_7  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_216  left_dash_it919 = ( (  into_dash_iter442 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_215) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam444 (   struct env434* env ,    struct Tuple2_199  dref2038 ) {
    return ( (  set279 ) ( ( env->list2032 ) ,  (  op_dash_sub254 ( ( (  i32_dash_size213 ) ( ( dref2038 .field1 ) ) ) , ( env->num_dash_elems2037 ) ) ) ,  ( dref2038 .field0 ) ) );
}

struct env447 {
    ;
    struct Slice_9  dest1829;
    ;
};

struct envunion448 {
    enum Unit_6  (*fun) (  struct env447*  ,    struct Tuple2_199  );
    struct env447 env;
};

static  enum Unit_6   for_dash_each446 (    struct Zip_215  iterable1055 ,   struct envunion448  fun1057 ) {
    struct Zip_215  temp449 = ( (  into_dash_iter219 ) ( (  iterable1055 ) ) );
    struct Zip_215 *  it1058 = ( &temp449 );
    while ( ( true ) ) {
        struct Maybe_220  dref1059 = ( (  next221 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_220_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_220_Just_t ) {
                struct envunion448  temp450 = (  fun1057 );
                ( temp450.fun ( &temp450.env ,  ( dref1059 .stuff .Maybe_220_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam451 (   struct env447* env ,    struct Tuple2_199  dref1830 ) {
    return ( (  set201 ) ( ( env->dest1829 ) ,  ( (  i32_dash_size213 ) ( ( dref1830 .field1 ) ) ) ,  ( dref1830 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to445 (    struct Slice_9  src1827 ,    struct Slice_9  dest1829 ) {
    if ( (  cmp132 ( ( (  src1827 ) .f_count ) , ( (  dest1829 ) .f_count ) ) == 2 ) ) {
        ( (  panic401 ) ( ( ( StrConcat_402_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1827 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1829 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env447 envinst447 = {
        .dest1829 =  dest1829 ,
    };
    ( (  for_dash_each446 ) ( ( (  zip227 ) ( (  src1827 ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion448){ .fun = (  enum Unit_6  (*) (  struct env447*  ,    struct Tuple2_199  ) )lam451 , .env =  envinst447 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range431 (   struct env27* env ,    struct List_7 *  list2032 ,    size_t  from2034 ,    size_t  to_dash_excl2036 ) {
    if ( (  cmp132 ( (  to_dash_excl2036 ) , (  from2034 ) ) == 0 ) ) {
        ( (  panic376 ) ( ( ( StrConcat_377_StrConcat ) ( ( ( StrConcat_378_StrConcat ) ( ( ( StrConcat_379_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  from2034 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  to_dash_excl2036 ) , ( ( * (  list2032 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2037 = (  op_dash_sub254 ( (  to_dash_excl2036 ) , (  from2034 ) ) );
    struct env434 envinst434 = {
        .list2032 =  list2032 ,
        .num_dash_elems2037 =  num_dash_elems2037 ,
    };
    ( (  for_dash_each432 ) ( ( (  drop440 ) ( ( (  zip441 ) ( ( * (  list2032 ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add183 ( (  from2034 ) , (  num_dash_elems2037 ) ) ) ) ) ,  ( (struct envunion435){ .fun = (  enum Unit_6  (*) (  struct env434*  ,    struct Tuple2_199  ) )lam444 , .env =  envinst434 } ) ) );
    (*  list2032 ) .f_count = (  op_dash_sub254 ( ( ( * (  list2032 ) ) .f_count ) , (  num_dash_elems2037 ) ) );
    size_t  capacity2041 = ( ( ( * (  list2032 ) ) .f_elements ) .f_count );
    if ( (  cmp132 ( (  op_dash_mul196 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  capacity2041 ) ) == 0 ) ) {
        if ( (  eq190 ( ( ( * (  list2032 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free231 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
            (*  list2032 ) .f_elements = ( (  empty116 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2042 = (  op_dash_mul196 ( (  op_dash_add183 ( (  op_dash_div161 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2008 ) ) );
        struct Slice_9  new_dash_slice2043 = ( (  allocate191 ) ( ( ( * (  list2032 ) ) .f_al ) ,  (  new_dash_size2042 ) ) );
        ( (  copy_dash_to445 ) ( ( (  subslice443 ) ( ( ( * (  list2032 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  (  new_dash_slice2043 ) ) );
        ( (  free231 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
        (*  list2032 ) .f_elements = (  new_dash_slice2043 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   change_dash_no_dash_action264 (   struct env57* env ,    struct TextBuf_62 *  self3557 ,    struct Pos_19  from3559 ,    struct Pos_19  to3561 ,    struct StrView_20  bytes3563 ) {
    if ( (  eq265 ( (  to3561 ) , (  from3559 ) ) ) ) {
        enum CAllocator_8  al3564 = ( ( ( * (  self3557 ) ) .f_buf ) .f_al );
        if ( ( (  eq190 ( ( (  size267 ) ( ( & ( ( * (  self3557 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size213 ) ( ( (  from3559 ) .f_line ) ) ) ) ) && (  eq266 ( ( (  from3559 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) ) {
            struct envunion60  temp268 = ( (struct envunion60){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add187 , .env =  env->envinst4 } );
            ( temp268.fun ( &temp268.env ,  ( & ( ( * (  self3557 ) ) .f_buf ) ) ,  ( (  mk234 ) ( (  al3564 ) ) ) ) );
        }
        struct envunion61  temp269 = ( (struct envunion61){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot270 , .env =  env->envinst53 } );
        ( temp269.fun ( &temp269.env ,  (  self3557 ) ,  (  from3559 ) ,  (  bytes3563 ) ) );
    } else {
        struct Pos_19  from3565 = ( (  min369 ) ( (  from3559 ) ,  (  to3561 ) ) );
        struct Pos_19  to3566 = ( (  max372 ) ( (  from3565 ) ,  (  to3561 ) ) );
        struct List_7 *  lines_dash_buf3567 = ( & ( ( * (  self3557 ) ) .f_buf ) );
        struct List_10 *  first_dash_line3568 = ( (  get_dash_ptr272 ) ( (  lines_dash_buf3567 ) ,  ( (  i32_dash_size213 ) ( ( (  from3565 ) .f_line ) ) ) ) );
        if ( ( (  eq266 ( ( (  from3565 ) .f_line ) , ( (  to3566 ) .f_line ) ) ) && (  cmp371 ( ( (  to3566 ) .f_bi ) , (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size373 ) ( (  first_dash_line3568 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion58  temp374 = ( (struct envunion58){ .fun = (  enum Unit_6  (*) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  ) )remove_dash_range375 , .env =  env->envinst26 } );
            ( temp374.fun ( &temp374.env ,  (  first_dash_line3568 ) ,  ( (  i32_dash_size213 ) ( ( (  from3565 ) .f_bi ) ) ) ,  ( (  i32_dash_size213 ) ( ( (  to3566 ) .f_bi ) ) ) ) );
            struct envunion415  temp414 = ( (struct envunion415){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot270 , .env =  env->envinst53 } );
            ( temp414.fun ( &temp414.env ,  (  self3557 ) ,  (  from3565 ) ,  (  bytes3563 ) ) );
        } else {
            ( (  trim416 ) ( (  first_dash_line3568 ) ,  ( (  i32_dash_size213 ) ( ( (  from3565 ) .f_bi ) ) ) ) );
            struct List_10 *  last_dash_line3569 = ( (  get_dash_ptr272 ) ( (  lines_dash_buf3567 ) ,  ( (  i32_dash_size213 ) ( ( (  to3566 ) .f_line ) ) ) ) );
            to3566 .f_bi = ( (  min417 ) ( ( (  to3566 ) .f_bi ) ,  (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size373 ) ( (  last_dash_line3569 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            if ( (  eq266 ( ( (  to3566 ) .f_bi ) , (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size373 ) ( (  last_dash_line3569 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
                to3566 .f_line = (  op_dash_add225 ( ( (  to3566 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) );
                to3566 .f_bi = (  from_dash_integral38 ( 0 ) );
            }
            struct envunion419  temp418 = ( (struct envunion419){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot270 , .env =  env->envinst53 } );
            int32_t  lines_dash_added3570 = ( temp418.fun ( &temp418.env ,  (  self3557 ) ,  (  from3565 ) ,  (  bytes3563 ) ) );
            to3566 .f_line = (  op_dash_add225 ( ( (  to3566 ) .f_line ) , (  lines_dash_added3570 ) ) );
            from3565 .f_line = (  op_dash_add225 ( ( (  from3565 ) .f_line ) , (  lines_dash_added3570 ) ) );
            struct Slice_11  last_dash_line3571 = ( (  or_dash_else420 ) ( ( (  fmap_dash_maybe422 ) ( ( (  try_dash_get423 ) ( (  lines_dash_buf3567 ) ,  ( (  i32_dash_size213 ) ( ( (  to3566 ) .f_line ) ) ) ) ) ,  (  to_dash_slice278 ) ) ) ,  ( (  empty235 ) ( ) ) ) );
            struct envunion64  temp424 = ( (struct envunion64){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
            ( temp424.fun ( &temp424.env ,  (  first_dash_line3568 ) ,  ( (  from273 ) ( (  last_dash_line3571 ) ,  ( (  i32_dash_size213 ) ( ( (  to3566 ) .f_bi ) ) ) ) ) ) );
            ( (  assert425 ) ( (  cmp371 ( ( (  to3566 ) .f_line ) , ( (  from3565 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string170 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion59  temp430 = ( (struct envunion59){ .fun = (  enum Unit_6  (*) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  ) )remove_dash_range431 , .env =  env->envinst27 } );
            ( temp430.fun ( &temp430.env ,  ( & ( ( * (  self3557 ) ) .f_buf ) ) ,  ( (  i32_dash_size213 ) ( (  op_dash_add225 ( ( (  from3565 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  op_dash_add183 ( ( (  i32_dash_size213 ) ( ( (  to3566 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   mk452 (    int32_t  line3489 ,    int32_t  bi3491 ) {
    return ( (struct Pos_19) { .f_line = (  line3489 ) , .f_bi = (  bi3491 ) } );
}

struct StrConcat_456 {
    struct StrView_20  field0;
    const char*  field1;
};

static struct StrConcat_456 StrConcat_456_StrConcat (  struct StrView_20  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_456 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_455 {
    struct StrConcat_456  field0;
    struct Char_141  field1;
};

static struct StrConcat_455 StrConcat_455_StrConcat (  struct StrConcat_456  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_455 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_460 {
    struct StrView_20  field0;
    struct StrConcat_455  field1;
};

static struct StrConcat_460 StrConcat_460_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_455  field1 ) {
    return ( struct StrConcat_460 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_459 {
    struct StrConcat_460  field0;
    struct Char_141  field1;
};

static struct StrConcat_459 StrConcat_459_StrConcat (  struct StrConcat_460  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_459 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str464 (    const char*  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1379 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str463 (    struct StrConcat_456  self1484 ) {
    struct StrConcat_456  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str464 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str462 (    struct StrConcat_455  self1484 ) {
    struct StrConcat_455  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str463 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str461 (    struct StrConcat_460  self1484 ) {
    struct StrConcat_460  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str462 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str458 (    struct StrConcat_459  self1484 ) {
    struct StrConcat_459  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str461 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic457 (    struct StrConcat_455  errmsg1688 ) {
    ( (  print_dash_str458 ) ( ( ( StrConcat_459_StrConcat ) ( ( ( StrConcat_460_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   undefined465 (  ) {
    struct StrView_20  temp466;
    return (  temp466 );
}

static  struct StrView_20   or_dash_fail454 (    struct Maybe_101  x1701 ,    struct StrConcat_455  errmsg1703 ) {
    struct Maybe_101  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_101_None_t ) {
        ( (  panic457 ) ( (  errmsg1703 ) ) );
        return ( (  undefined465 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_101_Just_t ) {
            return ( dref1704 .stuff .Maybe_101_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike468 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr473 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of474 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed471 (  ) {
    FILE *  temp472;
    FILE *  x570 = (  temp472 );
    ( ( memset ) ( ( (  cast_dash_ptr473 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of474 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr470 (  ) {
    return ( (  zeroed471 ) ( ) );
}

static  bool   is_dash_ptr_dash_null469 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr470 ) ( ) ) );
}

static  int32_t   seek_dash_end475 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  int32_t   seek_dash_set476 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct Char_141   nullchar477 (  ) {
    return ( (  from_dash_charlike171 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_101   try_dash_read_dash_contents467 (    const char*  filename2864 ,    enum CAllocator_8  al2866 ) {
    FILE *  file2867 = ( ( fopen ) ( (  filename2864 ) ,  ( (  from_dash_charlike468 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null469 ) ( (  file2867 ) ) ) ) {
        return ( (struct Maybe_101) { .tag = Maybe_101_None_t } );
    }
    ( ( fseek ) ( (  file2867 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_end475 ) ( ) ) ) );
    int32_t  file_dash_size2868 = ( ( ftell ) ( (  file2867 ) ) );
    ( ( fseek ) ( (  file2867 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_set476 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2869 = ( ( (  allocate299 ) ( (  al2866 ) ,  (  op_dash_add183 ( ( (  i32_dash_size213 ) ( (  file_dash_size2868 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2869 ) .f_ptr ) ,  (  file_dash_size2868 ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  file2867 ) ) );
    ( (  set308 ) ( (  file_dash_buf2869 ) ,  ( (  i32_dash_size213 ) ( (  file_dash_size2868 ) ) ) ,  ( (  char_dash_u8330 ) ( ( (  nullchar477 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2867 ) ) );
    struct StrView_20  str2870 = ( (struct StrView_20) { .f_contents = ( (  subslice274 ) ( (  file_dash_buf2869 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub254 ( ( (  file_dash_buf2869 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_101_Just ) ( (  str2870 ) ) );
}

static  struct StrView_20   read_dash_contents453 (    const char*  filename2873 ,    enum CAllocator_8  al2875 ) {
    return ( (  or_dash_fail454 ) ( ( (  try_dash_read_dash_contents467 ) ( (  filename2873 ) ,  (  al2875 ) ) ) ,  ( ( StrConcat_455_StrConcat ) ( ( ( StrConcat_456_StrConcat ) ( ( (  from_dash_string170 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2873 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_94   mk479 (    enum CAllocator_8  al3672 ,    struct TextBuf_62 *  buf3674 ) {
    return ( (struct Pane_94) { .f_buf = (  buf3674 ) , .f_cursor = ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral38 ( 0 ) ) , .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) , .f_mode = ( Mode_95_Normal ) } );
}

struct envunion482 {
    struct Tui_45  (*fun) (  struct env41*  );
    struct env41 env;
};

static  struct Termios_47   undefined486 (  ) {
    struct Termios_47  temp487;
    return (  temp487 );
}

static  int32_t   stdin_dash_fileno488 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct termios *   cast_dash_ptr489 (    struct Termios_47 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and490 (    uint32_t  l2763 ,    uint32_t  r2765 ) {
    return ( (  l2763 ) & (  r2765 ) );
}

static  uint32_t   u32_dash_neg491 (    uint32_t  l2768 ) {
    return ( ~ (  l2768 ) );
}

struct Array_493 {
    uint32_t _arr [4];
};

struct ArrayIter_495 {
    struct Array_493  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_495   into_dash_iter496 (    struct Array_493  self2273 ) {
    return ( (struct ArrayIter_495) { .f_backing = (  self2273 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_497 {
    enum {
        Maybe_497_None_t,
        Maybe_497_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_497_Just_s;
    } stuff;
};

static struct Maybe_497 Maybe_497_Just (  uint32_t  field0 ) {
    return ( struct Maybe_497 ) { .tag = Maybe_497_Just_t, .stuff = { .Maybe_497_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr501 (    struct Array_493 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr502 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp503;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp503 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr500 (    struct Array_493 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2205 = ( ( (  cast_dash_ptr501 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr502 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  uint32_t   get499 (    struct Array_493 *  arr2208 ,    size_t  i2211 ) {
    return ( * ( (  get_dash_ptr500 ) ( (  arr2208 ) ,  (  i2211 ) ) ) );
}

static  struct Maybe_497   next498 (    struct ArrayIter_495 *  self2280 ) {
    if ( (  cmp132 ( ( ( * (  self2280 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_497) { .tag = Maybe_497_None_t } );
    }
    uint32_t  e2282 = ( (  get499 ) ( ( & ( ( * (  self2280 ) ) .f_backing ) ) ,  ( ( * (  self2280 ) ) .f_cur ) ) );
    (*  self2280 ) .f_cur = (  op_dash_add183 ( ( ( * (  self2280 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_497_Just ) ( (  e2282 ) ) );
}

static  uint32_t   reduce494 (    struct Array_493  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_495  it1080 = ( (  into_dash_iter496 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_497  dref1081 = ( (  next498 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_497_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_497_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_497_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp504 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp504);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp505;
    return (  temp505 );
}

static  uint32_t   u32_dash_or506 (    uint32_t  l2755 ,    uint32_t  r2757 ) {
    return ( (  l2755 ) | (  r2757 ) );
}

static  uint32_t   u32_dash_ors492 (    struct Array_493  vals2760 ) {
    return ( (  reduce494 ) ( (  vals2760 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or506 ) ) );
}

static  struct Array_493   from_dash_listlike507 (    struct Array_493  self330 ) {
    return (  self330 );
}

static  uint32_t   echo508 (  ) {
    return (  from_dash_integral166 ( 8 ) );
}

static  uint32_t   icanon509 (  ) {
    return (  from_dash_integral166 ( 2 ) );
}

static  uint32_t   isig510 (  ) {
    return (  from_dash_integral166 ( 1 ) );
}

static  uint32_t   iexten511 (  ) {
    return (  from_dash_integral166 ( 32768 ) );
}

struct Array_513 {
    uint32_t _arr [5];
};

struct ArrayIter_515 {
    struct Array_513  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_515   into_dash_iter516 (    struct Array_513  self2273 ) {
    return ( (struct ArrayIter_515) { .f_backing = (  self2273 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr520 (    struct Array_513 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr519 (    struct Array_513 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2205 = ( ( (  cast_dash_ptr520 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr502 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  uint32_t   get518 (    struct Array_513 *  arr2208 ,    size_t  i2211 ) {
    return ( * ( (  get_dash_ptr519 ) ( (  arr2208 ) ,  (  i2211 ) ) ) );
}

static  struct Maybe_497   next517 (    struct ArrayIter_515 *  self2280 ) {
    if ( (  cmp132 ( ( ( * (  self2280 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_497) { .tag = Maybe_497_None_t } );
    }
    uint32_t  e2282 = ( (  get518 ) ( ( & ( ( * (  self2280 ) ) .f_backing ) ) ,  ( ( * (  self2280 ) ) .f_cur ) ) );
    (*  self2280 ) .f_cur = (  op_dash_add183 ( ( ( * (  self2280 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_497_Just ) ( (  e2282 ) ) );
}

static  uint32_t   reduce514 (    struct Array_513  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_515  it1080 = ( (  into_dash_iter516 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_497  dref1081 = ( (  next517 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_497_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_497_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_497_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp521 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp521);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp522;
    return (  temp522 );
}

static  uint32_t   u32_dash_ors512 (    struct Array_513  vals2760 ) {
    return ( (  reduce514 ) ( (  vals2760 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or506 ) ) );
}

static  struct Array_513   from_dash_listlike523 (    struct Array_513  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint524 (  ) {
    return (  from_dash_integral166 ( 2 ) );
}

static  uint32_t   icrnl525 (  ) {
    return (  from_dash_integral166 ( 256 ) );
}

static  uint32_t   inpck526 (  ) {
    return (  from_dash_integral166 ( 16 ) );
}

static  uint32_t   istrip527 (  ) {
    return (  from_dash_integral166 ( 32 ) );
}

static  uint32_t   ixon528 (  ) {
    return (  from_dash_integral166 ( 1024 ) );
}

struct Array_530 {
    uint32_t _arr [1];
};

struct ArrayIter_532 {
    struct Array_530  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_532   into_dash_iter533 (    struct Array_530  self2273 ) {
    return ( (struct ArrayIter_532) { .f_backing = (  self2273 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr537 (    struct Array_530 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr536 (    struct Array_530 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2205 = ( ( (  cast_dash_ptr537 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr502 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  uint32_t   get535 (    struct Array_530 *  arr2208 ,    size_t  i2211 ) {
    return ( * ( (  get_dash_ptr536 ) ( (  arr2208 ) ,  (  i2211 ) ) ) );
}

static  struct Maybe_497   next534 (    struct ArrayIter_532 *  self2280 ) {
    if ( (  cmp132 ( ( ( * (  self2280 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_497) { .tag = Maybe_497_None_t } );
    }
    uint32_t  e2282 = ( (  get535 ) ( ( & ( ( * (  self2280 ) ) .f_backing ) ) ,  ( ( * (  self2280 ) ) .f_cur ) ) );
    (*  self2280 ) .f_cur = (  op_dash_add183 ( ( ( * (  self2280 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_497_Just ) ( (  e2282 ) ) );
}

static  uint32_t   reduce531 (    struct Array_530  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct ArrayIter_532  it1080 = ( (  into_dash_iter533 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_497  dref1081 = ( (  next534 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_497_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_497_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_497_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp538 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp538);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp539;
    return (  temp539 );
}

static  uint32_t   u32_dash_ors529 (    struct Array_530  vals2760 ) {
    return ( (  reduce531 ) ( (  vals2760 ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  u32_dash_or506 ) ) );
}

static  struct Array_530   from_dash_listlike540 (    struct Array_530  self330 ) {
    return (  self330 );
}

static  uint32_t   opost541 (  ) {
    return (  from_dash_integral166 ( 1 ) );
}

static  uint32_t   cs8542 (  ) {
    return (  from_dash_integral166 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr545 (    struct Array_48 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr544 (    struct Array_48 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2205 = ( ( (  cast_dash_ptr545 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr275 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  enum Unit_6   set543 (    struct Array_48 *  arr2214 ,    size_t  i2217 ,    uint8_t  e2219 ) {
    uint8_t *  p2220 = ( (  get_dash_ptr544 ) ( (  arr2214 ) ,  (  i2217 ) ) );
    (*  p2220 ) = (  e2219 );
    return ( Unit_6_Unit );
}

static  size_t   vmin546 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime547 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush548 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  struct Termios_47   enable_dash_raw_dash_mode484 (  ) {
    struct Termios_47  temp485 = ( (  undefined486 ) ( ) );
    struct Termios_47 *  orig_dash_termios3208 = ( &temp485 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  cast_dash_ptr489 ) ( (  orig_dash_termios3208 ) ) ) ) );
    struct Termios_47  raw3209 = ( * (  orig_dash_termios3208 ) );
    raw3209 .f_c_dash_lflag = ( (  u32_dash_and490 ) ( ( (  raw3209 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg491 ) ( ( (  u32_dash_ors492 ) ( ( (  from_dash_listlike507 ) ( ( (struct Array_493) { ._arr = { ( (  echo508 ) ( ) ) , ( (  icanon509 ) ( ) ) , ( (  isig510 ) ( ) ) , ( ( (  iexten511 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3209 .f_c_dash_iflag = ( (  u32_dash_and490 ) ( ( (  raw3209 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg491 ) ( ( (  u32_dash_ors512 ) ( ( (  from_dash_listlike523 ) ( ( (struct Array_513) { ._arr = { ( (  brkint524 ) ( ) ) , ( (  icrnl525 ) ( ) ) , ( (  inpck526 ) ( ) ) , ( (  istrip527 ) ( ) ) , ( ( (  ixon528 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3209 .f_c_dash_oflag = ( (  u32_dash_and490 ) ( ( (  raw3209 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg491 ) ( ( (  u32_dash_ors529 ) ( ( (  from_dash_listlike540 ) ( ( (struct Array_530) { ._arr = { ( ( (  opost541 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3209 .f_c_dash_cflag = ( (  u32_dash_or506 ) ( ( (  raw3209 ) .f_c_dash_cflag ) ,  ( (  cs8542 ) ( ) ) ) );
    ( (  set543 ) ( ( & ( (  raw3209 ) .f_c_dash_cc ) ) ,  ( (  vmin546 ) ( ) ) ,  (  from_dash_integral162 ( 0 ) ) ) );
    ( (  set543 ) ( ( & ( (  raw3209 ) .f_c_dash_cc ) ) ,  ( (  vtime547 ) ( ) ) ,  (  from_dash_integral162 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  tcsa_dash_flush548 ) ( ) ) ,  ( (  cast_dash_ptr489 ) ( ( & (  raw3209 ) ) ) ) ) );
    return ( * (  orig_dash_termios3208 ) );
}

struct StrViewIter_552 {
    struct StrView_20  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_552   into_dash_iter554 (    struct StrViewIter_552  self1352 ) {
    return (  self1352 );
}

struct Maybe_555 {
    enum {
        Maybe_555_None_t,
        Maybe_555_Just_t,
    } tag;
    union {
        struct {
            struct Char_141  field0;
        } Maybe_555_Just_s;
    } stuff;
};

static struct Maybe_555 Maybe_555_Just (  struct Char_141  field0 ) {
    return ( struct Maybe_555 ) { .tag = Maybe_555_Just_t, .stuff = { .Maybe_555_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_555   next556 (    struct StrViewIter_552 *  self1355 ) {
    if ( (  cmp132 ( ( ( * (  self1355 ) ) .f_i ) , ( ( ( ( * (  self1355 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint8_t *  char_dash_ptr1356 = ( ( (  offset_dash_ptr275 ) ( ( (  cast172 ) ( ( ( ( ( * (  self1355 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64212 ) ( ( ( * (  self1355 ) ) .f_i ) ) ) ) ) );
    struct Char_141  char1357 = ( (  scan_dash_from_dash_mem173 ) ( (  char_dash_ptr1356 ) ) );
    (*  self1355 ) .f_i = (  op_dash_add183 ( ( ( * (  self1355 ) ) .f_i ) , ( (  char1357 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_555_Just ) ( (  char1357 ) ) );
}

static  enum Unit_6   for_dash_each551 (    struct StrViewIter_552  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrViewIter_552  temp553 = ( (  into_dash_iter554 ) ( (  iterable1055 ) ) );
    struct StrViewIter_552 *  it1058 = ( &temp553 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next556 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_555_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_555_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_555_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrViewIter_552   into_dash_iter558 (    struct StrView_20  self1349 ) {
    return ( (struct StrViewIter_552) { .f_ds = (  self1349 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_552   chars557 (    struct StrView_20  self1363 ) {
    return ( (  into_dash_iter558 ) ( (  self1363 ) ) );
}

static  enum Unit_6   print550 (    struct StrView_20  s2508 ) {
    ( (  for_dash_each551 ) ( ( (  chars557 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   hide_dash_cursor549 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_colors559 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   clear_dash_screen560 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   enable_dash_mouse561 (  ) {
    ( (  print_dash_str146 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   flush_dash_stdout562 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr470 ) ( ) ) ) );
    return ( Unit_6_Unit );
}

static  bool   ptr_dash_eq566 (    enum Unit_6 *  l586 ,    enum Unit_6 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_6 *   cast567 (    const char*  x356 ) {
    return ( (enum Unit_6 * ) (  x356 ) );
}

static  void *   cast_dash_ptr571 (    enum Unit_6 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of572 (    enum Unit_6 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_6 *   zeroed569 (  ) {
    enum Unit_6 *  temp570;
    enum Unit_6 *  x570 = (  temp570 );
    ( ( memset ) ( ( (  cast_dash_ptr571 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of572 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_6 *   null_dash_ptr568 (  ) {
    return ( (  zeroed569 ) ( ) );
}

static  struct Maybe_258   from_dash_nullable_dash_c_dash_str565 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq566 ) ( ( (  cast567 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr568 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
    } else {
        return ( ( Maybe_258_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_258   get564 (    const char*  s2541 ) {
    return ( (  from_dash_nullable_dash_c_dash_str565 ) ( ( ( getenv ) ( (  s2541 ) ) ) ) );
}

static  bool   eq573 (    const char*  l1672 ,    const char*  r1674 ) {
    return (  eq266 ( ( ( strcmp ) ( (  l1672 ) ,  (  r1674 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) );
}

static  enum ColorPalette_46   query_dash_palette563 (  ) {
    struct Maybe_258  colorterm2542 = ( (  get564 ) ( ( (  from_dash_string39 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_258  dref2543 = (  colorterm2542 );
    if ( dref2543.tag == Maybe_258_Just_t ) {
        if ( ( (  eq573 ( ( dref2543 .stuff .Maybe_258_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq573 ( ( dref2543 .stuff .Maybe_258_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_46_PaletteRGB );
        }
    }
    else {
        if ( dref2543.tag == Maybe_258_None_t ) {
        }
    }
    struct Maybe_258  dref2545 = ( (  get564 ) ( ( (  from_dash_string39 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2545.tag == Maybe_258_Just_t ) {
        if ( (  eq573 ( ( dref2545 .stuff .Maybe_258_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_46_Palette8 );
        }
    }
    else {
        if ( dref2545.tag == Maybe_258_None_t ) {
        }
    }
    return ( ColorPalette_46_Palette16 );
}

struct Tuple2_574 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_574 Tuple2_574_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_574 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_576 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr580 (    struct Winsize_576 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of581 (    struct Winsize_576  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_576   zeroed578 (  ) {
    struct Winsize_576  temp579;
    struct Winsize_576  x570 = (  temp579 );
    ( ( memset ) ( ( (  cast_dash_ptr580 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of581 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno582 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  uint64_t   from_dash_integral584 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz583 (  ) {
    return (  from_dash_integral584 ( 21523 ) );
}

static  int32_t   op_dash_neg585 (    int32_t  x227 ) {
    return ( (  from_dash_integral38 ( 0 ) ) - (  x227 ) );
}

static  bool   eq586 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral587 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr593 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of594 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed591 (  ) {
    uint32_t  temp592;
    uint32_t  x570 = (  temp592 );
    ( ( memset ) ( ( (  cast_dash_ptr593 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of594 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast595 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed589 (    uint16_t  x573 ) {
    uint32_t  temp590 = ( (  zeroed591 ) ( ) );
    uint32_t *  y574 = ( &temp590 );
    uint16_t *  yp575 = ( (  cast595 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32588 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed589 ) ( (  x645 ) ) );
}

static  struct Tuple2_574   get_dash_dimensions575 (  ) {
    struct Winsize_576  temp577 = ( ( (  zeroed578 ) ( ) ) );
    struct Winsize_576 *  ws2530 = ( &temp577 );
    if ( ( (  eq266 ( ( ( ioctl ) ( ( (  stdout_dash_fileno582 ) ( ) ) ,  ( (  tiocgwinsz583 ) ( ) ) ,  (  ws2530 ) ) ) , (  op_dash_neg585 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) || (  eq586 ( ( ( * (  ws2530 ) ) .f_ws_dash_col ) , (  from_dash_integral587 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_574_Tuple2 ) ( (  from_dash_integral166 ( 80 ) ) ,  (  from_dash_integral166 ( 24 ) ) ) );
    }
    return ( ( Tuple2_574_Tuple2 ) ( ( (  u16_dash_u32588 ) ( ( ( * (  ws2530 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32588 ) ( ( ( * (  ws2530 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined598 (  ) {
    struct timespec  temp599;
    return (  temp599 );
}

static  int32_t   clock_dash_monotonic600 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  struct timespec   now596 (  ) {
    struct timespec  temp597 = ( (  undefined598 ) ( ) );
    struct timespec *  t3170 = ( &temp597 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic600 ) ( ) ) ,  (  t3170 ) ) );
    return ( * (  t3170 ) );
}

struct env601 {
    bool *  should_dash_resize3222;
};

struct envunion602 {
    enum Unit_6  (*fun) (  struct env601*  ,    int32_t  );
    struct env601 env;
};

struct envunion602  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig603 ) {
    struct envunion602  temp604 = _intr_sigarr [  __intr__sig603 ];
    temp604.fun ( &temp604.env ,  __intr__sig603 );
}

static  enum Unit_6  _intr_register_signal (    int32_t  __intr__sig605 ,   struct envunion602  __intr__fun606 ) {
    _intr_sigarr [  __intr__sig605 ] =  __intr__fun606;
    signal(  __intr__sig605 , _intr_sighandle );
    return Unit_6_Unit;
}

static  enum Unit_6   lam607 (   struct env601* env ,    int32_t  dref3229 ) {
    (* env->should_dash_resize3222 ) = ( true );
    return ( Unit_6_Unit );
}

static  uint32_t   fst608 (    struct Tuple2_574  dref1234 ) {
    return ( dref1234 .field0 );
}

static  uint32_t   snd609 (    struct Tuple2_574  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct Tui_45   mk483 (   struct env41* env ) {
    struct Termios_47  og_dash_termios3224 = ( (  enable_dash_raw_dash_mode484 ) ( ) );
    ( (  hide_dash_cursor549 ) ( ) );
    ( (  reset_dash_colors559 ) ( ) );
    ( (  clear_dash_screen560 ) ( ) );
    ( (  enable_dash_mouse561 ) ( ) );
    ( (  flush_dash_stdout562 ) ( ) );
    enum ColorPalette_46  palette3225 = ( (  query_dash_palette563 ) ( ) );
    struct Tuple2_574  dims3226 = ( (  get_dash_dimensions575 ) ( ) );
    uint32_t  fps3227 = (  from_dash_integral166 ( 60 ) );
    struct timespec  last_dash_sync3228 = ( (  now596 ) ( ) );
    struct env601 envinst601 = {
        .should_dash_resize3222 = env->should_dash_resize3222 ,
    };
    ( _intr_register_signal ( (  from_dash_integral38 ( 28 ) ) , ( (struct envunion602){ .fun = (  enum Unit_6  (*) (  struct env601*  ,    int32_t  ) )lam607 , .env =  envinst601 } ) ) );
    return ( (struct Tui_45) { .f_width = ( (  fst608 ) ( (  dims3226 ) ) ) , .f_height = ( (  snd609 ) ( (  dims3226 ) ) ) , .f_target_dash_fps = (  fps3227 ) , .f_actual_dash_fps = (  from_dash_integral166 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3228 ) , .f_fps_dash_ts = (  last_dash_sync3228 ) , .f_fps_dash_count = (  from_dash_integral166 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3224 ) , .f_palette = (  palette3225 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_614 {
    Color8_614_Black8,
    Color8_614_Red8,
    Color8_614_Green8,
    Color8_614_Yellow8,
    Color8_614_Blue8,
    Color8_614_Magenta8,
    Color8_614_Cyan8,
    Color8_614_White8,
};

enum Color16_615 {
    Color16_615_Black16,
    Color16_615_Red16,
    Color16_615_Green16,
    Color16_615_Yellow16,
    Color16_615_Blue16,
    Color16_615_Magenta16,
    Color16_615_Cyan16,
    Color16_615_White16,
    Color16_615_BrightBlack16,
    Color16_615_BrightRed16,
    Color16_615_BrightGreen16,
    Color16_615_BrightYellow16,
    Color16_615_BrightBlue16,
    Color16_615_BrightMagenta16,
    Color16_615_BrightCyan16,
    Color16_615_BrightWhite16,
};

struct RGB_616 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_613 {
    enum {
        Color_613_ColorDefault_t,
        Color_613_Color8_t,
        Color_613_Color16_t,
        Color_613_Color256_t,
        Color_613_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_614  field0;
        } Color_613_Color8_s;
        struct {
            enum Color16_615  field0;
        } Color_613_Color16_s;
        struct {
            uint8_t  field0;
        } Color_613_Color256_s;
        struct {
            struct RGB_616  field0;
        } Color_613_ColorRGB_s;
    } stuff;
};

static struct Color_613 Color_613_Color8 (  enum Color8_614  field0 ) {
    return ( struct Color_613 ) { .tag = Color_613_Color8_t, .stuff = { .Color_613_Color8_s = { .field0 = field0 } } };
};

static struct Color_613 Color_613_Color16 (  enum Color16_615  field0 ) {
    return ( struct Color_613 ) { .tag = Color_613_Color16_t, .stuff = { .Color_613_Color16_s = { .field0 = field0 } } };
};

static struct Color_613 Color_613_Color256 (  uint8_t  field0 ) {
    return ( struct Color_613 ) { .tag = Color_613_Color256_t, .stuff = { .Color_613_Color256_s = { .field0 = field0 } } };
};

static struct Color_613 Color_613_ColorRGB (  struct RGB_616  field0 ) {
    return ( struct Color_613 ) { .tag = Color_613_ColorRGB_t, .stuff = { .Color_613_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_612 {
    struct Char_141  f_c;
    struct Color_613  f_fg;
    struct Color_613  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_611 {
    struct Cell_612 *  f_ptr;
    size_t  f_count;
};

struct Screen_610 {
    enum CAllocator_8  f_al;
    struct Tui_45 *  f_tui;
    struct Slice_611  f_current;
    struct Slice_611  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_613  f_default_dash_fg;
    struct Color_613  f_default_dash_bg;
};

struct TypeSize_621 {
    size_t  f_size;
};

static  struct TypeSize_621   get_dash_typesize620 (  ) {
    struct Cell_612  temp622;
    return ( (struct TypeSize_621) { .f_size = ( sizeof( ( (  temp622 ) ) ) ) } );
}

static  struct Cell_612 *   cast_dash_ptr623 (    void *  p359 ) {
    return ( (struct Cell_612 * ) (  p359 ) );
}

static  struct Slice_611   allocate619 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize620 ) ( ) ) ) .f_size );
    struct Cell_612 *  ptr1927 = ( (  cast_dash_ptr623 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_611) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

static  void *   cast_dash_ptr629 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of630 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed627 (  ) {
    size_t  temp628;
    size_t  x570 = (  temp628 );
    ( ( memset ) ( ( (  cast_dash_ptr629 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of630 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast631 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed625 (    uint32_t  x573 ) {
    size_t  temp626 = ( (  zeroed627 ) ( ) );
    size_t *  y574 = ( &temp626 );
    uint32_t *  yp575 = ( (  cast631 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size624 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed625 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul632 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_635 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_635 Range_635_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_635 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env636 {
    struct Slice_611  s1881;
    struct Cell_612 (*  fun1883 )(    struct Cell_612  );
    ;
    ;
    ;
};

struct envunion637 {
    enum Unit_6  (*fun) (  struct env636*  ,    int32_t  );
    struct env636 env;
};

struct RangeIter_638 {
    struct Range_635  field0;
    int32_t  field1;
};

static struct RangeIter_638 RangeIter_638_RangeIter (  struct Range_635  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_638 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_638   into_dash_iter640 (    struct Range_635  dref877 ) {
    return ( ( RangeIter_638_RangeIter ) ( ( ( Range_635_Range ) ( ( dref877 .field0 ) ,  ( dref877 .field1 ) ) ) ,  ( dref877 .field0 ) ) );
}

static  struct Maybe_223   next641 (    struct RangeIter_638 *  self885 ) {
    struct RangeIter_638  dref886 = ( * (  self885 ) );
    if ( true ) {
        if ( (  cmp371 ( ( dref886 .field1 ) , ( dref886 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_223) { .tag = Maybe_223_None_t } );
        }
        struct Maybe_223  x890 = ( ( Maybe_223_Just ) ( ( dref886 .field1 ) ) );
        (*  self885 ) = ( ( RangeIter_638_RangeIter ) ( ( ( Range_635_Range ) ( ( dref886 .field0 .field0 ) ,  ( dref886 .field0 .field1 ) ) ) ,  (  op_dash_add225 ( ( dref886 .field1 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
        return (  x890 );
    }
}

static  enum Unit_6   for_dash_each634 (    struct Range_635  iterable1055 ,   struct envunion637  fun1057 ) {
    struct RangeIter_638  temp639 = ( (  into_dash_iter640 ) ( (  iterable1055 ) ) );
    struct RangeIter_638 *  it1058 = ( &temp639 );
    while ( ( true ) ) {
        struct Maybe_223  dref1059 = ( (  next641 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_223_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_223_Just_t ) {
                struct envunion637  temp642 = (  fun1057 );
                ( temp642.fun ( &temp642.env ,  ( dref1059 .stuff .Maybe_223_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Range_635   to643 (    int32_t  from868 ,    int32_t  to870 ) {
    return ( ( Range_635_Range ) ( (  from868 ) ,  (  to870 ) ) );
}

static  struct Cell_612 *   offset_dash_ptr647 (    struct Cell_612 *  x338 ,    int64_t  count340 ) {
    struct Cell_612  temp648;
    return ( (struct Cell_612 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp648 ) ) ) ) ) ) ) ) );
}

static  struct Cell_612 *   get_dash_ptr646 (    struct Slice_611  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_612 *  elem_dash_ptr1736 = ( (  offset_dash_ptr647 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  enum Unit_6   set645 (    struct Slice_611  slice1750 ,    size_t  i1752 ,    struct Cell_612  x1754 ) {
    struct Cell_612 *  ep1755 = ( (  get_dash_ptr646 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

struct Maybe_652 {
    enum {
        Maybe_652_None_t,
        Maybe_652_Just_t,
    } tag;
    union {
        struct {
            struct Cell_612  field0;
        } Maybe_652_Just_s;
    } stuff;
};

static struct Maybe_652 Maybe_652_Just (  struct Cell_612  field0 ) {
    return ( struct Maybe_652 ) { .tag = Maybe_652_Just_t, .stuff = { .Maybe_652_Just_s = { .field0 = field0 } } };
};

static  struct Cell_612   undefined653 (  ) {
    struct Cell_612  temp654;
    return (  temp654 );
}

static  struct Cell_612   or_dash_fail651 (    struct Maybe_652  x1701 ,    struct StrConcat_204  errmsg1703 ) {
    struct Maybe_652  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_652_None_t ) {
        ( (  panic203 ) ( (  errmsg1703 ) ) );
        return ( (  undefined653 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_652_Just_t ) {
            return ( dref1704 .stuff .Maybe_652_Just_s .field0 );
        }
    }
}

static  struct Maybe_652   try_dash_get655 (    struct Slice_611  slice1739 ,    size_t  i1741 ) {
    if ( ( (  cmp132 ( (  i1741 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1741 ) , ( (  slice1739 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_652) { .tag = Maybe_652_None_t } );
    }
    struct Cell_612 *  elem_dash_ptr1742 = ( (  offset_dash_ptr647 ) ( ( (  slice1739 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1741 ) ) ) ) );
    return ( ( Maybe_652_Just ) ( ( * (  elem_dash_ptr1742 ) ) ) );
}

static  struct Cell_612   get650 (    struct Slice_611  slice1745 ,    size_t  i1747 ) {
    return ( (  or_dash_fail651 ) ( ( (  try_dash_get655 ) ( (  slice1745 ) ,  (  i1747 ) ) ) ,  ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1747 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1745 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_612   elem_dash_get649 (    struct Slice_611  self1843 ,    size_t  idx1845 ) {
    return ( (  get650 ) ( (  self1843 ) ,  (  idx1845 ) ) );
}

static  enum Unit_6   lam644 (   struct env636* env ,    int32_t  i1885 ) {
    return ( (  set645 ) ( ( env->s1881 ) ,  ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ,  ( ( env->fun1883 ) ( (  elem_dash_get649 ( ( env->s1881 ) , ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map633 (    struct Slice_611  s1881 ,    struct Cell_612 (*  fun1883 )(    struct Cell_612  ) ) {
    struct env636 envinst636 = {
        .s1881 =  s1881 ,
        .fun1883 =  fun1883 ,
    };
    ( (  for_dash_each634 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( ( (  s1881 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion637){ .fun = (  enum Unit_6  (*) (  struct env636*  ,    int32_t  ) )lam644 , .env =  envinst636 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_612   default_dash_cell657 (  ) {
    return ( (struct Cell_612) { .f_c = ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } );
}

static  struct Cell_612   lam656 (    struct Cell_612  dref3332 ) {
    return ( (  default_dash_cell657 ) ( ) );
}

struct env660 {
    struct Slice_611  s1881;
    struct Cell_612 (*  fun1883 )(    struct Cell_612  );
    ;
    ;
    ;
};

struct envunion661 {
    enum Unit_6  (*fun) (  struct env660*  ,    int32_t  );
    struct env660 env;
};

static  enum Unit_6   for_dash_each659 (    struct Range_635  iterable1055 ,   struct envunion661  fun1057 ) {
    struct RangeIter_638  temp662 = ( (  into_dash_iter640 ) ( (  iterable1055 ) ) );
    struct RangeIter_638 *  it1058 = ( &temp662 );
    while ( ( true ) ) {
        struct Maybe_223  dref1059 = ( (  next641 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_223_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_223_Just_t ) {
                struct envunion661  temp663 = (  fun1057 );
                ( temp663.fun ( &temp663.env ,  ( dref1059 .stuff .Maybe_223_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam664 (   struct env660* env ,    int32_t  i1885 ) {
    return ( (  set645 ) ( ( env->s1881 ) ,  ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ,  ( ( env->fun1883 ) ( (  elem_dash_get649 ( ( env->s1881 ) , ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map658 (    struct Slice_611  s1881 ,    struct Cell_612 (*  fun1883 )(    struct Cell_612  ) ) {
    struct env660 envinst660 = {
        .s1881 =  s1881 ,
        .fun1883 =  fun1883 ,
    };
    ( (  for_dash_each659 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( ( (  s1881 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion661){ .fun = (  enum Unit_6  (*) (  struct env660*  ,    int32_t  ) )lam664 , .env =  envinst660 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_612   lam665 (    struct Cell_612  dref3334 ) {
    return ( (  default_dash_cell657 ) ( ) );
}

static  struct Screen_610   mk_dash_screen618 (    struct Tui_45 *  tui3328 ,    enum CAllocator_8  al3330 ) {
    struct Slice_611  cur3331 = ( (  allocate619 ) ( (  al3330 ) ,  ( (  u32_dash_size624 ) ( (  op_dash_mul632 ( ( ( * (  tui3328 ) ) .f_width ) , ( ( * (  tui3328 ) ) .f_height ) ) ) ) ) ) );
    ( (  map633 ) ( (  cur3331 ) ,  (  lam656 ) ) );
    struct Slice_611  prev3333 = ( (  allocate619 ) ( (  al3330 ) ,  ( (  u32_dash_size624 ) ( (  op_dash_mul632 ( ( ( * (  tui3328 ) ) .f_width ) , ( ( * (  tui3328 ) ) .f_height ) ) ) ) ) ) );
    ( (  map658 ) ( (  prev3333 ) ,  (  lam665 ) ) );
    return ( (struct Screen_610) { .f_current = (  cur3331 ) , .f_previous = (  prev3333 ) , .f_al = (  al3330 ) , .f_tui = (  tui3328 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) } );
}

enum MouseButton_673 {
    MouseButton_673_MouseLeft,
    MouseButton_673_MouseMiddle,
    MouseButton_673_MouseRight,
    MouseButton_673_ScrollUp,
    MouseButton_673_ScrollDown,
};

struct MouseEvent_672 {
    enum MouseButton_673  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_671 {
    enum {
        InputEvent_671_Key_t,
        InputEvent_671_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_106  field0;
        } InputEvent_671_Key_s;
        struct {
            struct MouseEvent_672  field0;
        } InputEvent_671_Mouse_s;
    } stuff;
};

static struct InputEvent_671 InputEvent_671_Key (  struct Key_106  field0 ) {
    return ( struct InputEvent_671 ) { .tag = InputEvent_671_Key_t, .stuff = { .InputEvent_671_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_671 InputEvent_671_Mouse (  struct MouseEvent_672  field0 ) {
    return ( struct InputEvent_671 ) { .tag = InputEvent_671_Mouse_t, .stuff = { .InputEvent_671_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_670 {
    enum {
        Maybe_670_None_t,
        Maybe_670_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_671  field0;
        } Maybe_670_Just_s;
    } stuff;
};

static struct Maybe_670 Maybe_670_Just (  struct InputEvent_671  field0 ) {
    return ( struct Maybe_670 ) { .tag = Maybe_670_Just_t, .stuff = { .Maybe_670_Just_s = { .field0 = field0 } } };
};

struct envunion669 {
    struct Maybe_670  (*fun) (  struct env43*  ,    struct Tui_45 *  );
    struct env43 env;
};

struct env668 {
    struct env43 envinst43;
    struct Tui_45 *  tui3903;
};

struct envunion674 {
    struct Maybe_670  (*fun) (  struct env668*  );
    struct env668 env;
};

struct FunIter_667 {
    struct envunion674  f_fun;
    bool  f_finished;
};

static  struct FunIter_667   into_dash_iter675 (    struct FunIter_667  self1022 ) {
    return (  self1022 );
}

static  struct FunIter_667   from_dash_function676 (   struct envunion674  fun1030 ) {
    return ( (struct FunIter_667) { .f_fun = (  fun1030 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions681 (   struct env42* env ,    struct Tui_45 *  tui3294 ) {
    if ( ( ! ( * ( env->should_dash_resize3222 ) ) ) ) {
        return ( false );
    }
    (*  tui3294 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3222 ) = ( false );
    struct Tuple2_574  dim3295 = ( (  get_dash_dimensions575 ) ( ) );
    uint32_t  w3296 = ( (  fst608 ) ( (  dim3295 ) ) );
    uint32_t  h3297 = ( (  snd609 ) ( (  dim3295 ) ) );
    (*  tui3294 ) .f_width = (  w3296 );
    (*  tui3294 ) .f_height = (  h3297 );
    return ( true );
}

static  char   undefined684 (  ) {
    char  temp685;
    return (  temp685 );
}

struct Maybe_686 {
    enum {
        Maybe_686_None_t,
        Maybe_686_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_686_Just_s;
    } stuff;
};

static struct Maybe_686 Maybe_686_Just (  char  field0 ) {
    return ( struct Maybe_686 ) { .tag = Maybe_686_Just_t, .stuff = { .Maybe_686_Just_s = { .field0 = field0 } } };
};

struct Pollfd_688 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr689 (    struct Pollfd_688 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr692 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of693 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed690 (  ) {
    char  temp691;
    char  x570 = (  temp691 );
    ( ( memset ) ( ( (  cast_dash_ptr692 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of693 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_686   read_dash_byte687 (    int32_t  timeout_dash_ms3216 ) {
    struct Pollfd_688  pfd3217 = ( (struct Pollfd_688) { .f_fd = (  from_dash_integral38 ( 0 ) ) , .f_events = (  from_dash_integral587 ( 1 ) ) , .f_revents = (  from_dash_integral587 ( 0 ) ) } );
    if ( (  cmp371 ( ( ( poll ) ( ( (  cast_dash_ptr689 ) ( ( & (  pfd3217 ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  timeout_dash_ms3216 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    char  c3218 = ( ( (  zeroed690 ) ( ) ) );
    if ( (  cmp371 ( ( ( read ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  cast_dash_ptr692 ) ( ( & (  c3218 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    return ( ( Maybe_686_Just ) ( (  c3218 ) ) );
}

static  uint8_t   ascii_dash_u8694 (    char  c770 ) {
    return ( ( (uint8_t ) (  c770 ) ) );
}

static  char   u8_dash_ascii695 (    uint8_t  b773 ) {
    return ( ( (char ) (  b773 ) ) );
}

static  uint8_t *   cast699 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed697 (    uint8_t  x573 ) {
    uint32_t  temp698 = ( (  zeroed591 ) ( ) );
    uint32_t *  y574 = ( &temp698 );
    uint8_t *  yp575 = ( (  cast699 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32696 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed697 ) ( (  x672 ) ) );
}

struct Map_702 {
    struct StrViewIter_552  field0;
    uint32_t (*  field1 )(    struct Char_141  );
};

static struct Map_702 Map_702_Map (  struct StrViewIter_552  field0 ,  uint32_t (*  field1 )(    struct Char_141  ) ) {
    return ( struct Map_702 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_702   into_dash_iter703 (    struct Map_702  self790 ) {
    return (  self790 );
}

static  struct Maybe_497   next704 (    struct Map_702 *  dref792 ) {
    struct Maybe_555  dref795 = ( (  next556 ) ( ( & ( (* dref792 ) .field0 ) ) ) );
    if ( dref795.tag == Maybe_555_None_t ) {
        return ( (struct Maybe_497) { .tag = Maybe_497_None_t } );
    }
    else {
        if ( dref795.tag == Maybe_555_Just_t ) {
            return ( ( Maybe_497_Just ) ( ( ( (* dref792 ) .field1 ) ( ( dref795 .stuff .Maybe_555_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce701 (    struct Map_702  iterable1074 ,    uint32_t  base1076 ,    uint32_t (*  fun1078 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1079 = (  base1076 );
    struct Map_702  it1080 = ( (  into_dash_iter703 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_497  dref1081 = ( (  next704 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_497_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_497_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_497_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp705 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp705);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp706;
    return (  temp706 );
}

static  struct Map_702   map707 (    struct StrView_20  iterable799 ,    uint32_t (*  fun801 )(    struct Char_141  ) ) {
    struct StrViewIter_552  it802 = ( (  into_dash_iter558 ) ( (  iterable799 ) ) );
    return ( ( Map_702_Map ) ( (  it802 ) ,  (  fun801 ) ) );
}

static  void *   cast_dash_ptr714 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of715 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed712 (  ) {
    int64_t  temp713;
    int64_t  x570 = (  temp713 );
    ( ( memset ) ( ( (  cast_dash_ptr714 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of715 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast716 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed710 (    uint8_t  x573 ) {
    int64_t  temp711 = ( (  zeroed712 ) ( ) );
    int64_t *  y574 = ( &temp711 );
    uint8_t *  yp575 = ( (  cast716 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64709 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed710 ) ( (  x666 ) ) );
}

struct StrConcat_719 {
    struct Char_141  field0;
    struct Char_141  field1;
};

static struct StrConcat_719 StrConcat_719_StrConcat (  struct Char_141  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_719 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_718 {
    struct StrConcat_719  field0;
    struct StrView_20  field1;
};

static struct StrConcat_718 StrConcat_718_StrConcat (  struct StrConcat_719  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_718 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_723 {
    struct StrView_20  field0;
    struct StrConcat_718  field1;
};

static struct StrConcat_723 StrConcat_723_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_718  field1 ) {
    return ( struct StrConcat_723 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_722 {
    struct StrConcat_723  field0;
    struct Char_141  field1;
};

static struct StrConcat_722 StrConcat_722_StrConcat (  struct StrConcat_723  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_722 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str726 (    struct StrConcat_719  self1484 ) {
    struct StrConcat_719  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str154 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str725 (    struct StrConcat_718  self1484 ) {
    struct StrConcat_718  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str726 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str146 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str724 (    struct StrConcat_723  self1484 ) {
    struct StrConcat_723  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str725 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str721 (    struct StrConcat_722  self1484 ) {
    struct StrConcat_722  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str724 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic720 (    struct StrConcat_718  errmsg1688 ) {
    ( (  print_dash_str721 ) ( ( ( StrConcat_722_StrConcat ) ( ( ( StrConcat_723_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t   or_dash_fail717 (    struct Maybe_291  x1701 ,    struct StrConcat_718  errmsg1703 ) {
    struct Maybe_291  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_291_None_t ) {
        ( (  panic720 ) ( (  errmsg1703 ) ) );
        return ( (  undefined327 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_291_Just_t ) {
            return ( dref1704 .stuff .Maybe_291_Just_s .field0 );
        }
    }
}

static  enum Ordering_133   cmp728 (    struct Char_141  l742 ,    struct Char_141  r744 ) {
    if ( ( ( !  eq190 ( ( (  l742 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq190 ( ( (  r744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp729 = ( (  from_dash_string39 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp729);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (  cmp175 ) ( ( (  char_dash_u8330 ) ( (  l742 ) ) ) ,  ( (  char_dash_u8330 ) ( (  r744 ) ) ) ) );
}

static  uint8_t   op_dash_sub730 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_291   hex_dash_digit727 (    struct Char_141  c2490 ) {
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_291_Just ) ( (  op_dash_sub730 ( ( (  char_dash_u8330 ) ( (  c2490 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_291_Just ) ( (  op_dash_add176 ( (  op_dash_sub730 ( ( (  char_dash_u8330 ) ( (  c2490 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_291_Just ) ( (  op_dash_add176 ( (  op_dash_sub730 ( ( (  char_dash_u8330 ) ( (  c2490 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_291) { .tag = Maybe_291_None_t } );
}

static  uint32_t   lam708 (    struct Char_141  c2495 ) {
    return ( (  from_dash_integral166 ) ( ( (  u8_dash_i64709 ) ( ( (  or_dash_fail717 ) ( ( (  hex_dash_digit727 ) ( (  c2495 ) ) ) ,  ( ( StrConcat_718_StrConcat ) ( ( ( StrConcat_719_StrConcat ) ( ( (  from_dash_charlike171 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2495 ) ) ) ,  ( (  from_dash_string170 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add732 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam731 (    uint32_t  elem2497 ,    uint32_t  b2499 ) {
    return (  op_dash_add732 ( (  op_dash_mul632 ( (  b2499 ) , (  from_dash_integral166 ( 16 ) ) ) ) , (  elem2497 ) ) );
}

static  uint32_t   from_dash_hex700 (    struct StrView_20  arr2493 ) {
    return ( (  reduce701 ) ( ( (  map707 ) ( (  arr2493 ) ,  (  lam708 ) ) ) ,  (  from_dash_integral166 ( 0 ) ) ,  (  lam731 ) ) );
}

static  bool   eq734 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike735 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq190 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp736 = ( (  from_dash_string39 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp736);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_737 {
    char _arr [32];
};

static  void *   cast_dash_ptr741 (    struct Array_737 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of742 (    struct Array_737  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_737   zeroed739 (  ) {
    struct Array_737  temp740;
    struct Array_737  x570 = (  temp740 );
    ( ( memset ) ( ( (  cast_dash_ptr741 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of742 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr746 (    struct Array_737 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr747 (    char *  x338 ,    int64_t  count340 ) {
    char  temp748;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp748 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr745 (    struct Array_737 *  arr2201 ,    size_t  i2204 ) {
    if ( ( (  cmp132 ( (  i2204 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2204 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_137_StrConcat ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2204 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2205 = ( ( (  cast_dash_ptr746 ) ( (  arr2201 ) ) ) );
    return ( (  offset_dash_ptr747 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
}

static  enum Unit_6   set744 (    struct Array_737 *  arr2214 ,    size_t  i2217 ,    char  e2219 ) {
    char *  p2220 = ( (  get_dash_ptr745 ) ( (  arr2214 ) ,  (  i2217 ) ) );
    (*  p2220 ) = (  e2219 );
    return ( Unit_6_Unit );
}

struct Slice_750 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail753 (    struct Maybe_686  x1701 ,    struct StrConcat_204  errmsg1703 ) {
    struct Maybe_686  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_686_None_t ) {
        ( (  panic203 ) ( (  errmsg1703 ) ) );
        return ( (  undefined684 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_686_Just_t ) {
            return ( dref1704 .stuff .Maybe_686_Just_s .field0 );
        }
    }
}

static  struct Maybe_686   try_dash_get754 (    struct Slice_750  slice1739 ,    size_t  i1741 ) {
    if ( ( (  cmp132 ( (  i1741 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1741 ) , ( (  slice1739 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    char *  elem_dash_ptr1742 = ( (  offset_dash_ptr747 ) ( ( (  slice1739 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1741 ) ) ) ) );
    return ( ( Maybe_686_Just ) ( ( * (  elem_dash_ptr1742 ) ) ) );
}

static  char   get752 (    struct Slice_750  slice1745 ,    size_t  i1747 ) {
    return ( (  or_dash_fail753 ) ( ( (  try_dash_get754 ) ( (  slice1745 ) ,  (  i1747 ) ) ) ,  ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1747 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1745 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get751 (    struct Slice_750  self1843 ,    size_t  idx1845 ) {
    return ( (  get752 ) ( (  self1843 ) ,  (  idx1845 ) ) );
}

struct Scanner_755 {
    struct StrViewIter_552  f_s;
};

static  struct Scanner_755   mk_dash_from_dash_str757 (    struct StrView_20  s3100 ) {
    return ( (struct Scanner_755) { .f_s = ( (  chars557 ) ( (  s3100 ) ) ) } );
}

static  int32_t   op_dash_sub760 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_762 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr275 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_20   substr758 (    struct StrView_20  s2139 ,    size_t  from2141 ,    size_t  to2143 ) {
    size_t  from_dash_bs2144 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_638  temp759 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( ( (  size_dash_i32147 ) ( (  from2141 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond761 =  next641 (&temp759);
        if (  __cond761 .tag == 0 ) {
            break;
        }
        int32_t  dref2145 =  __cond761 .stuff .Maybe_223_Just_s .field0;
        if ( (  cmp132 ( (  from_dash_bs2144 ) , ( ( (  s2139 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2144 = (  op_dash_add183 ( (  from_dash_bs2144 ) , ( (  next_dash_char174 ) ( ( (  offset_dash_ptr_prime_762 ) ( ( ( (  s2139 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2144 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2146 = (  from_dash_bs2144 );
    struct RangeIter_638  temp763 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  op_dash_sub760 ( ( (  size_dash_i32147 ) ( (  to2143 ) ) ) , ( (  size_dash_i32147 ) ( (  from2141 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond764 =  next641 (&temp763);
        if (  __cond764 .tag == 0 ) {
            break;
        }
        int32_t  dref2147 =  __cond764 .stuff .Maybe_223_Just_s .field0;
        if ( (  cmp132 ( (  to_dash_bs2146 ) , ( ( (  s2139 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2146 = (  op_dash_add183 ( (  to_dash_bs2146 ) , ( (  next_dash_char174 ) ( ( (  offset_dash_ptr_prime_762 ) ( ( ( (  s2139 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2146 ) ) ) ) ) ) );
    }
    return ( (struct StrView_20) { .f_contents = ( (  subslice274 ) ( ( (  s2139 ) .f_contents ) ,  (  from_dash_bs2144 ) ,  (  to_dash_bs2146 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr767 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice766 (    struct Slice_750  s1908 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr767 ) ( ( (  s1908 ) .f_ptr ) ) ) , .f_count = ( (  s1908 ) .f_count ) } );
}

static  struct StrView_20   from_dash_ascii_dash_slice765 (    struct Slice_750  sl2116 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice766 ) ( (  sl2116 ) ) ) } );
}

struct Maybe_768 {
    enum {
        Maybe_768_None_t,
        Maybe_768_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_768_Just_s;
    } stuff;
};

static struct Maybe_768 Maybe_768_Just (  int64_t  field0 ) {
    return ( struct Maybe_768 ) { .tag = Maybe_768_Just_t, .stuff = { .Maybe_768_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_770 {
    struct Scanner_755  f_it;
    bool (*  f_pred )(    struct Char_141  );
};

static  struct Scanner_755   into_dash_iter773 (    struct Scanner_755  self3094 ) {
    return (  self3094 );
}

static  struct Scanner_755   into_dash_iter772 (    struct Scanner_755 *  self779 ) {
    return ( (  into_dash_iter773 ) ( ( * (  self779 ) ) ) );
}

static  struct TakeWhile_770   take_dash_while771 (    struct Scanner_755 *  it964 ,    bool (*  pred966 )(    struct Char_141  ) ) {
    return ( (struct TakeWhile_770) { .f_it = ( (  into_dash_iter772 ) ( (  it964 ) ) ) , .f_pred = (  pred966 ) } );
}

static  bool   is_dash_digit774 (    struct Char_141  c2402 ) {
    return ( (  cmp175 ( ( (  char_dash_u8330 ) ( (  c2402 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp175 ( ( (  char_dash_u8330 ) ( (  c2402 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_555   next778 (    struct Scanner_755 *  self3091 ) {
    return ( (  next556 ) ( ( & ( ( * (  self3091 ) ) .f_s ) ) ) );
}

static  struct Maybe_555   next777 (    struct TakeWhile_770 *  self958 ) {
    struct Maybe_555  mx959 = ( (  next778 ) ( ( & ( ( * (  self958 ) ) .f_it ) ) ) );
    struct Maybe_555  dref960 = (  mx959 );
    if ( dref960.tag == Maybe_555_None_t ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    else {
        if ( dref960.tag == Maybe_555_Just_t ) {
            if ( ( ( ( * (  self958 ) ) .f_pred ) ( ( dref960 .stuff .Maybe_555_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_555_Just ) ( ( dref960 .stuff .Maybe_555_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
            }
        }
    }
}

static  struct TakeWhile_770   into_dash_iter780 (    struct TakeWhile_770  self955 ) {
    return (  self955 );
}

static  struct Maybe_555   head776 (    struct TakeWhile_770  it1123 ) {
    struct TakeWhile_770  temp779 = ( (  into_dash_iter780 ) ( (  it1123 ) ) );
    return ( (  next777 ) ( ( &temp779 ) ) );
}

static  bool   null775 (    struct TakeWhile_770  it1132 ) {
    struct Maybe_555  dref1133 = ( (  head776 ) ( (  it1132 ) ) );
    if ( dref1133.tag == Maybe_555_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env783 {
    ;
    struct Scanner_755 *  it1167;
};

struct envunion784 {
    struct Maybe_555  (*fun) (  struct env783*  ,    int32_t  );
    struct env783 env;
};

static  enum Unit_6   for_dash_each782 (    struct Range_635  iterable1055 ,   struct envunion784  fun1057 ) {
    struct RangeIter_638  temp785 = ( (  into_dash_iter640 ) ( (  iterable1055 ) ) );
    struct RangeIter_638 *  it1058 = ( &temp785 );
    while ( ( true ) ) {
        struct Maybe_223  dref1059 = ( (  next641 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_223_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_223_Just_t ) {
                struct envunion784  temp786 = (  fun1057 );
                ( temp786.fun ( &temp786.env ,  ( dref1059 .stuff .Maybe_223_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_555   lam787 (   struct env783* env ,    int32_t  dref1170 ) {
    return ( (  next778 ) ( ( env->it1167 ) ) );
}

static  enum Unit_6   drop_prime_781 (    struct Scanner_755 *  it1167 ,    size_t  n1169 ) {
    struct env783 envinst783 = {
        .it1167 =  it1167 ,
    };
    ( (  for_dash_each782 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  size_dash_i32147 ) ( (  n1169 ) ) ) ) ) ,  ( (struct envunion784){ .fun = (  struct Maybe_555  (*) (  struct env783*  ,    int32_t  ) )lam787 , .env =  envinst783 } ) ) );
    return ( Unit_6_Unit );
}

static  size_t   reduce789 (    struct TakeWhile_770  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct TakeWhile_770  it1080 = ( (  into_dash_iter780 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next777 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp790 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp790);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp791;
    return (  temp791 );
}

static  size_t   lam792 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count788 (    struct TakeWhile_770  it1085 ) {
    return ( (  reduce789 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam792 ) ) );
}

static  struct TakeWhile_770   chars794 (    struct TakeWhile_770  self1632 ) {
    return (  self1632 );
}

static  struct Maybe_768   reduce795 (    struct TakeWhile_770  iterable1074 ,    struct Maybe_768  base1076 ,    struct Maybe_768 (*  fun1078 )(    struct Char_141  ,    struct Maybe_768  ) ) {
    struct Maybe_768  x1079 = (  base1076 );
    struct TakeWhile_770  it1080 = ( (  into_dash_iter780 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next777 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp796 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp796);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_768  temp797;
    return (  temp797 );
}

static  void *   cast_dash_ptr805 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of806 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed803 (  ) {
    int32_t  temp804;
    int32_t  x570 = (  temp804 );
    ( ( memset ) ( ( (  cast_dash_ptr805 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of806 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast807 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed801 (    uint8_t  x573 ) {
    int32_t  temp802 = ( (  zeroed803 ) ( ) );
    int32_t *  y574 = ( &temp802 );
    uint8_t *  yp575 = ( (  cast807 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32800 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed801 ) ( (  x669 ) ) );
}

static  struct Maybe_223   parse_dash_digit799 (    struct Char_141  c2405 ) {
    if ( ( (  is_dash_digit774 ) ( (  c2405 ) ) ) ) {
        return ( ( Maybe_223_Just ) ( ( (  u8_dash_i32800 ) ( (  op_dash_sub730 ( ( (  char_dash_u8330 ) ( (  c2405 ) ) ) , ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_223) { .tag = Maybe_223_None_t } );
    }
}

static  int64_t   op_dash_add808 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  int64_t   i32_dash_i64809 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_768   sequence_dash_maybe798 (    struct Char_141  e2411 ,    struct Maybe_768  b2413 ) {
    struct Maybe_768  dref2414 = (  b2413 );
    if ( dref2414.tag == Maybe_768_None_t ) {
        return ( (struct Maybe_768) { .tag = Maybe_768_None_t } );
    }
    else {
        if ( dref2414.tag == Maybe_768_Just_t ) {
            struct Maybe_223  dref2416 = ( (  parse_dash_digit799 ) ( (  e2411 ) ) );
            if ( dref2416.tag == Maybe_223_None_t ) {
                return ( (struct Maybe_768) { .tag = Maybe_768_None_t } );
            }
            else {
                if ( dref2416.tag == Maybe_223_Just_t ) {
                    return ( ( Maybe_768_Just ) ( (  op_dash_add808 ( (  op_dash_mul181 ( ( dref2414 .stuff .Maybe_768_Just_s .field0 ) , (  from_dash_integral253 ( 10 ) ) ) ) , ( (  i32_dash_i64809 ) ( ( dref2416 .stuff .Maybe_223_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_768   parse_dash_int793 (    struct TakeWhile_770  s2408 ) {
    struct TakeWhile_770  cs2418 = ( (  chars794 ) ( (  s2408 ) ) );
    struct Maybe_555  dref2419 = ( (  head776 ) ( (  cs2418 ) ) );
    if ( dref2419.tag == Maybe_555_Just_t ) {
        return ( (  reduce795 ) ( (  cs2418 ) ,  ( ( Maybe_768_Just ) ( (  from_dash_integral253 ( 0 ) ) ) ) ,  (  sequence_dash_maybe798 ) ) );
    }
    else {
        if ( dref2419.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_768) { .tag = Maybe_768_None_t } );
        }
    }
}

static  struct Maybe_768   scan_dash_int769 (    struct Scanner_755 *  sc3103 ) {
    struct TakeWhile_770  digit_dash_chars3104 = ( (  take_dash_while771 ) ( (  sc3103 ) ,  (  is_dash_digit774 ) ) );
    if ( ( (  null775 ) ( (  digit_dash_chars3104 ) ) ) ) {
        return ( (struct Maybe_768) { .tag = Maybe_768_None_t } );
    }
    ( (  drop_prime_781 ) ( (  sc3103 ) ,  ( (  count788 ) ( (  digit_dash_chars3104 ) ) ) ) );
    return ( (  parse_dash_int793 ) ( (  digit_dash_chars3104 ) ) );
}

static  int32_t   i64_dash_i32811 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_813 {
    struct StrView_20  field0;
    int64_t  field1;
};

static struct StrConcat_813 StrConcat_813_StrConcat (  struct StrView_20  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_813 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_816 {
    struct StrView_20  field0;
    struct StrConcat_813  field1;
};

static struct StrConcat_816 StrConcat_816_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_813  field1 ) {
    return ( struct StrConcat_816 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_815 {
    struct StrConcat_816  field0;
    struct Char_141  field1;
};

static struct StrConcat_815 StrConcat_815_StrConcat (  struct StrConcat_816  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_815 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_821 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_820 {
    struct StrViewIter_552  f_left;
    struct IntStrIter_821  f_right;
};

struct StrConcatIter_819 {
    struct StrViewIter_552  f_left;
    struct StrConcatIter_820  f_right;
};

enum EmptyIter_823 {
    EmptyIter_823_EmptyIter,
};

struct AppendIter_822 {
    enum EmptyIter_823  f_it;
    struct Char_141  f_elem;
    bool  f_appended;
};

struct StrConcatIter_818 {
    struct StrConcatIter_819  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_818   into_dash_iter825 (    struct StrConcatIter_818  self1472 ) {
    return (  self1472 );
}

struct env832 {
    ;
    int64_t  base1191;
};

struct envunion833 {
    int64_t  (*fun) (  struct env832*  ,    int32_t  ,    int64_t  );
    struct env832 env;
};

static  int64_t   reduce831 (    struct Range_635  iterable1074 ,    int64_t  base1076 ,   struct envunion833  fun1078 ) {
    int64_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion833  temp834 = (  fun1078 );
                x1079 = ( temp834.fun ( &temp834.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp835 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp835);
    exit ( 1 );
    ( Unit_6_Unit );
    int64_t  temp836;
    return (  temp836 );
}

static  int64_t   lam837 (   struct env832* env ,    int32_t  item1195 ,    int64_t  x1197 ) {
    return (  op_dash_mul181 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  int64_t   pow830 (    int64_t  base1191 ,    int32_t  p1193 ) {
    struct env832 envinst832 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce831 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral253 ( 1 ) ) ,  ( (struct envunion833){ .fun = (  int64_t  (*) (  struct env832*  ,    int32_t  ,    int64_t  ) )lam837 , .env =  envinst832 } ) ) );
}

static  int64_t   op_dash_div838 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast839 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub840 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast846 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed844 (    uint8_t  x573 ) {
    size_t  temp845 = ( (  zeroed627 ) ( ) );
    size_t *  y574 = ( &temp845 );
    uint8_t *  yp575 = ( (  cast846 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size843 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed844 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer842 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add183 ( (  op_dash_sub254 ( (  s684 ) , ( (  u8_dash_size843 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer159 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul196 ( (  exp685 ) , ( (  u8_dash_size843 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast847 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_141   from_dash_u8841 (    uint8_t  b710 ) {
    uint8_t *  ptr711 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer842 ) ( ( ( (  cast847 ) ( ( (  u8_dash_size843 ) ( (  b710 ) ) ) ) ) ) ,  (  from_dash_integral162 ( 103 ) ) ) );
    return ( (struct Char_141) { .f_ptr = (  ptr711 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_555   next829 (    struct IntStrIter_821 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp371 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    int64_t  trim_dash_down1404 = ( (  pow830 ) ( (  from_dash_integral253 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int64_t  upper1405 = (  op_dash_div838 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    int64_t  upper_dash_mask1406 = (  op_dash_mul181 ( (  op_dash_div838 ( (  upper1405 ) , (  from_dash_integral253 ( 10 ) ) ) ) , (  from_dash_integral253 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast839 ) ( (  op_dash_sub840 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next828 (    struct StrConcatIter_820 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next829 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next827 (    struct StrConcatIter_819 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next828 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next849 (    enum EmptyIter_823 *  dref786 ) {
    return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
}

static  struct Maybe_555   next848 (    struct AppendIter_822 *  self1016 ) {
    struct Maybe_555  dref1017 = ( (  next849 ) ( ( & ( ( * (  self1016 ) ) .f_it ) ) ) );
    if ( dref1017.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1017 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1017.tag == Maybe_555_None_t ) {
            if ( ( ! ( ( * (  self1016 ) ) .f_appended ) ) ) {
                (*  self1016 ) .f_appended = ( true );
                return ( ( Maybe_555_Just ) ( ( ( * (  self1016 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
        }
    }
}

static  struct Maybe_555   next826 (    struct StrConcatIter_818 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next827 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each817 (    struct StrConcatIter_818  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_818  temp824 = ( (  into_dash_iter825 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_818 *  it1058 = ( &temp824 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next826 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_555_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_555_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_555_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp858 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg859 (    int64_t  l204 ) {
    return ( (  from_dash_integral253 ( 0 ) ) - (  l204 ) );
}

static  bool   eq861 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits860 (    int64_t  self1411 ) {
    if ( (  eq861 ( (  self1411 ) , (  from_dash_integral253 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp858 ( (  self1411 ) , (  from_dash_integral253 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div838 ( (  self1411 ) , (  from_dash_integral253 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_821   int_dash_iter857 (    int64_t  int1415 ) {
    if ( (  cmp858 ( (  int1415 ) , (  from_dash_integral253 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_821) { .f_int = (  op_dash_neg859 ( (  int1415 ) ) ) , .f_len = ( (  count_dash_digits860 ) ( (  op_dash_neg859 ( (  int1415 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_821) { .f_int = (  int1415 ) , .f_len = ( (  count_dash_digits860 ) ( (  int1415 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_821   chars856 (    int64_t  self1442 ) {
    return ( (  int_dash_iter857 ) ( (  self1442 ) ) );
}

static  struct StrConcatIter_820   into_dash_iter855 (    struct StrConcat_813  dref1479 ) {
    return ( (struct StrConcatIter_820) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars856 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_820   chars854 (    struct StrConcat_813  self1490 ) {
    return ( (  into_dash_iter855 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_819   into_dash_iter853 (    struct StrConcat_816  dref1479 ) {
    return ( (struct StrConcatIter_819) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars854 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_819   chars852 (    struct StrConcat_816  self1490 ) {
    return ( (  into_dash_iter853 ) ( (  self1490 ) ) );
}

static  enum EmptyIter_823   into_dash_iter866 (    enum EmptyIter_823  self784 ) {
    return (  self784 );
}

static  struct AppendIter_822   append865 (    enum EmptyIter_823  it1000 ,    struct Char_141  e1002 ) {
    return ( (struct AppendIter_822) { .f_it = ( (  into_dash_iter866 ) ( (  it1000 ) ) ) , .f_elem = (  e1002 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_822   cons864 (    enum EmptyIter_823  it1005 ,    struct Char_141  e1007 ) {
    return ( (  append865 ) ( (  it1005 ) ,  (  e1007 ) ) );
}

static  enum EmptyIter_823   nil867 (  ) {
    return ( EmptyIter_823_EmptyIter );
}

static  struct AppendIter_822   single863 (    struct Char_141  e1010 ) {
    return ( (  cons864 ) ( ( (  nil867 ) ( ) ) ,  (  e1010 ) ) );
}

static  struct AppendIter_822   chars862 (    struct Char_141  self1388 ) {
    return ( (  single863 ) ( (  self1388 ) ) );
}

static  struct StrConcatIter_818   into_dash_iter851 (    struct StrConcat_815  dref1479 ) {
    return ( (struct StrConcatIter_818) { .f_left = ( (  chars852 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_818   chars850 (    struct StrConcat_815  self1490 ) {
    return ( (  into_dash_iter851 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print814 (    struct StrConcat_815  s1677 ) {
    ( (  for_dash_each817 ) ( ( (  chars850 ) ( (  s1677 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum MouseButton_673   undefined868 (  ) {
    enum MouseButton_673  temp869;
    return (  temp869 );
}

static  enum MouseButton_673   panic_prime_812 (    struct StrConcat_813  errmsg1691 ) {
    ( (  print814 ) ( ( ( StrConcat_815_StrConcat ) ( ( ( StrConcat_816_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1691 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined868 ) ( ) );
}

static  enum MouseButton_673   btn_dash_to_dash_mouse_dash_button810 (    int64_t  btn3254 ) {
    return ( {  int32_t  dref3255 = ( (  i64_dash_i32811 ) ( (  btn3254 ) ) ) ;  dref3255 == 0 ? ( MouseButton_673_MouseLeft ) :  dref3255 == 1 ? ( MouseButton_673_MouseMiddle ) :  dref3255 == 2 ? ( MouseButton_673_MouseRight ) :  dref3255 == 64 ? ( MouseButton_673_ScrollUp ) :  dref3255 == 65 ? ( MouseButton_673_ScrollDown ) : ( (  panic_prime_812 ) ( ( ( StrConcat_813_StrConcat ) ( ( (  from_dash_string170 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3254 ) ) ) ) ) ; } );
}

static  struct Scanner_755   mk871 (    struct StrView_20  s3097 ) {
    return ( (struct Scanner_755) { .f_s = ( (  into_dash_iter558 ) ( (  s3097 ) ) ) } );
}

static  struct Maybe_670   parse_dash_csi749 (    struct Slice_750  seq3261 ) {
    if ( (  eq190 ( ( (  seq3261 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    char  last3262 = (  elem_dash_get751 ( (  seq3261 ) , (  op_dash_sub254 ( ( (  seq3261 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq734 ( (  elem_dash_get751 ( (  seq3261 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike735 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_755  temp756 = ( (  mk_dash_from_dash_str757 ) ( ( (  substr758 ) ( ( (  from_dash_ascii_dash_slice765 ) ( (  seq3261 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3261 ) .f_count ) ) ) ) );
        struct Scanner_755 *  sc3263 = ( &temp756 );
        struct Maybe_768  dref3264 = ( (  scan_dash_int769 ) ( (  sc3263 ) ) );
        if ( dref3264.tag == Maybe_768_None_t ) {
            return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
        }
        else {
            if ( dref3264.tag == Maybe_768_Just_t ) {
                ( (  next778 ) ( (  sc3263 ) ) );
                struct Maybe_768  dref3266 = ( (  scan_dash_int769 ) ( (  sc3263 ) ) );
                if ( dref3266.tag == Maybe_768_None_t ) {
                    return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
                }
                else {
                    if ( dref3266.tag == Maybe_768_Just_t ) {
                        ( (  next778 ) ( (  sc3263 ) ) );
                        struct Maybe_768  dref3268 = ( (  scan_dash_int769 ) ( (  sc3263 ) ) );
                        if ( dref3268.tag == Maybe_768_None_t ) {
                            return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
                        }
                        else {
                            if ( dref3268.tag == Maybe_768_Just_t ) {
                                return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Mouse ) ( ( (struct MouseEvent_672) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button810 ) ( ( dref3264 .stuff .Maybe_768_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub760 ( ( (  i64_dash_i32811 ) ( ( dref3266 .stuff .Maybe_768_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_y = (  op_dash_sub760 ( ( (  i64_dash_i32811 ) ( ( dref3268 .stuff .Maybe_768_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_pressed = (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq190 ( ( (  seq3261 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Up_t } ) ) ) ) );
        }
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Down_t } ) ) ) ) );
        }
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Right_t } ) ) ) ) );
        }
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Left_t } ) ) ) ) );
        }
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Home_t } ) ) ) ) );
        }
        if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    if ( (  eq734 ( (  last3262 ) , ( (  from_dash_charlike735 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_755  temp870 = ( (  mk871 ) ( ( (  from_dash_ascii_dash_slice765 ) ( (  seq3261 ) ) ) ) );
        struct Scanner_755 *  sc3270 = ( &temp870 );
        struct Maybe_768  dref3271 = ( (  scan_dash_int769 ) ( (  sc3270 ) ) );
        if ( dref3271.tag == Maybe_768_None_t ) {
            return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
        }
        else {
            if ( dref3271.tag == Maybe_768_Just_t ) {
                return ( {  int32_t  dref3273 = ( (  i64_dash_i32811 ) ( ( dref3271 .stuff .Maybe_768_Just_s .field0 ) ) ) ;  dref3273 == 1 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Home_t } ) ) ) ) ) :  dref3273 == 2 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Insert_t } ) ) ) ) ) :  dref3273 == 3 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Delete_t } ) ) ) ) ) :  dref3273 == 4 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_End_t } ) ) ) ) ) :  dref3273 == 5 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_PageUp_t } ) ) ) ) ) :  dref3273 == 6 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_PageDown_t } ) ) ) ) ) :  dref3273 == 15 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F5_t } ) ) ) ) ) :  dref3273 == 17 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F6_t } ) ) ) ) ) :  dref3273 == 18 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F7_t } ) ) ) ) ) :  dref3273 == 19 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F8_t } ) ) ) ) ) :  dref3273 == 20 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F9_t } ) ) ) ) ) :  dref3273 == 21 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F10_t } ) ) ) ) ) :  dref3273 == 23 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F11_t } ) ) ) ) ) :  dref3273 == 24 ? ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_F12_t } ) ) ) ) ) : ( (struct Maybe_670) { .tag = Maybe_670_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
}

static  struct Slice_750   subslice872 (    struct Slice_750  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    char *  begin_dash_ptr1763 = ( (  offset_dash_ptr747 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_750) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min277 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_750) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  char *   cast874 (    struct Array_737 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_750   as_dash_slice873 (    struct Array_737 *  arr2223 ) {
    return ( (struct Slice_750) { .f_ptr = ( (  cast874 ) ( (  arr2223 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_876 {
    enum {
        Maybe_876_None_t,
        Maybe_876_Just_t,
    } tag;
    union {
        struct {
            struct Key_106  field0;
        } Maybe_876_Just_s;
    } stuff;
};

static struct Maybe_876 Maybe_876_Just (  struct Key_106  field0 ) {
    return ( struct Maybe_876 ) { .tag = Maybe_876_Just_t, .stuff = { .Maybe_876_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_876   parse_dash_ss3877 (    char  c3258 ) {
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_Up_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_Down_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_Right_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_Left_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_Home_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_End_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_F1_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_F2_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_F3_t } ) ) );
    }
    if ( (  eq734 ( (  c3258 ) , ( (  from_dash_charlike735 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_876_Just ) ( ( (struct Key_106) { .tag = Key_106_F4_t } ) ) );
    }
    return ( (struct Maybe_876) { .tag = Maybe_876_None_t } );
}

static  struct Maybe_670   read_dash_key682 (  ) {
    char  temp683 = ( (  undefined684 ) ( ) );
    char *  ch3275 = ( &temp683 );
    struct Maybe_686  dref3276 = ( (  read_dash_byte687 ) ( (  from_dash_integral38 ( 0 ) ) ) );
    if ( dref3276.tag == Maybe_686_None_t ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    else {
        if ( dref3276.tag == Maybe_686_Just_t ) {
            (*  ch3275 ) = ( dref3276 .stuff .Maybe_686_Just_s .field0 );
        }
    }
    if ( (  eq158 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 13 ) ) ) ) ) {
        return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Enter_t } ) ) ) ) );
    }
    if ( (  eq158 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 127 ) ) ) ) ) {
        return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp175 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 27 ) ) ) == 0 ) && ( !  eq158 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 9 ) ) ) ) ) ) {
        char  letter3278 = ( (  u8_dash_ascii695 ) ( ( (  u32_dash_u8168 ) ( ( (  u32_dash_or506 ) ( ( (  u8_dash_u32696 ) ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) ) ) ,  ( (  from_dash_hex700 ) ( ( (  from_dash_string170 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( ( Key_106_Ctrl ) ( (  letter3278 ) ) ) ) ) ) );
    }
    if ( ( !  eq158 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 27 ) ) ) ) ) {
        if ( (  cmp175 ( ( (  ascii_dash_u8694 ) ( ( * (  ch3275 ) ) ) ) , (  from_dash_integral162 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key682 ) ( ) );
        } else {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( ( Key_106_Char ) ( ( * (  ch3275 ) ) ) ) ) ) ) );
        }
    }
    char  temp733 = ( (  undefined684 ) ( ) );
    char *  ch23279 = ( &temp733 );
    struct Maybe_686  dref3280 = ( (  read_dash_byte687 ) ( (  from_dash_integral38 ( 50 ) ) ) );
    if ( dref3280.tag == Maybe_686_None_t ) {
        return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3280.tag == Maybe_686_Just_t ) {
            (*  ch23279 ) = ( dref3280 .stuff .Maybe_686_Just_s .field0 );
        }
    }
    if ( (  eq734 ( ( * (  ch23279 ) ) , ( (  from_dash_charlike735 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_737  temp738 = ( ( (  zeroed739 ) ( ) ) );
        struct Array_737 *  seq3282 = ( &temp738 );
        int32_t  slen3283 = (  from_dash_integral38 ( 0 ) );
        while ( (  cmp371 ( (  slen3283 ) , (  from_dash_integral38 ( 31 ) ) ) == 0 ) ) {
            char  temp743 = ( (  undefined684 ) ( ) );
            char *  sc3284 = ( &temp743 );
            struct Maybe_686  dref3285 = ( (  read_dash_byte687 ) ( (  from_dash_integral38 ( 50 ) ) ) );
            if ( dref3285.tag == Maybe_686_None_t ) {
                break;
            }
            else {
                if ( dref3285.tag == Maybe_686_Just_t ) {
                    (*  sc3284 ) = ( dref3285 .stuff .Maybe_686_Just_s .field0 );
                }
            }
            ( (  set744 ) ( (  seq3282 ) ,  ( (  i32_dash_size213 ) ( (  slen3283 ) ) ) ,  ( * (  sc3284 ) ) ) );
            slen3283 = (  op_dash_add225 ( (  slen3283 ) , (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( (  cmp175 ( ( (  ascii_dash_u8694 ) ( ( * (  sc3284 ) ) ) ) , (  from_dash_integral162 ( 64 ) ) ) != 0 ) && (  cmp175 ( ( (  ascii_dash_u8694 ) ( ( * (  sc3284 ) ) ) ) , (  from_dash_integral162 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi749 ) ( ( (  subslice872 ) ( ( (  as_dash_slice873 ) ( (  seq3282 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size213 ) ( (  slen3283 ) ) ) ) ) ) );
    }
    if ( (  eq734 ( ( * (  ch23279 ) ) , ( (  from_dash_charlike735 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp875 = ( (  undefined684 ) ( ) );
        char *  sc3287 = ( &temp875 );
        struct Maybe_686  dref3288 = ( (  read_dash_byte687 ) ( (  from_dash_integral38 ( 50 ) ) ) );
        if ( dref3288.tag == Maybe_686_None_t ) {
            return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3288.tag == Maybe_686_Just_t ) {
                (*  sc3287 ) = ( dref3288 .stuff .Maybe_686_Just_s .field0 );
            }
        }
        struct Maybe_876  dref3290 = ( (  parse_dash_ss3877 ) ( ( * (  sc3287 ) ) ) );
        if ( dref3290.tag == Maybe_876_None_t ) {
            return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
        }
        else {
            if ( dref3290.tag == Maybe_876_Just_t ) {
                return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( dref3290 .stuff .Maybe_876_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_670_Just ) ( ( ( InputEvent_671_Key ) ( ( (struct Key_106) { .tag = Key_106_Escape_t } ) ) ) ) );
}

static  struct Maybe_670   read_dash_event679 (   struct env43* env ,    struct Tui_45 *  tui3300 ) {
    struct envunion44  temp680 = ( (struct envunion44){ .fun = (  bool  (*) (  struct env42*  ,    struct Tui_45 *  ) )update_dash_dimensions681 , .env =  env->envinst42 } );
    ( temp680.fun ( &temp680.env ,  (  tui3300 ) ) );
    struct Maybe_670  dref3301 = ( (  read_dash_key682 ) ( ) );
    if ( dref3301.tag == Maybe_670_None_t ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    else {
        if ( dref3301.tag == Maybe_670_Just_t ) {
            (*  tui3300 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_670_Just ) ( ( dref3301 .stuff .Maybe_670_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_670   lam677 (   struct env668* env ) {
    struct envunion669  temp678 = ( (struct envunion669){ .fun = (  struct Maybe_670  (*) (  struct env43*  ,    struct Tui_45 *  ) )read_dash_event679 , .env =  env->envinst43 } );
    return ( temp678.fun ( &temp678.env ,  ( env->tui3903 ) ) );
}

static  struct Maybe_670   next879 (    struct FunIter_667 *  self1025 ) {
    if ( ( ( * (  self1025 ) ) .f_finished ) ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    struct envunion674  temp880 = ( ( * (  self1025 ) ) .f_fun );
    struct Maybe_670  dref1026 = ( temp880.fun ( &temp880.env ) );
    if ( dref1026.tag == Maybe_670_Just_t ) {
        return ( ( Maybe_670_Just ) ( ( dref1026 .stuff .Maybe_670_Just_s .field0 ) ) );
    }
    else {
        if ( dref1026.tag == Maybe_670_None_t ) {
            (*  self1025 ) .f_finished = ( true );
            return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
        }
    }
}

struct envunion882 {
    enum Unit_6  (*fun) (  struct env102*  ,    struct Editor_100 *  ,    struct Key_106  );
    struct env102 env;
};

struct envunion885 {
    enum Unit_6  (*fun) (  struct env92*  ,    struct Editor_100 *  ,    struct Key_106  );
    struct env92 env;
};

static  size_t   num_dash_bytes889 (    struct StrView_20  self2162 ) {
    return ( ( (  self2162 ) .f_contents ) .f_count );
}

static  struct StrView_20   from_dash_bytes891 (    struct Slice_11  sl2119 ) {
    return ( (struct StrView_20) { .f_contents = (  sl2119 ) } );
}

static  struct StrView_20   line890 (    struct TextBuf_62 *  self3515 ,    int32_t  li3517 ) {
    return ( (  from_dash_bytes891 ) ( ( (  to_dash_slice278 ) ( ( (  get271 ) ( ( & ( ( * (  self3515 ) ) .f_buf ) ) ,  ( (  i32_dash_size213 ) ( (  li3517 ) ) ) ) ) ) ) ) );
}

static  size_t   clamp892 (    size_t  x1333 ,    size_t  mn1335 ,    size_t  mx1337 ) {
    if ( (  cmp132 ( (  x1333 ) , (  mn1335 ) ) == 0 ) ) {
        return (  mn1335 );
    } else {
        if ( (  cmp132 ( (  x1333 ) , (  mx1337 ) ) == 2 ) ) {
            return (  mx1337 );
        } else {
            return (  x1333 );
        }
    }
}

static  size_t   sync_dash_char894 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg859 ( ( (  size_dash_i64212 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp175 ( (  pb694 ) , (  from_dash_integral162 ( 128 ) ) ) != 0 ) && (  cmp175 ( (  pb694 ) , (  op_dash_add176 ( (  from_dash_integral162 ( 128 ) ) , (  from_dash_integral162 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add183 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char893 (    uint8_t *  p697 ) {
    return (  op_dash_add183 ( ( (  sync_dash_char894 ) ( ( (  offset_dash_ptr275 ) ( (  p697 ) ,  (  op_dash_neg859 ( (  from_dash_integral253 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_19   left_dash_pos888 (    struct TextBuf_62 *  self3531 ,    struct Pos_19  pos3533 ) {
    if ( (  eq265 ( (  pos3533 ) , ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    if ( (  eq266 ( ( (  pos3533 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        ( (  assert425 ) ( (  cmp371 ( ( (  pos3533 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string170 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk452 ) ( (  op_dash_sub760 ( ( (  pos3533 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes889 ) ( ( (  line890 ) ( (  self3531 ) ,  (  op_dash_sub760 ( ( (  pos3533 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_20  line3534 = ( (  line890 ) ( (  self3531 ) ,  ( (  pos3533 ) .f_line ) ) );
    size_t  pos_dash_bi3535 = ( (  clamp892 ) ( ( (  i32_dash_size213 ) ( ( (  pos3533 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes889 ) ( (  line3534 ) ) ) ) );
    size_t  off3536 = ( (  previous_dash_char893 ) ( ( (  offset_dash_ptr275 ) ( ( ( (  line3534 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  pos_dash_bi3535 ) ) ) ) ) ) );
    return ( (  mk452 ) ( ( (  pos3533 ) .f_line ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( (  pos_dash_bi3535 ) , (  off3536 ) ) ) ) ) ) );
}

static  int32_t   max899 (    int32_t  l1296 ,    int32_t  r1298 ) {
    if ( (  cmp371 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  void *   cast_dash_ptr905 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of906 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed903 (  ) {
    wchar_t  temp904;
    wchar_t  x570 = (  temp904 );
    ( ( memset ) ( ( (  cast_dash_ptr905 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of906 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr907 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast908 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_911 {
    size_t  f_size;
};

static  struct TypeSize_911   get_dash_typesize910 (  ) {
    wchar_t  temp912;
    return ( (struct TypeSize_911) { .f_size = ( sizeof( ( (  temp912 ) ) ) ) } );
}

static  wchar_t   cast914 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar901 (    struct Char_141  c748 ) {
    struct CharDestructured_156  dref749 = ( (  destructure157 ) ( (  c748 ) ) );
    if ( dref749.tag == CharDestructured_156_Ref_t ) {
        wchar_t  temp902 = ( (  zeroed903 ) ( ) );
        wchar_t *  wcp751 = ( &temp902 );
        size_t  num_dash_chars752 = ( ( mbstowcs ) ( (  wcp751 ) ,  ( (  cast_dash_ptr907 ) ( ( ( dref749 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq190 ( (  num_dash_chars752 ) , ( ( (  cast908 ) ( ( (  op_dash_neg859 ( (  from_dash_integral253 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp909 = ( (  from_dash_string39 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp909);
            exit ( 1 );
            ( Unit_6_Unit );
        }
        return ( * (  wcp751 ) );
    }
    else {
        if ( dref749.tag == CharDestructured_156_Scalar_t ) {
            if ( ( ! (  eq190 ( ( (  size_dash_of594 ) ( ( dref749 .stuff .CharDestructured_156_Scalar_s .field0 ) ) ) , ( ( ( (  get_dash_typesize910 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp913 = ( (  from_dash_string39 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp913);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            return ( (  cast914 ) ( ( dref749 .stuff .CharDestructured_156_Scalar_s .field0 ) ) );
        }
    }
}

static  int32_t   wcwidth900 (    struct Char_141  c2517 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar901 ) ( (  c2517 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth898 (    struct Char_141  c3345 ) {
    return ( (  max899 ) ( ( (  wcwidth900 ) ( (  c3345 ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   pos_dash_vi895 (    struct TextBuf_62 *  self3701 ,    struct Pos_19  pos3703 ) {
    int32_t  bi3704 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3705 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_552  temp896 =  into_dash_iter554 ( ( (  chars557 ) ( ( (  line890 ) ( (  self3701 ) ,  ( (  pos3703 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_555  __cond897 =  next556 (&temp896);
        if (  __cond897 .tag == 0 ) {
            break;
        }
        struct Char_141  c3707 =  __cond897 .stuff .Maybe_555_Just_s .field0;
        bi3704 = (  op_dash_add225 ( (  bi3704 ) , ( (  size_dash_i32147 ) ( ( (  c3707 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp371 ( ( (  pos3703 ) .f_bi ) , (  bi3704 ) ) == 0 ) ) {
            break;
        }
        vi3705 = (  op_dash_add225 ( (  vi3705 ) , ( (  rendered_dash_wcwidth898 ) ( (  c3707 ) ) ) ) );
    }
    return (  vi3705 );
}

struct Tuple2_917 {
    enum Mode_95  field0;
    enum Mode_95  field1;
};

static struct Tuple2_917 Tuple2_917_Tuple2 (  enum Mode_95  field0 ,  enum Mode_95  field1 ) {
    return ( struct Tuple2_917 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq916 (    enum Mode_95  l3661 ,    enum Mode_95  r3663 ) {
    return ( {  struct Tuple2_917  dref3664 = ( ( Tuple2_917_Tuple2 ) ( (  l3661 ) ,  (  r3663 ) ) ) ;  dref3664 .field0 == Mode_95_Normal &&  dref3664 .field1 == Mode_95_Normal ? ( true ) :  dref3664 .field0 == Mode_95_Insert &&  dref3664 .field1 == Mode_95_Insert ? ( true ) :  dref3664 .field0 == Mode_95_Select &&  dref3664 .field1 == Mode_95_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_6   set_dash_sel915 (    struct Pane_94 *  self3748 ,    struct Maybe_22  sel3750 ) {
    if ( ( !  eq916 ( ( ( * (  self3748 ) ) .f_mode ) , ( Mode_95_Select ) ) ) ) {
        (*  self3748 ) .f_sel = (  sel3750 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_left887 (    struct Pane_94 *  self3756 ) {
    (*  self3756 ) .f_cursor = ( (  left_dash_pos888 ) ( ( ( * (  self3756 ) ) .f_buf ) ,  ( ( * (  self3756 ) ) .f_cursor ) ) );
    (*  self3756 ) .f_vi = ( (  pos_dash_vi895 ) ( ( ( * (  self3756 ) ) .f_buf ) ,  ( ( * (  self3756 ) ) .f_cursor ) ) );
    ( (  set_dash_sel915 ) ( (  self3756 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pane_94 *   pane918 (    struct Editor_100 *  ed3853 ) {
    return ( & ( ( * (  ed3853 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines921 (    struct TextBuf_62 *  self3520 ) {
    return ( (  size_dash_i32147 ) ( ( (  size267 ) ( ( & ( ( * (  self3520 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_19   right_dash_pos920 (    struct TextBuf_62 *  self3523 ,    struct Pos_19  pos3525 ) {
    if ( (  cmp371 ( ( (  pos3525 ) .f_line ) , ( (  num_dash_lines921 ) ( (  self3523 ) ) ) ) != 0 ) ) {
        return ( (  mk452 ) ( ( (  num_dash_lines921 ) ( (  self3523 ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    struct StrView_20  line3526 = ( (  line890 ) ( (  self3523 ) ,  ( (  pos3525 ) .f_line ) ) );
    int64_t  bi3527 = ( (  i32_dash_i64809 ) ( ( (  pos3525 ) .f_bi ) ) );
    if ( (  cmp858 ( (  bi3527 ) , ( (  size_dash_i64212 ) ( ( (  num_dash_bytes889 ) ( (  line3526 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp371 ( (  op_dash_add225 ( ( (  pos3525 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines921 ) ( (  self3523 ) ) ) ) != 0 ) ) {
            return ( (  mk452 ) ( ( (  pos3525 ) .f_line ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes889 ) ( (  line3526 ) ) ) ) ) ) );
        }
        return ( (  mk452 ) ( (  op_dash_add225 ( ( (  pos3525 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    int32_t  off3528 = ( (  size_dash_i32147 ) ( ( (  next_dash_char174 ) ( ( (  offset_dash_ptr275 ) ( ( ( (  line3526 ) .f_contents ) .f_ptr ) ,  (  bi3527 ) ) ) ) ) ) );
    return ( (  mk452 ) ( ( (  pos3525 ) .f_line ) ,  (  op_dash_add225 ( ( (  pos3525 ) .f_bi ) , (  off3528 ) ) ) ) );
}

static  enum Unit_6   move_dash_right919 (    struct Pane_94 *  self3753 ) {
    (*  self3753 ) .f_cursor = ( (  right_dash_pos920 ) ( ( ( * (  self3753 ) ) .f_buf ) ,  ( ( * (  self3753 ) ) .f_cursor ) ) );
    (*  self3753 ) .f_vi = ( (  pos_dash_vi895 ) ( ( ( * (  self3753 ) ) .f_buf ) ,  ( ( * (  self3753 ) ) .f_cursor ) ) );
    ( (  set_dash_sel915 ) ( (  self3753 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   vi_dash_bi923 (    struct TextBuf_62 *  self3690 ,    int32_t  ln3692 ,    int32_t  vx3694 ) {
    int32_t  bi3695 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3696 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_552  temp924 =  into_dash_iter554 ( ( (  chars557 ) ( ( (  line890 ) ( (  self3690 ) ,  (  ln3692 ) ) ) ) ) );
    while (true) {
        struct Maybe_555  __cond925 =  next556 (&temp924);
        if (  __cond925 .tag == 0 ) {
            break;
        }
        struct Char_141  c3698 =  __cond925 .stuff .Maybe_555_Just_s .field0;
        vi3696 = (  op_dash_add225 ( (  vi3696 ) , ( (  rendered_dash_wcwidth898 ) ( (  c3698 ) ) ) ) );
        if ( (  cmp371 ( (  vx3694 ) , (  vi3696 ) ) == 0 ) ) {
            break;
        }
        bi3695 = (  op_dash_add225 ( (  bi3695 ) , ( (  size_dash_i32147 ) ( ( (  c3698 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3695 );
}

static  enum Unit_6   move_dash_down922 (    struct Pane_94 *  self3759 ) {
    struct Pos_19  cur3760 = ( ( * (  self3759 ) ) .f_cursor );
    if ( (  cmp371 ( (  op_dash_add225 ( ( (  cur3760 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines921 ) ( ( ( * (  self3759 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3761 = ( ( * (  self3759 ) ) .f_vi );
    int32_t  bi3762 = ( (  vi_dash_bi923 ) ( ( ( * (  self3759 ) ) .f_buf ) ,  (  op_dash_add225 ( ( (  cur3760 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3761 ) ) );
    (*  self3759 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_add225 ( ( (  cur3760 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3762 ) } );
    ( (  set_dash_sel915 ) ( (  self3759 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_up926 (    struct Pane_94 *  self3765 ) {
    struct Pos_19  cur3766 = ( ( * (  self3765 ) ) .f_cursor );
    if ( (  cmp371 ( ( (  cur3766 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3767 = ( ( * (  self3765 ) ) .f_vi );
    int32_t  bi3768 = ( (  vi_dash_bi923 ) ( ( ( * (  self3765 ) ) .f_buf ) ,  (  op_dash_sub760 ( ( (  cur3766 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3767 ) ) );
    (*  self3765 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_sub760 ( ( (  cur3766 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3768 ) } );
    ( (  set_dash_sel915 ) ( (  self3765 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

enum MoveDirection_928 {
    MoveDirection_928_MoveFwd,
    MoveDirection_928_MoveBwd,
};

enum MoveTarget_929 {
    MoveTarget_929_NextWordStart,
    MoveTarget_929_NextWordEnd,
};

static  struct Pos_19   own931 (    struct Pos_19  x1232 ) {
    return (  x1232 );
}

struct env932 {
    struct Pane_94 *  pane3792;
    enum MoveDirection_928  dir3794;
    struct Pos_19 *  prev3797;
    ;
    ;
};

struct envunion934 {
    enum Unit_6  (*fun) (  struct env932*  );
    struct env932 env;
};

static  enum Unit_6   advance935 (   struct env932* env ) {
    (* env->prev3797 ) = ( ( * ( env->pane3792 ) ) .f_cursor );
    enum MoveDirection_928  dref3799 = ( env->dir3794 );
    switch (  dref3799 ) {
        case MoveDirection_928_MoveFwd : {
            ( (  move_dash_right919 ) ( ( env->pane3792 ) ) );
            break;
        }
        case MoveDirection_928_MoveBwd : {
            ( (  move_dash_left887 ) ( ( env->pane3792 ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end936 (    struct Pane_94 *  pane3778 ) {
    struct Pos_19  cur3779 = ( ( * (  pane3778 ) ) .f_cursor );
    return (  eq190 ( ( (  i32_dash_size213 ) ( ( (  cur3779 ) .f_bi ) ) ) , ( (  num_dash_bytes889 ) ( ( (  line890 ) ( ( ( * (  pane3778 ) ) .f_buf ) ,  ( (  cur3779 ) .f_line ) ) ) ) ) ) );
}

struct envunion938 {
    enum Unit_6  (*fun) (  struct env932*  );
    struct env932 env;
};

enum CharType_941 {
    CharType_941_CharSpace,
    CharType_941_CharWord,
    CharType_941_CharPunctuation,
};

struct Tuple2_942 {
    enum CharType_941  field0;
    enum CharType_941  field1;
};

static struct Tuple2_942 Tuple2_942_Tuple2 (  enum CharType_941  field0 ,  enum CharType_941  field1 ) {
    return ( struct Tuple2_942 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq940 (    enum CharType_941  l3642 ,    enum CharType_941  r3644 ) {
    struct Tuple2_942  dref3645 = ( ( Tuple2_942_Tuple2 ) ( (  l3642 ) ,  (  r3644 ) ) );
    if (  dref3645 .field0 == CharType_941_CharSpace &&  dref3645 .field1 == CharType_941_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3645 .field0 == CharType_941_CharWord &&  dref3645 .field1 == CharType_941_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3645 .field0 == CharType_941_CharPunctuation &&  dref3645 .field1 == CharType_941_CharPunctuation ) {
                return ( true );
            }
            else {
                if ( true ) {
                    return ( false );
                }
            }
        }
    }
}

static  struct Char_141   min947 (    struct Char_141  l1217 ,    struct Char_141  r1219 ) {
    if ( (  cmp728 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Char_141   max948 (    struct Char_141  l1296 ,    struct Char_141  r1298 ) {
    if ( (  cmp728 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  bool   between946 (    struct Char_141  c1318 ,    struct Char_141  l1320 ,    struct Char_141  r1322 ) {
    struct Char_141  from1323 = ( (  min947 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Char_141  to1324 = ( (  max948 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp728 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp728 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_alpha945 (    struct Char_141  c2339 ) {
    return ( ( (  between946 ) ( (  c2339 ) ,  ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) || ( (  between946 ) ( (  c2339 ) ,  ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit949 (    struct Char_141  c2342 ) {
    return ( (  between946 ) ( (  c2342 ) ,  ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) );
}

static  bool   is_dash_alphanumeric944 (    struct Char_141  c2345 ) {
    return ( ( (  is_dash_alpha945 ) ( (  c2345 ) ) ) || ( (  is_dash_digit949 ) ( (  c2345 ) ) ) );
}

static  bool   is_dash_whitespace950 (    struct Char_141  c2330 ) {
    return ( ( (  eq349 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq349 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq349 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_941   char_dash_type943 (    struct Char_141  c3648 ) {
    if ( ( ( ( (  is_dash_alphanumeric944 ) ( (  c3648 ) ) ) || (  eq349 ( (  c3648 ) , ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq349 ( (  c3648 ) , ( (  from_dash_charlike171 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_941_CharWord );
    } else {
        if ( ( (  is_dash_whitespace950 ) ( (  c3648 ) ) ) ) {
            return ( CharType_941_CharSpace );
        } else {
            return ( CharType_941_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary939 (    struct Char_141  l3651 ,    struct Char_141  r3653 ) {
    return ( !  eq940 ( ( (  char_dash_type943 ) ( (  l3651 ) ) ) , ( (  char_dash_type943 ) ( (  r3653 ) ) ) ) );
}

static  struct Char_141   or_dash_else952 (    struct Maybe_555  self1708 ,    struct Char_141  alt1710 ) {
    struct Maybe_555  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_555_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_555_Just_t ) {
            return ( dref1711 .stuff .Maybe_555_Just_s .field0 );
        }
    }
}

static  struct Maybe_555   head953 (    struct StrViewIter_552  it1123 ) {
    struct StrViewIter_552  temp954 = ( (  into_dash_iter554 ) ( (  it1123 ) ) );
    return ( (  next556 ) ( ( &temp954 ) ) );
}

static  struct Char_141   char_dash_at951 (    struct Pane_94 *  pane3710 ,    struct Pos_19  pos3712 ) {
    struct StrView_20  line3713 = ( (  line890 ) ( ( ( * (  pane3710 ) ) .f_buf ) ,  ( (  pos3712 ) .f_line ) ) );
    return ( (  or_dash_else952 ) ( ( (  head953 ) ( ( (  chars557 ) ( ( (  byte_dash_substr331 ) ( (  line3713 ) ,  ( (  i32_dash_size213 ) ( ( (  pos3712 ) .f_bi ) ) ) ,  ( (  num_dash_bytes889 ) ( (  line3713 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

struct envunion956 {
    enum Unit_6  (*fun) (  struct env932*  );
    struct env932 env;
};

static  enum Unit_6   print959 (    struct StrView_20  s1677 ) {
    ( (  for_dash_each551 ) ( ( (  chars557 ) ( (  s1677 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  bool   undefined960 (  ) {
    bool  temp961;
    return (  temp961 );
}

static  bool   todo958 (  ) {
    ( (  print959 ) ( ( (  from_dash_string170 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined960 ) ( ) );
}

static  bool   reached_dash_target957 (    struct Pane_94 *  pane3784 ,    enum MoveTarget_929  target3786 ,    struct Pos_19  prev3788 ) {
    return ( {  enum MoveTarget_929  dref3789 = (  target3786 ) ;  dref3789 == MoveTarget_929_NextWordStart ? ( ( (  is_dash_word_dash_boundary939 ) ( ( (  char_dash_at951 ) ( (  pane3784 ) ,  (  prev3788 ) ) ) ,  ( (  char_dash_at951 ) ( (  pane3784 ) ,  ( ( * (  pane3784 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq940 ( ( (  char_dash_type943 ) ( ( (  char_dash_at951 ) ( (  pane3784 ) ,  ( ( * (  pane3784 ) ) .f_cursor ) ) ) ) ) , ( CharType_941_CharSpace ) ) ) ) ) :  dref3789 == MoveTarget_929_NextWordEnd ? ( ( (  is_dash_word_dash_boundary939 ) ( ( (  char_dash_at951 ) ( (  pane3784 ) ,  (  prev3788 ) ) ) ,  ( (  char_dash_at951 ) ( (  pane3784 ) ,  ( ( * (  pane3784 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq940 ( ( (  char_dash_type943 ) ( ( (  char_dash_at951 ) ( (  pane3784 ) ,  (  prev3788 ) ) ) ) ) , ( CharType_941_CharSpace ) ) ) ) ) : ( (  todo958 ) ( ) ) ; } );
}

static  enum Unit_6   advance_dash_word927 (    struct Pane_94 *  pane3792 ,    enum MoveDirection_928  dir3794 ,    enum MoveTarget_929  target3796 ) {
    struct Pos_19  temp930 = ( (  own931 ) ( ( ( * (  pane3792 ) ) .f_cursor ) ) );
    struct Pos_19 *  prev3797 = ( &temp930 );
    struct env932 envinst932 = {
        .pane3792 =  pane3792 ,
        .dir3794 =  dir3794 ,
        .prev3797 =  prev3797 ,
    };
    struct Pos_19  sel3800 = ( ( * (  pane3792 ) ) .f_cursor );
    struct envunion934  temp933 = ( (struct envunion934){ .fun = (  enum Unit_6  (*) (  struct env932*  ) )advance935 , .env =  envinst932 } );
    ( temp933.fun ( &temp933.env ) );
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end936 ) ( (  pane3792 ) ) ) ) {
        if ( (  eq265 ( ( ( * (  pane3792 ) ) .f_cursor ) , ( * (  prev3797 ) ) ) ) ) {
            return ( Unit_6_Unit );
        }
        struct envunion938  temp937 = ( (struct envunion938){ .fun = (  enum Unit_6  (*) (  struct env932*  ) )advance935 , .env =  envinst932 } );
        ( temp937.fun ( &temp937.env ) );
        sel3800 = ( ( * (  pane3792 ) ) .f_cursor );
    }
    if ( ( (  is_dash_word_dash_boundary939 ) ( ( (  char_dash_at951 ) ( (  pane3792 ) ,  ( * (  prev3797 ) ) ) ) ,  ( (  char_dash_at951 ) ( (  pane3792 ) ,  ( ( * (  pane3792 ) ) .f_cursor ) ) ) ) ) ) {
        sel3800 = ( ( * (  pane3792 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion956  temp955 = ( (struct envunion956){ .fun = (  enum Unit_6  (*) (  struct env932*  ) )advance935 , .env =  envinst932 } );
        ( temp955.fun ( &temp955.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end936 ) ( (  pane3792 ) ) ) || ( (  reached_dash_target957 ) ( (  pane3792 ) ,  (  target3796 ) ,  ( * (  prev3797 ) ) ) ) ) ) {
            enum MoveDirection_928  dref3801 = (  dir3794 );
            switch (  dref3801 ) {
                case MoveDirection_928_MoveFwd : {
                    ( (  move_dash_left887 ) ( (  pane3792 ) ) );
                    break;
                }
                case MoveDirection_928_MoveBwd : {
                    ( (  move_dash_right919 ) ( (  pane3792 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq265 ( ( * (  prev3797 ) ) , ( ( * (  pane3792 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel915 ) ( (  pane3792 ) ,  ( ( Maybe_22_Just ) ( (  sel3800 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  size_t   size966 (    struct List_16 *  l2103 ) {
    return ( ( * (  l2103 ) ) .f_count );
}

static  struct Action_18 *   offset_dash_ptr971 (    struct Action_18 *  x338 ,    int64_t  count340 ) {
    struct Action_18  temp972;
    return ( (struct Action_18 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp972 ) ) ) ) ) ) ) ) );
}

static  struct Action_18 *   get_dash_ptr970 (    struct Slice_17  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_18 *  elem_dash_ptr1736 = ( (  offset_dash_ptr971 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  struct Action_18 *   get_dash_ptr969 (    struct List_16 *  list1971 ,    size_t  i1973 ) {
    if ( ( (  cmp132 ( (  i1973 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1973 ) , ( ( * (  list1971 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1973 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1971 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr970 ) ( ( ( * (  list1971 ) ) .f_elements ) ,  (  i1973 ) ) );
}

static  struct Action_18   get968 (    struct List_16 *  list1981 ,    size_t  i1983 ) {
    return ( * ( (  get_dash_ptr969 ) ( (  list1981 ) ,  (  i1983 ) ) ) );
}

static  struct Action_18   elem_dash_get967 (    struct List_16  self2051 ,    size_t  k2053 ) {
    return ( (  get968 ) ( ( & (  self2051 ) ) ,  (  k2053 ) ) );
}

static  struct Pos_19   action_dash_fwd974 (   struct env67* env ,    struct TextBuf_62 *  self3579 ,    struct Action_18  action3581 ) {
    struct envunion68  temp975 = ( (struct envunion68){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  env->envinst57 } );
    ( temp975.fun ( &temp975.env ,  (  self3579 ) ,  ( (  action3581 ) .f_from ) ,  ( (  action3581 ) .f_to_dash_bwd ) ,  ( (  action3581 ) .f_fwd ) ) );
    return ( (  action3581 ) .f_to_dash_fwd );
}

static  struct Maybe_78   redo965 (   struct env71* env ,    struct TextBuf_62 *  self3589 ) {
    struct Actions_63 *  actions3590 = ( & ( ( * (  self3589 ) ) .f_actions ) );
    if ( (  cmp132 ( ( ( * (  actions3590 ) ) .f_cur ) , ( (  size966 ) ( ( & ( ( * (  actions3590 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    struct Action_18  action3591 = (  elem_dash_get967 ( ( ( * (  actions3590 ) ) .f_list ) , ( ( * (  actions3590 ) ) .f_cur ) ) );
    struct envunion72  temp973 = ( (struct envunion72){ .fun = (  struct Pos_19  (*) (  struct env67*  ,    struct TextBuf_62 *  ,    struct Action_18  ) )action_dash_fwd974 , .env =  env->envinst67 } );
    struct Pos_19  to_dash_fwd3592 = ( temp973.fun ( &temp973.env ,  (  self3589 ) ,  (  action3591 ) ) );
    (*  actions3590 ) .f_cur = (  op_dash_add183 ( ( ( * (  actions3590 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    if ( (  cmp132 ( ( (  num_dash_bytes889 ) ( ( (  action3591 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        to_dash_fwd3592 = ( (  left_dash_pos888 ) ( (  self3589 ) ,  (  to_dash_fwd3592 ) ) );
    }
    return ( ( Maybe_78_Just ) ( ( (struct Cursors_21) { .f_cur = (  to_dash_fwd3592 ) , .f_sel = ( ( Maybe_22_Just ) ( ( (  action3591 ) .f_from ) ) ) } ) ) );
}

struct env977 {
    ;
    struct Pane_94 *  self3830;
    ;
};

struct envunion978 {
    enum Unit_6  (*fun) (  struct env977*  ,    struct Cursors_21  );
    struct env977 env;
};

static  enum Unit_6   if_dash_just976 (    struct Maybe_78  x1272 ,   struct envunion978  fun1274 ) {
    struct Maybe_78  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_78_Just_t ) {
        struct envunion978  temp979 = (  fun1274 );
        ( temp979.fun ( &temp979.env ,  ( dref1275 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_cursors981 (    struct Pane_94 *  self3771 ,    struct Pos_19  cur3773 ,    struct Pos_19  sel3775 ) {
    (*  self3771 ) .f_cursor = (  cur3773 );
    if ( (  eq265 ( (  cur3773 ) , (  sel3775 ) ) ) ) {
        (*  self3771 ) .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } );
    } else {
        (*  self3771 ) .f_sel = ( ( Maybe_22_Just ) ( (  sel3775 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   or_dash_else982 (    struct Maybe_22  self1708 ,    struct Pos_19  alt1710 ) {
    struct Maybe_22  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_22_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_22_Just_t ) {
            return ( dref1711 .stuff .Maybe_22_Just_s .field0 );
        }
    }
}

static  enum Unit_6   lam980 (   struct env977* env ,    struct Cursors_21  cursors3833 ) {
    ( (  set_dash_cursors981 ) ( ( env->self3830 ) ,  ( (  cursors3833 ) .f_cur ) ,  ( (  or_dash_else982 ) ( ( (  cursors3833 ) .f_sel ) ,  ( (  cursors3833 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   redo963 (   struct env86* env ,    struct Pane_94 *  self3830 ) {
    struct envunion87  temp964 = ( (struct envunion87){ .fun = (  struct Maybe_78  (*) (  struct env71*  ,    struct TextBuf_62 *  ) )redo965 , .env =  env->envinst71 } );
    struct Maybe_78  mcursors3831 = ( temp964.fun ( &temp964.env ,  ( ( * (  self3830 ) ) .f_buf ) ) );
    struct env977 envinst977 = {
        .self3830 =  self3830 ,
    };
    ( (  if_dash_just976 ) ( (  mcursors3831 ) ,  ( (struct envunion978){ .fun = (  enum Unit_6  (*) (  struct env977*  ,    struct Cursors_21  ) )lam980 , .env =  envinst977 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pos_19   action_dash_bwd988 (   struct env65* env ,    struct TextBuf_62 *  self3574 ,    struct Action_18  action3576 ) {
    struct envunion66  temp989 = ( (struct envunion66){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  env->envinst57 } );
    ( temp989.fun ( &temp989.env ,  (  self3574 ) ,  ( (  action3576 ) .f_from ) ,  ( (  action3576 ) .f_to_dash_fwd ) ,  ( (  action3576 ) .f_bwd ) ) );
    return ( (  action3576 ) .f_to_dash_bwd );
}

static  struct Maybe_78   undo986 (   struct env69* env ,    struct TextBuf_62 *  self3584 ) {
    struct Actions_63 *  actions3585 = ( & ( ( * (  self3584 ) ) .f_actions ) );
    if ( (  eq190 ( ( ( * (  actions3585 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_78) { .tag = Maybe_78_None_t } );
    }
    (*  actions3585 ) .f_cur = (  op_dash_sub254 ( ( ( * (  actions3585 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_18  action3586 = (  elem_dash_get967 ( ( ( * (  actions3585 ) ) .f_list ) , ( ( * (  actions3585 ) ) .f_cur ) ) );
    struct envunion70  temp987 = ( (struct envunion70){ .fun = (  struct Pos_19  (*) (  struct env65*  ,    struct TextBuf_62 *  ,    struct Action_18  ) )action_dash_bwd988 , .env =  env->envinst65 } );
    ( temp987.fun ( &temp987.env ,  (  self3584 ) ,  (  action3586 ) ) );
    return ( ( Maybe_78_Just ) ( ( (  action3586 ) .f_before_dash_cursors ) ) );
}

struct env991 {
    struct Pane_94 *  self3824;
    ;
    ;
};

struct envunion992 {
    enum Unit_6  (*fun) (  struct env991*  ,    struct Cursors_21  );
    struct env991 env;
};

static  enum Unit_6   if_dash_just990 (    struct Maybe_78  x1272 ,   struct envunion992  fun1274 ) {
    struct Maybe_78  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_78_Just_t ) {
        struct envunion992  temp993 = (  fun1274 );
        ( temp993.fun ( &temp993.env ,  ( dref1275 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam994 (   struct env991* env ,    struct Cursors_21  cursors3827 ) {
    ( (  set_dash_cursors981 ) ( ( env->self3824 ) ,  ( (  cursors3827 ) .f_cur ) ,  ( (  or_dash_else982 ) ( ( (  cursors3827 ) .f_sel ) ,  ( (  cursors3827 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   undo984 (   struct env84* env ,    struct Pane_94 *  self3824 ) {
    struct envunion85  temp985 = ( (struct envunion85){ .fun = (  struct Maybe_78  (*) (  struct env69*  ,    struct TextBuf_62 *  ) )undo986 , .env =  env->envinst69 } );
    struct Maybe_78  mcursors3825 = ( temp985.fun ( &temp985.env ,  ( ( * (  self3824 ) ) .f_buf ) ) );
    struct env991 envinst991 = {
        .self3824 =  self3824 ,
    };
    ( (  if_dash_just990 ) ( (  mcursors3825 ) ,  ( (struct envunion992){ .fun = (  enum Unit_6  (*) (  struct env991*  ,    struct Cursors_21  ) )lam994 , .env =  envinst991 } ) ) );
    return ( Unit_6_Unit );
}

struct envunion996 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_100 *  );
    struct env90 env;
};

static  struct Tuple2_96   minmax999 (    struct Pos_19  l1310 ,    struct Pos_19  r1312 ) {
    return ( (  cmp370 ( (  l1310 ) , (  r1312 ) ) == 0 ) ? ( ( Tuple2_96_Tuple2 ) ( (  l1310 ) ,  (  r1312 ) ) ) : ( ( Tuple2_96_Tuple2 ) ( (  r1312 ) ,  (  l1310 ) ) ) );
}

static  struct Pos_19   fst1000 (    struct Tuple2_96  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   snd1001 (    struct Tuple2_96  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct Tuple2_96   selection998 (    struct Pane_94 *  self3836 ) {
    struct Tuple2_96  from_dash_to3837 = ( (  minmax999 ) ( ( (  or_dash_else982 ) ( ( ( * (  self3836 ) ) .f_sel ) ,  ( ( * (  self3836 ) ) .f_cursor ) ) ) ,  ( ( * (  self3836 ) ) .f_cursor ) ) );
    struct Pos_19  from3838 = ( (  fst1000 ) ( (  from_dash_to3837 ) ) );
    struct Pos_19  to3839 = ( (  right_dash_pos920 ) ( ( ( * (  self3836 ) ) .f_buf ) ,  ( (  snd1001 ) ( (  from_dash_to3837 ) ) ) ) );
    return ( ( Tuple2_96_Tuple2 ) ( (  from3838 ) ,  (  to3839 ) ) );
}

static  struct StrView_20   clone_dash_01005 (    struct StrView_20  s2122 ,    enum CAllocator_8  al2124 ) {
    size_t  cnt2125 = ( ( (  s2122 ) .f_contents ) .f_count );
    struct Slice_11  nus2126 = ( (  allocate299 ) ( (  al2124 ) ,  (  op_dash_add183 ( (  cnt2125 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to400 ) ( ( (  s2122 ) .f_contents ) ,  (  nus2126 ) ) );
    ( (  set308 ) ( (  nus2126 ) ,  (  cnt2125 ) ,  ( (  char_dash_u8330 ) ( ( (  from_dash_charlike171 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2126 ) .f_ptr ) , .f_count = (  cnt2125 ) } ) } );
}

static  struct StrView_20   clone1004 (    struct StrView_20  s2129 ,    enum CAllocator_8  al2131 ) {
    return ( (  clone_dash_01005 ) ( (  s2129 ) ,  (  al2131 ) ) );
}

struct envunion1011 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1013 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   str_dash_between1003 (   struct env73* env ,    struct TextBuf_62 *  self3607 ,    struct Pos_19  from3609 ,    struct Pos_19  to3611 ) {
    enum CAllocator_8  al3612 = ( ( ( * (  self3607 ) ) .f_buf ) .f_al );
    if ( (  eq266 ( ( (  from3609 ) .f_line ) , ( (  to3611 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3613 = ( (  i32_dash_size213 ) ( ( (  min417 ) ( ( (  from3609 ) .f_bi ) ,  ( (  to3611 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3614 = ( (  i32_dash_size213 ) ( ( (  max899 ) ( ( (  from3609 ) .f_bi ) ,  ( (  to3611 ) .f_bi ) ) ) ) );
        return ( (  clone1004 ) ( ( (  byte_dash_substr331 ) ( ( (  line890 ) ( (  self3607 ) ,  ( (  from3609 ) .f_line ) ) ) ,  (  from_dash_bi3613 ) ,  (  to_dash_bi3614 ) ) ) ,  (  al3612 ) ) );
    } else {
        struct Pos_19  from_dash_pos3615 = ( (  min369 ) ( (  from3609 ) ,  (  to3611 ) ) );
        struct Pos_19  to_dash_pos3616 = ( (  max372 ) ( (  from3609 ) ,  (  to3611 ) ) );
        struct List_10  temp1006 = ( (  mk234 ) ( (  al3612 ) ) );
        struct List_10 *  sb3617 = ( &temp1006 );
        struct StrView_20  first_dash_line3618 = ( (  line890 ) ( (  self3607 ) ,  ( (  from_dash_pos3615 ) .f_line ) ) );
        struct envunion74  temp1007 = ( (struct envunion74){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
        ( temp1007.fun ( &temp1007.env ,  (  sb3617 ) ,  ( ( (  byte_dash_substr331 ) ( (  first_dash_line3618 ) ,  ( (  i32_dash_size213 ) ( ( (  from_dash_pos3615 ) .f_bi ) ) ) ,  ( (  num_dash_bytes889 ) ( (  first_dash_line3618 ) ) ) ) ) .f_contents ) ) );
        struct RangeIter_638  temp1008 =  into_dash_iter640 ( ( (  to643 ) ( (  op_dash_add225 ( ( (  from_dash_pos3615 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  op_dash_sub760 ( ( (  to_dash_pos3616 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_223  __cond1009 =  next641 (&temp1008);
            if (  __cond1009 .tag == 0 ) {
                break;
            }
            int32_t  i3620 =  __cond1009 .stuff .Maybe_223_Just_s .field0;
            struct envunion1011  temp1010 = ( (struct envunion1011){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
            ( temp1010.fun ( &temp1010.env ,  (  sb3617 ) ,  ( ( (  line890 ) ( (  self3607 ) ,  (  i3620 ) ) ) .f_contents ) ) );
        }
        struct envunion1013  temp1012 = ( (struct envunion1013){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all284 , .env =  env->envinst30 } );
        ( temp1012.fun ( &temp1012.env ,  (  sb3617 ) ,  ( ( (  byte_dash_substr331 ) ( ( (  line890 ) ( (  self3607 ) ,  ( (  to_dash_pos3616 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size213 ) ( ( (  to_dash_pos3616 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes891 ) ( ( (  to_dash_slice278 ) ( ( * (  sb3617 ) ) ) ) ) );
    }
}

struct env1015 {
    struct Editor_100 *  ed3856;
    ;
};

struct envunion1016 {
    enum Unit_6  (*fun) (  struct env1015*  ,    struct StrView_20  );
    struct env1015 env;
};

static  enum Unit_6   if_dash_just1014 (    struct Maybe_101  x1272 ,   struct envunion1016  fun1274 ) {
    struct Maybe_101  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_101_Just_t ) {
        struct envunion1016  temp1017 = (  fun1274 );
        ( temp1017.fun ( &temp1017.env ,  ( dref1275 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free1019 (    struct StrView_20  s2134 ,    enum CAllocator_8  al2136 ) {
    ( (  free318 ) ( (  al2136 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2134 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1018 (   struct env1015* env ,    struct StrView_20  cp3860 ) {
    ( (  free1019 ) ( (  cp3860 ) ,  ( ( * ( env->ed3856 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   copy_dash_selection_dash_to_dash_clipboard997 (   struct env90* env ,    struct Editor_100 *  ed3856 ) {
    struct Tuple2_96  from_dash_to3857 = ( (  selection998 ) ( ( (  pane918 ) ( (  ed3856 ) ) ) ) );
    struct envunion91  temp1002 = ( (struct envunion91){ .fun = (  struct StrView_20  (*) (  struct env73*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1003 , .env =  env->envinst73 } );
    struct StrView_20  cpd3858 = ( temp1002.fun ( &temp1002.env ,  ( ( ( * (  ed3856 ) ) .f_pane ) .f_buf ) ,  ( (  fst1000 ) ( (  from_dash_to3857 ) ) ) ,  ( (  snd1001 ) ( (  from_dash_to3857 ) ) ) ) );
    struct env1015 envinst1015 = {
        .ed3856 =  ed3856 ,
    };
    ( (  if_dash_just1014 ) ( ( ( * (  ed3856 ) ) .f_clipboard ) ,  ( (struct envunion1016){ .fun = (  enum Unit_6  (*) (  struct env1015*  ,    struct StrView_20  ) )lam1018 , .env =  envinst1015 } ) ) );
    (*  ed3856 ) .f_clipboard = ( ( Maybe_101_Just ) ( (  cpd3858 ) ) );
    return ( Unit_6_Unit );
}

struct SliceIter_1026 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1025 {
    struct SliceIter_1026  field0;
    size_t  field1;
};

static struct Drop_1025 Drop_1025_Drop (  struct SliceIter_1026  field0 ,  size_t  field1 ) {
    return ( struct Drop_1025 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1025   into_dash_iter1027 (    struct Drop_1025  self839 ) {
    return (  self839 );
}

static  struct SliceIter_1026   into_dash_iter1030 (    struct Slice_17  self1798 ) {
    return ( (struct SliceIter_1026) { .f_slice = (  self1798 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_17   subslice1031 (    struct Slice_17  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    struct Action_18 *  begin_dash_ptr1763 = ( (  offset_dash_ptr971 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min277 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  struct SliceIter_1026   into_dash_iter1029 (    struct List_16  self1998 ) {
    return ( (  into_dash_iter1030 ) ( ( (  subslice1031 ) ( ( (  self1998 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self1998 ) .f_count ) ) ) ) );
}

static  struct Drop_1025   drop1028 (    struct List_16  iterable846 ,    size_t  i848 ) {
    struct SliceIter_1026  it849 = ( (  into_dash_iter1029 ) ( (  iterable846 ) ) );
    return ( ( Drop_1025_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

struct Maybe_1033 {
    enum {
        Maybe_1033_None_t,
        Maybe_1033_Just_t,
    } tag;
    union {
        struct {
            struct Action_18  field0;
        } Maybe_1033_Just_s;
    } stuff;
};

static struct Maybe_1033 Maybe_1033_Just (  struct Action_18  field0 ) {
    return ( struct Maybe_1033 ) { .tag = Maybe_1033_Just_t, .stuff = { .Maybe_1033_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1033   next1035 (    struct SliceIter_1026 *  self1804 ) {
    size_t  off1805 = ( ( * (  self1804 ) ) .f_current_dash_offset );
    if ( (  cmp132 ( (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1804 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1033) { .tag = Maybe_1033_None_t } );
    }
    struct Action_18  elem1806 = ( * ( (  offset_dash_ptr971 ) ( ( ( ( * (  self1804 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  off1805 ) ) ) ) ) );
    (*  self1804 ) .f_current_dash_offset = (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1033_Just ) ( (  elem1806 ) ) );
}

static  struct Maybe_1033   next1034 (    struct Drop_1025 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1035 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1035 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   free_dash_action1036 (    struct Action_18  action3502 ,    enum CAllocator_8  al3504 ) {
    ( (  free1019 ) ( ( (  action3502 ) .f_fwd ) ,  (  al3504 ) ) );
    ( (  free1019 ) ( ( (  action3502 ) .f_bwd ) ,  (  al3504 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   trim1037 (    struct List_16 *  l2085 ,    size_t  new_dash_count2087 ) {
    (*  l2085 ) .f_count = ( (  min277 ) ( (  new_dash_count2087 ) ,  ( ( * (  l2085 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

struct TypeSize_1044 {
    size_t  f_size;
};

static  struct TypeSize_1044   get_dash_typesize1043 (  ) {
    struct Action_18  temp1045;
    return ( (struct TypeSize_1044) { .f_size = ( sizeof( ( (  temp1045 ) ) ) ) } );
}

static  struct Action_18 *   cast_dash_ptr1046 (    void *  p359 ) {
    return ( (struct Action_18 * ) (  p359 ) );
}

static  struct Slice_17   allocate1042 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize1043 ) ( ) ) ) .f_size );
    struct Action_18 *  ptr1927 = ( (  cast_dash_ptr1046 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

struct env1047 {
    ;
    struct Slice_17  new_dash_slice2012;
    ;
};

struct Tuple2_1049 {
    struct Action_18  field0;
    int32_t  field1;
};

static struct Tuple2_1049 Tuple2_1049_Tuple2 (  struct Action_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1049 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1048 {
    enum Unit_6  (*fun) (  struct env1047*  ,    struct Tuple2_1049  );
    struct env1047 env;
};

static  enum Unit_6   set1051 (    struct Slice_17  slice1750 ,    size_t  i1752 ,    struct Action_18  x1754 ) {
    struct Action_18 *  ep1755 = ( (  get_dash_ptr970 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1050 (   struct env1047* env ,    struct Tuple2_1049  dref2013 ) {
    return ( (  set1051 ) ( ( env->new_dash_slice2012 ) ,  ( (  i32_dash_size213 ) ( ( dref2013 .field1 ) ) ) ,  ( dref2013 .field0 ) ) );
}

struct Zip_1053 {
    struct SliceIter_1026  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_1053   into_dash_iter1055 (    struct Zip_1053  self905 ) {
    return (  self905 );
}

struct Maybe_1056 {
    enum {
        Maybe_1056_None_t,
        Maybe_1056_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1049  field0;
        } Maybe_1056_Just_s;
    } stuff;
};

static struct Maybe_1056 Maybe_1056_Just (  struct Tuple2_1049  field0 ) {
    return ( struct Maybe_1056 ) { .tag = Maybe_1056_Just_t, .stuff = { .Maybe_1056_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1056   next1057 (    struct Zip_1053 *  self908 ) {
    struct Zip_1053  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_1033  dref910 = ( (  next1035 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_1033_None_t ) {
            return ( (struct Maybe_1056) { .tag = Maybe_1056_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_1033_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1056) { .tag = Maybe_1056_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1035 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1056_Just ) ( ( ( Tuple2_1049_Tuple2 ) ( ( dref910 .stuff .Maybe_1033_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1052 (    struct Zip_1053  iterable1055 ,   struct envunion1048  fun1057 ) {
    struct Zip_1053  temp1054 = ( (  into_dash_iter1055 ) ( (  iterable1055 ) ) );
    struct Zip_1053 *  it1058 = ( &temp1054 );
    while ( ( true ) ) {
        struct Maybe_1056  dref1059 = ( (  next1057 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1056_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1056_Just_t ) {
                struct envunion1048  temp1058 = (  fun1057 );
                ( temp1058.fun ( &temp1058.env ,  ( dref1059 .stuff .Maybe_1056_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1053   zip1059 (    struct Slice_17  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_1026  left_dash_it919 = ( (  into_dash_iter1030 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1053) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr1061 (    struct Action_18 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1060 (    enum CAllocator_8  dref1929 ,    struct Slice_17  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1061 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full1041 (   struct env3* env ,    struct List_16 *  list2011 ) {
    if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2011 ) .f_elements = ( (  allocate1042 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( env->starting_dash_size2006 ) ) );
    } else {
        if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , ( ( ( * (  list2011 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2012 = ( (  allocate1042 ) ( ( ( * (  list2011 ) ) .f_al ) ,  (  op_dash_mul196 ( ( ( * (  list2011 ) ) .f_count ) , ( env->growth_dash_factor2007 ) ) ) ) );
            struct env1047 envinst1047 = {
                .new_dash_slice2012 =  new_dash_slice2012 ,
            };
            struct envunion1048  fun2016 = ( (struct envunion1048){ .fun = (  enum Unit_6  (*) (  struct env1047*  ,    struct Tuple2_1049  ) )lam1050 , .env =  envinst1047 } );
            ( (  for_dash_each1052 ) ( ( (  zip1059 ) ( ( ( * (  list2011 ) ) .f_elements ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2016 ) ) );
            ( (  free1060 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( ( * (  list2011 ) ) .f_elements ) ) );
            (*  list2011 ) .f_elements = (  new_dash_slice2012 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add1039 (   struct env14* env ,    struct List_16 *  list2019 ,    struct Action_18  elem2021 ) {
    struct envunion15  temp1040 = ( (struct envunion15){ .fun = (  enum Unit_6  (*) (  struct env3*  ,    struct List_16 *  ) )grow_dash_if_dash_full1041 , .env =  env->envinst3 } );
    ( temp1040.fun ( &temp1040.env ,  (  list2019 ) ) );
    ( (  set1051 ) ( ( ( * (  list2019 ) ) .f_elements ) ,  ( ( * (  list2019 ) ) .f_count ) ,  (  elem2021 ) ) );
    (*  list2019 ) .f_count = (  op_dash_add183 ( ( ( * (  list2019 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Maybe_101   head1063 (    struct SplitIter_338  it1123 ) {
    struct SplitIter_338  temp1064 = ( (  into_dash_iter345 ) ( (  it1123 ) ) );
    return ( (  next357 ) ( ( &temp1064 ) ) );
}

static  struct Maybe_101   head1066 (    struct Drop_337  it1123 ) {
    struct Drop_337  temp1067 = ( (  into_dash_iter343 ) ( (  it1123 ) ) );
    return ( (  next356 ) ( ( &temp1067 ) ) );
}

static  bool   null1065 (    struct Drop_337  it1132 ) {
    struct Maybe_101  dref1133 = ( (  head1066 ) ( (  it1132 ) ) );
    if ( dref1133.tag == Maybe_101_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_6   panic1069 (    struct StrView_20  errmsg1688 ) {
    ( (  print_dash_str426 ) ( ( ( StrConcat_427_StrConcat ) ( ( ( StrConcat_428_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_354   undefined1070 (  ) {
    struct Tuple2_354  temp1071;
    return (  temp1071 );
}

static  struct Tuple2_354   or_dash_fail1068 (    struct Maybe_353  x1701 ,    struct StrView_20  errmsg1703 ) {
    struct Maybe_353  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_353_None_t ) {
        ( (  panic1069 ) ( (  errmsg1703 ) ) );
        return ( (  undefined1070 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_353_Just_t ) {
            return ( dref1704 .stuff .Maybe_353_Just_s .field0 );
        }
    }
}

static  struct Maybe_353   reduce1073 (    struct Zip_336  iterable1074 ,    struct Maybe_353  base1076 ,    struct Maybe_353 (*  fun1078 )(    struct Tuple2_354  ,    struct Maybe_353  ) ) {
    struct Maybe_353  x1079 = (  base1076 );
    struct Zip_336  it1080 = ( (  into_dash_iter341 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_353  dref1081 = ( (  next355 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_353_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_353_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_353_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1074 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1074);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_353  temp1075;
    return (  temp1075 );
}

static  struct Maybe_353   lam1076 (    struct Tuple2_354  e1128 ,    struct Maybe_353  dref1129 ) {
    return ( ( Maybe_353_Just ) ( (  e1128 ) ) );
}

static  struct Maybe_353   last1072 (    struct Zip_336  it1126 ) {
    return ( (  reduce1073 ) ( (  it1126 ) ,  ( (struct Maybe_353) { .tag = Maybe_353_None_t } ) ,  (  lam1076 ) ) );
}

static  int32_t   snd1077 (    struct Tuple2_354  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct StrView_20   fst1078 (    struct Tuple2_354  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   pos_dash_after_dash_str1062 (    struct TextBuf_62 *  self3595 ,    struct StrView_20  bytes3597 ,    struct Pos_19  from3599 ) {
    struct SplitIter_338  lines3600 = ( (  split_dash_by_dash_each346 ) ( (  bytes3597 ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_20  first_dash_line3601 = ( (  or_dash_else321 ) ( ( (  head1063 ) ( (  lines3600 ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_337  headless3602 = ( (  drop344 ) ( (  lines3600 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1065 ) ( (  headless3602 ) ) ) ) {
        struct Pos_19  next_dash_pos3603 = ( (  mk452 ) ( ( (  from3599 ) .f_line ) ,  (  op_dash_add225 ( ( (  from3599 ) .f_bi ) , ( (  size_dash_i32147 ) ( ( (  num_dash_bytes889 ) ( (  first_dash_line3601 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3603 );
    } else {
        struct Tuple2_354  last_dash_line3604 = ( (  or_dash_fail1068 ) ( ( (  last1072 ) ( ( (  zip342 ) ( (  headless3602 ) ,  ( (  from230 ) ( (  op_dash_add225 ( ( (  from3599 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk452 ) ( ( (  snd1077 ) ( (  last_dash_line3604 ) ) ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes889 ) ( ( (  fst1078 ) ( (  last_dash_line3604 ) ) ) ) ) ) ) ) );
    }
}

static  struct Cursors_21   or_dash_else1080 (    struct Maybe_78  self1708 ,    struct Cursors_21  alt1710 ) {
    struct Maybe_78  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_78_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_78_Just_t ) {
            return ( dref1711 .stuff .Maybe_78_Just_s .field0 );
        }
    }
}

static  struct Maybe_78   change1023 (   struct env75* env ,    struct TextBuf_62 *  self3623 ,    struct Pos_19  from3625 ,    struct Pos_19  to3627 ,    struct StrView_20  bytes3629 ,    struct Maybe_78  before_dash_cursors3631 ) {
    struct Pos_19  from_dash_pos3632 = ( (  min369 ) ( (  from3625 ) ,  (  to3627 ) ) );
    struct Pos_19  to_dash_pos3633 = ( (  max372 ) ( (  from3625 ) ,  (  to3627 ) ) );
    struct Actions_63 *  actions3634 = ( & ( ( * (  self3623 ) ) .f_actions ) );
    enum CAllocator_8  al3635 = ( ( ( * (  actions3634 ) ) .f_list ) .f_al );
    size_t  cur3636 = ( ( * (  actions3634 ) ) .f_cur );
    struct Drop_1025  temp1024 =  into_dash_iter1027 ( ( (  drop1028 ) ( ( ( * (  actions3634 ) ) .f_list ) ,  (  cur3636 ) ) ) );
    while (true) {
        struct Maybe_1033  __cond1032 =  next1034 (&temp1024);
        if (  __cond1032 .tag == 0 ) {
            break;
        }
        struct Action_18  action3638 =  __cond1032 .stuff .Maybe_1033_Just_s .field0;
        ( (  free_dash_action1036 ) ( (  action3638 ) ,  (  al3635 ) ) );
    }
    ( (  trim1037 ) ( ( & ( ( * (  actions3634 ) ) .f_list ) ) ,  (  cur3636 ) ) );
    struct envunion76  temp1038 = ( (struct envunion76){ .fun = (  enum Unit_6  (*) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  ) )add1039 , .env =  env->envinst14 } );
    struct envunion79  temp1079 = ( (struct envunion79){ .fun = (  struct StrView_20  (*) (  struct env73*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1003 , .env =  env->envinst73 } );
    ( temp1038.fun ( &temp1038.env ,  ( & ( ( * (  actions3634 ) ) .f_list ) ) ,  ( (struct Action_18) { .f_from = (  from3625 ) , .f_fwd = ( (  clone1004 ) ( (  bytes3629 ) ,  (  al3635 ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1062 ) ( (  self3623 ) ,  (  bytes3629 ) ,  (  from_dash_pos3632 ) ) ) , .f_bwd = ( temp1079.fun ( &temp1079.env ,  (  self3623 ) ,  (  from_dash_pos3632 ) ,  (  to_dash_pos3633 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3633 ) , .f_before_dash_cursors = ( (  or_dash_else1080 ) ( (  before_dash_cursors3631 ) ,  ( (struct Cursors_21) { .f_cur = (  from3625 ) , .f_sel = ( (  eq265 ( (  from3625 ) , (  to3627 ) ) ) ? ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) : ( ( Maybe_22_Just ) ( (  to3627 ) ) ) ) } ) ) ) } ) ) );
    struct envunion77  temp1081 = ( (struct envunion77){ .fun = (  struct Maybe_78  (*) (  struct env71*  ,    struct TextBuf_62 *  ) )redo965 , .env =  env->envinst71 } );
    return ( temp1081.fun ( &temp1081.env ,  (  self3623 ) ) );
}

struct env1083 {
    struct Pane_94 *  self3842;
    ;
    ;
};

struct envunion1084 {
    enum Unit_6  (*fun) (  struct env1083*  ,    struct Cursors_21  );
    struct env1083 env;
};

static  enum Unit_6   if_dash_just1082 (    struct Maybe_78  x1272 ,   struct envunion1084  fun1274 ) {
    struct Maybe_78  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_78_Just_t ) {
        struct envunion1084  temp1085 = (  fun1274 );
        ( temp1085.fun ( &temp1085.env ,  ( dref1275 .stuff .Maybe_78_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_78_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1086 (   struct env1083* env ,    struct Cursors_21  cursors3849 ) {
    ( (  set_dash_cursors981 ) ( ( env->self3842 ) ,  ( (  cursors3849 ) .f_cur ) ,  ( (  or_dash_else982 ) ( ( (  cursors3849 ) .f_sel ) ,  ( (  cursors3849 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   replace_dash_selection1021 (   struct env88* env ,    struct Pane_94 *  self3842 ,    struct Tuple2_96  pos_prime_s3844 ,    struct StrView_20  cp3846 ) {
    struct envunion89  temp1022 = ( (struct envunion89){ .fun = (  struct Maybe_78  (*) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  ) )change1023 , .env =  env->envinst75 } );
    struct Maybe_78  mcursors3847 = ( temp1022.fun ( &temp1022.env ,  ( ( * (  self3842 ) ) .f_buf ) ,  ( (  fst1000 ) ( (  pos_prime_s3844 ) ) ) ,  ( (  snd1001 ) ( (  pos_prime_s3844 ) ) ) ,  (  cp3846 ) ,  ( ( Maybe_78_Just ) ( ( (struct Cursors_21) { .f_cur = ( ( * (  self3842 ) ) .f_cursor ) , .f_sel = ( ( * (  self3842 ) ) .f_sel ) } ) ) ) ) );
    struct env1083 envinst1083 = {
        .self3842 =  self3842 ,
    };
    ( (  if_dash_just1082 ) ( (  mcursors3847 ) ,  ( (struct envunion1084){ .fun = (  enum Unit_6  (*) (  struct env1083*  ,    struct Cursors_21  ) )lam1086 , .env =  envinst1083 } ) ) );
    return ( Unit_6_Unit );
}

struct envunion1089 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  );
    struct env88 env;
};

struct envunion1091 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_100 *  );
    struct env90 env;
};

struct envunion1094 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  );
    struct env88 env;
};

struct env1093 {
    struct env88 envinst88;
    ;
    ;
    ;
    struct Editor_100 *  ed3863;
};

struct envunion1095 {
    enum Unit_6  (*fun) (  struct env1093*  ,    struct StrView_20  );
    struct env1093 env;
};

static  enum Unit_6   if_dash_just1092 (    struct Maybe_101  x1272 ,   struct envunion1095  fun1274 ) {
    struct Maybe_101  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_101_Just_t ) {
        struct envunion1095  temp1096 = (  fun1274 );
        ( temp1096.fun ( &temp1096.env ,  ( dref1275 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   max_dash_pos1098 (    struct Pane_94 *  pane3809 ) {
    return ( {  struct Maybe_22  dref3810 = ( ( * (  pane3809 ) ) .f_sel ) ; dref3810.tag == Maybe_22_Just_t ? ( (  max372 ) ( ( ( * (  pane3809 ) ) .f_cursor ) ,  ( dref3810 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3809 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1097 (   struct env1093* env ,    struct StrView_20  cp3869 ) {
    struct Pos_19  start3870 = ( (  right_dash_pos920 ) ( ( ( ( * ( env->ed3863 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1098 ) ( ( (  pane918 ) ( ( env->ed3863 ) ) ) ) ) ) );
    struct envunion1094  temp1099 = ( (struct envunion1094){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  ) )replace_dash_selection1021 , .env =  env->envinst88 } );
    ( temp1099.fun ( &temp1099.env ,  ( (  pane918 ) ( ( env->ed3863 ) ) ) ,  ( ( Tuple2_96_Tuple2 ) ( (  start3870 ) ,  (  start3870 ) ) ) ,  (  cp3869 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1102 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  );
    struct env88 env;
};

struct env1101 {
    struct env88 envinst88;
    ;
    ;
    struct Editor_100 *  ed3863;
};

struct envunion1103 {
    enum Unit_6  (*fun) (  struct env1101*  ,    struct StrView_20  );
    struct env1101 env;
};

static  enum Unit_6   if_dash_just1100 (    struct Maybe_101  x1272 ,   struct envunion1103  fun1274 ) {
    struct Maybe_101  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_101_Just_t ) {
        struct envunion1103  temp1104 = (  fun1274 );
        ( temp1104.fun ( &temp1104.env ,  ( dref1275 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   min_dash_pos1106 (    struct Pane_94 *  pane3804 ) {
    return ( {  struct Maybe_22  dref3805 = ( ( * (  pane3804 ) ) .f_sel ) ; dref3805.tag == Maybe_22_Just_t ? ( (  min369 ) ( ( ( * (  pane3804 ) ) .f_cursor ) ,  ( dref3805 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3804 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1105 (   struct env1101* env ,    struct StrView_20  cp3872 ) {
    struct Pos_19  start3873 = ( (  min_dash_pos1106 ) ( ( (  pane918 ) ( ( env->ed3863 ) ) ) ) );
    struct envunion1102  temp1107 = ( (struct envunion1102){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  ) )replace_dash_selection1021 , .env =  env->envinst88 } );
    ( temp1107.fun ( &temp1107.env ,  ( (  pane918 ) ( ( env->ed3863 ) ) ) ,  ( ( Tuple2_96_Tuple2 ) ( (  start3873 ) ,  (  start3873 ) ) ) ,  (  cp3872 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1110 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  );
    struct env88 env;
};

struct env1109 {
    struct env88 envinst88;
    ;
    ;
    struct Editor_100 *  ed3863;
};

struct envunion1111 {
    enum Unit_6  (*fun) (  struct env1109*  ,    struct StrView_20  );
    struct env1109 env;
};

static  enum Unit_6   if_dash_just1108 (    struct Maybe_101  x1272 ,   struct envunion1111  fun1274 ) {
    struct Maybe_101  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_101_Just_t ) {
        struct envunion1111  temp1112 = (  fun1274 );
        ( temp1112.fun ( &temp1112.env ,  ( dref1275 .stuff .Maybe_101_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_101_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1113 (   struct env1109* env ,    struct StrView_20  cp3875 ) {
    struct Pos_19  start3876 = ( (  min_dash_pos1106 ) ( ( (  pane918 ) ( ( env->ed3863 ) ) ) ) );
    struct envunion1110  temp1114 = ( (struct envunion1110){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  ) )replace_dash_selection1021 , .env =  env->envinst88 } );
    ( temp1114.fun ( &temp1114.env ,  ( (  pane918 ) ( ( env->ed3863 ) ) ) ,  ( ( Tuple2_96_Tuple2 ) ( (  start3876 ) ,  (  start3876 ) ) ) ,  (  cp3875 ) ) );
    return ( Unit_6_Unit );
}

static  bool   is_dash_none1115 (    struct Maybe_22  m1245 ) {
    struct Maybe_22  dref1246 = (  m1245 );
    if ( dref1246.tag == Maybe_22_None_t ) {
        return ( true );
    }
    else {
        if ( dref1246.tag == Maybe_22_Just_t ) {
            return ( false );
        }
    }
}

static  enum Unit_6   handle_dash_normal_dash_key886 (   struct env92* env ,    struct Editor_100 *  ed3863 ,    struct Key_106  key3865 ) {
    struct Key_106  dref3866 = (  key3865 );
    if ( dref3866.tag == Key_106_Char_t ) {
        if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed3863 ) .f_running = ( false );
        } else {
            if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left887 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) );
            } else {
                if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right919 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) );
                } else {
                    if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down922 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) );
                    } else {
                        if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up926 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) );
                        } else {
                            if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                (*  ed3863 ) .f_pane .f_mode = ( Mode_95_Insert );
                            } else {
                                if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word927 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ,  ( MoveDirection_928_MoveFwd ) ,  ( MoveTarget_929_NextWordStart ) ) );
                                } else {
                                    if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word927 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ,  ( MoveDirection_928_MoveFwd ) ,  ( MoveTarget_929_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word927 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ,  ( MoveDirection_928_MoveBwd ) ,  ( MoveTarget_929_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion98  temp962 = ( (struct envunion98){ .fun = (  enum Unit_6  (*) (  struct env86*  ,    struct Pane_94 *  ) )redo963 , .env =  env->envinst86 } );
                                                ( temp962.fun ( &temp962.env ,  ( (  pane918 ) ( (  ed3863 ) ) ) ) );
                                            } else {
                                                if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion97  temp983 = ( (struct envunion97){ .fun = (  enum Unit_6  (*) (  struct env84*  ,    struct Pane_94 *  ) )undo984 , .env =  env->envinst84 } );
                                                    ( temp983.fun ( &temp983.env ,  ( (  pane918 ) ( (  ed3863 ) ) ) ) );
                                                } else {
                                                    if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion996  temp995 = ( (struct envunion996){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_100 *  ) )copy_dash_selection_dash_to_dash_clipboard997 , .env =  env->envinst90 } );
                                                        ( temp995.fun ( &temp995.env ,  (  ed3863 ) ) );
                                                        struct envunion93  temp1020 = ( (struct envunion93){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  ) )replace_dash_selection1021 , .env =  env->envinst88 } );
                                                        ( temp1020.fun ( &temp1020.env ,  ( (  pane918 ) ( (  ed3863 ) ) ) ,  ( (  selection998 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion99  temp1087 = ( (struct envunion99){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_100 *  ) )copy_dash_selection_dash_to_dash_clipboard997 , .env =  env->envinst90 } );
                                                            ( temp1087.fun ( &temp1087.env ,  (  ed3863 ) ) );
                                                            struct envunion1089  temp1088 = ( (struct envunion1089){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_94 *  ,    struct Tuple2_96  ,    struct StrView_20  ) )replace_dash_selection1021 , .env =  env->envinst88 } );
                                                            ( temp1088.fun ( &temp1088.env ,  ( (  pane918 ) ( (  ed3863 ) ) ) ,  ( (  selection998 ) ( ( (  pane918 ) ( (  ed3863 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            (*  ed3863 ) .f_pane .f_mode = ( Mode_95_Insert );
                                                        } else {
                                                            if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1091  temp1090 = ( (struct envunion1091){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_100 *  ) )copy_dash_selection_dash_to_dash_clipboard997 , .env =  env->envinst90 } );
                                                                ( temp1090.fun ( &temp1090.env ,  (  ed3863 ) ) );
                                                            } else {
                                                                if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1093 envinst1093 = {
                                                                        .envinst88 = env->envinst88 ,
                                                                        .ed3863 =  ed3863 ,
                                                                    };
                                                                    ( (  if_dash_just1092 ) ( ( ( * (  ed3863 ) ) .f_clipboard ) ,  ( (struct envunion1095){ .fun = (  enum Unit_6  (*) (  struct env1093*  ,    struct StrView_20  ) )lam1097 , .env =  envinst1093 } ) ) );
                                                                } else {
                                                                    if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1101 envinst1101 = {
                                                                            .envinst88 = env->envinst88 ,
                                                                            .ed3863 =  ed3863 ,
                                                                        };
                                                                        ( (  if_dash_just1100 ) ( ( ( * (  ed3863 ) ) .f_clipboard ) ,  ( (struct envunion1103){ .fun = (  enum Unit_6  (*) (  struct env1101*  ,    struct StrView_20  ) )lam1105 , .env =  envinst1101 } ) ) );
                                                                    } else {
                                                                        if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1109 envinst1109 = {
                                                                                .envinst88 = env->envinst88 ,
                                                                                .ed3863 =  ed3863 ,
                                                                            };
                                                                            ( (  if_dash_just1108 ) ( ( ( * (  ed3863 ) ) .f_clipboard ) ,  ( (struct envunion1111){ .fun = (  enum Unit_6  (*) (  struct env1109*  ,    struct StrView_20  ) )lam1113 , .env =  envinst1109 } ) ) );
                                                                        } else {
                                                                            if ( (  eq734 ( ( dref3866 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                (*  ed3863 ) .f_pane .f_mode = ( Mode_95_Select );
                                                                                if ( ( (  is_dash_none1115 ) ( ( ( ( * (  ed3863 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed3863 ) .f_pane .f_sel = ( ( Maybe_22_Just ) ( ( ( ( * (  ed3863 ) ) .f_pane ) .f_cursor ) ) );
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        if ( dref3866.tag == Key_106_Escape_t ) {
            (*  ed3863 ) .f_pane .f_mode = ( Mode_95_Normal );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add_dash_str_dash_at_dash_char1118 (   struct env80* env ,    struct Pane_94 *  self3814 ,    struct StrView_20  s3816 ) {
    struct Pos_19  cur3817 = ( ( * (  self3814 ) ) .f_cursor );
    struct envunion81  temp1119 = ( (struct envunion81){ .fun = (  struct Maybe_78  (*) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  ) )change1023 , .env =  env->envinst75 } );
    ( temp1119.fun ( &temp1119.env ,  ( ( * (  self3814 ) ) .f_buf ) ,  (  cur3817 ) ,  (  cur3817 ) ,  (  s3816 ) ,  ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_charlike1120 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

static  enum Unit_6   backspace1122 (   struct env82* env ,    struct Pane_94 *  self3820 ) {
    struct Pos_19  prev_dash_cur3821 = ( ( * (  self3820 ) ) .f_cursor );
    ( (  move_dash_left887 ) ( (  self3820 ) ) );
    struct envunion83  temp1123 = ( (struct envunion83){ .fun = (  struct Maybe_78  (*) (  struct env75*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_78  ) )change1023 , .env =  env->envinst75 } );
    ( temp1123.fun ( &temp1123.env ,  ( ( * (  self3820 ) ) .f_buf ) ,  ( ( * (  self3820 ) ) .f_cursor ) ,  (  prev_dash_cur3821 ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_78) { .tag = Maybe_78_None_t } ) ) );
    return ( Unit_6_Unit );
}

struct Array_1125 {
    char _arr [1];
};

static  char *   cast1126 (    struct Array_1125 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_750   as_dash_slice1124 (    struct Array_1125 *  arr2223 ) {
    return ( (struct Slice_750) { .f_ptr = ( (  cast1126 ) ( (  arr2223 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1125   from_dash_listlike1128 (    struct Array_1125  self330 ) {
    return (  self330 );
}

struct envunion1130 {
    enum Unit_6  (*fun) (  struct env80*  ,    struct Pane_94 *  ,    struct StrView_20  );
    struct env80 env;
};

static  enum Unit_6   handle_dash_key883 (   struct env102* env ,    struct Editor_100 *  ed3879 ,    struct Key_106  key3881 ) {
    enum Mode_95  dref3882 = ( ( ( * (  ed3879 ) ) .f_pane ) .f_mode );
    switch (  dref3882 ) {
        case Mode_95_Normal : {
            struct envunion885  temp884 = ( (struct envunion885){ .fun = (  enum Unit_6  (*) (  struct env92*  ,    struct Editor_100 *  ,    struct Key_106  ) )handle_dash_normal_dash_key886 , .env =  env->envinst92 } );
            ( temp884.fun ( &temp884.env ,  (  ed3879 ) ,  (  key3881 ) ) );
            break;
        }
        case Mode_95_Select : {
            struct envunion105  temp1116 = ( (struct envunion105){ .fun = (  enum Unit_6  (*) (  struct env92*  ,    struct Editor_100 *  ,    struct Key_106  ) )handle_dash_normal_dash_key886 , .env =  env->envinst92 } );
            ( temp1116.fun ( &temp1116.env ,  (  ed3879 ) ,  (  key3881 ) ) );
            break;
        }
        case Mode_95_Insert : {
            struct Key_106  dref3883 = (  key3881 );
            if ( dref3883.tag == Key_106_Escape_t ) {
                (*  ed3879 ) .f_pane .f_mode = ( Mode_95_Normal );
            }
            else {
                if ( dref3883.tag == Key_106_Enter_t ) {
                    struct envunion103  temp1117 = ( (struct envunion103){ .fun = (  enum Unit_6  (*) (  struct env80*  ,    struct Pane_94 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1118 , .env =  env->envinst80 } );
                    ( temp1117.fun ( &temp1117.env ,  ( (  pane918 ) ( (  ed3879 ) ) ) ,  ( (  from_dash_charlike1120 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                    ( (  move_dash_right919 ) ( ( (  pane918 ) ( (  ed3879 ) ) ) ) );
                }
                else {
                    if ( dref3883.tag == Key_106_Backspace_t ) {
                        struct envunion104  temp1121 = ( (struct envunion104){ .fun = (  enum Unit_6  (*) (  struct env82*  ,    struct Pane_94 *  ) )backspace1122 , .env =  env->envinst82 } );
                        ( temp1121.fun ( &temp1121.env ,  ( (  pane918 ) ( (  ed3879 ) ) ) ) );
                    }
                    else {
                        if ( dref3883.tag == Key_106_Char_t ) {
                            struct Array_1125  temp1127 = ( (  from_dash_listlike1128 ) ( ( (struct Array_1125) { ._arr = { ( dref3883 .stuff .Key_106_Char_s .field0 ) } } ) ) );
                            struct StrView_20  s3885 = ( (  from_dash_ascii_dash_slice765 ) ( ( (  as_dash_slice1124 ) ( ( &temp1127 ) ) ) ) );
                            struct envunion1130  temp1129 = ( (struct envunion1130){ .fun = (  enum Unit_6  (*) (  struct env80*  ,    struct Pane_94 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1118 , .env =  env->envinst80 } );
                            ( temp1129.fun ( &temp1129.env ,  ( (  pane918 ) ( (  ed3879 ) ) ) ,  (  s3885 ) ) );
                            ( (  move_dash_right919 ) ( ( (  pane918 ) ( (  ed3879 ) ) ) ) );
                        }
                    }
                }
            }
            break;
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1132 {
    bool  (*fun) (  struct env49*  ,    struct Screen_610 *  );
    struct env49 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1133 (   struct env49* env ,    struct Screen_610 *  screen3376 ) {
    struct Tui_45 *  tui3377 = ( ( * (  screen3376 ) ) .f_tui );
    struct envunion50  temp1134 = ( (struct envunion50){ .fun = (  bool  (*) (  struct env42*  ,    struct Tui_45 *  ) )update_dash_dimensions681 , .env =  env->envinst42 } );
    ( temp1134.fun ( &temp1134.env ,  (  tui3377 ) ) );
    if ( ( ! ( ( * (  tui3377 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen3376 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3378 = ( ( * ( ( * (  screen3376 ) ) .f_tui ) ) .f_width );
    uint32_t  h3379 = ( ( * ( ( * (  screen3376 ) ) .f_tui ) ) .f_height );
    size_t  nusz3380 = ( (  u32_dash_size624 ) ( (  op_dash_mul632 ( (  w3378 ) , (  h3379 ) ) ) ) );
    if ( (  cmp132 ( (  nusz3380 ) , ( ( ( * (  screen3376 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_610  nuscreen3381 = ( (  mk_dash_screen618 ) ( (  tui3377 ) ,  ( ( * (  screen3376 ) ) .f_al ) ) );
    (*  screen3376 ) .f_current = ( (  nuscreen3381 ) .f_current );
    (*  screen3376 ) .f_previous = ( (  nuscreen3381 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1135 (    struct Tui_45 *  tui3305 ) {
    bool  redraw3306 = ( ( * (  tui3305 ) ) .f_should_dash_redraw );
    (*  tui3305 ) .f_should_dash_redraw = ( false );
    return (  redraw3306 );
}

struct env1139 {
    struct Slice_611  s1881;
    struct Cell_612 (*  fun1883 )(    struct Cell_612  );
    ;
    ;
    ;
};

struct envunion1140 {
    enum Unit_6  (*fun) (  struct env1139*  ,    int32_t  );
    struct env1139 env;
};

static  enum Unit_6   for_dash_each1138 (    struct Range_635  iterable1055 ,   struct envunion1140  fun1057 ) {
    struct RangeIter_638  temp1141 = ( (  into_dash_iter640 ) ( (  iterable1055 ) ) );
    struct RangeIter_638 *  it1058 = ( &temp1141 );
    while ( ( true ) ) {
        struct Maybe_223  dref1059 = ( (  next641 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_223_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_223_Just_t ) {
                struct envunion1140  temp1142 = (  fun1057 );
                ( temp1142.fun ( &temp1142.env ,  ( dref1059 .stuff .Maybe_223_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1143 (   struct env1139* env ,    int32_t  i1885 ) {
    return ( (  set645 ) ( ( env->s1881 ) ,  ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ,  ( ( env->fun1883 ) ( (  elem_dash_get649 ( ( env->s1881 ) , ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map1137 (    struct Slice_611  s1881 ,    struct Cell_612 (*  fun1883 )(    struct Cell_612  ) ) {
    struct env1139 envinst1139 = {
        .s1881 =  s1881 ,
        .fun1883 =  fun1883 ,
    };
    ( (  for_dash_each1138 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( ( (  s1881 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1140){ .fun = (  enum Unit_6  (*) (  struct env1139*  ,    int32_t  ) )lam1143 , .env =  envinst1139 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_612   lam1144 (    struct Cell_612  dref3342 ) {
    return ( (  default_dash_cell657 ) ( ) );
}

static  enum Unit_6   clear_dash_screen1136 (    struct Screen_610 *  screen3341 ) {
    ( (  map1137 ) ( ( ( * (  screen3341 ) ) .f_current ) ,  (  lam1144 ) ) );
    return ( Unit_6_Unit );
}

struct AppendIter_1150 {
    struct StrViewIter_552  f_it;
    struct Char_141  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1150   into_dash_iter1151 (    struct AppendIter_1150  self1013 ) {
    return (  self1013 );
}

static  struct AppendIter_1150   append1152 (    struct StrViewIter_552  it1000 ,    struct Char_141  e1002 ) {
    return ( (struct AppendIter_1150) { .f_it = ( (  into_dash_iter554 ) ( (  it1000 ) ) ) , .f_elem = (  e1002 ) , .f_appended = ( false ) } );
}

static  struct Maybe_555   next1154 (    struct AppendIter_1150 *  self1016 ) {
    struct Maybe_555  dref1017 = ( (  next556 ) ( ( & ( ( * (  self1016 ) ) .f_it ) ) ) );
    if ( dref1017.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1017 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1017.tag == Maybe_555_None_t ) {
            if ( ( ! ( ( * (  self1016 ) ) .f_appended ) ) ) {
                (*  self1016 ) .f_appended = ( true );
                return ( ( Maybe_555_Just ) ( ( ( * (  self1016 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
        }
    }
}

static  int32_t   cast1156 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321155 (    uint32_t  x660 ) {
    return ( (  cast1156 ) ( (  x660 ) ) );
}

static  bool   between1158 (    struct Pos_19  c1318 ,    struct Pos_19  l1320 ,    struct Pos_19  r1322 ) {
    struct Pos_19  from1323 = ( (  min369 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Pos_19  to1324 = ( (  max372 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp370 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp370 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1157 (    struct Pane_94 *  pane3716 ,    struct Pos_19  pos3718 ) {
    return ( {  struct Maybe_22  dref3719 = ( ( * (  pane3716 ) ) .f_sel ) ; dref3719.tag == Maybe_22_Just_t ? ( (  between1158 ) ( (  pos3718 ) ,  ( ( * (  pane3716 ) ) .f_cursor ) ,  ( dref3719 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1160 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_6   put_dash_char1159 (    struct Screen_610 *  screen3422 ,    struct Char_141  c3424 ,    int32_t  x3426 ,    int32_t  y3428 ) {
    int32_t  w3429 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3422 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp371 ( (  x3426 ) , (  w3429 ) ) != 0 ) || (  cmp371 ( (  y3428 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3422 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp371 ( (  x3426 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) || (  cmp371 ( (  y3428 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    size_t  i3430 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3428 ) , (  w3429 ) ) ) , (  x3426 ) ) ) ) );
    struct Color_613  fg3431 = ( ( * (  screen3422 ) ) .f_default_dash_fg );
    struct Color_613  bg3432 = ( ( * (  screen3422 ) ) .f_default_dash_bg );
    struct Char_141  c3433 = (  c3424 );
    int32_t  char_dash_width3434 = ( (  wcwidth900 ) ( (  c3433 ) ) );
    ( (  set645 ) ( ( ( * (  screen3422 ) ) .f_current ) ,  (  i3430 ) ,  ( (struct Cell_612) { .f_c = (  c3433 ) , .f_fg = (  fg3431 ) , .f_bg = (  bg3432 ) , .f_char_dash_width = (  char_dash_width3434 ) } ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   tab_dash_width1162 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  size_t   i64_dash_size1165 (    int64_t  x624 ) {
    return ( (size_t ) (  x624 ) );
}

static  int32_t   pos_dash_si1164 (    struct TextBuf_62 *  self3678 ,    struct Pos_19  pos3680 ) {
    struct StrView_20  line3681 = ( (  line890 ) ( (  self3678 ) ,  ( (  pos3680 ) .f_line ) ) );
    uint8_t *  line_dash_ptr3682 = ( ( (  line3681 ) .f_contents ) .f_ptr );
    int64_t  bi3683 = ( (  from_dash_integral253 ( 0 ) ) );
    int32_t  si3684 = ( (  from_dash_integral38 ( 0 ) ) );
    while ( (  cmp132 ( ( (  i64_dash_size1165 ) ( (  bi3683 ) ) ) , ( (  num_dash_bytes889 ) ( (  line3681 ) ) ) ) == 0 ) ) {
        uint8_t *  cptr3685 = ( (  offset_dash_ptr275 ) ( (  line_dash_ptr3682 ) ,  (  bi3683 ) ) );
        size_t  off3686 = ( (  next_dash_char174 ) ( (  cptr3685 ) ) );
        bi3683 = (  op_dash_add808 ( (  bi3683 ) , ( (  size_dash_i64212 ) ( (  off3686 ) ) ) ) );
        if ( (  cmp371 ( ( (  i64_dash_i32811 ) ( (  bi3683 ) ) ) , ( (  pos3680 ) .f_bi ) ) == 2 ) ) {
            return (  si3684 );
        }
        struct Char_141  c3687 = ( (  scan_dash_from_dash_mem173 ) ( (  cptr3685 ) ) );
        si3684 = (  op_dash_add225 ( (  si3684 ) , ( (  eq349 ( (  c3687 ) , ( (  from_dash_charlike171 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ? ( (  tab_dash_width1162 ) ( ) ) : (  from_dash_integral38 ( 1 ) ) ) ) );
    }
    return (  si3684 );
}

struct Maybe_1167 {
    enum {
        Maybe_1167_None_t,
        Maybe_1167_Just_t,
    } tag;
    union {
        struct {
            struct Cell_612 *  field0;
        } Maybe_1167_Just_s;
    } stuff;
};

static struct Maybe_1167 Maybe_1167_Just (  struct Cell_612 *  field0 ) {
    return ( struct Maybe_1167 ) { .tag = Maybe_1167_Just_t, .stuff = { .Maybe_1167_Just_s = { .field0 = field0 } } };
};

static  enum Unit_6   if_dash_just1166 (    struct Maybe_1167  x1272 ,    enum Unit_6 (*  fun1274 )(    struct Cell_612 *  ) ) {
    struct Maybe_1167  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_1167_Just_t ) {
        ( (  fun1274 ) ( ( dref1275 .stuff .Maybe_1167_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_1167_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_1167   get_dash_cell_dash_ptr1168 (    struct Screen_610 *  screen3405 ,    int32_t  x3407 ,    int32_t  y3409 ) {
    int32_t  w3410 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3405 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp371 ( (  x3407 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  x3407 ) , (  w3410 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1167) { .tag = Maybe_1167_None_t } );
    }
    if ( ( (  cmp371 ( (  y3409 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  y3409 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3405 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1167) { .tag = Maybe_1167_None_t } );
    }
    size_t  i3411 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3409 ) , (  w3410 ) ) ) , (  x3407 ) ) ) ) );
    return ( ( Maybe_1167_Just ) ( ( (  get_dash_ptr646 ) ( ( ( * (  screen3405 ) ) .f_current ) ,  (  i3411 ) ) ) ) );
}

static  enum Unit_6   lam1169 (    struct Cell_612 *  curcell3741 ) {
    (*  curcell3741 ) .f_fg = ( ( Color_613_Color8 ) ( ( Color8_614_Black8 ) ) );
    (*  curcell3741 ) .f_bg = ( ( Color_613_Color8 ) ( ( Color8_614_White8 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   if_dash_just1172 (    struct Maybe_1167  x1272 ,    enum Unit_6 (*  fun1274 )(    struct Cell_612 *  ) ) {
    struct Maybe_1167  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_1167_Just_t ) {
        ( (  fun1274 ) ( ( dref1275 .stuff .Maybe_1167_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_1167_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1173 (    struct Cell_612 *  curcell3745 ) {
    (*  curcell3745 ) .f_fg = ( ( Color_613_Color8 ) ( ( Color8_614_Black8 ) ) );
    (*  curcell3745 ) .f_bg = ( ( Color_613_Color8 ) ( ( Color8_614_White8 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render1146 (    struct Screen_610 *  screen3723 ,    struct Pane_94 *  pane3725 ) {
    struct RangeIter_638  temp1147 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  num_dash_lines921 ) ( ( ( * (  pane3725 ) ) .f_buf ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond1148 =  next641 (&temp1147);
        if (  __cond1148 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3727 =  __cond1148 .stuff .Maybe_223_Just_s .field0;
        int32_t  y3728 = (  op_dash_sub760 ( (  line_dash_num3727 ) , (  from_dash_integral38 ( 1 ) ) ) );
        struct StrView_20  line_dash_content3729 = ( (  line890 ) ( ( ( * (  pane3725 ) ) .f_buf ) ,  (  y3728 ) ) );
        int32_t  xbi3730 = (  from_dash_integral38 ( 0 ) );
        int32_t  xs3731 = (  from_dash_integral38 ( 0 ) );
        struct AppendIter_1150  temp1149 =  into_dash_iter1151 ( ( (  append1152 ) ( ( (  chars557 ) ( (  line_dash_content3729 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_555  __cond1153 =  next1154 (&temp1149);
            if (  __cond1153 .tag == 0 ) {
                break;
            }
            struct Char_141  c3733 =  __cond1153 .stuff .Maybe_555_Just_s .field0;
            if ( (  cmp371 ( (  xs3731 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3723 ) ) .f_tui ) ) .f_width ) ) ) ) == 2 ) ) {
                break;
            }
            bool  in_dash_selection3734 = ( (  is_dash_in_dash_selection1157 ) ( (  pane3725 ) ,  ( (  mk452 ) ( (  y3728 ) ,  (  xbi3730 ) ) ) ) );
            if ( (  in_dash_selection3734 ) ) {
                (*  screen3723 ) .f_default_dash_bg = ( ( Color_613_Color8 ) ( ( Color8_614_Cyan8 ) ) );
            }
            if ( ( !  eq349 ( (  c3733 ) , ( (  from_dash_charlike171 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  put_dash_char1159 ) ( (  screen3723 ) ,  (  c3733 ) ,  (  xs3731 ) ,  (  y3728 ) ) );
                xs3731 = (  op_dash_add225 ( (  xs3731 ) , (  from_dash_integral38 ( 1 ) ) ) );
            } else {
                struct RangeIter_638  temp1161 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( ( (  tab_dash_width1162 ) ( ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_223  __cond1163 =  next641 (&temp1161);
                    if (  __cond1163 .tag == 0 ) {
                        break;
                    }
                    int32_t  off3736 =  __cond1163 .stuff .Maybe_223_Just_s .field0;
                    ( (  put_dash_char1159 ) ( (  screen3723 ) ,  ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) ,  (  op_dash_add225 ( (  xs3731 ) , (  off3736 ) ) ) ,  (  y3728 ) ) );
                }
                xs3731 = (  op_dash_add225 ( (  xs3731 ) , ( (  tab_dash_width1162 ) ( ) ) ) );
            }
            if ( (  in_dash_selection3734 ) ) {
                (*  screen3723 ) .f_default_dash_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } );
            }
            xbi3730 = (  op_dash_add225 ( (  xbi3730 ) , ( (  size_dash_i32147 ) ( ( (  c3733 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    struct Pos_19  cursor3737 = ( ( * (  pane3725 ) ) .f_cursor );
    struct Char_141  cursor_dash_char3738 = ( (  char_dash_at951 ) ( (  pane3725 ) ,  (  cursor3737 ) ) );
    int32_t  cursor_dash_si3739 = ( (  pos_dash_si1164 ) ( ( ( * (  pane3725 ) ) .f_buf ) ,  (  cursor3737 ) ) );
    if ( ( !  eq349 ( (  cursor_dash_char3738 ) , ( (  from_dash_charlike171 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        ( (  if_dash_just1166 ) ( ( (  get_dash_cell_dash_ptr1168 ) ( (  screen3723 ) ,  (  cursor_dash_si3739 ) ,  ( ( ( * (  pane3725 ) ) .f_cursor ) .f_line ) ) ) ,  (  lam1169 ) ) );
    } else {
        struct RangeIter_638  temp1170 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( ( (  tab_dash_width1162 ) ( ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_223  __cond1171 =  next641 (&temp1170);
            if (  __cond1171 .tag == 0 ) {
                break;
            }
            int32_t  off3743 =  __cond1171 .stuff .Maybe_223_Just_s .field0;
            ( (  if_dash_just1172 ) ( ( (  get_dash_cell_dash_ptr1168 ) ( (  screen3723 ) ,  (  op_dash_add225 ( (  cursor_dash_si3739 ) , (  off3743 ) ) ) ,  ( ( ( * (  pane3725 ) ) .f_cursor ) .f_line ) ) ) ,  (  lam1173 ) ) );
        }
    }
    return ( Unit_6_Unit );
}

struct env1175 {
    struct Screen_610 *  screen3888;
    ;
    ;
    ;
    ;
    ;
    int32_t *  curline3891;
    ;
};

struct env1176 {
    struct Screen_610 *  screen3888;
    ;
    ;
    ;
    ;
    ;
    int32_t *  curline3891;
    ;
};

struct env1177 {
    struct Screen_610 *  screen3888;
    ;
    ;
    ;
    ;
    ;
    int32_t *  curline3891;
    ;
};

struct env1178 {
    struct Screen_610 *  screen3888;
    ;
    ;
    ;
    ;
    ;
    int32_t *  curline3891;
    ;
};

struct StrConcat_1181 {
    struct StrView_20  field0;
    enum Mode_95  field1;
};

static struct StrConcat_1181 StrConcat_1181_StrConcat (  struct StrView_20  field0 ,  enum Mode_95  field1 ) {
    return ( struct StrConcat_1181 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1180 {
    enum Unit_6  (*fun) (  struct env1175*  ,    struct StrConcat_1181  );
    struct env1175 env;
};

struct StrConcatIter_1185 {
    struct StrViewIter_552  f_left;
    struct StrViewIter_552  f_right;
};

static  struct StrConcatIter_1185   into_dash_iter1187 (    struct StrConcatIter_1185  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1188 (    struct StrConcatIter_1185 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1186 (    struct StrConcatIter_1185  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1185  it1080 = ( (  into_dash_iter1187 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1188 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1189 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1189);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1190;
    return (  temp1190 );
}

static  size_t   lam1191 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1184 (    struct StrConcatIter_1185  it1085 ) {
    return ( (  reduce1186 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1191 ) ) );
}

static  struct StrView_20   todo1195 (  ) {
    ( (  print959 ) ( ( (  from_dash_string170 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined465 ) ( ) );
}

static  struct StrViewIter_552   chars1194 (    enum Mode_95  self3667 ) {
    return ( (  chars557 ) ( ( {  enum Mode_95  dref3668 = (  self3667 ) ;  dref3668 == Mode_95_Normal ? ( (  from_dash_string170 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3668 == Mode_95_Insert ? ( (  from_dash_string170 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3668 == Mode_95_Select ? ( (  from_dash_string170 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1195 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1185   into_dash_iter1193 (    struct StrConcat_1181  dref1479 ) {
    return ( (struct StrConcatIter_1185) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1194 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1185   chars1192 (    struct StrConcat_1181  self1490 ) {
    return ( (  into_dash_iter1193 ) ( (  self1490 ) ) );
}

struct Zip_1198 {
    struct StrConcatIter_1185  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1199 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct Tuple2_1201 {
    struct Char_141  field0;
    int32_t  field1;
};

static struct Tuple2_1201 Tuple2_1201_Tuple2 (  struct Char_141  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1201 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1200 {
    enum Unit_6  (*fun) (  struct env1199*  ,    struct Tuple2_1201  );
    struct env1199 env;
};

static  struct Zip_1198   into_dash_iter1203 (    struct Zip_1198  self905 ) {
    return (  self905 );
}

struct Maybe_1204 {
    enum {
        Maybe_1204_None_t,
        Maybe_1204_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1201  field0;
        } Maybe_1204_Just_s;
    } stuff;
};

static struct Maybe_1204 Maybe_1204_Just (  struct Tuple2_1201  field0 ) {
    return ( struct Maybe_1204 ) { .tag = Maybe_1204_Just_t, .stuff = { .Maybe_1204_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1204   next1205 (    struct Zip_1198 *  self908 ) {
    struct Zip_1198  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1188 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1188 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1204_Just ) ( ( ( Tuple2_1201_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1197 (    struct Zip_1198  iterable1055 ,   struct envunion1200  fun1057 ) {
    struct Zip_1198  temp1202 = ( (  into_dash_iter1203 ) ( (  iterable1055 ) ) );
    struct Zip_1198 *  it1058 = ( &temp1202 );
    while ( ( true ) ) {
        struct Maybe_1204  dref1059 = ( (  next1205 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1204_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1204_Just_t ) {
                struct envunion1200  temp1206 = (  fun1057 );
                ( temp1206.fun ( &temp1206.env ,  ( dref1059 .stuff .Maybe_1204_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1198   zip1207 (    struct StrConcatIter_1185  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1185  left_dash_it919 = ( (  into_dash_iter1187 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1198) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1208 (   struct env1199* env ,    struct Tuple2_1201  dref3448 ) {
    ( (  put_dash_char1159 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1196 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1181  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp371 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  y3443 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min417 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1199 envinst1199 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1197 ) ( ( (  zip1207 ) ( ( (  chars1192 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1200){ .fun = (  enum Unit_6  (*) (  struct env1199*  ,    struct Tuple2_1201  ) )lam1208 , .env =  envinst1199 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1183 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1181  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1184 ) ( ( (  chars1192 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1196 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1182 (   struct env1175* env ,    struct StrConcat_1181  s3894 ) {
    ( (  draw_dash_str_dash_right1183 ) ( ( env->screen3888 ) ,  (  s3894 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3891 ) ) ) );
    (* env->curline3891 ) = (  op_dash_add225 ( ( * ( env->curline3891 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1213 {
    struct StrView_20  field0;
    struct Pos_19  field1;
};

static struct StrConcat_1213 StrConcat_1213_StrConcat (  struct StrView_20  field0 ,  struct Pos_19  field1 ) {
    return ( struct StrConcat_1213 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1212 {
    struct StrConcat_1213  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1212 StrConcat_1212_StrConcat (  struct StrConcat_1213  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1212 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1211 {
    struct StrConcat_1212  field0;
    enum CharType_941  field1;
};

static struct StrConcat_1211 StrConcat_1211_StrConcat (  struct StrConcat_1212  field0 ,  enum CharType_941  field1 ) {
    return ( struct StrConcat_1211 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1210 {
    enum Unit_6  (*fun) (  struct env1176*  ,    struct StrConcat_1211  );
    struct env1176 env;
};

struct IntStrIter_1224 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1223 {
    struct AppendIter_822  f_left;
    struct IntStrIter_1224  f_right;
};

struct StrConcatIter_1222 {
    struct StrConcatIter_1223  f_left;
    struct StrViewIter_552  f_right;
};

struct StrConcatIter_1221 {
    struct StrConcatIter_1222  f_left;
    struct IntStrIter_1224  f_right;
};

struct StrConcatIter_1220 {
    struct StrConcatIter_1221  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1219 {
    struct StrViewIter_552  f_left;
    struct StrConcatIter_1220  f_right;
};

struct StrConcatIter_1218 {
    struct StrConcatIter_1219  f_left;
    struct StrViewIter_552  f_right;
};

struct StrConcatIter_1217 {
    struct StrConcatIter_1218  f_left;
    struct StrViewIter_552  f_right;
};

static  struct StrConcatIter_1217   into_dash_iter1226 (    struct StrConcatIter_1217  self1472 ) {
    return (  self1472 );
}

struct env1237 {
    ;
    int32_t  base1191;
};

struct envunion1238 {
    int32_t  (*fun) (  struct env1237*  ,    int32_t  ,    int32_t  );
    struct env1237 env;
};

static  int32_t   reduce1236 (    struct Range_635  iterable1074 ,    int32_t  base1076 ,   struct envunion1238  fun1078 ) {
    int32_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1238  temp1239 = (  fun1078 );
                x1079 = ( temp1239.fun ( &temp1239.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1240 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1240);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1241;
    return (  temp1241 );
}

static  int32_t   lam1242 (   struct env1237* env ,    int32_t  item1195 ,    int32_t  x1197 ) {
    return (  op_dash_mul1160 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  int32_t   pow1235 (    int32_t  base1191 ,    int32_t  p1193 ) {
    struct env1237 envinst1237 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1236 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  ( (struct envunion1238){ .fun = (  int32_t  (*) (  struct env1237*  ,    int32_t  ,    int32_t  ) )lam1242 , .env =  envinst1237 } ) ) );
}

static  int32_t   op_dash_div1243 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1244 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_555   next1234 (    struct IntStrIter_1224 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp371 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    int32_t  trim_dash_down1404 = ( (  pow1235 ) ( (  from_dash_integral38 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int32_t  upper1405 = (  op_dash_div1243 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    int32_t  upper_dash_mask1406 = (  op_dash_mul1160 ( (  op_dash_div1243 ( (  upper1405 ) , (  from_dash_integral38 ( 10 ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1244 ) ( (  op_dash_sub760 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1233 (    struct StrConcatIter_1223 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1234 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1232 (    struct StrConcatIter_1222 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1233 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1231 (    struct StrConcatIter_1221 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1232 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1234 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1230 (    struct StrConcatIter_1220 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1231 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1229 (    struct StrConcatIter_1219 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1230 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1228 (    struct StrConcatIter_1218 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1229 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1227 (    struct StrConcatIter_1217 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1228 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1225 (    struct StrConcatIter_1217  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1217  it1080 = ( (  into_dash_iter1226 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1227 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1245 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1245);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1246;
    return (  temp1246 );
}

static  size_t   lam1247 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1216 (    struct StrConcatIter_1217  it1085 ) {
    return ( (  reduce1225 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1247 ) ) );
}

struct StrConcat_1259 {
    struct Char_141  field0;
    int32_t  field1;
};

static struct StrConcat_1259 StrConcat_1259_StrConcat (  struct Char_141  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1259 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1258 {
    struct StrConcat_1259  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1258 StrConcat_1258_StrConcat (  struct StrConcat_1259  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1258 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1257 {
    struct StrConcat_1258  field0;
    int32_t  field1;
};

static struct StrConcat_1257 StrConcat_1257_StrConcat (  struct StrConcat_1258  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1257 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1256 {
    struct StrConcat_1257  field0;
    struct Char_141  field1;
};

static struct StrConcat_1256 StrConcat_1256_StrConcat (  struct StrConcat_1257  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1256 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1269 (    int32_t  self1411 ) {
    if ( (  eq266 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp371 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1243 ( (  self1411 ) , (  from_dash_integral38 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1224   int_dash_iter1268 (    int32_t  int1415 ) {
    if ( (  cmp371 ( (  int1415 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1224) { .f_int = (  op_dash_neg585 ( (  int1415 ) ) ) , .f_len = ( (  count_dash_digits1269 ) ( (  op_dash_neg585 ( (  int1415 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1224) { .f_int = (  int1415 ) , .f_len = ( (  count_dash_digits1269 ) ( (  int1415 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1224   chars1267 (    int32_t  self1424 ) {
    return ( (  int_dash_iter1268 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_1223   into_dash_iter1266 (    struct StrConcat_1259  dref1479 ) {
    return ( (struct StrConcatIter_1223) { .f_left = ( (  chars862 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1267 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1223   chars1265 (    struct StrConcat_1259  self1490 ) {
    return ( (  into_dash_iter1266 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1222   into_dash_iter1264 (    struct StrConcat_1258  dref1479 ) {
    return ( (struct StrConcatIter_1222) { .f_left = ( (  chars1265 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1222   chars1263 (    struct StrConcat_1258  self1490 ) {
    return ( (  into_dash_iter1264 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1221   into_dash_iter1262 (    struct StrConcat_1257  dref1479 ) {
    return ( (struct StrConcatIter_1221) { .f_left = ( (  chars1263 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1267 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1221   chars1261 (    struct StrConcat_1257  self1490 ) {
    return ( (  into_dash_iter1262 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1220   into_dash_iter1260 (    struct StrConcat_1256  dref1479 ) {
    return ( (struct StrConcatIter_1220) { .f_left = ( (  chars1261 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1220   chars1255 (    struct StrConcat_1256  self1490 ) {
    return ( (  into_dash_iter1260 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1220   chars1254 (    struct Pos_19  self3494 ) {
    return ( (  chars1255 ) ( ( ( StrConcat_1256_StrConcat ) ( ( ( StrConcat_1257_StrConcat ) ( ( ( StrConcat_1258_StrConcat ) ( ( ( StrConcat_1259_StrConcat ) ( ( (  from_dash_charlike171 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3494 ) .f_line ) ) ) ,  ( (  from_dash_string170 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3494 ) .f_bi ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1219   into_dash_iter1253 (    struct StrConcat_1213  dref1479 ) {
    return ( (struct StrConcatIter_1219) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1254 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1219   chars1252 (    struct StrConcat_1213  self1490 ) {
    return ( (  into_dash_iter1253 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1218   into_dash_iter1251 (    struct StrConcat_1212  dref1479 ) {
    return ( (struct StrConcatIter_1218) { .f_left = ( (  chars1252 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1218   chars1250 (    struct StrConcat_1212  self1490 ) {
    return ( (  into_dash_iter1251 ) ( (  self1490 ) ) );
}

static  struct StrViewIter_552   chars1270 (    enum CharType_941  self3656 ) {
    return ( (  chars557 ) ( ( {  enum CharType_941  dref3657 = (  self3656 ) ;  dref3657 == CharType_941_CharPunctuation ? ( (  from_dash_string170 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3657 == CharType_941_CharWord ? ( (  from_dash_string170 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3657 == CharType_941_CharSpace ? ( (  from_dash_string170 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1195 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1217   into_dash_iter1249 (    struct StrConcat_1211  dref1479 ) {
    return ( (struct StrConcatIter_1217) { .f_left = ( (  chars1250 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1270 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1217   chars1248 (    struct StrConcat_1211  self1490 ) {
    return ( (  into_dash_iter1249 ) ( (  self1490 ) ) );
}

struct Zip_1273 {
    struct StrConcatIter_1217  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1274 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1275 {
    enum Unit_6  (*fun) (  struct env1274*  ,    struct Tuple2_1201  );
    struct env1274 env;
};

static  struct Zip_1273   into_dash_iter1277 (    struct Zip_1273  self905 ) {
    return (  self905 );
}

static  struct Maybe_1204   next1278 (    struct Zip_1273 *  self908 ) {
    struct Zip_1273  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1227 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1227 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1204_Just ) ( ( ( Tuple2_1201_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1272 (    struct Zip_1273  iterable1055 ,   struct envunion1275  fun1057 ) {
    struct Zip_1273  temp1276 = ( (  into_dash_iter1277 ) ( (  iterable1055 ) ) );
    struct Zip_1273 *  it1058 = ( &temp1276 );
    while ( ( true ) ) {
        struct Maybe_1204  dref1059 = ( (  next1278 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1204_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1204_Just_t ) {
                struct envunion1275  temp1279 = (  fun1057 );
                ( temp1279.fun ( &temp1279.env ,  ( dref1059 .stuff .Maybe_1204_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1273   zip1280 (    struct StrConcatIter_1217  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1217  left_dash_it919 = ( (  into_dash_iter1226 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1273) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1281 (   struct env1274* env ,    struct Tuple2_1201  dref3448 ) {
    ( (  put_dash_char1159 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1271 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1211  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp371 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  y3443 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min417 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1274 envinst1274 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1272 ) ( ( (  zip1280 ) ( ( (  chars1248 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1275){ .fun = (  enum Unit_6  (*) (  struct env1274*  ,    struct Tuple2_1201  ) )lam1281 , .env =  envinst1274 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1215 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1211  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1216 ) ( ( (  chars1248 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1271 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1214 (   struct env1176* env ,    struct StrConcat_1211  s3894 ) {
    ( (  draw_dash_str_dash_right1215 ) ( ( env->screen3888 ) ,  (  s3894 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3891 ) ) ) );
    (* env->curline3891 ) = (  op_dash_add225 ( ( * ( env->curline3891 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1284 {
    struct StrView_20  field0;
    struct Maybe_22  field1;
};

static struct StrConcat_1284 StrConcat_1284_StrConcat (  struct StrView_20  field0 ,  struct Maybe_22  field1 ) {
    return ( struct StrConcat_1284 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1283 {
    enum Unit_6  (*fun) (  struct env1177*  ,    struct StrConcat_1284  );
    struct env1177 env;
};

struct StrConcatIter_1290 {
    struct StrConcatIter_1219  f_left;
    struct AppendIter_822  f_right;
};

struct StrCaseIter_1289 {
    enum {
        StrCaseIter_1289_StrCaseIter1_t,
        StrCaseIter_1289_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_552  field0;
        } StrCaseIter_1289_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1290  field0;
        } StrCaseIter_1289_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1289 StrCaseIter_1289_StrCaseIter1 (  struct StrViewIter_552  field0 ) {
    return ( struct StrCaseIter_1289 ) { .tag = StrCaseIter_1289_StrCaseIter1_t, .stuff = { .StrCaseIter_1289_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1289 StrCaseIter_1289_StrCaseIter2 (  struct StrConcatIter_1290  field0 ) {
    return ( struct StrCaseIter_1289 ) { .tag = StrCaseIter_1289_StrCaseIter2_t, .stuff = { .StrCaseIter_1289_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1288 {
    struct StrViewIter_552  f_left;
    struct StrCaseIter_1289  f_right;
};

static  struct StrConcatIter_1288   into_dash_iter1292 (    struct StrConcatIter_1288  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1295 (    struct StrConcatIter_1290 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1229 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1294 (    struct StrCaseIter_1289 *  self1497 ) {
    struct StrCaseIter_1289 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1289_StrCaseIter1_t ) {
        return ( (  next556 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1289_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1289_StrCaseIter2_t ) {
            return ( (  next1295 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1289_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_555   next1293 (    struct StrConcatIter_1288 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1294 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1291 (    struct StrConcatIter_1288  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1288  it1080 = ( (  into_dash_iter1292 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1293 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1296 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1296);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1297;
    return (  temp1297 );
}

static  size_t   lam1298 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1287 (    struct StrConcatIter_1288  it1085 ) {
    return ( (  reduce1291 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1298 ) ) );
}

struct StrConcat_1303 {
    struct StrConcat_1213  field0;
    struct Char_141  field1;
};

static struct StrConcat_1303 StrConcat_1303_StrConcat (  struct StrConcat_1213  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1303 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1302 {
    enum {
        StrCase_1302_StrCase1_t,
        StrCase_1302_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1302_StrCase1_s;
        struct {
            struct StrConcat_1303  field0;
        } StrCase_1302_StrCase2_s;
    } stuff;
};

static struct StrCase_1302 StrCase_1302_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1302 ) { .tag = StrCase_1302_StrCase1_t, .stuff = { .StrCase_1302_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1302 StrCase_1302_StrCase2 (  struct StrConcat_1303  field0 ) {
    return ( struct StrCase_1302 ) { .tag = StrCase_1302_StrCase2_t, .stuff = { .StrCase_1302_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1290   into_dash_iter1308 (    struct StrConcat_1303  dref1479 ) {
    return ( (struct StrConcatIter_1290) { .f_left = ( (  chars1252 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1290   chars1307 (    struct StrConcat_1303  self1490 ) {
    return ( (  into_dash_iter1308 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1289   into_dash_iter1306 (    struct StrCase_1302  self1503 ) {
    struct StrCase_1302  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1302_StrCase1_t ) {
        return ( ( StrCaseIter_1289_StrCaseIter1 ) ( ( (  chars557 ) ( ( dref1504 .stuff .StrCase_1302_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1302_StrCase2_t ) {
            return ( ( StrCaseIter_1289_StrCaseIter2 ) ( ( (  chars1307 ) ( ( dref1504 .stuff .StrCase_1302_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1289   chars1305 (    struct StrCase_1302  self1515 ) {
    return ( (  into_dash_iter1306 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1289   chars1301 (    struct Maybe_22  self1529 ) {
    struct StrCase_1302  temp1304;
    struct StrCase_1302  c1530 = (  temp1304 );
    struct Maybe_22  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_22_None_t ) {
        c1530 = ( ( StrCase_1302_StrCase1 ) ( ( (  from_dash_string170 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_22_Just_t ) {
            c1530 = ( ( StrCase_1302_StrCase2 ) ( ( ( StrConcat_1303_StrConcat ) ( ( ( StrConcat_1213_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_22_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1305 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1288   into_dash_iter1300 (    struct StrConcat_1284  dref1479 ) {
    return ( (struct StrConcatIter_1288) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1301 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1288   chars1299 (    struct StrConcat_1284  self1490 ) {
    return ( (  into_dash_iter1300 ) ( (  self1490 ) ) );
}

struct Zip_1311 {
    struct StrConcatIter_1288  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1312 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1313 {
    enum Unit_6  (*fun) (  struct env1312*  ,    struct Tuple2_1201  );
    struct env1312 env;
};

static  struct Zip_1311   into_dash_iter1315 (    struct Zip_1311  self905 ) {
    return (  self905 );
}

static  struct Maybe_1204   next1316 (    struct Zip_1311 *  self908 ) {
    struct Zip_1311  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1293 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1293 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1204_Just ) ( ( ( Tuple2_1201_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1310 (    struct Zip_1311  iterable1055 ,   struct envunion1313  fun1057 ) {
    struct Zip_1311  temp1314 = ( (  into_dash_iter1315 ) ( (  iterable1055 ) ) );
    struct Zip_1311 *  it1058 = ( &temp1314 );
    while ( ( true ) ) {
        struct Maybe_1204  dref1059 = ( (  next1316 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1204_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1204_Just_t ) {
                struct envunion1313  temp1317 = (  fun1057 );
                ( temp1317.fun ( &temp1317.env ,  ( dref1059 .stuff .Maybe_1204_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1311   zip1318 (    struct StrConcatIter_1288  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1288  left_dash_it919 = ( (  into_dash_iter1292 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1311) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1319 (   struct env1312* env ,    struct Tuple2_1201  dref3448 ) {
    ( (  put_dash_char1159 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1309 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1284  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp371 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  y3443 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min417 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1312 envinst1312 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1310 ) ( ( (  zip1318 ) ( ( (  chars1299 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1313){ .fun = (  enum Unit_6  (*) (  struct env1312*  ,    struct Tuple2_1201  ) )lam1319 , .env =  envinst1312 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1286 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1284  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1287 ) ( ( (  chars1299 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1309 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1285 (   struct env1177* env ,    struct StrConcat_1284  s3894 ) {
    ( (  draw_dash_str_dash_right1286 ) ( ( env->screen3888 ) ,  (  s3894 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3891 ) ) ) );
    (* env->curline3891 ) = (  op_dash_add225 ( ( * ( env->curline3891 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1322 {
    struct StrView_20  field0;
    struct Maybe_101  field1;
};

static struct StrConcat_1322 StrConcat_1322_StrConcat (  struct StrView_20  field0 ,  struct Maybe_101  field1 ) {
    return ( struct StrConcat_1322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1321 {
    enum Unit_6  (*fun) (  struct env1178*  ,    struct StrConcat_1322  );
    struct env1178 env;
};

struct StrConcatIter_1328 {
    struct StrConcatIter_1185  f_left;
    struct AppendIter_822  f_right;
};

struct StrCaseIter_1327 {
    enum {
        StrCaseIter_1327_StrCaseIter1_t,
        StrCaseIter_1327_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_552  field0;
        } StrCaseIter_1327_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1328  field0;
        } StrCaseIter_1327_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1327 StrCaseIter_1327_StrCaseIter1 (  struct StrViewIter_552  field0 ) {
    return ( struct StrCaseIter_1327 ) { .tag = StrCaseIter_1327_StrCaseIter1_t, .stuff = { .StrCaseIter_1327_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1327 StrCaseIter_1327_StrCaseIter2 (  struct StrConcatIter_1328  field0 ) {
    return ( struct StrCaseIter_1327 ) { .tag = StrCaseIter_1327_StrCaseIter2_t, .stuff = { .StrCaseIter_1327_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1326 {
    struct StrViewIter_552  f_left;
    struct StrCaseIter_1327  f_right;
};

static  struct StrConcatIter_1326   into_dash_iter1330 (    struct StrConcatIter_1326  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1333 (    struct StrConcatIter_1328 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1188 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1332 (    struct StrCaseIter_1327 *  self1497 ) {
    struct StrCaseIter_1327 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1327_StrCaseIter1_t ) {
        return ( (  next556 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1327_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1327_StrCaseIter2_t ) {
            return ( (  next1333 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1327_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_555   next1331 (    struct StrConcatIter_1326 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1332 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1329 (    struct StrConcatIter_1326  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1326  it1080 = ( (  into_dash_iter1330 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1331 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1334 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1334);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1335;
    return (  temp1335 );
}

static  size_t   lam1336 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1325 (    struct StrConcatIter_1326  it1085 ) {
    return ( (  reduce1329 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1336 ) ) );
}

struct StrCase_1340 {
    enum {
        StrCase_1340_StrCase1_t,
        StrCase_1340_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1340_StrCase1_s;
        struct {
            struct StrConcat_427  field0;
        } StrCase_1340_StrCase2_s;
    } stuff;
};

static struct StrCase_1340 StrCase_1340_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1340 ) { .tag = StrCase_1340_StrCase1_t, .stuff = { .StrCase_1340_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1340 StrCase_1340_StrCase2 (  struct StrConcat_427  field0 ) {
    return ( struct StrCase_1340 ) { .tag = StrCase_1340_StrCase2_t, .stuff = { .StrCase_1340_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1185   into_dash_iter1347 (    struct StrConcat_428  dref1479 ) {
    return ( (struct StrConcatIter_1185) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1185   chars1346 (    struct StrConcat_428  self1490 ) {
    return ( (  into_dash_iter1347 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1328   into_dash_iter1345 (    struct StrConcat_427  dref1479 ) {
    return ( (struct StrConcatIter_1328) { .f_left = ( (  chars1346 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1328   chars1344 (    struct StrConcat_427  self1490 ) {
    return ( (  into_dash_iter1345 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1327   into_dash_iter1343 (    struct StrCase_1340  self1503 ) {
    struct StrCase_1340  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1340_StrCase1_t ) {
        return ( ( StrCaseIter_1327_StrCaseIter1 ) ( ( (  chars557 ) ( ( dref1504 .stuff .StrCase_1340_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1340_StrCase2_t ) {
            return ( ( StrCaseIter_1327_StrCaseIter2 ) ( ( (  chars1344 ) ( ( dref1504 .stuff .StrCase_1340_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1327   chars1342 (    struct StrCase_1340  self1515 ) {
    return ( (  into_dash_iter1343 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1327   chars1339 (    struct Maybe_101  self1529 ) {
    struct StrCase_1340  temp1341;
    struct StrCase_1340  c1530 = (  temp1341 );
    struct Maybe_101  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_101_None_t ) {
        c1530 = ( ( StrCase_1340_StrCase1 ) ( ( (  from_dash_string170 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_101_Just_t ) {
            c1530 = ( ( StrCase_1340_StrCase2 ) ( ( ( StrConcat_427_StrConcat ) ( ( ( StrConcat_428_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_101_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1342 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1326   into_dash_iter1338 (    struct StrConcat_1322  dref1479 ) {
    return ( (struct StrConcatIter_1326) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1339 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1326   chars1337 (    struct StrConcat_1322  self1490 ) {
    return ( (  into_dash_iter1338 ) ( (  self1490 ) ) );
}

struct Zip_1350 {
    struct StrConcatIter_1326  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1351 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1352 {
    enum Unit_6  (*fun) (  struct env1351*  ,    struct Tuple2_1201  );
    struct env1351 env;
};

static  struct Zip_1350   into_dash_iter1354 (    struct Zip_1350  self905 ) {
    return (  self905 );
}

static  struct Maybe_1204   next1355 (    struct Zip_1350 *  self908 ) {
    struct Zip_1350  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1331 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1204) { .tag = Maybe_1204_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1331 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1204_Just ) ( ( ( Tuple2_1201_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1349 (    struct Zip_1350  iterable1055 ,   struct envunion1352  fun1057 ) {
    struct Zip_1350  temp1353 = ( (  into_dash_iter1354 ) ( (  iterable1055 ) ) );
    struct Zip_1350 *  it1058 = ( &temp1353 );
    while ( ( true ) ) {
        struct Maybe_1204  dref1059 = ( (  next1355 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1204_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1204_Just_t ) {
                struct envunion1352  temp1356 = (  fun1057 );
                ( temp1356.fun ( &temp1356.env ,  ( dref1059 .stuff .Maybe_1204_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1350   zip1357 (    struct StrConcatIter_1326  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1326  left_dash_it919 = ( (  into_dash_iter1330 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1350) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1358 (   struct env1351* env ,    struct Tuple2_1201  dref3448 ) {
    ( (  put_dash_char1159 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1348 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1322  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp371 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp371 ( (  y3443 ) , ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min417 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1351 envinst1351 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1349 ) ( ( (  zip1357 ) ( ( (  chars1337 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1352){ .fun = (  enum Unit_6  (*) (  struct env1351*  ,    struct Tuple2_1201  ) )lam1358 , .env =  envinst1351 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1324 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1322  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1325 ) ( ( (  chars1337 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1348 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1323 (   struct env1178* env ,    struct StrConcat_1322  s3894 ) {
    ( (  draw_dash_str_dash_right1324 ) ( ( env->screen3888 ) ,  (  s3894 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3891 ) ) ) );
    (* env->curline3891 ) = (  op_dash_add225 ( ( * ( env->curline3891 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render_dash_editor1145 (    struct Screen_610 *  screen3888 ,    struct Editor_100 *  ed3890 ) {
    ( (  render1146 ) ( (  screen3888 ) ,  ( (  pane918 ) ( (  ed3890 ) ) ) ) );
    int32_t  temp1174 = (  from_dash_integral38 ( 0 ) );
    int32_t *  curline3891 = ( &temp1174 );
    struct env1175 envinst1175 = {
        .screen3888 =  screen3888 ,
        .curline3891 =  curline3891 ,
    };
    struct env1176 envinst1176 = {
        .screen3888 =  screen3888 ,
        .curline3891 =  curline3891 ,
    };
    struct env1177 envinst1177 = {
        .screen3888 =  screen3888 ,
        .curline3891 =  curline3891 ,
    };
    struct env1178 envinst1178 = {
        .screen3888 =  screen3888 ,
        .curline3891 =  curline3891 ,
    };
    struct envunion1180  temp1179 = ( (struct envunion1180){ .fun = (  enum Unit_6  (*) (  struct env1175*  ,    struct StrConcat_1181  ) )ann1182 , .env =  envinst1175 } );
    ( temp1179.fun ( &temp1179.env ,  ( ( StrConcat_1181_StrConcat ) ( ( (  from_dash_string170 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed3890 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_941  cur_dash_ty3895 = ( (  char_dash_type943 ) ( ( (  char_dash_at951 ) ( ( (  pane918 ) ( (  ed3890 ) ) ) ,  ( ( ( * (  ed3890 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1210  temp1209 = ( (struct envunion1210){ .fun = (  enum Unit_6  (*) (  struct env1176*  ,    struct StrConcat_1211  ) )ann1214 , .env =  envinst1176 } );
    ( temp1209.fun ( &temp1209.env ,  ( ( StrConcat_1211_StrConcat ) ( ( ( StrConcat_1212_StrConcat ) ( ( ( StrConcat_1213_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3890 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string170 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty3895 ) ) ) ) );
    struct envunion1283  temp1282 = ( (struct envunion1283){ .fun = (  enum Unit_6  (*) (  struct env1177*  ,    struct StrConcat_1284  ) )ann1285 , .env =  envinst1177 } );
    ( temp1282.fun ( &temp1282.env ,  ( ( StrConcat_1284_StrConcat ) ( ( (  from_dash_string170 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3890 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct envunion1321  temp1320 = ( (struct envunion1321){ .fun = (  enum Unit_6  (*) (  struct env1178*  ,    struct StrConcat_1322  ) )ann1323 , .env =  envinst1178 } );
    ( temp1320.fun ( &temp1320.env ,  ( ( StrConcat_1322_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  ( ( * (  ed3890 ) ) .f_clipboard ) ) ) ) );
    return ( Unit_6_Unit );
}

struct RenderState_1360 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_613  f_fg;
    struct Color_613  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1367 {
    struct StrView_20  field0;
    uint32_t  field1;
};

static struct StrConcat_1367 StrConcat_1367_StrConcat (  struct StrView_20  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1366 {
    struct StrConcat_1367  field0;
    struct Char_141  field1;
};

static struct StrConcat_1366 StrConcat_1366_StrConcat (  struct StrConcat_1367  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1365 {
    struct StrConcat_1366  field0;
    uint32_t  field1;
};

static struct StrConcat_1365 StrConcat_1365_StrConcat (  struct StrConcat_1366  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1365 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1364 {
    struct StrConcat_1365  field0;
    struct Char_141  field1;
};

static struct StrConcat_1364 StrConcat_1364_StrConcat (  struct StrConcat_1365  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1373 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1372 {
    struct StrViewIter_552  f_left;
    struct IntStrIter_1373  f_right;
};

struct StrConcatIter_1371 {
    struct StrConcatIter_1372  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1370 {
    struct StrConcatIter_1371  f_left;
    struct IntStrIter_1373  f_right;
};

struct StrConcatIter_1369 {
    struct StrConcatIter_1370  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1369   into_dash_iter1375 (    struct StrConcatIter_1369  self1472 ) {
    return (  self1472 );
}

struct env1383 {
    ;
    uint32_t  base1191;
};

struct envunion1384 {
    uint32_t  (*fun) (  struct env1383*  ,    int32_t  ,    uint32_t  );
    struct env1383 env;
};

static  uint32_t   reduce1382 (    struct Range_635  iterable1074 ,    uint32_t  base1076 ,   struct envunion1384  fun1078 ) {
    uint32_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1384  temp1385 = (  fun1078 );
                x1079 = ( temp1385.fun ( &temp1385.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1386 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1386);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp1387;
    return (  temp1387 );
}

static  uint32_t   lam1388 (   struct env1383* env ,    int32_t  item1195 ,    uint32_t  x1197 ) {
    return (  op_dash_mul632 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint32_t   pow1381 (    uint32_t  base1191 ,    int32_t  p1193 ) {
    struct env1383 envinst1383 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1382 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral166 ( 1 ) ) ,  ( (struct envunion1384){ .fun = (  uint32_t  (*) (  struct env1383*  ,    int32_t  ,    uint32_t  ) )lam1388 , .env =  envinst1383 } ) ) );
}

static  uint32_t   op_dash_div1389 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  uint32_t   op_dash_sub1390 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_555   next1380 (    struct IntStrIter_1373 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp371 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint32_t  trim_dash_down1404 = ( (  pow1381 ) ( (  from_dash_integral166 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint32_t  upper1405 = (  op_dash_div1389 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint32_t  upper_dash_mask1406 = (  op_dash_mul632 ( (  op_dash_div1389 ( (  upper1405 ) , (  from_dash_integral166 ( 10 ) ) ) ) , (  from_dash_integral166 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast169 ) ( (  op_dash_sub1390 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1379 (    struct StrConcatIter_1372 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1380 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1378 (    struct StrConcatIter_1371 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1379 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1377 (    struct StrConcatIter_1370 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1378 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1380 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1376 (    struct StrConcatIter_1369 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1377 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1368 (    struct StrConcatIter_1369  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1369  temp1374 = ( (  into_dash_iter1375 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1369 *  it1058 = ( &temp1374 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1376 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_555_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_555_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_555_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1401 (    uint32_t  self1411 ) {
    if ( (  eq351 ( (  self1411 ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp165 ( (  self1411 ) , (  from_dash_integral166 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1389 ( (  self1411 ) , (  from_dash_integral166 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1373   uint_dash_iter1400 (    uint32_t  int1418 ) {
    return ( (struct IntStrIter_1373) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1401 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1373   chars1399 (    uint32_t  self1430 ) {
    return ( (  uint_dash_iter1400 ) ( (  self1430 ) ) );
}

static  struct StrConcatIter_1372   into_dash_iter1398 (    struct StrConcat_1367  dref1479 ) {
    return ( (struct StrConcatIter_1372) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1399 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1372   chars1397 (    struct StrConcat_1367  self1490 ) {
    return ( (  into_dash_iter1398 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1371   into_dash_iter1396 (    struct StrConcat_1366  dref1479 ) {
    return ( (struct StrConcatIter_1371) { .f_left = ( (  chars1397 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1371   chars1395 (    struct StrConcat_1366  self1490 ) {
    return ( (  into_dash_iter1396 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1370   into_dash_iter1394 (    struct StrConcat_1365  dref1479 ) {
    return ( (struct StrConcatIter_1370) { .f_left = ( (  chars1395 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1399 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1370   chars1393 (    struct StrConcat_1365  self1490 ) {
    return ( (  into_dash_iter1394 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1369   into_dash_iter1392 (    struct StrConcat_1364  dref1479 ) {
    return ( (struct StrConcatIter_1369) { .f_left = ( (  chars1393 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1369   chars1391 (    struct StrConcat_1364  self1490 ) {
    return ( (  into_dash_iter1392 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1363 (    struct StrConcat_1364  s2508 ) {
    ( (  for_dash_each1368 ) ( ( (  chars1391 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_cursor_dash_to1362 (    uint32_t  x2522 ,    uint32_t  y2524 ) {
    uint32_t  x2525 = (  op_dash_add732 ( (  x2522 ) , (  from_dash_integral166 ( 1 ) ) ) );
    uint32_t  y2526 = (  op_dash_add732 ( (  y2524 ) , (  from_dash_integral166 ( 1 ) ) ) );
    ( (  print1363 ) ( ( ( StrConcat_1364_StrConcat ) ( ( ( StrConcat_1365_StrConcat ) ( ( ( StrConcat_1366_StrConcat ) ( ( ( StrConcat_1367_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2526 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2525 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct Tuple2_1409 {
    struct Color_613  field0;
    struct Color_613  field1;
};

static struct Tuple2_1409 Tuple2_1409_Tuple2 (  struct Color_613  field0 ,  struct Color_613  field1 ) {
    return ( struct Tuple2_1409 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_614 *   cast1413 (    int32_t *  x356 ) {
    return ( (enum Color8_614 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1411 (    enum Color8_614  x573 ) {
    int32_t  temp1412 = ( (  zeroed803 ) ( ) );
    int32_t *  y574 = ( &temp1412 );
    enum Color8_614 *  yp575 = ( (  cast1413 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1410 (    enum Color8_614  l2550 ,    enum Color8_614  r2552 ) {
    return (  eq266 ( ( ( (  cast_dash_on_dash_zeroed1411 ) ( (  l2550 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1411 ) ( (  r2552 ) ) ) ) );
}

static  enum Color16_615 *   cast1417 (    int32_t *  x356 ) {
    return ( (enum Color16_615 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1415 (    enum Color16_615  x573 ) {
    int32_t  temp1416 = ( (  zeroed803 ) ( ) );
    int32_t *  y574 = ( &temp1416 );
    enum Color16_615 *  yp575 = ( (  cast1417 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1414 (    enum Color16_615  l2556 ,    enum Color16_615  r2558 ) {
    return (  eq266 ( ( ( (  cast_dash_on_dash_zeroed1415 ) ( (  l2556 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1415 ) ( (  r2558 ) ) ) ) );
}

static  bool   eq1418 (    struct RGB_616  l2586 ,    struct RGB_616  r2588 ) {
    return ( ( (  eq158 ( ( (  l2586 ) .f_r ) , ( (  r2588 ) .f_r ) ) ) && (  eq158 ( ( (  l2586 ) .f_g ) , ( (  r2588 ) .f_g ) ) ) ) && (  eq158 ( ( (  l2586 ) .f_b ) , ( (  r2588 ) .f_b ) ) ) );
}

static  bool   eq1408 (    struct Color_613  l2609 ,    struct Color_613  r2611 ) {
    return ( {  struct Tuple2_1409  dref2612 = ( ( Tuple2_1409_Tuple2 ) ( (  l2609 ) ,  (  r2611 ) ) ) ; dref2612 .field0.tag == Color_613_ColorDefault_t && dref2612 .field1.tag == Color_613_ColorDefault_t ? ( true ) : dref2612 .field0.tag == Color_613_Color8_t && dref2612 .field1.tag == Color_613_Color8_t ? (  eq1410 ( ( dref2612 .field0 .stuff .Color_613_Color8_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color8_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_Color16_t && dref2612 .field1.tag == Color_613_Color16_t ? (  eq1414 ( ( dref2612 .field0 .stuff .Color_613_Color16_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color16_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_Color256_t && dref2612 .field1.tag == Color_613_Color256_t ? (  eq158 ( ( dref2612 .field0 .stuff .Color_613_Color256_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color256_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_ColorRGB_t && dref2612 .field1.tag == Color_613_ColorRGB_t ? (  eq1418 ( ( dref2612 .field0 .stuff .Color_613_ColorRGB_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1407 (    struct Cell_612  l3317 ,    struct Cell_612  r3319 ) {
    if ( ( !  eq349 ( ( (  l3317 ) .f_c ) , ( (  r3319 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1408 ( ( (  l3317 ) .f_fg ) , ( (  r3319 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1408 ( ( (  l3317 ) .f_bg ) , ( (  r3319 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq1406 (    struct Cell_612 *  dref148 ,    struct Cell_612 *  dref150 ) {
    return (  eq1407 ( ( (* dref148 ) ) , ( (* dref150 ) ) ) );
}

static  enum Unit_6   set_dash_default_dash_fg1421 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg81422 (    enum Color8_614  color2561 ) {
    enum Color8_614  dref2562 = (  color2561 );
    switch (  dref2562 ) {
        case Color8_614_Black8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Red8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Green8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Yellow8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Blue8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Magenta8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Cyan8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_White8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg161423 (    enum Color16_615  color2565 ) {
    enum Color16_615  dref2566 = (  color2565 );
    switch (  dref2566 ) {
        case Color16_615_Black16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Red16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Green16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Yellow16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Blue16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Magenta16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Cyan16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_White16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightBlack16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightRed16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightGreen16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightYellow16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightBlue16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightMagenta16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightCyan16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightWhite16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

struct StrConcat_1427 {
    struct StrView_20  field0;
    uint8_t  field1;
};

static struct StrConcat_1427 StrConcat_1427_StrConcat (  struct StrView_20  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1427 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1426 {
    struct StrConcat_1427  field0;
    struct Char_141  field1;
};

static struct StrConcat_1426 StrConcat_1426_StrConcat (  struct StrConcat_1427  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1426 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1431 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1430 {
    struct StrViewIter_552  f_left;
    struct IntStrIter_1431  f_right;
};

struct StrConcatIter_1429 {
    struct StrConcatIter_1430  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1429   into_dash_iter1433 (    struct StrConcatIter_1429  self1472 ) {
    return (  self1472 );
}

struct env1439 {
    ;
    uint8_t  base1191;
};

struct envunion1440 {
    uint8_t  (*fun) (  struct env1439*  ,    int32_t  ,    uint8_t  );
    struct env1439 env;
};

static  uint8_t   reduce1438 (    struct Range_635  iterable1074 ,    uint8_t  base1076 ,   struct envunion1440  fun1078 ) {
    uint8_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1440  temp1441 = (  fun1078 );
                x1079 = ( temp1441.fun ( &temp1441.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1442 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1442);
    exit ( 1 );
    ( Unit_6_Unit );
    uint8_t  temp1443;
    return (  temp1443 );
}

static  uint8_t   op_dash_mul1445 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1444 (   struct env1439* env ,    int32_t  item1195 ,    uint8_t  x1197 ) {
    return (  op_dash_mul1445 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint8_t   pow1437 (    uint8_t  base1191 ,    int32_t  p1193 ) {
    struct env1439 envinst1439 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1438 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral162 ( 1 ) ) ,  ( (struct envunion1440){ .fun = (  uint8_t  (*) (  struct env1439*  ,    int32_t  ,    uint8_t  ) )lam1444 , .env =  envinst1439 } ) ) );
}

static  uint8_t   op_dash_div1446 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1447 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_555   next1436 (    struct IntStrIter_1431 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp371 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint8_t  trim_dash_down1404 = ( (  pow1437 ) ( (  from_dash_integral162 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint8_t  upper1405 = (  op_dash_div1446 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint8_t  upper_dash_mask1406 = (  op_dash_mul1445 ( (  op_dash_div1446 ( (  upper1405 ) , (  from_dash_integral162 ( 10 ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1447 ) ( (  op_dash_sub730 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1435 (    struct StrConcatIter_1430 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1436 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1434 (    struct StrConcatIter_1429 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1435 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1428 (    struct StrConcatIter_1429  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1429  temp1432 = ( (  into_dash_iter1433 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1429 *  it1058 = ( &temp1432 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1434 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_555_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_555_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_555_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1454 (    uint8_t  self1411 ) {
    if ( (  eq158 ( (  self1411 ) , (  from_dash_integral162 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp175 ( (  self1411 ) , (  from_dash_integral162 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1446 ( (  self1411 ) , (  from_dash_integral162 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1431   uint_dash_iter1453 (    uint8_t  int1418 ) {
    return ( (struct IntStrIter_1431) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1454 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1431   chars1452 (    uint8_t  self1436 ) {
    return ( (  uint_dash_iter1453 ) ( (  self1436 ) ) );
}

static  struct StrConcatIter_1430   into_dash_iter1451 (    struct StrConcat_1427  dref1479 ) {
    return ( (struct StrConcatIter_1430) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1452 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1430   chars1450 (    struct StrConcat_1427  self1490 ) {
    return ( (  into_dash_iter1451 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1429   into_dash_iter1449 (    struct StrConcat_1426  dref1479 ) {
    return ( (struct StrConcatIter_1429) { .f_left = ( (  chars1450 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1429   chars1448 (    struct StrConcat_1426  self1490 ) {
    return ( (  into_dash_iter1449 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1425 (    struct StrConcat_1426  s2508 ) {
    ( (  for_dash_each1428 ) ( ( (  chars1448 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg2561424 (    uint8_t  color2579 ) {
    ( (  print1425 ) ( ( ( StrConcat_1426_StrConcat ) ( ( ( StrConcat_1427_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2579 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1460 {
    struct StrConcat_1426  field0;
    uint8_t  field1;
};

static struct StrConcat_1460 StrConcat_1460_StrConcat (  struct StrConcat_1426  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1460 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1459 {
    struct StrConcat_1460  field0;
    struct Char_141  field1;
};

static struct StrConcat_1459 StrConcat_1459_StrConcat (  struct StrConcat_1460  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1458 {
    struct StrConcat_1459  field0;
    uint8_t  field1;
};

static struct StrConcat_1458 StrConcat_1458_StrConcat (  struct StrConcat_1459  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1458 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1457 {
    struct StrConcat_1458  field0;
    struct Char_141  field1;
};

static struct StrConcat_1457 StrConcat_1457_StrConcat (  struct StrConcat_1458  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1457 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1465 {
    struct StrConcatIter_1429  f_left;
    struct IntStrIter_1431  f_right;
};

struct StrConcatIter_1464 {
    struct StrConcatIter_1465  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1463 {
    struct StrConcatIter_1464  f_left;
    struct IntStrIter_1431  f_right;
};

struct StrConcatIter_1462 {
    struct StrConcatIter_1463  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1462   into_dash_iter1467 (    struct StrConcatIter_1462  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1471 (    struct StrConcatIter_1465 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1434 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1436 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1470 (    struct StrConcatIter_1464 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1471 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1469 (    struct StrConcatIter_1463 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1470 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1436 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1468 (    struct StrConcatIter_1462 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1469 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1461 (    struct StrConcatIter_1462  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1462  temp1466 = ( (  into_dash_iter1467 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1462 *  it1058 = ( &temp1466 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1468 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_555_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_555_Just_t ) {
                ( (  fun1057 ) ( ( dref1059 .stuff .Maybe_555_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrConcatIter_1465   into_dash_iter1479 (    struct StrConcat_1460  dref1479 ) {
    return ( (struct StrConcatIter_1465) { .f_left = ( (  chars1448 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1452 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1465   chars1478 (    struct StrConcat_1460  self1490 ) {
    return ( (  into_dash_iter1479 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1464   into_dash_iter1477 (    struct StrConcat_1459  dref1479 ) {
    return ( (struct StrConcatIter_1464) { .f_left = ( (  chars1478 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1464   chars1476 (    struct StrConcat_1459  self1490 ) {
    return ( (  into_dash_iter1477 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1463   into_dash_iter1475 (    struct StrConcat_1458  dref1479 ) {
    return ( (struct StrConcatIter_1463) { .f_left = ( (  chars1476 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1452 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1463   chars1474 (    struct StrConcat_1458  self1490 ) {
    return ( (  into_dash_iter1475 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1462   into_dash_iter1473 (    struct StrConcat_1457  dref1479 ) {
    return ( (struct StrConcatIter_1462) { .f_left = ( (  chars1474 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1462   chars1472 (    struct StrConcat_1457  self1490 ) {
    return ( (  into_dash_iter1473 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1456 (    struct StrConcat_1457  s2508 ) {
    ( (  for_dash_each1461 ) ( ( (  chars1472 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg_dash_rgb1455 (    struct RGB_616  c2602 ) {
    ( (  print1456 ) ( ( ( StrConcat_1457_StrConcat ) ( ( ( StrConcat_1458_StrConcat ) ( ( ( StrConcat_1459_StrConcat ) ( ( ( StrConcat_1460_StrConcat ) ( ( ( StrConcat_1426_StrConcat ) ( ( ( StrConcat_1427_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2602 ) .f_r ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2602 ) .f_g ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2602 ) .f_b ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg1420 (    struct Color_613  c2623 ) {
    struct Color_613  dref2624 = (  c2623 );
    if ( dref2624.tag == Color_613_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1421 ) ( ) );
    }
    else {
        if ( dref2624.tag == Color_613_Color8_t ) {
            ( (  set_dash_fg81422 ) ( ( dref2624 .stuff .Color_613_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2624.tag == Color_613_Color16_t ) {
                ( (  set_dash_fg161423 ) ( ( dref2624 .stuff .Color_613_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2624.tag == Color_613_Color256_t ) {
                    ( (  set_dash_fg2561424 ) ( ( dref2624 .stuff .Color_613_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2624.tag == Color_613_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1455 ) ( ( dref2624 .stuff .Color_613_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_default_dash_bg1481 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg81482 (    enum Color8_614  color2569 ) {
    enum Color8_614  dref2570 = (  color2569 );
    switch (  dref2570 ) {
        case Color8_614_Black8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Red8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Green8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Yellow8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Blue8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Magenta8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_Cyan8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_614_White8 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg161483 (    enum Color16_615  color2573 ) {
    enum Color16_615  dref2574 = (  color2573 );
    switch (  dref2574 ) {
        case Color16_615_Black16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Red16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Green16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Yellow16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Blue16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Magenta16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_Cyan16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_White16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_615_BrightBlack16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightRed16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightGreen16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightYellow16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightBlue16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightMagenta16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightCyan16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_615_BrightWhite16 : {
            ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg2561484 (    uint8_t  color2582 ) {
    ( (  print1425 ) ( ( ( StrConcat_1426_StrConcat ) ( ( ( StrConcat_1427_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2582 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg_dash_rgb1485 (    struct RGB_616  c2605 ) {
    ( (  print1456 ) ( ( ( StrConcat_1457_StrConcat ) ( ( ( StrConcat_1458_StrConcat ) ( ( ( StrConcat_1459_StrConcat ) ( ( ( StrConcat_1460_StrConcat ) ( ( ( StrConcat_1426_StrConcat ) ( ( ( StrConcat_1427_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2605 ) .f_r ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2605 ) .f_g ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2605 ) .f_b ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg1480 (    struct Color_613  c2631 ) {
    struct Color_613  dref2632 = (  c2631 );
    if ( dref2632.tag == Color_613_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1481 ) ( ) );
    }
    else {
        if ( dref2632.tag == Color_613_Color8_t ) {
            ( (  set_dash_bg81482 ) ( ( dref2632 .stuff .Color_613_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2632.tag == Color_613_Color16_t ) {
                ( (  set_dash_bg161483 ) ( ( dref2632 .stuff .Color_613_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2632.tag == Color_613_Color256_t ) {
                    ( (  set_dash_bg2561484 ) ( ( dref2632 .stuff .Color_613_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2632.tag == Color_613_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1485 ) ( ( dref2632 .stuff .Color_613_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  uint32_t   i32_dash_u321486 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_6   emit_dash_cell1419 (    struct RenderState_1360 *  rs3349 ,    struct Cell_612 *  c3351 ,    uint32_t  x3353 ,    uint32_t  y3355 ) {
    if ( ( ( !  eq351 ( (  x3353 ) , ( ( * (  rs3349 ) ) .f_x ) ) ) || ( !  eq351 ( (  y3355 ) , ( ( * (  rs3349 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1362 ) ( (  x3353 ) ,  (  y3355 ) ) );
        (*  rs3349 ) .f_x = (  x3353 );
        (*  rs3349 ) .f_y = (  y3355 );
    }
    struct Char_141  char3356 = ( ( * (  c3351 ) ) .f_c );
    struct Color_613  bg3357 = ( ( * (  c3351 ) ) .f_bg );
    if ( (  eq266 ( ( ( * (  c3351 ) ) .f_char_dash_width ) , (  op_dash_neg585 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
        char3356 = ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) );
        bg3357 = ( ( Color_613_Color8 ) ( ( Color8_614_Red8 ) ) );
    }
    if ( ( !  eq1408 ( ( ( * (  rs3349 ) ) .f_fg ) , ( ( * (  c3351 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1420 ) ( ( ( * (  c3351 ) ) .f_fg ) ) );
        (*  rs3349 ) .f_fg = ( ( * (  c3351 ) ) .f_fg );
    }
    if ( ( !  eq1408 ( ( ( * (  rs3349 ) ) .f_bg ) , (  bg3357 ) ) ) ) {
        ( (  set_dash_bg1480 ) ( (  bg3357 ) ) );
        (*  rs3349 ) .f_bg = (  bg3357 );
    }
    ( (  print_dash_str154 ) ( (  char3356 ) ) );
    uint32_t  char_dash_width3358 = ( (  i32_dash_u321486 ) ( ( (  max899 ) ( ( ( * (  c3351 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) ) ) );
    (*  rs3349 ) .f_x = (  op_dash_add732 ( ( ( * (  rs3349 ) ) .f_x ) , (  char_dash_width3358 ) ) );
    return ( Unit_6_Unit );
}

static  uint32_t   render_dash_screen1359 (    struct Screen_610 *  screen3361 ) {
    int32_t  w3362 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3361 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3363 = ( (  u32_dash_i321155 ) ( ( ( * ( ( * (  screen3361 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1360  temp1361 = ( (struct RenderState_1360) { .f_x = (  from_dash_integral166 ( 0 ) ) , .f_y = (  from_dash_integral166 ( 0 ) ) , .f_fg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_changes = (  from_dash_integral166 ( 0 ) ) } );
    struct RenderState_1360 *  rs3364 = ( &temp1361 );
    ( (  move_dash_cursor_dash_to1362 ) ( (  from_dash_integral166 ( 0 ) ) ,  (  from_dash_integral166 ( 0 ) ) ) );
    struct RangeIter_638  temp1402 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  h3363 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond1403 =  next641 (&temp1402);
        if (  __cond1403 .tag == 0 ) {
            break;
        }
        int32_t  y3366 =  __cond1403 .stuff .Maybe_223_Just_s .field0;
        int32_t  x_dash_v3367 = (  from_dash_integral38 ( 0 ) );
        struct RangeIter_638  temp1404 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  w3362 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_223  __cond1405 =  next641 (&temp1404);
            if (  __cond1405 .tag == 0 ) {
                break;
            }
            int32_t  x_dash_i3369 =  __cond1405 .stuff .Maybe_223_Just_s .field0;
            size_t  i3370 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1160 ( (  y3366 ) , (  w3362 ) ) ) , (  x_dash_i3369 ) ) ) ) );
            struct Cell_612 *  cur3371 = ( (  get_dash_ptr646 ) ( ( ( * (  screen3361 ) ) .f_current ) ,  (  i3370 ) ) );
            struct Cell_612 *  prev3372 = ( (  get_dash_ptr646 ) ( ( ( * (  screen3361 ) ) .f_previous ) ,  (  i3370 ) ) );
            int32_t  char_dash_width3373 = ( (  max899 ) ( ( ( * (  cur3371 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( ( !  eq1406 ( (  cur3371 ) , (  prev3372 ) ) ) || ( ( * (  screen3361 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3364 ) .f_changes = (  op_dash_add732 ( ( ( * (  rs3364 ) ) .f_changes ) , (  from_dash_integral166 ( 1 ) ) ) );
                ( (  emit_dash_cell1419 ) ( (  rs3364 ) ,  (  cur3371 ) ,  ( (  i32_dash_u321486 ) ( (  x_dash_v3367 ) ) ) ,  ( (  i32_dash_u321486 ) ( (  y3366 ) ) ) ) );
                (*  prev3372 ) = ( * (  cur3371 ) );
            }
            x_dash_v3367 = (  op_dash_add225 ( (  x_dash_v3367 ) , (  char_dash_width3373 ) ) );
        }
    }
    (*  screen3361 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors559 ) ( ) );
    ( (  flush_dash_stdout562 ) ( ) );
    return ( ( * (  rs3364 ) ) .f_changes );
}

static  void *   cast_dash_ptr1493 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1494 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1491 (  ) {
    struct timespec *  temp1492;
    struct timespec *  x570 = (  temp1492 );
    ( ( memset ) ( ( (  cast_dash_ptr1493 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of1494 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1490 (  ) {
    return ( (  zeroed1491 ) ( ) );
}

static  enum Unit_6   sync1487 (    struct Tui_45 *  tui3232 ) {
    if ( (  eq351 ( ( ( * (  tui3232 ) ) .f_target_dash_fps ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return ( Unit_6_Unit );
    }
    int64_t  frame_dash_ns3233 = (  op_dash_div838 ( (  from_dash_integral253 ( 1000000000 ) ) , ( (  size_dash_i64212 ) ( ( (  u32_dash_size624 ) ( ( ( * (  tui3232 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1488 = ( (  undefined598 ) ( ) );
    struct timespec *  now3234 = ( &temp1488 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic600 ) ( ) ) ,  (  now3234 ) ) );
    int64_t  elapsed_dash_ns3235 = (  op_dash_add808 ( (  op_dash_mul181 ( (  op_dash_sub840 ( ( ( * (  now3234 ) ) .tv_sec ) , ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral253 ( 1000000000 ) ) ) ) , (  op_dash_sub840 ( ( ( * (  now3234 ) ) .tv_nsec ) , ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3236 = (  op_dash_sub840 ( (  frame_dash_ns3233 ) , (  elapsed_dash_ns3235 ) ) );
    if ( (  cmp858 ( (  sleep_dash_ns3236 ) , (  from_dash_integral253 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1489 = ( (struct timespec) { .tv_sec = (  from_dash_integral253 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3236 ) } );
        struct timespec *  ts3237 = ( &temp1489 );
        ( ( nanosleep ) ( (  ts3237 ) ,  ( (  null_dash_ptr1490 ) ( ) ) ) );
    }
    struct timespec  temp1495 = ( (  undefined598 ) ( ) );
    struct timespec *  last_dash_sync3238 = ( &temp1495 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic600 ) ( ) ) ,  (  last_dash_sync3238 ) ) );
    (*  tui3232 ) .f_last_dash_sync = ( * (  last_dash_sync3238 ) );
    (*  tui3232 ) .f_fps_dash_count = (  op_dash_add732 ( ( ( * (  tui3232 ) ) .f_fps_dash_count ) , (  from_dash_integral166 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3239 = (  op_dash_add808 ( (  op_dash_mul181 ( (  op_dash_sub840 ( ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3232 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral253 ( 1000 ) ) ) ) , (  op_dash_div838 ( (  op_dash_sub840 ( ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3232 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral253 ( 1000000 ) ) ) ) ) );
    if ( (  cmp858 ( (  fps_dash_elapsed_dash_ms3239 ) , (  from_dash_integral253 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3232 ) .f_actual_dash_fps = ( ( * (  tui3232 ) ) .f_fps_dash_count );
        (*  tui3232 ) .f_fps_dash_count = (  from_dash_integral166 ( 0 ) );
        (*  tui3232 ) .f_fps_dash_ts = ( ( * (  tui3232 ) ) .f_last_dash_sync );
    }
    return ( Unit_6_Unit );
}

static  void *   cast_dash_ptr1498 (    struct Cell_612 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1497 (    enum CAllocator_8  dref1929 ,    struct Slice_611  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1498 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free_dash_screen1496 (    struct Screen_610 *  screen3337 ) {
    enum CAllocator_8  al3338 = ( ( * (  screen3337 ) ) .f_al );
    ( (  free1497 ) ( (  al3338 ) ,  ( ( * (  screen3337 ) ) .f_current ) ) );
    ( (  free1497 ) ( (  al3338 ) ,  ( ( * (  screen3337 ) ) .f_previous ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_mouse1500 (  ) {
    ( (  print_dash_str146 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   show_dash_cursor1501 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_cursor_dash_position1502 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_raw_dash_mode1503 (    struct Termios_47 *  og_dash_termios3212 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  tcsa_dash_flush548 ) ( ) ) ,  ( (  cast_dash_ptr489 ) ( (  og_dash_termios3212 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   deinit1499 (    struct Tui_45 *  tui3242 ) {
    ( (  disable_dash_mouse1500 ) ( ) );
    ( (  show_dash_cursor1501 ) ( ) );
    ( (  reset_dash_colors559 ) ( ) );
    ( (  clear_dash_screen560 ) ( ) );
    ( (  reset_dash_cursor_dash_position1502 ) ( ) );
    ( (  disable_dash_raw_dash_mode1503 ) ( ( & ( ( * (  tui3242 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout562 ) ( ) );
    return ( Unit_6_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2006 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2007 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2008 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size2006 =  starting_dash_size2006 ,
        .growth_dash_factor2007 =  growth_dash_factor2007 ,
    };
    struct env2 envinst2 = {
        .starting_dash_size2006 =  starting_dash_size2006 ,
        .growth_dash_factor2007 =  growth_dash_factor2007 ,
    };
    struct env3 envinst3 = {
        .starting_dash_size2006 =  starting_dash_size2006 ,
        .growth_dash_factor2007 =  growth_dash_factor2007 ,
    };
    struct env4 envinst4 = {
        .envinst1 = envinst1 ,
    };
    struct env12 envinst12 = {
        .envinst2 = envinst2 ,
    };
    struct env14 envinst14 = {
        .envinst3 = envinst3 ,
    };
    struct env23 envinst23 = {
        .envinst4 = envinst4 ,
        .envinst1 = envinst1 ,
    };
    struct env26 envinst26 = {
        .shrink_dash_factor2008 =  shrink_dash_factor2008 ,
    };
    struct env27 envinst27 = {
        .shrink_dash_factor2008 =  shrink_dash_factor2008 ,
    };
    struct env28 envinst28 = {
        .envinst4 = envinst4 ,
    };
    struct env30 envinst30 = {
        .envinst12 = envinst12 ,
    };
    struct env32 envinst32 = {
        .envinst28 = envinst28 ,
    };
    struct env35 envinst35 = {
        .envinst30 = envinst30 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype37 ) ( ) ) ,  ( (  from_dash_string39 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    bool  temp40 = ( false );
    bool *  should_dash_resize3222 = ( &temp40 );
    struct env41 envinst41 = {
        .should_dash_resize3222 =  should_dash_resize3222 ,
    };
    struct env42 envinst42 = {
        .should_dash_resize3222 =  should_dash_resize3222 ,
    };
    struct env43 envinst43 = {
        .envinst42 = envinst42 ,
    };
    struct env49 envinst49 = {
        .envinst42 = envinst42 ,
    };
    struct env51 envinst51 = {
        .envinst32 = envinst32 ,
    };
    struct env53 envinst53 = {
        .envinst35 = envinst35 ,
        .envinst23 = envinst23 ,
        .envinst30 = envinst30 ,
    };
    struct env57 envinst57 = {
        .envinst26 = envinst26 ,
        .envinst27 = envinst27 ,
        .envinst4 = envinst4 ,
        .envinst53 = envinst53 ,
        .envinst30 = envinst30 ,
    };
    struct env65 envinst65 = {
        .envinst57 = envinst57 ,
    };
    struct env67 envinst67 = {
        .envinst57 = envinst57 ,
    };
    struct env69 envinst69 = {
        .envinst65 = envinst65 ,
    };
    struct env71 envinst71 = {
        .envinst67 = envinst67 ,
    };
    struct env73 envinst73 = {
        .envinst30 = envinst30 ,
    };
    struct env75 envinst75 = {
        .envinst14 = envinst14 ,
        .envinst71 = envinst71 ,
        .envinst73 = envinst73 ,
    };
    struct env80 envinst80 = {
        .envinst75 = envinst75 ,
    };
    struct env82 envinst82 = {
        .envinst75 = envinst75 ,
    };
    struct env84 envinst84 = {
        .envinst69 = envinst69 ,
    };
    struct env86 envinst86 = {
        .envinst71 = envinst71 ,
    };
    struct env88 envinst88 = {
        .envinst75 = envinst75 ,
    };
    struct env90 envinst90 = {
        .envinst73 = envinst73 ,
    };
    struct env92 envinst92 = {
        .envinst88 = envinst88 ,
        .envinst84 = envinst84 ,
        .envinst86 = envinst86 ,
        .envinst90 = envinst90 ,
    };
    struct env102 envinst102 = {
        .envinst80 = envinst80 ,
        .envinst82 = envinst82 ,
        .envinst92 = envinst92 ,
    };
    enum CAllocator_8  al3896 = ( (  idc107 ) ( ) );
    struct envunion110  temp109 = ( (struct envunion110){ .fun = (  struct TextBuf_62  (*) (  struct env51*  ,    enum CAllocator_8  ) )mk111 , .env =  envinst51 } );
    struct TextBuf_62  temp108 = ( temp109.fun ( &temp109.env ,  (  al3896 ) ) );
    struct TextBuf_62 *  tb3897 = ( &temp108 );
    struct Slice_249  args3900 = ( (  get250 ) ( ) );
    if ( (  cmp132 ( ( (  args3900 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname3901 = (  elem_dash_get255 ( (  args3900 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion263  temp262 = ( (struct envunion263){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_62 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  envinst57 } );
        ( temp262.fun ( &temp262.env ,  (  tb3897 ) ,  ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  read_dash_contents453 ) ( (  fname3901 ) ,  (  al3896 ) ) ) ) );
    }
    struct Editor_100  temp478 = ( (struct Editor_100) { .f_running = ( true ) , .f_al = (  al3896 ) , .f_pane = ( (  mk479 ) ( (  al3896 ) ,  (  tb3897 ) ) ) , .f_clipboard = ( (struct Maybe_101) { .tag = Maybe_101_None_t } ) } );
    struct Editor_100 *  ed3902 = ( &temp478 );
    struct envunion482  temp481 = ( (struct envunion482){ .fun = (  struct Tui_45  (*) (  struct env41*  ) )mk483 , .env =  envinst41 } );
    struct Tui_45  temp480 = ( temp481.fun ( &temp481.env ) );
    struct Tui_45 *  tui3903 = ( &temp480 );
    struct Screen_610  temp617 = ( (  mk_dash_screen618 ) ( (  tui3903 ) ,  (  al3896 ) ) );
    struct Screen_610 *  screen3904 = ( &temp617 );
    while ( ( ( * (  ed3902 ) ) .f_running ) ) {
        struct env668 envinst668 = {
            .envinst43 = envinst43 ,
            .tui3903 =  tui3903 ,
        };
        struct FunIter_667  temp666 =  into_dash_iter675 ( ( (  from_dash_function676 ) ( ( (struct envunion674){ .fun = (  struct Maybe_670  (*) (  struct env668*  ) )lam677 , .env =  envinst668 } ) ) ) );
        while (true) {
            struct Maybe_670  __cond878 =  next879 (&temp666);
            if (  __cond878 .tag == 0 ) {
                break;
            }
            struct InputEvent_671  ev3906 =  __cond878 .stuff .Maybe_670_Just_s .field0;
            struct InputEvent_671  dref3907 = (  ev3906 );
            if ( dref3907.tag == InputEvent_671_Key_t ) {
                struct envunion882  temp881 = ( (struct envunion882){ .fun = (  enum Unit_6  (*) (  struct env102*  ,    struct Editor_100 *  ,    struct Key_106  ) )handle_dash_key883 , .env =  envinst102 } );
                ( temp881.fun ( &temp881.env ,  (  ed3902 ) ,  ( dref3907 .stuff .InputEvent_671_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1132  temp1131 = ( (struct envunion1132){ .fun = (  bool  (*) (  struct env49*  ,    struct Screen_610 *  ) )resize_dash_screen_dash_if_dash_needed1133 , .env =  envinst49 } );
        ( temp1131.fun ( &temp1131.env ,  (  screen3904 ) ) );
        if ( ( (  should_dash_redraw1135 ) ( (  tui3903 ) ) ) ) {
            ( (  clear_dash_screen1136 ) ( (  screen3904 ) ) );
            ( (  render_dash_editor1145 ) ( (  screen3904 ) ,  (  ed3902 ) ) );
            ( (  render_dash_screen1359 ) ( (  screen3904 ) ) );
        }
        ( (  sync1487 ) ( (  tui3903 ) ) );
    }
    ( (  free_dash_screen1496 ) ( (  screen3904 ) ) );
    ( (  deinit1499 ) ( (  tui3903 ) ) );
}
