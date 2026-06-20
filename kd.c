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
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2031;
    ;
    size_t  starting_dash_size2030;
};

struct env2 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2031;
    ;
    size_t  starting_dash_size2030;
};

struct env3 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2031;
    ;
    size_t  starting_dash_size2030;
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
    struct env1 envinst1;
    ;
    ;
    ;
    ;
};

struct envunion13 {
    enum Unit_6  (*fun) (  struct env2*  ,    struct List_10 *  );
    struct env2 env;
};

struct env12 {
    ;
    struct env2 envinst2;
    ;
    ;
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
    struct env3 envinst3;
    ;
    ;
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
    ;
    ;
    ;
    ;
    struct env4 envinst4;
    ;
    struct env1 envinst1;
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
    size_t  shrink_dash_factor2032;
    ;
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
    size_t  shrink_dash_factor2032;
    ;
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

struct envunion29 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct env28 {
    ;
    ;
    ;
    struct env4 envinst4;
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
    ;
    struct env30 envinst30;
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

struct envunion41 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env40 {
    ;
    ;
    struct env30 envinst30;
};

struct StrBuilder_44 {
    struct List_10  f_chars;
};

struct envunion43 {
    enum Unit_6  (*fun) (  struct env40*  ,    struct StrBuilder_44 *  ,    struct Slice_11  );
    struct env40 env;
};

struct env42 {
    ;
    struct env40 envinst40;
    ;
    ;
};

struct Char_47 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion46 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct env45 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env42 envinst42;
};

struct StrConcat_51 {
    struct StrView_20  field0;
    size_t  field1;
};

static struct StrConcat_51 StrConcat_51_StrConcat (  struct StrView_20  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_51 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_50 {
    struct StrConcat_51  field0;
    struct StrView_20  field1;
};

static struct StrConcat_50 StrConcat_50_StrConcat (  struct StrConcat_51  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_50 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion49 {
    enum Unit_6  (*fun) (  struct env45*  ,    struct StrBuilder_44 *  ,    struct StrConcat_50  );
    struct env45 env;
};

struct envunion52 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct env48 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env45 envinst45;
    ;
    struct env42 envinst42;
};

struct env54 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3279;
    ;
};

struct env55 {
    ;
    ;
    ;
    bool *  should_dash_resize3279;
};

enum ColorPalette_59 {
    ColorPalette_59_Palette8,
    ColorPalette_59_Palette16,
    ColorPalette_59_Palette256,
    ColorPalette_59_PaletteRGB,
};

struct Array_61 {
    uint8_t _arr [32];
};

struct Termios_60 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_61  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_58 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_59  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_60  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion57 {
    bool  (*fun) (  struct env55*  ,    struct Tui_58 *  );
    struct env55 env;
};

struct env56 {
    ;
    struct env55 envinst55;
};

struct envunion63 {
    bool  (*fun) (  struct env55*  ,    struct Tui_58 *  );
    struct env55 env;
};

struct env62 {
    ;
    ;
    ;
    ;
    ;
    struct env55 envinst55;
};

struct envunion65 {
    struct List_7  (*fun) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  );
    struct env32 env;
};

struct env64 {
    struct env32 envinst32;
    ;
    ;
    ;
    ;
    ;
};

struct envunion67 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

struct envunion68 {
    enum Unit_6  (*fun) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  );
    struct env23 env;
};

struct envunion69 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env66 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
    ;
    ;
    struct env23 envinst23;
    ;
    ;
    struct env30 envinst30;
};

struct envunion71 {
    enum Unit_6  (*fun) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  );
    struct env26 env;
};

struct envunion72 {
    enum Unit_6  (*fun) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  );
    struct env27 env;
};

struct envunion73 {
    enum Unit_6  (*fun) (  struct env4*  ,    struct List_7 *  ,    struct List_10  );
    struct env4 env;
};

struct Actions_76 {
    struct List_16  f_list;
    size_t  f_cur;
};

struct TextBuf_75 {
    struct List_7  f_buf;
    struct Actions_76  f_actions;
};

struct envunion74 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

struct envunion77 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env70 {
    ;
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
    ;
    ;
    ;
    struct env4 envinst4;
    ;
    struct env66 envinst66;
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
};

struct envunion79 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

struct env78 {
    ;
    ;
    struct env70 envinst70;
    ;
    ;
};

struct envunion81 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

struct env80 {
    ;
    ;
    struct env70 envinst70;
    ;
    ;
};

struct envunion83 {
    struct Pos_19  (*fun) (  struct env78*  ,    struct TextBuf_75 *  ,    struct Action_18  );
    struct env78 env;
};

struct env82 {
    ;
    ;
    ;
    ;
    ;
    struct env78 envinst78;
    ;
    ;
    ;
};

struct envunion85 {
    struct Pos_19  (*fun) (  struct env80*  ,    struct TextBuf_75 *  ,    struct Action_18  );
    struct env80 env;
};

struct env84 {
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
    ;
};

struct envunion87 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct env86 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
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
};

struct Maybe_90 {
    enum {
        Maybe_90_None_t,
        Maybe_90_Just_t,
    } tag;
    union {
        struct {
            struct Cursors_21  field0;
        } Maybe_90_Just_s;
    } stuff;
};

static struct Maybe_90 Maybe_90_Just (  struct Cursors_21  field0 ) {
    return ( struct Maybe_90 ) { .tag = Maybe_90_Just_t, .stuff = { .Maybe_90_Just_s = { .field0 = field0 } } };
};

struct envunion89 {
    struct Maybe_90  (*fun) (  struct env84*  ,    struct TextBuf_75 *  );
    struct env84 env;
};

struct envunion91 {
    enum Unit_6  (*fun) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  );
    struct env14 env;
};

struct envunion92 {
    struct StrView_20  (*fun) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env86 env;
};

struct env88 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env84 envinst84;
    ;
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
    ;
    struct env86 envinst86;
};

struct envunion94 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
};

struct env93 {
    ;
    ;
    ;
    ;
    struct env88 envinst88;
    ;
    ;
};

struct envunion96 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
};

struct env95 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env88 envinst88;
    ;
    ;
};

struct envunion98 {
    struct Maybe_90  (*fun) (  struct env82*  ,    struct TextBuf_75 *  );
    struct env82 env;
};

struct env97 {
    ;
    ;
    ;
    struct env82 envinst82;
    ;
    ;
    ;
};

struct envunion100 {
    struct Maybe_90  (*fun) (  struct env84*  ,    struct TextBuf_75 *  );
    struct env84 env;
};

struct env99 {
    ;
    ;
    ;
    struct env84 envinst84;
    ;
    ;
    ;
};

struct envunion102 {
    struct Maybe_90  (*fun) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  );
    struct env88 env;
};

struct env101 {
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
};

struct envunion104 {
    struct StrView_20  (*fun) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  );
    struct env86 env;
};

struct env103 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env86 envinst86;
    ;
};

struct envunion106 {
    struct StrView_20  (*fun) (  struct env48*  ,    struct StrConcat_50  ,    enum CAllocator_8  );
    struct env48 env;
};

struct env105 {
    ;
    struct env48 envinst48;
    ;
    ;
    ;
    ;
    ;
};

enum Mode_111 {
    Mode_111_Normal,
    Mode_111_Insert,
    Mode_111_Select,
};

struct ScreenCursorOffset_112 {
    int32_t  f_screen_dash_top;
    int32_t  f_screen_dash_left;
};

struct Pane_110 {
    struct TextBuf_75 *  f_buf;
    struct Pos_19  f_cursor;
    int32_t  f_vi;
    struct Maybe_22  f_sel;
    enum Mode_111  f_mode;
    struct ScreenCursorOffset_112  f_sc_dash_off;
};

struct Maybe_113 {
    enum {
        Maybe_113_None_t,
        Maybe_113_Just_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } Maybe_113_Just_s;
    } stuff;
};

static struct Maybe_113 Maybe_113_Just (  struct StrView_20  field0 ) {
    return ( struct Maybe_113 ) { .tag = Maybe_113_Just_t, .stuff = { .Maybe_113_Just_s = { .field0 = field0 } } };
};

struct EditorMode_114 {
    enum {
        EditorMode_114_Normal_t,
        EditorMode_114_Cmd_t,
    } tag;
    union {
        struct {
            struct StrBuilder_44  field0;
        } EditorMode_114_Cmd_s;
    } stuff;
};

static struct EditorMode_114 EditorMode_114_Cmd (  struct StrBuilder_44  field0 ) {
    return ( struct EditorMode_114 ) { .tag = EditorMode_114_Cmd_t, .stuff = { .EditorMode_114_Cmd_s = { .field0 = field0 } } };
};

struct Editor_109 {
    enum CAllocator_8  f_al;
    bool  f_running;
    struct Pane_110  f_pane;
    struct Maybe_113  f_clipboard;
    struct EditorMode_114  f_mode;
    struct Maybe_113  f_msg;
};

struct envunion108 {
    enum Unit_6  (*fun) (  struct env105*  ,    struct Editor_109 *  ,    struct StrConcat_50  );
    struct env105 env;
};

struct envunion115 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

struct Tuple2_117 {
    struct Pos_19  field0;
    struct Pos_19  field1;
};

static struct Tuple2_117 Tuple2_117_Tuple2 (  struct Pos_19  field0 ,  struct Pos_19  field1 ) {
    return ( struct Tuple2_117 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion116 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct envunion118 {
    enum Unit_6  (*fun) (  struct env97*  ,    struct Pane_110 *  );
    struct env97 env;
};

struct envunion119 {
    enum Unit_6  (*fun) (  struct env99*  ,    struct Pane_110 *  );
    struct env99 env;
};

struct env107 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env105 envinst105;
    ;
    ;
    ;
    ;
    struct env103 envinst103;
    struct env101 envinst101;
    ;
    ;
    ;
    ;
    struct env97 envinst97;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env99 envinst99;
    ;
    ;
};

struct envunion121 {
    enum Unit_6  (*fun) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  );
    struct env93 env;
};

struct envunion122 {
    enum Unit_6  (*fun) (  struct env95*  ,    struct Pane_110 *  );
    struct env95 env;
};

struct Key_124 {
    enum {
        Key_124_Escape_t,
        Key_124_Enter_t,
        Key_124_Tab_t,
        Key_124_Backspace_t,
        Key_124_Char_t,
        Key_124_Ctrl_t,
        Key_124_Up_t,
        Key_124_Down_t,
        Key_124_Left_t,
        Key_124_Right_t,
        Key_124_Home_t,
        Key_124_End_t,
        Key_124_PageUp_t,
        Key_124_PageDown_t,
        Key_124_Delete_t,
        Key_124_Insert_t,
        Key_124_F1_t,
        Key_124_F2_t,
        Key_124_F3_t,
        Key_124_F4_t,
        Key_124_F5_t,
        Key_124_F6_t,
        Key_124_F7_t,
        Key_124_F8_t,
        Key_124_F9_t,
        Key_124_F10_t,
        Key_124_F11_t,
        Key_124_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_124_Char_s;
        struct {
            char  field0;
        } Key_124_Ctrl_s;
    } stuff;
};

static struct Key_124 Key_124_Char (  char  field0 ) {
    return ( struct Key_124 ) { .tag = Key_124_Char_t, .stuff = { .Key_124_Char_s = { .field0 = field0 } } };
};

static struct Key_124 Key_124_Ctrl (  char  field0 ) {
    return ( struct Key_124 ) { .tag = Key_124_Ctrl_t, .stuff = { .Key_124_Ctrl_s = { .field0 = field0 } } };
};

struct envunion123 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_124  );
    struct env107 env;
};

struct envunion125 {
    enum Unit_6  (*fun) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  );
    struct env42 env;
};

struct env120 {
    ;
    ;
    ;
    ;
    ;
    struct env93 envinst93;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env95 envinst95;
    ;
    ;
    ;
    ;
    struct env107 envinst107;
    struct env42 envinst42;
    ;
};

static  enum CAllocator_8   idc126 (  ) {
    return ( CAllocator_8_CAllocator );
}

struct envunion129 {
    struct TextBuf_75  (*fun) (  struct env64*  ,    enum CAllocator_8  );
    struct env64 env;
};

static  void *   cast_dash_ptr139 (    struct List_10 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of140 (    struct List_10 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct List_10 *   zeroed137 (  ) {
    struct List_10 *  temp138;
    struct List_10 *  x570 = (  temp138 );
    ( ( memset ) ( ( (  cast_dash_ptr139 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of140 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct List_10 *   null_dash_ptr136 (  ) {
    return ( (  zeroed137 ) ( ) );
}

static  struct Slice_9   empty135 (  ) {
    return ( (struct Slice_9) { .f_ptr = ( (  null_dash_ptr136 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_7   mk134 (    enum CAllocator_8  al2025 ) {
    struct Slice_9  elements2026 = ( (  empty135 ) ( ) );
    return ( (struct List_7) { .f_al = (  al2025 ) , .f_elements = (  elements2026 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

struct env144 {
    struct env4 envinst4;
    struct List_7 *  list2092;
};

struct envunion145 {
    enum Unit_6  (*fun) (  struct env144*  ,    struct List_10  );
    struct env144 env;
};

struct ArrayIter_146 {
    struct Array_34  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_146   into_dash_iter148 (    struct Array_34  self2310 ) {
    return ( (struct ArrayIter_146) { .f_backing = (  self2310 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_149 {
    enum {
        Maybe_149_None_t,
        Maybe_149_Just_t,
    } tag;
    union {
        struct {
            struct List_10  field0;
        } Maybe_149_Just_s;
    } stuff;
};

static struct Maybe_149 Maybe_149_Just (  struct List_10  field0 ) {
    return ( struct Maybe_149 ) { .tag = Maybe_149_Just_t, .stuff = { .Maybe_149_Just_s = { .field0 = field0 } } };
};

enum Ordering_152 {
    Ordering_152_LT,
    Ordering_152_EQ,
    Ordering_152_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp151 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

struct StrConcat_157 {
    struct StrConcat_50  field0;
    int32_t  field1;
};

static struct StrConcat_157 StrConcat_157_StrConcat (  struct StrConcat_50  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_157 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_156 {
    struct StrConcat_157  field0;
    struct Char_47  field1;
};

static struct StrConcat_156 StrConcat_156_StrConcat (  struct StrConcat_157  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_156 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_160 {
    struct StrView_20  field0;
    struct StrConcat_156  field1;
};

static struct StrConcat_160 StrConcat_160_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_156  field1 ) {
    return ( struct StrConcat_160 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_159 {
    struct StrConcat_160  field0;
    struct Char_47  field1;
};

static struct StrConcat_159 StrConcat_159_StrConcat (  struct StrConcat_160  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_159 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32163 (    size_t  x630 ) {
    return ( (int32_t ) (  x630 ) );
}

static  enum Unit_6   print_dash_str162 (    struct StrView_20  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32163 ) ( ( ( (  self1379 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1379 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str168 (    size_t  self1464 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1464 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str167 (    struct StrConcat_51  self1503 ) {
    struct StrConcat_51  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str168 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str166 (    struct StrConcat_50  self1503 ) {
    struct StrConcat_50  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str167 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str162 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str169 (    int32_t  self1440 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1440 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str165 (    struct StrConcat_157  self1503 ) {
    struct StrConcat_157  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str166 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

struct Scalar_173 {
    uint32_t  f_value;
};

struct CharDestructured_172 {
    enum {
        CharDestructured_172_Ref_t,
        CharDestructured_172_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_47  field0;
        } CharDestructured_172_Ref_s;
        struct {
            struct Scalar_173  field0;
        } CharDestructured_172_Scalar_s;
    } stuff;
};

static struct CharDestructured_172 CharDestructured_172_Ref (  struct Char_47  field0 ) {
    return ( struct CharDestructured_172 ) { .tag = CharDestructured_172_Ref_t, .stuff = { .CharDestructured_172_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_172 CharDestructured_172_Scalar (  struct Scalar_173  field0 ) {
    return ( struct CharDestructured_172 ) { .tag = CharDestructured_172_Scalar_t, .stuff = { .CharDestructured_172_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq175 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8177 (    size_t  x639 ) {
    return ( (uint8_t ) (  x639 ) );
}

static  size_t   op_dash_div178 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer176 (    uint8_t *  ptr678 ) {
    return ( (  size_dash_u8177 ) ( (  op_dash_div178 ( ( ( (size_t ) (  ptr678 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral179 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32180 (    size_t  x633 ) {
    return ( (uint32_t ) (  x633 ) );
}

static  size_t   cast181 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_172   destructure174 (    struct Char_47  c712 ) {
    if ( (  eq175 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer176 ) ( ( (  c712 ) .f_ptr ) ) ) , (  from_dash_integral179 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_172_Scalar ) ( ( (struct Scalar_173) { .f_value = ( (  size_dash_u32180 ) ( ( ( (  cast181 ) ( ( (  c712 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_172_Ref ) ( (  c712 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp182 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral183 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast186 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8185 (    uint32_t  x657 ) {
    return ( (  cast186 ) ( (  x657 ) ) );
}

static  enum Unit_6   printf_dash_char171 (    struct Char_47  c758 ) {
    struct CharDestructured_172  dref759 = ( (  destructure174 ) ( (  c758 ) ) );
    if ( dref759.tag == CharDestructured_172_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32163 ) ( ( ( dref759 .stuff .CharDestructured_172_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref759 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref759.tag == CharDestructured_172_Scalar_t ) {
            if ( (  cmp182 ( ( ( dref759 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) , (  from_dash_integral183 ( 127 ) ) ) == 2 ) ) {
                const char*  temp184 = ( (  from_dash_string39 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp184);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8185 ) ( ( ( dref759 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str170 (    struct Char_47  self1404 ) {
    ( (  printf_dash_char171 ) ( (  self1404 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str164 (    struct StrConcat_156  self1503 ) {
    struct StrConcat_156  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str165 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str161 (    struct StrConcat_160  self1503 ) {
    struct StrConcat_160  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str164 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str158 (    struct StrConcat_159  self1503 ) {
    struct StrConcat_159  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str161 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_string187 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast189 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp192 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  size_t   next_dash_char191 (    uint8_t *  p688 ) {
    uint8_t  pb689 = ( * (  p688 ) );
    if ( (  cmp192 ( (  pb689 ) , (  from_dash_integral179 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp192 ( (  pb689 ) , (  from_dash_integral179 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp192 ( (  pb689 ) , (  from_dash_integral179 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp192 ( (  pb689 ) , (  from_dash_integral179 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp193 = ( (  from_dash_string39 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp193);
                    exit ( 1 );
                    ( Unit_6_Unit );
                }
            }
        }
    }
}

static  struct Char_47   scan_dash_from_dash_mem190 (    uint8_t *  p700 ) {
    size_t  clen701 = ( (  next_dash_char191 ) ( (  p700 ) ) );
    if ( (  cmp151 ( (  clen701 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp194 = ( (  from_dash_string39 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp194);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (struct Char_47) { .f_ptr = (  p700 ) , .f_num_dash_bytes = (  clen701 ) } );
}

static  struct Char_47   from_dash_charlike188 (    uint8_t *  ptr704 ,    size_t  num_dash_bytes706 ) {
    uint8_t *  ptr707 = ( ( (  cast189 ) ( (  ptr704 ) ) ) );
    return ( (  scan_dash_from_dash_mem190 ) ( (  ptr707 ) ) );
}

static  enum Unit_6   panic155 (    struct StrConcat_156  errmsg1712 ) {
    ( (  print_dash_str158 ) ( ( ( StrConcat_159_StrConcat ) ( ( ( StrConcat_160_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10 *   cast_dash_ptr195 (    struct Array_34 *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  int64_t   op_dash_mul197 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  struct List_10 *   offset_dash_ptr196 (    struct List_10 *  x338 ,    int64_t  count340 ) {
    struct List_10  temp198;
    return ( (struct List_10 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp198 ) ) ) ) ) ) ) ) );
}

static  struct List_10 *   get_dash_ptr154 (    struct Array_34 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  p2242 = ( ( (  cast_dash_ptr195 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr196 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  struct List_10   get153 (    struct Array_34 *  arr2245 ,    size_t  i2248 ) {
    return ( * ( (  get_dash_ptr154 ) ( (  arr2245 ) ,  (  i2248 ) ) ) );
}

static  size_t   op_dash_add199 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  struct Maybe_149   next150 (    struct ArrayIter_146 *  self2317 ) {
    if ( (  cmp151 ( ( ( * (  self2317 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_149) { .tag = Maybe_149_None_t } );
    }
    struct List_10  e2319 = ( (  get153 ) ( ( & ( ( * (  self2317 ) ) .f_backing ) ) ,  ( ( * (  self2317 ) ) .f_cur ) ) );
    (*  self2317 ) .f_cur = (  op_dash_add199 ( ( ( * (  self2317 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_149_Just ) ( (  e2319 ) ) );
}

static  enum Unit_6   for_dash_each143 (    struct Array_34  iterable1074 ,   struct envunion145  fun1076 ) {
    struct ArrayIter_146  temp147 = ( (  into_dash_iter148 ) ( (  iterable1074 ) ) );
    struct ArrayIter_146 *  it1077 = ( &temp147 );
    while ( ( true ) ) {
        struct Maybe_149  dref1078 = ( (  next150 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_149_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_149_Just_t ) {
                struct envunion145  temp200 = (  fun1076 );
                ( temp200.fun ( &temp200.env ,  ( dref1078 .stuff .Maybe_149_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  bool   eq206 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct TypeSize_209 {
    size_t  f_size;
};

static  struct TypeSize_209   get_dash_typesize208 (  ) {
    struct List_10  temp210;
    return ( (struct TypeSize_209) { .f_size = ( sizeof( ( (  temp210 ) ) ) ) } );
}

static  struct List_10 *   cast_dash_ptr211 (    void *  p359 ) {
    return ( (struct List_10 * ) (  p359 ) );
}

static  size_t   op_dash_mul212 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_9   allocate207 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize208 ) ( ) ) ) .f_size );
    struct List_10 *  ptr1951 = ( (  cast_dash_ptr211 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_9) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

struct env213 {
    ;
    struct Slice_9  new_dash_slice2036;
    ;
};

struct Tuple2_215 {
    struct List_10  field0;
    int32_t  field1;
};

static struct Tuple2_215 Tuple2_215_Tuple2 (  struct List_10  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_215 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion214 {
    enum Unit_6  (*fun) (  struct env213*  ,    struct Tuple2_215  );
    struct env213 env;
};

struct StrConcat_221 {
    struct StrConcat_50  field0;
    size_t  field1;
};

static struct StrConcat_221 StrConcat_221_StrConcat (  struct StrConcat_50  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_221 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_220 {
    struct StrConcat_221  field0;
    struct Char_47  field1;
};

static struct StrConcat_220 StrConcat_220_StrConcat (  struct StrConcat_221  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_220 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_224 {
    struct StrView_20  field0;
    struct StrConcat_220  field1;
};

static struct StrConcat_224 StrConcat_224_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_220  field1 ) {
    return ( struct StrConcat_224 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_223 {
    struct StrConcat_224  field0;
    struct Char_47  field1;
};

static struct StrConcat_223 StrConcat_223_StrConcat (  struct StrConcat_224  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_223 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str227 (    struct StrConcat_221  self1503 ) {
    struct StrConcat_221  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str166 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str168 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str226 (    struct StrConcat_220  self1503 ) {
    struct StrConcat_220  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str227 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str225 (    struct StrConcat_224  self1503 ) {
    struct StrConcat_224  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str226 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str222 (    struct StrConcat_223  self1503 ) {
    struct StrConcat_223  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str225 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic219 (    struct StrConcat_220  errmsg1712 ) {
    ( (  print_dash_str222 ) ( ( ( StrConcat_223_StrConcat ) ( ( ( StrConcat_224_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  int64_t   size_dash_i64228 (    size_t  x594 ) {
    return ( (int64_t ) (  x594 ) );
}

static  struct List_10 *   get_dash_ptr218 (    struct Slice_9  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp151 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct List_10 *  elem_dash_ptr1760 = ( (  offset_dash_ptr196 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_6   set217 (    struct Slice_9  slice1774 ,    size_t  i1776 ,    struct List_10  x1778 ) {
    struct List_10 *  ep1779 = ( (  get_dash_ptr218 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

static  size_t   i32_dash_size229 (    int32_t  x609 ) {
    return ( (size_t ) ( (int64_t ) (  x609 ) ) );
}

static  enum Unit_6   lam216 (   struct env213* env ,    struct Tuple2_215  dref2037 ) {
    return ( (  set217 ) ( ( env->new_dash_slice2036 ) ,  ( (  i32_dash_size229 ) ( ( dref2037 .field1 ) ) ) ,  ( dref2037 .field0 ) ) );
}

struct SliceIter_232 {
    struct Slice_9  f_slice;
    size_t  f_current_dash_offset;
};

struct FromIter_233 {
    int32_t  f_from;
};

struct Zip_231 {
    struct SliceIter_232  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_231   into_dash_iter235 (    struct Zip_231  self911 ) {
    return (  self911 );
}

struct Maybe_236 {
    enum {
        Maybe_236_None_t,
        Maybe_236_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_215  field0;
        } Maybe_236_Just_s;
    } stuff;
};

static struct Maybe_236 Maybe_236_Just (  struct Tuple2_215  field0 ) {
    return ( struct Maybe_236 ) { .tag = Maybe_236_Just_t, .stuff = { .Maybe_236_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_149   next238 (    struct SliceIter_232 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_149) { .tag = Maybe_149_None_t } );
    }
    struct List_10  elem1830 = ( * ( (  offset_dash_ptr196 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_149_Just ) ( (  elem1830 ) ) );
}

struct Maybe_239 {
    enum {
        Maybe_239_None_t,
        Maybe_239_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_239_Just_s;
    } stuff;
};

static struct Maybe_239 Maybe_239_Just (  int32_t  field0 ) {
    return ( struct Maybe_239 ) { .tag = Maybe_239_Just_t, .stuff = { .Maybe_239_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add241 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_239   next240 (    struct FromIter_233 *  dref905 ) {
    int32_t  v907 = ( ( (* dref905 ) ) .f_from );
    (* dref905 ) .f_from = (  op_dash_add241 ( ( ( (* dref905 ) ) .f_from ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( ( Maybe_239_Just ) ( (  v907 ) ) );
}

static  struct Maybe_236   next237 (    struct Zip_231 *  self914 ) {
    struct Zip_231  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_149  dref916 = ( (  next238 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_149_None_t ) {
            return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_149_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_236) { .tag = Maybe_236_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next238 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_236_Just ) ( ( ( Tuple2_215_Tuple2 ) ( ( dref916 .stuff .Maybe_149_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each230 (    struct Zip_231  iterable1074 ,   struct envunion214  fun1076 ) {
    struct Zip_231  temp234 = ( (  into_dash_iter235 ) ( (  iterable1074 ) ) );
    struct Zip_231 *  it1077 = ( &temp234 );
    while ( ( true ) ) {
        struct Maybe_236  dref1078 = ( (  next237 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_236_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_236_Just_t ) {
                struct envunion214  temp242 = (  fun1076 );
                ( temp242.fun ( &temp242.env ,  ( dref1078 .stuff .Maybe_236_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct SliceIter_232   into_dash_iter244 (    struct Slice_9  self1822 ) {
    return ( (struct SliceIter_232) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct FromIter_233   into_dash_iter245 (    struct FromIter_233  it903 ) {
    return (  it903 );
}

static  struct Zip_231   zip243 (    struct Slice_9  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_232  left_dash_it925 = ( (  into_dash_iter244 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_231) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct FromIter_233   from246 (    int32_t  f900 ) {
    return ( (struct FromIter_233) { .f_from = (  f900 ) } );
}

static  void *   cast_dash_ptr248 (    struct List_10 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free247 (    enum CAllocator_8  dref1953 ,    struct Slice_9  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr248 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full205 (   struct env1* env ,    struct List_7 *  list2035 ) {
    if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2035 ) .f_elements = ( (  allocate207 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( env->starting_dash_size2030 ) ) );
    } else {
        if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , ( ( ( * (  list2035 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_9  new_dash_slice2036 = ( (  allocate207 ) ( ( ( * (  list2035 ) ) .f_al ) ,  (  op_dash_mul212 ( ( ( * (  list2035 ) ) .f_count ) , ( env->growth_dash_factor2031 ) ) ) ) );
            struct env213 envinst213 = {
                .new_dash_slice2036 =  new_dash_slice2036 ,
            };
            struct envunion214  fun2040 = ( (struct envunion214){ .fun = (  enum Unit_6  (*) (  struct env213*  ,    struct Tuple2_215  ) )lam216 , .env =  envinst213 } );
            ( (  for_dash_each230 ) ( ( (  zip243 ) ( ( ( * (  list2035 ) ) .f_elements ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2040 ) ) );
            ( (  free247 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
            (*  list2035 ) .f_elements = (  new_dash_slice2036 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add203 (   struct env4* env ,    struct List_7 *  list2043 ,    struct List_10  elem2045 ) {
    struct envunion5  temp204 = ( (struct envunion5){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full205 , .env =  env->envinst1 } );
    ( temp204.fun ( &temp204.env ,  (  list2043 ) ) );
    ( (  set217 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( ( * (  list2043 ) ) .f_count ) ,  (  elem2045 ) ) );
    (*  list2043 ) .f_count = (  op_dash_add199 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam201 (   struct env144* env ,    struct List_10  x2096 ) {
    struct envunion29  temp202 = ( (struct envunion29){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add203 , .env =  env->envinst4 } );
    return ( temp202.fun ( &temp202.env ,  ( env->list2092 ) ,  (  x2096 ) ) );
}

static  enum Unit_6   add_dash_all142 (   struct env28* env ,    struct List_7 *  list2092 ,    struct Array_34  it2094 ) {
    struct env144 envinst144 = {
        .envinst4 = env->envinst4 ,
        .list2092 =  list2092 ,
    };
    ( (  for_dash_each143 ) ( (  it2094 ) ,  ( (struct envunion145){ .fun = (  enum Unit_6  (*) (  struct env144*  ,    struct List_10  ) )lam201 , .env =  envinst144 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_7   from_dash_iter132 (   struct env32* env ,    struct Array_34  iter2130 ,    enum CAllocator_8  al2132 ) {
    struct List_7  temp133 = ( (  mk134 ) ( (  al2132 ) ) );
    struct List_7 *  list2133 = ( &temp133 );
    struct envunion33  temp141 = ( (struct envunion33){ .fun = (  enum Unit_6  (*) (  struct env28*  ,    struct List_7 *  ,    struct Array_34  ) )add_dash_all142 , .env =  env->envinst28 } );
    ( temp141.fun ( &temp141.env ,  (  list2133 ) ,  (  iter2130 ) ) );
    return ( * (  list2133 ) );
}

static  struct Array_34   from_dash_listlike249 (    struct Array_34  self330 ) {
    return (  self330 );
}

static  void *   cast_dash_ptr255 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of256 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed253 (  ) {
    uint8_t *  temp254;
    uint8_t *  x570 = (  temp254 );
    ( ( memset ) ( ( (  cast_dash_ptr255 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of256 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   null_dash_ptr252 (  ) {
    return ( (  zeroed253 ) ( ) );
}

static  struct Slice_11   empty251 (  ) {
    return ( (struct Slice_11) { .f_ptr = ( (  null_dash_ptr252 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_10   mk250 (    enum CAllocator_8  al2025 ) {
    struct Slice_11  elements2026 = ( (  empty251 ) ( ) );
    return ( (struct List_10) { .f_al = (  al2025 ) , .f_elements = (  elements2026 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr263 (    struct Action_18 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of264 (    struct Action_18 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Action_18 *   zeroed261 (  ) {
    struct Action_18 *  temp262;
    struct Action_18 *  x570 = (  temp262 );
    ( ( memset ) ( ( (  cast_dash_ptr263 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of264 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Action_18 *   null_dash_ptr260 (  ) {
    return ( (  zeroed261 ) ( ) );
}

static  struct Slice_17   empty259 (  ) {
    return ( (struct Slice_17) { .f_ptr = ( (  null_dash_ptr260 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_16   mk258 (    enum CAllocator_8  al2025 ) {
    struct Slice_17  elements2026 = ( (  empty259 ) ( ) );
    return ( (struct List_16) { .f_al = (  al2025 ) , .f_elements = (  elements2026 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Actions_76   mk_dash_actions257 (    enum CAllocator_8  al3571 ) {
    return ( (struct Actions_76) { .f_list = ( (  mk258 ) ( (  al3571 ) ) ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct TextBuf_75   mk130 (   struct env64* env ,    enum CAllocator_8  al3575 ) {
    struct envunion65  temp131 = ( (struct envunion65){ .fun = (  struct List_7  (*) (  struct env32*  ,    struct Array_34  ,    enum CAllocator_8  ) )from_dash_iter132 , .env =  env->envinst32 } );
    return ( (struct TextBuf_75) { .f_buf = ( temp131.fun ( &temp131.env ,  ( (  from_dash_listlike249 ) ( ( (struct Array_34) { ._arr = { ( (  mk250 ) ( (  al3575 ) ) ) } } ) ) ) ,  (  al3575 ) ) ) , .f_actions = ( (  mk_dash_actions257 ) ( (  al3575 ) ) ) } );
}

struct Slice_265 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr267 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp268;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp268 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral269 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub270 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_265   get266 (  ) {
    return ( (struct Slice_265) { .f_ptr = ( (  offset_dash_ptr267 ) ( ( _global_argv ) ,  (  from_dash_integral269 ( 1 ) ) ) ) , .f_count = (  op_dash_sub270 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Maybe_274 {
    enum {
        Maybe_274_None_t,
        Maybe_274_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_274_Just_s;
    } stuff;
};

static struct Maybe_274 Maybe_274_Just (  const char*  field0 ) {
    return ( struct Maybe_274 ) { .tag = Maybe_274_Just_t, .stuff = { .Maybe_274_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined275 (  ) {
    const char*  temp276;
    return (  temp276 );
}

static  const char*   or_dash_fail273 (    struct Maybe_274  x1725 ,    struct StrConcat_220  errmsg1727 ) {
    struct Maybe_274  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_274_None_t ) {
        ( (  panic219 ) ( (  errmsg1727 ) ) );
        return ( (  undefined275 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_274_Just_t ) {
            return ( dref1728 .stuff .Maybe_274_Just_s .field0 );
        }
    }
}

static  struct Maybe_274   try_dash_get277 (    struct Slice_265  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp151 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_274) { .tag = Maybe_274_None_t } );
    }
    const char* *  elem_dash_ptr1766 = ( (  offset_dash_ptr267 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_274_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  const char*   get272 (    struct Slice_265  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail273 ) ( ( (  try_dash_get277 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get271 (    struct Slice_265  self1867 ,    size_t  idx1869 ) {
    return ( (  get272 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct envunion279 {
    enum Unit_6  (*fun) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  );
    struct env70 env;
};

static  bool   eq282 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq281 (    struct Pos_19  l3540 ,    struct Pos_19  r3542 ) {
    return ( (  eq282 ( ( (  l3540 ) .f_line ) , ( (  r3542 ) .f_line ) ) ) && (  eq282 ( ( (  l3540 ) .f_bi ) , ( (  r3542 ) .f_bi ) ) ) );
}

static  size_t   size283 (    struct List_7 *  l2127 ) {
    return ( ( * (  l2127 ) ) .f_count );
}

static  struct List_10 *   get_dash_ptr288 (    struct List_7 *  list1995 ,    size_t  i1997 ) {
    if ( ( (  cmp151 ( (  i1997 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1997 ) , ( ( * (  list1995 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1997 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1995 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr218 ) ( ( ( * (  list1995 ) ) .f_elements ) ,  (  i1997 ) ) );
}

static  struct List_10   get287 (    struct List_7 *  list2005 ,    size_t  i2007 ) {
    return ( * ( (  get_dash_ptr288 ) ( (  list2005 ) ,  (  i2007 ) ) ) );
}

static  uint8_t *   offset_dash_ptr291 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp292;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp292 ) ) ) ) ) ) ) ) );
}

static  size_t   min293 (    size_t  l1236 ,    size_t  r1238 ) {
    if ( (  cmp151 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Slice_11   subslice290 (    struct Slice_11  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    uint8_t *  begin_dash_ptr1787 = ( (  offset_dash_ptr291 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min293 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_11) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct Slice_11   from289 (    struct Slice_11  slice1791 ,    size_t  from1793 ) {
    return ( (  subslice290 ) ( (  slice1791 ) ,  (  from1793 ) ,  ( (  slice1791 ) .f_count ) ) );
}

static  struct Slice_11   to_dash_slice294 (    struct List_10  l2120 ) {
    uint8_t *  ptr2121 = ( ( (  l2120 ) .f_elements ) .f_ptr );
    return ( (struct Slice_11) { .f_ptr = (  ptr2121 ) , .f_count = ( (  l2120 ) .f_count ) } );
}

static  enum Unit_6   set295 (    struct List_7 *  list2015 ,    size_t  i2017 ,    struct List_10  elem2019 ) {
    if ( ( (  cmp151 ( (  i2017 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2017 ) , ( ( * (  list2015 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2017 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2015 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set217 ) ( ( ( * (  list2015 ) ) .f_elements ) ,  (  i2017 ) ,  (  elem2019 ) ) );
    return ( Unit_6_Unit );
}

struct env302 {
    struct env12 envinst12;
    struct List_10 *  list2092;
};

struct envunion303 {
    enum Unit_6  (*fun) (  struct env302*  ,    uint8_t  );
    struct env302 env;
};

struct SliceIter_304 {
    struct Slice_11  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_304   into_dash_iter306 (    struct Slice_11  self1822 ) {
    return ( (struct SliceIter_304) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_307 {
    enum {
        Maybe_307_None_t,
        Maybe_307_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_307_Just_s;
    } stuff;
};

static struct Maybe_307 Maybe_307_Just (  uint8_t  field0 ) {
    return ( struct Maybe_307 ) { .tag = Maybe_307_Just_t, .stuff = { .Maybe_307_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_307   next308 (    struct SliceIter_304 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    uint8_t  elem1830 = ( * ( (  offset_dash_ptr291 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_307_Just ) ( (  elem1830 ) ) );
}

static  enum Unit_6   for_dash_each301 (    struct Slice_11  iterable1074 ,   struct envunion303  fun1076 ) {
    struct SliceIter_304  temp305 = ( (  into_dash_iter306 ) ( (  iterable1074 ) ) );
    struct SliceIter_304 *  it1077 = ( &temp305 );
    while ( ( true ) ) {
        struct Maybe_307  dref1078 = ( (  next308 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_307_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_307_Just_t ) {
                struct envunion303  temp309 = (  fun1076 );
                ( temp309.fun ( &temp309.env ,  ( dref1078 .stuff .Maybe_307_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct TypeSize_317 {
    size_t  f_size;
};

static  struct TypeSize_317   get_dash_typesize316 (  ) {
    uint8_t  temp318;
    return ( (struct TypeSize_317) { .f_size = ( sizeof( ( (  temp318 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr319 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   allocate315 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize316 ) ( ) ) ) .f_size );
    uint8_t *  ptr1951 = ( (  cast_dash_ptr319 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_11) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

struct env320 {
    ;
    struct Slice_11  new_dash_slice2036;
    ;
};

struct Tuple2_322 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_322 Tuple2_322_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_322 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion321 {
    enum Unit_6  (*fun) (  struct env320*  ,    struct Tuple2_322  );
    struct env320 env;
};

static  uint8_t *   get_dash_ptr325 (    struct Slice_11  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp151 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1760 = ( (  offset_dash_ptr291 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_6   set324 (    struct Slice_11  slice1774 ,    size_t  i1776 ,    uint8_t  x1778 ) {
    uint8_t *  ep1779 = ( (  get_dash_ptr325 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam323 (   struct env320* env ,    struct Tuple2_322  dref2037 ) {
    return ( (  set324 ) ( ( env->new_dash_slice2036 ) ,  ( (  i32_dash_size229 ) ( ( dref2037 .field1 ) ) ) ,  ( dref2037 .field0 ) ) );
}

struct Zip_327 {
    struct SliceIter_304  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_327   into_dash_iter329 (    struct Zip_327  self911 ) {
    return (  self911 );
}

struct Maybe_330 {
    enum {
        Maybe_330_None_t,
        Maybe_330_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_322  field0;
        } Maybe_330_Just_s;
    } stuff;
};

static struct Maybe_330 Maybe_330_Just (  struct Tuple2_322  field0 ) {
    return ( struct Maybe_330 ) { .tag = Maybe_330_Just_t, .stuff = { .Maybe_330_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_330   next331 (    struct Zip_327 *  self914 ) {
    struct Zip_327  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_307  dref916 = ( (  next308 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_307_None_t ) {
            return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_307_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_330) { .tag = Maybe_330_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next308 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_330_Just ) ( ( ( Tuple2_322_Tuple2 ) ( ( dref916 .stuff .Maybe_307_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each326 (    struct Zip_327  iterable1074 ,   struct envunion321  fun1076 ) {
    struct Zip_327  temp328 = ( (  into_dash_iter329 ) ( (  iterable1074 ) ) );
    struct Zip_327 *  it1077 = ( &temp328 );
    while ( ( true ) ) {
        struct Maybe_330  dref1078 = ( (  next331 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_330_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_330_Just_t ) {
                struct envunion321  temp332 = (  fun1076 );
                ( temp332.fun ( &temp332.env ,  ( dref1078 .stuff .Maybe_330_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_327   zip333 (    struct Slice_11  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_304  left_dash_it925 = ( (  into_dash_iter306 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_327) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr335 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free334 (    enum CAllocator_8  dref1953 ,    struct Slice_11  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr335 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full314 (   struct env2* env ,    struct List_10 *  list2035 ) {
    if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2035 ) .f_elements = ( (  allocate315 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( env->starting_dash_size2030 ) ) );
    } else {
        if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , ( ( ( * (  list2035 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_11  new_dash_slice2036 = ( (  allocate315 ) ( ( ( * (  list2035 ) ) .f_al ) ,  (  op_dash_mul212 ( ( ( * (  list2035 ) ) .f_count ) , ( env->growth_dash_factor2031 ) ) ) ) );
            struct env320 envinst320 = {
                .new_dash_slice2036 =  new_dash_slice2036 ,
            };
            struct envunion321  fun2040 = ( (struct envunion321){ .fun = (  enum Unit_6  (*) (  struct env320*  ,    struct Tuple2_322  ) )lam323 , .env =  envinst320 } );
            ( (  for_dash_each326 ) ( ( (  zip333 ) ( ( ( * (  list2035 ) ) .f_elements ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2040 ) ) );
            ( (  free334 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
            (*  list2035 ) .f_elements = (  new_dash_slice2036 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add312 (   struct env12* env ,    struct List_10 *  list2043 ,    uint8_t  elem2045 ) {
    struct envunion13  temp313 = ( (struct envunion13){ .fun = (  enum Unit_6  (*) (  struct env2*  ,    struct List_10 *  ) )grow_dash_if_dash_full314 , .env =  env->envinst2 } );
    ( temp313.fun ( &temp313.env ,  (  list2043 ) ) );
    ( (  set324 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( ( * (  list2043 ) ) .f_count ) ,  (  elem2045 ) ) );
    (*  list2043 ) .f_count = (  op_dash_add199 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam310 (   struct env302* env ,    uint8_t  x2096 ) {
    struct envunion31  temp311 = ( (struct envunion31){ .fun = (  enum Unit_6  (*) (  struct env12*  ,    struct List_10 *  ,    uint8_t  ) )add312 , .env =  env->envinst12 } );
    return ( temp311.fun ( &temp311.env ,  ( env->list2092 ) ,  (  x2096 ) ) );
}

static  enum Unit_6   add_dash_all300 (   struct env30* env ,    struct List_10 *  list2092 ,    struct Slice_11  it2094 ) {
    struct env302 envinst302 = {
        .envinst12 = env->envinst12 ,
        .list2092 =  list2092 ,
    };
    ( (  for_dash_each301 ) ( (  it2094 ) ,  ( (struct envunion303){ .fun = (  enum Unit_6  (*) (  struct env302*  ,    uint8_t  ) )lam310 , .env =  envinst302 } ) ) );
    return ( Unit_6_Unit );
}

static  struct List_10   from_dash_iter297 (   struct env35* env ,    struct Slice_11  iter2130 ,    enum CAllocator_8  al2132 ) {
    struct List_10  temp298 = ( (  mk250 ) ( (  al2132 ) ) );
    struct List_10 *  list2133 = ( &temp298 );
    struct envunion36  temp299 = ( (struct envunion36){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
    ( temp299.fun ( &temp299.env ,  (  list2133 ) ,  (  iter2130 ) ) );
    return ( * (  list2133 ) );
}

struct envunion337 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   or_dash_else338 (    struct Maybe_113  self1732 ,    struct StrView_20  alt1734 ) {
    struct Maybe_113  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_113_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_113_Just_t ) {
            return ( dref1735 .stuff .Maybe_113_Just_s .field0 );
        }
    }
}

struct LineIter_340 {
    struct StrView_20  f_og;
    size_t  f_last;
};

static  uint8_t   undefined344 (  ) {
    uint8_t  temp345;
    return (  temp345 );
}

static  uint8_t   or_dash_fail343 (    struct Maybe_307  x1725 ,    struct StrConcat_220  errmsg1727 ) {
    struct Maybe_307  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_307_None_t ) {
        ( (  panic219 ) ( (  errmsg1727 ) ) );
        return ( (  undefined344 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_307_Just_t ) {
            return ( dref1728 .stuff .Maybe_307_Just_s .field0 );
        }
    }
}

static  struct Maybe_307   try_dash_get346 (    struct Slice_11  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp151 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    uint8_t *  elem_dash_ptr1766 = ( (  offset_dash_ptr291 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_307_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  uint8_t   get342 (    struct Slice_11  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail343 ) ( ( (  try_dash_get346 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   char_dash_u8347 (    struct Char_47  c718 ) {
    struct CharDestructured_172  dref719 = ( (  destructure174 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_172_Ref_t ) {
        return ( * ( ( dref719 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref719.tag == CharDestructured_172_Scalar_t ) {
            return ( (  u32_dash_u8185 ) ( ( ( dref719 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct StrView_20   byte_dash_substr348 (    struct StrView_20  s2174 ,    size_t  from2176 ,    size_t  to2178 ) {
    return ( (struct StrView_20) { .f_contents = ( (  subslice290 ) ( ( (  s2174 ) .f_contents ) ,  (  from2176 ) ,  (  to2178 ) ) ) } );
}

static  struct Maybe_113   next341 (    struct LineIter_340 *  self2392 ) {
    if ( (  cmp151 ( ( ( * (  self2392 ) ) .f_last ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    size_t  i2393 = ( ( * (  self2392 ) ) .f_last );
    while ( ( (  cmp151 ( (  i2393 ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq175 ( ( (  get342 ) ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) ,  (  i2393 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2393 = (  op_dash_add199 ( (  i2393 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_20  line2394 = ( (  byte_dash_substr348 ) ( ( ( * (  self2392 ) ) .f_og ) ,  ( ( * (  self2392 ) ) .f_last ) ,  (  i2393 ) ) );
    if ( (  cmp151 ( (  i2393 ) , ( ( ( ( * (  self2392 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2393 = (  op_dash_add199 ( (  i2393 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2392 ) .f_last = (  i2393 );
    return ( ( Maybe_113_Just ) ( (  line2394 ) ) );
}

static  struct LineIter_340   into_dash_iter350 (    struct LineIter_340  self2389 ) {
    return (  self2389 );
}

static  struct Maybe_113   head339 (    struct LineIter_340  it1142 ) {
    struct LineIter_340  temp349 = ( (  into_dash_iter350 ) ( (  it1142 ) ) );
    return ( (  next341 ) ( ( &temp349 ) ) );
}

static  struct LineIter_340   lines351 (    struct StrView_20  s2386 ) {
    return ( (struct LineIter_340) { .f_og = (  s2386 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

struct env356 {
    struct Char_47  c2210;
    ;
};

struct envunion357 {
    bool  (*fun) (  struct env356*  ,    struct Char_47  );
    struct env356 env;
};

struct SplitIter_355 {
    struct StrView_20  f_og;
    size_t  f_last;
    struct envunion357  f_fun;
};

struct Drop_354 {
    struct SplitIter_355  field0;
    size_t  field1;
};

static struct Drop_354 Drop_354_Drop (  struct SplitIter_355  field0 ,  size_t  field1 ) {
    return ( struct Drop_354 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Zip_353 {
    struct Drop_354  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_353   into_dash_iter358 (    struct Zip_353  self911 ) {
    return (  self911 );
}

static  struct Drop_354   into_dash_iter360 (    struct Drop_354  self845 ) {
    return (  self845 );
}

static  struct Zip_353   zip359 (    struct Drop_354  left922 ,    struct FromIter_233  right924 ) {
    struct Drop_354  left_dash_it925 = ( (  into_dash_iter360 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_353) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  struct SplitIter_355   into_dash_iter362 (    struct SplitIter_355  self2215 ) {
    return (  self2215 );
}

static  struct Drop_354   drop361 (    struct SplitIter_355  iterable852 ,    size_t  i854 ) {
    struct SplitIter_355  it855 = ( (  into_dash_iter362 ) ( (  iterable852 ) ) );
    return ( ( Drop_354_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SplitIter_355   split_dash_by_dash_filter364 (    struct StrView_20  s2203 ,   struct envunion357  fun2205 ) {
    return ( (struct SplitIter_355) { .f_og = (  s2203 ) , .f_last = (  from_dash_integral0 ( 0 ) ) , .f_fun = (  fun2205 ) } );
}

struct Tuple2_367 {
    struct CharDestructured_172  field0;
    struct CharDestructured_172  field1;
};

static struct Tuple2_367 Tuple2_367_Tuple2 (  struct CharDestructured_172  field0 ,  struct CharDestructured_172  field1 ) {
    return ( struct Tuple2_367 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int64_t   op_dash_add368 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  bool   eq370 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq369 (    struct Scalar_173  l724 ,    struct Scalar_173  r726 ) {
    return (  eq370 ( ( (  l724 ) .f_value ) , ( (  r726 ) .f_value ) ) );
}

static  bool   eq366 (    struct Char_47  l729 ,    struct Char_47  r731 ) {
    if ( ( !  eq206 ( ( (  l729 ) .f_num_dash_bytes ) , ( (  r731 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_367  dref732 = ( ( Tuple2_367_Tuple2 ) ( ( (  destructure174 ) ( (  l729 ) ) ) ,  ( (  destructure174 ) ( (  r731 ) ) ) ) );
    if ( dref732 .field0.tag == CharDestructured_172_Ref_t && dref732 .field1.tag == CharDestructured_172_Ref_t ) {
        int64_t  i735 = (  from_dash_integral269 ( 0 ) );
        while ( (  cmp151 ( ( (size_t ) (  i735 ) ) , ( ( dref732 .field0 .stuff .CharDestructured_172_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq175 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field0 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref732 .field1 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) + (  i735 ) ) ) ) ) ) ) {
                return ( false );
            }
            i735 = (  op_dash_add368 ( (  i735 ) , (  from_dash_integral269 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref732 .field0.tag == CharDestructured_172_Scalar_t && dref732 .field1.tag == CharDestructured_172_Scalar_t ) {
            return (  eq369 ( ( dref732 .field0 .stuff .CharDestructured_172_Scalar_s .field0 ) , ( dref732 .field1 .stuff .CharDestructured_172_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref732 .field0.tag == CharDestructured_172_Scalar_t && dref732 .field1.tag == CharDestructured_172_Ref_t ) {
                return (  eq175 ( ( (  u32_dash_u8185 ) ( ( ( dref732 .field0 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field1 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref732 .field0.tag == CharDestructured_172_Ref_t && dref732 .field1.tag == CharDestructured_172_Scalar_t ) {
                    return (  eq175 ( ( (  u32_dash_u8185 ) ( ( ( dref732 .field1 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) ) , ( * ( ( dref732 .field0 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

static  bool   lam365 (   struct env356* env ,    struct Char_47  cc2212 ) {
    return (  eq366 ( (  cc2212 ) , ( env->c2210 ) ) );
}

static  struct SplitIter_355   split_dash_by_dash_each363 (    struct StrView_20  s2208 ,    struct Char_47  c2210 ) {
    struct env356 envinst356 = {
        .c2210 =  c2210 ,
    };
    return ( (  split_dash_by_dash_filter364 ) ( (  s2208 ) ,  ( (struct envunion357){ .fun = (  bool  (*) (  struct env356*  ,    struct Char_47  ) )lam365 , .env =  envinst356 } ) ) );
}

struct Tuple2_373 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct Tuple2_373 Tuple2_373_Tuple2 (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_373 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_372 {
    enum {
        Maybe_372_None_t,
        Maybe_372_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_373  field0;
        } Maybe_372_Just_s;
    } stuff;
};

static struct Maybe_372 Maybe_372_Just (  struct Tuple2_373  field0 ) {
    return ( struct Maybe_372 ) { .tag = Maybe_372_Just_t, .stuff = { .Maybe_372_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_113   next376 (    struct SplitIter_355 *  self2218 ) {
    if ( (  cmp151 ( ( ( * (  self2218 ) ) .f_last ) , ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    size_t  i2219 = ( ( * (  self2218 ) ) .f_last );
    while ( (  cmp151 ( (  i2219 ) , ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        uint8_t *  ptr2220 = ( (  get_dash_ptr325 ) ( ( ( ( * (  self2218 ) ) .f_og ) .f_contents ) ,  (  i2219 ) ) );
        struct Char_47  c2221 = ( (  scan_dash_from_dash_mem190 ) ( (  ptr2220 ) ) );
        struct envunion357  temp377 = ( ( * (  self2218 ) ) .f_fun );
        if ( ( temp377.fun ( &temp377.env ,  (  c2221 ) ) ) ) {
            break;
        }
        i2219 = (  op_dash_add199 ( (  i2219 ) , ( (  next_dash_char191 ) ( (  ptr2220 ) ) ) ) );
    }
    struct StrView_20  line2222 = ( (  byte_dash_substr348 ) ( ( ( * (  self2218 ) ) .f_og ) ,  ( ( * (  self2218 ) ) .f_last ) ,  (  i2219 ) ) );
    i2219 = (  op_dash_add199 ( (  i2219 ) , (  from_dash_integral0 ( 1 ) ) ) );
    (*  self2218 ) .f_last = (  i2219 );
    return ( ( Maybe_113_Just ) ( (  line2222 ) ) );
}

static  struct Maybe_113   next375 (    struct Drop_354 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next376 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next376 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  struct Maybe_372   next374 (    struct Zip_353 *  self914 ) {
    struct Zip_353  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_113  dref916 = ( (  next375 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_113_None_t ) {
            return ( (struct Maybe_372) { .tag = Maybe_372_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_113_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_372) { .tag = Maybe_372_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next375 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_372_Just ) ( ( ( Tuple2_373_Tuple2 ) ( ( dref916 .stuff .Maybe_113_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct envunion380 {
    struct List_10  (*fun) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  );
    struct env35 env;
};

static  enum Unit_6   insert382 (   struct env23* env ,    struct List_7 *  list2048 ,    size_t  i2050 ,    struct List_10  elem2052 ) {
    if ( ( (  cmp151 ( (  i2050 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2050 ) , ( ( * (  list2048 ) ) .f_count ) ) == 2 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Insertion at list index " ) ,  ( 24 ) ) ) ,  (  i2050 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2048 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  eq206 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        struct envunion24  temp383 = ( (struct envunion24){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add203 , .env =  env->envinst4 } );
        ( temp383.fun ( &temp383.env ,  (  list2048 ) ,  (  elem2052 ) ) );
        return ( Unit_6_Unit );
    }
    struct envunion25  temp384 = ( (struct envunion25){ .fun = (  enum Unit_6  (*) (  struct env1*  ,    struct List_7 *  ) )grow_dash_if_dash_full205 , .env =  env->envinst1 } );
    ( temp384.fun ( &temp384.env ,  (  list2048 ) ) );
    size_t  ii2053 = (  op_dash_sub270 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    while ( (  cmp151 ( (  ii2053 ) , (  i2050 ) ) != 0 ) ) {
        ( (  set217 ) ( ( ( * (  list2048 ) ) .f_elements ) ,  (  op_dash_add199 ( (  ii2053 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  get287 ) ( (  list2048 ) ,  (  ii2053 ) ) ) ) );
        if ( (  eq206 ( (  ii2053 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            break;
        }
        ii2053 = (  op_dash_sub270 ( (  ii2053 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  set217 ) ( ( ( * (  list2048 ) ) .f_elements ) ,  (  i2050 ) ,  (  elem2052 ) ) );
    (*  list2048 ) .f_count = (  op_dash_add199 ( ( ( * (  list2048 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free386 (    struct List_10 *  list2029 ) {
    ( (  free334 ) ( ( ( * (  list2029 ) ) .f_al ) ,  ( ( * (  list2029 ) ) .f_elements ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   add_dash_to_dash_spot286 (   struct env66* env ,    struct TextBuf_75 *  self3602 ,    struct Pos_19  p3604 ,    struct StrView_20  bytes3606 ) {
    enum CAllocator_8  al3607 = ( ( ( * (  self3602 ) ) .f_buf ) .f_al );
    struct List_7 *  buf3608 = ( & ( ( * (  self3602 ) ) .f_buf ) );
    struct List_10  extracted_dash_line_dash_buf3609 = ( (  get287 ) ( (  buf3608 ) ,  ( (  i32_dash_size229 ) ( ( (  p3604 ) .f_line ) ) ) ) );
    struct Slice_11  remaining3610 = ( (  from289 ) ( ( (  to_dash_slice294 ) ( (  extracted_dash_line_dash_buf3609 ) ) ) ,  ( (  i32_dash_size229 ) ( ( (  p3604 ) .f_bi ) ) ) ) );
    struct envunion67  temp296 = ( (struct envunion67){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter297 , .env =  env->envinst35 } );
    ( (  set295 ) ( (  buf3608 ) ,  ( (  i32_dash_size229 ) ( ( (  p3604 ) .f_line ) ) ) ,  ( temp296.fun ( &temp296.env ,  ( (  subslice290 ) ( ( (  to_dash_slice294 ) ( (  extracted_dash_line_dash_buf3609 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size229 ) ( ( (  p3604 ) .f_bi ) ) ) ) ) ,  (  al3607 ) ) ) ) );
    struct List_10 *  last_dash_line3611 = ( (  get_dash_ptr288 ) ( (  buf3608 ) ,  ( (  i32_dash_size229 ) ( ( (  p3604 ) .f_line ) ) ) ) );
    struct envunion337  temp336 = ( (struct envunion337){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
    ( temp336.fun ( &temp336.env ,  (  last_dash_line3611 ) ,  ( ( (  or_dash_else338 ) ( ( (  head339 ) ( ( (  lines351 ) ( (  bytes3606 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) ) .f_contents ) ) );
    int32_t  lines_dash_added3612 = (  from_dash_integral38 ( 0 ) );
    struct Zip_353  temp352 =  into_dash_iter358 ( ( (  zip359 ) ( ( (  drop361 ) ( ( (  split_dash_by_dash_each363 ) ( (  bytes3606 ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_372  __cond371 =  next374 (&temp352);
        if (  __cond371 .tag == 0 ) {
            break;
        }
        struct Tuple2_373  dref3613 =  __cond371 .stuff .Maybe_372_Just_s .field0;
        struct envunion380  temp379 = ( (struct envunion380){ .fun = (  struct List_10  (*) (  struct env35*  ,    struct Slice_11  ,    enum CAllocator_8  ) )from_dash_iter297 , .env =  env->envinst35 } );
        struct List_10  temp378 = ( temp379.fun ( &temp379.env ,  ( ( dref3613 .field0 ) .f_contents ) ,  (  al3607 ) ) );
        struct List_10 *  nuline3616 = ( &temp378 );
        size_t  next_dash_line3617 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( ( (  p3604 ) .f_line ) , ( dref3613 .field1 ) ) ) ) );
        struct envunion68  temp381 = ( (struct envunion68){ .fun = (  enum Unit_6  (*) (  struct env23*  ,    struct List_7 *  ,    size_t  ,    struct List_10  ) )insert382 , .env =  env->envinst23 } );
        ( temp381.fun ( &temp381.env ,  (  buf3608 ) ,  (  next_dash_line3617 ) ,  ( * (  nuline3616 ) ) ) );
        last_dash_line3611 = ( (  get_dash_ptr288 ) ( (  buf3608 ) ,  (  next_dash_line3617 ) ) );
        lines_dash_added3612 = (  op_dash_add241 ( (  lines_dash_added3612 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    struct envunion69  temp385 = ( (struct envunion69){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
    ( temp385.fun ( &temp385.env ,  (  last_dash_line3611 ) ,  (  remaining3610 ) ) );
    ( (  free386 ) ( ( & (  extracted_dash_line_dash_buf3609 ) ) ) );
    return (  lines_dash_added3612 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp389 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  enum Ordering_152   cmp388 (    struct Pos_19  l3545 ,    struct Pos_19  r3547 ) {
    enum Ordering_152  dref3548 = ( (  cmp389 ) ( ( (  l3545 ) .f_line ) ,  ( (  r3547 ) .f_line ) ) );
    switch (  dref3548 ) {
        case Ordering_152_EQ : {
            return ( (  cmp389 ) ( ( (  l3545 ) .f_bi ) ,  ( (  r3547 ) .f_bi ) ) );
            break;
        }
        default: {
            enum Ordering_152  els3549 =  dref3548;
            return (  els3549 );
            break;
        }
    }
}

static  struct Pos_19   min387 (    struct Pos_19  l1236 ,    struct Pos_19  r1238 ) {
    if ( (  cmp388 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Pos_19   max390 (    struct Pos_19  l1315 ,    struct Pos_19  r1317 ) {
    if ( (  cmp388 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  size_t   size391 (    struct List_10 *  l2127 ) {
    return ( ( * (  l2127 ) ) .f_count );
}

struct StrConcat_397 {
    struct StrConcat_51  field0;
    struct Char_47  field1;
};

static struct StrConcat_397 StrConcat_397_StrConcat (  struct StrConcat_51  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_397 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_396 {
    struct StrConcat_397  field0;
    size_t  field1;
};

static struct StrConcat_396 StrConcat_396_StrConcat (  struct StrConcat_397  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_396 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_395 {
    struct StrConcat_396  field0;
    struct Char_47  field1;
};

static struct StrConcat_395 StrConcat_395_StrConcat (  struct StrConcat_396  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_395 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_400 {
    struct StrView_20  field0;
    struct StrConcat_395  field1;
};

static struct StrConcat_400 StrConcat_400_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_395  field1 ) {
    return ( struct StrConcat_400 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_399 {
    struct StrConcat_400  field0;
    struct Char_47  field1;
};

static struct StrConcat_399 StrConcat_399_StrConcat (  struct StrConcat_400  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_399 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str404 (    struct StrConcat_397  self1503 ) {
    struct StrConcat_397  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str167 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str403 (    struct StrConcat_396  self1503 ) {
    struct StrConcat_396  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str404 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str168 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str402 (    struct StrConcat_395  self1503 ) {
    struct StrConcat_395  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str403 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str401 (    struct StrConcat_400  self1503 ) {
    struct StrConcat_400  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str402 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str398 (    struct StrConcat_399  self1503 ) {
    struct StrConcat_399  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str401 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic394 (    struct StrConcat_395  errmsg1712 ) {
    ( (  print_dash_str398 ) ( ( ( StrConcat_399_StrConcat ) ( ( ( StrConcat_400_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct Drop_406 {
    struct Zip_327  field0;
    size_t  field1;
};

static struct Drop_406 Drop_406_Drop (  struct Zip_327  field0 ,  size_t  field1 ) {
    return ( struct Drop_406 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env407 {
    struct List_10 *  list2056;
    ;
    ;
    size_t  num_dash_elems2061;
    ;
};

struct envunion408 {
    enum Unit_6  (*fun) (  struct env407*  ,    struct Tuple2_322  );
    struct env407 env;
};

static  struct Drop_406   into_dash_iter410 (    struct Drop_406  self845 ) {
    return (  self845 );
}

static  struct Maybe_330   next411 (    struct Drop_406 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next331 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next331 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each405 (    struct Drop_406  iterable1074 ,   struct envunion408  fun1076 ) {
    struct Drop_406  temp409 = ( (  into_dash_iter410 ) ( (  iterable1074 ) ) );
    struct Drop_406 *  it1077 = ( &temp409 );
    while ( ( true ) ) {
        struct Maybe_330  dref1078 = ( (  next411 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_330_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_330_Just_t ) {
                struct envunion408  temp412 = (  fun1076 );
                ( temp412.fun ( &temp412.env ,  ( dref1078 .stuff .Maybe_330_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_406   drop413 (    struct Zip_327  iterable852 ,    size_t  i854 ) {
    struct Zip_327  it855 = ( (  into_dash_iter329 ) ( (  iterable852 ) ) );
    return ( ( Drop_406_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct SliceIter_304   into_dash_iter415 (    struct List_10  self2022 ) {
    return ( (  into_dash_iter306 ) ( ( (  subslice290 ) ( ( (  self2022 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2022 ) .f_count ) ) ) ) );
}

static  struct Zip_327   zip414 (    struct List_10  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_304  left_dash_it925 = ( (  into_dash_iter415 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_327) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   set417 (    struct List_10 *  list2015 ,    size_t  i2017 ,    uint8_t  elem2019 ) {
    if ( ( (  cmp151 ( (  i2017 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2017 ) , ( ( * (  list2015 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2017 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2015 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set324 ) ( ( ( * (  list2015 ) ) .f_elements ) ,  (  i2017 ) ,  (  elem2019 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam416 (   struct env407* env ,    struct Tuple2_322  dref2062 ) {
    return ( (  set417 ) ( ( env->list2056 ) ,  (  op_dash_sub270 ( ( (  i32_dash_size229 ) ( ( dref2062 .field1 ) ) ) , ( env->num_dash_elems2061 ) ) ) ,  ( dref2062 .field0 ) ) );
}

struct StrConcat_420 {
    struct StrConcat_221  field0;
    struct StrView_20  field1;
};

static struct StrConcat_420 StrConcat_420_StrConcat (  struct StrConcat_221  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_420 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_423 {
    struct StrView_20  field0;
    struct StrConcat_420  field1;
};

static struct StrConcat_423 StrConcat_423_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_420  field1 ) {
    return ( struct StrConcat_423 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_422 {
    struct StrConcat_423  field0;
    struct Char_47  field1;
};

static struct StrConcat_422 StrConcat_422_StrConcat (  struct StrConcat_423  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_422 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str425 (    struct StrConcat_420  self1503 ) {
    struct StrConcat_420  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str227 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str162 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str424 (    struct StrConcat_423  self1503 ) {
    struct StrConcat_423  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str425 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str421 (    struct StrConcat_422  self1503 ) {
    struct StrConcat_422  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str424 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic419 (    struct StrConcat_420  errmsg1712 ) {
    ( (  print_dash_str421 ) ( ( ( StrConcat_422_StrConcat ) ( ( ( StrConcat_423_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct env427 {
    ;
    struct Slice_11  dest1853;
    ;
};

struct envunion428 {
    enum Unit_6  (*fun) (  struct env427*  ,    struct Tuple2_322  );
    struct env427 env;
};

static  enum Unit_6   for_dash_each426 (    struct Zip_327  iterable1074 ,   struct envunion428  fun1076 ) {
    struct Zip_327  temp429 = ( (  into_dash_iter329 ) ( (  iterable1074 ) ) );
    struct Zip_327 *  it1077 = ( &temp429 );
    while ( ( true ) ) {
        struct Maybe_330  dref1078 = ( (  next331 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_330_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_330_Just_t ) {
                struct envunion428  temp430 = (  fun1076 );
                ( temp430.fun ( &temp430.env ,  ( dref1078 .stuff .Maybe_330_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam431 (   struct env427* env ,    struct Tuple2_322  dref1854 ) {
    return ( (  set324 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size229 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to418 (    struct Slice_11  src1851 ,    struct Slice_11  dest1853 ) {
    if ( (  cmp151 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic419 ) ( ( ( StrConcat_420_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env427 envinst427 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each426 ) ( ( (  zip333 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion428){ .fun = (  enum Unit_6  (*) (  struct env427*  ,    struct Tuple2_322  ) )lam431 , .env =  envinst427 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range393 (   struct env26* env ,    struct List_10 *  list2056 ,    size_t  from2058 ,    size_t  to_dash_excl2060 ) {
    if ( (  cmp151 ( (  to_dash_excl2060 ) , (  from2058 ) ) == 0 ) ) {
        ( (  panic394 ) ( ( ( StrConcat_395_StrConcat ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  from2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  to_dash_excl2060 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2061 = (  op_dash_sub270 ( (  to_dash_excl2060 ) , (  from2058 ) ) );
    struct env407 envinst407 = {
        .list2056 =  list2056 ,
        .num_dash_elems2061 =  num_dash_elems2061 ,
    };
    ( (  for_dash_each405 ) ( ( (  drop413 ) ( ( (  zip414 ) ( ( * (  list2056 ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add199 ( (  from2058 ) , (  num_dash_elems2061 ) ) ) ) ) ,  ( (struct envunion408){ .fun = (  enum Unit_6  (*) (  struct env407*  ,    struct Tuple2_322  ) )lam416 , .env =  envinst407 } ) ) );
    (*  list2056 ) .f_count = (  op_dash_sub270 ( ( ( * (  list2056 ) ) .f_count ) , (  num_dash_elems2061 ) ) );
    size_t  capacity2065 = ( ( ( * (  list2056 ) ) .f_elements ) .f_count );
    if ( (  cmp151 ( (  op_dash_mul212 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  capacity2065 ) ) == 0 ) ) {
        if ( (  eq206 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free334 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
            (*  list2056 ) .f_elements = ( (  empty251 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2066 = (  op_dash_mul212 ( (  op_dash_add199 ( (  op_dash_div178 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2032 ) ) );
        struct Slice_11  new_dash_slice2067 = ( (  allocate315 ) ( ( ( * (  list2056 ) ) .f_al ) ,  (  new_dash_size2066 ) ) );
        ( (  copy_dash_to418 ) ( ( (  subslice290 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  (  new_dash_slice2067 ) ) );
        ( (  free334 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
        (*  list2056 ) .f_elements = (  new_dash_slice2067 );
    }
    return ( Unit_6_Unit );
}

struct envunion433 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

static  enum Unit_6   trim434 (    struct List_10 *  l2109 ,    size_t  new_dash_count2111 ) {
    (*  l2109 ) .f_count = ( (  min293 ) ( (  new_dash_count2111 ) ,  ( ( * (  l2109 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   min435 (    int32_t  l1236 ,    int32_t  r1238 ) {
    if ( (  cmp389 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

struct envunion437 {
    int32_t  (*fun) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  );
    struct env66 env;
};

struct Maybe_439 {
    enum {
        Maybe_439_None_t,
        Maybe_439_Just_t,
    } tag;
    union {
        struct {
            struct Slice_11  field0;
        } Maybe_439_Just_s;
    } stuff;
};

static struct Maybe_439 Maybe_439_Just (  struct Slice_11  field0 ) {
    return ( struct Maybe_439 ) { .tag = Maybe_439_Just_t, .stuff = { .Maybe_439_Just_s = { .field0 = field0 } } };
};

static  struct Slice_11   or_dash_else438 (    struct Maybe_439  self1732 ,    struct Slice_11  alt1734 ) {
    struct Maybe_439  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_439_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_439_Just_t ) {
            return ( dref1735 .stuff .Maybe_439_Just_s .field0 );
        }
    }
}

static  struct Maybe_439   fmap_dash_maybe440 (    struct Maybe_149  x1275 ,    struct Slice_11 (*  fun1277 )(    struct List_10  ) ) {
    struct Maybe_149  dref1278 = (  x1275 );
    if ( dref1278.tag == Maybe_149_None_t ) {
        return ( (struct Maybe_439) { .tag = Maybe_439_None_t } );
    }
    else {
        if ( dref1278.tag == Maybe_149_Just_t ) {
            return ( ( Maybe_439_Just ) ( ( (  fun1277 ) ( ( dref1278 .stuff .Maybe_149_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct Maybe_149   try_dash_get441 (    struct List_7 *  list2010 ,    size_t  i2012 ) {
    if ( (  cmp151 ( (  i2012 ) , ( ( * (  list2010 ) ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_149) { .tag = Maybe_149_None_t } );
    }
    return ( ( Maybe_149_Just ) ( ( (  get287 ) ( (  list2010 ) ,  (  i2012 ) ) ) ) );
}

struct StrConcat_446 {
    struct StrView_20  field0;
    struct StrView_20  field1;
};

static struct StrConcat_446 StrConcat_446_StrConcat (  struct StrView_20  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_446 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_445 {
    struct StrConcat_446  field0;
    struct Char_47  field1;
};

static struct StrConcat_445 StrConcat_445_StrConcat (  struct StrConcat_446  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_445 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str447 (    struct StrConcat_446  self1503 ) {
    struct StrConcat_446  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str162 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str444 (    struct StrConcat_445  self1503 ) {
    struct StrConcat_445  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str447 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   assert443 (    bool  cond1718 ,    struct StrView_20  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str444 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string187 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct Drop_451 {
    struct Zip_231  field0;
    size_t  field1;
};

static struct Drop_451 Drop_451_Drop (  struct Zip_231  field0 ,  size_t  field1 ) {
    return ( struct Drop_451 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env452 {
    struct List_7 *  list2056;
    ;
    ;
    size_t  num_dash_elems2061;
    ;
};

struct envunion453 {
    enum Unit_6  (*fun) (  struct env452*  ,    struct Tuple2_215  );
    struct env452 env;
};

static  struct Drop_451   into_dash_iter455 (    struct Drop_451  self845 ) {
    return (  self845 );
}

static  struct Maybe_236   next456 (    struct Drop_451 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next237 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next237 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_6   for_dash_each450 (    struct Drop_451  iterable1074 ,   struct envunion453  fun1076 ) {
    struct Drop_451  temp454 = ( (  into_dash_iter455 ) ( (  iterable1074 ) ) );
    struct Drop_451 *  it1077 = ( &temp454 );
    while ( ( true ) ) {
        struct Maybe_236  dref1078 = ( (  next456 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_236_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_236_Just_t ) {
                struct envunion453  temp457 = (  fun1076 );
                ( temp457.fun ( &temp457.env ,  ( dref1078 .stuff .Maybe_236_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Drop_451   drop458 (    struct Zip_231  iterable852 ,    size_t  i854 ) {
    struct Zip_231  it855 = ( (  into_dash_iter235 ) ( (  iterable852 ) ) );
    return ( ( Drop_451_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

static  struct Slice_9   subslice461 (    struct Slice_9  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct List_10 *  begin_dash_ptr1787 = ( (  offset_dash_ptr196 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min293 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_9) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_232   into_dash_iter460 (    struct List_7  self2022 ) {
    return ( (  into_dash_iter244 ) ( ( (  subslice461 ) ( ( (  self2022 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2022 ) .f_count ) ) ) ) );
}

static  struct Zip_231   zip459 (    struct List_7  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_232  left_dash_it925 = ( (  into_dash_iter460 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_231) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam462 (   struct env452* env ,    struct Tuple2_215  dref2062 ) {
    return ( (  set295 ) ( ( env->list2056 ) ,  (  op_dash_sub270 ( ( (  i32_dash_size229 ) ( ( dref2062 .field1 ) ) ) , ( env->num_dash_elems2061 ) ) ) ,  ( dref2062 .field0 ) ) );
}

struct env465 {
    ;
    struct Slice_9  dest1853;
    ;
};

struct envunion466 {
    enum Unit_6  (*fun) (  struct env465*  ,    struct Tuple2_215  );
    struct env465 env;
};

static  enum Unit_6   for_dash_each464 (    struct Zip_231  iterable1074 ,   struct envunion466  fun1076 ) {
    struct Zip_231  temp467 = ( (  into_dash_iter235 ) ( (  iterable1074 ) ) );
    struct Zip_231 *  it1077 = ( &temp467 );
    while ( ( true ) ) {
        struct Maybe_236  dref1078 = ( (  next237 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_236_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_236_Just_t ) {
                struct envunion466  temp468 = (  fun1076 );
                ( temp468.fun ( &temp468.env ,  ( dref1078 .stuff .Maybe_236_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam469 (   struct env465* env ,    struct Tuple2_215  dref1854 ) {
    return ( (  set217 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size229 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to463 (    struct Slice_9  src1851 ,    struct Slice_9  dest1853 ) {
    if ( (  cmp151 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic419 ) ( ( ( StrConcat_420_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env465 envinst465 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each464 ) ( ( (  zip243 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion466){ .fun = (  enum Unit_6  (*) (  struct env465*  ,    struct Tuple2_215  ) )lam469 , .env =  envinst465 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   remove_dash_range449 (   struct env27* env ,    struct List_7 *  list2056 ,    size_t  from2058 ,    size_t  to_dash_excl2060 ) {
    if ( (  cmp151 ( (  to_dash_excl2060 ) , (  from2058 ) ) == 0 ) ) {
        ( (  panic394 ) ( ( ( StrConcat_395_StrConcat ) ( ( ( StrConcat_396_StrConcat ) ( ( ( StrConcat_397_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  from2058 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2058 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp151 ( (  to_dash_excl2060 ) , ( ( * (  list2056 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2060 ) ) ) ,  ( (  from_dash_string187 ) ( ( ") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2061 = (  op_dash_sub270 ( (  to_dash_excl2060 ) , (  from2058 ) ) );
    struct env452 envinst452 = {
        .list2056 =  list2056 ,
        .num_dash_elems2061 =  num_dash_elems2061 ,
    };
    ( (  for_dash_each450 ) ( ( (  drop458 ) ( ( (  zip459 ) ( ( * (  list2056 ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  op_dash_add199 ( (  from2058 ) , (  num_dash_elems2061 ) ) ) ) ) ,  ( (struct envunion453){ .fun = (  enum Unit_6  (*) (  struct env452*  ,    struct Tuple2_215  ) )lam462 , .env =  envinst452 } ) ) );
    (*  list2056 ) .f_count = (  op_dash_sub270 ( ( ( * (  list2056 ) ) .f_count ) , (  num_dash_elems2061 ) ) );
    size_t  capacity2065 = ( ( ( * (  list2056 ) ) .f_elements ) .f_count );
    if ( (  cmp151 ( (  op_dash_mul212 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  capacity2065 ) ) == 0 ) ) {
        if ( (  eq206 ( ( ( * (  list2056 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free247 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
            (*  list2056 ) .f_elements = ( (  empty135 ) ( ) );
            return ( Unit_6_Unit );
        }
        size_t  new_dash_size2066 = (  op_dash_mul212 ( (  op_dash_add199 ( (  op_dash_div178 ( ( ( * (  list2056 ) ) .f_count ) , ( env->shrink_dash_factor2032 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2032 ) ) );
        struct Slice_9  new_dash_slice2067 = ( (  allocate207 ) ( ( ( * (  list2056 ) ) .f_al ) ,  (  new_dash_size2066 ) ) );
        ( (  copy_dash_to463 ) ( ( (  subslice461 ) ( ( ( * (  list2056 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2056 ) ) .f_count ) ) ) ,  (  new_dash_slice2067 ) ) );
        ( (  free247 ) ( ( ( * (  list2056 ) ) .f_al ) ,  ( ( * (  list2056 ) ) .f_elements ) ) );
        (*  list2056 ) .f_elements = (  new_dash_slice2067 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   change_dash_no_dash_action280 (   struct env70* env ,    struct TextBuf_75 *  self3620 ,    struct Pos_19  from3622 ,    struct Pos_19  to3624 ,    struct StrView_20  bytes3626 ) {
    if ( (  eq281 ( (  to3624 ) , (  from3622 ) ) ) ) {
        enum CAllocator_8  al3627 = ( ( ( * (  self3620 ) ) .f_buf ) .f_al );
        if ( ( (  eq206 ( ( (  size283 ) ( ( & ( ( * (  self3620 ) ) .f_buf ) ) ) ) , ( (  i32_dash_size229 ) ( ( (  from3622 ) .f_line ) ) ) ) ) && (  eq282 ( ( (  from3622 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) ) {
            struct envunion73  temp284 = ( (struct envunion73){ .fun = (  enum Unit_6  (*) (  struct env4*  ,    struct List_7 *  ,    struct List_10  ) )add203 , .env =  env->envinst4 } );
            ( temp284.fun ( &temp284.env ,  ( & ( ( * (  self3620 ) ) .f_buf ) ) ,  ( (  mk250 ) ( (  al3627 ) ) ) ) );
        }
        struct envunion74  temp285 = ( (struct envunion74){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot286 , .env =  env->envinst66 } );
        ( temp285.fun ( &temp285.env ,  (  self3620 ) ,  (  from3622 ) ,  (  bytes3626 ) ) );
    } else {
        struct Pos_19  from3628 = ( (  min387 ) ( (  from3622 ) ,  (  to3624 ) ) );
        struct Pos_19  to3629 = ( (  max390 ) ( (  from3628 ) ,  (  to3624 ) ) );
        struct List_7 *  lines_dash_buf3630 = ( & ( ( * (  self3620 ) ) .f_buf ) );
        struct List_10 *  first_dash_line3631 = ( (  get_dash_ptr288 ) ( (  lines_dash_buf3630 ) ,  ( (  i32_dash_size229 ) ( ( (  from3628 ) .f_line ) ) ) ) );
        if ( ( (  eq282 ( ( (  from3628 ) .f_line ) , ( (  to3629 ) .f_line ) ) ) && (  cmp389 ( ( (  to3629 ) .f_bi ) , (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size391 ) ( (  first_dash_line3631 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) == 0 ) ) ) {
            struct envunion71  temp392 = ( (struct envunion71){ .fun = (  enum Unit_6  (*) (  struct env26*  ,    struct List_10 *  ,    size_t  ,    size_t  ) )remove_dash_range393 , .env =  env->envinst26 } );
            ( temp392.fun ( &temp392.env ,  (  first_dash_line3631 ) ,  ( (  i32_dash_size229 ) ( ( (  from3628 ) .f_bi ) ) ) ,  ( (  i32_dash_size229 ) ( ( (  to3629 ) .f_bi ) ) ) ) );
            struct envunion433  temp432 = ( (struct envunion433){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot286 , .env =  env->envinst66 } );
            ( temp432.fun ( &temp432.env ,  (  self3620 ) ,  (  from3628 ) ,  (  bytes3626 ) ) );
        } else {
            ( (  trim434 ) ( (  first_dash_line3631 ) ,  ( (  i32_dash_size229 ) ( ( (  from3628 ) .f_bi ) ) ) ) );
            struct List_10 *  last_dash_line3632 = ( (  get_dash_ptr288 ) ( (  lines_dash_buf3630 ) ,  ( (  i32_dash_size229 ) ( ( (  to3629 ) .f_line ) ) ) ) );
            to3629 .f_bi = ( (  min435 ) ( ( (  to3629 ) .f_bi ) ,  (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size391 ) ( (  last_dash_line3632 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            if ( (  eq282 ( ( (  to3629 ) .f_bi ) , (  op_dash_add241 ( ( (  size_dash_i32163 ) ( ( (  size391 ) ( (  last_dash_line3632 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
                to3629 .f_line = (  op_dash_add241 ( ( (  to3629 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) );
                to3629 .f_bi = (  from_dash_integral38 ( 0 ) );
            }
            struct envunion437  temp436 = ( (struct envunion437){ .fun = (  int32_t  (*) (  struct env66*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct StrView_20  ) )add_dash_to_dash_spot286 , .env =  env->envinst66 } );
            int32_t  lines_dash_added3633 = ( temp436.fun ( &temp436.env ,  (  self3620 ) ,  (  from3628 ) ,  (  bytes3626 ) ) );
            to3629 .f_line = (  op_dash_add241 ( ( (  to3629 ) .f_line ) , (  lines_dash_added3633 ) ) );
            from3628 .f_line = (  op_dash_add241 ( ( (  from3628 ) .f_line ) , (  lines_dash_added3633 ) ) );
            struct Slice_11  last_dash_line3634 = ( (  or_dash_else438 ) ( ( (  fmap_dash_maybe440 ) ( ( (  try_dash_get441 ) ( (  lines_dash_buf3630 ) ,  ( (  i32_dash_size229 ) ( ( (  to3629 ) .f_line ) ) ) ) ) ,  (  to_dash_slice294 ) ) ) ,  ( (  empty251 ) ( ) ) ) );
            struct envunion77  temp442 = ( (struct envunion77){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
            ( temp442.fun ( &temp442.env ,  (  first_dash_line3631 ) ,  ( (  from289 ) ( (  last_dash_line3634 ) ,  ( (  i32_dash_size229 ) ( ( (  to3629 ) .f_bi ) ) ) ) ) ) );
            ( (  assert443 ) ( (  cmp389 ( ( (  to3629 ) .f_line ) , ( (  from3628 ) .f_line ) ) == 2 ) ,  ( (  from_dash_string187 ) ( ( "there must be a line difference yo" ) ,  ( 34 ) ) ) ) );
            struct envunion72  temp448 = ( (struct envunion72){ .fun = (  enum Unit_6  (*) (  struct env27*  ,    struct List_7 *  ,    size_t  ,    size_t  ) )remove_dash_range449 , .env =  env->envinst27 } );
            ( temp448.fun ( &temp448.env ,  ( & ( ( * (  self3620 ) ) .f_buf ) ) ,  ( (  i32_dash_size229 ) ( (  op_dash_add241 ( ( (  from3628 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  op_dash_add199 ( ( (  i32_dash_size229 ) ( ( (  to3629 ) .f_line ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   mk470 (    int32_t  line3552 ,    int32_t  bi3554 ) {
    return ( (struct Pos_19) { .f_line = (  line3552 ) , .f_bi = (  bi3554 ) } );
}

struct StrConcat_474 {
    struct StrView_20  field0;
    const char*  field1;
};

static struct StrConcat_474 StrConcat_474_StrConcat (  struct StrView_20  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_474 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_473 {
    struct StrConcat_474  field0;
    struct Char_47  field1;
};

static struct StrConcat_473 StrConcat_473_StrConcat (  struct StrConcat_474  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_473 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_478 {
    struct StrView_20  field0;
    struct StrConcat_473  field1;
};

static struct StrConcat_478 StrConcat_478_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_473  field1 ) {
    return ( struct StrConcat_478 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_477 {
    struct StrConcat_478  field0;
    struct Char_47  field1;
};

static struct StrConcat_477 StrConcat_477_StrConcat (  struct StrConcat_478  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_477 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str482 (    const char*  self1398 ) {
    ( ( printf ) ( ( (  from_dash_string39 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1398 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str481 (    struct StrConcat_474  self1503 ) {
    struct StrConcat_474  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str482 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str480 (    struct StrConcat_473  self1503 ) {
    struct StrConcat_473  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str481 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str479 (    struct StrConcat_478  self1503 ) {
    struct StrConcat_478  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str480 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str476 (    struct StrConcat_477  self1503 ) {
    struct StrConcat_477  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str479 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic475 (    struct StrConcat_473  errmsg1712 ) {
    ( (  print_dash_str476 ) ( ( ( StrConcat_477_StrConcat ) ( ( ( StrConcat_478_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   undefined483 (  ) {
    struct StrView_20  temp484;
    return (  temp484 );
}

static  struct StrView_20   or_dash_fail472 (    struct Maybe_113  x1725 ,    struct StrConcat_473  errmsg1727 ) {
    struct Maybe_113  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_113_None_t ) {
        ( (  panic475 ) ( (  errmsg1727 ) ) );
        return ( (  undefined483 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_113_Just_t ) {
            return ( dref1728 .stuff .Maybe_113_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike486 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr491 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of492 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed489 (  ) {
    FILE *  temp490;
    FILE *  x570 = (  temp490 );
    ( ( memset ) ( ( (  cast_dash_ptr491 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of492 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  FILE *   null_dash_ptr488 (  ) {
    return ( (  zeroed489 ) ( ) );
}

static  bool   is_dash_ptr_dash_null487 (    FILE *  p580 ) {
    return ( (  p580 ) == ( (  null_dash_ptr488 ) ( ) ) );
}

static  int32_t   seek_dash_end493 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  int32_t   seek_dash_set494 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct Char_47   nullchar495 (  ) {
    return ( (  from_dash_charlike188 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_113   try_dash_read_dash_contents485 (    const char*  filename2907 ,    enum CAllocator_8  al2909 ) {
    FILE *  file2910 = ( ( fopen ) ( (  filename2907 ) ,  ( (  from_dash_charlike486 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null487 ) ( (  file2910 ) ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    ( ( fseek ) ( (  file2910 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_end493 ) ( ) ) ) );
    int32_t  file_dash_size2911 = ( ( ftell ) ( (  file2910 ) ) );
    ( ( fseek ) ( (  file2910 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  seek_dash_set494 ) ( ) ) ) );
    struct Slice_11  file_dash_buf2912 = ( ( (  allocate315 ) ( (  al2909 ) ,  (  op_dash_add199 ( ( (  i32_dash_size229 ) ( (  file_dash_size2911 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2912 ) .f_ptr ) ,  (  file_dash_size2911 ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  file2910 ) ) );
    ( (  set324 ) ( (  file_dash_buf2912 ) ,  ( (  i32_dash_size229 ) ( (  file_dash_size2911 ) ) ) ,  ( (  char_dash_u8347 ) ( ( (  nullchar495 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2910 ) ) );
    struct StrView_20  str2913 = ( (struct StrView_20) { .f_contents = ( (  subslice290 ) ( (  file_dash_buf2912 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub270 ( ( (  file_dash_buf2912 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_113_Just ) ( (  str2913 ) ) );
}

static  struct StrView_20   read_dash_contents471 (    const char*  filename2916 ,    enum CAllocator_8  al2918 ) {
    return ( (  or_dash_fail472 ) ( ( (  try_dash_read_dash_contents485 ) ( (  filename2916 ) ,  (  al2918 ) ) ) ,  ( ( StrConcat_473_StrConcat ) ( ( ( StrConcat_474_StrConcat ) ( ( (  from_dash_string187 ) ( ( "could not open file " ) ,  ( 20 ) ) ) ,  (  filename2916 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Pane_110   mk497 (    enum CAllocator_8  al3736 ,    struct TextBuf_75 *  buf3738 ) {
    return ( (struct Pane_110) { .f_buf = (  buf3738 ) , .f_cursor = ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) , .f_vi = (  from_dash_integral38 ( 0 ) ) , .f_sel = ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) , .f_mode = ( Mode_111_Normal ) , .f_sc_dash_off = ( (struct ScreenCursorOffset_112) { .f_screen_dash_top = (  from_dash_integral38 ( 0 ) ) , .f_screen_dash_left = (  from_dash_integral38 ( 0 ) ) } ) } );
}

struct envunion500 {
    struct Tui_58  (*fun) (  struct env54*  );
    struct env54 env;
};

static  struct Termios_60   undefined504 (  ) {
    struct Termios_60  temp505;
    return (  temp505 );
}

static  int32_t   stdin_dash_fileno506 (  ) {
    return (  from_dash_integral38 ( 0 ) );
}

static  struct termios *   cast_dash_ptr507 (    struct Termios_60 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and508 (    uint32_t  l2806 ,    uint32_t  r2808 ) {
    return ( (  l2806 ) & (  r2808 ) );
}

static  uint32_t   u32_dash_neg509 (    uint32_t  l2811 ) {
    return ( ~ (  l2811 ) );
}

struct Array_511 {
    uint32_t _arr [4];
};

struct ArrayIter_513 {
    struct Array_511  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_513   into_dash_iter514 (    struct Array_511  self2310 ) {
    return ( (struct ArrayIter_513) { .f_backing = (  self2310 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_515 {
    enum {
        Maybe_515_None_t,
        Maybe_515_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_515_Just_s;
    } stuff;
};

static struct Maybe_515 Maybe_515_Just (  uint32_t  field0 ) {
    return ( struct Maybe_515 ) { .tag = Maybe_515_Just_t, .stuff = { .Maybe_515_Just_s = { .field0 = field0 } } };
};

static  uint32_t *   cast_dash_ptr519 (    struct Array_511 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr520 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp521;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp521 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr518 (    struct Array_511 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2242 = ( ( (  cast_dash_ptr519 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr520 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  uint32_t   get517 (    struct Array_511 *  arr2245 ,    size_t  i2248 ) {
    return ( * ( (  get_dash_ptr518 ) ( (  arr2245 ) ,  (  i2248 ) ) ) );
}

static  struct Maybe_515   next516 (    struct ArrayIter_513 *  self2317 ) {
    if ( (  cmp151 ( ( ( * (  self2317 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_515) { .tag = Maybe_515_None_t } );
    }
    uint32_t  e2319 = ( (  get517 ) ( ( & ( ( * (  self2317 ) ) .f_backing ) ) ,  ( ( * (  self2317 ) ) .f_cur ) ) );
    (*  self2317 ) .f_cur = (  op_dash_add199 ( ( ( * (  self2317 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_515_Just ) ( (  e2319 ) ) );
}

static  uint32_t   reduce512 (    struct Array_511  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_513  it1099 = ( (  into_dash_iter514 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_515  dref1100 = ( (  next516 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_515_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_515_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_515_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp522 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp522);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp523;
    return (  temp523 );
}

static  uint32_t   u32_dash_or524 (    uint32_t  l2798 ,    uint32_t  r2800 ) {
    return ( (  l2798 ) | (  r2800 ) );
}

static  uint32_t   u32_dash_ors510 (    struct Array_511  vals2803 ) {
    return ( (  reduce512 ) ( (  vals2803 ) ,  (  from_dash_integral183 ( 0 ) ) ,  (  u32_dash_or524 ) ) );
}

static  struct Array_511   from_dash_listlike525 (    struct Array_511  self330 ) {
    return (  self330 );
}

static  uint32_t   echo526 (  ) {
    return (  from_dash_integral183 ( 8 ) );
}

static  uint32_t   icanon527 (  ) {
    return (  from_dash_integral183 ( 2 ) );
}

static  uint32_t   isig528 (  ) {
    return (  from_dash_integral183 ( 1 ) );
}

static  uint32_t   iexten529 (  ) {
    return (  from_dash_integral183 ( 32768 ) );
}

struct Array_531 {
    uint32_t _arr [5];
};

struct ArrayIter_533 {
    struct Array_531  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_533   into_dash_iter534 (    struct Array_531  self2310 ) {
    return ( (struct ArrayIter_533) { .f_backing = (  self2310 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr538 (    struct Array_531 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr537 (    struct Array_531 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2242 = ( ( (  cast_dash_ptr538 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr520 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  uint32_t   get536 (    struct Array_531 *  arr2245 ,    size_t  i2248 ) {
    return ( * ( (  get_dash_ptr537 ) ( (  arr2245 ) ,  (  i2248 ) ) ) );
}

static  struct Maybe_515   next535 (    struct ArrayIter_533 *  self2317 ) {
    if ( (  cmp151 ( ( ( * (  self2317 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_515) { .tag = Maybe_515_None_t } );
    }
    uint32_t  e2319 = ( (  get536 ) ( ( & ( ( * (  self2317 ) ) .f_backing ) ) ,  ( ( * (  self2317 ) ) .f_cur ) ) );
    (*  self2317 ) .f_cur = (  op_dash_add199 ( ( ( * (  self2317 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_515_Just ) ( (  e2319 ) ) );
}

static  uint32_t   reduce532 (    struct Array_531  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_533  it1099 = ( (  into_dash_iter534 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_515  dref1100 = ( (  next535 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_515_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_515_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_515_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp539 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp539);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp540;
    return (  temp540 );
}

static  uint32_t   u32_dash_ors530 (    struct Array_531  vals2803 ) {
    return ( (  reduce532 ) ( (  vals2803 ) ,  (  from_dash_integral183 ( 0 ) ) ,  (  u32_dash_or524 ) ) );
}

static  struct Array_531   from_dash_listlike541 (    struct Array_531  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint542 (  ) {
    return (  from_dash_integral183 ( 2 ) );
}

static  uint32_t   icrnl543 (  ) {
    return (  from_dash_integral183 ( 256 ) );
}

static  uint32_t   inpck544 (  ) {
    return (  from_dash_integral183 ( 16 ) );
}

static  uint32_t   istrip545 (  ) {
    return (  from_dash_integral183 ( 32 ) );
}

static  uint32_t   ixon546 (  ) {
    return (  from_dash_integral183 ( 1024 ) );
}

struct Array_548 {
    uint32_t _arr [1];
};

struct ArrayIter_550 {
    struct Array_548  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_550   into_dash_iter551 (    struct Array_548  self2310 ) {
    return ( (struct ArrayIter_550) { .f_backing = (  self2310 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr555 (    struct Array_548 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr554 (    struct Array_548 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2242 = ( ( (  cast_dash_ptr555 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr520 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  uint32_t   get553 (    struct Array_548 *  arr2245 ,    size_t  i2248 ) {
    return ( * ( (  get_dash_ptr554 ) ( (  arr2245 ) ,  (  i2248 ) ) ) );
}

static  struct Maybe_515   next552 (    struct ArrayIter_550 *  self2317 ) {
    if ( (  cmp151 ( ( ( * (  self2317 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_515) { .tag = Maybe_515_None_t } );
    }
    uint32_t  e2319 = ( (  get553 ) ( ( & ( ( * (  self2317 ) ) .f_backing ) ) ,  ( ( * (  self2317 ) ) .f_cur ) ) );
    (*  self2317 ) .f_cur = (  op_dash_add199 ( ( ( * (  self2317 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_515_Just ) ( (  e2319 ) ) );
}

static  uint32_t   reduce549 (    struct Array_548  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct ArrayIter_550  it1099 = ( (  into_dash_iter551 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_515  dref1100 = ( (  next552 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_515_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_515_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_515_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp556 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp556);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp557;
    return (  temp557 );
}

static  uint32_t   u32_dash_ors547 (    struct Array_548  vals2803 ) {
    return ( (  reduce549 ) ( (  vals2803 ) ,  (  from_dash_integral183 ( 0 ) ) ,  (  u32_dash_or524 ) ) );
}

static  struct Array_548   from_dash_listlike558 (    struct Array_548  self330 ) {
    return (  self330 );
}

static  uint32_t   opost559 (  ) {
    return (  from_dash_integral183 ( 1 ) );
}

static  uint32_t   cs8560 (  ) {
    return (  from_dash_integral183 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr563 (    struct Array_61 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr562 (    struct Array_61 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2242 = ( ( (  cast_dash_ptr563 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr291 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  enum Unit_6   set561 (    struct Array_61 *  arr2251 ,    size_t  i2254 ,    uint8_t  e2256 ) {
    uint8_t *  p2257 = ( (  get_dash_ptr562 ) ( (  arr2251 ) ,  (  i2254 ) ) );
    (*  p2257 ) = (  e2256 );
    return ( Unit_6_Unit );
}

static  size_t   vmin564 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime565 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush566 (  ) {
    return (  from_dash_integral38 ( 2 ) );
}

static  struct Termios_60   enable_dash_raw_dash_mode502 (  ) {
    struct Termios_60  temp503 = ( (  undefined504 ) ( ) );
    struct Termios_60 *  orig_dash_termios3265 = ( &temp503 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  cast_dash_ptr507 ) ( (  orig_dash_termios3265 ) ) ) ) );
    struct Termios_60  raw3266 = ( * (  orig_dash_termios3265 ) );
    raw3266 .f_c_dash_lflag = ( (  u32_dash_and508 ) ( ( (  raw3266 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg509 ) ( ( (  u32_dash_ors510 ) ( ( (  from_dash_listlike525 ) ( ( (struct Array_511) { ._arr = { ( (  echo526 ) ( ) ) , ( (  icanon527 ) ( ) ) , ( (  isig528 ) ( ) ) , ( ( (  iexten529 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3266 .f_c_dash_iflag = ( (  u32_dash_and508 ) ( ( (  raw3266 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg509 ) ( ( (  u32_dash_ors530 ) ( ( (  from_dash_listlike541 ) ( ( (struct Array_531) { ._arr = { ( (  brkint542 ) ( ) ) , ( (  icrnl543 ) ( ) ) , ( (  inpck544 ) ( ) ) , ( (  istrip545 ) ( ) ) , ( ( (  ixon546 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3266 .f_c_dash_oflag = ( (  u32_dash_and508 ) ( ( (  raw3266 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg509 ) ( ( (  u32_dash_ors547 ) ( ( (  from_dash_listlike558 ) ( ( (struct Array_548) { ._arr = { ( ( (  opost559 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3266 .f_c_dash_cflag = ( (  u32_dash_or524 ) ( ( (  raw3266 ) .f_c_dash_cflag ) ,  ( (  cs8560 ) ( ) ) ) );
    ( (  set561 ) ( ( & ( (  raw3266 ) .f_c_dash_cc ) ) ,  ( (  vmin564 ) ( ) ) ,  (  from_dash_integral179 ( 0 ) ) ) );
    ( (  set561 ) ( ( & ( (  raw3266 ) .f_c_dash_cc ) ) ,  ( (  vtime565 ) ( ) ) ,  (  from_dash_integral179 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  tcsa_dash_flush566 ) ( ) ) ,  ( (  cast_dash_ptr507 ) ( ( & (  raw3266 ) ) ) ) ) );
    return ( * (  orig_dash_termios3265 ) );
}

struct StrViewIter_570 {
    struct StrView_20  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_570   into_dash_iter572 (    struct StrViewIter_570  self1371 ) {
    return (  self1371 );
}

struct Maybe_573 {
    enum {
        Maybe_573_None_t,
        Maybe_573_Just_t,
    } tag;
    union {
        struct {
            struct Char_47  field0;
        } Maybe_573_Just_s;
    } stuff;
};

static struct Maybe_573 Maybe_573_Just (  struct Char_47  field0 ) {
    return ( struct Maybe_573 ) { .tag = Maybe_573_Just_t, .stuff = { .Maybe_573_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_573   next574 (    struct StrViewIter_570 *  self1374 ) {
    if ( (  cmp151 ( ( ( * (  self1374 ) ) .f_i ) , ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    uint8_t *  char_dash_ptr1375 = ( ( (  offset_dash_ptr291 ) ( ( (  cast189 ) ( ( ( ( ( * (  self1374 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64228 ) ( ( ( * (  self1374 ) ) .f_i ) ) ) ) ) );
    struct Char_47  char1376 = ( (  scan_dash_from_dash_mem190 ) ( (  char_dash_ptr1375 ) ) );
    (*  self1374 ) .f_i = (  op_dash_add199 ( ( ( * (  self1374 ) ) .f_i ) , ( (  char1376 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_573_Just ) ( (  char1376 ) ) );
}

static  enum Unit_6   for_dash_each569 (    struct StrViewIter_570  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrViewIter_570  temp571 = ( (  into_dash_iter572 ) ( (  iterable1074 ) ) );
    struct StrViewIter_570 *  it1077 = ( &temp571 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next574 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrViewIter_570   into_dash_iter576 (    struct StrView_20  self1368 ) {
    return ( (struct StrViewIter_570) { .f_ds = (  self1368 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_570   chars575 (    struct StrView_20  self1382 ) {
    return ( (  into_dash_iter576 ) ( (  self1382 ) ) );
}

static  enum Unit_6   print568 (    struct StrView_20  s2551 ) {
    ( (  for_dash_each569 ) ( ( (  chars575 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   hide_dash_cursor567 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_colors577 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   clear_dash_screen578 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   enable_dash_mouse579 (  ) {
    ( (  print_dash_str162 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   flush_dash_stdout580 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr488 ) ( ) ) ) );
    return ( Unit_6_Unit );
}

static  bool   ptr_dash_eq584 (    enum Unit_6 *  l586 ,    enum Unit_6 *  r588 ) {
    return ( (  l586 ) == (  r588 ) );
}

static  enum Unit_6 *   cast585 (    const char*  x356 ) {
    return ( (enum Unit_6 * ) (  x356 ) );
}

static  void *   cast_dash_ptr589 (    enum Unit_6 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of590 (    enum Unit_6 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_6 *   zeroed587 (  ) {
    enum Unit_6 *  temp588;
    enum Unit_6 *  x570 = (  temp588 );
    ( ( memset ) ( ( (  cast_dash_ptr589 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of590 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  enum Unit_6 *   null_dash_ptr586 (  ) {
    return ( (  zeroed587 ) ( ) );
}

static  struct Maybe_274   from_dash_nullable_dash_c_dash_str583 (    const char*  s591 ) {
    if ( ( (  ptr_dash_eq584 ) ( ( (  cast585 ) ( (  s591 ) ) ) ,  ( ( (  null_dash_ptr586 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_274) { .tag = Maybe_274_None_t } );
    } else {
        return ( ( Maybe_274_Just ) ( (  s591 ) ) );
    }
}

static  struct Maybe_274   get582 (    const char*  s2584 ) {
    return ( (  from_dash_nullable_dash_c_dash_str583 ) ( ( ( getenv ) ( (  s2584 ) ) ) ) );
}

static  bool   eq591 (    const char*  l1691 ,    const char*  r1693 ) {
    return (  eq282 ( ( ( strcmp ) ( (  l1691 ) ,  (  r1693 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) );
}

static  enum ColorPalette_59   query_dash_palette581 (  ) {
    struct Maybe_274  colorterm2585 = ( (  get582 ) ( ( (  from_dash_string39 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_274  dref2586 = (  colorterm2585 );
    if ( dref2586.tag == Maybe_274_Just_t ) {
        if ( ( (  eq591 ( ( dref2586 .stuff .Maybe_274_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq591 ( ( dref2586 .stuff .Maybe_274_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_59_PaletteRGB );
        }
    }
    else {
        if ( dref2586.tag == Maybe_274_None_t ) {
        }
    }
    struct Maybe_274  dref2588 = ( (  get582 ) ( ( (  from_dash_string39 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2588.tag == Maybe_274_Just_t ) {
        if ( (  eq591 ( ( dref2588 .stuff .Maybe_274_Just_s .field0 ) , ( (  from_dash_string39 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_59_Palette8 );
        }
    }
    else {
        if ( dref2588.tag == Maybe_274_None_t ) {
        }
    }
    return ( ColorPalette_59_Palette16 );
}

struct Tuple2_592 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_592 Tuple2_592_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_592 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_594 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr598 (    struct Winsize_594 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of599 (    struct Winsize_594  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_594   zeroed596 (  ) {
    struct Winsize_594  temp597;
    struct Winsize_594  x570 = (  temp597 );
    ( ( memset ) ( ( (  cast_dash_ptr598 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of599 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  int32_t   stdout_dash_fileno600 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  uint64_t   from_dash_integral602 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz601 (  ) {
    return (  from_dash_integral602 ( 21523 ) );
}

static  int32_t   op_dash_neg603 (    int32_t  x227 ) {
    return ( (  from_dash_integral38 ( 0 ) ) - (  x227 ) );
}

static  bool   eq604 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral605 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr611 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of612 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed609 (  ) {
    uint32_t  temp610;
    uint32_t  x570 = (  temp610 );
    ( ( memset ) ( ( (  cast_dash_ptr611 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of612 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint16_t *   cast613 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed607 (    uint16_t  x573 ) {
    uint32_t  temp608 = ( (  zeroed609 ) ( ) );
    uint32_t *  y574 = ( &temp608 );
    uint16_t *  yp575 = ( (  cast613 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u16_dash_u32606 (    uint16_t  x645 ) {
    return ( (  cast_dash_on_dash_zeroed607 ) ( (  x645 ) ) );
}

static  struct Tuple2_592   get_dash_dimensions593 (  ) {
    struct Winsize_594  temp595 = ( ( (  zeroed596 ) ( ) ) );
    struct Winsize_594 *  ws2573 = ( &temp595 );
    if ( ( (  eq282 ( ( ( ioctl ) ( ( (  stdout_dash_fileno600 ) ( ) ) ,  ( (  tiocgwinsz601 ) ( ) ) ,  (  ws2573 ) ) ) , (  op_dash_neg603 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) || (  eq604 ( ( ( * (  ws2573 ) ) .f_ws_dash_col ) , (  from_dash_integral605 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_592_Tuple2 ) ( (  from_dash_integral183 ( 80 ) ) ,  (  from_dash_integral183 ( 24 ) ) ) );
    }
    return ( ( Tuple2_592_Tuple2 ) ( ( (  u16_dash_u32606 ) ( ( ( * (  ws2573 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32606 ) ( ( ( * (  ws2573 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined616 (  ) {
    struct timespec  temp617;
    return (  temp617 );
}

static  int32_t   clock_dash_monotonic618 (  ) {
    return (  from_dash_integral38 ( 1 ) );
}

static  struct timespec   now614 (  ) {
    struct timespec  temp615 = ( (  undefined616 ) ( ) );
    struct timespec *  t3227 = ( &temp615 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic618 ) ( ) ) ,  (  t3227 ) ) );
    return ( * (  t3227 ) );
}

struct env619 {
    bool *  should_dash_resize3279;
};

struct envunion620 {
    enum Unit_6  (*fun) (  struct env619*  ,    int32_t  );
    struct env619 env;
};

struct envunion620  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig621 ) {
    struct envunion620  temp622 = _intr_sigarr [  __intr__sig621 ];
    temp622.fun ( &temp622.env ,  __intr__sig621 );
}

static  enum Unit_6  _intr_register_signal (    int32_t  __intr__sig623 ,   struct envunion620  __intr__fun624 ) {
    _intr_sigarr [  __intr__sig623 ] =  __intr__fun624;
    signal(  __intr__sig623 , _intr_sighandle );
    return Unit_6_Unit;
}

static  enum Unit_6   lam625 (   struct env619* env ,    int32_t  dref3286 ) {
    (* env->should_dash_resize3279 ) = ( true );
    return ( Unit_6_Unit );
}

static  uint32_t   fst626 (    struct Tuple2_592  dref1253 ) {
    return ( dref1253 .field0 );
}

static  uint32_t   snd627 (    struct Tuple2_592  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tui_58   mk501 (   struct env54* env ) {
    struct Termios_60  og_dash_termios3281 = ( (  enable_dash_raw_dash_mode502 ) ( ) );
    ( (  hide_dash_cursor567 ) ( ) );
    ( (  reset_dash_colors577 ) ( ) );
    ( (  clear_dash_screen578 ) ( ) );
    ( (  enable_dash_mouse579 ) ( ) );
    ( (  flush_dash_stdout580 ) ( ) );
    enum ColorPalette_59  palette3282 = ( (  query_dash_palette581 ) ( ) );
    struct Tuple2_592  dims3283 = ( (  get_dash_dimensions593 ) ( ) );
    uint32_t  fps3284 = (  from_dash_integral183 ( 60 ) );
    struct timespec  last_dash_sync3285 = ( (  now614 ) ( ) );
    struct env619 envinst619 = {
        .should_dash_resize3279 = env->should_dash_resize3279 ,
    };
    ( _intr_register_signal ( (  from_dash_integral38 ( 28 ) ) , ( (struct envunion620){ .fun = (  enum Unit_6  (*) (  struct env619*  ,    int32_t  ) )lam625 , .env =  envinst619 } ) ) );
    return ( (struct Tui_58) { .f_width = ( (  fst626 ) ( (  dims3283 ) ) ) , .f_height = ( (  snd627 ) ( (  dims3283 ) ) ) , .f_target_dash_fps = (  fps3284 ) , .f_actual_dash_fps = (  from_dash_integral183 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3285 ) , .f_fps_dash_ts = (  last_dash_sync3285 ) , .f_fps_dash_count = (  from_dash_integral183 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3281 ) , .f_palette = (  palette3282 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_632 {
    Color8_632_Black8,
    Color8_632_Red8,
    Color8_632_Green8,
    Color8_632_Yellow8,
    Color8_632_Blue8,
    Color8_632_Magenta8,
    Color8_632_Cyan8,
    Color8_632_White8,
};

enum Color16_633 {
    Color16_633_Black16,
    Color16_633_Red16,
    Color16_633_Green16,
    Color16_633_Yellow16,
    Color16_633_Blue16,
    Color16_633_Magenta16,
    Color16_633_Cyan16,
    Color16_633_White16,
    Color16_633_BrightBlack16,
    Color16_633_BrightRed16,
    Color16_633_BrightGreen16,
    Color16_633_BrightYellow16,
    Color16_633_BrightBlue16,
    Color16_633_BrightMagenta16,
    Color16_633_BrightCyan16,
    Color16_633_BrightWhite16,
};

struct RGB_634 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_631 {
    enum {
        Color_631_ColorDefault_t,
        Color_631_Color8_t,
        Color_631_Color16_t,
        Color_631_Color256_t,
        Color_631_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_632  field0;
        } Color_631_Color8_s;
        struct {
            enum Color16_633  field0;
        } Color_631_Color16_s;
        struct {
            uint8_t  field0;
        } Color_631_Color256_s;
        struct {
            struct RGB_634  field0;
        } Color_631_ColorRGB_s;
    } stuff;
};

static struct Color_631 Color_631_Color8 (  enum Color8_632  field0 ) {
    return ( struct Color_631 ) { .tag = Color_631_Color8_t, .stuff = { .Color_631_Color8_s = { .field0 = field0 } } };
};

static struct Color_631 Color_631_Color16 (  enum Color16_633  field0 ) {
    return ( struct Color_631 ) { .tag = Color_631_Color16_t, .stuff = { .Color_631_Color16_s = { .field0 = field0 } } };
};

static struct Color_631 Color_631_Color256 (  uint8_t  field0 ) {
    return ( struct Color_631 ) { .tag = Color_631_Color256_t, .stuff = { .Color_631_Color256_s = { .field0 = field0 } } };
};

static struct Color_631 Color_631_ColorRGB (  struct RGB_634  field0 ) {
    return ( struct Color_631 ) { .tag = Color_631_ColorRGB_t, .stuff = { .Color_631_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_630 {
    struct Char_47  f_c;
    struct Color_631  f_fg;
    struct Color_631  f_bg;
    int32_t  f_char_dash_width;
};

struct Slice_629 {
    struct Cell_630 *  f_ptr;
    size_t  f_count;
};

struct Screen_628 {
    enum CAllocator_8  f_al;
    struct Tui_58 *  f_tui;
    struct Slice_629  f_current;
    struct Slice_629  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_631  f_default_dash_fg;
    struct Color_631  f_default_dash_bg;
};

struct TypeSize_639 {
    size_t  f_size;
};

static  struct TypeSize_639   get_dash_typesize638 (  ) {
    struct Cell_630  temp640;
    return ( (struct TypeSize_639) { .f_size = ( sizeof( ( (  temp640 ) ) ) ) } );
}

static  struct Cell_630 *   cast_dash_ptr641 (    void *  p359 ) {
    return ( (struct Cell_630 * ) (  p359 ) );
}

static  struct Slice_629   allocate637 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize638 ) ( ) ) ) .f_size );
    struct Cell_630 *  ptr1951 = ( (  cast_dash_ptr641 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_629) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

static  void *   cast_dash_ptr647 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of648 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed645 (  ) {
    size_t  temp646;
    size_t  x570 = (  temp646 );
    ( ( memset ) ( ( (  cast_dash_ptr647 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of648 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint32_t *   cast649 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed643 (    uint32_t  x573 ) {
    size_t  temp644 = ( (  zeroed645 ) ( ) );
    size_t *  y574 = ( &temp644 );
    uint32_t *  yp575 = ( (  cast649 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u32_dash_size642 (    uint32_t  x651 ) {
    return ( (  cast_dash_on_dash_zeroed643 ) ( (  x651 ) ) );
}

static  uint32_t   op_dash_mul650 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct Range_653 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_653 Range_653_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_653 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env654 {
    struct Slice_629  s1905;
    struct Cell_630 (*  fun1907 )(    struct Cell_630  );
    ;
    ;
    ;
};

struct envunion655 {
    enum Unit_6  (*fun) (  struct env654*  ,    int32_t  );
    struct env654 env;
};

struct RangeIter_656 {
    struct Range_653  field0;
    int32_t  field1;
};

static struct RangeIter_656 RangeIter_656_RangeIter (  struct Range_653  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_656 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_656   into_dash_iter658 (    struct Range_653  dref883 ) {
    return ( ( RangeIter_656_RangeIter ) ( ( ( Range_653_Range ) ( ( dref883 .field0 ) ,  ( dref883 .field1 ) ) ) ,  ( dref883 .field0 ) ) );
}

static  struct Maybe_239   next659 (    struct RangeIter_656 *  self891 ) {
    struct RangeIter_656  dref892 = ( * (  self891 ) );
    if ( true ) {
        if ( (  cmp389 ( ( dref892 .field1 ) , ( dref892 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
        }
        struct Maybe_239  x896 = ( ( Maybe_239_Just ) ( ( dref892 .field1 ) ) );
        (*  self891 ) = ( ( RangeIter_656_RangeIter ) ( ( ( Range_653_Range ) ( ( dref892 .field0 .field0 ) ,  ( dref892 .field0 .field1 ) ) ) ,  (  op_dash_add241 ( ( dref892 .field1 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
        return (  x896 );
    }
}

static  enum Unit_6   for_dash_each652 (    struct Range_653  iterable1074 ,   struct envunion655  fun1076 ) {
    struct RangeIter_656  temp657 = ( (  into_dash_iter658 ) ( (  iterable1074 ) ) );
    struct RangeIter_656 *  it1077 = ( &temp657 );
    while ( ( true ) ) {
        struct Maybe_239  dref1078 = ( (  next659 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_239_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_239_Just_t ) {
                struct envunion655  temp660 = (  fun1076 );
                ( temp660.fun ( &temp660.env ,  ( dref1078 .stuff .Maybe_239_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Range_653   to661 (    int32_t  from874 ,    int32_t  to876 ) {
    return ( ( Range_653_Range ) ( (  from874 ) ,  (  to876 ) ) );
}

static  struct Cell_630 *   offset_dash_ptr665 (    struct Cell_630 *  x338 ,    int64_t  count340 ) {
    struct Cell_630  temp666;
    return ( (struct Cell_630 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp666 ) ) ) ) ) ) ) ) );
}

static  struct Cell_630 *   get_dash_ptr664 (    struct Slice_629  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp151 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_630 *  elem_dash_ptr1760 = ( (  offset_dash_ptr665 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  enum Unit_6   set663 (    struct Slice_629  slice1774 ,    size_t  i1776 ,    struct Cell_630  x1778 ) {
    struct Cell_630 *  ep1779 = ( (  get_dash_ptr664 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

struct Maybe_670 {
    enum {
        Maybe_670_None_t,
        Maybe_670_Just_t,
    } tag;
    union {
        struct {
            struct Cell_630  field0;
        } Maybe_670_Just_s;
    } stuff;
};

static struct Maybe_670 Maybe_670_Just (  struct Cell_630  field0 ) {
    return ( struct Maybe_670 ) { .tag = Maybe_670_Just_t, .stuff = { .Maybe_670_Just_s = { .field0 = field0 } } };
};

static  struct Cell_630   undefined671 (  ) {
    struct Cell_630  temp672;
    return (  temp672 );
}

static  struct Cell_630   or_dash_fail669 (    struct Maybe_670  x1725 ,    struct StrConcat_220  errmsg1727 ) {
    struct Maybe_670  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_670_None_t ) {
        ( (  panic219 ) ( (  errmsg1727 ) ) );
        return ( (  undefined671 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_670_Just_t ) {
            return ( dref1728 .stuff .Maybe_670_Just_s .field0 );
        }
    }
}

static  struct Maybe_670   try_dash_get673 (    struct Slice_629  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp151 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    struct Cell_630 *  elem_dash_ptr1766 = ( (  offset_dash_ptr665 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_670_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  struct Cell_630   get668 (    struct Slice_629  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail669 ) ( ( (  try_dash_get673 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_630   elem_dash_get667 (    struct Slice_629  self1867 ,    size_t  idx1869 ) {
    return ( (  get668 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

static  enum Unit_6   lam662 (   struct env654* env ,    int32_t  i1909 ) {
    return ( (  set663 ) ( ( env->s1905 ) ,  ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get667 ( ( env->s1905 ) , ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map651 (    struct Slice_629  s1905 ,    struct Cell_630 (*  fun1907 )(    struct Cell_630  ) ) {
    struct env654 envinst654 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each652 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion655){ .fun = (  enum Unit_6  (*) (  struct env654*  ,    int32_t  ) )lam662 , .env =  envinst654 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_630   default_dash_cell675 (  ) {
    return ( (struct Cell_630) { .f_c = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } );
}

static  struct Cell_630   lam674 (    struct Cell_630  dref3389 ) {
    return ( (  default_dash_cell675 ) ( ) );
}

struct env678 {
    struct Slice_629  s1905;
    struct Cell_630 (*  fun1907 )(    struct Cell_630  );
    ;
    ;
    ;
};

struct envunion679 {
    enum Unit_6  (*fun) (  struct env678*  ,    int32_t  );
    struct env678 env;
};

static  enum Unit_6   for_dash_each677 (    struct Range_653  iterable1074 ,   struct envunion679  fun1076 ) {
    struct RangeIter_656  temp680 = ( (  into_dash_iter658 ) ( (  iterable1074 ) ) );
    struct RangeIter_656 *  it1077 = ( &temp680 );
    while ( ( true ) ) {
        struct Maybe_239  dref1078 = ( (  next659 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_239_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_239_Just_t ) {
                struct envunion679  temp681 = (  fun1076 );
                ( temp681.fun ( &temp681.env ,  ( dref1078 .stuff .Maybe_239_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam682 (   struct env678* env ,    int32_t  i1909 ) {
    return ( (  set663 ) ( ( env->s1905 ) ,  ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get667 ( ( env->s1905 ) , ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map676 (    struct Slice_629  s1905 ,    struct Cell_630 (*  fun1907 )(    struct Cell_630  ) ) {
    struct env678 envinst678 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each677 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion679){ .fun = (  enum Unit_6  (*) (  struct env678*  ,    int32_t  ) )lam682 , .env =  envinst678 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_630   lam683 (    struct Cell_630  dref3391 ) {
    return ( (  default_dash_cell675 ) ( ) );
}

static  struct Screen_628   mk_dash_screen636 (    struct Tui_58 *  tui3385 ,    enum CAllocator_8  al3387 ) {
    struct Slice_629  cur3388 = ( (  allocate637 ) ( (  al3387 ) ,  ( (  u32_dash_size642 ) ( (  op_dash_mul650 ( ( ( * (  tui3385 ) ) .f_width ) , ( ( * (  tui3385 ) ) .f_height ) ) ) ) ) ) );
    ( (  map651 ) ( (  cur3388 ) ,  (  lam674 ) ) );
    struct Slice_629  prev3390 = ( (  allocate637 ) ( (  al3387 ) ,  ( (  u32_dash_size642 ) ( (  op_dash_mul650 ( ( ( * (  tui3385 ) ) .f_width ) , ( ( * (  tui3385 ) ) .f_height ) ) ) ) ) ) );
    ( (  map676 ) ( (  prev3390 ) ,  (  lam683 ) ) );
    return ( (struct Screen_628) { .f_current = (  cur3388 ) , .f_previous = (  prev3390 ) , .f_al = (  al3387 ) , .f_tui = (  tui3385 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) } );
}

enum MouseButton_691 {
    MouseButton_691_MouseLeft,
    MouseButton_691_MouseMiddle,
    MouseButton_691_MouseRight,
    MouseButton_691_ScrollUp,
    MouseButton_691_ScrollDown,
};

struct MouseEvent_690 {
    enum MouseButton_691  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_689 {
    enum {
        InputEvent_689_Key_t,
        InputEvent_689_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_124  field0;
        } InputEvent_689_Key_s;
        struct {
            struct MouseEvent_690  field0;
        } InputEvent_689_Mouse_s;
    } stuff;
};

static struct InputEvent_689 InputEvent_689_Key (  struct Key_124  field0 ) {
    return ( struct InputEvent_689 ) { .tag = InputEvent_689_Key_t, .stuff = { .InputEvent_689_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_689 InputEvent_689_Mouse (  struct MouseEvent_690  field0 ) {
    return ( struct InputEvent_689 ) { .tag = InputEvent_689_Mouse_t, .stuff = { .InputEvent_689_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_688 {
    enum {
        Maybe_688_None_t,
        Maybe_688_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_689  field0;
        } Maybe_688_Just_s;
    } stuff;
};

static struct Maybe_688 Maybe_688_Just (  struct InputEvent_689  field0 ) {
    return ( struct Maybe_688 ) { .tag = Maybe_688_Just_t, .stuff = { .Maybe_688_Just_s = { .field0 = field0 } } };
};

struct envunion687 {
    struct Maybe_688  (*fun) (  struct env56*  ,    struct Tui_58 *  );
    struct env56 env;
};

struct env686 {
    struct env56 envinst56;
    struct Tui_58 *  tui4025;
};

struct envunion692 {
    struct Maybe_688  (*fun) (  struct env686*  );
    struct env686 env;
};

struct FunIter_685 {
    struct envunion692  f_fun;
    bool  f_finished;
};

static  struct FunIter_685   into_dash_iter693 (    struct FunIter_685  self1028 ) {
    return (  self1028 );
}

static  struct FunIter_685   from_dash_function694 (   struct envunion692  fun1036 ) {
    return ( (struct FunIter_685) { .f_fun = (  fun1036 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions699 (   struct env55* env ,    struct Tui_58 *  tui3351 ) {
    if ( ( ! ( * ( env->should_dash_resize3279 ) ) ) ) {
        return ( false );
    }
    (*  tui3351 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3279 ) = ( false );
    struct Tuple2_592  dim3352 = ( (  get_dash_dimensions593 ) ( ) );
    uint32_t  w3353 = ( (  fst626 ) ( (  dim3352 ) ) );
    uint32_t  h3354 = ( (  snd627 ) ( (  dim3352 ) ) );
    (*  tui3351 ) .f_width = (  w3353 );
    (*  tui3351 ) .f_height = (  h3354 );
    return ( true );
}

static  char   undefined702 (  ) {
    char  temp703;
    return (  temp703 );
}

struct Maybe_704 {
    enum {
        Maybe_704_None_t,
        Maybe_704_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_704_Just_s;
    } stuff;
};

static struct Maybe_704 Maybe_704_Just (  char  field0 ) {
    return ( struct Maybe_704 ) { .tag = Maybe_704_Just_t, .stuff = { .Maybe_704_Just_s = { .field0 = field0 } } };
};

struct Pollfd_706 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr707 (    struct Pollfd_706 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr710 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of711 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed708 (  ) {
    char  temp709;
    char  x570 = (  temp709 );
    ( ( memset ) ( ( (  cast_dash_ptr710 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of711 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct Maybe_704   read_dash_byte705 (    int32_t  timeout_dash_ms3273 ) {
    struct Pollfd_706  pfd3274 = ( (struct Pollfd_706) { .f_fd = (  from_dash_integral38 ( 0 ) ) , .f_events = (  from_dash_integral605 ( 1 ) ) , .f_revents = (  from_dash_integral605 ( 0 ) ) } );
    if ( (  cmp389 ( ( ( poll ) ( ( (  cast_dash_ptr707 ) ( ( & (  pfd3274 ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  (  timeout_dash_ms3273 ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_704) { .tag = Maybe_704_None_t } );
    }
    char  c3275 = ( ( (  zeroed708 ) ( ) ) );
    if ( (  cmp389 ( ( ( read ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  cast_dash_ptr710 ) ( ( & (  c3275 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_704) { .tag = Maybe_704_None_t } );
    }
    return ( ( Maybe_704_Just ) ( (  c3275 ) ) );
}

static  uint8_t   ascii_dash_u8712 (    char  c776 ) {
    return ( ( (uint8_t ) (  c776 ) ) );
}

static  char   u8_dash_ascii713 (    uint8_t  b779 ) {
    return ( ( (char ) (  b779 ) ) );
}

static  uint8_t *   cast717 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed715 (    uint8_t  x573 ) {
    uint32_t  temp716 = ( (  zeroed609 ) ( ) );
    uint32_t *  y574 = ( &temp716 );
    uint8_t *  yp575 = ( (  cast717 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  uint32_t   u8_dash_u32714 (    uint8_t  x672 ) {
    return ( (  cast_dash_on_dash_zeroed715 ) ( (  x672 ) ) );
}

struct Map_720 {
    struct StrViewIter_570  field0;
    uint32_t (*  field1 )(    struct Char_47  );
};

static struct Map_720 Map_720_Map (  struct StrViewIter_570  field0 ,  uint32_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_720 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_720   into_dash_iter721 (    struct Map_720  self796 ) {
    return (  self796 );
}

static  struct Maybe_515   next722 (    struct Map_720 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next574 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_515) { .tag = Maybe_515_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_515_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce719 (    struct Map_720  iterable1093 ,    uint32_t  base1095 ,    uint32_t (*  fun1097 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1098 = (  base1095 );
    struct Map_720  it1099 = ( (  into_dash_iter721 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_515  dref1100 = ( (  next722 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_515_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_515_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_515_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp723 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp723);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp724;
    return (  temp724 );
}

static  struct Map_720   map725 (    struct StrView_20  iterable805 ,    uint32_t (*  fun807 )(    struct Char_47  ) ) {
    struct StrViewIter_570  it808 = ( (  into_dash_iter576 ) ( (  iterable805 ) ) );
    return ( ( Map_720_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  void *   cast_dash_ptr732 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of733 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed730 (  ) {
    int64_t  temp731;
    int64_t  x570 = (  temp731 );
    ( ( memset ) ( ( (  cast_dash_ptr732 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of733 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast734 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed728 (    uint8_t  x573 ) {
    int64_t  temp729 = ( (  zeroed730 ) ( ) );
    int64_t *  y574 = ( &temp729 );
    uint8_t *  yp575 = ( (  cast734 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int64_t   u8_dash_i64727 (    uint8_t  x666 ) {
    return ( (  cast_dash_on_dash_zeroed728 ) ( (  x666 ) ) );
}

struct StrConcat_737 {
    struct Char_47  field0;
    struct Char_47  field1;
};

static struct StrConcat_737 StrConcat_737_StrConcat (  struct Char_47  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_737 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_736 {
    struct StrConcat_737  field0;
    struct StrView_20  field1;
};

static struct StrConcat_736 StrConcat_736_StrConcat (  struct StrConcat_737  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_736 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_741 {
    struct StrView_20  field0;
    struct StrConcat_736  field1;
};

static struct StrConcat_741 StrConcat_741_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_736  field1 ) {
    return ( struct StrConcat_741 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_740 {
    struct StrConcat_741  field0;
    struct Char_47  field1;
};

static struct StrConcat_740 StrConcat_740_StrConcat (  struct StrConcat_741  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_740 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str744 (    struct StrConcat_737  self1503 ) {
    struct StrConcat_737  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str170 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str743 (    struct StrConcat_736  self1503 ) {
    struct StrConcat_736  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str744 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str162 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str742 (    struct StrConcat_741  self1503 ) {
    struct StrConcat_741  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str743 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str739 (    struct StrConcat_740  self1503 ) {
    struct StrConcat_740  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str742 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   panic738 (    struct StrConcat_736  errmsg1712 ) {
    ( (  print_dash_str739 ) ( ( ( StrConcat_740_StrConcat ) ( ( ( StrConcat_741_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t   or_dash_fail735 (    struct Maybe_307  x1725 ,    struct StrConcat_736  errmsg1727 ) {
    struct Maybe_307  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_307_None_t ) {
        ( (  panic738 ) ( (  errmsg1727 ) ) );
        return ( (  undefined344 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_307_Just_t ) {
            return ( dref1728 .stuff .Maybe_307_Just_s .field0 );
        }
    }
}

static  enum Ordering_152   cmp746 (    struct Char_47  l744 ,    struct Char_47  r746 ) {
    if ( ( ( !  eq206 ( ( (  l744 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq206 ( ( (  r746 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp747 = ( (  from_dash_string39 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp747);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( (  cmp192 ) ( ( (  char_dash_u8347 ) ( (  l744 ) ) ) ,  ( (  char_dash_u8347 ) ( (  r746 ) ) ) ) );
}

static  uint8_t   op_dash_sub748 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  uint8_t   op_dash_add749 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  struct Maybe_307   hex_dash_digit745 (    struct Char_47  c2533 ) {
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_307_Just ) ( (  op_dash_sub748 ( ( (  char_dash_u8347 ) ( (  c2533 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_307_Just ) ( (  op_dash_add749 ( (  op_dash_sub748 ( ( (  char_dash_u8347 ) ( (  c2533 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp746 ( (  c2533 ) , ( (  from_dash_charlike188 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_307_Just ) ( (  op_dash_add749 ( (  op_dash_sub748 ( ( (  char_dash_u8347 ) ( (  c2533 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
}

static  uint32_t   lam726 (    struct Char_47  c2538 ) {
    return ( (  from_dash_integral183 ) ( ( (  u8_dash_i64727 ) ( ( (  or_dash_fail735 ) ( ( (  hex_dash_digit745 ) ( (  c2538 ) ) ) ,  ( ( StrConcat_736_StrConcat ) ( ( ( StrConcat_737_StrConcat ) ( ( (  from_dash_charlike188 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2538 ) ) ) ,  ( (  from_dash_string187 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add751 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam750 (    uint32_t  elem2540 ,    uint32_t  b2542 ) {
    return (  op_dash_add751 ( (  op_dash_mul650 ( (  b2542 ) , (  from_dash_integral183 ( 16 ) ) ) ) , (  elem2540 ) ) );
}

static  uint32_t   from_dash_hex718 (    struct StrView_20  arr2536 ) {
    return ( (  reduce719 ) ( ( (  map725 ) ( (  arr2536 ) ,  (  lam726 ) ) ) ,  (  from_dash_integral183 ( 0 ) ) ,  (  lam750 ) ) );
}

static  bool   eq753 (    char  l374 ,    char  r376 ) {
    return ( (  l374 ) == (  r376 ) );
}

static  char   from_dash_charlike754 (    uint8_t *  ptr369 ,    size_t  num_dash_bytes371 ) {
    if ( ( !  eq206 ( (  num_dash_bytes371 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp755 = ( (  from_dash_string39 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp755);
        exit ( 1 );
        ( Unit_6_Unit );
    }
    return ( ( (char ) ( * (  ptr369 ) ) ) );
}

struct Array_756 {
    char _arr [32];
};

static  void *   cast_dash_ptr760 (    struct Array_756 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of761 (    struct Array_756  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_756   zeroed758 (  ) {
    struct Array_756  temp759;
    struct Array_756  x570 = (  temp759 );
    ( ( memset ) ( ( (  cast_dash_ptr760 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of761 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr765 (    struct Array_756 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr766 (    char *  x338 ,    int64_t  count340 ) {
    char  temp767;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp767 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr764 (    struct Array_756 *  arr2238 ,    size_t  i2241 ) {
    if ( ( (  cmp151 ( (  i2241 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i2241 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic155 ) ( ( ( StrConcat_156_StrConcat ) ( ( ( StrConcat_157_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2241 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2242 = ( ( (  cast_dash_ptr765 ) ( (  arr2238 ) ) ) );
    return ( (  offset_dash_ptr766 ) ( (  p2242 ) ,  ( (int64_t ) (  i2241 ) ) ) );
}

static  enum Unit_6   set763 (    struct Array_756 *  arr2251 ,    size_t  i2254 ,    char  e2256 ) {
    char *  p2257 = ( (  get_dash_ptr764 ) ( (  arr2251 ) ,  (  i2254 ) ) );
    (*  p2257 ) = (  e2256 );
    return ( Unit_6_Unit );
}

struct Slice_769 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail772 (    struct Maybe_704  x1725 ,    struct StrConcat_220  errmsg1727 ) {
    struct Maybe_704  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_704_None_t ) {
        ( (  panic219 ) ( (  errmsg1727 ) ) );
        return ( (  undefined702 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_704_Just_t ) {
            return ( dref1728 .stuff .Maybe_704_Just_s .field0 );
        }
    }
}

static  struct Maybe_704   try_dash_get773 (    struct Slice_769  slice1763 ,    size_t  i1765 ) {
    if ( ( (  cmp151 ( (  i1765 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1765 ) , ( (  slice1763 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_704) { .tag = Maybe_704_None_t } );
    }
    char *  elem_dash_ptr1766 = ( (  offset_dash_ptr766 ) ( ( (  slice1763 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1765 ) ) ) ) );
    return ( ( Maybe_704_Just ) ( ( * (  elem_dash_ptr1766 ) ) ) );
}

static  char   get771 (    struct Slice_769  slice1769 ,    size_t  i1771 ) {
    return ( (  or_dash_fail772 ) ( ( (  try_dash_get773 ) ( (  slice1769 ) ,  (  i1771 ) ) ) ,  ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1771 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1769 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get770 (    struct Slice_769  self1867 ,    size_t  idx1869 ) {
    return ( (  get771 ) ( (  self1867 ) ,  (  idx1869 ) ) );
}

struct Scanner_774 {
    struct StrViewIter_570  f_s;
};

static  struct Scanner_774   mk_dash_from_dash_str776 (    struct StrView_20  s3146 ) {
    return ( (struct Scanner_774) { .f_s = ( (  chars575 ) ( (  s3146 ) ) ) } );
}

static  int32_t   op_dash_sub779 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  uint8_t *   offset_dash_ptr_prime_781 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr291 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_20   substr777 (    struct StrView_20  s2163 ,    size_t  from2165 ,    size_t  to2167 ) {
    size_t  from_dash_bs2168 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_656  temp778 =  into_dash_iter658 ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( ( (  size_dash_i32163 ) ( (  from2165 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond780 =  next659 (&temp778);
        if (  __cond780 .tag == 0 ) {
            break;
        }
        int32_t  dref2169 =  __cond780 .stuff .Maybe_239_Just_s .field0;
        if ( (  cmp151 ( (  from_dash_bs2168 ) , ( ( (  s2163 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2168 = (  op_dash_add199 ( (  from_dash_bs2168 ) , ( (  next_dash_char191 ) ( ( (  offset_dash_ptr_prime_781 ) ( ( ( (  s2163 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2168 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2170 = (  from_dash_bs2168 );
    struct RangeIter_656  temp782 =  into_dash_iter658 ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  op_dash_sub779 ( ( (  size_dash_i32163 ) ( (  to2167 ) ) ) , ( (  size_dash_i32163 ) ( (  from2165 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond783 =  next659 (&temp782);
        if (  __cond783 .tag == 0 ) {
            break;
        }
        int32_t  dref2171 =  __cond783 .stuff .Maybe_239_Just_s .field0;
        if ( (  cmp151 ( (  to_dash_bs2170 ) , ( ( (  s2163 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2170 = (  op_dash_add199 ( (  to_dash_bs2170 ) , ( (  next_dash_char191 ) ( ( (  offset_dash_ptr_prime_781 ) ( ( ( (  s2163 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2170 ) ) ) ) ) ) );
    }
    return ( (struct StrView_20) { .f_contents = ( (  subslice290 ) ( ( (  s2163 ) .f_contents ) ,  (  from_dash_bs2168 ) ,  (  to_dash_bs2170 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr786 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice785 (    struct Slice_769  s1932 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr786 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_20   from_dash_ascii_dash_slice784 (    struct Slice_769  sl2140 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice785 ) ( (  sl2140 ) ) ) } );
}

struct Maybe_787 {
    enum {
        Maybe_787_None_t,
        Maybe_787_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_787_Just_s;
    } stuff;
};

static struct Maybe_787 Maybe_787_Just (  int64_t  field0 ) {
    return ( struct Maybe_787 ) { .tag = Maybe_787_Just_t, .stuff = { .Maybe_787_Just_s = { .field0 = field0 } } };
};

struct TakeWhile_789 {
    struct Scanner_774  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

static  struct Scanner_774   into_dash_iter792 (    struct Scanner_774  self3137 ) {
    return (  self3137 );
}

static  struct Scanner_774   into_dash_iter791 (    struct Scanner_774 *  self785 ) {
    return ( (  into_dash_iter792 ) ( ( * (  self785 ) ) ) );
}

static  struct TakeWhile_789   take_dash_while790 (    struct Scanner_774 *  it970 ,    bool (*  pred972 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_789) { .f_it = ( (  into_dash_iter791 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  bool   is_dash_digit793 (    struct Char_47  c2439 ) {
    return ( (  cmp192 ( ( (  char_dash_u8347 ) ( (  c2439 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp192 ( ( (  char_dash_u8347 ) ( (  c2439 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_573   next797 (    struct Scanner_774 *  self3134 ) {
    return ( (  next574 ) ( ( & ( ( * (  self3134 ) ) .f_s ) ) ) );
}

static  struct Maybe_573   next796 (    struct TakeWhile_789 *  self964 ) {
    struct Maybe_573  mx965 = ( (  next797 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_573  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_573_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_573_Just ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
            }
        }
    }
}

static  struct TakeWhile_789   into_dash_iter799 (    struct TakeWhile_789  self961 ) {
    return (  self961 );
}

static  struct Maybe_573   head795 (    struct TakeWhile_789  it1142 ) {
    struct TakeWhile_789  temp798 = ( (  into_dash_iter799 ) ( (  it1142 ) ) );
    return ( (  next796 ) ( ( &temp798 ) ) );
}

static  bool   null794 (    struct TakeWhile_789  it1151 ) {
    struct Maybe_573  dref1152 = ( (  head795 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_573_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env802 {
    struct Scanner_774 *  it1186;
    ;
};

struct envunion803 {
    struct Maybe_573  (*fun) (  struct env802*  ,    int32_t  );
    struct env802 env;
};

static  enum Unit_6   for_dash_each801 (    struct Range_653  iterable1074 ,   struct envunion803  fun1076 ) {
    struct RangeIter_656  temp804 = ( (  into_dash_iter658 ) ( (  iterable1074 ) ) );
    struct RangeIter_656 *  it1077 = ( &temp804 );
    while ( ( true ) ) {
        struct Maybe_239  dref1078 = ( (  next659 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_239_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_239_Just_t ) {
                struct envunion803  temp805 = (  fun1076 );
                ( temp805.fun ( &temp805.env ,  ( dref1078 .stuff .Maybe_239_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Maybe_573   lam806 (   struct env802* env ,    int32_t  dref1189 ) {
    return ( (  next797 ) ( ( env->it1186 ) ) );
}

static  enum Unit_6   drop_prime_800 (    struct Scanner_774 *  it1186 ,    size_t  n1188 ) {
    struct env802 envinst802 = {
        .it1186 =  it1186 ,
    };
    ( (  for_dash_each801 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 1 ) ) ,  ( (  size_dash_i32163 ) ( (  n1188 ) ) ) ) ) ,  ( (struct envunion803){ .fun = (  struct Maybe_573  (*) (  struct env802*  ,    int32_t  ) )lam806 , .env =  envinst802 } ) ) );
    return ( Unit_6_Unit );
}

static  size_t   reduce808 (    struct TakeWhile_789  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct TakeWhile_789  it1099 = ( (  into_dash_iter799 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next796 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp809 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp809);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp810;
    return (  temp810 );
}

static  size_t   lam811 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count807 (    struct TakeWhile_789  it1104 ) {
    return ( (  reduce808 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam811 ) ) );
}

static  struct TakeWhile_789   chars813 (    struct TakeWhile_789  self1651 ) {
    return (  self1651 );
}

static  struct Maybe_787   reduce814 (    struct TakeWhile_789  iterable1093 ,    struct Maybe_787  base1095 ,    struct Maybe_787 (*  fun1097 )(    struct Char_47  ,    struct Maybe_787  ) ) {
    struct Maybe_787  x1098 = (  base1095 );
    struct TakeWhile_789  it1099 = ( (  into_dash_iter799 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next796 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp815 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp815);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_787  temp816;
    return (  temp816 );
}

static  void *   cast_dash_ptr824 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of825 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed822 (  ) {
    int32_t  temp823;
    int32_t  x570 = (  temp823 );
    ( ( memset ) ( ( (  cast_dash_ptr824 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of825 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  uint8_t *   cast826 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed820 (    uint8_t  x573 ) {
    int32_t  temp821 = ( (  zeroed822 ) ( ) );
    int32_t *  y574 = ( &temp821 );
    uint8_t *  yp575 = ( (  cast826 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  int32_t   u8_dash_i32819 (    uint8_t  x669 ) {
    return ( (  cast_dash_on_dash_zeroed820 ) ( (  x669 ) ) );
}

static  struct Maybe_239   parse_dash_digit818 (    struct Char_47  c2442 ) {
    if ( ( (  is_dash_digit793 ) ( (  c2442 ) ) ) ) {
        return ( ( Maybe_239_Just ) ( ( (  u8_dash_i32819 ) ( (  op_dash_sub748 ( ( (  char_dash_u8347 ) ( (  c2442 ) ) ) , ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_239) { .tag = Maybe_239_None_t } );
    }
}

static  int64_t   i32_dash_i64827 (    int32_t  x606 ) {
    return ( (int64_t ) (  x606 ) );
}

static  struct Maybe_787   sequence_dash_maybe817 (    struct Char_47  e2448 ,    struct Maybe_787  b2450 ) {
    struct Maybe_787  dref2451 = (  b2450 );
    if ( dref2451.tag == Maybe_787_None_t ) {
        return ( (struct Maybe_787) { .tag = Maybe_787_None_t } );
    }
    else {
        if ( dref2451.tag == Maybe_787_Just_t ) {
            struct Maybe_239  dref2453 = ( (  parse_dash_digit818 ) ( (  e2448 ) ) );
            if ( dref2453.tag == Maybe_239_None_t ) {
                return ( (struct Maybe_787) { .tag = Maybe_787_None_t } );
            }
            else {
                if ( dref2453.tag == Maybe_239_Just_t ) {
                    return ( ( Maybe_787_Just ) ( (  op_dash_add368 ( (  op_dash_mul197 ( ( dref2451 .stuff .Maybe_787_Just_s .field0 ) , (  from_dash_integral269 ( 10 ) ) ) ) , ( (  i32_dash_i64827 ) ( ( dref2453 .stuff .Maybe_239_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_787   parse_dash_int812 (    struct TakeWhile_789  s2445 ) {
    struct TakeWhile_789  cs2455 = ( (  chars813 ) ( (  s2445 ) ) );
    struct Maybe_573  dref2456 = ( (  head795 ) ( (  cs2455 ) ) );
    if ( dref2456.tag == Maybe_573_Just_t ) {
        return ( (  reduce814 ) ( (  cs2455 ) ,  ( ( Maybe_787_Just ) ( (  from_dash_integral269 ( 0 ) ) ) ) ,  (  sequence_dash_maybe817 ) ) );
    }
    else {
        if ( dref2456.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_787) { .tag = Maybe_787_None_t } );
        }
    }
}

static  struct Maybe_787   scan_dash_int788 (    struct Scanner_774 *  sc3149 ) {
    struct TakeWhile_789  digit_dash_chars3150 = ( (  take_dash_while790 ) ( (  sc3149 ) ,  (  is_dash_digit793 ) ) );
    if ( ( (  null794 ) ( (  digit_dash_chars3150 ) ) ) ) {
        return ( (struct Maybe_787) { .tag = Maybe_787_None_t } );
    }
    ( (  drop_prime_800 ) ( (  sc3149 ) ,  ( (  count807 ) ( (  digit_dash_chars3150 ) ) ) ) );
    return ( (  parse_dash_int812 ) ( (  digit_dash_chars3150 ) ) );
}

static  int32_t   i64_dash_i32829 (    int64_t  x618 ) {
    return ( (int32_t ) (  x618 ) );
}

struct StrConcat_831 {
    struct StrView_20  field0;
    int64_t  field1;
};

static struct StrConcat_831 StrConcat_831_StrConcat (  struct StrView_20  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_831 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_834 {
    struct StrView_20  field0;
    struct StrConcat_831  field1;
};

static struct StrConcat_834 StrConcat_834_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_831  field1 ) {
    return ( struct StrConcat_834 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_833 {
    struct StrConcat_834  field0;
    struct Char_47  field1;
};

static struct StrConcat_833 StrConcat_833_StrConcat (  struct StrConcat_834  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_833 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_839 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_838 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_839  f_right;
};

struct StrConcatIter_837 {
    struct StrViewIter_570  f_left;
    struct StrConcatIter_838  f_right;
};

enum EmptyIter_841 {
    EmptyIter_841_EmptyIter,
};

struct AppendIter_840 {
    enum EmptyIter_841  f_it;
    struct Char_47  f_elem;
    bool  f_appended;
};

struct StrConcatIter_836 {
    struct StrConcatIter_837  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_836   into_dash_iter843 (    struct StrConcatIter_836  self1491 ) {
    return (  self1491 );
}

struct env850 {
    ;
    int64_t  base1210;
};

struct envunion851 {
    int64_t  (*fun) (  struct env850*  ,    int32_t  ,    int64_t  );
    struct env850 env;
};

static  int64_t   reduce849 (    struct Range_653  iterable1093 ,    int64_t  base1095 ,   struct envunion851  fun1097 ) {
    int64_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion851  temp852 = (  fun1097 );
                x1098 = ( temp852.fun ( &temp852.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp853 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp853);
    exit ( 1 );
    ( Unit_6_Unit );
    int64_t  temp854;
    return (  temp854 );
}

static  int64_t   lam855 (   struct env850* env ,    int32_t  item1214 ,    int64_t  x1216 ) {
    return (  op_dash_mul197 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int64_t   pow848 (    int64_t  base1210 ,    int32_t  p1212 ) {
    struct env850 envinst850 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce849 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral269 ( 1 ) ) ,  ( (struct envunion851){ .fun = (  int64_t  (*) (  struct env850*  ,    int32_t  ,    int64_t  ) )lam855 , .env =  envinst850 } ) ) );
}

static  int64_t   op_dash_div856 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast857 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub858 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  uint8_t *   cast864 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed862 (    uint8_t  x573 ) {
    size_t  temp863 = ( (  zeroed645 ) ( ) );
    size_t *  y574 = ( &temp863 );
    uint8_t *  yp575 = ( (  cast864 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  size_t   u8_dash_size861 (    uint8_t  x663 ) {
    return ( (  cast_dash_on_dash_zeroed862 ) ( (  x663 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer860 (    uint8_t *  ptr681 ,    uint8_t  b683 ) {
    size_t  s684 = ( ( (size_t ) (  ptr681 ) ) );
    size_t  exp685 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add199 ( (  op_dash_sub270 ( (  s684 ) , ( (  u8_dash_size861 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer176 ) ( (  ptr681 ) ) ) ) ) ) ) , (  op_dash_mul212 ( (  exp685 ) , ( (  u8_dash_size861 ) ( (  b683 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast865 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_47   from_dash_u8859 (    uint8_t  b772 ) {
    uint8_t *  ptr773 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer860 ) ( ( ( (  cast865 ) ( ( (  u8_dash_size861 ) ( (  b772 ) ) ) ) ) ) ,  (  from_dash_integral179 ( 103 ) ) ) );
    return ( (struct Char_47) { .f_ptr = (  ptr773 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_573   next847 (    struct IntStrIter_839 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp389 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    int64_t  trim_dash_down1423 = ( (  pow848 ) ( (  from_dash_integral269 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int64_t  upper1424 = (  op_dash_div856 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int64_t  upper_dash_mask1425 = (  op_dash_mul197 ( (  op_dash_div856 ( (  upper1424 ) , (  from_dash_integral269 ( 10 ) ) ) ) , (  from_dash_integral269 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast857 ) ( (  op_dash_sub858 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next846 (    struct StrConcatIter_838 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next847 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next845 (    struct StrConcatIter_837 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next846 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next867 (    enum EmptyIter_841 *  dref792 ) {
    return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
}

static  struct Maybe_573   next866 (    struct AppendIter_840 *  self1022 ) {
    struct Maybe_573  dref1023 = ( (  next867 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1023 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_573_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_573_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
        }
    }
}

static  struct Maybe_573   next844 (    struct StrConcatIter_836 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next845 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each835 (    struct StrConcatIter_836  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_836  temp842 = ( (  into_dash_iter843 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_836 *  it1077 = ( &temp842 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next844 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_152   cmp876 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg877 (    int64_t  l204 ) {
    return ( (  from_dash_integral269 ( 0 ) ) - (  l204 ) );
}

static  bool   eq879 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits878 (    int64_t  self1430 ) {
    if ( (  eq879 ( (  self1430 ) , (  from_dash_integral269 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp876 ( (  self1430 ) , (  from_dash_integral269 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div856 ( (  self1430 ) , (  from_dash_integral269 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_839   int_dash_iter875 (    int64_t  int1434 ) {
    if ( (  cmp876 ( (  int1434 ) , (  from_dash_integral269 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_839) { .f_int = (  op_dash_neg877 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits878 ) ( (  op_dash_neg877 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_839) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits878 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_839   chars874 (    int64_t  self1461 ) {
    return ( (  int_dash_iter875 ) ( (  self1461 ) ) );
}

static  struct StrConcatIter_838   into_dash_iter873 (    struct StrConcat_831  dref1498 ) {
    return ( (struct StrConcatIter_838) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars874 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_838   chars872 (    struct StrConcat_831  self1509 ) {
    return ( (  into_dash_iter873 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_837   into_dash_iter871 (    struct StrConcat_834  dref1498 ) {
    return ( (struct StrConcatIter_837) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars872 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_837   chars870 (    struct StrConcat_834  self1509 ) {
    return ( (  into_dash_iter871 ) ( (  self1509 ) ) );
}

static  enum EmptyIter_841   into_dash_iter884 (    enum EmptyIter_841  self790 ) {
    return (  self790 );
}

static  struct AppendIter_840   append883 (    enum EmptyIter_841  it1006 ,    struct Char_47  e1008 ) {
    return ( (struct AppendIter_840) { .f_it = ( (  into_dash_iter884 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_840   cons882 (    enum EmptyIter_841  it1011 ,    struct Char_47  e1013 ) {
    return ( (  append883 ) ( (  it1011 ) ,  (  e1013 ) ) );
}

static  enum EmptyIter_841   nil885 (  ) {
    return ( EmptyIter_841_EmptyIter );
}

static  struct AppendIter_840   single881 (    struct Char_47  e1016 ) {
    return ( (  cons882 ) ( ( (  nil885 ) ( ) ) ,  (  e1016 ) ) );
}

static  struct AppendIter_840   chars880 (    struct Char_47  self1407 ) {
    return ( (  single881 ) ( (  self1407 ) ) );
}

static  struct StrConcatIter_836   into_dash_iter869 (    struct StrConcat_833  dref1498 ) {
    return ( (struct StrConcatIter_836) { .f_left = ( (  chars870 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_836   chars868 (    struct StrConcat_833  self1509 ) {
    return ( (  into_dash_iter869 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print832 (    struct StrConcat_833  s1701 ) {
    ( (  for_dash_each835 ) ( ( (  chars868 ) ( (  s1701 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum MouseButton_691   undefined886 (  ) {
    enum MouseButton_691  temp887;
    return (  temp887 );
}

static  enum MouseButton_691   panic_prime_830 (    struct StrConcat_831  errmsg1715 ) {
    ( (  print832 ) ( ( ( StrConcat_833_StrConcat ) ( ( ( StrConcat_834_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1715 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined886 ) ( ) );
}

static  enum MouseButton_691   btn_dash_to_dash_mouse_dash_button828 (    int64_t  btn3311 ) {
    return ( {  int32_t  dref3312 = ( (  i64_dash_i32829 ) ( (  btn3311 ) ) ) ;  dref3312 == 0 ? ( MouseButton_691_MouseLeft ) :  dref3312 == 1 ? ( MouseButton_691_MouseMiddle ) :  dref3312 == 2 ? ( MouseButton_691_MouseRight ) :  dref3312 == 64 ? ( MouseButton_691_ScrollUp ) :  dref3312 == 65 ? ( MouseButton_691_ScrollDown ) : ( (  panic_prime_830 ) ( ( ( StrConcat_831_StrConcat ) ( ( (  from_dash_string187 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3311 ) ) ) ) ) ; } );
}

static  struct Scanner_774   mk889 (    struct StrView_20  s3140 ) {
    return ( (struct Scanner_774) { .f_s = ( (  into_dash_iter576 ) ( (  s3140 ) ) ) } );
}

static  struct Maybe_688   parse_dash_csi768 (    struct Slice_769  seq3318 ) {
    if ( (  eq206 ( ( (  seq3318 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    char  last3319 = (  elem_dash_get770 ( (  seq3318 ) , (  op_dash_sub270 ( ( (  seq3318 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq753 ( (  elem_dash_get770 ( (  seq3318 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike754 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_774  temp775 = ( (  mk_dash_from_dash_str776 ) ( ( (  substr777 ) ( ( (  from_dash_ascii_dash_slice784 ) ( (  seq3318 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3318 ) .f_count ) ) ) ) );
        struct Scanner_774 *  sc3320 = ( &temp775 );
        struct Maybe_787  dref3321 = ( (  scan_dash_int788 ) ( (  sc3320 ) ) );
        if ( dref3321.tag == Maybe_787_None_t ) {
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
        else {
            if ( dref3321.tag == Maybe_787_Just_t ) {
                ( (  next797 ) ( (  sc3320 ) ) );
                struct Maybe_787  dref3323 = ( (  scan_dash_int788 ) ( (  sc3320 ) ) );
                if ( dref3323.tag == Maybe_787_None_t ) {
                    return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
                }
                else {
                    if ( dref3323.tag == Maybe_787_Just_t ) {
                        ( (  next797 ) ( (  sc3320 ) ) );
                        struct Maybe_787  dref3325 = ( (  scan_dash_int788 ) ( (  sc3320 ) ) );
                        if ( dref3325.tag == Maybe_787_None_t ) {
                            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
                        }
                        else {
                            if ( dref3325.tag == Maybe_787_Just_t ) {
                                return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Mouse ) ( ( (struct MouseEvent_690) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button828 ) ( ( dref3321 .stuff .Maybe_787_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub779 ( ( (  i64_dash_i32829 ) ( ( dref3323 .stuff .Maybe_787_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_y = (  op_dash_sub779 ( ( (  i64_dash_i32829 ) ( ( dref3325 .stuff .Maybe_787_Just_s .field0 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_pressed = (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq206 ( ( (  seq3318 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Up_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Down_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Right_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Left_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Home_t } ) ) ) ) );
        }
        if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    if ( (  eq753 ( (  last3319 ) , ( (  from_dash_charlike754 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_774  temp888 = ( (  mk889 ) ( ( (  from_dash_ascii_dash_slice784 ) ( (  seq3318 ) ) ) ) );
        struct Scanner_774 *  sc3327 = ( &temp888 );
        struct Maybe_787  dref3328 = ( (  scan_dash_int788 ) ( (  sc3327 ) ) );
        if ( dref3328.tag == Maybe_787_None_t ) {
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
        else {
            if ( dref3328.tag == Maybe_787_Just_t ) {
                return ( {  int32_t  dref3330 = ( (  i64_dash_i32829 ) ( ( dref3328 .stuff .Maybe_787_Just_s .field0 ) ) ) ;  dref3330 == 1 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Home_t } ) ) ) ) ) :  dref3330 == 2 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Insert_t } ) ) ) ) ) :  dref3330 == 3 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Delete_t } ) ) ) ) ) :  dref3330 == 4 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_End_t } ) ) ) ) ) :  dref3330 == 5 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_PageUp_t } ) ) ) ) ) :  dref3330 == 6 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_PageDown_t } ) ) ) ) ) :  dref3330 == 15 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F5_t } ) ) ) ) ) :  dref3330 == 17 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F6_t } ) ) ) ) ) :  dref3330 == 18 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F7_t } ) ) ) ) ) :  dref3330 == 19 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F8_t } ) ) ) ) ) :  dref3330 == 20 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F9_t } ) ) ) ) ) :  dref3330 == 21 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F10_t } ) ) ) ) ) :  dref3330 == 23 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F11_t } ) ) ) ) ) :  dref3330 == 24 ? ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_F12_t } ) ) ) ) ) : ( (struct Maybe_688) { .tag = Maybe_688_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
}

static  struct Slice_769   subslice890 (    struct Slice_769  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    char *  begin_dash_ptr1787 = ( (  offset_dash_ptr766 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_769) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min293 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_769) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  char *   cast892 (    struct Array_756 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_769   as_dash_slice891 (    struct Array_756 *  arr2260 ) {
    return ( (struct Slice_769) { .f_ptr = ( (  cast892 ) ( (  arr2260 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_894 {
    enum {
        Maybe_894_None_t,
        Maybe_894_Just_t,
    } tag;
    union {
        struct {
            struct Key_124  field0;
        } Maybe_894_Just_s;
    } stuff;
};

static struct Maybe_894 Maybe_894_Just (  struct Key_124  field0 ) {
    return ( struct Maybe_894 ) { .tag = Maybe_894_Just_t, .stuff = { .Maybe_894_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_894   parse_dash_ss3895 (    char  c3315 ) {
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_Up_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_Down_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_Right_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_Left_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_Home_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_End_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_F1_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_F2_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_F3_t } ) ) );
    }
    if ( (  eq753 ( (  c3315 ) , ( (  from_dash_charlike754 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_894_Just ) ( ( (struct Key_124) { .tag = Key_124_F4_t } ) ) );
    }
    return ( (struct Maybe_894) { .tag = Maybe_894_None_t } );
}

static  struct Maybe_688   read_dash_key700 (  ) {
    char  temp701 = ( (  undefined702 ) ( ) );
    char *  ch3332 = ( &temp701 );
    struct Maybe_704  dref3333 = ( (  read_dash_byte705 ) ( (  from_dash_integral38 ( 0 ) ) ) );
    if ( dref3333.tag == Maybe_704_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    else {
        if ( dref3333.tag == Maybe_704_Just_t ) {
            (*  ch3332 ) = ( dref3333 .stuff .Maybe_704_Just_s .field0 );
        }
    }
    if ( (  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 13 ) ) ) ) ) {
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Enter_t } ) ) ) ) );
    }
    if ( (  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 127 ) ) ) ) ) {
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 27 ) ) ) == 0 ) && ( !  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 9 ) ) ) ) ) ) {
        char  letter3335 = ( (  u8_dash_ascii713 ) ( ( (  u32_dash_u8185 ) ( ( (  u32_dash_or524 ) ( ( (  u8_dash_u32714 ) ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) ) ) ,  ( (  from_dash_hex718 ) ( ( (  from_dash_string187 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( ( Key_124_Ctrl ) ( (  letter3335 ) ) ) ) ) ) );
    }
    if ( ( !  eq175 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 27 ) ) ) ) ) {
        if ( (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  ch3332 ) ) ) ) , (  from_dash_integral179 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key700 ) ( ) );
        } else {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( ( Key_124_Char ) ( ( * (  ch3332 ) ) ) ) ) ) ) );
        }
    }
    char  temp752 = ( (  undefined702 ) ( ) );
    char *  ch23336 = ( &temp752 );
    struct Maybe_704  dref3337 = ( (  read_dash_byte705 ) ( (  from_dash_integral38 ( 50 ) ) ) );
    if ( dref3337.tag == Maybe_704_None_t ) {
        return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3337.tag == Maybe_704_Just_t ) {
            (*  ch23336 ) = ( dref3337 .stuff .Maybe_704_Just_s .field0 );
        }
    }
    if ( (  eq753 ( ( * (  ch23336 ) ) , ( (  from_dash_charlike754 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_756  temp757 = ( ( (  zeroed758 ) ( ) ) );
        struct Array_756 *  seq3339 = ( &temp757 );
        int32_t  slen3340 = (  from_dash_integral38 ( 0 ) );
        while ( (  cmp389 ( (  slen3340 ) , (  from_dash_integral38 ( 31 ) ) ) == 0 ) ) {
            char  temp762 = ( (  undefined702 ) ( ) );
            char *  sc3341 = ( &temp762 );
            struct Maybe_704  dref3342 = ( (  read_dash_byte705 ) ( (  from_dash_integral38 ( 50 ) ) ) );
            if ( dref3342.tag == Maybe_704_None_t ) {
                break;
            }
            else {
                if ( dref3342.tag == Maybe_704_Just_t ) {
                    (*  sc3341 ) = ( dref3342 .stuff .Maybe_704_Just_s .field0 );
                }
            }
            ( (  set763 ) ( (  seq3339 ) ,  ( (  i32_dash_size229 ) ( (  slen3340 ) ) ) ,  ( * (  sc3341 ) ) ) );
            slen3340 = (  op_dash_add241 ( (  slen3340 ) , (  from_dash_integral38 ( 1 ) ) ) );
            if ( ( (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  sc3341 ) ) ) ) , (  from_dash_integral179 ( 64 ) ) ) != 0 ) && (  cmp192 ( ( (  ascii_dash_u8712 ) ( ( * (  sc3341 ) ) ) ) , (  from_dash_integral179 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi768 ) ( ( (  subslice890 ) ( ( (  as_dash_slice891 ) ( (  seq3339 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size229 ) ( (  slen3340 ) ) ) ) ) ) );
    }
    if ( (  eq753 ( ( * (  ch23336 ) ) , ( (  from_dash_charlike754 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp893 = ( (  undefined702 ) ( ) );
        char *  sc3344 = ( &temp893 );
        struct Maybe_704  dref3345 = ( (  read_dash_byte705 ) ( (  from_dash_integral38 ( 50 ) ) ) );
        if ( dref3345.tag == Maybe_704_None_t ) {
            return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3345.tag == Maybe_704_Just_t ) {
                (*  sc3344 ) = ( dref3345 .stuff .Maybe_704_Just_s .field0 );
            }
        }
        struct Maybe_894  dref3347 = ( (  parse_dash_ss3895 ) ( ( * (  sc3344 ) ) ) );
        if ( dref3347.tag == Maybe_894_None_t ) {
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
        else {
            if ( dref3347.tag == Maybe_894_Just_t ) {
                return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( dref3347 .stuff .Maybe_894_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_688_Just ) ( ( ( InputEvent_689_Key ) ( ( (struct Key_124) { .tag = Key_124_Escape_t } ) ) ) ) );
}

static  struct Maybe_688   read_dash_event697 (   struct env56* env ,    struct Tui_58 *  tui3357 ) {
    struct envunion57  temp698 = ( (struct envunion57){ .fun = (  bool  (*) (  struct env55*  ,    struct Tui_58 *  ) )update_dash_dimensions699 , .env =  env->envinst55 } );
    ( temp698.fun ( &temp698.env ,  (  tui3357 ) ) );
    struct Maybe_688  dref3358 = ( (  read_dash_key700 ) ( ) );
    if ( dref3358.tag == Maybe_688_None_t ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    else {
        if ( dref3358.tag == Maybe_688_Just_t ) {
            (*  tui3357 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_688_Just ) ( ( dref3358 .stuff .Maybe_688_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_688   lam695 (   struct env686* env ) {
    struct envunion687  temp696 = ( (struct envunion687){ .fun = (  struct Maybe_688  (*) (  struct env56*  ,    struct Tui_58 *  ) )read_dash_event697 , .env =  env->envinst56 } );
    return ( temp696.fun ( &temp696.env ,  ( env->tui4025 ) ) );
}

static  struct Maybe_688   next897 (    struct FunIter_685 *  self1031 ) {
    if ( ( ( * (  self1031 ) ) .f_finished ) ) {
        return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
    }
    struct envunion692  temp898 = ( ( * (  self1031 ) ) .f_fun );
    struct Maybe_688  dref1032 = ( temp898.fun ( &temp898.env ) );
    if ( dref1032.tag == Maybe_688_Just_t ) {
        return ( ( Maybe_688_Just ) ( ( dref1032 .stuff .Maybe_688_Just_s .field0 ) ) );
    }
    else {
        if ( dref1032.tag == Maybe_688_None_t ) {
            (*  self1031 ) .f_finished = ( true );
            return ( (struct Maybe_688) { .tag = Maybe_688_None_t } );
        }
    }
}

struct env901 {
    struct Editor_109 *  ed3969;
    ;
};

struct envunion902 {
    enum Unit_6  (*fun) (  struct env901*  ,    struct StrView_20  );
    struct env901 env;
};

static  enum Unit_6   if_dash_just900 (    struct Maybe_113  x1291 ,   struct envunion902  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion902  temp903 = (  fun1293 );
        ( temp903.fun ( &temp903.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free905 (    struct StrView_20  s2158 ,    enum CAllocator_8  al2160 ) {
    ( (  free334 ) ( (  al2160 ) ,  ( (struct Slice_11) { .f_ptr = ( ( (  s2158 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam904 (   struct env901* env ,    struct StrView_20  msg3971 ) {
    ( (  free905 ) ( (  msg3971 ) ,  ( ( * ( env->ed3969 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_msg899 (    struct Editor_109 *  ed3969 ) {
    struct env901 envinst901 = {
        .ed3969 =  ed3969 ,
    };
    ( (  if_dash_just900 ) ( ( ( * (  ed3969 ) ) .f_msg ) ,  ( (struct envunion902){ .fun = (  enum Unit_6  (*) (  struct env901*  ,    struct StrView_20  ) )lam904 , .env =  envinst901 } ) ) );
    (*  ed3969 ) .f_msg = ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    return ( Unit_6_Unit );
}

struct envunion907 {
    enum Unit_6  (*fun) (  struct env120*  ,    struct Editor_109 *  ,    struct Key_124  );
    struct env120 env;
};

enum CursorMovement_913 {
    CursorMovement_913_NoChanges,
    CursorMovement_913_UpdateVI,
    CursorMovement_913_OverrideSelect,
};

struct Tuple2_915 {
    enum CursorMovement_913  field0;
    enum CursorMovement_913  field1;
};

static struct Tuple2_915 Tuple2_915_Tuple2 (  enum CursorMovement_913  field0 ,  enum CursorMovement_913  field1 ) {
    return ( struct Tuple2_915 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq914 (    enum CursorMovement_913  l3837 ,    enum CursorMovement_913  r3839 ) {
    return ( {  struct Tuple2_915  dref3840 = ( ( Tuple2_915_Tuple2 ) ( (  l3837 ) ,  (  r3839 ) ) ) ;  dref3840 .field0 == CursorMovement_913_NoChanges &&  dref3840 .field1 == CursorMovement_913_NoChanges ? ( true ) :  dref3840 .field0 == CursorMovement_913_UpdateVI &&  dref3840 .field1 == CursorMovement_913_UpdateVI ? ( true ) :  dref3840 .field0 == CursorMovement_913_OverrideSelect &&  dref3840 .field1 == CursorMovement_913_OverrideSelect ? ( true ) : ( false ) ; } );
}

static  struct StrView_20   from_dash_bytes919 (    struct Slice_11  sl2143 ) {
    return ( (struct StrView_20) { .f_contents = (  sl2143 ) } );
}

static  struct StrView_20   line918 (    struct TextBuf_75 *  self3578 ,    int32_t  li3580 ) {
    return ( (  from_dash_bytes919 ) ( ( (  to_dash_slice294 ) ( ( (  get287 ) ( ( & ( ( * (  self3578 ) ) .f_buf ) ) ,  ( (  i32_dash_size229 ) ( (  li3580 ) ) ) ) ) ) ) ) );
}

static  int32_t   maybe922 (    struct Maybe_113  x1282 ,    int32_t (*  fun1284 )(    struct StrView_20  ) ,    int32_t  default1286 ) {
    return ( {  struct Maybe_113  dref1287 = (  x1282 ) ; dref1287.tag == Maybe_113_Just_t ? ( (  fun1284 ) ( ( dref1287 .stuff .Maybe_113_Just_s .field0 ) ) ) : (  default1286 ) ; } );
}

static  struct Maybe_113   char_dash_replacement923 (    struct Char_47  c3741 ) {
    if ( (  eq366 ( (  c3741 ) , ( (  from_dash_charlike188 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_113_Just ) ( ( (  from_dash_string187 ) ( ( "  " ) ,  ( 2 ) ) ) ) );
    } else {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
}

static  size_t   reduce926 (    struct StrViewIter_570  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrViewIter_570  it1099 = ( (  into_dash_iter572 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next574 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp927 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp927);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp928;
    return (  temp928 );
}

static  size_t   lam929 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count925 (    struct StrViewIter_570  it1104 ) {
    return ( (  reduce926 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam929 ) ) );
}

static  int32_t   lam924 (    struct StrView_20  s3746 ) {
    return ( (  size_dash_i32163 ) ( ( (  count925 ) ( ( (  chars575 ) ( (  s3746 ) ) ) ) ) ) );
}

static  int32_t   max931 (    int32_t  l1315 ,    int32_t  r1317 ) {
    if ( (  cmp389 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  void *   cast_dash_ptr937 (    wchar_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of938 (    wchar_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  wchar_t   zeroed935 (  ) {
    wchar_t  temp936;
    wchar_t  x570 = (  temp936 );
    ( ( memset ) ( ( (  cast_dash_ptr937 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of938 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  char *   cast_dash_ptr939 (    uint8_t *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  size_t   cast940 (    int64_t  x356 ) {
    return ( (size_t ) (  x356 ) );
}

struct TypeSize_943 {
    size_t  f_size;
};

static  struct TypeSize_943   get_dash_typesize942 (  ) {
    wchar_t  temp944;
    return ( (struct TypeSize_943) { .f_size = ( sizeof( ( (  temp944 ) ) ) ) } );
}

static  wchar_t   cast946 (    uint32_t  x356 ) {
    return ( (wchar_t ) (  x356 ) );
}

static  wchar_t   to_dash_c_dash_wchar933 (    struct Char_47  c750 ) {
    struct CharDestructured_172  dref751 = ( (  destructure174 ) ( (  c750 ) ) );
    if ( dref751.tag == CharDestructured_172_Ref_t ) {
        wchar_t  temp934 = ( (  zeroed935 ) ( ) );
        wchar_t *  wcp753 = ( &temp934 );
        size_t  num_dash_chars754 = ( ( mbstowcs ) ( (  wcp753 ) ,  ( (  cast_dash_ptr939 ) ( ( ( dref751 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq206 ( (  num_dash_chars754 ) , ( ( (  cast940 ) ( ( (  op_dash_neg877 ( (  from_dash_integral269 ( 1 ) ) ) ) ) ) ) ) ) ) ) {
            const char*  temp941 = ( (  from_dash_string39 ) ( ( "could NOT convert char to wchar_t :c" ) ,  ( 36 ) ) );
            printf("%s\n", temp941);
            exit ( 1 );
            ( Unit_6_Unit );
        }
        return ( * (  wcp753 ) );
    }
    else {
        if ( dref751.tag == CharDestructured_172_Scalar_t ) {
            if ( ( ! (  eq206 ( ( (  size_dash_of612 ) ( ( ( dref751 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) ) , ( ( ( (  get_dash_typesize942 ) ( ) ) ) .f_size ) ) ) ) ) {
                const char*  temp945 = ( (  from_dash_string39 ) ( ( "Scalar size should be the same as Cnile.WChar" ) ,  ( 45 ) ) );
                printf("%s\n", temp945);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            return ( (  cast946 ) ( ( ( dref751 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  int32_t   wcwidth932 (    struct Char_47  c2560 ) {
    return ( ( wcwidth ) ( ( (  to_dash_c_dash_wchar933 ) ( (  c2560 ) ) ) ) );
}

static  int32_t   rendered_dash_wcwidth930 (    struct Char_47  c3402 ) {
    return ( (  max931 ) ( ( (  wcwidth932 ) ( (  c3402 ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   char_dash_screen_dash_width921 (    struct Char_47  c3744 ) {
    return ( (  maybe922 ) ( ( (  char_dash_replacement923 ) ( (  c3744 ) ) ) ,  (  lam924 ) ,  ( (  rendered_dash_wcwidth930 ) ( (  c3744 ) ) ) ) );
}

static  int32_t   pos_dash_vi916 (    struct TextBuf_75 *  self3760 ,    struct Pos_19  pos3762 ) {
    int32_t  bi3763 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3764 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_570  temp917 =  into_dash_iter572 ( ( (  chars575 ) ( ( (  line918 ) ( (  self3760 ) ,  ( (  pos3762 ) .f_line ) ) ) ) ) );
    while (true) {
        struct Maybe_573  __cond920 =  next574 (&temp917);
        if (  __cond920 .tag == 0 ) {
            break;
        }
        struct Char_47  c3766 =  __cond920 .stuff .Maybe_573_Just_s .field0;
        bi3763 = (  op_dash_add241 ( (  bi3763 ) , ( (  size_dash_i32163 ) ( ( (  c3766 ) .f_num_dash_bytes ) ) ) ) );
        if ( (  cmp389 ( ( (  pos3762 ) .f_bi ) , (  bi3763 ) ) == 0 ) ) {
            break;
        }
        vi3764 = (  op_dash_add241 ( (  vi3764 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3766 ) ) ) ) );
    }
    return (  vi3764 );
}

struct Tuple2_949 {
    enum Mode_111  field0;
    enum Mode_111  field1;
};

static struct Tuple2_949 Tuple2_949_Tuple2 (  enum Mode_111  field0 ,  enum Mode_111  field1 ) {
    return ( struct Tuple2_949 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq948 (    enum Mode_111  l3724 ,    enum Mode_111  r3726 ) {
    return ( {  struct Tuple2_949  dref3727 = ( ( Tuple2_949_Tuple2 ) ( (  l3724 ) ,  (  r3726 ) ) ) ;  dref3727 .field0 == Mode_111_Normal &&  dref3727 .field1 == Mode_111_Normal ? ( true ) :  dref3727 .field0 == Mode_111_Insert &&  dref3727 .field1 == Mode_111_Insert ? ( true ) :  dref3727 .field0 == Mode_111_Select &&  dref3727 .field1 == Mode_111_Select ? ( true ) : ( false ) ; } );
}

static  enum Unit_6   set_dash_sel947 (    struct Pane_110 *  self3831 ,    struct Maybe_22  sel3833 ) {
    if ( ( !  eq948 ( ( ( * (  self3831 ) ) .f_mode ) , ( Mode_111_Select ) ) ) ) {
        (*  self3831 ) .f_sel = (  sel3833 );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_cursors912 (    struct Pane_110 *  self3843 ,    struct Pos_19  cur3845 ,    struct Maybe_22  sel3847 ,    enum CursorMovement_913  cursor_dash_movement_dash_type3849 ) {
    if ( ( ( !  eq914 ( (  cursor_dash_movement_dash_type3849 ) , ( CursorMovement_913_NoChanges ) ) ) && ( !  eq282 ( ( (  cur3845 ) .f_bi ) , ( ( ( * (  self3843 ) ) .f_cursor ) .f_bi ) ) ) ) ) {
        (*  self3843 ) .f_vi = ( (  pos_dash_vi916 ) ( ( ( * (  self3843 ) ) .f_buf ) ,  (  cur3845 ) ) );
    }
    (*  self3843 ) .f_cursor = (  cur3845 );
    if ( ( !  eq914 ( (  cursor_dash_movement_dash_type3849 ) , ( CursorMovement_913_OverrideSelect ) ) ) ) {
        ( (  set_dash_sel947 ) ( (  self3843 ) ,  (  sel3847 ) ) );
    } else {
        (*  self3843 ) .f_sel = (  sel3847 );
    }
    return ( Unit_6_Unit );
}

static  size_t   num_dash_bytes951 (    struct StrView_20  self2186 ) {
    return ( ( (  self2186 ) .f_contents ) .f_count );
}

static  size_t   clamp952 (    size_t  x1352 ,    size_t  mn1354 ,    size_t  mx1356 ) {
    if ( (  cmp151 ( (  x1352 ) , (  mn1354 ) ) == 0 ) ) {
        return (  mn1354 );
    } else {
        if ( (  cmp151 ( (  x1352 ) , (  mx1356 ) ) == 2 ) ) {
            return (  mx1356 );
        } else {
            return (  x1352 );
        }
    }
}

static  size_t   sync_dash_char954 (    uint8_t *  p692 ) {
    size_t  i693 = (  from_dash_integral0 ( 0 ) );
    while ( ( true ) ) {
        uint8_t  pb694 = ( * ( (uint8_t * ) ( ( (void*) (  p692 ) ) + (  op_dash_neg877 ( ( (  size_dash_i64228 ) ( (  i693 ) ) ) ) ) ) ) );
        if ( ( ! ( (  cmp192 ( (  pb694 ) , (  from_dash_integral179 ( 128 ) ) ) != 0 ) && (  cmp192 ( (  pb694 ) , (  op_dash_add749 ( (  from_dash_integral179 ( 128 ) ) , (  from_dash_integral179 ( 64 ) ) ) ) ) == 0 ) ) ) ) {
            return (  i693 );
        }
        i693 = (  op_dash_add199 ( (  i693 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
}

static  size_t   previous_dash_char953 (    uint8_t *  p697 ) {
    return (  op_dash_add199 ( ( (  sync_dash_char954 ) ( ( (  offset_dash_ptr291 ) ( (  p697 ) ,  (  op_dash_neg877 ( (  from_dash_integral269 ( 1 ) ) ) ) ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  struct Pos_19   left_dash_pos950 (    struct TextBuf_75 *  self3594 ,    struct Pos_19  pos3596 ) {
    if ( (  eq281 ( (  pos3596 ) , ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ) ) ) {
        return ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    if ( (  eq282 ( ( (  pos3596 ) .f_bi ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        ( (  assert443 ) ( (  cmp389 ( ( (  pos3596 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ,  ( (  from_dash_string187 ) ( ( "previous condition should have eliminated this possibility" ) ,  ( 58 ) ) ) ) );
        return ( (  mk470 ) ( (  op_dash_sub779 ( ( (  pos3596 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( ( (  line918 ) ( (  self3594 ) ,  (  op_dash_sub779 ( ( (  pos3596 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ) );
    }
    struct StrView_20  line3597 = ( (  line918 ) ( (  self3594 ) ,  ( (  pos3596 ) .f_line ) ) );
    size_t  pos_dash_bi3598 = ( (  clamp952 ) ( ( (  i32_dash_size229 ) ( ( (  pos3596 ) .f_bi ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  num_dash_bytes951 ) ( (  line3597 ) ) ) ) );
    size_t  off3599 = ( (  previous_dash_char953 ) ( ( (  offset_dash_ptr291 ) ( ( ( (  line3597 ) .f_contents ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  pos_dash_bi3598 ) ) ) ) ) ) );
    return ( (  mk470 ) ( ( (  pos3596 ) .f_line ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( (  pos_dash_bi3598 ) , (  off3599 ) ) ) ) ) ) );
}

static  enum Unit_6   move_dash_left911 (    struct Pane_110 *  self3855 ) {
    ( (  set_dash_cursors912 ) ( (  self3855 ) ,  ( (  left_dash_pos950 ) ( ( ( * (  self3855 ) ) .f_buf ) ,  ( ( * (  self3855 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_UpdateVI ) ) );
    return ( Unit_6_Unit );
}

static  struct Pane_110 *   pane955 (    struct Editor_109 *  ed3952 ) {
    return ( & ( ( * (  ed3952 ) ) .f_pane ) );
}

static  int32_t   num_dash_lines958 (    struct TextBuf_75 *  self3583 ) {
    return ( (  size_dash_i32163 ) ( ( (  size283 ) ( ( & ( ( * (  self3583 ) ) .f_buf ) ) ) ) ) );
}

static  struct Pos_19   right_dash_pos957 (    struct TextBuf_75 *  self3586 ,    struct Pos_19  pos3588 ) {
    if ( (  cmp389 ( ( (  pos3588 ) .f_line ) , ( (  num_dash_lines958 ) ( (  self3586 ) ) ) ) != 0 ) ) {
        return ( (  mk470 ) ( ( (  num_dash_lines958 ) ( (  self3586 ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    struct StrView_20  line3589 = ( (  line918 ) ( (  self3586 ) ,  ( (  pos3588 ) .f_line ) ) );
    int64_t  bi3590 = ( (  i32_dash_i64827 ) ( ( (  pos3588 ) .f_bi ) ) );
    if ( (  cmp876 ( (  bi3590 ) , ( (  size_dash_i64228 ) ( ( (  num_dash_bytes951 ) ( (  line3589 ) ) ) ) ) ) != 0 ) ) {
        if ( (  cmp389 ( (  op_dash_add241 ( ( (  pos3588 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines958 ) ( (  self3586 ) ) ) ) != 0 ) ) {
            return ( (  mk470 ) ( ( (  pos3588 ) .f_line ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( (  line3589 ) ) ) ) ) ) );
        }
        return ( (  mk470 ) ( (  op_dash_add241 ( ( (  pos3588 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    }
    int32_t  off3591 = ( (  size_dash_i32163 ) ( ( (  next_dash_char191 ) ( ( (  offset_dash_ptr291 ) ( ( ( (  line3589 ) .f_contents ) .f_ptr ) ,  (  bi3590 ) ) ) ) ) ) );
    return ( (  mk470 ) ( ( (  pos3588 ) .f_line ) ,  (  op_dash_add241 ( ( (  pos3588 ) .f_bi ) , (  off3591 ) ) ) ) );
}

static  enum Unit_6   move_dash_right956 (    struct Pane_110 *  self3852 ) {
    ( (  set_dash_cursors912 ) ( (  self3852 ) ,  ( (  right_dash_pos957 ) ( ( ( * (  self3852 ) ) .f_buf ) ,  ( ( * (  self3852 ) ) .f_cursor ) ) ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_UpdateVI ) ) );
    return ( Unit_6_Unit );
}

static  int32_t   vi_dash_bi960 (    struct TextBuf_75 *  self3749 ,    int32_t  ln3751 ,    int32_t  vx3753 ) {
    int32_t  bi3754 = ( (  from_dash_integral38 ( 0 ) ) );
    int32_t  vi3755 = (  from_dash_integral38 ( 0 ) );
    struct StrViewIter_570  temp961 =  into_dash_iter572 ( ( (  chars575 ) ( ( (  line918 ) ( (  self3749 ) ,  (  ln3751 ) ) ) ) ) );
    while (true) {
        struct Maybe_573  __cond962 =  next574 (&temp961);
        if (  __cond962 .tag == 0 ) {
            break;
        }
        struct Char_47  c3757 =  __cond962 .stuff .Maybe_573_Just_s .field0;
        vi3755 = (  op_dash_add241 ( (  vi3755 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3757 ) ) ) ) );
        if ( (  cmp389 ( (  vx3753 ) , (  vi3755 ) ) == 0 ) ) {
            break;
        }
        bi3754 = (  op_dash_add241 ( (  bi3754 ) , ( (  size_dash_i32163 ) ( ( (  c3757 ) .f_num_dash_bytes ) ) ) ) );
    }
    return (  bi3754 );
}

static  enum Unit_6   move_dash_down959 (    struct Pane_110 *  self3858 ) {
    struct Pos_19  cur3859 = ( ( * (  self3858 ) ) .f_cursor );
    if ( (  cmp389 ( (  op_dash_add241 ( ( (  cur3859 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  num_dash_lines958 ) ( ( ( * (  self3858 ) ) .f_buf ) ) ) ) != 0 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3860 = ( ( * (  self3858 ) ) .f_vi );
    int32_t  bi3861 = ( (  vi_dash_bi960 ) ( ( ( * (  self3858 ) ) .f_buf ) ,  (  op_dash_add241 ( ( (  cur3859 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3860 ) ) );
    ( (  set_dash_cursors912 ) ( (  self3858 ) ,  ( (struct Pos_19) { .f_line = (  op_dash_add241 ( ( (  cur3859 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3861 ) } ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_NoChanges ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_up963 (    struct Pane_110 *  self3864 ) {
    struct Pos_19  cur3865 = ( ( * (  self3864 ) ) .f_cursor );
    if ( (  cmp389 ( ( (  cur3865 ) .f_line ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  vci3866 = ( ( * (  self3864 ) ) .f_vi );
    int32_t  bi3867 = ( (  vi_dash_bi960 ) ( ( ( * (  self3864 ) ) .f_buf ) ,  (  op_dash_sub779 ( ( (  cur3865 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  vci3866 ) ) );
    ( (  set_dash_cursors912 ) ( (  self3864 ) ,  ( (struct Pos_19) { .f_line = (  op_dash_sub779 ( ( (  cur3865 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_bi = (  bi3867 ) } ) ,  ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) ,  ( CursorMovement_913_NoChanges ) ) );
    return ( Unit_6_Unit );
}

enum MoveDirection_965 {
    MoveDirection_965_MoveFwd,
    MoveDirection_965_MoveBwd,
};

enum MoveTarget_966 {
    MoveTarget_966_NextWordStart,
    MoveTarget_966_NextWordEnd,
};

static  struct Pos_19   own968 (    struct Pos_19  x1251 ) {
    return (  x1251 );
}

struct env969 {
    ;
    struct Pos_19 *  prev3889;
    struct Pane_110 *  pane3884;
    enum MoveDirection_965  dir3886;
    ;
};

struct envunion971 {
    enum Unit_6  (*fun) (  struct env969*  );
    struct env969 env;
};

static  enum Unit_6   advance972 (   struct env969* env ) {
    (* env->prev3889 ) = ( ( * ( env->pane3884 ) ) .f_cursor );
    enum MoveDirection_965  dref3891 = ( env->dir3886 );
    switch (  dref3891 ) {
        case MoveDirection_965_MoveFwd : {
            ( (  move_dash_right956 ) ( ( env->pane3884 ) ) );
            break;
        }
        case MoveDirection_965_MoveBwd : {
            ( (  move_dash_left911 ) ( ( env->pane3884 ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  bool   cursor_dash_is_dash_at_dash_line_dash_end973 (    struct Pane_110 *  pane3870 ) {
    struct Pos_19  cur3871 = ( ( * (  pane3870 ) ) .f_cursor );
    return (  eq206 ( ( (  i32_dash_size229 ) ( ( (  cur3871 ) .f_bi ) ) ) , ( (  num_dash_bytes951 ) ( ( (  line918 ) ( ( ( * (  pane3870 ) ) .f_buf ) ,  ( (  cur3871 ) .f_line ) ) ) ) ) ) );
}

struct envunion975 {
    enum Unit_6  (*fun) (  struct env969*  );
    struct env969 env;
};

enum CharType_978 {
    CharType_978_CharSpace,
    CharType_978_CharWord,
    CharType_978_CharPunctuation,
};

struct Tuple2_979 {
    enum CharType_978  field0;
    enum CharType_978  field1;
};

static struct Tuple2_979 Tuple2_979_Tuple2 (  enum CharType_978  field0 ,  enum CharType_978  field1 ) {
    return ( struct Tuple2_979 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq977 (    enum CharType_978  l3705 ,    enum CharType_978  r3707 ) {
    struct Tuple2_979  dref3708 = ( ( Tuple2_979_Tuple2 ) ( (  l3705 ) ,  (  r3707 ) ) );
    if (  dref3708 .field0 == CharType_978_CharSpace &&  dref3708 .field1 == CharType_978_CharSpace ) {
        return ( true );
    }
    else {
        if (  dref3708 .field0 == CharType_978_CharWord &&  dref3708 .field1 == CharType_978_CharWord ) {
            return ( true );
        }
        else {
            if (  dref3708 .field0 == CharType_978_CharPunctuation &&  dref3708 .field1 == CharType_978_CharPunctuation ) {
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

static  struct Char_47   min984 (    struct Char_47  l1236 ,    struct Char_47  r1238 ) {
    if ( (  cmp746 ( (  l1236 ) , (  r1238 ) ) == 0 ) ) {
        return (  l1236 );
    } else {
        return (  r1238 );
    }
}

static  struct Char_47   max985 (    struct Char_47  l1315 ,    struct Char_47  r1317 ) {
    if ( (  cmp746 ( (  l1315 ) , (  r1317 ) ) == 2 ) ) {
        return (  l1315 );
    } else {
        return (  r1317 );
    }
}

static  bool   between983 (    struct Char_47  c1337 ,    struct Char_47  l1339 ,    struct Char_47  r1341 ) {
    struct Char_47  from1342 = ( (  min984 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Char_47  to1343 = ( (  max985 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp746 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp746 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_alpha982 (    struct Char_47  c2376 ) {
    return ( ( (  cmp151 ( ( (  c2376 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) || ( (  between983 ) ( (  c2376 ) ,  ( (  from_dash_charlike188 ) ( ( "a" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "z" ) ,  ( 1 ) ) ) ) ) ) || ( (  between983 ) ( (  c2376 ) ,  ( (  from_dash_charlike188 ) ( ( "A" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "Z" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_digit986 (    struct Char_47  c2379 ) {
    return ( (  eq206 ( ( (  c2379 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) && ( (  between983 ) ( (  c2379 ) ,  ( (  from_dash_charlike188 ) ( ( "0" ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) );
}

static  bool   is_dash_alphanumeric981 (    struct Char_47  c2382 ) {
    return ( ( (  is_dash_alpha982 ) ( (  c2382 ) ) ) || ( (  is_dash_digit986 ) ( (  c2382 ) ) ) );
}

static  bool   is_dash_whitespace987 (    struct Char_47  c2367 ) {
    return ( ( (  eq366 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq366 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq366 ( (  c2367 ) , ( (  from_dash_charlike188 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum CharType_978   char_dash_type980 (    struct Char_47  c3711 ) {
    if ( ( ( ( (  is_dash_alphanumeric981 ) ( (  c3711 ) ) ) || (  eq366 ( (  c3711 ) , ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) || (  eq366 ( (  c3711 ) , ( (  from_dash_charlike188 ) ( ( "_" ) ,  ( 1 ) ) ) ) ) ) ) {
        return ( CharType_978_CharWord );
    } else {
        if ( ( (  is_dash_whitespace987 ) ( (  c3711 ) ) ) ) {
            return ( CharType_978_CharSpace );
        } else {
            return ( CharType_978_CharPunctuation );
        }
    }
}

static  bool   is_dash_word_dash_boundary976 (    struct Char_47  l3714 ,    struct Char_47  r3716 ) {
    return ( !  eq977 ( ( (  char_dash_type980 ) ( (  l3714 ) ) ) , ( (  char_dash_type980 ) ( (  r3716 ) ) ) ) );
}

static  struct Char_47   or_dash_else989 (    struct Maybe_573  self1732 ,    struct Char_47  alt1734 ) {
    struct Maybe_573  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_573_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_573_Just_t ) {
            return ( dref1735 .stuff .Maybe_573_Just_s .field0 );
        }
    }
}

static  struct Maybe_573   head990 (    struct StrViewIter_570  it1142 ) {
    struct StrViewIter_570  temp991 = ( (  into_dash_iter572 ) ( (  it1142 ) ) );
    return ( (  next574 ) ( ( &temp991 ) ) );
}

static  struct Char_47   char_dash_at988 (    struct Pane_110 *  pane3769 ,    struct Pos_19  pos3771 ) {
    struct StrView_20  line3772 = ( (  line918 ) ( ( ( * (  pane3769 ) ) .f_buf ) ,  ( (  pos3771 ) .f_line ) ) );
    return ( (  or_dash_else989 ) ( ( (  head990 ) ( ( (  chars575 ) ( ( (  byte_dash_substr348 ) ( (  line3772 ) ,  ( (  i32_dash_size229 ) ( ( (  pos3771 ) .f_bi ) ) ) ,  ( (  num_dash_bytes951 ) ( (  line3772 ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
}

struct envunion993 {
    enum Unit_6  (*fun) (  struct env969*  );
    struct env969 env;
};

static  enum Unit_6   print996 (    struct StrView_20  s1701 ) {
    ( (  for_dash_each569 ) ( ( (  chars575 ) ( (  s1701 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  bool   undefined997 (  ) {
    bool  temp998;
    return (  temp998 );
}

static  bool   todo995 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined997 ) ( ) );
}

static  bool   reached_dash_target994 (    struct Pane_110 *  pane3876 ,    enum MoveTarget_966  target3878 ,    struct Pos_19  prev3880 ) {
    return ( {  enum MoveTarget_966  dref3881 = (  target3878 ) ;  dref3881 == MoveTarget_966_NextWordStart ? ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3876 ) ,  (  prev3880 ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3876 ) ,  ( ( * (  pane3876 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq977 ( ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( (  pane3876 ) ,  ( ( * (  pane3876 ) ) .f_cursor ) ) ) ) ) , ( CharType_978_CharSpace ) ) ) ) ) :  dref3881 == MoveTarget_966_NextWordEnd ? ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3876 ) ,  (  prev3880 ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3876 ) ,  ( ( * (  pane3876 ) ) .f_cursor ) ) ) ) ) && ( ! (  eq977 ( ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( (  pane3876 ) ,  (  prev3880 ) ) ) ) ) , ( CharType_978_CharSpace ) ) ) ) ) : ( (  todo995 ) ( ) ) ; } );
}

static  enum Unit_6   advance_dash_word964 (    struct Pane_110 *  pane3884 ,    enum MoveDirection_965  dir3886 ,    enum MoveTarget_966  target3888 ) {
    struct Pos_19  temp967 = ( (  own968 ) ( ( ( * (  pane3884 ) ) .f_cursor ) ) );
    struct Pos_19 *  prev3889 = ( &temp967 );
    struct env969 envinst969 = {
        .prev3889 =  prev3889 ,
        .pane3884 =  pane3884 ,
        .dir3886 =  dir3886 ,
    };
    struct Pos_19  sel3892 = ( ( * (  pane3884 ) ) .f_cursor );
    struct envunion971  temp970 = ( (struct envunion971){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
    ( temp970.fun ( &temp970.env ) );
    while ( ( (  cursor_dash_is_dash_at_dash_line_dash_end973 ) ( (  pane3884 ) ) ) ) {
        if ( (  eq281 ( ( ( * (  pane3884 ) ) .f_cursor ) , ( * (  prev3889 ) ) ) ) ) {
            return ( Unit_6_Unit );
        }
        struct envunion975  temp974 = ( (struct envunion975){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
        ( temp974.fun ( &temp974.env ) );
        sel3892 = ( ( * (  pane3884 ) ) .f_cursor );
    }
    if ( ( (  is_dash_word_dash_boundary976 ) ( ( (  char_dash_at988 ) ( (  pane3884 ) ,  ( * (  prev3889 ) ) ) ) ,  ( (  char_dash_at988 ) ( (  pane3884 ) ,  ( ( * (  pane3884 ) ) .f_cursor ) ) ) ) ) ) {
        sel3892 = ( ( * (  pane3884 ) ) .f_cursor );
    }
    while ( ( true ) ) {
        struct envunion993  temp992 = ( (struct envunion993){ .fun = (  enum Unit_6  (*) (  struct env969*  ) )advance972 , .env =  envinst969 } );
        ( temp992.fun ( &temp992.env ) );
        if ( ( ( (  cursor_dash_is_dash_at_dash_line_dash_end973 ) ( (  pane3884 ) ) ) || ( (  reached_dash_target994 ) ( (  pane3884 ) ,  (  target3888 ) ,  ( * (  prev3889 ) ) ) ) ) ) {
            enum MoveDirection_965  dref3893 = (  dir3886 );
            switch (  dref3893 ) {
                case MoveDirection_965_MoveFwd : {
                    ( (  move_dash_left911 ) ( (  pane3884 ) ) );
                    break;
                }
                case MoveDirection_965_MoveBwd : {
                    ( (  move_dash_right956 ) ( (  pane3884 ) ) );
                    break;
                }
            }
            break;
        }
        if ( (  eq281 ( ( * (  prev3889 ) ) , ( ( * (  pane3884 ) ) .f_cursor ) ) ) ) {
            break;
        }
    }
    ( (  set_dash_sel947 ) ( (  pane3884 ) ,  ( ( Maybe_22_Just ) ( (  sel3892 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  size_t   size1003 (    struct List_16 *  l2127 ) {
    return ( ( * (  l2127 ) ) .f_count );
}

static  struct Action_18 *   offset_dash_ptr1008 (    struct Action_18 *  x338 ,    int64_t  count340 ) {
    struct Action_18  temp1009;
    return ( (struct Action_18 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul197 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp1009 ) ) ) ) ) ) ) ) );
}

static  struct Action_18 *   get_dash_ptr1007 (    struct Slice_17  slice1757 ,    size_t  i1759 ) {
    if ( ( (  cmp151 ( (  i1759 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1759 ) , ( (  slice1757 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1759 ) ) ) ,  ( (  from_dash_string187 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1757 ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Action_18 *  elem_dash_ptr1760 = ( (  offset_dash_ptr1008 ) ( ( (  slice1757 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  i1759 ) ) ) ) );
    return (  elem_dash_ptr1760 );
}

static  struct Action_18 *   get_dash_ptr1006 (    struct List_16 *  list1995 ,    size_t  i1997 ) {
    if ( ( (  cmp151 ( (  i1997 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp151 ( (  i1997 ) , ( ( * (  list1995 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic219 ) ( ( ( StrConcat_220_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Access to list at index " ) ,  ( 24 ) ) ) ,  (  i1997 ) ) ) ,  ( (  from_dash_string187 ) ( ( " (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list1995 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr1007 ) ( ( ( * (  list1995 ) ) .f_elements ) ,  (  i1997 ) ) );
}

static  struct Action_18   get1005 (    struct List_16 *  list2005 ,    size_t  i2007 ) {
    return ( * ( (  get_dash_ptr1006 ) ( (  list2005 ) ,  (  i2007 ) ) ) );
}

static  struct Action_18   elem_dash_get1004 (    struct List_16  self2075 ,    size_t  k2077 ) {
    return ( (  get1005 ) ( ( & (  self2075 ) ) ,  (  k2077 ) ) );
}

static  struct Pos_19   action_dash_fwd1011 (   struct env80* env ,    struct TextBuf_75 *  self3642 ,    struct Action_18  action3644 ) {
    struct envunion81  temp1012 = ( (struct envunion81){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  env->envinst70 } );
    ( temp1012.fun ( &temp1012.env ,  (  self3642 ) ,  ( (  action3644 ) .f_from ) ,  ( (  action3644 ) .f_to_dash_bwd ) ,  ( (  action3644 ) .f_fwd ) ) );
    return ( (  action3644 ) .f_to_dash_fwd );
}

static  struct Maybe_90   redo1002 (   struct env84* env ,    struct TextBuf_75 *  self3652 ) {
    struct Actions_76 *  actions3653 = ( & ( ( * (  self3652 ) ) .f_actions ) );
    if ( (  cmp151 ( ( ( * (  actions3653 ) ) .f_cur ) , ( (  size1003 ) ( ( & ( ( * (  actions3653 ) ) .f_list ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    struct Action_18  action3654 = (  elem_dash_get1004 ( ( ( * (  actions3653 ) ) .f_list ) , ( ( * (  actions3653 ) ) .f_cur ) ) );
    struct envunion85  temp1010 = ( (struct envunion85){ .fun = (  struct Pos_19  (*) (  struct env80*  ,    struct TextBuf_75 *  ,    struct Action_18  ) )action_dash_fwd1011 , .env =  env->envinst80 } );
    struct Pos_19  to_dash_fwd3655 = ( temp1010.fun ( &temp1010.env ,  (  self3652 ) ,  (  action3654 ) ) );
    (*  actions3653 ) .f_cur = (  op_dash_add199 ( ( ( * (  actions3653 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    if ( (  cmp151 ( ( (  num_dash_bytes951 ) ( ( (  action3654 ) .f_fwd ) ) ) , (  from_dash_integral0 ( 1 ) ) ) == 2 ) ) {
        to_dash_fwd3655 = ( (  left_dash_pos950 ) ( (  self3652 ) ,  (  to_dash_fwd3655 ) ) );
    }
    return ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = (  to_dash_fwd3655 ) , .f_sel = ( ( Maybe_22_Just ) ( ( (  action3654 ) .f_from ) ) ) } ) ) );
}

struct env1014 {
    struct Pane_110 *  self3922;
    ;
};

struct envunion1015 {
    enum Unit_6  (*fun) (  struct env1014*  ,    struct Cursors_21  );
    struct env1014 env;
};

static  enum Unit_6   if_dash_just1013 (    struct Maybe_90  x1291 ,   struct envunion1015  fun1293 ) {
    struct Maybe_90  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_90_Just_t ) {
        struct envunion1015  temp1016 = (  fun1293 );
        ( temp1016.fun ( &temp1016.env ,  ( dref1294 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1017 (   struct env1014* env ,    struct Cursors_21  cursors3925 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3922 ) ,  ( (  cursors3925 ) .f_cur ) ,  ( (  cursors3925 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   redo1000 (   struct env99* env ,    struct Pane_110 *  self3922 ) {
    struct envunion100  temp1001 = ( (struct envunion100){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_75 *  ) )redo1002 , .env =  env->envinst84 } );
    struct Maybe_90  mcursors3923 = ( temp1001.fun ( &temp1001.env ,  ( ( * (  self3922 ) ) .f_buf ) ) );
    struct env1014 envinst1014 = {
        .self3922 =  self3922 ,
    };
    ( (  if_dash_just1013 ) ( (  mcursors3923 ) ,  ( (struct envunion1015){ .fun = (  enum Unit_6  (*) (  struct env1014*  ,    struct Cursors_21  ) )lam1017 , .env =  envinst1014 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Pos_19   action_dash_bwd1023 (   struct env78* env ,    struct TextBuf_75 *  self3637 ,    struct Action_18  action3639 ) {
    struct envunion79  temp1024 = ( (struct envunion79){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  env->envinst70 } );
    ( temp1024.fun ( &temp1024.env ,  (  self3637 ) ,  ( (  action3639 ) .f_from ) ,  ( (  action3639 ) .f_to_dash_fwd ) ,  ( (  action3639 ) .f_bwd ) ) );
    return ( (  action3639 ) .f_to_dash_bwd );
}

static  struct Maybe_90   undo1021 (   struct env82* env ,    struct TextBuf_75 *  self3647 ) {
    struct Actions_76 *  actions3648 = ( & ( ( * (  self3647 ) ) .f_actions ) );
    if ( (  eq206 ( ( ( * (  actions3648 ) ) .f_cur ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_90) { .tag = Maybe_90_None_t } );
    }
    (*  actions3648 ) .f_cur = (  op_dash_sub270 ( ( ( * (  actions3648 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    struct Action_18  action3649 = (  elem_dash_get1004 ( ( ( * (  actions3648 ) ) .f_list ) , ( ( * (  actions3648 ) ) .f_cur ) ) );
    struct envunion83  temp1022 = ( (struct envunion83){ .fun = (  struct Pos_19  (*) (  struct env78*  ,    struct TextBuf_75 *  ,    struct Action_18  ) )action_dash_bwd1023 , .env =  env->envinst78 } );
    ( temp1022.fun ( &temp1022.env ,  (  self3647 ) ,  (  action3649 ) ) );
    return ( ( Maybe_90_Just ) ( ( (  action3649 ) .f_before_dash_cursors ) ) );
}

struct env1026 {
    ;
    struct Pane_110 *  self3916;
};

struct envunion1027 {
    enum Unit_6  (*fun) (  struct env1026*  ,    struct Cursors_21  );
    struct env1026 env;
};

static  enum Unit_6   if_dash_just1025 (    struct Maybe_90  x1291 ,   struct envunion1027  fun1293 ) {
    struct Maybe_90  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_90_Just_t ) {
        struct envunion1027  temp1028 = (  fun1293 );
        ( temp1028.fun ( &temp1028.env ,  ( dref1294 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1029 (   struct env1026* env ,    struct Cursors_21  cursors3919 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3916 ) ,  ( (  cursors3919 ) .f_cur ) ,  ( (  cursors3919 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   undo1019 (   struct env97* env ,    struct Pane_110 *  self3916 ) {
    struct envunion98  temp1020 = ( (struct envunion98){ .fun = (  struct Maybe_90  (*) (  struct env82*  ,    struct TextBuf_75 *  ) )undo1021 , .env =  env->envinst82 } );
    struct Maybe_90  mcursors3917 = ( temp1020.fun ( &temp1020.env ,  ( ( * (  self3916 ) ) .f_buf ) ) );
    struct env1026 envinst1026 = {
        .self3916 =  self3916 ,
    };
    ( (  if_dash_just1025 ) ( (  mcursors3917 ) ,  ( (struct envunion1027){ .fun = (  enum Unit_6  (*) (  struct env1026*  ,    struct Cursors_21  ) )lam1029 , .env =  envinst1026 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_117   minmax1033 (    struct Pos_19  l1329 ,    struct Pos_19  r1331 ) {
    return ( (  cmp388 ( (  l1329 ) , (  r1331 ) ) == 0 ) ? ( ( Tuple2_117_Tuple2 ) ( (  l1329 ) ,  (  r1331 ) ) ) : ( ( Tuple2_117_Tuple2 ) ( (  r1331 ) ,  (  l1329 ) ) ) );
}

static  struct Pos_19   or_dash_else1034 (    struct Maybe_22  self1732 ,    struct Pos_19  alt1734 ) {
    struct Maybe_22  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_22_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_22_Just_t ) {
            return ( dref1735 .stuff .Maybe_22_Just_s .field0 );
        }
    }
}

static  struct Pos_19   fst1035 (    struct Tuple2_117  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_19   snd1036 (    struct Tuple2_117  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct Tuple2_117   selection1032 (    struct Pane_110 *  self3928 ) {
    struct Tuple2_117  from_dash_to3929 = ( (  minmax1033 ) ( ( (  or_dash_else1034 ) ( ( ( * (  self3928 ) ) .f_sel ) ,  ( ( * (  self3928 ) ) .f_cursor ) ) ) ,  ( ( * (  self3928 ) ) .f_cursor ) ) );
    struct Pos_19  from3930 = ( (  fst1035 ) ( (  from_dash_to3929 ) ) );
    struct Pos_19  to3931 = ( (  right_dash_pos957 ) ( ( ( * (  self3928 ) ) .f_buf ) ,  ( (  snd1036 ) ( (  from_dash_to3929 ) ) ) ) );
    return ( ( Tuple2_117_Tuple2 ) ( (  from3930 ) ,  (  to3931 ) ) );
}

static  struct StrView_20   clone_dash_01040 (    struct StrView_20  s2146 ,    enum CAllocator_8  al2148 ) {
    size_t  cnt2149 = ( ( (  s2146 ) .f_contents ) .f_count );
    struct Slice_11  nus2150 = ( (  allocate315 ) ( (  al2148 ) ,  (  op_dash_add199 ( (  cnt2149 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to418 ) ( ( (  s2146 ) .f_contents ) ,  (  nus2150 ) ) );
    ( (  set324 ) ( (  nus2150 ) ,  (  cnt2149 ) ,  ( (  char_dash_u8347 ) ( ( (  from_dash_charlike188 ) ( ( "\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( (  nus2150 ) .f_ptr ) , .f_count = (  cnt2149 ) } ) } );
}

static  struct StrView_20   clone1039 (    struct StrView_20  s2153 ,    enum CAllocator_8  al2155 ) {
    return ( (  clone_dash_01040 ) ( (  s2153 ) ,  (  al2155 ) ) );
}

struct envunion1043 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

struct envunion1048 {
    enum Unit_6  (*fun) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  );
    struct env30 env;
};

static  struct StrView_20   str_dash_between1038 (   struct env86* env ,    struct TextBuf_75 *  self3670 ,    struct Pos_19  from3672 ,    struct Pos_19  to3674 ) {
    enum CAllocator_8  al3675 = ( ( ( * (  self3670 ) ) .f_buf ) .f_al );
    if ( (  eq282 ( ( (  from3672 ) .f_line ) , ( (  to3674 ) .f_line ) ) ) ) {
        size_t  from_dash_bi3676 = ( (  i32_dash_size229 ) ( ( (  min435 ) ( ( (  from3672 ) .f_bi ) ,  ( (  to3674 ) .f_bi ) ) ) ) );
        size_t  to_dash_bi3677 = ( (  i32_dash_size229 ) ( ( (  max931 ) ( ( (  from3672 ) .f_bi ) ,  ( (  to3674 ) .f_bi ) ) ) ) );
        return ( (  clone1039 ) ( ( (  byte_dash_substr348 ) ( ( (  line918 ) ( (  self3670 ) ,  ( (  from3672 ) .f_line ) ) ) ,  (  from_dash_bi3676 ) ,  (  to_dash_bi3677 ) ) ) ,  (  al3675 ) ) );
    } else {
        struct Pos_19  from_dash_pos3678 = ( (  min387 ) ( (  from3672 ) ,  (  to3674 ) ) );
        struct Pos_19  to_dash_pos3679 = ( (  max390 ) ( (  from3672 ) ,  (  to3674 ) ) );
        struct List_10  temp1041 = ( (  mk250 ) ( (  al3675 ) ) );
        struct List_10 *  sb3680 = ( &temp1041 );
        struct StrView_20  first_dash_line3681 = ( (  line918 ) ( (  self3670 ) ,  ( (  from_dash_pos3678 ) .f_line ) ) );
        struct envunion1043  temp1042 = ( (struct envunion1043){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
        ( temp1042.fun ( &temp1042.env ,  (  sb3680 ) ,  ( ( (  byte_dash_substr348 ) ( (  first_dash_line3681 ) ,  ( (  i32_dash_size229 ) ( ( (  from_dash_pos3678 ) .f_bi ) ) ) ,  ( (  num_dash_bytes951 ) ( (  first_dash_line3681 ) ) ) ) ) .f_contents ) ) );
        struct RangeIter_656  temp1044 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( ( (  from_dash_pos3678 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  op_dash_sub779 ( ( (  to_dash_pos3679 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_239  __cond1045 =  next659 (&temp1044);
            if (  __cond1045 .tag == 0 ) {
                break;
            }
            int32_t  i3683 =  __cond1045 .stuff .Maybe_239_Just_s .field0;
            struct envunion87  temp1046 = ( (struct envunion87){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
            ( temp1046.fun ( &temp1046.env ,  (  sb3680 ) ,  ( ( (  line918 ) ( (  self3670 ) ,  (  i3683 ) ) ) .f_contents ) ) );
        }
        struct envunion1048  temp1047 = ( (struct envunion1048){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
        ( temp1047.fun ( &temp1047.env ,  (  sb3680 ) ,  ( ( (  byte_dash_substr348 ) ( ( (  line918 ) ( (  self3670 ) ,  ( (  to_dash_pos3679 ) .f_line ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size229 ) ( ( (  to_dash_pos3679 ) .f_bi ) ) ) ) ) .f_contents ) ) );
        return ( (  from_dash_bytes919 ) ( ( (  to_dash_slice294 ) ( ( * (  sb3680 ) ) ) ) ) );
    }
}

struct env1050 {
    struct Editor_109 *  ed3955;
    ;
};

struct envunion1051 {
    enum Unit_6  (*fun) (  struct env1050*  ,    struct StrView_20  );
    struct env1050 env;
};

static  enum Unit_6   if_dash_just1049 (    struct Maybe_113  x1291 ,   struct envunion1051  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1051  temp1052 = (  fun1293 );
        ( temp1052.fun ( &temp1052.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1053 (   struct env1050* env ,    struct StrView_20  cp3959 ) {
    ( (  free905 ) ( (  cp3959 ) ,  ( ( * ( env->ed3955 ) ) .f_al ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   copy_dash_selection_dash_to_dash_clipboard1031 (   struct env103* env ,    struct Editor_109 *  ed3955 ) {
    struct Tuple2_117  from_dash_to3956 = ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3955 ) ) ) ) );
    struct envunion104  temp1037 = ( (struct envunion104){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1038 , .env =  env->envinst86 } );
    struct StrView_20  cpd3957 = ( temp1037.fun ( &temp1037.env ,  ( ( ( * (  ed3955 ) ) .f_pane ) .f_buf ) ,  ( (  fst1035 ) ( (  from_dash_to3956 ) ) ) ,  ( (  snd1036 ) ( (  from_dash_to3956 ) ) ) ) );
    struct env1050 envinst1050 = {
        .ed3955 =  ed3955 ,
    };
    ( (  if_dash_just1049 ) ( ( ( * (  ed3955 ) ) .f_clipboard ) ,  ( (struct envunion1051){ .fun = (  enum Unit_6  (*) (  struct env1050*  ,    struct StrView_20  ) )lam1053 , .env =  envinst1050 } ) ) );
    (*  ed3955 ) .f_clipboard = ( ( Maybe_113_Just ) ( (  cpd3957 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1055 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct SliceIter_1061 {
    struct Slice_17  f_slice;
    size_t  f_current_dash_offset;
};

struct Drop_1060 {
    struct SliceIter_1061  field0;
    size_t  field1;
};

static struct Drop_1060 Drop_1060_Drop (  struct SliceIter_1061  field0 ,  size_t  field1 ) {
    return ( struct Drop_1060 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Drop_1060   into_dash_iter1062 (    struct Drop_1060  self845 ) {
    return (  self845 );
}

static  struct SliceIter_1061   into_dash_iter1065 (    struct Slice_17  self1822 ) {
    return ( (struct SliceIter_1061) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Slice_17   subslice1066 (    struct Slice_17  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Action_18 *  begin_dash_ptr1787 = ( (  offset_dash_ptr1008 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min293 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_17) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

static  struct SliceIter_1061   into_dash_iter1064 (    struct List_16  self2022 ) {
    return ( (  into_dash_iter1065 ) ( ( (  subslice1066 ) ( ( (  self2022 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2022 ) .f_count ) ) ) ) );
}

static  struct Drop_1060   drop1063 (    struct List_16  iterable852 ,    size_t  i854 ) {
    struct SliceIter_1061  it855 = ( (  into_dash_iter1064 ) ( (  iterable852 ) ) );
    return ( ( Drop_1060_Drop ) ( (  it855 ) ,  (  i854 ) ) );
}

struct Maybe_1068 {
    enum {
        Maybe_1068_None_t,
        Maybe_1068_Just_t,
    } tag;
    union {
        struct {
            struct Action_18  field0;
        } Maybe_1068_Just_s;
    } stuff;
};

static struct Maybe_1068 Maybe_1068_Just (  struct Action_18  field0 ) {
    return ( struct Maybe_1068 ) { .tag = Maybe_1068_Just_t, .stuff = { .Maybe_1068_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1068   next1070 (    struct SliceIter_1061 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_1068) { .tag = Maybe_1068_None_t } );
    }
    struct Action_18  elem1830 = ( * ( (  offset_dash_ptr1008 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_1068_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1068   next1069 (    struct Drop_1060 *  dref847 ) {
    while ( (  cmp151 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next1070 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
        (* dref847 ) .field1 = (  op_dash_sub270 ( ( (* dref847 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next1070 ) ( ( & ( (* dref847 ) .field0 ) ) ) );
}

static  enum Unit_6   free_dash_action1071 (    struct Action_18  action3565 ,    enum CAllocator_8  al3567 ) {
    ( (  free905 ) ( ( (  action3565 ) .f_fwd ) ,  (  al3567 ) ) );
    ( (  free905 ) ( ( (  action3565 ) .f_bwd ) ,  (  al3567 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   trim1072 (    struct List_16 *  l2109 ,    size_t  new_dash_count2111 ) {
    (*  l2109 ) .f_count = ( (  min293 ) ( (  new_dash_count2111 ) ,  ( ( * (  l2109 ) ) .f_count ) ) );
    return ( Unit_6_Unit );
}

struct TypeSize_1079 {
    size_t  f_size;
};

static  struct TypeSize_1079   get_dash_typesize1078 (  ) {
    struct Action_18  temp1080;
    return ( (struct TypeSize_1079) { .f_size = ( sizeof( ( (  temp1080 ) ) ) ) } );
}

static  struct Action_18 *   cast_dash_ptr1081 (    void *  p359 ) {
    return ( (struct Action_18 * ) (  p359 ) );
}

static  struct Slice_17   allocate1077 (    enum CAllocator_8  dref1947 ,    size_t  count1949 ) {
    if (!(  dref1947 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1950 = ( ( ( (  get_dash_typesize1078 ) ( ) ) ) .f_size );
    struct Action_18 *  ptr1951 = ( (  cast_dash_ptr1081 ) ( ( ( malloc ) ( (  op_dash_mul212 ( (  size1950 ) , (  count1949 ) ) ) ) ) ) );
    return ( (struct Slice_17) { .f_ptr = (  ptr1951 ) , .f_count = (  count1949 ) } );
}

struct env1082 {
    ;
    struct Slice_17  new_dash_slice2036;
    ;
};

struct Tuple2_1084 {
    struct Action_18  field0;
    int32_t  field1;
};

static struct Tuple2_1084 Tuple2_1084_Tuple2 (  struct Action_18  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1084 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1083 {
    enum Unit_6  (*fun) (  struct env1082*  ,    struct Tuple2_1084  );
    struct env1082 env;
};

static  enum Unit_6   set1086 (    struct Slice_17  slice1774 ,    size_t  i1776 ,    struct Action_18  x1778 ) {
    struct Action_18 *  ep1779 = ( (  get_dash_ptr1007 ) ( (  slice1774 ) ,  (  i1776 ) ) );
    (*  ep1779 ) = (  x1778 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1085 (   struct env1082* env ,    struct Tuple2_1084  dref2037 ) {
    return ( (  set1086 ) ( ( env->new_dash_slice2036 ) ,  ( (  i32_dash_size229 ) ( ( dref2037 .field1 ) ) ) ,  ( dref2037 .field0 ) ) );
}

struct Zip_1088 {
    struct SliceIter_1061  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

static  struct Zip_1088   into_dash_iter1090 (    struct Zip_1088  self911 ) {
    return (  self911 );
}

struct Maybe_1091 {
    enum {
        Maybe_1091_None_t,
        Maybe_1091_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1084  field0;
        } Maybe_1091_Just_s;
    } stuff;
};

static struct Maybe_1091 Maybe_1091_Just (  struct Tuple2_1084  field0 ) {
    return ( struct Maybe_1091 ) { .tag = Maybe_1091_Just_t, .stuff = { .Maybe_1091_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1091   next1092 (    struct Zip_1088 *  self914 ) {
    struct Zip_1088  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_1068  dref916 = ( (  next1070 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_1068_None_t ) {
            return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_1068_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1091) { .tag = Maybe_1091_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1070 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1091_Just ) ( ( ( Tuple2_1084_Tuple2 ) ( ( dref916 .stuff .Maybe_1068_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1087 (    struct Zip_1088  iterable1074 ,   struct envunion1083  fun1076 ) {
    struct Zip_1088  temp1089 = ( (  into_dash_iter1090 ) ( (  iterable1074 ) ) );
    struct Zip_1088 *  it1077 = ( &temp1089 );
    while ( ( true ) ) {
        struct Maybe_1091  dref1078 = ( (  next1092 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1091_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1091_Just_t ) {
                struct envunion1083  temp1093 = (  fun1076 );
                ( temp1093.fun ( &temp1093.env ,  ( dref1078 .stuff .Maybe_1091_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1088   zip1094 (    struct Slice_17  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_1061  left_dash_it925 = ( (  into_dash_iter1065 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1088) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  void *   cast_dash_ptr1096 (    struct Action_18 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1095 (    enum CAllocator_8  dref1953 ,    struct Slice_17  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1096 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   grow_dash_if_dash_full1076 (   struct env3* env ,    struct List_16 *  list2035 ) {
    if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2035 ) .f_elements = ( (  allocate1077 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( env->starting_dash_size2030 ) ) );
    } else {
        if ( (  eq206 ( ( ( * (  list2035 ) ) .f_count ) , ( ( ( * (  list2035 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_17  new_dash_slice2036 = ( (  allocate1077 ) ( ( ( * (  list2035 ) ) .f_al ) ,  (  op_dash_mul212 ( ( ( * (  list2035 ) ) .f_count ) , ( env->growth_dash_factor2031 ) ) ) ) );
            struct env1082 envinst1082 = {
                .new_dash_slice2036 =  new_dash_slice2036 ,
            };
            struct envunion1083  fun2040 = ( (struct envunion1083){ .fun = (  enum Unit_6  (*) (  struct env1082*  ,    struct Tuple2_1084  ) )lam1085 , .env =  envinst1082 } );
            ( (  for_dash_each1087 ) ( ( (  zip1094 ) ( ( ( * (  list2035 ) ) .f_elements ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  (  fun2040 ) ) );
            ( (  free1095 ) ( ( ( * (  list2035 ) ) .f_al ) ,  ( ( * (  list2035 ) ) .f_elements ) ) );
            (*  list2035 ) .f_elements = (  new_dash_slice2036 );
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   add1074 (   struct env14* env ,    struct List_16 *  list2043 ,    struct Action_18  elem2045 ) {
    struct envunion15  temp1075 = ( (struct envunion15){ .fun = (  enum Unit_6  (*) (  struct env3*  ,    struct List_16 *  ) )grow_dash_if_dash_full1076 , .env =  env->envinst3 } );
    ( temp1075.fun ( &temp1075.env ,  (  list2043 ) ) );
    ( (  set1086 ) ( ( ( * (  list2043 ) ) .f_elements ) ,  ( ( * (  list2043 ) ) .f_count ) ,  (  elem2045 ) ) );
    (*  list2043 ) .f_count = (  op_dash_add199 ( ( ( * (  list2043 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Maybe_113   head1098 (    struct SplitIter_355  it1142 ) {
    struct SplitIter_355  temp1099 = ( (  into_dash_iter362 ) ( (  it1142 ) ) );
    return ( (  next376 ) ( ( &temp1099 ) ) );
}

static  struct Maybe_113   head1101 (    struct Drop_354  it1142 ) {
    struct Drop_354  temp1102 = ( (  into_dash_iter360 ) ( (  it1142 ) ) );
    return ( (  next375 ) ( ( &temp1102 ) ) );
}

static  bool   null1100 (    struct Drop_354  it1151 ) {
    struct Maybe_113  dref1152 = ( (  head1101 ) ( (  it1151 ) ) );
    if ( dref1152.tag == Maybe_113_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  enum Unit_6   panic1104 (    struct StrView_20  errmsg1712 ) {
    ( (  print_dash_str444 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string187 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1712 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Tuple2_373   undefined1105 (  ) {
    struct Tuple2_373  temp1106;
    return (  temp1106 );
}

static  struct Tuple2_373   or_dash_fail1103 (    struct Maybe_372  x1725 ,    struct StrView_20  errmsg1727 ) {
    struct Maybe_372  dref1728 = (  x1725 );
    if ( dref1728.tag == Maybe_372_None_t ) {
        ( (  panic1104 ) ( (  errmsg1727 ) ) );
        return ( (  undefined1105 ) ( ) );
    }
    else {
        if ( dref1728.tag == Maybe_372_Just_t ) {
            return ( dref1728 .stuff .Maybe_372_Just_s .field0 );
        }
    }
}

static  struct Maybe_372   reduce1108 (    struct Zip_353  iterable1093 ,    struct Maybe_372  base1095 ,    struct Maybe_372 (*  fun1097 )(    struct Tuple2_373  ,    struct Maybe_372  ) ) {
    struct Maybe_372  x1098 = (  base1095 );
    struct Zip_353  it1099 = ( (  into_dash_iter358 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_372  dref1100 = ( (  next374 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_372_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_372_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_372_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1109 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1109);
    exit ( 1 );
    ( Unit_6_Unit );
    struct Maybe_372  temp1110;
    return (  temp1110 );
}

static  struct Maybe_372   lam1111 (    struct Tuple2_373  e1147 ,    struct Maybe_372  dref1148 ) {
    return ( ( Maybe_372_Just ) ( (  e1147 ) ) );
}

static  struct Maybe_372   last1107 (    struct Zip_353  it1145 ) {
    return ( (  reduce1108 ) ( (  it1145 ) ,  ( (struct Maybe_372) { .tag = Maybe_372_None_t } ) ,  (  lam1111 ) ) );
}

static  int32_t   snd1112 (    struct Tuple2_373  dref1256 ) {
    return ( dref1256 .field1 );
}

static  struct StrView_20   fst1113 (    struct Tuple2_373  dref1253 ) {
    return ( dref1253 .field0 );
}

static  struct Pos_19   pos_dash_after_dash_str1097 (    struct TextBuf_75 *  self3658 ,    struct StrView_20  bytes3660 ,    struct Pos_19  from3662 ) {
    struct SplitIter_355  lines3663 = ( (  split_dash_by_dash_each363 ) ( (  bytes3660 ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
    struct StrView_20  first_dash_line3664 = ( (  or_dash_else338 ) ( ( (  head1098 ) ( (  lines3663 ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
    struct Drop_354  headless3665 = ( (  drop361 ) ( (  lines3663 ) ,  (  from_dash_integral0 ( 1 ) ) ) );
    if ( ( (  null1100 ) ( (  headless3665 ) ) ) ) {
        struct Pos_19  next_dash_pos3666 = ( (  mk470 ) ( ( (  from3662 ) .f_line ) ,  (  op_dash_add241 ( ( (  from3662 ) .f_bi ) , ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( (  first_dash_line3664 ) ) ) ) ) ) ) ) );
        return (  next_dash_pos3666 );
    } else {
        struct Tuple2_373  last_dash_line3667 = ( (  or_dash_fail1103 ) ( ( (  last1107 ) ( ( (  zip359 ) ( (  headless3665 ) ,  ( (  from246 ) ( (  op_dash_add241 ( ( (  from3662 ) .f_line ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "should not happen" ) ,  ( 17 ) ) ) ) );
        return ( (  mk470 ) ( ( (  snd1112 ) ( (  last_dash_line3667 ) ) ) ,  ( (  size_dash_i32163 ) ( ( (  num_dash_bytes951 ) ( ( (  fst1113 ) ( (  last_dash_line3667 ) ) ) ) ) ) ) ) );
    }
}

static  struct Cursors_21   or_dash_else1115 (    struct Maybe_90  self1732 ,    struct Cursors_21  alt1734 ) {
    struct Maybe_90  dref1735 = (  self1732 );
    if ( dref1735.tag == Maybe_90_None_t ) {
        return (  alt1734 );
    }
    else {
        if ( dref1735.tag == Maybe_90_Just_t ) {
            return ( dref1735 .stuff .Maybe_90_Just_s .field0 );
        }
    }
}

static  struct Maybe_90   change1058 (   struct env88* env ,    struct TextBuf_75 *  self3686 ,    struct Pos_19  from3688 ,    struct Pos_19  to3690 ,    struct StrView_20  bytes3692 ,    struct Maybe_90  before_dash_cursors3694 ) {
    struct Pos_19  from_dash_pos3695 = ( (  min387 ) ( (  from3688 ) ,  (  to3690 ) ) );
    struct Pos_19  to_dash_pos3696 = ( (  max390 ) ( (  from3688 ) ,  (  to3690 ) ) );
    struct Actions_76 *  actions3697 = ( & ( ( * (  self3686 ) ) .f_actions ) );
    enum CAllocator_8  al3698 = ( ( ( * (  actions3697 ) ) .f_list ) .f_al );
    size_t  cur3699 = ( ( * (  actions3697 ) ) .f_cur );
    struct Drop_1060  temp1059 =  into_dash_iter1062 ( ( (  drop1063 ) ( ( ( * (  actions3697 ) ) .f_list ) ,  (  cur3699 ) ) ) );
    while (true) {
        struct Maybe_1068  __cond1067 =  next1069 (&temp1059);
        if (  __cond1067 .tag == 0 ) {
            break;
        }
        struct Action_18  action3701 =  __cond1067 .stuff .Maybe_1068_Just_s .field0;
        ( (  free_dash_action1071 ) ( (  action3701 ) ,  (  al3698 ) ) );
    }
    ( (  trim1072 ) ( ( & ( ( * (  actions3697 ) ) .f_list ) ) ,  (  cur3699 ) ) );
    struct envunion91  temp1073 = ( (struct envunion91){ .fun = (  enum Unit_6  (*) (  struct env14*  ,    struct List_16 *  ,    struct Action_18  ) )add1074 , .env =  env->envinst14 } );
    struct envunion92  temp1114 = ( (struct envunion92){ .fun = (  struct StrView_20  (*) (  struct env86*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ) )str_dash_between1038 , .env =  env->envinst86 } );
    ( temp1073.fun ( &temp1073.env ,  ( & ( ( * (  actions3697 ) ) .f_list ) ) ,  ( (struct Action_18) { .f_from = (  from3688 ) , .f_fwd = ( (  clone1039 ) ( (  bytes3692 ) ,  (  al3698 ) ) ) , .f_to_dash_fwd = ( (  pos_dash_after_dash_str1097 ) ( (  self3686 ) ,  (  bytes3692 ) ,  (  from_dash_pos3695 ) ) ) , .f_bwd = ( temp1114.fun ( &temp1114.env ,  (  self3686 ) ,  (  from_dash_pos3695 ) ,  (  to_dash_pos3696 ) ) ) , .f_to_dash_bwd = (  to_dash_pos3696 ) , .f_before_dash_cursors = ( (  or_dash_else1115 ) ( (  before_dash_cursors3694 ) ,  ( (struct Cursors_21) { .f_cur = (  from3688 ) , .f_sel = ( (  eq281 ( (  from3688 ) , (  to3690 ) ) ) ? ( (struct Maybe_22) { .tag = Maybe_22_None_t } ) : ( ( Maybe_22_Just ) ( (  to3690 ) ) ) ) } ) ) ) } ) ) );
    struct envunion89  temp1116 = ( (struct envunion89){ .fun = (  struct Maybe_90  (*) (  struct env84*  ,    struct TextBuf_75 *  ) )redo1002 , .env =  env->envinst84 } );
    return ( temp1116.fun ( &temp1116.env ,  (  self3686 ) ) );
}

struct env1118 {
    ;
    struct Pane_110 *  self3934;
};

struct envunion1119 {
    enum Unit_6  (*fun) (  struct env1118*  ,    struct Cursors_21  );
    struct env1118 env;
};

static  enum Unit_6   if_dash_just1117 (    struct Maybe_90  x1291 ,   struct envunion1119  fun1293 ) {
    struct Maybe_90  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_90_Just_t ) {
        struct envunion1119  temp1120 = (  fun1293 );
        ( temp1120.fun ( &temp1120.env ,  ( dref1294 .stuff .Maybe_90_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_90_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1121 (   struct env1118* env ,    struct Cursors_21  cursors3941 ) {
    ( (  set_dash_cursors912 ) ( ( env->self3934 ) ,  ( (  cursors3941 ) .f_cur ) ,  ( (  cursors3941 ) .f_sel ) ,  ( CursorMovement_913_OverrideSelect ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   replace_dash_selection1056 (   struct env101* env ,    struct Pane_110 *  self3934 ,    struct Tuple2_117  pos_prime_s3936 ,    struct StrView_20  cp3938 ) {
    struct envunion102  temp1057 = ( (struct envunion102){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1058 , .env =  env->envinst88 } );
    struct Maybe_90  mcursors3939 = ( temp1057.fun ( &temp1057.env ,  ( ( * (  self3934 ) ) .f_buf ) ,  ( (  fst1035 ) ( (  pos_prime_s3936 ) ) ) ,  ( (  snd1036 ) ( (  pos_prime_s3936 ) ) ) ,  (  cp3938 ) ,  ( ( Maybe_90_Just ) ( ( (struct Cursors_21) { .f_cur = ( ( * (  self3934 ) ) .f_cursor ) , .f_sel = ( ( * (  self3934 ) ) .f_sel ) } ) ) ) ) );
    struct env1118 envinst1118 = {
        .self3934 =  self3934 ,
    };
    ( (  if_dash_just1117 ) ( (  mcursors3939 ) ,  ( (struct envunion1119){ .fun = (  enum Unit_6  (*) (  struct env1118*  ,    struct Cursors_21  ) )lam1121 , .env =  envinst1118 } ) ) );
    return ( Unit_6_Unit );
}

struct envunion1123 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

struct envunion1125 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct envunion1127 {
    enum Unit_6  (*fun) (  struct env103*  ,    struct Editor_109 *  );
    struct env103 env;
};

static  struct StrBuilder_44   mk1133 (    enum CAllocator_8  al2755 ) {
    return ( (struct StrBuilder_44) { .f_chars = ( (  mk250 ) ( (  al2755 ) ) ) } );
}

struct IntStrIter_1139 {
    size_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1138 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1139  f_right;
};

struct StrConcatIter_1137 {
    struct StrConcatIter_1138  f_left;
    struct StrViewIter_570  f_right;
};

struct env1140 {
    struct StrBuilder_44 *  builder2737;
    struct env42 envinst42;
};

struct envunion1141 {
    enum Unit_6  (*fun) (  struct env1140*  ,    struct Char_47  );
    struct env1140 env;
};

static  struct StrConcatIter_1137   into_dash_iter1143 (    struct StrConcatIter_1137  self1491 ) {
    return (  self1491 );
}

struct env1149 {
    ;
    size_t  base1210;
};

struct envunion1150 {
    size_t  (*fun) (  struct env1149*  ,    int32_t  ,    size_t  );
    struct env1149 env;
};

static  size_t   reduce1148 (    struct Range_653  iterable1093 ,    size_t  base1095 ,   struct envunion1150  fun1097 ) {
    size_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1150  temp1151 = (  fun1097 );
                x1098 = ( temp1151.fun ( &temp1151.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1152 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1152);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1153;
    return (  temp1153 );
}

static  size_t   lam1154 (   struct env1149* env ,    int32_t  item1214 ,    size_t  x1216 ) {
    return (  op_dash_mul212 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  size_t   pow1147 (    size_t  base1210 ,    int32_t  p1212 ) {
    struct env1149 envinst1149 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1148 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (struct envunion1150){ .fun = (  size_t  (*) (  struct env1149*  ,    int32_t  ,    size_t  ) )lam1154 , .env =  envinst1149 } ) ) );
}

static  uint8_t   cast1155 (    size_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_573   next1146 (    struct IntStrIter_1139 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp389 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    size_t  trim_dash_down1423 = ( (  pow1147 ) ( (  from_dash_integral0 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    size_t  upper1424 = (  op_dash_div178 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    size_t  upper_dash_mask1425 = (  op_dash_mul212 ( (  op_dash_div178 ( (  upper1424 ) , (  from_dash_integral0 ( 10 ) ) ) ) , (  from_dash_integral0 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1155 ) ( (  op_dash_sub270 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1145 (    struct StrConcatIter_1138 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1146 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1144 (    struct StrConcatIter_1137 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1145 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1136 (    struct StrConcatIter_1137  iterable1074 ,   struct envunion1141  fun1076 ) {
    struct StrConcatIter_1137  temp1142 = ( (  into_dash_iter1143 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1137 *  it1077 = ( &temp1142 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1144 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                struct envunion1141  temp1156 = (  fun1076 );
                ( temp1156.fun ( &temp1156.env ,  ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1163 (    size_t  self1430 ) {
    if ( (  eq206 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp151 ( (  self1430 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div178 ( (  self1430 ) , (  from_dash_integral0 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1139   uint_dash_iter1162 (    size_t  int1437 ) {
    return ( (struct IntStrIter_1139) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1163 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1139   chars1161 (    size_t  self1467 ) {
    return ( (  uint_dash_iter1162 ) ( (  self1467 ) ) );
}

static  struct StrConcatIter_1138   into_dash_iter1160 (    struct StrConcat_51  dref1498 ) {
    return ( (struct StrConcatIter_1138) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1161 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1138   chars1159 (    struct StrConcat_51  self1509 ) {
    return ( (  into_dash_iter1160 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1137   into_dash_iter1158 (    struct StrConcat_50  dref1498 ) {
    return ( (struct StrConcatIter_1137) { .f_left = ( (  chars1159 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1137   chars1157 (    struct StrConcat_50  self1509 ) {
    return ( (  into_dash_iter1158 ) ( (  self1509 ) ) );
}

static  enum Unit_6   write_dash_slice1168 (   struct env40* env ,    struct StrBuilder_44 *  builder2727 ,    struct Slice_11  s2729 ) {
    struct envunion41  temp1169 = ( (struct envunion41){ .fun = (  enum Unit_6  (*) (  struct env30*  ,    struct List_10 *  ,    struct Slice_11  ) )add_dash_all300 , .env =  env->envinst30 } );
    ( temp1169.fun ( &temp1169.env ,  ( & ( ( * (  builder2727 ) ) .f_chars ) ) ,  (  s2729 ) ) );
    return ( Unit_6_Unit );
}

static  struct Slice_11   from_dash_char1170 (    struct Char_47  c1935 ,    uint8_t *  buf1937 ) {
    struct CharDestructured_172  dref1938 = ( (  destructure174 ) ( (  c1935 ) ) );
    if ( dref1938.tag == CharDestructured_172_Ref_t ) {
        return ( (struct Slice_11) { .f_ptr = ( ( dref1938 .stuff .CharDestructured_172_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1938 .stuff .CharDestructured_172_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1938.tag == CharDestructured_172_Scalar_t ) {
            if ( (  cmp182 ( ( ( dref1938 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) , (  from_dash_integral183 ( 127 ) ) ) == 2 ) ) {
                const char*  temp1171 = ( (  from_dash_string39 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp1171);
                exit ( 1 );
                ( Unit_6_Unit );
            }
            (*  buf1937 ) = ( (  u32_dash_u8185 ) ( ( ( dref1938 .stuff .CharDestructured_172_Scalar_s .field0 ) .f_value ) ) );
            return ( (struct Slice_11) { .f_ptr = (  buf1937 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_6   write_dash_char1166 (   struct env42* env ,    struct StrBuilder_44 *  builder2732 ,    struct Char_47  c2734 ) {
    struct envunion43  temp1167 = ( (struct envunion43){ .fun = (  enum Unit_6  (*) (  struct env40*  ,    struct StrBuilder_44 *  ,    struct Slice_11  ) )write_dash_slice1168 , .env =  env->envinst40 } );
    uint8_t  temp1173;
    uint8_t  temp1172 = (  temp1173 );
    ( temp1167.fun ( &temp1167.env ,  (  builder2732 ) ,  ( (  from_dash_char1170 ) ( (  c2734 ) ,  ( &temp1172 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1164 (   struct env1140* env ,    struct Char_47  c2741 ) {
    struct envunion46  temp1165 = ( (struct envunion46){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1166 , .env =  env->envinst42 } );
    return ( temp1165.fun ( &temp1165.env ,  ( env->builder2737 ) ,  (  c2741 ) ) );
}

static  enum Unit_6   write1135 (   struct env45* env ,    struct StrBuilder_44 *  builder2737 ,    struct StrConcat_50  s2739 ) {
    struct env1140 envinst1140 = {
        .builder2737 =  builder2737 ,
        .envinst42 = env->envinst42 ,
    };
    ( (  for_dash_each1136 ) ( ( (  chars1157 ) ( (  s2739 ) ) ) ,  ( (struct envunion1141){ .fun = (  enum Unit_6  (*) (  struct env1140*  ,    struct Char_47  ) )lam1164 , .env =  envinst1140 } ) ) );
    return ( Unit_6_Unit );
}

static  uint8_t *   cast_dash_ptr1177 (    uint8_t *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_11   cast_dash_slice1176 (    struct Slice_11  s1932 ) {
    return ( (struct Slice_11) { .f_ptr = ( (  cast_dash_ptr1177 ) ( ( (  s1932 ) .f_ptr ) ) ) , .f_count = ( (  s1932 ) .f_count ) } );
}

static  struct StrView_20   as_dash_str1175 (    struct StrBuilder_44 *  builder2761 ) {
    return ( (struct StrView_20) { .f_contents = ( (  cast_dash_slice1176 ) ( ( (  subslice290 ) ( ( ( ( * (  builder2761 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2761 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_20   mk_dash_dyn_dash_str1131 (   struct env48* env ,    struct StrConcat_50  s2781 ,    enum CAllocator_8  al2783 ) {
    struct StrBuilder_44  temp1132 = ( (  mk1133 ) ( (  al2783 ) ) );
    struct StrBuilder_44 *  sb2784 = ( &temp1132 );
    struct envunion49  temp1134 = ( (struct envunion49){ .fun = (  enum Unit_6  (*) (  struct env45*  ,    struct StrBuilder_44 *  ,    struct StrConcat_50  ) )write1135 , .env =  env->envinst45 } );
    ( temp1134.fun ( &temp1134.env ,  (  sb2784 ) ,  (  s2781 ) ) );
    struct envunion52  temp1174 = ( (struct envunion52){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1166 , .env =  env->envinst42 } );
    ( temp1174.fun ( &temp1174.env ,  (  sb2784 ) ,  ( (  nullchar495 ) ( ) ) ) );
    struct StrView_20  dynstr2785 = ( (  as_dash_str1175 ) ( (  sb2784 ) ) );
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = ( ( (  dynstr2785 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub270 ( ( ( (  dynstr2785 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  enum Unit_6   set_dash_msg1129 (   struct env105* env ,    struct Editor_109 *  ed3974 ,    struct StrConcat_50  s3976 ) {
    ( (  reset_dash_msg899 ) ( (  ed3974 ) ) );
    struct envunion106  temp1130 = ( (struct envunion106){ .fun = (  struct StrView_20  (*) (  struct env48*  ,    struct StrConcat_50  ,    enum CAllocator_8  ) )mk_dash_dyn_dash_str1131 , .env =  env->envinst48 } );
    (*  ed3974 ) .f_msg = ( ( Maybe_113_Just ) ( ( temp1130.fun ( &temp1130.env ,  (  s3976 ) ,  ( ( * (  ed3974 ) ) .f_al ) ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1180 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct env1179 {
    ;
    ;
    ;
    struct Editor_109 *  ed3979;
    struct env101 envinst101;
};

struct envunion1181 {
    enum Unit_6  (*fun) (  struct env1179*  ,    struct StrView_20  );
    struct env1179 env;
};

static  enum Unit_6   if_dash_just1178 (    struct Maybe_113  x1291 ,   struct envunion1181  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1181  temp1182 = (  fun1293 );
        ( temp1182.fun ( &temp1182.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   max_dash_pos1184 (    struct Pane_110 *  pane3901 ) {
    return ( {  struct Maybe_22  dref3902 = ( ( * (  pane3901 ) ) .f_sel ) ; dref3902.tag == Maybe_22_Just_t ? ( (  max390 ) ( ( ( * (  pane3901 ) ) .f_cursor ) ,  ( dref3902 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3901 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1183 (   struct env1179* env ,    struct StrView_20  cp3986 ) {
    struct Pos_19  start3987 = ( (  right_dash_pos957 ) ( ( ( ( * ( env->ed3979 ) ) .f_pane ) .f_buf ) ,  ( (  max_dash_pos1184 ) ( ( (  pane955 ) ( ( env->ed3979 ) ) ) ) ) ) );
    struct envunion1180  temp1185 = ( (struct envunion1180){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1056 , .env =  env->envinst101 } );
    ( temp1185.fun ( &temp1185.env ,  ( (  pane955 ) ( ( env->ed3979 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3987 ) ,  (  start3987 ) ) ) ,  (  cp3986 ) ) );
    return ( Unit_6_Unit );
}

struct envunion1188 {
    enum Unit_6  (*fun) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  );
    struct env101 env;
};

struct env1187 {
    ;
    struct Editor_109 *  ed3979;
    ;
    struct env101 envinst101;
};

struct envunion1189 {
    enum Unit_6  (*fun) (  struct env1187*  ,    struct StrView_20  );
    struct env1187 env;
};

static  enum Unit_6   if_dash_just1186 (    struct Maybe_113  x1291 ,   struct envunion1189  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1189  temp1190 = (  fun1293 );
        ( temp1190.fun ( &temp1190.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  struct Pos_19   min_dash_pos1192 (    struct Pane_110 *  pane3896 ) {
    return ( {  struct Maybe_22  dref3897 = ( ( * (  pane3896 ) ) .f_sel ) ; dref3897.tag == Maybe_22_Just_t ? ( (  min387 ) ( ( ( * (  pane3896 ) ) .f_cursor ) ,  ( dref3897 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( ( * (  pane3896 ) ) .f_cursor ) ; } );
}

static  enum Unit_6   lam1191 (   struct env1187* env ,    struct StrView_20  cp3989 ) {
    struct Pos_19  start3990 = ( (  min_dash_pos1192 ) ( ( (  pane955 ) ( ( env->ed3979 ) ) ) ) );
    struct envunion1188  temp1193 = ( (struct envunion1188){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1056 , .env =  env->envinst101 } );
    ( temp1193.fun ( &temp1193.env ,  ( (  pane955 ) ( ( env->ed3979 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3990 ) ,  (  start3990 ) ) ) ,  (  cp3989 ) ) );
    return ( Unit_6_Unit );
}

struct env1195 {
    ;
    struct Editor_109 *  ed3979;
    ;
    struct env101 envinst101;
};

struct envunion1196 {
    enum Unit_6  (*fun) (  struct env1195*  ,    struct StrView_20  );
    struct env1195 env;
};

static  enum Unit_6   if_dash_just1194 (    struct Maybe_113  x1291 ,   struct envunion1196  fun1293 ) {
    struct Maybe_113  dref1294 = (  x1291 );
    if ( dref1294.tag == Maybe_113_Just_t ) {
        struct envunion1196  temp1197 = (  fun1293 );
        ( temp1197.fun ( &temp1197.env ,  ( dref1294 .stuff .Maybe_113_Just_s .field0 ) ) );
    }
    else {
        if ( dref1294.tag == Maybe_113_None_t ) {
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1198 (   struct env1195* env ,    struct StrView_20  cp3992 ) {
    struct Pos_19  start3993 = ( (  min_dash_pos1192 ) ( ( (  pane955 ) ( ( env->ed3979 ) ) ) ) );
    struct envunion116  temp1199 = ( (struct envunion116){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1056 , .env =  env->envinst101 } );
    ( temp1199.fun ( &temp1199.env ,  ( (  pane955 ) ( ( env->ed3979 ) ) ) ,  ( ( Tuple2_117_Tuple2 ) ( (  start3993 ) ,  (  start3993 ) ) ) ,  (  cp3992 ) ) );
    return ( Unit_6_Unit );
}

static  bool   is_dash_none1200 (    struct Maybe_22  m1264 ) {
    struct Maybe_22  dref1265 = (  m1264 );
    if ( dref1265.tag == Maybe_22_None_t ) {
        return ( true );
    }
    else {
        if ( dref1265.tag == Maybe_22_Just_t ) {
            return ( false );
        }
    }
}

static  enum Unit_6   handle_dash_normal_dash_key910 (   struct env107* env ,    struct Editor_109 *  ed3979 ,    struct Key_124  key3981 ) {
    struct Key_124  dref3982 = (  key3981 );
    if ( dref3982.tag == Key_124_Char_t ) {
        if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
            (*  ed3979 ) .f_running = ( false );
        } else {
            if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "h" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  move_dash_left911 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) );
            } else {
                if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "l" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) );
                } else {
                    if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "j" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  move_dash_down959 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) );
                    } else {
                        if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "k" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  move_dash_up963 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) );
                        } else {
                            if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "i" ) ,  ( 1 ) ) ) ) ) ) {
                                (*  ed3979 ) .f_pane .f_mode = ( Mode_111_Insert );
                            } else {
                                if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "w" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ,  ( MoveDirection_965_MoveFwd ) ,  ( MoveTarget_966_NextWordStart ) ) );
                                } else {
                                    if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "e" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ,  ( MoveDirection_965_MoveFwd ) ,  ( MoveTarget_966_NextWordEnd ) ) );
                                    } else {
                                        if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "b" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  advance_dash_word964 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ,  ( MoveDirection_965_MoveBwd ) ,  ( MoveTarget_966_NextWordEnd ) ) );
                                        } else {
                                            if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "U" ) ,  ( 1 ) ) ) ) ) ) {
                                                struct envunion119  temp999 = ( (struct envunion119){ .fun = (  enum Unit_6  (*) (  struct env99*  ,    struct Pane_110 *  ) )redo1000 , .env =  env->envinst99 } );
                                                ( temp999.fun ( &temp999.env ,  ( (  pane955 ) ( (  ed3979 ) ) ) ) );
                                            } else {
                                                if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "u" ) ,  ( 1 ) ) ) ) ) ) {
                                                    struct envunion118  temp1018 = ( (struct envunion118){ .fun = (  enum Unit_6  (*) (  struct env97*  ,    struct Pane_110 *  ) )undo1019 , .env =  env->envinst97 } );
                                                    ( temp1018.fun ( &temp1018.env ,  ( (  pane955 ) ( (  ed3979 ) ) ) ) );
                                                } else {
                                                    if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "d" ) ,  ( 1 ) ) ) ) ) ) {
                                                        struct envunion115  temp1030 = ( (struct envunion115){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                        ( temp1030.fun ( &temp1030.env ,  (  ed3979 ) ) );
                                                        struct envunion1055  temp1054 = ( (struct envunion1055){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1056 , .env =  env->envinst101 } );
                                                        ( temp1054.fun ( &temp1054.env ,  ( (  pane955 ) ( (  ed3979 ) ) ) ,  ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                    } else {
                                                        if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "c" ) ,  ( 1 ) ) ) ) ) ) {
                                                            struct envunion1123  temp1122 = ( (struct envunion1123){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                            ( temp1122.fun ( &temp1122.env ,  (  ed3979 ) ) );
                                                            struct envunion1125  temp1124 = ( (struct envunion1125){ .fun = (  enum Unit_6  (*) (  struct env101*  ,    struct Pane_110 *  ,    struct Tuple2_117  ,    struct StrView_20  ) )replace_dash_selection1056 , .env =  env->envinst101 } );
                                                            ( temp1124.fun ( &temp1124.env ,  ( (  pane955 ) ( (  ed3979 ) ) ) ,  ( (  selection1032 ) ( ( (  pane955 ) ( (  ed3979 ) ) ) ) ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) );
                                                            (*  ed3979 ) .f_pane .f_mode = ( Mode_111_Insert );
                                                        } else {
                                                            if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "y" ) ,  ( 1 ) ) ) ) ) ) {
                                                                struct envunion1127  temp1126 = ( (struct envunion1127){ .fun = (  enum Unit_6  (*) (  struct env103*  ,    struct Editor_109 *  ) )copy_dash_selection_dash_to_dash_clipboard1031 , .env =  env->envinst103 } );
                                                                ( temp1126.fun ( &temp1126.env ,  (  ed3979 ) ) );
                                                                size_t  bytes_dash_yanked3984 = ( (  num_dash_bytes951 ) ( ( (  or_dash_else338 ) ( ( ( * (  ed3979 ) ) .f_clipboard ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ) ) ) );
                                                                struct envunion108  temp1128 = ( (struct envunion108){ .fun = (  enum Unit_6  (*) (  struct env105*  ,    struct Editor_109 *  ,    struct StrConcat_50  ) )set_dash_msg1129 , .env =  env->envinst105 } );
                                                                ( temp1128.fun ( &temp1128.env ,  (  ed3979 ) ,  ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "yanked " ) ,  ( 7 ) ) ) ,  (  bytes_dash_yanked3984 ) ) ) ,  ( (  from_dash_string187 ) ( ( " bytes :)" ) ,  ( 9 ) ) ) ) ) ) );
                                                            } else {
                                                                if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "p" ) ,  ( 1 ) ) ) ) ) ) {
                                                                    struct env1179 envinst1179 = {
                                                                        .ed3979 =  ed3979 ,
                                                                        .envinst101 = env->envinst101 ,
                                                                    };
                                                                    ( (  if_dash_just1178 ) ( ( ( * (  ed3979 ) ) .f_clipboard ) ,  ( (struct envunion1181){ .fun = (  enum Unit_6  (*) (  struct env1179*  ,    struct StrView_20  ) )lam1183 , .env =  envinst1179 } ) ) );
                                                                } else {
                                                                    if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
                                                                        struct env1187 envinst1187 = {
                                                                            .ed3979 =  ed3979 ,
                                                                            .envinst101 = env->envinst101 ,
                                                                        };
                                                                        ( (  if_dash_just1186 ) ( ( ( * (  ed3979 ) ) .f_clipboard ) ,  ( (struct envunion1189){ .fun = (  enum Unit_6  (*) (  struct env1187*  ,    struct StrView_20  ) )lam1191 , .env =  envinst1187 } ) ) );
                                                                    } else {
                                                                        if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
                                                                            struct env1195 envinst1195 = {
                                                                                .ed3979 =  ed3979 ,
                                                                                .envinst101 = env->envinst101 ,
                                                                            };
                                                                            ( (  if_dash_just1194 ) ( ( ( * (  ed3979 ) ) .f_clipboard ) ,  ( (struct envunion1196){ .fun = (  enum Unit_6  (*) (  struct env1195*  ,    struct StrView_20  ) )lam1198 , .env =  envinst1195 } ) ) );
                                                                        } else {
                                                                            if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( "v" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                (*  ed3979 ) .f_pane .f_mode = ( Mode_111_Select );
                                                                                if ( ( (  is_dash_none1200 ) ( ( ( ( * (  ed3979 ) ) .f_pane ) .f_sel ) ) ) ) {
                                                                                    (*  ed3979 ) .f_pane .f_sel = ( ( Maybe_22_Just ) ( ( ( ( * (  ed3979 ) ) .f_pane ) .f_cursor ) ) );
                                                                                }
                                                                            } else {
                                                                                if ( (  eq753 ( ( dref3982 .stuff .Key_124_Char_s .field0 ) , ( (  from_dash_charlike754 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                                                    (*  ed3979 ) .f_mode = ( ( EditorMode_114_Cmd ) ( ( (  mk1133 ) ( ( ( * (  ed3979 ) ) .f_al ) ) ) ) );
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
        if ( dref3982.tag == Key_124_Escape_t ) {
            (*  ed3979 ) .f_pane .f_mode = ( Mode_111_Normal );
        }
        else {
            if ( true ) {
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1202 {
    enum Unit_6  (*fun) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_124  );
    struct env107 env;
};

static  enum Unit_6   add_dash_str_dash_at_dash_char1204 (   struct env93* env ,    struct Pane_110 *  self3906 ,    struct StrView_20  s3908 ) {
    struct Pos_19  cur3909 = ( ( * (  self3906 ) ) .f_cursor );
    struct envunion94  temp1205 = ( (struct envunion94){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1058 , .env =  env->envinst88 } );
    ( temp1205.fun ( &temp1205.env ,  ( ( * (  self3906 ) ) .f_buf ) ,  (  cur3909 ) ,  (  cur3909 ) ,  (  s3908 ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

static  struct StrView_20   from_dash_charlike1206 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_20) { .f_contents = ( (struct Slice_11) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

static  enum Unit_6   backspace1208 (   struct env95* env ,    struct Pane_110 *  self3912 ) {
    struct Pos_19  prev_dash_cur3913 = ( ( * (  self3912 ) ) .f_cursor );
    ( (  move_dash_left911 ) ( (  self3912 ) ) );
    struct envunion96  temp1209 = ( (struct envunion96){ .fun = (  struct Maybe_90  (*) (  struct env88*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ,    struct Maybe_90  ) )change1058 , .env =  env->envinst88 } );
    ( temp1209.fun ( &temp1209.env ,  ( ( * (  self3912 ) ) .f_buf ) ,  ( ( * (  self3912 ) ) .f_cursor ) ,  (  prev_dash_cur3913 ) ,  ( (  from_dash_string187 ) ( ( "" ) ,  ( 0 ) ) ) ,  ( (struct Maybe_90) { .tag = Maybe_90_None_t } ) ) );
    return ( Unit_6_Unit );
}

struct Array_1211 {
    char _arr [1];
};

static  char *   cast1212 (    struct Array_1211 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_769   as_dash_slice1210 (    struct Array_1211 *  arr2260 ) {
    return ( (struct Slice_769) { .f_ptr = ( (  cast1212 ) ( (  arr2260 ) ) ) , .f_count = ( (size_t ) ( 1 ) ) } );
}

static  struct Array_1211   from_dash_listlike1214 (    struct Array_1211  self330 ) {
    return (  self330 );
}

struct envunion1216 {
    enum Unit_6  (*fun) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  );
    struct env93 env;
};

struct Scanner_1218 {
    struct StrView_20  f_s;
};

static  struct Scanner_1218   mk_dash_from_dash_strview1220 (    struct StrView_20  s3143 ) {
    return ( (struct Scanner_1218) { .f_s = (  s3143 ) } );
}

struct TakeWhile_1225 {
    struct StrViewIter_570  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1224 {
    struct TakeWhile_1225  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1224 Map_1224_Map (  struct TakeWhile_1225  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1224 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1224   into_dash_iter1227 (    struct Map_1224  self796 ) {
    return (  self796 );
}

struct Maybe_1228 {
    enum {
        Maybe_1228_None_t,
        Maybe_1228_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_1228_Just_s;
    } stuff;
};

static struct Maybe_1228 Maybe_1228_Just (  size_t  field0 ) {
    return ( struct Maybe_1228 ) { .tag = Maybe_1228_Just_t, .stuff = { .Maybe_1228_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_573   next1230 (    struct TakeWhile_1225 *  self964 ) {
    struct Maybe_573  mx965 = ( (  next574 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_573  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_573_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_573_Just ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
            }
        }
    }
}

static  struct Maybe_1228   next1229 (    struct Map_1224 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1230 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_1228) { .tag = Maybe_1228_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_1228_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1226 (    struct Map_1224  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1224  it1099 = ( (  into_dash_iter1227 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1228  dref1100 = ( (  next1229 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1228_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1228_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1228_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1231 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1231);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1232;
    return (  temp1232 );
}

static  size_t   lam1233 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add199 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1223 (    struct Map_1224  it1110 ) {
    return ( (  reduce1226 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1233 ) ) );
}

static  struct TakeWhile_1225   into_dash_iter1235 (    struct TakeWhile_1225  self961 ) {
    return (  self961 );
}

static  struct Map_1224   map1234 (    struct TakeWhile_1225  iterable805 ,    size_t (*  fun807 )(    struct Char_47  ) ) {
    struct TakeWhile_1225  it808 = ( (  into_dash_iter1235 ) ( (  iterable805 ) ) );
    return ( ( Map_1224_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1225   take_dash_while1236 (    struct StrViewIter_570  it970 ,    bool (*  pred972 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1225) { .f_it = ( (  into_dash_iter572 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1237 (    struct Char_47  c2193 ) {
    return ( (  c2193 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1222 (    struct StrView_20  self2189 ,    bool (*  fun2191 )(    struct Char_47  ) ) {
    size_t  bi2194 = ( (  sum1223 ) ( ( (  map1234 ) ( ( (  take_dash_while1236 ) ( ( (  chars575 ) ( (  self2189 ) ) ) ,  (  fun2191 ) ) ) ,  (  lam1237 ) ) ) ) );
    return ( (  byte_dash_substr348 ) ( (  self2189 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2194 ) ) );
}

static  struct StrView_20   byte_dash_substr_dash_from1238 (    struct StrView_20  s2181 ,    size_t  from2183 ) {
    return ( (struct StrView_20) { .f_contents = ( (  from289 ) ( ( (  s2181 ) .f_contents ) ,  (  from2183 ) ) ) } );
}

static  struct StrView_20   take_dash_str_dash_while1221 (    struct Scanner_1218 *  sc3189 ,    bool (*  fun3191 )(    struct Char_47  ) ) {
    struct StrView_20  s3192 = ( (  take_dash_while1222 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  (  fun3191 ) ) );
    (*  sc3189 ) .f_s = ( (  byte_dash_substr_dash_from1238 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  ( (  num_dash_bytes951 ) ( (  s3192 ) ) ) ) );
    return (  s3192 );
}

static  bool   is_dash_not_dash_whitespace1239 (    struct Char_47  c2370 ) {
    return ( ! ( (  is_dash_whitespace987 ) ( (  c2370 ) ) ) );
}

struct TakeWhile_1245 {
    struct StrViewIter_570  f_it;
    bool (*  f_pred )(    struct Char_47  );
};

struct Map_1244 {
    struct TakeWhile_1245  field0;
    size_t (*  field1 )(    struct Char_47  );
};

static struct Map_1244 Map_1244_Map (  struct TakeWhile_1245  field0 ,  size_t (*  field1 )(    struct Char_47  ) ) {
    return ( struct Map_1244 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_1244   into_dash_iter1247 (    struct Map_1244  self796 ) {
    return (  self796 );
}

static  struct Maybe_573   next1249 (    struct TakeWhile_1245 *  self964 ) {
    struct Maybe_573  mx965 = ( (  next574 ) ( ( & ( ( * (  self964 ) ) .f_it ) ) ) );
    struct Maybe_573  dref966 = (  mx965 );
    if ( dref966.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    else {
        if ( dref966.tag == Maybe_573_Just_t ) {
            if ( ( ( ( * (  self964 ) ) .f_pred ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_573_Just ) ( ( dref966 .stuff .Maybe_573_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
            }
        }
    }
}

static  struct Maybe_1228   next1248 (    struct Map_1244 *  dref798 ) {
    struct Maybe_573  dref801 = ( (  next1249 ) ( ( & ( (* dref798 ) .field0 ) ) ) );
    if ( dref801.tag == Maybe_573_None_t ) {
        return ( (struct Maybe_1228) { .tag = Maybe_1228_None_t } );
    }
    else {
        if ( dref801.tag == Maybe_573_Just_t ) {
            return ( ( Maybe_1228_Just ) ( ( ( (* dref798 ) .field1 ) ( ( dref801 .stuff .Maybe_573_Just_s .field0 ) ) ) ) );
        }
    }
}

static  size_t   reduce1246 (    struct Map_1244  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    size_t  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct Map_1244  it1099 = ( (  into_dash_iter1247 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1228  dref1100 = ( (  next1248 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1228_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1228_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_1228_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1250 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1250);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1251;
    return (  temp1251 );
}

static  size_t   lam1252 (    size_t  v1112 ,    size_t  s1114 ) {
    return (  op_dash_add199 ( (  v1112 ) , (  s1114 ) ) );
}

static  size_t   sum1243 (    struct Map_1244  it1110 ) {
    return ( (  reduce1246 ) ( (  it1110 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1252 ) ) );
}

static  struct TakeWhile_1245   into_dash_iter1254 (    struct TakeWhile_1245  self961 ) {
    return (  self961 );
}

static  struct Map_1244   map1253 (    struct TakeWhile_1245  iterable805 ,    size_t (*  fun807 )(    struct Char_47  ) ) {
    struct TakeWhile_1245  it808 = ( (  into_dash_iter1254 ) ( (  iterable805 ) ) );
    return ( ( Map_1244_Map ) ( (  it808 ) ,  (  fun807 ) ) );
}

static  struct TakeWhile_1245   take_dash_while1255 (    struct StrViewIter_570  it970 ,    bool (*  pred972 )(    struct Char_47  ) ) {
    return ( (struct TakeWhile_1245) { .f_it = ( (  into_dash_iter572 ) ( (  it970 ) ) ) , .f_pred = (  pred972 ) } );
}

static  size_t   lam1256 (    struct Char_47  c2193 ) {
    return ( (  c2193 ) .f_num_dash_bytes );
}

static  struct StrView_20   take_dash_while1242 (    struct StrView_20  self2189 ,    bool (*  fun2191 )(    struct Char_47  ) ) {
    size_t  bi2194 = ( (  sum1243 ) ( ( (  map1253 ) ( ( (  take_dash_while1255 ) ( ( (  chars575 ) ( (  self2189 ) ) ) ,  (  fun2191 ) ) ) ,  (  lam1256 ) ) ) ) );
    return ( (  byte_dash_substr348 ) ( (  self2189 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  bi2194 ) ) );
}

static  struct StrView_20   take_dash_str_dash_while1241 (    struct Scanner_1218 *  sc3189 ,    bool (*  fun3191 )(    struct Char_47  ) ) {
    struct StrView_20  s3192 = ( (  take_dash_while1242 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  (  fun3191 ) ) );
    (*  sc3189 ) .f_s = ( (  byte_dash_substr_dash_from1238 ) ( ( ( * (  sc3189 ) ) .f_s ) ,  ( (  num_dash_bytes951 ) ( (  s3192 ) ) ) ) );
    return (  s3192 );
}

static  enum Unit_6   drop_dash_str_dash_while1240 (    struct Scanner_1218 *  sc3195 ,    bool (*  fun3197 )(    struct Char_47  ) ) {
    ( (  take_dash_str_dash_while1241 ) ( (  sc3195 ) ,  (  fun3197 ) ) );
    return ( Unit_6_Unit );
}

struct Zip_1260 {
    struct SliceIter_304  f_left_dash_it;
    struct SliceIter_304  f_right_dash_it;
};

struct Tuple2_1261 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_1261 Tuple2_1261_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_1261 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1263 {
    bool (*  fun1126 )(    struct Tuple2_1261  );
};

struct envunion1264 {
    bool  (*fun) (  struct env1263*  ,    struct Tuple2_1261  ,    bool  );
    struct env1263 env;
};

static  struct Zip_1260   into_dash_iter1265 (    struct Zip_1260  self911 ) {
    return (  self911 );
}

struct Maybe_1266 {
    enum {
        Maybe_1266_None_t,
        Maybe_1266_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1261  field0;
        } Maybe_1266_Just_s;
    } stuff;
};

static struct Maybe_1266 Maybe_1266_Just (  struct Tuple2_1261  field0 ) {
    return ( struct Maybe_1266 ) { .tag = Maybe_1266_Just_t, .stuff = { .Maybe_1266_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1266   next1267 (    struct Zip_1260 *  self914 ) {
    struct Zip_1260  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_307  dref916 = ( (  next308 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_307_None_t ) {
            return ( (struct Maybe_1266) { .tag = Maybe_1266_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_307_Just_t ) {
                struct Maybe_307  dref918 = ( (  next308 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_307_None_t ) {
                    return ( (struct Maybe_1266) { .tag = Maybe_1266_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_307_Just_t ) {
                        ( (  next308 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next308 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1266_Just ) ( ( ( Tuple2_1261_Tuple2 ) ( ( dref916 .stuff .Maybe_307_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_307_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1262 (    struct Zip_1260  iterable1093 ,    bool  base1095 ,   struct envunion1264  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1260  it1099 = ( (  into_dash_iter1265 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1266  dref1100 = ( (  next1267 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1266_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1266_Just_t ) {
                struct envunion1264  temp1268 = (  fun1097 );
                x1098 = ( temp1268.fun ( &temp1268.env ,  ( dref1100 .stuff .Maybe_1266_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1269 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1269);
    exit ( 1 );
    ( Unit_6_Unit );
    bool  temp1270;
    return (  temp1270 );
}

static  bool   lam1271 (   struct env1263* env ,    struct Tuple2_1261  e1128 ,    bool  x1130 ) {
    return ( ( ( env->fun1126 ) ( (  e1128 ) ) ) && (  x1130 ) );
}

static  bool   all1259 (    struct Zip_1260  it1124 ,    bool (*  fun1126 )(    struct Tuple2_1261  ) ) {
    struct env1263 envinst1263 = {
        .fun1126 =  fun1126 ,
    };
    return ( (  reduce1262 ) ( (  it1124 ) ,  ( true ) ,  ( (struct envunion1264){ .fun = (  bool  (*) (  struct env1263*  ,    struct Tuple2_1261  ,    bool  ) )lam1271 , .env =  envinst1263 } ) ) );
}

static  struct Zip_1260   zip1272 (    struct Slice_11  left922 ,    struct Slice_11  right924 ) {
    struct SliceIter_304  left_dash_it925 = ( (  into_dash_iter306 ) ( (  left922 ) ) );
    struct SliceIter_304  right_dash_it926 = ( (  into_dash_iter306 ) ( (  right924 ) ) );
    return ( (struct Zip_1260) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  bool   lam1273 (    struct Tuple2_1261  dref1862 ) {
    return (  eq175 ( ( dref1862 .field0 ) , ( dref1862 .field1 ) ) );
}

static  bool   eq1258 (    struct Slice_11  l1859 ,    struct Slice_11  r1861 ) {
    if ( ( !  eq206 ( ( (  l1859 ) .f_count ) , ( (  r1861 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all1259 ) ( ( (  zip1272 ) ( (  l1859 ) ,  (  r1861 ) ) ) ,  (  lam1273 ) ) );
}

static  bool   eq1257 (    struct StrView_20  l2197 ,    struct StrView_20  r2199 ) {
    return (  eq1258 ( ( (  l2197 ) .f_contents ) , ( (  r2199 ) .f_contents ) ) );
}

static  enum Unit_6   undefined1275 (  ) {
    enum Unit_6  temp1276;
    return (  temp1276 );
}

static  enum Unit_6   todo1274 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1275 ) ( ) );
}

static  enum Unit_6   run_dash_cmd1217 (    struct Editor_109 *  ed3962 ,    struct StrView_20  s3964 ) {
    struct Scanner_1218  temp1219 = ( (  mk_dash_from_dash_strview1220 ) ( (  s3964 ) ) );
    struct Scanner_1218 *  sc3965 = ( &temp1219 );
    struct StrView_20  cmd3966 = ( (  take_dash_str_dash_while1221 ) ( (  sc3965 ) ,  (  is_dash_not_dash_whitespace1239 ) ) );
    ( (  drop_dash_str_dash_while1240 ) ( (  sc3965 ) ,  (  is_dash_whitespace987 ) ) );
    if ( (  eq1257 ( (  cmd3966 ) , ( (  from_dash_charlike1206 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
        (*  ed3962 ) .f_running = ( false );
    } else {
        if ( (  eq1257 ( (  cmd3966 ) , ( (  from_dash_string187 ) ( ( "wq" ) ,  ( 2 ) ) ) ) ) ) {
        } else {
            if ( (  eq1257 ( (  cmd3966 ) , ( (  from_dash_charlike1206 ) ( ( "o" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  todo1274 ) ( ) );
            } else {
                if ( (  eq1257 ( (  cmd3966 ) , ( (  from_dash_string187 ) ( ( "theme" ) ,  ( 5 ) ) ) ) ) ) {
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   free1277 (    struct StrBuilder_44 *  builder2767 ) {
    ( (  free386 ) ( ( & ( ( * (  builder2767 ) ) .f_chars ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Char_47   ascii_dash_char1279 (    char  c782 ) {
    return ( (  from_dash_u8859 ) ( ( (  ascii_dash_u8712 ) ( (  c782 ) ) ) ) );
}

static  enum Unit_6   handle_dash_key908 (   struct env120* env ,    struct Editor_109 *  ed3996 ,    struct Key_124  key3998 ) {
    struct EditorMode_114 *  dref3999 = ( & ( ( * (  ed3996 ) ) .f_mode ) );
    if ( (* dref3999 ).tag == EditorMode_114_Normal_t ) {
        enum Mode_111  dref4000 = ( ( ( * (  ed3996 ) ) .f_pane ) .f_mode );
        switch (  dref4000 ) {
            case Mode_111_Normal : {
                struct envunion123  temp909 = ( (struct envunion123){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_124  ) )handle_dash_normal_dash_key910 , .env =  env->envinst107 } );
                ( temp909.fun ( &temp909.env ,  (  ed3996 ) ,  (  key3998 ) ) );
                break;
            }
            case Mode_111_Select : {
                struct envunion1202  temp1201 = ( (struct envunion1202){ .fun = (  enum Unit_6  (*) (  struct env107*  ,    struct Editor_109 *  ,    struct Key_124  ) )handle_dash_normal_dash_key910 , .env =  env->envinst107 } );
                ( temp1201.fun ( &temp1201.env ,  (  ed3996 ) ,  (  key3998 ) ) );
                break;
            }
            case Mode_111_Insert : {
                struct Key_124  dref4001 = (  key3998 );
                if ( dref4001.tag == Key_124_Escape_t ) {
                    (*  ed3996 ) .f_pane .f_mode = ( Mode_111_Normal );
                }
                else {
                    if ( dref4001.tag == Key_124_Enter_t ) {
                        struct envunion121  temp1203 = ( (struct envunion121){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst93 } );
                        ( temp1203.fun ( &temp1203.env ,  ( (  pane955 ) ( (  ed3996 ) ) ) ,  ( (  from_dash_charlike1206 ) ( ( "\n" ) ,  ( 1 ) ) ) ) );
                        ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3996 ) ) ) ) );
                    }
                    else {
                        if ( dref4001.tag == Key_124_Backspace_t ) {
                            struct envunion122  temp1207 = ( (struct envunion122){ .fun = (  enum Unit_6  (*) (  struct env95*  ,    struct Pane_110 *  ) )backspace1208 , .env =  env->envinst95 } );
                            ( temp1207.fun ( &temp1207.env ,  ( (  pane955 ) ( (  ed3996 ) ) ) ) );
                        }
                        else {
                            if ( dref4001.tag == Key_124_Char_t ) {
                                struct Array_1211  temp1213 = ( (  from_dash_listlike1214 ) ( ( (struct Array_1211) { ._arr = { ( dref4001 .stuff .Key_124_Char_s .field0 ) } } ) ) );
                                struct StrView_20  s4003 = ( (  from_dash_ascii_dash_slice784 ) ( ( (  as_dash_slice1210 ) ( ( &temp1213 ) ) ) ) );
                                struct envunion1216  temp1215 = ( (struct envunion1216){ .fun = (  enum Unit_6  (*) (  struct env93*  ,    struct Pane_110 *  ,    struct StrView_20  ) )add_dash_str_dash_at_dash_char1204 , .env =  env->envinst93 } );
                                ( temp1215.fun ( &temp1215.env ,  ( (  pane955 ) ( (  ed3996 ) ) ) ,  (  s4003 ) ) );
                                ( (  move_dash_right956 ) ( ( (  pane955 ) ( (  ed3996 ) ) ) ) );
                            }
                        }
                    }
                }
                break;
            }
        }
    }
    else {
        if ( (* dref3999 ).tag == EditorMode_114_Cmd_t ) {
            struct Key_124  dref4005 = (  key3998 );
            if ( dref4005.tag == Key_124_Escape_t ) {
                (*  ed3996 ) .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } );
            }
            else {
                if ( dref4005.tag == Key_124_Enter_t ) {
                    ( (  run_dash_cmd1217 ) ( (  ed3996 ) ,  ( (  as_dash_str1175 ) ( ( & ( (* dref3999 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ) ) ) );
                    ( (  free1277 ) ( ( & ( (* dref3999 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ) );
                    (*  ed3996 ) .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } );
                }
                else {
                    if ( dref4005.tag == Key_124_Char_t ) {
                        struct envunion125  temp1278 = ( (struct envunion125){ .fun = (  enum Unit_6  (*) (  struct env42*  ,    struct StrBuilder_44 *  ,    struct Char_47  ) )write_dash_char1166 , .env =  env->envinst42 } );
                        ( temp1278.fun ( &temp1278.env ,  ( & ( (* dref3999 ) .stuff .EditorMode_114_Cmd_s .field0 ) ) ,  ( (  ascii_dash_char1279 ) ( ( dref4005 .stuff .Key_124_Char_s .field0 ) ) ) ) );
                    }
                    else {
                        if ( true ) {
                        }
                    }
                }
            }
        }
        else {
            if ( true ) {
                ( (  todo1274 ) ( ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

struct envunion1281 {
    bool  (*fun) (  struct env62*  ,    struct Screen_628 *  );
    struct env62 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed1282 (   struct env62* env ,    struct Screen_628 *  screen3435 ) {
    struct Tui_58 *  tui3436 = ( ( * (  screen3435 ) ) .f_tui );
    struct envunion63  temp1283 = ( (struct envunion63){ .fun = (  bool  (*) (  struct env55*  ,    struct Tui_58 *  ) )update_dash_dimensions699 , .env =  env->envinst55 } );
    bool  updated_dash_dimensions3437 = ( temp1283.fun ( &temp1283.env ,  (  tui3436 ) ) );
    if ( ( ! (  updated_dash_dimensions3437 ) ) ) {
        return ( false );
    }
    (*  screen3435 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3438 = ( ( * ( ( * (  screen3435 ) ) .f_tui ) ) .f_width );
    uint32_t  h3439 = ( ( * ( ( * (  screen3435 ) ) .f_tui ) ) .f_height );
    size_t  nusz3440 = ( (  u32_dash_size642 ) ( (  op_dash_mul650 ( (  w3438 ) , (  h3439 ) ) ) ) );
    if ( (  cmp151 ( (  nusz3440 ) , ( ( ( * (  screen3435 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_628  nuscreen3441 = ( (  mk_dash_screen636 ) ( (  tui3436 ) ,  ( ( * (  screen3435 ) ) .f_al ) ) );
    (*  screen3435 ) .f_current = ( (  nuscreen3441 ) .f_current );
    (*  screen3435 ) .f_previous = ( (  nuscreen3441 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw1284 (    struct Tui_58 *  tui3362 ) {
    bool  redraw3363 = ( ( * (  tui3362 ) ) .f_should_dash_redraw );
    (*  tui3362 ) .f_should_dash_redraw = ( false );
    return (  redraw3363 );
}

struct env1288 {
    struct Slice_629  s1905;
    struct Cell_630 (*  fun1907 )(    struct Cell_630  );
    ;
    ;
    ;
};

struct envunion1289 {
    enum Unit_6  (*fun) (  struct env1288*  ,    int32_t  );
    struct env1288 env;
};

static  enum Unit_6   for_dash_each1287 (    struct Range_653  iterable1074 ,   struct envunion1289  fun1076 ) {
    struct RangeIter_656  temp1290 = ( (  into_dash_iter658 ) ( (  iterable1074 ) ) );
    struct RangeIter_656 *  it1077 = ( &temp1290 );
    while ( ( true ) ) {
        struct Maybe_239  dref1078 = ( (  next659 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_239_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_239_Just_t ) {
                struct envunion1289  temp1291 = (  fun1076 );
                ( temp1291.fun ( &temp1291.env ,  ( dref1078 .stuff .Maybe_239_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1292 (   struct env1288* env ,    int32_t  i1909 ) {
    return ( (  set663 ) ( ( env->s1905 ) ,  ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ,  ( ( env->fun1907 ) ( (  elem_dash_get667 ( ( env->s1905 ) , ( (  i32_dash_size229 ) ( (  i1909 ) ) ) ) ) ) ) ) );
}

static  enum Unit_6   map1286 (    struct Slice_629  s1905 ,    struct Cell_630 (*  fun1907 )(    struct Cell_630  ) ) {
    struct env1288 envinst1288 = {
        .s1905 =  s1905 ,
        .fun1907 =  fun1907 ,
    };
    ( (  for_dash_each1287 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_i32163 ) ( (  op_dash_sub270 ( ( (  s1905 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion1289){ .fun = (  enum Unit_6  (*) (  struct env1288*  ,    int32_t  ) )lam1292 , .env =  envinst1288 } ) ) );
    return ( Unit_6_Unit );
}

static  struct Cell_630   lam1293 (    struct Cell_630  dref3399 ) {
    return ( (  default_dash_cell675 ) ( ) );
}

static  enum Unit_6   clear_dash_screen1285 (    struct Screen_628 *  screen3398 ) {
    ( (  map1286 ) ( ( ( * (  screen3398 ) ) .f_current ) ,  (  lam1293 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_screen_dash_fg1294 (    struct Screen_628 *  screen3444 ,    struct Color_631  c3446 ) {
    (*  screen3444 ) .f_default_dash_fg = (  c3446 );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_screen_dash_bg1295 (    struct Screen_628 *  screen3449 ,    struct Color_631  c3451 ) {
    (*  screen3449 ) .f_default_dash_bg = (  c3451 );
    return ( Unit_6_Unit );
}

struct ScreenDims_1297 {
    int32_t  f_from_dash_sx;
    int32_t  f_to_dash_sx;
    int32_t  f_from_dash_sy;
    int32_t  f_to_dash_sy;
};

static  int32_t   cast1299 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i321298 (    uint32_t  x660 ) {
    return ( (  cast1299 ) ( (  x660 ) ) );
}

static  int32_t   screen_dash_width1302 (    struct ScreenDims_1297  sd3783 ) {
    return (  op_dash_add241 ( (  op_dash_sub779 ( ( (  sd3783 ) .f_to_dash_sx ) , ( (  sd3783 ) .f_from_dash_sx ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
}

static  int32_t   screen_dash_height1303 (    struct ScreenDims_1297  sd3786 ) {
    return (  op_dash_add241 ( (  op_dash_sub779 ( ( (  sd3786 ) .f_to_dash_sy ) , ( (  sd3786 ) .f_from_dash_sy ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
}

static  enum Unit_6   update_dash_screen_dash_offset1301 (    struct Pane_110 *  pane3789 ,    struct ScreenDims_1297  sd3791 ) {
    struct Pos_19  cur3792 = ( ( * (  pane3789 ) ) .f_cursor );
    int32_t  cur_dash_sx3793 = ( (  pos_dash_vi916 ) ( ( ( * (  pane3789 ) ) .f_buf ) ,  (  cur3792 ) ) );
    struct ScreenCursorOffset_112  sc_dash_off3794 = ( ( * (  pane3789 ) ) .f_sc_dash_off );
    int32_t  sw3795 = (  op_dash_sub779 ( ( (  screen_dash_width1302 ) ( (  sd3791 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    int32_t  sh3796 = (  op_dash_sub779 ( ( (  screen_dash_height1303 ) ( (  sd3791 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    int32_t  margin3797 = (  from_dash_integral38 ( 5 ) );
    int32_t  csi3798 = ( (  pos_dash_vi916 ) ( ( ( * (  pane3789 ) ) .f_buf ) ,  (  cur3792 ) ) );
    int32_t  csx3799 = (  op_dash_sub779 ( (  csi3798 ) , ( (  sc_dash_off3794 ) .f_screen_dash_left ) ) );
    int32_t  csy3800 = (  op_dash_sub779 ( ( (  cur3792 ) .f_line ) , ( (  sc_dash_off3794 ) .f_screen_dash_top ) ) );
    int32_t  nu_dash_screen_dash_left3801 = ( (  sc_dash_off3794 ) .f_screen_dash_left );
    if ( (  cmp389 ( (  csx3799 ) , (  margin3797 ) ) == 0 ) ) {
        nu_dash_screen_dash_left3801 = (  op_dash_sub779 ( (  csi3798 ) , (  margin3797 ) ) );
    } else {
        if ( (  cmp389 ( (  csx3799 ) , (  op_dash_sub779 ( (  sw3795 ) , (  margin3797 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_left3801 = (  op_dash_add241 ( (  op_dash_sub779 ( (  csi3798 ) , (  sw3795 ) ) ) , (  margin3797 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_left3802 = ( (  max931 ) ( (  nu_dash_screen_dash_left3801 ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    int32_t  nu_dash_screen_dash_top3803 = ( (  sc_dash_off3794 ) .f_screen_dash_top );
    if ( (  cmp389 ( (  csy3800 ) , (  margin3797 ) ) == 0 ) ) {
        nu_dash_screen_dash_top3803 = (  op_dash_sub779 ( ( (  cur3792 ) .f_line ) , (  margin3797 ) ) );
    } else {
        if ( (  cmp389 ( (  csy3800 ) , (  op_dash_sub779 ( (  sh3796 ) , (  margin3797 ) ) ) ) == 2 ) ) {
            nu_dash_screen_dash_top3803 = (  op_dash_add241 ( (  op_dash_sub779 ( ( (  cur3792 ) .f_line ) , (  sh3796 ) ) ) , (  margin3797 ) ) );
        }
    }
    int32_t  nu_dash_screen_dash_top3804 = ( (  max931 ) ( (  nu_dash_screen_dash_top3803 ) ,  (  from_dash_integral38 ( 0 ) ) ) );
    (*  pane3789 ) .f_sc_dash_off = ( (struct ScreenCursorOffset_112) { .f_screen_dash_top = (  nu_dash_screen_dash_top3804 ) , .f_screen_dash_left = (  nu_dash_screen_dash_left3802 ) } );
    return ( Unit_6_Unit );
}

struct StrConcat_1307 {
    struct StrView_20  field0;
    int32_t  field1;
};

static struct StrConcat_1307 StrConcat_1307_StrConcat (  struct StrView_20  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1307 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1310 {
    struct StrView_20  field0;
    struct StrConcat_1307  field1;
};

static struct StrConcat_1310 StrConcat_1310_StrConcat (  struct StrView_20  field0 ,  struct StrConcat_1307  field1 ) {
    return ( struct StrConcat_1310 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1309 {
    struct StrConcat_1310  field0;
    struct Char_47  field1;
};

static struct StrConcat_1309 StrConcat_1309_StrConcat (  struct StrConcat_1310  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1309 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_6   print_dash_str1312 (    struct StrConcat_1307  self1503 ) {
    struct StrConcat_1307  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str169 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str1311 (    struct StrConcat_1310  self1503 ) {
    struct StrConcat_1310  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str162 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str1312 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   print_dash_str1308 (    struct StrConcat_1309  self1503 ) {
    struct StrConcat_1309  dref1504 = (  self1503 );
    if ( true ) {
        ( (  print_dash_str1311 ) ( ( dref1504 .field0 ) ) );
        ( (  print_dash_str170 ) ( ( dref1504 .field1 ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   assert1306 (    bool  cond1718 ,    struct StrConcat_1307  msg1720 ) {
    if ( ( ! (  cond1718 ) ) ) {
        ( (  print_dash_str1308 ) ( ( ( StrConcat_1309_StrConcat ) ( ( ( StrConcat_1310_StrConcat ) ( ( (  from_dash_string187 ) ( ( "ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1720 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    }
    return ( Unit_6_Unit );
}

struct AppendIter_1314 {
    struct StrViewIter_570  f_it;
    struct Char_47  f_elem;
    bool  f_appended;
};

static  struct AppendIter_1314   into_dash_iter1315 (    struct AppendIter_1314  self1019 ) {
    return (  self1019 );
}

static  struct AppendIter_1314   append1316 (    struct StrViewIter_570  it1006 ,    struct Char_47  e1008 ) {
    return ( (struct AppendIter_1314) { .f_it = ( (  into_dash_iter572 ) ( (  it1006 ) ) ) , .f_elem = (  e1008 ) , .f_appended = ( false ) } );
}

static  struct Maybe_573   next1318 (    struct AppendIter_1314 *  self1022 ) {
    struct Maybe_573  dref1023 = ( (  next574 ) ( ( & ( ( * (  self1022 ) ) .f_it ) ) ) );
    if ( dref1023.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1023 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1023.tag == Maybe_573_None_t ) {
            if ( ( ! ( ( * (  self1022 ) ) .f_appended ) ) ) {
                (*  self1022 ) .f_appended = ( true );
                return ( ( Maybe_573_Just ) ( ( ( * (  self1022 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
        }
    }
}

static  bool   between1320 (    struct Pos_19  c1337 ,    struct Pos_19  l1339 ,    struct Pos_19  r1341 ) {
    struct Pos_19  from1342 = ( (  min387 ) ( (  l1339 ) ,  (  r1341 ) ) );
    struct Pos_19  to1343 = ( (  max390 ) ( (  l1339 ) ,  (  r1341 ) ) );
    return ( (  cmp388 ( (  from1342 ) , (  c1337 ) ) != 2 ) && (  cmp388 ( (  c1337 ) , (  to1343 ) ) != 2 ) );
}

static  bool   is_dash_in_dash_selection1319 (    struct Pane_110 *  pane3775 ,    struct Pos_19  pos3777 ) {
    return ( {  struct Maybe_22  dref3778 = ( ( * (  pane3775 ) ) .f_sel ) ; dref3778.tag == Maybe_22_Just_t ? ( (  between1320 ) ( (  pos3777 ) ,  ( ( * (  pane3775 ) ) .f_cursor ) ,  ( dref3778 .stuff .Maybe_22_Just_s .field0 ) ) ) : ( false ) ; } );
}

static  int32_t   op_dash_mul1322 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  enum Unit_6   put_dash_char1321 (    struct Screen_628 *  screen3482 ,    struct Char_47  c3484 ,    int32_t  x3486 ,    int32_t  y3488 ) {
    int32_t  w3489 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3482 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp389 ( (  x3486 ) , (  w3489 ) ) != 0 ) || (  cmp389 ( (  y3488 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3482 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp389 ( (  x3486 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) || (  cmp389 ( (  y3488 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    size_t  i3490 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3488 ) , (  w3489 ) ) ) , (  x3486 ) ) ) ) );
    struct Color_631  fg3491 = ( ( * (  screen3482 ) ) .f_default_dash_fg );
    struct Color_631  bg3492 = ( ( * (  screen3482 ) ) .f_default_dash_bg );
    struct Char_47  c3493 = (  c3484 );
    int32_t  char_dash_width3494 = ( (  wcwidth932 ) ( (  c3493 ) ) );
    ( (  set663 ) ( ( ( * (  screen3482 ) ) .f_current ) ,  (  i3490 ) ,  ( (struct Cell_630) { .f_c = (  c3493 ) , .f_fg = (  fg3491 ) , .f_bg = (  bg3492 ) , .f_char_dash_width = (  char_dash_width3494 ) } ) ) );
    struct RangeIter_656  temp1323 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( (  x3486 ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  min435 ) ( (  op_dash_sub779 ( (  op_dash_add241 ( (  x3486 ) , (  char_dash_width3494 ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  (  w3489 ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1324 =  next659 (&temp1323);
        if (  __cond1324 .tag == 0 ) {
            break;
        }
        int32_t  xx3496 =  __cond1324 .stuff .Maybe_239_Just_s .field0;
        size_t  i3497 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3488 ) , (  w3489 ) ) ) , (  xx3496 ) ) ) ) );
        ( (  set663 ) ( ( ( * (  screen3482 ) ) .f_current ) ,  (  i3497 ) ,  ( (struct Cell_630) { .f_c = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = (  fg3491 ) , .f_bg = (  bg3492 ) , .f_char_dash_width = (  from_dash_integral38 ( 1 ) ) } ) ) );
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   render1300 (    struct Screen_628 *  screen3807 ,    struct Pane_110 *  pane3809 ,    struct ScreenDims_1297  sd3811 ) {
    ( (  update_dash_screen_dash_offset1301 ) ( (  pane3809 ) ,  (  sd3811 ) ) );
    struct ScreenCursorOffset_112  sc_dash_off3812 = ( ( * (  pane3809 ) ) .f_sc_dash_off );
    struct RangeIter_656  temp1304 =  into_dash_iter658 ( ( (  to661 ) ( (  op_dash_add241 ( ( (  sc_dash_off3812 ) .f_screen_dash_top ) , (  from_dash_integral38 ( 1 ) ) ) ) ,  ( (  min435 ) ( ( (  num_dash_lines958 ) ( ( ( * (  pane3809 ) ) .f_buf ) ) ) ,  (  op_dash_add241 ( ( (  sc_dash_off3812 ) .f_screen_dash_top ) , ( (  screen_dash_height1303 ) ( (  sd3811 ) ) ) ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1305 =  next659 (&temp1304);
        if (  __cond1305 .tag == 0 ) {
            break;
        }
        int32_t  line_dash_num3814 =  __cond1305 .stuff .Maybe_239_Just_s .field0;
        int32_t  ybi3815 = (  op_dash_sub779 ( (  line_dash_num3814 ) , (  from_dash_integral38 ( 1 ) ) ) );
        int32_t  xbi3816 = ( (  vi_dash_bi960 ) ( ( ( * (  pane3809 ) ) .f_buf ) ,  (  ybi3815 ) ,  ( (  sc_dash_off3812 ) .f_screen_dash_left ) ) );
        struct StrView_20  line_dash_content3817 = ( (  line918 ) ( ( ( * (  pane3809 ) ) .f_buf ) ,  (  ybi3815 ) ) );
        int32_t  ys3818 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  op_dash_add241 ( ( (  sd3811 ) .f_from_dash_sy ) , (  line_dash_num3814 ) ) ) , ( (  sc_dash_off3812 ) .f_screen_dash_top ) ) ) , (  from_dash_integral38 ( 1 ) ) ) );
        int32_t  vx3819 = (  op_dash_sub779 ( ( (  pos_dash_vi916 ) ( ( ( * (  pane3809 ) ) .f_buf ) ,  ( (  mk470 ) ( (  ybi3815 ) ,  (  xbi3816 ) ) ) ) ) , ( (  sc_dash_off3812 ) .f_screen_dash_left ) ) );
        ( (  assert1306 ) ( (  cmp389 ( (  vx3819 ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ,  ( ( StrConcat_1307_StrConcat ) ( ( (  from_dash_string187 ) ( ( "vx must be <= 0, but got " ) ,  ( 25 ) ) ) ,  (  vx3819 ) ) ) ) );
        struct AppendIter_1314  temp1313 =  into_dash_iter1315 ( ( (  append1316 ) ( ( (  chars575 ) ( ( (  byte_dash_substr_dash_from1238 ) ( (  line_dash_content3817 ) ,  ( (  i32_dash_size229 ) ( (  xbi3816 ) ) ) ) ) ) ) ,  ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) ) ) ) );
        while (true) {
            struct Maybe_573  __cond1317 =  next1318 (&temp1313);
            if (  __cond1317 .tag == 0 ) {
                break;
            }
            struct Char_47  c3821 =  __cond1317 .stuff .Maybe_573_Just_s .field0;
            if ( (  cmp389 ( (  vx3819 ) , ( (  sd3811 ) .f_to_dash_sx ) ) == 2 ) ) {
                break;
            }
            struct Pos_19  curpos3822 = ( (  mk470 ) ( (  ybi3815 ) ,  (  xbi3816 ) ) );
            bool  is_dash_cursor3823 = (  eq281 ( (  curpos3822 ) , ( ( * (  pane3809 ) ) .f_cursor ) ) );
            bool  in_dash_selection3824 = ( (  is_dash_in_dash_selection1319 ) ( (  pane3809 ) ,  ( (  mk470 ) ( (  ybi3815 ) ,  (  xbi3816 ) ) ) ) );
            if ( (  is_dash_cursor3823 ) ) {
                (*  screen3807 ) .f_default_dash_fg = ( ( Color_631_Color8 ) ( ( Color8_632_Black8 ) ) );
                (*  screen3807 ) .f_default_dash_bg = ( ( Color_631_Color8 ) ( ( Color8_632_White8 ) ) );
            } else {
                if ( (  in_dash_selection3824 ) ) {
                    (*  screen3807 ) .f_default_dash_bg = ( ( Color_631_Color8 ) ( ( Color8_632_Cyan8 ) ) );
                }
            }
            struct Maybe_113  dref3825 = ( (  char_dash_replacement923 ) ( (  c3821 ) ) );
            if ( dref3825.tag == Maybe_113_None_t ) {
                if ( ( ! ( (  cmp389 ( (  vx3819 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  op_dash_sub779 ( (  op_dash_add241 ( (  vx3819 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3821 ) ) ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , ( (  sd3811 ) .f_to_dash_sx ) ) == 2 ) ) ) ) {
                    ( (  put_dash_char1321 ) ( (  screen3807 ) ,  (  c3821 ) ,  (  vx3819 ) ,  (  ys3818 ) ) );
                }
                vx3819 = (  op_dash_add241 ( (  vx3819 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3821 ) ) ) ) );
            }
            else {
                if ( dref3825.tag == Maybe_113_Just_t ) {
                    struct StrViewIter_570  temp1325 =  into_dash_iter572 ( ( (  chars575 ) ( ( dref3825 .stuff .Maybe_113_Just_s .field0 ) ) ) );
                    while (true) {
                        struct Maybe_573  __cond1326 =  next574 (&temp1325);
                        if (  __cond1326 .tag == 0 ) {
                            break;
                        }
                        struct Char_47  c3828 =  __cond1326 .stuff .Maybe_573_Just_s .field0;
                        if ( (  cmp389 ( (  vx3819 ) , (  from_dash_integral38 ( 0 ) ) ) != 0 ) ) {
                            ( (  put_dash_char1321 ) ( (  screen3807 ) ,  (  c3828 ) ,  (  vx3819 ) ,  (  ys3818 ) ) );
                        }
                        vx3819 = (  op_dash_add241 ( (  vx3819 ) , ( (  char_dash_screen_dash_width921 ) ( (  c3828 ) ) ) ) );
                    }
                }
            }
            (*  screen3807 ) .f_default_dash_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } );
            (*  screen3807 ) .f_default_dash_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } );
            xbi3816 = (  op_dash_add241 ( (  xbi3816 ) , ( (  size_dash_i32163 ) ( ( (  c3821 ) .f_num_dash_bytes ) ) ) ) );
        }
    }
    return ( Unit_6_Unit );
}

struct env1328 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1329 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1330 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1331 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1332 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1333 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct env1334 {
    struct Screen_628 *  screen4009;
    ;
    int32_t *  curline4013;
    ;
    ;
    ;
    ;
    ;
};

struct StrConcat_1337 {
    struct StrView_20  field0;
    enum Mode_111  field1;
};

static struct StrConcat_1337 StrConcat_1337_StrConcat (  struct StrView_20  field0 ,  enum Mode_111  field1 ) {
    return ( struct StrConcat_1337 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1336 {
    enum Unit_6  (*fun) (  struct env1328*  ,    struct StrConcat_1337  );
    struct env1328 env;
};

struct StrConcatIter_1341 {
    struct StrViewIter_570  f_left;
    struct StrViewIter_570  f_right;
};

static  struct StrConcatIter_1341   into_dash_iter1343 (    struct StrConcatIter_1341  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1344 (    struct StrConcatIter_1341 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1342 (    struct StrConcatIter_1341  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1341  it1099 = ( (  into_dash_iter1343 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1344 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1345 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1345);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1346;
    return (  temp1346 );
}

static  size_t   lam1347 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1340 (    struct StrConcatIter_1341  it1104 ) {
    return ( (  reduce1342 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1347 ) ) );
}

static  struct StrView_20   todo1351 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined483 ) ( ) );
}

static  struct StrViewIter_570   chars1350 (    enum Mode_111  self3730 ) {
    return ( (  chars575 ) ( ( {  enum Mode_111  dref3731 = (  self3730 ) ;  dref3731 == Mode_111_Normal ? ( (  from_dash_string187 ) ( ( "Normal" ) ,  ( 6 ) ) ) :  dref3731 == Mode_111_Insert ? ( (  from_dash_string187 ) ( ( "Insert" ) ,  ( 6 ) ) ) :  dref3731 == Mode_111_Select ? ( (  from_dash_string187 ) ( ( "Select" ) ,  ( 6 ) ) ) : ( (  todo1351 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1341   into_dash_iter1349 (    struct StrConcat_1337  dref1498 ) {
    return ( (struct StrConcatIter_1341) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1350 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1341   chars1348 (    struct StrConcat_1337  self1509 ) {
    return ( (  into_dash_iter1349 ) ( (  self1509 ) ) );
}

struct Zip_1354 {
    struct StrConcatIter_1341  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1355 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct Tuple2_1357 {
    struct Char_47  field0;
    int32_t  field1;
};

static struct Tuple2_1357 Tuple2_1357_Tuple2 (  struct Char_47  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1357 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1356 {
    enum Unit_6  (*fun) (  struct env1355*  ,    struct Tuple2_1357  );
    struct env1355 env;
};

static  struct Zip_1354   into_dash_iter1359 (    struct Zip_1354  self911 ) {
    return (  self911 );
}

struct Maybe_1360 {
    enum {
        Maybe_1360_None_t,
        Maybe_1360_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1357  field0;
        } Maybe_1360_Just_s;
    } stuff;
};

static struct Maybe_1360 Maybe_1360_Just (  struct Tuple2_1357  field0 ) {
    return ( struct Maybe_1360 ) { .tag = Maybe_1360_Just_t, .stuff = { .Maybe_1360_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1360   next1361 (    struct Zip_1354 *  self914 ) {
    struct Zip_1354  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1344 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1344 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1353 (    struct Zip_1354  iterable1074 ,   struct envunion1356  fun1076 ) {
    struct Zip_1354  temp1358 = ( (  into_dash_iter1359 ) ( (  iterable1074 ) ) );
    struct Zip_1354 *  it1077 = ( &temp1358 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1361 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1356  temp1362 = (  fun1076 );
                ( temp1362.fun ( &temp1362.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1354   zip1363 (    struct StrConcatIter_1341  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1341  left_dash_it925 = ( (  into_dash_iter1343 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1354) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1364 (   struct env1355* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1352 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1337  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1355 envinst1355 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1353 ) ( ( (  zip1363 ) ( ( (  chars1348 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1356){ .fun = (  enum Unit_6  (*) (  struct env1355*  ,    struct Tuple2_1357  ) )lam1364 , .env =  envinst1355 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1339 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1337  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1340 ) ( ( (  chars1348 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1352 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1338 (   struct env1328* env ,    struct StrConcat_1337  s4016 ) {
    ( (  draw_dash_str_dash_right1339 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1369 {
    struct StrView_20  field0;
    struct Pos_19  field1;
};

static struct StrConcat_1369 StrConcat_1369_StrConcat (  struct StrView_20  field0 ,  struct Pos_19  field1 ) {
    return ( struct StrConcat_1369 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1368 {
    struct StrConcat_1369  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1368 StrConcat_1368_StrConcat (  struct StrConcat_1369  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1368 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1367 {
    struct StrConcat_1368  field0;
    enum CharType_978  field1;
};

static struct StrConcat_1367 StrConcat_1367_StrConcat (  struct StrConcat_1368  field0 ,  enum CharType_978  field1 ) {
    return ( struct StrConcat_1367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1366 {
    enum Unit_6  (*fun) (  struct env1329*  ,    struct StrConcat_1367  );
    struct env1329 env;
};

struct IntStrIter_1380 {
    int32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1379 {
    struct AppendIter_840  f_left;
    struct IntStrIter_1380  f_right;
};

struct StrConcatIter_1378 {
    struct StrConcatIter_1379  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1377 {
    struct StrConcatIter_1378  f_left;
    struct IntStrIter_1380  f_right;
};

struct StrConcatIter_1376 {
    struct StrConcatIter_1377  f_left;
    struct AppendIter_840  f_right;
};

struct StrConcatIter_1375 {
    struct StrViewIter_570  f_left;
    struct StrConcatIter_1376  f_right;
};

struct StrConcatIter_1374 {
    struct StrConcatIter_1375  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1373 {
    struct StrConcatIter_1374  f_left;
    struct StrViewIter_570  f_right;
};

static  struct StrConcatIter_1373   into_dash_iter1382 (    struct StrConcatIter_1373  self1491 ) {
    return (  self1491 );
}

struct env1393 {
    int32_t  base1210;
    ;
};

struct envunion1394 {
    int32_t  (*fun) (  struct env1393*  ,    int32_t  ,    int32_t  );
    struct env1393 env;
};

static  int32_t   reduce1392 (    struct Range_653  iterable1093 ,    int32_t  base1095 ,   struct envunion1394  fun1097 ) {
    int32_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1394  temp1395 = (  fun1097 );
                x1098 = ( temp1395.fun ( &temp1395.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1396 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1396);
    exit ( 1 );
    ( Unit_6_Unit );
    int32_t  temp1397;
    return (  temp1397 );
}

static  int32_t   lam1398 (   struct env1393* env ,    int32_t  item1214 ,    int32_t  x1216 ) {
    return (  op_dash_mul1322 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  int32_t   pow1391 (    int32_t  base1210 ,    int32_t  p1212 ) {
    struct env1393 envinst1393 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1392 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral38 ( 1 ) ) ,  ( (struct envunion1394){ .fun = (  int32_t  (*) (  struct env1393*  ,    int32_t  ,    int32_t  ) )lam1398 , .env =  envinst1393 } ) ) );
}

static  int32_t   op_dash_div1399 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  uint8_t   cast1400 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_573   next1390 (    struct IntStrIter_1380 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp389 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    int32_t  trim_dash_down1423 = ( (  pow1391 ) ( (  from_dash_integral38 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    int32_t  upper1424 = (  op_dash_div1399 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    int32_t  upper_dash_mask1425 = (  op_dash_mul1322 ( (  op_dash_div1399 ( (  upper1424 ) , (  from_dash_integral38 ( 10 ) ) ) ) , (  from_dash_integral38 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1400 ) ( (  op_dash_sub779 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1389 (    struct StrConcatIter_1379 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1390 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1388 (    struct StrConcatIter_1378 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1389 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1387 (    struct StrConcatIter_1377 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1388 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1390 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1386 (    struct StrConcatIter_1376 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1387 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1385 (    struct StrConcatIter_1375 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1386 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1384 (    struct StrConcatIter_1374 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1385 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1383 (    struct StrConcatIter_1373 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1384 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1381 (    struct StrConcatIter_1373  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1373  it1099 = ( (  into_dash_iter1382 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1383 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1401 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1401);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1402;
    return (  temp1402 );
}

static  size_t   lam1403 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1372 (    struct StrConcatIter_1373  it1104 ) {
    return ( (  reduce1381 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1403 ) ) );
}

struct StrConcat_1415 {
    struct Char_47  field0;
    int32_t  field1;
};

static struct StrConcat_1415 StrConcat_1415_StrConcat (  struct Char_47  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1415 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1414 {
    struct StrConcat_1415  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1414 StrConcat_1414_StrConcat (  struct StrConcat_1415  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1414 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1413 {
    struct StrConcat_1414  field0;
    int32_t  field1;
};

static struct StrConcat_1413 StrConcat_1413_StrConcat (  struct StrConcat_1414  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1413 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1412 {
    struct StrConcat_1413  field0;
    struct Char_47  field1;
};

static struct StrConcat_1412 StrConcat_1412_StrConcat (  struct StrConcat_1413  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1412 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   count_dash_digits1425 (    int32_t  self1430 ) {
    if ( (  eq282 ( (  self1430 ) , (  from_dash_integral38 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp389 ( (  self1430 ) , (  from_dash_integral38 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1399 ( (  self1430 ) , (  from_dash_integral38 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1380   int_dash_iter1424 (    int32_t  int1434 ) {
    if ( (  cmp389 ( (  int1434 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_1380) { .f_int = (  op_dash_neg603 ( (  int1434 ) ) ) , .f_len = ( (  count_dash_digits1425 ) ( (  op_dash_neg603 ( (  int1434 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_1380) { .f_int = (  int1434 ) , .f_len = ( (  count_dash_digits1425 ) ( (  int1434 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_1380   chars1423 (    int32_t  self1443 ) {
    return ( (  int_dash_iter1424 ) ( (  self1443 ) ) );
}

static  struct StrConcatIter_1379   into_dash_iter1422 (    struct StrConcat_1415  dref1498 ) {
    return ( (struct StrConcatIter_1379) { .f_left = ( (  chars880 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1423 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1379   chars1421 (    struct StrConcat_1415  self1509 ) {
    return ( (  into_dash_iter1422 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1378   into_dash_iter1420 (    struct StrConcat_1414  dref1498 ) {
    return ( (struct StrConcatIter_1378) { .f_left = ( (  chars1421 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1378   chars1419 (    struct StrConcat_1414  self1509 ) {
    return ( (  into_dash_iter1420 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1377   into_dash_iter1418 (    struct StrConcat_1413  dref1498 ) {
    return ( (struct StrConcatIter_1377) { .f_left = ( (  chars1419 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1423 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1377   chars1417 (    struct StrConcat_1413  self1509 ) {
    return ( (  into_dash_iter1418 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1376   into_dash_iter1416 (    struct StrConcat_1412  dref1498 ) {
    return ( (struct StrConcatIter_1376) { .f_left = ( (  chars1417 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1376   chars1411 (    struct StrConcat_1412  self1509 ) {
    return ( (  into_dash_iter1416 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1376   chars1410 (    struct Pos_19  self3557 ) {
    return ( (  chars1411 ) ( ( ( StrConcat_1412_StrConcat ) ( ( ( StrConcat_1413_StrConcat ) ( ( ( StrConcat_1414_StrConcat ) ( ( ( StrConcat_1415_StrConcat ) ( ( (  from_dash_charlike188 ) ( ( "(" ) ,  ( 1 ) ) ) ,  ( (  self3557 ) .f_line ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  self3557 ) .f_bi ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct StrConcatIter_1375   into_dash_iter1409 (    struct StrConcat_1369  dref1498 ) {
    return ( (struct StrConcatIter_1375) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1410 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1375   chars1408 (    struct StrConcat_1369  self1509 ) {
    return ( (  into_dash_iter1409 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1374   into_dash_iter1407 (    struct StrConcat_1368  dref1498 ) {
    return ( (struct StrConcatIter_1374) { .f_left = ( (  chars1408 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1374   chars1406 (    struct StrConcat_1368  self1509 ) {
    return ( (  into_dash_iter1407 ) ( (  self1509 ) ) );
}

static  struct StrViewIter_570   chars1426 (    enum CharType_978  self3719 ) {
    return ( (  chars575 ) ( ( {  enum CharType_978  dref3720 = (  self3719 ) ;  dref3720 == CharType_978_CharPunctuation ? ( (  from_dash_string187 ) ( ( "Punct" ) ,  ( 5 ) ) ) :  dref3720 == CharType_978_CharWord ? ( (  from_dash_string187 ) ( ( "Word" ) ,  ( 4 ) ) ) :  dref3720 == CharType_978_CharSpace ? ( (  from_dash_string187 ) ( ( "Space" ) ,  ( 5 ) ) ) : ( (  todo1351 ) ( ) ) ; } ) ) );
}

static  struct StrConcatIter_1373   into_dash_iter1405 (    struct StrConcat_1367  dref1498 ) {
    return ( (struct StrConcatIter_1373) { .f_left = ( (  chars1406 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1426 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1373   chars1404 (    struct StrConcat_1367  self1509 ) {
    return ( (  into_dash_iter1405 ) ( (  self1509 ) ) );
}

struct Zip_1429 {
    struct StrConcatIter_1373  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1430 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1431 {
    enum Unit_6  (*fun) (  struct env1430*  ,    struct Tuple2_1357  );
    struct env1430 env;
};

static  struct Zip_1429   into_dash_iter1433 (    struct Zip_1429  self911 ) {
    return (  self911 );
}

static  struct Maybe_1360   next1434 (    struct Zip_1429 *  self914 ) {
    struct Zip_1429  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1383 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1383 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1428 (    struct Zip_1429  iterable1074 ,   struct envunion1431  fun1076 ) {
    struct Zip_1429  temp1432 = ( (  into_dash_iter1433 ) ( (  iterable1074 ) ) );
    struct Zip_1429 *  it1077 = ( &temp1432 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1434 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1431  temp1435 = (  fun1076 );
                ( temp1435.fun ( &temp1435.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1429   zip1436 (    struct StrConcatIter_1373  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1373  left_dash_it925 = ( (  into_dash_iter1382 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1429) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1437 (   struct env1430* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1427 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1367  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1430 envinst1430 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1428 ) ( ( (  zip1436 ) ( ( (  chars1404 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1431){ .fun = (  enum Unit_6  (*) (  struct env1430*  ,    struct Tuple2_1357  ) )lam1437 , .env =  envinst1430 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1371 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1367  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1372 ) ( ( (  chars1404 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1427 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1370 (   struct env1329* env ,    struct StrConcat_1367  s4016 ) {
    ( (  draw_dash_str_dash_right1371 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1440 {
    struct StrView_20  field0;
    struct Maybe_22  field1;
};

static struct StrConcat_1440 StrConcat_1440_StrConcat (  struct StrView_20  field0 ,  struct Maybe_22  field1 ) {
    return ( struct StrConcat_1440 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1439 {
    enum Unit_6  (*fun) (  struct env1330*  ,    struct StrConcat_1440  );
    struct env1330 env;
};

struct StrConcatIter_1446 {
    struct StrConcatIter_1375  f_left;
    struct AppendIter_840  f_right;
};

struct StrCaseIter_1445 {
    enum {
        StrCaseIter_1445_StrCaseIter1_t,
        StrCaseIter_1445_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_570  field0;
        } StrCaseIter_1445_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1446  field0;
        } StrCaseIter_1445_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1445 StrCaseIter_1445_StrCaseIter1 (  struct StrViewIter_570  field0 ) {
    return ( struct StrCaseIter_1445 ) { .tag = StrCaseIter_1445_StrCaseIter1_t, .stuff = { .StrCaseIter_1445_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1445 StrCaseIter_1445_StrCaseIter2 (  struct StrConcatIter_1446  field0 ) {
    return ( struct StrCaseIter_1445 ) { .tag = StrCaseIter_1445_StrCaseIter2_t, .stuff = { .StrCaseIter_1445_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1444 {
    struct StrViewIter_570  f_left;
    struct StrCaseIter_1445  f_right;
};

static  struct StrConcatIter_1444   into_dash_iter1448 (    struct StrConcatIter_1444  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1451 (    struct StrConcatIter_1446 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1385 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1450 (    struct StrCaseIter_1445 *  self1516 ) {
    struct StrCaseIter_1445 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1445_StrCaseIter1_t ) {
        return ( (  next574 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1445_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1445_StrCaseIter2_t ) {
            return ( (  next1451 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1445_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_573   next1449 (    struct StrConcatIter_1444 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1450 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1447 (    struct StrConcatIter_1444  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1444  it1099 = ( (  into_dash_iter1448 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1449 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1452 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1452);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1453;
    return (  temp1453 );
}

static  size_t   lam1454 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1443 (    struct StrConcatIter_1444  it1104 ) {
    return ( (  reduce1447 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1454 ) ) );
}

struct StrConcat_1459 {
    struct StrConcat_1369  field0;
    struct Char_47  field1;
};

static struct StrConcat_1459 StrConcat_1459_StrConcat (  struct StrConcat_1369  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1459 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1458 {
    enum {
        StrCase_1458_StrCase1_t,
        StrCase_1458_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1458_StrCase1_s;
        struct {
            struct StrConcat_1459  field0;
        } StrCase_1458_StrCase2_s;
    } stuff;
};

static struct StrCase_1458 StrCase_1458_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1458 ) { .tag = StrCase_1458_StrCase1_t, .stuff = { .StrCase_1458_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1458 StrCase_1458_StrCase2 (  struct StrConcat_1459  field0 ) {
    return ( struct StrCase_1458 ) { .tag = StrCase_1458_StrCase2_t, .stuff = { .StrCase_1458_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1446   into_dash_iter1464 (    struct StrConcat_1459  dref1498 ) {
    return ( (struct StrConcatIter_1446) { .f_left = ( (  chars1408 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1446   chars1463 (    struct StrConcat_1459  self1509 ) {
    return ( (  into_dash_iter1464 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1445   into_dash_iter1462 (    struct StrCase_1458  self1522 ) {
    struct StrCase_1458  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1458_StrCase1_t ) {
        return ( ( StrCaseIter_1445_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1458_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1458_StrCase2_t ) {
            return ( ( StrCaseIter_1445_StrCaseIter2 ) ( ( (  chars1463 ) ( ( dref1523 .stuff .StrCase_1458_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1445   chars1461 (    struct StrCase_1458  self1534 ) {
    return ( (  into_dash_iter1462 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1445   chars1457 (    struct Maybe_22  self1548 ) {
    struct StrCase_1458  temp1460;
    struct StrCase_1458  c1549 = (  temp1460 );
    struct Maybe_22  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_22_None_t ) {
        c1549 = ( ( StrCase_1458_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_22_Just_t ) {
            c1549 = ( ( StrCase_1458_StrCase2 ) ( ( ( StrConcat_1459_StrConcat ) ( ( ( StrConcat_1369_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_22_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1461 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1444   into_dash_iter1456 (    struct StrConcat_1440  dref1498 ) {
    return ( (struct StrConcatIter_1444) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1457 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1444   chars1455 (    struct StrConcat_1440  self1509 ) {
    return ( (  into_dash_iter1456 ) ( (  self1509 ) ) );
}

struct Zip_1467 {
    struct StrConcatIter_1444  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1468 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1469 {
    enum Unit_6  (*fun) (  struct env1468*  ,    struct Tuple2_1357  );
    struct env1468 env;
};

static  struct Zip_1467   into_dash_iter1471 (    struct Zip_1467  self911 ) {
    return (  self911 );
}

static  struct Maybe_1360   next1472 (    struct Zip_1467 *  self914 ) {
    struct Zip_1467  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1449 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1449 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1466 (    struct Zip_1467  iterable1074 ,   struct envunion1469  fun1076 ) {
    struct Zip_1467  temp1470 = ( (  into_dash_iter1471 ) ( (  iterable1074 ) ) );
    struct Zip_1467 *  it1077 = ( &temp1470 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1472 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1469  temp1473 = (  fun1076 );
                ( temp1473.fun ( &temp1473.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1467   zip1474 (    struct StrConcatIter_1444  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1444  left_dash_it925 = ( (  into_dash_iter1448 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1467) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1475 (   struct env1468* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1465 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1440  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1468 envinst1468 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1466 ) ( ( (  zip1474 ) ( ( (  chars1455 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1469){ .fun = (  enum Unit_6  (*) (  struct env1468*  ,    struct Tuple2_1357  ) )lam1475 , .env =  envinst1468 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1442 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1440  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1443 ) ( ( (  chars1455 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1465 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1441 (   struct env1330* env ,    struct StrConcat_1440  s4016 ) {
    ( (  draw_dash_str_dash_right1442 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1478 {
    struct StrView_20  field0;
    struct Maybe_113  field1;
};

static struct StrConcat_1478 StrConcat_1478_StrConcat (  struct StrView_20  field0 ,  struct Maybe_113  field1 ) {
    return ( struct StrConcat_1478 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1477 {
    enum Unit_6  (*fun) (  struct env1331*  ,    struct StrConcat_1478  );
    struct env1331 env;
};

struct StrConcatIter_1484 {
    struct StrConcatIter_1341  f_left;
    struct AppendIter_840  f_right;
};

struct StrCaseIter_1483 {
    enum {
        StrCaseIter_1483_StrCaseIter1_t,
        StrCaseIter_1483_StrCaseIter2_t,
    } tag;
    union {
        struct {
            struct StrViewIter_570  field0;
        } StrCaseIter_1483_StrCaseIter1_s;
        struct {
            struct StrConcatIter_1484  field0;
        } StrCaseIter_1483_StrCaseIter2_s;
    } stuff;
};

static struct StrCaseIter_1483 StrCaseIter_1483_StrCaseIter1 (  struct StrViewIter_570  field0 ) {
    return ( struct StrCaseIter_1483 ) { .tag = StrCaseIter_1483_StrCaseIter1_t, .stuff = { .StrCaseIter_1483_StrCaseIter1_s = { .field0 = field0 } } };
};

static struct StrCaseIter_1483 StrCaseIter_1483_StrCaseIter2 (  struct StrConcatIter_1484  field0 ) {
    return ( struct StrCaseIter_1483 ) { .tag = StrCaseIter_1483_StrCaseIter2_t, .stuff = { .StrCaseIter_1483_StrCaseIter2_s = { .field0 = field0 } } };
};

struct StrConcatIter_1482 {
    struct StrViewIter_570  f_left;
    struct StrCaseIter_1483  f_right;
};

static  struct StrConcatIter_1482   into_dash_iter1486 (    struct StrConcatIter_1482  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1489 (    struct StrConcatIter_1484 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1344 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1488 (    struct StrCaseIter_1483 *  self1516 ) {
    struct StrCaseIter_1483 *  dref1517 = (  self1516 );
    if ( (* dref1517 ).tag == StrCaseIter_1483_StrCaseIter1_t ) {
        return ( (  next574 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1483_StrCaseIter1_s .field0 ) ) ) );
    }
    else {
        if ( (* dref1517 ).tag == StrCaseIter_1483_StrCaseIter2_t ) {
            return ( (  next1489 ) ( ( & ( (* dref1517 ) .stuff .StrCaseIter_1483_StrCaseIter2_s .field0 ) ) ) );
        }
    }
}

static  struct Maybe_573   next1487 (    struct StrConcatIter_1482 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1488 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1485 (    struct StrConcatIter_1482  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1482  it1099 = ( (  into_dash_iter1486 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1487 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1490 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1490);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1491;
    return (  temp1491 );
}

static  size_t   lam1492 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1481 (    struct StrConcatIter_1482  it1104 ) {
    return ( (  reduce1485 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1492 ) ) );
}

struct StrCase_1496 {
    enum {
        StrCase_1496_StrCase1_t,
        StrCase_1496_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1496_StrCase1_s;
        struct {
            struct StrConcat_445  field0;
        } StrCase_1496_StrCase2_s;
    } stuff;
};

static struct StrCase_1496 StrCase_1496_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1496 ) { .tag = StrCase_1496_StrCase1_t, .stuff = { .StrCase_1496_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1496 StrCase_1496_StrCase2 (  struct StrConcat_445  field0 ) {
    return ( struct StrCase_1496 ) { .tag = StrCase_1496_StrCase2_t, .stuff = { .StrCase_1496_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrConcatIter_1341   into_dash_iter1503 (    struct StrConcat_446  dref1498 ) {
    return ( (struct StrConcatIter_1341) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1341   chars1502 (    struct StrConcat_446  self1509 ) {
    return ( (  into_dash_iter1503 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1484   into_dash_iter1501 (    struct StrConcat_445  dref1498 ) {
    return ( (struct StrConcatIter_1484) { .f_left = ( (  chars1502 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1484   chars1500 (    struct StrConcat_445  self1509 ) {
    return ( (  into_dash_iter1501 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1483   into_dash_iter1499 (    struct StrCase_1496  self1522 ) {
    struct StrCase_1496  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1496_StrCase1_t ) {
        return ( ( StrCaseIter_1483_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1496_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1496_StrCase2_t ) {
            return ( ( StrCaseIter_1483_StrCaseIter2 ) ( ( (  chars1500 ) ( ( dref1523 .stuff .StrCase_1496_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1483   chars1498 (    struct StrCase_1496  self1534 ) {
    return ( (  into_dash_iter1499 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1483   chars1495 (    struct Maybe_113  self1548 ) {
    struct StrCase_1496  temp1497;
    struct StrCase_1496  c1549 = (  temp1497 );
    struct Maybe_113  dref1550 = (  self1548 );
    if ( dref1550.tag == Maybe_113_None_t ) {
        c1549 = ( ( StrCase_1496_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "None" ) ,  ( 4 ) ) ) ) );
    }
    else {
        if ( dref1550.tag == Maybe_113_Just_t ) {
            c1549 = ( ( StrCase_1496_StrCase2 ) ( ( ( StrConcat_445_StrConcat ) ( ( ( StrConcat_446_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Just(" ) ,  ( 5 ) ) ) ,  ( dref1550 .stuff .Maybe_113_Just_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
    }
    return ( (  chars1498 ) ( (  c1549 ) ) );
}

static  struct StrConcatIter_1482   into_dash_iter1494 (    struct StrConcat_1478  dref1498 ) {
    return ( (struct StrConcatIter_1482) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1495 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1482   chars1493 (    struct StrConcat_1478  self1509 ) {
    return ( (  into_dash_iter1494 ) ( (  self1509 ) ) );
}

struct Zip_1506 {
    struct StrConcatIter_1482  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1507 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1508 {
    enum Unit_6  (*fun) (  struct env1507*  ,    struct Tuple2_1357  );
    struct env1507 env;
};

static  struct Zip_1506   into_dash_iter1510 (    struct Zip_1506  self911 ) {
    return (  self911 );
}

static  struct Maybe_1360   next1511 (    struct Zip_1506 *  self914 ) {
    struct Zip_1506  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1487 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1487 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1505 (    struct Zip_1506  iterable1074 ,   struct envunion1508  fun1076 ) {
    struct Zip_1506  temp1509 = ( (  into_dash_iter1510 ) ( (  iterable1074 ) ) );
    struct Zip_1506 *  it1077 = ( &temp1509 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1511 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1508  temp1512 = (  fun1076 );
                ( temp1512.fun ( &temp1512.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1506   zip1513 (    struct StrConcatIter_1482  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1482  left_dash_it925 = ( (  into_dash_iter1486 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1506) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1514 (   struct env1507* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1504 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1478  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1507 envinst1507 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1505 ) ( ( (  zip1513 ) ( ( (  chars1493 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1508){ .fun = (  enum Unit_6  (*) (  struct env1507*  ,    struct Tuple2_1357  ) )lam1514 , .env =  envinst1507 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1480 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1478  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1481 ) ( ( (  chars1493 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1504 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1479 (   struct env1331* env ,    struct StrConcat_1478  s4016 ) {
    ( (  draw_dash_str_dash_right1480 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1517 {
    struct StrView_20  field0;
    struct EditorMode_114  field1;
};

static struct StrConcat_1517 StrConcat_1517_StrConcat (  struct StrView_20  field0 ,  struct EditorMode_114  field1 ) {
    return ( struct StrConcat_1517 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1516 {
    enum Unit_6  (*fun) (  struct env1332*  ,    struct StrConcat_1517  );
    struct env1332 env;
};

struct StrConcat_1525 {
    struct StrView_20  field0;
    struct StrBuilder_44  field1;
};

static struct StrConcat_1525 StrConcat_1525_StrConcat (  struct StrView_20  field0 ,  struct StrBuilder_44  field1 ) {
    return ( struct StrConcat_1525 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1524 {
    struct StrConcat_1525  field0;
    struct Char_47  field1;
};

static struct StrConcat_1524 StrConcat_1524_StrConcat (  struct StrConcat_1525  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1524 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrCase_1523 {
    enum {
        StrCase_1523_StrCase1_t,
        StrCase_1523_StrCase2_t,
    } tag;
    union {
        struct {
            struct StrView_20  field0;
        } StrCase_1523_StrCase1_s;
        struct {
            struct StrConcat_1524  field0;
        } StrCase_1523_StrCase2_s;
    } stuff;
};

static struct StrCase_1523 StrCase_1523_StrCase1 (  struct StrView_20  field0 ) {
    return ( struct StrCase_1523 ) { .tag = StrCase_1523_StrCase1_t, .stuff = { .StrCase_1523_StrCase1_s = { .field0 = field0 } } };
};

static struct StrCase_1523 StrCase_1523_StrCase2 (  struct StrConcat_1524  field0 ) {
    return ( struct StrCase_1523 ) { .tag = StrCase_1523_StrCase2_t, .stuff = { .StrCase_1523_StrCase2_s = { .field0 = field0 } } };
};

static  struct StrCaseIter_1483   undefined1528 (  ) {
    struct StrCaseIter_1483  temp1529;
    return (  temp1529 );
}

static  struct StrCaseIter_1483   todo1527 (  ) {
    ( (  print996 ) ( ( (  from_dash_string187 ) ( ( "todo\n" ) ,  ( 5 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral38 ( 1 ) ) ) );
    return ( (  undefined1528 ) ( ) );
}

static  struct StrViewIter_570   chars1536 (    struct StrBuilder_44  s2775 ) {
    return ( (  into_dash_iter576 ) ( ( (  as_dash_str1175 ) ( ( & (  s2775 ) ) ) ) ) );
}

static  struct StrConcatIter_1341   into_dash_iter1535 (    struct StrConcat_1525  dref1498 ) {
    return ( (struct StrConcatIter_1341) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1536 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1341   chars1534 (    struct StrConcat_1525  self1509 ) {
    return ( (  into_dash_iter1535 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1484   into_dash_iter1533 (    struct StrConcat_1524  dref1498 ) {
    return ( (struct StrConcatIter_1484) { .f_left = ( (  chars1534 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1484   chars1532 (    struct StrConcat_1524  self1509 ) {
    return ( (  into_dash_iter1533 ) ( (  self1509 ) ) );
}

static  struct StrCaseIter_1483   into_dash_iter1531 (    struct StrCase_1523  self1522 ) {
    struct StrCase_1523  dref1523 = (  self1522 );
    if ( dref1523.tag == StrCase_1523_StrCase1_t ) {
        return ( ( StrCaseIter_1483_StrCaseIter1 ) ( ( (  chars575 ) ( ( dref1523 .stuff .StrCase_1523_StrCase1_s .field0 ) ) ) ) );
    }
    else {
        if ( dref1523.tag == StrCase_1523_StrCase2_t ) {
            return ( ( StrCaseIter_1483_StrCaseIter2 ) ( ( (  chars1532 ) ( ( dref1523 .stuff .StrCase_1523_StrCase2_s .field0 ) ) ) ) );
        }
    }
}

static  struct StrCaseIter_1483   chars1530 (    struct StrCase_1523  self1534 ) {
    return ( (  into_dash_iter1531 ) ( (  self1534 ) ) );
}

static  struct StrCaseIter_1483   chars1522 (    struct EditorMode_114  self3945 ) {
    struct StrCase_1523  temp1526;
    struct StrCase_1523  c3946 = (  temp1526 );
    struct EditorMode_114  dref3947 = (  self3945 );
    if ( dref3947.tag == EditorMode_114_Normal_t ) {
        c3946 = ( ( StrCase_1523_StrCase1 ) ( ( (  from_dash_string187 ) ( ( "Normal" ) ,  ( 6 ) ) ) ) );
    }
    else {
        if ( dref3947.tag == EditorMode_114_Cmd_t ) {
            c3946 = ( ( StrCase_1523_StrCase2 ) ( ( ( StrConcat_1524_StrConcat ) ( ( ( StrConcat_1525_StrConcat ) ( ( (  from_dash_string187 ) ( ( "Cmd(" ) ,  ( 4 ) ) ) ,  ( dref3947 .stuff .EditorMode_114_Cmd_s .field0 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
        }
        else {
            if ( true ) {
                return ( (  todo1527 ) ( ) );
            }
        }
    }
    return ( (  chars1530 ) ( (  c3946 ) ) );
}

static  struct StrConcatIter_1482   into_dash_iter1521 (    struct StrConcat_1517  dref1498 ) {
    return ( (struct StrConcatIter_1482) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1522 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1482   chars1520 (    struct StrConcat_1517  self1509 ) {
    return ( (  into_dash_iter1521 ) ( (  self1509 ) ) );
}

struct env1539 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1540 {
    enum Unit_6  (*fun) (  struct env1539*  ,    struct Tuple2_1357  );
    struct env1539 env;
};

static  enum Unit_6   for_dash_each1538 (    struct Zip_1506  iterable1074 ,   struct envunion1540  fun1076 ) {
    struct Zip_1506  temp1541 = ( (  into_dash_iter1510 ) ( (  iterable1074 ) ) );
    struct Zip_1506 *  it1077 = ( &temp1541 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1511 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1540  temp1542 = (  fun1076 );
                ( temp1542.fun ( &temp1542.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   lam1543 (   struct env1539* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1537 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1517  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1539 envinst1539 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1538 ) ( ( (  zip1513 ) ( ( (  chars1520 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1540){ .fun = (  enum Unit_6  (*) (  struct env1539*  ,    struct Tuple2_1357  ) )lam1543 , .env =  envinst1539 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1519 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1517  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1481 ) ( ( (  chars1520 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1537 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1518 (   struct env1332* env ,    struct StrConcat_1517  s4016 ) {
    ( (  draw_dash_str_dash_right1519 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct envunion1545 {
    enum Unit_6  (*fun) (  struct env1331*  ,    struct StrConcat_1478  );
    struct env1331 env;
};

struct StrConcat_1550 {
    struct StrConcat_1307  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1550 StrConcat_1550_StrConcat (  struct StrConcat_1307  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1550 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1549 {
    struct StrConcat_1550  field0;
    int32_t  field1;
};

static struct StrConcat_1549 StrConcat_1549_StrConcat (  struct StrConcat_1550  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_1549 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1548 {
    struct StrConcat_1549  field0;
    struct Char_47  field1;
};

static struct StrConcat_1548 StrConcat_1548_StrConcat (  struct StrConcat_1549  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1548 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1547 {
    enum Unit_6  (*fun) (  struct env1333*  ,    struct StrConcat_1548  );
    struct env1333 env;
};

struct StrConcatIter_1557 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1380  f_right;
};

struct StrConcatIter_1556 {
    struct StrConcatIter_1557  f_left;
    struct StrViewIter_570  f_right;
};

struct StrConcatIter_1555 {
    struct StrConcatIter_1556  f_left;
    struct IntStrIter_1380  f_right;
};

struct StrConcatIter_1554 {
    struct StrConcatIter_1555  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1554   into_dash_iter1559 (    struct StrConcatIter_1554  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1563 (    struct StrConcatIter_1557 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1390 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1562 (    struct StrConcatIter_1556 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1563 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1561 (    struct StrConcatIter_1555 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1562 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1390 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1560 (    struct StrConcatIter_1554 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1561 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1558 (    struct StrConcatIter_1554  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1554  it1099 = ( (  into_dash_iter1559 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1560 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1564 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1564);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1565;
    return (  temp1565 );
}

static  size_t   lam1566 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1553 (    struct StrConcatIter_1554  it1104 ) {
    return ( (  reduce1558 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1566 ) ) );
}

static  struct StrConcatIter_1557   into_dash_iter1574 (    struct StrConcat_1307  dref1498 ) {
    return ( (struct StrConcatIter_1557) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1423 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1557   chars1573 (    struct StrConcat_1307  self1509 ) {
    return ( (  into_dash_iter1574 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1556   into_dash_iter1572 (    struct StrConcat_1550  dref1498 ) {
    return ( (struct StrConcatIter_1556) { .f_left = ( (  chars1573 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1556   chars1571 (    struct StrConcat_1550  self1509 ) {
    return ( (  into_dash_iter1572 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1555   into_dash_iter1570 (    struct StrConcat_1549  dref1498 ) {
    return ( (struct StrConcatIter_1555) { .f_left = ( (  chars1571 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1423 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1555   chars1569 (    struct StrConcat_1549  self1509 ) {
    return ( (  into_dash_iter1570 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1554   into_dash_iter1568 (    struct StrConcat_1548  dref1498 ) {
    return ( (struct StrConcatIter_1554) { .f_left = ( (  chars1569 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1554   chars1567 (    struct StrConcat_1548  self1509 ) {
    return ( (  into_dash_iter1568 ) ( (  self1509 ) ) );
}

struct Zip_1577 {
    struct StrConcatIter_1554  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1578 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1579 {
    enum Unit_6  (*fun) (  struct env1578*  ,    struct Tuple2_1357  );
    struct env1578 env;
};

static  struct Zip_1577   into_dash_iter1581 (    struct Zip_1577  self911 ) {
    return (  self911 );
}

static  struct Maybe_1360   next1582 (    struct Zip_1577 *  self914 ) {
    struct Zip_1577  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1560 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1560 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1576 (    struct Zip_1577  iterable1074 ,   struct envunion1579  fun1076 ) {
    struct Zip_1577  temp1580 = ( (  into_dash_iter1581 ) ( (  iterable1074 ) ) );
    struct Zip_1577 *  it1077 = ( &temp1580 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1582 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1579  temp1583 = (  fun1076 );
                ( temp1583.fun ( &temp1583.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1577   zip1584 (    struct StrConcatIter_1554  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1554  left_dash_it925 = ( (  into_dash_iter1559 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1577) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1585 (   struct env1578* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1575 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1548  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1578 envinst1578 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1576 ) ( ( (  zip1584 ) ( ( (  chars1567 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1579){ .fun = (  enum Unit_6  (*) (  struct env1578*  ,    struct Tuple2_1357  ) )lam1585 , .env =  envinst1578 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1552 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1548  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1553 ) ( ( (  chars1567 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1575 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1551 (   struct env1333* env ,    struct StrConcat_1548  s4016 ) {
    ( (  draw_dash_str_dash_right1552 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1588 {
    struct StrConcat_1549  field0;
    struct StrView_20  field1;
};

static struct StrConcat_1588 StrConcat_1588_StrConcat (  struct StrConcat_1549  field0 ,  struct StrView_20  field1 ) {
    return ( struct StrConcat_1588 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1587 {
    enum Unit_6  (*fun) (  struct env1334*  ,    struct StrConcat_1588  );
    struct env1334 env;
};

struct StrConcatIter_1592 {
    struct StrConcatIter_1555  f_left;
    struct StrViewIter_570  f_right;
};

static  struct StrConcatIter_1592   into_dash_iter1594 (    struct StrConcatIter_1592  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1595 (    struct StrConcatIter_1592 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1561 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce1593 (    struct StrConcatIter_1592  iterable1093 ,    size_t  base1095 ,    size_t (*  fun1097 )(    struct Char_47  ,    size_t  ) ) {
    size_t  x1098 = (  base1095 );
    struct StrConcatIter_1592  it1099 = ( (  into_dash_iter1594 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_573  dref1100 = ( (  next1595 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_573_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_573_Just_t ) {
                x1098 = ( (  fun1097 ) ( ( dref1100 .stuff .Maybe_573_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1596 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1596);
    exit ( 1 );
    ( Unit_6_Unit );
    size_t  temp1597;
    return (  temp1597 );
}

static  size_t   lam1598 (    struct Char_47  dref1105 ,    size_t  x1107 ) {
    return (  op_dash_add199 ( (  x1107 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count1591 (    struct StrConcatIter_1592  it1104 ) {
    return ( (  reduce1593 ) ( (  it1104 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam1598 ) ) );
}

static  struct StrConcatIter_1592   into_dash_iter1600 (    struct StrConcat_1588  dref1498 ) {
    return ( (struct StrConcatIter_1592) { .f_left = ( (  chars1569 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars575 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1592   chars1599 (    struct StrConcat_1588  self1509 ) {
    return ( (  into_dash_iter1600 ) ( (  self1509 ) ) );
}

struct Zip_1603 {
    struct StrConcatIter_1592  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1604 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1605 {
    enum Unit_6  (*fun) (  struct env1604*  ,    struct Tuple2_1357  );
    struct env1604 env;
};

static  struct Zip_1603   into_dash_iter1607 (    struct Zip_1603  self911 ) {
    return (  self911 );
}

static  struct Maybe_1360   next1608 (    struct Zip_1603 *  self914 ) {
    struct Zip_1603  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1595 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1595 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1602 (    struct Zip_1603  iterable1074 ,   struct envunion1605  fun1076 ) {
    struct Zip_1603  temp1606 = ( (  into_dash_iter1607 ) ( (  iterable1074 ) ) );
    struct Zip_1603 *  it1077 = ( &temp1606 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1608 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1605  temp1609 = (  fun1076 );
                ( temp1609.fun ( &temp1609.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1603   zip1610 (    struct StrConcatIter_1592  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1592  left_dash_it925 = ( (  into_dash_iter1594 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1603) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1611 (   struct env1604* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1601 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1588  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1604 envinst1604 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1602 ) ( ( (  zip1610 ) ( ( (  chars1599 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1605){ .fun = (  enum Unit_6  (*) (  struct env1604*  ,    struct Tuple2_1357  ) )lam1611 , .env =  envinst1604 } ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str_dash_right1590 (    struct Screen_628 *  screen3516 ,    struct StrConcat_1588  s3518 ,    int32_t  x3520 ,    int32_t  y3522 ) {
    int32_t  slen3523 = ( (  size_dash_i32163 ) ( ( (  count1591 ) ( ( (  chars1599 ) ( (  s3518 ) ) ) ) ) ) );
    int32_t  w3524 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3516 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  x3525 = (  op_dash_sub779 ( (  op_dash_sub779 ( (  w3524 ) , (  x3520 ) ) ) , (  slen3523 ) ) );
    ( (  draw_dash_str1601 ) ( (  screen3516 ) ,  (  s3518 ) ,  (  x3525 ) ,  (  y3522 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   ann1589 (   struct env1334* env ,    struct StrConcat_1588  s4016 ) {
    ( (  draw_dash_str_dash_right1590 ) ( ( env->screen4009 ) ,  (  s4016 ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( * ( env->curline4013 ) ) ) );
    (* env->curline4013 ) = (  op_dash_add241 ( ( * ( env->curline4013 ) ) , (  from_dash_integral38 ( 1 ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   render_dash_editor1296 (    struct Screen_628 *  screen4009 ,    struct Editor_109 *  ed4011 ) {
    struct ScreenDims_1297  screen_dash_dims4012 = ( (struct ScreenDims_1297) { .f_from_dash_sx = (  from_dash_integral38 ( 0 ) ) , .f_to_dash_sx = (  op_dash_sub779 ( ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen4009 ) ) .f_tui ) ) .f_width ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) , .f_from_dash_sy = (  from_dash_integral38 ( 0 ) ) , .f_to_dash_sy = (  op_dash_sub779 ( ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen4009 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) } );
    ( (  render1300 ) ( (  screen4009 ) ,  ( (  pane955 ) ( (  ed4011 ) ) ) ,  (  screen_dash_dims4012 ) ) );
    int32_t  temp1327 = (  from_dash_integral38 ( 0 ) );
    int32_t *  curline4013 = ( &temp1327 );
    struct env1328 envinst1328 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1329 envinst1329 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1330 envinst1330 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1331 envinst1331 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1332 envinst1332 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1333 envinst1333 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    struct env1334 envinst1334 = {
        .screen4009 =  screen4009 ,
        .curline4013 =  curline4013 ,
    };
    if ( ( true ) ) {
        return ( Unit_6_Unit );
    }
    struct envunion1336  temp1335 = ( (struct envunion1336){ .fun = (  enum Unit_6  (*) (  struct env1328*  ,    struct StrConcat_1337  ) )ann1338 , .env =  envinst1328 } );
    ( temp1335.fun ( &temp1335.env ,  ( ( StrConcat_1337_StrConcat ) ( ( (  from_dash_string187 ) ( ( "mode: " ) ,  ( 6 ) ) ) ,  ( ( ( * (  ed4011 ) ) .f_pane ) .f_mode ) ) ) ) );
    enum CharType_978  cur_dash_ty4017 = ( (  char_dash_type980 ) ( ( (  char_dash_at988 ) ( ( (  pane955 ) ( (  ed4011 ) ) ) ,  ( ( ( * (  ed4011 ) ) .f_pane ) .f_cursor ) ) ) ) );
    struct envunion1366  temp1365 = ( (struct envunion1366){ .fun = (  enum Unit_6  (*) (  struct env1329*  ,    struct StrConcat_1367  ) )ann1370 , .env =  envinst1329 } );
    ( temp1365.fun ( &temp1365.env ,  ( ( StrConcat_1367_StrConcat ) ( ( ( StrConcat_1368_StrConcat ) ( ( ( StrConcat_1369_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cur: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4011 ) ) .f_pane ) .f_cursor ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  (  cur_dash_ty4017 ) ) ) ) );
    struct envunion1439  temp1438 = ( (struct envunion1439){ .fun = (  enum Unit_6  (*) (  struct env1330*  ,    struct StrConcat_1440  ) )ann1441 , .env =  envinst1330 } );
    ( temp1438.fun ( &temp1438.env ,  ( ( StrConcat_1440_StrConcat ) ( ( (  from_dash_string187 ) ( ( "sel: " ) ,  ( 5 ) ) ) ,  ( ( ( * (  ed4011 ) ) .f_pane ) .f_sel ) ) ) ) );
    struct envunion1477  temp1476 = ( (struct envunion1477){ .fun = (  enum Unit_6  (*) (  struct env1331*  ,    struct StrConcat_1478  ) )ann1479 , .env =  envinst1331 } );
    ( temp1476.fun ( &temp1476.env ,  ( ( StrConcat_1478_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cp: " ) ,  ( 4 ) ) ) ,  ( ( * (  ed4011 ) ) .f_clipboard ) ) ) ) );
    struct envunion1516  temp1515 = ( (struct envunion1516){ .fun = (  enum Unit_6  (*) (  struct env1332*  ,    struct StrConcat_1517  ) )ann1518 , .env =  envinst1332 } );
    ( temp1515.fun ( &temp1515.env ,  ( ( StrConcat_1517_StrConcat ) ( ( (  from_dash_string187 ) ( ( "edmode: " ) ,  ( 8 ) ) ) ,  ( ( * (  ed4011 ) ) .f_mode ) ) ) ) );
    struct envunion1545  temp1544 = ( (struct envunion1545){ .fun = (  enum Unit_6  (*) (  struct env1331*  ,    struct StrConcat_1478  ) )ann1479 , .env =  envinst1331 } );
    ( temp1544.fun ( &temp1544.env ,  ( ( StrConcat_1478_StrConcat ) ( ( (  from_dash_string187 ) ( ( "msg: " ) ,  ( 5 ) ) ) ,  ( ( * (  ed4011 ) ) .f_msg ) ) ) ) );
    struct envunion1547  temp1546 = ( (struct envunion1547){ .fun = (  enum Unit_6  (*) (  struct env1333*  ,    struct StrConcat_1548  ) )ann1551 , .env =  envinst1333 } );
    ( temp1546.fun ( &temp1546.env ,  ( ( StrConcat_1548_StrConcat ) ( ( ( StrConcat_1549_StrConcat ) ( ( ( StrConcat_1550_StrConcat ) ( ( ( StrConcat_1307_StrConcat ) ( ( (  from_dash_string187 ) ( ( "sc-off: (" ) ,  ( 9 ) ) ) ,  ( ( ( ( * (  ed4011 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_top ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( ( ( ( * (  ed4011 ) ) .f_pane ) .f_sc_dash_off ) .f_screen_dash_left ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    struct envunion1587  temp1586 = ( (struct envunion1587){ .fun = (  enum Unit_6  (*) (  struct env1334*  ,    struct StrConcat_1588  ) )ann1589 , .env =  envinst1334 } );
    ( temp1586.fun ( &temp1586.env ,  ( ( StrConcat_1588_StrConcat ) ( ( ( StrConcat_1549_StrConcat ) ( ( ( StrConcat_1550_StrConcat ) ( ( ( StrConcat_1307_StrConcat ) ( ( (  from_dash_string187 ) ( ( "dims: { " ) ,  ( 8 ) ) ) ,  ( (  screen_dash_dims4012 ) .f_to_dash_sx ) ) ) ,  ( (  from_dash_string187 ) ( ( ", " ) ,  ( 2 ) ) ) ) ) ,  ( (  screen_dash_dims4012 ) .f_to_dash_sy ) ) ) ,  ( (  from_dash_string187 ) ( ( " }" ) ,  ( 2 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1614 {
    struct StrView_20  field0;
    uint32_t  field1;
};

static struct StrConcat_1614 StrConcat_1614_StrConcat (  struct StrView_20  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1614 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1613 {
    struct StrConcat_1614  field0;
    struct Char_47  field1;
};

static struct StrConcat_1613 StrConcat_1613_StrConcat (  struct StrConcat_1614  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1613 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1619 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1618 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1619  f_right;
};

struct StrConcatIter_1617 {
    struct StrConcatIter_1618  f_left;
    struct AppendIter_840  f_right;
};

struct Zip_1616 {
    struct StrConcatIter_1617  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1620 {
    ;
    int32_t  y3506;
    struct Screen_628 *  screen3500;
    int32_t  x3509;
    ;
};

struct envunion1621 {
    enum Unit_6  (*fun) (  struct env1620*  ,    struct Tuple2_1357  );
    struct env1620 env;
};

static  struct Zip_1616   into_dash_iter1623 (    struct Zip_1616  self911 ) {
    return (  self911 );
}

struct env1630 {
    ;
    uint32_t  base1210;
};

struct envunion1631 {
    uint32_t  (*fun) (  struct env1630*  ,    int32_t  ,    uint32_t  );
    struct env1630 env;
};

static  uint32_t   reduce1629 (    struct Range_653  iterable1093 ,    uint32_t  base1095 ,   struct envunion1631  fun1097 ) {
    uint32_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1631  temp1632 = (  fun1097 );
                x1098 = ( temp1632.fun ( &temp1632.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1633 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1633);
    exit ( 1 );
    ( Unit_6_Unit );
    uint32_t  temp1634;
    return (  temp1634 );
}

static  uint32_t   lam1635 (   struct env1630* env ,    int32_t  item1214 ,    uint32_t  x1216 ) {
    return (  op_dash_mul650 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint32_t   pow1628 (    uint32_t  base1210 ,    int32_t  p1212 ) {
    struct env1630 envinst1630 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1629 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral183 ( 1 ) ) ,  ( (struct envunion1631){ .fun = (  uint32_t  (*) (  struct env1630*  ,    int32_t  ,    uint32_t  ) )lam1635 , .env =  envinst1630 } ) ) );
}

static  uint32_t   op_dash_div1636 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  uint32_t   op_dash_sub1637 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_573   next1627 (    struct IntStrIter_1619 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp389 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    uint32_t  trim_dash_down1423 = ( (  pow1628 ) ( (  from_dash_integral183 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint32_t  upper1424 = (  op_dash_div1636 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint32_t  upper_dash_mask1425 = (  op_dash_mul650 ( (  op_dash_div1636 ( (  upper1424 ) , (  from_dash_integral183 ( 10 ) ) ) ) , (  from_dash_integral183 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast186 ) ( (  op_dash_sub1637 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1626 (    struct StrConcatIter_1618 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1625 (    struct StrConcatIter_1617 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1626 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_1360   next1624 (    struct Zip_1616 *  self914 ) {
    struct Zip_1616  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_573  dref916 = ( (  next1625 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_573_None_t ) {
            return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_573_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1360) { .tag = Maybe_1360_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1625 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1360_Just ) ( ( ( Tuple2_1357_Tuple2 ) ( ( dref916 .stuff .Maybe_573_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1615 (    struct Zip_1616  iterable1074 ,   struct envunion1621  fun1076 ) {
    struct Zip_1616  temp1622 = ( (  into_dash_iter1623 ) ( (  iterable1074 ) ) );
    struct Zip_1616 *  it1077 = ( &temp1622 );
    while ( ( true ) ) {
        struct Maybe_1360  dref1078 = ( (  next1624 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1360_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1360_Just_t ) {
                struct envunion1621  temp1638 = (  fun1076 );
                ( temp1638.fun ( &temp1638.env ,  ( dref1078 .stuff .Maybe_1360_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrConcatIter_1617   into_dash_iter1640 (    struct StrConcatIter_1617  self1491 ) {
    return (  self1491 );
}

static  struct Zip_1616   zip1639 (    struct StrConcatIter_1617  left922 ,    struct FromIter_233  right924 ) {
    struct StrConcatIter_1617  left_dash_it925 = ( (  into_dash_iter1640 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1616) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  int32_t   count_dash_digits1647 (    uint32_t  self1430 ) {
    if ( (  eq370 ( (  self1430 ) , (  from_dash_integral183 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp182 ( (  self1430 ) , (  from_dash_integral183 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1636 ( (  self1430 ) , (  from_dash_integral183 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1619   uint_dash_iter1646 (    uint32_t  int1437 ) {
    return ( (struct IntStrIter_1619) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1647 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1619   chars1645 (    uint32_t  self1449 ) {
    return ( (  uint_dash_iter1646 ) ( (  self1449 ) ) );
}

static  struct StrConcatIter_1618   into_dash_iter1644 (    struct StrConcat_1614  dref1498 ) {
    return ( (struct StrConcatIter_1618) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1645 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1618   chars1643 (    struct StrConcat_1614  self1509 ) {
    return ( (  into_dash_iter1644 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1617   into_dash_iter1642 (    struct StrConcat_1613  dref1498 ) {
    return ( (struct StrConcatIter_1617) { .f_left = ( (  chars1643 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1617   chars1641 (    struct StrConcat_1613  self1509 ) {
    return ( (  into_dash_iter1642 ) ( (  self1509 ) ) );
}

static  enum Unit_6   lam1648 (   struct env1620* env ,    struct Tuple2_1357  dref3511 ) {
    ( (  put_dash_char1321 ) ( ( env->screen3500 ) ,  ( dref3511 .field0 ) ,  (  op_dash_add241 ( ( env->x3509 ) , ( dref3511 .field1 ) ) ) ,  ( env->y3506 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   draw_dash_str1612 (    struct Screen_628 *  screen3500 ,    struct StrConcat_1613  s3502 ,    int32_t  x3504 ,    int32_t  y3506 ) {
    int32_t  w3507 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp389 ( (  y3506 ) , (  from_dash_integral38 ( 0 ) ) ) == 0 ) || (  cmp389 ( (  y3506 ) , ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3500 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_6_Unit );
    }
    int32_t  i3508 = (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3506 ) , (  w3507 ) ) ) , (  x3504 ) ) );
    int32_t  x3509 = ( (  min435 ) ( (  x3504 ) ,  (  w3507 ) ) );
    size_t  max_dash_len3510 = ( (  i32_dash_size229 ) ( (  op_dash_sub779 ( (  w3507 ) , (  x3509 ) ) ) ) );
    struct env1620 envinst1620 = {
        .y3506 =  y3506 ,
        .screen3500 =  screen3500 ,
        .x3509 =  x3509 ,
    };
    ( (  for_dash_each1615 ) ( ( (  zip1639 ) ( ( (  chars1641 ) ( (  s3502 ) ) ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1621){ .fun = (  enum Unit_6  (*) (  struct env1620*  ,    struct Tuple2_1357  ) )lam1648 , .env =  envinst1620 } ) ) );
    return ( Unit_6_Unit );
}

struct RenderState_1650 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_631  f_fg;
    struct Color_631  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_1655 {
    struct StrConcat_1613  field0;
    uint32_t  field1;
};

static struct StrConcat_1655 StrConcat_1655_StrConcat (  struct StrConcat_1613  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_1655 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1654 {
    struct StrConcat_1655  field0;
    struct Char_47  field1;
};

static struct StrConcat_1654 StrConcat_1654_StrConcat (  struct StrConcat_1655  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1654 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1658 {
    struct StrConcatIter_1617  f_left;
    struct IntStrIter_1619  f_right;
};

struct StrConcatIter_1657 {
    struct StrConcatIter_1658  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1657   into_dash_iter1660 (    struct StrConcatIter_1657  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1662 (    struct StrConcatIter_1658 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1625 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1627 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1661 (    struct StrConcatIter_1657 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1662 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1656 (    struct StrConcatIter_1657  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1657  temp1659 = ( (  into_dash_iter1660 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1657 *  it1077 = ( &temp1659 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1661 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrConcatIter_1658   into_dash_iter1666 (    struct StrConcat_1655  dref1498 ) {
    return ( (struct StrConcatIter_1658) { .f_left = ( (  chars1641 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1645 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1658   chars1665 (    struct StrConcat_1655  self1509 ) {
    return ( (  into_dash_iter1666 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1657   into_dash_iter1664 (    struct StrConcat_1654  dref1498 ) {
    return ( (struct StrConcatIter_1657) { .f_left = ( (  chars1665 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1657   chars1663 (    struct StrConcat_1654  self1509 ) {
    return ( (  into_dash_iter1664 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1653 (    struct StrConcat_1654  s2551 ) {
    ( (  for_dash_each1656 ) ( ( (  chars1663 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   move_dash_cursor_dash_to1652 (    uint32_t  x2565 ,    uint32_t  y2567 ) {
    uint32_t  x2568 = (  op_dash_add751 ( (  x2565 ) , (  from_dash_integral183 ( 1 ) ) ) );
    uint32_t  y2569 = (  op_dash_add751 ( (  y2567 ) , (  from_dash_integral183 ( 1 ) ) ) );
    ( (  print1653 ) ( ( ( StrConcat_1654_StrConcat ) ( ( ( StrConcat_1655_StrConcat ) ( ( ( StrConcat_1613_StrConcat ) ( ( ( StrConcat_1614_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2569 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2568 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  struct Slice_629   subslice1669 (    struct Slice_629  slice1782 ,    size_t  from1784 ,    size_t  to1786 ) {
    struct Cell_630 *  begin_dash_ptr1787 = ( (  offset_dash_ptr665 ) ( ( (  slice1782 ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  from1784 ) ) ) ) );
    if ( ( (  cmp151 ( (  from1784 ) , (  to1786 ) ) != 0 ) || (  cmp151 ( (  from1784 ) , ( (  slice1782 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_629) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1788 = (  op_dash_sub270 ( ( (  min293 ) ( (  to1786 ) ,  ( (  slice1782 ) .f_count ) ) ) , (  from1784 ) ) );
    return ( (struct Slice_629) { .f_ptr = (  begin_dash_ptr1787 ) , .f_count = (  count1788 ) } );
}

struct SliceIter_1672 {
    struct Slice_629  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_1671 {
    struct SliceIter_1672  f_left_dash_it;
    struct SliceIter_1672  f_right_dash_it;
};

struct Tuple2_1673 {
    struct Cell_630  field0;
    struct Cell_630  field1;
};

static struct Tuple2_1673 Tuple2_1673_Tuple2 (  struct Cell_630  field0 ,  struct Cell_630  field1 ) {
    return ( struct Tuple2_1673 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env1675 {
    bool (*  fun1135 )(    struct Tuple2_1673  );
};

struct envunion1676 {
    bool  (*fun) (  struct env1675*  ,    struct Tuple2_1673  ,    bool  );
    struct env1675 env;
};

static  struct Zip_1671   into_dash_iter1677 (    struct Zip_1671  self911 ) {
    return (  self911 );
}

struct Maybe_1678 {
    enum {
        Maybe_1678_None_t,
        Maybe_1678_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1673  field0;
        } Maybe_1678_Just_s;
    } stuff;
};

static struct Maybe_1678 Maybe_1678_Just (  struct Tuple2_1673  field0 ) {
    return ( struct Maybe_1678 ) { .tag = Maybe_1678_Just_t, .stuff = { .Maybe_1678_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_670   next1680 (    struct SliceIter_1672 *  self1828 ) {
    size_t  off1829 = ( ( * (  self1828 ) ) .f_current_dash_offset );
    if ( (  cmp151 ( (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1828 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_670) { .tag = Maybe_670_None_t } );
    }
    struct Cell_630  elem1830 = ( * ( (  offset_dash_ptr665 ) ( ( ( ( * (  self1828 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64228 ) ( (  off1829 ) ) ) ) ) );
    (*  self1828 ) .f_current_dash_offset = (  op_dash_add199 ( (  off1829 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_670_Just ) ( (  elem1830 ) ) );
}

static  struct Maybe_1678   next1679 (    struct Zip_1671 *  self914 ) {
    struct Zip_1671  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_670  dref916 = ( (  next1680 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_670_None_t ) {
            return ( (struct Maybe_1678) { .tag = Maybe_1678_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_670_Just_t ) {
                struct Maybe_670  dref918 = ( (  next1680 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_670_None_t ) {
                    return ( (struct Maybe_1678) { .tag = Maybe_1678_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_670_Just_t ) {
                        ( (  next1680 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next1680 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1678_Just ) ( ( ( Tuple2_1673_Tuple2 ) ( ( dref916 .stuff .Maybe_670_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_670_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce1674 (    struct Zip_1671  iterable1093 ,    bool  base1095 ,   struct envunion1676  fun1097 ) {
    bool  x1098 = (  base1095 );
    struct Zip_1671  it1099 = ( (  into_dash_iter1677 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_1678  dref1100 = ( (  next1679 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_1678_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_1678_Just_t ) {
                struct envunion1676  temp1681 = (  fun1097 );
                x1098 = ( temp1681.fun ( &temp1681.env ,  ( dref1100 .stuff .Maybe_1678_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1682 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1682);
    exit ( 1 );
    ( Unit_6_Unit );
    bool  temp1683;
    return (  temp1683 );
}

static  bool   lam1684 (   struct env1675* env ,    struct Tuple2_1673  e1137 ,    bool  x1139 ) {
    return ( ( ( env->fun1135 ) ( (  e1137 ) ) ) || (  x1139 ) );
}

static  bool   any1670 (    struct Zip_1671  it1133 ,    bool (*  fun1135 )(    struct Tuple2_1673  ) ) {
    struct env1675 envinst1675 = {
        .fun1135 =  fun1135 ,
    };
    return ( (  reduce1674 ) ( (  it1133 ) ,  ( false ) ,  ( (struct envunion1676){ .fun = (  bool  (*) (  struct env1675*  ,    struct Tuple2_1673  ,    bool  ) )lam1684 , .env =  envinst1675 } ) ) );
}

static  struct SliceIter_1672   into_dash_iter1686 (    struct Slice_629  self1822 ) {
    return ( (struct SliceIter_1672) { .f_slice = (  self1822 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_1671   zip1685 (    struct Slice_629  left922 ,    struct Slice_629  right924 ) {
    struct SliceIter_1672  left_dash_it925 = ( (  into_dash_iter1686 ) ( (  left922 ) ) );
    struct SliceIter_1672  right_dash_it926 = ( (  into_dash_iter1686 ) ( (  right924 ) ) );
    return ( (struct Zip_1671) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

struct Tuple2_1690 {
    struct Color_631  field0;
    struct Color_631  field1;
};

static struct Tuple2_1690 Tuple2_1690_Tuple2 (  struct Color_631  field0 ,  struct Color_631  field1 ) {
    return ( struct Tuple2_1690 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_632 *   cast1694 (    int32_t *  x356 ) {
    return ( (enum Color8_632 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1692 (    enum Color8_632  x573 ) {
    int32_t  temp1693 = ( (  zeroed822 ) ( ) );
    int32_t *  y574 = ( &temp1693 );
    enum Color8_632 *  yp575 = ( (  cast1694 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1691 (    enum Color8_632  l2593 ,    enum Color8_632  r2595 ) {
    return (  eq282 ( ( ( (  cast_dash_on_dash_zeroed1692 ) ( (  l2593 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1692 ) ( (  r2595 ) ) ) ) );
}

static  enum Color16_633 *   cast1698 (    int32_t *  x356 ) {
    return ( (enum Color16_633 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed1696 (    enum Color16_633  x573 ) {
    int32_t  temp1697 = ( (  zeroed822 ) ( ) );
    int32_t *  y574 = ( &temp1697 );
    enum Color16_633 *  yp575 = ( (  cast1698 ) ( (  y574 ) ) );
    (*  yp575 ) = (  x573 );
    return ( * (  y574 ) );
}

static  bool   eq1695 (    enum Color16_633  l2599 ,    enum Color16_633  r2601 ) {
    return (  eq282 ( ( ( (  cast_dash_on_dash_zeroed1696 ) ( (  l2599 ) ) ) ) , ( (  cast_dash_on_dash_zeroed1696 ) ( (  r2601 ) ) ) ) );
}

static  bool   eq1699 (    struct RGB_634  l2629 ,    struct RGB_634  r2631 ) {
    return ( ( (  eq175 ( ( (  l2629 ) .f_r ) , ( (  r2631 ) .f_r ) ) ) && (  eq175 ( ( (  l2629 ) .f_g ) , ( (  r2631 ) .f_g ) ) ) ) && (  eq175 ( ( (  l2629 ) .f_b ) , ( (  r2631 ) .f_b ) ) ) );
}

static  bool   eq1689 (    struct Color_631  l2652 ,    struct Color_631  r2654 ) {
    return ( {  struct Tuple2_1690  dref2655 = ( ( Tuple2_1690_Tuple2 ) ( (  l2652 ) ,  (  r2654 ) ) ) ; dref2655 .field0.tag == Color_631_ColorDefault_t && dref2655 .field1.tag == Color_631_ColorDefault_t ? ( true ) : dref2655 .field0.tag == Color_631_Color8_t && dref2655 .field1.tag == Color_631_Color8_t ? (  eq1691 ( ( dref2655 .field0 .stuff .Color_631_Color8_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color8_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_Color16_t && dref2655 .field1.tag == Color_631_Color16_t ? (  eq1695 ( ( dref2655 .field0 .stuff .Color_631_Color16_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color16_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_Color256_t && dref2655 .field1.tag == Color_631_Color256_t ? (  eq175 ( ( dref2655 .field0 .stuff .Color_631_Color256_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_Color256_s .field0 ) ) ) : dref2655 .field0.tag == Color_631_ColorRGB_t && dref2655 .field1.tag == Color_631_ColorRGB_t ? (  eq1699 ( ( dref2655 .field0 .stuff .Color_631_ColorRGB_s .field0 ) , ( dref2655 .field1 .stuff .Color_631_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq1688 (    struct Cell_630  l3374 ,    struct Cell_630  r3376 ) {
    if ( ( !  eq366 ( ( (  l3374 ) .f_c ) , ( (  r3376 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1689 ( ( (  l3374 ) .f_fg ) , ( (  r3376 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq1689 ( ( (  l3374 ) .f_bg ) , ( (  r3376 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   lam1687 (    struct Tuple2_1673  dref3430 ) {
    return ( !  eq1688 ( ( dref3430 .field0 ) , ( dref3430 .field1 ) ) );
}

static  enum Unit_6   set_dash_default_dash_fg1702 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg81703 (    enum Color8_632  color2604 ) {
    enum Color8_632  dref2605 = (  color2604 );
    switch (  dref2605 ) {
        case Color8_632_Black8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Red8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Green8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Yellow8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Blue8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Magenta8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Cyan8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_White8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg161704 (    enum Color16_633  color2608 ) {
    enum Color16_633  dref2609 = (  color2608 );
    switch (  dref2609 ) {
        case Color16_633_Black16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Red16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Green16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Yellow16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Blue16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Magenta16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Cyan16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_White16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightBlack16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightRed16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightGreen16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightYellow16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightBlue16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightMagenta16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightCyan16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightWhite16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

struct StrConcat_1708 {
    struct StrView_20  field0;
    uint8_t  field1;
};

static struct StrConcat_1708 StrConcat_1708_StrConcat (  struct StrView_20  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1708 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1707 {
    struct StrConcat_1708  field0;
    struct Char_47  field1;
};

static struct StrConcat_1707 StrConcat_1707_StrConcat (  struct StrConcat_1708  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1707 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_1712 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_1711 {
    struct StrViewIter_570  f_left;
    struct IntStrIter_1712  f_right;
};

struct StrConcatIter_1710 {
    struct StrConcatIter_1711  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1710   into_dash_iter1714 (    struct StrConcatIter_1710  self1491 ) {
    return (  self1491 );
}

struct env1720 {
    uint8_t  base1210;
    ;
};

struct envunion1721 {
    uint8_t  (*fun) (  struct env1720*  ,    int32_t  ,    uint8_t  );
    struct env1720 env;
};

static  uint8_t   reduce1719 (    struct Range_653  iterable1093 ,    uint8_t  base1095 ,   struct envunion1721  fun1097 ) {
    uint8_t  x1098 = (  base1095 );
    struct RangeIter_656  it1099 = ( (  into_dash_iter658 ) ( (  iterable1093 ) ) );
    while ( ( true ) ) {
        struct Maybe_239  dref1100 = ( (  next659 ) ( ( & (  it1099 ) ) ) );
        if ( dref1100.tag == Maybe_239_None_t ) {
            return (  x1098 );
        }
        else {
            if ( dref1100.tag == Maybe_239_Just_t ) {
                struct envunion1721  temp1722 = (  fun1097 );
                x1098 = ( temp1722.fun ( &temp1722.env ,  ( dref1100 .stuff .Maybe_239_Just_s .field0 ) ,  (  x1098 ) ) );
            }
        }
    }
    const char*  temp1723 = ( (  from_dash_string39 ) ( ( "unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp1723);
    exit ( 1 );
    ( Unit_6_Unit );
    uint8_t  temp1724;
    return (  temp1724 );
}

static  uint8_t   op_dash_mul1726 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam1725 (   struct env1720* env ,    int32_t  item1214 ,    uint8_t  x1216 ) {
    return (  op_dash_mul1726 ( (  x1216 ) , ( env->base1210 ) ) );
}

static  uint8_t   pow1718 (    uint8_t  base1210 ,    int32_t  p1212 ) {
    struct env1720 envinst1720 = {
        .base1210 =  base1210 ,
    };
    return ( (  reduce1719 ) ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  p1212 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral179 ( 1 ) ) ,  ( (struct envunion1721){ .fun = (  uint8_t  (*) (  struct env1720*  ,    int32_t  ,    uint8_t  ) )lam1725 , .env =  envinst1720 } ) ) );
}

static  uint8_t   op_dash_div1727 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast1728 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_573   next1717 (    struct IntStrIter_1712 *  self1422 ) {
    if ( ( ( * (  self1422 ) ) .f_negative ) ) {
        (*  self1422 ) .f_negative = ( false );
        return ( ( Maybe_573_Just ) ( ( (  from_dash_charlike188 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp389 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_573) { .tag = Maybe_573_None_t } );
    }
    uint8_t  trim_dash_down1423 = ( (  pow1718 ) ( (  from_dash_integral179 ( 10 ) ) ,  (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
    uint8_t  upper1424 = (  op_dash_div1727 ( ( ( * (  self1422 ) ) .f_int ) , (  trim_dash_down1423 ) ) );
    uint8_t  upper_dash_mask1425 = (  op_dash_mul1726 ( (  op_dash_div1727 ( (  upper1424 ) , (  from_dash_integral179 ( 10 ) ) ) ) , (  from_dash_integral179 ( 10 ) ) ) );
    uint8_t  digit1426 = ( ( (  cast1728 ) ( (  op_dash_sub748 ( (  upper1424 ) , (  upper_dash_mask1425 ) ) ) ) ) );
    (*  self1422 ) .f_len = (  op_dash_sub779 ( ( ( * (  self1422 ) ) .f_len ) , (  from_dash_integral38 ( 1 ) ) ) );
    struct Char_47  digit_dash_char1427 = ( (  from_dash_u8859 ) ( (  op_dash_add749 ( (  digit1426 ) , (  from_dash_integral179 ( 48 ) ) ) ) ) );
    return ( ( Maybe_573_Just ) ( (  digit_dash_char1427 ) ) );
}

static  struct Maybe_573   next1716 (    struct StrConcatIter_1711 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next574 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1717 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1715 (    struct StrConcatIter_1710 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1716 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1709 (    struct StrConcatIter_1710  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1710  temp1713 = ( (  into_dash_iter1714 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1710 *  it1077 = ( &temp1713 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1715 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  int32_t   count_dash_digits1735 (    uint8_t  self1430 ) {
    if ( (  eq175 ( (  self1430 ) , (  from_dash_integral179 ( 0 ) ) ) ) ) {
        return (  from_dash_integral38 ( 1 ) );
    }
    int32_t  digits1431 = (  from_dash_integral38 ( 0 ) );
    while ( (  cmp192 ( (  self1430 ) , (  from_dash_integral179 ( 0 ) ) ) == 2 ) ) {
        self1430 = (  op_dash_div1727 ( (  self1430 ) , (  from_dash_integral179 ( 10 ) ) ) );
        digits1431 = (  op_dash_add241 ( (  digits1431 ) , (  from_dash_integral38 ( 1 ) ) ) );
    }
    return (  digits1431 );
}

static  struct IntStrIter_1712   uint_dash_iter1734 (    uint8_t  int1437 ) {
    return ( (struct IntStrIter_1712) { .f_int = (  int1437 ) , .f_len = ( (  count_dash_digits1735 ) ( (  int1437 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_1712   chars1733 (    uint8_t  self1455 ) {
    return ( (  uint_dash_iter1734 ) ( (  self1455 ) ) );
}

static  struct StrConcatIter_1711   into_dash_iter1732 (    struct StrConcat_1708  dref1498 ) {
    return ( (struct StrConcatIter_1711) { .f_left = ( (  chars575 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1733 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1711   chars1731 (    struct StrConcat_1708  self1509 ) {
    return ( (  into_dash_iter1732 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1710   into_dash_iter1730 (    struct StrConcat_1707  dref1498 ) {
    return ( (struct StrConcatIter_1710) { .f_left = ( (  chars1731 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1710   chars1729 (    struct StrConcat_1707  self1509 ) {
    return ( (  into_dash_iter1730 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1706 (    struct StrConcat_1707  s2551 ) {
    ( (  for_dash_each1709 ) ( ( (  chars1729 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg2561705 (    uint8_t  color2622 ) {
    ( (  print1706 ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1708_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2622 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

struct StrConcat_1741 {
    struct StrConcat_1707  field0;
    uint8_t  field1;
};

static struct StrConcat_1741 StrConcat_1741_StrConcat (  struct StrConcat_1707  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1741 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1740 {
    struct StrConcat_1741  field0;
    struct Char_47  field1;
};

static struct StrConcat_1740 StrConcat_1740_StrConcat (  struct StrConcat_1741  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1740 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1739 {
    struct StrConcat_1740  field0;
    uint8_t  field1;
};

static struct StrConcat_1739 StrConcat_1739_StrConcat (  struct StrConcat_1740  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_1739 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_1738 {
    struct StrConcat_1739  field0;
    struct Char_47  field1;
};

static struct StrConcat_1738 StrConcat_1738_StrConcat (  struct StrConcat_1739  field0 ,  struct Char_47  field1 ) {
    return ( struct StrConcat_1738 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_1746 {
    struct StrConcatIter_1710  f_left;
    struct IntStrIter_1712  f_right;
};

struct StrConcatIter_1745 {
    struct StrConcatIter_1746  f_left;
    struct AppendIter_840  f_right;
};

struct StrConcatIter_1744 {
    struct StrConcatIter_1745  f_left;
    struct IntStrIter_1712  f_right;
};

struct StrConcatIter_1743 {
    struct StrConcatIter_1744  f_left;
    struct AppendIter_840  f_right;
};

static  struct StrConcatIter_1743   into_dash_iter1748 (    struct StrConcatIter_1743  self1491 ) {
    return (  self1491 );
}

static  struct Maybe_573   next1752 (    struct StrConcatIter_1746 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1715 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1717 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1751 (    struct StrConcatIter_1745 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1752 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1750 (    struct StrConcatIter_1744 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1751 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next1717 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_573   next1749 (    struct StrConcatIter_1743 *  self1494 ) {
    struct Maybe_573  dref1495 = ( (  next1750 ) ( ( & ( ( * (  self1494 ) ) .f_left ) ) ) );
    if ( dref1495.tag == Maybe_573_Just_t ) {
        return ( ( Maybe_573_Just ) ( ( dref1495 .stuff .Maybe_573_Just_s .field0 ) ) );
    }
    else {
        if ( dref1495.tag == Maybe_573_None_t ) {
            return ( (  next866 ) ( ( & ( ( * (  self1494 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_6   for_dash_each1742 (    struct StrConcatIter_1743  iterable1074 ,    enum Unit_6 (*  fun1076 )(    struct Char_47  ) ) {
    struct StrConcatIter_1743  temp1747 = ( (  into_dash_iter1748 ) ( (  iterable1074 ) ) );
    struct StrConcatIter_1743 *  it1077 = ( &temp1747 );
    while ( ( true ) ) {
        struct Maybe_573  dref1078 = ( (  next1749 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_573_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_573_Just_t ) {
                ( (  fun1076 ) ( ( dref1078 .stuff .Maybe_573_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct StrConcatIter_1746   into_dash_iter1760 (    struct StrConcat_1741  dref1498 ) {
    return ( (struct StrConcatIter_1746) { .f_left = ( (  chars1729 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1733 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1746   chars1759 (    struct StrConcat_1741  self1509 ) {
    return ( (  into_dash_iter1760 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1745   into_dash_iter1758 (    struct StrConcat_1740  dref1498 ) {
    return ( (struct StrConcatIter_1745) { .f_left = ( (  chars1759 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1745   chars1757 (    struct StrConcat_1740  self1509 ) {
    return ( (  into_dash_iter1758 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1744   into_dash_iter1756 (    struct StrConcat_1739  dref1498 ) {
    return ( (struct StrConcatIter_1744) { .f_left = ( (  chars1757 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars1733 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1744   chars1755 (    struct StrConcat_1739  self1509 ) {
    return ( (  into_dash_iter1756 ) ( (  self1509 ) ) );
}

static  struct StrConcatIter_1743   into_dash_iter1754 (    struct StrConcat_1738  dref1498 ) {
    return ( (struct StrConcatIter_1743) { .f_left = ( (  chars1755 ) ( ( dref1498 .field0 ) ) ) , .f_right = ( (  chars880 ) ( ( dref1498 .field1 ) ) ) } );
}

static  struct StrConcatIter_1743   chars1753 (    struct StrConcat_1738  self1509 ) {
    return ( (  into_dash_iter1754 ) ( (  self1509 ) ) );
}

static  enum Unit_6   print1737 (    struct StrConcat_1738  s2551 ) {
    ( (  for_dash_each1742 ) ( ( (  chars1753 ) ( (  s2551 ) ) ) ,  (  printf_dash_char171 ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg_dash_rgb1736 (    struct RGB_634  c2645 ) {
    ( (  print1737 ) ( ( ( StrConcat_1738_StrConcat ) ( ( ( StrConcat_1739_StrConcat ) ( ( ( StrConcat_1740_StrConcat ) ( ( ( StrConcat_1741_StrConcat ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1708_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2645 ) .f_r ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2645 ) .f_g ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2645 ) .f_b ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_fg1701 (    struct Color_631  c2666 ) {
    struct Color_631  dref2667 = (  c2666 );
    if ( dref2667.tag == Color_631_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg1702 ) ( ) );
    }
    else {
        if ( dref2667.tag == Color_631_Color8_t ) {
            ( (  set_dash_fg81703 ) ( ( dref2667 .stuff .Color_631_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2667.tag == Color_631_Color16_t ) {
                ( (  set_dash_fg161704 ) ( ( dref2667 .stuff .Color_631_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2667.tag == Color_631_Color256_t ) {
                    ( (  set_dash_fg2561705 ) ( ( dref2667 .stuff .Color_631_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2667.tag == Color_631_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb1736 ) ( ( dref2667 .stuff .Color_631_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_default_dash_bg1762 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg81763 (    enum Color8_632  color2612 ) {
    enum Color8_632  dref2613 = (  color2612 );
    switch (  dref2613 ) {
        case Color8_632_Black8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Red8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Green8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Yellow8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Blue8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Magenta8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_Cyan8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_632_White8 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg161764 (    enum Color16_633  color2616 ) {
    enum Color16_633  dref2617 = (  color2616 );
    switch (  dref2617 ) {
        case Color16_633_Black16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Red16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Green16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Yellow16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Blue16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Magenta16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_Cyan16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_White16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_633_BrightBlack16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightRed16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightGreen16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightYellow16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightBlue16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightMagenta16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightCyan16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_633_BrightWhite16 : {
            ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg2561765 (    uint8_t  color2625 ) {
    ( (  print1706 ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1708_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2625 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg_dash_rgb1766 (    struct RGB_634  c2648 ) {
    ( (  print1737 ) ( ( ( StrConcat_1738_StrConcat ) ( ( ( StrConcat_1739_StrConcat ) ( ( ( StrConcat_1740_StrConcat ) ( ( ( StrConcat_1741_StrConcat ) ( ( ( StrConcat_1707_StrConcat ) ( ( ( StrConcat_1708_StrConcat ) ( ( (  from_dash_string187 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2648 ) .f_r ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2648 ) .f_g ) ) ) ,  ( (  from_dash_charlike188 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2648 ) .f_b ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   set_dash_bg1761 (    struct Color_631  c2674 ) {
    struct Color_631  dref2675 = (  c2674 );
    if ( dref2675.tag == Color_631_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg1762 ) ( ) );
    }
    else {
        if ( dref2675.tag == Color_631_Color8_t ) {
            ( (  set_dash_bg81763 ) ( ( dref2675 .stuff .Color_631_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2675.tag == Color_631_Color16_t ) {
                ( (  set_dash_bg161764 ) ( ( dref2675 .stuff .Color_631_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2675.tag == Color_631_Color256_t ) {
                    ( (  set_dash_bg2561765 ) ( ( dref2675 .stuff .Color_631_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2675.tag == Color_631_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb1766 ) ( ( dref2675 .stuff .Color_631_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_6_Unit );
}

static  uint32_t   i32_dash_u321767 (    int32_t  x603 ) {
    return ( (uint32_t ) (  x603 ) );
}

static  enum Unit_6   emit_dash_cell1700 (    struct RenderState_1650 *  rs3406 ,    struct Cell_630 *  c3408 ,    uint32_t  x3410 ,    uint32_t  y3412 ) {
    if ( ( ( !  eq370 ( (  x3410 ) , ( ( * (  rs3406 ) ) .f_x ) ) ) || ( !  eq370 ( (  y3412 ) , ( ( * (  rs3406 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to1652 ) ( (  x3410 ) ,  (  y3412 ) ) );
        (*  rs3406 ) .f_x = (  x3410 );
        (*  rs3406 ) .f_y = (  y3412 );
    }
    struct Char_47  char3413 = ( ( * (  c3408 ) ) .f_c );
    struct Color_631  bg3414 = ( ( * (  c3408 ) ) .f_bg );
    if ( (  eq282 ( ( ( * (  c3408 ) ) .f_char_dash_width ) , (  op_dash_neg603 ( (  from_dash_integral38 ( 1 ) ) ) ) ) ) ) {
        char3413 = ( (  from_dash_charlike188 ) ( ( " " ) ,  ( 1 ) ) );
        bg3414 = ( ( Color_631_Color8 ) ( ( Color8_632_Red8 ) ) );
    }
    if ( ( !  eq1689 ( ( ( * (  rs3406 ) ) .f_fg ) , ( ( * (  c3408 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg1701 ) ( ( ( * (  c3408 ) ) .f_fg ) ) );
        (*  rs3406 ) .f_fg = ( ( * (  c3408 ) ) .f_fg );
    }
    if ( ( !  eq1689 ( ( ( * (  rs3406 ) ) .f_bg ) , (  bg3414 ) ) ) ) {
        ( (  set_dash_bg1761 ) ( (  bg3414 ) ) );
        (*  rs3406 ) .f_bg = (  bg3414 );
    }
    ( (  print_dash_str170 ) ( (  char3413 ) ) );
    uint32_t  char_dash_width3415 = ( (  i32_dash_u321767 ) ( ( (  max931 ) ( ( ( * (  c3408 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) ) ) );
    (*  rs3406 ) .f_x = (  op_dash_add751 ( ( ( * (  rs3406 ) ) .f_x ) , (  char_dash_width3415 ) ) );
    return ( Unit_6_Unit );
}

struct Zip_1770 {
    struct SliceIter_1672  f_left_dash_it;
    struct FromIter_233  f_right_dash_it;
};

struct env1771 {
    ;
    struct Slice_629  dest1853;
    ;
};

struct Tuple2_1773 {
    struct Cell_630  field0;
    int32_t  field1;
};

static struct Tuple2_1773 Tuple2_1773_Tuple2 (  struct Cell_630  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_1773 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion1772 {
    enum Unit_6  (*fun) (  struct env1771*  ,    struct Tuple2_1773  );
    struct env1771 env;
};

static  struct Zip_1770   into_dash_iter1775 (    struct Zip_1770  self911 ) {
    return (  self911 );
}

struct Maybe_1776 {
    enum {
        Maybe_1776_None_t,
        Maybe_1776_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_1773  field0;
        } Maybe_1776_Just_s;
    } stuff;
};

static struct Maybe_1776 Maybe_1776_Just (  struct Tuple2_1773  field0 ) {
    return ( struct Maybe_1776 ) { .tag = Maybe_1776_Just_t, .stuff = { .Maybe_1776_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_1776   next1777 (    struct Zip_1770 *  self914 ) {
    struct Zip_1770  copy915 = ( * (  self914 ) );
    while ( ( true ) ) {
        struct Maybe_670  dref916 = ( (  next1680 ) ( ( & ( (  copy915 ) .f_left_dash_it ) ) ) );
        if ( dref916.tag == Maybe_670_None_t ) {
            return ( (struct Maybe_1776) { .tag = Maybe_1776_None_t } );
        }
        else {
            if ( dref916.tag == Maybe_670_Just_t ) {
                struct Maybe_239  dref918 = ( (  next240 ) ( ( & ( (  copy915 ) .f_right_dash_it ) ) ) );
                if ( dref918.tag == Maybe_239_None_t ) {
                    return ( (struct Maybe_1776) { .tag = Maybe_1776_None_t } );
                }
                else {
                    if ( dref918.tag == Maybe_239_Just_t ) {
                        ( (  next1680 ) ( ( & ( ( * (  self914 ) ) .f_left_dash_it ) ) ) );
                        ( (  next240 ) ( ( & ( ( * (  self914 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_1776_Just ) ( ( ( Tuple2_1773_Tuple2 ) ( ( dref916 .stuff .Maybe_670_Just_s .field0 ) ,  ( dref918 .stuff .Maybe_239_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_6   for_dash_each1769 (    struct Zip_1770  iterable1074 ,   struct envunion1772  fun1076 ) {
    struct Zip_1770  temp1774 = ( (  into_dash_iter1775 ) ( (  iterable1074 ) ) );
    struct Zip_1770 *  it1077 = ( &temp1774 );
    while ( ( true ) ) {
        struct Maybe_1776  dref1078 = ( (  next1777 ) ( (  it1077 ) ) );
        if ( dref1078.tag == Maybe_1776_None_t ) {
            return ( Unit_6_Unit );
        }
        else {
            if ( dref1078.tag == Maybe_1776_Just_t ) {
                struct envunion1772  temp1778 = (  fun1076 );
                ( temp1778.fun ( &temp1778.env ,  ( dref1078 .stuff .Maybe_1776_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_6_Unit );
}

static  struct Zip_1770   zip1779 (    struct Slice_629  left922 ,    struct FromIter_233  right924 ) {
    struct SliceIter_1672  left_dash_it925 = ( (  into_dash_iter1686 ) ( (  left922 ) ) );
    struct FromIter_233  right_dash_it926 = ( (  into_dash_iter245 ) ( (  right924 ) ) );
    return ( (struct Zip_1770) { .f_left_dash_it = (  left_dash_it925 ) , .f_right_dash_it = (  right_dash_it926 ) } );
}

static  enum Unit_6   lam1780 (   struct env1771* env ,    struct Tuple2_1773  dref1854 ) {
    return ( (  set663 ) ( ( env->dest1853 ) ,  ( (  i32_dash_size229 ) ( ( dref1854 .field1 ) ) ) ,  ( dref1854 .field0 ) ) );
}

static  enum Unit_6   copy_dash_to1768 (    struct Slice_629  src1851 ,    struct Slice_629  dest1853 ) {
    if ( (  cmp151 ( ( (  src1851 ) .f_count ) , ( (  dest1853 ) .f_count ) ) == 2 ) ) {
        ( (  panic419 ) ( ( ( StrConcat_420_StrConcat ) ( ( ( StrConcat_221_StrConcat ) ( ( ( StrConcat_50_StrConcat ) ( ( ( StrConcat_51_StrConcat ) ( ( (  from_dash_string187 ) ( ( "cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src1851 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest1853 ) .f_count ) ) ) ,  ( (  from_dash_string187 ) ( ( "-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env1771 envinst1771 = {
        .dest1853 =  dest1853 ,
    };
    ( (  for_dash_each1769 ) ( ( (  zip1779 ) ( (  src1851 ) ,  ( (  from246 ) ( (  from_dash_integral38 ( 0 ) ) ) ) ) ) ,  ( (struct envunion1772){ .fun = (  enum Unit_6  (*) (  struct env1771*  ,    struct Tuple2_1773  ) )lam1780 , .env =  envinst1771 } ) ) );
    return ( Unit_6_Unit );
}

static  uint32_t   render_dash_screen1649 (    struct Screen_628 *  screen3418 ) {
    int32_t  w3419 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3418 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3420 = ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen3418 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_1650  temp1651 = ( (struct RenderState_1650) { .f_x = (  from_dash_integral183 ( 0 ) ) , .f_y = (  from_dash_integral183 ( 0 ) ) , .f_fg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_bg = ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) , .f_changes = (  from_dash_integral183 ( 0 ) ) } );
    struct RenderState_1650 *  rs3421 = ( &temp1651 );
    ( (  move_dash_cursor_dash_to1652 ) ( (  from_dash_integral183 ( 0 ) ) ,  (  from_dash_integral183 ( 0 ) ) ) );
    struct RangeIter_656  temp1667 =  into_dash_iter658 ( ( (  to661 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( (  h3420 ) , (  from_dash_integral38 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_239  __cond1668 =  next659 (&temp1667);
        if (  __cond1668 .tag == 0 ) {
            break;
        }
        int32_t  y3423 =  __cond1668 .stuff .Maybe_239_Just_s .field0;
        int32_t  x_dash_v3424 = (  from_dash_integral38 ( 0 ) );
        while ( (  cmp389 ( (  x_dash_v3424 ) , (  w3419 ) ) == 0 ) ) {
            size_t  i3425 = ( (  i32_dash_size229 ) ( (  op_dash_add241 ( (  op_dash_mul1322 ( (  y3423 ) , (  w3419 ) ) ) , (  x_dash_v3424 ) ) ) ) );
            struct Cell_630 *  cur3426 = ( (  get_dash_ptr664 ) ( ( ( * (  screen3418 ) ) .f_current ) ,  (  i3425 ) ) );
            int32_t  char_dash_width3427 = ( (  max931 ) ( ( ( * (  cur3426 ) ) .f_char_dash_width ) ,  (  from_dash_integral38 ( 1 ) ) ) );
            struct Slice_629  curs3428 = ( (  subslice1669 ) ( ( ( * (  screen3418 ) ) .f_current ) ,  (  i3425 ) ,  (  op_dash_add199 ( (  i3425 ) , ( (  i32_dash_size229 ) ( (  char_dash_width3427 ) ) ) ) ) ) );
            struct Slice_629  prevs3429 = ( (  subslice1669 ) ( ( ( * (  screen3418 ) ) .f_previous ) ,  (  i3425 ) ,  (  op_dash_add199 ( (  i3425 ) , ( (  i32_dash_size229 ) ( (  char_dash_width3427 ) ) ) ) ) ) );
            if ( ( ( ( * (  screen3418 ) ) .f_requires_dash_full_dash_redraw ) || ( (  any1670 ) ( ( (  zip1685 ) ( (  curs3428 ) ,  (  prevs3429 ) ) ) ,  (  lam1687 ) ) ) ) ) {
                (*  rs3421 ) .f_changes = (  op_dash_add751 ( ( ( * (  rs3421 ) ) .f_changes ) , (  from_dash_integral183 ( 1 ) ) ) );
                ( (  emit_dash_cell1700 ) ( (  rs3421 ) ,  (  cur3426 ) ,  ( (  i32_dash_u321767 ) ( (  x_dash_v3424 ) ) ) ,  ( (  i32_dash_u321767 ) ( (  y3423 ) ) ) ) );
                ( (  copy_dash_to1768 ) ( (  curs3428 ) ,  (  prevs3429 ) ) );
            }
            x_dash_v3424 = (  op_dash_add241 ( (  x_dash_v3424 ) , (  char_dash_width3427 ) ) );
        }
    }
    (*  screen3418 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors577 ) ( ) );
    ( (  flush_dash_stdout580 ) ( ) );
    return ( ( * (  rs3421 ) ) .f_changes );
}

static  void *   cast_dash_ptr1787 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of1788 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed1785 (  ) {
    struct timespec *  temp1786;
    struct timespec *  x570 = (  temp1786 );
    ( ( memset ) ( ( (  cast_dash_ptr1787 ) ( ( & (  x570 ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  ( (  size_dash_of1788 ) ( (  x570 ) ) ) ) );
    return (  x570 );
}

static  struct timespec *   null_dash_ptr1784 (  ) {
    return ( (  zeroed1785 ) ( ) );
}

static  enum Unit_6   sync1781 (    struct Tui_58 *  tui3289 ) {
    if ( (  eq370 ( ( ( * (  tui3289 ) ) .f_target_dash_fps ) , (  from_dash_integral183 ( 0 ) ) ) ) ) {
        return ( Unit_6_Unit );
    }
    int64_t  frame_dash_ns3290 = (  op_dash_div856 ( (  from_dash_integral269 ( 1000000000 ) ) , ( (  size_dash_i64228 ) ( ( (  u32_dash_size642 ) ( ( ( * (  tui3289 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp1782 = ( (  undefined616 ) ( ) );
    struct timespec *  now3291 = ( &temp1782 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic618 ) ( ) ) ,  (  now3291 ) ) );
    int64_t  elapsed_dash_ns3292 = (  op_dash_add368 ( (  op_dash_mul197 ( (  op_dash_sub858 ( ( ( * (  now3291 ) ) .tv_sec ) , ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral269 ( 1000000000 ) ) ) ) , (  op_dash_sub858 ( ( ( * (  now3291 ) ) .tv_nsec ) , ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3293 = (  op_dash_sub858 ( (  frame_dash_ns3290 ) , (  elapsed_dash_ns3292 ) ) );
    if ( (  cmp876 ( (  sleep_dash_ns3293 ) , (  from_dash_integral269 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp1783 = ( (struct timespec) { .tv_sec = (  from_dash_integral269 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3293 ) } );
        struct timespec *  ts3294 = ( &temp1783 );
        ( ( nanosleep ) ( (  ts3294 ) ,  ( (  null_dash_ptr1784 ) ( ) ) ) );
    }
    struct timespec  temp1789 = ( (  undefined616 ) ( ) );
    struct timespec *  last_dash_sync3295 = ( &temp1789 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic618 ) ( ) ) ,  (  last_dash_sync3295 ) ) );
    (*  tui3289 ) .f_last_dash_sync = ( * (  last_dash_sync3295 ) );
    (*  tui3289 ) .f_fps_dash_count = (  op_dash_add751 ( ( ( * (  tui3289 ) ) .f_fps_dash_count ) , (  from_dash_integral183 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3296 = (  op_dash_add368 ( (  op_dash_mul197 ( (  op_dash_sub858 ( ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3289 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral269 ( 1000 ) ) ) ) , (  op_dash_div856 ( (  op_dash_sub858 ( ( ( ( * (  tui3289 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3289 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral269 ( 1000000 ) ) ) ) ) );
    if ( (  cmp876 ( (  fps_dash_elapsed_dash_ms3296 ) , (  from_dash_integral269 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3289 ) .f_actual_dash_fps = ( ( * (  tui3289 ) ) .f_fps_dash_count );
        (*  tui3289 ) .f_fps_dash_count = (  from_dash_integral183 ( 0 ) );
        (*  tui3289 ) .f_fps_dash_ts = ( ( * (  tui3289 ) ) .f_last_dash_sync );
    }
    return ( Unit_6_Unit );
}

static  void *   cast_dash_ptr1792 (    struct Cell_630 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_6   free1791 (    enum CAllocator_8  dref1953 ,    struct Slice_629  slice1955 ) {
    if (!(  dref1953 == CAllocator_8_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr1792 ) ( ( (  slice1955 ) .f_ptr ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   free_dash_screen1790 (    struct Screen_628 *  screen3394 ) {
    enum CAllocator_8  al3395 = ( ( * (  screen3394 ) ) .f_al );
    ( (  free1791 ) ( (  al3395 ) ,  ( ( * (  screen3394 ) ) .f_current ) ) );
    ( (  free1791 ) ( (  al3395 ) ,  ( ( * (  screen3394 ) ) .f_previous ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_mouse1794 (  ) {
    ( (  print_dash_str162 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   show_dash_cursor1795 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   reset_dash_cursor_dash_position1796 (  ) {
    ( (  print568 ) ( ( (  from_dash_string187 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   disable_dash_raw_dash_mode1797 (    struct Termios_60 *  og_dash_termios3269 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno506 ) ( ) ) ,  ( (  tcsa_dash_flush566 ) ( ) ) ,  ( (  cast_dash_ptr507 ) ( (  og_dash_termios3269 ) ) ) ) );
    return ( Unit_6_Unit );
}

static  enum Unit_6   deinit1793 (    struct Tui_58 *  tui3299 ) {
    ( (  disable_dash_mouse1794 ) ( ) );
    ( (  show_dash_cursor1795 ) ( ) );
    ( (  reset_dash_colors577 ) ( ) );
    ( (  clear_dash_screen578 ) ( ) );
    ( (  reset_dash_cursor_dash_position1796 ) ( ) );
    ( (  disable_dash_raw_dash_mode1797 ) ( ( & ( ( * (  tui3299 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout580 ) ( ) );
    return ( Unit_6_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2030 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2031 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2032 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2031 =  growth_dash_factor2031 ,
        .starting_dash_size2030 =  starting_dash_size2030 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2031 =  growth_dash_factor2031 ,
        .starting_dash_size2030 =  starting_dash_size2030 ,
    };
    struct env3 envinst3 = {
        .growth_dash_factor2031 =  growth_dash_factor2031 ,
        .starting_dash_size2030 =  starting_dash_size2030 ,
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
        .shrink_dash_factor2032 =  shrink_dash_factor2032 ,
    };
    struct env27 envinst27 = {
        .shrink_dash_factor2032 =  shrink_dash_factor2032 ,
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
    struct env40 envinst40 = {
        .envinst30 = envinst30 ,
    };
    struct env42 envinst42 = {
        .envinst40 = envinst40 ,
    };
    struct env45 envinst45 = {
        .envinst42 = envinst42 ,
    };
    struct env48 envinst48 = {
        .envinst45 = envinst45 ,
        .envinst42 = envinst42 ,
    };
    bool  temp53 = ( false );
    bool *  should_dash_resize3279 = ( &temp53 );
    struct env54 envinst54 = {
        .should_dash_resize3279 =  should_dash_resize3279 ,
    };
    struct env55 envinst55 = {
        .should_dash_resize3279 =  should_dash_resize3279 ,
    };
    struct env56 envinst56 = {
        .envinst55 = envinst55 ,
    };
    struct env62 envinst62 = {
        .envinst55 = envinst55 ,
    };
    struct env64 envinst64 = {
        .envinst32 = envinst32 ,
    };
    struct env66 envinst66 = {
        .envinst35 = envinst35 ,
        .envinst23 = envinst23 ,
        .envinst30 = envinst30 ,
    };
    struct env70 envinst70 = {
        .envinst26 = envinst26 ,
        .envinst27 = envinst27 ,
        .envinst4 = envinst4 ,
        .envinst66 = envinst66 ,
        .envinst30 = envinst30 ,
    };
    struct env78 envinst78 = {
        .envinst70 = envinst70 ,
    };
    struct env80 envinst80 = {
        .envinst70 = envinst70 ,
    };
    struct env82 envinst82 = {
        .envinst78 = envinst78 ,
    };
    struct env84 envinst84 = {
        .envinst80 = envinst80 ,
    };
    struct env86 envinst86 = {
        .envinst30 = envinst30 ,
    };
    struct env88 envinst88 = {
        .envinst84 = envinst84 ,
        .envinst14 = envinst14 ,
        .envinst86 = envinst86 ,
    };
    struct env93 envinst93 = {
        .envinst88 = envinst88 ,
    };
    struct env95 envinst95 = {
        .envinst88 = envinst88 ,
    };
    struct env97 envinst97 = {
        .envinst82 = envinst82 ,
    };
    struct env99 envinst99 = {
        .envinst84 = envinst84 ,
    };
    struct env101 envinst101 = {
        .envinst88 = envinst88 ,
    };
    struct env103 envinst103 = {
        .envinst86 = envinst86 ,
    };
    struct env105 envinst105 = {
        .envinst48 = envinst48 ,
    };
    struct env107 envinst107 = {
        .envinst105 = envinst105 ,
        .envinst103 = envinst103 ,
        .envinst101 = envinst101 ,
        .envinst97 = envinst97 ,
        .envinst99 = envinst99 ,
    };
    struct env120 envinst120 = {
        .envinst93 = envinst93 ,
        .envinst95 = envinst95 ,
        .envinst107 = envinst107 ,
        .envinst42 = envinst42 ,
    };
    enum CAllocator_8  al4018 = ( (  idc126 ) ( ) );
    struct envunion129  temp128 = ( (struct envunion129){ .fun = (  struct TextBuf_75  (*) (  struct env64*  ,    enum CAllocator_8  ) )mk130 , .env =  envinst64 } );
    struct TextBuf_75  temp127 = ( temp128.fun ( &temp128.env ,  (  al4018 ) ) );
    struct TextBuf_75 *  tb4019 = ( &temp127 );
    struct Slice_265  args4022 = ( (  get266 ) ( ) );
    if ( (  cmp151 ( ( (  args4022 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        const char*  fname4023 = (  elem_dash_get271 ( (  args4022 ) , (  from_dash_integral0 ( 0 ) ) ) );
        struct envunion279  temp278 = ( (struct envunion279){ .fun = (  enum Unit_6  (*) (  struct env70*  ,    struct TextBuf_75 *  ,    struct Pos_19  ,    struct Pos_19  ,    struct StrView_20  ) )change_dash_no_dash_action280 , .env =  envinst70 } );
        ( temp278.fun ( &temp278.env ,  (  tb4019 ) ,  ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  mk470 ) ( (  from_dash_integral38 ( 0 ) ) ,  (  from_dash_integral38 ( 0 ) ) ) ) ,  ( (  read_dash_contents471 ) ( (  fname4023 ) ,  (  al4018 ) ) ) ) );
    }
    struct Editor_109  temp496 = ( (struct Editor_109) { .f_running = ( true ) , .f_al = (  al4018 ) , .f_pane = ( (  mk497 ) ( (  al4018 ) ,  (  tb4019 ) ) ) , .f_clipboard = ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) , .f_mode = ( (struct EditorMode_114) { .tag = EditorMode_114_Normal_t } ) , .f_msg = ( (struct Maybe_113) { .tag = Maybe_113_None_t } ) } );
    struct Editor_109 *  ed4024 = ( &temp496 );
    struct envunion500  temp499 = ( (struct envunion500){ .fun = (  struct Tui_58  (*) (  struct env54*  ) )mk501 , .env =  envinst54 } );
    struct Tui_58  temp498 = ( temp499.fun ( &temp499.env ) );
    struct Tui_58 *  tui4025 = ( &temp498 );
    struct Screen_628  temp635 = ( (  mk_dash_screen636 ) ( (  tui4025 ) ,  (  al4018 ) ) );
    struct Screen_628 *  screen4026 = ( &temp635 );
    uint32_t  last_dash_redraw_dash_changes4027 = (  from_dash_integral183 ( 0 ) );
    while ( ( ( * (  ed4024 ) ) .f_running ) ) {
        struct env686 envinst686 = {
            .envinst56 = envinst56 ,
            .tui4025 =  tui4025 ,
        };
        struct FunIter_685  temp684 =  into_dash_iter693 ( ( (  from_dash_function694 ) ( ( (struct envunion692){ .fun = (  struct Maybe_688  (*) (  struct env686*  ) )lam695 , .env =  envinst686 } ) ) ) );
        while (true) {
            struct Maybe_688  __cond896 =  next897 (&temp684);
            if (  __cond896 .tag == 0 ) {
                break;
            }
            struct InputEvent_689  ev4029 =  __cond896 .stuff .Maybe_688_Just_s .field0;
            struct InputEvent_689  dref4030 = (  ev4029 );
            if ( dref4030.tag == InputEvent_689_Key_t ) {
                ( (  reset_dash_msg899 ) ( (  ed4024 ) ) );
                struct envunion907  temp906 = ( (struct envunion907){ .fun = (  enum Unit_6  (*) (  struct env120*  ,    struct Editor_109 *  ,    struct Key_124  ) )handle_dash_key908 , .env =  envinst120 } );
                ( temp906.fun ( &temp906.env ,  (  ed4024 ) ,  ( dref4030 .stuff .InputEvent_689_Key_s .field0 ) ) );
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion1281  temp1280 = ( (struct envunion1281){ .fun = (  bool  (*) (  struct env62*  ,    struct Screen_628 *  ) )resize_dash_screen_dash_if_dash_needed1282 , .env =  envinst62 } );
        ( temp1280.fun ( &temp1280.env ,  (  screen4026 ) ) );
        if ( ( (  should_dash_redraw1284 ) ( (  tui4025 ) ) ) ) {
            (*  screen4026 ) .f_requires_dash_full_dash_redraw = ( true );
            ( (  clear_dash_screen1285 ) ( (  screen4026 ) ) );
            ( (  set_dash_screen_dash_fg1294 ) ( (  screen4026 ) ,  ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) ) );
            ( (  set_dash_screen_dash_bg1295 ) ( (  screen4026 ) ,  ( (struct Color_631) { .tag = Color_631_ColorDefault_t } ) ) );
            ( (  render_dash_editor1296 ) ( (  screen4026 ) ,  (  ed4024 ) ) );
            ( (  draw_dash_str1612 ) ( (  screen4026 ) ,  ( ( StrConcat_1613_StrConcat ) ( ( ( StrConcat_1614_StrConcat ) ( ( (  from_dash_string187 ) ( ( "REDRAWS[" ) ,  ( 8 ) ) ) ,  (  last_dash_redraw_dash_changes4027 ) ) ) ,  ( (  from_dash_charlike188 ) ( ( "]" ) ,  ( 1 ) ) ) ) ) ,  (  from_dash_integral38 ( 0 ) ) ,  (  op_dash_sub779 ( ( (  u32_dash_i321298 ) ( ( ( * ( ( * (  screen4026 ) ) .f_tui ) ) .f_height ) ) ) , (  from_dash_integral38 ( 1 ) ) ) ) ) );
            last_dash_redraw_dash_changes4027 = ( (  render_dash_screen1649 ) ( (  screen4026 ) ) );
        }
        ( (  sync1781 ) ( (  tui4025 ) ) );
    }
    ( (  free_dash_screen1790 ) ( (  screen4026 ) ) );
    ( (  deinit1793 ) ( (  tui4025 ) ) );
}
