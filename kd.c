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

struct envunion61 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct Actions_64 {
    struct List_16  f_list;
    size_t  f_cur;
};

struct TextBuf_63 {
    struct List_7  f_buf;
    struct Actions_64  f_actions;
};

struct envunion62 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
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
    ;
    struct env30 envinst30;
    ;
    ;
    struct env53 envinst53;
    ;
    ;
    ;
    ;
};

struct envunion66 {
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
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
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
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
    struct Pos_19  (*fun) (  struct env65*  ,    struct TextBuf_63 *  ,    struct Action_18  );
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
    struct Pos_19  (*fun) (  struct env67*  ,    struct TextBuf_63 *  ,    struct Action_18  );
    struct env67 env;
};

struct env71 {
    struct env67 envinst67;
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
    struct StrView_20  (*fun) (  struct env73*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env73 env;
};

struct envunion77 {
    enum Unit_6  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  );
    struct env14 env;
};

struct Maybe_79 {
    enum {
        Maybe_79_None_t,
        Maybe_79_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_21  field0;
        } Maybe_79_Just_s;
    } stuff;
};

static struct Maybe_79 Maybe_79_Just (  struct Cursors_21  field0 ) {
    return ( struct Maybe_79 ) { .tag = Maybe_79_Just_t, .stuff = { .Maybe_79_Just_s = { .field0 = field0 } } };
};

struct envunion78 {
    struct Maybe_79  (*fun) (  struct env71*  ,    struct TextBuf_63 *  );
    struct env71 env;
};

struct env75 {
    struct env73 envinst73;
    ;
    struct env14 envinst14;
    ;
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
};

struct envunion81 {
    enum Unit_6  (*fun) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  );
    struct env75 env;
};

struct env80 {
    struct env75 envinst75;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion83 {
    enum Unit_6  (*fun) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  );
    struct env75 env;
};

struct env82 {
    struct env75 envinst75;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion85 {
    struct Maybe_79  (*fun) (  struct env69*  ,    struct TextBuf_63 *  );
    struct env69 env;
};

struct env84 {
    struct env69 envinst69;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion87 {
    struct Maybe_79  (*fun) (  struct env71*  ,    struct TextBuf_63 *  );
    struct env71 env;
};

struct env86 {
    struct env71 envinst71;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion89 {
    enum Unit_6  (*fun) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  );
    struct env75 env;
};

struct env88 {
    ;
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
    ;
    ;
};

struct envunion91 {
    struct StrView_20  (*fun) (  struct env73*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env73 env;
};

struct env90 {
    ;
    struct env73 envinst73;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Mode_96 {
    Mode_96_Normal,
    Mode_96_Insert,
    Mode_96_Select,
};

struct Pane_95 {
    struct TextBuf_63 *  f_buf;
    struct Pos_19  f_cursor;
    int32_t  f_vi;
    struct Maybe_22  f_sel;
    enum Mode_96  f_mode;
};

struct Maybe_97 {
    enum {
        Maybe_97_None_t,
        Maybe_97_Just_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } Maybe_97_Just_s;
    } stuff;
};

static struct Maybe_97 Maybe_97_Just (  struct StrView_20  field0 ) {
    return ( struct Maybe_97 ) { .tag = Maybe_97_Just_t, .stuff = { .Maybe_97_Just_s = { .field0 = field0 } } };
};

struct Editor_94 {
    enum CAllocator_8  f_al;
    bool  f_running;
    struct Pane_95  f_pane;
    struct Maybe_97  f_clipboard;
};

struct envunion93 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_94 *  );
    struct env90 env;
};

struct Tuple2_99 {
    struct Pos_19  field0;
    struct Pos_19  field1;
};

static struct Tuple2_99 Tuple2_99_Tuple2 (  struct Pos_19  field0 ,  struct Pos_19  field1 ) {
    return ( struct Tuple2_99 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion98 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  );
    struct env88 env;
};

struct envunion100 {
    enum Unit_6  (*fun) (  struct env84*  ,    struct Pane_95 *  );
    struct env84 env;
};

struct envunion101 {
    enum Unit_6  (*fun) (  struct env86*  ,    struct Pane_95 *  );
    struct env86 env;
};

struct env92 {
    ;
    struct env90 envinst90;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env88 envinst88;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
    struct env86 envinst86;
    ;
    ;
};

struct envunion103 {
    enum Unit_6  (*fun) (  struct env80*  ,    struct Pane_95 *  ,    struct StrView_20  );
    struct env80 env;
};

struct envunion104 {
    enum Unit_6  (*fun) (  struct env82*  ,    struct Pane_95 *  );
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
    enum Unit_6  (*fun) (  struct env92*  ,    struct Editor_94 *  ,    struct Key_106  );
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
    struct TextBuf_63  (*fun) (  struct env51*  ,    enum CAllocator_8  );
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

static  struct Actions_64   mk_dash_actions241 (    enum CAllocator_8  al3508 ) {
    return ( (struct Actions_64) { .f_list = ( (  mk242 ) ( (  al3508 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct TextBuf_63   mk111 (   struct env51* env ,    enum CAllocator_8  al3512 ) {
    struct envunion52  temp112 = ( (struct envunion52){ .fun = (  struct List_7  (*) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  ) )from_dash_iter113 , .env =  env->envinst32 } );
    return ( (struct TextBuf_63) { .f_buf = ( temp112.fun ( &temp112.env ,  ( (  from_dash_listlike233 ) ( ( (struct Array_34) { ._arr = { ( (  mk234 ) ( (  al3512 ) ) ) } } ) ) ) ,  (  al3512 ) ) ) , .f_actions = ( (  mk_dash_actions241 ) ( (  al3512 ) ) ) } );
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
    enum Unit_6  (*fun) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
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

struct envunion270 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
};

static  struct List_10 *   get_dash_ptr273 (    struct List_7 *  list1971 ,    size_t  i1973 ) {
    if ( ( (  cmp132 ( (  i1973 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1973 ) , ( ( * (  list1971 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1973 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1971 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr202 ) ( ( ( * (  list1971 ) ) .f_elements ) ,  (  i1973 ) ) );
}

static  struct List_10   get272 (    struct List_7 *  list1981 ,    size_t  i1983 ) {
    return ( * ( (  get_dash_ptr273 ) ( (  list1981 ) ,  (  i1983 ) ) ) );
}

static  uint8_t *   offset_dash_ptr276 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp277;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp277 ) ) ) ) ) ) ) ) );
}

static  size_t   min278 (    size_t  l1217 ,    size_t  r1219 ) {
    if ( (  cmp132 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Slice_11   subslice275 (    struct Slice_11  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    uint8_t *  begin_dash_ptr1763 = ( (  offset_dash_ptr276 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min278 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  struct Slice_11   from274 (    struct Slice_11  slice1767 ,    size_t  from1769 ) {
    return ( (  subslice275 ) ( (  slice1767 ) ,  (  from1769 ) ,  ( (  slice1767 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice279 (    struct List_10  l2096 ) {
    uint8_t *  ptr2097 = ( ( (  l2096 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2097 ) , .f_count = ( (  l2096 ) .f_count ) } );
}

static  enum Unit_6   set280 (    struct List_7 *  list1991 ,    size_t  i1993 ,    struct List_10  elem1995 ) {
    if ( ( (  cmp132 ( (  i1993 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1993 ) , ( ( * (  list1991 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1993 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1991 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set201 ) ( ( ( * (  list1991 ) ) .f_elements ) ,  (  i1993 ) ,  (  elem1995 ) ) );
    return ( Unit_6_Unit );
}

struct env287 {
    struct env12 envinst12;
    struct List_10 *  list2068;
};

struct envunion288 {
    enum Unit_6  (*fun) (  struct env287*  ,    uint8_t  );
    struct env287 env;
};

struct SliceIter_289 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_289   into_dash_iter291 (    struct Slice_11  self1798 ) {
    return ( (struct SliceIter_289) { .f_slice = (  self1798 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_292 {
    enum {
        Maybe_292_None_t,
        Maybe_292_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_292_Just_s;
    } stuff;
};

static struct Maybe_292 Maybe_292_Just (  uint8_t  field0 ) {
    return ( struct Maybe_292 ) { .tag = Maybe_292_Just_t, .stuff = { .Maybe_292_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_292   next293 (    struct SliceIter_289 *  self1804 ) {
    size_t  off1805 = ( ( * (  self1804 ) ) .f_current_dash_offset );
    if ( (  cmp132 ( (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1804 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_292) { .tag = Maybe_292_None_t } );
    }
    uint8_t  elem1806 = ( * ( (  offset_dash_ptr276 ) ( ( ( ( * (  self1804 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  off1805 ) ) ) ) ) );
    (*  self1804 ) .f_current_dash_offset = (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_292_Just ) ( (  elem1806 ) ) );
}

static  enum Unit_6   for_dash_each286 (    struct Slice_11  iterable1055 ,   struct envunion288  fun1057 ) {
    struct SliceIter_289  temp290 = ( (  into_dash_iter291 ) ( (  iterable1055 ) ) );
    struct SliceIter_289 *  it1058 = ( &temp290 );
    while ( ( true ) ) {
        struct Maybe_292  dref1059 = ( (  next293 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_292_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_292_Just_t ) {
                struct envunion288  temp294 = (  fun1057 );
                ( temp294.fun ( &temp294.env ,  ( dref1059 .stuff .Maybe_292_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct TypeSize_302 {
    size_t  f_size;
};

static  struct TypeSize_302   get_dash_typesize301 (  ) {
    uint8_t  temp303;
    return ( (struct TypeSize_302) { .f_size = ( sizeof( ( (  temp303 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr304 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate300 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize301 ) ( ) ) ) .f_size );
    uint8_t *  ptr1927 = ( (  cast_dash_ptr304 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

struct env305 {
    ;
    struct Slice_11  new_dash_slice2012;
    ;
};

struct Tuple2_307 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_307 Tuple2_307_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_307 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion306 {
    enum Unit_6  (*fun) (  struct env305*  ,    struct Tuple2_307  );
    struct env305 env;
};

static  uint8_t *   get_dash_ptr310 (    struct Slice_11  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1736 = ( (  offset_dash_ptr276 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  enum Unit_6   set309 (    struct Slice_11  slice1750 ,    size_t  i1752 ,    uint8_t  x1754 ) {
    uint8_t *  ep1755 = ( (  get_dash_ptr310 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam308 (   struct env305* env ,    struct Tuple2_307  dref2013 ) {
    return ( (  set309 ) ( ( env->new_dash_slice2012 ) ,  ( (  i32_dash_size213 ) ( ( dref2013 .field1 ) ) ) ,  ( dref2013 .field0 ) ) );
}

struct Zip_312 {
    struct SliceIter_289  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_312   into_dash_iter314 (    struct Zip_312  self905 ) {
    return (  self905 );
}

struct Maybe_315 {
    enum {
        Maybe_315_None_t,
        Maybe_315_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_307  field0;
        } Maybe_315_Just_s;
    } stuff;
};

static struct Maybe_315 Maybe_315_Just (  struct Tuple2_307  field0 ) {
    return ( struct Maybe_315 ) { .tag = Maybe_315_Just_t, .stuff = { .Maybe_315_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_315   next316 (    struct Zip_312 *  self908 ) {
    struct Zip_312  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_292  dref910 = ( (  next293 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_292_None_t ) {
            return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_292_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_315) { .tag = Maybe_315_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next293 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_315_Just ) ( ( ( Tuple2_307_Tuple2 ) ( ( dref910 .stuff .Maybe_292_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each311 (    struct Zip_312  iterable1055 ,   struct envunion306  fun1057 ) {
    struct Zip_312  temp313 = ( (  into_dash_iter314 ) ( (  iterable1055 ) ) );
    struct Zip_312 *  it1058 = ( &temp313 );
    while ( ( true ) ) {
        struct Maybe_315  dref1059 = ( (  next316 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_315_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_315_Just_t ) {
                struct envunion306  temp317 = (  fun1057 );
                ( temp317.fun ( &temp317.env ,  ( dref1059 .stuff .Maybe_315_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_312   zip318 (    struct Slice_11  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_289  left_dash_it919 = ( (  into_dash_iter291 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_312) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr320 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free319 (    enum CAllocator_8  dref1929 ,    struct Slice_11  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr320 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full299 (   struct env2* env ,    struct List_10 *  list2011 ) {
    if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2011 ) .f_elements = ( (  allocate300 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( env->starting_dash_size2006 ) ) );
    } else {
        if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , ( ( ( * (  list2011 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2012 = ( (  allocate300 ) ( ( ( * (  list2011 ) ) .f_al ) ,  (  op_dash_mul196 ( ( ( * (  list2011 ) ) .f_count ) , ( env->growth_dash_factor2007 ) ) ) ) );
            struct env305 envinst305 = {
                .new_dash_slice2012 =  new_dash_slice2012 ,
            };
            struct envunion306  fun2016 = ( (struct envunion306){ .fun = (  enum Unit_6  (*) (  struct env305*  ,    struct Tuple2_307  ) )lam308 , .env =  envinst305 } );
            ( (  for_dash_each311 ) ( ( (  zip318 ) ( ( ( * (  list2011 ) ) .f_elements ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2016 ) ) );
            ( (  free319 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( ( * (  list2011 ) ) .f_elements ) ) );
            (*  list2011 ) .f_elements = (  new_dash_slice2012 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add297 (   struct env12* env ,    struct List_10 *  list2019 ,    uint8_t  elem2021 ) {
    struct envunion13  temp298 = ( (struct envunion13){ .fun = (  enum Unit_6  (*) (  struct env2*  ,    struct List_10 *  ) )grow_dash_if_dash_full299 , .env =  env->envinst2 } );
    ( temp298.fun ( &temp298.env ,  (  list2019 ) ) );
    ( (  set309 ) ( ( ( * (  list2019 ) ) .f_elements ) ,  ( ( * (  list2019 ) ) .f_count ) ,  (  elem2021 ) ) );
    (*  list2019 ) .f_count = (  op_dash_add183 ( ( ( * (  list2019 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam295 (   struct env287* env ,    uint8_t  x2072 ) {
    struct envunion31  temp296 = ( (struct envunion31){ .fun = (  enum Unit_6  (*) (  struct env12*  ,    struct List_10 *  ,    uint8_t  ) )add297 , .env =  env->envinst12 } );
    return ( temp296.fun ( &temp296.env ,  ( env->list2068 ) ,  (  x2072 ) ) );
}

static  enum Unit_6   add_dash_all285 (   struct env30* env ,    struct List_10 *  list2068 ,    struct Slice_11  it2070 ) {
    struct env287 envinst287 = {
        .envinst12 = env->envinst12 ,
        .list2068 =  list2068 ,
    };
    ( (  for_dash_each286 ) ( (  it2070 ) ,  ( (struct envunion288){ .fun = (  enum Unit_6  (*) (  struct env287*  ,    uint8_t  ) )lam295 , .env =  envinst287 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10   from_dash_iter282 (   struct env35* env ,    struct Slice_11  iter2106 ,    enum CAllocator_8  al2108 ) {
    struct List_10  temp283 = ( (  mk234 ) ( (  al2108 ) ) );
    struct List_10 *  list2109 = ( &temp283 );
    struct envunion36  temp284 = ( (struct envunion36){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
    ( temp284.fun ( &temp284.env ,  (  list2109 ) ,  (  iter2106 ) ) );
    return ( * (  list2109 ) );
}

static  struct StrView_20   or_dash_else322 (    struct Maybe_97  self1708 ,    struct StrView_20  alt1710 ) {
    struct Maybe_97  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_97_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_97_Just_t ) {
            return ( dref1711 .stuff .Maybe_97_Just_s .field0 );
        }
    }
}

struct LineIter_324 {
    struct StrView_20  f_og;
    size_t  f_last;
};

static  uint8_t   undefined328 (  ) {
    uint8_t  temp329;
    return (  temp329 );
}

static  uint8_t   or_dash_fail327 (    struct Maybe_292  x1701 ,    struct StrConcat_204  errmsg1703 ) {
    struct Maybe_292  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_292_None_t ) {
        ( (  panic203 ) ( (  errmsg1703 ) ) );
        return ( (  undefined328 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_292_Just_t ) {
            return ( dref1704 .stuff .Maybe_292_Just_s .field0 );
        }
    }
}

static  struct Maybe_292   try_dash_get330 (    struct Slice_11  slice1739 ,    size_t  i1741 ) {
    if ( ( (  cmp132 ( (  i1741 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1741 ) , ( (  slice1739 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_292) { .tag = Maybe_292_None_t } );
    }
    uint8_t *  elem_dash_ptr1742 = ( (  offset_dash_ptr276 ) ( ( (  slice1739 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1741 ) ) ) ) );
    return ( ( Maybe_292_Just ) ( ( * (  elem_dash_ptr1742 ) ) ) );
}

static  uint8_t   get326 (    struct Slice_11  slice1745 ,    size_t  i1747 ) {
    return ( (  or_dash_fail327 ) ( ( (  try_dash_get330 ) ( (  slice1745 ) ,  (  i1747 ) ) ) ,  ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1747 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1745 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8331 (    struct Char_141  c721 ) {
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

static  struct StrView_20   byte_dash_substr332 (    struct StrView_20  s2150 ,    size_t  from2152 ,    size_t  to2154 ) {
    return ( (struct StrView_20) { .f_contents = ( (  subslice275 ) ( ( (  s2150 ) .f_contents ) ,  (  from2152 ) ,  (  to2154 ) ) ) } );
}

static  struct Maybe_97   next325 (    struct LineIter_324 *  self2355 ) {
    if ( (  cmp132 ( ( ( * (  self2355 ) ) .f_last ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_97) { .tag = Maybe_97_None_t } );
    }
    size_t  i2356 = ( ( * (  self2355 ) ) .f_last );
    while ( ( (  cmp132 ( (  i2356 ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq158 ( ( (  get326 ) ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) ,  (  i2356 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2356 = (  op_dash_add183 ( (  i2356 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_20  line2357 = ( (  byte_dash_substr332 ) ( ( ( * (  self2355 ) ) .f_og ) ,  ( ( * (  self2355 ) ) .f_last ) ,  (  i2356 ) ) );
    if ( (  cmp132 ( (  i2356 ) , ( ( ( ( * (  self2355 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2356 = (  op_dash_add183 ( (  i2356 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2355 ) .f_last = (  i2356 );
    return ( ( Maybe_97_Just ) ( (  line2357 ) ) );
}

static  struct LineIter_324   into_dash_iter334 (    struct LineIter_324  self2352 ) {
    return (  self2352 );
}

static  struct Maybe_97   head323 (    struct LineIter_324  it1123 ) {
    struct LineIter_324  temp333 = ( (  into_dash_iter334 ) ( (  it1123 ) ) );
    return ( (  next325 ) ( ( &temp333 ) ) );
}

static  struct LineIter_324   lines335 (    struct StrView_20  s2349 ) {
    return ( (struct LineIter_324) { .f_og = (  s2349 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env340 {
    struct Char_141  c2173;
    ;
};

struct envunion341 {
    bool  (*fun) (  struct env340*  ,    struct Char_141  );
    struct env340 env;
};

struct SplitIter_339 {
    struct StrView_20  f_og;
    size_t  f_last;
    struct envunion341  f_fun;
};

struct Drop_338 {
    struct SplitIter_339  field0;
    size_t  field1;
};

static struct Drop_338 Drop_338_Drop (  struct SplitIter_339  field0 ,  size_t  field1 ) {
    return ( struct Drop_338 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_337 {
    struct Drop_338  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_337   into_dash_iter342 (    struct Zip_337  self905 ) {
    return (  self905 );
}

static  struct Drop_338   into_dash_iter344 (    struct Drop_338  self839 ) {
    return (  self839 );
}

static  struct Zip_337   zip343 (    struct Drop_338  left916 ,    struct FromIter_217  right918 ) {
    struct Drop_338  left_dash_it919 = ( (  into_dash_iter344 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_337) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct SplitIter_339   into_dash_iter346 (    struct SplitIter_339  self2178 ) {
    return (  self2178 );
}

static  struct Drop_338   drop345 (    struct SplitIter_339  iterable846 ,    size_t  i848 ) {
    struct SplitIter_339  it849 = ( (  into_dash_iter346 ) ( (  iterable846 ) ) );
    return ( ( Drop_338_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SplitIter_339   split_dash_by_dash_filter348 (    struct StrView_20  s2166 ,   struct envunion341  fun2168 ) {
    return ( (struct SplitIter_339) { .f_og = (  s2166 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2168 ) } );
}

struct Tuple2_351 {
    struct CharDestructured_156  field0;
    struct CharDestructured_156  field1;
};

static struct Tuple2_351 Tuple2_351_Tuple2 (  struct CharDestructured_156  field0 ,  struct CharDestructured_156  field1 ) {
    return ( struct Tuple2_351 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq352 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq350 (    struct Char_141  l727 ,    struct Char_141  r729 ) {
    if ( ( !  eq190 ( ( (  l727 ) .f_num_dash_bytes ) , ( (  r729 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_351  dref730 = ( ( Tuple2_351_Tuple2 ) ( ( (  destructure157 ) ( (  l727 ) ) ) ,  ( (  destructure157 ) ( (  r729 ) ) ) ) );
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
            return (  eq352 ( ( dref730 .field0 .stuff .CharDestructured_156_Scalar_s .field0 ) , ( dref730 .field1 .stuff .CharDestructured_156_Scalar_s .field0 ) ) );
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

static  bool   lam349 (   struct env340* env ,    struct Char_141  cc2175 ) {
    return (  eq350 ( (  cc2175 ) , ( env->c2173 ) ) );
}

static  struct SplitIter_339   split_dash_by_dash_each347 (    struct StrView_20  s2171 ,    struct Char_141  c2173 ) {
    struct env340 envinst340 = {
        .c2173 =  c2173 ,
    };
    return ( (  split_dash_by_dash_filter348 ) ( (  s2171 ) ,  ( (struct envunion341){ .fun = (  bool  (*) (  struct env340*  ,    struct Char_141  ) )lam349 , .env =  envinst340 } ) ) );
}

struct Tuple2_355 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct Tuple2_355 Tuple2_355_Tuple2 (  struct StrView_20  field0 ,  int32_t  field1 ) {
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

static  struct Maybe_97   next358 (    struct SplitIter_339 *  self2181 ) {
    if ( (  cmp132 ( ( ( * (  self2181 ) ) .f_last ) , ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_97) { .tag = Maybe_97_None_t } );
    }
    size_t  i2182 = ( ( * (  self2181 ) ) .f_last );
    while ( (  cmp132 ( (  i2182 ) , ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2183 = ( (  get_dash_ptr310 ) ( ( ( ( * (  self2181 ) ) .f_og ) .f_contents ) ,  (  i2182 ) ) );
        struct Char_141  c2184 = ( (  scan_dash_from_dash_mem173 ) ( (  ptr2183 ) ) );
        struct envunion341  temp359 = ( ( * (  self2181 ) ) .f_fun );
        if ( ( temp359.fun ( &temp359.env ,  (  c2184 ) ) ) ) {
            break;
        }
        i2182 = (  op_dash_add183 ( (  i2182 ) , ( (  next_dash_char174 ) ( (  ptr2183 ) ) ) ) );
    }
    struct StrView_20  line2185 = ( (  byte_dash_substr332 ) ( ( ( * (  self2181 ) ) .f_og ) ,  ( ( * (  self2181 ) ) .f_last ) ,  (  i2182 ) ) );
    i2182 = (  op_dash_add183 ( (  i2182 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2181 ) .f_last = (  i2182 );
    return ( ( Maybe_97_Just ) ( (  line2185 ) ) );
}

static  struct Maybe_97   next357 (    struct Drop_338 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next358 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next358 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  struct Maybe_354   next356 (    struct Zip_337 *  self908 ) {
    struct Zip_337  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_97  dref910 = ( (  next357 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_97_None_t ) {
            return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_97_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_354) { .tag = Maybe_354_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next357 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_354_Just ) ( ( ( Tuple2_355_Tuple2 ) ( ( dref910 .stuff .Maybe_97_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion362 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

static  enum Unit_6   insert364 (   struct env23* env ,    struct List_7 *  list2024 ,    size_t  i2026 ,    struct List_10  elem2028 ) {
    if ( ( (  cmp132 ( (  i2026 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i2026 ) , ( ( * (  list2024 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2026 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2024 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq190 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion24  temp365 = ( (struct envunion24){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add187 , .env =  env->envinst4 } );
        ( temp365.fun ( &temp365.env ,  (  list2024 ) ,  (  elem2028 ) ) );
        return ( Unit_6_Unit );
    }
    struct envunion25  temp366 = ( (struct envunion25){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full189 , .env =  env->envinst1 } );
    ( temp366.fun ( &temp366.env ,  (  list2024 ) ) );
    size_t  ii2029 = (  op_dash_sub254 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp132 ( (  ii2029 ) , (  i2026 ) ) != 0 ) ) {
        ( (  set201 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  (  op_dash_add183 ( (  ii2029 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get272 ) ( (  list2024 ) ,  (  ii2029 ) ) ) ) );
        if ( (  eq190 ( (  ii2029 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2029 = (  op_dash_sub254 ( (  ii2029 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set201 ) ( ( ( * (  list2024 ) ) .f_elements ) ,  (  i2026 ) ,  (  elem2028 ) ) );
    (*  list2024 ) .f_count = (  op_dash_add183 ( ( ( * (  list2024 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion368 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  enum Unit_6   free369 (    struct List_10 *  list2005 ) {
    ( (  free319 ) ( ( ( * (  list2005 ) ) .f_al ) ,  ( ( * (  list2005 ) ) .f_elements ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   add_dash_to_dash_spot271 (   struct env53* env ,    struct TextBuf_63 *  self3520 ,    struct Pos_19  p3522 ,    struct StrView_20  bytes3524 ) {
    enum CAllocator_8  al3525 = ( ( ( * (  self3520 ) ) .f_buf ) .f_al );
    struct List_7 *  buf3526 = ( & ( ( * (  self3520 ) ) .f_buf ) );
    struct List_10  extracted_dash_line_dash_buf3527 = ( (  get272 ) ( (  buf3526 ) ,  ( (  i32_dash_size213 ) ( ( (  p3522 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3528 = ( (  from274 ) ( ( (  to_dash_slice279 ) ( (  extracted_dash_line_dash_buf3527 ) ) ) ,  ( (  i32_dash_size213 ) ( ( (  p3522 ) .f_bi ) ) ) ) );
    struct envunion54  temp281 = ( (struct envunion54){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter282 , .env =  env->envinst35 } );
    ( (  set280 ) ( (  buf3526 ) ,  ( (  i32_dash_size213 ) ( ( (  p3522 ) .f_line ) ) ) ,  ( temp281.fun ( &temp281.env ,  ( (  subslice275 ) ( ( (  to_dash_slice279 ) ( (  extracted_dash_line_dash_buf3527 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size213 ) ( ( (  p3522 ) .f_bi ) ) ) ) ) ,  (  al3525 ) ) ) ) );
    struct List_10 *  last_dash_line3529 = ( (  get_dash_ptr273 ) ( (  buf3526 ) ,  ( (  i32_dash_size213 ) ( ( (  p3522 ) .f_line ) ) ) ) );
    struct envunion56  temp321 = ( (struct envunion56){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
    ( temp321.fun ( &temp321.env ,  (  last_dash_line3529 ) ,  ( ( (  or_dash_else322 ) ( ( (  head323 ) ( ( (  lines335 ) ( (  bytes3524 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3530 = (  from_dash_integral38 ( 0 ) );
    struct Zip_337  temp336 =  into_dash_iter342 ( ( (  zip343 ) ( ( (  drop345 ) ( ( (  split_dash_by_dash_each347 ) ( (  bytes3524 ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_354  __cond353 =  next356 (&temp336);
        if (  __cond353 .tag == 0 ) {
            break;
        }
        struct Tuple2_355  dref3531 =  __cond353 .stuff .Maybe_354_Just_s .field0;
        struct envunion362  temp361 = ( (struct envunion362){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter282 , .env =  env->envinst35 } );
        struct List_10  temp360 = ( temp361.fun ( &temp361.env ,  ( ( dref3531 .field0 ) .f_contents ) ,  (  al3525 ) ) );
        struct List_10 *  nuline3534 = ( &temp360 );
        size_t  next_dash_line3535 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( ( (  p3522 ) .f_line ) , ( dref3531 .field1 ) ) ) ) );
        struct envunion55  temp363 = ( (struct envunion55){ .fun = (  enum Unit_6  (*) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  ) )insert364 , .env =  env->envinst23 } );
        ( temp363.fun ( &temp363.env ,  (  buf3526 ) ,  (  next_dash_line3535 ) ,  ( * (  nuline3534 ) ) ) );
        last_dash_line3529 = ( (  get_dash_ptr273 ) ( (  buf3526 ) ,  (  next_dash_line3535 ) ) );
        lines_dash_added3530 = (  op_dash_add225 ( (  lines_dash_added3530 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    struct envunion368  temp367 = ( (struct envunion368){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
    ( temp367.fun ( &temp367.env ,  (  last_dash_line3529 ) ,  (  remaining3528 ) ) );
    ( (  free369 ) ( ( & (  extracted_dash_line_dash_buf3527 ) ) ) );
    return (  lines_dash_added3530 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_133   cmp372 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_133   cmp371 (    struct Pos_19  l3482 ,    struct Pos_19  r3484 ) {
    enum Ordering_133  dref3485 = ( (  cmp372 ) ( ( (  l3482 ) .f_line ) ,  ( (  r3484 ) .f_line ) ) );
    switch (  dref3485 ) {
        case Ordering_133_EQ : {
            return ( (  cmp372 ) ( ( (  l3482 ) .f_bi ) ,  ( (  r3484 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_133  els3486 =  dref3485;
            return (  els3486 );
            break;
        }
    }
}

static  struct Pos_19   min370 (    struct Pos_19  l1217 ,    struct Pos_19  r1219 ) {
    if ( (  cmp371 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Pos_19   max373 (    struct Pos_19  l1296 ,    struct Pos_19  r1298 ) {
    if ( (  cmp371 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  size_t   size374 (    struct List_10 *  l2103 ) {
    return ( ( * (  l2103 ) ) .f_count );
}

struct StrConcat_380 {
    struct StrConcat_140  field0;
    struct Char_141  field1;
};

static struct StrConcat_380 StrConcat_380_StrConcat (  struct StrConcat_140  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_380 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_379 {
    struct StrConcat_380  field0;
    size_t  field1;
};

static struct StrConcat_379 StrConcat_379_StrConcat (  struct StrConcat_380  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_379 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_378 {
    struct StrConcat_379  field0;
    struct Char_141  field1;
};

static struct StrConcat_378 StrConcat_378_StrConcat (  struct StrConcat_379  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_378 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_383 {
    struct StrView_20  field0;
    struct StrConcat_378  field1;
};

static struct StrConcat_383 StrConcat_383_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_378  field1 ) {
    return ( struct StrConcat_383 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_382 {
    struct StrConcat_383  field0;
    struct Char_141  field1;
};

static struct StrConcat_382 StrConcat_382_StrConcat (  struct StrConcat_383  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_382 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str387 (    struct StrConcat_380  self1484 ) {
    struct StrConcat_380  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str151 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str386 (    struct StrConcat_379  self1484 ) {
    struct StrConcat_379  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str387 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str152 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str385 (    struct StrConcat_378  self1484 ) {
    struct StrConcat_378  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str386 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str384 (    struct StrConcat_383  self1484 ) {
    struct StrConcat_383  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str385 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str381 (    struct StrConcat_382  self1484 ) {
    struct StrConcat_382  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str384 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic377 (    struct StrConcat_378  errmsg1688 ) {
    ( (  print_dash_str381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct Drop_389 {
    struct Zip_312  field0;
    size_t  field1;
};

static struct Drop_389 Drop_389_Drop (  struct Zip_312  field0 ,  size_t  field1 ) {
    return ( struct Drop_389 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env390 {
    struct List_10 *  list2032;
    ;
    ;
    size_t  num_dash_elems2037;
    ;
};

struct envunion391 {
    enum Unit_6  (*fun) (  struct env390*  ,    struct Tuple2_307  );
    struct env390 env;
};

static  struct Drop_389   into_dash_iter393 (    struct Drop_389  self839 ) {
    return (  self839 );
}

static  struct Maybe_315   next394 (    struct Drop_389 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next316 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next316 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each388 (    struct Drop_389  iterable1055 ,   struct envunion391  fun1057 ) {
    struct Drop_389  temp392 = ( (  into_dash_iter393 ) ( (  iterable1055 ) ) );
    struct Drop_389 *  it1058 = ( &temp392 );
    while ( ( true ) ) {
        struct Maybe_315  dref1059 = ( (  next394 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_315_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_315_Just_t ) {
                struct envunion391  temp395 = (  fun1057 );
                ( temp395.fun ( &temp395.env ,  ( dref1059 .stuff .Maybe_315_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_389   drop396 (    struct Zip_312  iterable846 ,    size_t  i848 ) {
    struct Zip_312  it849 = ( (  into_dash_iter314 ) ( (  iterable846 ) ) );
    return ( ( Drop_389_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

static  struct SliceIter_289   into_dash_iter398 (    struct List_10  self1998 ) {
    return ( (  into_dash_iter291 ) ( ( (  subslice275 ) ( ( (  self1998 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self1998 ) .f_count ) ) ) ) );
}

static  struct Zip_312   zip397 (    struct List_10  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_289  left_dash_it919 = ( (  into_dash_iter398 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_312) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   set400 (    struct List_10 *  list1991 ,    size_t  i1993 ,    uint8_t  elem1995 ) {
    if ( ( (  cmp132 ( (  i1993 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1993 ) , ( ( * (  list1991 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i1993 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1991 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set309 ) ( ( ( * (  list1991 ) ) .f_elements ) ,  (  i1993 ) ,  (  elem1995 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam399 (   struct env390* env ,    struct Tuple2_307  dref2038 ) {
    return ( (  set400 ) ( ( env->list2032 ) ,  (  op_dash_sub254 ( ( (  i32_dash_size213 ) ( ( dref2038 .field1 ) ) ) , ( env->num_dash_elems2037 ) ) ) ,  ( dref2038 .field0 ) ) );
}

struct StrConcat_403 {
    struct StrConcat_205  field0;
    struct StrView_20  field1;
};

static struct StrConcat_403 StrConcat_403_StrConcat (  struct StrConcat_205  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_403 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_406 {
    struct StrView_20  field0;
    struct StrConcat_403  field1;
};

static struct StrConcat_406 StrConcat_406_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_403  field1 ) {
    return ( struct StrConcat_406 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_405 {
    struct StrConcat_406  field0;
    struct Char_141  field1;
};

static struct StrConcat_405 StrConcat_405_StrConcat (  struct StrConcat_406  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_405 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str408 (    struct StrConcat_403  self1484 ) {
    struct StrConcat_403  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str211 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str146 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str407 (    struct StrConcat_406  self1484 ) {
    struct StrConcat_406  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str408 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str404 (    struct StrConcat_405  self1484 ) {
    struct StrConcat_405  dref1485 = (  self1484 );
    if ( true ) {
        ( (  print_dash_str407 ) ( ( dref1485 .field0 ) ) );
        ( (  print_dash_str154 ) ( ( dref1485 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic402 (    struct StrConcat_403  errmsg1688 ) {
    ( (  print_dash_str404 ) ( ( ( StrConcat_405_StrConcat ) ( ( ( StrConcat_406_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct env410 {
    ;
    struct Slice_11  dest1829;
    ;
};

struct envunion411 {
    enum Unit_6  (*fun) (  struct env410*  ,    struct Tuple2_307  );
    struct env410 env;
};

static  enum Unit_6   for_dash_each409 (    struct Zip_312  iterable1055 ,   struct envunion411  fun1057 ) {
    struct Zip_312  temp412 = ( (  into_dash_iter314 ) ( (  iterable1055 ) ) );
    struct Zip_312 *  it1058 = ( &temp412 );
    while ( ( true ) ) {
        struct Maybe_315  dref1059 = ( (  next316 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_315_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_315_Just_t ) {
                struct envunion411  temp413 = (  fun1057 );
                ( temp413.fun ( &temp413.env ,  ( dref1059 .stuff .Maybe_315_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam414 (   struct env410* env ,    struct Tuple2_307  dref1830 ) {
    return ( (  set309 ) ( ( env->dest1829 ) ,  ( (  i32_dash_size213 ) ( ( dref1830 .field1 ) ) ) ,  ( dref1830 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to401 (    struct Slice_11  src1827 ,    struct Slice_11  dest1829 ) {
    if ( (  cmp132 ( ( (  src1827 ) .f_count ) , ( (  dest1829 ) .f_count ) ) == 2 ) ) {
        ( (  panic402 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1827 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1829 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env410 envinst410 = {
        .dest1829 =  dest1829 ,
    };
    ( (  for_dash_each409 ) ( ( (  zip318 ) ( (  src1827 ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion411){ .fun = (  enum Unit_6  (*) (  struct env410*  ,    struct Tuple2_307  ) )lam414 , .env =  envinst410 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range376 (   struct env26* env ,    struct List_10 *  list2032 ,    size_t  from2034 ,    size_t  to_dash_excl2036 ) {
    if ( (  cmp132 ( (  to_dash_excl2036 ) , (  from2034 ) ) == 0 ) ) {
        ( (  panic377 ) ( ( ( StrConcat_378_StrConcat ) ( ( ( StrConcat_379_StrConcat ) ( ( ( StrConcat_380_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  from2034 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp132 ( (  to_dash_excl2036 ) , ( ( * (  list2032 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_string170 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2037 = (  op_dash_sub254 ( (  to_dash_excl2036 ) , (  from2034 ) ) );
    struct env390 envinst390 = {
        .list2032 =  list2032 ,
        .num_dash_elems2037 =  num_dash_elems2037 ,
    };
    ( (  for_dash_each388 ) ( ( (  drop396 ) ( ( (  zip397 ) ( ( * (  list2032 ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add183 ( (  from2034 ) , (  num_dash_elems2037 ) ) ) ) ) ,  ( (struct envunion391){ .fun = (  enum Unit_6  (*) (  struct env390*  ,    struct Tuple2_307  ) )lam399 , .env =  envinst390 } ) ) );
    (*  list2032 ) .f_count = (  op_dash_sub254 ( ( ( * (  list2032 ) ) .f_count ) , (  num_dash_elems2037 ) ) );
    size_t  capacity2041 = ( ( ( * (  list2032 ) ) .f_elements ) .f_count );
    if ( (  cmp132 ( (  op_dash_mul196 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  capacity2041 ) ) == 0 ) ) {
        if ( (  eq190 ( ( ( * (  list2032 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free319 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
            (*  list2032 ) .f_elements = ( (  empty235 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2042 = (  op_dash_mul196 ( (  op_dash_add183 ( (  op_dash_div161 ( ( ( * (  list2032 ) ) .f_count ) , ( env->shrink_dash_factor2008 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2008 ) ) );
        struct Slice_11  new_dash_slice2043 = ( (  allocate300 ) ( ( ( * (  list2032 ) ) .f_al ) ,  (  new_dash_size2042 ) ) );
        ( (  copy_dash_to401 ) ( ( (  subslice275 ) ( ( ( * (  list2032 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2032 ) ) .f_count ) ) ) ,  (  new_dash_slice2043 ) ) );
        ( (  free319 ) ( ( ( * (  list2032 ) ) .f_al ) ,  ( ( * (  list2032 ) ) .f_elements ) ) );
        (*  list2032 ) .f_elements = (  new_dash_slice2043 );
    }
    return ( Unit_6_Unit );
}

struct envunion416 {
    int32_t  (*fun) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env53 env;
};

static  enum Unit_6   trim417 (    struct List_10 *  l2085 ,    size_t  new_dash_count2087 ) {
    (*  l2085 ) .f_count = ( (  min278 ) ( (  new_dash_count2087 ) ,  ( ( * (  l2085 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   min418 (    int32_t  l1217 ,    int32_t  r1219 ) {
    if ( (  cmp372 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

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
    return ( ( Maybe_130_Just ) ( ( (  get272 ) ( (  list1986 ) ,  (  i1988 ) ) ) ) );
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
    size_t  count1764 = (  op_dash_sub254 ( ( (  min278 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
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
    return ( (  set280 ) ( ( env->list2032 ) ,  (  op_dash_sub254 ( ( (  i32_dash_size213 ) ( ( dref2038 .field1 ) ) ) , ( env->num_dash_elems2037 ) ) ) ,  ( dref2038 .field0 ) ) );
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
        ( (  panic402 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1827 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1829 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env447 envinst447 = {
        .dest1829 =  dest1829 ,
    };
    ( (  for_dash_each446 ) ( ( (  zip227 ) ( (  src1827 ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion448){ .fun = (  enum Unit_6  (*) (  struct env447*  ,    struct Tuple2_199  ) )lam451 , .env =  envinst447 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range431 (   struct env27* env ,    struct List_7 *  list2032 ,    size_t  from2034 ,    size_t  to_dash_excl2036 ) {
    if ( (  cmp132 ( (  to_dash_excl2036 ) , (  from2034 ) ) == 0 ) ) {
        ( (  panic377 ) ( ( ( StrConcat_378_StrConcat ) ( ( ( StrConcat_379_StrConcat ) ( ( ( StrConcat_380_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2034 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2036 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
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

static  enum Unit_6   change_dash_no_dash_action264 (   struct env57* env ,    struct TextBuf_63 *  self3538 ,    struct Pos_19  from3540 ,    struct Pos_19  to3542 ,    struct StrView_20  bytes3544 ) {
    if ( (  eq265 ( (  to3542 ) , (  from3540 ) ) ) ) {
        enum CAllocator_8  al3545 = ( ( ( * (  self3538 ) ) .f_buf ) .f_al );
        if ( ( (  eq190 ( ( (  size267 ) ( ( & ( ( * (  self3538 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size213 ) ( ( (  from3540 ) .f_line ) ) ) ) ) && (  eq266 ( ( (  from3540 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) ) {
            struct envunion60  temp268 = ( (struct envunion60){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add187 , .env =  env->envinst4 } );
            ( temp268.fun ( &temp268.env ,  ( & ( ( * (  self3538 ) ) .f_buf ) ) ,  ( (  mk234 ) ( (  al3545 ) ) ) ) );
        }
        struct envunion270  temp269 = ( (struct envunion270){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot271 , .env =  env->envinst53 } );
        ( temp269.fun ( &temp269.env ,  (  self3538 ) ,  (  from3540 ) ,  (  bytes3544 ) ) );
    } else {
        struct Pos_19  from3546 = ( (  min370 ) ( (  from3540 ) ,  (  to3542 ) ) );
        struct Pos_19  to3547 = ( (  max373 ) ( (  from3546 ) ,  (  to3542 ) ) );
        struct List_7 *  lines_dash_buf3548 = ( & ( ( * (  self3538 ) ) .f_buf ) );
        struct List_10 *  first_dash_line3549 = ( (  get_dash_ptr273 ) ( (  lines_dash_buf3548 ) ,  ( (  i32_dash_size213 ) ( ( (  from3546 ) .f_line ) ) ) ) );
        if ( ( (  eq266 ( ( (  from3546 ) .f_line ) , ( (  to3547 ) .f_line ) ) ) && (  cmp372 ( ( (  to3547 ) .f_bi ) , (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size374 ) ( (  first_dash_line3549 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion58  temp375 = ( (struct envunion58){ .fun = (  enum Unit_6  (*) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  ) )remove_dash_range376 , .env =  env->envinst26 } );
            ( temp375.fun ( &temp375.env ,  (  first_dash_line3549 ) ,  ( (  i32_dash_size213 ) ( ( (  from3546 ) .f_bi ) ) ) ,  ( (  i32_dash_size213 ) ( ( (  to3547 ) .f_bi ) ) ) ) );
            struct envunion416  temp415 = ( (struct envunion416){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot271 , .env =  env->envinst53 } );
            ( temp415.fun ( &temp415.env ,  (  self3538 ) ,  (  from3546 ) ,  (  bytes3544 ) ) );
        } else {
            ( (  trim417 ) ( (  first_dash_line3549 ) ,  ( (  i32_dash_size213 ) ( ( (  from3546 ) .f_bi ) ) ) ) );
            struct List_10 *  last_dash_line3550 = ( (  get_dash_ptr273 ) ( (  lines_dash_buf3548 ) ,  ( (  i32_dash_size213 ) ( ( (  to3547 ) .f_line ) ) ) ) );
            to3547 .f_bi = ( (  min418 ) ( ( (  to3547 ) .f_bi ) ,  (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size374 ) ( (  last_dash_line3550 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            if ( (  eq266 ( ( (  to3547 ) .f_bi ) , (  op_dash_add225 ( ( (  size_dash_i32147 ) ( ( (  size374 ) ( (  last_dash_line3550 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
                to3547 .f_line = (  op_dash_add225 ( ( (  to3547 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) );
                to3547 .f_bi = (  from_dash_integral38 ( 0 ) );
            }
            struct envunion62  temp419 = ( (struct envunion62){ .fun = (  int32_t  (*) (  struct env53*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot271 , .env =  env->envinst53 } );
            int32_t  lines_dash_added3551 = ( temp419.fun ( &temp419.env ,  (  self3538 ) ,  (  from3546 ) ,  (  bytes3544 ) ) );
            to3547 .f_line = (  op_dash_add225 ( ( (  to3547 ) .f_line ) , (  lines_dash_added3551 ) ) );
            from3546 .f_line = (  op_dash_add225 ( ( (  from3546 ) .f_line ) , (  lines_dash_added3551 ) ) );
            struct Slice_11  last_dash_line3552 = ( (  or_dash_else420 ) ( ( (  fmap_dash_maybe422 ) ( ( (  try_dash_get423 ) ( (  lines_dash_buf3548 ) ,  ( (  i32_dash_size213 ) ( ( (  to3547 ) .f_line ) ) ) ) ) ,  (  to_dash_slice279 ) ) ) ,  ( (  empty235 ) ( ) ) ) );
            struct envunion61  temp424 = ( (struct envunion61){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
            ( temp424.fun ( &temp424.env ,  (  first_dash_line3549 ) ,  ( (  from274 ) ( (  last_dash_line3552 ) ,  ( (  i32_dash_size213 ) ( ( (  to3547 ) .f_bi ) ) ) ) ) ) );
            ( (  assert425 ) ( (  cmp372 ( ( (  to3547 ) .f_line ) , ( (  from3546 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string170 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion59  temp430 = ( (struct envunion59){ .fun = (  enum Unit_6  (*) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  ) )remove_dash_range431 , .env =  env->envinst27 } );
            ( temp430.fun ( &temp430.env ,  ( & ( ( * (  self3538 ) ) .f_buf ) ) ,  ( (  i32_dash_size213 ) ( (  op_dash_add225 ( ( (  from3546 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  op_dash_add183 ( ( (  i32_dash_size213 ) ( ( (  to3547 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
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

static  struct StrView_20   or_dash_fail454 (    struct Maybe_97  x1701 ,    struct StrConcat_455  errmsg1703 ) {
    struct Maybe_97  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_97_None_t ) {
        ( (  panic457 ) ( (  errmsg1703 ) ) );
        return ( (  undefined465 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_97_Just_t ) {
            return ( dref1704 .stuff .Maybe_97_Just_s .field0 );
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

static  struct Maybe_97   try_dash_read_dash_contents467 (    const char*  filename2864 ,    enum CAllocator_8  al2866 ) {
    FILE *  file2867 = ( ( fopen ) ( (  filename2864 ) ,  ( (  from_dash_charlike468 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null469 ) ( (  file2867 ) ) ) ) {
        return ( (struct Maybe_97) { .tag = Maybe_97_None_t } );
    }
    ( ( fseek ) ( (  file2867 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_end475 ) ( ) ) ) );
    int32_t  file_dash_size2868 = ( ( ftell ) ( (  file2867 ) ) );
    ( ( fseek ) ( (  file2867 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_set476 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2869 = ( ( (  allocate300 ) ( (  al2866 ) ,  (  op_dash_add183 ( ( (  i32_dash_size213 ) ( (  file_dash_size2868 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2869 ) .f_ptr ) ,  (  file_dash_size2868 ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  file2867 ) ) );
    ( (  set309 ) ( (  file_dash_buf2869 ) ,  ( (  i32_dash_size213 ) ( (  file_dash_size2868 ) ) ) ,  ( (  char_dash_u8331 ) ( ( (  nullchar477 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2867 ) ) );
    struct StrView_20  str2870 = ( (struct StrView_20) { .f_contents = ( (  subslice275 ) ( (  file_dash_buf2869 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub254 ( ( (  file_dash_buf2869 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_97_Just ) ( (  str2870 ) ) );
}

static  struct StrView_20   read_dash_contents453 (    const char*  filename2873 ,    enum CAllocator_8  al2875 ) {
    return ( (  or_dash_fail454 ) ( ( (  try_dash_read_dash_contents467 ) ( (  filename2873 ) ,  (  al2875 ) ) ) ,  ( ( StrConcat_455_StrConcat ) ( ( ( StrConcat_456_StrConcat ) ( ( (  from_dash_string170 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2873 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_95   mk479 (    enum CAllocator_8  al3671 ,    struct TextBuf_63 *  buf3673 ) {
    return ( (struct Pane_95) { .f_buf = (  buf3673 ) , .f_cursor = ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral38 ( 0 ) ) , .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) , .f_mode = ( Mode_96_Normal ) } );
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
    return ( (  offset_dash_ptr276 ) ( (  p2205 ) ,  ( (int64_t ) (  i2204 ) ) ) );
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
    uint8_t *  char_dash_ptr1356 = ( ( (  offset_dash_ptr276 ) ( ( (  cast172 ) ( ( ( ( ( * (  self1355 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64212 ) ( ( ( * (  self1355 ) ) .f_i ) ) ) ) ) );
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
        if ( (  cmp372 ( ( dref886 .field1 ) , ( dref886 .field0 .field1 ) ) == 2 ) ) {
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
    struct Tui_45 *  tui3890;
    struct env43 envinst43;
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
    if ( (  cmp372 ( ( ( poll ) ( ( (  cast_dash_ptr689 ) ( ( & (  pfd3217 ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  timeout_dash_ms3216 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_686) { .tag = Maybe_686_None_t } );
    }
    char  c3218 = ( ( (  zeroed690 ) ( ) ) );
    if ( (  cmp372 ( ( ( read ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  cast_dash_ptr692 ) ( ( & (  c3218 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
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

static  uint8_t   or_dash_fail717 (    struct Maybe_292  x1701 ,    struct StrConcat_718  errmsg1703 ) {
    struct Maybe_292  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_292_None_t ) {
        ( (  panic720 ) ( (  errmsg1703 ) ) );
        return ( (  undefined328 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_292_Just_t ) {
            return ( dref1704 .stuff .Maybe_292_Just_s .field0 );
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
    return ( (  cmp175 ) ( ( (  char_dash_u8331 ) ( (  l742 ) ) ) ,  ( (  char_dash_u8331 ) ( (  r744 ) ) ) ) );
}

static  uint8_t   op_dash_sub730 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_292   hex_dash_digit727 (    struct Char_141  c2490 ) {
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_292_Just ) ( (  op_dash_sub730 ( ( (  char_dash_u8331 ) ( (  c2490 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_292_Just ) ( (  op_dash_add176 ( (  op_dash_sub730 ( ( (  char_dash_u8331 ) ( (  c2490 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp728 ( (  c2490 ) , ( (  from_dash_charlike171 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_292_Just ) ( (  op_dash_add176 ( (  op_dash_sub730 ( ( (  char_dash_u8331 ) ( (  c2490 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_292) { .tag = Maybe_292_None_t } );
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
    return ( (  offset_dash_ptr276 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
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
    return ( (struct StrView_20) { .f_contents = ( (  subslice275 ) ( ( (  s2139 ) .f_contents ) ,  (  from_dash_bs2144 ) ,  (  to_dash_bs2146 ) ) ) } );
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
    return ( (  cmp175 ( ( (  char_dash_u8331 ) ( (  c2402 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp175 ( ( (  char_dash_u8331 ) ( (  c2402 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
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
        return ( ( Maybe_223_Just ) ( ( (  u8_dash_i32800 ) ( (  op_dash_sub730 ( ( (  char_dash_u8331 ) ( (  c2405 ) ) ) , ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
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
    if ( (  cmp372 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
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
    size_t  count1764 = (  op_dash_sub254 ( ( (  min278 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
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
        while ( (  cmp372 ( (  slen3283 ) , (  from_dash_integral38 ( 31 ) ) ) == 0 ) ) {
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
    return ( temp678.fun ( &temp678.env ,  ( env->tui3890 ) ) );
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
    enum Unit_6  (*fun) (  struct env102*  ,    struct Editor_94 *  ,    struct Key_106  );
    struct env102 env;
};

static  size_t   num_dash_bytes888 (    struct StrView_20  self2162 ) {
    return ( ( (  self2162 ) .f_contents ) .f_count );
}

static  struct StrView_20   from_dash_bytes890 (    struct Slice_11  sl2119 ) {
    return ( (struct StrView_20) { .f_contents = (  sl2119 ) } );
}

static  struct StrView_20   line889 (    struct TextBuf_63 *  self3515 ,    int32_t  li3517 ) {
    return ( (  from_dash_bytes890 ) ( ( (  to_dash_slice279 ) ( ( (  get272 ) ( ( & ( ( * (  self3515 ) ) .f_buf ) ) ,  ( (  i32_dash_size213 ) ( (  li3517 ) ) ) ) ) ) ) ) );
}

static  size_t   clamp891 (    size_t  x1333 ,    size_t  mn1335 ,    size_t  mx1337 ) {
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

static  size_t   sync_dash_char893 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg859 ( ( (  size_dash_i64212 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp175 ( (  pb694 ) , (  from_dash_integral162 ( 128 ) ) ) != 0 ) && (  cmp175 ( (  pb694 ) , (  op_dash_add176 ( (  from_dash_integral162 ( 128 ) ) , (  from_dash_integral162 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add183 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char892 (    uint8_t *  p697 ) {
    return (  op_dash_add183 ( ( (  sync_dash_char893 ) ( ( (  offset_dash_ptr276 ) ( (  p697 ) ,  (  op_dash_neg859 ( (  from_dash_integral253 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_19   left_dash_pos887 (    struct TextBuf_63 *  self3632 ,    struct Pos_19  pos3634 ) {
    if ( (  eq265 ( (  pos3634 ) , ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    if ( (  eq266 ( ( (  pos3634 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        ( (  assert425 ) ( (  cmp372 ( ( (  pos3634 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string170 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk452 ) ( (  op_dash_sub760 ( ( (  pos3634 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes888 ) ( ( (  line889 ) ( (  self3632 ) ,  (  op_dash_sub760 ( ( (  pos3634 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_20  line3635 = ( (  line889 ) ( (  self3632 ) ,  ( (  pos3634 ) .f_line ) ) );
    size_t  pos_dash_bi3636 = ( (  clamp891 ) ( ( (  i32_dash_size213 ) ( ( (  pos3634 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes888 ) ( (  line3635 ) ) ) ) );
    size_t  off3637 = ( (  previous_dash_char892 ) ( ( (  offset_dash_ptr276 ) ( ( ( (  line3635 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  pos_dash_bi3636 ) ) ) ) ) ) );
    return ( (  mk452 ) ( ( (  pos3634 ) .f_line ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( (  pos_dash_bi3636 ) , (  off3637 ) ) ) ) ) ) );
}

static  int32_t   max898 (    int32_t  l1296 ,    int32_t  r1298 ) {
    if ( (  cmp372 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  void *   cast_dash_ptr904 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of905 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed902 (  ) {
    wchar_t  temp903;
    wchar_t  x570 = (  temp903 );
    ( ( memset ) ( ( (  cast_dash_ptr904 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of905 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr906 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast907 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_910 {
    size_t  f_size;
};

static  struct TypeSize_910   get_dash_typesize909 (  ) {
    wchar_t  temp911;
    return ( (struct TypeSize_910) { .f_size = ( sizeof( ( (  temp911 ) ) ) ) } );
}

static  wchar_t   cast913 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar900 (    struct Char_141  c748 ) {
    struct CharDestructured_156  dref749 = ( (  destructure157 ) ( (  c748 ) ) );
    if ( dref749.tag == CharDestructured_156_Ref_t ) {
        wchar_t  temp901 = ( (  zeroed902 ) ( ) );
        wchar_t *  wcp751 = ( &temp901 );
        size_t  num_dash_chars752 = ( ( mbstowcs ) ( (  wcp751 ) ,  ( (  cast_dash_ptr906 ) ( ( ( dref749 .stuff .CharDestructured_156_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq190 ( (  num_dash_chars752 ) , ( ( (  cast907 ) ( ( (  op_dash_neg859 ( (  from_dash_integral253 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp908 = ( (  from_dash_string39 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp908);
            exit ( 1 );
            ( Unit_6_Unit );
        }
        return ( * (  wcp751 ) );
    }
    else {
        if ( dref749.tag == CharDestructured_156_Scalar_t ) {
            if ( ( ! (  eq190 ( ( (  size_dash_of594 ) ( ( dref749 .stuff .CharDestructured_156_Scalar_s .field0 ) ) ) , ( ( ( (  get_dash_typesize909 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp912 = ( (  from_dash_string39 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp912);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            return ( (  cast913 ) ( ( dref749 .stuff .CharDestructured_156_Scalar_s .field0 ) ) );
        }
    }
}

static  int32_t   wcwidth899 (    struct Char_141  c2517 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar900 ) ( (  c2517 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth897 (    struct Char_141  c3345 ) {
    return ( (  max898 ) ( ( (  wcwidth899 ) ( (  c3345 ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   pos_dash_vi894 (    struct TextBuf_63 *  self3697 ,    struct Pos_19  pos3699 ) {
    int32_t  bi3700 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3701 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_552  temp895 =  into_dash_iter554 ( ( (  chars557 ) ( ( (  line889 ) ( (  self3697 ) ,  ( (  pos3699 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_555  __cond896 =  next556 (&temp895);
        if (  __cond896 .tag == 0 ) {
            break;
        }
        struct Char_141  c3703 =  __cond896 .stuff .Maybe_555_Just_s .field0;
        bi3700 = (  op_dash_add225 ( (  bi3700 ) , ( (  size_dash_i32147 ) ( ( (  c3703 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp372 ( ( (  pos3699 ) .f_bi ) , (  bi3700 ) ) == 0 ) ) {
            break;
        }
        vi3701 = (  op_dash_add225 ( (  vi3701 ) , ( (  rendered_dash_wcwidth897 ) ( (  c3703 ) ) ) ) );
    }
    return (  vi3701 );
}

struct Tuple2_916 {
    enum Mode_96  field0;
    enum Mode_96  field1;
};

static struct Tuple2_916 Tuple2_916_Tuple2 (  enum Mode_96  field0 ,  enum Mode_96  field1 ) {
    return ( struct Tuple2_916 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq915 (    enum Mode_96  l3660 ,    enum Mode_96  r3662 ) {
    return ( {  struct Tuple2_916  dref3663 = ( ( Tuple2_916_Tuple2 ) ( (  l3660 ) ,  (  r3662 ) ) ) ;  dref3663 .field0 == Mode_96_Normal &&  dref3663 .field1 == Mode_96_Normal ? ( true ) :  dref3663 .field0 == Mode_96_Insert &&  dref3663 .field1 == Mode_96_Insert ? ( true ) :  dref3663 .field0 == Mode_96_Select &&  dref3663 .field1 == Mode_96_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_6   set_dash_sel914 (    struct Pane_95 *  self3731 ,    struct Maybe_22  sel3733 ) {
    if ( ( !  eq915 ( ( ( * (  self3731 ) ) .f_mode ) , ( Mode_96_Select ) ) ) ) {
        (*  self3731 ) .f_sel = (  sel3733 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_left886 (    struct Pane_95 *  self3739 ) {
    (*  self3739 ) .f_cursor = ( (  left_dash_pos887 ) ( ( ( * (  self3739 ) ) .f_buf ) ,  ( ( * (  self3739 ) ) .f_cursor ) ) );
    (*  self3739 ) .f_vi = ( (  pos_dash_vi894 ) ( ( ( * (  self3739 ) ) .f_buf ) ,  ( ( * (  self3739 ) ) .f_cursor ) ) );
    ( (  set_dash_sel914 ) ( (  self3739 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pane_95 *   pane917 (    struct Editor_94 *  ed3840 ) {
    return ( & ( ( * (  ed3840 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines920 (    struct TextBuf_63 *  self3621 ) {
    return ( (  size_dash_i32147 ) ( ( (  size267 ) ( ( & ( ( * (  self3621 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_19   right_dash_pos919 (    struct TextBuf_63 *  self3624 ,    struct Pos_19  pos3626 ) {
    if ( (  cmp372 ( ( (  pos3626 ) .f_line ) , ( (  num_dash_lines920 ) ( (  self3624 ) ) ) ) != 0 ) ) {
        return ( (  mk452 ) ( ( (  num_dash_lines920 ) ( (  self3624 ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    struct StrView_20  line3627 = ( (  line889 ) ( (  self3624 ) ,  ( (  pos3626 ) .f_line ) ) );
    int64_t  bi3628 = ( (  i32_dash_i64809 ) ( ( (  pos3626 ) .f_bi ) ) );
    if ( (  cmp858 ( (  bi3628 ) , ( (  size_dash_i64212 ) ( ( (  num_dash_bytes888 ) ( (  line3627 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp372 ( (  op_dash_add225 ( ( (  pos3626 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines920 ) ( (  self3624 ) ) ) ) != 0 ) ) {
            return ( (  mk452 ) ( ( (  pos3626 ) .f_line ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes888 ) ( (  line3627 ) ) ) ) ) ) );
        }
        return ( (  mk452 ) ( (  op_dash_add225 ( ( (  pos3626 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    int32_t  off3629 = ( (  size_dash_i32147 ) ( ( (  next_dash_char174 ) ( ( (  offset_dash_ptr276 ) ( ( ( (  line3627 ) .f_contents ) .f_ptr ) ,  (  bi3628 ) ) ) ) ) ) );
    return ( (  mk452 ) ( ( (  pos3626 ) .f_line ) ,  (  op_dash_add225 ( ( (  pos3626 ) .f_bi ) , (  off3629 ) ) ) ) );
}

static  enum Unit_6   move_dash_right918 (    struct Pane_95 *  self3736 ) {
    (*  self3736 ) .f_cursor = ( (  right_dash_pos919 ) ( ( ( * (  self3736 ) ) .f_buf ) ,  ( ( * (  self3736 ) ) .f_cursor ) ) );
    (*  self3736 ) .f_vi = ( (  pos_dash_vi894 ) ( ( ( * (  self3736 ) ) .f_buf ) ,  ( ( * (  self3736 ) ) .f_cursor ) ) );
    ( (  set_dash_sel914 ) ( (  self3736 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   vi_dash_bi922 (    struct TextBuf_63 *  self3686 ,    int32_t  ln3688 ,    int32_t  vx3690 ) {
    int32_t  bi3691 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3692 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_552  temp923 =  into_dash_iter554 ( ( (  chars557 ) ( ( (  line889 ) ( (  self3686 ) ,  (  ln3688 ) ) ) ) ) );
    while (true) {
        struct Maybe_555  __cond924 =  next556 (&temp923);
        if (  __cond924 .tag == 0 ) {
            break;
        }
        struct Char_141  c3694 =  __cond924 .stuff .Maybe_555_Just_s .field0;
        vi3692 = (  op_dash_add225 ( (  vi3692 ) , ( (  rendered_dash_wcwidth897 ) ( (  c3694 ) ) ) ) );
        if ( (  cmp372 ( (  vx3690 ) , (  vi3692 ) ) == 0 ) ) {
            break;
        }
        bi3691 = (  op_dash_add225 ( (  bi3691 ) , ( (  size_dash_i32147 ) ( ( (  c3694 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3691 );
}

static  enum Unit_6   move_dash_down921 (    struct Pane_95 *  self3742 ) {
    struct Pos_19  cur3743 = ( ( * (  self3742 ) ) .f_cursor );
    if ( (  cmp372 ( (  op_dash_add225 ( ( (  cur3743 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines920 ) ( ( ( * (  self3742 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3744 = ( ( * (  self3742 ) ) .f_vi );
    int32_t  bi3745 = ( (  vi_dash_bi922 ) ( ( ( * (  self3742 ) ) .f_buf ) ,  (  op_dash_add225 ( ( (  cur3743 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3744 ) ) );
    (*  self3742 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_add225 ( ( (  cur3743 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3745 ) } );
    ( (  set_dash_sel914 ) ( (  self3742 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_up925 (    struct Pane_95 *  self3748 ) {
    struct Pos_19  cur3749 = ( ( * (  self3748 ) ) .f_cursor );
    if ( (  cmp372 ( ( (  cur3749 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3750 = ( ( * (  self3748 ) ) .f_vi );
    int32_t  bi3751 = ( (  vi_dash_bi922 ) ( ( ( * (  self3748 ) ) .f_buf ) ,  (  op_dash_sub760 ( ( (  cur3749 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3750 ) ) );
    (*  self3748 ) .f_cursor = ( (struct Pos_19) { .f_line = (  op_dash_sub760 ( ( (  cur3749 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3751 ) } );
    ( (  set_dash_sel914 ) ( (  self3748 ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ) );
    return ( Unit_6_Unit );
}

enum MoveDirection_927 {
    MoveDirection_927_MoveFwd,
    MoveDirection_927_MoveBwd,
};

enum MoveTarget_928 {
    MoveTarget_928_NextWordStart,
    MoveTarget_928_NextWordEnd,
};

static  struct Pos_19   own930 (    struct Pos_19  x1232 ) {
    return (  x1232 );
}

struct env931 {
    struct Pos_19 *  prev3786;
    ;
    ;
    struct Pane_95 *  pane3781;
    enum MoveDirection_927  dir3783;
};

struct envunion933 {
    enum Unit_6  (*fun) (  struct env931*  );
    struct env931 env;
};

static  enum Unit_6   advance934 (   struct env931* env ) {
    (* env->prev3786 ) = ( ( * ( env->pane3781 ) ) .f_cursor );
    enum MoveDirection_927  dref3788 = ( env->dir3783 );
    switch (  dref3788 ) {
        case MoveDirection_927_MoveFwd : {
            ( (  move_dash_right918 ) ( ( env->pane3781 ) ) );
            break;
        }
        case MoveDirection_927_MoveBwd : {
            ( (  move_dash_left886 ) ( ( env->pane3781 ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end935 (    struct Pane_95 *  pane3761 ) {
    struct Pos_19  cur3762 = ( ( * (  pane3761 ) ) .f_cursor );
    return (  eq190 ( ( (  i32_dash_size213 ) ( ( (  cur3762 ) .f_bi ) ) ) , ( (  num_dash_bytes888 ) ( ( (  line889 ) ( ( ( * (  pane3761 ) ) .f_buf ) ,  ( (  cur3762 ) .f_line ) ) ) ) ) ) );
}

struct envunion937 {
    enum Unit_6  (*fun) (  struct env931*  );
    struct env931 env;
};

enum CharType_940 {
    CharType_940_CharSpace,
    CharType_940_CharWord,
    CharType_940_CharPunctuation,
};

struct Tuple2_941 {
    enum CharType_940  field0;
    enum CharType_940  field1;
};

static struct Tuple2_941 Tuple2_941_Tuple2 (  enum CharType_940  field0 ,  enum CharType_940  field1 ) {
    return ( struct Tuple2_941 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq939 (    enum CharType_940  l3641 ,    enum CharType_940  r3643 ) {
    struct Tuple2_941  dref3644 = ( ( Tuple2_941_Tuple2 ) ( (  l3641 ) ,  (  r3643 ) ) );
    if (  dref3644 .field0 == CharType_940_CharSpace &&  dref3644 .field1 == CharType_940_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3644 .field0 == CharType_940_CharWord &&  dref3644 .field1 == CharType_940_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3644 .field0 == CharType_940_CharPunctuation &&  dref3644 .field1 == CharType_940_CharPunctuation ) {
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

static  struct Char_141   min946 (    struct Char_141  l1217 ,    struct Char_141  r1219 ) {
    if ( (  cmp728 ( (  l1217 ) , (  r1219 ) ) == 0 ) ) {
        return (  l1217 );
    } else {
        return (  r1219 );
    }
}

static  struct Char_141   max947 (    struct Char_141  l1296 ,    struct Char_141  r1298 ) {
    if ( (  cmp728 ( (  l1296 ) , (  r1298 ) ) == 2 ) ) {
        return (  l1296 );
    } else {
        return (  r1298 );
    }
}

static  bool   between945 (    struct Char_141  c1318 ,    struct Char_141  l1320 ,    struct Char_141  r1322 ) {
    struct Char_141  from1323 = ( (  min946 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Char_141  to1324 = ( (  max947 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp728 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp728 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_alpha944 (    struct Char_141  c2339 ) {
    return ( ( (  between945 ) ( (  c2339 ) ,  ( (  from_dash_charlike171 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) || ( (  between945 ) ( (  c2339 ) ,  ( (  from_dash_charlike171 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit948 (    struct Char_141  c2342 ) {
    return ( (  between945 ) ( (  c2342 ) ,  ( (  from_dash_charlike171 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "9" ) ,  ( 1 ) ) ) ) );
}

static  bool   is_dash_alphanumeric943 (    struct Char_141  c2345 ) {
    return ( ( (  is_dash_alpha944 ) ( (  c2345 ) ) ) || ( (  is_dash_digit948 ) ( (  c2345 ) ) ) );
}

static  bool   is_dash_whitespace949 (    struct Char_141  c2330 ) {
    return ( ( (  eq350 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq350 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq350 ( (  c2330 ) , ( (  from_dash_charlike171 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_940   char_dash_type942 (    struct Char_141  c3647 ) {
    if ( ( ( ( (  is_dash_alphanumeric943 ) ( (  c3647 ) ) ) || (  eq350 ( (  c3647 ) , ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq350 ( (  c3647 ) , ( (  from_dash_charlike171 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_940_CharWord );
    } else {
        if ( ( (  is_dash_whitespace949 ) ( (  c3647 ) ) ) ) {
            return ( CharType_940_CharSpace );
        } else {
            return ( CharType_940_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary938 (    struct Char_141  l3650 ,    struct Char_141  r3652 ) {
    return ( !  eq939 ( ( (  char_dash_type942 ) ( (  l3650 ) ) ) , ( (  char_dash_type942 ) ( (  r3652 ) ) ) ) );
}

static  struct Char_141   or_dash_else951 (    struct Maybe_555  self1708 ,    struct Char_141  alt1710 ) {
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

static  struct Maybe_555   head952 (    struct StrViewIter_552  it1123 ) {
    struct StrViewIter_552  temp953 = ( (  into_dash_iter554 ) ( (  it1123 ) ) );
    return ( (  next556 ) ( ( &temp953 ) ) );
}

static  struct Char_141   char_dash_at950 (    struct Pane_95 *  pane3765 ,    struct Pos_19  pos3767 ) {
    struct StrView_20  line3768 = ( (  line889 ) ( ( ( * (  pane3765 ) ) .f_buf ) ,  ( (  pos3767 ) .f_line ) ) );
    return ( (  or_dash_else951 ) ( ( (  head952 ) ( ( (  chars557 ) ( ( (  byte_dash_substr332 ) ( (  line3768 ) ,  ( (  i32_dash_size213 ) ( ( (  pos3767 ) .f_bi ) ) ) ,  ( (  num_dash_bytes888 ) ( (  line3768 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

struct envunion955 {
    enum Unit_6  (*fun) (  struct env931*  );
    struct env931 env;
};

static  enum Unit_6   print958 (    struct StrView_20  s1677 ) {
    ( (  for_dash_each551 ) ( ( (  chars557 ) ( (  s1677 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  bool   undefined959 (  ) {
    bool  temp960;
    return (  temp960 );
}

static  bool   todo957 (  ) {
    ( (  print958 ) ( ( (  from_dash_string170 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined959 ) ( ) );
}

static  bool   reached_dash_target956 (    struct Pane_95 *  pane3773 ,    enum MoveTarget_928  target3775 ,    struct Pos_19  prev3777 ) {
    return ( {  enum MoveTarget_928  dref3778 = (  target3775 ) ;  dref3778 == MoveTarget_928_NextWordStart ? ( ( (  is_dash_word_dash_boundary938 ) ( ( (  char_dash_at950 ) ( (  pane3773 ) ,  (  prev3777 ) ) ) ,  ( (  char_dash_at950 ) ( (  pane3773 ) ,  ( ( * (  pane3773 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq939 ( ( (  char_dash_type942 ) ( ( (  char_dash_at950 ) ( (  pane3773 ) ,  ( ( * (  pane3773 ) ) .f_cursor ) ) ) ) ) , ( CharType_940_CharSpace ) ) ) ) ) :  dref3778 == MoveTarget_928_NextWordEnd ? ( ( (  is_dash_word_dash_boundary938 ) ( ( (  char_dash_at950 ) ( (  pane3773 ) ,  (  prev3777 ) ) ) ,  ( (  char_dash_at950 ) ( (  pane3773 ) ,  ( ( * (  pane3773 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq939 ( ( (  char_dash_type942 ) ( ( (  char_dash_at950 ) ( (  pane3773 ) ,  (  prev3777 ) ) ) ) ) , ( CharType_940_CharSpace ) ) ) ) ) : ( (  todo957 ) ( ) ) ; } );
}

static  enum Unit_6   advance_dash_word926 (    struct Pane_95 *  pane3781 ,    enum MoveDirection_927  dir3783 ,    enum MoveTarget_928  target3785 ) {
    struct Pos_19  temp929 = ( (  own930 ) ( ( ( * (  pane3781 ) ) .f_cursor ) ) );
    struct Pos_19 *  prev3786 = ( &temp929 );
    struct env931 envinst931 = {
        .prev3786 =  prev3786 ,
        .pane3781 =  pane3781 ,
        .dir3783 =  dir3783 ,
    };
    struct Pos_19  sel3789 = ( ( * (  pane3781 ) ) .f_cursor );
    struct envunion933  temp932 = ( (struct envunion933){ .fun = (  enum Unit_6  (*) (  struct env931*  ) )advance934 , .env =  envinst931 } );
    ( temp932.fun ( &temp932.env ) );
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end935 ) ( (  pane3781 ) ) ) ) {
        if ( (  eq265 ( ( ( * (  pane3781 ) ) .f_cursor ) , ( * (  prev3786 ) ) ) ) ) {
            return ( Unit_6_Unit );
        }
        struct envunion937  temp936 = ( (struct envunion937){ .fun = (  enum Unit_6  (*) (  struct env931*  ) )advance934 , .env =  envinst931 } );
        ( temp936.fun ( &temp936.env ) );
        sel3789 = ( ( * (  pane3781 ) ) .f_cursor );
    }
    if ( ( (  is_dash_word_dash_boundary938 ) ( ( (  char_dash_at950 ) ( (  pane3781 ) ,  ( * (  prev3786 ) ) ) ) ,  ( (  char_dash_at950 ) ( (  pane3781 ) ,  ( ( * (  pane3781 ) ) .f_cursor ) ) ) ) ) ) {
        sel3789 = ( ( * (  pane3781 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion955  temp954 = ( (struct envunion955){ .fun = (  enum Unit_6  (*) (  struct env931*  ) )advance934 , .env =  envinst931 } );
        ( temp954.fun ( &temp954.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end935 ) ( (  pane3781 ) ) ) || ( (  reached_dash_target956 ) ( (  pane3781 ) ,  (  target3785 ) ,  ( * (  prev3786 ) ) ) ) ) ) {
            enum MoveDirection_927  dref3790 = (  dir3783 );
            switch (  dref3790 ) {
                case MoveDirection_927_MoveFwd : {
                    ( (  move_dash_left886 ) ( (  pane3781 ) ) );
                    break;
                }
                case MoveDirection_927_MoveBwd : {
                    ( (  move_dash_right918 ) ( (  pane3781 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq265 ( ( * (  prev3786 ) ) , ( ( * (  pane3781 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel914 ) ( (  pane3781 ) ,  ( ( Maybe_22_Just ) ( (  sel3789 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  size_t   size965 (    struct List_16 *  l2103 ) {
    return ( ( * (  l2103 ) ) .f_count );
}

static  struct Action_18 *   offset_dash_ptr970 (    struct Action_18 *  x338 ,    int64_t  count340 ) {
    struct Action_18  temp971;
    return ( (struct Action_18 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul181 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp971 ) ) ) ) ) ) ) ) );
}

static  struct Action_18 *   get_dash_ptr969 (    struct Slice_17  slice1733 ,    size_t  i1735 ) {
    if ( ( (  cmp132 ( (  i1735 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1735 ) , ( (  slice1733 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1735 ) ) ) ,  ( (  from_dash_string170 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1733 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_18 *  elem_dash_ptr1736 = ( (  offset_dash_ptr970 ) ( ( (  slice1733 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  i1735 ) ) ) ) );
    return (  elem_dash_ptr1736 );
}

static  struct Action_18 *   get_dash_ptr968 (    struct List_16 *  list1971 ,    size_t  i1973 ) {
    if ( ( (  cmp132 ( (  i1973 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp132 ( (  i1973 ) , ( ( * (  list1971 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic203 ) ( ( ( StrConcat_204_StrConcat ) ( ( ( StrConcat_205_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_140_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1973 ) ) ) ,  ( (  from_dash_string170 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1971 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr969 ) ( ( ( * (  list1971 ) ) .f_elements ) ,  (  i1973 ) ) );
}

static  struct Action_18   get967 (    struct List_16 *  list1981 ,    size_t  i1983 ) {
    return ( * ( (  get_dash_ptr968 ) ( (  list1981 ) ,  (  i1983 ) ) ) );
}

static  struct Action_18   elem_dash_get966 (    struct List_16  self2051 ,    size_t  k2053 ) {
    return ( (  get967 ) ( ( & (  self2051 ) ) ,  (  k2053 ) ) );
}

static  struct Pos_19   action_dash_fwd973 (   struct env67* env ,    struct TextBuf_63 *  self3560 ,    struct Action_18  action3562 ) {
    struct envunion68  temp974 = ( (struct envunion68){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  env->envinst57 } );
    ( temp974.fun ( &temp974.env ,  (  self3560 ) ,  ( (  action3562 ) .f_from ) ,  ( (  action3562 ) .f_to_dash_bwd ) ,  ( (  action3562 ) .f_fwd ) ) );
    return ( (  action3562 ) .f_to_dash_fwd );
}

static  struct Maybe_79   redo964 (   struct env71* env ,    struct TextBuf_63 *  self3570 ) {
    struct Actions_64 *  actions3571 = ( & ( ( * (  self3570 ) ) .f_actions ) );
    if ( (  cmp132 ( ( ( * (  actions3571 ) ) .f_cur ) , ( (  size965 ) ( ( & ( ( * (  actions3571 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    struct Action_18  action3572 = (  elem_dash_get966 ( ( ( * (  actions3571 ) ) .f_list ) , ( ( * (  actions3571 ) ) .f_cur ) ) );
    struct envunion72  temp972 = ( (struct envunion72){ .fun = (  struct Pos_19  (*) (  struct env67*  ,    struct TextBuf_63 *  ,    struct Action_18  ) )action_dash_fwd973 , .env =  env->envinst67 } );
    ( temp972.fun ( &temp972.env ,  (  self3570 ) ,  (  action3572 ) ) );
    (*  actions3571 ) .f_cur = (  op_dash_add183 ( ( ( * (  actions3571 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_79_Just ) ( ( (struct Cursors_21) { .f_cur = ( (  action3572 ) .f_to_dash_fwd ) , .f_sel = ( ( Maybe_22_Just ) ( ( (  action3572 ) .f_from ) ) ) } ) ) );
}

struct env976 {
    ;
    struct Pane_95 *  self3819;
    ;
};

struct envunion977 {
    enum Unit_6  (*fun) (  struct env976*  ,    struct Cursors_21  );
    struct env976 env;
};

static  enum Unit_6   if_dash_just975 (    struct Maybe_79  x1272 ,   struct envunion977  fun1274 ) {
    struct Maybe_79  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_79_Just_t ) {
        struct envunion977  temp978 = (  fun1274 );
        ( temp978.fun ( &temp978.env ,  ( dref1275 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_cursors980 (    struct Pane_95 *  self3754 ,    struct Pos_19  cur3756 ,    struct Pos_19  sel3758 ) {
    (*  self3754 ) .f_cursor = (  cur3756 );
    if ( (  eq265 ( (  cur3756 ) , (  sel3758 ) ) ) ) {
        (*  self3754 ) .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } );
    } else {
        (*  self3754 ) .f_sel = ( ( Maybe_22_Just ) ( (  sel3758 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   or_dash_else981 (    struct Maybe_22  self1708 ,    struct Pos_19  alt1710 ) {
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

static  enum Unit_6   lam979 (   struct env976* env ,    struct Cursors_21  cursors3822 ) {
    ( (  set_dash_cursors980 ) ( ( env->self3819 ) ,  ( (  cursors3822 ) .f_cur ) ,  ( (  or_dash_else981 ) ( ( (  cursors3822 ) .f_sel ) ,  ( (  cursors3822 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   redo962 (   struct env86* env ,    struct Pane_95 *  self3819 ) {
    struct envunion87  temp963 = ( (struct envunion87){ .fun = (  struct Maybe_79  (*) (  struct env71*  ,    struct TextBuf_63 *  ) )redo964 , .env =  env->envinst71 } );
    struct Maybe_79  mcursors3820 = ( temp963.fun ( &temp963.env ,  ( ( * (  self3819 ) ) .f_buf ) ) );
    struct env976 envinst976 = {
        .self3819 =  self3819 ,
    };
    ( (  if_dash_just975 ) ( (  mcursors3820 ) ,  ( (struct envunion977){ .fun = (  enum Unit_6  (*) (  struct env976*  ,    struct Cursors_21  ) )lam979 , .env =  envinst976 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pos_19   action_dash_bwd987 (   struct env65* env ,    struct TextBuf_63 *  self3555 ,    struct Action_18  action3557 ) {
    struct envunion66  temp988 = ( (struct envunion66){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  env->envinst57 } );
    ( temp988.fun ( &temp988.env ,  (  self3555 ) ,  ( (  action3557 ) .f_from ) ,  ( (  action3557 ) .f_to_dash_fwd ) ,  ( (  action3557 ) .f_bwd ) ) );
    return ( (  action3557 ) .f_to_dash_bwd );
}

static  struct Maybe_79   undo985 (   struct env69* env ,    struct TextBuf_63 *  self3565 ) {
    struct Actions_64 *  actions3566 = ( & ( ( * (  self3565 ) ) .f_actions ) );
    if ( (  eq190 ( ( ( * (  actions3566 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_79) { .tag = Maybe_79_None_t } );
    }
    (*  actions3566 ) .f_cur = (  op_dash_sub254 ( ( ( * (  actions3566 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_18  action3567 = (  elem_dash_get966 ( ( ( * (  actions3566 ) ) .f_list ) , ( ( * (  actions3566 ) ) .f_cur ) ) );
    struct envunion70  temp986 = ( (struct envunion70){ .fun = (  struct Pos_19  (*) (  struct env65*  ,    struct TextBuf_63 *  ,    struct Action_18  ) )action_dash_bwd987 , .env =  env->envinst65 } );
    ( temp986.fun ( &temp986.env ,  (  self3565 ) ,  (  action3567 ) ) );
    return ( ( Maybe_79_Just ) ( ( (  action3567 ) .f_before_dash_cursors ) ) );
}

struct env990 {
    ;
    struct Pane_95 *  self3813;
    ;
};

struct envunion991 {
    enum Unit_6  (*fun) (  struct env990*  ,    struct Cursors_21  );
    struct env990 env;
};

static  enum Unit_6   if_dash_just989 (    struct Maybe_79  x1272 ,   struct envunion991  fun1274 ) {
    struct Maybe_79  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_79_Just_t ) {
        struct envunion991  temp992 = (  fun1274 );
        ( temp992.fun ( &temp992.env ,  ( dref1275 .stuff .Maybe_79_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_79_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam993 (   struct env990* env ,    struct Cursors_21  cursors3816 ) {
    ( (  set_dash_cursors980 ) ( ( env->self3813 ) ,  ( (  cursors3816 ) .f_cur ) ,  ( (  or_dash_else981 ) ( ( (  cursors3816 ) .f_sel ) ,  ( (  cursors3816 ) .f_cur ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   undo983 (   struct env84* env ,    struct Pane_95 *  self3813 ) {
    struct envunion85  temp984 = ( (struct envunion85){ .fun = (  struct Maybe_79  (*) (  struct env69*  ,    struct TextBuf_63 *  ) )undo985 , .env =  env->envinst69 } );
    struct Maybe_79  mcursors3814 = ( temp984.fun ( &temp984.env ,  ( ( * (  self3813 ) ) .f_buf ) ) );
    struct env990 envinst990 = {
        .self3813 =  self3813 ,
    };
    ( (  if_dash_just989 ) ( (  mcursors3814 ) ,  ( (struct envunion991){ .fun = (  enum Unit_6  (*) (  struct env990*  ,    struct Cursors_21  ) )lam993 , .env =  envinst990 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_99   minmax997 (    struct Pos_19  l1310 ,    struct Pos_19  r1312 ) {
    return ( (  cmp371 ( (  l1310 ) , (  r1312 ) ) == 0 ) ? ( ( Tuple2_99_Tuple2 ) ( (  l1310 ) ,  (  r1312 ) ) ) : ( ( Tuple2_99_Tuple2 ) ( (  r1312 ) ,  (  l1310 ) ) ) );
}

static  struct Pos_19   fst998 (    struct Tuple2_99  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   snd999 (    struct Tuple2_99  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct Tuple2_99   selection996 (    struct Pane_95 *  self3825 ) {
    struct Tuple2_99  from_dash_to3826 = ( (  minmax997 ) ( ( (  or_dash_else981 ) ( ( ( * (  self3825 ) ) .f_sel ) ,  ( ( * (  self3825 ) ) .f_cursor ) ) ) ,  ( ( * (  self3825 ) ) .f_cursor ) ) );
    struct Pos_19  from3827 = ( (  fst998 ) ( (  from_dash_to3826 ) ) );
    struct Pos_19  to3828 = ( (  right_dash_pos919 ) ( ( ( * (  self3825 ) ) .f_buf ) ,  ( (  snd999 ) ( (  from_dash_to3826 ) ) ) ) );
    return ( ( Tuple2_99_Tuple2 ) ( (  from3827 ) ,  (  to3828 ) ) );
}

static  struct StrView_20   clone_dash_01003 (    struct StrView_20  s2122 ,    enum CAllocator_8  al2124 ) {
    size_t  cnt2125 = ( ( (  s2122 ) .f_contents ) .f_count );
    struct Slice_11  nus2126 = ( (  allocate300 ) ( (  al2124 ) ,  (  op_dash_add183 ( (  cnt2125 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to401 ) ( ( (  s2122 ) .f_contents ) ,  (  nus2126 ) ) );
    ( (  set309 ) ( (  nus2126 ) ,  (  cnt2125 ) ,  ( (  char_dash_u8331 ) ( ( (  from_dash_charlike171 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2126 ) .f_ptr ) , .f_count = (  cnt2125 ) } ) } );
}

static  struct StrView_20   clone1002 (    struct StrView_20  s2129 ,    enum CAllocator_8  al2131 ) {
    return ( (  clone_dash_01003 ) ( (  s2129 ) ,  (  al2131 ) ) );
}

struct envunion1009 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1011 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   str_dash_between1001 (   struct env73* env ,    struct TextBuf_63 *  self3587 ,    struct Pos_19  from3589 ,    struct Pos_19  to3591 ) {
    enum CAllocator_8  al3592 = ( ( ( * (  self3587 ) ) .f_buf ) .f_al );
    if ( (  eq266 ( ( (  from3589 ) .f_line ) , ( (  to3591 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3593 = ( (  i32_dash_size213 ) ( ( (  min418 ) ( ( (  from3589 ) .f_bi ) ,  ( (  to3591 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3594 = ( (  i32_dash_size213 ) ( ( (  max898 ) ( ( (  from3589 ) .f_bi ) ,  ( (  to3591 ) .f_bi ) ) ) ) );
        return ( (  clone1002 ) ( ( (  byte_dash_substr332 ) ( ( (  line889 ) ( (  self3587 ) ,  ( (  from3589 ) .f_line ) ) ) ,  (  from_dash_bi3593 ) ,  (  to_dash_bi3594 ) ) ) ,  (  al3592 ) ) );
    } else {
        struct Pos_19  from_dash_pos3595 = ( (  min370 ) ( (  from3589 ) ,  (  to3591 ) ) );
        struct Pos_19  to_dash_pos3596 = ( (  max373 ) ( (  from3589 ) ,  (  to3591 ) ) );
        struct List_10  temp1004 = ( (  mk234 ) ( (  al3592 ) ) );
        struct List_10 *  sb3597 = ( &temp1004 );
        struct StrView_20  first_dash_line3598 = ( (  line889 ) ( (  self3587 ) ,  ( (  from_dash_pos3595 ) .f_line ) ) );
        struct envunion74  temp1005 = ( (struct envunion74){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
        ( temp1005.fun ( &temp1005.env ,  (  sb3597 ) ,  ( ( (  byte_dash_substr332 ) ( (  first_dash_line3598 ) ,  ( (  i32_dash_size213 ) ( ( (  from_dash_pos3595 ) .f_bi ) ) ) ,  ( (  num_dash_bytes888 ) ( (  first_dash_line3598 ) ) ) ) ) .f_contents ) ) );
        struct RangeIter_638  temp1006 =  into_dash_iter640 ( ( (  to643 ) ( (  op_dash_add225 ( ( (  from_dash_pos3595 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  op_dash_sub760 ( ( (  to_dash_pos3596 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_223  __cond1007 =  next641 (&temp1006);
            if (  __cond1007 .tag == 0 ) {
                break;
            }
            int32_t  i3600 =  __cond1007 .stuff .Maybe_223_Just_s .field0;
            struct envunion1009  temp1008 = ( (struct envunion1009){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
            ( temp1008.fun ( &temp1008.env ,  (  sb3597 ) ,  ( ( (  line889 ) ( (  self3587 ) ,  (  i3600 ) ) ) .f_contents ) ) );
        }
        struct envunion1011  temp1010 = ( (struct envunion1011){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all285 , .env =  env->envinst30 } );
        ( temp1010.fun ( &temp1010.env ,  (  sb3597 ) ,  ( ( (  byte_dash_substr332 ) ( ( (  line889 ) ( (  self3587 ) ,  ( (  to_dash_pos3596 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size213 ) ( ( (  to_dash_pos3596 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes890 ) ( ( (  to_dash_slice279 ) ( ( * (  sb3597 ) ) ) ) ) );
    }
}

struct env1013 {
    struct Editor_94 *  ed3843;
    ;
};

struct envunion1014 {
    enum Unit_6  (*fun) (  struct env1013*  ,    struct StrView_20  );
    struct env1013 env;
};

static  enum Unit_6   if_dash_just1012 (    struct Maybe_97  x1272 ,   struct envunion1014  fun1274 ) {
    struct Maybe_97  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_97_Just_t ) {
        struct envunion1014  temp1015 = (  fun1274 );
        ( temp1015.fun ( &temp1015.env ,  ( dref1275 .stuff .Maybe_97_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_97_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free1017 (    struct StrView_20  s2134 ,    enum CAllocator_8  al2136 ) {
    ( (  free319 ) ( (  al2136 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2134 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1016 (   struct env1013* env ,    struct StrView_20  cp3847 ) {
    ( (  free1017 ) ( (  cp3847 ) ,  ( ( * ( env->ed3843 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   copy_dash_selection_dash_to_dash_clipboard995 (   struct env90* env ,    struct Editor_94 *  ed3843 ) {
    struct Tuple2_99  from_dash_to3844 = ( (  selection996 ) ( ( (  pane917 ) ( (  ed3843 ) ) ) ) );
    struct envunion91  temp1000 = ( (struct envunion91){ .fun = (  struct StrView_20  (*) (  struct env73*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1001 , .env =  env->envinst73 } );
    struct StrView_20  cpd3845 = ( temp1000.fun ( &temp1000.env ,  ( ( ( * (  ed3843 ) ) .f_pane ) .f_buf ) ,  ( (  fst998 ) ( (  from_dash_to3844 ) ) ) ,  ( (  snd999 ) ( (  from_dash_to3844 ) ) ) ) );
    struct env1013 envinst1013 = {
        .ed3843 =  ed3843 ,
    };
    ( (  if_dash_just1012 ) ( ( ( * (  ed3843 ) ) .f_clipboard ) ,  ( (struct envunion1014){ .fun = (  enum Unit_6  (*) (  struct env1013*  ,    struct StrView_20  ) )lam1016 , .env =  envinst1013 } ) ) );
    (*  ed3843 ) .f_clipboard = ( ( Maybe_97_Just ) ( (  cpd3845 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1019 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  );
    struct env88 env;
};

struct SliceIter_1025 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1024 {
    struct SliceIter_1025  field0;
    size_t  field1;
};

static struct Drop_1024 Drop_1024_Drop (  struct SliceIter_1025  field0 ,  size_t  field1 ) {
    return ( struct Drop_1024 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1024   into_dash_iter1026 (    struct Drop_1024  self839 ) {
    return (  self839 );
}

static  struct SliceIter_1025   into_dash_iter1029 (    struct Slice_17  self1798 ) {
    return ( (struct SliceIter_1025) { .f_slice = (  self1798 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_17   subslice1030 (    struct Slice_17  slice1758 ,    size_t  from1760 ,    size_t  to1762 ) {
    struct Action_18 *  begin_dash_ptr1763 = ( (  offset_dash_ptr970 ) ( ( (  slice1758 ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  from1760 ) ) ) ) );
    if ( ( (  cmp132 ( (  from1760 ) , (  to1762 ) ) != 0 ) || (  cmp132 ( (  from1760 ) , ( (  slice1758 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1764 = (  op_dash_sub254 ( ( (  min278 ) ( (  to1762 ) ,  ( (  slice1758 ) .f_count ) ) ) , (  from1760 ) ) );
    return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1763 ) , .f_count = (  count1764 ) } );
}

static  struct SliceIter_1025   into_dash_iter1028 (    struct List_16  self1998 ) {
    return ( (  into_dash_iter1029 ) ( ( (  subslice1030 ) ( ( (  self1998 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self1998 ) .f_count ) ) ) ) );
}

static  struct Drop_1024   drop1027 (    struct List_16  iterable846 ,    size_t  i848 ) {
    struct SliceIter_1025  it849 = ( (  into_dash_iter1028 ) ( (  iterable846 ) ) );
    return ( ( Drop_1024_Drop ) ( (  it849 ) ,  (  i848 ) ) );
}

struct Maybe_1032 {
    enum {
        Maybe_1032_None_t,
        Maybe_1032_Just_t,
    } tag;
    union {
        struct {
            struct Action_18  field0;
        } Maybe_1032_Just_s;
    } stuff;
};

static struct Maybe_1032 Maybe_1032_Just (  struct Action_18  field0 ) {
    return ( struct Maybe_1032 ) { .tag = Maybe_1032_Just_t, .stuff = { .Maybe_1032_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1032   next1034 (    struct SliceIter_1025 *  self1804 ) {
    size_t  off1805 = ( ( * (  self1804 ) ) .f_current_dash_offset );
    if ( (  cmp132 ( (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1804 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1032) { .tag = Maybe_1032_None_t } );
    }
    struct Action_18  elem1806 = ( * ( (  offset_dash_ptr970 ) ( ( ( ( * (  self1804 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64212 ) ( (  off1805 ) ) ) ) ) );
    (*  self1804 ) .f_current_dash_offset = (  op_dash_add183 ( (  off1805 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1032_Just ) ( (  elem1806 ) ) );
}

static  struct Maybe_1032   next1033 (    struct Drop_1024 *  dref841 ) {
    while ( (  cmp132 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1034 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
        (* dref841 ) .field1 = (  op_dash_sub254 ( ( (* dref841 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1034 ) ( ( & ( (* dref841 ) .field0 ) ) ) );
}

static  enum Unit_6   free_dash_action1035 (    struct Action_18  action3502 ,    enum CAllocator_8  al3504 ) {
    ( (  free1017 ) ( ( (  action3502 ) .f_fwd ) ,  (  al3504 ) ) );
    ( (  free1017 ) ( ( (  action3502 ) .f_bwd ) ,  (  al3504 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   trim1036 (    struct List_16 *  l2085 ,    size_t  new_dash_count2087 ) {
    (*  l2085 ) .f_count = ( (  min278 ) ( (  new_dash_count2087 ) ,  ( ( * (  l2085 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

struct TypeSize_1043 {
    size_t  f_size;
};

static  struct TypeSize_1043   get_dash_typesize1042 (  ) {
    struct Action_18  temp1044;
    return ( (struct TypeSize_1043) { .f_size = ( sizeof( ( (  temp1044 ) ) ) ) } );
}

static  struct Action_18 *   cast_dash_ptr1045 (    void *  p359 ) {
    return ( (struct Action_18 * ) (  p359 ) );
}

static  struct Slice_17   allocate1041 (    enum CAllocator_8  dref1923 ,    size_t  count1925 ) {
    if (!(  dref1923 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1926 = ( ( ( (  get_dash_typesize1042 ) ( ) ) ) .f_size );
    struct Action_18 *  ptr1927 = ( (  cast_dash_ptr1045 ) ( ( ( malloc ) ( (  op_dash_mul196 ( (  size1926 ) , (  count1925 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr1927 ) , .f_count = (  count1925 ) } );
}

struct env1046 {
    ;
    struct Slice_17  new_dash_slice2012;
    ;
};

struct Tuple2_1048 {
    struct Action_18  field0;
    int32_t  field1;
};

static struct Tuple2_1048 Tuple2_1048_Tuple2 (  struct Action_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1048 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1047 {
    enum Unit_6  (*fun) (  struct env1046*  ,    struct Tuple2_1048  );
    struct env1046 env;
};

static  enum Unit_6   set1050 (    struct Slice_17  slice1750 ,    size_t  i1752 ,    struct Action_18  x1754 ) {
    struct Action_18 *  ep1755 = ( (  get_dash_ptr969 ) ( (  slice1750 ) ,  (  i1752 ) ) );
    (*  ep1755 ) = (  x1754 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1049 (   struct env1046* env ,    struct Tuple2_1048  dref2013 ) {
    return ( (  set1050 ) ( ( env->new_dash_slice2012 ) ,  ( (  i32_dash_size213 ) ( ( dref2013 .field1 ) ) ) ,  ( dref2013 .field0 ) ) );
}

struct Zip_1052 {
    struct SliceIter_1025  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_1052   into_dash_iter1054 (    struct Zip_1052  self905 ) {
    return (  self905 );
}

struct Maybe_1055 {
    enum {
        Maybe_1055_None_t,
        Maybe_1055_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1048  field0;
        } Maybe_1055_Just_s;
    } stuff;
};

static struct Maybe_1055 Maybe_1055_Just (  struct Tuple2_1048  field0 ) {
    return ( struct Maybe_1055 ) { .tag = Maybe_1055_Just_t, .stuff = { .Maybe_1055_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1055   next1056 (    struct Zip_1052 *  self908 ) {
    struct Zip_1052  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_1032  dref910 = ( (  next1034 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_1032_None_t ) {
            return ( (struct Maybe_1055) { .tag = Maybe_1055_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_1032_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1055) { .tag = Maybe_1055_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1034 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1055_Just ) ( ( ( Tuple2_1048_Tuple2 ) ( ( dref910 .stuff .Maybe_1032_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1051 (    struct Zip_1052  iterable1055 ,   struct envunion1047  fun1057 ) {
    struct Zip_1052  temp1053 = ( (  into_dash_iter1054 ) ( (  iterable1055 ) ) );
    struct Zip_1052 *  it1058 = ( &temp1053 );
    while ( ( true ) ) {
        struct Maybe_1055  dref1059 = ( (  next1056 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1055_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1055_Just_t ) {
                struct envunion1047  temp1057 = (  fun1057 );
                ( temp1057.fun ( &temp1057.env ,  ( dref1059 .stuff .Maybe_1055_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1052   zip1058 (    struct Slice_17  left916 ,    struct FromIter_217  right918 ) {
    struct SliceIter_1025  left_dash_it919 = ( (  into_dash_iter1029 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1052) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  void *   cast_dash_ptr1060 (    struct Action_18 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1059 (    enum CAllocator_8  dref1929 ,    struct Slice_17  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1060 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full1040 (   struct env3* env ,    struct List_16 *  list2011 ) {
    if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2011 ) .f_elements = ( (  allocate1041 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( env->starting_dash_size2006 ) ) );
    } else {
        if ( (  eq190 ( ( ( * (  list2011 ) ) .f_count ) , ( ( ( * (  list2011 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2012 = ( (  allocate1041 ) ( ( ( * (  list2011 ) ) .f_al ) ,  (  op_dash_mul196 ( ( ( * (  list2011 ) ) .f_count ) , ( env->growth_dash_factor2007 ) ) ) ) );
            struct env1046 envinst1046 = {
                .new_dash_slice2012 =  new_dash_slice2012 ,
            };
            struct envunion1047  fun2016 = ( (struct envunion1047){ .fun = (  enum Unit_6  (*) (  struct env1046*  ,    struct Tuple2_1048  ) )lam1049 , .env =  envinst1046 } );
            ( (  for_dash_each1051 ) ( ( (  zip1058 ) ( ( ( * (  list2011 ) ) .f_elements ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2016 ) ) );
            ( (  free1059 ) ( ( ( * (  list2011 ) ) .f_al ) ,  ( ( * (  list2011 ) ) .f_elements ) ) );
            (*  list2011 ) .f_elements = (  new_dash_slice2012 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add1038 (   struct env14* env ,    struct List_16 *  list2019 ,    struct Action_18  elem2021 ) {
    struct envunion15  temp1039 = ( (struct envunion15){ .fun = (  enum Unit_6  (*) (  struct env3*  ,    struct List_16 *  ) )grow_dash_if_dash_full1040 , .env =  env->envinst3 } );
    ( temp1039.fun ( &temp1039.env ,  (  list2019 ) ) );
    ( (  set1050 ) ( ( ( * (  list2019 ) ) .f_elements ) ,  ( ( * (  list2019 ) ) .f_count ) ,  (  elem2021 ) ) );
    (*  list2019 ) .f_count = (  op_dash_add183 ( ( ( * (  list2019 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Maybe_97   head1062 (    struct SplitIter_339  it1123 ) {
    struct SplitIter_339  temp1063 = ( (  into_dash_iter346 ) ( (  it1123 ) ) );
    return ( (  next358 ) ( ( &temp1063 ) ) );
}

static  struct Maybe_97   head1065 (    struct Drop_338  it1123 ) {
    struct Drop_338  temp1066 = ( (  into_dash_iter344 ) ( (  it1123 ) ) );
    return ( (  next357 ) ( ( &temp1066 ) ) );
}

static  bool   null1064 (    struct Drop_338  it1132 ) {
    struct Maybe_97  dref1133 = ( (  head1065 ) ( (  it1132 ) ) );
    if ( dref1133.tag == Maybe_97_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_6   panic1068 (    struct StrView_20  errmsg1688 ) {
    ( (  print_dash_str426 ) ( ( ( StrConcat_427_StrConcat ) ( ( ( StrConcat_428_StrConcat ) ( ( (  from_dash_string170 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1688 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_355   undefined1069 (  ) {
    struct Tuple2_355  temp1070;
    return (  temp1070 );
}

static  struct Tuple2_355   or_dash_fail1067 (    struct Maybe_354  x1701 ,    struct StrView_20  errmsg1703 ) {
    struct Maybe_354  dref1704 = (  x1701 );
    if ( dref1704.tag == Maybe_354_None_t ) {
        ( (  panic1068 ) ( (  errmsg1703 ) ) );
        return ( (  undefined1069 ) ( ) );
    }
    else {
        if ( dref1704.tag == Maybe_354_Just_t ) {
            return ( dref1704 .stuff .Maybe_354_Just_s .field0 );
        }
    }
}

static  struct Maybe_354   reduce1072 (    struct Zip_337  iterable1074 ,    struct Maybe_354  base1076 ,    struct Maybe_354 (*  fun1078 )(    struct Tuple2_355  ,    struct Maybe_354  ) ) {
    struct Maybe_354  x1079 = (  base1076 );
    struct Zip_337  it1080 = ( (  into_dash_iter342 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_354  dref1081 = ( (  next356 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_354_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_354_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_354_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1073 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1073);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_354  temp1074;
    return (  temp1074 );
}

static  struct Maybe_354   lam1075 (    struct Tuple2_355  e1128 ,    struct Maybe_354  dref1129 ) {
    return ( ( Maybe_354_Just ) ( (  e1128 ) ) );
}

static  struct Maybe_354   last1071 (    struct Zip_337  it1126 ) {
    return ( (  reduce1072 ) ( (  it1126 ) ,  ( (struct Maybe_354) { .tag = Maybe_354_None_t } ) ,  (  lam1075 ) ) );
}

static  int32_t   snd1076 (    struct Tuple2_355  dref1237 ) {
    return ( dref1237 .field1 );
}

static  struct StrView_20   fst1077 (    struct Tuple2_355  dref1234 ) {
    return ( dref1234 .field0 );
}

static  struct Pos_19   pos_dash_after_dash_str1061 (    struct TextBuf_63 *  self3575 ,    struct StrView_20  bytes3577 ,    struct Pos_19  from3579 ) {
    struct SplitIter_339  lines3580 = ( (  split_dash_by_dash_each347 ) ( (  bytes3577 ) ,  ( (  from_dash_charlike171 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_20  first_dash_line3581 = ( (  or_dash_else322 ) ( ( (  head1062 ) ( (  lines3580 ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_338  headless3582 = ( (  drop345 ) ( (  lines3580 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1064 ) ( (  headless3582 ) ) ) ) {
        struct Pos_19  next_dash_pos3583 = ( (  mk452 ) ( ( (  from3579 ) .f_line ) ,  (  op_dash_add225 ( ( (  from3579 ) .f_bi ) , ( (  size_dash_i32147 ) ( ( (  num_dash_bytes888 ) ( (  first_dash_line3581 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3583 );
    } else {
        struct Tuple2_355  last_dash_line3584 = ( (  or_dash_fail1067 ) ( ( (  last1071 ) ( ( (  zip343 ) ( (  headless3582 ) ,  ( (  from230 ) ( (  op_dash_add225 ( ( (  from3579 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk452 ) ( ( (  snd1076 ) ( (  last_dash_line3584 ) ) ) ,  ( (  size_dash_i32147 ) ( ( (  num_dash_bytes888 ) ( ( (  fst1077 ) ( (  last_dash_line3584 ) ) ) ) ) ) ) ) );
    }
}

static  struct Cursors_21   or_dash_else1079 (    struct Maybe_79  self1708 ,    struct Cursors_21  alt1710 ) {
    struct Maybe_79  dref1711 = (  self1708 );
    if ( dref1711.tag == Maybe_79_None_t ) {
        return (  alt1710 );
    }
    else {
        if ( dref1711.tag == Maybe_79_Just_t ) {
            return ( dref1711 .stuff .Maybe_79_Just_s .field0 );
        }
    }
}

static  enum Unit_6   change1022 (   struct env75* env ,    struct TextBuf_63 *  self3603 ,    struct Pos_19  from3605 ,    struct Pos_19  to3607 ,    struct StrView_20  bytes3609 ,    struct Maybe_79  before_dash_cursors3611 ) {
    struct Pos_19  from_dash_pos3612 = ( (  min370 ) ( (  from3605 ) ,  (  to3607 ) ) );
    struct Pos_19  to_dash_pos3613 = ( (  max373 ) ( (  from3605 ) ,  (  to3607 ) ) );
    struct Actions_64 *  actions3614 = ( & ( ( * (  self3603 ) ) .f_actions ) );
    enum CAllocator_8  al3615 = ( ( ( * (  actions3614 ) ) .f_list ) .f_al );
    size_t  cur3616 = ( ( * (  actions3614 ) ) .f_cur );
    struct Drop_1024  temp1023 =  into_dash_iter1026 ( ( (  drop1027 ) ( ( ( * (  actions3614 ) ) .f_list ) ,  (  cur3616 ) ) ) );
    while (true) {
        struct Maybe_1032  __cond1031 =  next1033 (&temp1023);
        if (  __cond1031 .tag == 0 ) {
            break;
        }
        struct Action_18  action3618 =  __cond1031 .stuff .Maybe_1032_Just_s .field0;
        ( (  free_dash_action1035 ) ( (  action3618 ) ,  (  al3615 ) ) );
    }
    ( (  trim1036 ) ( ( & ( ( * (  actions3614 ) ) .f_list ) ) ,  (  cur3616 ) ) );
    struct envunion77  temp1037 = ( (struct envunion77){ .fun = (  enum Unit_6  (*) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  ) )add1038 , .env =  env->envinst14 } );
    struct envunion76  temp1078 = ( (struct envunion76){ .fun = (  struct StrView_20  (*) (  struct env73*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1001 , .env =  env->envinst73 } );
    ( temp1037.fun ( &temp1037.env ,  ( & ( ( * (  actions3614 ) ) .f_list ) ) ,  ( (struct Action_18) { .f_from = (  from3605 ) , .f_fwd = ( (  clone1002 ) ( (  bytes3609 ) ,  (  al3615 ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1061 ) ( (  self3603 ) ,  (  bytes3609 ) ,  (  from_dash_pos3612 ) ) ) , .f_bwd = ( temp1078.fun ( &temp1078.env ,  (  self3603 ) ,  (  from_dash_pos3612 ) ,  (  to_dash_pos3613 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3613 ) , .f_before_dash_cursors = ( (  or_dash_else1079 ) ( (  before_dash_cursors3611 ) ,  ( (struct Cursors_21) { .f_cur = (  from3605 ) , .f_sel = ( (  eq265 ( (  from3605 ) , (  to3607 ) ) ) ? ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) : ( ( Maybe_22_Just ) ( (  to3607 ) ) ) ) } ) ) ) } ) ) );
    struct envunion78  temp1080 = ( (struct envunion78){ .fun = (  struct Maybe_79  (*) (  struct env71*  ,    struct TextBuf_63 *  ) )redo964 , .env =  env->envinst71 } );
    ( temp1080.fun ( &temp1080.env ,  (  self3603 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   replace_dash_selection1020 (   struct env88* env ,    struct Pane_95 *  self3831 ,    struct Tuple2_99  pos_prime_s3833 ,    struct StrView_20  cp3835 ) {
    struct envunion89  temp1021 = ( (struct envunion89){ .fun = (  enum Unit_6  (*) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  ) )change1022 , .env =  env->envinst75 } );
    ( temp1021.fun ( &temp1021.env ,  ( ( * (  self3831 ) ) .f_buf ) ,  ( (  fst998 ) ( (  pos_prime_s3833 ) ) ) ,  ( (  snd999 ) ( (  pos_prime_s3833 ) ) ) ,  (  cp3835 ) ,  ( ( Maybe_79_Just ) ( ( (struct Cursors_21) { .f_cur = ( ( * (  self3831 ) ) .f_cursor ) , .f_sel = ( ( * (  self3831 ) ) .f_sel ) } ) ) ) ) );
    struct Pos_19  to3836 = ( (  pos_dash_after_dash_str1061 ) ( ( ( * (  self3831 ) ) .f_buf ) ,  (  cp3835 ) ,  ( (  fst998 ) ( (  pos_prime_s3833 ) ) ) ) );
    if ( (  cmp132 ( ( (  num_dash_bytes888 ) ( (  cp3835 ) ) ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        to3836 = ( (  left_dash_pos887 ) ( ( ( * (  self3831 ) ) .f_buf ) ,  (  to3836 ) ) );
    }
    ( (  set_dash_cursors980 ) ( (  self3831 ) ,  (  to3836 ) ,  ( (  fst998 ) ( (  pos_prime_s3833 ) ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1082 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_94 *  );
    struct env90 env;
};

struct envunion1085 {
    enum Unit_6  (*fun) (  struct env90*  ,    struct Editor_94 *  );
    struct env90 env;
};

struct envunion1088 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  );
    struct env88 env;
};

struct env1087 {
    ;
    struct Editor_94 *  ed3850;
    ;
    ;
    struct env88 envinst88;
};

struct envunion1089 {
    enum Unit_6  (*fun) (  struct env1087*  ,    struct StrView_20  );
    struct env1087 env;
};

static  enum Unit_6   if_dash_just1086 (    struct Maybe_97  x1272 ,   struct envunion1089  fun1274 ) {
    struct Maybe_97  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_97_Just_t ) {
        struct envunion1089  temp1090 = (  fun1274 );
        ( temp1090.fun ( &temp1090.env ,  ( dref1275 .stuff .Maybe_97_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_97_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   max_dash_pos1092 (    struct Pane_95 *  pane3798 ) {
    return ( {  struct Maybe_22  dref3799 = ( ( * (  pane3798 ) ) .f_sel ) ; dref3799.tag == Maybe_22_Just_t ? ( (  max373 ) ( ( ( * (  pane3798 ) ) .f_cursor ) ,  ( dref3799 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3798 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1091 (   struct env1087* env ,    struct StrView_20  cp3856 ) {
    struct Pos_19  start3857 = ( (  right_dash_pos919 ) ( ( ( ( * ( env->ed3850 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1092 ) ( ( (  pane917 ) ( ( env->ed3850 ) ) ) ) ) ) );
    struct envunion1088  temp1093 = ( (struct envunion1088){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  ) )replace_dash_selection1020 , .env =  env->envinst88 } );
    ( temp1093.fun ( &temp1093.env ,  ( (  pane917 ) ( ( env->ed3850 ) ) ) ,  ( ( Tuple2_99_Tuple2 ) ( (  start3857 ) ,  (  start3857 ) ) ) ,  (  cp3856 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1096 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  );
    struct env88 env;
};

struct env1095 {
    struct Editor_94 *  ed3850;
    ;
    ;
    struct env88 envinst88;
};

struct envunion1097 {
    enum Unit_6  (*fun) (  struct env1095*  ,    struct StrView_20  );
    struct env1095 env;
};

static  enum Unit_6   if_dash_just1094 (    struct Maybe_97  x1272 ,   struct envunion1097  fun1274 ) {
    struct Maybe_97  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_97_Just_t ) {
        struct envunion1097  temp1098 = (  fun1274 );
        ( temp1098.fun ( &temp1098.env ,  ( dref1275 .stuff .Maybe_97_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_97_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   min_dash_pos1100 (    struct Pane_95 *  pane3793 ) {
    return ( {  struct Maybe_22  dref3794 = ( ( * (  pane3793 ) ) .f_sel ) ; dref3794.tag == Maybe_22_Just_t ? ( (  min370 ) ( ( ( * (  pane3793 ) ) .f_cursor ) ,  ( dref3794 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3793 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1099 (   struct env1095* env ,    struct StrView_20  cp3859 ) {
    struct Pos_19  start3860 = ( (  min_dash_pos1100 ) ( ( (  pane917 ) ( ( env->ed3850 ) ) ) ) );
    struct envunion1096  temp1101 = ( (struct envunion1096){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  ) )replace_dash_selection1020 , .env =  env->envinst88 } );
    ( temp1101.fun ( &temp1101.env ,  ( (  pane917 ) ( ( env->ed3850 ) ) ) ,  ( ( Tuple2_99_Tuple2 ) ( (  start3860 ) ,  (  start3860 ) ) ) ,  (  cp3859 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1104 {
    enum Unit_6  (*fun) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  );
    struct env88 env;
};

struct env1103 {
    struct Editor_94 *  ed3850;
    ;
    ;
    struct env88 envinst88;
};

struct envunion1105 {
    enum Unit_6  (*fun) (  struct env1103*  ,    struct StrView_20  );
    struct env1103 env;
};

static  enum Unit_6   if_dash_just1102 (    struct Maybe_97  x1272 ,   struct envunion1105  fun1274 ) {
    struct Maybe_97  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_97_Just_t ) {
        struct envunion1105  temp1106 = (  fun1274 );
        ( temp1106.fun ( &temp1106.env ,  ( dref1275 .stuff .Maybe_97_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_97_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1107 (   struct env1103* env ,    struct StrView_20  cp3862 ) {
    struct Pos_19  start3863 = ( (  min_dash_pos1100 ) ( ( (  pane917 ) ( ( env->ed3850 ) ) ) ) );
    struct envunion1104  temp1108 = ( (struct envunion1104){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  ) )replace_dash_selection1020 , .env =  env->envinst88 } );
    ( temp1108.fun ( &temp1108.env ,  ( (  pane917 ) ( ( env->ed3850 ) ) ) ,  ( ( Tuple2_99_Tuple2 ) ( (  start3863 ) ,  (  start3863 ) ) ) ,  (  cp3862 ) ) );
    return ( Unit_6_Unit );
}

static  bool   is_dash_none1109 (    struct Maybe_22  m1245 ) {
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

static  enum Unit_6   handle_dash_normal_dash_key885 (   struct env92* env ,    struct Editor_94 *  ed3850 ,    struct Key_106  key3852 ) {
    struct Key_106  dref3853 = (  key3852 );
    if ( dref3853.tag == Key_106_Char_t ) {
        if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed3850 ) .f_running = ( false );
        } else {
            if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left886 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) );
            } else {
                if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right918 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) );
                } else {
                    if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down921 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) );
                    } else {
                        if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up925 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) );
                        } else {
                            if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                (*  ed3850 ) .f_pane .f_mode = ( Mode_96_Insert );
                            } else {
                                if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word926 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ,  ( MoveDirection_927_MoveFwd ) ,  ( MoveTarget_928_NextWordStart ) ) );
                                } else {
                                    if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word926 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ,  ( MoveDirection_927_MoveFwd ) ,  ( MoveTarget_928_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word926 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ,  ( MoveDirection_927_MoveBwd ) ,  ( MoveTarget_928_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion101  temp961 = ( (struct envunion101){ .fun = (  enum Unit_6  (*) (  struct env86*  ,    struct Pane_95 *  ) )redo962 , .env =  env->envinst86 } );
                                                ( temp961.fun ( &temp961.env ,  ( (  pane917 ) ( (  ed3850 ) ) ) ) );
                                            } else {
                                                if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion100  temp982 = ( (struct envunion100){ .fun = (  enum Unit_6  (*) (  struct env84*  ,    struct Pane_95 *  ) )undo983 , .env =  env->envinst84 } );
                                                    ( temp982.fun ( &temp982.env ,  ( (  pane917 ) ( (  ed3850 ) ) ) ) );
                                                } else {
                                                    if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion93  temp994 = ( (struct envunion93){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_94 *  ) )copy_dash_selection_dash_to_dash_clipboard995 , .env =  env->envinst90 } );
                                                        ( temp994.fun ( &temp994.env ,  (  ed3850 ) ) );
                                                        struct envunion1019  temp1018 = ( (struct envunion1019){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  ) )replace_dash_selection1020 , .env =  env->envinst88 } );
                                                        ( temp1018.fun ( &temp1018.env ,  ( (  pane917 ) ( (  ed3850 ) ) ) ,  ( (  selection996 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1082  temp1081 = ( (struct envunion1082){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_94 *  ) )copy_dash_selection_dash_to_dash_clipboard995 , .env =  env->envinst90 } );
                                                            ( temp1081.fun ( &temp1081.env ,  (  ed3850 ) ) );
                                                            struct envunion98  temp1083 = ( (struct envunion98){ .fun = (  enum Unit_6  (*) (  struct env88*  ,    struct Pane_95 *  ,    struct Tuple2_99  ,    struct StrView_20  ) )replace_dash_selection1020 , .env =  env->envinst88 } );
                                                            ( temp1083.fun ( &temp1083.env ,  ( (  pane917 ) ( (  ed3850 ) ) ) ,  ( (  selection996 ) ( ( (  pane917 ) ( (  ed3850 ) ) ) ) ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            (*  ed3850 ) .f_pane .f_mode = ( Mode_96_Insert );
                                                        } else {
                                                            if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1085  temp1084 = ( (struct envunion1085){ .fun = (  enum Unit_6  (*) (  struct env90*  ,    struct Editor_94 *  ) )copy_dash_selection_dash_to_dash_clipboard995 , .env =  env->envinst90 } );
                                                                ( temp1084.fun ( &temp1084.env ,  (  ed3850 ) ) );
                                                            } else {
                                                                if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1087 envinst1087 = {
                                                                        .ed3850 =  ed3850 ,
                                                                        .envinst88 = env->envinst88 ,
                                                                    };
                                                                    ( (  if_dash_just1086 ) ( ( ( * (  ed3850 ) ) .f_clipboard ) ,  ( (struct envunion1089){ .fun = (  enum Unit_6  (*) (  struct env1087*  ,    struct StrView_20  ) )lam1091 , .env =  envinst1087 } ) ) );
                                                                } else {
                                                                    if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1095 envinst1095 = {
                                                                            .ed3850 =  ed3850 ,
                                                                            .envinst88 = env->envinst88 ,
                                                                        };
                                                                        ( (  if_dash_just1094 ) ( ( ( * (  ed3850 ) ) .f_clipboard ) ,  ( (struct envunion1097){ .fun = (  enum Unit_6  (*) (  struct env1095*  ,    struct StrView_20  ) )lam1099 , .env =  envinst1095 } ) ) );
                                                                    } else {
                                                                        if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1103 envinst1103 = {
                                                                                .ed3850 =  ed3850 ,
                                                                                .envinst88 = env->envinst88 ,
                                                                            };
                                                                            ( (  if_dash_just1102 ) ( ( ( * (  ed3850 ) ) .f_clipboard ) ,  ( (struct envunion1105){ .fun = (  enum Unit_6  (*) (  struct env1103*  ,    struct StrView_20  ) )lam1107 , .env =  envinst1103 } ) ) );
                                                                        } else {
                                                                            if ( (  eq734 ( ( dref3853 .stuff .Key_106_Char_s .field0 ) , ( (  from_dash_charlike735 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                (*  ed3850 ) .f_pane .f_mode = ( Mode_96_Select );
                                                                                if ( ( (  is_dash_none1109 ) ( ( ( ( * (  ed3850 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed3850 ) .f_pane .f_sel = ( ( Maybe_22_Just ) ( ( ( ( * (  ed3850 ) ) .f_pane ) .f_cursor ) ) );
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
        if ( dref3853.tag == Key_106_Escape_t ) {
            (*  ed3850 ) .f_pane .f_mode = ( Mode_96_Normal );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1111 {
    enum Unit_6  (*fun) (  struct env92*  ,    struct Editor_94 *  ,    struct Key_106  );
    struct env92 env;
};

static  enum Unit_6   add_dash_str_dash_at_dash_char1113 (   struct env80* env ,    struct Pane_95 *  self3803 ,    struct StrView_20  s3805 ) {
    struct Pos_19  cur3806 = ( ( * (  self3803 ) ) .f_cursor );
    struct envunion81  temp1114 = ( (struct envunion81){ .fun = (  enum Unit_6  (*) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  ) )change1022 , .env =  env->envinst75 } );
    ( temp1114.fun ( &temp1114.env ,  ( ( * (  self3803 ) ) .f_buf ) ,  (  cur3806 ) ,  (  cur3806 ) ,  (  s3805 ) ,  ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_charlike1115 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

static  enum Unit_6   backspace1117 (   struct env82* env ,    struct Pane_95 *  self3809 ) {
    struct Pos_19  prev_dash_cur3810 = ( ( * (  self3809 ) ) .f_cursor );
    ( (  move_dash_left886 ) ( (  self3809 ) ) );
    struct envunion83  temp1118 = ( (struct envunion83){ .fun = (  enum Unit_6  (*) (  struct env75*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_79  ) )change1022 , .env =  env->envinst75 } );
    ( temp1118.fun ( &temp1118.env ,  ( ( * (  self3809 ) ) .f_buf ) ,  ( ( * (  self3809 ) ) .f_cursor ) ,  (  prev_dash_cur3810 ) ,  ( (  from_dash_string170 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_79) { .tag = Maybe_79_None_t } ) ) );
    return ( Unit_6_Unit );
}

struct Array_1120 {
    char _arr [1];
};

static  char *   cast1121 (    struct Array_1120 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_750   as_dash_slice1119 (    struct Array_1120 *  arr2223 ) {
    return ( (struct Slice_750) { .f_ptr = ( (  cast1121 ) ( (  arr2223 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1120   from_dash_listlike1123 (    struct Array_1120  self330 ) {
    return (  self330 );
}

struct envunion1125 {
    enum Unit_6  (*fun) (  struct env80*  ,    struct Pane_95 *  ,    struct StrView_20  );
    struct env80 env;
};

static  enum Unit_6   handle_dash_key883 (   struct env102* env ,    struct Editor_94 *  ed3866 ,    struct Key_106  key3868 ) {
    enum Mode_96  dref3869 = ( ( ( * (  ed3866 ) ) .f_pane ) .f_mode );
    switch (  dref3869 ) {
        case Mode_96_Normal : {
            struct envunion105  temp884 = ( (struct envunion105){ .fun = (  enum Unit_6  (*) (  struct env92*  ,    struct Editor_94 *  ,    struct Key_106  ) )handle_dash_normal_dash_key885 , .env =  env->envinst92 } );
            ( temp884.fun ( &temp884.env ,  (  ed3866 ) ,  (  key3868 ) ) );
            break;
        }
        case Mode_96_Select : {
            struct envunion1111  temp1110 = ( (struct envunion1111){ .fun = (  enum Unit_6  (*) (  struct env92*  ,    struct Editor_94 *  ,    struct Key_106  ) )handle_dash_normal_dash_key885 , .env =  env->envinst92 } );
            ( temp1110.fun ( &temp1110.env ,  (  ed3866 ) ,  (  key3868 ) ) );
            break;
        }
        case Mode_96_Insert : {
            struct Key_106  dref3870 = (  key3868 );
            if ( dref3870.tag == Key_106_Escape_t ) {
                (*  ed3866 ) .f_pane .f_mode = ( Mode_96_Normal );
            }
            else {
                if ( dref3870.tag == Key_106_Enter_t ) {
                    struct envunion103  temp1112 = ( (struct envunion103){ .fun = (  enum Unit_6  (*) (  struct env80*  ,    struct Pane_95 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1113 , .env =  env->envinst80 } );
                    ( temp1112.fun ( &temp1112.env ,  ( (  pane917 ) ( (  ed3866 ) ) ) ,  ( (  from_dash_charlike1115 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                    ( (  move_dash_right918 ) ( ( (  pane917 ) ( (  ed3866 ) ) ) ) );
                }
                else {
                    if ( dref3870.tag == Key_106_Backspace_t ) {
                        struct envunion104  temp1116 = ( (struct envunion104){ .fun = (  enum Unit_6  (*) (  struct env82*  ,    struct Pane_95 *  ) )backspace1117 , .env =  env->envinst82 } );
                        ( temp1116.fun ( &temp1116.env ,  ( (  pane917 ) ( (  ed3866 ) ) ) ) );
                    }
                    else {
                        if ( dref3870.tag == Key_106_Char_t ) {
                            struct Array_1120  temp1122 = ( (  from_dash_listlike1123 ) ( ( (struct Array_1120) { ._arr = { ( dref3870 .stuff .Key_106_Char_s .field0 ) } } ) ) );
                            struct StrView_20  s3872 = ( (  from_dash_ascii_dash_slice765 ) ( ( (  as_dash_slice1119 ) ( ( &temp1122 ) ) ) ) );
                            struct envunion1125  temp1124 = ( (struct envunion1125){ .fun = (  enum Unit_6  (*) (  struct env80*  ,    struct Pane_95 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1113 , .env =  env->envinst80 } );
                            ( temp1124.fun ( &temp1124.env ,  ( (  pane917 ) ( (  ed3866 ) ) ) ,  (  s3872 ) ) );
                            ( (  move_dash_right918 ) ( ( (  pane917 ) ( (  ed3866 ) ) ) ) );
                        }
                    }
                }
            }
            break;
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1127 {
    bool  (*fun) (  struct env49*  ,    struct Screen_610 *  );
    struct env49 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1128 (   struct env49* env ,    struct Screen_610 *  screen3376 ) {
    struct Tui_45 *  tui3377 = ( ( * (  screen3376 ) ) .f_tui );
    struct envunion50  temp1129 = ( (struct envunion50){ .fun = (  bool  (*) (  struct env42*  ,    struct Tui_45 *  ) )update_dash_dimensions681 , .env =  env->envinst42 } );
    ( temp1129.fun ( &temp1129.env ,  (  tui3377 ) ) );
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

static  bool   should_dash_redraw1130 (    struct Tui_45 *  tui3305 ) {
    bool  redraw3306 = ( ( * (  tui3305 ) ) .f_should_dash_redraw );
    (*  tui3305 ) .f_should_dash_redraw = ( false );
    return (  redraw3306 );
}

struct env1134 {
    struct Slice_611  s1881;
    struct Cell_612 (*  fun1883 )(    struct Cell_612  );
    ;
    ;
    ;
};

struct envunion1135 {
    enum Unit_6  (*fun) (  struct env1134*  ,    int32_t  );
    struct env1134 env;
};

static  enum Unit_6   for_dash_each1133 (    struct Range_635  iterable1055 ,   struct envunion1135  fun1057 ) {
    struct RangeIter_638  temp1136 = ( (  into_dash_iter640 ) ( (  iterable1055 ) ) );
    struct RangeIter_638 *  it1058 = ( &temp1136 );
    while ( ( true ) ) {
        struct Maybe_223  dref1059 = ( (  next641 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_223_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_223_Just_t ) {
                struct envunion1135  temp1137 = (  fun1057 );
                ( temp1137.fun ( &temp1137.env ,  ( dref1059 .stuff .Maybe_223_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1138 (   struct env1134* env ,    int32_t  i1885 ) {
    return ( (  set645 ) ( ( env->s1881 ) ,  ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ,  ( ( env->fun1883 ) ( (  elem_dash_get649 ( ( env->s1881 ) , ( (  i32_dash_size213 ) ( (  i1885 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map1132 (    struct Slice_611  s1881 ,    struct Cell_612 (*  fun1883 )(    struct Cell_612  ) ) {
    struct env1134 envinst1134 = {
        .s1881 =  s1881 ,
        .fun1883 =  fun1883 ,
    };
    ( (  for_dash_each1133 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32147 ) ( (  op_dash_sub254 ( ( (  s1881 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1135){ .fun = (  enum Unit_6  (*) (  struct env1134*  ,    int32_t  ) )lam1138 , .env =  envinst1134 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_612   lam1139 (    struct Cell_612  dref3342 ) {
    return ( (  default_dash_cell657 ) ( ) );
}

static  enum Unit_6   clear_dash_screen1131 (    struct Screen_610 *  screen3341 ) {
    ( (  map1132 ) ( ( ( * (  screen3341 ) ) .f_current ) ,  (  lam1139 ) ) );
    return ( Unit_6_Unit );
}

struct AppendIter_1146 {
    struct StrViewIter_552  f_it;
    struct Char_141  f_elem;
    bool  f_appended;
};

struct Zip_1145 {
    struct AppendIter_1146  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

static  struct Zip_1145   into_dash_iter1147 (    struct Zip_1145  self905 ) {
    return (  self905 );
}

static  struct AppendIter_1146   into_dash_iter1149 (    struct AppendIter_1146  self1013 ) {
    return (  self1013 );
}

static  struct Zip_1145   zip1148 (    struct AppendIter_1146  left916 ,    struct FromIter_217  right918 ) {
    struct AppendIter_1146  left_dash_it919 = ( (  into_dash_iter1149 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1145) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  struct AppendIter_1146   append1150 (    struct StrViewIter_552  it1000 ,    struct Char_141  e1002 ) {
    return ( (struct AppendIter_1146) { .f_it = ( (  into_dash_iter554 ) ( (  it1000 ) ) ) , .f_elem = (  e1002 ) , .f_appended = ( false ) } );
}

struct Tuple2_1153 {
    struct Char_141  field0;
    int32_t  field1;
};

static struct Tuple2_1153 Tuple2_1153_Tuple2 (  struct Char_141  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1153 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_1152 {
    enum {
        Maybe_1152_None_t,
        Maybe_1152_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1153  field0;
        } Maybe_1152_Just_s;
    } stuff;
};

static struct Maybe_1152 Maybe_1152_Just (  struct Tuple2_1153  field0 ) {
    return ( struct Maybe_1152 ) { .tag = Maybe_1152_Just_t, .stuff = { .Maybe_1152_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_555   next1155 (    struct AppendIter_1146 *  self1016 ) {
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

static  struct Maybe_1152   next1154 (    struct Zip_1145 *  self908 ) {
    struct Zip_1145  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1155 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1155 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1152_Just ) ( ( ( Tuple2_1153_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  int32_t   cast1157 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321156 (    uint32_t  x660 ) {
    return ( (  cast1157 ) ( (  x660 ) ) );
}

static  bool   between1159 (    struct Pos_19  c1318 ,    struct Pos_19  l1320 ,    struct Pos_19  r1322 ) {
    struct Pos_19  from1323 = ( (  min370 ) ( (  l1320 ) ,  (  r1322 ) ) );
    struct Pos_19  to1324 = ( (  max373 ) ( (  l1320 ) ,  (  r1322 ) ) );
    return ( (  cmp371 ( (  from1323 ) , (  c1318 ) ) != 2 ) && (  cmp371 ( (  c1318 ) , (  to1324 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1158 (    struct Pane_95 *  pane3706 ,    struct Pos_19  pos3708 ) {
    return ( {  struct Maybe_22  dref3709 = ( ( * (  pane3706 ) ) .f_sel ) ; dref3709.tag == Maybe_22_Just_t ? ( (  between1159 ) ( (  pos3708 ) ,  ( ( * (  pane3706 ) ) .f_cursor ) ,  ( dref3709 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1161 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_6   put_dash_char1160 (    struct Screen_610 *  screen3422 ,    struct Char_141  c3424 ,    int32_t  x3426 ,    int32_t  y3428 ) {
    int32_t  w3429 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3422 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp372 ( (  x3426 ) , (  w3429 ) ) != 0 ) || (  cmp372 ( (  y3428 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3422 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp372 ( (  x3426 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) || (  cmp372 ( (  y3428 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    size_t  i3430 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3428 ) , (  w3429 ) ) ) , (  x3426 ) ) ) ) );
    struct Color_613  fg3431 = ( ( * (  screen3422 ) ) .f_default_dash_fg );
    struct Color_613  bg3432 = ( ( * (  screen3422 ) ) .f_default_dash_bg );
    struct Char_141  c3433 = (  c3424 );
    int32_t  char_dash_width3434 = ( (  wcwidth899 ) ( (  c3433 ) ) );
    ( (  set645 ) ( ( ( * (  screen3422 ) ) .f_current ) ,  (  i3430 ) ,  ( (struct Cell_612) { .f_c = (  c3433 ) , .f_fg = (  fg3431 ) , .f_bg = (  bg3432 ) , .f_char_dash_width = (  char_dash_width3434 ) } ) ) );
    return ( Unit_6_Unit );
}

static  size_t   i64_dash_size1163 (    int64_t  x624 ) {
    return ( (size_t ) (  x624 ) );
}

static  int32_t   pos_dash_ci1162 (    struct TextBuf_63 *  self3676 ,    struct Pos_19  pos3678 ) {
    struct StrView_20  line3679 = ( (  line889 ) ( (  self3676 ) ,  ( (  pos3678 ) .f_line ) ) );
    uint8_t *  line_dash_ptr3680 = ( ( (  line3679 ) .f_contents ) .f_ptr );
    int64_t  bi3681 = ( (  from_dash_integral253 ( 0 ) ) );
    int32_t  ci3682 = ( (  from_dash_integral38 ( 0 ) ) );
    while ( (  cmp132 ( ( (  i64_dash_size1163 ) ( (  bi3681 ) ) ) , ( (  num_dash_bytes888 ) ( (  line3679 ) ) ) ) == 0 ) ) {
        size_t  off3683 = ( (  next_dash_char174 ) ( ( (  offset_dash_ptr276 ) ( (  line_dash_ptr3680 ) ,  (  bi3681 ) ) ) ) );
        bi3681 = (  op_dash_add808 ( (  bi3681 ) , ( (  size_dash_i64212 ) ( (  off3683 ) ) ) ) );
        if ( (  cmp372 ( ( (  i64_dash_i32811 ) ( (  bi3681 ) ) ) , ( (  pos3678 ) .f_bi ) ) == 2 ) ) {
            return (  ci3682 );
        }
        ci3682 = (  op_dash_add225 ( (  ci3682 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( (  size_dash_i32147 ) ( ( (  num_dash_bytes888 ) ( (  line3679 ) ) ) ) );
}

struct Maybe_1165 {
    enum {
        Maybe_1165_None_t,
        Maybe_1165_Just_t,
    } tag;
    union {
        struct {
            struct Cell_612 *  field0;
        } Maybe_1165_Just_s;
    } stuff;
};

static struct Maybe_1165 Maybe_1165_Just (  struct Cell_612 *  field0 ) {
    return ( struct Maybe_1165 ) { .tag = Maybe_1165_Just_t, .stuff = { .Maybe_1165_Just_s = { .field0 = field0 } } };
};

static  enum Unit_6   if_dash_just1164 (    struct Maybe_1165  x1272 ,    enum Unit_6 (*  fun1274 )(    struct Cell_612 *  ) ) {
    struct Maybe_1165  dref1275 = (  x1272 );
    if ( dref1275.tag == Maybe_1165_Just_t ) {
        ( (  fun1274 ) ( ( dref1275 .stuff .Maybe_1165_Just_s .field0 ) ) );
    }
    else {
        if ( dref1275.tag == Maybe_1165_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_1165   get_dash_cell_dash_ptr1166 (    struct Screen_610 *  screen3405 ,    int32_t  x3407 ,    int32_t  y3409 ) {
    int32_t  w3410 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3405 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp372 ( (  x3407 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  x3407 ) , (  w3410 ) ) != 0 ) ) ) {
        return ( (struct Maybe_1165) { .tag = Maybe_1165_None_t } );
    }
    if ( ( (  cmp372 ( (  y3409 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  y3409 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3405 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( (struct Maybe_1165) { .tag = Maybe_1165_None_t } );
    }
    size_t  i3411 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3409 ) , (  w3410 ) ) ) , (  x3407 ) ) ) ) );
    return ( ( Maybe_1165_Just ) ( ( (  get_dash_ptr646 ) ( ( ( * (  screen3405 ) ) .f_current ) ,  (  i3411 ) ) ) ) );
}

static  enum Unit_6   lam1167 (    struct Cell_612 *  curcell3728 ) {
    (*  curcell3728 ) .f_fg = ( ( Color_613_Color8 ) ( ( Color8_614_Black8 ) ) );
    (*  curcell3728 ) .f_bg = ( ( Color_613_Color8 ) ( ( Color8_614_White8 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render1141 (    struct Screen_610 *  screen3713 ,    struct Pane_95 *  pane3715 ) {
    struct RangeIter_638  temp1142 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  num_dash_lines920 ) ( ( ( * (  pane3715 ) ) .f_buf ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond1143 =  next641 (&temp1142);
        if (  __cond1143 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3717 =  __cond1143 .stuff .Maybe_223_Just_s .field0;
        int32_t  y3718 = (  op_dash_sub760 ( (  line_dash_num3717 ) , (  from_dash_integral38 ( 1 ) ) ) );
        struct StrView_20  line_dash_content3719 = ( (  line889 ) ( ( ( * (  pane3715 ) ) .f_buf ) ,  (  y3718 ) ) );
        int32_t  xbi3720 = (  from_dash_integral38 ( 0 ) );
        struct Zip_1145  temp1144 =  into_dash_iter1147 ( ( (  zip1148 ) ( ( (  append1150 ) ( ( (  chars557 ) ( (  line_dash_content3719 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_1152  __cond1151 =  next1154 (&temp1144);
            if (  __cond1151 .tag == 0 ) {
                break;
            }
            struct Tuple2_1153  dref3721 =  __cond1151 .stuff .Maybe_1152_Just_s .field0;
            if ( (  cmp372 ( ( dref3721 .field1 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3713 ) ) .f_tui ) ) .f_width ) ) ) ) == 2 ) ) {
                break;
            }
            bool  in_dash_selection3724 = ( (  is_dash_in_dash_selection1158 ) ( (  pane3715 ) ,  ( (  mk452 ) ( (  y3718 ) ,  (  xbi3720 ) ) ) ) );
            if ( (  in_dash_selection3724 ) ) {
                (*  screen3713 ) .f_default_dash_bg = ( ( Color_613_Color8 ) ( ( Color8_614_Cyan8 ) ) );
            }
            ( (  put_dash_char1160 ) ( (  screen3713 ) ,  ( dref3721 .field0 ) ,  ( dref3721 .field1 ) ,  (  y3718 ) ) );
            if ( (  in_dash_selection3724 ) ) {
                (*  screen3713 ) .f_default_dash_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } );
            }
            xbi3720 = (  op_dash_add225 ( (  xbi3720 ) , ( (  size_dash_i32147 ) ( ( ( dref3721 .field0 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    struct Pos_19  cursor3725 = ( ( * (  pane3715 ) ) .f_cursor );
    int32_t  cursor_dash_ci3726 = ( (  pos_dash_ci1162 ) ( ( ( * (  pane3715 ) ) .f_buf ) ,  (  cursor3725 ) ) );
    ( (  if_dash_just1164 ) ( ( (  get_dash_cell_dash_ptr1166 ) ( (  screen3713 ) ,  (  cursor_dash_ci3726 ) ,  ( ( ( * (  pane3715 ) ) .f_cursor ) .f_line ) ) ) ,  (  lam1167 ) ) );
    return ( Unit_6_Unit );
}

struct env1169 {
    ;
    ;
    ;
    int32_t *  curline3878;
    ;
    ;
    struct Screen_610 *  screen3875;
    ;
};

struct env1170 {
    ;
    ;
    ;
    int32_t *  curline3878;
    ;
    ;
    struct Screen_610 *  screen3875;
    ;
};

struct env1171 {
    ;
    ;
    ;
    int32_t *  curline3878;
    ;
    ;
    struct Screen_610 *  screen3875;
    ;
};

struct env1172 {
    ;
    ;
    ;
    int32_t *  curline3878;
    ;
    ;
    struct Screen_610 *  screen3875;
    ;
};

struct StrConcat_1175 {
    struct StrView_20  field0;
    enum Mode_96  field1;
};

static struct StrConcat_1175 StrConcat_1175_StrConcat (  struct StrView_20  field0 ,  enum Mode_96  field1 ) {
    return ( struct StrConcat_1175 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1174 {
    enum Unit_6  (*fun) (  struct env1169*  ,    struct StrConcat_1175  );
    struct env1169 env;
};

struct StrConcatIter_1179 {
    struct StrViewIter_552  f_left;
    struct StrViewIter_552  f_right;
};

static  struct StrConcatIter_1179   into_dash_iter1181 (    struct StrConcatIter_1179  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1182 (    struct StrConcatIter_1179 *  self1475 ) {
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

static  size_t   reduce1180 (    struct StrConcatIter_1179  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1179  it1080 = ( (  into_dash_iter1181 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1182 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1183 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1183);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1184;
    return (  temp1184 );
}

static  size_t   lam1185 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1178 (    struct StrConcatIter_1179  it1085 ) {
    return ( (  reduce1180 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1185 ) ) );
}

static  struct StrView_20   todo1189 (  ) {
    ( (  print958 ) ( ( (  from_dash_string170 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined465 ) ( ) );
}

static  struct StrViewIter_552   chars1188 (    enum Mode_96  self3666 ) {
    return ( (  chars557 ) ( ( {  enum Mode_96  dref3667 = (  self3666 ) ;  dref3667 == Mode_96_Normal ? ( (  from_dash_string170 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3667 == Mode_96_Insert ? ( (  from_dash_string170 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3667 == Mode_96_Select ? ( (  from_dash_string170 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1189 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1179   into_dash_iter1187 (    struct StrConcat_1175  dref1479 ) {
    return ( (struct StrConcatIter_1179) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1188 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1179   chars1186 (    struct StrConcat_1175  self1490 ) {
    return ( (  into_dash_iter1187 ) ( (  self1490 ) ) );
}

struct Zip_1192 {
    struct StrConcatIter_1179  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1193 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1194 {
    enum Unit_6  (*fun) (  struct env1193*  ,    struct Tuple2_1153  );
    struct env1193 env;
};

static  struct Zip_1192   into_dash_iter1196 (    struct Zip_1192  self905 ) {
    return (  self905 );
}

static  struct Maybe_1152   next1197 (    struct Zip_1192 *  self908 ) {
    struct Zip_1192  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1182 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1182 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1152_Just ) ( ( ( Tuple2_1153_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1191 (    struct Zip_1192  iterable1055 ,   struct envunion1194  fun1057 ) {
    struct Zip_1192  temp1195 = ( (  into_dash_iter1196 ) ( (  iterable1055 ) ) );
    struct Zip_1192 *  it1058 = ( &temp1195 );
    while ( ( true ) ) {
        struct Maybe_1152  dref1059 = ( (  next1197 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1152_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1152_Just_t ) {
                struct envunion1194  temp1198 = (  fun1057 );
                ( temp1198.fun ( &temp1198.env ,  ( dref1059 .stuff .Maybe_1152_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1192   zip1199 (    struct StrConcatIter_1179  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1179  left_dash_it919 = ( (  into_dash_iter1181 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1192) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1200 (   struct env1193* env ,    struct Tuple2_1153  dref3448 ) {
    ( (  put_dash_char1160 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1190 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1175  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp372 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  y3443 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min418 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1193 envinst1193 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1191 ) ( ( (  zip1199 ) ( ( (  chars1186 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1194){ .fun = (  enum Unit_6  (*) (  struct env1193*  ,    struct Tuple2_1153  ) )lam1200 , .env =  envinst1193 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1177 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1175  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1178 ) ( ( (  chars1186 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1190 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1176 (   struct env1169* env ,    struct StrConcat_1175  s3881 ) {
    ( (  draw_dash_str_dash_right1177 ) ( ( env->screen3875 ) ,  (  s3881 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3878 ) ) ) );
    (* env->curline3878 ) = (  op_dash_add225 ( ( * ( env->curline3878 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1205 {
    struct StrView_20  field0;
    struct Pos_19  field1;
};

static struct StrConcat_1205 StrConcat_1205_StrConcat (  struct StrView_20  field0 ,  struct Pos_19  field1 ) {
    return ( struct StrConcat_1205 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1204 {
    struct StrConcat_1205  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1204 StrConcat_1204_StrConcat (  struct StrConcat_1205  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1204 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1203 {
    struct StrConcat_1204  field0;
    enum CharType_940  field1;
};

static struct StrConcat_1203 StrConcat_1203_StrConcat (  struct StrConcat_1204  field0 ,  enum CharType_940  field1 ) {
    return ( struct StrConcat_1203 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1202 {
    enum Unit_6  (*fun) (  struct env1170*  ,    struct StrConcat_1203  );
    struct env1170 env;
};

struct IntStrIter_1216 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1215 {
    struct AppendIter_822  f_left;
    struct IntStrIter_1216  f_right;
};

struct StrConcatIter_1214 {
    struct StrConcatIter_1215  f_left;
    struct StrViewIter_552  f_right;
};

struct StrConcatIter_1213 {
    struct StrConcatIter_1214  f_left;
    struct IntStrIter_1216  f_right;
};

struct StrConcatIter_1212 {
    struct StrConcatIter_1213  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1211 {
    struct StrViewIter_552  f_left;
    struct StrConcatIter_1212  f_right;
};

struct StrConcatIter_1210 {
    struct StrConcatIter_1211  f_left;
    struct StrViewIter_552  f_right;
};

struct StrConcatIter_1209 {
    struct StrConcatIter_1210  f_left;
    struct StrViewIter_552  f_right;
};

static  struct StrConcatIter_1209   into_dash_iter1218 (    struct StrConcatIter_1209  self1472 ) {
    return (  self1472 );
}

struct env1229 {
    ;
    int32_t  base1191;
};

struct envunion1230 {
    int32_t  (*fun) (  struct env1229*  ,    int32_t  ,    int32_t  );
    struct env1229 env;
};

static  int32_t   reduce1228 (    struct Range_635  iterable1074 ,    int32_t  base1076 ,   struct envunion1230  fun1078 ) {
    int32_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1230  temp1231 = (  fun1078 );
                x1079 = ( temp1231.fun ( &temp1231.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1232 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1232);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1233;
    return (  temp1233 );
}

static  int32_t   lam1234 (   struct env1229* env ,    int32_t  item1195 ,    int32_t  x1197 ) {
    return (  op_dash_mul1161 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  int32_t   pow1227 (    int32_t  base1191 ,    int32_t  p1193 ) {
    struct env1229 envinst1229 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1228 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  ( (struct envunion1230){ .fun = (  int32_t  (*) (  struct env1229*  ,    int32_t  ,    int32_t  ) )lam1234 , .env =  envinst1229 } ) ) );
}

static  int32_t   op_dash_div1235 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1236 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_555   next1226 (    struct IntStrIter_1216 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp372 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    int32_t  trim_dash_down1404 = ( (  pow1227 ) ( (  from_dash_integral38 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int32_t  upper1405 = (  op_dash_div1235 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    int32_t  upper_dash_mask1406 = (  op_dash_mul1161 ( (  op_dash_div1235 ( (  upper1405 ) , (  from_dash_integral38 ( 10 ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1236 ) ( (  op_dash_sub760 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1225 (    struct StrConcatIter_1215 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1226 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1224 (    struct StrConcatIter_1214 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1225 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1223 (    struct StrConcatIter_1213 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1224 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1226 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1222 (    struct StrConcatIter_1212 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1223 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1221 (    struct StrConcatIter_1211 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1222 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1220 (    struct StrConcatIter_1210 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1221 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1219 (    struct StrConcatIter_1209 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1220 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1217 (    struct StrConcatIter_1209  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1209  it1080 = ( (  into_dash_iter1218 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1219 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1237 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1237);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1238;
    return (  temp1238 );
}

static  size_t   lam1239 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1208 (    struct StrConcatIter_1209  it1085 ) {
    return ( (  reduce1217 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1239 ) ) );
}

struct StrConcat_1251 {
    struct Char_141  field0;
    int32_t  field1;
};

static struct StrConcat_1251 StrConcat_1251_StrConcat (  struct Char_141  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1251 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1250 {
    struct StrConcat_1251  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1250 StrConcat_1250_StrConcat (  struct StrConcat_1251  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1250 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1249 {
    struct StrConcat_1250  field0;
    int32_t  field1;
};

static struct StrConcat_1249 StrConcat_1249_StrConcat (  struct StrConcat_1250  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1249 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1248 {
    struct StrConcat_1249  field0;
    struct Char_141  field1;
};

static struct StrConcat_1248 StrConcat_1248_StrConcat (  struct StrConcat_1249  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1248 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1261 (    int32_t  self1411 ) {
    if ( (  eq266 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp372 ( (  self1411 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1235 ( (  self1411 ) , (  from_dash_integral38 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1216   int_dash_iter1260 (    int32_t  int1415 ) {
    if ( (  cmp372 ( (  int1415 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1216) { .f_int = (  op_dash_neg585 ( (  int1415 ) ) ) , .f_len = ( (  count_dash_digits1261 ) ( (  op_dash_neg585 ( (  int1415 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1216) { .f_int = (  int1415 ) , .f_len = ( (  count_dash_digits1261 ) ( (  int1415 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1216   chars1259 (    int32_t  self1424 ) {
    return ( (  int_dash_iter1260 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_1215   into_dash_iter1258 (    struct StrConcat_1251  dref1479 ) {
    return ( (struct StrConcatIter_1215) { .f_left = ( (  chars862 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1259 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1215   chars1257 (    struct StrConcat_1251  self1490 ) {
    return ( (  into_dash_iter1258 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1214   into_dash_iter1256 (    struct StrConcat_1250  dref1479 ) {
    return ( (struct StrConcatIter_1214) { .f_left = ( (  chars1257 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1214   chars1255 (    struct StrConcat_1250  self1490 ) {
    return ( (  into_dash_iter1256 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1213   into_dash_iter1254 (    struct StrConcat_1249  dref1479 ) {
    return ( (struct StrConcatIter_1213) { .f_left = ( (  chars1255 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1259 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1213   chars1253 (    struct StrConcat_1249  self1490 ) {
    return ( (  into_dash_iter1254 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1212   into_dash_iter1252 (    struct StrConcat_1248  dref1479 ) {
    return ( (struct StrConcatIter_1212) { .f_left = ( (  chars1253 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1212   chars1247 (    struct StrConcat_1248  self1490 ) {
    return ( (  into_dash_iter1252 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1212   chars1246 (    struct Pos_19  self3494 ) {
    return ( (  chars1247 ) ( ( ( StrConcat_1248_StrConcat ) ( ( ( StrConcat_1249_StrConcat ) ( ( ( StrConcat_1250_StrConcat ) ( ( ( StrConcat_1251_StrConcat ) ( ( (  from_dash_charlike171 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3494 ) .f_line ) ) ) ,  ( (  from_dash_string170 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3494 ) .f_bi ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1211   into_dash_iter1245 (    struct StrConcat_1205  dref1479 ) {
    return ( (struct StrConcatIter_1211) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1246 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1211   chars1244 (    struct StrConcat_1205  self1490 ) {
    return ( (  into_dash_iter1245 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1210   into_dash_iter1243 (    struct StrConcat_1204  dref1479 ) {
    return ( (struct StrConcatIter_1210) { .f_left = ( (  chars1244 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1210   chars1242 (    struct StrConcat_1204  self1490 ) {
    return ( (  into_dash_iter1243 ) ( (  self1490 ) ) );
}

static  struct StrViewIter_552   chars1262 (    enum CharType_940  self3655 ) {
    return ( (  chars557 ) ( ( {  enum CharType_940  dref3656 = (  self3655 ) ;  dref3656 == CharType_940_CharPunctuation ? ( (  from_dash_string170 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3656 == CharType_940_CharWord ? ( (  from_dash_string170 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3656 == CharType_940_CharSpace ? ( (  from_dash_string170 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1189 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1209   into_dash_iter1241 (    struct StrConcat_1203  dref1479 ) {
    return ( (struct StrConcatIter_1209) { .f_left = ( (  chars1242 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1262 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1209   chars1240 (    struct StrConcat_1203  self1490 ) {
    return ( (  into_dash_iter1241 ) ( (  self1490 ) ) );
}

struct Zip_1265 {
    struct StrConcatIter_1209  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1266 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1267 {
    enum Unit_6  (*fun) (  struct env1266*  ,    struct Tuple2_1153  );
    struct env1266 env;
};

static  struct Zip_1265   into_dash_iter1269 (    struct Zip_1265  self905 ) {
    return (  self905 );
}

static  struct Maybe_1152   next1270 (    struct Zip_1265 *  self908 ) {
    struct Zip_1265  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1219 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1219 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1152_Just ) ( ( ( Tuple2_1153_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1264 (    struct Zip_1265  iterable1055 ,   struct envunion1267  fun1057 ) {
    struct Zip_1265  temp1268 = ( (  into_dash_iter1269 ) ( (  iterable1055 ) ) );
    struct Zip_1265 *  it1058 = ( &temp1268 );
    while ( ( true ) ) {
        struct Maybe_1152  dref1059 = ( (  next1270 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1152_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1152_Just_t ) {
                struct envunion1267  temp1271 = (  fun1057 );
                ( temp1271.fun ( &temp1271.env ,  ( dref1059 .stuff .Maybe_1152_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1265   zip1272 (    struct StrConcatIter_1209  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1209  left_dash_it919 = ( (  into_dash_iter1218 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1265) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1273 (   struct env1266* env ,    struct Tuple2_1153  dref3448 ) {
    ( (  put_dash_char1160 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1263 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1203  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp372 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  y3443 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min418 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1266 envinst1266 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1264 ) ( ( (  zip1272 ) ( ( (  chars1240 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1267){ .fun = (  enum Unit_6  (*) (  struct env1266*  ,    struct Tuple2_1153  ) )lam1273 , .env =  envinst1266 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1207 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1203  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1208 ) ( ( (  chars1240 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1263 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1206 (   struct env1170* env ,    struct StrConcat_1203  s3881 ) {
    ( (  draw_dash_str_dash_right1207 ) ( ( env->screen3875 ) ,  (  s3881 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3878 ) ) ) );
    (* env->curline3878 ) = (  op_dash_add225 ( ( * ( env->curline3878 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1276 {
    struct StrView_20  field0;
    struct Maybe_22  field1;
};

static struct StrConcat_1276 StrConcat_1276_StrConcat (  struct StrView_20  field0 ,  struct Maybe_22  field1 ) {
    return ( struct StrConcat_1276 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1275 {
    enum Unit_6  (*fun) (  struct env1171*  ,    struct StrConcat_1276  );
    struct env1171 env;
};

struct StrConcatIter_1282 {
    struct StrConcatIter_1211  f_left;
    struct AppendIter_822  f_right;
};

struct StrCaseIter_1281 {
    enum {
        StrCaseIter_1281_StrCaseIter1_t,
        StrCaseIter_1281_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_552  field0;
        } StrCaseIter_1281_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1282  field0;
        } StrCaseIter_1281_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1281 StrCaseIter_1281_StrCaseIter1 (  struct StrViewIter_552  field0 ) {
    return ( struct StrCaseIter_1281 ) { .tag = StrCaseIter_1281_StrCaseIter1_t, .stuff = { .StrCaseIter_1281_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1281 StrCaseIter_1281_StrCaseIter2 (  struct StrConcatIter_1282  field0 ) {
    return ( struct StrCaseIter_1281 ) { .tag = StrCaseIter_1281_StrCaseIter2_t, .stuff = { .StrCaseIter_1281_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1280 {
    struct StrViewIter_552  f_left;
    struct StrCaseIter_1281  f_right;
};

static  struct StrConcatIter_1280   into_dash_iter1284 (    struct StrConcatIter_1280  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1287 (    struct StrConcatIter_1282 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1221 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1286 (    struct StrCaseIter_1281 *  self1497 ) {
    struct StrCaseIter_1281 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1281_StrCaseIter1_t ) {
        return ( (  next556 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1281_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1281_StrCaseIter2_t ) {
            return ( (  next1287 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1281_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_555   next1285 (    struct StrConcatIter_1280 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1286 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1283 (    struct StrConcatIter_1280  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1280  it1080 = ( (  into_dash_iter1284 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1285 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1288 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1288);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1289;
    return (  temp1289 );
}

static  size_t   lam1290 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1279 (    struct StrConcatIter_1280  it1085 ) {
    return ( (  reduce1283 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1290 ) ) );
}

struct StrConcat_1295 {
    struct StrConcat_1205  field0;
    struct Char_141  field1;
};

static struct StrConcat_1295 StrConcat_1295_StrConcat (  struct StrConcat_1205  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1295 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1294 {
    enum {
        StrCase_1294_StrCase1_t,
        StrCase_1294_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1294_StrCase1_s;
        struct {
            struct StrConcat_1295  field0;
        } StrCase_1294_StrCase2_s;
    } stuff;
};

static struct StrCase_1294 StrCase_1294_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1294 ) { .tag = StrCase_1294_StrCase1_t, .stuff = { .StrCase_1294_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1294 StrCase_1294_StrCase2 (  struct StrConcat_1295  field0 ) {
    return ( struct StrCase_1294 ) { .tag = StrCase_1294_StrCase2_t, .stuff = { .StrCase_1294_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1282   into_dash_iter1300 (    struct StrConcat_1295  dref1479 ) {
    return ( (struct StrConcatIter_1282) { .f_left = ( (  chars1244 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1282   chars1299 (    struct StrConcat_1295  self1490 ) {
    return ( (  into_dash_iter1300 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1281   into_dash_iter1298 (    struct StrCase_1294  self1503 ) {
    struct StrCase_1294  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1294_StrCase1_t ) {
        return ( ( StrCaseIter_1281_StrCaseIter1 ) ( ( (  chars557 ) ( ( dref1504 .stuff .StrCase_1294_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1294_StrCase2_t ) {
            return ( ( StrCaseIter_1281_StrCaseIter2 ) ( ( (  chars1299 ) ( ( dref1504 .stuff .StrCase_1294_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1281   chars1297 (    struct StrCase_1294  self1515 ) {
    return ( (  into_dash_iter1298 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1281   chars1293 (    struct Maybe_22  self1529 ) {
    struct StrCase_1294  temp1296;
    struct StrCase_1294  c1530 = (  temp1296 );
    struct Maybe_22  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_22_None_t ) {
        c1530 = ( ( StrCase_1294_StrCase1 ) ( ( (  from_dash_string170 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_22_Just_t ) {
            c1530 = ( ( StrCase_1294_StrCase2 ) ( ( ( StrConcat_1295_StrConcat ) ( ( ( StrConcat_1205_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_22_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1297 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1280   into_dash_iter1292 (    struct StrConcat_1276  dref1479 ) {
    return ( (struct StrConcatIter_1280) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1293 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1280   chars1291 (    struct StrConcat_1276  self1490 ) {
    return ( (  into_dash_iter1292 ) ( (  self1490 ) ) );
}

struct Zip_1303 {
    struct StrConcatIter_1280  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1304 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1305 {
    enum Unit_6  (*fun) (  struct env1304*  ,    struct Tuple2_1153  );
    struct env1304 env;
};

static  struct Zip_1303   into_dash_iter1307 (    struct Zip_1303  self905 ) {
    return (  self905 );
}

static  struct Maybe_1152   next1308 (    struct Zip_1303 *  self908 ) {
    struct Zip_1303  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1285 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1285 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1152_Just ) ( ( ( Tuple2_1153_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1302 (    struct Zip_1303  iterable1055 ,   struct envunion1305  fun1057 ) {
    struct Zip_1303  temp1306 = ( (  into_dash_iter1307 ) ( (  iterable1055 ) ) );
    struct Zip_1303 *  it1058 = ( &temp1306 );
    while ( ( true ) ) {
        struct Maybe_1152  dref1059 = ( (  next1308 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1152_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1152_Just_t ) {
                struct envunion1305  temp1309 = (  fun1057 );
                ( temp1309.fun ( &temp1309.env ,  ( dref1059 .stuff .Maybe_1152_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1303   zip1310 (    struct StrConcatIter_1280  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1280  left_dash_it919 = ( (  into_dash_iter1284 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1303) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1311 (   struct env1304* env ,    struct Tuple2_1153  dref3448 ) {
    ( (  put_dash_char1160 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1301 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1276  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp372 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  y3443 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min418 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1304 envinst1304 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1302 ) ( ( (  zip1310 ) ( ( (  chars1291 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1305){ .fun = (  enum Unit_6  (*) (  struct env1304*  ,    struct Tuple2_1153  ) )lam1311 , .env =  envinst1304 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1278 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1276  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1279 ) ( ( (  chars1291 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1301 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1277 (   struct env1171* env ,    struct StrConcat_1276  s3881 ) {
    ( (  draw_dash_str_dash_right1278 ) ( ( env->screen3875 ) ,  (  s3881 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3878 ) ) ) );
    (* env->curline3878 ) = (  op_dash_add225 ( ( * ( env->curline3878 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1314 {
    struct StrView_20  field0;
    struct Maybe_97  field1;
};

static struct StrConcat_1314 StrConcat_1314_StrConcat (  struct StrView_20  field0 ,  struct Maybe_97  field1 ) {
    return ( struct StrConcat_1314 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1313 {
    enum Unit_6  (*fun) (  struct env1172*  ,    struct StrConcat_1314  );
    struct env1172 env;
};

struct StrConcatIter_1320 {
    struct StrConcatIter_1179  f_left;
    struct AppendIter_822  f_right;
};

struct StrCaseIter_1319 {
    enum {
        StrCaseIter_1319_StrCaseIter1_t,
        StrCaseIter_1319_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_552  field0;
        } StrCaseIter_1319_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1320  field0;
        } StrCaseIter_1319_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1319 StrCaseIter_1319_StrCaseIter1 (  struct StrViewIter_552  field0 ) {
    return ( struct StrCaseIter_1319 ) { .tag = StrCaseIter_1319_StrCaseIter1_t, .stuff = { .StrCaseIter_1319_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1319 StrCaseIter_1319_StrCaseIter2 (  struct StrConcatIter_1320  field0 ) {
    return ( struct StrCaseIter_1319 ) { .tag = StrCaseIter_1319_StrCaseIter2_t, .stuff = { .StrCaseIter_1319_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1318 {
    struct StrViewIter_552  f_left;
    struct StrCaseIter_1319  f_right;
};

static  struct StrConcatIter_1318   into_dash_iter1322 (    struct StrConcatIter_1318  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1325 (    struct StrConcatIter_1320 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1182 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1324 (    struct StrCaseIter_1319 *  self1497 ) {
    struct StrCaseIter_1319 *  dref1498 = (  self1497 );
    if ( (* dref1498 ).tag == StrCaseIter_1319_StrCaseIter1_t ) {
        return ( (  next556 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1319_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1498 ).tag == StrCaseIter_1319_StrCaseIter2_t ) {
            return ( (  next1325 ) ( ( & ( (* dref1498 ) .stuff .StrCaseIter_1319_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_555   next1323 (    struct StrConcatIter_1318 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1324 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1321 (    struct StrConcatIter_1318  iterable1074 ,    size_t  base1076 ,    size_t (*  fun1078 )(    struct Char_141  ,    size_t  ) ) {
    size_t  x1079 = (  base1076 );
    struct StrConcatIter_1318  it1080 = ( (  into_dash_iter1322 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_555  dref1081 = ( (  next1323 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_555_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_555_Just_t ) {
                x1079 = ( (  fun1078 ) ( ( dref1081 .stuff .Maybe_555_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1326 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1326);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1327;
    return (  temp1327 );
}

static  size_t   lam1328 (    struct Char_141  dref1086 ,    size_t  x1088 ) {
    return (  op_dash_add183 ( (  x1088 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1317 (    struct StrConcatIter_1318  it1085 ) {
    return ( (  reduce1321 ) ( (  it1085 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1328 ) ) );
}

struct StrCase_1332 {
    enum {
        StrCase_1332_StrCase1_t,
        StrCase_1332_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1332_StrCase1_s;
        struct {
            struct StrConcat_427  field0;
        } StrCase_1332_StrCase2_s;
    } stuff;
};

static struct StrCase_1332 StrCase_1332_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1332 ) { .tag = StrCase_1332_StrCase1_t, .stuff = { .StrCase_1332_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1332 StrCase_1332_StrCase2 (  struct StrConcat_427  field0 ) {
    return ( struct StrCase_1332 ) { .tag = StrCase_1332_StrCase2_t, .stuff = { .StrCase_1332_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1179   into_dash_iter1339 (    struct StrConcat_428  dref1479 ) {
    return ( (struct StrConcatIter_1179) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars557 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1179   chars1338 (    struct StrConcat_428  self1490 ) {
    return ( (  into_dash_iter1339 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1320   into_dash_iter1337 (    struct StrConcat_427  dref1479 ) {
    return ( (struct StrConcatIter_1320) { .f_left = ( (  chars1338 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1320   chars1336 (    struct StrConcat_427  self1490 ) {
    return ( (  into_dash_iter1337 ) ( (  self1490 ) ) );
}

static  struct StrCaseIter_1319   into_dash_iter1335 (    struct StrCase_1332  self1503 ) {
    struct StrCase_1332  dref1504 = (  self1503 );
    if ( dref1504.tag == StrCase_1332_StrCase1_t ) {
        return ( ( StrCaseIter_1319_StrCaseIter1 ) ( ( (  chars557 ) ( ( dref1504 .stuff .StrCase_1332_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1504.tag == StrCase_1332_StrCase2_t ) {
            return ( ( StrCaseIter_1319_StrCaseIter2 ) ( ( (  chars1336 ) ( ( dref1504 .stuff .StrCase_1332_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1319   chars1334 (    struct StrCase_1332  self1515 ) {
    return ( (  into_dash_iter1335 ) ( (  self1515 ) ) );
}

static  struct StrCaseIter_1319   chars1331 (    struct Maybe_97  self1529 ) {
    struct StrCase_1332  temp1333;
    struct StrCase_1332  c1530 = (  temp1333 );
    struct Maybe_97  dref1531 = (  self1529 );
    if ( dref1531.tag == Maybe_97_None_t ) {
        c1530 = ( ( StrCase_1332_StrCase1 ) ( ( (  from_dash_string170 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1531.tag == Maybe_97_Just_t ) {
            c1530 = ( ( StrCase_1332_StrCase2 ) ( ( ( StrConcat_427_StrConcat ) ( ( ( StrConcat_428_StrConcat ) ( ( (  from_dash_string170 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1531 .stuff .Maybe_97_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1334 ) ( (  c1530 ) ) );
}

static  struct StrConcatIter_1318   into_dash_iter1330 (    struct StrConcat_1314  dref1479 ) {
    return ( (struct StrConcatIter_1318) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1331 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1318   chars1329 (    struct StrConcat_1314  self1490 ) {
    return ( (  into_dash_iter1330 ) ( (  self1490 ) ) );
}

struct Zip_1342 {
    struct StrConcatIter_1318  f_left_dash_it;
    struct FromIter_217  f_right_dash_it;
};

struct env1343 {
    int32_t  y3443;
    ;
    struct Screen_610 *  screen3437;
    int32_t  x3446;
    ;
};

struct envunion1344 {
    enum Unit_6  (*fun) (  struct env1343*  ,    struct Tuple2_1153  );
    struct env1343 env;
};

static  struct Zip_1342   into_dash_iter1346 (    struct Zip_1342  self905 ) {
    return (  self905 );
}

static  struct Maybe_1152   next1347 (    struct Zip_1342 *  self908 ) {
    struct Zip_1342  copy909 = ( * (  self908 ) );
    while ( ( true ) ) {
        struct Maybe_555  dref910 = ( (  next1323 ) ( ( & ( (  copy909 ) .f_left_dash_it ) ) ) );
        if ( dref910.tag == Maybe_555_None_t ) {
            return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
        }
        else {
            if ( dref910.tag == Maybe_555_Just_t ) {
                struct Maybe_223  dref912 = ( (  next224 ) ( ( & ( (  copy909 ) .f_right_dash_it ) ) ) );
                if ( dref912.tag == Maybe_223_None_t ) {
                    return ( (struct Maybe_1152) { .tag = Maybe_1152_None_t } );
                }
                else {
                    if ( dref912.tag == Maybe_223_Just_t ) {
                        ( (  next1323 ) ( ( & ( ( * (  self908 ) ) .f_left_dash_it ) ) ) );
                        ( (  next224 ) ( ( & ( ( * (  self908 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1152_Just ) ( ( ( Tuple2_1153_Tuple2 ) ( ( dref910 .stuff .Maybe_555_Just_s .field0 ) ,  ( dref912 .stuff .Maybe_223_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1341 (    struct Zip_1342  iterable1055 ,   struct envunion1344  fun1057 ) {
    struct Zip_1342  temp1345 = ( (  into_dash_iter1346 ) ( (  iterable1055 ) ) );
    struct Zip_1342 *  it1058 = ( &temp1345 );
    while ( ( true ) ) {
        struct Maybe_1152  dref1059 = ( (  next1347 ) ( (  it1058 ) ) );
        if ( dref1059.tag == Maybe_1152_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1059.tag == Maybe_1152_Just_t ) {
                struct envunion1344  temp1348 = (  fun1057 );
                ( temp1348.fun ( &temp1348.env ,  ( dref1059 .stuff .Maybe_1152_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1342   zip1349 (    struct StrConcatIter_1318  left916 ,    struct FromIter_217  right918 ) {
    struct StrConcatIter_1318  left_dash_it919 = ( (  into_dash_iter1322 ) ( (  left916 ) ) );
    struct FromIter_217  right_dash_it920 = ( (  into_dash_iter229 ) ( (  right918 ) ) );
    return ( (struct Zip_1342) { .f_left_dash_it = (  left_dash_it919 ) , .f_right_dash_it = (  right_dash_it920 ) } );
}

static  enum Unit_6   lam1350 (   struct env1343* env ,    struct Tuple2_1153  dref3448 ) {
    ( (  put_dash_char1160 ) ( ( env->screen3437 ) ,  ( dref3448 .field0 ) ,  (  op_dash_add225 ( ( env->x3446 ) , ( dref3448 .field1 ) ) ) ,  ( env->y3443 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1340 (    struct Screen_610 *  screen3437 ,    struct StrConcat_1314  s3439 ,    int32_t  x3441 ,    int32_t  y3443 ) {
    int32_t  w3444 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp372 ( (  y3443 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp372 ( (  y3443 ) , ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3437 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3445 = (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3443 ) , (  w3444 ) ) ) , (  x3441 ) ) );
    int32_t  x3446 = ( (  min418 ) ( (  x3441 ) ,  (  w3444 ) ) );
    size_t  max_dash_len3447 = ( (  i32_dash_size213 ) ( (  op_dash_sub760 ( (  w3444 ) , (  x3446 ) ) ) ) );
    struct env1343 envinst1343 = {
        .y3443 =  y3443 ,
        .screen3437 =  screen3437 ,
        .x3446 =  x3446 ,
    };
    ( (  for_dash_each1341 ) ( ( (  zip1349 ) ( ( (  chars1329 ) ( (  s3439 ) ) ) ,  ( (  from230 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1344){ .fun = (  enum Unit_6  (*) (  struct env1343*  ,    struct Tuple2_1153  ) )lam1350 , .env =  envinst1343 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1316 (    struct Screen_610 *  screen3453 ,    struct StrConcat_1314  s3455 ,    int32_t  x3457 ,    int32_t  y3459 ) {
    int32_t  slen3460 = ( (  size_dash_i32147 ) ( ( (  count1317 ) ( ( (  chars1329 ) ( (  s3455 ) ) ) ) ) ) );
    int32_t  w3461 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3453 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3462 = (  op_dash_sub760 ( (  op_dash_sub760 ( (  w3461 ) , (  x3457 ) ) ) , (  slen3460 ) ) );
    ( (  draw_dash_str1340 ) ( (  screen3453 ) ,  (  s3455 ) ,  (  x3462 ) ,  (  y3459 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1315 (   struct env1172* env ,    struct StrConcat_1314  s3881 ) {
    ( (  draw_dash_str_dash_right1316 ) ( ( env->screen3875 ) ,  (  s3881 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline3878 ) ) ) );
    (* env->curline3878 ) = (  op_dash_add225 ( ( * ( env->curline3878 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render_dash_editor1140 (    struct Screen_610 *  screen3875 ,    struct Editor_94 *  ed3877 ) {
    ( (  render1141 ) ( (  screen3875 ) ,  ( (  pane917 ) ( (  ed3877 ) ) ) ) );
    int32_t  temp1168 = (  from_dash_integral38 ( 0 ) );
    int32_t *  curline3878 = ( &temp1168 );
    struct env1169 envinst1169 = {
        .curline3878 =  curline3878 ,
        .screen3875 =  screen3875 ,
    };
    struct env1170 envinst1170 = {
        .curline3878 =  curline3878 ,
        .screen3875 =  screen3875 ,
    };
    struct env1171 envinst1171 = {
        .curline3878 =  curline3878 ,
        .screen3875 =  screen3875 ,
    };
    struct env1172 envinst1172 = {
        .curline3878 =  curline3878 ,
        .screen3875 =  screen3875 ,
    };
    struct envunion1174  temp1173 = ( (struct envunion1174){ .fun = (  enum Unit_6  (*) (  struct env1169*  ,    struct StrConcat_1175  ) )ann1176 , .env =  envinst1169 } );
    ( temp1173.fun ( &temp1173.env ,  ( ( StrConcat_1175_StrConcat ) ( ( (  from_dash_string170 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed3877 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_940  cur_dash_ty3882 = ( (  char_dash_type942 ) ( ( (  char_dash_at950 ) ( ( (  pane917 ) ( (  ed3877 ) ) ) ,  ( ( ( * (  ed3877 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1202  temp1201 = ( (struct envunion1202){ .fun = (  enum Unit_6  (*) (  struct env1170*  ,    struct StrConcat_1203  ) )ann1206 , .env =  envinst1170 } );
    ( temp1201.fun ( &temp1201.env ,  ( ( StrConcat_1203_StrConcat ) ( ( ( StrConcat_1204_StrConcat ) ( ( ( StrConcat_1205_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3877 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string170 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty3882 ) ) ) ) );
    struct envunion1275  temp1274 = ( (struct envunion1275){ .fun = (  enum Unit_6  (*) (  struct env1171*  ,    struct StrConcat_1276  ) )ann1277 , .env =  envinst1171 } );
    ( temp1274.fun ( &temp1274.env ,  ( ( StrConcat_1276_StrConcat ) ( ( (  from_dash_string170 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed3877 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct envunion1313  temp1312 = ( (struct envunion1313){ .fun = (  enum Unit_6  (*) (  struct env1172*  ,    struct StrConcat_1314  ) )ann1315 , .env =  envinst1172 } );
    ( temp1312.fun ( &temp1312.env ,  ( ( StrConcat_1314_StrConcat ) ( ( (  from_dash_string170 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  ( ( * (  ed3877 ) ) .f_clipboard ) ) ) ) );
    return ( Unit_6_Unit );
}

struct RenderState_1352 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_613  f_fg;
    struct Color_613  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1359 {
    struct StrView_20  field0;
    uint32_t  field1;
};

static struct StrConcat_1359 StrConcat_1359_StrConcat (  struct StrView_20  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1359 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1358 {
    struct StrConcat_1359  field0;
    struct Char_141  field1;
};

static struct StrConcat_1358 StrConcat_1358_StrConcat (  struct StrConcat_1359  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1358 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1357 {
    struct StrConcat_1358  field0;
    uint32_t  field1;
};

static struct StrConcat_1357 StrConcat_1357_StrConcat (  struct StrConcat_1358  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1357 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1356 {
    struct StrConcat_1357  field0;
    struct Char_141  field1;
};

static struct StrConcat_1356 StrConcat_1356_StrConcat (  struct StrConcat_1357  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1356 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1365 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1364 {
    struct StrViewIter_552  f_left;
    struct IntStrIter_1365  f_right;
};

struct StrConcatIter_1363 {
    struct StrConcatIter_1364  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1362 {
    struct StrConcatIter_1363  f_left;
    struct IntStrIter_1365  f_right;
};

struct StrConcatIter_1361 {
    struct StrConcatIter_1362  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1361   into_dash_iter1367 (    struct StrConcatIter_1361  self1472 ) {
    return (  self1472 );
}

struct env1375 {
    ;
    uint32_t  base1191;
};

struct envunion1376 {
    uint32_t  (*fun) (  struct env1375*  ,    int32_t  ,    uint32_t  );
    struct env1375 env;
};

static  uint32_t   reduce1374 (    struct Range_635  iterable1074 ,    uint32_t  base1076 ,   struct envunion1376  fun1078 ) {
    uint32_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1376  temp1377 = (  fun1078 );
                x1079 = ( temp1377.fun ( &temp1377.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1378 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1378);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp1379;
    return (  temp1379 );
}

static  uint32_t   lam1380 (   struct env1375* env ,    int32_t  item1195 ,    uint32_t  x1197 ) {
    return (  op_dash_mul632 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint32_t   pow1373 (    uint32_t  base1191 ,    int32_t  p1193 ) {
    struct env1375 envinst1375 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1374 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral166 ( 1 ) ) ,  ( (struct envunion1376){ .fun = (  uint32_t  (*) (  struct env1375*  ,    int32_t  ,    uint32_t  ) )lam1380 , .env =  envinst1375 } ) ) );
}

static  uint32_t   op_dash_div1381 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  uint32_t   op_dash_sub1382 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_555   next1372 (    struct IntStrIter_1365 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp372 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint32_t  trim_dash_down1404 = ( (  pow1373 ) ( (  from_dash_integral166 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint32_t  upper1405 = (  op_dash_div1381 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint32_t  upper_dash_mask1406 = (  op_dash_mul632 ( (  op_dash_div1381 ( (  upper1405 ) , (  from_dash_integral166 ( 10 ) ) ) ) , (  from_dash_integral166 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast169 ) ( (  op_dash_sub1382 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1371 (    struct StrConcatIter_1364 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1372 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1370 (    struct StrConcatIter_1363 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1371 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1369 (    struct StrConcatIter_1362 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1370 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1372 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1368 (    struct StrConcatIter_1361 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1369 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1360 (    struct StrConcatIter_1361  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1361  temp1366 = ( (  into_dash_iter1367 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1361 *  it1058 = ( &temp1366 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1368 ) ( (  it1058 ) ) );
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

static  int32_t   count_dash_digits1393 (    uint32_t  self1411 ) {
    if ( (  eq352 ( (  self1411 ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp165 ( (  self1411 ) , (  from_dash_integral166 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1381 ( (  self1411 ) , (  from_dash_integral166 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1365   uint_dash_iter1392 (    uint32_t  int1418 ) {
    return ( (struct IntStrIter_1365) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1393 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1365   chars1391 (    uint32_t  self1430 ) {
    return ( (  uint_dash_iter1392 ) ( (  self1430 ) ) );
}

static  struct StrConcatIter_1364   into_dash_iter1390 (    struct StrConcat_1359  dref1479 ) {
    return ( (struct StrConcatIter_1364) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1391 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1364   chars1389 (    struct StrConcat_1359  self1490 ) {
    return ( (  into_dash_iter1390 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1363   into_dash_iter1388 (    struct StrConcat_1358  dref1479 ) {
    return ( (struct StrConcatIter_1363) { .f_left = ( (  chars1389 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1363   chars1387 (    struct StrConcat_1358  self1490 ) {
    return ( (  into_dash_iter1388 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1362   into_dash_iter1386 (    struct StrConcat_1357  dref1479 ) {
    return ( (struct StrConcatIter_1362) { .f_left = ( (  chars1387 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1391 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1362   chars1385 (    struct StrConcat_1357  self1490 ) {
    return ( (  into_dash_iter1386 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1361   into_dash_iter1384 (    struct StrConcat_1356  dref1479 ) {
    return ( (struct StrConcatIter_1361) { .f_left = ( (  chars1385 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1361   chars1383 (    struct StrConcat_1356  self1490 ) {
    return ( (  into_dash_iter1384 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1355 (    struct StrConcat_1356  s2508 ) {
    ( (  for_dash_each1360 ) ( ( (  chars1383 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_cursor_dash_to1354 (    uint32_t  x2522 ,    uint32_t  y2524 ) {
    uint32_t  x2525 = (  op_dash_add732 ( (  x2522 ) , (  from_dash_integral166 ( 1 ) ) ) );
    uint32_t  y2526 = (  op_dash_add732 ( (  y2524 ) , (  from_dash_integral166 ( 1 ) ) ) );
    ( (  print1355 ) ( ( ( StrConcat_1356_StrConcat ) ( ( ( StrConcat_1357_StrConcat ) ( ( ( StrConcat_1358_StrConcat ) ( ( ( StrConcat_1359_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2526 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2525 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct Tuple2_1401 {
    struct Color_613  field0;
    struct Color_613  field1;
};

static struct Tuple2_1401 Tuple2_1401_Tuple2 (  struct Color_613  field0 ,  struct Color_613  field1 ) {
    return ( struct Tuple2_1401 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_614 *   cast1405 (    int32_t *  x356 ) {
    return ( (enum Color8_614 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1403 (    enum Color8_614  x573 ) {
    int32_t  temp1404 = ( (  zeroed803 ) ( ) );
    int32_t *  y574 = ( &temp1404 );
    enum Color8_614 *  yp575 = ( (  cast1405 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1402 (    enum Color8_614  l2550 ,    enum Color8_614  r2552 ) {
    return (  eq266 ( ( ( (  cast_dash_on_dash_zeroed1403 ) ( (  l2550 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1403 ) ( (  r2552 ) ) ) ) );
}

static  enum Color16_615 *   cast1409 (    int32_t *  x356 ) {
    return ( (enum Color16_615 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1407 (    enum Color16_615  x573 ) {
    int32_t  temp1408 = ( (  zeroed803 ) ( ) );
    int32_t *  y574 = ( &temp1408 );
    enum Color16_615 *  yp575 = ( (  cast1409 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1406 (    enum Color16_615  l2556 ,    enum Color16_615  r2558 ) {
    return (  eq266 ( ( ( (  cast_dash_on_dash_zeroed1407 ) ( (  l2556 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1407 ) ( (  r2558 ) ) ) ) );
}

static  bool   eq1410 (    struct RGB_616  l2586 ,    struct RGB_616  r2588 ) {
    return ( ( (  eq158 ( ( (  l2586 ) .f_r ) , ( (  r2588 ) .f_r ) ) ) && (  eq158 ( ( (  l2586 ) .f_g ) , ( (  r2588 ) .f_g ) ) ) ) && (  eq158 ( ( (  l2586 ) .f_b ) , ( (  r2588 ) .f_b ) ) ) );
}

static  bool   eq1400 (    struct Color_613  l2609 ,    struct Color_613  r2611 ) {
    return ( {  struct Tuple2_1401  dref2612 = ( ( Tuple2_1401_Tuple2 ) ( (  l2609 ) ,  (  r2611 ) ) ) ; dref2612 .field0.tag == Color_613_ColorDefault_t && dref2612 .field1.tag == Color_613_ColorDefault_t ? ( true ) : dref2612 .field0.tag == Color_613_Color8_t && dref2612 .field1.tag == Color_613_Color8_t ? (  eq1402 ( ( dref2612 .field0 .stuff .Color_613_Color8_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color8_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_Color16_t && dref2612 .field1.tag == Color_613_Color16_t ? (  eq1406 ( ( dref2612 .field0 .stuff .Color_613_Color16_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color16_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_Color256_t && dref2612 .field1.tag == Color_613_Color256_t ? (  eq158 ( ( dref2612 .field0 .stuff .Color_613_Color256_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_Color256_s .field0 ) ) ) : dref2612 .field0.tag == Color_613_ColorRGB_t && dref2612 .field1.tag == Color_613_ColorRGB_t ? (  eq1410 ( ( dref2612 .field0 .stuff .Color_613_ColorRGB_s .field0 ) , ( dref2612 .field1 .stuff .Color_613_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1399 (    struct Cell_612  l3317 ,    struct Cell_612  r3319 ) {
    if ( ( !  eq350 ( ( (  l3317 ) .f_c ) , ( (  r3319 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1400 ( ( (  l3317 ) .f_fg ) , ( (  r3319 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1400 ( ( (  l3317 ) .f_bg ) , ( (  r3319 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq1398 (    struct Cell_612 *  dref148 ,    struct Cell_612 *  dref150 ) {
    return (  eq1399 ( ( (* dref148 ) ) , ( (* dref150 ) ) ) );
}

static  enum Unit_6   set_dash_default_dash_fg1413 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg81414 (    enum Color8_614  color2561 ) {
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

static  enum Unit_6   set_dash_fg161415 (    enum Color16_615  color2565 ) {
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

struct StrConcat_1419 {
    struct StrView_20  field0;
    uint8_t  field1;
};

static struct StrConcat_1419 StrConcat_1419_StrConcat (  struct StrView_20  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1419 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1418 {
    struct StrConcat_1419  field0;
    struct Char_141  field1;
};

static struct StrConcat_1418 StrConcat_1418_StrConcat (  struct StrConcat_1419  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1418 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1423 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1422 {
    struct StrViewIter_552  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1421 {
    struct StrConcatIter_1422  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1421   into_dash_iter1425 (    struct StrConcatIter_1421  self1472 ) {
    return (  self1472 );
}

struct env1431 {
    ;
    uint8_t  base1191;
};

struct envunion1432 {
    uint8_t  (*fun) (  struct env1431*  ,    int32_t  ,    uint8_t  );
    struct env1431 env;
};

static  uint8_t   reduce1430 (    struct Range_635  iterable1074 ,    uint8_t  base1076 ,   struct envunion1432  fun1078 ) {
    uint8_t  x1079 = (  base1076 );
    struct RangeIter_638  it1080 = ( (  into_dash_iter640 ) ( (  iterable1074 ) ) );
    while ( ( true ) ) {
        struct Maybe_223  dref1081 = ( (  next641 ) ( ( & (  it1080 ) ) ) );
        if ( dref1081.tag == Maybe_223_None_t ) {
            return (  x1079 );
        }
        else {
            if ( dref1081.tag == Maybe_223_Just_t ) {
                struct envunion1432  temp1433 = (  fun1078 );
                x1079 = ( temp1433.fun ( &temp1433.env ,  ( dref1081 .stuff .Maybe_223_Just_s .field0 ) ,  (  x1079 ) ) );
            }
        }
    }
    const char*  temp1434 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1434);
    exit ( 1 );
    ( Unit_6_Unit );
    uint8_t  temp1435;
    return (  temp1435 );
}

static  uint8_t   op_dash_mul1437 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1436 (   struct env1431* env ,    int32_t  item1195 ,    uint8_t  x1197 ) {
    return (  op_dash_mul1437 ( (  x1197 ) , ( env->base1191 ) ) );
}

static  uint8_t   pow1429 (    uint8_t  base1191 ,    int32_t  p1193 ) {
    struct env1431 envinst1431 = {
        .base1191 =  base1191 ,
    };
    return ( (  reduce1430 ) ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  p1193 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral162 ( 1 ) ) ,  ( (struct envunion1432){ .fun = (  uint8_t  (*) (  struct env1431*  ,    int32_t  ,    uint8_t  ) )lam1436 , .env =  envinst1431 } ) ) );
}

static  uint8_t   op_dash_div1438 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1439 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_555   next1428 (    struct IntStrIter_1423 *  self1403 ) {
    if ( ( ( * (  self1403 ) ) .f_negative ) ) {
        (*  self1403 ) .f_negative = ( false );
        return ( ( Maybe_555_Just ) ( ( (  from_dash_charlike171 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp372 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_555) { .tag = Maybe_555_None_t } );
    }
    uint8_t  trim_dash_down1404 = ( (  pow1429 ) ( (  from_dash_integral162 ( 10 ) ) ,  (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint8_t  upper1405 = (  op_dash_div1438 ( ( ( * (  self1403 ) ) .f_int ) , (  trim_dash_down1404 ) ) );
    uint8_t  upper_dash_mask1406 = (  op_dash_mul1437 ( (  op_dash_div1438 ( (  upper1405 ) , (  from_dash_integral162 ( 10 ) ) ) ) , (  from_dash_integral162 ( 10 ) ) ) );
    uint8_t  digit1407 = ( ( (  cast1439 ) ( (  op_dash_sub730 ( (  upper1405 ) , (  upper_dash_mask1406 ) ) ) ) ) );
    (*  self1403 ) .f_len = (  op_dash_sub760 ( ( ( * (  self1403 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_141  digit_dash_char1408 = ( (  from_dash_u8841 ) ( (  op_dash_add176 ( (  digit1407 ) , (  from_dash_integral162 ( 48 ) ) ) ) ) );
    return ( ( Maybe_555_Just ) ( (  digit_dash_char1408 ) ) );
}

static  struct Maybe_555   next1427 (    struct StrConcatIter_1422 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next556 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1428 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1426 (    struct StrConcatIter_1421 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1427 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1420 (    struct StrConcatIter_1421  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1421  temp1424 = ( (  into_dash_iter1425 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1421 *  it1058 = ( &temp1424 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1426 ) ( (  it1058 ) ) );
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

static  int32_t   count_dash_digits1446 (    uint8_t  self1411 ) {
    if ( (  eq158 ( (  self1411 ) , (  from_dash_integral162 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1412 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp175 ( (  self1411 ) , (  from_dash_integral162 ( 0 ) ) ) == 2 ) ) {
        self1411 = (  op_dash_div1438 ( (  self1411 ) , (  from_dash_integral162 ( 10 ) ) ) );
        digits1412 = (  op_dash_add225 ( (  digits1412 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1412 );
}

static  struct IntStrIter_1423   uint_dash_iter1445 (    uint8_t  int1418 ) {
    return ( (struct IntStrIter_1423) { .f_int = (  int1418 ) , .f_len = ( (  count_dash_digits1446 ) ( (  int1418 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1423   chars1444 (    uint8_t  self1436 ) {
    return ( (  uint_dash_iter1445 ) ( (  self1436 ) ) );
}

static  struct StrConcatIter_1422   into_dash_iter1443 (    struct StrConcat_1419  dref1479 ) {
    return ( (struct StrConcatIter_1422) { .f_left = ( (  chars557 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1444 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1422   chars1442 (    struct StrConcat_1419  self1490 ) {
    return ( (  into_dash_iter1443 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1421   into_dash_iter1441 (    struct StrConcat_1418  dref1479 ) {
    return ( (struct StrConcatIter_1421) { .f_left = ( (  chars1442 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1421   chars1440 (    struct StrConcat_1418  self1490 ) {
    return ( (  into_dash_iter1441 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1417 (    struct StrConcat_1418  s2508 ) {
    ( (  for_dash_each1420 ) ( ( (  chars1440 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg2561416 (    uint8_t  color2579 ) {
    ( (  print1417 ) ( ( ( StrConcat_1418_StrConcat ) ( ( ( StrConcat_1419_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2579 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1452 {
    struct StrConcat_1418  field0;
    uint8_t  field1;
};

static struct StrConcat_1452 StrConcat_1452_StrConcat (  struct StrConcat_1418  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1452 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1451 {
    struct StrConcat_1452  field0;
    struct Char_141  field1;
};

static struct StrConcat_1451 StrConcat_1451_StrConcat (  struct StrConcat_1452  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1451 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1450 {
    struct StrConcat_1451  field0;
    uint8_t  field1;
};

static struct StrConcat_1450 StrConcat_1450_StrConcat (  struct StrConcat_1451  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1450 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1449 {
    struct StrConcat_1450  field0;
    struct Char_141  field1;
};

static struct StrConcat_1449 StrConcat_1449_StrConcat (  struct StrConcat_1450  field0 ,  struct Char_141  field1 ) {
    return ( struct StrConcat_1449 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1457 {
    struct StrConcatIter_1421  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1456 {
    struct StrConcatIter_1457  f_left;
    struct AppendIter_822  f_right;
};

struct StrConcatIter_1455 {
    struct StrConcatIter_1456  f_left;
    struct IntStrIter_1423  f_right;
};

struct StrConcatIter_1454 {
    struct StrConcatIter_1455  f_left;
    struct AppendIter_822  f_right;
};

static  struct StrConcatIter_1454   into_dash_iter1459 (    struct StrConcatIter_1454  self1472 ) {
    return (  self1472 );
}

static  struct Maybe_555   next1463 (    struct StrConcatIter_1457 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1426 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1428 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1462 (    struct StrConcatIter_1456 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1463 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1461 (    struct StrConcatIter_1455 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1462 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next1428 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_555   next1460 (    struct StrConcatIter_1454 *  self1475 ) {
    struct Maybe_555  dref1476 = ( (  next1461 ) ( ( & ( ( * (  self1475 ) ) .f_left ) ) ) );
    if ( dref1476.tag == Maybe_555_Just_t ) {
        return ( ( Maybe_555_Just ) ( ( dref1476 .stuff .Maybe_555_Just_s .field0 ) ) );
    }
    else {
        if ( dref1476.tag == Maybe_555_None_t ) {
            return ( (  next848 ) ( ( & ( ( * (  self1475 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1453 (    struct StrConcatIter_1454  iterable1055 ,    enum Unit_6 (*  fun1057 )(    struct Char_141  ) ) {
    struct StrConcatIter_1454  temp1458 = ( (  into_dash_iter1459 ) ( (  iterable1055 ) ) );
    struct StrConcatIter_1454 *  it1058 = ( &temp1458 );
    while ( ( true ) ) {
        struct Maybe_555  dref1059 = ( (  next1460 ) ( (  it1058 ) ) );
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

static  struct StrConcatIter_1457   into_dash_iter1471 (    struct StrConcat_1452  dref1479 ) {
    return ( (struct StrConcatIter_1457) { .f_left = ( (  chars1440 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1444 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1457   chars1470 (    struct StrConcat_1452  self1490 ) {
    return ( (  into_dash_iter1471 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1456   into_dash_iter1469 (    struct StrConcat_1451  dref1479 ) {
    return ( (struct StrConcatIter_1456) { .f_left = ( (  chars1470 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1456   chars1468 (    struct StrConcat_1451  self1490 ) {
    return ( (  into_dash_iter1469 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1455   into_dash_iter1467 (    struct StrConcat_1450  dref1479 ) {
    return ( (struct StrConcatIter_1455) { .f_left = ( (  chars1468 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars1444 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1455   chars1466 (    struct StrConcat_1450  self1490 ) {
    return ( (  into_dash_iter1467 ) ( (  self1490 ) ) );
}

static  struct StrConcatIter_1454   into_dash_iter1465 (    struct StrConcat_1449  dref1479 ) {
    return ( (struct StrConcatIter_1454) { .f_left = ( (  chars1466 ) ( ( dref1479 .field0 ) ) ) , .f_right = ( (  chars862 ) ( ( dref1479 .field1 ) ) ) } );
}

static  struct StrConcatIter_1454   chars1464 (    struct StrConcat_1449  self1490 ) {
    return ( (  into_dash_iter1465 ) ( (  self1490 ) ) );
}

static  enum Unit_6   print1448 (    struct StrConcat_1449  s2508 ) {
    ( (  for_dash_each1453 ) ( ( (  chars1464 ) ( (  s2508 ) ) ) ,  (  printf_dash_char155 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg_dash_rgb1447 (    struct RGB_616  c2602 ) {
    ( (  print1448 ) ( ( ( StrConcat_1449_StrConcat ) ( ( ( StrConcat_1450_StrConcat ) ( ( ( StrConcat_1451_StrConcat ) ( ( ( StrConcat_1452_StrConcat ) ( ( ( StrConcat_1418_StrConcat ) ( ( ( StrConcat_1419_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2602 ) .f_r ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2602 ) .f_g ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2602 ) .f_b ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg1412 (    struct Color_613  c2623 ) {
    struct Color_613  dref2624 = (  c2623 );
    if ( dref2624.tag == Color_613_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1413 ) ( ) );
    }
    else {
        if ( dref2624.tag == Color_613_Color8_t ) {
            ( (  set_dash_fg81414 ) ( ( dref2624 .stuff .Color_613_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2624.tag == Color_613_Color16_t ) {
                ( (  set_dash_fg161415 ) ( ( dref2624 .stuff .Color_613_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2624.tag == Color_613_Color256_t ) {
                    ( (  set_dash_fg2561416 ) ( ( dref2624 .stuff .Color_613_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2624.tag == Color_613_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1447 ) ( ( dref2624 .stuff .Color_613_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_default_dash_bg1473 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg81474 (    enum Color8_614  color2569 ) {
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

static  enum Unit_6   set_dash_bg161475 (    enum Color16_615  color2573 ) {
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

static  enum Unit_6   set_dash_bg2561476 (    uint8_t  color2582 ) {
    ( (  print1417 ) ( ( ( StrConcat_1418_StrConcat ) ( ( ( StrConcat_1419_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2582 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg_dash_rgb1477 (    struct RGB_616  c2605 ) {
    ( (  print1448 ) ( ( ( StrConcat_1449_StrConcat ) ( ( ( StrConcat_1450_StrConcat ) ( ( ( StrConcat_1451_StrConcat ) ( ( ( StrConcat_1452_StrConcat ) ( ( ( StrConcat_1418_StrConcat ) ( ( ( StrConcat_1419_StrConcat ) ( ( (  from_dash_string170 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2605 ) .f_r ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2605 ) .f_g ) ) ) ,  ( (  from_dash_charlike171 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2605 ) .f_b ) ) ) ,  ( (  from_dash_charlike171 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg1472 (    struct Color_613  c2631 ) {
    struct Color_613  dref2632 = (  c2631 );
    if ( dref2632.tag == Color_613_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1473 ) ( ) );
    }
    else {
        if ( dref2632.tag == Color_613_Color8_t ) {
            ( (  set_dash_bg81474 ) ( ( dref2632 .stuff .Color_613_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2632.tag == Color_613_Color16_t ) {
                ( (  set_dash_bg161475 ) ( ( dref2632 .stuff .Color_613_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2632.tag == Color_613_Color256_t ) {
                    ( (  set_dash_bg2561476 ) ( ( dref2632 .stuff .Color_613_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2632.tag == Color_613_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1477 ) ( ( dref2632 .stuff .Color_613_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  uint32_t   i32_dash_u321478 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_6   emit_dash_cell1411 (    struct RenderState_1352 *  rs3349 ,    struct Cell_612 *  c3351 ,    uint32_t  x3353 ,    uint32_t  y3355 ) {
    if ( ( ( !  eq352 ( (  x3353 ) , ( ( * (  rs3349 ) ) .f_x ) ) ) || ( !  eq352 ( (  y3355 ) , ( ( * (  rs3349 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1354 ) ( (  x3353 ) ,  (  y3355 ) ) );
        (*  rs3349 ) .f_x = (  x3353 );
        (*  rs3349 ) .f_y = (  y3355 );
    }
    struct Char_141  char3356 = ( ( * (  c3351 ) ) .f_c );
    struct Color_613  bg3357 = ( ( * (  c3351 ) ) .f_bg );
    if ( (  eq266 ( ( ( * (  c3351 ) ) .f_char_dash_width ) , (  op_dash_neg585 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
        char3356 = ( (  from_dash_charlike171 ) ( ( " " ) ,  ( 1 ) ) );
        bg3357 = ( ( Color_613_Color8 ) ( ( Color8_614_Red8 ) ) );
    }
    if ( ( !  eq1400 ( ( ( * (  rs3349 ) ) .f_fg ) , ( ( * (  c3351 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1412 ) ( ( ( * (  c3351 ) ) .f_fg ) ) );
        (*  rs3349 ) .f_fg = ( ( * (  c3351 ) ) .f_fg );
    }
    if ( ( !  eq1400 ( ( ( * (  rs3349 ) ) .f_bg ) , (  bg3357 ) ) ) ) {
        ( (  set_dash_bg1472 ) ( (  bg3357 ) ) );
        (*  rs3349 ) .f_bg = (  bg3357 );
    }
    ( (  print_dash_str154 ) ( (  char3356 ) ) );
    uint32_t  char_dash_width3358 = ( (  i32_dash_u321478 ) ( ( (  max898 ) ( ( ( * (  c3351 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) ) ) );
    (*  rs3349 ) .f_x = (  op_dash_add732 ( ( ( * (  rs3349 ) ) .f_x ) , (  char_dash_width3358 ) ) );
    return ( Unit_6_Unit );
}

static  uint32_t   render_dash_screen1351 (    struct Screen_610 *  screen3361 ) {
    int32_t  w3362 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3361 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3363 = ( (  u32_dash_i321156 ) ( ( ( * ( ( * (  screen3361 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1352  temp1353 = ( (struct RenderState_1352) { .f_x = (  from_dash_integral166 ( 0 ) ) , .f_y = (  from_dash_integral166 ( 0 ) ) , .f_fg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_bg = ( (struct Color_613) { .tag = Color_613_ColorDefault_t } ) , .f_changes = (  from_dash_integral166 ( 0 ) ) } );
    struct RenderState_1352 *  rs3364 = ( &temp1353 );
    ( (  move_dash_cursor_dash_to1354 ) ( (  from_dash_integral166 ( 0 ) ) ,  (  from_dash_integral166 ( 0 ) ) ) );
    struct RangeIter_638  temp1394 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  h3363 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_223  __cond1395 =  next641 (&temp1394);
        if (  __cond1395 .tag == 0 ) {
            break;
        }
        int32_t  y3366 =  __cond1395 .stuff .Maybe_223_Just_s .field0;
        int32_t  x_dash_v3367 = (  from_dash_integral38 ( 0 ) );
        struct RangeIter_638  temp1396 =  into_dash_iter640 ( ( (  to643 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub760 ( (  w3362 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_223  __cond1397 =  next641 (&temp1396);
            if (  __cond1397 .tag == 0 ) {
                break;
            }
            int32_t  x_dash_i3369 =  __cond1397 .stuff .Maybe_223_Just_s .field0;
            size_t  i3370 = ( (  i32_dash_size213 ) ( (  op_dash_add225 ( (  op_dash_mul1161 ( (  y3366 ) , (  w3362 ) ) ) , (  x_dash_i3369 ) ) ) ) );
            struct Cell_612 *  cur3371 = ( (  get_dash_ptr646 ) ( ( ( * (  screen3361 ) ) .f_current ) ,  (  i3370 ) ) );
            struct Cell_612 *  prev3372 = ( (  get_dash_ptr646 ) ( ( ( * (  screen3361 ) ) .f_previous ) ,  (  i3370 ) ) );
            int32_t  char_dash_width3373 = ( (  max898 ) ( ( ( * (  cur3371 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( ( !  eq1398 ( (  cur3371 ) , (  prev3372 ) ) ) || ( ( * (  screen3361 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3364 ) .f_changes = (  op_dash_add732 ( ( ( * (  rs3364 ) ) .f_changes ) , (  from_dash_integral166 ( 1 ) ) ) );
                ( (  emit_dash_cell1411 ) ( (  rs3364 ) ,  (  cur3371 ) ,  ( (  i32_dash_u321478 ) ( (  x_dash_v3367 ) ) ) ,  ( (  i32_dash_u321478 ) ( (  y3366 ) ) ) ) );
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

static  void *   cast_dash_ptr1485 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1486 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1483 (  ) {
    struct timespec *  temp1484;
    struct timespec *  x570 = (  temp1484 );
    ( ( memset ) ( ( (  cast_dash_ptr1485 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of1486 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1482 (  ) {
    return ( (  zeroed1483 ) ( ) );
}

static  enum Unit_6   sync1479 (    struct Tui_45 *  tui3232 ) {
    if ( (  eq352 ( ( ( * (  tui3232 ) ) .f_target_dash_fps ) , (  from_dash_integral166 ( 0 ) ) ) ) ) {
        return ( Unit_6_Unit );
    }
    int64_t  frame_dash_ns3233 = (  op_dash_div838 ( (  from_dash_integral253 ( 1000000000 ) ) , ( (  size_dash_i64212 ) ( ( (  u32_dash_size624 ) ( ( ( * (  tui3232 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1480 = ( (  undefined598 ) ( ) );
    struct timespec *  now3234 = ( &temp1480 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic600 ) ( ) ) ,  (  now3234 ) ) );
    int64_t  elapsed_dash_ns3235 = (  op_dash_add808 ( (  op_dash_mul181 ( (  op_dash_sub840 ( ( ( * (  now3234 ) ) .tv_sec ) , ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral253 ( 1000000000 ) ) ) ) , (  op_dash_sub840 ( ( ( * (  now3234 ) ) .tv_nsec ) , ( ( ( * (  tui3232 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3236 = (  op_dash_sub840 ( (  frame_dash_ns3233 ) , (  elapsed_dash_ns3235 ) ) );
    if ( (  cmp858 ( (  sleep_dash_ns3236 ) , (  from_dash_integral253 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1481 = ( (struct timespec) { .tv_sec = (  from_dash_integral253 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3236 ) } );
        struct timespec *  ts3237 = ( &temp1481 );
        ( ( nanosleep ) ( (  ts3237 ) ,  ( (  null_dash_ptr1482 ) ( ) ) ) );
    }
    struct timespec  temp1487 = ( (  undefined598 ) ( ) );
    struct timespec *  last_dash_sync3238 = ( &temp1487 );
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

static  void *   cast_dash_ptr1490 (    struct Cell_612 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1489 (    enum CAllocator_8  dref1929 ,    struct Slice_611  slice1931 ) {
    if (!(  dref1929 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1490 ) ( ( (  slice1931 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free_dash_screen1488 (    struct Screen_610 *  screen3337 ) {
    enum CAllocator_8  al3338 = ( ( * (  screen3337 ) ) .f_al );
    ( (  free1489 ) ( (  al3338 ) ,  ( ( * (  screen3337 ) ) .f_current ) ) );
    ( (  free1489 ) ( (  al3338 ) ,  ( ( * (  screen3337 ) ) .f_previous ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_mouse1492 (  ) {
    ( (  print_dash_str146 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   show_dash_cursor1493 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_cursor_dash_position1494 (  ) {
    ( (  print550 ) ( ( (  from_dash_string170 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_raw_dash_mode1495 (    struct Termios_47 *  og_dash_termios3212 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno488 ) ( ) ) ,  ( (  tcsa_dash_flush548 ) ( ) ) ,  ( (  cast_dash_ptr489 ) ( (  og_dash_termios3212 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   deinit1491 (    struct Tui_45 *  tui3242 ) {
    ( (  disable_dash_mouse1492 ) ( ) );
    ( (  show_dash_cursor1493 ) ( ) );
    ( (  reset_dash_colors559 ) ( ) );
    ( (  clear_dash_screen560 ) ( ) );
    ( (  reset_dash_cursor_dash_position1494 ) ( ) );
    ( (  disable_dash_raw_dash_mode1495 ) ( ( & ( ( * (  tui3242 ) ) .f_orig_dash_termios ) ) ) );
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
        .envinst30 = envinst30 ,
        .envinst53 = envinst53 ,
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
        .envinst73 = envinst73 ,
        .envinst14 = envinst14 ,
        .envinst71 = envinst71 ,
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
        .envinst90 = envinst90 ,
        .envinst88 = envinst88 ,
        .envinst84 = envinst84 ,
        .envinst86 = envinst86 ,
    };
    struct env102 envinst102 = {
        .envinst80 = envinst80 ,
        .envinst82 = envinst82 ,
        .envinst92 = envinst92 ,
    };
    enum CAllocator_8  al3883 = ( (  idc107 ) ( ) );
    struct envunion110  temp109 = ( (struct envunion110){ .fun = (  struct TextBuf_63  (*) (  struct env51*  ,    enum CAllocator_8  ) )mk111 , .env =  envinst51 } );
    struct TextBuf_63  temp108 = ( temp109.fun ( &temp109.env ,  (  al3883 ) ) );
    struct TextBuf_63 *  tb3884 = ( &temp108 );
    struct Slice_249  args3887 = ( (  get250 ) ( ) );
    if ( (  cmp132 ( ( (  args3887 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname3888 = (  elem_dash_get255 ( (  args3887 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion263  temp262 = ( (struct envunion263){ .fun = (  enum Unit_6  (*) (  struct env57*  ,    struct TextBuf_63 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action264 , .env =  envinst57 } );
        ( temp262.fun ( &temp262.env ,  (  tb3884 ) ,  ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  mk452 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  read_dash_contents453 ) ( (  fname3888 ) ,  (  al3883 ) ) ) ) );
    }
    struct Editor_94  temp478 = ( (struct Editor_94) { .f_running = ( true ) , .f_al = (  al3883 ) , .f_pane = ( (  mk479 ) ( (  al3883 ) ,  (  tb3884 ) ) ) , .f_clipboard = ( (struct Maybe_97) { .tag = Maybe_97_None_t } ) } );
    struct Editor_94 *  ed3889 = ( &temp478 );
    struct envunion482  temp481 = ( (struct envunion482){ .fun = (  struct Tui_45  (*) (  struct env41*  ) )mk483 , .env =  envinst41 } );
    struct Tui_45  temp480 = ( temp481.fun ( &temp481.env ) );
    struct Tui_45 *  tui3890 = ( &temp480 );
    struct Screen_610  temp617 = ( (  mk_dash_screen618 ) ( (  tui3890 ) ,  (  al3883 ) ) );
    struct Screen_610 *  screen3891 = ( &temp617 );
    while ( ( ( * (  ed3889 ) ) .f_running ) ) {
        struct env668 envinst668 = {
            .tui3890 =  tui3890 ,
            .envinst43 = envinst43 ,
        };
        struct FunIter_667  temp666 =  into_dash_iter675 ( ( (  from_dash_function676 ) ( ( (struct envunion674){ .fun = (  struct Maybe_670  (*) (  struct env668*  ) )lam677 , .env =  envinst668 } ) ) ) );
        while (true) {
            struct Maybe_670  __cond878 =  next879 (&temp666);
            if (  __cond878 .tag == 0 ) {
                break;
            }
            struct InputEvent_671  ev3893 =  __cond878 .stuff .Maybe_670_Just_s .field0;
            struct InputEvent_671  dref3894 = (  ev3893 );
            if ( dref3894.tag == InputEvent_671_Key_t ) {
                struct envunion882  temp881 = ( (struct envunion882){ .fun = (  enum Unit_6  (*) (  struct env102*  ,    struct Editor_94 *  ,    struct Key_106  ) )handle_dash_key883 , .env =  envinst102 } );
                ( temp881.fun ( &temp881.env ,  (  ed3889 ) ,  ( dref3894 .stuff .InputEvent_671_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1127  temp1126 = ( (struct envunion1127){ .fun = (  bool  (*) (  struct env49*  ,    struct Screen_610 *  ) )resize_dash_screen_dash_if_dash_needed1128 , .env =  envinst49 } );
        ( temp1126.fun ( &temp1126.env ,  (  screen3891 ) ) );
        if ( ( (  should_dash_redraw1130 ) ( (  tui3890 ) ) ) ) {
            ( (  clear_dash_screen1131 ) ( (  screen3891 ) ) );
            ( (  render_dash_editor1140 ) ( (  screen3891 ) ,  (  ed3889 ) ) );
            ( (  render_dash_screen1351 ) ( (  screen3891 ) ) );
        }
        ( (  sync1479 ) ( (  tui3890 ) ) );
    }
    ( (  free_dash_screen1488 ) ( (  screen3891 ) ) );
    ( (  deinit1491 ) ( (  tui3890 ) ) );
}
